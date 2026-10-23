// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from my_interfaces:srv/SetSpeeds.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "my_interfaces/srv/detail/set_speeds__functions.h"
#include "my_interfaces/srv/detail/set_speeds__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace my_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetSpeeds_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetSpeeds_Request_type_support_ids_t;

static const _SetSpeeds_Request_type_support_ids_t _SetSpeeds_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetSpeeds_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetSpeeds_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetSpeeds_Request_type_support_symbol_names_t _SetSpeeds_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces, srv, SetSpeeds_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_interfaces, srv, SetSpeeds_Request)),
  }
};

typedef struct _SetSpeeds_Request_type_support_data_t
{
  void * data[2];
} _SetSpeeds_Request_type_support_data_t;

static _SetSpeeds_Request_type_support_data_t _SetSpeeds_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetSpeeds_Request_message_typesupport_map = {
  2,
  "my_interfaces",
  &_SetSpeeds_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetSpeeds_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetSpeeds_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetSpeeds_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetSpeeds_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_interfaces__srv__SetSpeeds_Request__get_type_hash,
  &my_interfaces__srv__SetSpeeds_Request__get_type_description,
  &my_interfaces__srv__SetSpeeds_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace my_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_interfaces::srv::SetSpeeds_Request>()
{
  return &::my_interfaces::srv::rosidl_typesupport_cpp::SetSpeeds_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_interfaces, srv, SetSpeeds_Request)() {
  return get_message_type_support_handle<my_interfaces::srv::SetSpeeds_Request>();
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
// #include "my_interfaces/srv/detail/set_speeds__functions.h"
// already included above
// #include "my_interfaces/srv/detail/set_speeds__struct.hpp"
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

namespace my_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetSpeeds_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetSpeeds_Response_type_support_ids_t;

static const _SetSpeeds_Response_type_support_ids_t _SetSpeeds_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetSpeeds_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetSpeeds_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetSpeeds_Response_type_support_symbol_names_t _SetSpeeds_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces, srv, SetSpeeds_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_interfaces, srv, SetSpeeds_Response)),
  }
};

typedef struct _SetSpeeds_Response_type_support_data_t
{
  void * data[2];
} _SetSpeeds_Response_type_support_data_t;

static _SetSpeeds_Response_type_support_data_t _SetSpeeds_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetSpeeds_Response_message_typesupport_map = {
  2,
  "my_interfaces",
  &_SetSpeeds_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetSpeeds_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetSpeeds_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetSpeeds_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetSpeeds_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_interfaces__srv__SetSpeeds_Response__get_type_hash,
  &my_interfaces__srv__SetSpeeds_Response__get_type_description,
  &my_interfaces__srv__SetSpeeds_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace my_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_interfaces::srv::SetSpeeds_Response>()
{
  return &::my_interfaces::srv::rosidl_typesupport_cpp::SetSpeeds_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_interfaces, srv, SetSpeeds_Response)() {
  return get_message_type_support_handle<my_interfaces::srv::SetSpeeds_Response>();
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
// #include "my_interfaces/srv/detail/set_speeds__functions.h"
// already included above
// #include "my_interfaces/srv/detail/set_speeds__struct.hpp"
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

namespace my_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetSpeeds_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetSpeeds_Event_type_support_ids_t;

static const _SetSpeeds_Event_type_support_ids_t _SetSpeeds_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetSpeeds_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetSpeeds_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetSpeeds_Event_type_support_symbol_names_t _SetSpeeds_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces, srv, SetSpeeds_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_interfaces, srv, SetSpeeds_Event)),
  }
};

typedef struct _SetSpeeds_Event_type_support_data_t
{
  void * data[2];
} _SetSpeeds_Event_type_support_data_t;

static _SetSpeeds_Event_type_support_data_t _SetSpeeds_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetSpeeds_Event_message_typesupport_map = {
  2,
  "my_interfaces",
  &_SetSpeeds_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetSpeeds_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetSpeeds_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetSpeeds_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetSpeeds_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_interfaces__srv__SetSpeeds_Event__get_type_hash,
  &my_interfaces__srv__SetSpeeds_Event__get_type_description,
  &my_interfaces__srv__SetSpeeds_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace my_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_interfaces::srv::SetSpeeds_Event>()
{
  return &::my_interfaces::srv::rosidl_typesupport_cpp::SetSpeeds_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_interfaces, srv, SetSpeeds_Event)() {
  return get_message_type_support_handle<my_interfaces::srv::SetSpeeds_Event>();
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
// #include "my_interfaces/srv/detail/set_speeds__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetSpeeds_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetSpeeds_type_support_ids_t;

static const _SetSpeeds_type_support_ids_t _SetSpeeds_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetSpeeds_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetSpeeds_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetSpeeds_type_support_symbol_names_t _SetSpeeds_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces, srv, SetSpeeds)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_interfaces, srv, SetSpeeds)),
  }
};

typedef struct _SetSpeeds_type_support_data_t
{
  void * data[2];
} _SetSpeeds_type_support_data_t;

static _SetSpeeds_type_support_data_t _SetSpeeds_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetSpeeds_service_typesupport_map = {
  2,
  "my_interfaces",
  &_SetSpeeds_service_typesupport_ids.typesupport_identifier[0],
  &_SetSpeeds_service_typesupport_symbol_names.symbol_name[0],
  &_SetSpeeds_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetSpeeds_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetSpeeds_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_interfaces::srv::SetSpeeds_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_interfaces::srv::SetSpeeds_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_interfaces::srv::SetSpeeds_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<my_interfaces::srv::SetSpeeds>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<my_interfaces::srv::SetSpeeds>,
  &my_interfaces__srv__SetSpeeds__get_type_hash,
  &my_interfaces__srv__SetSpeeds__get_type_description,
  &my_interfaces__srv__SetSpeeds__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace my_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<my_interfaces::srv::SetSpeeds>()
{
  return &::my_interfaces::srv::rosidl_typesupport_cpp::SetSpeeds_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, my_interfaces, srv, SetSpeeds)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<my_interfaces::srv::SetSpeeds>();
}

#ifdef __cplusplus
}
#endif
