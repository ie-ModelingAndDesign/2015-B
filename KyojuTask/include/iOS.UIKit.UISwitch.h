// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.UIControl.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace UIKit{struct UIColor;}}}
namespace g{namespace iOS{namespace UIKit{struct UISwitch;}}}

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UISwitch :82602
// {
::g::iOS::UIKit::UIView_type* UISwitch_typeof();
void UISwitch__ctor_10_fn(UISwitch* __this);
void UISwitch__isOn_fn(UISwitch* __this, bool* __retval);
void UISwitch__New11_fn(UISwitch** __retval);
void UISwitch__get_On_fn(UISwitch* __this, bool* __retval);
void UISwitch__set_On_fn(UISwitch* __this, bool* value);
void UISwitch__setOn_fn(UISwitch* __this, bool* on_);
void UISwitch__setTintColor_fn(UISwitch* __this, ::g::iOS::UIKit::UIColor* tintColor_);
void UISwitch__tintColor_fn(UISwitch* __this, ::g::iOS::UIKit::UIColor** __retval);

struct UISwitch : ::g::iOS::UIKit::UIControl
{
    void ctor_10();
    bool isOn();
    bool On();
    void On(bool value);
    void setOn(bool on_);
    static UISwitch* New11();
};
// }

}}} // ::g::iOS::UIKit
