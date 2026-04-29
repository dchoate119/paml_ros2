// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mapping_interfaces:srv/GenerateMappingPlan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mapping_interfaces/srv/generate_mapping_plan.hpp"


#ifndef MAPPING_INTERFACES__SRV__DETAIL__GENERATE_MAPPING_PLAN__BUILDER_HPP_
#define MAPPING_INTERFACES__SRV__DETAIL__GENERATE_MAPPING_PLAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mapping_interfaces/srv/detail/generate_mapping_plan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mapping_interfaces
{

namespace srv
{

namespace builder
{

class Init_GenerateMappingPlan_Request_face_outward
{
public:
  explicit Init_GenerateMappingPlan_Request_face_outward(::mapping_interfaces::srv::GenerateMappingPlan_Request & msg)
  : msg_(msg)
  {}
  ::mapping_interfaces::srv::GenerateMappingPlan_Request face_outward(::mapping_interfaces::srv::GenerateMappingPlan_Request::_face_outward_type arg)
  {
    msg_.face_outward = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mapping_interfaces::srv::GenerateMappingPlan_Request msg_;
};

class Init_GenerateMappingPlan_Request_height
{
public:
  explicit Init_GenerateMappingPlan_Request_height(::mapping_interfaces::srv::GenerateMappingPlan_Request & msg)
  : msg_(msg)
  {}
  Init_GenerateMappingPlan_Request_face_outward height(::mapping_interfaces::srv::GenerateMappingPlan_Request::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_GenerateMappingPlan_Request_face_outward(msg_);
  }

private:
  ::mapping_interfaces::srv::GenerateMappingPlan_Request msg_;
};

class Init_GenerateMappingPlan_Request_num_views
{
public:
  explicit Init_GenerateMappingPlan_Request_num_views(::mapping_interfaces::srv::GenerateMappingPlan_Request & msg)
  : msg_(msg)
  {}
  Init_GenerateMappingPlan_Request_height num_views(::mapping_interfaces::srv::GenerateMappingPlan_Request::_num_views_type arg)
  {
    msg_.num_views = std::move(arg);
    return Init_GenerateMappingPlan_Request_height(msg_);
  }

private:
  ::mapping_interfaces::srv::GenerateMappingPlan_Request msg_;
};

class Init_GenerateMappingPlan_Request_end_angle_deg
{
public:
  explicit Init_GenerateMappingPlan_Request_end_angle_deg(::mapping_interfaces::srv::GenerateMappingPlan_Request & msg)
  : msg_(msg)
  {}
  Init_GenerateMappingPlan_Request_num_views end_angle_deg(::mapping_interfaces::srv::GenerateMappingPlan_Request::_end_angle_deg_type arg)
  {
    msg_.end_angle_deg = std::move(arg);
    return Init_GenerateMappingPlan_Request_num_views(msg_);
  }

private:
  ::mapping_interfaces::srv::GenerateMappingPlan_Request msg_;
};

class Init_GenerateMappingPlan_Request_start_angle_deg
{
public:
  explicit Init_GenerateMappingPlan_Request_start_angle_deg(::mapping_interfaces::srv::GenerateMappingPlan_Request & msg)
  : msg_(msg)
  {}
  Init_GenerateMappingPlan_Request_end_angle_deg start_angle_deg(::mapping_interfaces::srv::GenerateMappingPlan_Request::_start_angle_deg_type arg)
  {
    msg_.start_angle_deg = std::move(arg);
    return Init_GenerateMappingPlan_Request_end_angle_deg(msg_);
  }

private:
  ::mapping_interfaces::srv::GenerateMappingPlan_Request msg_;
};

class Init_GenerateMappingPlan_Request_radius
{
public:
  explicit Init_GenerateMappingPlan_Request_radius(::mapping_interfaces::srv::GenerateMappingPlan_Request & msg)
  : msg_(msg)
  {}
  Init_GenerateMappingPlan_Request_start_angle_deg radius(::mapping_interfaces::srv::GenerateMappingPlan_Request::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_GenerateMappingPlan_Request_start_angle_deg(msg_);
  }

private:
  ::mapping_interfaces::srv::GenerateMappingPlan_Request msg_;
};

class Init_GenerateMappingPlan_Request_planning_frame
{
public:
  Init_GenerateMappingPlan_Request_planning_frame()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateMappingPlan_Request_radius planning_frame(::mapping_interfaces::srv::GenerateMappingPlan_Request::_planning_frame_type arg)
  {
    msg_.planning_frame = std::move(arg);
    return Init_GenerateMappingPlan_Request_radius(msg_);
  }

private:
  ::mapping_interfaces::srv::GenerateMappingPlan_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mapping_interfaces::srv::GenerateMappingPlan_Request>()
{
  return mapping_interfaces::srv::builder::Init_GenerateMappingPlan_Request_planning_frame();
}

}  // namespace mapping_interfaces


namespace mapping_interfaces
{

namespace srv
{

namespace builder
{

class Init_GenerateMappingPlan_Response_planned_poses
{
public:
  explicit Init_GenerateMappingPlan_Response_planned_poses(::mapping_interfaces::srv::GenerateMappingPlan_Response & msg)
  : msg_(msg)
  {}
  ::mapping_interfaces::srv::GenerateMappingPlan_Response planned_poses(::mapping_interfaces::srv::GenerateMappingPlan_Response::_planned_poses_type arg)
  {
    msg_.planned_poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mapping_interfaces::srv::GenerateMappingPlan_Response msg_;
};

class Init_GenerateMappingPlan_Response_message
{
public:
  explicit Init_GenerateMappingPlan_Response_message(::mapping_interfaces::srv::GenerateMappingPlan_Response & msg)
  : msg_(msg)
  {}
  Init_GenerateMappingPlan_Response_planned_poses message(::mapping_interfaces::srv::GenerateMappingPlan_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_GenerateMappingPlan_Response_planned_poses(msg_);
  }

private:
  ::mapping_interfaces::srv::GenerateMappingPlan_Response msg_;
};

class Init_GenerateMappingPlan_Response_success
{
public:
  Init_GenerateMappingPlan_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateMappingPlan_Response_message success(::mapping_interfaces::srv::GenerateMappingPlan_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GenerateMappingPlan_Response_message(msg_);
  }

private:
  ::mapping_interfaces::srv::GenerateMappingPlan_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mapping_interfaces::srv::GenerateMappingPlan_Response>()
{
  return mapping_interfaces::srv::builder::Init_GenerateMappingPlan_Response_success();
}

}  // namespace mapping_interfaces


namespace mapping_interfaces
{

namespace srv
{

namespace builder
{

class Init_GenerateMappingPlan_Event_response
{
public:
  explicit Init_GenerateMappingPlan_Event_response(::mapping_interfaces::srv::GenerateMappingPlan_Event & msg)
  : msg_(msg)
  {}
  ::mapping_interfaces::srv::GenerateMappingPlan_Event response(::mapping_interfaces::srv::GenerateMappingPlan_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mapping_interfaces::srv::GenerateMappingPlan_Event msg_;
};

class Init_GenerateMappingPlan_Event_request
{
public:
  explicit Init_GenerateMappingPlan_Event_request(::mapping_interfaces::srv::GenerateMappingPlan_Event & msg)
  : msg_(msg)
  {}
  Init_GenerateMappingPlan_Event_response request(::mapping_interfaces::srv::GenerateMappingPlan_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GenerateMappingPlan_Event_response(msg_);
  }

private:
  ::mapping_interfaces::srv::GenerateMappingPlan_Event msg_;
};

class Init_GenerateMappingPlan_Event_info
{
public:
  Init_GenerateMappingPlan_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateMappingPlan_Event_request info(::mapping_interfaces::srv::GenerateMappingPlan_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GenerateMappingPlan_Event_request(msg_);
  }

private:
  ::mapping_interfaces::srv::GenerateMappingPlan_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mapping_interfaces::srv::GenerateMappingPlan_Event>()
{
  return mapping_interfaces::srv::builder::Init_GenerateMappingPlan_Event_info();
}

}  // namespace mapping_interfaces

#endif  // MAPPING_INTERFACES__SRV__DETAIL__GENERATE_MAPPING_PLAN__BUILDER_HPP_
