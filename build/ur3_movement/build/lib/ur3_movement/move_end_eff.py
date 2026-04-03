#!/usr/bin/env python3
import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from geometry_msgs.msg import Vector3, PoseStamped
from moveit_msgs.action import MoveGroup
from moveit_msgs.msg import MotionPlanRequest, JointConstraint, Constraints
from moveit_msgs.msg import MoveItErrorCodes, PositionConstraint, OrientationConstraint
from shape_msgs.msg import SolidPrimitive




# ====================================================================
#  Paste your 3 positions here
# ====================================================================
 
# POSITION_1 = [0.0, -1.5707, 0.0, -1.5707, 0.0, 0.0]
# POSITION_2 = [0.0, -1.5707, 0.0, -1.5707, 0.0, 0.0]
# POSITION_3 = [0.0, -1.5707, 0.0, -1.5707, 0.0, 0.0]

POSITION_1 = [0.0, -1.57, 1.2, -1.57, 0.0, 0.0]
POSITION_2 = [0.5, -1.2, 1.0, -1.5, 0.5, 0.0]
POSITION_3 = [-0.5, -1.8, 1.3, -1.4, -0.5, 0.3]
POS_1 = [0.4, 0.0, 0.3]
POS_2 = [0.3, 0.2, 0.4]
POS_3 = [0.3, -0.2, 0.35]




# Double check joint names within RVIZ
JOINT_NAMES = [
    "shoulder_pan_joint",
    "shoulder_lift_joint",
    "elbow_joint",
    "wrist_1_joint",
    "wrist_2_joint",
    "wrist_3_joint",
]
 

class RobotMover(Node):

    def __init__(self):
        super().__init__("robot_mover")
        self.action_client = ActionClient(self, MoveGroup, "/move_action")
        print("Connecting to robot...")
        self.action_client.wait_for_server()
        print("Connected!\n")

    def move_to(self, name, xyz):
        print(f"Moving to {name}...")

        # Create request
        request = MotionPlanRequest()
        request.group_name = "ur_manipulator"
        request.num_planning_attempts = 10
        request.allowed_planning_time = 5.0
        request.max_velocity_scaling_factor = 0.3
        request.max_acceleration_scaling_factor = 0.3

        # Pose goal 
        pose = PoseStamped()
        pose.header.frame_id = "base_link"
        pose.pose.position.x = xyz[0]
        pose.pose.position.y = xyz[1]
        pose.pose.position.z = xyz[2]

        # Simple orientation (pointing down-ish)
        pose.pose.orientation.x = 0.0
        pose.pose.orientation.y = 1.0
        pose.pose.orientation.z = 0.0
        pose.pose.orientation.w = 0.0

        # Add constraints
        constraints = Constraints()
        # Position constraint
        pc = PositionConstraint()
        pc.header.frame_id = "base_link"
        pc.link_name = "tool0" # CHECK
        primitive = SolidPrimitive()
        primitive.type = SolidPrimitive.SPHERE
        primitive.dimensions = [0.01] # 1cm tolerance 

        pc.constraint_region.primitives.append(primitive)
        pc.constraint_region.primitive_poses.append(pose.pose)
        pc.weight = 1.0

        # Orientation constraint 
        oc = OrientationConstraint()
        oc.header.frame_id = "base_link"
        oc.link_name = "tool0" # CHECK
        oc.orientation = pose.pose.orientation
        oc.absolute_x_axis_tolerance = 0.5
        oc.absolute_y_axis_tolerance = 0.5
        oc.absolute_z_axis_tolerance = 0.5
        oc.weight = 0.5

        # Add to request
        constraints.position_constraints.append(pc)
        constraints.orientation_constraints.append(oc)

        request.goal_constraints.append(constraints)

        # Action goal 
        goal = MoveGroup.Goal()
        goal.request = request
        goal.planning_options.plan_only = False

        future = self.action_client.send_goal_async(goal)
        rclpy.spin_until_future_complete(self, future) # Possible add timeout

        # Determine if goal was handled
        goal_handle = future.result()
        if goal_handle is None or not goal_handle.accepted:
            print(f"{name} goal rejected\n")
            return

        result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future) # possibly add timeout 

        result = result_future.result()
        if result is None:
            print(f"{name} failed: no result\n")
            return

        if result.result.error_code.val == MoveItErrorCodes.SUCCESS:
            print(f"Reached {name}.\n")
        else:
            print(f"Failed to reach {name}. Error code: {result_future.result().result.error_code.val}\n")





def main():
    rclpy.init()
    robot = RobotMover()
    robot.move_to("Position 1", POS_1)
    time.sleep(1)
    robot.move_to("Position 2", POS_2)
    time.sleep(1)
    robot.move_to("Position 3", POS_3)
    robot.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()