// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/MyFirstProject.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{struct MyFirstProject_FuseReactiveEach_object_Items_Property;}

namespace g{

// internal sealed class MyFirstProject_FuseReactiveEach_object_Items_Property :10
// {
::g::Uno::UX::Property_type* MyFirstProject_FuseReactiveEach_object_Items_Property_typeof();
void MyFirstProject_FuseReactiveEach_object_Items_Property__ctor_1_fn(MyFirstProject_FuseReactiveEach_object_Items_Property* __this, ::g::Fuse::Reactive::Each* obj);
void MyFirstProject_FuseReactiveEach_object_Items_Property__New1_fn(::g::Fuse::Reactive::Each* obj, MyFirstProject_FuseReactiveEach_object_Items_Property** __retval);
void MyFirstProject_FuseReactiveEach_object_Items_Property__OnGet_fn(MyFirstProject_FuseReactiveEach_object_Items_Property* __this, uObject** __retval);
void MyFirstProject_FuseReactiveEach_object_Items_Property__OnSet_fn(MyFirstProject_FuseReactiveEach_object_Items_Property* __this, uObject* v, uObject* origin);

struct MyFirstProject_FuseReactiveEach_object_Items_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Reactive::Each*> _obj;

    void ctor_1(::g::Fuse::Reactive::Each* obj);
    static MyFirstProject_FuseReactiveEach_object_Items_Property* New1(::g::Fuse::Reactive::Each* obj);
};
// }

} // ::g
