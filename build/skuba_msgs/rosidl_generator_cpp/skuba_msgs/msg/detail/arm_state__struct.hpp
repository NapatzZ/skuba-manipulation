// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from skuba_msgs:msg/ArmState.idl
// generated code does not contain a copyright notice

#ifndef SKUBA_MSGS__MSG__DETAIL__ARM_STATE__STRUCT_HPP_
#define SKUBA_MSGS__MSG__DETAIL__ARM_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__skuba_msgs__msg__ArmState __attribute__((deprecated))
#else
# define DEPRECATED__skuba_msgs__msg__ArmState __declspec(deprecated)
#endif

namespace skuba_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmState_
{
  using Type = ArmState_<ContainerAllocator>;

  explicit ArmState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gripper_left_position = 0.0f;
      this->gripper_right_position = 0.0f;
      this->is_moving = false;
      this->is_error = false;
      this->error_message = "";
    }
  }

  explicit ArmState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gripper_left_position = 0.0f;
      this->gripper_right_position = 0.0f;
      this->is_moving = false;
      this->is_error = false;
      this->error_message = "";
    }
  }

  // field types and members
  using _positions_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _positions_type positions;
  using _velocities_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _velocities_type velocities;
  using _efforts_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _efforts_type efforts;
  using _gripper_left_position_type =
    float;
  _gripper_left_position_type gripper_left_position;
  using _gripper_right_position_type =
    float;
  _gripper_right_position_type gripper_right_position;
  using _is_moving_type =
    bool;
  _is_moving_type is_moving;
  using _is_error_type =
    bool;
  _is_error_type is_error;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_message_type error_message;

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
  Type & set__efforts(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->efforts = _arg;
    return *this;
  }
  Type & set__gripper_left_position(
    const float & _arg)
  {
    this->gripper_left_position = _arg;
    return *this;
  }
  Type & set__gripper_right_position(
    const float & _arg)
  {
    this->gripper_right_position = _arg;
    return *this;
  }
  Type & set__is_moving(
    const bool & _arg)
  {
    this->is_moving = _arg;
    return *this;
  }
  Type & set__is_error(
    const bool & _arg)
  {
    this->is_error = _arg;
    return *this;
  }
  Type & set__error_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    skuba_msgs::msg::ArmState_<ContainerAllocator> *;
  using ConstRawPtr =
    const skuba_msgs::msg::ArmState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<skuba_msgs::msg::ArmState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<skuba_msgs::msg::ArmState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      skuba_msgs::msg::ArmState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<skuba_msgs::msg::ArmState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      skuba_msgs::msg::ArmState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<skuba_msgs::msg::ArmState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<skuba_msgs::msg::ArmState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<skuba_msgs::msg::ArmState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__skuba_msgs__msg__ArmState
    std::shared_ptr<skuba_msgs::msg::ArmState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__skuba_msgs__msg__ArmState
    std::shared_ptr<skuba_msgs::msg::ArmState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmState_ & other) const
  {
    if (this->positions != other.positions) {
      return false;
    }
    if (this->velocities != other.velocities) {
      return false;
    }
    if (this->efforts != other.efforts) {
      return false;
    }
    if (this->gripper_left_position != other.gripper_left_position) {
      return false;
    }
    if (this->gripper_right_position != other.gripper_right_position) {
      return false;
    }
    if (this->is_moving != other.is_moving) {
      return false;
    }
    if (this->is_error != other.is_error) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmState_

// alias to use template instance with default allocator
using ArmState =
  skuba_msgs::msg::ArmState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace skuba_msgs

#endif  // SKUBA_MSGS__MSG__DETAIL__ARM_STATE__STRUCT_HPP_
