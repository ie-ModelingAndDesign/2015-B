// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Compiler/ExportTargetInterop/Foreign/ObjC/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <ObjC.ID.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.ObjC.Object.h>
static uType* TYPES[1];

namespace g{
namespace Uno{
namespace Compiler{
namespace ExportTargetInterop{
namespace Foreign{
namespace ObjC{

// public sealed extern class Object :34
// {
//  ~Object() :65
static void Object__Finalize_fn(Object* __this)
{
    __this->Handle(::g::ObjC::ID::Null());
}

Object_type* Object_typeof()
{
    static uSStrong<Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(Object_type);
    type = (Object_type*)uClassType::New("Uno.Compiler.ExportTargetInterop.Foreign.ObjC.Object", options);
    type->fp_Finalize = (void(*)(uObject*))Object__Finalize_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))Object__get_Handle_fn;
    ::TYPES[0] = ::g::ObjC::ID_typeof();
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(Object_type, interface0));
    type->SetFields(0,
        ::g::ObjC::ID_typeof(), offsetof(::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object, _handle), 0);
    return type;
}

// public Object(ObjC.ID handle) :60
void Object__ctor__fn(Object* __this, ::id* handle)
{
    __this->ctor_(*handle);
}

// public ObjC.ID get_Handle() :40
void Object__get_Handle_fn(Object* __this, ::id* __retval)
{
    *__retval = __this->Handle();
}

// private void set_Handle(ObjC.ID value) :45
void Object__set_Handle_fn(Object* __this, ::id* value)
{
    __this->Handle(*value);
}

// public Object New(ObjC.ID handle) :60
void Object__New1_fn(::id* handle, Object** __retval)
{
    *__retval = Object::New1(*handle);
}

// public Object(ObjC.ID handle) [instance] :60
void Object::ctor_(::id handle)
{
    _handle = ::g::ObjC::ID::Null();
    Handle(handle);
}

// public ObjC.ID get_Handle() [instance] :40
::id Object::Handle()
{
    return _handle;
}

// private void set_Handle(ObjC.ID value) [instance] :45
void Object::Handle(::id value)
{
    if (::g::ObjC::ID::op_Inequality(value, ::g::ObjC::ID::Null()))
        [value retain];

    if (::g::ObjC::ID::op_Inequality(_handle, ::g::ObjC::ID::Null()))
        [_handle release];

    _handle = value;
}

// public Object New(ObjC.ID handle) [static] :60
Object* Object::New1(::id handle)
{
    Object* obj1 = (Object*)uNew(Object_typeof());
    obj1->ctor_(handle);
    return obj1;
}
// }

}}}}}} // ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC
