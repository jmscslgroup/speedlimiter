#ifndef SPEEDLIMITER__VISIBILITY_CONTROL_H_
#define SPEEDLIMITER__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define SPEEDLIMITER_EXPORT __attribute__ ((dllexport))
    #define SPEEDLIMITER_IMPORT __attribute__ ((dllimport))
  #else
    #define SPEEDLIMITER_EXPORT __declspec(dllexport)
    #define SPEEDLIMITER_IMPORT __declspec(dllimport)
  #endif
  #ifdef SPEEDLIMITER_BUILDING_LIBRARY
    #define SPEEDLIMITER_PUBLIC SPEEDLIMITER_EXPORT
  #else
    #define SPEEDLIMITER_PUBLIC SPEEDLIMITER_IMPORT
  #endif
  #define SPEEDLIMITER_PUBLIC_TYPE SPEEDLIMITER_PUBLIC
  #define SPEEDLIMITER_LOCAL
#else
  #define SPEEDLIMITER_EXPORT __attribute__ ((visibility("default")))
  #define SPEEDLIMITER_IMPORT
  #if __GNUC__ >= 4
    #define SPEEDLIMITER_PUBLIC __attribute__ ((visibility("default")))
    #define SPEEDLIMITER_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define SPEEDLIMITER_PUBLIC
    #define SPEEDLIMITER_LOCAL
  #endif
  #define SPEEDLIMITER_PUBLIC_TYPE
#endif
#endif  // SPEEDLIMITER__VISIBILITY_CONTROL_H_
// Generated 22-Oct-2026 17:21:18
// Copyright 2019-2020 The MathWorks, Inc.
