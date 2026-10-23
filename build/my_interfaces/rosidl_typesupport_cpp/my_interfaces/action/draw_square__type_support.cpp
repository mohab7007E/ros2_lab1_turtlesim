// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from my_interfaces:action/DrawSquare.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "my_interfaces/action/detail/draw_square__functions.h"
#include "my_interfaces/action/detail/draw_square__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace my_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DrawSquare_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DrawSquare_Goal_type_support_ids_t;

static const _DrawSquare_Goal_type_support_ids_t _DrawSquare_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DrawSquare_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DrawSquare_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DrawSquare_Goal_type_support_symbol_names_t _DrawSquare_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces, action, DrawSquare_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_interfaces, action, DrawSquare_Goal)),
  }
};

typedef struct _DrawSquare_Goal_type_support_data_t
{
  void * data[2];
} _DrawSquare_Goal_type_support_data_t;

static _DrawSquare_Goal_type_support_data_t _DrawSquare_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DrawSquare_Goal_message_typesupport_map = {
  2,
  "my_interfaces",
  &_DrawSquare_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_DrawSquare_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_DrawSquare_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DrawSquare_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DrawSquare_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_interfaces__action__DrawSquare_Goal__get_type_hash,
  &my_interfaces__action__DrawSquare_Goal__get_type_description,
  &my_interfaces__action__DrawSquare_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_interfaces::action::DrawSquare_Goal>()
{
  return &::my_interfaces::action::rosidl_typesupport_cpp::DrawSquare_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_interfaces, action, DrawSquare_Goal)() {
  return get_message_type_support_handle<my_interfaces::action::DrawSquare_Goal>();
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
// #include "my_interfaces/action/detail/draw_square__functions.h"
// already included above
// #include "my_interfaces/action/detail/draw_square__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DrawSquare_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DrawSquare_Result_type_support_ids_t;

static const _DrawSquare_Result_type_support_ids_t _DrawSquare_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DrawSquare_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DrawSquare_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DrawSquare_Result_type_support_symbol_names_t _DrawSquare_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces, action, DrawSquare_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_interfaces, action, DrawSquare_Result)),
  }
};

typedef struct _DrawSquare_Result_type_support_data_t
{
  void * data[2];
} _DrawSquare_Result_type_support_data_t;

static _DrawSquare_Result_type_support_data_t _DrawSquare_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DrawSquare_Result_message_typesupport_map = {
  2,
  "my_interfaces",
  &_DrawSquare_Result_message_typesupport_ids.typesupport_identifier[0],
  &_DrawSquare_Result_message_typesupport_symbol_names.symbol_name[0],
  &_DrawSquare_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DrawSquare_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DrawSquare_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_interfaces__action__DrawSquare_Result__get_type_hash,
  &my_interfaces__action__DrawSquare_Result__get_type_description,
  &my_interfaces__action__DrawSquare_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_interfaces::action::DrawSquare_Result>()
{
  return &::my_interfaces::action::rosidl_typesupport_cpp::DrawSquare_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_interfaces, action, DrawSquare_Result)() {
  return get_message_type_support_handle<my_interfaces::action::DrawSquare_Result>();
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
// #include "my_interfaces/action/detail/draw_square__functions.h"
// already included above
// #include "my_interfaces/action/detail/draw_square__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DrawSquare_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DrawSquare_Feedback_type_support_ids_t;

static const _DrawSquare_Feedback_type_support_ids_t _DrawSquare_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DrawSquare_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DrawSquare_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DrawSquare_Feedback_type_support_symbol_names_t _DrawSquare_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces, action, DrawSquare_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_interfaces, action, DrawSquare_Feedback)),
  }
};

typedef struct _DrawSquare_Feedback_type_support_data_t
{
  void * data[2];
} _DrawSquare_Feedback_type_support_data_t;

static _DrawSquare_Feedback_type_support_data_t _DrawSquare_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DrawSquare_Feedback_message_typesupport_map = {
  2,
  "my_interfaces",
  &_DrawSquare_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_DrawSquare_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_DrawSquare_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DrawSquare_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DrawSquare_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_interfaces__action__DrawSquare_Feedback__get_type_hash,
  &my_interfaces__action__DrawSquare_Feedback__get_type_description,
  &my_interfaces__action__DrawSquare_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_interfaces::action::DrawSquare_Feedback>()
{
  return &::my_interfaces::action::rosidl_typesupport_cpp::DrawSquare_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_interfaces, action, DrawSquare_Feedback)() {
  return get_message_type_support_handle<my_interfaces::action::DrawSquare_Feedback>();
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
// #include "my_interfaces/action/detail/draw_square__functions.h"
// already included above
// #include "my_interfaces/action/detail/draw_square__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DrawSquare_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DrawSquare_SendGoal_Request_type_support_ids_t;

static const _DrawSquare_SendGoal_Request_type_support_ids_t _DrawSquare_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DrawSquare_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DrawSquare_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DrawSquare_SendGoal_Request_type_support_symbol_names_t _DrawSquare_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces, action, DrawSquare_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_interfaces, action, DrawSquare_SendGoal_Request)),
  }
};

