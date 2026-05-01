import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Image, PointCloud2
from std_msgs.msg import Header
import sensor_msgs_py.point_cloud2 as pc2

from mapping_interfaces.srv import IntegrateFrame, ResetMap

import tf2_ros

import numpy as np
import open3d as o3d
import cv2
from cv_bridge import CvBridge


class MapBuilder(Node):

    def __init__(self):
        super().__init__('map_builder')

        self.bridge = CvBridge()

        # Subscribers 
        self.rgb_sub = self.create_subscription(
            Image,
            '/camera/camera/color/image_raw',
            self.rgb_callback,
            10)

        self.depth_sub = self.create_subscription(
            Image,
            '/camera/camera/depth/image_rect_raw',
            self.depth_callback,
            10)

        # Publisher
        self.pc_pub = self.create_publisher(
            PointCloud2,
            '/map_pointcloud',
            10
        )

        # Frame capture Service 
        self.srv = self.create_service(
            IntegrateFrame,
            'integrate_frame',
            self.integrate_callback
        )

        self.reset_map_srv = self.create_service(
            ResetMap,
            'reset_map',
            self.reset_map_callback
        )

        # Storage
        self.latest_rgb = None
        self.latest_depth = None

        # TF
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

        # Global map
        self.map_pcd = o3d.geometry.PointCloud()

        # Intrinsics 
        self.intrinsics = o3d.camera.PinholeCameraIntrinsic(
            848, 480,
            600.0, 600.0,
            424.0, 240.0
        )

        self.get_logger().info("Map Builder Ready (service-based)")

    # CALLBACKS (just store data)

    def rgb_callback(self, msg):
        self.latest_rgb = msg

    def depth_callback(self, msg):
        self.latest_depth = msg

    def reset_map_callback(self, request, response):
        self.get_logger().info("Resetting map")

        # Clear accumulated Open3D map
        self.map_pcd = o3d.geometry.PointCloud()

        # If you have extra stored data, clear it too
        # Example:
        # self.geoms = []
        # self.frame_count = 0
        # self.latest_map_msg = None

        # Publish an empty map so RViz clears visually
        msg = self.o3d_to_pointcloud2(self.map_pcd, 'base_link')
        if msg:
            self.pc_pub.publish(msg)

        response.success = True
        response.message = "Map reset successfully"
        return response

    # SERVICE CALLBACK 

    def integrate_callback(self, request, response):

        self.get_logger().info(f"Integrating frame {request.waypoint_id}")

        if self.latest_rgb is None or self.latest_depth is None:
            self.get_logger().warn("No image data available")
            response.success = False
            response.message = "Missing RGB or depth"
            return response

        try:
            # Convert images
            color = self.bridge.imgmsg_to_cv2(
                self.latest_rgb, desired_encoding='bgr8')

            color = cv2.cvtColor(color, cv2.COLOR_BGR2RGB)

            depth = self.bridge.imgmsg_to_cv2(
                self.latest_depth, desired_encoding='passthrough')

            # mm → meters
            depth = depth.astype(np.float32) / 1000.0

            # Resize RGB to match depth
            h, w = depth.shape
            color = cv2.resize(color, (w, h))

            # Open3D conversion
            color_o3d = o3d.geometry.Image(color)
            depth_o3d = o3d.geometry.Image(depth)

            rgbd = o3d.geometry.RGBDImage.create_from_color_and_depth(
                color_o3d,
                depth_o3d,
                depth_scale=1.0,
                depth_trunc=5.0,
                convert_rgb_to_intensity=False
            )

            pcd = o3d.geometry.PointCloud.create_from_rgbd_image(
                rgbd,
                self.intrinsics
            )

            # TF: camera → base_link
            cam_frame = self.latest_rgb.header.frame_id

            if not self.tf_buffer.can_transform(
                'base_link',
                cam_frame,
                rclpy.time.Time()
            ):
                self.get_logger().warn("TF not ready")
                response.success = False
                response.message = "TF not ready"
                return response

            tf = self.tf_buffer.lookup_transform(
                'base_link',
                cam_frame,
                rclpy.time.Time()
            )

            T = self.transform_to_matrix(tf)

            # Transform into world frame
            pcd.transform(T)

            # Accumulate map
            self.map_pcd += pcd
            self.map_pcd = self.map_pcd.voxel_down_sample(0.01)

            self.get_logger().info(
                f"Map points: {len(self.map_pcd.points)}")

            # Publish
            msg = self.o3d_to_pointcloud2(
                self.map_pcd,
                'base_link'
            )

            if msg:
                self.pc_pub.publish(msg)

            response.success = True
            response.message = "Integrated successfully"
            return response

        except Exception as e:
            self.get_logger().error(f"Integration failed: {e}")
            response.success = False
            response.message = str(e)
            return response

    # =========================================================
    # HELPERS
    # =========================================================



    def transform_to_matrix(self, tf):

        t = tf.transform.translation
        q = tf.transform.rotation

        R = o3d.geometry.get_rotation_matrix_from_quaternion(
            [q.w, q.x, q.y, q.z]
        )

        T = np.eye(4)
        T[:3, :3] = R
        T[0, 3] = t.x
        T[1, 3] = t.y
        T[2, 3] = t.z

        return T

    def o3d_to_pointcloud2(self, pcd, frame_id):

        points = np.asarray(pcd.points)
        colors = np.asarray(pcd.colors)

        if len(points) == 0:
            header = Header()
            header.stamp = self.get_clock().now().to_msg()
            header.frame_id = frame_id

            fields = [
                pc2.PointField(name='x', offset=0, datatype=pc2.PointField.FLOAT32, count=1),
                pc2.PointField(name='y', offset=4, datatype=pc2.PointField.FLOAT32, count=1),
                pc2.PointField(name='z', offset=8, datatype=pc2.PointField.FLOAT32, count=1),
                pc2.PointField(name='rgb', offset=12, datatype=pc2.PointField.UINT32, count=1),
            ]

            return pc2.create_cloud(header, fields, [])

        # if len(points) == 0:
        #     return None

        colors = (colors * 255).astype(np.uint8)

        xyz = points.astype(np.float32)

        rgb = (colors[:, 0].astype(np.uint32) << 16) | \
              (colors[:, 1].astype(np.uint32) << 8) | \
              (colors[:, 2].astype(np.uint32))

        cloud = np.zeros(points.shape[0], dtype=[
            ('x', 'f4'), ('y', 'f4'), ('z', 'f4'), ('rgb', 'u4')
        ])

        cloud['x'] = xyz[:, 0]
        cloud['y'] = xyz[:, 1]
        cloud['z'] = xyz[:, 2]
        cloud['rgb'] = rgb

        header = Header()
        header.stamp = self.get_clock().now().to_msg()
        header.frame_id = frame_id

        fields = [
            pc2.PointField(name='x', offset=0, datatype=pc2.PointField.FLOAT32, count=1),
            pc2.PointField(name='y', offset=4, datatype=pc2.PointField.FLOAT32, count=1),
            pc2.PointField(name='z', offset=8, datatype=pc2.PointField.FLOAT32, count=1),
            pc2.PointField(name='rgb', offset=12, datatype=pc2.PointField.UINT32, count=1),
        ]

        return pc2.create_cloud(header, fields, cloud)


def main(args=None):
    rclpy.init(args=args)
    node = MapBuilder()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()