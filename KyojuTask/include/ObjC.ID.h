// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Compiler/ExportTargetInterop/Foreign/ObjC/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <objc/objc.h>
#include <Uno.Object.h>

namespace g{
namespace ObjC{

// public extern struct ID :9
// {
uStructType* ID_typeof();
void ID__op_Equality_fn(::id* a, ::id* b, bool* __retval);
void ID__op_Inequality_fn(::id* a, ::id* b, bool* __retval);

struct ID
{
    static ::id Null_;
    static ::id& Null() { return Null_; }

    static bool op_Equality(::id a, ::id b);
    static bool op_Inequality(::id a, ::id b);
};
// }

}} // ::g::ObjC
