// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSObject
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSObject_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSObject.h>
#include <ObjC.ID.h>

namespace g{
namespace iOS{
namespace Foundation{

// public extern class NSObject :47420
// {
NSObject_type* NSObject_typeof()
{
    static uSStrong<NSObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NSObject);
    options.TypeSize = sizeof(NSObject_type);
    type = (NSObject_type*)uClassType::New("iOS.Foundation.NSObject", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->fp_init = NSObject__init_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(NSObject_type, interface0));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public NSObject() :47423
void NSObject__ctor_2_fn(NSObject* __this)
{
    __this->ctor_2();
}

// public NSObject(ObjC.ID __id) :47425
void NSObject__ctor_3_fn(NSObject* __this, ::id* __id1)
{
    __this->ctor_3(*__id1);
}

// public virtual extern void init() :47452
void NSObject__init_fn(NSObject* __this)
{
    uObjC_DO_INIT(__this, @selector(init));
}

// public extern ObjC.ID mutableCopy() :47464
void NSObject__mutableCopy_fn(NSObject* __this, ::id* __retval)
{
    *__retval = __this->mutableCopy();
}

// public NSObject() [instance] :47423
void NSObject::ctor_2()
{
    ctor_();
}

// public NSObject(ObjC.ID __id) [instance] :47425
void NSObject::ctor_3(::id __id1)
{
    ctor_1(__id1);
}

// public extern ObjC.ID mutableCopy() [instance] :47464
::id NSObject::mutableCopy()
{
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::id, @selector(mutableCopy));
    return (::id)__return;
}
// }

}}} // ::g::iOS::Foundation
