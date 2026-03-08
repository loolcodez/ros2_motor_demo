// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from motor_msgs:srv/ProbeBoard.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "motor_msgs/srv/detail/probe_board__functions.h"
#include "motor_msgs/srv/detail/probe_board__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace motor_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ProbeBoard_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ProbeBoard_Request_type_support_ids_t;

static const _ProbeBoard_Request_type_support_ids_t _ProbeBoard_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ProbeBoard_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ProbeBoard_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ProbeBoard_Request_type_support_symbol_names_t _ProbeBoard_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_msgs, srv, ProbeBoard_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_msgs, srv, ProbeBoard_Request)),
  }
};

typedef struct _ProbeBoard_Request_type_support_data_t
{
  void * data[2];
} _ProbeBoard_Request_type_support_data_t;

static _ProbeBoard_Request_type_support_data_t _ProbeBoard_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ProbeBoard_Request_message_typesupport_map = {
  2,
  "motor_msgs",
  &_ProbeBoard_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ProbeBoard_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ProbeBoard_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ProbeBoard_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ProbeBoard_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &motor_msgs__srv__ProbeBoard_Request__get_type_hash,
  &motor_msgs__srv__ProbeBoard_Request__get_type_description,
  &motor_msgs__srv__ProbeBoard_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace motor_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_msgs::srv::ProbeBoard_Request>()
{
  return &::motor_msgs::srv::rosidl_typesupport_cpp::ProbeBoard_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_msgs, srv, ProbeBoard_Request)() {
  return get_message_type_support_handle<motor_msgs::srv::ProbeBoard_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motor_msgs/srv/detail/probe_board__functions.h"
// already included above
// #include "motor_msgs/srv/detail/probe_board__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ProbeBoard_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ProbeBoard_Response_type_support_ids_t;

static const _ProbeBoard_Response_type_support_ids_t _ProbeBoard_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ProbeBoard_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ProbeBoard_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ProbeBoard_Response_type_support_symbol_names_t _ProbeBoard_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_msgs, srv, ProbeBoard_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_msgs, srv, ProbeBoard_Response)),
  }
};

typedef struct _ProbeBoard_Response_type_support_data_t
{
  void * data[2];
} _ProbeBoard_Response_type_support_data_t;

static _ProbeBoard_Response_type_support_data_t _ProbeBoard_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ProbeBoard_Response_message_typesupport_map = {
  2,
  "motor_msgs",
  &_ProbeBoard_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ProbeBoard_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ProbeBoard_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ProbeBoard_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ProbeBoard_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &motor_msgs__srv__ProbeBoard_Response__get_type_hash,
  &motor_msgs__srv__ProbeBoard_Response__get_type_description,
  &motor_msgs__srv__ProbeBoard_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace motor_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_msgs::srv::ProbeBoard_Response>()
{
  return &::motor_msgs::srv::rosidl_typesupport_cpp::ProbeBoard_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_msgs, srv, ProbeBoard_Response)() {
  return get_message_type_support_handle<motor_msgs::srv::ProbeBoard_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motor_msgs/srv/detail/probe_board__functions.h"
// already included above
// #include "motor_msgs/srv/detail/probe_board__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ProbeBoard_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ProbeBoard_Event_type_support_ids_t;

static const _ProbeBoard_Event_type_support_ids_t _ProbeBoard_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ProbeBoard_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ProbeBoard_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ProbeBoard_Event_type_support_symbol_names_t _ProbeBoard_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_msgs, srv, ProbeBoard_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_msgs, srv, ProbeBoard_Event)),
  }
};

typedef struct _ProbeBoard_Event_type_support_data_t
{
  void * data[2];
} _ProbeBoard_Event_type_support_data_t;

static _ProbeBoard_Event_type_support_data_t _ProbeBoard_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ProbeBoard_Event_message_typesupport_map = {
  2,
  "motor_msgs",
  &_ProbeBoard_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ProbeBoard_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ProbeBoard_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ProbeBoard_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ProbeBoard_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &motor_msgs__srv__ProbeBoard_Event__get_type_hash,
  &motor_msgs__srv__ProbeBoard_Event__get_type_description,
  &motor_msgs__srv__ProbeBoard_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace motor_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_msgs::srv::ProbeBoard_Event>()
{
  return &::motor_msgs::srv::rosidl_typesupport_cpp::ProbeBoard_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_msgs, srv, ProbeBoard_Event)() {
  return get_message_type_support_handle<motor_msgs::srv::ProbeBoard_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "motor_msgs/srv/detail/probe_board__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ProbeBoard_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ProbeBoard_type_support_ids_t;

static const _ProbeBoard_type_support_ids_t _ProbeBoard_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ProbeBoard_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ProbeBoard_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ProbeBoard_type_support_symbol_names_t _ProbeBoard_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_msgs, srv, ProbeBoard)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_msgs, srv, ProbeBoard)),
  }
};

typedef struct _ProbeBoard_type_support_data_t
{
  void * data[2];
} _ProbeBoard_type_support_data_t;

static _ProbeBoard_type_support_data_t _ProbeBoard_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ProbeBoard_service_typesupport_map = {
  2,
  "motor_msgs",
  &_ProbeBoard_service_typesupport_ids.typesupport_identifier[0],
  &_ProbeBoard_service_typesupport_symbol_names.symbol_name[0],
  &_ProbeBoard_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ProbeBoard_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ProbeBoard_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<motor_msgs::srv::ProbeBoard_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<motor_msgs::srv::ProbeBoard_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<motor_msgs::srv::ProbeBoard_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<motor_msgs::srv::ProbeBoard>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<motor_msgs::srv::ProbeBoard>,
  &motor_msgs__srv__ProbeBoard__get_type_hash,
  &motor_msgs__srv__ProbeBoard__get_type_description,
  &motor_msgs__srv__ProbeBoard__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace motor_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<motor_msgs::srv::ProbeBoard>()
{
  return &::motor_msgs::srv::rosidl_typesupport_cpp::ProbeBoard_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_msgs, srv, ProbeBoard)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<motor_msgs::srv::ProbeBoard>();
}

#ifdef __cplusplus
}
#endif
