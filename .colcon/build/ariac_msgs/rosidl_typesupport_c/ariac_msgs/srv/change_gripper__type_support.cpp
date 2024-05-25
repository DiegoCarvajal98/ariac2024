// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ariac_msgs:srv/ChangeGripper.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ariac_msgs/srv/detail/change_gripper__struct.h"
#include "ariac_msgs/srv/detail/change_gripper__type_support.h"
#include "ariac_msgs/srv/detail/change_gripper__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ariac_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ChangeGripper_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChangeGripper_Request_type_support_ids_t;

static const _ChangeGripper_Request_type_support_ids_t _ChangeGripper_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ChangeGripper_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChangeGripper_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChangeGripper_Request_type_support_symbol_names_t _ChangeGripper_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, srv, ChangeGripper_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, ChangeGripper_Request)),
  }
};

typedef struct _ChangeGripper_Request_type_support_data_t
{
  void * data[2];
} _ChangeGripper_Request_type_support_data_t;

static _ChangeGripper_Request_type_support_data_t _ChangeGripper_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChangeGripper_Request_message_typesupport_map = {
  2,
  "ariac_msgs",
  &_ChangeGripper_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ChangeGripper_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ChangeGripper_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ChangeGripper_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChangeGripper_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ariac_msgs__srv__ChangeGripper_Request__get_type_hash,
  &ariac_msgs__srv__ChangeGripper_Request__get_type_description,
  &ariac_msgs__srv__ChangeGripper_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ariac_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ariac_msgs, srv, ChangeGripper_Request)() {
  return &::ariac_msgs::srv::rosidl_typesupport_c::ChangeGripper_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ariac_msgs/srv/detail/change_gripper__struct.h"
// already included above
// #include "ariac_msgs/srv/detail/change_gripper__type_support.h"
// already included above
// #include "ariac_msgs/srv/detail/change_gripper__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ariac_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ChangeGripper_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChangeGripper_Response_type_support_ids_t;

static const _ChangeGripper_Response_type_support_ids_t _ChangeGripper_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ChangeGripper_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChangeGripper_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChangeGripper_Response_type_support_symbol_names_t _ChangeGripper_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, srv, ChangeGripper_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, ChangeGripper_Response)),
  }
};

typedef struct _ChangeGripper_Response_type_support_data_t
{
  void * data[2];
} _ChangeGripper_Response_type_support_data_t;

static _ChangeGripper_Response_type_support_data_t _ChangeGripper_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChangeGripper_Response_message_typesupport_map = {
  2,
  "ariac_msgs",
  &_ChangeGripper_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ChangeGripper_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ChangeGripper_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ChangeGripper_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChangeGripper_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ariac_msgs__srv__ChangeGripper_Response__get_type_hash,
  &ariac_msgs__srv__ChangeGripper_Response__get_type_description,
  &ariac_msgs__srv__ChangeGripper_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ariac_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ariac_msgs, srv, ChangeGripper_Response)() {
  return &::ariac_msgs::srv::rosidl_typesupport_c::ChangeGripper_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ariac_msgs/srv/detail/change_gripper__struct.h"
// already included above
// #include "ariac_msgs/srv/detail/change_gripper__type_support.h"
// already included above
// #include "ariac_msgs/srv/detail/change_gripper__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ariac_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ChangeGripper_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChangeGripper_Event_type_support_ids_t;

static const _ChangeGripper_Event_type_support_ids_t _ChangeGripper_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ChangeGripper_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChangeGripper_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChangeGripper_Event_type_support_symbol_names_t _ChangeGripper_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, srv, ChangeGripper_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, ChangeGripper_Event)),
  }
};

typedef struct _ChangeGripper_Event_type_support_data_t
{
  void * data[2];
} _ChangeGripper_Event_type_support_data_t;

static _ChangeGripper_Event_type_support_data_t _ChangeGripper_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChangeGripper_Event_message_typesupport_map = {
  2,
  "ariac_msgs",
  &_ChangeGripper_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ChangeGripper_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ChangeGripper_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ChangeGripper_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChangeGripper_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ariac_msgs__srv__ChangeGripper_Event__get_type_hash,
  &ariac_msgs__srv__ChangeGripper_Event__get_type_description,
  &ariac_msgs__srv__ChangeGripper_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ariac_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ariac_msgs, srv, ChangeGripper_Event)() {
  return &::ariac_msgs::srv::rosidl_typesupport_c::ChangeGripper_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ariac_msgs/srv/detail/change_gripper__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace ariac_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _ChangeGripper_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChangeGripper_type_support_ids_t;

static const _ChangeGripper_type_support_ids_t _ChangeGripper_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ChangeGripper_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChangeGripper_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChangeGripper_type_support_symbol_names_t _ChangeGripper_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, srv, ChangeGripper)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, ChangeGripper)),
  }
};

typedef struct _ChangeGripper_type_support_data_t
{
  void * data[2];
} _ChangeGripper_type_support_data_t;

static _ChangeGripper_type_support_data_t _ChangeGripper_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChangeGripper_service_typesupport_map = {
  2,
  "ariac_msgs",
  &_ChangeGripper_service_typesupport_ids.typesupport_identifier[0],
  &_ChangeGripper_service_typesupport_symbol_names.symbol_name[0],
  &_ChangeGripper_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ChangeGripper_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChangeGripper_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ChangeGripper_Request_message_type_support_handle,
  &ChangeGripper_Response_message_type_support_handle,
  &ChangeGripper_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ariac_msgs,
    srv,
    ChangeGripper
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ariac_msgs,
    srv,
    ChangeGripper
  ),
  &ariac_msgs__srv__ChangeGripper__get_type_hash,
  &ariac_msgs__srv__ChangeGripper__get_type_description,
  &ariac_msgs__srv__ChangeGripper__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ariac_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ariac_msgs, srv, ChangeGripper)() {
  return &::ariac_msgs::srv::rosidl_typesupport_c::ChangeGripper_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
