#ifndef _UAV_FLIGHT_HPP_
#define _UAV_FLIGHT_HPP_

#include <ros/ros.h>
#include "airsim_ros/Takeoff.h"
#include "airsim_ros/Land.h"
#include "airsim_ros/VelCmd.h"

class UAVFlight
{
private:
    ros::NodeHandle nh;
    // ����ͻ��ˣ�������ɺͽ���
    ros::ServiceClient takeoff_client;
    ros::ServiceClient land_client;
    // �����ٶ�ָ��
    ros::Publisher vel_publisher;
    
    // �������������������
    airsim_ros::Takeoff takeoff_srv;
    airsim_ros::Land land_srv;
    // �ٶȿ�����Ϣ
    airsim_ros::VelCmd vel_cmd;

public:
    UAVFlight(ros::NodeHandle &node_handle);
    ~UAVFlight();

    bool takeoff();
    void flyForward(double speed, double duration);
    bool land();
};

#endif
