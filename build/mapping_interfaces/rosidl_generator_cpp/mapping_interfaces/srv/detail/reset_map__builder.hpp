// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mapping_interfaces:srv/ResetMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mapping_interfaces/srv/reset_map.hpp"


#ifndef MAPPING_INTERFACES__SRV__DETAIL__RESET_MAP__BUILDER_HPP_
#define MAPPING_INTERFACES__SRV__DETAIL__RESET_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mapping_interfaces/srv/detail/reset_map__struct.hpp"
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
auto build<::mapping_interfaces::srv::ResetMap_Request>()
{
  return ::mapping_interfaces::srv::ResetMap_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mapping_interfaces


namespace mapping_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetMap_Response_message
{
public:
  explicit Init_ResetMap_Response_message(::mapping_interfaces::srv::ResetMap_Response & msg)
  : msg_(msg)
  {}
  ::mapping_interfaces::srv::ResetMap_Response message(::mapping_interfaces::srv::ResetMap_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mapping_interfaces::srv::ResetMap_Response msg_;
};

class Init_ResetMap_Response_success
{
public:
  Init_ResetMap_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResetMap_Response_message success(::mapping_interfaces::srv::ResetMap_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ResetMap_Response_message(msg_);
  }

private:
  ::mapping_interfaces::srv::ResetMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mapping_interfaces::srv::ResetMap_Response>()
{
  return mapping_interfaces::srv::builder::Init_ResetMap_Response_success();
}

}  // namespace mapping_interfaces


namespace mapping_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetMap_Event_response
{
public:
  explicit Init_ResetMap_Event_response(::mapping_interfaces::srv::ResetMap_Event & msg)
  : msg_(msg)
  {}
  ::mapping_interfaces::srv::ResetMap_Event response(::mapping_interfaces::srv::ResetMap_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mapping_interfaces::srv::ResetMap_Event msg_;
};

class Init_ResetMap_Event_request
{
public:
  explicit Init_ResetMap_Event_request(::mapping_interfaces::srv::ResetMap_Event & msg)
  : msg_(msg)
  {}
  Init_ResetMap_Event_response request(::mapping_interfaces::srv::ResetMap_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ResetMap_Event_response(msg_);
  }

private:
  ::mapping_interfaces::srv::ResetMap_Event msg_;
};

class Init_ResetMap_Event_info
{
public:
  Init_ResetMap_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResetMap_Event_request info(::mapping_interfaces::srv::ResetMap_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ResetMap_Event_request(msg_);
  }

private:
  ::mapping_interfaces::srv::ResetMap_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mapping_interfaces::srv::ResetMap_Event>()
{
  return mapping_interfaces::srv::builder::Init_ResetMap_Event_info();
}

}  // namespace mapping_interfaces

#endif  // MAPPING_INTERFACES__SRV__DETAIL__RESET_MAP__BUILDER_HPP_
