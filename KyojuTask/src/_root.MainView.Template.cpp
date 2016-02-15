// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <_root.MyFirstProject_FuseElementsElement_float_Opacity_Property.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.Font.h>
#include <Fuse.Node.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.Triggers.AddingAnimation.h>
#include <Fuse.Triggers.RemovingAnimation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
static uType* TYPES[9];

namespace g{

// public partial sealed class MainView.Template :3
// {
// static Template() :11
static void MainView__Template__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* MainView__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MainView__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Text_typeof()));
    type->fp_cctor_ = MainView__Template__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))MainView__Template__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[3] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[4] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[5] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[6] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[7] = ::g::MainView_typeof();
    ::TYPES[8] = ::g::Fuse::Behavior_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template, __parent1), 0,
        ::g::MyFirstProject_FuseElementsElement_float_Opacity_Property_typeof(), offsetof(::g::MainView__Template, self_Opacity_inst), 0);
    return type;
}

// public Template(MainView parent) :6
void MainView__Template__ctor_1_fn(MainView__Template* __this, ::g::MainView* parent)
{
    __this->ctor_1(parent);
}

// public Template New(MainView parent) :6
void MainView__Template__New1_fn(::g::MainView* parent, MainView__Template** __retval)
{
    *__retval = MainView__Template::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.Text self) :14
void MainView__Template__OnApply_fn(MainView__Template* __this, ::g::Fuse::Controls::Text* self)
{
    bool ret2;
    bool ret3;
    bool ret4;
    __this->self_Opacity_inst = ::g::MyFirstProject_FuseElementsElement_float_Opacity_Property::New1(self);
    __this->self_Opacity_inst = ::g::MyFirstProject_FuseElementsElement_float_Opacity_Property::New1(self);
    ::g::Fuse::Triggers::AddingAnimation* temp = ::g::Fuse::Triggers::AddingAnimation::New1();
    ::g::Fuse::Animations::Change* temp1 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[1/*Fuse.Animations.Change<float>*/], __this->self_Opacity_inst);
    ::g::Fuse::Triggers::RemovingAnimation* temp2 = ::g::Fuse::Triggers::RemovingAnimation::New1();
    ::g::Fuse::Animations::Change* temp3 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[1/*Fuse.Animations.Change<float>*/], __this->self_Opacity_inst);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::TextControl::TextAlignmentProperty()), self, uCRef<int>(1), &ret2);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Elements::Element::AlignmentProperty()), self, uCRef<int>(10), &ret3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Animations.Animator*/])), temp1);
    ::g::Fuse::Animations::Change__set_Value_fn(temp1, uCRef(0.0f));
    temp1->Duration(0.2);
    temp1->Delay(0.2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Animations.Animator*/])), temp3);
    ::g::Fuse::Animations::Change__set_Value_fn(temp3, uCRef(0.0f));
    temp3->Duration(0.2);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::TextControl::FontProperty()), self, ::g::MainView::penna(), &ret4);
    uPtr(self)->AddStyleBehavior(temp);
    self->AddStyleBehavior(temp2);
}

// public Template(MainView parent) [instance] :6
void MainView__Template::ctor_1(::g::MainView* parent)
{
    ctor_();
    __parent1 = parent;
}

// public Template New(MainView parent) [static] :6
MainView__Template* MainView__Template::New1(::g::MainView* parent)
{
    MainView__Template* obj1 = (MainView__Template*)uNew(MainView__Template_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
