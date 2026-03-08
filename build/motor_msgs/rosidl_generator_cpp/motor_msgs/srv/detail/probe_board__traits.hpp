// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motor_msgs:srv/ProbeBoard.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_msgs/srv/probe_board.hpp"


#ifndef MOTOR_MSGS__SRV__DETAIL__PROBE_BOARD__TRAITS_HPP_
#define MOTOR_MSGS__SRV__DETAIL__PROBE_BOARD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "motor_msgs/srv/detail/probe_board__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace motor_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ProbeBoard_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProbeBoard_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProbeBoard_Request & msg, bool use_flow_style = false)
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

}  // namespace motor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use motor_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motor_msgs::srv::ProbeBoard_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  motor_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motor_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const motor_msgs::srv::ProbeBoard_Request & msg)
{
  return motor_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<motor_msgs::srv::ProbeBoard_Request>()
{
  return "motor_msgs::srv::ProbeBoard_Request";
}

template<>
inline const char * name<motor_msgs::srv::ProbeBoard_Request>()
{
  return "motor_msgs/srv/ProbeBoard_Request";
}

template<>
struct has_fixed_size<motor_msgs::srv::ProbeBoard_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<motor_msgs::srv::ProbeBoard_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<motor_msgs::srv::ProbeBoard_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace motor_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ProbeBoard_Response & msg,
  std::ostream & out)
{
  out << "{";
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

  // member: device_path
  {
    out << "device_path: ";
    rosidl_generator_traits::value_to_yaml(msg.device_path, out);
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
  const ProbeBoard_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: device_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_path: ";
    rosidl_generator_traits::value_to_yaml(msg.device_path, out);
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

inline std::string to_yaml(const ProbeBoard_Response & msg, bool use_flow_style = false)
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

}  // namespace motor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use motor_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motor_msgs::srv::ProbeBoard_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  motor_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motor_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const motor_msgs::srv::ProbeBoard_Response & msg)
{
  return motor_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<motor_msgs::srv::ProbeBoard_Response>()
{
  return "motor_msgs::srv::ProbeBoard_Response";
}

template<>
inline const char * name<motor_msgs::srv::ProbeBoard_Response>()
{
  return "motor_msgs/srv/ProbeBoard_Response";
}

template<>
struct has_fixed_size<motor_msgs::srv::ProbeBoard_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<motor_msgs::srv::ProbeBoard_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<motor_msgs::srv::ProbeBoard_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace motor_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ProbeBoard_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const ProbeBoard_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProbeBoard_Event & msg, bool use_flow_style = false)
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

}  // namespace motor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use motor_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motor_msgs::srv::ProbeBoard_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  motor_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motor_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const motor_msgs::srv::ProbeBoard_Event & msg)
{
  return motor_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<motor_msgs::srv::ProbeBoard_Event>()
{
  return "motor_msgs::srv::ProbeBoard_Event";
}

template<>
inline const char * name<motor_msgs::srv::ProbeBoard_Event>()
{
  return "motor_msgs/srv/ProbeBoard_Event";
}

template<>
struct has_fixed_size<motor_msgs::srv::ProbeBoard_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<motor_msgs::srv::ProbeBoard_Event>
  : std::integral_constant<bool, has_bounded_size<motor_msgs::srv::ProbeBoard_Request>::value && has_bounded_size<motor_msgs::srv::ProbeBoard_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<motor_msgs::srv::ProbeBoard_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<motor_msgs::srv::ProbeBoard>()
{
  return "motor_msgs::srv::ProbeBoard";
}

template<>
inline const char * name<motor_msgs::srv::ProbeBoard>()
{
  return "motor_msgs/srv/ProbeBoard";
}

template<>
struct has_fixed_size<motor_msgs::srv::ProbeBoard>
  : std::integral_constant<
    bool,
    has_fixed_size<motor_msgs::srv::ProbeBoard_Request>::value &&
    has_fixed_size<motor_msgs::srv::ProbeBoard_Response>::value
  >
{
};

template<>
struct has_bounded_size<motor_msgs::srv::ProbeBoard>
  : std::integral_constant<
    bool,
    has_bounded_size<motor_msgs::srv::ProbeBoard_Request>::value &&
    has_bounded_size<motor_msgs::srv::ProbeBoard_Response>::value
  >
{
};

template<>
struct is_service<motor_msgs::srv::ProbeBoard>
  : std::true_type
{
};

template<>
struct is_service_request<motor_msgs::srv::ProbeBoard_Request>
  : std::true_type
{
};

template<>
struct is_service_response<motor_msgs::srv::ProbeBoard_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOTOR_MSGS__SRV__DETAIL__PROBE_BOARD__TRAITS_HPP_
