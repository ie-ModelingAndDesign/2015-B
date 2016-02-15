// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.NSObject.h>
#include <ObjC.Object.h>
#include <objc/objc.h>
namespace g{namespace iOS{namespace UIKit{struct UIResponder;}}}

namespace g{
namespace iOS{
namespace UIKit{

// public extern class UIResponder :80187
// {
::g::iOS::Foundation::NSObject_type* UIResponder_typeof();
void UIResponder__ctor_4_fn(UIResponder* __this);
void UIResponder__ctor_5_fn(UIResponder* __this, ::id* __id1);
void UIResponder__becomeFirstResponder_fn(UIResponder* __this, bool* __retval);
void UIResponder__isFirstResponder_fn(UIResponder* __this, bool* __retval);
void UIResponder__resignFirstResponder_fn(UIResponder* __this, bool* __retval);

struct UIResponder : ::g::iOS::Foundation::NSObject
{
    void ctor_4();
    void ctor_5(::id __id1);
    bool becomeFirstResponder();
    bool isFirstResponder();
    bool resignFirstResponder();
};
// }

}}} // ::g::iOS::UIKit
