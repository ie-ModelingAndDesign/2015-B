// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <ObjC.Bindings.Object.h>
#include <ObjC.Object.h>
#include <objc/objc.h>
namespace g{namespace iOS{namespace Foundation{struct NSObject;}}}

namespace g{
namespace iOS{
namespace Foundation{

// public extern class NSObject :47420
// {
struct NSObject_type : ::g::ObjC::Bindings::Object_type
{
    void(*fp_init)(::g::iOS::Foundation::NSObject*);
};

NSObject_type* NSObject_typeof();
void NSObject__ctor_2_fn(NSObject* __this);
void NSObject__ctor_3_fn(NSObject* __this, ::id* __id1);
void NSObject__init_fn(NSObject* __this);
void NSObject__mutableCopy_fn(NSObject* __this, ::id* __retval);

struct NSObject : ::g::ObjC::Bindings::Object
{
    void ctor_2();
    void ctor_3(::id __id1);
    void init() { (((NSObject_type*)__type)->fp_init)(this); }
    ::id mutableCopy();
    static void init(NSObject* __this) { NSObject__init_fn(__this); }
};
// }

}}} // ::g::iOS::Foundation
