// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.INSCopying.h>
#include <iOS.Foundation.NSValue.h>
#include <ObjC.Object.h>
#include <objc/objc.h>
namespace g{namespace iOS{namespace Foundation{struct NSNumber;}}}

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSNumber :46461
// {
::g::iOS::Foundation::NSValue_type* NSNumber_typeof();
void NSNumber__ctor_7_fn(NSNumber* __this, ::id* __id1);
void NSNumber__intValue_fn(NSNumber* __this, int* __retval);
void NSNumber__get_IntValue_fn(NSNumber* __this, int* __retval);
void NSNumber__New8_fn(::id* __id1, NSNumber** __retval);

struct NSNumber : ::g::iOS::Foundation::NSValue
{
    void ctor_7(::id __id1);
    int intValue();
    int IntValue();
    static NSNumber* New8(::id __id1);
};
// }

}}} // ::g::iOS::Foundation
