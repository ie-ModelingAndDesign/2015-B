// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSMutableArray
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSMutableArray*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSMutableArray_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSMutableArray.h>
#include <ObjC.ID.h>

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSMutableArray :45167
// {
::g::iOS::Foundation::NSArray_type* NSMutableArray_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSMutableArray);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSArray_type);
    type = (::g::iOS::Foundation::NSArray_type*)uClassType::New("iOS.Foundation.NSMutableArray", options);
    type->SetBase(::g::iOS::Foundation::NSArray_typeof());
    type->fp_ctor_ = (void*)NSMutableArray__New7_fn;
    type->fp_init = (void(*)(::g::iOS::Foundation::NSObject*))NSMutableArray__init_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::Foundation::NSArray_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(::g::iOS::Foundation::NSArray_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public NSMutableArray() :45170
void NSMutableArray__ctor_6_fn(NSMutableArray* __this)
{
    __this->ctor_6();
}

// public extern void addObject(ObjC.ID anObject) :45178
void NSMutableArray__addObject_fn(NSMutableArray* __this, ::id* anObject_)
{
    __this->addObject(*anObject_);
}

// public override sealed extern void init() :45193
void NSMutableArray__init_fn(NSMutableArray* __this)
{
    uObjC_DO_INIT(__this, @selector(init));
}

// public NSMutableArray New() :45170
void NSMutableArray__New7_fn(NSMutableArray** __retval)
{
    *__retval = NSMutableArray::New7();
}

// public NSMutableArray() [instance] :45170
void NSMutableArray::ctor_6()
{
    ctor_4();
}

// public extern void addObject(ObjC.ID anObject) [instance] :45178
void NSMutableArray::addObject(::id anObject_)
{
    ::id anObject__ = anObject_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(addObject:),
        (::id)anObject__);
}

// public NSMutableArray New() [static] :45170
NSMutableArray* NSMutableArray::New7()
{
    NSMutableArray* obj1 = (NSMutableArray*)uNew(NSMutableArray_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

}}} // ::g::iOS::Foundation
