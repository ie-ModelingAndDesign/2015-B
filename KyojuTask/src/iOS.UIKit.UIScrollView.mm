// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIScrollView
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIScrollView*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIScrollView_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.IUIScrollViewDelegate.h>
#include <iOS.UIKit.UIScrollView.h>
#include <Uno.Bool.h>
#include <iOS.CoreGraphics.CGPoint.h>
#include <iOS.CoreGraphics.CGSize.h>

namespace g{
namespace iOS{
namespace UIKit{

// public extern class UIScrollView :80634
// {
::g::iOS::UIKit::UIView_type* UIScrollView_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UIScrollView);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIView_type);
    type = (::g::iOS::UIKit::UIView_type*)uClassType::New("iOS.UIKit.UIScrollView", options);
    type->SetBase(::g::iOS::UIKit::UIView_typeof());
    type->fp_ctor_ = (void*)UIScrollView__New9_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface0));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public UIScrollView() :80637
void UIScrollView__ctor_8_fn(UIScrollView* __this)
{
    __this->ctor_8();
}

// public extern iOS.CoreGraphics.CGPoint contentOffset() :80839
void UIScrollView__contentOffset_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = __this->contentOffset();
}

// public iOS.CoreGraphics.CGPoint get_ContentOffset() :80646
void UIScrollView__get_ContentOffset_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGPoint* __retval)
{
    *__retval = __this->ContentOffset();
}

// public void set_ContentOffset(iOS.CoreGraphics.CGPoint value) :80647
void UIScrollView__set_ContentOffset_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGPoint* value)
{
    __this->ContentOffset(*value);
}

// public extern iOS.CoreGraphics.CGSize contentSize() :80845
void UIScrollView__contentSize_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->contentSize();
}

// public iOS.CoreGraphics.CGSize get_ContentSize() :80652
void UIScrollView__get_ContentSize_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->ContentSize();
}

// public void set_ContentSize(iOS.CoreGraphics.CGSize value) :80653
void UIScrollView__set_ContentSize_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGSize* value)
{
    __this->ContentSize(*value);
}

// public iOS.UIKit.IUIScrollViewDelegate get_Delegate() :80664
void UIScrollView__get_Delegate_fn(UIScrollView* __this, uObject** __retval)
{
    *__retval = __this->Delegate();
}

// public void set_Delegate(iOS.UIKit.IUIScrollViewDelegate value) :80665
void UIScrollView__set_Delegate_fn(UIScrollView* __this, uObject* value)
{
    __this->Delegate(value);
}

// public extern iOS.UIKit.IUIScrollViewDelegate delegate_() :80857
void UIScrollView__delegate__fn(UIScrollView* __this, uObject** __retval)
{
    *__retval = __this->delegate_();
}

// public extern bool isScrollEnabled() :80893
void UIScrollView__isScrollEnabled_fn(UIScrollView* __this, bool* __retval)
{
    *__retval = __this->isScrollEnabled();
}

// public UIScrollView New() :80637
void UIScrollView__New9_fn(UIScrollView** __retval)
{
    *__retval = UIScrollView::New9();
}

// public bool get_ScrollEnabled() :80700
void UIScrollView__get_ScrollEnabled_fn(UIScrollView* __this, bool* __retval)
{
    *__retval = __this->ScrollEnabled();
}

// public void set_ScrollEnabled(bool value) :80701
void UIScrollView__set_ScrollEnabled_fn(UIScrollView* __this, bool* value)
{
    __this->ScrollEnabled(*value);
}

// public extern void setContentOffset(iOS.CoreGraphics.CGPoint contentOffset) :80842
void UIScrollView__setContentOffset_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGPoint* contentOffset_)
{
    __this->setContentOffset(*contentOffset_);
}

// public extern void setContentOffsetAnimated(iOS.CoreGraphics.CGPoint contentOffset, bool animated) :80818
void UIScrollView__setContentOffsetAnimated_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGPoint* contentOffset_, bool* animated_)
{
    __this->setContentOffsetAnimated(*contentOffset_, *animated_);
}

// public extern void setContentSize(iOS.CoreGraphics.CGSize contentSize) :80848
void UIScrollView__setContentSize_fn(UIScrollView* __this, ::g::iOS::CoreGraphics::CGSize* contentSize_)
{
    __this->setContentSize(*contentSize_);
}

// public extern void setDelegate(iOS.UIKit.IUIScrollViewDelegate delegate_) :80860
void UIScrollView__setDelegate_fn(UIScrollView* __this, uObject* delegate__)
{
    __this->setDelegate(delegate__);
}

// public extern void setScrollEnabled(bool scrollEnabled) :80896
void UIScrollView__setScrollEnabled_fn(UIScrollView* __this, bool* scrollEnabled_)
{
    __this->setScrollEnabled(*scrollEnabled_);
}

// public UIScrollView() [instance] :80637
void UIScrollView::ctor_8()
{
    ctor_6();
}

