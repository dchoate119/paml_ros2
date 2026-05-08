import rclpy
from rclpy.node import Node

from mapping_interfaces.srv import (
    IntegrateFrame,
    ResetMap
)

# You can reuse ResetMap for start/stop for now
from std_srvs.srv import Trigger


class MapSessionManager(Node):

    def __init__(self):
        super().__init__('map_session_manager')

        self.state = "IDLE"

        # Clients to map_builder
        self.integrate_client = self.create_client(
            IntegrateFrame, 'integrate_frame')

        self.reset_client = self.create_client(
            ResetMap, 'reset_map')

        # Services exposed to system
        self.start_srv = self.create_service(
            Trigger, 'start_mapping', self.start_callback)

        self.stop_srv = self.create_service(
            Trigger, 'stop_mapping', self.stop_callback)

        self.get_logger().info("Map Session Manager Ready")

    # STATE CONTROL

    def start_callback(self, request, response):
        self.get_logger().info("Starting mapping session")
        self.state = "MAPPING"
        response.success = True
        response.message = "Mapping started"
        return response

    def stop_callback(self, request, response):
        self.get_logger().info("Stopping mapping session")
        self.state = "IDLE"
        response.success = True
        response.message = "Mapping stopped"
        return response

    # CONTROLLED INTEGRATION

    def integrate_frame(self, waypoint_id):

        if self.state != "MAPPING":
            self.get_logger().warn("Not in MAPPING state, skipping")
            return False

        if not self.integrate_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().error("Integrate service not available")
            return False

        req = IntegrateFrame.Request()
        req.waypoint_id = waypoint_id

        future = self.integrate_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)

        result = future.result()
        return result.success if result else False

    # RESET

    def reset_map(self):

        if not self.reset_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().error("Reset service not available")
            return False

        req = ResetMap.Request()
        future = self.reset_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)

        result = future.result()
        return result.success if result else False


def main(args=None):
    rclpy.init(args=args)
    node = MapSessionManager()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()