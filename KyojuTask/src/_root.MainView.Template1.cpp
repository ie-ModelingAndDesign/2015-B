// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MainView.Template1.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.StyleProperty-2.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
static uType* TYPES[1];

namespace g{

// public partial sealed class MainView.Template1 :36
// {
// static Template1() :43
static void MainView__Template1__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* MainView__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MainView__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template1", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::StackPanel_typeof()));
    type->fp_cctor_ = MainView__Template1__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))MainView__Template1__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template1, __parent1), 0);
    return type;
}

// public Template1(MainView parent) :39
void MainView__Template1__ctor_1_fn(MainView__Template1* __this, ::g::MainView* parent)
{
    __this->ctor_1(parent);
}

// public Template1 New(MainView parent) :39
void MainView__Template1__New1_fn(::g::MainView* parent, MainView__Template1** __retval)
{
    *__retval = MainView__Template1::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.StackPanel self) :46
void MainView__Template1__OnApply_fn(MainView__Template1* __this, ::g::Fuse::Controls::StackPanel* self)
{
    bool ret2;
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Elements::Element::MarginProperty()), self, uCRef(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f)), &ret2);
}

// public Template1(MainView parent) [instance] :39
void MainView__Template1::ctor_1(::g::MainView* parent)
{
    ctor_();
    __parent1 = parent;
}

// public Template1 New(MainView parent) [static] :39
MainView__Template1* MainView__Template1::New1(::g::MainView* parent)
{
    MainView__Template1* obj1 = (MainView__Template1*)uNew(MainView__Template1_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
