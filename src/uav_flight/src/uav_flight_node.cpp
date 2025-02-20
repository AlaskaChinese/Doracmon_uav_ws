#include "ros/ros.h"
#include "uav_flight/uav_flight.hpp"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "uav_flight_node"); // 初始化ROS节点
    ros::NodeHandle nh;
    UAVFlight flight(nh);

    flight.reset();
    ros::Duration(3.0).sleep();

    // 起飞
    if (flight.takeoff())
    {
        // 起飞后等待几秒确保稳定
        ros::Duration(3.0).sleep();

        flight.flyForwardPwm(0.1805, 0.1810,0.1805, 0.1810);
        ros::Duration(2.0).sleep();

        // 向前飞行：例如以2 m/s飞行5秒
        // flight.flyForward(2.0, 30.0);
        // 飞行完成后等待2秒，然后降落
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
