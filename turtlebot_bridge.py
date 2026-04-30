#!/usr/bin/env python3
"""
turtlebot_bridge.py
-------------------
Bridges a TurtleBot (ROS 1 / rosbridge) to a Kilted ROS 2 machine.

Topics forwarded FROM turtlebot → kilted:
  /scan        (sensor_msgs/LaserScan)
  /odom        (nav_msgs/Odometry)
  /tf          (tf2_msgs/TFMessage)
  /tf_static   (tf2_msgs/TFMessage)

Topics forwarded FROM kilted → turtlebot:
  /cmd_vel     (geometry_msgs/Twist)  → /commands/velocity
  /turtlebot/sounds (std_msgs/String) → /commands/sound

Changes from previous version:
  - odom_cb now uses frame IDs from the incoming message instead of hardcoding
    'odom' and 'base_footprint', fixing the broken TF tree issue
  - ros_client.run() uses a timeout to avoid blocking the main thread
"""

import roslibpy
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Twist, TransformStamped
from tf2_msgs.msg import TFMessage
from rclpy.qos import QoSProfile, DurabilityPolicy, ReliabilityPolicy
from std_msgs.msg import String


class TurtleBridge(Node):
    def __init__(self):
        super().__init__('turtle_bridge')

        # Connect to rosbridge on turtlebot
        self.ros_client = roslibpy.Ros(host='localhost', port=9090)
        self.ros_client.run(timeout=5)  # non-blocking with timeout
        self.get_logger().info(f'Rosbridge connected: {self.ros_client.is_connected}')

        # ── Publishers on kilted (data coming FROM turtlebot) ──────────────
        self.scan_pub = self.create_publisher(LaserScan, '/scan', 10)
        self.odom_pub = self.create_publisher(Odometry, '/odom', 10)
        self.tf_pub = self.create_publisher(TFMessage, '/tf', 10)

        tf_static_qos = QoSProfile(
            depth=10,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
            reliability=ReliabilityPolicy.RELIABLE,
        )
        self.tf_static_pub = self.create_publisher(TFMessage, '/tf_static', tf_static_qos)

        # ── Subscriber on kilted (cmd_vel going TO turtlebot) ─────────────
        self.create_subscription(Twist, '/cmd_vel', self.cmd_vel_cb, 10)
        self.cmd_vel_topic = roslibpy.Topic(
            self.ros_client, '/commands/velocity', 'geometry_msgs/msg/Twist')
        self.cmd_vel_topic.advertise()

        # ── Sound commands to turtlebot ────────────────────────────────────
        self.create_subscription(String, '/turtlebot/sounds', self.sound_cb, 10)
        self.sound_pub = roslibpy.Topic(
            self.ros_client, '/commands/sound', 'kobuki_ros_interfaces/msg/Sound')

        # ── Subscribe to turtlebot topics via rosbridge ───────────────────
        roslibpy.Topic(
            self.ros_client, '/scan', 'sensor_msgs/msg/LaserScan'
        ).subscribe(self.scan_cb)
        roslibpy.Topic(
            self.ros_client, '/odom', 'nav_msgs/msg/Odometry'
        ).subscribe(self.odom_cb)
        roslibpy.Topic(
            self.ros_client, '/tf', 'tf2_msgs/msg/TFMessage'
        ).subscribe(self.tf_cb)
        roslibpy.Topic(
            self.ros_client, '/tf_static', 'tf2_msgs/msg/TFMessage'
        ).subscribe(self.tf_static_cb)

    # ── Helpers ────────────────────────────────────────────────────────────

    def _parse_stamp(self, stamp: dict):
        """Parse a rosbridge timestamp dict into (sec, nanosec), using
        current time as fallback if the stamp is zero."""
        sec = int(stamp.get('secs', 0) or stamp.get('sec', 0))
        nanosec = int(stamp.get('nsecs', 0) or stamp.get('nanosec', 0))
        if sec == 0:
            now = self.get_clock().now().to_msg()
            return now.sec, now.nanosec
        return sec, nanosec

    # ── Callbacks: turtlebot → kilted ──────────────────────────────────────

    def scan_cb(self, msg):
        out = LaserScan()
        sec, nanosec = self._parse_stamp(msg['header'].get('stamp', {}))
        out.header.stamp.sec = sec
        out.header.stamp.nanosec = nanosec
        out.header.frame_id = msg['header']['frame_id']
        out.angle_min       = float(msg['angle_min'])
        out.angle_max       = float(msg['angle_max'])
        out.angle_increment = float(msg['angle_increment'])
        out.time_increment  = float(msg['time_increment'])
        out.scan_time       = float(msg['scan_time'])
        out.range_min       = float(msg['range_min'])
        out.range_max       = float(msg['range_max'])
        out.ranges      = [float(r) if r is not None else float('inf')
                           for r in (msg['ranges'] or [])]
        out.intensities = [float(i) if i is not None else 0.0
                           for i in (msg['intensities'] or [])]
        self.scan_pub.publish(out)

    def odom_cb(self, msg):
        out = Odometry()
        sec, nanosec = self._parse_stamp(msg['header'].get('stamp', {}))
        out.header.stamp.sec    = sec
        out.header.stamp.nanosec = nanosec

        # FIX: use frame IDs from the message instead of hardcoding
        out.header.frame_id = msg['header']['frame_id']
        out.child_frame_id  = msg['child_frame_id']

        pos = msg['pose']['pose']['position']
        ori = msg['pose']['pose']['orientation']
        out.pose.pose.position.x    = float(pos['x'])
        out.pose.pose.position.y    = float(pos['y'])
        out.pose.pose.position.z    = float(pos.get('z', 0.0))
        out.pose.pose.orientation.x = float(ori['x'])
        out.pose.pose.orientation.y = float(ori['y'])
        out.pose.pose.orientation.z = float(ori['z'])
        out.pose.pose.orientation.w = float(ori['w'])

        twist = msg['twist']['twist']
        out.twist.twist.linear.x  = float(twist['linear']['x'])
        out.twist.twist.angular.z = float(twist['angular']['z'])
        self.odom_pub.publish(out)

    def tf_cb(self, msg):
        self._forward_tf(msg, self.tf_pub)

    def tf_static_cb(self, msg):
        self._forward_tf(msg, self.tf_static_pub)

    def _forward_tf(self, msg, publisher):
        out = TFMessage()
        for transform in (msg.get('transforms') or []):
            ts = TransformStamped()
            sec, nanosec = self._parse_stamp(transform['header'].get('stamp', {}))
            ts.header.stamp.sec     = sec
            ts.header.stamp.nanosec = nanosec
            ts.header.frame_id  = transform['header']['frame_id']
            ts.child_frame_id   = transform['child_frame_id']
            t = transform['transform']
            ts.transform.translation.x = float(t['translation']['x'])
            ts.transform.translation.y = float(t['translation']['y'])
            ts.transform.translation.z = float(t['translation']['z'])
            ts.transform.rotation.x    = float(t['rotation']['x'])
            ts.transform.rotation.y    = float(t['rotation']['y'])
            ts.transform.rotation.z    = float(t['rotation']['z'])
            ts.transform.rotation.w    = float(t['rotation']['w'])
            out.transforms.append(ts)
        if out.transforms:
            publisher.publish(out)

    # ── Callbacks: kilted → turtlebot ──────────────────────────────────────

    def cmd_vel_cb(self, msg):
        self.cmd_vel_topic.publish(roslibpy.Message({
            'linear':  {'x': msg.linear.x,  'y': msg.linear.y,  'z': msg.linear.z},
            'angular': {'x': msg.angular.x, 'y': msg.angular.y, 'z': msg.angular.z},
        }))

    def sound_cb(self, msg):
        self.get_logger().debug(f'Sending sound: {int(msg.data)}')
        self.sound_pub.publish(roslibpy.Message({'value': int(msg.data)}))


def main():
    rclpy.init()
    node = TurtleBridge()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
