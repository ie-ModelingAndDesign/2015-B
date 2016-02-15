// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIColor
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIColor*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIColor_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.CoreGraphics.CGColorRef.h>
#include <iOS.UIKit.UIColor.h>
#include <Uno.Double.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UIColor :73587
// {
UIColor_type* UIColor_typeof()
{
    static uSStrong<UIColor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UIColor);
    options.TypeSize = sizeof(UIColor_type);
    type = (UIColor_type*)uClassType::New("iOS.UIKit.UIColor", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_ctor_ = (void*)UIColor__New5_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(UIColor_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(UIColor_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public UIColor() :73590
void UIColor__ctor_4_fn(UIColor* __this)
{
    __this->ctor_4();
}

// public static extern iOS.UIKit.UIColor _clearColor() :73686
void UIColor___clearColor_fn(UIColor** __retval)
{
    *__retval = UIColor::_clearColor();
}

// public static extern iOS.UIKit.UIColor _lightGrayColor() :73650
void UIColor___lightGrayColor_fn(UIColor** __retval)
{
    *__retval = UIColor::_lightGrayColor();
}

// public extern iOS.CoreGraphics.CGColorRef cgColor() :73701
void UIColor__cgColor_fn(UIColor* __this, app::CGColorRef** __retval)
{
    *__retval = __this->cgColor();
}

// public iOS.CoreGraphics.CGColorRef get_CGColor() :73599
void UIColor__get_CGColor_fn(UIColor* __this, app::CGColorRef** __retval)
{
    *__retval = __this->CGColor();
}

// public extern void initWithRedGreenBlueAlpha(double red, double green, double blue, double alpha) :73632
void UIColor__initWithRedGreenBlueAlpha_fn(UIColor* __this, double* red_, double* green_, double* blue_, double* alpha_)
{
    __this->initWithRedGreenBlueAlpha(*red_, *green_, *blue_, *alpha_);
}

// public UIColor New() :73590
void UIColor__New5_fn(UIColor** __retval)
{
    *__retval = UIColor::New5();
}

// public UIColor() [instance] :73590
void UIColor::ctor_4()
{
    ctor_2();
}

// public extern iOS.CoreGraphics.CGColorRef cgColor() [instance] :73701
app::CGColorRef* UIColor::cgColor()
{
    ::CGColorRef __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGColorRef, @selector(CGColor));
    return (app::CGColorRef*)(size_t) __return;
}

// public iOS.CoreGraphics.CGColorRef get_CGColor() [instance] :73599
app::CGColorRef* UIColor::CGColor()
{
    return cgColor();
}

// public extern void initWithRedGreenBlueAlpha(double red, double green, double blue, double alpha) [instance] :73632
void UIColor::initWithRedGreenBlueAlpha(double red_, double green_, double blue_, double alpha_)
{
    double red__ = red_;
    double green__ = green_;
    double blue__ = blue_;
    double alpha__ = alpha_;
    uObjC_DO_INIT(this, @selector(initWithRed:green:blue:alpha:),
        (CGFloat)red__,
        (CGFloat)green__,
        (CGFloat)blue__,
        (CGFloat)alpha__);
}

// public static extern iOS.UIKit.UIColor _clearColor() [static] :73686
UIColor* UIColor::_clearColor()
{
    ::UIColor* __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::UIColor*, @selector(clearColor));
    return (UIColor*)uObjC::Lifetime::GetUnoObject(__return, UIColor_typeof());
}

// public static extern iOS.UIKit.UIColor _lightGrayColor() [static] :73650
UIColor* UIColor::_lightGrayColor()
{
    ::UIColor* __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::UIColor*, @selector(lightGrayColor));
    return (UIColor*)uObjC::Lifetime::GetUnoObject(__return, UIColor_typeof());
}

// public UIColor New() [static] :73590
UIColor* UIColor::New5()
{
    UIColor* obj1 = (UIColor*)uNew(UIColor_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

}}} // ::g::iOS::UIKit
