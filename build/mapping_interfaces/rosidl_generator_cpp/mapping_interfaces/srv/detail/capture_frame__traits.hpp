// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mapping_interfaces:srv/CaptureFrame.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mapping_interfaces/srv/capture_frame.hpp"


#ifndef MAPPING_INTERFACES__SRV__DETAIL__CAPTURE_FRAME__TRAITS_HPP_
#define MAPPING_INTERFACES__SRV__DETAIL__CAPTURE_FRAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mapping_interfaces/srv/detail/capture_frame__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mapping_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CaptureFrame_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CaptureFrame_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CaptureFrame_Request & msg, bool use_flow_style = false)
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
  const mapping_interfaces::srv::CaptureFrame_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mapping_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mapping_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mapping_interfaces::srv::CaptureFrame_Request & msg)
{
  return mapping_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mapping_interfaces::srv::CaptureFrame_Request>()
{
  return "mapping_interfaces::srv::CaptureFrame_Request";
}

template<>
inline const char * name<mapping_interfaces::srv::CaptureFrame_Request>()
{
  return "mapping_interfaces/srv/CaptureFrame_Request";
}

template<>
struct has_fixed_size<mapping_interfaces::srv::CaptureFrame_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mapping_interfaces::srv::CaptureFrame_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mapping_interfaces::srv::CaptureFrame_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'rgb'
// Member 'depth'
#include "sensor_msgs/msg/detail/image__traits.hpp"
// Member 'camera_pose'
#include "geometry_msgs/msg/detail/transform_stamped__traits.hpp"

namespace mapping_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CaptureFrame_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: rgb
  {
    out << "rgb: ";
    to_flow_style_yaml(msg.rgb, out);
    out << ", ";
  }

  // member: depth
  {
    out << "depth: ";
    to_flow_style_yaml(msg.depth, out);
    out << ", ";
  }

  // member: camera_pose
  {
    out << "camera_pose: ";
    to_flow_style_yaml(msg.camera_pose, out);
    out << ", ";
  }

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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CaptureFrame_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rgb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rgb:\n";
    to_block_style_yaml(msg.rgb, out, indentation + 2);
  }

  // member: depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth:\n";
    to_block_style_yaml(msg.depth, out, indentation + 2);
  }

  // member: camera_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_pose:\n";
    to_block_style_yaml(msg.camera_pose, out, indentation + 2);
  }

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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CaptureFrame_Response & msg, bool use_flow_style = false)
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
  const mapping_interfaces::srv::CaptureFrame_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mapping_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mapping_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mapping_interfaces::srv::CaptureFrame_Response & msg)
{
  return mapping_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mapping_interfaces::srv::CaptureFrame_Response>()
{
  return "mapping_interfaces::srv::CaptureFrame_Response";
}

template<>
inline const char * name<mapping_interfaces::srv::CaptureFrame_Response>()
{
  return "mapping_interfaces/srv/CaptureFrame_Response";
}

template<>
struct has_fixed_size<mapping_interfaces::srv::CaptureFrame_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mapping_interfaces::srv::CaptureFrame_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mapping_interfaces::srv::CaptureFrame_Response>
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
  const CaptureFrame_Event & msg,
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
  const CaptureFrame_Event & msg,
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

inline std::string to_yaml(const CaptureFrame_Event & msg, bool use_flow_style = false)
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
  const mapping_interfaces::srv::CaptureFrame_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  mapping_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mapping_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mapping_interfaces::srv::CaptureFrame_Event & msg)
{
  return mapping_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mapping_interfaces::srv::CaptureFrame_Event>()
{
  return "mapping_interfaces::srv::CaptureFrame_Event";
}

template<>
inline const char * name<mapping_interfaces::srv::CaptureFrame_Event>()
{
  return "mapping_interfaces/srv/CaptureFrame_Event";
}

template<>
struct has_fixed_size<mapping_interfaces::srv::CaptureFrame_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mapping_interfaces::srv::CaptureFrame_Event>
  : std::integral_constant<bool, has_bounded_size<mapping_interfaces::srv::CaptureFrame_Request>::value && has_bounded_size<mapping_interfaces::srv::CaptureFrame_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<mapping_interfaces::srv::CaptureFrame_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mapping_interfaces::srv::CaptureFrame>()
{
  return "mapping_interfaces::srv::CaptureFrame";
}

template<>
inline const char * name<mapping_interfaces::srv::CaptureFrame>()
{
  return "mapping_interfaces/srv/CaptureFrame";
}

template<>
struct has_fixed_size<mapping_interfaces::srv::CaptureFrame>
  : std::integral_constant<
    bool,
    has_fixed_size<mapping_interfaces::srv::CaptureFrame_Request>::value &&
    has_fixed_size<mapping_interfaces::srv::CaptureFrame_Response>::value
  >
{
};

template<>
struct has_bounded_size<mapping_interfaces::srv::CaptureFrame>
  : std::integral_constant<
    bool,
    has_bounded_size<mapping_interfaces::srv::CaptureFrame_Request>::value &&
    has_bounded_size<mapping_interfaces::srv::CaptureFrame_Response>::value
  >
{
};

template<>
struct is_service<mapping_interfaces::srv::CaptureFrame>
  : std::true_type
{
};

template<>
struct is_service_request<mapping_interfaces::srv::CaptureFrame_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mapping_interfaces::srv::CaptureFrame_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MAPPING_INTERFACES__SRV__DETAIL__CAPTURE_FRAME__TRAITS_HPP_
