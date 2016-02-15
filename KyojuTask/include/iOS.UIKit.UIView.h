// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.UIResponder.h>
#include <ObjC.Object.h>
#include <objc/objc.h>
namespace g{namespace iOS{namespace CoreGraphics{struct CGRect;}}}
namespace g{namespace iOS{namespace CoreGraphics{struct CGSize;}}}
namespace g{namespace iOS{namespace QuartzCore{struct CALayer;}}}
namespace g{namespace iOS{namespace UIKit{struct UIColor;}}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}

namespace g{
namespace iOS{
namespace UIKit{

// public extern class UIView :86638
// {
struct UIView_type : ::g::iOS::Foundation::NSObject_type
{
    void(*fp_isUserInteractionEnabled)(::g::iOS::UIKit::UIView*, bool*);
    void(*fp_setFrame)(::g::iOS::UIKit::UIView*, ::g::iOS::CoreGraphics::CGRect*);
    void(*fp_setTintColor)(::g::iOS::UIKit::UIView*, ::g::iOS::UIKit::UIColor*);
    void(*fp_setUserInteractionEnabled)(::g::iOS::UIKit::UIView*, bool*);
    void(*fp_tintColor)(::g::iOS::UIKit::UIView*, ::g::iOS::UIKit::UIColor**);
};

UIView_type* UIView_typeof();
void UIView__ctor_6_fn(UIView* __this);
void UIView__ctor_7_fn(UIView* __this, ::id* __id1);
void UIView__addSubview_fn(UIView* __this, UIView* view_);
void UIView__alpha_fn(UIView* __this, double* __retval);
void UIView__get_Alpha_fn(UIView* __this, double* __retval);
void UIView__set_Alpha_fn(UIView* __this, double* value);
void UIView__autoresizesSubviews_fn(UIView* __this, bool* __retval);
void UIView__get_AutoresizesSubviews_fn(UIView* __this, bool* __retval);
void UIView__set_AutoresizesSubviews_fn(UIView* __this, bool* value);
void UIView__backgroundColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor** __retval);
void UIView__get_BackgroundColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor** __retval);
void UIView__set_BackgroundColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor* value);
void UIView__bringSubviewToFront_fn(UIView* __this, UIView* view_);
void UIView__clipsToBounds_fn(UIView* __this, bool* __retval);
void UIView__get_ClipsToBounds_fn(UIView* __this, bool* __retval);
void UIView__set_ClipsToBounds_fn(UIView* __this, bool* value);
void UIView__get_ExclusiveTouch_fn(UIView* __this, bool* __retval);
void UIView__set_ExclusiveTouch_fn(UIView* __this, bool* value);
void UIView__frame_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* __retval);
void UIView__get_Frame_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* __retval);
void UIView__set_Frame_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* value);
void UIView__get_Hidden_fn(UIView* __this, bool* __retval);
void UIView__set_Hidden_fn(UIView* __this, bool* value);
void UIView__isExclusiveTouch_fn(UIView* __this, bool* __retval);
void UIView__isHidden_fn(UIView* __this, bool* __retval);
void UIView__isMultipleTouchEnabled_fn(UIView* __this, bool* __retval);
void UIView__isOpaque_fn(UIView* __this, bool* __retval);
void UIView__isUserInteractionEnabled_fn(UIView* __this, bool* __retval);
void UIView__layer_fn(UIView* __this, ::g::iOS::QuartzCore::CALayer** __retval);
void UIView__get_Layer_fn(UIView* __this, ::g::iOS::QuartzCore::CALayer** __retval);
void UIView__get_MultipleTouchEnabled_fn(UIView* __this, bool* __retval);
void UIView__set_MultipleTouchEnabled_fn(UIView* __this, bool* value);
void UIView__New7_fn(UIView** __retval);
void UIView__get_Opaque_fn(UIView* __this, bool* __retval);
void UIView__set_Opaque_fn(UIView* __this, bool* value);
void UIView__removeFromSuperview_fn(UIView* __this);
void UIView__setAlpha_fn(UIView* __this, double* alpha_);
void UIView__setAutoresizesSubviews_fn(UIView* __this, bool* autoresizesSubviews_);
void UIView__setBackgroundColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor* backgroundColor_);
void UIView__setClipsToBounds_fn(UIView* __this, bool* clipsToBounds_);
void UIView__setExclusiveTouch_fn(UIView* __this, bool* exclusiveTouch_);
void UIView__setFrame_fn(UIView* __this, ::g::iOS::CoreGraphics::CGRect* frame_);
void UIView__setHidden_fn(UIView* __this, bool* hidden_);
void UIView__setMultipleTouchEnabled_fn(UIView* __this, bool* multipleTouchEnabled_);
void UIView__setNeedsDisplay_fn(UIView* __this);
void UIView__setOpaque_fn(UIView* __this, bool* opaque_);
void UIView__setTintColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor* tintColor_);
void UIView__setTranslatesAutoresizingMaskIntoConstraints_fn(UIView* __this, bool* flag_);
void UIView__setUserInteractionEnabled_fn(UIView* __this, bool* userInteractionEnabled_);
void UIView__sizeThatFits_fn(UIView* __this, ::g::iOS::CoreGraphics::CGSize* size_, ::g::iOS::CoreGraphics::CGSize* __retval);
void UIView__sizeToFit_fn(UIView* __this);
void UIView__tintColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor** __retval);
void UIView__get_TintColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor** __retval);
void UIView__set_TintColor_fn(UIView* __this, ::g::iOS::UIKit::UIColor* value);
void UIView__get_UserInteractionEnabled_fn(UIView* __this, bool* __retval);
void UIView__set_UserInteractionEnabled_fn(UIView* __this, bool* value);

