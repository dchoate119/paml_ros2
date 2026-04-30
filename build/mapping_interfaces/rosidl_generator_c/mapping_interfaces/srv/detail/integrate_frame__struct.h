// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mapping_interfaces:srv/IntegrateFrame.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mapping_interfaces/srv/integrate_frame.h"


#ifndef MAPPING_INTERFACES__SRV__DETAIL__INTEGRATE_FRAME__STRUCT_H_
#define MAPPING_INTERFACES__SRV__DETAIL__INTEGRATE_FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/IntegrateFrame in the package mapping_interfaces.
typedef struct mapping_interfaces__srv__IntegrateFrame_Request
{
  int32_t waypoint_id;
} mapping_interfaces__srv__IntegrateFrame_Request;

// Struct for a sequence of mapping_interfaces__srv__IntegrateFrame_Request.
typedef struct mapping_interfaces__srv__IntegrateFrame_Request__Sequence
{
  mapping_interfaces__srv__IntegrateFrame_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mapping_interfaces__srv__IntegrateFrame_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/IntegrateFrame in the package mapping_interfaces.
typedef struct mapping_interfaces__srv__IntegrateFrame_Response
{
  bool success;
  rosidl_runtime_c__String message;
} mapping_interfaces__srv__IntegrateFrame_Response;

// Struct for a sequence of mapping_interfaces__srv__IntegrateFrame_Response.
typedef struct mapping_interfaces__srv__IntegrateFrame_Response__Sequence
{
  mapping_interfaces__srv__IntegrateFrame_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mapping_interfaces__srv__IntegrateFrame_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mapping_interfaces__srv__IntegrateFrame_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mapping_interfaces__srv__IntegrateFrame_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/IntegrateFrame in the package mapping_interfaces.
typedef struct mapping_interfaces__srv__IntegrateFrame_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mapping_interfaces__srv__IntegrateFrame_Request__Sequence request;
  mapping_interfaces__srv__IntegrateFrame_Response__Sequence response;
} mapping_interfaces__srv__IntegrateFrame_Event;

// Struct for a sequence of mapping_interfaces__srv__IntegrateFrame_Event.
typedef struct mapping_interfaces__srv__IntegrateFrame_Event__Sequence
{
  mapping_interfaces__srv__IntegrateFrame_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mapping_interfaces__srv__IntegrateFrame_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAPPING_INTERFACES__SRV__DETAIL__INTEGRATE_FRAME__STRUCT_H_
