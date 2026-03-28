import rclpy
from rclpy.node import Node
import numpy as np 
import time

from geometry_msgs.msg import Pose, PoseArray
from mapping_interfaces.srv import ExecuteMappingPlan

# from tf_transformations import quaternion_from_euler


class MappingExecutor(Node):
	def __init__(self):
		super().__init__('mapping_executor')

		# Parameters 
		self.srv = self.create_service(
			ExecuteMappingPlan,
			'execute_mapping_plan',
			self.execute_callback
		)

		self.get_logger().info('Mapping Executor ready!')

	def execute_callback(self, request, response):
		"""
		Callback function to execute trajectory
		"""

		poses = request.planned_poses.poses
		capture = request.capture_data

		# Troubleshooting
		if len(poses) == 0:
			response.success = False
			response.message = "No poses received"
			response.completed_count = 0
			response.failed_index = -1
			return response

		for i, pose in enumerate(poses):

			# Simulate robot motion 
			self.move_robot(pose,i)
			time.sleep(1.0)

			# Simulate capture
			self.capture_data(i)

		# Success
		response.success = True
		response.message = "Execution completed"
		response.completed_count = len(poses)
		response.failed_index = -1

		self.get_logger().info("Execution finished successfully")

		return response 




	def move_robot(self, pose,i):
		"""
		Will use moveit to move robot
		Simulating movement for now
		"""
		self.get_logger().info(f"[{i}] robot moving to pose {pose}")


	def capture_data(self,i):
		"""
		Will trigger data capture node
		Simulating for now
		"""
		self.get_logger().info(f"[{i}] capturing frame...")



def main(args=None):
	try: 
		with rclpy.init(args=args):
			me = MappingExecutor()

			rclpy.spin(me)

	except (KeyboardInterrupt, ExternalShutdownException):
		pass

if __name__ == "__main__":
	main()