// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mapping_interfaces:srv/GenerateMappingPlan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mapping_interfaces/srv/detail/generate_mapping_plan__rosidl_typesupport_introspection_c.h"
#include "mapping_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mapping_interfaces/srv/detail/generate_mapping_plan__functions.h"
#include "mapping_interfaces/srv/detail/generate_mapping_plan__struct.h"


// Include directives for member types
// Member `planning_frame`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mapping_interfaces__srv__GenerateMappingPlan_Request__rosidl_typesupport_introspection_c__GenerateMappingPlan_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mapping_interfaces__srv__GenerateMappingPlan_Request__init(message_memory);
}

void mapping_interfaces__srv__GenerateMappingPlan_Request__rosidl_typesupport_introspection_c__GenerateMappingPlan_Request_fini_function(void * message_memory)
{
  mapping_interfaces__srv__GenerateMappingPlan_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mapping_interfaces__srv__GenerateMappingPlan_Request__rosidl_typesupport_introspection_c__GenerateMappingPlan_Request_message_member_array[7] = {
  {
    "planning_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapping_interfaces__srv__GenerateMappingPlan_Request, planning_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapping_interfaces__srv__GenerateMappingPlan_Request, radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_angle_deg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapping_interfaces__srv__GenerateMappingPlan_Request, start_angle_deg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_angle_deg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapping_interfaces__srv__GenerateMappingPlan_Request, end_angle_deg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_views",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapping_interfaces__srv__GenerateMappingPlan_Request, num_views),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapping_interfaces__srv__GenerateMappingPlan_Request, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "face_outward",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapping_interfaces__srv__GenerateMappingPlan_Request, face_outward),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mapping_interfaces__srv__GenerateMappingPlan_Request__rosidl_typesupport_introspection_c__GenerateMappingPlan_Request_message_members = {
  "mapping_interfaces__srv",  // message namespace
  "GenerateMappingPlan_Request",  // message name
  7,  // number of fields
  sizeof(mapping_interfaces__srv__GenerateMappingPlan_Request),
  false,  // has_any_key_member_
  mapping_interfaces__srv__GenerateMappingPlan_Request__rosidl_typesupport_introspection_c__GenerateMappingPlan_Request_message_member_array,  // message members
  mapping_interfaces__srv__GenerateMappingPlan_Request__rosidl_typesupport_introspection_c__GenerateMappingPlan_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  mapping_interfaces__srv__GenerateMappingPlan_Request__rosidl_typesupport_introspection_c__GenerateMappingPlan_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mapping_interfaces__srv__GenerateMappingPlan_Request__rosidl_typesupport_introspection_c__GenerateMappingPlan_Request_message_type_support_handle = {
  0,
  &mapping_interfaces__srv__GenerateMappingPlan_Request__rosidl_typesupport_introspection_c__GenerateMappingPlan_Request_message_members,
  get_message_typesupport_handle_function,
  &mapping_interfaces__srv__GenerateMappingPlan_Request__get_type_hash,
  &mapping_interfaces__srv__GenerateMappingPlan_Request__get_type_description,
  &mapping_interfaces__srv__GenerateMappingPlan_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mapping_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapping_interfaces, srv, GenerateMappingPlan_Request)() {
  if (!mapping_interfaces__srv__GenerateMappingPlan_Request__rosidl_typesupport_introspection_c__GenerateMappingPlan_Request_message_type_support_handle.typesupport_identifier) {
    mapping_interfaces__srv__GenerateMappingPlan_Request__rosidl_typesupport_introspection_c__GenerateMappingPlan_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mapping_interfaces__srv__GenerateMappingPlan_Request__rosidl_typesupport_introspection_c__GenerateMappingPlan_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mapping_interfaces/srv/detail/generate_mapping_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mapping_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mapping_interfaces/srv/detail/generate_mapping_plan__functions.h"
// already included above
// #include "mapping_interfaces/srv/detail/generate_mapping_plan__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `planned_poses`
#include "geometry_msgs/msg/pose_array.h"
// Member `planned_poses`
#include "geometry_msgs/msg/detail/pose_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mapping_interfaces__srv__GenerateMappingPlan_Response__rosidl_typesupport_introspection_c__GenerateMappingPlan_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mapping_interfaces__srv__GenerateMappingPlan_Response__init(message_memory);
}

void mapping_interfaces__srv__GenerateMappingPlan_Response__rosidl_typesupport_introspection_c__GenerateMappingPlan_Response_fini_function(void * message_memory)
{
  mapping_interfaces__srv__GenerateMappingPlan_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mapping_interfaces__srv__GenerateMappingPlan_Response__rosidl_typesupport_introspection_c__GenerateMappingPlan_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapping_interfaces__srv__GenerateMappingPlan_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapping_interfaces__srv__GenerateMappingPlan_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planned_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapping_interfaces__srv__GenerateMappingPlan_Response, planned_poses),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mapping_interfaces__srv__GenerateMappingPlan_Response__rosidl_typesupport_introspection_c__GenerateMappingPlan_Response_message_members = {
  "mapping_interfaces__srv",  // message namespace
  "GenerateMappingPlan_Response",  // message name
  3,  // number of fields
  sizeof(mapping_interfaces__srv__GenerateMappingPlan_Response),
  false,  // has_any_key_member_
  mapping_interfaces__srv__GenerateMappingPlan_Response__rosidl_typesupport_introspection_c__GenerateMappingPlan_Response_message_member_array,  // message members
  mapping_interfaces__srv__GenerateMappingPlan_Response__rosidl_typesupport_introspection_c__GenerateMappingPlan_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  mapping_interfaces__srv__GenerateMappingPlan_Response__rosidl_typesupport_introspection_c__GenerateMappingPlan_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mapping_interfaces__srv__GenerateMappingPlan_Response__rosidl_typesupport_introspection_c__GenerateMappingPlan_Response_message_type_support_handle = {
  0,
  &mapping_interfaces__srv__GenerateMappingPlan_Response__rosidl_typesupport_introspection_c__GenerateMappingPlan_Response_message_members,
  get_message_typesupport_handle_function,
  &mapping_interfaces__srv__GenerateMappingPlan_Response__get_type_hash,
  &mapping_interfaces__srv__GenerateMappingPlan_Response__get_type_description,
  &mapping_interfaces__srv__GenerateMappingPlan_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mapping_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapping_interfaces, srv, GenerateMappingPlan_Response)() {
  mapping_interfaces__srv__GenerateMappingPlan_Response__rosidl_typesupport_introspection_c__GenerateMappingPlan_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseArray)();
  if (!mapping_interfaces__srv__GenerateMappingPlan_Response__rosidl_typesupport_introspection_c__GenerateMappingPlan_Response_message_type_support_handle.typesupport_identifier) {
    mapping_interfaces__srv__GenerateMappingPlan_Response__rosidl_typesupport_introspection_c__GenerateMappingPlan_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mapping_interfaces__srv__GenerateMappingPlan_Response__rosidl_typesupport_introspection_c__GenerateMappingPlan_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mapping_interfaces/srv/detail/generate_mapping_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mapping_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mapping_interfaces/srv/detail/generate_mapping_plan__functions.h"
// already included above
// #include "mapping_interfaces/srv/detail/generate_mapping_plan__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "mapping_interfaces/srv/generate_mapping_plan.h"
// Member `request`
// Member `response`
// already included above
// #include "mapping_interfaces/srv/detail/generate_mapping_plan__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__GenerateMappingPlan_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mapping_interfaces__srv__GenerateMappingPlan_Event__init(message_memory);
}

void mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__GenerateMappingPlan_Event_fini_function(void * message_memory)
{
  mapping_interfaces__srv__GenerateMappingPlan_Event__fini(message_memory);
}

size_t mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__size_function__GenerateMappingPlan_Event__request(
  const void * untyped_member)
{
  const mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence * member =
    (const mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__get_const_function__GenerateMappingPlan_Event__request(
  const void * untyped_member, size_t index)
{
  const mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence * member =
    (const mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__get_function__GenerateMappingPlan_Event__request(
  void * untyped_member, size_t index)
{
  mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence * member =
    (mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__fetch_function__GenerateMappingPlan_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mapping_interfaces__srv__GenerateMappingPlan_Request * item =
    ((const mapping_interfaces__srv__GenerateMappingPlan_Request *)
    mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__get_const_function__GenerateMappingPlan_Event__request(untyped_member, index));
  mapping_interfaces__srv__GenerateMappingPlan_Request * value =
    (mapping_interfaces__srv__GenerateMappingPlan_Request *)(untyped_value);
  *value = *item;
}

void mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__assign_function__GenerateMappingPlan_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mapping_interfaces__srv__GenerateMappingPlan_Request * item =
    ((mapping_interfaces__srv__GenerateMappingPlan_Request *)
    mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__get_function__GenerateMappingPlan_Event__request(untyped_member, index));
  const mapping_interfaces__srv__GenerateMappingPlan_Request * value =
    (const mapping_interfaces__srv__GenerateMappingPlan_Request *)(untyped_value);
  *item = *value;
}

bool mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__resize_function__GenerateMappingPlan_Event__request(
  void * untyped_member, size_t size)
{
  mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence * member =
    (mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence *)(untyped_member);
  mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence__fini(member);
  return mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence__init(member, size);
}

size_t mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__size_function__GenerateMappingPlan_Event__response(
  const void * untyped_member)
{
  const mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence * member =
    (const mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__get_const_function__GenerateMappingPlan_Event__response(
  const void * untyped_member, size_t index)
{
  const mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence * member =
    (const mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__get_function__GenerateMappingPlan_Event__response(
  void * untyped_member, size_t index)
{
  mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence * member =
    (mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__fetch_function__GenerateMappingPlan_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mapping_interfaces__srv__GenerateMappingPlan_Response * item =
    ((const mapping_interfaces__srv__GenerateMappingPlan_Response *)
    mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__get_const_function__GenerateMappingPlan_Event__response(untyped_member, index));
  mapping_interfaces__srv__GenerateMappingPlan_Response * value =
    (mapping_interfaces__srv__GenerateMappingPlan_Response *)(untyped_value);
  *value = *item;
}

void mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__assign_function__GenerateMappingPlan_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mapping_interfaces__srv__GenerateMappingPlan_Response * item =
    ((mapping_interfaces__srv__GenerateMappingPlan_Response *)
    mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__get_function__GenerateMappingPlan_Event__response(untyped_member, index));
  const mapping_interfaces__srv__GenerateMappingPlan_Response * value =
    (const mapping_interfaces__srv__GenerateMappingPlan_Response *)(untyped_value);
  *item = *value;
}

bool mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__resize_function__GenerateMappingPlan_Event__response(
  void * untyped_member, size_t size)
{
  mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence * member =
    (mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence *)(untyped_member);
  mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence__fini(member);
  return mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__GenerateMappingPlan_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapping_interfaces__srv__GenerateMappingPlan_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mapping_interfaces__srv__GenerateMappingPlan_Event, request),  // bytes offset in struct
    NULL,  // default value
    mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__size_function__GenerateMappingPlan_Event__request,  // size() function pointer
    mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__get_const_function__GenerateMappingPlan_Event__request,  // get_const(index) function pointer
    mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__get_function__GenerateMappingPlan_Event__request,  // get(index) function pointer
    mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__fetch_function__GenerateMappingPlan_Event__request,  // fetch(index, &value) function pointer
    mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__assign_function__GenerateMappingPlan_Event__request,  // assign(index, value) function pointer
    mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__resize_function__GenerateMappingPlan_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mapping_interfaces__srv__GenerateMappingPlan_Event, response),  // bytes offset in struct
    NULL,  // default value
    mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__size_function__GenerateMappingPlan_Event__response,  // size() function pointer
    mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__get_const_function__GenerateMappingPlan_Event__response,  // get_const(index) function pointer
    mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__get_function__GenerateMappingPlan_Event__response,  // get(index) function pointer
    mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__fetch_function__GenerateMappingPlan_Event__response,  // fetch(index, &value) function pointer
    mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__assign_function__GenerateMappingPlan_Event__response,  // assign(index, value) function pointer
    mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__resize_function__GenerateMappingPlan_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__GenerateMappingPlan_Event_message_members = {
  "mapping_interfaces__srv",  // message namespace
  "GenerateMappingPlan_Event",  // message name
  3,  // number of fields
  sizeof(mapping_interfaces__srv__GenerateMappingPlan_Event),
  false,  // has_any_key_member_
  mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__GenerateMappingPlan_Event_message_member_array,  // message members
  mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__GenerateMappingPlan_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__GenerateMappingPlan_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__GenerateMappingPlan_Event_message_type_support_handle = {
  0,
  &mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__GenerateMappingPlan_Event_message_members,
  get_message_typesupport_handle_function,
  &mapping_interfaces__srv__GenerateMappingPlan_Event__get_type_hash,
  &mapping_interfaces__srv__GenerateMappingPlan_Event__get_type_description,
  &mapping_interfaces__srv__GenerateMappingPlan_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mapping_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapping_interfaces, srv, GenerateMappingPlan_Event)() {
  mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__GenerateMappingPlan_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__GenerateMappingPlan_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapping_interfaces, srv, GenerateMappingPlan_Request)();
  mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__GenerateMappingPlan_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapping_interfaces, srv, GenerateMappingPlan_Response)();
  if (!mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__GenerateMappingPlan_Event_message_type_support_handle.typesupport_identifier) {
    mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__GenerateMappingPlan_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__GenerateMappingPlan_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mapping_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mapping_interfaces/srv/detail/generate_mapping_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mapping_interfaces__srv__detail__generate_mapping_plan__rosidl_typesupport_introspection_c__GenerateMappingPlan_service_members = {
  "mapping_interfaces__srv",  // service namespace
  "GenerateMappingPlan",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // mapping_interfaces__srv__detail__generate_mapping_plan__rosidl_typesupport_introspection_c__GenerateMappingPlan_Request_message_type_support_handle,
  NULL,  // response message
  // mapping_interfaces__srv__detail__generate_mapping_plan__rosidl_typesupport_introspection_c__GenerateMappingPlan_Response_message_type_support_handle
  NULL  // event_message
  // mapping_interfaces__srv__detail__generate_mapping_plan__rosidl_typesupport_introspection_c__GenerateMappingPlan_Response_message_type_support_handle
};


static rosidl_service_type_support_t mapping_interfaces__srv__detail__generate_mapping_plan__rosidl_typesupport_introspection_c__GenerateMappingPlan_service_type_support_handle = {
  0,
  &mapping_interfaces__srv__detail__generate_mapping_plan__rosidl_typesupport_introspection_c__GenerateMappingPlan_service_members,
  get_service_typesupport_handle_function,
  &mapping_interfaces__srv__GenerateMappingPlan_Request__rosidl_typesupport_introspection_c__GenerateMappingPlan_Request_message_type_support_handle,
  &mapping_interfaces__srv__GenerateMappingPlan_Response__rosidl_typesupport_introspection_c__GenerateMappingPlan_Response_message_type_support_handle,
  &mapping_interfaces__srv__GenerateMappingPlan_Event__rosidl_typesupport_introspection_c__GenerateMappingPlan_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mapping_interfaces,
    srv,
    GenerateMappingPlan
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mapping_interfaces,
    srv,
    GenerateMappingPlan
  ),
  &mapping_interfaces__srv__GenerateMappingPlan__get_type_hash,
  &mapping_interfaces__srv__GenerateMappingPlan__get_type_description,
  &mapping_interfaces__srv__GenerateMappingPlan__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapping_interfaces, srv, GenerateMappingPlan_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapping_interfaces, srv, GenerateMappingPlan_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapping_interfaces, srv, GenerateMappingPlan_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mapping_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapping_interfaces, srv, GenerateMappingPlan)(void) {
  if (!mapping_interfaces__srv__detail__generate_mapping_plan__rosidl_typesupport_introspection_c__GenerateMappingPlan_service_type_support_handle.typesupport_identifier) {
    mapping_interfaces__srv__detail__generate_mapping_plan__rosidl_typesupport_introspection_c__GenerateMappingPlan_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mapping_interfaces__srv__detail__generate_mapping_plan__rosidl_typesupport_introspection_c__GenerateMappingPlan_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapping_interfaces, srv, GenerateMappingPlan_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapping_interfaces, srv, GenerateMappingPlan_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapping_interfaces, srv, GenerateMappingPlan_Event)()->data;
  }

  return &mapping_interfaces__srv__detail__generate_mapping_plan__rosidl_typesupport_introspection_c__GenerateMappingPlan_service_type_support_handle;
}
