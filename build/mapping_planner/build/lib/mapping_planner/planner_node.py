import rclpy
from rclpy.node import Node
import numpy as np 

from geometry_msgs.msg import Pose, PoseArray
from mapping_interfaces.srv import GenerateMappingPlan

from tf_transformations import quaternion_from_euler



# Planner class 

class MappingPlanner(Node):
	"""
	Class for mapping planner 
	Current objective: simple scene division into n sections
	Cover each section with a scan, return poses in a service 
	Poses are in CAMERA frame (not end effector)
	"""

	def __init__(self):
		super().__init__('mapping_planner')

		self.srv = self.create_service(
			GenerateMappingPlan,
			'generate_mapping_plan',
			self.generate_plan_callback
		)

		self.pose_pub = self.create_publisher(
			PoseArray,
			'mapping_plan',
			10
		)

		self.get_logger().info("Mapping Planner Ready!")

	def generate_plan_callback(self, request, response):
		"""
		Callback function for planning 
		Basic implementation for pose generation
		"""
		poses = []

		# Define request variables
		radius = request.radius
		start = np.deg2rad(request.start_angle_deg)
		end = np.deg2rad(request.end_angle_deg)
		num = request.num_views
		height = request.height
		outward = request.face_outward

		angles = np.linspace(start, end, num)

		# Create each pose from angle requests 
		# SIMPLIFIED FOR NOW
		for i, theta in enumerate(angles):
			# create pose 
			pose = Pose()

			# Position
			pose.position.x = radius * np.cos(theta)
			pose.position.y = radius * np.sin(theta)
			pose.position.z = height

			# Orientation 
			if outward:
				yaw = theta
			else:
				yaw = theta + np.pi

			q = quaternion_from_euler(0,0,yaw)
			pose.orientation.x = q[0]
			pose.orientation.y = q[1]
			pose.orientation.z = q[2]
			pose.orientation.w = q[3]

			poses.append(pose)

		# Create array of poses 
		pose_array = PoseArray()
		pose_array.header.frame_id = request.planning_frame
		pose_array.header.stamp = self.get_clock().now().to_msg()
		pose_array.poses = poses

		# publish for visualizations 
		self.get_logger().info(f"Publishing {len(pose_array.poses)} poses")
		self.pose_pub.publish(pose_array)


		# Create response
		response.success = True
		response.message = f"Generated {len(poses)} poses"
		response.planned_poses = pose_array

		return response




def main(args=None):
	try: 
		with rclpy.init(args=args):
			mp = MappingPlanner()

			rclpy.spin(mp)

	except (KeyboardInterrupt, ExternalShutdownException):
		pass

if __name__ == "__main__":
	main()