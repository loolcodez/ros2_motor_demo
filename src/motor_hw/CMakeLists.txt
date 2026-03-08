cmake_minimum_required(VERSION 3.8)
project(motor_hw)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_srvs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(motor_msgs REQUIRED)

include_directories(include)

add_executable(board_probe_node
  src/board_driver.cpp
  src/board_probe_node.cpp
)

ament_target_dependencies(board_probe_node
  rclcpp
  std_srvs
  std_msgs
  builtin_interfaces
  motor_msgs
)

install(TARGETS
  board_probe_node
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY include/
  DESTINATION include/
)

ament_package()
