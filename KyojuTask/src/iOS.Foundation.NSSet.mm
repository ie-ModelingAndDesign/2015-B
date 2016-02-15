// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSSet
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSSet*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSSet_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSArray.h>
#include <iOS.Foundation.NSSet.h>

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSSet :50339
// {
NSSet_type* NSSet_typeof()
{
    static uSStrong<NSSet_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSSet);
    options.TypeSize = sizeof(NSSet_type);
    type = (NSSet_type*)uClassType::New("iOS.Foundation.NSSet", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_init = (void(*)(::g::iOS::Foundation::NSObject*))NSSet__init_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(NSSet_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(NSSet_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public extern iOS.Foundation.NSArray allObjects() :50455
void NSSet__allObjects_fn(NSSet* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->allObjects();
}

// public iOS.Foundation.NSArray get_AllObjects() :50356
void NSSet__get_AllObjects_fn(NSSet* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->AllObjects();
}

// public override sealed extern void init() :50371
void NSSet__init_fn(NSSet* __this)
{
    uObjC_DO_INIT(__this, @selector(init));
}

// public extern iOS.Foundation.NSArray allObjects() [instance] :50455
::g::iOS::Foundation::NSArray* NSSet::allObjects()
{
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSArray*, @selector(allObjects));
    return (::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSArray_typeof());
}

// public iOS.Foundation.NSArray get_AllObjects() [instance] :50356
::g::iOS::Foundation::NSArray* NSSet::AllObjects()
{
    return allObjects();
}
// }

}}} // ::g::iOS::Foundation
