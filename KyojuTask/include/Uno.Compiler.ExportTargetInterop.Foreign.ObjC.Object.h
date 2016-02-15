// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Compiler/ExportTargetInterop/Foreign/ObjC/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <ObjC.Object.h>
#include <objc/objc.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{namespace Foreign{namespace ObjC{struct Object;}}}}}}

namespace g{
namespace Uno{
namespace Compiler{
namespace ExportTargetInterop{
namespace Foreign{
namespace ObjC{

// public sealed extern class Object :34
// {
struct Object_type : uType
{
    ::g::ObjC::Object interface0;
};

Object_type* Object_typeof();
void Object__ctor__fn(Object* __this, ::id* handle);
void Object__get_Handle_fn(Object* __this, ::id* __retval);
void Object__set_Handle_fn(Object* __this, ::id* value);
void Object__New1_fn(::id* handle, Object** __retval);

struct Object : uObject
{
    ::id _handle;

    void ctor_(::id handle);
    ::id Handle();
    void Handle(::id value);
    static Object* New1(::id handle);
};
// }

}}}}}} // ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC
