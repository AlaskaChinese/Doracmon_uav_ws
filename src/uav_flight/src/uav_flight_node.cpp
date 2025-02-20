#include "ros/ros.h"
#include "uav_flight/uav_flight.hpp"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "uav_flight_node"); // ��ʼ��ROS�ڵ�
    ros::NodeHandle nh;
    UAVFlight flight(nh);

    flight.reset();
    ros::Duration(3.0).sleep();

    // ���
    if (flight.takeoff())
    {
        // ��ɺ�ȴ�����ȷ���ȶ�
        ros::Duration(3.0).sleep();

        flight.flyForwardPwm(0.1805, 0.1810,0.1805, 0.1810);
        ros::Duration(2.0).sleep();

        // ��ǰ���У�������2 m/s����5��
        // flight.flyForward(2.0, 30.0);
        // ������ɺ�ȴ�2�룬Ȼ����
        // ros::Duration(2.0).sleep();
        // flight.land();
    }
    else
    {
        ROS_ERROR("Takeoff failed. Exiting.");
    }

    ros::spinOnce();
    return 0;
}
