# Pose-Aware Mapping and Localization (PAML) 


This project consists of a two-phase mapping and localization pipeline for a UR3 robot arm equipped with a Intel realsense 435i RGB-D sensor and a mobile turtlebot used for localization. Phase 1 consists of a custom RGBD fusion mapping pipeline using UR3 camera poses for stable scene reconstruction. Phase 2 enables localization and path planning for a mobile robot moving through the pre-mapped environment.

## Phase 1: Reconstruction for high-resolution reference map 

During the reference map generation phase, the UR3 arm will execute a trajectory of poses to encompass full scene environment. Throughout the trajectory, the system fuses RGB and depth data into a 3D pointcloud, utilizing joint encoders from the UR3 arms. Due to these motor encoders, the 'Pose-Aware' mapping pipeline allows for real-time fusion without the need for pose estimation and expensive optimization. Known poses also increase accuracy, for a high-resolution, trustworthy map to be used in localization. 

### Phase 1 Demo: 
![Full phase 1 demo](msc/full_demo.gif)

#### Phase 1 Main Nodes: breakdown and project requirements
- [Mapping Client Node](https://github.com/dchoate119/paml_ros2/blob/main/src/mapping_executor/mapping_executor/mapping_client.py): takes in information about the scene, requests a plan from mapping planner
- [Mapping Planner Node](https://github.com/dchoate119/paml_ros2/blob/main/src/mapping_planner/mapping_planner/planner_node.py): **written from scratch**: plans a set of end effector poses to travel to, fully encompassing the given scene
- [UR3 Executor Node](https://github.com/dchoate119/paml_ros2/blob/main/src/mapping_executor/mapping_executor/ur3_executor.py): **Moveit**: executes planned trajectory for the ur3 arm using moveit, avoiding collision with depth camera and mounting table
- [RGBD Capture Node](https://github.com/dchoate119/paml_ros2/blob/main/src/rgbd_capture/rgbd_capture/capture_node.py): **Perception**: grabs depth and rgb info, fed to map builder node
- [Map Builder Node](https://github.com/dchoate119/paml_ros2/blob/main/src/map_builder/map_builder/map_builder_live.py): **custom component**: custom map builder node which incorporates RGBD fusion to build a 3D map
- [Session Manager Node](https://github.com/dchoate119/paml_ros2/blob/main/src/mapping_executor/mapping_executor/session_manager.py): **supervisory control**: state machine for idle and mapping stages used by the mapping executor
- [Custom URDF](https://github.com/dchoate119/paml_ros2/blob/main/src/ur3_custom_description/urdf/ur3e_with_camera.xacro) for rgbd camera and mount in UR3 custom description

## Phase 2: Localization 

Phase 2 uses the pre-built 3D map for turtlebot localization. The turtlebot is executes a trajectory plan to travel across the environment. At each timestep, a comparison to the reference map provides a gloabl map state estimate used by Nav2 for velocity control.


### Phase 2 Demo: 
![Phase 2 demo](msc/turtle_demo.gif)


#### Phase 2 Node breakdown
- [Turtle Nav Node](https://github.com/dchoate119/paml_ros2/blob/main/src/turtle_nav/turtle_nav/nav_node.py): **Nav2**: sends goal states for the turtlebot according to the pre-built map using Nav2
- Note: for demo purposes, the pre-built map was created with the SLAM toolbox

---

# Build and launch 

### Requirements 
- ROS 2 Kilted
- Universal Robots UR3e
- Intel RealSenseD435i
- MoveIt 2
- RViz2
- Nav2 
- Turtlebot mobile robot (Tufts university 'baymax' used for this demo)
- ROS bridge
- Realsense mount: used model from [Thingiverse by Bono88](https://www.thingiverse.com/thing:5394492)

---

### Clone the Repository

```bash
git clone https://github.com/dchoate119/paml_ros2.git
cd paml_ros2
```

---

### Build the Workspace

```bash
source /opt/ros/kilted/setup.bash

colcon build --symlink-install

source install/setup.bash
```

---

### Connect to the UR3e

Ensure the robot and host machine are on the same network.

Update the personal IP address on teach pendant, and UR3e IP on launch configuration if needed.

---

### Launch Phase 1 Mapping

This launch file starts:

- UR robot driver
- MoveIt 2
- RealSense driver
- Mapping planner
- RGBD capture node
- Map builder
- UR3 executor
- RViz2 visualization

```bash
ros2 launch mapping_bringup phase1_bringup.launch.py
```

---

### Visualize the Map in RViz2

Add a `PointCloud2` display and subscribe to the map topic:

```text
/map_pointcloud
```

Replace with your actual point cloud topic if different.

---

### Run the Mapping Client

Open a new terminal:

```bash
source ~/paml_ros2/install/setup.bash

ros2 run mapping_executor mapping_client
```


### Launch Phase 2 Localization

This setup consists of:

- TurtleBot bringup running remotely on the robot
- SSH tunnel for rosbridge communication
- Local ROS bridge script
- Nav2 localization
- Nav2 navigation stack
- Custom navigation client

---

#### Terminal 1 — TurtleBot Bringup (SSH into Robot)

SSH into the TurtleBot and launch the robot drivers. Includes Astra Orbec Camera for localization 

```bash
ssh baymax@10.5.10.74

cd ~/kobuki_ws_2

source install/setup.bash

ros2 launch ./src/launchfile/turtlebot_bringup.launch.py
```


#### Terminal 2 — SSH Tunnel for rosbridge

Create the SSH tunnel between the local machine and TurtleBot.

```bash
ssh -L 9090:localhost:9090 baymax@10.5.10.74
```

#### Terminal 3 — ROS Bridge Script

Launch the custom ROS bridge script.

```bash
source ~/rosbridge_env/bin/activate

python3 ~/paml_ros2/turtlebot_bridge.py
```


#### Terminal 4 - Launch rviz

```bash
rviz2
```

#### Terminal 5 — Localization

Launch AMCL localization against the prebuilt map (edit directory location if necessary).

```bash
ros2 launch nav2_bringup localization_launch.py \
  map:=/home/daniel-choate/paml_ros2/data/map_05_08_001.yaml \
  use_sim_time:=false \
  params_file:=/home/daniel-choate/paml_ros2/nav2_params.yaml
```


#### Terminal 6 — Nav2 Navigation Stack

Launch the Nav2 navigation servers (edit directory location if necessary).

```bash
ros2 launch nav2_bringup navigation_launch.py \
  map:=/home/daniel-choate/paml_ros2/data/map_05_08_001.yaml \
  use_sim_time:=false \
  params_file:=/home/daniel-choate/paml_ros2/nav2_params.yaml
```


#### Terminal 7 — Custom Navigation Goals

Launch the custom TurtleBot navigation node.

```bash
ros2 run turtle_nav turtle_nav
```




# Relevant Commit IDs
- Initial Implementation: 30243fc
- Added mapping client: f64cc83
- Implementing moveit for ur3 - demo example: 4b71fc8 
- Initial moveit implementation, still working through full trajectory: 6750ae8
- Updated moveit implementation, have control nodes for joint angles and end effector: b5a131a  
- Initial perception implementation - RGBD from intel Realsense d435i: 5dccdae
- Linked mapping client to moveit to execute custom trajectory: 52020e5
- Updated rgb data, starting map builder node: f4eeb04
- Map builder custom node and Nav2 implementation: 47266ff
- Trajectory updates and modifications: fc55024
- Modified xacro fro camera mount: f167d2f
- Added rgbd capture synced with executor: 79e6e96
- Camera calibration and pose syncing: 6c3ae04
- Fixed map builder for demo: 17037da
- Added turtlebot and nav2 SLAM configs: 5364329
- Updated launch file for custom nodes: 4536104
- State machine adjustments for demo: 836bb49
- Turtlebot bridge bug fixes and nav2 node redesign: 5e3f1fe



#### External tools 
- MoveIt
- Nav2


##### Other fun videos 
![Mapping demo with ros_output](msc/mapping_demo_ROS_OUTPUT.gif)
![MoveIt Demo](msc/movement_sim_test.gif)
![Custom map builder (not pose-aware)](msc/mapping_demo.gif)





*TODO/Future work*
- [ ] Nav2 adjustments for pose goals 
- [ ] Adjust state machine for mapping and surveying
- [ ] Better pipeline for map conversion - Nav2 friendly form
- [ ] Custom map representation using TSDF