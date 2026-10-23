// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_interfaces:msg/Target.idl
// generated code does not contain a copyright notice

#include "my_interfaces/msg/detail/target__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
const rosidl_type_hash_t *
my_interfaces__msg__Target__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2d, 0xff, 0x29, 0xcd, 0x33, 0x54, 0x6e, 0x69,
      0x6f, 0x97, 0x2c, 0x90, 0x53, 0x2a, 0x94, 0x82,
      0xc6, 0xe6, 0x4e, 0x7a, 0x4e, 0x95, 0x97, 0x0b,
      0x48, 0x78, 0x8d, 0xf8, 0x82, 0x2d, 0x71, 0x6c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_interfaces__msg__Target__TYPE_NAME[] = "my_interfaces/msg/Target";

// Define type names, field names, and default values
static char my_interfaces__msg__Target__FIELD_NAME__x[] = "x";
static char my_interfaces__msg__Target__FIELD_NAME__y[] = "y";
static char my_interfaces__msg__Target__FIELD_NAME__yaw[] = "yaw";

static rosidl_runtime_c__type_description__Field my_interfaces__msg__Target__FIELDS[] = {
  {
    {my_interfaces__msg__Target__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__msg__Target__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__msg__Target__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_interfaces__msg__Target__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_interfaces__msg__Target__TYPE_NAME, 24, 24},
      {my_interfaces__msg__Target__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 x\n"
  "float64 y\n"
  "float64 yaw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_interfaces__msg__Target__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_interfaces__msg__Target__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 32, 32},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_interfaces__msg__Target__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_interfaces__msg__Target__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
