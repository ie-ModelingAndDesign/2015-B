// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/MyFirstProject.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MyFirstProject_FuseTriggersWhileBool_bool_Value_Property.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class MyFirstProject_FuseTriggersWhileBool_bool_Value_Property :45
// {
::g::Uno::UX::Property_type* MyFirstProject_FuseTriggersWhileBool_bool_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MyFirstProject_FuseTriggersWhileBool_bool_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("MyFirstProject_FuseTriggersWhileBool_bool_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))MyFirstProject_FuseTriggersWhileBool_bool_Value_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))MyFirstProject_FuseTriggersWhileBool_bool_Value_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetFields(2,
        ::g::Fuse::Triggers::WhileBool_typeof(), offsetof(::g::MyFirstProject_FuseTriggersWhileBool_bool_Value_Property, _obj), 0);
    return type;
}

// public MyFirstProject_FuseTriggersWhileBool_bool_Value_Property(Fuse.Triggers.WhileBool obj) :48
void MyFirstProject_FuseTriggersWhileBool_bool_Value_Property__ctor_1_fn(MyFirstProject_FuseTriggersWhileBool_bool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj)
{
    __this->ctor_1(obj);
}

// public MyFirstProject_FuseTriggersWhileBool_bool_Value_Property New(Fuse.Triggers.WhileBool obj) :48
void MyFirstProject_FuseTriggersWhileBool_bool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, MyFirstProject_FuseTriggersWhileBool_bool_Value_Property** __retval)
{
    *__retval = MyFirstProject_FuseTriggersWhileBool_bool_Value_Property::New1(obj);
}

// protected override sealed bool OnGet() :49
void MyFirstProject_FuseTriggersWhileBool_bool_Value_Property__OnGet_fn(MyFirstProject_FuseTriggersWhileBool_bool_Value_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->Value1(), void();
}

// protected override sealed void OnSet(bool v, object origin) :50
void MyFirstProject_FuseTriggersWhileBool_bool_Value_Property__OnSet_fn(MyFirstProject_FuseTriggersWhileBool_bool_Value_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->Value1(v_);
}

// public MyFirstProject_FuseTriggersWhileBool_bool_Value_Property(Fuse.Triggers.WhileBool obj) [instance] :48
void MyFirstProject_FuseTriggersWhileBool_bool_Value_Property::ctor_1(::g::Fuse::Triggers::WhileBool* obj)
{
    ctor_();
    _obj = obj;
}

// public MyFirstProject_FuseTriggersWhileBool_bool_Value_Property New(Fuse.Triggers.WhileBool obj) [static] :48
MyFirstProject_FuseTriggersWhileBool_bool_Value_Property* MyFirstProject_FuseTriggersWhileBool_bool_Value_Property::New1(::g::Fuse::Triggers::WhileBool* obj)
{
    MyFirstProject_FuseTriggersWhileBool_bool_Value_Property* obj1 = (MyFirstProject_FuseTriggersWhileBool_bool_Value_Property*)uNew(MyFirstProject_FuseTriggersWhileBool_bool_Value_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
