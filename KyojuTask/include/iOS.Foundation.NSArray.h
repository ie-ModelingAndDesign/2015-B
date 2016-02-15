// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.INSCopying.h>
#include <iOS.Foundation.NSObject.h>
#include <ObjC.Object.h>
#include <objc/objc.h>
namespace g{namespace iOS{namespace Foundation{struct NSArray;}}}

namespace g{
namespace iOS{
namespace Foundation{

// public extern class NSArray :35375
// {
struct NSArray_type : ::g::iOS::Foundation::NSObject_type
{
    ::g::iOS::Foundation::INSCopying interface1;
};

NSArray_type* NSArray_typeof();
void NSArray__ctor_4_fn(NSArray* __this);
void NSArray__count_fn(NSArray* __this, uint64_t* __retval);
void NSArray__get_Count_fn(NSArray* __this, uint64_t* __retval);
void NSArray__init_fn(NSArray* __this);
void NSArray__objectAtIndex_fn(NSArray* __this, uint64_t* index_, ::id* __retval);

struct NSArray : ::g::iOS::Foundation::NSObject
{
    void ctor_4();
    uint64_t count();
    uint64_t Count();
    ::id objectAtIndex(uint64_t index_);
};
// }

}}} // ::g::iOS::Foundation
