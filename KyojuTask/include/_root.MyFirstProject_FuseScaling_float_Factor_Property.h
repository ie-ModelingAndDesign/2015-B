// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/MyFirstProject.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{struct Scaling;}}
namespace g{struct MyFirstProject_FuseScaling_float_Factor_Property;}

namespace g{

// internal sealed class MyFirstProject_FuseScaling_float_Factor_Property :59
// {
::g::Uno::UX::Property_type* MyFirstProject_FuseScaling_float_Factor_Property_typeof();
void MyFirstProject_FuseScaling_float_Factor_Property__ctor_1_fn(MyFirstProject_FuseScaling_float_Factor_Property* __this, ::g::Fuse::Scaling* obj);
void MyFirstProject_FuseScaling_float_Factor_Property__New1_fn(::g::Fuse::Scaling* obj, MyFirstProject_FuseScaling_float_Factor_Property** __retval);
void MyFirstProject_FuseScaling_float_Factor_Property__OnGet_fn(MyFirstProject_FuseScaling_float_Factor_Property* __this, float* __retval);
void MyFirstProject_FuseScaling_float_Factor_Property__OnSet_fn(MyFirstProject_FuseScaling_float_Factor_Property* __this, float* v, uObject* origin);

struct MyFirstProject_FuseScaling_float_Factor_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Scaling*> _obj;

    void ctor_1(::g::Fuse::Scaling* obj);
    static MyFirstProject_FuseScaling_float_Factor_Property* New1(::g::Fuse::Scaling* obj);
};
// }

} // ::g
