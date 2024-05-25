// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ariac_msgs:srv/MoveAGV.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ariac_msgs/srv/detail/move_agv__functions.h"
#include "ariac_msgs/srv/detail/move_agv__struct.hpp"
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

typedef struct _MoveAGV_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveAGV_Request_type_support_ids_t;

static const _MoveAGV_Request_type_support_ids_t _MoveAGV_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveAGV_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveAGV_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveAGV_Request_type_support_symbol_names_t _MoveAGV_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ariac_msgs, srv, MoveAGV_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ariac_msgs, srv, MoveAGV_Request)),
  }
};

typedef struct _MoveAGV_Request_type_support_data_t
{
  void * data[2];
} _MoveAGV_Request_type_support_data_t;

static _MoveAGV_Request_type_support_data_t _MoveAGV_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveAGV_Request_message_typesupport_map = {
  2,
  "ariac_msgs",
  &_MoveAGV_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveAGV_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveAGV_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveAGV_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveAGV_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ariac_msgs__srv__MoveAGV_Request__get_type_hash,
  &ariac_msgs__srv__MoveAGV_Request__get_type_description,
  &ariac_msgs__srv__MoveAGV_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ariac_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ariac_msgs::srv::MoveAGV_Request>()
{
  return &::ariac_msgs::srv::rosidl_typesupport_cpp::MoveAGV_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ariac_msgs, srv, MoveAGV_Request)() {
  return get_message_type_support_handle<ariac_msgs::srv::MoveAGV_Request>();
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
// #include "ariac_msgs/srv/detail/move_agv__functions.h"
// already included above
// #include "ariac_msgs/srv/detail/move_agv__struct.hpp"
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

typedef struct _MoveAGV_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveAGV_Response_type_support_ids_t;

static const _MoveAGV_Response_type_support_ids_t _MoveAGV_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveAGV_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveAGV_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveAGV_Response_type_support_symbol_names_t _MoveAGV_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ariac_msgs, srv, MoveAGV_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ariac_msgs, srv, MoveAGV_Response)),
  }
};

typedef struct _MoveAGV_Response_type_support_data_t
{
  void * data[2];
} _MoveAGV_Response_type_support_data_t;

static _MoveAGV_Response_type_support_data_t _MoveAGV_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveAGV_Response_message_typesupport_map = {
  2,
  "ariac_msgs",
  &_MoveAGV_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveAGV_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveAGV_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveAGV_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveAGV_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ariac_msgs__srv__MoveAGV_Response__get_type_hash,
  &ariac_msgs__srv__MoveAGV_Response__get_type_description,
  &ariac_msgs__srv__MoveAGV_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ariac_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ariac_msgs::srv::MoveAGV_Response>()
{
  return &::ariac_msgs::srv::rosidl_typesupport_cpp::MoveAGV_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ariac_msgs, srv, MoveAGV_Response)() {
  return get_message_type_support_handle<ariac_msgs::srv::MoveAGV_Response>();
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
// #include "ariac_msgs/srv/detail/move_agv__functions.h"
// already included above
// #include "ariac_msgs/srv/detail/move_agv__struct.hpp"
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

typedef struct _MoveAGV_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveAGV_Event_type_support_ids_t;

static const _MoveAGV_Event_type_support_ids_t _MoveAGV_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveAGV_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveAGV_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveAGV_Event_type_support_symbol_names_t _MoveAGV_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ariac_msgs, srv, MoveAGV_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ariac_msgs, srv, MoveAGV_Event)),
  }
};

typedef struct _MoveAGV_Event_type_support_data_t
{
  void * data[2];
} _MoveAGV_Event_type_support_data_t;

static _MoveAGV_Event_type_support_data_t _MoveAGV_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveAGV_Event_message_typesupport_map = {
  2,
  "ariac_msgs",
  &_MoveAGV_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MoveAGV_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MoveAGV_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveAGV_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveAGV_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ariac_msgs__srv__MoveAGV_Event__get_type_hash,
  &ariac_msgs__srv__MoveAGV_Event__get_type_description,
  &ariac_msgs__srv__MoveAGV_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ariac_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ariac_msgs::srv::MoveAGV_Event>()
{
  return &::ariac_msgs::srv::rosidl_typesupport_cpp::MoveAGV_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ariac_msgs, srv, MoveAGV_Event)() {
  return get_message_type_support_handle<ariac_msgs::srv::MoveAGV_Event>();
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
// #include "ariac_msgs/srv/detail/move_agv__struct.hpp"
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

typedef struct _MoveAGV_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveAGV_type_support_ids_t;

static const _MoveAGV_type_support_ids_t _MoveAGV_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveAGV_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveAGV_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveAGV_type_support_symbol_names_t _MoveAGV_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ariac_msgs, srv, MoveAGV)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ariac_msgs, srv, MoveAGV)),
  }
};

typedef struct _MoveAGV_type_support_data_t
{
  void * data[2];
} _MoveAGV_type_support_data_t;

static _MoveAGV_type_support_data_t _MoveAGV_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveAGV_service_typesupport_map = {
  2,
  "ariac_msgs",
  &_MoveAGV_service_typesupport_ids.typesupport_identifier[0],
  &_MoveAGV_service_typesupport_symbol_names.symbol_name[0],
  &_MoveAGV_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveAGV_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveAGV_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ariac_msgs::srv::MoveAGV_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ariac_msgs::srv::MoveAGV_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ariac_msgs::srv::MoveAGV_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ariac_msgs::srv::MoveAGV>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ariac_msgs::srv::MoveAGV>,
  &ariac_msgs__srv__MoveAGV__get_type_hash,
  &ariac_msgs__srv__MoveAGV__get_type_description,
  &ariac_msgs__srv__MoveAGV__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ariac_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ariac_msgs::srv::MoveAGV>()
{
  return &::ariac_msgs::srv::rosidl_typesupport_cpp::MoveAGV_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
