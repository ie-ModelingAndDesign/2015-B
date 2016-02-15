// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIView
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIView*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIView_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.QuartzCore.CALayer.h>
#include <iOS.UIKit.UIColor.h>
#include <iOS.UIKit.UIView.h>
#include <ObjC.ID.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>

namespace g{
namespace iOS{
namespace UIKit{

// public extern class UIView :86638
// {
UIView_type* UIView_typeof()
{
    static uSStrong<UIView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UIView);
    options.TypeSize = sizeof(UIView_type);
    type = (UIView_type*)uClassType::New("iOS.UIKit.UIView", options);
    type->SetBase(::g::iOS::UIKit::UIResponder_typeof());
    type->fp_ctor_ = (void*)UIView__New7_fn;
    type->fp_isUserInteractionEnabled = UIView__isUserInteractionEnabled_fn;
    type->fp_setFrame = UIView__setFrame_fn;
    type->fp_setTintColor = UIView__setTintColor_fn;
    type->fp_setUserInteractionEnabled = UIView__setUserInteractionEnabled_fn;
    type->fp_tintColor = UIView__tintColor_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(UIView_type, interface0));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public UIView() :86641
void UIView__ctor_6_fn(UIView* __this)
{
    __this->ctor_6();
}

// public UIView(ObjC.ID __id) :86643
void UIView__ctor_7_fn(UIView* __this, ::id* __id1)
{
    __this->ctor_7(*__id1);
}

// public extern void addSubview(iOS.UIKit.UIView view) :87127
void UIView__addSubview_fn(UIView* __this, UIView* view_)
{
    __this->addSubview(view_);
}

// public extern double alpha() :87064
void UIView__alpha_fn(UIView* __this, double* __retval)
{
    *__retval = __this->alpha();
}

// public double get_Alpha() :86697
void UIView__get_Alpha_fn(UIView* __this, double* __retval)
{
    *__retval = __this->Alpha();
}

// public void set_Alpha(double value) :86698
void UIView__set_Alpha_fn(UIView* __this, double* value)
{
    __this->Alpha(*value);
}

// public extern bool autoresizesSubviews() :87265
void UIView__autoresizesSubviews_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->autoresizesSubviews();
}

// public bool get_AutoresizesSubviews() :86820
void UIView__get_AutoresizesSubviews_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->AutoresizesSubviews();
}

// public void set_AutoresizesSubviews(bool value) :86821
void UIView__set_AutoresizesSubviews_fn(UIView* __this, bool* value)
{
    __this->AutoresizesSubviews(*value);
}

// public extern iOS.UIKit.UIColor backgroundColor() :87058
void UIView__backgroundColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor** __retval)
{
    *__retval = __this->backgroundColor();
}

// public iOS.UIKit.UIColor get_BackgroundColor() :86691
void UIView__get_BackgroundColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor** __retval)
{
    *__retval = __this->BackgroundColor();
}

// public void set_BackgroundColor(iOS.UIKit.UIColor value) :86692
void UIView__set_BackgroundColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor* value)
{
    __this->BackgroundColor(value);
}

// public extern void bringSubviewToFront(iOS.UIKit.UIView view) :87136
void UIView__bringSubviewToFront_fn(UIView* __this, UIView* view_)
{
    __this->bringSubviewToFront(view_);
}

// public extern bool clipsToBounds() :87052
void UIView__clipsToBounds_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->clipsToBounds();
}

// public bool get_ClipsToBounds() :86685
void UIView__get_ClipsToBounds_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->ClipsToBounds();
}

// public void set_ClipsToBounds(bool value) :86686
void UIView__set_ClipsToBounds_fn(UIView* __this, bool* value)
{
    __this->ClipsToBounds(*value);
}

// public bool get_ExclusiveTouch() :86814
void UIView__get_ExclusiveTouch_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->ExclusiveTouch();
}

// public void set_ExclusiveTouch(bool value) :86815
void UIView__set_ExclusiveTouch_fn(UIView* __this, bool* value)
{
    __this->ExclusiveTouch(*value);
}

// public extern iOS.CoreGraphics.CGRect frame() :87223
void UIView__frame_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->frame();
}