struct UIView : ::g::iOS::UIKit::UIResponder
{
    void ctor_6();
    void ctor_7(::id __id1);
    void addSubview(UIView* view_);
    double alpha();
    double Alpha();
    void Alpha(double value);
    bool autoresizesSubviews();
    bool AutoresizesSubviews();
    void AutoresizesSubviews(bool value);
    ::g::iOS::UIKit::UIColor* backgroundColor();
    ::g::iOS::UIKit::UIColor* BackgroundColor();
    void BackgroundColor(::g::iOS::UIKit::UIColor* value);
    void bringSubviewToFront(UIView* view_);
    bool clipsToBounds();
    bool ClipsToBounds();
    void ClipsToBounds(bool value);
    bool ExclusiveTouch();
    void ExclusiveTouch(bool value);
    ::g::iOS::CoreGraphics::CGRect frame();
    ::g::iOS::CoreGraphics::CGRect Frame();
    void Frame(::g::iOS::CoreGraphics::CGRect value);
    bool Hidden();
    void Hidden(bool value);
    bool isExclusiveTouch();
    bool isHidden();
    bool isMultipleTouchEnabled();
    bool isOpaque();
    bool isUserInteractionEnabled() { bool __retval; return (((UIView_type*)__type)->fp_isUserInteractionEnabled)(this, &__retval), __retval; }
    ::g::iOS::QuartzCore::CALayer* layer();
    ::g::iOS::QuartzCore::CALayer* Layer();
    bool MultipleTouchEnabled();
    void MultipleTouchEnabled(bool value);
    bool Opaque();
    void Opaque(bool value);
    void removeFromSuperview();
    void setAlpha(double alpha_);
    void setAutoresizesSubviews(bool autoresizesSubviews_);
    void setBackgroundColor(::g::iOS::UIKit::UIColor* backgroundColor_);
    void setClipsToBounds(bool clipsToBounds_);
    void setExclusiveTouch(bool exclusiveTouch_);
    void setFrame(::g::iOS::CoreGraphics::CGRect frame_);
    void setHidden(bool hidden_);
    void setMultipleTouchEnabled(bool multipleTouchEnabled_);
    void setNeedsDisplay();
    void setOpaque(bool opaque_);
    void setTintColor(::g::iOS::UIKit::UIColor* tintColor_) { (((UIView_type*)__type)->fp_setTintColor)(this, tintColor_); }
    void setTranslatesAutoresizingMaskIntoConstraints(bool flag_);
    void setUserInteractionEnabled(bool userInteractionEnabled_) { (((UIView_type*)__type)->fp_setUserInteractionEnabled)(this, &userInteractionEnabled_); }
    ::g::iOS::CoreGraphics::CGSize sizeThatFits(::g::iOS::CoreGraphics::CGSize size_);
    void sizeToFit();
    ::g::iOS::UIKit::UIColor* tintColor() { ::g::iOS::UIKit::UIColor* __retval; return (((UIView_type*)__type)->fp_tintColor)(this, &__retval), __retval; }
    ::g::iOS::UIKit::UIColor* TintColor();
    void TintColor(::g::iOS::UIKit::UIColor* value);
    bool UserInteractionEnabled();
    void UserInteractionEnabled(bool value);
    static bool isUserInteractionEnabled(UIView* __this) { bool __retval; return UIView__isUserInteractionEnabled_fn(__this, &__retval), __retval; }
    static UIView* New7();
    static void setFrame(UIView* __this, ::g::iOS::CoreGraphics::CGRect frame_);
    static void setTintColor(UIView* __this, ::g::iOS::UIKit::UIColor* tintColor_) { UIView__setTintColor_fn(__this, tintColor_); }
    static void setUserInteractionEnabled(UIView* __this, bool userInteractionEnabled_) { UIView__setUserInteractionEnabled_fn(__this, &userInteractionEnabled_); }
    static ::g::iOS::UIKit::UIColor* tintColor(UIView* __this) { ::g::iOS::UIKit::UIColor* __retval; return UIView__tintColor_fn(__this, &__retval), __retval; }
};

}}} // ::g::iOS::UIKit

#include <iOS.CoreGraphics.CGRect.h>
#include <iOS.CoreGraphics.CGSize.h>

namespace g{
namespace iOS{
namespace UIKit{

inline void UIView::setFrame(::g::iOS::CoreGraphics::CGRect frame_) { (((UIView_type*)__type)->fp_setFrame)(this, &frame_); }
inline void UIView::setFrame(UIView* __this, ::g::iOS::CoreGraphics::CGRect frame_) { UIView__setFrame_fn(__this, &frame_); }
// }

}}} // ::g::iOS::UIKit
