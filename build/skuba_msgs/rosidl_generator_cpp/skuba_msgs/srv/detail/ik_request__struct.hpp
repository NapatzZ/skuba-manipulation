// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from skuba_msgs:srv/IKRequest.idl
// generated code does not contain a copyright notice

#ifndef SKUBA_MSGS__SRV__DETAIL__IK_REQUEST__STRUCT_HPP_
#define SKUBA_MSGS__SRV__DETAIL__IK_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__skuba_msgs__srv__IKRequest_Request __attribute__((deprecated))
#else
# define DEPRECATED__skuba_msgs__srv__IKRequest_Request __declspec(deprecated)
#endif

namespace skuba_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IKRequest_Request_
{
  using Type = IKRequest_Request_<ContainerAllocator>;

  explicit IKRequest_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_name = "";
      this->end_effector_link = "";
    }
  }

  explicit IKRequest_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_alloc, _init),
    group_name(_alloc),
    end_effector_link(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_name = "";
      this->end_effector_link = "";
    }
  }

  // field types and members
  using _target_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _target_pose_type target_pose;
  using _group_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _group_name_type group_name;
  using _end_effector_link_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _end_effector_link_type end_effector_link;

  // setters for named parameter idiom
  Type & set__target_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->target_pose = _arg;
    return *this;
  }
  Type & set__group_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->group_name = _arg;
    return *this;
  }
  Type & set__end_effector_link(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->end_effector_link = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    skuba_msgs::srv::IKRequest_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const skuba_msgs::srv::IKRequest_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<skuba_msgs::srv::IKRequest_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<skuba_msgs::srv::IKRequest_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      skuba_msgs::srv::IKRequest_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<skuba_msgs::srv::IKRequest_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      skuba_msgs::srv::IKRequest_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<skuba_msgs::srv::IKRequest_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<skuba_msgs::srv::IKRequest_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<skuba_msgs::srv::IKRequest_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__skuba_msgs__srv__IKRequest_Request
    std::shared_ptr<skuba_msgs::srv::IKRequest_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__skuba_msgs__srv__IKRequest_Request
    std::shared_ptr<skuba_msgs::srv::IKRequest_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IKRequest_Request_ & other) const
  {
    if (this->target_pose != other.target_pose) {
      return false;
    }
    if (this->group_name != other.group_name) {
      return false;
    }
    if (this->end_effector_link != other.end_effector_link) {
      return false;
    }
    return true;
  }
  bool operator!=(const IKRequest_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IKRequest_Request_

// alias to use template instance with default allocator
using IKRequest_Request =
  skuba_msgs::srv::IKRequest_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace skuba_msgs


#ifndef _WIN32
# define DEPRECATED__skuba_msgs__srv__IKRequest_Response __attribute__((deprecated))
#else
# define DEPRECATED__skuba_msgs__srv__IKRequest_Response __declspec(deprecated)
#endif

namespace skuba_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IKRequest_Response_
{
  using Type = IKRequest_Response_<ContainerAllocator>;

  explicit IKRequest_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit IKRequest_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  using _joint_positions_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _joint_positions_type joint_positions;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__joint_positions(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->joint_positions = _arg;
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
    skuba_msgs::srv::IKRequest_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const skuba_msgs::srv::IKRequest_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<skuba_msgs::srv::IKRequest_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<skuba_msgs::srv::IKRequest_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      skuba_msgs::srv::IKRequest_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<skuba_msgs::srv::IKRequest_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      skuba_msgs::srv::IKRequest_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<skuba_msgs::srv::IKRequest_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<skuba_msgs::srv::IKRequest_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<skuba_msgs::srv::IKRequest_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__skuba_msgs__srv__IKRequest_Response
    std::shared_ptr<skuba_msgs::srv::IKRequest_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__skuba_msgs__srv__IKRequest_Response
    std::shared_ptr<skuba_msgs::srv::IKRequest_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IKRequest_Response_ & other) const
  {
    if (this->joint_positions != other.joint_positions) {
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
  bool operator!=(const IKRequest_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IKRequest_Response_

// alias to use template instance with default allocator
using IKRequest_Response =
  skuba_msgs::srv::IKRequest_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace skuba_msgs

namespace skuba_msgs
{

namespace srv
{

struct IKRequest
{
  using Request = skuba_msgs::srv::IKRequest_Request;
  using Response = skuba_msgs::srv::IKRequest_Response;
};

}  // namespace srv

}  // namespace skuba_msgs

#endif  // SKUBA_MSGS__SRV__DETAIL__IK_REQUEST__STRUCT_HPP_
