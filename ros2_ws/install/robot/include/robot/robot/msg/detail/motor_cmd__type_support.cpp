// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robot:msg/MotorCmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robot/msg/detail/motor_cmd__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotorCmd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot::msg::MotorCmd(_init);
}

void MotorCmd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot::msg::MotorCmd *>(message_memory);
  typed_message->~MotorCmd();
}

size_t size_function__MotorCmd__q(const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * get_const_function__MotorCmd__q(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 18> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorCmd__q(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 18> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorCmd__q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MotorCmd__q(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MotorCmd__q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MotorCmd__q(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MotorCmd__kp(const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * get_const_function__MotorCmd__kp(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 18> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorCmd__kp(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 18> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorCmd__kp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MotorCmd__kp(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MotorCmd__kp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MotorCmd__kp(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MotorCmd__tau(const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * get_const_function__MotorCmd__tau(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 18> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorCmd__tau(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 18> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorCmd__tau(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MotorCmd__tau(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MotorCmd__tau(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MotorCmd__tau(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorCmd_message_member_array[3] = {
  {
    "q",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(robot::msg::MotorCmd, q),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorCmd__q,  // size() function pointer
    get_const_function__MotorCmd__q,  // get_const(index) function pointer
    get_function__MotorCmd__q,  // get(index) function pointer
    fetch_function__MotorCmd__q,  // fetch(index, &value) function pointer
    assign_function__MotorCmd__q,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "kp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(robot::msg::MotorCmd, kp),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorCmd__kp,  // size() function pointer
    get_const_function__MotorCmd__kp,  // get_const(index) function pointer
    get_function__MotorCmd__kp,  // get(index) function pointer
    fetch_function__MotorCmd__kp,  // fetch(index, &value) function pointer
    assign_function__MotorCmd__kp,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tau",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(robot::msg::MotorCmd, tau),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorCmd__tau,  // size() function pointer
    get_const_function__MotorCmd__tau,  // get_const(index) function pointer
    get_function__MotorCmd__tau,  // get(index) function pointer
    fetch_function__MotorCmd__tau,  // fetch(index, &value) function pointer
    assign_function__MotorCmd__tau,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorCmd_message_members = {
  "robot::msg",  // message namespace
  "MotorCmd",  // message name
  3,  // number of fields
  sizeof(robot::msg::MotorCmd),
  MotorCmd_message_member_array,  // message members
  MotorCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorCmd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorCmd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorCmd_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robot


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot::msg::MotorCmd>()
{
  return &::robot::msg::rosidl_typesupport_introspection_cpp::MotorCmd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot, msg, MotorCmd)() {
  return &::robot::msg::rosidl_typesupport_introspection_cpp::MotorCmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