// public iOS.CoreGraphics.CGRect get_Frame() :86778
void UIView__get_Frame_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    *__retval = __this->Frame();
}

// public void set_Frame(iOS.CoreGraphics.CGRect value) :86779
void UIView__set_Frame_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* value)
{
    __this->Frame(*value);
}

// public bool get_Hidden() :86715
void UIView__get_Hidden_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->Hidden();
}

// public void set_Hidden(bool value) :86716
void UIView__set_Hidden_fn(UIView* __this, bool* value)
{
    __this->Hidden(*value);
}

// public extern bool isExclusiveTouch() :87259
void UIView__isExclusiveTouch_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->isExclusiveTouch();
}

// public extern bool isHidden() :87082
void UIView__isHidden_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->isHidden();
}

// public extern bool isMultipleTouchEnabled() :87253
void UIView__isMultipleTouchEnabled_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->isMultipleTouchEnabled();
}

// public extern bool isOpaque() :87070
void UIView__isOpaque_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->isOpaque();
}

// public virtual extern bool isUserInteractionEnabled() :86842
void UIView__isUserInteractionEnabled_fn(UIView* __this, bool* __retval)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(__this, BOOL, @selector(isUserInteractionEnabled));
    return *__retval = (bool)__return, void();
}

// public extern iOS.QuartzCore.CALayer layer() :86854
void UIView__layer_fn(UIView* __this, ::g::iOS::QuartzCore::CALayer** __retval)
{
    *__retval = __this->layer();
}

// public iOS.QuartzCore.CALayer get_Layer() :86662
void UIView__get_Layer_fn(UIView* __this, ::g::iOS::QuartzCore::CALayer** __retval)
{
    *__retval = __this->Layer();
}

// public bool get_MultipleTouchEnabled() :86808
void UIView__get_MultipleTouchEnabled_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->MultipleTouchEnabled();
}

// public void set_MultipleTouchEnabled(bool value) :86809
void UIView__set_MultipleTouchEnabled_fn(UIView* __this, bool* value)
{
    __this->MultipleTouchEnabled(*value);
}

// public UIView New() :86641
void UIView__New7_fn(UIView** __retval)
{
    *__retval = UIView::New7();
}

// public bool get_Opaque() :86703
void UIView__get_Opaque_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->Opaque();
}

// public void set_Opaque(bool value) :86704
void UIView__set_Opaque_fn(UIView* __this, bool* value)
{
    __this->Opaque(*value);
}

// public extern void removeFromSuperview() :87118
void UIView__removeFromSuperview_fn(UIView* __this)
{
    __this->removeFromSuperview();
}

// public extern void setAlpha(double alpha) :87067
void UIView__setAlpha_fn(UIView* __this, double* alpha_)
{
    __this->setAlpha(*alpha_);
}

// public extern void setAutoresizesSubviews(bool autoresizesSubviews) :87268
void UIView__setAutoresizesSubviews_fn(UIView* __this, bool* autoresizesSubviews_)
{
    __this->setAutoresizesSubviews(*autoresizesSubviews_);
}

// public extern void setBackgroundColor(iOS.UIKit.UIColor backgroundColor) :87061
void UIView__setBackgroundColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor* backgroundColor_)
{
    __this->setBackgroundColor(backgroundColor_);
}

// public extern void setClipsToBounds(bool clipsToBounds) :87055
void UIView__setClipsToBounds_fn(UIView* __this, bool* clipsToBounds_)
{
    __this->setClipsToBounds(*clipsToBounds_);
}

// public extern void setExclusiveTouch(bool exclusiveTouch) :87262
void UIView__setExclusiveTouch_fn(UIView* __this, bool* exclusiveTouch_)
{
    __this->setExclusiveTouch(*exclusiveTouch_);
}

// public virtual extern void setFrame(iOS.CoreGraphics.CGRect frame) :87226
void UIView__setFrame_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* frame_)
{
    ::g::iOS::CoreGraphics::CGRect frame__ = *frame_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(setFrame:),
        uObjC::Struct::FromUno_CGRect(frame__, ::CGRect()));
}

// public extern void setHidden(bool hidden) :87085
void UIView__setHidden_fn(UIView* __this, bool* hidden_)
{
    __this->setHidden(*hidden_);
}

