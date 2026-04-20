import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Image
import tf2_ros

import numpy as np
import open3d as o3d
import cv2
from cv_bridge import CvBridge
from sensor_msgs.msg import PointCloud2
import sensor_msgs_py.point_cloud2 as pc2
from std_msgs.msg import Header



import time
import os




class MapBuilder(Node):

	def __init__(self):
		super().__init__('map_builder')

		self.bridge = CvBridge()

		# Subscribers 
		self.rgb_sub = self.create_subscription(
			Image,
			'/camera/camera/color/image_raw',
			self.rgb_callback,
			10)

		self.depth_sub = self.create_subscription(
			Image, 
			'/camera/camera/depth/image_rect_raw',
			self.depth_callback,
			10)

		self.pc_pub = self.create_publisher(
			PointCloud2,
			'/map_pointcloud',
			10
		)

		# Storage 
		self.latest_rgb = None
		self.latest_depth = None

		# TF
		self.tf_buffer = tf2_ros.Buffer()
		self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

		# MAP
		self.map_pcd = o3d.geometry.PointCloud()

		# Intrinsics
		# SCALED: calculated from tests
		self.intrinsics = o3d.camera.PinholeCameraIntrinsic(
			848, 480,
			600.0, 600.0,
			424.0, 240.0
		)

		# TIMING - DEMO FOR NOW
		self.last_capture_time = 0
		self.capture_interval = 1.0 # seconds between capture - for demo
		self.last_save_time = 0
		self.save_interval = 5.0 # seconds
		self.save_dir = "data/maps"
		os.makedirs(self.save_dir, exist_ok=True)

		self.get_logger().info("Map Builder RTR")


	# CALLBACKS

	def rgb_callback(self, msg):
		"""
		callback fcn for rgb image
		"""
		self.latest_rgb = msg
		self.map_demo()

	def depth_callback(self, msg):
		"""
		callback fcn for depth image
		"""
		self.latest_depth = msg
		self.map_demo()


	# MAP BUILDING PIPELINE 
	def map_demo(self):
		"""
		Map building pipeline demo
		PARAMS: assuming constant transform 
		Relatively simple point cloud stacking 
		"""

		if time.time() - self.last_capture_time < self.capture_interval:
			return

		if self.latest_rgb is None or self.latest_depth is None:
			return 

		try:
			# Convert images 
			color = self.bridge.imgmsg_to_cv2(self.latest_rgb, desired_encoding='bgr8')
			depth = self.bridge.imgmsg_to_cv2(self.latest_depth, desired_encoding='passthrough')
			# COlor conversion
			# color = cv2.cvtColor(color, cv2.COLOR_BGR2RGB)

			# Convert to meters float32
			depth = depth.astype(np.float32) / 1000.0

			# Force clean memory
			depth = np.array(depth, dtype=np.float32, copy=True)

			# Resize
			h, w = depth.shape
			color = cv2.resize(color, (w, h))

			# # DEBUG
			# self.get_logger().info(f"Depth flags: {depth.flags}")
			# depth = np.array(depth, copy=True)
			# self.get_logger().info(f"Depth OWNDATA: {depth.flags['OWNDATA']}")



			color_o3d = o3d.geometry.Image(color)
			depth_o3d = o3d.geometry.Image(depth)

			# Create RGBD
			rgbd = o3d.geometry.RGBDImage.create_from_color_and_depth(
				color_o3d,
				depth_o3d,
				depth_scale = 1.0,
				depth_trunc = 5.0,
				convert_rgb_to_intensity=False
			)

			# Point cloud
			pcd = o3d.geometry.PointCloud.create_from_rgbd_image(
				rgbd,
				self.intrinsics
			)

			# FLIP IT
			flip = np.array([
				[1, 0, 0, 0],
				[0, -1, 0, 0],
				[0, 0, -1, 0],
				[0, 0, 0, 1]
			])
			pcd.transform(flip)

			# Get TF (world --> camera)
			if not self.tf_buffer.can_transform('camera_link', self.latest_rgb.header.frame_id, rclpy.time.Time()):
				self.get_logger().warn("TF not ready")
				return
			tf = self.tf_buffer.lookup_transform(
				'camera_link',
				self.latest_rgb.header.frame_id,
				rclpy.time.Time()
			)

			T = self.transform_to_matrix(tf)
			pcd.transform(T)

			# Accumulate 
			self.map_pcd += pcd 
			self.map_pcd = self.map_pcd.voxel_down_sample(0.01)

			self.get_logger().info(f"MAP SIZE: {len(self.map_pcd.points)} points")

			msg = self.o3d_to_pointcloud2(self.map_pcd, 'camera_link')
			if msg is not None:
				self.pc_pub.publish(msg)

		except Exception as e:
			self.get_logger().warn(f"Processing failed: {e}")

		# RESET 
		self.latest_rgb = None
		self.latest_depth = None
		self.last_capture_time = time.time()

		# SAVE MAP 
		now = time.time()
		if now - self.last_save_time > self.save_interval:
			filename = f"{self.save_dir}/map_{int(now)}.pcd"

			o3d.io.write_point_cloud(filename, self.map_pcd)
			# self.get_logger().info(f"Saved map: {filename}")
			self.last_save_time = now

	def transform_to_matrix(self, tf):
		"""
		Building a transformation matrix from a tf
		Input: tf
		Output: 4x4 transformation matrix
		"""

		t = tf.transform.translation
		q = tf.transform.rotation

		# Convert quat --> rotmat
		R = o3d.geometry.get_rotation_matrix_from_quaternion(
			[q.w, q.x, q.y, q.z]
		)

		T = np.eye(4)
		T[:3, :3] = R
		T[0,3] = t.x
		T[1,3] = t.y
		T[2,3] = t.z

		return T


	def o3d_to_pointcloud2(self, pcd, frame_id):
		"""
		Converting an open3d cloud to a pointcloud for rviz
		Input: open3d cloud, frame id
		Output: point cloud
		"""
		points = np.asarray(pcd.points)
		colors = np.asarray(pcd.colors)

		if len(points) == 0:
			return None

		# Convert colors to uint8
		colors = (colors * 255).astype(np.uint8)

		data = []
		xyz = points.astype(np.float32)

		rgb = (colors[:,0].astype(np.uint32) << 16) | \
			(colors[:,1].astype(np.uint32) << 8)  | \
			(colors[:,2].astype(np.uint32))

		cloud = np.zeros(points.shape[0], dtype=[
			('x', 'f4'), ('y', 'f4'), ('z', 'f4'), ('rgb', 'u4')
		])

		cloud['x'] = xyz[:,0]
		cloud['y'] = xyz[:,1]
		cloud['z'] = xyz[:,2]
		cloud['rgb'] = rgb

		header = Header()
		header.stamp = self.get_clock().now().to_msg()
		header.frame_id = frame_id

		fields = [
			pc2.PointField(name='x', offset=0, datatype=pc2.PointField.FLOAT32, count=1),
			pc2.PointField(name='y', offset=4, datatype=pc2.PointField.FLOAT32, count=1),
			pc2.PointField(name='z', offset=8, datatype=pc2.PointField.FLOAT32, count=1),
			pc2.PointField(name='rgb', offset=12, datatype=pc2.PointField.UINT32, count=1),
		]

		return pc2.create_cloud(header, fields, cloud)


def main(args=None):
	rclpy.init(args=args)
	node = MapBuilder()
	rclpy.spin(node)
	node.destroy_node()
	rclpy.shutdown()

