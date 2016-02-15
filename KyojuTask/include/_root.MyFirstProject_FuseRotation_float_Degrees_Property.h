// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/MyFirstProject.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{struct Rotation;}}
namespace g{struct MyFirstProject_FuseRotation_float_Degrees_Property;}

namespace g{

// internal sealed class MyFirstProject_FuseRotation_float_Degrees_Property :73
// {
::g::Uno::UX::Property_type* MyFirstProject_FuseRotation_float_Degrees_Property_typeof();
void MyFirstProject_FuseRotation_float_Degrees_Property__ctor_1_fn(MyFirstProject_FuseRotation_float_Degrees_Property* __this, ::g::Fuse::Rotation* obj);
void MyFirstProject_FuseRotation_float_Degrees_Property__New1_fn(::g::Fuse::Rotation* obj, MyFirstProject_FuseRotation_float_Degrees_Property** __retval);
void MyFirstProject_FuseRotation_float_Degrees_Property__OnGet_fn(MyFirstProject_FuseRotation_float_Degrees_Property* __this, float* __retval);
void MyFirstProject_FuseRotation_float_Degrees_Property__OnSet_fn(MyFirstProject_FuseRotation_float_Degrees_Property* __this, float* v, uObject* origin);

struct MyFirstProject_FuseRotation_float_Degrees_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Rotation*> _obj;

    void ctor_1(::g::Fuse::Rotation* obj);
    static MyFirstProject_FuseRotation_float_Degrees_Property* New1(::g::Fuse::Rotation* obj);
};
// }

} // ::g
