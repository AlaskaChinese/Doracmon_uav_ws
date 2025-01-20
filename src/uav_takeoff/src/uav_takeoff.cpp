#include "uav_takeoff/uav_takeoff.hpp"

UAVTakeoff::UAVTakeoff(ros::NodeHandle &node_handle)
{
    // ��ʼ������ͻ���
    takeoff_client = node_handle.serviceClient<airsim_ros::Takeoff>("/airsim_node/drone_1/takeoff");
    land_client = node_handle.serviceClient<airsim_ros::Land>("/airsim_node/drone_1/land");

    // �����������
    takeoff_request.request.waitOnLastTask = true;
    land_request.request.waitOnLastTask = true;
}

UAVTakeoff::~UAVTakeoff()
{
    // ��������
}

void UAVTakeoff::takeoff()
{
    ROS_INFO("Sending takeoff request to the simulator...");

    // ������ɷ���
    if (takeoff_client.call(takeoff_request))
    {
        ROS_INFO("Takeoff successful!");
    }
    else
    {
        ROS_ERROR("Failed to call takeoff service!");
    }
}

void UAVTakeoff::land()
{
    ROS_INFO("Sending land request to the simulator...");

    // ���ý������
    if (land_client.call(land_request))
    {
        ROS_INFO("Landing successful!");
    }
    else
    {
        ROS_ERROR("Failed to call land service!");
    }
}
