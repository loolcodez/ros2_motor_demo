// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motor_msgs:msg/BoardStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_msgs/msg/board_status.hpp"


#ifndef MOTOR_MSGS__MSG__DETAIL__BOARD_STATUS__TRAITS_HPP_
#define MOTOR_MSGS__MSG__DETAIL__BOARD_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "motor_msgs/msg/detail/board_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace motor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoardStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: detected
  {
    out << "detected: ";
    rosidl_generator_traits::value_to_yaml(msg.detected, out);
    out << ", ";
  }

  // member: board_name
  {
    out << "board_name: ";
    rosidl_generator_traits::value_to_yaml(msg.board_name, out);
    out << ", ";
  }

  // member: transport
  {
    out << "transport: ";
    rosidl_generator_traits::value_to_yaml(msg.transport, out);
    out << ", ";
  }

  // member: device_path
  {
    out << "device_path: ";
    rosidl_generator_traits::value_to_yaml(msg.device_path, out);
    out << ", ";
  }

  // member: firmware_major
  {
    out << "firmware_major: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_major, out);
    out << ", ";
  }

  // member: firmware_minor
  {
    out << "firmware_minor: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_minor, out);
    out << ", ";
  }

  // member: status_text
  {
    out << "status_text: ";
    rosidl_generator_traits::value_to_yaml(msg.status_text, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoardStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detected: ";
    rosidl_generator_traits::value_to_yaml(msg.detected, out);
    out << "\n";
  }

  // member: board_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "board_name: ";
    rosidl_generator_traits::value_to_yaml(msg.board_name, out);
    out << "\n";
  }

  // member: transport
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transport: ";
    rosidl_generator_traits::value_to_yaml(msg.transport, out);
    out << "\n";
  }

  // member: device_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_path: ";
    rosidl_generator_traits::value_to_yaml(msg.device_path, out);
    out << "\n";
  }

  // member: firmware_major
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "firmware_major: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_major, out);
    out << "\n";
  }

  // member: firmware_minor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "firmware_minor: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_minor, out);
    out << "\n";
  }

  // member: status_text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_text: ";
    rosidl_generator_traits::value_to_yaml(msg.status_text, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoardStatus & msg, bool use_flow_style = false)
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

}  // namespace motor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use motor_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motor_msgs::msg::BoardStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  motor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const motor_msgs::msg::BoardStatus & msg)
{
  return motor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<motor_msgs::msg::BoardStatus>()
{
  return "motor_msgs::msg::BoardStatus";
}

template<>
inline const char * name<motor_msgs::msg::BoardStatus>()
{
  return "motor_msgs/msg/BoardStatus";
}

template<>
struct has_fixed_size<motor_msgs::msg::BoardStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<motor_msgs::msg::BoardStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<motor_msgs::msg::BoardStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOTOR_MSGS__MSG__DETAIL__BOARD_STATUS__TRAITS_HPP_