typedef struct _DrawSquare_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _DrawSquare_SendGoal_Request_type_support_data_t;

static _DrawSquare_SendGoal_Request_type_support_data_t _DrawSquare_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DrawSquare_SendGoal_Request_message_typesupport_map = {
  2,
  "my_interfaces",
  &_DrawSquare_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DrawSquare_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DrawSquare_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DrawSquare_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DrawSquare_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_interfaces__action__DrawSquare_SendGoal_Request__get_type_hash,
  &my_interfaces__action__DrawSquare_SendGoal_Request__get_type_description,
  &my_interfaces__action__DrawSquare_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_interfaces::action::DrawSquare_SendGoal_Request>()
{
  return &::my_interfaces::action::rosidl_typesupport_cpp::DrawSquare_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_interfaces, action, DrawSquare_SendGoal_Request)() {
  return get_message_type_support_handle<my_interfaces::action::DrawSquare_SendGoal_Request>();
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
// #include "my_interfaces/action/detail/draw_square__functions.h"
// already included above
// #include "my_interfaces/action/detail/draw_square__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DrawSquare_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DrawSquare_SendGoal_Response_type_support_ids_t;

static const _DrawSquare_SendGoal_Response_type_support_ids_t _DrawSquare_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DrawSquare_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DrawSquare_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DrawSquare_SendGoal_Response_type_support_symbol_names_t _DrawSquare_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces, action, DrawSquare_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_interfaces, action, DrawSquare_SendGoal_Response)),
  }
};

typedef struct _DrawSquare_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _DrawSquare_SendGoal_Response_type_support_data_t;

static _DrawSquare_SendGoal_Response_type_support_data_t _DrawSquare_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DrawSquare_SendGoal_Response_message_typesupport_map = {
  2,
  "my_interfaces",
  &_DrawSquare_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DrawSquare_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DrawSquare_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DrawSquare_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DrawSquare_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_interfaces__action__DrawSquare_SendGoal_Response__get_type_hash,
  &my_interfaces__action__DrawSquare_SendGoal_Response__get_type_description,
  &my_interfaces__action__DrawSquare_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_interfaces::action::DrawSquare_SendGoal_Response>()
{
  return &::my_interfaces::action::rosidl_typesupport_cpp::DrawSquare_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_interfaces, action, DrawSquare_SendGoal_Response)() {
  return get_message_type_support_handle<my_interfaces::action::DrawSquare_SendGoal_Response>();
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
// #include "my_interfaces/action/detail/draw_square__functions.h"
// already included above
// #include "my_interfaces/action/detail/draw_square__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DrawSquare_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DrawSquare_SendGoal_Event_type_support_ids_t;

static const _DrawSquare_SendGoal_Event_type_support_ids_t _DrawSquare_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DrawSquare_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DrawSquare_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DrawSquare_SendGoal_Event_type_support_symbol_names_t _DrawSquare_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces, action, DrawSquare_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_interfaces, action, DrawSquare_SendGoal_Event)),
  }
};

typedef struct _DrawSquare_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _DrawSquare_SendGoal_Event_type_support_data_t;

static _DrawSquare_SendGoal_Event_type_support_data_t _DrawSquare_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DrawSquare_SendGoal_Event_message_typesupport_map = {
  2,
  "my_interfaces",
  &_DrawSquare_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DrawSquare_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DrawSquare_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DrawSquare_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DrawSquare_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_interfaces__action__DrawSquare_SendGoal_Event__get_type_hash,
  &my_interfaces__action__DrawSquare_SendGoal_Event__get_type_description,
  &my_interfaces__action__DrawSquare_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_interfaces::action::DrawSquare_SendGoal_Event>()
{
  return &::my_interfaces::action::rosidl_typesupport_cpp::DrawSquare_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_interfaces, action, DrawSquare_SendGoal_Event)() {
  return get_message_type_support_handle<my_interfaces::action::DrawSquare_SendGoal_Event>();
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
// #include "my_interfaces/action/detail/draw_square__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DrawSquare_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DrawSquare_SendGoal_type_support_ids_t;

static const _DrawSquare_SendGoal_type_support_ids_t _DrawSquare_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DrawSquare_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DrawSquare_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DrawSquare_SendGoal_type_support_symbol_names_t _DrawSquare_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces, action, DrawSquare_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_interfaces, action, DrawSquare_SendGoal)),
  }
};

typedef struct _DrawSquare_SendGoal_type_support_data_t
{
  void * data[2];
} _DrawSquare_SendGoal_type_support_data_t;

