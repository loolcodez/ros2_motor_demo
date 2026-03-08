// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motor_msgs:msg/BoardStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_msgs/msg/board_status.hpp"


#ifndef MOTOR_MSGS__MSG__DETAIL__BOARD_STATUS__BUILDER_HPP_
#define MOTOR_MSGS__MSG__DETAIL__BOARD_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motor_msgs/msg/detail/board_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motor_msgs
{

namespace msg
{

namespace builder
{

class Init_BoardStatus_status_text
{
public:
  explicit Init_BoardStatus_status_text(::motor_msgs::msg::BoardStatus & msg)
  : msg_(msg)
  {}
  ::motor_msgs::msg::BoardStatus status_text(::motor_msgs::msg::BoardStatus::_status_text_type arg)
  {
    msg_.status_text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_msgs::msg::BoardStatus msg_;
};

class Init_BoardStatus_firmware_minor
{
public:
  explicit Init_BoardStatus_firmware_minor(::motor_msgs::msg::BoardStatus & msg)
  : msg_(msg)
  {}
  Init_BoardStatus_status_text firmware_minor(::motor_msgs::msg::BoardStatus::_firmware_minor_type arg)
  {
    msg_.firmware_minor = std::move(arg);
    return Init_BoardStatus_status_text(msg_);
  }

private:
  ::motor_msgs::msg::BoardStatus msg_;
};

class Init_BoardStatus_firmware_major
{
public:
  explicit Init_BoardStatus_firmware_major(::motor_msgs::msg::BoardStatus & msg)
  : msg_(msg)
  {}
  Init_BoardStatus_firmware_minor firmware_major(::motor_msgs::msg::BoardStatus::_firmware_major_type arg)
  {
    msg_.firmware_major = std::move(arg);
    return Init_BoardStatus_firmware_minor(msg_);
  }

private:
  ::motor_msgs::msg::BoardStatus msg_;
};

class Init_BoardStatus_device_path
{
public:
  explicit Init_BoardStatus_device_path(::motor_msgs::msg::BoardStatus & msg)
  : msg_(msg)
  {}
  Init_BoardStatus_firmware_major device_path(::motor_msgs::msg::BoardStatus::_device_path_type arg)
  {
    msg_.device_path = std::move(arg);
    return Init_BoardStatus_firmware_major(msg_);
  }

private:
  ::motor_msgs::msg::BoardStatus msg_;
};

class Init_BoardStatus_transport
{
public:
  explicit Init_BoardStatus_transport(::motor_msgs::msg::BoardStatus & msg)
  : msg_(msg)
  {}
  Init_BoardStatus_device_path transport(::motor_msgs::msg::BoardStatus::_transport_type arg)
  {
    msg_.transport = std::move(arg);
    return Init_BoardStatus_device_path(msg_);
  }

private:
  ::motor_msgs::msg::BoardStatus msg_;
};

class Init_BoardStatus_board_name
{
public:
  explicit Init_BoardStatus_board_name(::motor_msgs::msg::BoardStatus & msg)
  : msg_(msg)
  {}
  Init_BoardStatus_transport board_name(::motor_msgs::msg::BoardStatus::_board_name_type arg)
  {
    msg_.board_name = std::move(arg);
    return Init_BoardStatus_transport(msg_);
  }

private:
  ::motor_msgs::msg::BoardStatus msg_;
};

class Init_BoardStatus_detected
{
public:
  explicit Init_BoardStatus_detected(::motor_msgs::msg::BoardStatus & msg)
  : msg_(msg)
  {}
  Init_BoardStatus_board_name detected(::motor_msgs::msg::BoardStatus::_detected_type arg)
  {
    msg_.detected = std::move(arg);
    return Init_BoardStatus_board_name(msg_);
  }

private:
  ::motor_msgs::msg::BoardStatus msg_;
};

class Init_BoardStatus_stamp
{
public:
  Init_BoardStatus_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoardStatus_detected stamp(::motor_msgs::msg::BoardStatus::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_BoardStatus_detected(msg_);
  }

private:
  ::motor_msgs::msg::BoardStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_msgs::msg::BoardStatus>()
{
  return motor_msgs::msg::builder::Init_BoardStatus_stamp();
}

}  // namespace motor_msgs

#endif  // MOTOR_MSGS__MSG__DETAIL__BOARD_STATUS__BUILDER_HPP_
