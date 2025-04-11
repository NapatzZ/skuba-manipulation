// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from skuba_msgs:srv/ArmTrajectory.idl
// generated code does not contain a copyright notice

#ifndef SKUBA_MSGS__SRV__DETAIL__ARM_TRAJECTORY__TRAITS_HPP_
#define SKUBA_MSGS__SRV__DETAIL__ARM_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "skuba_msgs/srv/detail/arm_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time_from_start'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace skuba_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ArmTrajectory_Request & msg,
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

  // member: accelerations
  {
    if (msg.accelerations.size() == 0) {
      out << "accelerations: []";
    } else {
      out << "accelerations: [";
      size_t pending_items = msg.accelerations.size();
      for (auto item : msg.accelerations) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: time_from_start
  {
    if (msg.time_from_start.size() == 0) {
      out << "time_from_start: []";
    } else {
      out << "time_from_start: [";
      size_t pending_items = msg.time_from_start.size();
      for (auto item : msg.time_from_start) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmTrajectory_Request & msg,
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

  // member: accelerations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accelerations.size() == 0) {
      out << "accelerations: []\n";
    } else {
      out << "accelerations:\n";
      for (auto item : msg.accelerations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: time_from_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.time_from_start.size() == 0) {
      out << "time_from_start: []\n";
    } else {
      out << "time_from_start:\n";
      for (auto item : msg.time_from_start) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmTrajectory_Request & msg, bool use_flow_style = false)
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
  const skuba_msgs::srv::ArmTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  skuba_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use skuba_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const skuba_msgs::srv::ArmTrajectory_Request & msg)
{
  return skuba_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<skuba_msgs::srv::ArmTrajectory_Request>()
{
  return "skuba_msgs::srv::ArmTrajectory_Request";
}

template<>
inline const char * name<skuba_msgs::srv::ArmTrajectory_Request>()
{
  return "skuba_msgs/srv/ArmTrajectory_Request";
}

template<>
struct has_fixed_size<skuba_msgs::srv::ArmTrajectory_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<skuba_msgs::srv::ArmTrajectory_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<skuba_msgs::srv::ArmTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace skuba_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ArmTrajectory_Response & msg,
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
  const ArmTrajectory_Response & msg,
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

inline std::string to_yaml(const ArmTrajectory_Response & msg, bool use_flow_style = false)
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
  const skuba_msgs::srv::ArmTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  skuba_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use skuba_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const skuba_msgs::srv::ArmTrajectory_Response & msg)
{
  return skuba_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<skuba_msgs::srv::ArmTrajectory_Response>()
{
  return "skuba_msgs::srv::ArmTrajectory_Response";
}

template<>
inline const char * name<skuba_msgs::srv::ArmTrajectory_Response>()
{
  return "skuba_msgs/srv/ArmTrajectory_Response";
}

template<>
struct has_fixed_size<skuba_msgs::srv::ArmTrajectory_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<skuba_msgs::srv::ArmTrajectory_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<skuba_msgs::srv::ArmTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<skuba_msgs::srv::ArmTrajectory>()
{
  return "skuba_msgs::srv::ArmTrajectory";
}

template<>
inline const char * name<skuba_msgs::srv::ArmTrajectory>()
{
  return "skuba_msgs/srv/ArmTrajectory";
}

template<>
struct has_fixed_size<skuba_msgs::srv::ArmTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<skuba_msgs::srv::ArmTrajectory_Request>::value &&
    has_fixed_size<skuba_msgs::srv::ArmTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<skuba_msgs::srv::ArmTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<skuba_msgs::srv::ArmTrajectory_Request>::value &&
    has_bounded_size<skuba_msgs::srv::ArmTrajectory_Response>::value
  >
{
};

template<>
struct is_service<skuba_msgs::srv::ArmTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<skuba_msgs::srv::ArmTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<skuba_msgs::srv::ArmTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SKUBA_MSGS__SRV__DETAIL__ARM_TRAJECTORY__TRAITS_HPP_
