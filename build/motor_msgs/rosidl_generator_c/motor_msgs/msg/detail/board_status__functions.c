// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from motor_msgs:msg/BoardStatus.idl
// generated code does not contain a copyright notice
#include "motor_msgs/msg/detail/board_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `board_name`
// Member `transport`
// Member `device_path`
// Member `status_text`
#include "rosidl_runtime_c/string_functions.h"

bool
motor_msgs__msg__BoardStatus__init(motor_msgs__msg__BoardStatus * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    motor_msgs__msg__BoardStatus__fini(msg);
    return false;
  }
  // detected
  // board_name
  if (!rosidl_runtime_c__String__init(&msg->board_name)) {
    motor_msgs__msg__BoardStatus__fini(msg);
    return false;
  }
  // transport
  if (!rosidl_runtime_c__String__init(&msg->transport)) {
    motor_msgs__msg__BoardStatus__fini(msg);
    return false;
  }
  // device_path
  if (!rosidl_runtime_c__String__init(&msg->device_path)) {
    motor_msgs__msg__BoardStatus__fini(msg);
    return false;
  }
  // firmware_major
  // firmware_minor
  // status_text
  if (!rosidl_runtime_c__String__init(&msg->status_text)) {
    motor_msgs__msg__BoardStatus__fini(msg);
    return false;
  }
  return true;
}

void
motor_msgs__msg__BoardStatus__fini(motor_msgs__msg__BoardStatus * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // detected
  // board_name
  rosidl_runtime_c__String__fini(&msg->board_name);
  // transport
  rosidl_runtime_c__String__fini(&msg->transport);
  // device_path
  rosidl_runtime_c__String__fini(&msg->device_path);
  // firmware_major
  // firmware_minor
  // status_text
  rosidl_runtime_c__String__fini(&msg->status_text);
}

bool
motor_msgs__msg__BoardStatus__are_equal(const motor_msgs__msg__BoardStatus * lhs, const motor_msgs__msg__BoardStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
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
  // transport
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->transport), &(rhs->transport)))
  {
    return false;
  }
  // device_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->device_path), &(rhs->device_path)))
  {
    return false;
  }
  // firmware_major
  if (lhs->firmware_major != rhs->firmware_major) {
    return false;
  }
  // firmware_minor
  if (lhs->firmware_minor != rhs->firmware_minor) {
    return false;
  }
  // status_text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status_text), &(rhs->status_text)))
  {
    return false;
  }
  return true;
}

bool
motor_msgs__msg__BoardStatus__copy(
  const motor_msgs__msg__BoardStatus * input,
  motor_msgs__msg__BoardStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
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
  // transport
  if (!rosidl_runtime_c__String__copy(
      &(input->transport), &(output->transport)))
  {
    return false;
  }
  // device_path
  if (!rosidl_runtime_c__String__copy(
      &(input->device_path), &(output->device_path)))
  {
    return false;
  }
  // firmware_major
  output->firmware_major = input->firmware_major;
  // firmware_minor
  output->firmware_minor = input->firmware_minor;
  // status_text
  if (!rosidl_runtime_c__String__copy(
      &(input->status_text), &(output->status_text)))
  {
    return false;
  }
  return true;
}

motor_msgs__msg__BoardStatus *
motor_msgs__msg__BoardStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_msgs__msg__BoardStatus * msg = (motor_msgs__msg__BoardStatus *)allocator.allocate(sizeof(motor_msgs__msg__BoardStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motor_msgs__msg__BoardStatus));
  bool success = motor_msgs__msg__BoardStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motor_msgs__msg__BoardStatus__destroy(motor_msgs__msg__BoardStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motor_msgs__msg__BoardStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motor_msgs__msg__BoardStatus__Sequence__init(motor_msgs__msg__BoardStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_msgs__msg__BoardStatus * data = NULL;

  if (size) {
    data = (motor_msgs__msg__BoardStatus *)allocator.zero_allocate(size, sizeof(motor_msgs__msg__BoardStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motor_msgs__msg__BoardStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motor_msgs__msg__BoardStatus__fini(&data[i - 1]);
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
motor_msgs__msg__BoardStatus__Sequence__fini(motor_msgs__msg__BoardStatus__Sequence * array)
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
      motor_msgs__msg__BoardStatus__fini(&array->data[i]);
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

motor_msgs__msg__BoardStatus__Sequence *
motor_msgs__msg__BoardStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_msgs__msg__BoardStatus__Sequence * array = (motor_msgs__msg__BoardStatus__Sequence *)allocator.allocate(sizeof(motor_msgs__msg__BoardStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motor_msgs__msg__BoardStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motor_msgs__msg__BoardStatus__Sequence__destroy(motor_msgs__msg__BoardStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motor_msgs__msg__BoardStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motor_msgs__msg__BoardStatus__Sequence__are_equal(const motor_msgs__msg__BoardStatus__Sequence * lhs, const motor_msgs__msg__BoardStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motor_msgs__msg__BoardStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motor_msgs__msg__BoardStatus__Sequence__copy(
  const motor_msgs__msg__BoardStatus__Sequence * input,
  motor_msgs__msg__BoardStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motor_msgs__msg__BoardStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motor_msgs__msg__BoardStatus * data =
      (motor_msgs__msg__BoardStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motor_msgs__msg__BoardStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motor_msgs__msg__BoardStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motor_msgs__msg__BoardStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
