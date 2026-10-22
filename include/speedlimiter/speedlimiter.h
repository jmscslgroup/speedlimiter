//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: speedlimiter.h
//
// Code generated for Simulink model 'speedlimiter'.
//
// Model version                  : 2.11
// Simulink Coder version         : 26.1 (R2026a) 20-Nov-2025
// C/C++ source code generated on : Thu Oct 22 17:21:16 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef SPEEDLIMITER_H_
#define SPEEDLIMITER_H_
#include "rtwtypes.h"
#include "speedlimiter_types.h"

extern "C"
{

#include "rt_nonfinite.h"

}

#include <stddef.h>

// Block signals (default storage)
struct B_speedlimiter_T {
  SL_Bus_speedlimiter_std_msgs_Int16 In1;// '<S9>/In1'
  SL_Bus_speedlimiter_std_msgs_Float64 In1_j;// '<S8>/In1'
  SL_Bus_speedlimiter_std_msgs_Float64 In1_m;// '<S7>/In1'
};

// Block states (default storage) for system '<Root>'
struct DW_speedlimiter_T {
  ros_slros_internal_block_GetP_T obj; // '<Root>/Get Parameter1'
  ros_slroscpp_internal_block_P_T obj_n;// '<S2>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_m;// '<S6>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_g;// '<S5>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_nf;// '<S4>/SourceBlock'
};

// Real-time Model Data Structure
struct tag_RTM_speedlimiter_T {
  const char_T * volatile errorStatus;
  const char_T* getErrorStatus() const;
  void setErrorStatus(const char_T* const volatile aErrorStatus);
};

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_speedlimiter_T speedlimiter_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_speedlimiter_T speedlimiter_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void speedlimiter_initialize(void);
  extern void speedlimiter_step(void);
  extern void speedlimiter_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_speedlimiter_T *const speedlimiter_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'speedlimiter'
//  '<S1>'   : 'speedlimiter/Blank Message'
//  '<S2>'   : 'speedlimiter/Publish'
//  '<S3>'   : 'speedlimiter/SpeedLimiter'
//  '<S4>'   : 'speedlimiter/Subscribe'
//  '<S5>'   : 'speedlimiter/Subscribe1'
//  '<S6>'   : 'speedlimiter/Subscribe3'
//  '<S7>'   : 'speedlimiter/Subscribe/Enabled Subsystem'
//  '<S8>'   : 'speedlimiter/Subscribe1/Enabled Subsystem'
//  '<S9>'   : 'speedlimiter/Subscribe3/Enabled Subsystem'

#endif                                 // SPEEDLIMITER_H_

//
// File trailer for generated code.
//
// [EOF]
//
