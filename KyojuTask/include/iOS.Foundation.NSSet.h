// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.INSCopying.h>
#include <iOS.Foundation.NSObject.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace Foundation{struct NSArray;}}}
namespace g{namespace iOS{namespace Foundation{struct NSSet;}}}

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSSet :50339
// {
struct NSSet_type : ::g::iOS::Foundation::NSObject_type
{
    ::g::iOS::Foundation::INSCopying interface1;
};

NSSet_type* NSSet_typeof();
void NSSet__allObjects_fn(NSSet* __this, ::g::iOS::Foundation::NSArray** __retval);
void NSSet__get_AllObjects_fn(NSSet* __this, ::g::iOS::Foundation::NSArray** __retval);
void NSSet__init_fn(NSSet* __this);

struct NSSet : ::g::iOS::Foundation::NSObject
{
    ::g::iOS::Foundation::NSArray* allObjects();
    ::g::iOS::Foundation::NSArray* AllObjects();
};
// }

}}} // ::g::iOS::Foundation
