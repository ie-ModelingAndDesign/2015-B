// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIResponder
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIResponder*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIResponder_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.UIResponder.h>
#include <ObjC.ID.h>
#include <Uno.Bool.h>

namespace g{
namespace iOS{
namespace UIKit{

// public extern class UIResponder :80187
// {
::g::iOS::Foundation::NSObject_type* UIResponder_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UIResponder);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSObject_type);
    type = (::g::iOS::Foundation::NSObject_type*)uClassType::New("iOS.UIKit.UIResponder", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::Foundation::NSObject_type, interface0));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public UIResponder() :80190
void UIResponder__ctor_4_fn(UIResponder* __this)
{
    __this->ctor_4();
}

// public UIResponder(ObjC.ID __id) :80192
void UIResponder__ctor_5_fn(UIResponder* __this, ::id* __id1)
{
    __this->ctor_5(*__id1);
}

// public extern bool becomeFirstResponder() :80250
void UIResponder__becomeFirstResponder_fn(UIResponder* __this, bool* __retval)
{
    *__retval = __this->becomeFirstResponder();
}

// public extern bool isFirstResponder() :80259
void UIResponder__isFirstResponder_fn(UIResponder* __this, bool* __retval)
{
    *__retval = __this->isFirstResponder();
}

// public extern bool resignFirstResponder() :80256
void UIResponder__resignFirstResponder_fn(UIResponder* __this, bool* __retval)
{
    *__retval = __this->resignFirstResponder();
}

// public UIResponder() [instance] :80190
void UIResponder::ctor_4()
{
    ctor_2();
}

// public UIResponder(ObjC.ID __id) [instance] :80192
void UIResponder::ctor_5(::id __id1)
{
    ctor_3(__id1);
}

// public extern bool becomeFirstResponder() [instance] :80250
bool UIResponder::becomeFirstResponder()
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(becomeFirstResponder));
    return (bool)__return;
}

// public extern bool isFirstResponder() [instance] :80259
bool UIResponder::isFirstResponder()
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isFirstResponder));
    return (bool)__return;
}

// public extern bool resignFirstResponder() [instance] :80256
bool UIResponder::resignFirstResponder()
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(resignFirstResponder));
    return (bool)__return;
}
// }

}}} // ::g::iOS::UIKit