// public extern iOS.CoreGraphics.CGPoint contentOffset() [instance] :80839
::g::iOS::CoreGraphics::CGPoint UIScrollView::contentOffset()
{
    ::CGPoint __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGPoint, @selector(contentOffset));
    return uObjC::Struct::ToUno_CGPoint(__return, ::g::iOS::CoreGraphics::CGPoint());
}

// public iOS.CoreGraphics.CGPoint get_ContentOffset() [instance] :80646
::g::iOS::CoreGraphics::CGPoint UIScrollView::ContentOffset()
{
    return contentOffset();
}

// public void set_ContentOffset(iOS.CoreGraphics.CGPoint value) [instance] :80647
void UIScrollView::ContentOffset(::g::iOS::CoreGraphics::CGPoint value)
{
    setContentOffset(value);
}

// public extern iOS.CoreGraphics.CGSize contentSize() [instance] :80845
::g::iOS::CoreGraphics::CGSize UIScrollView::contentSize()
{
    ::CGSize __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGSize, @selector(contentSize));
    return uObjC::Struct::ToUno_CGSize(__return, ::g::iOS::CoreGraphics::CGSize());
}

// public iOS.CoreGraphics.CGSize get_ContentSize() [instance] :80652
::g::iOS::CoreGraphics::CGSize UIScrollView::ContentSize()
{
    return contentSize();
}

// public void set_ContentSize(iOS.CoreGraphics.CGSize value) [instance] :80653
void UIScrollView::ContentSize(::g::iOS::CoreGraphics::CGSize value)
{
    setContentSize(value);
}

// public iOS.UIKit.IUIScrollViewDelegate get_Delegate() [instance] :80664
uObject* UIScrollView::Delegate()
{
    return delegate_();
}

// public void set_Delegate(iOS.UIKit.IUIScrollViewDelegate value) [instance] :80665
void UIScrollView::Delegate(uObject* value)
{
    setDelegate(value);
}

// public extern iOS.UIKit.IUIScrollViewDelegate delegate_() [instance] :80857
uObject* UIScrollView::delegate_()
{
    id<UIScrollViewDelegate> __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, id<UIScrollViewDelegate>, @selector(delegate));
    return uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::Interop::IUIScrollViewDelegate_typeof());
}

// public extern bool isScrollEnabled() [instance] :80893
bool UIScrollView::isScrollEnabled()
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isScrollEnabled));
    return (bool)__return;
}

// public bool get_ScrollEnabled() [instance] :80700
bool UIScrollView::ScrollEnabled()
{
    return isScrollEnabled();
}

// public void set_ScrollEnabled(bool value) [instance] :80701
void UIScrollView::ScrollEnabled(bool value)
{
    setScrollEnabled(value);
}

// public extern void setContentOffset(iOS.CoreGraphics.CGPoint contentOffset) [instance] :80842
void UIScrollView::setContentOffset(::g::iOS::CoreGraphics::CGPoint contentOffset_)
{
    ::g::iOS::CoreGraphics::CGPoint contentOffset__ = contentOffset_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setContentOffset:),
        uObjC::Struct::FromUno_CGPoint(contentOffset__, ::CGPoint()));
}

// public extern void setContentOffsetAnimated(iOS.CoreGraphics.CGPoint contentOffset, bool animated) [instance] :80818
void UIScrollView::setContentOffsetAnimated(::g::iOS::CoreGraphics::CGPoint contentOffset_, bool animated_)
{
    ::g::iOS::CoreGraphics::CGPoint contentOffset__ = contentOffset_;
    bool animated__ = animated_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setContentOffset:animated:),
        uObjC::Struct::FromUno_CGPoint(contentOffset__, ::CGPoint()),
        (BOOL)animated__);
}

// public extern void setContentSize(iOS.CoreGraphics.CGSize contentSize) [instance] :80848
void UIScrollView::setContentSize(::g::iOS::CoreGraphics::CGSize contentSize_)
{
    ::g::iOS::CoreGraphics::CGSize contentSize__ = contentSize_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setContentSize:),
        uObjC::Struct::FromUno_CGSize(contentSize__, ::CGSize()));
}

// public extern void setDelegate(iOS.UIKit.IUIScrollViewDelegate delegate_) [instance] :80860
void UIScrollView::setDelegate(uObject* delegate__)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setDelegate:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)delegate__, ::g::iOS::UIKit::IUIScrollViewDelegate_typeof()));
}

// public extern void setScrollEnabled(bool scrollEnabled) [instance] :80896
void UIScrollView::setScrollEnabled(bool scrollEnabled_)
{
    bool scrollEnabled__ = scrollEnabled_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setScrollEnabled:),
        (BOOL)scrollEnabled__);
}

// public UIScrollView New() [static] :80637
UIScrollView* UIScrollView::New9()
{
    UIScrollView* obj1 = (UIScrollView*)uNew(UIScrollView_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

}}} // ::g::iOS::UIKit
