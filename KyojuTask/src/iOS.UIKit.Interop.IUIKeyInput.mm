// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIKeyInput
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIKeyInput_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.Interop.IUIKeyInput.h>
#include <iOS.UIKit.UIKeyboardAppearance.h>
#include <iOS.UIKit.UIKeyboardType.h>
#include <iOS.UIKit.UIReturnKeyType.h>
#include <iOS.UIKit.UITextAutocapitalizationType.h>
#include <iOS.UIKit.UITextAutocorrectionType.h>
#include <iOS.UIKit.UITextSpellCheckingType.h>
#include <Uno.Bool.h>
#include <Uno.String.h>

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUIKeyInput :6483
// {
IUIKeyInput_type* IUIKeyInput_typeof()
{
    static uSStrong<IUIKeyInput_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(IUIKeyInput);
    options.TypeSize = sizeof(IUIKeyInput_type);
    type = (IUIKeyInput_type*)uClassType::New("iOS.UIKit.Interop.IUIKeyInput", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->interface1.fp_hasText = (void(*)(uObject*, bool*))IUIKeyInput__hasText_fn;
    type->interface1.fp_insertText = (void(*)(uObject*, uString*))IUIKeyInput__insertText_fn;
    type->interface1.fp_deleteBackward = (void(*)(uObject*))IUIKeyInput__deleteBackward_fn;
    type->interface1.fp_autocapitalizationType = (void(*)(uObject*, int*))IUIKeyInput__autocapitalizationType_fn;
    type->interface1.fp_setAutocapitalizationType = (void(*)(uObject*, int*))IUIKeyInput__setAutocapitalizationType_fn;
    type->interface1.fp_autocorrectionType = (void(*)(uObject*, int*))IUIKeyInput__autocorrectionType_fn;
    type->interface1.fp_setAutocorrectionType = (void(*)(uObject*, int*))IUIKeyInput__setAutocorrectionType_fn;
    type->interface1.fp_spellCheckingType = (void(*)(uObject*, int*))IUIKeyInput__spellCheckingType_fn;
    type->interface1.fp_setSpellCheckingType = (void(*)(uObject*, int*))IUIKeyInput__setSpellCheckingType_fn;
    type->interface1.fp_keyboardType = (void(*)(uObject*, int*))IUIKeyInput__keyboardType_fn;
    type->interface1.fp_setKeyboardType = (void(*)(uObject*, int*))IUIKeyInput__setKeyboardType_fn;
    type->interface1.fp_keyboardAppearance = (void(*)(uObject*, int*))IUIKeyInput__keyboardAppearance_fn;
    type->interface1.fp_setKeyboardAppearance = (void(*)(uObject*, int*))IUIKeyInput__setKeyboardAppearance_fn;
    type->interface1.fp_returnKeyType = (void(*)(uObject*, int*))IUIKeyInput__returnKeyType_fn;
    type->interface1.fp_setReturnKeyType = (void(*)(uObject*, int*))IUIKeyInput__setReturnKeyType_fn;
    type->interface1.fp_enablesReturnKeyAutomatically = (void(*)(uObject*, bool*))IUIKeyInput__enablesReturnKeyAutomatically_fn;
    type->interface1.fp_setEnablesReturnKeyAutomatically = (void(*)(uObject*, bool*))IUIKeyInput__setEnablesReturnKeyAutomatically_fn;
    type->interface1.fp_isSecureTextEntry = (void(*)(uObject*, bool*))IUIKeyInput__isSecureTextEntry_fn;
    type->interface1.fp_setSecureTextEntry = (void(*)(uObject*, bool*))IUIKeyInput__setSecureTextEntry_fn;
    type->interface2.fp_autocapitalizationType = (void(*)(uObject*, int*))IUIKeyInput__autocapitalizationType_fn;
    type->interface2.fp_setAutocapitalizationType = (void(*)(uObject*, int*))IUIKeyInput__setAutocapitalizationType_fn;
    type->interface2.fp_autocorrectionType = (void(*)(uObject*, int*))IUIKeyInput__autocorrectionType_fn;
    type->interface2.fp_setAutocorrectionType = (void(*)(uObject*, int*))IUIKeyInput__setAutocorrectionType_fn;
    type->interface2.fp_spellCheckingType = (void(*)(uObject*, int*))IUIKeyInput__spellCheckingType_fn;
    type->interface2.fp_setSpellCheckingType = (void(*)(uObject*, int*))IUIKeyInput__setSpellCheckingType_fn;
    type->interface2.fp_keyboardType = (void(*)(uObject*, int*))IUIKeyInput__keyboardType_fn;
    type->interface2.fp_setKeyboardType = (void(*)(uObject*, int*))IUIKeyInput__setKeyboardType_fn;
    type->interface2.fp_keyboardAppearance = (void(*)(uObject*, int*))IUIKeyInput__keyboardAppearance_fn;
    type->interface2.fp_setKeyboardAppearance = (void(*)(uObject*, int*))IUIKeyInput__setKeyboardAppearance_fn;
    type->interface2.fp_returnKeyType = (void(*)(uObject*, int*))IUIKeyInput__returnKeyType_fn;
    type->interface2.fp_setReturnKeyType = (void(*)(uObject*, int*))IUIKeyInput__setReturnKeyType_fn;
    type->interface2.fp_enablesReturnKeyAutomatically = (void(*)(uObject*, bool*))IUIKeyInput__enablesReturnKeyAutomatically_fn;
    type->interface2.fp_setEnablesReturnKeyAutomatically = (void(*)(uObject*, bool*))IUIKeyInput__setEnablesReturnKeyAutomatically_fn;
    type->interface2.fp_isSecureTextEntry = (void(*)(uObject*, bool*))IUIKeyInput__isSecureTextEntry_fn;
    type->interface2.fp_setSecureTextEntry = (void(*)(uObject*, bool*))IUIKeyInput__setSecureTextEntry_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(IUIKeyInput_type, interface0),
        ::g::iOS::UIKit::IUIKeyInput_typeof(), offsetof(IUIKeyInput_type, interface1),
        ::g::iOS::UIKit::IUITextInputTraits_typeof(), offsetof(IUIKeyInput_type, interface2));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public extern iOS.UIKit.UITextAutocapitalizationType autocapitalizationType() :6549
void IUIKeyInput__autocapitalizationType_fn(IUIKeyInput* __this, int* __retval)
{
    *__retval = __this->autocapitalizationType();
}

// public extern iOS.UIKit.UITextAutocorrectionType autocorrectionType() :6555
void IUIKeyInput__autocorrectionType_fn(IUIKeyInput* __this, int* __retval)
{
    *__retval = __this->autocorrectionType();
}

// public extern void deleteBackward() :6546
void IUIKeyInput__deleteBackward_fn(IUIKeyInput* __this)
{
    __this->deleteBackward();
}

// public extern bool enablesReturnKeyAutomatically() :6585
void IUIKeyInput__enablesReturnKeyAutomatically_fn(IUIKeyInput* __this, bool* __retval)
{
    *__retval = __this->enablesReturnKeyAutomatically();
}

// public extern bool hasText() :6540
void IUIKeyInput__hasText_fn(IUIKeyInput* __this, bool* __retval)
{
    *__retval = __this->hasText();
}

// public extern void insertText(string text) :6543
void IUIKeyInput__insertText_fn(IUIKeyInput* __this, uString* text_)
{
    __this->insertText(text_);
}

// public extern bool isSecureTextEntry() :6591
void IUIKeyInput__isSecureTextEntry_fn(IUIKeyInput* __this, bool* __retval)
{
    *__retval = __this->isSecureTextEntry();
}

// public extern iOS.UIKit.UIKeyboardAppearance keyboardAppearance() :6573
void IUIKeyInput__keyboardAppearance_fn(IUIKeyInput* __this, int* __retval)
{
    *__retval = __this->keyboardAppearance();
}

// public extern iOS.UIKit.UIKeyboardType keyboardType() :6567
void IUIKeyInput__keyboardType_fn(IUIKeyInput* __this, int* __retval)
{
    *__retval = __this->keyboardType();
}

// public extern iOS.UIKit.UIReturnKeyType returnKeyType() :6579
void IUIKeyInput__returnKeyType_fn(IUIKeyInput* __this, int* __retval)
{
    *__retval = __this->returnKeyType();
}

// public extern void setAutocapitalizationType(iOS.UIKit.UITextAutocapitalizationType autocapitalizationType) :6552
void IUIKeyInput__setAutocapitalizationType_fn(IUIKeyInput* __this, int* autocapitalizationType_)
{
    __this->setAutocapitalizationType(*autocapitalizationType_);
}

// public extern void setAutocorrectionType(iOS.UIKit.UITextAutocorrectionType autocorrectionType) :6558
void IUIKeyInput__setAutocorrectionType_fn(IUIKeyInput* __this, int* autocorrectionType_)
{
    __this->setAutocorrectionType(*autocorrectionType_);
}

// public extern void setEnablesReturnKeyAutomatically(bool enablesReturnKeyAutomatically) :6588
void IUIKeyInput__setEnablesReturnKeyAutomatically_fn(IUIKeyInput* __this, bool* enablesReturnKeyAutomatically_)
{
    __this->setEnablesReturnKeyAutomatically(*enablesReturnKeyAutomatically_);
}

// public extern void setKeyboardAppearance(iOS.UIKit.UIKeyboardAppearance keyboardAppearance) :6576
void IUIKeyInput__setKeyboardAppearance_fn(IUIKeyInput* __this, int* keyboardAppearance_)
{
    __this->setKeyboardAppearance(*keyboardAppearance_);
}

// public extern void setKeyboardType(iOS.UIKit.UIKeyboardType keyboardType) :6570
void IUIKeyInput__setKeyboardType_fn(IUIKeyInput* __this, int* keyboardType_)
{
    __this->setKeyboardType(*keyboardType_);
}

// public extern void setReturnKeyType(iOS.UIKit.UIReturnKeyType returnKeyType) :6582
void IUIKeyInput__setReturnKeyType_fn(IUIKeyInput* __this, int* returnKeyType_)
{
    __this->setReturnKeyType(*returnKeyType_);
}

// public extern void setSecureTextEntry(bool secureTextEntry) :6594
void IUIKeyInput__setSecureTextEntry_fn(IUIKeyInput* __this, bool* secureTextEntry_)
{
    __this->setSecureTextEntry(*secureTextEntry_);
}

// public extern void setSpellCheckingType(iOS.UIKit.UITextSpellCheckingType spellCheckingType) :6564
void IUIKeyInput__setSpellCheckingType_fn(IUIKeyInput* __this, int* spellCheckingType_)
{
    __this->setSpellCheckingType(*spellCheckingType_);
}

// public extern iOS.UIKit.UITextSpellCheckingType spellCheckingType() :6561
void IUIKeyInput__spellCheckingType_fn(IUIKeyInput* __this, int* __retval)
{
    *__retval = __this->spellCheckingType();
}

// public extern iOS.UIKit.UITextAutocapitalizationType autocapitalizationType() [instance] :6549
int IUIKeyInput::autocapitalizationType()
{
    ::UITextAutocapitalizationType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextAutocapitalizationType, @selector(autocapitalizationType));
    return int(__return);
}

