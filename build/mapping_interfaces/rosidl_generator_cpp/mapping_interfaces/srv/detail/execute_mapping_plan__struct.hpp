// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mapping_interfaces:srv/ExecuteMappingPlan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mapping_interfaces/srv/execute_mapping_plan.hpp"


#ifndef MAPPING_INTERFACES__SRV__DETAIL__EXECUTE_MAPPING_PLAN__STRUCT_HPP_
#define MAPPING_INTERFACES__SRV__DETAIL__EXECUTE_MAPPING_PLAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'planned_poses'
#include "geometry_msgs/msg/detail/pose_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mapping_interfaces__srv__ExecuteMappingPlan_Request __attribute__((deprecated))
#else
# define DEPRECATED__mapping_interfaces__srv__ExecuteMappingPlan_Request __declspec(deprecated)
#endif

namespace mapping_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecuteMappingPlan_Request_
{
  using Type = ExecuteMappingPlan_Request_<ContainerAllocator>;

  explicit ExecuteMappingPlan_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : planned_poses(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->capture_data = false;
    }
  }

  explicit ExecuteMappingPlan_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : planned_poses(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->capture_data = false;
    }
  }

  // field types and members
  using _planned_poses_type =
    geometry_msgs::msg::PoseArray_<ContainerAllocator>;
  _planned_poses_type planned_poses;
  using _capture_data_type =
    bool;
  _capture_data_type capture_data;

  // setters for named parameter idiom
  Type & set__planned_poses(
    const geometry_msgs::msg::PoseArray_<ContainerAllocator> & _arg)
  {
    this->planned_poses = _arg;
    return *this;
  }
  Type & set__capture_data(
    const bool & _arg)
  {
    this->capture_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mapping_interfaces::srv::ExecuteMappingPlan_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mapping_interfaces::srv::ExecuteMappingPlan_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mapping_interfaces::srv::ExecuteMappingPlan_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mapping_interfaces::srv::ExecuteMappingPlan_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mapping_interfaces__srv__ExecuteMappingPlan_Request
    std::shared_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mapping_interfaces__srv__ExecuteMappingPlan_Request
    std::shared_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteMappingPlan_Request_ & other) const
  {
    if (this->planned_poses != other.planned_poses) {
      return false;
    }
    if (this->capture_data != other.capture_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteMappingPlan_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteMappingPlan_Request_

// alias to use template instance with default allocator
using ExecuteMappingPlan_Request =
  mapping_interfaces::srv::ExecuteMappingPlan_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mapping_interfaces


#ifndef _WIN32
# define DEPRECATED__mapping_interfaces__srv__ExecuteMappingPlan_Response __attribute__((deprecated))
#else
# define DEPRECATED__mapping_interfaces__srv__ExecuteMappingPlan_Response __declspec(deprecated)
#endif

namespace mapping_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecuteMappingPlan_Response_
{
  using Type = ExecuteMappingPlan_Response_<ContainerAllocator>;

  explicit ExecuteMappingPlan_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->completed_count = 0l;
      this->failed_index = 0l;
    }
  }

  explicit ExecuteMappingPlan_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->completed_count = 0l;
      this->failed_index = 0l;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _completed_count_type =
    int32_t;
  _completed_count_type completed_count;
  using _failed_index_type =
    int32_t;
  _failed_index_type failed_index;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__completed_count(
    const int32_t & _arg)
  {
    this->completed_count = _arg;
    return *this;
  }
  Type & set__failed_index(
    const int32_t & _arg)
  {
    this->failed_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mapping_interfaces::srv::ExecuteMappingPlan_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mapping_interfaces::srv::ExecuteMappingPlan_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mapping_interfaces::srv::ExecuteMappingPlan_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mapping_interfaces::srv::ExecuteMappingPlan_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mapping_interfaces__srv__ExecuteMappingPlan_Response
    std::shared_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mapping_interfaces__srv__ExecuteMappingPlan_Response
    std::shared_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteMappingPlan_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->completed_count != other.completed_count) {
      return false;
    }
    if (this->failed_index != other.failed_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteMappingPlan_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteMappingPlan_Response_

// alias to use template instance with default allocator
using ExecuteMappingPlan_Response =
  mapping_interfaces::srv::ExecuteMappingPlan_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mapping_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mapping_interfaces__srv__ExecuteMappingPlan_Event __attribute__((deprecated))
#else
# define DEPRECATED__mapping_interfaces__srv__ExecuteMappingPlan_Event __declspec(deprecated)
#endif

namespace mapping_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecuteMappingPlan_Event_
{
  using Type = ExecuteMappingPlan_Event_<ContainerAllocator>;

  explicit ExecuteMappingPlan_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ExecuteMappingPlan_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<mapping_interfaces::srv::ExecuteMappingPlan_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mapping_interfaces::srv::ExecuteMappingPlan_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<mapping_interfaces::srv::ExecuteMappingPlan_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mapping_interfaces::srv::ExecuteMappingPlan_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<mapping_interfaces::srv::ExecuteMappingPlan_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mapping_interfaces::srv::ExecuteMappingPlan_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<mapping_interfaces::srv::ExecuteMappingPlan_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mapping_interfaces::srv::ExecuteMappingPlan_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mapping_interfaces::srv::ExecuteMappingPlan_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const mapping_interfaces::srv::ExecuteMappingPlan_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mapping_interfaces::srv::ExecuteMappingPlan_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mapping_interfaces::srv::ExecuteMappingPlan_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mapping_interfaces__srv__ExecuteMappingPlan_Event
    std::shared_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mapping_interfaces__srv__ExecuteMappingPlan_Event
    std::shared_ptr<mapping_interfaces::srv::ExecuteMappingPlan_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteMappingPlan_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteMappingPlan_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteMappingPlan_Event_

// alias to use template instance with default allocator
using ExecuteMappingPlan_Event =
  mapping_interfaces::srv::ExecuteMappingPlan_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mapping_interfaces

namespace mapping_interfaces
{

namespace srv
{

struct ExecuteMappingPlan
{
  using Request = mapping_interfaces::srv::ExecuteMappingPlan_Request;
  using Response = mapping_interfaces::srv::ExecuteMappingPlan_Response;
  using Event = mapping_interfaces::srv::ExecuteMappingPlan_Event;
};

}  // namespace srv

}  // namespace mapping_interfaces

#endif  // MAPPING_INTERFACES__SRV__DETAIL__EXECUTE_MAPPING_PLAN__STRUCT_HPP_
