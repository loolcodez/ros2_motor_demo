// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motor_msgs:msg/BoardStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_msgs/msg/board_status.hpp"


#ifndef MOTOR_MSGS__MSG__DETAIL__BOARD_STATUS__STRUCT_HPP_
#define MOTOR_MSGS__MSG__DETAIL__BOARD_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__motor_msgs__msg__BoardStatus __attribute__((deprecated))
#else
# define DEPRECATED__motor_msgs__msg__BoardStatus __declspec(deprecated)
#endif

namespace motor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoardStatus_
{
  using Type = BoardStatus_<ContainerAllocator>;

  explicit BoardStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detected = false;
      this->board_name = "";
      this->transport = "";
      this->device_path = "";
      this->firmware_major = 0l;
      this->firmware_minor = 0l;
      this->status_text = "";
    }
  }

  explicit BoardStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    board_name(_alloc),
    transport(_alloc),
    device_path(_alloc),
    status_text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detected = false;
      this->board_name = "";
      this->transport = "";
      this->device_path = "";
      this->firmware_major = 0l;
      this->firmware_minor = 0l;
      this->status_text = "";
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _detected_type =
    bool;
  _detected_type detected;
  using _board_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _board_name_type board_name;
  using _transport_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _transport_type transport;
  using _device_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _device_path_type device_path;
  using _firmware_major_type =
    int32_t;
  _firmware_major_type firmware_major;
  using _firmware_minor_type =
    int32_t;
  _firmware_minor_type firmware_minor;
  using _status_text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_text_type status_text;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__detected(
    const bool & _arg)
  {
    this->detected = _arg;
    return *this;
  }
  Type & set__board_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->board_name = _arg;
    return *this;
  }
  Type & set__transport(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->transport = _arg;
    return *this;
  }
  Type & set__device_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->device_path = _arg;
    return *this;
  }
  Type & set__firmware_major(
    const int32_t & _arg)
  {
    this->firmware_major = _arg;
    return *this;
  }
  Type & set__firmware_minor(
    const int32_t & _arg)
  {
    this->firmware_minor = _arg;
    return *this;
  }
  Type & set__status_text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status_text = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_msgs::msg::BoardStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_msgs::msg::BoardStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_msgs::msg::BoardStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_msgs::msg::BoardStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_msgs::msg::BoardStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_msgs::msg::BoardStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_msgs::msg::BoardStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_msgs::msg::BoardStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_msgs::msg::BoardStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_msgs::msg::BoardStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_msgs__msg__BoardStatus
    std::shared_ptr<motor_msgs::msg::BoardStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_msgs__msg__BoardStatus
    std::shared_ptr<motor_msgs::msg::BoardStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoardStatus_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->detected != other.detected) {
      return false;
    }
    if (this->board_name != other.board_name) {
      return false;
    }
    if (this->transport != other.transport) {
      return false;
    }
    if (this->device_path != other.device_path) {
      return false;
    }
    if (this->firmware_major != other.firmware_major) {
      return false;
    }
    if (this->firmware_minor != other.firmware_minor) {
      return false;
    }
    if (this->status_text != other.status_text) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoardStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoardStatus_

// alias to use template instance with default allocator
using BoardStatus =
  motor_msgs::msg::BoardStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace motor_msgs

#endif  // MOTOR_MSGS__MSG__DETAIL__BOARD_STATUS__STRUCT_HPP_
