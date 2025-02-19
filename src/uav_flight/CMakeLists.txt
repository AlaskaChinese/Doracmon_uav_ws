cmake_minimum_required(VERSION 3.0.2)
project(uav_flight)

## 查找catkin依赖包
find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  sensor_msgs
  geometry_msgs
  airsim_ros
  cv_bridge
  image_transport
  tf2_ros
  tf2_geometry_msgs
  pcl_ros
  pcl_conversions
)

## 声明catkin包
catkin_package(
  CATKIN_DEPENDS roscpp std_msgs sensor_msgs geometry_msgs airsim_ros
)

## 指定头文件搜索路径（包含目录）
include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

## 添加可执行文件（将源文件放在src目录下）
add_executable(uav_flight_node
  src/uav_flight_node.cpp
  src/uav_flight.cpp
)

## 链接库
target_link_libraries(uav_flight_node
  ${catkin_LIBRARIES}
)
