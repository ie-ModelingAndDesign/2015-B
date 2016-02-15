// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UITextViewDelegate
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUITextViewDelegate_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSURL.h>
#include <iOS.UIKit.Interop.IUITextViewDelegate.h>
#include <iOS.UIKit.NSTextAttachment.h>
#include <iOS.UIKit.UIScrollView.h>
#include <iOS.UIKit.UITextView.h>
#include <iOS.UIKit.UIView.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.String.h>
#include <iOS.Foundation._NSRange.h>

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUITextViewDelegate :8466
// {
IUITextViewDelegate_type* IUITextViewDelegate_typeof()
{
    static uSStrong<IUITextViewDelegate_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(IUITextViewDelegate);
    options.TypeSize = sizeof(IUITextViewDelegate_type);
    type = (IUITextViewDelegate_type*)uClassType::New("iOS.UIKit.Interop.IUITextViewDelegate", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->interface1.fp_textViewShouldBeginEditing = (void(*)(uObject*, ::g::iOS::UIKit::UITextView*, bool*))IUITextViewDelegate__textViewShouldBeginEditing_fn;
    type->interface1.fp_textViewShouldEndEditing = (void(*)(uObject*, ::g::iOS::UIKit::UITextView*, bool*))IUITextViewDelegate__textViewShouldEndEditing_fn;
    type->interface1.fp_textViewDidBeginEditing = (void(*)(uObject*, ::g::iOS::UIKit::UITextView*))IUITextViewDelegate__textViewDidBeginEditing_fn;
    type->interface1.fp_textViewDidEndEditing = (void(*)(uObject*, ::g::iOS::UIKit::UITextView*))IUITextViewDelegate__textViewDidEndEditing_fn;
    type->interface1.fp_textViewShouldChangeTextInRangeReplacementText = (void(*)(uObject*, ::g::iOS::UIKit::UITextView*, ::g::iOS::Foundation::_NSRange*, uString*, bool*))IUITextViewDelegate__textViewShouldChangeTextInRangeReplacementText_fn;
    type->interface1.fp_textViewDidChange = (void(*)(uObject*, ::g::iOS::UIKit::UITextView*))IUITextViewDelegate__textViewDidChange_fn;
    type->interface1.fp_textViewDidChangeSelection = (void(*)(uObject*, ::g::iOS::UIKit::UITextView*))IUITextViewDelegate__textViewDidChangeSelection_fn;
    type->interface1.fp_textViewShouldInteractWithURLInRange = (void(*)(uObject*, ::g::iOS::UIKit::UITextView*, ::g::iOS::Foundation::NSURL*, ::g::iOS::Foundation::_NSRange*, bool*))IUITextViewDelegate__textViewShouldInteractWithURLInRange_fn;
    type->interface1.fp_textViewShouldInteractWithTextAttachmentInRange = (void(*)(uObject*, ::g::iOS::UIKit::UITextView*, ::g::iOS::UIKit::NSTextAttachment*, ::g::iOS::Foundation::_NSRange*, bool*))IUITextViewDelegate__textViewShouldInteractWithTextAttachmentInRange_fn;
    type->interface1.fp_scrollViewDidScroll = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewDidScroll_fn;
    type->interface1.fp_scrollViewDidZoom = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewDidZoom_fn;
    type->interface1.fp_scrollViewWillBeginDragging = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewWillBeginDragging_fn;
    type->interface1.fp_scrollViewDidEndDraggingWillDecelerate = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, bool*))IUITextViewDelegate__scrollViewDidEndDraggingWillDecelerate_fn;
    type->interface1.fp_scrollViewWillBeginDecelerating = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewWillBeginDecelerating_fn;
    type->interface1.fp_scrollViewDidEndDecelerating = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewDidEndDecelerating_fn;
    type->interface1.fp_scrollViewDidEndScrollingAnimation = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewDidEndScrollingAnimation_fn;
    type->interface1.fp_viewForZoomingInScrollView = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, ::g::iOS::UIKit::UIView**))IUITextViewDelegate__viewForZoomingInScrollView_fn;
    type->interface1.fp_scrollViewWillBeginZoomingWithView = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, ::g::iOS::UIKit::UIView*))IUITextViewDelegate__scrollViewWillBeginZoomingWithView_fn;
    type->interface1.fp_scrollViewDidEndZoomingWithViewAtScale = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, ::g::iOS::UIKit::UIView*, double*))IUITextViewDelegate__scrollViewDidEndZoomingWithViewAtScale_fn;
    type->interface1.fp_scrollViewShouldScrollToTop = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, bool*))IUITextViewDelegate__scrollViewShouldScrollToTop_fn;
    type->interface1.fp_scrollViewDidScrollToTop = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewDidScrollToTop_fn;
    type->interface2.fp_scrollViewDidScroll = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewDidScroll_fn;
    type->interface2.fp_scrollViewDidZoom = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewDidZoom_fn;
    type->interface2.fp_scrollViewWillBeginDragging = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewWillBeginDragging_fn;
    type->interface2.fp_scrollViewDidEndDraggingWillDecelerate = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, bool*))IUITextViewDelegate__scrollViewDidEndDraggingWillDecelerate_fn;
    type->interface2.fp_scrollViewWillBeginDecelerating = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewWillBeginDecelerating_fn;
    type->interface2.fp_scrollViewDidEndDecelerating = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewDidEndDecelerating_fn;
    type->interface2.fp_scrollViewDidEndScrollingAnimation = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewDidEndScrollingAnimation_fn;
    type->interface2.fp_viewForZoomingInScrollView = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, ::g::iOS::UIKit::UIView**))IUITextViewDelegate__viewForZoomingInScrollView_fn;
    type->interface2.fp_scrollViewWillBeginZoomingWithView = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, ::g::iOS::UIKit::UIView*))IUITextViewDelegate__scrollViewWillBeginZoomingWithView_fn;
    type->interface2.fp_scrollViewDidEndZoomingWithViewAtScale = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, ::g::iOS::UIKit::UIView*, double*))IUITextViewDelegate__scrollViewDidEndZoomingWithViewAtScale_fn;
    type->interface2.fp_scrollViewShouldScrollToTop = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, bool*))IUITextViewDelegate__scrollViewShouldScrollToTop_fn;
    type->interface2.fp_scrollViewDidScrollToTop = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))IUITextViewDelegate__scrollViewDidScrollToTop_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(IUITextViewDelegate_type, interface0),
        ::g::iOS::UIKit::IUITextViewDelegate_typeof(), offsetof(IUITextViewDelegate_type, interface1),
        ::g::iOS::UIKit::IUIScrollViewDelegate_typeof(), offsetof(IUITextViewDelegate_type, interface2));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public extern void scrollViewDidEndDecelerating(iOS.UIKit.UIScrollView scrollView) :8517
