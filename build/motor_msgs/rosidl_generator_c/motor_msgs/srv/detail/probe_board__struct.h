// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motor_msgs:srv/ProbeBoard.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_msgs/srv/probe_board.h"


#ifndef MOTOR_MSGS__SRV__DETAIL__PROBE_BOARD__STRUCT_H_
#define MOTOR_MSGS__SRV__DETAIL__PROBE_BOARD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ProbeBoard in the package motor_msgs.
typedef struct motor_msgs__srv__ProbeBoard_Request
{
  uint8_t structure_needs_at_least_one_member;
} motor_msgs__srv__ProbeBoard_Request;

// Struct for a sequence of motor_msgs__srv__ProbeBoard_Request.
typedef struct motor_msgs__srv__ProbeBoard_Request__Sequence
{
  motor_msgs__srv__ProbeBoard_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_msgs__srv__ProbeBoard_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'board_name'
// Member 'device_path'
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ProbeBoard in the package motor_msgs.
typedef struct motor_msgs__srv__ProbeBoard_Response
{
  bool detected;
  rosidl_runtime_c__String board_name;
  rosidl_runtime_c__String device_path;
  rosidl_runtime_c__String message;
} motor_msgs__srv__ProbeBoard_Response;

// Struct for a sequence of motor_msgs__srv__ProbeBoard_Response.
typedef struct motor_msgs__srv__ProbeBoard_Response__Sequence
{
  motor_msgs__srv__ProbeBoard_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_msgs__srv__ProbeBoard_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  motor_msgs__srv__ProbeBoard_Event__request__MAX_SIZE = 1
};
// response
enum
{
  motor_msgs__srv__ProbeBoard_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ProbeBoard in the package motor_msgs.
typedef struct motor_msgs__srv__ProbeBoard_Event
{
  service_msgs__msg__ServiceEventInfo info;
  motor_msgs__srv__ProbeBoard_Request__Sequence request;
  motor_msgs__srv__ProbeBoard_Response__Sequence response;
} motor_msgs__srv__ProbeBoard_Event;

// Struct for a sequence of motor_msgs__srv__ProbeBoard_Event.
typedef struct motor_msgs__srv__ProbeBoard_Event__Sequence
{
  motor_msgs__srv__ProbeBoard_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_msgs__srv__ProbeBoard_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_MSGS__SRV__DETAIL__PROBE_BOARD__STRUCT_H_
