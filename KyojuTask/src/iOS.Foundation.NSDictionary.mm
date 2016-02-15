// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSDictionary
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSDictionary*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSDictionary_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSArray.h>
#include <iOS.Foundation.NSDictionary.h>
#include <ObjC.ID.h>

namespace g{
namespace iOS{
namespace Foundation{

// public extern class NSDictionary :39202
// {
NSDictionary_type* NSDictionary_typeof()
{
    static uSStrong<NSDictionary_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSDictionary);
    options.TypeSize = sizeof(NSDictionary_type);
    type = (NSDictionary_type*)uClassType::New("iOS.Foundation.NSDictionary", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_init = (void(*)(::g::iOS::Foundation::NSObject*))NSDictionary__init_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(NSDictionary_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(NSDictionary_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public NSDictionary(ObjC.ID __id) :39207
void NSDictionary__ctor_5_fn(NSDictionary* __this, ::id* __id1)
{
    __this->ctor_5(*__id1);
}

// public extern iOS.Foundation.NSArray allKeys() :39370
void NSDictionary__allKeys_fn(NSDictionary* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->allKeys();
}

// public iOS.Foundation.NSArray get_AllKeys() :39219
void NSDictionary__get_AllKeys_fn(NSDictionary* __this, ::g::iOS::Foundation::NSArray** __retval)
{
    *__retval = __this->AllKeys();
}

// public override extern void init() :39244
void NSDictionary__init_fn(NSDictionary* __this)
{
    uObjC_DO_INIT(__this, @selector(init));
}

// public NSDictionary New(ObjC.ID __id) :39207
void NSDictionary__New6_fn(::id* __id1, NSDictionary** __retval)
{
    *__retval = NSDictionary::New6(*__id1);
}

// public extern ObjC.ID objectForKey(ObjC.ID aKey) :39238
void NSDictionary__objectForKey_fn(NSDictionary* __this, ::id* aKey_, ::id* __retval)
{
    *__retval = __this->objectForKey(*aKey_);
}

// public NSDictionary(ObjC.ID __id) [instance] :39207
void NSDictionary::ctor_5(::id __id1)
{
    ctor_3(__id1);
}

// public extern iOS.Foundation.NSArray allKeys() [instance] :39370
::g::iOS::Foundation::NSArray* NSDictionary::allKeys()
{
    ::NSArray* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSArray*, @selector(allKeys));
    return (::g::iOS::Foundation::NSArray*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSArray_typeof());
}

// public iOS.Foundation.NSArray get_AllKeys() [instance] :39219
::g::iOS::Foundation::NSArray* NSDictionary::AllKeys()
{
    return allKeys();
}

// public extern ObjC.ID objectForKey(ObjC.ID aKey) [instance] :39238
::id NSDictionary::objectForKey(::id aKey_)
{
    ::id aKey__ = aKey_;
    ::id __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::id, @selector(objectForKey:),
        (::id)aKey__);
    return (::id)__return;
}

// public NSDictionary New(ObjC.ID __id) [static] :39207
NSDictionary* NSDictionary::New6(::id __id1)
{
    NSDictionary* obj2 = (NSDictionary*)uNew(NSDictionary_typeof());
    obj2->ctor_5(__id1);
    return obj2;
}
// }

}}} // ::g::iOS::Foundation
