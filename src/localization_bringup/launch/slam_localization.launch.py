from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    use_sim_time = True

    return LaunchDescription([

        # SLAM TOOLBOX
        Node(
            package='slam_toolbox',
            executable='sync_slam_toolbox_node',
            name='slam_toolbox',
            output='screen',
            parameters=[{
                'use_sim_time': use_sim_time
            }]
        ),

        # # NAV2 MAP SERVER (required by Nav2 stack)
        # Node(
        #     package='nav2_map_server',
        #     executable='map_server',
        #     name='map_server',
        #     output='screen',
        #     parameters=[{
        #         'use_sim_time': use_sim_time,
        #         'yaml_filename': ''  # not used in SLAM mode
        #     }]
        # ),

        # # AMCL (disabled effectively, SLAM handles localization)
        # Node(
        #     package='nav2_amcl',
        #     executable='amcl',
        #     name='amcl',
        #     output='screen',
        #     parameters=[{
        #         'use_sim_time': use_sim_time
        #     }]
        # ),

        # NAV2 CORE NODES
        Node(
            package='nav2_controller',
            executable='controller_server',
            name='controller_server',
            output='screen',
            parameters=[{
                'use_sim_time': use_sim_time
            }]
        ),

        Node(
            package='nav2_planner',
            executable='planner_server',
            name='planner_server',
            output='screen',
            parameters=[{
                'use_sim_time': use_sim_time
            }]
        ),

        Node(
            package='nav2_bt_navigator',
            executable='bt_navigator',
            name='bt_navigator',
            output='screen',
            parameters=[{
                'use_sim_time': use_sim_time
            }]
        ),

        Node(
            package='nav2_behaviors',
            executable='behavior_server',
            name='behavior_server',
            output='screen',
            parameters=[{
                'use_sim_time': use_sim_time
            }]
        ),

        # LIFECYCLE MANAGER
        Node(
            package='nav2_lifecycle_manager',
            executable='lifecycle_manager',
            name='lifecycle_manager_navigation',
            output='screen',
            parameters=[{
                'use_sim_time': use_sim_time,
                'autostart': True,
                'node_names': [
                    'slam_toolbox',
                    # 'map_server',
                    # 'amcl',
                    'controller_server',
                    'planner_server',
                    'bt_navigator',
                    'behavior_server'
                ]
            }]
        ),
    ])