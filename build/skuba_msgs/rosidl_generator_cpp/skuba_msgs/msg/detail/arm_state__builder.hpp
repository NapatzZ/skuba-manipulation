// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from skuba_msgs:msg/ArmState.idl
// generated code does not contain a copyright notice

#ifndef SKUBA_MSGS__MSG__DETAIL__ARM_STATE__BUILDER_HPP_
#define SKUBA_MSGS__MSG__DETAIL__ARM_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "skuba_msgs/msg/detail/arm_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace skuba_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmState_error_message
{
public:
  explicit Init_ArmState_error_message(::skuba_msgs::msg::ArmState & msg)
  : msg_(msg)
  {}
  ::skuba_msgs::msg::ArmState error_message(::skuba_msgs::msg::ArmState::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::skuba_msgs::msg::ArmState msg_;
};

class Init_ArmState_is_error
{
public:
  explicit Init_ArmState_is_error(::skuba_msgs::msg::ArmState & msg)
  : msg_(msg)
  {}
  Init_ArmState_error_message is_error(::skuba_msgs::msg::ArmState::_is_error_type arg)
  {
    msg_.is_error = std::move(arg);
    return Init_ArmState_error_message(msg_);
  }

private:
  ::skuba_msgs::msg::ArmState msg_;
};

class Init_ArmState_is_moving
{
public:
  explicit Init_ArmState_is_moving(::skuba_msgs::msg::ArmState & msg)
  : msg_(msg)
  {}
  Init_ArmState_is_error is_moving(::skuba_msgs::msg::ArmState::_is_moving_type arg)
  {
    msg_.is_moving = std::move(arg);
    return Init_ArmState_is_error(msg_);
  }

private:
  ::skuba_msgs::msg::ArmState msg_;
};

class Init_ArmState_gripper_right_position
{
public:
  explicit Init_ArmState_gripper_right_position(::skuba_msgs::msg::ArmState & msg)
  : msg_(msg)
  {}
  Init_ArmState_is_moving gripper_right_position(::skuba_msgs::msg::ArmState::_gripper_right_position_type arg)
  {
    msg_.gripper_right_position = std::move(arg);
    return Init_ArmState_is_moving(msg_);
  }

private:
  ::skuba_msgs::msg::ArmState msg_;
};

class Init_ArmState_gripper_left_position
{
public:
  explicit Init_ArmState_gripper_left_position(::skuba_msgs::msg::ArmState & msg)
  : msg_(msg)
  {}
  Init_ArmState_gripper_right_position gripper_left_position(::skuba_msgs::msg::ArmState::_gripper_left_position_type arg)
  {
    msg_.gripper_left_position = std::move(arg);
    return Init_ArmState_gripper_right_position(msg_);
  }

private:
  ::skuba_msgs::msg::ArmState msg_;
};

class Init_ArmState_efforts
{
public:
  explicit Init_ArmState_efforts(::skuba_msgs::msg::ArmState & msg)
  : msg_(msg)
  {}
  Init_ArmState_gripper_left_position efforts(::skuba_msgs::msg::ArmState::_efforts_type arg)
  {
    msg_.efforts = std::move(arg);
    return Init_ArmState_gripper_left_position(msg_);
  }

private:
  ::skuba_msgs::msg::ArmState msg_;
};

class Init_ArmState_velocities
{
public:
  explicit Init_ArmState_velocities(::skuba_msgs::msg::ArmState & msg)
  : msg_(msg)
  {}
  Init_ArmState_efforts velocities(::skuba_msgs::msg::ArmState::_velocities_type arg)
  {
    msg_.velocities = std::move(arg);
    return Init_ArmState_efforts(msg_);
  }

private:
  ::skuba_msgs::msg::ArmState msg_;
};

class Init_ArmState_positions
{
public:
  Init_ArmState_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmState_velocities positions(::skuba_msgs::msg::ArmState::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return Init_ArmState_velocities(msg_);
  }

private:
  ::skuba_msgs::msg::ArmState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::skuba_msgs::msg::ArmState>()
{
  return skuba_msgs::msg::builder::Init_ArmState_positions();
}

}  // namespace skuba_msgs

#endif  // SKUBA_MSGS__MSG__DETAIL__ARM_STATE__BUILDER_HPP_
