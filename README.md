# Pose-Aware Mapping and Localization (PAML) 


This project consists of a two-phase mapping and localization pipeline for a UR3 robot arm equipped with a Intel realsense 435i RGB-D sensor and a mobile turtlebot used for localization. Phase 1 consists of a custom RGBD fusion mapping pipeline using UR3 camera poses for stable scene reconstruction. Phase 2 enables localization and path planning for a mobile robot moving through the pre-mapped environment.

## Phase 1: Reconstruction for high-resolution reference map 

During the reference map generation phase, the UR3 arm will execute a trajectory of poses to encompass full scene environment. Throughout the trajectory, the system fuses RGB and depth data into a 3D pointcloud, utilizing joint encoders from the UR3 arms. Due to these motor encoders, the 'Pose-Aware' mapping pipeline allows for real-time fusion without the need for pose estimation and expensive optimization. Known poses also increase accuracy, for a high-resolution, trustworthy map to be used in localization. 

### Phase 1 Demo: 
![Full phase 1 demo](msc/full_demo.gif)

#### Phase 1 Node breakdown 
- A
- B
- C 

## Phase 2: Localization pipeline 

Phase 2 uses the pre-built 3D map for turtlebot localization. The turtlebot is executes a trajectory plan to travel across the environment. At each timestep, a comparison to the reference map provides a gloabl map state estimate used by Nav2 for velocity control.


### Phase 2 Demo: 
*in progress*


#### Phase 2 Node breakdown
- A
- B
- C


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



#### External tools 
- MoveIt
- Nav2


##### Progress

![MoveIt Demo](msc/movement_sim_test.gif)
![Custom map builder (not pose-aware)](msc/mapping_demo.gif)





*TODO/Future work*
- [ ] Nav2 adjustments for pose goals 
- [ ] Adjust state machine for mapping and surveying
- [ ] Better pipeline for map conversion - Nav2 friendly form
- [ ] Custom map representation using TSDF