// public extern iOS.UIKit.UITextAutocorrectionType autocorrectionType() [instance] :6555
int IUIKeyInput::autocorrectionType()
{
    ::UITextAutocorrectionType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextAutocorrectionType, @selector(autocorrectionType));
    return int(__return);
}

// public extern void deleteBackward() [instance] :6546
void IUIKeyInput::deleteBackward()
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(deleteBackward));
}

// public extern bool enablesReturnKeyAutomatically() [instance] :6585
bool IUIKeyInput::enablesReturnKeyAutomatically()
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(enablesReturnKeyAutomatically));
    return (bool)__return;
}

// public extern bool hasText() [instance] :6540
bool IUIKeyInput::hasText()
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(hasText));
    return (bool)__return;
}

// public extern void insertText(string text) [instance] :6543
void IUIKeyInput::insertText(uString* text_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(insertText:),
        uObjC::NativeString(text_));
}

// public extern bool isSecureTextEntry() [instance] :6591
bool IUIKeyInput::isSecureTextEntry()
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isSecureTextEntry));
    return (bool)__return;
}

// public extern iOS.UIKit.UIKeyboardAppearance keyboardAppearance() [instance] :6573
int IUIKeyInput::keyboardAppearance()
{
    ::UIKeyboardAppearance __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIKeyboardAppearance, @selector(keyboardAppearance));
    return int(__return);
}

