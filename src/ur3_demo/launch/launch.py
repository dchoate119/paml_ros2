from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package="ur3_demo",
            executable="move_demo",
            output="screen",
        ),
    ])