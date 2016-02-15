// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.UIView.h>
#include <ObjC.Object.h>
#include <objc/objc.h>
#include <uObjC.h>
namespace g{namespace iOS{namespace UIKit{struct UIControl;}}}

namespace g{
namespace iOS{
namespace UIKit{

// public extern class UIControl :73751
// {
::g::iOS::UIKit::UIView_type* UIControl_typeof();
void UIControl__ctor_8_fn(UIControl* __this);
void UIControl__ctor_9_fn(UIControl* __this, ::id* __id1);
void UIControl__addTargetActionForControlEvents_fn(UIControl* __this, ::id* target_, uObjC::Selector* action_, uint32_t* controlEvents_);
void UIControl__New9_fn(UIControl** __retval);
void UIControl__removeTargetActionForControlEvents_fn(UIControl* __this, ::id* target_, uObjC::Selector* action_, uint32_t* controlEvents_);

struct UIControl : ::g::iOS::UIKit::UIView
{
    void ctor_8();
    void ctor_9(::id __id1);
    void addTargetActionForControlEvents(::id target_, uObjC::Selector action_, uint32_t controlEvents_);
    void removeTargetActionForControlEvents(::id target_, uObjC::Selector action_, uint32_t controlEvents_);
    static UIControl* New9();
};
// }

}}} // ::g::iOS::UIKit
