import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Image, PointCloud2
from std_msgs.msg import Header
import sensor_msgs_py.point_cloud2 as pc2

import tf2_ros

import numpy as np
import open3d as o3d
import cv2
from cv_bridge import CvBridge

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
		self.process()

	def depth_callback(self, msg):
		"""
		callback fcn for depth image
		"""
		self.latest_depth = msg
		self.process()


	def process(self):

		if time.time() - self.last_capture_time < self.capture_interval:
			return

		if self.latest_rgb is None or self.latest_depth is None:
			return

		try:
			# --- Convert images ---
			color = self.bridge.imgmsg_to_cv2(
				self.latest_rgb, desired_encoding='bgr8')
			depth = self.bridge.imgmsg_to_cv2(
				self.latest_depth, desired_encoding='passthrough')

			# Convert depth (mm → meters)
			depth = depth.astype(np.float32) / 1000.0
			depth = np.array(depth, dtype=np.float32, copy=True)

			# Resize RGB to match depth
			h, w = depth.shape
			color = cv2.resize(color, (w, h))

			# Open3D format
			color_o3d = o3d.geometry.Image(color)
			depth_o3d = o3d.geometry.Image(depth)

			# RGBD
			rgbd = o3d.geometry.RGBDImage.create_from_color_and_depth(
				color_o3d,
				depth_o3d,
				depth_scale=1.0,
				depth_trunc=5.0,
				convert_rgb_to_intensity=False
		    )

			# Point cloud (camera frame)
			pcd = o3d.geometry.PointCloud.create_from_rgbd_image(
				rgbd,
				self.intrinsics
			)

			# ==========================
			# TF: camera → base_link
			# ==========================
			cam_frame = self.latest_rgb.header.frame_id

			if not self.tf_buffer.can_transform(
				'base_link',
				cam_frame,
				rclpy.time.Time()
			):
				self.get_logger().warn("TF not ready")
				return

			tf = self.tf_buffer.lookup_transform(
				'base_link',
				cam_frame,
				rclpy.time.Time()
			)

			T = self.transform_to_matrix(tf)

			# Transform into world frame
			pcd.transform(T)

			# ==========================
			# ACCUMULATE MAP
			# ==========================
			self.map_pcd += pcd
			self.map_pcd = self.map_pcd.voxel_down_sample(0.01)

			self.get_logger().info(
				f"Map points: {len(self.map_pcd.points)}")

			# ==========================
			# PUBLISH (base_link frame)
			# ==========================
			msg = self.o3d_to_pointcloud2(
				self.map_pcd,
				'base_link'
			)

			if msg:
				self.pc_pub.publish(msg)

		except Exception as e:
			self.get_logger().warn(f"Processing failed: {e}")

		# Reset
		self.latest_rgb = None
		self.latest_depth = None
		self.last_capture_time = time.time()

		# Save periodically
		now = time.time()
		if now - self.last_save_time > self.save_interval:
			filename = f"{self.save_dir}/map_{int(now)}.pcd"
			o3d.io.write_point_cloud(filename, self.map_pcd)
			self.last_save_time = now


	# ======================
	# HELPERS
	# ======================

	def transform_to_matrix(self, tf):

		t = tf.transform.translation
		q = tf.transform.rotation

		R = o3d.geometry.get_rotation_matrix_from_quaternion(
			[q.w, q.x, q.y, q.z]
		)

		T = np.eye(4)
		T[:3, :3] = R
		T[0, 3] = t.x
		T[1, 3] = t.y
		T[2, 3] = t.z

		return T


	def o3d_to_pointcloud2(self, pcd, frame_id):

		points = np.asarray(pcd.points)
		colors = np.asarray(pcd.colors)

		if len(points) == 0:
			return None

		colors = (colors * 255).astype(np.uint8)

		xyz = points.astype(np.float32)

		rgb = (colors[:, 0].astype(np.uint32) << 16) | \
			(colors[:, 1].astype(np.uint32) << 8) | \
			(colors[:, 2].astype(np.uint32))

		cloud = np.zeros(points.shape[0], dtype=[
			('x', 'f4'), ('y', 'f4'), ('z', 'f4'), ('rgb', 'u4')
		])

		cloud['x'] = xyz[:, 0]
		cloud['y'] = xyz[:, 1]
		cloud['z'] = xyz[:, 2]
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