import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, DurabilityPolicy, HistoryPolicy, qos_profile_sensor_data


from sensor_msgs.msg import Image
from geometry_msgs.msg import TransformStamped 

import tf2_ros
import cv2
from cv_bridge import CvBridge

import os 
import time

from mapping_interfaces.srv import CaptureFrame



class RGBDCapture(Node):
	"""
	Capture node for rgbd data
	"""
	def __init__(self):
		super().__init__('rgbd_capture')

		# qos = QoSProfile(depth=10)
		# qos.reliability = ReliabilityPolicy.BEST_EFFORT
		# qos.durability = DurabilityPolicy.VOLATILE

		# qos = qos_profile_sensor_data
		qos = QoSProfile(
			reliability=ReliabilityPolicy.RELIABLE,
			history=HistoryPolicy.KEEP_LAST,
			depth=1,
			durability=DurabilityPolicy.VOLATILE
		)

		# Subscribers 
		self.rgb_sub = self.create_subscription(
			Image, '/camera/camera/color/image_raw', self.rgb_callback, qos)

		self.depth_sub = self.create_subscription(
			Image, '/camera/camera/depth/image_rect_raw', self.depth_callback, qos)

		# Storage 
		self.latest_rgb = None
		self.latest_depth = None

		# TF
		self.tf_buffer = tf2_ros.Buffer()
		self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

		# CV Bridge
		self.bridge = CvBridge()

		# Save directory 
		self.save_dir = 'data'
		os.makedirs(self.save_dir,exist_ok=True)

		self.frame_id = 0

		self.capture_srv = self.create_service(
			CaptureFrame,
			'capture_frame',
			self.capture_callback
		)

		self.get_logger().info("RGBD Capture Node RTR")



	def rgb_callback(self, msg):
		# try:
		# 	self.latest_rgb = msg
		# 	print("RGB CALLBACK HIT")
		# except Exception as e:
		# 	print("RGB CALLBACK ERROR:", e)
		# print("RGB CALLBACK HIT")
		self.latest_rgb = msg
		# self.get_logger().info("RGB received")

	def depth_callback(self, msg):
		self.latest_depth = msg
		# self.get_logger().info("Depth received")


	def capture_callback(self, request, response):

		if self.latest_rgb is None or self.latest_depth is None:
			response.success = False
			response.message = "No data yet"
			return response

		try:
			# ---- TF (IMPORTANT: change this) ----
			transform: TransformStamped = self.tf_buffer.lookup_transform(
				'base_link',                     # <-- CHANGE THIS
				'camera_color_optical_frame',    # <-- keep this
				rclpy.time.Time()
			)

			# ---- RETURN RAW ROS MESSAGES ----
			response.rgb = self.latest_rgb
			response.depth = self.latest_depth
			response.camera_pose = transform

			response.success = True
			response.message = "Capture successful"

		except Exception as e:
			response.success = False
			response.message = str(e)

		return response



def main(args=None):
	rclpy.init(args=args)
	node = RGBDCapture()

	try:
		rclpy.spin(node)
	except KeyboardInterrupt:
		pass

	node.destroy_node()
	rclpy.shutdown()