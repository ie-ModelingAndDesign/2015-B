// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UISlider
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UISlider*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UISlider_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.UISlider.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UISlider :81944
// {
::g::iOS::UIKit::UIView_type* UISlider_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UISlider);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIView_type);
    type = (::g::iOS::UIKit::UIView_type*)uClassType::New("iOS.UIKit.UISlider", options);
    type->SetBase(::g::iOS::UIKit::UIControl_typeof());
    type->fp_ctor_ = (void*)UISlider__New11_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface0));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public UISlider() :81947
void UISlider__ctor_10_fn(UISlider* __this)
{
    __this->ctor_10();
}

// public bool get_Continuous() :81986
void UISlider__get_Continuous_fn(UISlider* __this, bool* __retval)
{
    *__retval = __this->Continuous();
}

// public void set_Continuous(bool value) :81987
void UISlider__set_Continuous_fn(UISlider* __this, bool* value1)
{
    __this->Continuous(*value1);
}

// public extern bool isContinuous() :82087
void UISlider__isContinuous_fn(UISlider* __this, bool* __retval)
{
    *__retval = __this->isContinuous();
}

// public extern float maximumValue() :82069
void UISlider__maximumValue_fn(UISlider* __this, float* __retval)
{
    *__retval = __this->maximumValue();
}

// public float get_MaximumValue() :81968
void UISlider__get_MaximumValue_fn(UISlider* __this, float* __retval)
{
    *__retval = __this->MaximumValue();
}

// public void set_MaximumValue(float value) :81969
void UISlider__set_MaximumValue_fn(UISlider* __this, float* value1)
{
    __this->MaximumValue(*value1);
}

// public extern float minimumValue() :82063
void UISlider__minimumValue_fn(UISlider* __this, float* __retval)
{
    *__retval = __this->minimumValue();
}

// public float get_MinimumValue() :81962
void UISlider__get_MinimumValue_fn(UISlider* __this, float* __retval)
{
    *__retval = __this->MinimumValue();
}

// public void set_MinimumValue(float value) :81963
void UISlider__set_MinimumValue_fn(UISlider* __this, float* value1)
{
    __this->MinimumValue(*value1);
}

// public UISlider New() :81947
void UISlider__New11_fn(UISlider** __retval)
{
    *__retval = UISlider::New11();
}

// public extern void setContinuous(bool continuous) :82090
void UISlider__setContinuous_fn(UISlider* __this, bool* continuous_)
{
    __this->setContinuous(*continuous_);
}

// public extern void setMaximumValue(float maximumValue) :82072
void UISlider__setMaximumValue_fn(UISlider* __this, float* maximumValue_)
{
    __this->setMaximumValue(*maximumValue_);
}

// public extern void setMinimumValue(float minimumValue) :82066
void UISlider__setMinimumValue_fn(UISlider* __this, float* minimumValue_)
{
    __this->setMinimumValue(*minimumValue_);
}

// public extern void setValue(float value) :82060
void UISlider__setValue_fn(UISlider* __this, float* value_)
{
    __this->setValue(*value_);
}

// public extern float value() :82057
void UISlider__value_fn(UISlider* __this, float* __retval)
{
    *__retval = __this->value();
}

// public float get_Value() :81956
void UISlider__get_Value_fn(UISlider* __this, float* __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(float value) :81957
void UISlider__set_Value_fn(UISlider* __this, float* value1)
{
    __this->Value(*value1);
}

// public UISlider() [instance] :81947
void UISlider::ctor_10()
{
    ctor_8();
}

// public bool get_Continuous() [instance] :81986
bool UISlider::Continuous()
{
    return isContinuous();
}

// public void set_Continuous(bool value) [instance] :81987
void UISlider::Continuous(bool value1)
{
    setContinuous(value1);
}

// public extern bool isContinuous() [instance] :82087
bool UISlider::isContinuous()
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isContinuous));
    return (bool)__return;
}

// public extern float maximumValue() [instance] :82069
float UISlider::maximumValue()
{
    float __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, float, @selector(maximumValue));
    return __return;
}

// public float get_MaximumValue() [instance] :81968
float UISlider::MaximumValue()
{
    return maximumValue();
}

// public void set_MaximumValue(float value) [instance] :81969
void UISlider::MaximumValue(float value1)
{
    setMaximumValue(value1);
}

// public extern float minimumValue() [instance] :82063
float UISlider::minimumValue()
{
    float __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, float, @selector(minimumValue));
    return __return;
}

// public float get_MinimumValue() [instance] :81962
float UISlider::MinimumValue()
{
    return minimumValue();
}

// public void set_MinimumValue(float value) [instance] :81963
void UISlider::MinimumValue(float value1)
{
    setMinimumValue(value1);
}

// public extern void setContinuous(bool continuous) [instance] :82090
void UISlider::setContinuous(bool continuous_)
{
    bool continuous__ = continuous_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setContinuous:),
        (BOOL)continuous__);
}

// public extern void setMaximumValue(float maximumValue) [instance] :82072
void UISlider::setMaximumValue(float maximumValue_)
{
    float maximumValue__ = maximumValue_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setMaximumValue:),
        maximumValue__);
}

// public extern void setMinimumValue(float minimumValue) [instance] :82066
void UISlider::setMinimumValue(float minimumValue_)
{
    float minimumValue__ = minimumValue_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setMinimumValue:),
        minimumValue__);
}

// public extern void setValue(float value) [instance] :82060
void UISlider::setValue(float value_)
{
    float value__ = value_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setValue:),
        value__);
}

// public extern float value() [instance] :82057
float UISlider::value()
{
    float __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, float, @selector(value));
    return __return;
}

// public float get_Value() [instance] :81956
float UISlider::Value()
{
    return value();
}

// public void set_Value(float value) [instance] :81957
void UISlider::Value(float value1)
{
    setValue(value1);
}

// public UISlider New() [static] :81947
UISlider* UISlider::New11()
{
    UISlider* obj1 = (UISlider*)uNew(UISlider_typeof());
    obj1->ctor_10();
    return obj1;
}
// }

}}} // ::g::iOS::UIKit
