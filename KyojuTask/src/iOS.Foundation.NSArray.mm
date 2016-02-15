// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSArray
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSArray*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSArray_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSArray.h>
#include <ObjC.ID.h>
#include <Uno.ULong.h>

namespace g{
namespace iOS{
namespace Foundation{

// public extern class NSArray :35375
// {
NSArray_type* NSArray_typeof()
{
    static uSStrong<NSArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSArray);
    options.TypeSize = sizeof(NSArray_type);
    type = (NSArray_type*)uClassType::New("iOS.Foundation.NSArray", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_init = (void(*)(::g::iOS::Foundation::NSObject*))NSArray__init_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(NSArray_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(NSArray_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public NSArray() :35378
void NSArray__ctor_4_fn(NSArray* __this)
{
    __this->ctor_4();
}

// public extern ulong count() :35420
void NSArray__count_fn(NSArray* __this, uint64_t* __retval)
{
    *__retval = __this->count();
}

// public ulong get_Count() :35387
void NSArray__get_Count_fn(NSArray* __this, uint64_t* __retval)
{
    *__retval = __this->Count();
}

// public override extern void init() :35414
void NSArray__init_fn(NSArray* __this)
{
    uObjC_DO_INIT(__this, @selector(init));
}

// public extern ObjC.ID objectAtIndex(ulong index) :35411
void NSArray__objectAtIndex_fn(NSArray* __this, uint64_t* index_, ::id* __retval)
{
    *__retval = __this->objectAtIndex(*index_);
}

// public NSArray() [instance] :35378
void NSArray::ctor_4()
{
    ctor_2();
}

// public extern ulong count() [instance] :35420
uint64_t NSArray::count()
{
    unsigned long __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, unsigned long, @selector(count));
    return (uint64_t)__return;
}

// public ulong get_Count() [instance] :35387
uint64_t NSArray::Count()
{
    return count();
}

// public extern ObjC.ID objectAtIndex(ulong index) [instance] :35411
::id NSArray::objectAtIndex(uint64_t index_)
{
    uint64_t index__ = index_;
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::id, @selector(objectAtIndex:),
        (unsigned long)index__);
    return (::id)__return;
}
// }

}}} // ::g::iOS::Foundation
