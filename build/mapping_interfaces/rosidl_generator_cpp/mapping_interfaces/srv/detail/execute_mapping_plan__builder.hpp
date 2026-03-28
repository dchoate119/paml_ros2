// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mapping_interfaces:srv/ExecuteMappingPlan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mapping_interfaces/srv/execute_mapping_plan.hpp"


#ifndef MAPPING_INTERFACES__SRV__DETAIL__EXECUTE_MAPPING_PLAN__BUILDER_HPP_
#define MAPPING_INTERFACES__SRV__DETAIL__EXECUTE_MAPPING_PLAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mapping_interfaces/srv/detail/execute_mapping_plan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mapping_interfaces
{

namespace srv
{

namespace builder
{

class Init_ExecuteMappingPlan_Request_capture_data
{
public:
  explicit Init_ExecuteMappingPlan_Request_capture_data(::mapping_interfaces::srv::ExecuteMappingPlan_Request & msg)
  : msg_(msg)
  {}
  ::mapping_interfaces::srv::ExecuteMappingPlan_Request capture_data(::mapping_interfaces::srv::ExecuteMappingPlan_Request::_capture_data_type arg)
  {
    msg_.capture_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mapping_interfaces::srv::ExecuteMappingPlan_Request msg_;
};

class Init_ExecuteMappingPlan_Request_planned_poses
{
public:
  Init_ExecuteMappingPlan_Request_planned_poses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMappingPlan_Request_capture_data planned_poses(::mapping_interfaces::srv::ExecuteMappingPlan_Request::_planned_poses_type arg)
  {
    msg_.planned_poses = std::move(arg);
    return Init_ExecuteMappingPlan_Request_capture_data(msg_);
  }

private:
  ::mapping_interfaces::srv::ExecuteMappingPlan_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mapping_interfaces::srv::ExecuteMappingPlan_Request>()
{
  return mapping_interfaces::srv::builder::Init_ExecuteMappingPlan_Request_planned_poses();
}

}  // namespace mapping_interfaces


namespace mapping_interfaces
{

namespace srv
{

namespace builder
{

class Init_ExecuteMappingPlan_Response_failed_index
{
public:
  explicit Init_ExecuteMappingPlan_Response_failed_index(::mapping_interfaces::srv::ExecuteMappingPlan_Response & msg)
  : msg_(msg)
  {}
  ::mapping_interfaces::srv::ExecuteMappingPlan_Response failed_index(::mapping_interfaces::srv::ExecuteMappingPlan_Response::_failed_index_type arg)
  {
    msg_.failed_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mapping_interfaces::srv::ExecuteMappingPlan_Response msg_;
};

class Init_ExecuteMappingPlan_Response_completed_count
{
public:
  explicit Init_ExecuteMappingPlan_Response_completed_count(::mapping_interfaces::srv::ExecuteMappingPlan_Response & msg)
  : msg_(msg)
  {}
  Init_ExecuteMappingPlan_Response_failed_index completed_count(::mapping_interfaces::srv::ExecuteMappingPlan_Response::_completed_count_type arg)
  {
    msg_.completed_count = std::move(arg);
    return Init_ExecuteMappingPlan_Response_failed_index(msg_);
  }

private:
  ::mapping_interfaces::srv::ExecuteMappingPlan_Response msg_;
};

class Init_ExecuteMappingPlan_Response_message
{
public:
  explicit Init_ExecuteMappingPlan_Response_message(::mapping_interfaces::srv::ExecuteMappingPlan_Response & msg)
  : msg_(msg)
  {}
  Init_ExecuteMappingPlan_Response_completed_count message(::mapping_interfaces::srv::ExecuteMappingPlan_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_ExecuteMappingPlan_Response_completed_count(msg_);
  }

private:
  ::mapping_interfaces::srv::ExecuteMappingPlan_Response msg_;
};

class Init_ExecuteMappingPlan_Response_success
{
public:
  Init_ExecuteMappingPlan_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMappingPlan_Response_message success(::mapping_interfaces::srv::ExecuteMappingPlan_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ExecuteMappingPlan_Response_message(msg_);
  }

private:
  ::mapping_interfaces::srv::ExecuteMappingPlan_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mapping_interfaces::srv::ExecuteMappingPlan_Response>()
{
  return mapping_interfaces::srv::builder::Init_ExecuteMappingPlan_Response_success();
}

}  // namespace mapping_interfaces


namespace mapping_interfaces
{

namespace srv
{

namespace builder
{

class Init_ExecuteMappingPlan_Event_response
{
public:
  explicit Init_ExecuteMappingPlan_Event_response(::mapping_interfaces::srv::ExecuteMappingPlan_Event & msg)
  : msg_(msg)
  {}
  ::mapping_interfaces::srv::ExecuteMappingPlan_Event response(::mapping_interfaces::srv::ExecuteMappingPlan_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mapping_interfaces::srv::ExecuteMappingPlan_Event msg_;
};

class Init_ExecuteMappingPlan_Event_request
{
public:
  explicit Init_ExecuteMappingPlan_Event_request(::mapping_interfaces::srv::ExecuteMappingPlan_Event & msg)
  : msg_(msg)
  {}
  Init_ExecuteMappingPlan_Event_response request(::mapping_interfaces::srv::ExecuteMappingPlan_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecuteMappingPlan_Event_response(msg_);
  }

private:
  ::mapping_interfaces::srv::ExecuteMappingPlan_Event msg_;
};

class Init_ExecuteMappingPlan_Event_info
{
public:
  Init_ExecuteMappingPlan_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMappingPlan_Event_request info(::mapping_interfaces::srv::ExecuteMappingPlan_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecuteMappingPlan_Event_request(msg_);
  }

private:
  ::mapping_interfaces::srv::ExecuteMappingPlan_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mapping_interfaces::srv::ExecuteMappingPlan_Event>()
{
  return mapping_interfaces::srv::builder::Init_ExecuteMappingPlan_Event_info();
}

}  // namespace mapping_interfaces

#endif  // MAPPING_INTERFACES__SRV__DETAIL__EXECUTE_MAPPING_PLAN__BUILDER_HPP_
