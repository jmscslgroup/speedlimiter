//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: speedlimiter.cpp
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
#include "speedlimiter.h"
#include "slros_initialize.h"

extern "C"
{

#include "rt_nonfinite.h"

}

#include "rtwtypes.h"
#include "speedlimiter_types.h"

// Block signals (default storage)
B_speedlimiter_T speedlimiter_B;

// Block states (default storage)
DW_speedlimiter_T speedlimiter_DW;

// Real-time model
RT_MODEL_speedlimiter_T speedlimiter_M_ = RT_MODEL_speedlimiter_T();
RT_MODEL_speedlimiter_T *const speedlimiter_M = &speedlimiter_M_;

// Model step function
void speedlimiter_step(void)
{
  SL_Bus_speedlimiter_std_msgs_Float64 rtb_BusAssignment;
  SL_Bus_speedlimiter_std_msgs_Float64 rtb_SourceBlock_o2_f_0;
  SL_Bus_speedlimiter_std_msgs_Int16 rtb_SourceBlock_o2_0;
  real_T b_value;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
  // MATLABSystem: '<S5>/SourceBlock'
  b_varargout_1 = Sub_speedlimiter_2.getLatestMessage(&rtb_SourceBlock_o2_f_0);

  // Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S8>/Enable'

  // Start for MATLABSystem: '<S5>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S8>/In1'
    speedlimiter_B.In1_j = rtb_SourceBlock_o2_f_0;
  }

  // End of Start for MATLABSystem: '<S5>/SourceBlock'
  // End of Outputs for SubSystem: '<S5>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe1'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe3'
  // MATLABSystem: '<S6>/SourceBlock'
  b_varargout_1 = Sub_speedlimiter_71.getLatestMessage(&rtb_SourceBlock_o2_0);

  // Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S9>/Enable'

  // Start for MATLABSystem: '<S6>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S9>/In1'
    speedlimiter_B.In1 = rtb_SourceBlock_o2_0;
  }

  // End of Start for MATLABSystem: '<S6>/SourceBlock'
  // End of Outputs for SubSystem: '<S6>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe3'

  // MATLABSystem: '<Root>/Get Parameter1'
  ParamGet_speedlimiter_19.get_parameter(&b_value);

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S4>/SourceBlock'
  b_varargout_1 = Sub_speedlimiter_1.getLatestMessage(&rtb_SourceBlock_o2_f_0);

  // Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S7>/Enable'

  // Start for MATLABSystem: '<S4>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S7>/In1'
    speedlimiter_B.In1_m = rtb_SourceBlock_o2_f_0;
  }

  // End of Start for MATLABSystem: '<S4>/SourceBlock'
  // End of Outputs for SubSystem: '<S4>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // Switch: '<S3>/Switch' incorporates:
  //   MATLABSystem: '<Root>/Get Parameter1'
  //   Saturate: '<S3>/minmax accel in'
  //   Sum: '<S3>/Add'
  //   Sum: '<S3>/max allowed speed'
  //
  if ((static_cast<real_T>(speedlimiter_B.In1.Data) + b_value) -
      speedlimiter_B.In1_m.Data > 0.0) {
    // Saturate: '<S3>/minmax accel in'
    if (speedlimiter_B.In1_j.Data > 1.5) {
      // BusAssignment: '<Root>/Bus Assignment'
      rtb_BusAssignment.Data = 1.5;
    } else if (speedlimiter_B.In1_j.Data < -3.0) {
      // BusAssignment: '<Root>/Bus Assignment'
      rtb_BusAssignment.Data = -3.0;
    } else {
      // BusAssignment: '<Root>/Bus Assignment'
      rtb_BusAssignment.Data = speedlimiter_B.In1_j.Data;
    }
  } else {
    if (speedlimiter_B.In1_j.Data > 1.5) {
      // Saturate: '<S3>/minmax accel in'
      b_value = 1.5;
    } else if (speedlimiter_B.In1_j.Data < -3.0) {
      // Saturate: '<S3>/minmax accel in'
      b_value = -3.0;
    } else {
      // Saturate: '<S3>/minmax accel in'
      b_value = speedlimiter_B.In1_j.Data;
    }

    // MinMax: '<S3>/Min' incorporates:
    //   Saturate: '<S3>/minmax accel in'

    if ((b_value >= 0.0) || rtIsNaN(b_value)) {
      // BusAssignment: '<Root>/Bus Assignment'
      rtb_BusAssignment.Data = 0.0;
    } else {
      // BusAssignment: '<Root>/Bus Assignment'
      rtb_BusAssignment.Data = b_value;
    }

    // End of MinMax: '<S3>/Min'
  }

  // End of Switch: '<S3>/Switch'

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S2>/SinkBlock'
  Pub_speedlimiter_9.publish(&rtb_BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'
}

