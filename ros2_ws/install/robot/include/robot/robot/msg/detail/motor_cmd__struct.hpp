// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot:msg/MotorCmd.idl
// generated code does not contain a copyright notice

#ifndef ROBOT__MSG__DETAIL__MOTOR_CMD__STRUCT_HPP_
#define ROBOT__MSG__DETAIL__MOTOR_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot__msg__MotorCmd __attribute__((deprecated))
#else
# define DEPRECATED__robot__msg__MotorCmd __declspec(deprecated)
#endif

namespace robot
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorCmd_
{
  using Type = MotorCmd_<ContainerAllocator>;

  explicit MotorCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 18>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
      std::fill<typename std::array<float, 18>::iterator, float>(this->kp.begin(), this->kp.end(), 0.0f);
      std::fill<typename std::array<float, 18>::iterator, float>(this->tau.begin(), this->tau.end(), 0.0f);
    }
  }

  explicit MotorCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : q(_alloc),
    kp(_alloc),
    tau(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 18>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
      std::fill<typename std::array<float, 18>::iterator, float>(this->kp.begin(), this->kp.end(), 0.0f);
      std::fill<typename std::array<float, 18>::iterator, float>(this->tau.begin(), this->tau.end(), 0.0f);
    }
  }

  // field types and members
  using _q_type =
    std::array<float, 18>;
  _q_type q;
  using _kp_type =
    std::array<float, 18>;
  _kp_type kp;
  using _tau_type =
    std::array<float, 18>;
  _tau_type tau;

  // setters for named parameter idiom
  Type & set__q(
    const std::array<float, 18> & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__kp(
    const std::array<float, 18> & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__tau(
    const std::array<float, 18> & _arg)
  {
    this->tau = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot::msg::MotorCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot::msg::MotorCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot::msg::MotorCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot::msg::MotorCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot::msg::MotorCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot::msg::MotorCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot::msg::MotorCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot::msg::MotorCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot::msg::MotorCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot::msg::MotorCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot__msg__MotorCmd
    std::shared_ptr<robot::msg::MotorCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot__msg__MotorCmd
    std::shared_ptr<robot::msg::MotorCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorCmd_ & other) const
  {
    if (this->q != other.q) {
      return false;
    }
    if (this->kp != other.kp) {
      return false;
    }
    if (this->tau != other.tau) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorCmd_

// alias to use template instance with default allocator
using MotorCmd =
  robot::msg::MotorCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot

#endif  // ROBOT__MSG__DETAIL__MOTOR_CMD__STRUCT_HPP_
