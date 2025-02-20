#ifndef _UAV_FLIGHT_HPP_
#define _UAV_FLIGHT_HPP_

#include <ros/ros.h>
#include "airsim_ros/Reset.h"
#include "airsim_ros/Takeoff.h"
#include "airsim_ros/Land.h"
#include "airsim_ros/VelCmd.h"
#include "airsim_ros/RotorPWM.h"

class UAVFlight
{
private:
    ros::NodeHandle nh;
    // 服务客户端，用于起飞和降落
    ros::ServiceClient reset_client;
    ros::ServiceClient takeoff_client;
    ros::ServiceClient land_client;
    // 发布速度指令
    ros::Publisher vel_publisher;
    // 发布pwm指令
    ros::Publisher pwm_publisher;

    // 服务调用所需的请求参数
    airsim_ros::Reset reset_srv;
    airsim_ros::Takeoff takeoff_srv;
    airsim_ros::Land land_srv;
    // 速度控制消息
    airsim_ros::VelCmd vel_cmd;
    // pwm控制消息
    airsim_ros::RotorPWM rotor_pwm;

public:
    UAVFlight(ros::NodeHandle &node_handle);
    ~UAVFlight();

    bool reset();
    bool takeoff();
    void flyForward(double speed, double duration);
    bool land();
    void flyForwardPwm(double pwm0, double pwm1, double pwm2, double pwm3);
};

#endif
