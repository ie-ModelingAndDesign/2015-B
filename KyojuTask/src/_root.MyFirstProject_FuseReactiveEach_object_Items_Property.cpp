// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/MyFirstProject.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MyFirstProject_FuseReactiveEach_object_Items_Property.h>
#include <Fuse.Reactive.Each.h>
static uType* TYPES[1];

namespace g{

// internal sealed class MyFirstProject_FuseReactiveEach_object_Items_Property :10
// {
::g::Uno::UX::Property_type* MyFirstProject_FuseReactiveEach_object_Items_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MyFirstProject_FuseReactiveEach_object_Items_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("MyFirstProject_FuseReactiveEach_object_Items_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(uObject_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))MyFirstProject_FuseReactiveEach_object_Items_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))MyFirstProject_FuseReactiveEach_object_Items_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Reactive::Each_typeof();
    type->SetFields(2,
        ::g::Fuse::Reactive::Each_typeof(), offsetof(::g::MyFirstProject_FuseReactiveEach_object_Items_Property, _obj), 0);
    return type;
}

// public MyFirstProject_FuseReactiveEach_object_Items_Property(Fuse.Reactive.Each obj) :13
void MyFirstProject_FuseReactiveEach_object_Items_Property__ctor_1_fn(MyFirstProject_FuseReactiveEach_object_Items_Property* __this, ::g::Fuse::Reactive::Each* obj)
{
    __this->ctor_1(obj);
}

// public MyFirstProject_FuseReactiveEach_object_Items_Property New(Fuse.Reactive.Each obj) :13
void MyFirstProject_FuseReactiveEach_object_Items_Property__New1_fn(::g::Fuse::Reactive::Each* obj, MyFirstProject_FuseReactiveEach_object_Items_Property** __retval)
{
    *__retval = MyFirstProject_FuseReactiveEach_object_Items_Property::New1(obj);
}

// protected override sealed object OnGet() :14
void MyFirstProject_FuseReactiveEach_object_Items_Property__OnGet_fn(MyFirstProject_FuseReactiveEach_object_Items_Property* __this, uObject** __retval)
{
    return *__retval = uPtr(__this->_obj)->Items(), void();
}

// protected override sealed void OnSet(object v, object origin) :15
void MyFirstProject_FuseReactiveEach_object_Items_Property__OnSet_fn(MyFirstProject_FuseReactiveEach_object_Items_Property* __this, uObject* v, uObject* origin)
{
    uPtr(__this->_obj)->Items(v);
}

// public MyFirstProject_FuseReactiveEach_object_Items_Property(Fuse.Reactive.Each obj) [instance] :13
void MyFirstProject_FuseReactiveEach_object_Items_Property::ctor_1(::g::Fuse::Reactive::Each* obj)
{
    ctor_();
    _obj = obj;
}

// public MyFirstProject_FuseReactiveEach_object_Items_Property New(Fuse.Reactive.Each obj) [static] :13
MyFirstProject_FuseReactiveEach_object_Items_Property* MyFirstProject_FuseReactiveEach_object_Items_Property::New1(::g::Fuse::Reactive::Each* obj)
{
    MyFirstProject_FuseReactiveEach_object_Items_Property* obj1 = (MyFirstProject_FuseReactiveEach_object_Items_Property*)uNew(MyFirstProject_FuseReactiveEach_object_Items_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
