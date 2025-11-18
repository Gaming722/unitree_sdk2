// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot:msg/MotorCmd.idl
// generated code does not contain a copyright notice

#ifndef ROBOT__MSG__DETAIL__MOTOR_CMD__BUILDER_HPP_
#define ROBOT__MSG__DETAIL__MOTOR_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot/msg/detail/motor_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot
{

namespace msg
{

namespace builder
{

class Init_MotorCmd_tau
{
public:
  explicit Init_MotorCmd_tau(::robot::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  ::robot::msg::MotorCmd tau(::robot::msg::MotorCmd::_tau_type arg)
  {
    msg_.tau = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot::msg::MotorCmd msg_;
};

class Init_MotorCmd_kp
{
public:
  explicit Init_MotorCmd_kp(::robot::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_tau kp(::robot::msg::MotorCmd::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_MotorCmd_tau(msg_);
  }

private:
  ::robot::msg::MotorCmd msg_;
};

class Init_MotorCmd_q
{
public:
  Init_MotorCmd_q()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCmd_kp q(::robot::msg::MotorCmd::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_MotorCmd_kp(msg_);
  }

private:
  ::robot::msg::MotorCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot::msg::MotorCmd>()
{
  return robot::msg::builder::Init_MotorCmd_q();
}

}  // namespace robot

#endif  // ROBOT__MSG__DETAIL__MOTOR_CMD__BUILDER_HPP_
