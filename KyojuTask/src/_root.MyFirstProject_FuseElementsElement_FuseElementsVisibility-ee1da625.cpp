// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/MyFirstProject.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MyFirstProject_FuseElementsElement_FuseElementsVisibility-ee1da625.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property :52
// {
::g::Uno::UX::Property_type* MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(2,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property, _obj), 0);
    return type;
}

// public MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property(Fuse.Elements.Element obj) :55
void MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property__ctor_1_fn(MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property* __this, ::g::Fuse::Elements::Element* obj)
{
    __this->ctor_1(obj);
}

// public MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property New(Fuse.Elements.Element obj) :55
void MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property__New1_fn(::g::Fuse::Elements::Element* obj, MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property** __retval)
{
    *__retval = MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property::New1(obj);
}

// protected override sealed Fuse.Elements.Visibility OnGet() :56
void MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property__OnGet_fn(MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property* __this, int* __retval)
{
    return *__retval = uPtr(__this->_obj)->Visibility(), void();
}

// protected override sealed void OnSet(Fuse.Elements.Visibility v, object origin) :57
void MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property__OnSet_fn(MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property* __this, int* v, uObject* origin)
{
    int v_ = *v;
    uPtr(__this->_obj)->Visibility(v_);
}

// public MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property(Fuse.Elements.Element obj) [instance] :55
void MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property::ctor_1(::g::Fuse::Elements::Element* obj)
{
    ctor_();
    _obj = obj;
}

// public MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property New(Fuse.Elements.Element obj) [static] :55
MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property* MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property::New1(::g::Fuse::Elements::Element* obj)
{
    MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property* obj1 = (MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property*)uNew(MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
