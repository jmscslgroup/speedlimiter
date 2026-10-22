#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "speedlimiter_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block speedlimiter/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_speedlimiter_std_msgs_Float64> Sub_speedlimiter_1;

// For Block speedlimiter/Subscribe1
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_speedlimiter_std_msgs_Float64> Sub_speedlimiter_2;

// For Block speedlimiter/Subscribe3
extern SimulinkSubscriber<std_msgs::Int16, SL_Bus_speedlimiter_std_msgs_Int16> Sub_speedlimiter_71;

// For Block speedlimiter/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_speedlimiter_std_msgs_Float64> Pub_speedlimiter_9;

// For Block speedlimiter/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_speedlimiter_19;

void slros_node_init(int argc, char** argv);

#endif
