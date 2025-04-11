// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from skuba_msgs:srv/ArmTrajectory.idl
// generated code does not contain a copyright notice

#ifndef SKUBA_MSGS__SRV__DETAIL__ARM_TRAJECTORY__STRUCT_HPP_
#define SKUBA_MSGS__SRV__DETAIL__ARM_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time_from_start'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__skuba_msgs__srv__ArmTrajectory_Request __attribute__((deprecated))
#else
# define DEPRECATED__skuba_msgs__srv__ArmTrajectory_Request __declspec(deprecated)
#endif

namespace skuba_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArmTrajectory_Request_
{
  using Type = ArmTrajectory_Request_<ContainerAllocator>;

  explicit ArmTrajectory_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ArmTrajectory_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _positions_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _positions_type positions;
  using _velocities_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _velocities_type velocities;
  using _accelerations_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _accelerations_type accelerations;
  using _time_from_start_type =
    std::vector<builtin_interfaces::msg::Duration_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<builtin_interfaces::msg::Duration_<ContainerAllocator>>>;
  _time_from_start_type time_from_start;

  // setters for named parameter idiom
  Type & set__positions(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->positions = _arg;
    return *this;
  }
  Type & set__velocities(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->velocities = _arg;
    return *this;
  }
  Type & set__accelerations(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->accelerations = _arg;
    return *this;
  }
  Type & set__time_from_start(
    const std::vector<builtin_interfaces::msg::Duration_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<builtin_interfaces::msg::Duration_<ContainerAllocator>>> & _arg)
  {
    this->time_from_start = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    skuba_msgs::srv::ArmTrajectory_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const skuba_msgs::srv::ArmTrajectory_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<skuba_msgs::srv::ArmTrajectory_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<skuba_msgs::srv::ArmTrajectory_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      skuba_msgs::srv::ArmTrajectory_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<skuba_msgs::srv::ArmTrajectory_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      skuba_msgs::srv::ArmTrajectory_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<skuba_msgs::srv::ArmTrajectory_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<skuba_msgs::srv::ArmTrajectory_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<skuba_msgs::srv::ArmTrajectory_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__skuba_msgs__srv__ArmTrajectory_Request
    std::shared_ptr<skuba_msgs::srv::ArmTrajectory_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__skuba_msgs__srv__ArmTrajectory_Request
    std::shared_ptr<skuba_msgs::srv::ArmTrajectory_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmTrajectory_Request_ & other) const
  {
    if (this->positions != other.positions) {
      return false;
    }
    if (this->velocities != other.velocities) {
      return false;
    }
    if (this->accelerations != other.accelerations) {
      return false;
    }
    if (this->time_from_start != other.time_from_start) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmTrajectory_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmTrajectory_Request_

// alias to use template instance with default allocator
using ArmTrajectory_Request =
  skuba_msgs::srv::ArmTrajectory_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace skuba_msgs


#ifndef _WIN32
# define DEPRECATED__skuba_msgs__srv__ArmTrajectory_Response __attribute__((deprecated))
#else
# define DEPRECATED__skuba_msgs__srv__ArmTrajectory_Response __declspec(deprecated)
#endif

namespace skuba_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArmTrajectory_Response_
{
  using Type = ArmTrajectory_Response_<ContainerAllocator>;

  explicit ArmTrajectory_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit ArmTrajectory_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
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

  // constant declarations

  // pointer types
  using RawPtr =
    skuba_msgs::srv::ArmTrajectory_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const skuba_msgs::srv::ArmTrajectory_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<skuba_msgs::srv::ArmTrajectory_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<skuba_msgs::srv::ArmTrajectory_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      skuba_msgs::srv::ArmTrajectory_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<skuba_msgs::srv::ArmTrajectory_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      skuba_msgs::srv::ArmTrajectory_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<skuba_msgs::srv::ArmTrajectory_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<skuba_msgs::srv::ArmTrajectory_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<skuba_msgs::srv::ArmTrajectory_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__skuba_msgs__srv__ArmTrajectory_Response
    std::shared_ptr<skuba_msgs::srv::ArmTrajectory_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__skuba_msgs__srv__ArmTrajectory_Response
    std::shared_ptr<skuba_msgs::srv::ArmTrajectory_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmTrajectory_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmTrajectory_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmTrajectory_Response_

// alias to use template instance with default allocator
using ArmTrajectory_Response =
  skuba_msgs::srv::ArmTrajectory_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace skuba_msgs

namespace skuba_msgs
{

namespace srv
{

struct ArmTrajectory
{
  using Request = skuba_msgs::srv::ArmTrajectory_Request;
  using Response = skuba_msgs::srv::ArmTrajectory_Response;
};

}  // namespace srv

}  // namespace skuba_msgs

#endif  // SKUBA_MSGS__SRV__DETAIL__ARM_TRAJECTORY__STRUCT_HPP_
