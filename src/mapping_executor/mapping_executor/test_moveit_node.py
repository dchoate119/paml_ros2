import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient

from geometry_msgs.msg import PoseStamped
from moveit_msgs.action import MoveGroup
from moveit_msgs.msg import Constraints, PositionConstraint
from shape_msgs.msg import SolidPrimitive


class TestMoveIt(Node):
    def __init__(self):
        super().__init__('test_moveit_node')

        self.client = ActionClient(self, MoveGroup, '/move_action')

        self.get_logger().info("Waiting for MoveIt action server...")
        self.client.wait_for_server()
        self.get_logger().info("Connected to MoveIt!")

        self.send_goal()

    def send_goal(self):
        goal_msg = MoveGroup.Goal()

        # --- REQUIRED ---
        goal_msg.request.group_name = "ur_manipulator"
        goal_msg.request.num_planning_attempts = 5
        goal_msg.request.allowed_planning_time = 5.0

        # --- Target pose ---
        pose = PoseStamped()
        pose.header.frame_id = "base_link"

        pose.pose.position.x = 0.3
        pose.pose.position.y = 0.0
        pose.pose.position.z = 0.3

        pose.pose.orientation.w = 1.0  # no rotation

        # --- Simple position constraint ---
        constraints = Constraints()

        pos_constraint = PositionConstraint()
        pos_constraint.header.frame_id = "base_link"
        pos_constraint.link_name = "tool0"

        box = SolidPrimitive()
        box.type = SolidPrimitive.BOX
        box.dimensions = [0.01, 0.01, 0.01]

        pos_constraint.constraint_region.primitives.append(box)
        pos_constraint.constraint_region.primitive_poses.append(pose.pose)
        pos_constraint.weight = 1.0

        constraints.position_constraints.append(pos_constraint)

        goal_msg.request.goal_constraints.append(constraints)

        # --- Send goal ---
        self.get_logger().info("Sending goal...")
        future = self.client.send_goal_async(goal_msg)

        future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()

        if not goal_handle.accepted:
            self.get_logger().error("Goal rejected")
            return

        self.get_logger().info("Goal accepted")

        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.result_callback)

    def result_callback(self, future):
        self.get_logger().info("Motion complete!")
        rclpy.shutdown()


def main(args=None):
    rclpy.init(args=args)
    node = TestMoveIt()
    rclpy.spin(node)


if __name__ == '__main__':
    main()