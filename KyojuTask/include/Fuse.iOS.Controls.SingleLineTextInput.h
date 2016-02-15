// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.24.6/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.iOS.Controls.ITextInputImpl.h>
#include <iOS.UIKit.IUITextFieldDelegate.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct TextEdit;}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct SingleLineTextInput;}}}}
namespace g{namespace Fuse{namespace iOS{struct ControlEvent;}}}
namespace g{namespace iOS{namespace CoreGraphics{struct CGRect;}}}
namespace g{namespace iOS{namespace Foundation{struct _NSRange;}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject;}}}
namespace g{namespace iOS{namespace UIKit{struct UIColor;}}}
namespace g{namespace iOS{namespace UIKit{struct UIFont;}}}
namespace g{namespace iOS{namespace UIKit{struct UITextField;}}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// internal sealed extern class SingleLineTextInput :1432
// {
struct SingleLineTextInput_type : uType
{
    ::g::Fuse::iOS::Controls::ITextInputImpl interface0;
    ::g::iOS::UIKit::IUITextFieldDelegate interface1;
};

SingleLineTextInput_type* SingleLineTextInput_typeof();
void SingleLineTextInput__ctor__fn(SingleLineTextInput* __this);
void SingleLineTextInput__FuseiOSControlsITextInputImplset_CaretColor_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIColor* value);
void SingleLineTextInput__FuseiOSControlsITextInputImplget_Font_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIFont** __retval);
void SingleLineTextInput__FuseiOSControlsITextInputImplset_Font_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIFont* value);
void SingleLineTextInput__FuseiOSControlsITextInputImplget_Frame_fn(SingleLineTextInput* __this, ::g::iOS::CoreGraphics::CGRect* __retval);
void SingleLineTextInput__FuseiOSControlsITextInputImplset_Frame_fn(SingleLineTextInput* __this, ::g::iOS::CoreGraphics::CGRect* value);
void SingleLineTextInput__FuseiOSControlsITextInputImplget_IUITextInput_fn(SingleLineTextInput* __this, uObject** __retval);
void SingleLineTextInput__FuseiOSControlsITextInputImplset_PlaceholderColor_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIColor* value);
void SingleLineTextInput__FuseiOSControlsITextInputImplset_PlaceholderText_fn(SingleLineTextInput* __this, uString* value);
void SingleLineTextInput__FuseiOSControlsITextInputImplget_SemanticControl_fn(SingleLineTextInput* __this, ::g::Fuse::Controls::TextEdit** __retval);
void SingleLineTextInput__FuseiOSControlsITextInputImplset_SemanticControl_fn(SingleLineTextInput* __this, ::g::Fuse::Controls::TextEdit* value);
void SingleLineTextInput__FuseiOSControlsITextInputImplget_Text_fn(SingleLineTextInput* __this, uString** __retval);
void SingleLineTextInput__FuseiOSControlsITextInputImplset_Text_fn(SingleLineTextInput* __this, uString* value);
void SingleLineTextInput__FuseiOSControlsITextInputImplset_TextAlignment_fn(SingleLineTextInput* __this, int* value);
void SingleLineTextInput__FuseiOSControlsITextInputImplset_TextColor_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIColor* value);
void SingleLineTextInput__FuseiOSControlsITextInputImplget_View_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIView** __retval);
void SingleLineTextInput__iOSUIKitIUITextFieldDelegatetextFieldDidBeginEditing_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UITextField* textView);
void SingleLineTextInput__iOSUIKitIUITextFieldDelegatetextFieldDidEndEditing_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UITextField* textView);
void SingleLineTextInput__iOSUIKitIUITextFieldDelegatetextFieldShouldBeginEditing_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UITextField* textView, bool* __retval);
void SingleLineTextInput__iOSUIKitIUITextFieldDelegatetextFieldShouldChangeCharactersInRangeReplacementString_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UITextField* textView, ::g::iOS::Foundation::_NSRange* range, uString* text, bool* __retval);
void SingleLineTextInput__iOSUIKitIUITextFieldDelegatetextFieldShouldClear_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UITextField* textView, bool* __retval);
void SingleLineTextInput__iOSUIKitIUITextFieldDelegatetextFieldShouldEndEditing_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UITextField* textView, bool* __retval);
void SingleLineTextInput__iOSUIKitIUITextFieldDelegatetextFieldShouldReturn_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UITextField* textView, bool* __retval);
void SingleLineTextInput__New1_fn(SingleLineTextInput** __retval);
void SingleLineTextInput__OnTextEdit_fn(SingleLineTextInput* __this, ::g::iOS::Foundation::NSObject* sender, ::g::iOS::Foundation::NSObject* theEvent);
void SingleLineTextInput__add_TextChanged_fn(SingleLineTextInput* __this, uDelegate* value);
void SingleLineTextInput__remove_TextChanged_fn(SingleLineTextInput* __this, uDelegate* value);
void SingleLineTextInput__get_TextField_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UITextField** __retval);

struct SingleLineTextInput : uObject
{
    uStrong< ::g::Fuse::iOS::ControlEvent*> _textEditEvent;
    uStrong< ::g::iOS::UIKit::UITextField*> _textField;
    uStrong< ::g::Fuse::Controls::TextEdit*> _SemanticControl;
    uStrong<uDelegate*> TextChanged1;

    void ctor_();
    void OnTextEdit(::g::iOS::Foundation::NSObject* sender, ::g::iOS::Foundation::NSObject* theEvent);
    void add_TextChanged(uDelegate* value);
    void remove_TextChanged(uDelegate* value);
    ::g::iOS::UIKit::UITextField* TextField();
    static SingleLineTextInput* New1();
};
// }

}}}} // ::g::Fuse::iOS::Controls
