// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mapping_interfaces:srv/CaptureFrame.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mapping_interfaces/srv/capture_frame.hpp"


#ifndef MAPPING_INTERFACES__SRV__DETAIL__CAPTURE_FRAME__STRUCT_HPP_
#define MAPPING_INTERFACES__SRV__DETAIL__CAPTURE_FRAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mapping_interfaces__srv__CaptureFrame_Request __attribute__((deprecated))
#else
# define DEPRECATED__mapping_interfaces__srv__CaptureFrame_Request __declspec(deprecated)
#endif

namespace mapping_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CaptureFrame_Request_
{
  using Type = CaptureFrame_Request_<ContainerAllocator>;

  explicit CaptureFrame_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit CaptureFrame_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    mapping_interfaces::srv::CaptureFrame_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mapping_interfaces::srv::CaptureFrame_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mapping_interfaces::srv::CaptureFrame_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mapping_interfaces::srv::CaptureFrame_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mapping_interfaces::srv::CaptureFrame_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mapping_interfaces::srv::CaptureFrame_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mapping_interfaces::srv::CaptureFrame_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mapping_interfaces::srv::CaptureFrame_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mapping_interfaces::srv::CaptureFrame_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mapping_interfaces::srv::CaptureFrame_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mapping_interfaces__srv__CaptureFrame_Request
    std::shared_ptr<mapping_interfaces::srv::CaptureFrame_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mapping_interfaces__srv__CaptureFrame_Request
    std::shared_ptr<mapping_interfaces::srv::CaptureFrame_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CaptureFrame_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const CaptureFrame_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CaptureFrame_Request_

// alias to use template instance with default allocator
using CaptureFrame_Request =
  mapping_interfaces::srv::CaptureFrame_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mapping_interfaces


// Include directives for member types
// Member 'rgb'
// Member 'depth'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'camera_pose'
#include "geometry_msgs/msg/detail/transform_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mapping_interfaces__srv__CaptureFrame_Response __attribute__((deprecated))
#else
# define DEPRECATED__mapping_interfaces__srv__CaptureFrame_Response __declspec(deprecated)
#endif

namespace mapping_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CaptureFrame_Response_
{
  using Type = CaptureFrame_Response_<ContainerAllocator>;

  explicit CaptureFrame_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rgb(_init),
    depth(_init),
    camera_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit CaptureFrame_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rgb(_alloc, _init),
    depth(_alloc, _init),
    camera_pose(_alloc, _init),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _rgb_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _rgb_type rgb;
  using _depth_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _depth_type depth;
  using _camera_pose_type =
    geometry_msgs::msg::TransformStamped_<ContainerAllocator>;
  _camera_pose_type camera_pose;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__rgb(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->rgb = _arg;
    return *this;
  }
  Type & set__depth(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->depth = _arg;
    return *this;
  }
  Type & set__camera_pose(
    const geometry_msgs::msg::TransformStamped_<ContainerAllocator> & _arg)
  {
    this->camera_pose = _arg;
    return *this;
  }
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

  // constant declarations

  // pointer types
  using RawPtr =
    mapping_interfaces::srv::CaptureFrame_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mapping_interfaces::srv::CaptureFrame_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mapping_interfaces::srv::CaptureFrame_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mapping_interfaces::srv::CaptureFrame_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mapping_interfaces::srv::CaptureFrame_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mapping_interfaces::srv::CaptureFrame_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mapping_interfaces::srv::CaptureFrame_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mapping_interfaces::srv::CaptureFrame_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mapping_interfaces::srv::CaptureFrame_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mapping_interfaces::srv::CaptureFrame_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mapping_interfaces__srv__CaptureFrame_Response
    std::shared_ptr<mapping_interfaces::srv::CaptureFrame_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mapping_interfaces__srv__CaptureFrame_Response
    std::shared_ptr<mapping_interfaces::srv::CaptureFrame_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CaptureFrame_Response_ & other) const
  {
    if (this->rgb != other.rgb) {
      return false;
    }
    if (this->depth != other.depth) {
      return false;
    }
    if (this->camera_pose != other.camera_pose) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const CaptureFrame_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CaptureFrame_Response_

// alias to use template instance with default allocator
using CaptureFrame_Response =
  mapping_interfaces::srv::CaptureFrame_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mapping_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mapping_interfaces__srv__CaptureFrame_Event __attribute__((deprecated))
#else
# define DEPRECATED__mapping_interfaces__srv__CaptureFrame_Event __declspec(deprecated)
#endif

namespace mapping_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CaptureFrame_Event_
{
  using Type = CaptureFrame_Event_<ContainerAllocator>;

  explicit CaptureFrame_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit CaptureFrame_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<mapping_interfaces::srv::CaptureFrame_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mapping_interfaces::srv::CaptureFrame_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<mapping_interfaces::srv::CaptureFrame_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mapping_interfaces::srv::CaptureFrame_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<mapping_interfaces::srv::CaptureFrame_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mapping_interfaces::srv::CaptureFrame_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<mapping_interfaces::srv::CaptureFrame_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mapping_interfaces::srv::CaptureFrame_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mapping_interfaces::srv::CaptureFrame_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const mapping_interfaces::srv::CaptureFrame_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mapping_interfaces::srv::CaptureFrame_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mapping_interfaces::srv::CaptureFrame_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mapping_interfaces::srv::CaptureFrame_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mapping_interfaces::srv::CaptureFrame_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mapping_interfaces::srv::CaptureFrame_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mapping_interfaces::srv::CaptureFrame_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mapping_interfaces::srv::CaptureFrame_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mapping_interfaces::srv::CaptureFrame_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mapping_interfaces__srv__CaptureFrame_Event
    std::shared_ptr<mapping_interfaces::srv::CaptureFrame_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mapping_interfaces__srv__CaptureFrame_Event
    std::shared_ptr<mapping_interfaces::srv::CaptureFrame_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CaptureFrame_Event_ & other) const
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
  bool operator!=(const CaptureFrame_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CaptureFrame_Event_

// alias to use template instance with default allocator
using CaptureFrame_Event =
  mapping_interfaces::srv::CaptureFrame_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mapping_interfaces

namespace mapping_interfaces
{

namespace srv
{

struct CaptureFrame
{
  using Request = mapping_interfaces::srv::CaptureFrame_Request;
  using Response = mapping_interfaces::srv::CaptureFrame_Response;
  using Event = mapping_interfaces::srv::CaptureFrame_Event;
};

}  // namespace srv

}  // namespace mapping_interfaces

#endif  // MAPPING_INTERFACES__SRV__DETAIL__CAPTURE_FRAME__STRUCT_HPP_
