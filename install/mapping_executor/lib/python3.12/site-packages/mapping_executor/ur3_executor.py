import time 
import rclpy
import numpy as np
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

from geometry_msgs.msg import PoseStamped, Pose
from mapping_interfaces.srv import ExecuteMappingPlan, CaptureFrame
from moveit_msgs.action import MoveGroup 
from moveit_msgs.msg import (
	MotionPlanRequest,
	Constraints, 
	MoveItErrorCodes,
	PositionConstraint,
	OrientationConstraint,
	JointConstraint,
	PlanningScene,
	CollisionObject,
	RobotState,
)
from shape_msgs.msg import SolidPrimitive

from cv_bridge import CvBridge
import cv2



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

		# Rgbd capture service
		self.capture_client = self.create_client(CaptureFrame, 'capture_frame')
		self.get_logger().info("Waiting for capture service ...")
		while not self.capture_client.wait_for_service(timeout_sec=1.0):
			self.get_logger().info("Waiting for capture (still) ...")
		self.get_logger().info("Connceted to capture service :)")

		# Service 
		self.srv = self.create_service(
			ExecuteMappingPlan, 
			"execute_mapping_plan",
			self.execute_callback,
			callback_group = self.service_cb_group,
		)

		# Import planning scene 
		self.scene_pub = self.create_publisher(PlanningScene, '/planning_scene', 10)

		self.get_logger().info("UR3 Executor Ready !")


	# SERVICE CALLBACK 
	def execute_callback(self, request, response):

		poses = request.planned_poses.poses
		total = len(poses)

		self.get_logger().info(f"Executing {total} poses ...")

		# ADD TABLE COLLISION ****
		self.add_table_collision()
		time.sleep(1.0)

		# # ENFORCE STARTING POSITION 
		# success = self.move_to_start_joint_config()
		# if not success:
		# 	response.success = False
		# 	response.failed_index = -1
		# 	response.completed_count = 0
		# 	response.message = "Failed to reach start position"
		# 	return response

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

			# Capture trigger =================
			if request.capture_data:
				self.capture_trigger(i)

			# break # ONLY DO FIRST POSE FOR NOW 

		# return response
		response.success = True
		response.completed_count = total
		response.failed_index = -1
		response.message = "Execution complete"

		return response

	def add_table_collision(self):

		self.get_logger().info("Adding table collision object")

		table = CollisionObject()
		table.id = "table"
		table.header.frame_id = "base_link"

		# Define table shape
		primitive = SolidPrimitive()
		primitive.type = SolidPrimitive.BOX

		# ---- SET THESE TO MATCH YOUR TABLE ----
		primitive.dimensions = [1.0, 1.0, 0.1]  # x, y, thickness

		pose = Pose()
		pose.position.x = 0.0   # where table is
		pose.position.y = -0.25
		pose.position.z = -0.05  # half thickness BELOW z=0

		
		pose.orientation.w = 1.0
		# pose.orientation.x = 0.0
		# pose.orientation.y = 0.0
		# pose.orientation.z = -0.7071
		# pose.orientation.w = 0.7071


		table.primitives.append(primitive)
		table.primitive_poses.append(pose)
		table.operation = CollisionObject.ADD

		# Wrap in planning scene
		scene = PlanningScene()
		scene.world.collision_objects.append(table)
		scene.is_diff = True

		self.scene_pub.publish(scene)


	def move_to_start_joint_config(self):
		"""
		Move robot to a known starting joint configuration
		"""
		self.get_logger().info("Moving to start joint configuration...")

		# request.start_state = RobotState()
		# request.start_state.is_diff = True

		request = MotionPlanRequest()

		request.start_state.is_diff = True # We'll troubleshoot this

		request.group_name = "ur_manipulator"
		request.num_planning_attempts = 10
		request.allowed_planning_time = 5.0
		request.max_velocity_scaling_factor = 0.1
		request.max_acceleration_scaling_factor = 0.1

		# ---- DEFINE YOUR START JOINTS HERE ----	
		t0 = np.pi * 3/2
		start_joints = [0.0, -1.57, 0.0, t0, 0.0, -1.29154]



		constraints = Constraints()

		joint_names = [
			"shoulder_pan_joint",
			"shoulder_lift_joint",
			"elbow_joint",
			"wrist_1_joint",
			"wrist_2_joint",
			"wrist_3_joint",
		]

		for name, val in zip(joint_names, start_joints):
			jc = JointConstraint()
			jc.joint_name = name
			jc.position = val
			jc.tolerance_above = 0.01
			jc.tolerance_below = 0.01
			jc.weight = 1.0
			constraints.joint_constraints.append(jc)

		request.goal_constraints.append(constraints)

		goal = MoveGroup.Goal()
		goal.request = request
		goal.planning_options.plan_only = False

		future = self.action_client.send_goal_async(goal)
		while not future.done():
			time.sleep(0.05)

		goal_handle = future.result()
		if goal_handle is None or not goal_handle.accepted:
			self.get_logger().error("Start pose goal rejected")
			return False

		result_future = goal_handle.get_result_async()
		while not result_future.done():
			time.sleep(0.05)

		result = result_future.result()
		if result is None:
			self.get_logger().error("No result from MoveIt (start pose)")
			return False

		if result.result.error_code.val == MoveItErrorCodes.SUCCESS:
			self.get_logger().info("Start position reached")
			return True
		else:
			self.get_logger().error("Failed to reach start position")
			return False

	# MOVE FUNCTION 
	def move_to_pose(self, pose_msg):

		# Create request
		request = MotionPlanRequest()
		request.group_name = "ur_manipulator"
		request.num_planning_attempts = 100
		request.allowed_planning_time = 5.0
		request.max_velocity_scaling_factor = 0.1
		request.max_acceleration_scaling_factor = 0.1

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
		primitive.dimensions = [0.1]

		pc.constraint_region.primitives.append(primitive)
		pc.constraint_region.primitive_poses.append(pose.pose)
		pc.weight = 1.0

		# Orientation constraints
		oc = OrientationConstraint()
		oc.header.frame_id = "base_link"
		oc.link_name = "tool0"
		oc.orientation = pose.pose.orientation
		oc.absolute_x_axis_tolerance = 0.05
		oc.absolute_y_axis_tolerance = 0.05
		oc.absolute_z_axis_tolerance = 0.05
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

	def capture_trigger(self, i):
		"""
		Once rgbd capture is triggers 
		"""
		self.get_logger().info(f"[{i}] Capturing data")
		# Let robot settle
		time.sleep(0.5) # placeholder for now
		req = CaptureFrame.Request()
		future = self.capture_client.call_async(req)

		while not future.done():
			time.sleep(0.05)

		result = future.result()

		if result is None or not result.success:
			self.get_logger().error(f"Capture failed: {result.message if result else 'No response'}")
			response.success = False
			response.failed_index = i
			response.completed_count = i
			response.message = "Capture failed"
			return response

		self.get_logger().info(f"[{i}] Capture successful")
		bridge = CvBridge()

		rgb_img = bridge.imgmsg_to_cv2(result.rgb, desired_encoding='bgr8')
		depth_img = bridge.imgmsg_to_cv2(result.depth, desired_encoding='passthrough')

		cv2.imwrite(f"data/rgb_{i}.png", rgb_img)
		cv2.imwrite(f"data/depth_{i}.png", depth_img)




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