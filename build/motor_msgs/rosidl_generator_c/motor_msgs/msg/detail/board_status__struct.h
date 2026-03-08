// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motor_msgs:msg/BoardStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_msgs/msg/board_status.h"


#ifndef MOTOR_MSGS__MSG__DETAIL__BOARD_STATUS__STRUCT_H_
#define MOTOR_MSGS__MSG__DETAIL__BOARD_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'board_name'
// Member 'transport'
// Member 'device_path'
// Member 'status_text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/BoardStatus in the package motor_msgs.
typedef struct motor_msgs__msg__BoardStatus
{
  builtin_interfaces__msg__Time stamp;
  bool detected;
  rosidl_runtime_c__String board_name;
  rosidl_runtime_c__String transport;
  rosidl_runtime_c__String device_path;
  int32_t firmware_major;
  int32_t firmware_minor;
  rosidl_runtime_c__String status_text;
} motor_msgs__msg__BoardStatus;

// Struct for a sequence of motor_msgs__msg__BoardStatus.
typedef struct motor_msgs__msg__BoardStatus__Sequence
{
  motor_msgs__msg__BoardStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_msgs__msg__BoardStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_MSGS__MSG__DETAIL__BOARD_STATUS__STRUCT_H_
