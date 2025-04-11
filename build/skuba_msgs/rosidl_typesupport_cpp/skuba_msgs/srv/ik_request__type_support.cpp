// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from skuba_msgs:srv/IKRequest.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "skuba_msgs/srv/detail/ik_request__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace skuba_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _IKRequest_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _IKRequest_Request_type_support_ids_t;

static const _IKRequest_Request_type_support_ids_t _IKRequest_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _IKRequest_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _IKRequest_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _IKRequest_Request_type_support_symbol_names_t _IKRequest_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, skuba_msgs, srv, IKRequest_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, skuba_msgs, srv, IKRequest_Request)),
  }
};

typedef struct _IKRequest_Request_type_support_data_t
{
  void * data[2];
} _IKRequest_Request_type_support_data_t;

static _IKRequest_Request_type_support_data_t _IKRequest_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _IKRequest_Request_message_typesupport_map = {
  2,
  "skuba_msgs",
  &_IKRequest_Request_message_typesupport_ids.typesupport_identifier[0],
  &_IKRequest_Request_message_typesupport_symbol_names.symbol_name[0],
  &_IKRequest_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t IKRequest_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_IKRequest_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace skuba_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<skuba_msgs::srv::IKRequest_Request>()
{
  return &::skuba_msgs::srv::rosidl_typesupport_cpp::IKRequest_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, skuba_msgs, srv, IKRequest_Request)() {
  return get_message_type_support_handle<skuba_msgs::srv::IKRequest_Request>();
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
// #include "skuba_msgs/srv/detail/ik_request__struct.hpp"
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

namespace skuba_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _IKRequest_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _IKRequest_Response_type_support_ids_t;

static const _IKRequest_Response_type_support_ids_t _IKRequest_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _IKRequest_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _IKRequest_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _IKRequest_Response_type_support_symbol_names_t _IKRequest_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, skuba_msgs, srv, IKRequest_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, skuba_msgs, srv, IKRequest_Response)),
  }
};

typedef struct _IKRequest_Response_type_support_data_t
{
  void * data[2];
} _IKRequest_Response_type_support_data_t;

static _IKRequest_Response_type_support_data_t _IKRequest_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _IKRequest_Response_message_typesupport_map = {
  2,
  "skuba_msgs",
  &_IKRequest_Response_message_typesupport_ids.typesupport_identifier[0],
  &_IKRequest_Response_message_typesupport_symbol_names.symbol_name[0],
  &_IKRequest_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t IKRequest_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_IKRequest_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace skuba_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<skuba_msgs::srv::IKRequest_Response>()
{
  return &::skuba_msgs::srv::rosidl_typesupport_cpp::IKRequest_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, skuba_msgs, srv, IKRequest_Response)() {
  return get_message_type_support_handle<skuba_msgs::srv::IKRequest_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "skuba_msgs/srv/detail/ik_request__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace skuba_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _IKRequest_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _IKRequest_type_support_ids_t;

static const _IKRequest_type_support_ids_t _IKRequest_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _IKRequest_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _IKRequest_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _IKRequest_type_support_symbol_names_t _IKRequest_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, skuba_msgs, srv, IKRequest)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, skuba_msgs, srv, IKRequest)),
  }
};

typedef struct _IKRequest_type_support_data_t
{
  void * data[2];
} _IKRequest_type_support_data_t;

static _IKRequest_type_support_data_t _IKRequest_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _IKRequest_service_typesupport_map = {
  2,
  "skuba_msgs",
  &_IKRequest_service_typesupport_ids.typesupport_identifier[0],
  &_IKRequest_service_typesupport_symbol_names.symbol_name[0],
  &_IKRequest_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t IKRequest_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_IKRequest_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace skuba_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<skuba_msgs::srv::IKRequest>()
{
  return &::skuba_msgs::srv::rosidl_typesupport_cpp::IKRequest_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, skuba_msgs, srv, IKRequest)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<skuba_msgs::srv::IKRequest>();
}

#ifdef __cplusplus
}
#endif
