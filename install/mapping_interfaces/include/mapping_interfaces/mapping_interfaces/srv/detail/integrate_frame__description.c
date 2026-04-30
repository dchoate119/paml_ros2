// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mapping_interfaces:srv/IntegrateFrame.idl
// generated code does not contain a copyright notice

#include "mapping_interfaces/srv/detail/integrate_frame__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mapping_interfaces
const rosidl_type_hash_t *
mapping_interfaces__srv__IntegrateFrame__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5a, 0xb4, 0xed, 0xec, 0xf6, 0x1c, 0x8b, 0x45,
      0x3a, 0x77, 0x1a, 0x32, 0xa4, 0xcd, 0x29, 0x19,
      0xf8, 0x57, 0xe6, 0x1c, 0x0e, 0xb8, 0xfa, 0xc4,
      0xeb, 0x02, 0x5e, 0x4e, 0x72, 0x5b, 0xf0, 0xaf,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mapping_interfaces
const rosidl_type_hash_t *
mapping_interfaces__srv__IntegrateFrame_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfb, 0x23, 0xaf, 0x29, 0x3a, 0x8c, 0xc3, 0x8a,
      0x25, 0x86, 0xf3, 0x0e, 0x8c, 0x7a, 0xe9, 0x73,
      0x4c, 0xfb, 0xcf, 0x69, 0xe9, 0x0b, 0x10, 0x39,
      0x18, 0x5b, 0xc3, 0xc3, 0x10, 0xbf, 0x2f, 0x9d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mapping_interfaces
const rosidl_type_hash_t *
mapping_interfaces__srv__IntegrateFrame_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc2, 0x2f, 0x03, 0x22, 0x68, 0x08, 0x06, 0x51,
      0x76, 0xa6, 0x1f, 0xb6, 0x23, 0xdf, 0xd8, 0xca,
      0xac, 0x62, 0xe3, 0x59, 0xde, 0x0a, 0xe0, 0x59,
      0x4f, 0x96, 0x2f, 0x6c, 0x33, 0x0d, 0xb9, 0x82,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mapping_interfaces
const rosidl_type_hash_t *
mapping_interfaces__srv__IntegrateFrame_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3a, 0x6e, 0x71, 0xc6, 0x99, 0x63, 0x8c, 0xcc,
      0x6f, 0x20, 0x21, 0x48, 0x8c, 0x09, 0x55, 0x73,
      0xfb, 0x79, 0xc1, 0xca, 0x8a, 0x59, 0xcc, 0x4b,
      0x82, 0x8a, 0x7a, 0x95, 0x8f, 0xfb, 0x29, 0xe2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char mapping_interfaces__srv__IntegrateFrame__TYPE_NAME[] = "mapping_interfaces/srv/IntegrateFrame";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mapping_interfaces__srv__IntegrateFrame_Event__TYPE_NAME[] = "mapping_interfaces/srv/IntegrateFrame_Event";
