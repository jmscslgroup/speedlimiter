//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: speedlimiter_types.h
//
// Code generated for Simulink model 'speedlimiter'.
//
// Model version                  : 2.4
// Simulink Coder version         : 26.1 (R2026a) 20-Nov-2025
// C/C++ source code generated on : Thu Oct 22 16:01:18 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef SPEEDLIMITER_TYPES_H_
#define SPEEDLIMITER_TYPES_H_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_SPEEDLIMITER_STD_MSGS_FLOAT64_
#define DEFINED_TYPEDEF_FOR_SL_BUS_SPEEDLIMITER_STD_MSGS_FLOAT64_

// MsgType=std_msgs/Float64
struct SL_Bus_speedlimiter_std_msgs_Float64
{
  real_T Data;
};

#endif

#ifndef STRUCT_ROS_SLROSCPP_INTERNAL_BLOCK_P_T
#define STRUCT_ROS_SLROSCPP_INTERNAL_BLOCK_P_T

struct ros_slroscpp_internal_block_P_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // STRUCT_ROS_SLROSCPP_INTERNAL_BLOCK_P_T

#ifndef STRUCT_ROS_SLROSCPP_INTERNAL_BLOCK_S_T
#define STRUCT_ROS_SLROSCPP_INTERNAL_BLOCK_S_T

struct ros_slroscpp_internal_block_S_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // STRUCT_ROS_SLROSCPP_INTERNAL_BLOCK_S_T

#ifndef STRUCT_E_ROBOTICS_SLCORE_INTERNAL_BL_T
#define STRUCT_E_ROBOTICS_SLCORE_INTERNAL_BL_T

struct e_robotics_slcore_internal_bl_T
{
  boolean_T SampleTimeSpecTypeMask[4];
};

#endif                                // STRUCT_E_ROBOTICS_SLCORE_INTERNAL_BL_T

#ifndef STRUCT_ROS_SLROS_INTERNAL_BLOCK_GETP_T
#define STRUCT_ROS_SLROS_INTERNAL_BLOCK_GETP_T

struct ros_slros_internal_block_GetP_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  e_robotics_slcore_internal_bl_T SampleTimeHandler;
};

#endif                                // STRUCT_ROS_SLROS_INTERNAL_BLOCK_GETP_T

// Forward declaration for rtModel
typedef struct tag_RTM_speedlimiter_T RT_MODEL_speedlimiter_T;

#endif                                 // SPEEDLIMITER_TYPES_H_

//
// File trailer for generated code.
//
// [EOF]
//
