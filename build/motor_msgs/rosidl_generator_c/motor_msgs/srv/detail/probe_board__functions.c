// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from motor_msgs:srv/ProbeBoard.idl
// generated code does not contain a copyright notice
#include "motor_msgs/srv/detail/probe_board__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
motor_msgs__srv__ProbeBoard_Request__init(motor_msgs__srv__ProbeBoard_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
motor_msgs__srv__ProbeBoard_Request__fini(motor_msgs__srv__ProbeBoard_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
motor_msgs__srv__ProbeBoard_Request__are_equal(const motor_msgs__srv__ProbeBoard_Request * lhs, const motor_msgs__srv__ProbeBoard_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
motor_msgs__srv__ProbeBoard_Request__copy(
  const motor_msgs__srv__ProbeBoard_Request * input,
  motor_msgs__srv__ProbeBoard_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

motor_msgs__srv__ProbeBoard_Request *
motor_msgs__srv__ProbeBoard_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_msgs__srv__ProbeBoard_Request * msg = (motor_msgs__srv__ProbeBoard_Request *)allocator.allocate(sizeof(motor_msgs__srv__ProbeBoard_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motor_msgs__srv__ProbeBoard_Request));
  bool success = motor_msgs__srv__ProbeBoard_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motor_msgs__srv__ProbeBoard_Request__destroy(motor_msgs__srv__ProbeBoard_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motor_msgs__srv__ProbeBoard_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motor_msgs__srv__ProbeBoard_Request__Sequence__init(motor_msgs__srv__ProbeBoard_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_msgs__srv__ProbeBoard_Request * data = NULL;

  if (size) {
    data = (motor_msgs__srv__ProbeBoard_Request *)allocator.zero_allocate(size, sizeof(motor_msgs__srv__ProbeBoard_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motor_msgs__srv__ProbeBoard_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motor_msgs__srv__ProbeBoard_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
motor_msgs__srv__ProbeBoard_Request__Sequence__fini(motor_msgs__srv__ProbeBoard_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      motor_msgs__srv__ProbeBoard_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

motor_msgs__srv__ProbeBoard_Request__Sequence *
motor_msgs__srv__ProbeBoard_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_msgs__srv__ProbeBoard_Request__Sequence * array = (motor_msgs__srv__ProbeBoard_Request__Sequence *)allocator.allocate(sizeof(motor_msgs__srv__ProbeBoard_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motor_msgs__srv__ProbeBoard_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motor_msgs__srv__ProbeBoard_Request__Sequence__destroy(motor_msgs__srv__ProbeBoard_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motor_msgs__srv__ProbeBoard_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motor_msgs__srv__ProbeBoard_Request__Sequence__are_equal(const motor_msgs__srv__ProbeBoard_Request__Sequence * lhs, const motor_msgs__srv__ProbeBoard_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motor_msgs__srv__ProbeBoard_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motor_msgs__srv__ProbeBoard_Request__Sequence__copy(
  const motor_msgs__srv__ProbeBoard_Request__Sequence * input,
  motor_msgs__srv__ProbeBoard_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motor_msgs__srv__ProbeBoard_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motor_msgs__srv__ProbeBoard_Request * data =
      (motor_msgs__srv__ProbeBoard_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motor_msgs__srv__ProbeBoard_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motor_msgs__srv__ProbeBoard_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motor_msgs__srv__ProbeBoard_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `board_name`
// Member `device_path`
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
motor_msgs__srv__ProbeBoard_Response__init(motor_msgs__srv__ProbeBoard_Response * msg)
{
  if (!msg) {
    return false;
  }
  // detected
  // board_name
  if (!rosidl_runtime_c__String__init(&msg->board_name)) {
    motor_msgs__srv__ProbeBoard_Response__fini(msg);
    return false;
  }
  // device_path
  if (!rosidl_runtime_c__String__init(&msg->device_path)) {
    motor_msgs__srv__ProbeBoard_Response__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    motor_msgs__srv__ProbeBoard_Response__fini(msg);
    return false;
  }
  return true;
}

void
motor_msgs__srv__ProbeBoard_Response__fini(motor_msgs__srv__ProbeBoard_Response * msg)
{
  if (!msg) {
    return;
  }
  // detected
  // board_name
  rosidl_runtime_c__String__fini(&msg->board_name);
  // device_path
  rosidl_runtime_c__String__fini(&msg->device_path);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
motor_msgs__srv__ProbeBoard_Response__are_equal(const motor_msgs__srv__ProbeBoard_Response * lhs, const motor_msgs__srv__ProbeBoard_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // detected
  if (lhs->detected != rhs->detected) {
    return false;
  }
  // board_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->board_name), &(rhs->board_name)))
  {
    return false;
  }
  // device_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->device_path), &(rhs->device_path)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
motor_msgs__srv__ProbeBoard_Response__copy(
  const motor_msgs__srv__ProbeBoard_Response * input,
  motor_msgs__srv__ProbeBoard_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // detected
  output->detected = input->detected;
  // board_name
  if (!rosidl_runtime_c__String__copy(
      &(input->board_name), &(output->board_name)))
  {
    return false;
  }
  // device_path
  if (!rosidl_runtime_c__String__copy(
      &(input->device_path), &(output->device_path)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

motor_msgs__srv__ProbeBoard_Response *
motor_msgs__srv__ProbeBoard_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_msgs__srv__ProbeBoard_Response * msg = (motor_msgs__srv__ProbeBoard_Response *)allocator.allocate(sizeof(motor_msgs__srv__ProbeBoard_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motor_msgs__srv__ProbeBoard_Response));
  bool success = motor_msgs__srv__ProbeBoard_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motor_msgs__srv__ProbeBoard_Response__destroy(motor_msgs__srv__ProbeBoard_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motor_msgs__srv__ProbeBoard_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motor_msgs__srv__ProbeBoard_Response__Sequence__init(motor_msgs__srv__ProbeBoard_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_msgs__srv__ProbeBoard_Response * data = NULL;

  if (size) {
    data = (motor_msgs__srv__ProbeBoard_Response *)allocator.zero_allocate(size, sizeof(motor_msgs__srv__ProbeBoard_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motor_msgs__srv__ProbeBoard_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motor_msgs__srv__ProbeBoard_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
motor_msgs__srv__ProbeBoard_Response__Sequence__fini(motor_msgs__srv__ProbeBoard_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      motor_msgs__srv__ProbeBoard_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

motor_msgs__srv__ProbeBoard_Response__Sequence *
motor_msgs__srv__ProbeBoard_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_msgs__srv__ProbeBoard_Response__Sequence * array = (motor_msgs__srv__ProbeBoard_Response__Sequence *)allocator.allocate(sizeof(motor_msgs__srv__ProbeBoard_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motor_msgs__srv__ProbeBoard_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motor_msgs__srv__ProbeBoard_Response__Sequence__destroy(motor_msgs__srv__ProbeBoard_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motor_msgs__srv__ProbeBoard_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motor_msgs__srv__ProbeBoard_Response__Sequence__are_equal(const motor_msgs__srv__ProbeBoard_Response__Sequence * lhs, const motor_msgs__srv__ProbeBoard_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motor_msgs__srv__ProbeBoard_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motor_msgs__srv__ProbeBoard_Response__Sequence__copy(
  const motor_msgs__srv__ProbeBoard_Response__Sequence * input,
  motor_msgs__srv__ProbeBoard_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motor_msgs__srv__ProbeBoard_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motor_msgs__srv__ProbeBoard_Response * data =
      (motor_msgs__srv__ProbeBoard_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motor_msgs__srv__ProbeBoard_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motor_msgs__srv__ProbeBoard_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motor_msgs__srv__ProbeBoard_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "motor_msgs/srv/detail/probe_board__functions.h"

bool
motor_msgs__srv__ProbeBoard_Event__init(motor_msgs__srv__ProbeBoard_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    motor_msgs__srv__ProbeBoard_Event__fini(msg);
    return false;
  }
  // request
  if (!motor_msgs__srv__ProbeBoard_Request__Sequence__init(&msg->request, 0)) {
    motor_msgs__srv__ProbeBoard_Event__fini(msg);
    return false;
  }
  // response
  if (!motor_msgs__srv__ProbeBoard_Response__Sequence__init(&msg->response, 0)) {
    motor_msgs__srv__ProbeBoard_Event__fini(msg);
    return false;
  }
  return true;
}

void
motor_msgs__srv__ProbeBoard_Event__fini(motor_msgs__srv__ProbeBoard_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  motor_msgs__srv__ProbeBoard_Request__Sequence__fini(&msg->request);
  // response
  motor_msgs__srv__ProbeBoard_Response__Sequence__fini(&msg->response);
}

bool
motor_msgs__srv__ProbeBoard_Event__are_equal(const motor_msgs__srv__ProbeBoard_Event * lhs, const motor_msgs__srv__ProbeBoard_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!motor_msgs__srv__ProbeBoard_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!motor_msgs__srv__ProbeBoard_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
motor_msgs__srv__ProbeBoard_Event__copy(
  const motor_msgs__srv__ProbeBoard_Event * input,
  motor_msgs__srv__ProbeBoard_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!motor_msgs__srv__ProbeBoard_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!motor_msgs__srv__ProbeBoard_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

motor_msgs__srv__ProbeBoard_Event *
motor_msgs__srv__ProbeBoard_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_msgs__srv__ProbeBoard_Event * msg = (motor_msgs__srv__ProbeBoard_Event *)allocator.allocate(sizeof(motor_msgs__srv__ProbeBoard_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motor_msgs__srv__ProbeBoard_Event));
  bool success = motor_msgs__srv__ProbeBoard_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motor_msgs__srv__ProbeBoard_Event__destroy(motor_msgs__srv__ProbeBoard_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motor_msgs__srv__ProbeBoard_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motor_msgs__srv__ProbeBoard_Event__Sequence__init(motor_msgs__srv__ProbeBoard_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_msgs__srv__ProbeBoard_Event * data = NULL;

  if (size) {
    data = (motor_msgs__srv__ProbeBoard_Event *)allocator.zero_allocate(size, sizeof(motor_msgs__srv__ProbeBoard_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motor_msgs__srv__ProbeBoard_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motor_msgs__srv__ProbeBoard_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
motor_msgs__srv__ProbeBoard_Event__Sequence__fini(motor_msgs__srv__ProbeBoard_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      motor_msgs__srv__ProbeBoard_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

motor_msgs__srv__ProbeBoard_Event__Sequence *
motor_msgs__srv__ProbeBoard_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_msgs__srv__ProbeBoard_Event__Sequence * array = (motor_msgs__srv__ProbeBoard_Event__Sequence *)allocator.allocate(sizeof(motor_msgs__srv__ProbeBoard_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motor_msgs__srv__ProbeBoard_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motor_msgs__srv__ProbeBoard_Event__Sequence__destroy(motor_msgs__srv__ProbeBoard_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motor_msgs__srv__ProbeBoard_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motor_msgs__srv__ProbeBoard_Event__Sequence__are_equal(const motor_msgs__srv__ProbeBoard_Event__Sequence * lhs, const motor_msgs__srv__ProbeBoard_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motor_msgs__srv__ProbeBoard_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motor_msgs__srv__ProbeBoard_Event__Sequence__copy(
  const motor_msgs__srv__ProbeBoard_Event__Sequence * input,
  motor_msgs__srv__ProbeBoard_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motor_msgs__srv__ProbeBoard_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motor_msgs__srv__ProbeBoard_Event * data =
      (motor_msgs__srv__ProbeBoard_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motor_msgs__srv__ProbeBoard_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motor_msgs__srv__ProbeBoard_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motor_msgs__srv__ProbeBoard_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