// public extern void setMultipleTouchEnabled(bool multipleTouchEnabled) :87256
void UIView__setMultipleTouchEnabled_fn(UIView* __this, bool* multipleTouchEnabled_)
{
    __this->setMultipleTouchEnabled(*multipleTouchEnabled_);
}

// public extern void setNeedsDisplay() :87043
void UIView__setNeedsDisplay_fn(UIView* __this)
{
    __this->setNeedsDisplay();
}

// public extern void setOpaque(bool opaque) :87073
void UIView__setOpaque_fn(UIView* __this, bool* opaque_)
{
    __this->setOpaque(*opaque_);
}

// public virtual extern void setTintColor(iOS.UIKit.UIColor tintColor) :87109
void UIView__setTintColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor* tintColor_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(setTintColor:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)tintColor_));
}

// public extern void setTranslatesAutoresizingMaskIntoConstraints(bool flag) :86935
void UIView__setTranslatesAutoresizingMaskIntoConstraints_fn(UIView* __this, bool* flag_)
{
    __this->setTranslatesAutoresizingMaskIntoConstraints(*flag_);
}

// public virtual extern void setUserInteractionEnabled(bool userInteractionEnabled) :86845
void UIView__setUserInteractionEnabled_fn(UIView* __this, bool* userInteractionEnabled_)
{
    bool userInteractionEnabled__ = *userInteractionEnabled_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(setUserInteractionEnabled:),
        (BOOL)userInteractionEnabled__);
}

// public extern iOS.CoreGraphics.CGSize sizeThatFits(iOS.CoreGraphics.CGSize size) :87217
void UIView__sizeThatFits_fn(UIView* __this, ::g::iOS::CoreGraphics::CGSize* size_, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->sizeThatFits(*size_);
}

// public extern void sizeToFit() :87220
void UIView__sizeToFit_fn(UIView* __this)
{
    __this->sizeToFit();
}

// public virtual extern iOS.UIKit.UIColor tintColor() :87106
void UIView__tintColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor** __retval)
{
    ::UIColor* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(__this, ::UIColor*, @selector(tintColor));
    return *__retval = (::g::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIColor_typeof()), void();
}

// public iOS.UIKit.UIColor get_TintColor() :86739
void UIView__get_TintColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor** __retval)
{
    *__retval = __this->TintColor();
}

// public void set_TintColor(iOS.UIKit.UIColor value) :86740
void UIView__set_TintColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor* value)
{
    __this->TintColor(value);
}

// public bool get_UserInteractionEnabled() :86650
void UIView__get_UserInteractionEnabled_fn(UIView* __this, bool* __retval)
{
    *__retval = __this->UserInteractionEnabled();
}

// public void set_UserInteractionEnabled(bool value) :86651
void UIView__set_UserInteractionEnabled_fn(UIView* __this, bool* value)
{
    __this->UserInteractionEnabled(*value);
}

// public UIView() [instance] :86641
void UIView::ctor_6()
{
    ctor_4();
}

// public UIView(ObjC.ID __id) [instance] :86643
void UIView::ctor_7(::id __id1)
{
    ctor_5(__id1);
}

// public extern void addSubview(iOS.UIKit.UIView view) [instance] :87127
void UIView::addSubview(UIView* view_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(addSubview:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
}

// public extern double alpha() [instance] :87064
double UIView::alpha()
{
    CGFloat __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, CGFloat, @selector(alpha));
    return (double)__return;
}

// public double get_Alpha() [instance] :86697
double UIView::Alpha()
{
    return alpha();
}

// public void set_Alpha(double value) [instance] :86698
void UIView::Alpha(double value)
{
    setAlpha(value);
}

// public extern bool autoresizesSubviews() [instance] :87265
bool UIView::autoresizesSubviews()
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(autoresizesSubviews));
    return (bool)__return;
}

// public bool get_AutoresizesSubviews() [instance] :86820
bool UIView::AutoresizesSubviews()
{
    return autoresizesSubviews();
}

// public void set_AutoresizesSubviews(bool value) [instance] :86821
void UIView::AutoresizesSubviews(bool value)
{
    setAutoresizesSubviews(value);
}

