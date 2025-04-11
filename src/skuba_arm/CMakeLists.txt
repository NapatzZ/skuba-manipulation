cmake_minimum_required(VERSION 3.8)
project(skuba_arm)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find required packages
find_package(ament_cmake REQUIRED)
find_package(dynamixel_sdk REQUIRED)
find_package(rclcpp REQUIRED)
find_package(skuba_msgs REQUIRED)

# Add executable
add_executable(dynamixelControl src/dynamixelControl.cpp)
ament_target_dependencies(dynamixelControl rclcpp dynamixel_sdk skuba_msgs)

# Install targets
install(TARGETS
  dynamixelControl
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()