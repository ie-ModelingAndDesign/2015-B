// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Compiler/ExportTargetInterop/Foreign/ObjC/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <ObjC.ID.h>
#include <Uno.Bool.h>

namespace g{
namespace ObjC{

// public extern struct ID :9
// {
uStructType* ID_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(::id);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("ObjC.ID", options);
    type->SetFields(0,
        ID_typeof(), (uintptr_t)&::g::ObjC::ID::Null_, uFieldFlagsStatic);
    return type;
}

// public static operator ==(ObjC.ID a, ObjC.ID b) :13
void ID__op_Equality_fn(::id* a, ::id* b, bool* __retval)
{
    *__retval = ID::op_Equality(*a, *b);
}

// public static operator !=(ObjC.ID a, ObjC.ID b) :18
void ID__op_Inequality_fn(::id* a, ::id* b, bool* __retval)
{
    *__retval = ID::op_Inequality(*a, *b);
}

::id ID::Null_;

// public static operator ==(ObjC.ID a, ObjC.ID b) [static] :13
bool ID::op_Equality(::id a, ::id b)
{
    return a == b;
}

// public static operator !=(ObjC.ID a, ObjC.ID b) [static] :18
bool ID::op_Inequality(::id a, ::id b)
{
    return a != b;
}
// }

}} // ::g::ObjC
