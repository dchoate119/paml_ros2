#!/usr/bin/env python3
import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from geometry_msgs.msg import Vector3
from moveit_msgs.action import MoveGroup
from moveit_msgs.msg import MotionPlanRequest, JointConstraint, Constraints, MoveItErrorCodes




# ====================================================================
#  Paste your 3 positions here
# ====================================================================
 
# POSITION_1 = [0.0, -1.5707, 0.0, -1.5707, 0.0, 0.0]
# POSITION_2 = [0.0, -1.5707, 0.0, -1.5707, 0.0, 0.0]
# POSITION_3 = [0.0, -1.5707, 0.0, -1.5707, 0.0, 0.0]

POSITION_1 = [0.0, -1.57, 1.2, -1.57, 0.0, 0.0]
POSITION_2 = [0.5, -1.2, 1.0, -1.5, 0.5, 0.0]
POSITION_3 = [-0.5, -1.8, 1.3, -1.4, -0.5, 0.3]




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

    def move_to(self, name, joint_angles):
        print(f"Moving to {name}...")

        # Create request
        request = MotionPlanRequest()
        request.group_name = "ur_manipulator"
        request.num_planning_attempts = 10
        request.allowed_planning_time = 5.0
        request.max_velocity_scaling_factor = 0.3
        request.max_acceleration_scaling_factor = 0.3
        request.workspace_parameters.header.frame_id = "base_link"
        request.workspace_parameters.min_corner = Vector3(x=-1.0, y=-1.0, z=-1.0)
        request.workspace_parameters.max_corner = Vector3(x= 1.0, y= 1.0, z= 1.0)

        # Add constraints
        constraints = Constraints()
        for name_j, angle in zip(JOINT_NAMES, joint_angles):
            jc = JointConstraint()
            jc.joint_name = name_j
            jc.position = angle
            jc.tolerance_below = 0.01 # Potentially adjust, might be tight 
            jc.tolerance_above = 0.01 # ^^same
            jc.weight = 1.0
            constraints.joint_constraints.append(jc)

        request.goal_constraints.append(constraints)

        goal = MoveGroup.Goal()
        goal.request = request
        goal.planning_options.plan_only = False
        goal.planning_options.replan = True
        goal.planning_options.replan_attempts = 5
        goal.planning_options.planning_scene_diff.is_diff = True 

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
    robot.move_to("Position 1", POSITION_1)
    time.sleep(1)
    robot.move_to("Position 2", POSITION_2)
    time.sleep(1)
    robot.move_to("Position 3", POSITION_3)
    robot.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()