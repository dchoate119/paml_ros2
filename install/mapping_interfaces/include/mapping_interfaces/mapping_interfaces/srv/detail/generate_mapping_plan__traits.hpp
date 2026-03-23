// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mapping_interfaces:srv/GenerateMappingPlan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mapping_interfaces/srv/generate_mapping_plan.hpp"


#ifndef MAPPING_INTERFACES__SRV__DETAIL__GENERATE_MAPPING_PLAN__TRAITS_HPP_
#define MAPPING_INTERFACES__SRV__DETAIL__GENERATE_MAPPING_PLAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mapping_interfaces/srv/detail/generate_mapping_plan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mapping_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateMappingPlan_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: planning_frame
  {
    out << "planning_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_frame, out);
    out << ", ";
  }

  // member: radius
  {
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << ", ";
  }

  // member: start_angle_deg
  {
    out << "start_angle_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.start_angle_deg, out);
    out << ", ";
  }

  // member: end_angle_deg
  {
    out << "end_angle_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.end_angle_deg, out);
    out << ", ";
  }

  // member: num_views
  {
    out << "num_views: ";
    rosidl_generator_traits::value_to_yaml(msg.num_views, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: face_outward
  {
    out << "face_outward: ";
    rosidl_generator_traits::value_to_yaml(msg.face_outward, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateMappingPlan_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: planning_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_frame, out);
    out << "\n";
  }

  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << "\n";
  }

  // member: start_angle_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_angle_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.start_angle_deg, out);
    out << "\n";
  }

  // member: end_angle_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_angle_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.end_angle_deg, out);
    out << "\n";
  }

  // member: num_views
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_views: ";
    rosidl_generator_traits::value_to_yaml(msg.num_views, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: face_outward
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "face_outward: ";
    rosidl_generator_traits::value_to_yaml(msg.face_outward, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateMappingPlan_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mapping_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mapping_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mapping_interfaces::srv::GenerateMappingPlan_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mapping_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mapping_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mapping_interfaces::srv::GenerateMappingPlan_Request & msg)
{
  return mapping_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mapping_interfaces::srv::GenerateMappingPlan_Request>()
{
  return "mapping_interfaces::srv::GenerateMappingPlan_Request";
}

template<>
inline const char * name<mapping_interfaces::srv::GenerateMappingPlan_Request>()
{
  return "mapping_interfaces/srv/GenerateMappingPlan_Request";
}

template<>
struct has_fixed_size<mapping_interfaces::srv::GenerateMappingPlan_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mapping_interfaces::srv::GenerateMappingPlan_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mapping_interfaces::srv::GenerateMappingPlan_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'planned_poses'
#include "geometry_msgs/msg/detail/pose_array__traits.hpp"

namespace mapping_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateMappingPlan_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: planned_poses
  {
    out << "planned_poses: ";
    to_flow_style_yaml(msg.planned_poses, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateMappingPlan_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: planned_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planned_poses:\n";
    to_block_style_yaml(msg.planned_poses, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateMappingPlan_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mapping_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mapping_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mapping_interfaces::srv::GenerateMappingPlan_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mapping_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mapping_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mapping_interfaces::srv::GenerateMappingPlan_Response & msg)
{
  return mapping_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mapping_interfaces::srv::GenerateMappingPlan_Response>()
{
  return "mapping_interfaces::srv::GenerateMappingPlan_Response";
}

template<>
inline const char * name<mapping_interfaces::srv::GenerateMappingPlan_Response>()
{
  return "mapping_interfaces/srv/GenerateMappingPlan_Response";
}

template<>
struct has_fixed_size<mapping_interfaces::srv::GenerateMappingPlan_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mapping_interfaces::srv::GenerateMappingPlan_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mapping_interfaces::srv::GenerateMappingPlan_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace mapping_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateMappingPlan_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateMappingPlan_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateMappingPlan_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mapping_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mapping_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mapping_interfaces::srv::GenerateMappingPlan_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  mapping_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mapping_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mapping_interfaces::srv::GenerateMappingPlan_Event & msg)
{
  return mapping_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mapping_interfaces::srv::GenerateMappingPlan_Event>()
{
  return "mapping_interfaces::srv::GenerateMappingPlan_Event";
}

template<>
inline const char * name<mapping_interfaces::srv::GenerateMappingPlan_Event>()
{
  return "mapping_interfaces/srv/GenerateMappingPlan_Event";
}

template<>
struct has_fixed_size<mapping_interfaces::srv::GenerateMappingPlan_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mapping_interfaces::srv::GenerateMappingPlan_Event>
  : std::integral_constant<bool, has_bounded_size<mapping_interfaces::srv::GenerateMappingPlan_Request>::value && has_bounded_size<mapping_interfaces::srv::GenerateMappingPlan_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<mapping_interfaces::srv::GenerateMappingPlan_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mapping_interfaces::srv::GenerateMappingPlan>()
{
  return "mapping_interfaces::srv::GenerateMappingPlan";
}

template<>
inline const char * name<mapping_interfaces::srv::GenerateMappingPlan>()
{
  return "mapping_interfaces/srv/GenerateMappingPlan";
}

template<>
struct has_fixed_size<mapping_interfaces::srv::GenerateMappingPlan>
  : std::integral_constant<
    bool,
    has_fixed_size<mapping_interfaces::srv::GenerateMappingPlan_Request>::value &&
    has_fixed_size<mapping_interfaces::srv::GenerateMappingPlan_Response>::value
  >
{
};

template<>
struct has_bounded_size<mapping_interfaces::srv::GenerateMappingPlan>
  : std::integral_constant<
    bool,
    has_bounded_size<mapping_interfaces::srv::GenerateMappingPlan_Request>::value &&
    has_bounded_size<mapping_interfaces::srv::GenerateMappingPlan_Response>::value
  >
{
};

template<>
struct is_service<mapping_interfaces::srv::GenerateMappingPlan>
  : std::true_type
{
};

template<>
struct is_service_request<mapping_interfaces::srv::GenerateMappingPlan_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mapping_interfaces::srv::GenerateMappingPlan_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MAPPING_INTERFACES__SRV__DETAIL__GENERATE_MAPPING_PLAN__TRAITS_HPP_
