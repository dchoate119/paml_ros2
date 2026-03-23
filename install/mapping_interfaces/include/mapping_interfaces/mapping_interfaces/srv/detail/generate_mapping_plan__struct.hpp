// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mapping_interfaces:srv/GenerateMappingPlan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mapping_interfaces/srv/generate_mapping_plan.hpp"


#ifndef MAPPING_INTERFACES__SRV__DETAIL__GENERATE_MAPPING_PLAN__STRUCT_HPP_
#define MAPPING_INTERFACES__SRV__DETAIL__GENERATE_MAPPING_PLAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mapping_interfaces__srv__GenerateMappingPlan_Request __attribute__((deprecated))
#else
# define DEPRECATED__mapping_interfaces__srv__GenerateMappingPlan_Request __declspec(deprecated)
#endif

namespace mapping_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GenerateMappingPlan_Request_
{
  using Type = GenerateMappingPlan_Request_<ContainerAllocator>;

  explicit GenerateMappingPlan_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planning_frame = "";
      this->radius = 0.0f;
      this->start_angle_deg = 0.0f;
      this->end_angle_deg = 0.0f;
      this->num_views = 0l;
      this->height = 0.0f;
      this->face_outward = false;
    }
  }

  explicit GenerateMappingPlan_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : planning_frame(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planning_frame = "";
      this->radius = 0.0f;
      this->start_angle_deg = 0.0f;
      this->end_angle_deg = 0.0f;
      this->num_views = 0l;
      this->height = 0.0f;
      this->face_outward = false;
    }
  }

  // field types and members
  using _planning_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _planning_frame_type planning_frame;
  using _radius_type =
    float;
  _radius_type radius;
  using _start_angle_deg_type =
    float;
  _start_angle_deg_type start_angle_deg;
  using _end_angle_deg_type =
    float;
  _end_angle_deg_type end_angle_deg;
  using _num_views_type =
    int32_t;
  _num_views_type num_views;
  using _height_type =
    float;
  _height_type height;
  using _face_outward_type =
    bool;
  _face_outward_type face_outward;

  // setters for named parameter idiom
  Type & set__planning_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->planning_frame = _arg;
    return *this;
  }
  Type & set__radius(
    const float & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__start_angle_deg(
    const float & _arg)
  {
    this->start_angle_deg = _arg;
    return *this;
  }
  Type & set__end_angle_deg(
    const float & _arg)
  {
    this->end_angle_deg = _arg;
    return *this;
  }
  Type & set__num_views(
    const int32_t & _arg)
  {
    this->num_views = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__face_outward(
    const bool & _arg)
  {
    this->face_outward = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mapping_interfaces::srv::GenerateMappingPlan_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mapping_interfaces::srv::GenerateMappingPlan_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mapping_interfaces::srv::GenerateMappingPlan_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mapping_interfaces::srv::GenerateMappingPlan_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mapping_interfaces::srv::GenerateMappingPlan_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mapping_interfaces::srv::GenerateMappingPlan_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mapping_interfaces::srv::GenerateMappingPlan_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mapping_interfaces::srv::GenerateMappingPlan_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mapping_interfaces::srv::GenerateMappingPlan_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mapping_interfaces::srv::GenerateMappingPlan_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mapping_interfaces__srv__GenerateMappingPlan_Request
    std::shared_ptr<mapping_interfaces::srv::GenerateMappingPlan_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mapping_interfaces__srv__GenerateMappingPlan_Request
    std::shared_ptr<mapping_interfaces::srv::GenerateMappingPlan_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateMappingPlan_Request_ & other) const
  {
    if (this->planning_frame != other.planning_frame) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    if (this->start_angle_deg != other.start_angle_deg) {
      return false;
    }
    if (this->end_angle_deg != other.end_angle_deg) {
      return false;
    }
    if (this->num_views != other.num_views) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->face_outward != other.face_outward) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenerateMappingPlan_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateMappingPlan_Request_

// alias to use template instance with default allocator
using GenerateMappingPlan_Request =
  mapping_interfaces::srv::GenerateMappingPlan_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mapping_interfaces


// Include directives for member types
// Member 'planned_poses'
#include "geometry_msgs/msg/detail/pose_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mapping_interfaces__srv__GenerateMappingPlan_Response __attribute__((deprecated))
#else
# define DEPRECATED__mapping_interfaces__srv__GenerateMappingPlan_Response __declspec(deprecated)
#endif

namespace mapping_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GenerateMappingPlan_Response_
{
  using Type = GenerateMappingPlan_Response_<ContainerAllocator>;

  explicit GenerateMappingPlan_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : planned_poses(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit GenerateMappingPlan_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    planned_poses(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _planned_poses_type =
    geometry_msgs::msg::PoseArray_<ContainerAllocator>;
  _planned_poses_type planned_poses;

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
  Type & set__planned_poses(
    const geometry_msgs::msg::PoseArray_<ContainerAllocator> & _arg)
  {
    this->planned_poses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mapping_interfaces::srv::GenerateMappingPlan_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mapping_interfaces::srv::GenerateMappingPlan_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mapping_interfaces::srv::GenerateMappingPlan_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mapping_interfaces::srv::GenerateMappingPlan_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mapping_interfaces::srv::GenerateMappingPlan_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mapping_interfaces::srv::GenerateMappingPlan_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mapping_interfaces::srv::GenerateMappingPlan_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mapping_interfaces::srv::GenerateMappingPlan_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mapping_interfaces::srv::GenerateMappingPlan_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mapping_interfaces::srv::GenerateMappingPlan_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mapping_interfaces__srv__GenerateMappingPlan_Response
    std::shared_ptr<mapping_interfaces::srv::GenerateMappingPlan_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mapping_interfaces__srv__GenerateMappingPlan_Response
    std::shared_ptr<mapping_interfaces::srv::GenerateMappingPlan_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateMappingPlan_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->planned_poses != other.planned_poses) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenerateMappingPlan_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateMappingPlan_Response_

// alias to use template instance with default allocator
using GenerateMappingPlan_Response =
  mapping_interfaces::srv::GenerateMappingPlan_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mapping_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mapping_interfaces__srv__GenerateMappingPlan_Event __attribute__((deprecated))
#else
# define DEPRECATED__mapping_interfaces__srv__GenerateMappingPlan_Event __declspec(deprecated)
#endif

namespace mapping_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GenerateMappingPlan_Event_
{
  using Type = GenerateMappingPlan_Event_<ContainerAllocator>;

  explicit GenerateMappingPlan_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GenerateMappingPlan_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<mapping_interfaces::srv::GenerateMappingPlan_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mapping_interfaces::srv::GenerateMappingPlan_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<mapping_interfaces::srv::GenerateMappingPlan_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mapping_interfaces::srv::GenerateMappingPlan_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<mapping_interfaces::srv::GenerateMappingPlan_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mapping_interfaces::srv::GenerateMappingPlan_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<mapping_interfaces::srv::GenerateMappingPlan_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mapping_interfaces::srv::GenerateMappingPlan_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mapping_interfaces::srv::GenerateMappingPlan_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const mapping_interfaces::srv::GenerateMappingPlan_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mapping_interfaces::srv::GenerateMappingPlan_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mapping_interfaces::srv::GenerateMappingPlan_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mapping_interfaces::srv::GenerateMappingPlan_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mapping_interfaces::srv::GenerateMappingPlan_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mapping_interfaces::srv::GenerateMappingPlan_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mapping_interfaces::srv::GenerateMappingPlan_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mapping_interfaces::srv::GenerateMappingPlan_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mapping_interfaces::srv::GenerateMappingPlan_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mapping_interfaces__srv__GenerateMappingPlan_Event
    std::shared_ptr<mapping_interfaces::srv::GenerateMappingPlan_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mapping_interfaces__srv__GenerateMappingPlan_Event
    std::shared_ptr<mapping_interfaces::srv::GenerateMappingPlan_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateMappingPlan_Event_ & other) const
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
  bool operator!=(const GenerateMappingPlan_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateMappingPlan_Event_

// alias to use template instance with default allocator
using GenerateMappingPlan_Event =
  mapping_interfaces::srv::GenerateMappingPlan_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mapping_interfaces

namespace mapping_interfaces
{

namespace srv
{

struct GenerateMappingPlan
{
  using Request = mapping_interfaces::srv::GenerateMappingPlan_Request;
  using Response = mapping_interfaces::srv::GenerateMappingPlan_Response;
  using Event = mapping_interfaces::srv::GenerateMappingPlan_Event;
};

}  // namespace srv

}  // namespace mapping_interfaces

#endif  // MAPPING_INTERFACES__SRV__DETAIL__GENERATE_MAPPING_PLAN__STRUCT_HPP_
