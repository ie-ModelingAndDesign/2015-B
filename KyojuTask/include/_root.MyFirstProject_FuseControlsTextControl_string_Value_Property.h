// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/MyFirstProject.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{struct MyFirstProject_FuseControlsTextControl_string_Value_Property;}

namespace g{

// internal sealed class MyFirstProject_FuseControlsTextControl_string_Value_Property :1
// {
::g::Uno::UX::Property_type* MyFirstProject_FuseControlsTextControl_string_Value_Property_typeof();
void MyFirstProject_FuseControlsTextControl_string_Value_Property__ctor_1_fn(MyFirstProject_FuseControlsTextControl_string_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj);
void MyFirstProject_FuseControlsTextControl_string_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, MyFirstProject_FuseControlsTextControl_string_Value_Property** __retval);
void MyFirstProject_FuseControlsTextControl_string_Value_Property__OnAddListener_fn(MyFirstProject_FuseControlsTextControl_string_Value_Property* __this, uDelegate* listener);
void MyFirstProject_FuseControlsTextControl_string_Value_Property__OnGet_fn(MyFirstProject_FuseControlsTextControl_string_Value_Property* __this, uString** __retval);
void MyFirstProject_FuseControlsTextControl_string_Value_Property__OnRemoveListener_fn(MyFirstProject_FuseControlsTextControl_string_Value_Property* __this, uDelegate* listener);
void MyFirstProject_FuseControlsTextControl_string_Value_Property__OnSet_fn(MyFirstProject_FuseControlsTextControl_string_Value_Property* __this, uString* v, uObject* origin);

struct MyFirstProject_FuseControlsTextControl_string_Value_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Controls::TextControl*> _obj;

    void ctor_1(::g::Fuse::Controls::TextControl* obj);
    static MyFirstProject_FuseControlsTextControl_string_Value_Property* New1(::g::Fuse::Controls::TextControl* obj);
};
// }

} // ::g