// Model initialize function
void speedlimiter_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    int32_T i;
    char_T b_zeroDelimTopic[18];
    char_T b_zeroDelimTopic_1[16];
    char_T b_zeroDelimTopic_0[14];
    char_T b_zeroDelimName[7];
    static const char_T b_zeroDelimTopic_2[18] = "cmd_accel_limited";
    static const char_T b_zeroDelimTopic_3[14] = "cmd_accel_pre";
    static const char_T b_zeroDelimTopic_4[14] = "acc/set_speed";
    static const char_T b_zeroDelimTopic_5[16] = "car/state/vel_x";
    static const char_T b_zeroDelimName_0[7] = "buffer";

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock'
    speedlimiter_DW.obj_n.matlabCodegenIsDeleted = false;
    speedlimiter_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_2[i];
    }

    Pub_speedlimiter_9.createPublisher(&b_zeroDelimTopic[0], 1);
    speedlimiter_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // Start for MATLABSystem: '<S5>/SourceBlock'
    speedlimiter_DW.obj_g.matlabCodegenIsDeleted = false;
    speedlimiter_DW.obj_g.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_3[i];
    }

    Sub_speedlimiter_2.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    speedlimiter_DW.obj_g.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe3'
    // Start for MATLABSystem: '<S6>/SourceBlock'
    speedlimiter_DW.obj_m.matlabCodegenIsDeleted = false;
    speedlimiter_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_4[i];
    }

    Sub_speedlimiter_71.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    speedlimiter_DW.obj_m.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe3'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S4>/SourceBlock'
    speedlimiter_DW.obj_nf.matlabCodegenIsDeleted = false;
    speedlimiter_DW.obj_nf.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      b_zeroDelimTopic_1[i] = b_zeroDelimTopic_5[i];
    }

    Sub_speedlimiter_1.createSubscriber(&b_zeroDelimTopic_1[0], 1);
    speedlimiter_DW.obj_nf.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // Start for MATLABSystem: '<Root>/Get Parameter1'
    speedlimiter_DW.obj.SampleTimeHandler.SampleTimeSpecTypeMask[0] = true;
    speedlimiter_DW.obj.SampleTimeHandler.SampleTimeSpecTypeMask[1] = true;
    speedlimiter_DW.obj.SampleTimeHandler.SampleTimeSpecTypeMask[2] = true;
    speedlimiter_DW.obj.SampleTimeHandler.SampleTimeSpecTypeMask[3] = true;
    speedlimiter_DW.obj.matlabCodegenIsDeleted = false;
    speedlimiter_DW.obj.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      b_zeroDelimName[i] = b_zeroDelimName_0[i];
    }

    ParamGet_speedlimiter_19.initialize(&b_zeroDelimName[0]);
    ParamGet_speedlimiter_19.initialize_error_codes(0, 1, 2, 3);
    ParamGet_speedlimiter_19.set_initial_value(1.0);
    speedlimiter_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<Root>/Get Parameter1'
  }
}

// Model terminate function
void speedlimiter_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Terminate for MATLABSystem: '<S5>/SourceBlock'
  if (!speedlimiter_DW.obj_g.matlabCodegenIsDeleted) {
    speedlimiter_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S5>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe3'
  // Terminate for MATLABSystem: '<S6>/SourceBlock'
  if (!speedlimiter_DW.obj_m.matlabCodegenIsDeleted) {
    speedlimiter_DW.obj_m.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S6>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe3'

  // Terminate for MATLABSystem: '<Root>/Get Parameter1'
  if (!speedlimiter_DW.obj.matlabCodegenIsDeleted) {
    speedlimiter_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<Root>/Get Parameter1'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S4>/SourceBlock'
  if (!speedlimiter_DW.obj_nf.matlabCodegenIsDeleted) {
    speedlimiter_DW.obj_nf.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S4>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S2>/SinkBlock'
  if (!speedlimiter_DW.obj_n.matlabCodegenIsDeleted) {
    speedlimiter_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

const char_T* RT_MODEL_speedlimiter_T::getErrorStatus() const
{
  return (errorStatus);
}

void RT_MODEL_speedlimiter_T::setErrorStatus(const char_T* const volatile
  aErrorStatus)
{
  (errorStatus = aErrorStatus);
}

//
// File trailer for generated code.
//
// [EOF]
//
