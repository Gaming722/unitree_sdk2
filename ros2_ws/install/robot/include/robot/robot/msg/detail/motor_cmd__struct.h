// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot:msg/MotorCmd.idl
// generated code does not contain a copyright notice

#ifndef ROBOT__MSG__DETAIL__MOTOR_CMD__STRUCT_H_
#define ROBOT__MSG__DETAIL__MOTOR_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorCmd in the package robot.
typedef struct robot__msg__MotorCmd
{
  float q[18];
  float kp[18];
  float tau[18];
} robot__msg__MotorCmd;

// Struct for a sequence of robot__msg__MotorCmd.
typedef struct robot__msg__MotorCmd__Sequence
{
  robot__msg__MotorCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot__msg__MotorCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT__MSG__DETAIL__MOTOR_CMD__STRUCT_H_
