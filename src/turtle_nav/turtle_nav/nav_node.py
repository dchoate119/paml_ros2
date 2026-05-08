import rclpy
from rclpy.node import Node

from geometry_msgs.msg import PoseStamped
from nav2_simple_commander.robot_navigator import BasicNavigator

from tf_transformations import quaternion_from_euler


class SimpleNav(Node):

    def __init__(self):
        super().__init__('simple_nav')

        self.navigator = BasicNavigator()

        self.get_logger().info("Waiting for Nav2...")

        self.navigator.waitUntilNav2Active()

        self.get_logger().info("Nav2 active!")

        goal = PoseStamped()

        goal.header.frame_id = 'map'
        goal.header.stamp = self.get_clock().now().to_msg()

        # Goal position
        goal.pose.position.x = -3.42
        goal.pose.position.y = -3.04
        goal.pose.position.z = 0.0

        # Goal orientation
        q = quaternion_from_euler(0, 0, 0)

        goal.pose.orientation.x = q[0]
        goal.pose.orientation.y = q[1]
        goal.pose.orientation.z = q[2]
        goal.pose.orientation.w = q[3]

        self.get_logger().info("Sending goal...")

        self.navigator.goToPose(goal)

        while not self.navigator.isTaskComplete():
            rclpy.spin_once(self, timeout_sec=0.1)

        self.get_logger().info("Goal complete!")

        rclpy.shutdown()


def main(args=None):
    rclpy.init(args=args)

    node = SimpleNav()


if __name__ == '__main__':
    main()