// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from skuba_msgs:msg/ArmState.idl
// generated code does not contain a copyright notice

#ifndef SKUBA_MSGS__MSG__DETAIL__ARM_STATE__TRAITS_HPP_
#define SKUBA_MSGS__MSG__DETAIL__ARM_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "skuba_msgs/msg/detail/arm_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace skuba_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmState & msg,
  std::ostream & out)
{
  out << "{";
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

  // member: efforts
  {
    if (msg.efforts.size() == 0) {
      out << "efforts: []";
    } else {
      out << "efforts: [";
      size_t pending_items = msg.efforts.size();
      for (auto item : msg.efforts) {
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
    out << ", ";
  }

  // member: is_moving
  {
    out << "is_moving: ";
    rosidl_generator_traits::value_to_yaml(msg.is_moving, out);
    out << ", ";
  }

  // member: is_error
  {
    out << "is_error: ";
    rosidl_generator_traits::value_to_yaml(msg.is_error, out);
    out << ", ";
  }

  // member: error_message
  {
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmState & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: efforts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.efforts.size() == 0) {
      out << "efforts: []\n";
    } else {
      out << "efforts:\n";
      for (auto item : msg.efforts) {
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

  // member: is_moving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_moving: ";
    rosidl_generator_traits::value_to_yaml(msg.is_moving, out);
    out << "\n";
  }

  // member: is_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_error: ";
    rosidl_generator_traits::value_to_yaml(msg.is_error, out);
    out << "\n";
  }

  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace skuba_msgs

namespace rosidl_generator_traits
{

[[deprecated("use skuba_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const skuba_msgs::msg::ArmState & msg,
  std::ostream & out, size_t indentation = 0)
{
  skuba_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use skuba_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const skuba_msgs::msg::ArmState & msg)
{
  return skuba_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<skuba_msgs::msg::ArmState>()
{
  return "skuba_msgs::msg::ArmState";
}

template<>
inline const char * name<skuba_msgs::msg::ArmState>()
{
  return "skuba_msgs/msg/ArmState";
}

template<>
struct has_fixed_size<skuba_msgs::msg::ArmState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<skuba_msgs::msg::ArmState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<skuba_msgs::msg::ArmState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SKUBA_MSGS__MSG__DETAIL__ARM_STATE__TRAITS_HPP_
