// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIImageView
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIImageView*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIImageView_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.UIColor.h>
#include <iOS.UIKit.UIImage.h>
#include <iOS.UIKit.UIImageView.h>
#include <Uno.Bool.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UIImageView :76016
// {
::g::iOS::UIKit::UIView_type* UIImageView_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UIImageView);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIView_type);
    type = (::g::iOS::UIKit::UIView_type*)uClassType::New("iOS.UIKit.UIImageView", options);
    type->SetBase(::g::iOS::UIKit::UIView_typeof());
    type->fp_ctor_ = (void*)UIImageView__New9_fn;
    type->fp_isUserInteractionEnabled = (void(*)(::g::iOS::UIKit::UIView*, bool*))UIImageView__isUserInteractionEnabled_fn;
    type->fp_setTintColor = (void(*)(::g::iOS::UIKit::UIView*, ::g::iOS::UIKit::UIColor*))UIImageView__setTintColor_fn;
    type->fp_setUserInteractionEnabled = (void(*)(::g::iOS::UIKit::UIView*, bool*))UIImageView__setUserInteractionEnabled_fn;
    type->fp_tintColor = (void(*)(::g::iOS::UIKit::UIView*, ::g::iOS::UIKit::UIColor**))UIImageView__tintColor_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface0));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public UIImageView() :76019
void UIImageView__ctor_8_fn(UIImageView* __this)
{
    __this->ctor_8();
}

// public extern iOS.UIKit.UIImage image() :76084
void UIImageView__image_fn(UIImageView* __this, ::g::iOS::UIKit::UIImage** __retval)
{
    *__retval = __this->image();
}

// public iOS.UIKit.UIImage get_Image() :76028
void UIImageView__get_Image_fn(UIImageView* __this, ::g::iOS::UIKit::UIImage** __retval)
{
    *__retval = __this->Image();
}

// public void set_Image(iOS.UIKit.UIImage value) :76029
void UIImageView__set_Image_fn(UIImageView* __this, ::g::iOS::UIKit::UIImage* value)
{
    __this->Image(value);
}

// public override sealed extern bool isUserInteractionEnabled() :76096
void UIImageView__isUserInteractionEnabled_fn(UIImageView* __this, bool* __retval)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(__this, BOOL, @selector(isUserInteractionEnabled));
    return *__retval = (bool)__return, void();
}

// public UIImageView New() :76019
void UIImageView__New9_fn(UIImageView** __retval)
{
    *__retval = UIImageView::New9();
}

// public extern void setImage(iOS.UIKit.UIImage image) :76087
void UIImageView__setImage_fn(UIImageView* __this, ::g::iOS::UIKit::UIImage* image_)
{
    __this->setImage(image_);
}

// public override sealed extern void setTintColor(iOS.UIKit.UIColor tintColor) :76135
void UIImageView__setTintColor_fn(UIImageView* __this, ::g::iOS::UIKit::UIColor* tintColor_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(setTintColor:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)tintColor_));
}

// public override sealed extern void setUserInteractionEnabled(bool userInteractionEnabled) :76099
void UIImageView__setUserInteractionEnabled_fn(UIImageView* __this, bool* userInteractionEnabled_)
{
    bool userInteractionEnabled__ = *userInteractionEnabled_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(setUserInteractionEnabled:),
        (BOOL)userInteractionEnabled__);
}

// public override sealed extern iOS.UIKit.UIColor tintColor() :76132
void UIImageView__tintColor_fn(UIImageView* __this, ::g::iOS::UIKit::UIColor** __retval)
{
    ::UIColor* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(__this, ::UIColor*, @selector(tintColor));
    return *__retval = (::g::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIColor_typeof()), void();
}

// public UIImageView() [instance] :76019
void UIImageView::ctor_8()
{
    ctor_6();
}

// public extern iOS.UIKit.UIImage image() [instance] :76084
::g::iOS::UIKit::UIImage* UIImageView::image()
{
    ::UIImage* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIImage*, @selector(image));
    return (::g::iOS::UIKit::UIImage*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIImage_typeof());
}

// public iOS.UIKit.UIImage get_Image() [instance] :76028
::g::iOS::UIKit::UIImage* UIImageView::Image()
{
    return image();
}

// public void set_Image(iOS.UIKit.UIImage value) [instance] :76029
void UIImageView::Image(::g::iOS::UIKit::UIImage* value)
{
    setImage(value);
}

// public extern void setImage(iOS.UIKit.UIImage image) [instance] :76087
void UIImageView::setImage(::g::iOS::UIKit::UIImage* image_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setImage:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)image_));
}

// public UIImageView New() [static] :76019
UIImageView* UIImageView::New9()
{
    UIImageView* obj1 = (UIImageView*)uNew(UIImageView_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

}}} // ::g::iOS::UIKit
