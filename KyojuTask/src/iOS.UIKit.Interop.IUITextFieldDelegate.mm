// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UITextFieldDelegate
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUITextFieldDelegate_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.Interop.IUITextFieldDelegate.h>
#include <iOS.UIKit.UITextField.h>
#include <Uno.Bool.h>
#include <Uno.String.h>
#include <iOS.Foundation._NSRange.h>

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUITextFieldDelegate :7940
// {
IUITextFieldDelegate_type* IUITextFieldDelegate_typeof()
{
    static uSStrong<IUITextFieldDelegate_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IUITextFieldDelegate);
    options.TypeSize = sizeof(IUITextFieldDelegate_type);
    type = (IUITextFieldDelegate_type*)uClassType::New("iOS.UIKit.Interop.IUITextFieldDelegate", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->interface1.fp_textFieldShouldBeginEditing = (void(*)(uObject*, ::g::iOS::UIKit::UITextField*, bool*))IUITextFieldDelegate__textFieldShouldBeginEditing_fn;
    type->interface1.fp_textFieldDidBeginEditing = (void(*)(uObject*, ::g::iOS::UIKit::UITextField*))IUITextFieldDelegate__textFieldDidBeginEditing_fn;
    type->interface1.fp_textFieldShouldEndEditing = (void(*)(uObject*, ::g::iOS::UIKit::UITextField*, bool*))IUITextFieldDelegate__textFieldShouldEndEditing_fn;
    type->interface1.fp_textFieldDidEndEditing = (void(*)(uObject*, ::g::iOS::UIKit::UITextField*))IUITextFieldDelegate__textFieldDidEndEditing_fn;
    type->interface1.fp_textFieldShouldChangeCharactersInRangeReplacementString = (void(*)(uObject*, ::g::iOS::UIKit::UITextField*, ::g::iOS::Foundation::_NSRange*, uString*, bool*))IUITextFieldDelegate__textFieldShouldChangeCharactersInRangeReplacementString_fn;
    type->interface1.fp_textFieldShouldClear = (void(*)(uObject*, ::g::iOS::UIKit::UITextField*, bool*))IUITextFieldDelegate__textFieldShouldClear_fn;
    type->interface1.fp_textFieldShouldReturn = (void(*)(uObject*, ::g::iOS::UIKit::UITextField*, bool*))IUITextFieldDelegate__textFieldShouldReturn_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(IUITextFieldDelegate_type, interface0),
        ::g::iOS::UIKit::IUITextFieldDelegate_typeof(), offsetof(IUITextFieldDelegate_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public extern void textFieldDidBeginEditing(iOS.UIKit.UITextField textField) :7952
void IUITextFieldDelegate__textFieldDidBeginEditing_fn(IUITextFieldDelegate* __this, ::g::iOS::UIKit::UITextField* textField_)
{
    __this->textFieldDidBeginEditing(textField_);
}

// public extern void textFieldDidEndEditing(iOS.UIKit.UITextField textField) :7958
void IUITextFieldDelegate__textFieldDidEndEditing_fn(IUITextFieldDelegate* __this, ::g::iOS::UIKit::UITextField* textField_)
{
    __this->textFieldDidEndEditing(textField_);
}

// public extern bool textFieldShouldBeginEditing(iOS.UIKit.UITextField textField) :7949
void IUITextFieldDelegate__textFieldShouldBeginEditing_fn(IUITextFieldDelegate* __this, ::g::iOS::UIKit::UITextField* textField_, bool* __retval)
{
    *__retval = __this->textFieldShouldBeginEditing(textField_);
}

// public extern bool textFieldShouldChangeCharactersInRangeReplacementString(iOS.UIKit.UITextField textField, iOS.Foundation._NSRange range, string string_) :7961
void IUITextFieldDelegate__textFieldShouldChangeCharactersInRangeReplacementString_fn(IUITextFieldDelegate* __this, ::g::iOS::UIKit::UITextField* textField_, ::g::iOS::Foundation::_NSRange* range_, uString* string__, bool* __retval)
{
    *__retval = __this->textFieldShouldChangeCharactersInRangeReplacementString(textField_, *range_, string__);
}

// public extern bool textFieldShouldClear(iOS.UIKit.UITextField textField) :7964
void IUITextFieldDelegate__textFieldShouldClear_fn(IUITextFieldDelegate* __this, ::g::iOS::UIKit::UITextField* textField_, bool* __retval)
{
    *__retval = __this->textFieldShouldClear(textField_);
}

// public extern bool textFieldShouldEndEditing(iOS.UIKit.UITextField textField) :7955
void IUITextFieldDelegate__textFieldShouldEndEditing_fn(IUITextFieldDelegate* __this, ::g::iOS::UIKit::UITextField* textField_, bool* __retval)
{
    *__retval = __this->textFieldShouldEndEditing(textField_);
}

// public extern bool textFieldShouldReturn(iOS.UIKit.UITextField textField) :7967
void IUITextFieldDelegate__textFieldShouldReturn_fn(IUITextFieldDelegate* __this, ::g::iOS::UIKit::UITextField* textField_, bool* __retval)
{
    *__retval = __this->textFieldShouldReturn(textField_);
}

// public extern void textFieldDidBeginEditing(iOS.UIKit.UITextField textField) [instance] :7952
void IUITextFieldDelegate::textFieldDidBeginEditing(::g::iOS::UIKit::UITextField* textField_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(textFieldDidBeginEditing:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textField_));
}

// public extern void textFieldDidEndEditing(iOS.UIKit.UITextField textField) [instance] :7958
void IUITextFieldDelegate::textFieldDidEndEditing(::g::iOS::UIKit::UITextField* textField_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(textFieldDidEndEditing:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textField_));
}

// public extern bool textFieldShouldBeginEditing(iOS.UIKit.UITextField textField) [instance] :7949
bool IUITextFieldDelegate::textFieldShouldBeginEditing(::g::iOS::UIKit::UITextField* textField_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(textFieldShouldBeginEditing:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textField_));
    return (bool)__return;
}

// public extern bool textFieldShouldChangeCharactersInRangeReplacementString(iOS.UIKit.UITextField textField, iOS.Foundation._NSRange range, string string_) [instance] :7961
bool IUITextFieldDelegate::textFieldShouldChangeCharactersInRangeReplacementString(::g::iOS::UIKit::UITextField* textField_, ::g::iOS::Foundation::_NSRange range_, uString* string__)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(textField:shouldChangeCharactersInRange:replacementString:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textField_),
        uObjC::Struct::FromUno__NSRange(range_, ::_NSRange()),
        uObjC::NativeString(string__));
    return (bool)__return;
}

// public extern bool textFieldShouldClear(iOS.UIKit.UITextField textField) [instance] :7964
bool IUITextFieldDelegate::textFieldShouldClear(::g::iOS::UIKit::UITextField* textField_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(textFieldShouldClear:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textField_));
    return (bool)__return;
}

// public extern bool textFieldShouldEndEditing(iOS.UIKit.UITextField textField) [instance] :7955
bool IUITextFieldDelegate::textFieldShouldEndEditing(::g::iOS::UIKit::UITextField* textField_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(textFieldShouldEndEditing:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textField_));
    return (bool)__return;
}

// public extern bool textFieldShouldReturn(iOS.UIKit.UITextField textField) [instance] :7967
bool IUITextFieldDelegate::textFieldShouldReturn(::g::iOS::UIKit::UITextField* textField_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(textFieldShouldReturn:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)textField_));
    return (bool)__return;
}
// }

}}}} // ::g::iOS::UIKit::Interop
