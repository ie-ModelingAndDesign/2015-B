// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIButton
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIButton*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIButton_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.UIButton.h>
#include <iOS.UIKit.UIButtonType.h>
#include <iOS.UIKit.UIColor.h>
#include <iOS.UIKit.UIControlState.h>
#include <ObjC.ID.h>
#include <Uno.String.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UIButton :72002
// {
::g::iOS::UIKit::UIView_type* UIButton_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UIButton);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIView_type);
    type = (::g::iOS::UIKit::UIView_type*)uClassType::New("iOS.UIKit.UIButton", options);
    type->SetBase(::g::iOS::UIKit::UIControl_typeof());
    type->fp_setTintColor = (void(*)(::g::iOS::UIKit::UIView*, ::g::iOS::UIKit::UIColor*))UIButton__setTintColor_fn;
    type->fp_tintColor = (void(*)(::g::iOS::UIKit::UIView*, ::g::iOS::UIKit::UIColor**))UIButton__tintColor_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface0));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public UIButton(ObjC.ID __id) :72007
void UIButton__ctor_11_fn(UIButton* __this, ::id* __id1)
{
    __this->ctor_11(*__id1);
}

// public static extern ObjC.ID _buttonWithType(iOS.UIKit.UIButtonType buttonType) :72118
void UIButton___buttonWithType_fn(int* buttonType_, ::id* __retval)
{
    *__retval = UIButton::_buttonWithType(*buttonType_);
}

// public UIButton New(ObjC.ID __id) :72007
void UIButton__New12_fn(::id* __id1, UIButton** __retval)
{
    *__retval = UIButton::New12(*__id1);
}

// public override sealed extern void setTintColor(iOS.UIKit.UIColor tintColor) :72214
void UIButton__setTintColor_fn(UIButton* __this, ::g::iOS::UIKit::UIColor* tintColor_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(setTintColor:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)tintColor_));
}

// public extern void setTitleColorForState(iOS.UIKit.UIColor color, iOS.UIKit.UIControlState state) :72124
void UIButton__setTitleColorForState_fn(UIButton* __this, ::g::iOS::UIKit::UIColor* color_, uint32_t* state_)
{
    __this->setTitleColorForState(color_, *state_);
}

// public extern void setTitleForState(string title, iOS.UIKit.UIControlState state) :72121
void UIButton__setTitleForState_fn(UIButton* __this, uString* title_, uint32_t* state_)
{
    __this->setTitleForState(title_, *state_);
}

// public override sealed extern iOS.UIKit.UIColor tintColor() :72211
void UIButton__tintColor_fn(UIButton* __this, ::g::iOS::UIKit::UIColor** __retval)
{
    ::UIColor* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(__this, ::UIColor*, @selector(tintColor));
    return *__retval = (::g::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIColor_typeof()), void();
}

// public UIButton(ObjC.ID __id) [instance] :72007
void UIButton::ctor_11(::id __id1)
{
    ctor_9(__id1);
}

// public extern void setTitleColorForState(iOS.UIKit.UIColor color, iOS.UIKit.UIControlState state) [instance] :72124
void UIButton::setTitleColorForState(::g::iOS::UIKit::UIColor* color_, uint32_t state_)
{
    uint32_t state__ = state_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setTitleColor:forState:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)color_),
        ::UIControlState(state__));
}

// public extern void setTitleForState(string title, iOS.UIKit.UIControlState state) [instance] :72121
void UIButton::setTitleForState(uString* title_, uint32_t state_)
{
    uint32_t state__ = state_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setTitle:forState:),
        uObjC::NativeString(title_),
        ::UIControlState(state__));
}

// public static extern ObjC.ID _buttonWithType(iOS.UIKit.UIButtonType buttonType) [static] :72118
::id UIButton::_buttonWithType(int buttonType_)
{
    ::id __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::id, @selector(buttonWithType:),
        ::UIButtonType(buttonType_));
    return (::id)__return;
}

// public UIButton New(ObjC.ID __id) [static] :72007
UIButton* UIButton::New12(::id __id1)
{
    UIButton* obj2 = (UIButton*)uNew(UIButton_typeof());
    obj2->ctor_11(__id1);
    return obj2;
}
// }

}}} // ::g::iOS::UIKit
