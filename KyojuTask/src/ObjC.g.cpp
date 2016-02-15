// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <ObjC.Class.h>
#include <ObjC.ID.h>
#include <ObjC.Object.h>
#include <ObjC.Selector.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <uObjC.Lifetime.h>

namespace g{
namespace ObjC{

// ../../../../usr/local/share/uno/Packages/ObjC/0.24.0/$.uno(10)
// --------------------------------------------------------------

// public extern struct Class :10
// {
uStructType* Class_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::Class);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("ObjC.Class", options);
    return type;
}

// private static extern ObjC.Class __getClass(Uno.Type type) :13
void Class____getClass1_fn(uType* type_, ::Class* __retval)
{
    *__retval = Class::__getClass1(type_);
}

// public static implicit operator ObjC.Class(Uno.Type type) :15
void Class__op_Implicit_fn(uType* type, ::Class* __retval)
{
    *__retval = Class::op_Implicit(type);
}

// private static extern ObjC.Class __getClass(Uno.Type type) [static] :13
::Class Class::__getClass1(uType* type_)
{
    return type_->Type == ::uTypeTypeClass ? uObjC::Lifetime::GetNativeClass(type_) : Nil;
}

// public static implicit operator ObjC.Class(Uno.Type type) [static] :15
::Class Class::op_Implicit(uType* type)
{
    return Class::__getClass1(type);
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Compiler/ExportTargetInterop/Foreign/ObjC/$.uno(24)
// ----------------------------------------------------------------------------------------------------------------------

// public abstract extern interface Object :24
// {
uInterfaceType* Object_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("ObjC.Object", 0, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/ObjC/0.24.0/$.uno(52)
// --------------------------------------------------------------

// public extern struct Selector :52
// {
uStructType* Selector_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uObjC::Selector);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("ObjC.Selector", options);
    return type;
}

// private static extern ObjC.Selector __getSelector(string str) :55
void Selector____getSelector1_fn(uString* str_, uObjC::Selector* __retval)
{
    *__retval = Selector::__getSelector1(str_);
}

// public static implicit operator ObjC.Selector(string str) :64
void Selector__op_Implicit1_fn(uString* str, uObjC::Selector* __retval)
{
    *__retval = Selector::op_Implicit1(str);
}

// private static extern ObjC.Selector __getSelector(string str) [static] :55
uObjC::Selector Selector::__getSelector1(uString* str_)
{
    return uObjC::NativeSelector(str_);
}

// public static implicit operator ObjC.Selector(string str) [static] :64
uObjC::Selector Selector::op_Implicit1(uString* str)
{
    return Selector::__getSelector1(str);
}
// }

}} // ::g::ObjC
