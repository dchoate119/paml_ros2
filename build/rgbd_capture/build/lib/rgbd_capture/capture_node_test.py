#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, DurabilityPolicy


from sensor_msgs.msg import Image
from geometry_msgs.msg import TransformStamped 

import tf2_ros
import cv2
from cv_bridge import CvBridge

import os 
import time

class RGBDCapture(Node):
	"""
	Capture node for RGBD data 
	"""

	def __init__(self):
		super().__init__('rgbd_capture')

		qos = QoSProfile(depth=10)
		qos.reliability = ReliabilityPolicy.BEST_EFFORT
		qos.durability = DurabilityPolicy.VOLATILE

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

		self.get_logger().info("RGBD Capture Node RTR")


	def rgb_callback(self, msg):
		self.latest_rgb = msg
		self.get_logger().info("RGB received")

	def depth_callback(self, msg):
		self.latest_depth = msg
		self.get_logger().info("Depth received")


	def capture(self):
		if self.latest_rgb is None or self.latest_depth is None:
			self.get_logger().warn("No data yet")
			return 

		try:
			# Convert images 
			rgb_img = self.bridge.imgmsg_to_cv2(self.latest_rgb, desired_encoding='bgr8')
			depth_img = self.bridge.imgmsg_to_cv2(self.latest_depth, desired_encoding='passthrough')

			# GET TF ****** NEED TO ADJUST **********
			transform: TransformStamped = self.tf_buffer.lookup_transform(
				'camera_link', 		# Target frame
				'camera_color_optical_frame',		# Source frame
				rclpy.time.Time())

			# save the images
			rgb_path = f"{self.save_dir}/rgb_{self.frame_id}.png"
			depth_path = f"{self.save_dir}/depth_{self.frame_id}.png"

			cv2.imwrite(rgb_path, rgb_img)
			cv2.imwrite(depth_path, depth_img)

			# Save the pose
			pose_path = f"{self.save_dir}/pose_{self.frame_id}.txt"
			with open(pose_path, 'w') as f:
				t = transform.transform.translation
				q = transform.transform.rotation
				f.write(f"{t.x} {t.y} {t.z} {q.x} {q.y} {q.z} {q.w}\n")

			self.get_logger().info(f"Saved frame {self.frame_id}")
			self.frame_id += 1

		except Exception as e:
			self.get_logger().error(f"Capture failed: {e}")

		self.latest_rgb = None
		self.latest_depth = None


# def main(args=None):

# 	rclpy.init(args=args)
# 	rcap = RGBDCapture()

# 	try:
# 		while rclpy.ok():
# 			rclpy.spin_once(rcap)
# 			# TEMPORARY ********
# 			if input("Press 'enter' to capture frame...") == "":
# 				rcap.capture()

# 	except KeyboardInterrupt:
# 		pass

# 	rcap.destroy_node()
# 	rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    node = RGBDCapture()

    target_frames = 2

    try:
        while rclpy.ok() and node.frame_id < target_frames:
            rclpy.spin_once(node)

            if node.latest_rgb is not None and node.latest_depth is not None:
                node.capture()
                time.sleep(1.0)

    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
	main()