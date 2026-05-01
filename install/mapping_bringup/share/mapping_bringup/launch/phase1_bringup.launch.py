from launch import LaunchDescription

from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():

	# PATHS
	ur_driver_pkg = get_package_share_directory('ur_robot_driver')
	ur_moveit_pkg = get_package_share_directory('ur_moveit_config')
	realsense_pkg = get_package_share_directory('realsense2_camera')

	ur_description_file = "/home/daniel-choate/paml_ros2/src/ur3_custom_description/urdf/ur3e_with_camera.xacro"

	# UR description file 
	ur_driver = IncludeLaunchDescription(
		PythonLaunchDescriptionSource(
			os.path.join(ur_driver_pkg, 'launch', 'ur_control.launch.py')
		),
		launch_arguments={
			'ur_type': 'ur3e',
			'robot_ip': '10.3.4.11',
			'launch_rviz': 'false',
			'description_file': ur_description_file
		}.items()
	)


	# MOVE IT
	moveit = IncludeLaunchDescription(
		PythonLaunchDescriptionSource(
			os.path.join(ur_moveit_pkg, 'launch', 'ur_moveit.launch.py')
		),
		launch_arguments={
			'ur_type': 'ur3e',
			'robot_ip': '10.3.4.11',
			'launch_rviz': 'true'
		}.items()
	)

	# Realsense cam 
	realsense = IncludeLaunchDescription(
		PythonLaunchDescriptionSource(
			os.path.join(realsense_pkg, 'launch', 'rs_launch.py')
		)
	)

	# MY NODES

	# mapping planner
	mapping_planner = Node(
		package='mapping_planner',
		executable='mapping_planner',
		output='screen'
	)

	# rgbd capture
	rgbd_capture = Node(
		package='rgbd_capture',
		executable='rgbd_capture_node',
		output='screen'
	)

	# map builder 
	map_builder = Node(
		package='map_builder',
		executable='map_builder_live',
		output='screen'
	)

	# mapping executor
	mapping_executor = Node(
		package='mapping_executor',
		executable='ur3_executor',
		output='screen'
	)


	return LaunchDescription([
		ur_driver,
		moveit,
		realsense,
		mapping_planner,
		rgbd_capture,
		map_builder,
		mapping_executor
	])