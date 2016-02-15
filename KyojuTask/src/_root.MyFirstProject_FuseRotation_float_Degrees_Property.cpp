// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/MyFirstProject.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MyFirstProject_FuseRotation_float_Degrees_Property.h>
#include <Fuse.Rotation.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class MyFirstProject_FuseRotation_float_Degrees_Property :73
// {
::g::Uno::UX::Property_type* MyFirstProject_FuseRotation_float_Degrees_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MyFirstProject_FuseRotation_float_Degrees_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("MyFirstProject_FuseRotation_float_Degrees_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))MyFirstProject_FuseRotation_float_Degrees_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))MyFirstProject_FuseRotation_float_Degrees_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Rotation_typeof();
    type->SetFields(2,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::MyFirstProject_FuseRotation_float_Degrees_Property, _obj), 0);
    return type;
}

// public MyFirstProject_FuseRotation_float_Degrees_Property(Fuse.Rotation obj) :76
void MyFirstProject_FuseRotation_float_Degrees_Property__ctor_1_fn(MyFirstProject_FuseRotation_float_Degrees_Property* __this, ::g::Fuse::Rotation* obj)
{
    __this->ctor_1(obj);
}

// public MyFirstProject_FuseRotation_float_Degrees_Property New(Fuse.Rotation obj) :76
void MyFirstProject_FuseRotation_float_Degrees_Property__New1_fn(::g::Fuse::Rotation* obj, MyFirstProject_FuseRotation_float_Degrees_Property** __retval)
{
    *__retval = MyFirstProject_FuseRotation_float_Degrees_Property::New1(obj);
}

// protected override sealed float OnGet() :77
void MyFirstProject_FuseRotation_float_Degrees_Property__OnGet_fn(MyFirstProject_FuseRotation_float_Degrees_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Degrees(), void();
}

// protected override sealed void OnSet(float v, object origin) :78
void MyFirstProject_FuseRotation_float_Degrees_Property__OnSet_fn(MyFirstProject_FuseRotation_float_Degrees_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->Degrees(v_);
}

// public MyFirstProject_FuseRotation_float_Degrees_Property(Fuse.Rotation obj) [instance] :76
void MyFirstProject_FuseRotation_float_Degrees_Property::ctor_1(::g::Fuse::Rotation* obj)
{
    ctor_();
    _obj = obj;
}

// public MyFirstProject_FuseRotation_float_Degrees_Property New(Fuse.Rotation obj) [static] :76
MyFirstProject_FuseRotation_float_Degrees_Property* MyFirstProject_FuseRotation_float_Degrees_Property::New1(::g::Fuse::Rotation* obj)
{
    MyFirstProject_FuseRotation_float_Degrees_Property* obj1 = (MyFirstProject_FuseRotation_float_Degrees_Property*)uNew(MyFirstProject_FuseRotation_float_Degrees_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
