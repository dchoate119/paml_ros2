import rclpy
from rclpy.node import Node
import numpy as np 
import time
from rclpy.executors import ExternalShutdownException, MultiThreadedExecutor

from geometry_msgs.msg import Pose, PoseArray, PoseStamped
from mapping_interfaces.srv import ExecuteMappingPlan

from rclpy.action import ActionClient
from moveit_msgs.action import MoveGroup


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

		self.move_group_client = ActionClient(self, MoveGroup, '/move_action')

		self.move_group_client.wait_for_server()

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
			success = self.move_robot(pose,i)

			# handle loop failure
			if not success:
				response.success = False
				response.message = f"Failed at pose {i}"
				response.completed_count = i
				response.failed_index = i
				return response

			# time.sleep(1.0) # Remove later - accounted for in move function wait=True

			if capture:
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
		Input: pose, i (pose index)
		Output: physical (or simualted) robot movement
		"""
		self.get_logger().info(f"[{i}] Robot moving to pose")

		# # Wait for moveit action server 
		# if not self.move_group_client.wait_for_server(timeout_sec=5.0):
		# 	self.get_logger().error("MoveIt action server not available")
		# 	return False

		# Create goal messgae
		goal_msg = MoveGroup.Goal()

		# goal setup
		goal_msg.request.group_name = "ur_manipulator"

		# Convert pose 
		pose_stamped = PoseStamped()
		pose_stamped.header.frame_id = "base_link"
		pose_stamped.pose = pose 

		# goal constraints

		# ADD CONSTRAINTS ****
		from moveit_msgs.msg import Constraints, PositionConstraint, OrientationConstraint
		from shape_msgs.msg import SolidPrimitive

		constraints = Constraints()

		# Position constraint 
		pos_constraint = PositionConstraint()
		pos_constraint.header.frame_id = "base_link"
		pos_constraint.link_name = "tool0"   # end effector (UR3)

		# Define small box around target
		box = SolidPrimitive()
		box.type = SolidPrimitive.BOX
		box.dimensions = [0.01, 0.01, 0.01]

		pos_constraint.constraint_region.primitives.append(box)
		pos_constraint.constraint_region.primitive_poses.append(pose_stamped.pose)

		pos_constraint.weight = 1.0


		# ADD TO GOAL
		constraints.position_constraints.append(pos_constraint)
		# constraints.orientation_constraints.append(ori_constraint)

		goal_msg.request.goal_constraints.append(constraints)


		# *******


		# send goal
		self.get_logger().info(f"[{i}] Sending MoveIt goal...") # DEBUG
		send_goal_future = self.move_group_client.send_goal_async(goal_msg)
		self.get_logger().info(f"[{i}] Waiting for goal response...") # DEBUG
		rclpy.spin_until_future_complete(self, send_goal_future)
		self.get_logger().info(f"[{i}] Goal response future completed")
		goal_handle = send_goal_future.result()

		if goal_handle is None:
			self.get_logger().error(f"[{i}] Goal handle is None")
			return False


		if not goal_handle.accepted:
			self.get_logger().error(f"[{i}] Goal rejected")
			return False

		self.get_logger().info(f"[{i}] Goal accepted")


		# Wait for result
		result_future = goal_handle.get_result_async()
		self.get_logger().info(f"[{i}] Waiting for action result...")
		# while not result_future.done():
    	# 	time.sleep(0.01)
		rclpy.spin_until_future_complete(self, result_future)

		self.get_logger().info(f"[{i}] Result future completed")
		result = result_future.result()

		if result is None:
			self.get_logger().error(f"[{i}] No result returned")
			return False


		self.get_logger().info(f"[{i}] Motion complete")
		return True


	def capture_data(self,i):
		"""
		Will trigger data capture node
		Simulating for now
		"""
		self.get_logger().info(f"[{i}] capturing frame...")



def main(args=None):
	rclpy.init(args=args)

	me = MappingExecutor()

	executor = MultiThreadedExecutor()
	executor.add_node(me)

	try:
		executor.spin()

	except (KeyboardInterrupt, ExternalShutdownException):
		pass

	finally:
		me.destroy_node()
		rclpy.shutdown()


if __name__ == "__main__":
	main()