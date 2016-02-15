// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/MyFirstProject.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property.h>
#include <Fuse.Controls.Circle.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property :66
// {
::g::Uno::UX::Property_type* MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Controls::Circle_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property, _obj), 0);
    return type;
}

// public MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property(Fuse.Controls.Circle obj) :69
void MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property__ctor_1_fn(MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property* __this, ::g::Fuse::Controls::Circle* obj)
{
    __this->ctor_1(obj);
}

// public MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property New(Fuse.Controls.Circle obj) :69
void MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property__New1_fn(::g::Fuse::Controls::Circle* obj, MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property** __retval)
{
    *__retval = MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property::New1(obj);
}

// protected override sealed float OnGet() :70
void MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property__OnGet_fn(MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->EndAngleDegrees(), void();
}

// protected override sealed void OnSet(float v, object origin) :71
void MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property__OnSet_fn(MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->EndAngleDegrees(v_);
}

// public MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property(Fuse.Controls.Circle obj) [instance] :69
void MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property::ctor_1(::g::Fuse::Controls::Circle* obj)
{
    ctor_();
    _obj = obj;
}

// public MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property New(Fuse.Controls.Circle obj) [static] :69
MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property* MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property::New1(::g::Fuse::Controls::Circle* obj)
{
    MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property* obj1 = (MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property*)uNew(MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
