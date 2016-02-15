// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MainView.Template2.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.StyleProperty-2.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
static uType* TYPES[3];

namespace g{

// public partial sealed class MainView.Template2 :51
// {
// static Template2() :58
static void MainView__Template2__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* MainView__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MainView__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template2", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Text_typeof()));
    type->fp_cctor_ = MainView__Template2__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))MainView__Template2__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[0] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[2] = ::g::MainView_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template2, __parent1), 0);
    return type;
}

// public Template2(MainView parent) :54
void MainView__Template2__ctor_1_fn(MainView__Template2* __this, ::g::MainView* parent)
{
    __this->ctor_1(parent);
}

// public Template2 New(MainView parent) :54
void MainView__Template2__New1_fn(::g::MainView* parent, MainView__Template2** __retval)
{
    *__retval = MainView__Template2::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.Text self) :61
void MainView__Template2__OnApply_fn(MainView__Template2* __this, ::g::Fuse::Controls::Text* self)
{
    bool ret2;
    bool ret3;
    bool ret4;
    bool ret5;
    bool ret6;
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::TextControl::FontSizeProperty()), self, uCRef(14.0f), &ret2);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::TextControl::TextColorProperty()), self, uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.6666667f)), &ret3);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Elements::Element::AlignmentProperty()), self, uCRef<int>(2), &ret4);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Elements::Element::MarginProperty()), self, uCRef(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f)), &ret5);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::TextControl::FontProperty()), self, ::g::MainView::penna(), &ret6);
}

// public Template2(MainView parent) [instance] :54
void MainView__Template2::ctor_1(::g::MainView* parent)
{
    ctor_();
    __parent1 = parent;
}

// public Template2 New(MainView parent) [static] :54
MainView__Template2* MainView__Template2::New1(::g::MainView* parent)
{
    MainView__Template2* obj1 = (MainView__Template2*)uNew(MainView__Template2_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
