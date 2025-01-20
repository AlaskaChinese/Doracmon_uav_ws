#ifndef _UAV_TAKEOFF_HPP_
#define _UAV_TAKEOFF_HPP_

#include <ros/ros.h>
#include "airsim_ros/Takeoff.h"
#include "airsim_ros/Land.h"

class UAVTakeoff
{
private:
    ros::NodeHandle nh;

    // ROS服务客户端
    ros::ServiceClient takeoff_client;
    ros::ServiceClient land_client;

    airsim_ros::Takeoff takeoff_request;
    airsim_ros::Land land_request;

public:
    UAVTakeoff(ros::NodeHandle &node_handle);
    ~UAVTakeoff();

    void takeoff();
    void land();
};

#endif
