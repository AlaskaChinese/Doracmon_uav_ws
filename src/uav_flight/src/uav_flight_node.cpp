#include "ros/ros.h"
#include "uav_flight/uav_flight.hpp"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "uav_flight_node"); // ��ʼ��ROS�ڵ�
    ros::NodeHandle nh;
    UAVFlight flight(nh);

    // ���
    if (flight.takeoff())
    {
        // ��ɺ�ȴ�2��ȷ���ȶ�
        ros::Duration(2.0).sleep();
        // ��ǰ���У�������2 m/s����5��
        flight.flyForward(2.0, 5.0);
        // ������ɺ�ȴ�2�룬Ȼ����
        ros::Duration(2.0).sleep();
        flight.land();
    }
    else
    {
        ROS_ERROR("Takeoff failed. Exiting.");
    }

    ros::spinOnce();
    return 0;
}