static char mapping_interfaces__srv__IntegrateFrame_Request__TYPE_NAME[] = "mapping_interfaces/srv/IntegrateFrame_Request";
static char mapping_interfaces__srv__IntegrateFrame_Response__TYPE_NAME[] = "mapping_interfaces/srv/IntegrateFrame_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char mapping_interfaces__srv__IntegrateFrame__FIELD_NAME__request_message[] = "request_message";
static char mapping_interfaces__srv__IntegrateFrame__FIELD_NAME__response_message[] = "response_message";
static char mapping_interfaces__srv__IntegrateFrame__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field mapping_interfaces__srv__IntegrateFrame__FIELDS[] = {
  {
    {mapping_interfaces__srv__IntegrateFrame__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mapping_interfaces__srv__IntegrateFrame_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {mapping_interfaces__srv__IntegrateFrame__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mapping_interfaces__srv__IntegrateFrame_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {mapping_interfaces__srv__IntegrateFrame__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mapping_interfaces__srv__IntegrateFrame_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mapping_interfaces__srv__IntegrateFrame__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mapping_interfaces__srv__IntegrateFrame_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {mapping_interfaces__srv__IntegrateFrame_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {mapping_interfaces__srv__IntegrateFrame_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mapping_interfaces__srv__IntegrateFrame__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mapping_interfaces__srv__IntegrateFrame__TYPE_NAME, 37, 37},
      {mapping_interfaces__srv__IntegrateFrame__FIELDS, 3, 3},
    },
    {mapping_interfaces__srv__IntegrateFrame__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = mapping_interfaces__srv__IntegrateFrame_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = mapping_interfaces__srv__IntegrateFrame_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = mapping_interfaces__srv__IntegrateFrame_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mapping_interfaces__srv__IntegrateFrame_Request__FIELD_NAME__waypoint_id[] = "waypoint_id";

static rosidl_runtime_c__type_description__Field mapping_interfaces__srv__IntegrateFrame_Request__FIELDS[] = {
  {
    {mapping_interfaces__srv__IntegrateFrame_Request__FIELD_NAME__waypoint_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mapping_interfaces__srv__IntegrateFrame_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mapping_interfaces__srv__IntegrateFrame_Request__TYPE_NAME, 45, 45},
      {mapping_interfaces__srv__IntegrateFrame_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mapping_interfaces__srv__IntegrateFrame_Response__FIELD_NAME__success[] = "success";
static char mapping_interfaces__srv__IntegrateFrame_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field mapping_interfaces__srv__IntegrateFrame_Response__FIELDS[] = {
  {
    {mapping_interfaces__srv__IntegrateFrame_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mapping_interfaces__srv__IntegrateFrame_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mapping_interfaces__srv__IntegrateFrame_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mapping_interfaces__srv__IntegrateFrame_Response__TYPE_NAME, 46, 46},
      {mapping_interfaces__srv__IntegrateFrame_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mapping_interfaces__srv__IntegrateFrame_Event__FIELD_NAME__info[] = "info";
static char mapping_interfaces__srv__IntegrateFrame_Event__FIELD_NAME__request[] = "request";
static char mapping_interfaces__srv__IntegrateFrame_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field mapping_interfaces__srv__IntegrateFrame_Event__FIELDS[] = {
  {
    {mapping_interfaces__srv__IntegrateFrame_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {mapping_interfaces__srv__IntegrateFrame_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mapping_interfaces__srv__IntegrateFrame_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {mapping_interfaces__srv__IntegrateFrame_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mapping_interfaces__srv__IntegrateFrame_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mapping_interfaces__srv__IntegrateFrame_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mapping_interfaces__srv__IntegrateFrame_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {mapping_interfaces__srv__IntegrateFrame_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mapping_interfaces__srv__IntegrateFrame_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mapping_interfaces__srv__IntegrateFrame_Event__TYPE_NAME, 43, 43},
      {mapping_interfaces__srv__IntegrateFrame_Event__FIELDS, 3, 3},
    },
    {mapping_interfaces__srv__IntegrateFrame_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = mapping_interfaces__srv__IntegrateFrame_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = mapping_interfaces__srv__IntegrateFrame_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 waypoint_id\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mapping_interfaces__srv__IntegrateFrame__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mapping_interfaces__srv__IntegrateFrame__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 49, 49},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mapping_interfaces__srv__IntegrateFrame_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mapping_interfaces__srv__IntegrateFrame_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mapping_interfaces__srv__IntegrateFrame_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mapping_interfaces__srv__IntegrateFrame_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mapping_interfaces__srv__IntegrateFrame_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mapping_interfaces__srv__IntegrateFrame_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mapping_interfaces__srv__IntegrateFrame__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mapping_interfaces__srv__IntegrateFrame__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mapping_interfaces__srv__IntegrateFrame_Event__get_individual_type_description_source(NULL);
    sources[3] = *mapping_interfaces__srv__IntegrateFrame_Request__get_individual_type_description_source(NULL);
    sources[4] = *mapping_interfaces__srv__IntegrateFrame_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mapping_interfaces__srv__IntegrateFrame_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mapping_interfaces__srv__IntegrateFrame_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mapping_interfaces__srv__IntegrateFrame_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mapping_interfaces__srv__IntegrateFrame_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mapping_interfaces__srv__IntegrateFrame_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mapping_interfaces__srv__IntegrateFrame_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mapping_interfaces__srv__IntegrateFrame_Request__get_individual_type_description_source(NULL);
    sources[3] = *mapping_interfaces__srv__IntegrateFrame_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
