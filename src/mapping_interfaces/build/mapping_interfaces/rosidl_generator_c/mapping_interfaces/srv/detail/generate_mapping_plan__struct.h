// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mapping_interfaces:srv/GenerateMappingPlan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mapping_interfaces/srv/generate_mapping_plan.h"


#ifndef MAPPING_INTERFACES__SRV__DETAIL__GENERATE_MAPPING_PLAN__STRUCT_H_
#define MAPPING_INTERFACES__SRV__DETAIL__GENERATE_MAPPING_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'planning_frame'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GenerateMappingPlan in the package mapping_interfaces.
typedef struct mapping_interfaces__srv__GenerateMappingPlan_Request
{
  rosidl_runtime_c__String planning_frame;
  float radius;
  float start_angle_deg;
  float end_angle_deg;
  int32_t num_views;
  float height;
  bool face_outward;
} mapping_interfaces__srv__GenerateMappingPlan_Request;

// Struct for a sequence of mapping_interfaces__srv__GenerateMappingPlan_Request.
typedef struct mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence
{
  mapping_interfaces__srv__GenerateMappingPlan_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'planned_poses'
#include "geometry_msgs/msg/detail/pose_array__struct.h"

/// Struct defined in srv/GenerateMappingPlan in the package mapping_interfaces.
typedef struct mapping_interfaces__srv__GenerateMappingPlan_Response
{
  bool success;
  rosidl_runtime_c__String message;
  geometry_msgs__msg__PoseArray planned_poses;
} mapping_interfaces__srv__GenerateMappingPlan_Response;

// Struct for a sequence of mapping_interfaces__srv__GenerateMappingPlan_Response.
typedef struct mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence
{
  mapping_interfaces__srv__GenerateMappingPlan_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mapping_interfaces__srv__GenerateMappingPlan_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mapping_interfaces__srv__GenerateMappingPlan_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GenerateMappingPlan in the package mapping_interfaces.
typedef struct mapping_interfaces__srv__GenerateMappingPlan_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence request;
  mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence response;
} mapping_interfaces__srv__GenerateMappingPlan_Event;

// Struct for a sequence of mapping_interfaces__srv__GenerateMappingPlan_Event.
typedef struct mapping_interfaces__srv__GenerateMappingPlan_Event__Sequence
{
  mapping_interfaces__srv__GenerateMappingPlan_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mapping_interfaces__srv__GenerateMappingPlan_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAPPING_INTERFACES__SRV__DETAIL__GENERATE_MAPPING_PLAN__STRUCT_H_
