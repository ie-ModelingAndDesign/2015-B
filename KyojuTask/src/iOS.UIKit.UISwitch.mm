// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UISwitch
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UISwitch*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UISwitch_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.UIColor.h>
#include <iOS.UIKit.UISwitch.h>
#include <Uno.Bool.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UISwitch :82602
// {
::g::iOS::UIKit::UIView_type* UISwitch_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UISwitch);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIView_type);
    type = (::g::iOS::UIKit::UIView_type*)uClassType::New("iOS.UIKit.UISwitch", options);
    type->SetBase(::g::iOS::UIKit::UIControl_typeof());
    type->fp_ctor_ = (void*)UISwitch__New11_fn;
    type->fp_setTintColor = (void(*)(::g::iOS::UIKit::UIView*, ::g::iOS::UIKit::UIColor*))UISwitch__setTintColor_fn;
    type->fp_tintColor = (void(*)(::g::iOS::UIKit::UIView*, ::g::iOS::UIKit::UIColor**))UISwitch__tintColor_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface0));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public UISwitch() :82605
void UISwitch__ctor_10_fn(UISwitch* __this)
{
    __this->ctor_10();
}

// public extern bool isOn() :82679
void UISwitch__isOn_fn(UISwitch* __this, bool* __retval)
{
    *__retval = __this->isOn();
}

// public UISwitch New() :82605
void UISwitch__New11_fn(UISwitch** __retval)
{
    *__retval = UISwitch::New11();
}

// public bool get_On() :82638
void UISwitch__get_On_fn(UISwitch* __this, bool* __retval)
{
    *__retval = __this->On();
}

// public void set_On(bool value) :82639
void UISwitch__set_On_fn(UISwitch* __this, bool* value)
{
    __this->On(*value);
}

// public extern void setOn(bool on) :82682
void UISwitch__setOn_fn(UISwitch* __this, bool* on_)
{
    __this->setOn(*on_);
}

// public override sealed extern void setTintColor(iOS.UIKit.UIColor tintColor) :82658
void UISwitch__setTintColor_fn(UISwitch* __this, ::g::iOS::UIKit::UIColor* tintColor_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(setTintColor:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)tintColor_));
}

// public override sealed extern iOS.UIKit.UIColor tintColor() :82655
void UISwitch__tintColor_fn(UISwitch* __this, ::g::iOS::UIKit::UIColor** __retval)
{
    ::UIColor* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(__this, ::UIColor*, @selector(tintColor));
    return *__retval = (::g::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIColor_typeof()), void();
}

// public UISwitch() [instance] :82605
void UISwitch::ctor_10()
{
    ctor_8();
}

// public extern bool isOn() [instance] :82679
bool UISwitch::isOn()
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isOn));
    return (bool)__return;
}

// public bool get_On() [instance] :82638
bool UISwitch::On()
{
    return isOn();
}

// public void set_On(bool value) [instance] :82639
void UISwitch::On(bool value)
{
    setOn(value);
}

// public extern void setOn(bool on) [instance] :82682
void UISwitch::setOn(bool on_)
{
    bool on__ = on_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setOn:),
        (BOOL)on__);
}

// public UISwitch New() [static] :82605
UISwitch* UISwitch::New11()
{
    UISwitch* obj1 = (UISwitch*)uNew(UISwitch_typeof());
    obj1->ctor_10();
    return obj1;
}
// }

}}} // ::g::iOS::UIKit