void IUITextViewDelegate__scrollViewDidEndDecelerating_fn(IUITextViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_)
{
    __this->scrollViewDidEndDecelerating(scrollView_);
}

// public extern void scrollViewDidEndDraggingWillDecelerate(iOS.UIKit.UIScrollView scrollView, bool decelerate) :8511
void IUITextViewDelegate__scrollViewDidEndDraggingWillDecelerate_fn(IUITextViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_, bool* decelerate_)
{
    __this->scrollViewDidEndDraggingWillDecelerate(scrollView_, *decelerate_);
}

// public extern void scrollViewDidEndScrollingAnimation(iOS.UIKit.UIScrollView scrollView) :8520
void IUITextViewDelegate__scrollViewDidEndScrollingAnimation_fn(IUITextViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_)
{
    __this->scrollViewDidEndScrollingAnimation(scrollView_);
}

// public extern void scrollViewDidEndZoomingWithViewAtScale(iOS.UIKit.UIScrollView scrollView, iOS.UIKit.UIView view, double scale) :8529
void IUITextViewDelegate__scrollViewDidEndZoomingWithViewAtScale_fn(IUITextViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_, ::g::iOS::UIKit::UIView* view_, double* scale_)
{
    __this->scrollViewDidEndZoomingWithViewAtScale(scrollView_, view_, *scale_);
}

// public extern void scrollViewDidScroll(iOS.UIKit.UIScrollView scrollView) :8502
void IUITextViewDelegate__scrollViewDidScroll_fn(IUITextViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_)
{
    __this->scrollViewDidScroll(scrollView_);
}

// public extern void scrollViewDidScrollToTop(iOS.UIKit.UIScrollView scrollView) :8535
void IUITextViewDelegate__scrollViewDidScrollToTop_fn(IUITextViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_)
{
    __this->scrollViewDidScrollToTop(scrollView_);
}

