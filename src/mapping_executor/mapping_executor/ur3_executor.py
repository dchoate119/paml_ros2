import time 
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

from geometry_msgs.msg import PoseStamped
from mapping_interfaces.srv import ExecuteMappingPlan
from moveit_msgs.action import MoveGroup 
from moveit_msgs.msg import (
	MotionPlanRequest,
	Constraints, 
	MoveItErrorCodes,
	PositionConstraint,
	OrientationConstraint,
)
from shape_msgs.msg import SolidPrimitive



class UR3Executor(Node):

	def __init__(self):
		super().__init__("ur3_executor")

		self.action_cb_group = ReentrantCallbackGroup() # ADDED **
		self.service_cb_group = ReentrantCallbackGroup() # ADDED **

		# Moveit action client **ADDED CALLBACK GROUP
		self.action_client = ActionClient(self, MoveGroup, "/move_action", callback_group = self.action_cb_group)

		self.get_logger().info("Waiting for MoveIt action server...")
		self.action_client.wait_for_server()
		self.get_logger().info("Connected to MoveIt!")

		# Service 
		self.srv = self.create_service(
			ExecuteMappingPlan, 
			"execute_mapping_plan",
			self.execute_callback,
			callback_group = self.service_cb_group,
		)

		self.get_logger().info("UR3 Executor Ready !")


	# SERVICE CALLBACK 
	def execute_callback(self, request, response):

		poses = request.planned_poses.poses
		total = len(poses)

		self.get_logger().info(f"Executing {total} poses ...")

		# Loop through each pose 
		for i, pose in enumerate(poses):
			self.get_logger().info(f"[{i}] Moving to pose...")

			success = self.move_to_pose(pose)

			if not success:
				response.success = False
				response.failed_index = i
				response.completed_count = i
				response.message = "Motion failed"
				return response

			# Capture trigger 
			if request.capture_data:
				self.get_logger().info(f"[{i}] Capturing data (**PLACEHOLDER**)")
				time.sleep(1.0) # placeholder for now

		# return response
		response.success = True
		response.completed_count = total
		response.failed_index = -1
		response.message = "Execution complete"

		return response


	# MOVE FUNCTION 
	def move_to_pose(self, pose_msg):

		# Create request
		request = MotionPlanRequest()
		request.group_name = "ur_manipulator"
		request.num_planning_attempts = 10
		request.allowed_planning_time = 5.0
		request.max_velocity_scaling_factor = 0.3
		request.max_acceleration_scaling_factor = 0.3

		# Convert to posestamped 
		pose = PoseStamped()
		pose.header.frame_id = "base_link" # ******CHECK FRAMES ******
		pose.pose = pose_msg

		# Constraints
		constraints = Constraints()

		# Position constraint
		pc = PositionConstraint()
		pc.header.frame_id = "base_link"
		pc.link_name = "tool0"

		primitive = SolidPrimitive()
		primitive.type = SolidPrimitive.SPHERE
		primitive.dimensions = [0.01]

		pc.constraint_region.primitives.append(primitive)
		pc.constraint_region.primitive_poses.append(pose.pose)
		pc.weight = 1.0

		# Orientation constraints
		oc = OrientationConstraint()
		oc.header.frame_id = "base_link"
		oc.link_name = "tool0"
		oc.orientation = pose.pose.orientation
		oc.absolute_x_axis_tolerance = 0.5
		oc.absolute_y_axis_tolerance = 0.5
		oc.absolute_z_axis_tolerance = 0.5
		oc.weight = 0.5

		constraints.position_constraints.append(pc)
		constraints.orientation_constraints.append(oc)

		request.goal_constraints.append(constraints)

		# Action goal 
		goal = MoveGroup.Goal()
		goal.request = request
		goal.planning_options.plan_only = False 

		future = self.action_client.send_goal_async(goal)
		# rclpy.spin_until_future_complete(self, future)
		# NEW METHOD ****
		while not future.done():
			time.sleep(0.05)

		goal_handle = future.result()
		if goal_handle is None or not goal_handle.accepted:
			self.get_logger().error("Goal rejected")
			return False

		result_future = goal_handle.get_result_async()
		# rclpy.spin_until_future_complete(self, result_future)
		while not result_future.done():
			time.sleep(0.05)

		result = result_future.result()
		if result is None:
			self.get_logger().error("No result from MoveIt")
			return False

		if result.result.error_code.val == MoveItErrorCodes.SUCCESS:
			self.get_logger().info("Pose reached")
			return True 
		else:
			self.get_logger().error(
				f"Move failed: {result.result.error_code.val}"
			)
			return False


# MAIN 
def main(args=None):
	rclpy.init(args=args)

	ur3e = UR3Executor()
	# NEW METHOD***
	executor = MultiThreadedExecutor(num_threads=2)
	executor.add_node(ur3e)

	try:
		# rclpy.spin(ur3e) # Removing for now
		executor.spin()
	except KeyboardInterrupt:
		pass 

	finally:
		executor.shutdown()
		ur3e.destroy_node()
		rclpy.shutdown()


if __name__ == "__main__":
	main()