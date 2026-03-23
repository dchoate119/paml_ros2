# Pose-Aware Mapping and Localization (PAML) 


This project consists of a two-phase mapping and localization pipeline for a UR3 robot arm equipped with a realsense RGB-D sensor, and a mobile robot used for the localization phase. Phase 1 consists of the reference map generation phase using vision-based reconstruction techniques. Phase 2 enables localization for a mobile robot moving through the pre-mapped environment. 

## Phase 1: Reconstruction for high-resolution reference map 

During the reference map generation phase, the UR3 arm will execute a trajectory of poses to encompass full scene capture. At each pose, the system will capture RGB-D data, as well as pose information to be used for map reconstruction. Known poses allow for a diffusion approach, rather than a SLAM approach which requires pose estiamtion. The pose-aware aspect adds accuracy confidence in our reference map. The output of this phase will be a high resolutin 3D map of the environment. 

## Phase 2: Localization pipeline 

During the localization phase, a turtlebot wil execute a trajectory plan to travel across the previously mapped environment. At each timestep, a comparison to the reference map, using an ICP-style algorithm, will provide a global map state estimate to be used by Nav2 for velocity control.

# Commit ID
Initial Implementation: 30243fc


#### Plan for external tools 
- MoveIt
- Nav2
- TSDF fusion (NVlabs)



##### Progress


TODO List 
- [ ] Package setup for phase 1
	- [x] mapping_planner
	- [ ] mapping_executor
	- [ ] MoveIt
	- [ ] ur3_driver
	- [ ] robot_state_publisher 
	- [ ] static_tf_publisher 
	- [ ] realsense_driver 
	- [ ] RGBD_capture 
	- [ ] map_builder 
	- [ ] map_server
- [ ] Package setup for phase 2


*Phase 1 progress*
- [ ] mapping_planner 
	- [x] basic pose generator for demo
	- [x] initial rviz verification
	- [ ] adjust for specific scene
	- [ ] add filtering for reachability
	- [ ] optimize for smooth execution 
- [ ] mapping_executor
	- [x] basic setup for trajectory execution 
	- [ ] mapping_client setup for specific scene 
- [ ] MoveIt
- [ ] ur3_driver
- [ ] robot_state_publisher 
- [ ] static_tf_publisher 
- [ ] realsense_driver 
- [ ] RGBD_capture 
- [ ] map_builder 
- [ ] map_server

*Phase 2 progress*