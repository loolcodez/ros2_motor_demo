// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from motor_msgs:msg/BoardStatus.idl
// generated code does not contain a copyright notice

#include "motor_msgs/msg/detail/board_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_motor_msgs
const rosidl_type_hash_t *
motor_msgs__msg__BoardStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0xd9, 0xa4, 0xce, 0x28, 0x1e, 0xf1, 0x54,
      0xd7, 0xa4, 0x1c, 0xf6, 0x0a, 0x35, 0x7a, 0x97,
      0x5f, 0x77, 0xb8, 0xa9, 0xc1, 0xf6, 0x54, 0x01,
      0xd1, 0x0f, 0xc4, 0x10, 0xe5, 0x3d, 0x89, 0xfe,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char motor_msgs__msg__BoardStatus__TYPE_NAME[] = "motor_msgs/msg/BoardStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char motor_msgs__msg__BoardStatus__FIELD_NAME__stamp[] = "stamp";
static char motor_msgs__msg__BoardStatus__FIELD_NAME__detected[] = "detected";
static char motor_msgs__msg__BoardStatus__FIELD_NAME__board_name[] = "board_name";
static char motor_msgs__msg__BoardStatus__FIELD_NAME__transport[] = "transport";
static char motor_msgs__msg__BoardStatus__FIELD_NAME__device_path[] = "device_path";
static char motor_msgs__msg__BoardStatus__FIELD_NAME__firmware_major[] = "firmware_major";
static char motor_msgs__msg__BoardStatus__FIELD_NAME__firmware_minor[] = "firmware_minor";
static char motor_msgs__msg__BoardStatus__FIELD_NAME__status_text[] = "status_text";

static rosidl_runtime_c__type_description__Field motor_msgs__msg__BoardStatus__FIELDS[] = {
  {
    {motor_msgs__msg__BoardStatus__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {motor_msgs__msg__BoardStatus__FIELD_NAME__detected, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motor_msgs__msg__BoardStatus__FIELD_NAME__board_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motor_msgs__msg__BoardStatus__FIELD_NAME__transport, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motor_msgs__msg__BoardStatus__FIELD_NAME__device_path, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motor_msgs__msg__BoardStatus__FIELD_NAME__firmware_major, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motor_msgs__msg__BoardStatus__FIELD_NAME__firmware_minor, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motor_msgs__msg__BoardStatus__FIELD_NAME__status_text, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription motor_msgs__msg__BoardStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
motor_msgs__msg__BoardStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motor_msgs__msg__BoardStatus__TYPE_NAME, 26, 26},
      {motor_msgs__msg__BoardStatus__FIELDS, 8, 8},
    },
    {motor_msgs__msg__BoardStatus__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time stamp\n"
  "bool detected\n"
  "string board_name\n"
  "string transport\n"
  "string device_path\n"
  "int32 firmware_major\n"
  "int32 firmware_minor\n"
  "string status_text";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
motor_msgs__msg__BoardStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motor_msgs__msg__BoardStatus__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 159, 159},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motor_msgs__msg__BoardStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motor_msgs__msg__BoardStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