// public extern void scrollViewDidZoom(iOS.UIKit.UIScrollView scrollView) :8505
void IUITextViewDelegate__scrollViewDidZoom_fn(IUITextViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_)
{
    __this->scrollViewDidZoom(scrollView_);
}

// public extern bool scrollViewShouldScrollToTop(iOS.UIKit.UIScrollView scrollView) :8532
void IUITextViewDelegate__scrollViewShouldScrollToTop_fn(IUITextViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_, bool* __retval)
{
    *__retval = __this->scrollViewShouldScrollToTop(scrollView_);
}

// public extern void scrollViewWillBeginDecelerating(iOS.UIKit.UIScrollView scrollView) :8514
void IUITextViewDelegate__scrollViewWillBeginDecelerating_fn(IUITextViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_)
{
    __this->scrollViewWillBeginDecelerating(scrollView_);
}

// public extern void scrollViewWillBeginDragging(iOS.UIKit.UIScrollView scrollView) :8508
void IUITextViewDelegate__scrollViewWillBeginDragging_fn(IUITextViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_)
{
    __this->scrollViewWillBeginDragging(scrollView_);
}

// public extern void scrollViewWillBeginZoomingWithView(iOS.UIKit.UIScrollView scrollView, iOS.UIKit.UIView view) :8526
void IUITextViewDelegate__scrollViewWillBeginZoomingWithView_fn(IUITextViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_, ::g::iOS::UIKit::UIView* view_)
{
    __this->scrollViewWillBeginZoomingWithView(scrollView_, view_);
}

// public extern void textViewDidBeginEditing(iOS.UIKit.UITextView textView) :8481
void IUITextViewDelegate__textViewDidBeginEditing_fn(IUITextViewDelegate* __this, ::g::iOS::UIKit::UITextView* textView_)
{
    __this->textViewDidBeginEditing(textView_);
}

// public extern void textViewDidChange(iOS.UIKit.UITextView textView) :8490
void IUITextViewDelegate__textViewDidChange_fn(IUITextViewDelegate* __this, ::g::iOS::UIKit::UITextView* textView_)
{
    __this->textViewDidChange(textView_);
}

// public extern void textViewDidChangeSelection(iOS.UIKit.UITextView textView) :8493
void IUITextViewDelegate__textViewDidChangeSelection_fn(IUITextViewDelegate* __this, ::g::iOS::UIKit::UITextView* textView_)
{
    __this->textViewDidChangeSelection(textView_);
}

// public extern void textViewDidEndEditing(iOS.UIKit.UITextView textView) :8484
void IUITextViewDelegate__textViewDidEndEditing_fn(IUITextViewDelegate* __this, ::g::iOS::UIKit::UITextView* textView_)
{
    __this->textViewDidEndEditing(textView_);
}

// public extern bool textViewShouldBeginEditing(iOS.UIKit.UITextView textView) :8475
void IUITextViewDelegate__textViewShouldBeginEditing_fn(IUITextViewDelegate* __this, ::g::iOS::UIKit::UITextView* textView_, bool* __retval)
{
    *__retval = __this->textViewShouldBeginEditing(textView_);
}

// public extern bool textViewShouldChangeTextInRangeReplacementText(iOS.UIKit.UITextView textView, iOS.Foundation._NSRange range, string text) :8487
void IUITextViewDelegate__textViewShouldChangeTextInRangeReplacementText_fn(IUITextViewDelegate* __this, ::g::iOS::UIKit::UITextView* textView_, ::g::iOS::Foundation::_NSRange* range_, uString* text_, bool* __retval)
{
    *__retval = __this->textViewShouldChangeTextInRangeReplacementText(textView_, *range_, text_);
}

// public extern bool textViewShouldEndEditing(iOS.UIKit.UITextView textView) :8478
void IUITextViewDelegate__textViewShouldEndEditing_fn(IUITextViewDelegate* __this, ::g::iOS::UIKit::UITextView* textView_, bool* __retval)
{
    *__retval = __this->textViewShouldEndEditing(textView_);
}

// public extern bool textViewShouldInteractWithTextAttachmentInRange(iOS.UIKit.UITextView textView, iOS.UIKit.NSTextAttachment textAttachment, iOS.Foundation._NSRange characterRange) :8499
void IUITextViewDelegate__textViewShouldInteractWithTextAttachmentInRange_fn(IUITextViewDelegate* __this, ::g::iOS::UIKit::UITextView* textView_, ::g::iOS::UIKit::NSTextAttachment* textAttachment_, ::g::iOS::Foundation::_NSRange* characterRange_, bool* __retval)
{
    *__retval = __this->textViewShouldInteractWithTextAttachmentInRange(textView_, textAttachment_, *characterRange_);
}

