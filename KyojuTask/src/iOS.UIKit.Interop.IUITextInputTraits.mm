// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UITextInputTraits
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUITextInputTraits_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.Interop.IUITextInputTraits.h>
#include <iOS.UIKit.UIKeyboardAppearance.h>
#include <iOS.UIKit.UIKeyboardType.h>
#include <iOS.UIKit.UIReturnKeyType.h>
#include <iOS.UIKit.UITextAutocapitalizationType.h>
#include <iOS.UIKit.UITextAutocorrectionType.h>
#include <iOS.UIKit.UITextSpellCheckingType.h>
#include <Uno.Bool.h>

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUITextInputTraits :8349
// {
IUITextInputTraits_type* IUITextInputTraits_typeof()
{
    static uSStrong<IUITextInputTraits_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IUITextInputTraits);
    options.TypeSize = sizeof(IUITextInputTraits_type);
    type = (IUITextInputTraits_type*)uClassType::New("iOS.UIKit.Interop.IUITextInputTraits", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->interface1.fp_autocapitalizationType = (void(*)(uObject*, int*))IUITextInputTraits__autocapitalizationType_fn;
    type->interface1.fp_setAutocapitalizationType = (void(*)(uObject*, int*))IUITextInputTraits__setAutocapitalizationType_fn;
    type->interface1.fp_autocorrectionType = (void(*)(uObject*, int*))IUITextInputTraits__autocorrectionType_fn;
    type->interface1.fp_setAutocorrectionType = (void(*)(uObject*, int*))IUITextInputTraits__setAutocorrectionType_fn;
    type->interface1.fp_spellCheckingType = (void(*)(uObject*, int*))IUITextInputTraits__spellCheckingType_fn;
    type->interface1.fp_setSpellCheckingType = (void(*)(uObject*, int*))IUITextInputTraits__setSpellCheckingType_fn;
    type->interface1.fp_keyboardType = (void(*)(uObject*, int*))IUITextInputTraits__keyboardType_fn;
    type->interface1.fp_setKeyboardType = (void(*)(uObject*, int*))IUITextInputTraits__setKeyboardType_fn;
    type->interface1.fp_keyboardAppearance = (void(*)(uObject*, int*))IUITextInputTraits__keyboardAppearance_fn;
    type->interface1.fp_setKeyboardAppearance = (void(*)(uObject*, int*))IUITextInputTraits__setKeyboardAppearance_fn;
    type->interface1.fp_returnKeyType = (void(*)(uObject*, int*))IUITextInputTraits__returnKeyType_fn;
    type->interface1.fp_setReturnKeyType = (void(*)(uObject*, int*))IUITextInputTraits__setReturnKeyType_fn;
    type->interface1.fp_enablesReturnKeyAutomatically = (void(*)(uObject*, bool*))IUITextInputTraits__enablesReturnKeyAutomatically_fn;
    type->interface1.fp_setEnablesReturnKeyAutomatically = (void(*)(uObject*, bool*))IUITextInputTraits__setEnablesReturnKeyAutomatically_fn;
    type->interface1.fp_isSecureTextEntry = (void(*)(uObject*, bool*))IUITextInputTraits__isSecureTextEntry_fn;
    type->interface1.fp_setSecureTextEntry = (void(*)(uObject*, bool*))IUITextInputTraits__setSecureTextEntry_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(IUITextInputTraits_type, interface0),
        ::g::iOS::UIKit::IUITextInputTraits_typeof(), offsetof(IUITextInputTraits_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public extern iOS.UIKit.UITextAutocapitalizationType autocapitalizationType() :8406
void IUITextInputTraits__autocapitalizationType_fn(IUITextInputTraits* __this, int* __retval)
{
    *__retval = __this->autocapitalizationType();
}

// public extern iOS.UIKit.UITextAutocorrectionType autocorrectionType() :8412
void IUITextInputTraits__autocorrectionType_fn(IUITextInputTraits* __this, int* __retval)
{
    *__retval = __this->autocorrectionType();
}

// public extern bool enablesReturnKeyAutomatically() :8442
void IUITextInputTraits__enablesReturnKeyAutomatically_fn(IUITextInputTraits* __this, bool* __retval)
{
    *__retval = __this->enablesReturnKeyAutomatically();
}

// public extern bool isSecureTextEntry() :8448
void IUITextInputTraits__isSecureTextEntry_fn(IUITextInputTraits* __this, bool* __retval)
{
    *__retval = __this->isSecureTextEntry();
}

// public extern iOS.UIKit.UIKeyboardAppearance keyboardAppearance() :8430
void IUITextInputTraits__keyboardAppearance_fn(IUITextInputTraits* __this, int* __retval)
{
    *__retval = __this->keyboardAppearance();
}

// public extern iOS.UIKit.UIKeyboardType keyboardType() :8424
void IUITextInputTraits__keyboardType_fn(IUITextInputTraits* __this, int* __retval)
{
    *__retval = __this->keyboardType();
}

// public extern iOS.UIKit.UIReturnKeyType returnKeyType() :8436
void IUITextInputTraits__returnKeyType_fn(IUITextInputTraits* __this, int* __retval)
{
    *__retval = __this->returnKeyType();
}

// public extern void setAutocapitalizationType(iOS.UIKit.UITextAutocapitalizationType autocapitalizationType) :8409
void IUITextInputTraits__setAutocapitalizationType_fn(IUITextInputTraits* __this, int* autocapitalizationType_)
{
    __this->setAutocapitalizationType(*autocapitalizationType_);
}

// public extern void setAutocorrectionType(iOS.UIKit.UITextAutocorrectionType autocorrectionType) :8415
void IUITextInputTraits__setAutocorrectionType_fn(IUITextInputTraits* __this, int* autocorrectionType_)
{
    __this->setAutocorrectionType(*autocorrectionType_);
}

// public extern void setEnablesReturnKeyAutomatically(bool enablesReturnKeyAutomatically) :8445
void IUITextInputTraits__setEnablesReturnKeyAutomatically_fn(IUITextInputTraits* __this, bool* enablesReturnKeyAutomatically_)
{
    __this->setEnablesReturnKeyAutomatically(*enablesReturnKeyAutomatically_);
}

// public extern void setKeyboardAppearance(iOS.UIKit.UIKeyboardAppearance keyboardAppearance) :8433
void IUITextInputTraits__setKeyboardAppearance_fn(IUITextInputTraits* __this, int* keyboardAppearance_)
{
    __this->setKeyboardAppearance(*keyboardAppearance_);
}

// public extern void setKeyboardType(iOS.UIKit.UIKeyboardType keyboardType) :8427
void IUITextInputTraits__setKeyboardType_fn(IUITextInputTraits* __this, int* keyboardType_)
{
    __this->setKeyboardType(*keyboardType_);
}

// public extern void setReturnKeyType(iOS.UIKit.UIReturnKeyType returnKeyType) :8439
void IUITextInputTraits__setReturnKeyType_fn(IUITextInputTraits* __this, int* returnKeyType_)
{
    __this->setReturnKeyType(*returnKeyType_);
}

// public extern void setSecureTextEntry(bool secureTextEntry) :8451
void IUITextInputTraits__setSecureTextEntry_fn(IUITextInputTraits* __this, bool* secureTextEntry_)
{
    __this->setSecureTextEntry(*secureTextEntry_);
}

// public extern void setSpellCheckingType(iOS.UIKit.UITextSpellCheckingType spellCheckingType) :8421
void IUITextInputTraits__setSpellCheckingType_fn(IUITextInputTraits* __this, int* spellCheckingType_)
{
    __this->setSpellCheckingType(*spellCheckingType_);
}

// public extern iOS.UIKit.UITextSpellCheckingType spellCheckingType() :8418
void IUITextInputTraits__spellCheckingType_fn(IUITextInputTraits* __this, int* __retval)
{
    *__retval = __this->spellCheckingType();
}

// public extern iOS.UIKit.UITextAutocapitalizationType autocapitalizationType() [instance] :8406
int IUITextInputTraits::autocapitalizationType()
{
    ::UITextAutocapitalizationType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextAutocapitalizationType, @selector(autocapitalizationType));
    return int(__return);
}

// public extern iOS.UIKit.UITextAutocorrectionType autocorrectionType() [instance] :8412
int IUITextInputTraits::autocorrectionType()
{
    ::UITextAutocorrectionType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextAutocorrectionType, @selector(autocorrectionType));
    return int(__return);
}