// public extern iOS.UIKit.UIKeyboardType keyboardType() [instance] :6567
int IUIKeyInput::keyboardType()
{
    ::UIKeyboardType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIKeyboardType, @selector(keyboardType));
    return int(__return);
}

// public extern iOS.UIKit.UIReturnKeyType returnKeyType() [instance] :6579
int IUIKeyInput::returnKeyType()
{
    ::UIReturnKeyType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIReturnKeyType, @selector(returnKeyType));
    return int(__return);
}

// public extern void setAutocapitalizationType(iOS.UIKit.UITextAutocapitalizationType autocapitalizationType) [instance] :6552
void IUIKeyInput::setAutocapitalizationType(int autocapitalizationType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setAutocapitalizationType:),
        ::UITextAutocapitalizationType(autocapitalizationType_));
}

// public extern void setAutocorrectionType(iOS.UIKit.UITextAutocorrectionType autocorrectionType) [instance] :6558
void IUIKeyInput::setAutocorrectionType(int autocorrectionType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setAutocorrectionType:),
        ::UITextAutocorrectionType(autocorrectionType_));
}

// public extern void setEnablesReturnKeyAutomatically(bool enablesReturnKeyAutomatically) [instance] :6588
void IUIKeyInput::setEnablesReturnKeyAutomatically(bool enablesReturnKeyAutomatically_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setEnablesReturnKeyAutomatically:),
        (BOOL)enablesReturnKeyAutomatically_);
}

