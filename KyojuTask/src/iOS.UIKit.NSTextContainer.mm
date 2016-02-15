// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSTextContainer
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::NSTextContainer*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::NSTextContainer_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.NSTextContainer.h>
#include <Uno.Double.h>
#include <iOS.CoreGraphics.CGSize.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class NSTextContainer :51616
// {
::g::iOS::Foundation::NSObject_type* NSTextContainer_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NSTextContainer);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSObject_type);
    type = (::g::iOS::Foundation::NSObject_type*)uClassType::New("iOS.UIKit.NSTextContainer", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_ctor_ = (void*)NSTextContainer__New5_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::Foundation::NSObject_type, interface0));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public NSTextContainer() :51619
void NSTextContainer__ctor_4_fn(NSTextContainer* __this)
{
    __this->ctor_4();
}

// public extern void initWithSize(iOS.CoreGraphics.CGSize size) :51681
void NSTextContainer__initWithSize_fn(NSTextContainer* __this, ::g::iOS::CoreGraphics::CGSize* size_)
{
    __this->initWithSize(*size_);
}

// public NSTextContainer New() :51619
void NSTextContainer__New5_fn(NSTextContainer** __retval)
{
    *__retval = NSTextContainer::New5();
}

// public extern void setLineFragmentPadding(double lineFragmentPadding) :51711
void NSTextContainer__setLineFragmentPadding_fn(NSTextContainer* __this, double* lineFragmentPadding_)
{
    __this->setLineFragmentPadding(*lineFragmentPadding_);
}

// public NSTextContainer() [instance] :51619
void NSTextContainer::ctor_4()
{
    ctor_2();
}

// public extern void initWithSize(iOS.CoreGraphics.CGSize size) [instance] :51681
void NSTextContainer::initWithSize(::g::iOS::CoreGraphics::CGSize size_)
{
    ::g::iOS::CoreGraphics::CGSize size__ = size_;
    uObjC_DO_INIT(this, @selector(initWithSize:),
        uObjC::Struct::FromUno_CGSize(size__, ::CGSize()));
}

// public extern void setLineFragmentPadding(double lineFragmentPadding) [instance] :51711
void NSTextContainer::setLineFragmentPadding(double lineFragmentPadding_)
{
    double lineFragmentPadding__ = lineFragmentPadding_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setLineFragmentPadding:),
        (CGFloat)lineFragmentPadding__);
}

// public NSTextContainer New() [static] :51619
NSTextContainer* NSTextContainer::New5()
{
    NSTextContainer* obj1 = (NSTextContainer*)uNew(NSTextContainer_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

}}} // ::g::iOS::UIKit
