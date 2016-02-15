// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIControl
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIControl*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIControl_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.UIControl.h>
#include <iOS.UIKit.UIControlEvents.h>
#include <ObjC.ID.h>
#include <ObjC.Selector.h>

namespace g{
namespace iOS{
namespace UIKit{

// public extern class UIControl :73751
// {
::g::iOS::UIKit::UIView_type* UIControl_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UIControl);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIView_type);
    type = (::g::iOS::UIKit::UIView_type*)uClassType::New("iOS.UIKit.UIControl", options);
    type->SetBase(::g::iOS::UIKit::UIView_typeof());
    type->fp_ctor_ = (void*)UIControl__New9_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface0));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public UIControl() :73754
void UIControl__ctor_8_fn(UIControl* __this)
{
    __this->ctor_8();
}

// public UIControl(ObjC.ID __id) :73756
void UIControl__ctor_9_fn(UIControl* __this, ::id* __id1)
{
    __this->ctor_9(*__id1);
}

// public extern void addTargetActionForControlEvents(ObjC.ID target, ObjC.Selector action, iOS.UIKit.UIControlEvents controlEvents) :73819
void UIControl__addTargetActionForControlEvents_fn(UIControl* __this, ::id* target_, uObjC::Selector* action_, uint32_t* controlEvents_)
{
    __this->addTargetActionForControlEvents(*target_, *action_, *controlEvents_);
}

// public UIControl New() :73754
void UIControl__New9_fn(UIControl** __retval)
{
    *__retval = UIControl::New9();
}

// public extern void removeTargetActionForControlEvents(ObjC.ID target, ObjC.Selector action, iOS.UIKit.UIControlEvents controlEvents) :73822
void UIControl__removeTargetActionForControlEvents_fn(UIControl* __this, ::id* target_, uObjC::Selector* action_, uint32_t* controlEvents_)
{
    __this->removeTargetActionForControlEvents(*target_, *action_, *controlEvents_);
}

// public UIControl() [instance] :73754
void UIControl::ctor_8()
{
    ctor_6();
}

// public UIControl(ObjC.ID __id) [instance] :73756
void UIControl::ctor_9(::id __id1)
{
    ctor_7(__id1);
}

// public extern void addTargetActionForControlEvents(ObjC.ID target, ObjC.Selector action, iOS.UIKit.UIControlEvents controlEvents) [instance] :73819
void UIControl::addTargetActionForControlEvents(::id target_, uObjC::Selector action_, uint32_t controlEvents_)
{
    ::id target__ = target_;
    uObjC::Selector action__ = action_;
    uint32_t controlEvents__ = controlEvents_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(addTarget:action:forControlEvents:),
        (::id)target__,
        (::SEL)action__,
        ::UIControlEvents(controlEvents__));
}

// public extern void removeTargetActionForControlEvents(ObjC.ID target, ObjC.Selector action, iOS.UIKit.UIControlEvents controlEvents) [instance] :73822
void UIControl::removeTargetActionForControlEvents(::id target_, uObjC::Selector action_, uint32_t controlEvents_)
{
    ::id target__ = target_;
    uObjC::Selector action__ = action_;
    uint32_t controlEvents__ = controlEvents_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(removeTarget:action:forControlEvents:),
        (::id)target__,
        (::SEL)action__,
        ::UIControlEvents(controlEvents__));
}

// public UIControl New() [static] :73754
UIControl* UIControl::New9()
{
    UIControl* obj1 = (UIControl*)uNew(UIControl_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

}}} // ::g::iOS::UIKit
