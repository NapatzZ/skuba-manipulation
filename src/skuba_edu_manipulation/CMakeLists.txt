cmake_minimum_required(VERSION 3.8)
project(skuba_edu_manipulation)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(skuba_msgs REQUIRED)
find_package(dynamixel_sdk REQUIRED)
find_package(moveit_msgs REQUIRED)
find_package(moveit_core REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(geometry_msgs REQUIRED)

# Add executables
add_executable(arm_controller src/arm_controller.cpp)
ament_target_dependencies(arm_controller
    rclcpp
    std_msgs
    skuba_msgs
    dynamixel_sdk
    moveit_msgs
)

add_executable(ik_solver src/ik_solver.cpp)
ament_target_dependencies(ik_solver
    rclcpp
    std_msgs
    skuba_msgs
    moveit_core
    moveit_ros_planning_interface
    geometry_msgs
)

# Install
install(TARGETS
    arm_controller
    ik_solver
    DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
    launch
    DESTINATION share/${PROJECT_NAME}
)

ament_package()
