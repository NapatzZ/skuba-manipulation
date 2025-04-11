// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from skuba_msgs:srv/IKRequest.idl
// generated code does not contain a copyright notice

#ifndef SKUBA_MSGS__SRV__DETAIL__IK_REQUEST__TRAITS_HPP_
#define SKUBA_MSGS__SRV__DETAIL__IK_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "skuba_msgs/srv/detail/ik_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace skuba_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const IKRequest_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_pose
  {
    out << "target_pose: ";
    to_flow_style_yaml(msg.target_pose, out);
    out << ", ";
  }

  // member: group_name
  {
    out << "group_name: ";
    rosidl_generator_traits::value_to_yaml(msg.group_name, out);
    out << ", ";
  }

  // member: end_effector_link
  {
    out << "end_effector_link: ";
    rosidl_generator_traits::value_to_yaml(msg.end_effector_link, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IKRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_pose:\n";
    to_block_style_yaml(msg.target_pose, out, indentation + 2);
  }

  // member: group_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_name: ";
    rosidl_generator_traits::value_to_yaml(msg.group_name, out);
    out << "\n";
  }

  // member: end_effector_link
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_effector_link: ";
    rosidl_generator_traits::value_to_yaml(msg.end_effector_link, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IKRequest_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace skuba_msgs

namespace rosidl_generator_traits
{

[[deprecated("use skuba_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const skuba_msgs::srv::IKRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  skuba_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use skuba_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const skuba_msgs::srv::IKRequest_Request & msg)
{
  return skuba_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<skuba_msgs::srv::IKRequest_Request>()
{
  return "skuba_msgs::srv::IKRequest_Request";
}

template<>
inline const char * name<skuba_msgs::srv::IKRequest_Request>()
{
  return "skuba_msgs/srv/IKRequest_Request";
}

template<>
struct has_fixed_size<skuba_msgs::srv::IKRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<skuba_msgs::srv::IKRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<skuba_msgs::srv::IKRequest_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace skuba_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const IKRequest_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_positions
  {
    if (msg.joint_positions.size() == 0) {
      out << "joint_positions: []";
    } else {
      out << "joint_positions: [";
      size_t pending_items = msg.joint_positions.size();
      for (auto item : msg.joint_positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IKRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_positions.size() == 0) {
      out << "joint_positions: []\n";
    } else {
      out << "joint_positions:\n";
      for (auto item : msg.joint_positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IKRequest_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace skuba_msgs

namespace rosidl_generator_traits
{

[[deprecated("use skuba_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const skuba_msgs::srv::IKRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  skuba_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use skuba_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const skuba_msgs::srv::IKRequest_Response & msg)
{
  return skuba_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<skuba_msgs::srv::IKRequest_Response>()
{
  return "skuba_msgs::srv::IKRequest_Response";
}

template<>
inline const char * name<skuba_msgs::srv::IKRequest_Response>()
{
  return "skuba_msgs/srv/IKRequest_Response";
}

template<>
struct has_fixed_size<skuba_msgs::srv::IKRequest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<skuba_msgs::srv::IKRequest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<skuba_msgs::srv::IKRequest_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<skuba_msgs::srv::IKRequest>()
{
  return "skuba_msgs::srv::IKRequest";
}

template<>
inline const char * name<skuba_msgs::srv::IKRequest>()
{
  return "skuba_msgs/srv/IKRequest";
}

template<>
struct has_fixed_size<skuba_msgs::srv::IKRequest>
  : std::integral_constant<
    bool,
    has_fixed_size<skuba_msgs::srv::IKRequest_Request>::value &&
    has_fixed_size<skuba_msgs::srv::IKRequest_Response>::value
  >
{
};

template<>
struct has_bounded_size<skuba_msgs::srv::IKRequest>
  : std::integral_constant<
    bool,
    has_bounded_size<skuba_msgs::srv::IKRequest_Request>::value &&
    has_bounded_size<skuba_msgs::srv::IKRequest_Response>::value
  >
{
};

template<>
struct is_service<skuba_msgs::srv::IKRequest>
  : std::true_type
{
};

template<>
struct is_service_request<skuba_msgs::srv::IKRequest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<skuba_msgs::srv::IKRequest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SKUBA_MSGS__SRV__DETAIL__IK_REQUEST__TRAITS_HPP_
