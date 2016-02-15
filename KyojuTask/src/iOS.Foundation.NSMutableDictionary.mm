// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSMutableDictionary
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSMutableDictionary*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSMutableDictionary_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSMutableDictionary.h>
#include <ObjC.ID.h>
#include <Uno.ULong.h>

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSMutableDictionary :45520
// {
::g::iOS::Foundation::NSDictionary_type* NSMutableDictionary_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSDictionary_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSMutableDictionary);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSDictionary_type);
    type = (::g::iOS::Foundation::NSDictionary_type*)uClassType::New("iOS.Foundation.NSMutableDictionary", options);
    type->SetBase(::g::iOS::Foundation::NSDictionary_typeof());
    type->fp_init = (void(*)(::g::iOS::Foundation::NSObject*))NSMutableDictionary__init_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::Foundation::NSDictionary_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(::g::iOS::Foundation::NSDictionary_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public NSMutableDictionary(ObjC.ID __id) :45525
void NSMutableDictionary__ctor_7_fn(NSMutableDictionary* __this, ::id* __id1)
{
    __this->ctor_7(*__id1);
}

// public static extern ObjC.ID _dictionaryWithCapacity(ulong numItems) :45552
void NSMutableDictionary___dictionaryWithCapacity_fn(uint64_t* numItems_, ::id* __retval)
{
    *__retval = NSMutableDictionary::_dictionaryWithCapacity(*numItems_);
}

// public override sealed extern void init() :45537
void NSMutableDictionary__init_fn(NSMutableDictionary* __this)
{
    uObjC_DO_INIT(__this, @selector(init));
}

// public NSMutableDictionary New(ObjC.ID __id) :45525
void NSMutableDictionary__New8_fn(::id* __id1, NSMutableDictionary** __retval)
{
    *__retval = NSMutableDictionary::New8(*__id1);
}

// public extern void setObjectForKey(ObjC.ID anObject, iOS.Foundation.INSCopying aKey) :45534
void NSMutableDictionary__setObjectForKey_fn(NSMutableDictionary* __this, ::id* anObject_, uObject* aKey_)
{
    __this->setObjectForKey(*anObject_, aKey_);
}

// public NSMutableDictionary(ObjC.ID __id) [instance] :45525
void NSMutableDictionary::ctor_7(::id __id1)
{
    ctor_5(__id1);
}

// public extern void setObjectForKey(ObjC.ID anObject, iOS.Foundation.INSCopying aKey) [instance] :45534
void NSMutableDictionary::setObjectForKey(::id anObject_, uObject* aKey_)
{
    ::id anObject__ = anObject_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setObject:forKey:),
        (::id)anObject__,
        uObjC::Lifetime::GetNativeHandle((::uObject *)aKey_, ::g::iOS::Foundation::INSCopying_typeof()));
}

// public static extern ObjC.ID _dictionaryWithCapacity(ulong numItems) [static] :45552
::id NSMutableDictionary::_dictionaryWithCapacity(uint64_t numItems_)
{
    ::id __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::id, @selector(dictionaryWithCapacity:),
        (unsigned long)numItems_);
    return (::id)__return;
}

// public NSMutableDictionary New(ObjC.ID __id) [static] :45525
NSMutableDictionary* NSMutableDictionary::New8(::id __id1)
{
    NSMutableDictionary* obj2 = (NSMutableDictionary*)uNew(NSMutableDictionary_typeof());
    obj2->ctor_7(__id1);
    return obj2;
}
// }

}}} // ::g::iOS::Foundation
