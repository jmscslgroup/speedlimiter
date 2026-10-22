#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "speedlimiter";

// For Block speedlimiter/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_speedlimiter_std_msgs_Float64> Sub_speedlimiter_1;

// For Block speedlimiter/Subscribe1
SimulinkSubscriber<std_msgs::Float64, SL_Bus_speedlimiter_std_msgs_Float64> Sub_speedlimiter_2;

// For Block speedlimiter/Subscribe2
SimulinkSubscriber<std_msgs::Float64, SL_Bus_speedlimiter_std_msgs_Float64> Sub_speedlimiter_48;

// For Block speedlimiter/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_speedlimiter_std_msgs_Float64> Pub_speedlimiter_9;

// For Block speedlimiter/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_speedlimiter_19;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

