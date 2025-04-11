// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from skuba_msgs:srv/ArmTrajectory.idl
// generated code does not contain a copyright notice

#ifndef SKUBA_MSGS__SRV__DETAIL__ARM_TRAJECTORY__BUILDER_HPP_
#define SKUBA_MSGS__SRV__DETAIL__ARM_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "skuba_msgs/srv/detail/arm_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace skuba_msgs
{

namespace srv
{

namespace builder
{

class Init_ArmTrajectory_Request_time_from_start
{
public:
  explicit Init_ArmTrajectory_Request_time_from_start(::skuba_msgs::srv::ArmTrajectory_Request & msg)
  : msg_(msg)
  {}
  ::skuba_msgs::srv::ArmTrajectory_Request time_from_start(::skuba_msgs::srv::ArmTrajectory_Request::_time_from_start_type arg)
  {
    msg_.time_from_start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::skuba_msgs::srv::ArmTrajectory_Request msg_;
};

class Init_ArmTrajectory_Request_accelerations
{
public:
  explicit Init_ArmTrajectory_Request_accelerations(::skuba_msgs::srv::ArmTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_ArmTrajectory_Request_time_from_start accelerations(::skuba_msgs::srv::ArmTrajectory_Request::_accelerations_type arg)
  {
    msg_.accelerations = std::move(arg);
    return Init_ArmTrajectory_Request_time_from_start(msg_);
  }

private:
  ::skuba_msgs::srv::ArmTrajectory_Request msg_;
};

class Init_ArmTrajectory_Request_velocities
{
public:
  explicit Init_ArmTrajectory_Request_velocities(::skuba_msgs::srv::ArmTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_ArmTrajectory_Request_accelerations velocities(::skuba_msgs::srv::ArmTrajectory_Request::_velocities_type arg)
  {
    msg_.velocities = std::move(arg);
    return Init_ArmTrajectory_Request_accelerations(msg_);
  }

private:
  ::skuba_msgs::srv::ArmTrajectory_Request msg_;
};

class Init_ArmTrajectory_Request_positions
{
public:
  Init_ArmTrajectory_Request_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmTrajectory_Request_velocities positions(::skuba_msgs::srv::ArmTrajectory_Request::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return Init_ArmTrajectory_Request_velocities(msg_);
  }

private:
  ::skuba_msgs::srv::ArmTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::skuba_msgs::srv::ArmTrajectory_Request>()
{
  return skuba_msgs::srv::builder::Init_ArmTrajectory_Request_positions();
}

}  // namespace skuba_msgs


namespace skuba_msgs
{

namespace srv
{

namespace builder
{

class Init_ArmTrajectory_Response_message
{
public:
  explicit Init_ArmTrajectory_Response_message(::skuba_msgs::srv::ArmTrajectory_Response & msg)
  : msg_(msg)
  {}
  ::skuba_msgs::srv::ArmTrajectory_Response message(::skuba_msgs::srv::ArmTrajectory_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::skuba_msgs::srv::ArmTrajectory_Response msg_;
};

class Init_ArmTrajectory_Response_success
{
public:
  Init_ArmTrajectory_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmTrajectory_Response_message success(::skuba_msgs::srv::ArmTrajectory_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ArmTrajectory_Response_message(msg_);
  }

private:
  ::skuba_msgs::srv::ArmTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::skuba_msgs::srv::ArmTrajectory_Response>()
{
  return skuba_msgs::srv::builder::Init_ArmTrajectory_Response_success();
}

}  // namespace skuba_msgs

#endif  // SKUBA_MSGS__SRV__DETAIL__ARM_TRAJECTORY__BUILDER_HPP_