// public extern iOS.UIKit.UIColor backgroundColor() [instance] :87058
::g::iOS::UIKit::UIColor* UIView::backgroundColor()
{
    ::UIColor* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIColor*, @selector(backgroundColor));
    return (::g::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIColor_typeof());
}

// public iOS.UIKit.UIColor get_BackgroundColor() [instance] :86691
::g::iOS::UIKit::UIColor* UIView::BackgroundColor()
{
    return backgroundColor();
}

// public void set_BackgroundColor(iOS.UIKit.UIColor value) [instance] :86692
void UIView::BackgroundColor(::g::iOS::UIKit::UIColor* value)
{
    setBackgroundColor(value);
}

// public extern void bringSubviewToFront(iOS.UIKit.UIView view) [instance] :87136
void UIView::bringSubviewToFront(UIView* view_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(bringSubviewToFront:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
}

// public extern bool clipsToBounds() [instance] :87052
bool UIView::clipsToBounds()
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(clipsToBounds));
    return (bool)__return;
}

// public bool get_ClipsToBounds() [instance] :86685
bool UIView::ClipsToBounds()
{
    return clipsToBounds();
}

// public void set_ClipsToBounds(bool value) [instance] :86686
void UIView::ClipsToBounds(bool value)
{
    setClipsToBounds(value);
}

// public bool get_ExclusiveTouch() [instance] :86814
bool UIView::ExclusiveTouch()
{
    return isExclusiveTouch();
}

// public void set_ExclusiveTouch(bool value) [instance] :86815
void UIView::ExclusiveTouch(bool value)
{
    setExclusiveTouch(value);
}

// public extern iOS.CoreGraphics.CGRect frame() [instance] :87223
::g::iOS::CoreGraphics::CGRect UIView::frame()
{
    ::CGRect __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGRect, @selector(frame));
    return uObjC::Struct::ToUno_CGRect(__return, ::g::iOS::CoreGraphics::CGRect());
}

// public iOS.CoreGraphics.CGRect get_Frame() [instance] :86778
::g::iOS::CoreGraphics::CGRect UIView::Frame()
{
    return frame();
}

// public void set_Frame(iOS.CoreGraphics.CGRect value) [instance] :86779
void UIView::Frame(::g::iOS::CoreGraphics::CGRect value)
{
    setFrame(value);
}

// public bool get_Hidden() [instance] :86715
bool UIView::Hidden()
{
    return isHidden();
}

// public void set_Hidden(bool value) [instance] :86716
void UIView::Hidden(bool value)
{
    setHidden(value);
}

// public extern bool isExclusiveTouch() [instance] :87259
bool UIView::isExclusiveTouch()
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isExclusiveTouch));
    return (bool)__return;
}

// public extern bool isHidden() [instance] :87082
bool UIView::isHidden()
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isHidden));
    return (bool)__return;
}

// public extern bool isMultipleTouchEnabled() [instance] :87253
bool UIView::isMultipleTouchEnabled()
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isMultipleTouchEnabled));
    return (bool)__return;
}

// public extern bool isOpaque() [instance] :87070
bool UIView::isOpaque()
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isOpaque));
    return (bool)__return;
}

// public extern iOS.QuartzCore.CALayer layer() [instance] :86854
::g::iOS::QuartzCore::CALayer* UIView::layer()
{
    ::CALayer* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CALayer*, @selector(layer));
    return (::g::iOS::QuartzCore::CALayer*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::QuartzCore::CALayer_typeof());
}

// public iOS.QuartzCore.CALayer get_Layer() [instance] :86662
::g::iOS::QuartzCore::CALayer* UIView::Layer()
{
    return layer();
}

// public bool get_MultipleTouchEnabled() [instance] :86808
bool UIView::MultipleTouchEnabled()
{
    return isMultipleTouchEnabled();
}

// public void set_MultipleTouchEnabled(bool value) [instance] :86809
void UIView::MultipleTouchEnabled(bool value)
{
    setMultipleTouchEnabled(value);
}

// public bool get_Opaque() [instance] :86703
bool UIView::Opaque()
{
    return isOpaque();
}

// public void set_Opaque(bool value) [instance] :86704
void UIView::Opaque(bool value)
{
    setOpaque(value);
}

// public extern void removeFromSuperview() [instance] :87118
void UIView::removeFromSuperview()
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(removeFromSuperview));
}

