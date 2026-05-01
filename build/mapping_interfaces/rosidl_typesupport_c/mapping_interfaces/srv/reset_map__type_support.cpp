// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from mapping_interfaces:srv/ResetMap.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mapping_interfaces/srv/detail/reset_map__struct.h"
#include "mapping_interfaces/srv/detail/reset_map__type_support.h"
#include "mapping_interfaces/srv/detail/reset_map__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mapping_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ResetMap_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetMap_Request_type_support_ids_t;

static const _ResetMap_Request_type_support_ids_t _ResetMap_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ResetMap_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetMap_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetMap_Request_type_support_symbol_names_t _ResetMap_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mapping_interfaces, srv, ResetMap_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapping_interfaces, srv, ResetMap_Request)),
  }
};

typedef struct _ResetMap_Request_type_support_data_t
{
  void * data[2];
} _ResetMap_Request_type_support_data_t;

static _ResetMap_Request_type_support_data_t _ResetMap_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetMap_Request_message_typesupport_map = {
  2,
  "mapping_interfaces",
  &_ResetMap_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ResetMap_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ResetMap_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResetMap_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetMap_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mapping_interfaces__srv__ResetMap_Request__get_type_hash,
  &mapping_interfaces__srv__ResetMap_Request__get_type_description,
  &mapping_interfaces__srv__ResetMap_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace mapping_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mapping_interfaces, srv, ResetMap_Request)() {
  return &::mapping_interfaces::srv::rosidl_typesupport_c::ResetMap_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mapping_interfaces/srv/detail/reset_map__struct.h"
// already included above
// #include "mapping_interfaces/srv/detail/reset_map__type_support.h"
// already included above
// #include "mapping_interfaces/srv/detail/reset_map__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mapping_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ResetMap_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetMap_Response_type_support_ids_t;

static const _ResetMap_Response_type_support_ids_t _ResetMap_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ResetMap_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetMap_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetMap_Response_type_support_symbol_names_t _ResetMap_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mapping_interfaces, srv, ResetMap_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapping_interfaces, srv, ResetMap_Response)),
  }
};

typedef struct _ResetMap_Response_type_support_data_t
{
  void * data[2];
} _ResetMap_Response_type_support_data_t;

static _ResetMap_Response_type_support_data_t _ResetMap_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetMap_Response_message_typesupport_map = {
  2,
  "mapping_interfaces",
  &_ResetMap_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ResetMap_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ResetMap_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResetMap_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetMap_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mapping_interfaces__srv__ResetMap_Response__get_type_hash,
  &mapping_interfaces__srv__ResetMap_Response__get_type_description,
  &mapping_interfaces__srv__ResetMap_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace mapping_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mapping_interfaces, srv, ResetMap_Response)() {
  return &::mapping_interfaces::srv::rosidl_typesupport_c::ResetMap_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mapping_interfaces/srv/detail/reset_map__struct.h"
// already included above
// #include "mapping_interfaces/srv/detail/reset_map__type_support.h"
// already included above
// #include "mapping_interfaces/srv/detail/reset_map__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mapping_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ResetMap_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetMap_Event_type_support_ids_t;

static const _ResetMap_Event_type_support_ids_t _ResetMap_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ResetMap_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetMap_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetMap_Event_type_support_symbol_names_t _ResetMap_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mapping_interfaces, srv, ResetMap_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapping_interfaces, srv, ResetMap_Event)),
  }
};

typedef struct _ResetMap_Event_type_support_data_t
{
  void * data[2];
} _ResetMap_Event_type_support_data_t;

static _ResetMap_Event_type_support_data_t _ResetMap_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetMap_Event_message_typesupport_map = {
  2,
  "mapping_interfaces",
  &_ResetMap_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ResetMap_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ResetMap_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResetMap_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetMap_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mapping_interfaces__srv__ResetMap_Event__get_type_hash,
  &mapping_interfaces__srv__ResetMap_Event__get_type_description,
  &mapping_interfaces__srv__ResetMap_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace mapping_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mapping_interfaces, srv, ResetMap_Event)() {
  return &::mapping_interfaces::srv::rosidl_typesupport_c::ResetMap_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mapping_interfaces/srv/detail/reset_map__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace mapping_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _ResetMap_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetMap_type_support_ids_t;

static const _ResetMap_type_support_ids_t _ResetMap_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ResetMap_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetMap_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetMap_type_support_symbol_names_t _ResetMap_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mapping_interfaces, srv, ResetMap)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapping_interfaces, srv, ResetMap)),
  }
};

typedef struct _ResetMap_type_support_data_t
{
  void * data[2];
} _ResetMap_type_support_data_t;

static _ResetMap_type_support_data_t _ResetMap_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetMap_service_typesupport_map = {
  2,
  "mapping_interfaces",
  &_ResetMap_service_typesupport_ids.typesupport_identifier[0],
  &_ResetMap_service_typesupport_symbol_names.symbol_name[0],
  &_ResetMap_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ResetMap_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetMap_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ResetMap_Request_message_type_support_handle,
  &ResetMap_Response_message_type_support_handle,
  &ResetMap_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mapping_interfaces,
    srv,
    ResetMap
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mapping_interfaces,
    srv,
    ResetMap
  ),
  &mapping_interfaces__srv__ResetMap__get_type_hash,
  &mapping_interfaces__srv__ResetMap__get_type_description,
  &mapping_interfaces__srv__ResetMap__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace mapping_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, mapping_interfaces, srv, ResetMap)() {
  return &::mapping_interfaces::srv::rosidl_typesupport_c::ResetMap_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