// public extern bool enablesReturnKeyAutomatically() [instance] :8442
bool IUITextInputTraits::enablesReturnKeyAutomatically()
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(enablesReturnKeyAutomatically));
    return (bool)__return;
}

// public extern bool isSecureTextEntry() [instance] :8448
bool IUITextInputTraits::isSecureTextEntry()
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isSecureTextEntry));
    return (bool)__return;
}

// public extern iOS.UIKit.UIKeyboardAppearance keyboardAppearance() [instance] :8430
int IUITextInputTraits::keyboardAppearance()
{
    ::UIKeyboardAppearance __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIKeyboardAppearance, @selector(keyboardAppearance));
    return int(__return);
}

// public extern iOS.UIKit.UIKeyboardType keyboardType() [instance] :8424
int IUITextInputTraits::keyboardType()
{
    ::UIKeyboardType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIKeyboardType, @selector(keyboardType));
    return int(__return);
}

// public extern iOS.UIKit.UIReturnKeyType returnKeyType() [instance] :8436
int IUITextInputTraits::returnKeyType()
{
    ::UIReturnKeyType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIReturnKeyType, @selector(returnKeyType));
    return int(__return);
}

// public extern void setAutocapitalizationType(iOS.UIKit.UITextAutocapitalizationType autocapitalizationType) [instance] :8409
void IUITextInputTraits::setAutocapitalizationType(int autocapitalizationType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setAutocapitalizationType:),
        ::UITextAutocapitalizationType(autocapitalizationType_));
}

