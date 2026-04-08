import rclpy
from rclpy.node import Node

from mapping_interfaces.srv import GenerateMappingPlan
from mapping_interfaces.srv import ExecuteMappingPlan
from rclpy.executors import ExternalShutdownException



class MappingClient(Node):
	def __init__(self):
		super().__init__('mapping_client')

		self.plan_client = self.create_client(
			GenerateMappingPlan, 'generate_mapping_plan')

		self.exec_client = self.create_client(
			ExecuteMappingPlan, 'execute_mapping_plan')

		self.get_logger().info("Waiting for services...")
		self.plan_client.wait_for_service()
		self.exec_client.wait_for_service()
		self.get_logger().info("Services ready")


	def run(self):
		# CALL PLANNER
		plan_req = GenerateMappingPlan.Request()
		# Mock parameters for the environment
		plan_req.planning_frame = "base_link"
		plan_req.radius = 0.5
		plan_req.start_angle_deg = 0.0
		plan_req.end_angle_deg = 180.0
		plan_req.num_views = 5
		plan_req.height = 0.3
		plan_req.face_outward = True
		# Gather planner results
		self.get_logger().info('Calling planner ...')
		future = self.plan_client.call_async(plan_req)
		rclpy.spin_until_future_complete(self, future)
		plan_res = future.result()

		# If not successful 
		# if not plan_res.success:
		if plan_res is None:
			self.get_logger().error("Planner service call failed")
			return

		self.get_logger().info('Planning success!')


		# CALL EXECUTOR 
		exec_req = ExecuteMappingPlan.Request()
		# Planned poses from planning result
		exec_req.planned_poses = plan_res.planned_poses
		exec_req.capture_data = True

		self.get_logger().info("Calling executor ...")
		future = self.exec_client.call_async(exec_req)
		rclpy.spin_until_future_complete(self, future)
		exec_res = future.result()

		# If not successful
		if exec_res.success:
		# if exec_res is None:
			self.get_logger().info(
				f"Execution done: {exec_res.completed_count} poses")

		else:
			self.get_logger().error(
				f"Failed at {exec_res.failed_index}: {exec_res.message}")




# main function 
def main(args=None):
	try:
		rclpy.init(args=args)
		mc = MappingClient()
		mc.run()
		mc.destroy_node()

	except (KeyboardInterrupt, ExternalShutdownException):
		pass



if __name__ == "__main__":
	main()