// public extern void setAlpha(double alpha) [instance] :87067
void UIView::setAlpha(double alpha_)
{
    double alpha__ = alpha_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setAlpha:),
        (CGFloat)alpha__);
}

// public extern void setAutoresizesSubviews(bool autoresizesSubviews) [instance] :87268
void UIView::setAutoresizesSubviews(bool autoresizesSubviews_)
{
    bool autoresizesSubviews__ = autoresizesSubviews_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setAutoresizesSubviews:),
        (BOOL)autoresizesSubviews__);
}

// public extern void setBackgroundColor(iOS.UIKit.UIColor backgroundColor) [instance] :87061
void UIView::setBackgroundColor(::g::iOS::UIKit::UIColor* backgroundColor_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setBackgroundColor:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)backgroundColor_));
}

// public extern void setClipsToBounds(bool clipsToBounds) [instance] :87055
void UIView::setClipsToBounds(bool clipsToBounds_)
{
    bool clipsToBounds__ = clipsToBounds_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setClipsToBounds:),
        (BOOL)clipsToBounds__);
}

// public extern void setExclusiveTouch(bool exclusiveTouch) [instance] :87262
void UIView::setExclusiveTouch(bool exclusiveTouch_)
{
    bool exclusiveTouch__ = exclusiveTouch_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setExclusiveTouch:),
        (BOOL)exclusiveTouch__);
}

// public extern void setHidden(bool hidden) [instance] :87085
void UIView::setHidden(bool hidden_)
{
    bool hidden__ = hidden_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setHidden:),
        (BOOL)hidden__);
}

// public extern void setMultipleTouchEnabled(bool multipleTouchEnabled) [instance] :87256
void UIView::setMultipleTouchEnabled(bool multipleTouchEnabled_)
{
    bool multipleTouchEnabled__ = multipleTouchEnabled_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setMultipleTouchEnabled:),
        (BOOL)multipleTouchEnabled__);
}

// public extern void setNeedsDisplay() [instance] :87043
void UIView::setNeedsDisplay()
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setNeedsDisplay));
}

// public extern void setOpaque(bool opaque) [instance] :87073
void UIView::setOpaque(bool opaque_)
{
    bool opaque__ = opaque_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setOpaque:),
        (BOOL)opaque__);
}

// public extern void setTranslatesAutoresizingMaskIntoConstraints(bool flag) [instance] :86935
void UIView::setTranslatesAutoresizingMaskIntoConstraints(bool flag_)
{
    bool flag__ = flag_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setTranslatesAutoresizingMaskIntoConstraints:),
        (BOOL)flag__);
}

// public extern iOS.CoreGraphics.CGSize sizeThatFits(iOS.CoreGraphics.CGSize size) [instance] :87217
::g::iOS::CoreGraphics::CGSize UIView::sizeThatFits(::g::iOS::CoreGraphics::CGSize size_)
{
    ::g::iOS::CoreGraphics::CGSize size__ = size_;
    ::CGSize __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGSize, @selector(sizeThatFits:),
        uObjC::Struct::FromUno_CGSize(size__, ::CGSize()));
    return uObjC::Struct::ToUno_CGSize(__return, ::g::iOS::CoreGraphics::CGSize());
}

// public extern void sizeToFit() [instance] :87220
void UIView::sizeToFit()
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(sizeToFit));
}

// public iOS.UIKit.UIColor get_TintColor() [instance] :86739
::g::iOS::UIKit::UIColor* UIView::TintColor()
{
    return tintColor();
}

// public void set_TintColor(iOS.UIKit.UIColor value) [instance] :86740
void UIView::TintColor(::g::iOS::UIKit::UIColor* value)
{
    setTintColor(value);
}

// public bool get_UserInteractionEnabled() [instance] :86650
bool UIView::UserInteractionEnabled()
{
    return isUserInteractionEnabled();
}

// public void set_UserInteractionEnabled(bool value) [instance] :86651
void UIView::UserInteractionEnabled(bool value)
{
    setUserInteractionEnabled(value);
}

// public UIView New() [static] :86641
UIView* UIView::New7()
{
    UIView* obj1 = (UIView*)uNew(UIView_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

}}} // ::g::iOS::UIKit
