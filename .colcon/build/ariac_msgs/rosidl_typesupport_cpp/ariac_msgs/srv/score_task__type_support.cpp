// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ariac_msgs:srv/ScoreTask.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ariac_msgs/srv/detail/score_task__functions.h"
#include "ariac_msgs/srv/detail/score_task__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ariac_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ScoreTask_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ScoreTask_Request_type_support_ids_t;

static const _ScoreTask_Request_type_support_ids_t _ScoreTask_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ScoreTask_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ScoreTask_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ScoreTask_Request_type_support_symbol_names_t _ScoreTask_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ariac_msgs, srv, ScoreTask_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ariac_msgs, srv, ScoreTask_Request)),
  }
};

typedef struct _ScoreTask_Request_type_support_data_t
{
  void * data[2];
} _ScoreTask_Request_type_support_data_t;

static _ScoreTask_Request_type_support_data_t _ScoreTask_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ScoreTask_Request_message_typesupport_map = {
  2,
  "ariac_msgs",
  &_ScoreTask_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ScoreTask_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ScoreTask_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ScoreTask_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ScoreTask_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ariac_msgs__srv__ScoreTask_Request__get_type_hash,
  &ariac_msgs__srv__ScoreTask_Request__get_type_description,
  &ariac_msgs__srv__ScoreTask_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ariac_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ariac_msgs::srv::ScoreTask_Request>()
{
  return &::ariac_msgs::srv::rosidl_typesupport_cpp::ScoreTask_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ariac_msgs, srv, ScoreTask_Request)() {
  return get_message_type_support_handle<ariac_msgs::srv::ScoreTask_Request>();
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
// #include "ariac_msgs/srv/detail/score_task__functions.h"
// already included above
// #include "ariac_msgs/srv/detail/score_task__struct.hpp"
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

namespace ariac_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ScoreTask_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ScoreTask_Response_type_support_ids_t;

static const _ScoreTask_Response_type_support_ids_t _ScoreTask_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ScoreTask_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ScoreTask_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ScoreTask_Response_type_support_symbol_names_t _ScoreTask_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ariac_msgs, srv, ScoreTask_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ariac_msgs, srv, ScoreTask_Response)),
  }
};

typedef struct _ScoreTask_Response_type_support_data_t
{
  void * data[2];
} _ScoreTask_Response_type_support_data_t;

static _ScoreTask_Response_type_support_data_t _ScoreTask_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ScoreTask_Response_message_typesupport_map = {
  2,
  "ariac_msgs",
  &_ScoreTask_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ScoreTask_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ScoreTask_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ScoreTask_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ScoreTask_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ariac_msgs__srv__ScoreTask_Response__get_type_hash,
  &ariac_msgs__srv__ScoreTask_Response__get_type_description,
  &ariac_msgs__srv__ScoreTask_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ariac_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ariac_msgs::srv::ScoreTask_Response>()
{
  return &::ariac_msgs::srv::rosidl_typesupport_cpp::ScoreTask_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ariac_msgs, srv, ScoreTask_Response)() {
  return get_message_type_support_handle<ariac_msgs::srv::ScoreTask_Response>();
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
// #include "ariac_msgs/srv/detail/score_task__functions.h"
// already included above
// #include "ariac_msgs/srv/detail/score_task__struct.hpp"
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

namespace ariac_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ScoreTask_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ScoreTask_Event_type_support_ids_t;

static const _ScoreTask_Event_type_support_ids_t _ScoreTask_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ScoreTask_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ScoreTask_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ScoreTask_Event_type_support_symbol_names_t _ScoreTask_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ariac_msgs, srv, ScoreTask_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ariac_msgs, srv, ScoreTask_Event)),
  }
};

typedef struct _ScoreTask_Event_type_support_data_t
{
  void * data[2];
} _ScoreTask_Event_type_support_data_t;

static _ScoreTask_Event_type_support_data_t _ScoreTask_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ScoreTask_Event_message_typesupport_map = {
  2,
  "ariac_msgs",
  &_ScoreTask_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ScoreTask_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ScoreTask_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ScoreTask_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ScoreTask_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ariac_msgs__srv__ScoreTask_Event__get_type_hash,
  &ariac_msgs__srv__ScoreTask_Event__get_type_description,
  &ariac_msgs__srv__ScoreTask_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ariac_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ariac_msgs::srv::ScoreTask_Event>()
{
  return &::ariac_msgs::srv::rosidl_typesupport_cpp::ScoreTask_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ariac_msgs, srv, ScoreTask_Event)() {
  return get_message_type_support_handle<ariac_msgs::srv::ScoreTask_Event>();
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
// #include "ariac_msgs/srv/detail/score_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ariac_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ScoreTask_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ScoreTask_type_support_ids_t;

static const _ScoreTask_type_support_ids_t _ScoreTask_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ScoreTask_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ScoreTask_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ScoreTask_type_support_symbol_names_t _ScoreTask_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ariac_msgs, srv, ScoreTask)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ariac_msgs, srv, ScoreTask)),
  }
};

typedef struct _ScoreTask_type_support_data_t
{
  void * data[2];
} _ScoreTask_type_support_data_t;

static _ScoreTask_type_support_data_t _ScoreTask_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ScoreTask_service_typesupport_map = {
  2,
  "ariac_msgs",
  &_ScoreTask_service_typesupport_ids.typesupport_identifier[0],
  &_ScoreTask_service_typesupport_symbol_names.symbol_name[0],
  &_ScoreTask_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ScoreTask_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ScoreTask_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ariac_msgs::srv::ScoreTask_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ariac_msgs::srv::ScoreTask_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ariac_msgs::srv::ScoreTask_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ariac_msgs::srv::ScoreTask>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ariac_msgs::srv::ScoreTask>,
  &ariac_msgs__srv__ScoreTask__get_type_hash,
  &ariac_msgs__srv__ScoreTask__get_type_description,
  &ariac_msgs__srv__ScoreTask__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ariac_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ariac_msgs::srv::ScoreTask>()
{
  return &::ariac_msgs::srv::rosidl_typesupport_cpp::ScoreTask_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
