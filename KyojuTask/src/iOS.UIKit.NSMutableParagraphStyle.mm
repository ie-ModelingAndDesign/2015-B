// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSMutableParagraphStyle
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::NSMutableParagraphStyle*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::NSMutableParagraphStyle_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.NSLineBreakMode.h>
#include <iOS.UIKit.NSMutableParagraphStyle.h>
#include <iOS.UIKit.NSTextAlignment.h>
#include <ObjC.ID.h>
#include <Uno.Double.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class NSMutableParagraphStyle :45745
// {
::g::iOS::UIKit::NSParagraphStyle_type* NSMutableParagraphStyle_typeof()
{
    static uSStrong< ::g::iOS::UIKit::NSParagraphStyle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSMutableParagraphStyle);
    options.TypeSize = sizeof(::g::iOS::UIKit::NSParagraphStyle_type);
    type = (::g::iOS::UIKit::NSParagraphStyle_type*)uClassType::New("iOS.UIKit.NSMutableParagraphStyle", options);
    type->SetBase(::g::iOS::UIKit::NSParagraphStyle_typeof());
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::NSParagraphStyle_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(::g::iOS::UIKit::NSParagraphStyle_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public NSMutableParagraphStyle(ObjC.ID __id) :45750
void NSMutableParagraphStyle__ctor_7_fn(NSMutableParagraphStyle* __this, ::id* __id1)
{
    __this->ctor_7(*__id1);
}

// public NSMutableParagraphStyle New(ObjC.ID __id) :45750
void NSMutableParagraphStyle__New8_fn(::id* __id1, NSMutableParagraphStyle** __retval)
{
    *__retval = NSMutableParagraphStyle::New8(*__id1);
}

// public extern void setAlignment(iOS.UIKit.NSTextAlignment alignment) :45771
void NSMutableParagraphStyle__setAlignment_fn(NSMutableParagraphStyle* __this, int* alignment_)
{
    __this->setAlignment(*alignment_);
}

// public extern void setLineBreakMode(iOS.UIKit.NSLineBreakMode lineBreakMode) :45795
void NSMutableParagraphStyle__setLineBreakMode_fn(NSMutableParagraphStyle* __this, int* lineBreakMode_)
{
    __this->setLineBreakMode(*lineBreakMode_);
}

// public extern void setLineSpacing(double lineSpacing) :45759
void NSMutableParagraphStyle__setLineSpacing_fn(NSMutableParagraphStyle* __this, double* lineSpacing_)
{
    __this->setLineSpacing(*lineSpacing_);
}

// public NSMutableParagraphStyle(ObjC.ID __id) [instance] :45750
void NSMutableParagraphStyle::ctor_7(::id __id1)
{
    ctor_5(__id1);
}

// public extern void setAlignment(iOS.UIKit.NSTextAlignment alignment) [instance] :45771
void NSMutableParagraphStyle::setAlignment(int alignment_)
{
    int alignment__ = alignment_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setAlignment:),
        ::NSTextAlignment(alignment__));
}

// public extern void setLineBreakMode(iOS.UIKit.NSLineBreakMode lineBreakMode) [instance] :45795
void NSMutableParagraphStyle::setLineBreakMode(int lineBreakMode_)
{
    int lineBreakMode__ = lineBreakMode_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setLineBreakMode:),
        ::NSLineBreakMode(lineBreakMode__));
}

// public extern void setLineSpacing(double lineSpacing) [instance] :45759
void NSMutableParagraphStyle::setLineSpacing(double lineSpacing_)
{
    double lineSpacing__ = lineSpacing_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setLineSpacing:),
        (CGFloat)lineSpacing__);
}

// public NSMutableParagraphStyle New(ObjC.ID __id) [static] :45750
NSMutableParagraphStyle* NSMutableParagraphStyle::New8(::id __id1)
{
    NSMutableParagraphStyle* obj2 = (NSMutableParagraphStyle*)uNew(NSMutableParagraphStyle_typeof());
    obj2->ctor_7(__id1);
    return obj2;
}
// }

}}} // ::g::iOS::UIKit
