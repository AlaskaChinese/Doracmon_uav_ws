#include "ros/ros.h"
#include "uav_takeoff/uav_takeoff.hpp"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "uav_takeoff_node"); // ��ʼ��ROS�ڵ�
    ros::NodeHandle nh; // ����Node���

    UAVTakeoff uav_takeoff(nh);

    ROS_INFO("Attempting to take off the UAV...");

    // ������ɺ���
    uav_takeoff.takeoff();

    // �ȴ�һ��ʱ��ģ�����
    ros::Duration(5.0).sleep(); // ģ����� 5 ��

    ROS_INFO("Attempting to land the UAV...");

    // ���ý��亯��
    uav_takeoff.land();

    ros::spin(); // ����ROS�ڵ�����
    return 0;
}