static _DrawSquare_SendGoal_type_support_data_t _DrawSquare_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DrawSquare_SendGoal_service_typesupport_map = {
  2,
  "my_interfaces",
  &_DrawSquare_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_DrawSquare_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_DrawSquare_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DrawSquare_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DrawSquare_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_interfaces::action::DrawSquare_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_interfaces::action::DrawSquare_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_interfaces::action::DrawSquare_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<my_interfaces::action::DrawSquare_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<my_interfaces::action::DrawSquare_SendGoal>,
  &my_interfaces__action__DrawSquare_SendGoal__get_type_hash,
  &my_interfaces__action__DrawSquare_SendGoal__get_type_description,
  &my_interfaces__action__DrawSquare_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<my_interfaces::action::DrawSquare_SendGoal>()
{
  return &::my_interfaces::action::rosidl_typesupport_cpp::DrawSquare_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, my_interfaces, action, DrawSquare_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<my_interfaces::action::DrawSquare_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_interfaces/action/detail/draw_square__functions.h"
// already included above
// #include "my_interfaces/action/detail/draw_square__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DrawSquare_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DrawSquare_GetResult_Request_type_support_ids_t;

static const _DrawSquare_GetResult_Request_type_support_ids_t _DrawSquare_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DrawSquare_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DrawSquare_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DrawSquare_GetResult_Request_type_support_symbol_names_t _DrawSquare_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces, action, DrawSquare_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_interfaces, action, DrawSquare_GetResult_Request)),
  }
};

typedef struct _DrawSquare_GetResult_Request_type_support_data_t
{
  void * data[2];
} _DrawSquare_GetResult_Request_type_support_data_t;

static _DrawSquare_GetResult_Request_type_support_data_t _DrawSquare_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DrawSquare_GetResult_Request_message_typesupport_map = {
  2,
  "my_interfaces",
  &_DrawSquare_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DrawSquare_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DrawSquare_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DrawSquare_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DrawSquare_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_interfaces__action__DrawSquare_GetResult_Request__get_type_hash,
  &my_interfaces__action__DrawSquare_GetResult_Request__get_type_description,
  &my_interfaces__action__DrawSquare_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_interfaces::action::DrawSquare_GetResult_Request>()
{
  return &::my_interfaces::action::rosidl_typesupport_cpp::DrawSquare_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_interfaces, action, DrawSquare_GetResult_Request)() {
  return get_message_type_support_handle<my_interfaces::action::DrawSquare_GetResult_Request>();
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
// #include "my_interfaces/action/detail/draw_square__functions.h"
// already included above
// #include "my_interfaces/action/detail/draw_square__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DrawSquare_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DrawSquare_GetResult_Response_type_support_ids_t;

static const _DrawSquare_GetResult_Response_type_support_ids_t _DrawSquare_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DrawSquare_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DrawSquare_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DrawSquare_GetResult_Response_type_support_symbol_names_t _DrawSquare_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces, action, DrawSquare_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_interfaces, action, DrawSquare_GetResult_Response)),
  }
};

typedef struct _DrawSquare_GetResult_Response_type_support_data_t
{
  void * data[2];
} _DrawSquare_GetResult_Response_type_support_data_t;

static _DrawSquare_GetResult_Response_type_support_data_t _DrawSquare_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DrawSquare_GetResult_Response_message_typesupport_map = {
  2,
  "my_interfaces",
  &_DrawSquare_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DrawSquare_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DrawSquare_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DrawSquare_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DrawSquare_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_interfaces__action__DrawSquare_GetResult_Response__get_type_hash,
  &my_interfaces__action__DrawSquare_GetResult_Response__get_type_description,
  &my_interfaces__action__DrawSquare_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_interfaces::action::DrawSquare_GetResult_Response>()
{
  return &::my_interfaces::action::rosidl_typesupport_cpp::DrawSquare_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_interfaces, action, DrawSquare_GetResult_Response)() {
  return get_message_type_support_handle<my_interfaces::action::DrawSquare_GetResult_Response>();
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
// #include "my_interfaces/action/detail/draw_square__functions.h"
// already included above
// #include "my_interfaces/action/detail/draw_square__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DrawSquare_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DrawSquare_GetResult_Event_type_support_ids_t;

static const _DrawSquare_GetResult_Event_type_support_ids_t _DrawSquare_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DrawSquare_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DrawSquare_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DrawSquare_GetResult_Event_type_support_symbol_names_t _DrawSquare_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces, action, DrawSquare_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_interfaces, action, DrawSquare_GetResult_Event)),
  }
};

typedef struct _DrawSquare_GetResult_Event_type_support_data_t
{
  void * data[2];
} _DrawSquare_GetResult_Event_type_support_data_t;

