// This file was generated based on '/usr/local/share/uno/Packages/ObjC/0.24.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <ObjC.Object.h>
#include <objc/objc.h>
#include <Uno.Object.h>
#include <uObjC.h>
namespace g{namespace ObjC{namespace Bindings{struct Object;}}}

namespace g{
namespace ObjC{
namespace Bindings{

// public extern class Object :81
// {
struct Object_type : uType
{
    ::g::ObjC::Object interface0;
};

Object_type* Object_typeof();
void Object__ctor__fn(Object* __this);
void Object__ctor_1_fn(Object* __this, ::id* handle);
void Object____clearHandle1_fn(Object* __this);
void Object____initHandle1_fn(Object* __this, ::id* handle_);
void Object__Equals_fn(Object* __this, uObject* obj, bool* __retval);
void Object__GetHashCode_fn(Object* __this, int* __retval);
void Object__get_Handle_fn(Object* __this, ::id* __retval);
void Object__isEqual_fn(Object* __this, Object* obj_, bool* __retval);
void Object__isKindOfClass_fn(Object* __this, ::Class* cls_, bool* __retval);
void Object__op_Implicit_fn(Object* obj, ::id* __retval);
void Object__respondsToSelector_fn(Object* __this, uObjC::Selector* sel_, bool* __retval);
void Object__ToString_fn(Object* __this, uString** __retval);

struct Object : uObject
{
    ::id __handle1;

    void ctor_();
    void ctor_1(::id handle);
    void __clearHandle1();
    void __initHandle1(::id handle_);
    ::id Handle();
    bool isEqual(Object* obj_);
    bool isKindOfClass(::Class cls_);
    bool respondsToSelector(uObjC::Selector sel_);
    static ::id op_Implicit(Object* obj);
};
// }

}}} // ::g::ObjC::Bindings
