// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Quaternion;}}

namespace g{
namespace Uno{

// public static class Quaternion :4018
// {
uClassType* Quaternion_typeof();
void Quaternion__FromEulerAngle_fn(float* pitch, float* yaw, float* roll, ::g::Uno::Float4* __retval);
void Quaternion__FromEulerAngle1_fn(::g::Uno::Float3* v, ::g::Uno::Float4* __retval);
void Quaternion__FromEulerAngleDegrees_fn(float* pitch, float* yaw, float* roll, ::g::Uno::Float4* __retval);
void Quaternion__FromEulerAngleDegrees1_fn(::g::Uno::Float3* v, ::g::Uno::Float4* __retval);
void Quaternion__NormalizeAngleDegrees_fn(float* angle, float* __retval);
void Quaternion__NormalizeAnglesDegrees_fn(::g::Uno::Float3* angles, ::g::Uno::Float3* __retval);
void Quaternion__ToEulerAngle_fn(::g::Uno::Float4* q1, ::g::Uno::Float3* __retval);
void Quaternion__ToEulerAngleDegrees_fn(::g::Uno::Float4* q1, ::g::Uno::Float3* __retval);

struct Quaternion : uObject
{
    static ::g::Uno::Float4 FromEulerAngle(float pitch, float yaw, float roll);
    static ::g::Uno::Float4 FromEulerAngle1(::g::Uno::Float3 v);
    static ::g::Uno::Float4 FromEulerAngleDegrees(float pitch, float yaw, float roll);
    static ::g::Uno::Float4 FromEulerAngleDegrees1(::g::Uno::Float3 v);
    static float NormalizeAngleDegrees(float angle);
    static ::g::Uno::Float3 NormalizeAnglesDegrees(::g::Uno::Float3 angles);
    static ::g::Uno::Float3 ToEulerAngle(::g::Uno::Float4 q1);
    static ::g::Uno::Float3 ToEulerAngleDegrees(::g::Uno::Float4 q1);
};
// }

}} // ::g::Uno