static _DrawSquare_GetResult_Event_type_support_data_t _DrawSquare_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DrawSquare_GetResult_Event_message_typesupport_map = {
  2,
  "my_interfaces",
  &_DrawSquare_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DrawSquare_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DrawSquare_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DrawSquare_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DrawSquare_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_interfaces__action__DrawSquare_GetResult_Event__get_type_hash,
  &my_interfaces__action__DrawSquare_GetResult_Event__get_type_description,
  &my_interfaces__action__DrawSquare_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_interfaces::action::DrawSquare_GetResult_Event>()
{
  return &::my_interfaces::action::rosidl_typesupport_cpp::DrawSquare_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_interfaces, action, DrawSquare_GetResult_Event)() {
  return get_message_type_support_handle<my_interfaces::action::DrawSquare_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "my_interfaces/action/detail/draw_square__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DrawSquare_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DrawSquare_GetResult_type_support_ids_t;

static const _DrawSquare_GetResult_type_support_ids_t _DrawSquare_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DrawSquare_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DrawSquare_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DrawSquare_GetResult_type_support_symbol_names_t _DrawSquare_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces, action, DrawSquare_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_interfaces, action, DrawSquare_GetResult)),
  }
};

typedef struct _DrawSquare_GetResult_type_support_data_t
{
  void * data[2];
} _DrawSquare_GetResult_type_support_data_t;

static _DrawSquare_GetResult_type_support_data_t _DrawSquare_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DrawSquare_GetResult_service_typesupport_map = {
  2,
  "my_interfaces",
  &_DrawSquare_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_DrawSquare_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_DrawSquare_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DrawSquare_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DrawSquare_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_interfaces::action::DrawSquare_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_interfaces::action::DrawSquare_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_interfaces::action::DrawSquare_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<my_interfaces::action::DrawSquare_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<my_interfaces::action::DrawSquare_GetResult>,
  &my_interfaces__action__DrawSquare_GetResult__get_type_hash,
  &my_interfaces__action__DrawSquare_GetResult__get_type_description,
  &my_interfaces__action__DrawSquare_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<my_interfaces::action::DrawSquare_GetResult>()
{
  return &::my_interfaces::action::rosidl_typesupport_cpp::DrawSquare_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, my_interfaces, action, DrawSquare_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<my_interfaces::action::DrawSquare_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_interfaces/action/detail/draw_square__functions.h"
// already included above
// #include "my_interfaces/action/detail/draw_square__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DrawSquare_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DrawSquare_FeedbackMessage_type_support_ids_t;

static const _DrawSquare_FeedbackMessage_type_support_ids_t _DrawSquare_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DrawSquare_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DrawSquare_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DrawSquare_FeedbackMessage_type_support_symbol_names_t _DrawSquare_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces, action, DrawSquare_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_interfaces, action, DrawSquare_FeedbackMessage)),
  }
};

typedef struct _DrawSquare_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _DrawSquare_FeedbackMessage_type_support_data_t;

static _DrawSquare_FeedbackMessage_type_support_data_t _DrawSquare_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DrawSquare_FeedbackMessage_message_typesupport_map = {
  2,
  "my_interfaces",
  &_DrawSquare_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_DrawSquare_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_DrawSquare_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DrawSquare_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DrawSquare_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_interfaces__action__DrawSquare_FeedbackMessage__get_type_hash,
  &my_interfaces__action__DrawSquare_FeedbackMessage__get_type_description,
  &my_interfaces__action__DrawSquare_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_interfaces::action::DrawSquare_FeedbackMessage>()
{
  return &::my_interfaces::action::rosidl_typesupport_cpp::DrawSquare_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_interfaces, action, DrawSquare_FeedbackMessage)() {
  return get_message_type_support_handle<my_interfaces::action::DrawSquare_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "my_interfaces/action/detail/draw_square__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace my_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t DrawSquare_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &my_interfaces__action__DrawSquare__get_type_hash,
  &my_interfaces__action__DrawSquare__get_type_description,
  &my_interfaces__action__DrawSquare__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<my_interfaces::action::DrawSquare>()
{
  using ::my_interfaces::action::rosidl_typesupport_cpp::DrawSquare_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  DrawSquare_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::my_interfaces::action::DrawSquare::Impl::SendGoalService>();
  DrawSquare_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::my_interfaces::action::DrawSquare::Impl::GetResultService>();
  DrawSquare_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::my_interfaces::action::DrawSquare::Impl::CancelGoalService>();
  DrawSquare_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::my_interfaces::action::DrawSquare::Impl::FeedbackMessage>();
  DrawSquare_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::my_interfaces::action::DrawSquare::Impl::GoalStatusMessage>();
  return &DrawSquare_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, my_interfaces, action, DrawSquare)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<my_interfaces::action::DrawSquare>();
}

#ifdef __cplusplus
}
#endif
