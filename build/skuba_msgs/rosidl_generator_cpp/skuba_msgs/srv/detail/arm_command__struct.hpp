// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from skuba_msgs:srv/ArmCommand.idl
// generated code does not contain a copyright notice

#ifndef SKUBA_MSGS__SRV__DETAIL__ARM_COMMAND__STRUCT_HPP_
#define SKUBA_MSGS__SRV__DETAIL__ARM_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__skuba_msgs__srv__ArmCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__skuba_msgs__srv__ArmCommand_Request __declspec(deprecated)
#endif

namespace skuba_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArmCommand_Request_
{
  using Type = ArmCommand_Request_<ContainerAllocator>;

  explicit ArmCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_type = "";
      this->gripper_left_position = 0.0f;
      this->gripper_right_position = 0.0f;
    }
  }

  explicit ArmCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_type = "";
      this->gripper_left_position = 0.0f;
      this->gripper_right_position = 0.0f;
    }
  }

  // field types and members
  using _command_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type_type command_type;
  using _positions_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _positions_type positions;
  using _velocities_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _velocities_type velocities;
  using _gripper_left_position_type =
    float;
  _gripper_left_position_type gripper_left_position;
  using _gripper_right_position_type =
    float;
  _gripper_right_position_type gripper_right_position;

  // setters for named parameter idiom
  Type & set__command_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command_type = _arg;
    return *this;
  }
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

  // constant declarations

  // pointer types
  using RawPtr =
    skuba_msgs::srv::ArmCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const skuba_msgs::srv::ArmCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<skuba_msgs::srv::ArmCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<skuba_msgs::srv::ArmCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      skuba_msgs::srv::ArmCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<skuba_msgs::srv::ArmCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      skuba_msgs::srv::ArmCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<skuba_msgs::srv::ArmCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<skuba_msgs::srv::ArmCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<skuba_msgs::srv::ArmCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__skuba_msgs__srv__ArmCommand_Request
    std::shared_ptr<skuba_msgs::srv::ArmCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__skuba_msgs__srv__ArmCommand_Request
    std::shared_ptr<skuba_msgs::srv::ArmCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmCommand_Request_ & other) const
  {
    if (this->command_type != other.command_type) {
      return false;
    }
    if (this->positions != other.positions) {
      return false;
    }
    if (this->velocities != other.velocities) {
      return false;
    }
    if (this->gripper_left_position != other.gripper_left_position) {
      return false;
    }
    if (this->gripper_right_position != other.gripper_right_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmCommand_Request_

// alias to use template instance with default allocator
using ArmCommand_Request =
  skuba_msgs::srv::ArmCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace skuba_msgs


#ifndef _WIN32
# define DEPRECATED__skuba_msgs__srv__ArmCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__skuba_msgs__srv__ArmCommand_Response __declspec(deprecated)
#endif

namespace skuba_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArmCommand_Response_
{
  using Type = ArmCommand_Response_<ContainerAllocator>;

  explicit ArmCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit ArmCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    skuba_msgs::srv::ArmCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const skuba_msgs::srv::ArmCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<skuba_msgs::srv::ArmCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<skuba_msgs::srv::ArmCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      skuba_msgs::srv::ArmCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<skuba_msgs::srv::ArmCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      skuba_msgs::srv::ArmCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<skuba_msgs::srv::ArmCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<skuba_msgs::srv::ArmCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<skuba_msgs::srv::ArmCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__skuba_msgs__srv__ArmCommand_Response
    std::shared_ptr<skuba_msgs::srv::ArmCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__skuba_msgs__srv__ArmCommand_Response
    std::shared_ptr<skuba_msgs::srv::ArmCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmCommand_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmCommand_Response_

// alias to use template instance with default allocator
using ArmCommand_Response =
  skuba_msgs::srv::ArmCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace skuba_msgs

namespace skuba_msgs
{

namespace srv
{

struct ArmCommand
{
  using Request = skuba_msgs::srv::ArmCommand_Request;
  using Response = skuba_msgs::srv::ArmCommand_Response;
};

}  // namespace srv

}  // namespace skuba_msgs

#endif  // SKUBA_MSGS__SRV__DETAIL__ARM_COMMAND__STRUCT_HPP_
