// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from skuba_msgs:srv/ArmCommand.idl
// generated code does not contain a copyright notice

#ifndef SKUBA_MSGS__SRV__DETAIL__ARM_COMMAND__BUILDER_HPP_
#define SKUBA_MSGS__SRV__DETAIL__ARM_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "skuba_msgs/srv/detail/arm_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace skuba_msgs
{

namespace srv
{

namespace builder
{

class Init_ArmCommand_Request_gripper_right_position
{
public:
  explicit Init_ArmCommand_Request_gripper_right_position(::skuba_msgs::srv::ArmCommand_Request & msg)
  : msg_(msg)
  {}
  ::skuba_msgs::srv::ArmCommand_Request gripper_right_position(::skuba_msgs::srv::ArmCommand_Request::_gripper_right_position_type arg)
  {
    msg_.gripper_right_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::skuba_msgs::srv::ArmCommand_Request msg_;
};

class Init_ArmCommand_Request_gripper_left_position
{
public:
  explicit Init_ArmCommand_Request_gripper_left_position(::skuba_msgs::srv::ArmCommand_Request & msg)
  : msg_(msg)
  {}
  Init_ArmCommand_Request_gripper_right_position gripper_left_position(::skuba_msgs::srv::ArmCommand_Request::_gripper_left_position_type arg)
  {
    msg_.gripper_left_position = std::move(arg);
    return Init_ArmCommand_Request_gripper_right_position(msg_);
  }

private:
  ::skuba_msgs::srv::ArmCommand_Request msg_;
};

class Init_ArmCommand_Request_velocities
{
public:
  explicit Init_ArmCommand_Request_velocities(::skuba_msgs::srv::ArmCommand_Request & msg)
  : msg_(msg)
  {}
  Init_ArmCommand_Request_gripper_left_position velocities(::skuba_msgs::srv::ArmCommand_Request::_velocities_type arg)
  {
    msg_.velocities = std::move(arg);
    return Init_ArmCommand_Request_gripper_left_position(msg_);
  }

private:
  ::skuba_msgs::srv::ArmCommand_Request msg_;
};

class Init_ArmCommand_Request_positions
{
public:
  explicit Init_ArmCommand_Request_positions(::skuba_msgs::srv::ArmCommand_Request & msg)
  : msg_(msg)
  {}
  Init_ArmCommand_Request_velocities positions(::skuba_msgs::srv::ArmCommand_Request::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return Init_ArmCommand_Request_velocities(msg_);
  }

private:
  ::skuba_msgs::srv::ArmCommand_Request msg_;
};

class Init_ArmCommand_Request_command_type
{
public:
  Init_ArmCommand_Request_command_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmCommand_Request_positions command_type(::skuba_msgs::srv::ArmCommand_Request::_command_type_type arg)
  {
    msg_.command_type = std::move(arg);
    return Init_ArmCommand_Request_positions(msg_);
  }

private:
  ::skuba_msgs::srv::ArmCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::skuba_msgs::srv::ArmCommand_Request>()
{
  return skuba_msgs::srv::builder::Init_ArmCommand_Request_command_type();
}

}  // namespace skuba_msgs


namespace skuba_msgs
{

namespace srv
{

namespace builder
{

class Init_ArmCommand_Response_message
{
public:
  explicit Init_ArmCommand_Response_message(::skuba_msgs::srv::ArmCommand_Response & msg)
  : msg_(msg)
  {}
  ::skuba_msgs::srv::ArmCommand_Response message(::skuba_msgs::srv::ArmCommand_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::skuba_msgs::srv::ArmCommand_Response msg_;
};

class Init_ArmCommand_Response_success
{
public:
  Init_ArmCommand_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmCommand_Response_message success(::skuba_msgs::srv::ArmCommand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ArmCommand_Response_message(msg_);
  }

private:
  ::skuba_msgs::srv::ArmCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::skuba_msgs::srv::ArmCommand_Response>()
{
  return skuba_msgs::srv::builder::Init_ArmCommand_Response_success();
}

}  // namespace skuba_msgs

#endif  // SKUBA_MSGS__SRV__DETAIL__ARM_COMMAND__BUILDER_HPP_
