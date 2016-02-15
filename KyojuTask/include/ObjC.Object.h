// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Compiler/ExportTargetInterop/Foreign/ObjC/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <objc/objc.h>
#include <Uno.Object.h>

namespace g{
namespace ObjC{

// public abstract extern interface Object :24
// {
uInterfaceType* Object_typeof();

struct Object
{
    void(*fp_get_Handle)(uObject*, ::id*);
    static ::id Handle(const uInterface& __this) { ::id __retval; return __this.VTable<Object>()->fp_get_Handle(__this, &__retval), __retval; }
};
// }

}} // ::g::ObjC
