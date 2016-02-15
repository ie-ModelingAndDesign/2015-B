// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/MyFirstProject.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MyFirstProject_FuseScaling_float_Factor_Property.h>
#include <Fuse.Scaling.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class MyFirstProject_FuseScaling_float_Factor_Property :59
// {
::g::Uno::UX::Property_type* MyFirstProject_FuseScaling_float_Factor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MyFirstProject_FuseScaling_float_Factor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("MyFirstProject_FuseScaling_float_Factor_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))MyFirstProject_FuseScaling_float_Factor_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))MyFirstProject_FuseScaling_float_Factor_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Scaling_typeof();
    type->SetFields(2,
        ::g::Fuse::Scaling_typeof(), offsetof(::g::MyFirstProject_FuseScaling_float_Factor_Property, _obj), 0);
    return type;
}

// public MyFirstProject_FuseScaling_float_Factor_Property(Fuse.Scaling obj) :62
void MyFirstProject_FuseScaling_float_Factor_Property__ctor_1_fn(MyFirstProject_FuseScaling_float_Factor_Property* __this, ::g::Fuse::Scaling* obj)
{
    __this->ctor_1(obj);
}

// public MyFirstProject_FuseScaling_float_Factor_Property New(Fuse.Scaling obj) :62
void MyFirstProject_FuseScaling_float_Factor_Property__New1_fn(::g::Fuse::Scaling* obj, MyFirstProject_FuseScaling_float_Factor_Property** __retval)
{
    *__retval = MyFirstProject_FuseScaling_float_Factor_Property::New1(obj);
}

// protected override sealed float OnGet() :63
void MyFirstProject_FuseScaling_float_Factor_Property__OnGet_fn(MyFirstProject_FuseScaling_float_Factor_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Factor(), void();
}

// protected override sealed void OnSet(float v, object origin) :64
void MyFirstProject_FuseScaling_float_Factor_Property__OnSet_fn(MyFirstProject_FuseScaling_float_Factor_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->Factor(v_);
}

// public MyFirstProject_FuseScaling_float_Factor_Property(Fuse.Scaling obj) [instance] :62
void MyFirstProject_FuseScaling_float_Factor_Property::ctor_1(::g::Fuse::Scaling* obj)
{
    ctor_();
    _obj = obj;
}

// public MyFirstProject_FuseScaling_float_Factor_Property New(Fuse.Scaling obj) [static] :62
MyFirstProject_FuseScaling_float_Factor_Property* MyFirstProject_FuseScaling_float_Factor_Property::New1(::g::Fuse::Scaling* obj)
{
    MyFirstProject_FuseScaling_float_Factor_Property* obj1 = (MyFirstProject_FuseScaling_float_Factor_Property*)uNew(MyFirstProject_FuseScaling_float_Factor_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
