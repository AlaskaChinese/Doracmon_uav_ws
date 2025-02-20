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
    // ����ͻ��ˣ�������ɺͽ���
    ros::ServiceClient reset_client;
    ros::ServiceClient takeoff_client;
    ros::ServiceClient land_client;
    // �����ٶ�ָ��
    ros::Publisher vel_publisher;
    // ����pwmָ��
    ros::Publisher pwm_publisher;

    // �������������������
    airsim_ros::Reset reset_srv;
    airsim_ros::Takeoff takeoff_srv;
    airsim_ros::Land land_srv;
    // �ٶȿ�����Ϣ
    airsim_ros::VelCmd vel_cmd;
    // pwm������Ϣ
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
