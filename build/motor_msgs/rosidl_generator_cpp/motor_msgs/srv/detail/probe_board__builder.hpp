// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motor_msgs:srv/ProbeBoard.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_msgs/srv/probe_board.hpp"


#ifndef MOTOR_MSGS__SRV__DETAIL__PROBE_BOARD__BUILDER_HPP_
#define MOTOR_MSGS__SRV__DETAIL__PROBE_BOARD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motor_msgs/srv/detail/probe_board__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motor_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_msgs::srv::ProbeBoard_Request>()
{
  return ::motor_msgs::srv::ProbeBoard_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace motor_msgs


namespace motor_msgs
{

namespace srv
{

namespace builder
{

class Init_ProbeBoard_Response_message
{
public:
  explicit Init_ProbeBoard_Response_message(::motor_msgs::srv::ProbeBoard_Response & msg)
  : msg_(msg)
  {}
  ::motor_msgs::srv::ProbeBoard_Response message(::motor_msgs::srv::ProbeBoard_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_msgs::srv::ProbeBoard_Response msg_;
};

class Init_ProbeBoard_Response_device_path
{
public:
  explicit Init_ProbeBoard_Response_device_path(::motor_msgs::srv::ProbeBoard_Response & msg)
  : msg_(msg)
  {}
  Init_ProbeBoard_Response_message device_path(::motor_msgs::srv::ProbeBoard_Response::_device_path_type arg)
  {
    msg_.device_path = std::move(arg);
    return Init_ProbeBoard_Response_message(msg_);
  }

private:
  ::motor_msgs::srv::ProbeBoard_Response msg_;
};

class Init_ProbeBoard_Response_board_name
{
public:
  explicit Init_ProbeBoard_Response_board_name(::motor_msgs::srv::ProbeBoard_Response & msg)
  : msg_(msg)
  {}
  Init_ProbeBoard_Response_device_path board_name(::motor_msgs::srv::ProbeBoard_Response::_board_name_type arg)
  {
    msg_.board_name = std::move(arg);
    return Init_ProbeBoard_Response_device_path(msg_);
  }

private:
  ::motor_msgs::srv::ProbeBoard_Response msg_;
};

class Init_ProbeBoard_Response_detected
{
public:
  Init_ProbeBoard_Response_detected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProbeBoard_Response_board_name detected(::motor_msgs::srv::ProbeBoard_Response::_detected_type arg)
  {
    msg_.detected = std::move(arg);
    return Init_ProbeBoard_Response_board_name(msg_);
  }

private:
  ::motor_msgs::srv::ProbeBoard_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_msgs::srv::ProbeBoard_Response>()
{
  return motor_msgs::srv::builder::Init_ProbeBoard_Response_detected();
}

}  // namespace motor_msgs


namespace motor_msgs
{

namespace srv
{

namespace builder
{

class Init_ProbeBoard_Event_response
{
public:
  explicit Init_ProbeBoard_Event_response(::motor_msgs::srv::ProbeBoard_Event & msg)
  : msg_(msg)
  {}
  ::motor_msgs::srv::ProbeBoard_Event response(::motor_msgs::srv::ProbeBoard_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_msgs::srv::ProbeBoard_Event msg_;
};

class Init_ProbeBoard_Event_request
{
public:
  explicit Init_ProbeBoard_Event_request(::motor_msgs::srv::ProbeBoard_Event & msg)
  : msg_(msg)
  {}
  Init_ProbeBoard_Event_response request(::motor_msgs::srv::ProbeBoard_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ProbeBoard_Event_response(msg_);
  }

private:
  ::motor_msgs::srv::ProbeBoard_Event msg_;
};

class Init_ProbeBoard_Event_info
{
public:
  Init_ProbeBoard_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProbeBoard_Event_request info(::motor_msgs::srv::ProbeBoard_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ProbeBoard_Event_request(msg_);
  }

private:
  ::motor_msgs::srv::ProbeBoard_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_msgs::srv::ProbeBoard_Event>()
{
  return motor_msgs::srv::builder::Init_ProbeBoard_Event_info();
}

}  // namespace motor_msgs

#endif  // MOTOR_MSGS__SRV__DETAIL__PROBE_BOARD__BUILDER_HPP_
