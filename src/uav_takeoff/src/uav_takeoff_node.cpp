#include "ros/ros.h"
#include "uav_takeoff/uav_takeoff.hpp"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "uav_takeoff_node"); // 初始化ROS节点
    ros::NodeHandle nh; // 创建Node句柄

    UAVTakeoff uav_takeoff(nh);

    ROS_INFO("Attempting to take off the UAV...");

    // 调用起飞函数
    uav_takeoff.takeoff();

    // 等待一段时间模拟飞行
    ros::Duration(5.0).sleep(); // 模拟飞行 5 秒

    ROS_INFO("Attempting to land the UAV...");

    // 调用降落函数
    uav_takeoff.land();

    ros::spin(); // 保持ROS节点运行
    return 0;
}