// public extern bool textViewShouldInteractWithURLInRange(iOS.UIKit.UITextView textView, iOS.Foundation.NSURL URL, iOS.Foundation._NSRange characterRange) :8496
void IUITextViewDelegate__textViewShouldInteractWithURLInRange_fn(IUITextViewDelegate* __this, ::g::iOS::UIKit::UITextView* textView_, ::g::iOS::Foundation::NSURL* URL_, ::g::iOS::Foundation::_NSRange* characterRange_, bool* __retval)
{
    *__retval = __this->textViewShouldInteractWithURLInRange(textView_, URL_, *characterRange_);
}

// public extern iOS.UIKit.UIView viewForZoomingInScrollView(iOS.UIKit.UIScrollView scrollView) :8523
void IUITextViewDelegate__viewForZoomingInScrollView_fn(IUITextViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_, ::g::iOS::UIKit::UIView** __retval)
{
    *__retval = __this->viewForZoomingInScrollView(scrollView_);
}

// public extern void scrollViewDidEndDecelerating(iOS.UIKit.UIScrollView scrollView) [instance] :8517
void IUITextViewDelegate::scrollViewDidEndDecelerating(::g::iOS::UIKit::UIScrollView* scrollView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(scrollViewDidEndDecelerating:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

// public extern void scrollViewDidEndDraggingWillDecelerate(iOS.UIKit.UIScrollView scrollView, bool decelerate) [instance] :8511
void IUITextViewDelegate::scrollViewDidEndDraggingWillDecelerate(::g::iOS::UIKit::UIScrollView* scrollView_, bool decelerate_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(scrollViewDidEndDragging:willDecelerate:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_),
        (BOOL)decelerate_);
}

// public extern void scrollViewDidEndScrollingAnimation(iOS.UIKit.UIScrollView scrollView) [instance] :8520
void IUITextViewDelegate::scrollViewDidEndScrollingAnimation(::g::iOS::UIKit::UIScrollView* scrollView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(scrollViewDidEndScrollingAnimation:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

// public extern void scrollViewDidEndZoomingWithViewAtScale(iOS.UIKit.UIScrollView scrollView, iOS.UIKit.UIView view, double scale) [instance] :8529
void IUITextViewDelegate::scrollViewDidEndZoomingWithViewAtScale(::g::iOS::UIKit::UIScrollView* scrollView_, ::g::iOS::UIKit::UIView* view_, double scale_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(scrollViewDidEndZooming:withView:atScale:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_),
        (CGFloat)scale_);
}

// public extern void scrollViewDidScroll(iOS.UIKit.UIScrollView scrollView) [instance] :8502
void IUITextViewDelegate::scrollViewDidScroll(::g::iOS::UIKit::UIScrollView* scrollView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(scrollViewDidScroll:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

// public extern void scrollViewDidScrollToTop(iOS.UIKit.UIScrollView scrollView) [instance] :8535
void IUITextViewDelegate::scrollViewDidScrollToTop(::g::iOS::UIKit::UIScrollView* scrollView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(scrollViewDidScrollToTop:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

// public extern void scrollViewDidZoom(iOS.UIKit.UIScrollView scrollView) [instance] :8505
void IUITextViewDelegate::scrollViewDidZoom(::g::iOS::UIKit::UIScrollView* scrollView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(scrollViewDidZoom:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

// public extern bool scrollViewShouldScrollToTop(iOS.UIKit.UIScrollView scrollView) [instance] :8532
bool IUITextViewDelegate::scrollViewShouldScrollToTop(::g::iOS::UIKit::UIScrollView* scrollView_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(scrollViewShouldScrollToTop:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
    return (bool)__return;
}

// public extern void scrollViewWillBeginDecelerating(iOS.UIKit.UIScrollView scrollView) [instance] :8514
void IUITextViewDelegate::scrollViewWillBeginDecelerating(::g::iOS::UIKit::UIScrollView* scrollView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(scrollViewWillBeginDecelerating:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

// public extern void scrollViewWillBeginDragging(iOS.UIKit.UIScrollView scrollView) [instance] :8508
void IUITextViewDelegate::scrollViewWillBeginDragging(::g::iOS::UIKit::UIScrollView* scrollView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(scrollViewWillBeginDragging:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

// public extern void scrollViewWillBeginZoomingWithView(iOS.UIKit.UIScrollView scrollView, iOS.UIKit.UIView view) [instance] :8526
void IUITextViewDelegate::scrollViewWillBeginZoomingWithView(::g::iOS::UIKit::UIScrollView* scrollView_, ::g::iOS::UIKit::UIView* view_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(scrollViewWillBeginZooming:withView:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
}

// public extern void textViewDidBeginEditing(iOS.UIKit.UITextView textView) [instance] :8481
void IUITextViewDelegate::textViewDidBeginEditing(::g::iOS::UIKit::UITextView* textView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(textViewDidBeginEditing:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textView_));
}

// public extern void textViewDidChange(iOS.UIKit.UITextView textView) [instance] :8490
void IUITextViewDelegate::textViewDidChange(::g::iOS::UIKit::UITextView* textView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(textViewDidChange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textView_));
}

// public extern void textViewDidChangeSelection(iOS.UIKit.UITextView textView) [instance] :8493
void IUITextViewDelegate::textViewDidChangeSelection(::g::iOS::UIKit::UITextView* textView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(textViewDidChangeSelection:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textView_));
}

// public extern void textViewDidEndEditing(iOS.UIKit.UITextView textView) [instance] :8484
void IUITextViewDelegate::textViewDidEndEditing(::g::iOS::UIKit::UITextView* textView_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(textViewDidEndEditing:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textView_));
}

// public extern bool textViewShouldBeginEditing(iOS.UIKit.UITextView textView) [instance] :8475
bool IUITextViewDelegate::textViewShouldBeginEditing(::g::iOS::UIKit::UITextView* textView_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(textViewShouldBeginEditing:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textView_));
    return (bool)__return;
}

// public extern bool textViewShouldChangeTextInRangeReplacementText(iOS.UIKit.UITextView textView, iOS.Foundation._NSRange range, string text) [instance] :8487
bool IUITextViewDelegate::textViewShouldChangeTextInRangeReplacementText(::g::iOS::UIKit::UITextView* textView_, ::g::iOS::Foundation::_NSRange range_, uString* text_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(textView:shouldChangeTextInRange:replacementText:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textView_),
        uObjC::Struct::FromUno__NSRange(range_, ::_NSRange()),
        uObjC::NativeString(text_));
    return (bool)__return;
}

// public extern bool textViewShouldEndEditing(iOS.UIKit.UITextView textView) [instance] :8478
bool IUITextViewDelegate::textViewShouldEndEditing(::g::iOS::UIKit::UITextView* textView_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(textViewShouldEndEditing:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textView_));
    return (bool)__return;
}

// public extern bool textViewShouldInteractWithTextAttachmentInRange(iOS.UIKit.UITextView textView, iOS.UIKit.NSTextAttachment textAttachment, iOS.Foundation._NSRange characterRange) [instance] :8499
bool IUITextViewDelegate::textViewShouldInteractWithTextAttachmentInRange(::g::iOS::UIKit::UITextView* textView_, ::g::iOS::UIKit::NSTextAttachment* textAttachment_, ::g::iOS::Foundation::_NSRange characterRange_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(textView:shouldInteractWithTextAttachment:inRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textAttachment_),
        uObjC::Struct::FromUno__NSRange(characterRange_, ::_NSRange()));
    return (bool)__return;
}

// public extern bool textViewShouldInteractWithURLInRange(iOS.UIKit.UITextView textView, iOS.Foundation.NSURL URL, iOS.Foundation._NSRange characterRange) [instance] :8496
bool IUITextViewDelegate::textViewShouldInteractWithURLInRange(::g::iOS::UIKit::UITextView* textView_, ::g::iOS::Foundation::NSURL* URL_, ::g::iOS::Foundation::_NSRange characterRange_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(textView:shouldInteractWithURL:inRange:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)URL_),
        uObjC::Struct::FromUno__NSRange(characterRange_, ::_NSRange()));
    return (bool)__return;
}

// public extern iOS.UIKit.UIView viewForZoomingInScrollView(iOS.UIKit.UIScrollView scrollView) [instance] :8523
::g::iOS::UIKit::UIView* IUITextViewDelegate::viewForZoomingInScrollView(::g::iOS::UIKit::UIScrollView* scrollView_)
{
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIView*, @selector(viewForZoomingInScrollView:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
    return (::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIView_typeof());
}
// }

}}}} // ::g::iOS::UIKit::Interop
