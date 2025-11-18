// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot:msg/MotorCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot/msg/detail/motor_cmd__rosidl_typesupport_introspection_c.h"
#include "robot/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot/msg/detail/motor_cmd__functions.h"
#include "robot/msg/detail/motor_cmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robot__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot__msg__MotorCmd__init(message_memory);
}

void robot__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_fini_function(void * message_memory)
{
  robot__msg__MotorCmd__fini(message_memory);
}

size_t robot__msg__MotorCmd__rosidl_typesupport_introspection_c__size_function__MotorCmd__q(
  const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * robot__msg__MotorCmd__rosidl_typesupport_introspection_c__get_const_function__MotorCmd__q(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * robot__msg__MotorCmd__rosidl_typesupport_introspection_c__get_function__MotorCmd__q(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void robot__msg__MotorCmd__rosidl_typesupport_introspection_c__fetch_function__MotorCmd__q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    robot__msg__MotorCmd__rosidl_typesupport_introspection_c__get_const_function__MotorCmd__q(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void robot__msg__MotorCmd__rosidl_typesupport_introspection_c__assign_function__MotorCmd__q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    robot__msg__MotorCmd__rosidl_typesupport_introspection_c__get_function__MotorCmd__q(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t robot__msg__MotorCmd__rosidl_typesupport_introspection_c__size_function__MotorCmd__kp(
  const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * robot__msg__MotorCmd__rosidl_typesupport_introspection_c__get_const_function__MotorCmd__kp(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * robot__msg__MotorCmd__rosidl_typesupport_introspection_c__get_function__MotorCmd__kp(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void robot__msg__MotorCmd__rosidl_typesupport_introspection_c__fetch_function__MotorCmd__kp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    robot__msg__MotorCmd__rosidl_typesupport_introspection_c__get_const_function__MotorCmd__kp(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void robot__msg__MotorCmd__rosidl_typesupport_introspection_c__assign_function__MotorCmd__kp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    robot__msg__MotorCmd__rosidl_typesupport_introspection_c__get_function__MotorCmd__kp(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t robot__msg__MotorCmd__rosidl_typesupport_introspection_c__size_function__MotorCmd__tau(
  const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * robot__msg__MotorCmd__rosidl_typesupport_introspection_c__get_const_function__MotorCmd__tau(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * robot__msg__MotorCmd__rosidl_typesupport_introspection_c__get_function__MotorCmd__tau(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void robot__msg__MotorCmd__rosidl_typesupport_introspection_c__fetch_function__MotorCmd__tau(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    robot__msg__MotorCmd__rosidl_typesupport_introspection_c__get_const_function__MotorCmd__tau(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void robot__msg__MotorCmd__rosidl_typesupport_introspection_c__assign_function__MotorCmd__tau(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    robot__msg__MotorCmd__rosidl_typesupport_introspection_c__get_function__MotorCmd__tau(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember robot__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_message_member_array[3] = {
  {
    "q",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(robot__msg__MotorCmd, q),  // bytes offset in struct
    NULL,  // default value
    robot__msg__MotorCmd__rosidl_typesupport_introspection_c__size_function__MotorCmd__q,  // size() function pointer
    robot__msg__MotorCmd__rosidl_typesupport_introspection_c__get_const_function__MotorCmd__q,  // get_const(index) function pointer
    robot__msg__MotorCmd__rosidl_typesupport_introspection_c__get_function__MotorCmd__q,  // get(index) function pointer
    robot__msg__MotorCmd__rosidl_typesupport_introspection_c__fetch_function__MotorCmd__q,  // fetch(index, &value) function pointer
    robot__msg__MotorCmd__rosidl_typesupport_introspection_c__assign_function__MotorCmd__q,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(robot__msg__MotorCmd, kp),  // bytes offset in struct
    NULL,  // default value
    robot__msg__MotorCmd__rosidl_typesupport_introspection_c__size_function__MotorCmd__kp,  // size() function pointer
    robot__msg__MotorCmd__rosidl_typesupport_introspection_c__get_const_function__MotorCmd__kp,  // get_const(index) function pointer
    robot__msg__MotorCmd__rosidl_typesupport_introspection_c__get_function__MotorCmd__kp,  // get(index) function pointer
    robot__msg__MotorCmd__rosidl_typesupport_introspection_c__fetch_function__MotorCmd__kp,  // fetch(index, &value) function pointer
    robot__msg__MotorCmd__rosidl_typesupport_introspection_c__assign_function__MotorCmd__kp,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tau",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(robot__msg__MotorCmd, tau),  // bytes offset in struct
    NULL,  // default value
    robot__msg__MotorCmd__rosidl_typesupport_introspection_c__size_function__MotorCmd__tau,  // size() function pointer
    robot__msg__MotorCmd__rosidl_typesupport_introspection_c__get_const_function__MotorCmd__tau,  // get_const(index) function pointer
    robot__msg__MotorCmd__rosidl_typesupport_introspection_c__get_function__MotorCmd__tau,  // get(index) function pointer
    robot__msg__MotorCmd__rosidl_typesupport_introspection_c__fetch_function__MotorCmd__tau,  // fetch(index, &value) function pointer
    robot__msg__MotorCmd__rosidl_typesupport_introspection_c__assign_function__MotorCmd__tau,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_message_members = {
  "robot__msg",  // message namespace
  "MotorCmd",  // message name
  3,  // number of fields
  sizeof(robot__msg__MotorCmd),
  robot__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_message_member_array,  // message members
  robot__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  robot__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_message_type_support_handle = {
  0,
  &robot__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot, msg, MotorCmd)() {
  if (!robot__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_message_type_support_handle.typesupport_identifier) {
    robot__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
