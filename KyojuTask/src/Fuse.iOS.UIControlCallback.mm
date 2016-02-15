// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.24.6/UIControlEvents/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIControlCallback
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::Fuse::iOS::UIControlCallback*
#define uObjC_UNO_TYPE_OBJECT ::g::Fuse::iOS::UIControlCallback_typeof()

#include "Implementation/UIControlCallback.h"
#include <uObjC.Wrapper.h>
#include <Fuse.iOS.UIControlCallback.h>
#include <ObjC.Selector.h>

namespace g{
namespace Fuse{
namespace iOS{

// internal extern class UIControlCallback :77
// {
UIControlCallback_type* UIControlCallback_typeof()
{
    static uSStrong<UIControlCallback_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UIControlCallback);
    options.TypeSize = sizeof(UIControlCallback_type);
    type = (UIControlCallback_type*)uClassType::New("Fuse.iOS.UIControlCallback", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_callbackForEvent = UIControlCallback__callbackForEvent_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(UIControlCallback_type, interface0));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public UIControlCallback() :80
void UIControlCallback__ctor_4_fn(UIControlCallback* __this)
{
    __this->ctor_4();
}

// public virtual extern void callbackForEvent(iOS.Foundation.NSObject sender, iOS.Foundation.NSObject theEvent) :90
void UIControlCallback__callbackForEvent_fn(UIControlCallback* __this, ::g::iOS::Foundation::NSObject* sender_, ::g::iOS::Foundation::NSObject* theEvent_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(__this, void, @selector(callback:forEvent:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)sender_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)theEvent_));
}

// public extern ObjC.Selector callbackSelector() :95
void UIControlCallback__callbackSelector_fn(UIControlCallback* __this, uObjC::Selector* __retval)
{
    *__retval = __this->callbackSelector();
}

// public ObjC.Selector get_CallbackSelector() :86
void UIControlCallback__get_CallbackSelector_fn(UIControlCallback* __this, uObjC::Selector* __retval)
{
    *__retval = __this->CallbackSelector();
}

// public UIControlCallback() [instance] :80
void UIControlCallback::ctor_4()
{
    ctor_2();
}

// public extern ObjC.Selector callbackSelector() [instance] :95
uObjC::Selector UIControlCallback::callbackSelector()
{
    uObjC::Selector __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, uObjC::Selector, @selector(callbackSelector));
    return (uObjC::Selector)__return;
}

// public ObjC.Selector get_CallbackSelector() [instance] :86
uObjC::Selector UIControlCallback::CallbackSelector()
{
    return callbackSelector();
}
// }

}}} // ::g::Fuse::iOS
