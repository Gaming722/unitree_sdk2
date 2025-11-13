add_executable(test_robot_pub
    pub.cpp 
    motorCmd.cpp
)

target_link_libraries(test_robot_pub unitree_sdk2)

add_executable(test_robot_sub 
    sub.cpp 
    motorCmd.cpp
)
target_link_libraries(test_robot_sub unitree_sdk2)