// public extern void setKeyboardAppearance(iOS.UIKit.UIKeyboardAppearance keyboardAppearance) [instance] :6576
void IUIKeyInput::setKeyboardAppearance(int keyboardAppearance_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setKeyboardAppearance:),
        ::UIKeyboardAppearance(keyboardAppearance_));
}

// public extern void setKeyboardType(iOS.UIKit.UIKeyboardType keyboardType) [instance] :6570
void IUIKeyInput::setKeyboardType(int keyboardType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setKeyboardType:),
        ::UIKeyboardType(keyboardType_));
}

// public extern void setReturnKeyType(iOS.UIKit.UIReturnKeyType returnKeyType) [instance] :6582
void IUIKeyInput::setReturnKeyType(int returnKeyType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setReturnKeyType:),
        ::UIReturnKeyType(returnKeyType_));
}

// public extern void setSecureTextEntry(bool secureTextEntry) [instance] :6594
void IUIKeyInput::setSecureTextEntry(bool secureTextEntry_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setSecureTextEntry:),
        (BOOL)secureTextEntry_);
}

// public extern void setSpellCheckingType(iOS.UIKit.UITextSpellCheckingType spellCheckingType) [instance] :6564
void IUIKeyInput::setSpellCheckingType(int spellCheckingType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setSpellCheckingType:),
        ::UITextSpellCheckingType(spellCheckingType_));
}

// public extern iOS.UIKit.UITextSpellCheckingType spellCheckingType() [instance] :6561
int IUIKeyInput::spellCheckingType()
{
    ::UITextSpellCheckingType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextSpellCheckingType, @selector(spellCheckingType));
    return int(__return);
}
// }

}}}} // ::g::iOS::UIKit::Interop
