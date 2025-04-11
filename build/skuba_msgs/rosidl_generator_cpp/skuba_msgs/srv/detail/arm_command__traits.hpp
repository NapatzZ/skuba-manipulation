// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from skuba_msgs:srv/ArmCommand.idl
// generated code does not contain a copyright notice

#ifndef SKUBA_MSGS__SRV__DETAIL__ARM_COMMAND__TRAITS_HPP_
#define SKUBA_MSGS__SRV__DETAIL__ARM_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "skuba_msgs/srv/detail/arm_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace skuba_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ArmCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command_type
  {
    out << "command_type: ";
    rosidl_generator_traits::value_to_yaml(msg.command_type, out);
    out << ", ";
  }

  // member: positions
  {
    if (msg.positions.size() == 0) {
      out << "positions: []";
    } else {
      out << "positions: [";
      size_t pending_items = msg.positions.size();
      for (auto item : msg.positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocities
  {
    if (msg.velocities.size() == 0) {
      out << "velocities: []";
    } else {
      out << "velocities: [";
      size_t pending_items = msg.velocities.size();
      for (auto item : msg.velocities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gripper_left_position
  {
    out << "gripper_left_position: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_left_position, out);
    out << ", ";
  }

  // member: gripper_right_position
  {
    out << "gripper_right_position: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_right_position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_type: ";
    rosidl_generator_traits::value_to_yaml(msg.command_type, out);
    out << "\n";
  }

  // member: positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.positions.size() == 0) {
      out << "positions: []\n";
    } else {
      out << "positions:\n";
      for (auto item : msg.positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocities.size() == 0) {
      out << "velocities: []\n";
    } else {
      out << "velocities:\n";
      for (auto item : msg.velocities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gripper_left_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_left_position: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_left_position, out);
    out << "\n";
  }

  // member: gripper_right_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_right_position: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_right_position, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmCommand_Request & msg, bool use_flow_style = false)
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
  const skuba_msgs::srv::ArmCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  skuba_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use skuba_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const skuba_msgs::srv::ArmCommand_Request & msg)
{
  return skuba_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<skuba_msgs::srv::ArmCommand_Request>()
{
  return "skuba_msgs::srv::ArmCommand_Request";
}

template<>
inline const char * name<skuba_msgs::srv::ArmCommand_Request>()
{
  return "skuba_msgs/srv/ArmCommand_Request";
}

template<>
struct has_fixed_size<skuba_msgs::srv::ArmCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<skuba_msgs::srv::ArmCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<skuba_msgs::srv::ArmCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace skuba_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ArmCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
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
  const ArmCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const ArmCommand_Response & msg, bool use_flow_style = false)
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
  const skuba_msgs::srv::ArmCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  skuba_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use skuba_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const skuba_msgs::srv::ArmCommand_Response & msg)
{
  return skuba_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<skuba_msgs::srv::ArmCommand_Response>()
{
  return "skuba_msgs::srv::ArmCommand_Response";
}

template<>
inline const char * name<skuba_msgs::srv::ArmCommand_Response>()
{
  return "skuba_msgs/srv/ArmCommand_Response";
}

template<>
struct has_fixed_size<skuba_msgs::srv::ArmCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<skuba_msgs::srv::ArmCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<skuba_msgs::srv::ArmCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<skuba_msgs::srv::ArmCommand>()
{
  return "skuba_msgs::srv::ArmCommand";
}

template<>
inline const char * name<skuba_msgs::srv::ArmCommand>()
{
  return "skuba_msgs/srv/ArmCommand";
}

template<>
struct has_fixed_size<skuba_msgs::srv::ArmCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<skuba_msgs::srv::ArmCommand_Request>::value &&
    has_fixed_size<skuba_msgs::srv::ArmCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<skuba_msgs::srv::ArmCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<skuba_msgs::srv::ArmCommand_Request>::value &&
    has_bounded_size<skuba_msgs::srv::ArmCommand_Response>::value
  >
{
};

template<>
struct is_service<skuba_msgs::srv::ArmCommand>
  : std::true_type
{
};

template<>
struct is_service_request<skuba_msgs::srv::ArmCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<skuba_msgs::srv::ArmCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SKUBA_MSGS__SRV__DETAIL__ARM_COMMAND__TRAITS_HPP_
