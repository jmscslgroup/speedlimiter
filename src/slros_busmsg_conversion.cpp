#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_speedlimiter_std_msgs_Float64 and std_msgs::Float64

void convertFromBus(std_msgs::Float64* msgPtr, SL_Bus_speedlimiter_std_msgs_Float64 const* busPtr)
{
  const std::string rosMessageType("std_msgs/Float64");

  msgPtr->data =  busPtr->Data;
}

void convertToBus(SL_Bus_speedlimiter_std_msgs_Float64* busPtr, std_msgs::Float64 const* msgPtr)
{
  const std::string rosMessageType("std_msgs/Float64");

  busPtr->Data =  msgPtr->data;
}


// Conversions between SL_Bus_speedlimiter_std_msgs_Int16 and std_msgs::Int16

void convertFromBus(std_msgs::Int16* msgPtr, SL_Bus_speedlimiter_std_msgs_Int16 const* busPtr)
{
  const std::string rosMessageType("std_msgs/Int16");

  msgPtr->data =  busPtr->Data;
}

void convertToBus(SL_Bus_speedlimiter_std_msgs_Int16* busPtr, std_msgs::Int16 const* msgPtr)
{
  const std::string rosMessageType("std_msgs/Int16");

  busPtr->Data =  msgPtr->data;
}


