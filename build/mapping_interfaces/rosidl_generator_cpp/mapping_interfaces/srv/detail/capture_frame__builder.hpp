// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mapping_interfaces:srv/CaptureFrame.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mapping_interfaces/srv/capture_frame.hpp"


#ifndef MAPPING_INTERFACES__SRV__DETAIL__CAPTURE_FRAME__BUILDER_HPP_
#define MAPPING_INTERFACES__SRV__DETAIL__CAPTURE_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mapping_interfaces/srv/detail/capture_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mapping_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mapping_interfaces::srv::CaptureFrame_Request>()
{
  return ::mapping_interfaces::srv::CaptureFrame_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mapping_interfaces


namespace mapping_interfaces
{

namespace srv
{

namespace builder
{

class Init_CaptureFrame_Response_message
{
public:
  explicit Init_CaptureFrame_Response_message(::mapping_interfaces::srv::CaptureFrame_Response & msg)
  : msg_(msg)
  {}
  ::mapping_interfaces::srv::CaptureFrame_Response message(::mapping_interfaces::srv::CaptureFrame_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mapping_interfaces::srv::CaptureFrame_Response msg_;
};

class Init_CaptureFrame_Response_success
{
public:
  explicit Init_CaptureFrame_Response_success(::mapping_interfaces::srv::CaptureFrame_Response & msg)
  : msg_(msg)
  {}
  Init_CaptureFrame_Response_message success(::mapping_interfaces::srv::CaptureFrame_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CaptureFrame_Response_message(msg_);
  }

private:
  ::mapping_interfaces::srv::CaptureFrame_Response msg_;
};

class Init_CaptureFrame_Response_camera_pose
{
public:
  explicit Init_CaptureFrame_Response_camera_pose(::mapping_interfaces::srv::CaptureFrame_Response & msg)
  : msg_(msg)
  {}
  Init_CaptureFrame_Response_success camera_pose(::mapping_interfaces::srv::CaptureFrame_Response::_camera_pose_type arg)
  {
    msg_.camera_pose = std::move(arg);
    return Init_CaptureFrame_Response_success(msg_);
  }

private:
  ::mapping_interfaces::srv::CaptureFrame_Response msg_;
};

class Init_CaptureFrame_Response_depth
{
public:
  explicit Init_CaptureFrame_Response_depth(::mapping_interfaces::srv::CaptureFrame_Response & msg)
  : msg_(msg)
  {}
  Init_CaptureFrame_Response_camera_pose depth(::mapping_interfaces::srv::CaptureFrame_Response::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return Init_CaptureFrame_Response_camera_pose(msg_);
  }

private:
  ::mapping_interfaces::srv::CaptureFrame_Response msg_;
};

class Init_CaptureFrame_Response_rgb
{
public:
  Init_CaptureFrame_Response_rgb()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureFrame_Response_depth rgb(::mapping_interfaces::srv::CaptureFrame_Response::_rgb_type arg)
  {
    msg_.rgb = std::move(arg);
    return Init_CaptureFrame_Response_depth(msg_);
  }

private:
  ::mapping_interfaces::srv::CaptureFrame_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mapping_interfaces::srv::CaptureFrame_Response>()
{
  return mapping_interfaces::srv::builder::Init_CaptureFrame_Response_rgb();
}

}  // namespace mapping_interfaces


namespace mapping_interfaces
{

namespace srv
{

namespace builder
{

class Init_CaptureFrame_Event_response
{
public:
  explicit Init_CaptureFrame_Event_response(::mapping_interfaces::srv::CaptureFrame_Event & msg)
  : msg_(msg)
  {}
  ::mapping_interfaces::srv::CaptureFrame_Event response(::mapping_interfaces::srv::CaptureFrame_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mapping_interfaces::srv::CaptureFrame_Event msg_;
};

class Init_CaptureFrame_Event_request
{
public:
  explicit Init_CaptureFrame_Event_request(::mapping_interfaces::srv::CaptureFrame_Event & msg)
  : msg_(msg)
  {}
  Init_CaptureFrame_Event_response request(::mapping_interfaces::srv::CaptureFrame_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CaptureFrame_Event_response(msg_);
  }

private:
  ::mapping_interfaces::srv::CaptureFrame_Event msg_;
};

class Init_CaptureFrame_Event_info
{
public:
  Init_CaptureFrame_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureFrame_Event_request info(::mapping_interfaces::srv::CaptureFrame_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CaptureFrame_Event_request(msg_);
  }

private:
  ::mapping_interfaces::srv::CaptureFrame_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mapping_interfaces::srv::CaptureFrame_Event>()
{
  return mapping_interfaces::srv::builder::Init_CaptureFrame_Event_info();
}

}  // namespace mapping_interfaces

#endif  // MAPPING_INTERFACES__SRV__DETAIL__CAPTURE_FRAME__BUILDER_HPP_
