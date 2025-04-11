// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from skuba_msgs:srv/IKRequest.idl
// generated code does not contain a copyright notice

#ifndef SKUBA_MSGS__SRV__DETAIL__IK_REQUEST__BUILDER_HPP_
#define SKUBA_MSGS__SRV__DETAIL__IK_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "skuba_msgs/srv/detail/ik_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace skuba_msgs
{

namespace srv
{

namespace builder
{

class Init_IKRequest_Request_end_effector_link
{
public:
  explicit Init_IKRequest_Request_end_effector_link(::skuba_msgs::srv::IKRequest_Request & msg)
  : msg_(msg)
  {}
  ::skuba_msgs::srv::IKRequest_Request end_effector_link(::skuba_msgs::srv::IKRequest_Request::_end_effector_link_type arg)
  {
    msg_.end_effector_link = std::move(arg);
    return std::move(msg_);
  }

private:
  ::skuba_msgs::srv::IKRequest_Request msg_;
};

class Init_IKRequest_Request_group_name
{
public:
  explicit Init_IKRequest_Request_group_name(::skuba_msgs::srv::IKRequest_Request & msg)
  : msg_(msg)
  {}
  Init_IKRequest_Request_end_effector_link group_name(::skuba_msgs::srv::IKRequest_Request::_group_name_type arg)
  {
    msg_.group_name = std::move(arg);
    return Init_IKRequest_Request_end_effector_link(msg_);
  }

private:
  ::skuba_msgs::srv::IKRequest_Request msg_;
};

class Init_IKRequest_Request_target_pose
{
public:
  Init_IKRequest_Request_target_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IKRequest_Request_group_name target_pose(::skuba_msgs::srv::IKRequest_Request::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return Init_IKRequest_Request_group_name(msg_);
  }

private:
  ::skuba_msgs::srv::IKRequest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::skuba_msgs::srv::IKRequest_Request>()
{
  return skuba_msgs::srv::builder::Init_IKRequest_Request_target_pose();
}

}  // namespace skuba_msgs


namespace skuba_msgs
{

namespace srv
{

namespace builder
{

class Init_IKRequest_Response_message
{
public:
  explicit Init_IKRequest_Response_message(::skuba_msgs::srv::IKRequest_Response & msg)
  : msg_(msg)
  {}
  ::skuba_msgs::srv::IKRequest_Response message(::skuba_msgs::srv::IKRequest_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::skuba_msgs::srv::IKRequest_Response msg_;
};

class Init_IKRequest_Response_success
{
public:
  explicit Init_IKRequest_Response_success(::skuba_msgs::srv::IKRequest_Response & msg)
  : msg_(msg)
  {}
  Init_IKRequest_Response_message success(::skuba_msgs::srv::IKRequest_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_IKRequest_Response_message(msg_);
  }

private:
  ::skuba_msgs::srv::IKRequest_Response msg_;
};

class Init_IKRequest_Response_joint_positions
{
public:
  Init_IKRequest_Response_joint_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IKRequest_Response_success joint_positions(::skuba_msgs::srv::IKRequest_Response::_joint_positions_type arg)
  {
    msg_.joint_positions = std::move(arg);
    return Init_IKRequest_Response_success(msg_);
  }

private:
  ::skuba_msgs::srv::IKRequest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::skuba_msgs::srv::IKRequest_Response>()
{
  return skuba_msgs::srv::builder::Init_IKRequest_Response_joint_positions();
}

}  // namespace skuba_msgs

#endif  // SKUBA_MSGS__SRV__DETAIL__IK_REQUEST__BUILDER_HPP_
