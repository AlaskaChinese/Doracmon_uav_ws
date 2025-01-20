cmake_minimum_required(VERSION 3.0.2)
project(uav_takeoff)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  std_srvs
  geometry_msgs
  airsim_ros
  sensor_msgs
  cv_bridge
  pcl_ros
  image_transport
)

catkin_package()

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_executable(uav_takeoff_node
  src/uav_takeoff_node.cpp
  src/uav_takeoff.cpp   # 添加实现文件
)

target_link_libraries(uav_takeoff_node
  ${catkin_LIBRARIES}
)
