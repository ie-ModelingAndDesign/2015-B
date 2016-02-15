// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSNumber
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSNumber*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSNumber_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSNumber.h>
#include <ObjC.ID.h>
#include <Uno.Int.h>

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSNumber :46461
// {
::g::iOS::Foundation::NSValue_type* NSNumber_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSNumber);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSValue_type);
    type = (::g::iOS::Foundation::NSValue_type*)uClassType::New("iOS.Foundation.NSNumber", options);
    type->SetBase(::g::iOS::Foundation::NSValue_typeof());
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::Foundation::NSValue_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(::g::iOS::Foundation::NSValue_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public NSNumber(ObjC.ID __id) :46466
void NSNumber__ctor_7_fn(NSNumber* __this, ::id* __id1)
{
    __this->ctor_7(*__id1);
}

// public extern int intValue() :46610
void NSNumber__intValue_fn(NSNumber* __this, int* __retval)
{
    *__retval = __this->intValue();
}

// public int get_IntValue() :46488
void NSNumber__get_IntValue_fn(NSNumber* __this, int* __retval)
{
    *__retval = __this->IntValue();
}

// public NSNumber New(ObjC.ID __id) :46466
void NSNumber__New8_fn(::id* __id1, NSNumber** __retval)
{
    *__retval = NSNumber::New8(*__id1);
}

// public NSNumber(ObjC.ID __id) [instance] :46466
void NSNumber::ctor_7(::id __id1)
{
    ctor_5(__id1);
}

// public extern int intValue() [instance] :46610
int NSNumber::intValue()
{
    int __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, int, @selector(intValue));
    return __return;
}

// public int get_IntValue() [instance] :46488
int NSNumber::IntValue()
{
    return intValue();
}

// public NSNumber New(ObjC.ID __id) [static] :46466
NSNumber* NSNumber::New8(::id __id1)
{
    NSNumber* obj2 = (NSNumber*)uNew(NSNumber_typeof());
    obj2->ctor_7(__id1);
    return obj2;
}
// }

}}} // ::g::iOS::Foundation
