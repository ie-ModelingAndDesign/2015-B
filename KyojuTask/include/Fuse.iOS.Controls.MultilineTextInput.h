// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.24.6/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.iOS.Controls.ITextInputImpl.h>
#include <iOS.UIKit.IUIScrollViewDelegate.h>
#include <iOS.UIKit.IUITextViewDelegate.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct TextEdit;}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct MultilineTextInput;}}}}
namespace g{namespace iOS{namespace CoreGraphics{struct CGRect;}}}
namespace g{namespace iOS{namespace Foundation{struct _NSRange;}}}
namespace g{namespace iOS{namespace Foundation{struct NSURL;}}}
namespace g{namespace iOS{namespace UIKit{struct NSTextAttachment;}}}
namespace g{namespace iOS{namespace UIKit{struct UIColor;}}}
namespace g{namespace iOS{namespace UIKit{struct UIFont;}}}
namespace g{namespace iOS{namespace UIKit{struct UILabel;}}}
namespace g{namespace iOS{namespace UIKit{struct UIScrollView;}}}
namespace g{namespace iOS{namespace UIKit{struct UITextView;}}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// internal sealed extern class MultilineTextInput :1549
// {
struct MultilineTextInput_type : uType
{
    ::g::Fuse::iOS::Controls::ITextInputImpl interface0;
    ::g::iOS::UIKit::IUITextViewDelegate interface1;
    ::g::iOS::UIKit::IUIScrollViewDelegate interface2;
};

MultilineTextInput_type* MultilineTextInput_typeof();
void MultilineTextInput__ctor__fn(MultilineTextInput* __this);
void MultilineTextInput__FuseiOSControlsITextInputImplset_CaretColor_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIColor* value);
void MultilineTextInput__FuseiOSControlsITextInputImplget_Font_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIFont** __retval);
void MultilineTextInput__FuseiOSControlsITextInputImplset_Font_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIFont* value);
void MultilineTextInput__FuseiOSControlsITextInputImplget_Frame_fn(MultilineTextInput* __this, ::g::iOS::CoreGraphics::CGRect* __retval);
void MultilineTextInput__FuseiOSControlsITextInputImplset_Frame_fn(MultilineTextInput* __this, ::g::iOS::CoreGraphics::CGRect* value);
void MultilineTextInput__FuseiOSControlsITextInputImplget_IUITextInput_fn(MultilineTextInput* __this, uObject** __retval);
void MultilineTextInput__FuseiOSControlsITextInputImplset_PlaceholderColor_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIColor* value);
void MultilineTextInput__FuseiOSControlsITextInputImplset_PlaceholderText_fn(MultilineTextInput* __this, uString* value);
void MultilineTextInput__FuseiOSControlsITextInputImplget_SemanticControl_fn(MultilineTextInput* __this, ::g::Fuse::Controls::TextEdit** __retval);
void MultilineTextInput__FuseiOSControlsITextInputImplset_SemanticControl_fn(MultilineTextInput* __this, ::g::Fuse::Controls::TextEdit* value);
void MultilineTextInput__FuseiOSControlsITextInputImplget_Text_fn(MultilineTextInput* __this, uString** __retval);
void MultilineTextInput__FuseiOSControlsITextInputImplset_Text_fn(MultilineTextInput* __this, uString* value);
void MultilineTextInput__FuseiOSControlsITextInputImplset_TextAlignment_fn(MultilineTextInput* __this, int* value);
void MultilineTextInput__FuseiOSControlsITextInputImplset_TextColor_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIColor* value);
void MultilineTextInput__FuseiOSControlsITextInputImplget_View_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIView** __retval);
void MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewDidEndDecelerating_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView);
void MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewDidEndDraggingWillDecelerate_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView, bool* decelerate);
void MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewDidEndScrollingAnimation_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView);
void MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewDidEndZoomingWithViewAtScale_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView, ::g::iOS::UIKit::UIView* view, double* scale);
void MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewDidScroll_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView);
void MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewDidScrollToTop_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView);
void MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewDidZoom_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView);
void MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewShouldScrollToTop_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView, bool* __retval);
void MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewWillBeginDecelerating_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView);
void MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewWillBeginDragging_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView);
void MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewWillBeginZoomingWithView_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView, ::g::iOS::UIKit::UIView* view);
void MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewDidBeginEditing_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UITextView* textView);
void MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewDidChange_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UITextView* textView);
void MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewDidChangeSelection_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UITextView* textView);
void MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewDidEndEditing_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UITextView* textView);
void MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewShouldBeginEditing_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UITextView* textView, bool* __retval);
void MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewShouldChangeTextInRangeReplacementText_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UITextView* textView, ::g::iOS::Foundation::_NSRange* range, uString* text, bool* __retval);
void MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewShouldEndEditing_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UITextView* textView, bool* __retval);
void MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewShouldInteractWithTextAttachmentInRange_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UITextView* textView, ::g::iOS::UIKit::NSTextAttachment* textAttachment, ::g::iOS::Foundation::_NSRange* characterRange, bool* __retval);
void MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewShouldInteractWithURLInRange_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UITextView* textView, ::g::iOS::Foundation::NSURL* URL, ::g::iOS::Foundation::_NSRange* characterRange, bool* __retval);
void MultilineTextInput__iOSUIKitIUITextViewDelegateviewForZoomingInScrollView_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView, ::g::iOS::UIKit::UIView** __retval);
void MultilineTextInput__get_IsScrollable_fn(MultilineTextInput* __this, bool* __retval);
void MultilineTextInput__get_LineCount_fn(MultilineTextInput* __this, int* __retval);
void MultilineTextInput__New1_fn(MultilineTextInput** __retval);
void MultilineTextInput__add_TextChanged_fn(MultilineTextInput* __this, uDelegate* value);
void MultilineTextInput__remove_TextChanged_fn(MultilineTextInput* __this, uDelegate* value);
void MultilineTextInput__get_TextView_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UITextView** __retval);
void MultilineTextInput__UpdatePlaceholder_fn(MultilineTextInput* __this);

struct MultilineTextInput : uObject
{
    uStrong< ::g::iOS::UIKit::UILabel*> _placeholderLabel;
    uStrong< ::g::iOS::UIKit::UITextView*> _textView;
    uStrong< ::g::Fuse::Controls::TextEdit*> _SemanticControl;
    uStrong<uDelegate*> TextChanged1;

    void ctor_();
    bool IsScrollable();
    int LineCount();
    void add_TextChanged(uDelegate* value);
    void remove_TextChanged(uDelegate* value);
    ::g::iOS::UIKit::UITextView* TextView();
    void UpdatePlaceholder();
    static MultilineTextInput* New1();
};
// }

}}}} // ::g::Fuse::iOS::Controls
