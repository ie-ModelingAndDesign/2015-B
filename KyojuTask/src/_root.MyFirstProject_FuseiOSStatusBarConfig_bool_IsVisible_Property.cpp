// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/MyFirstProject.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property :38
// {
::g::Uno::UX::Property_type* MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::iOS::StatusBarConfig_typeof();
    type->SetFields(2,
        ::g::Fuse::iOS::StatusBarConfig_typeof(), offsetof(::g::MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property, _obj), 0);
    return type;
}

// public MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property(Fuse.iOS.StatusBarConfig obj) :41
void MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property__ctor_1_fn(MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property* __this, ::g::Fuse::iOS::StatusBarConfig* obj)
{
    __this->ctor_1(obj);
}

// public MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property New(Fuse.iOS.StatusBarConfig obj) :41
void MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property__New1_fn(::g::Fuse::iOS::StatusBarConfig* obj, MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property** __retval)
{
    *__retval = MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property::New1(obj);
}

// protected override sealed bool OnGet() :42
void MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property__OnGet_fn(MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->IsVisible(), void();
}

// protected override sealed void OnSet(bool v, object origin) :43
void MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property__OnSet_fn(MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->IsVisible(v_);
}

// public MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property(Fuse.iOS.StatusBarConfig obj) [instance] :41
void MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property::ctor_1(::g::Fuse::iOS::StatusBarConfig* obj)
{
    ctor_();
    _obj = obj;
}

// public MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property New(Fuse.iOS.StatusBarConfig obj) [static] :41
MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property* MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property::New1(::g::Fuse::iOS::StatusBarConfig* obj)
{
    MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property* obj1 = (MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property*)uNew(MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