// public extern void setAutocorrectionType(iOS.UIKit.UITextAutocorrectionType autocorrectionType) [instance] :8415
void IUITextInputTraits::setAutocorrectionType(int autocorrectionType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setAutocorrectionType:),
        ::UITextAutocorrectionType(autocorrectionType_));
}

// public extern void setEnablesReturnKeyAutomatically(bool enablesReturnKeyAutomatically) [instance] :8445
void IUITextInputTraits::setEnablesReturnKeyAutomatically(bool enablesReturnKeyAutomatically_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setEnablesReturnKeyAutomatically:),
        (BOOL)enablesReturnKeyAutomatically_);
}

// public extern void setKeyboardAppearance(iOS.UIKit.UIKeyboardAppearance keyboardAppearance) [instance] :8433
void IUITextInputTraits::setKeyboardAppearance(int keyboardAppearance_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setKeyboardAppearance:),
        ::UIKeyboardAppearance(keyboardAppearance_));
}

// public extern void setKeyboardType(iOS.UIKit.UIKeyboardType keyboardType) [instance] :8427
void IUITextInputTraits::setKeyboardType(int keyboardType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setKeyboardType:),
        ::UIKeyboardType(keyboardType_));
}

// public extern void setReturnKeyType(iOS.UIKit.UIReturnKeyType returnKeyType) [instance] :8439
void IUITextInputTraits::setReturnKeyType(int returnKeyType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setReturnKeyType:),
        ::UIReturnKeyType(returnKeyType_));
}

// public extern void setSecureTextEntry(bool secureTextEntry) [instance] :8451
void IUITextInputTraits::setSecureTextEntry(bool secureTextEntry_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setSecureTextEntry:),
        (BOOL)secureTextEntry_);
}

// public extern void setSpellCheckingType(iOS.UIKit.UITextSpellCheckingType spellCheckingType) [instance] :8421
void IUITextInputTraits::setSpellCheckingType(int spellCheckingType_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setSpellCheckingType:),
        ::UITextSpellCheckingType(spellCheckingType_));
}

// public extern iOS.UIKit.UITextSpellCheckingType spellCheckingType() [instance] :8418
int IUITextInputTraits::spellCheckingType()
{
    ::UITextSpellCheckingType __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UITextSpellCheckingType, @selector(spellCheckingType));
    return int(__return);
}
// }

}}}} // ::g::iOS::UIKit::Interop
