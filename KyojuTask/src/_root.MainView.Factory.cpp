// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.Factory.h>
#include <_root.MainView.h>
#include <_root.MyFirstProject_FuseControlsTextControl_string_Value_Property.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.AddingAnimation.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.RemovingAnimation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
static uString* STRINGS[3];
static uType* TYPES[18];

namespace g{

// public partial sealed class MainView.Factory :70
// {
// static Factory() :80
static void MainView__Factory__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Factory_type* MainView__Factory_typeof()
{
    static uSStrong< ::g::Uno::UX::Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MainView__Factory);
    options.TypeSize = sizeof(::g::Uno::UX::Factory_type);
    type = (::g::Uno::UX::Factory_type*)uClassType::New("MainView.Factory", options);
    type->SetBase(::g::Uno::UX::Factory_typeof());
    type->fp_cctor_ = MainView__Factory__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Factory*, uObject**))MainView__Factory__New1_fn;
    ::STRINGS[0] = uString::Const("title");
    ::STRINGS[1] = uString::Const("time");
    ::STRINGS[2] = uString::Const("removeLap");
    ::TYPES[0] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[4] = ::g::Fuse::Node_typeof();
    ::TYPES[5] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[6] = ::g::Fuse::Controls::ParentControl_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[8] = ::g::Fuse::Controls::Shape_typeof();
    ::TYPES[9] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[10] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[11] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[12] = ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Translation_typeof());
    ::TYPES[13] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[14] = ::g::Fuse::Animations::Move_typeof();
    ::TYPES[15] = ::g::Fuse::TranslationModes_typeof();
    ::TYPES[16] = ::g::Fuse::Triggers::LayoutTransition_typeof();
    ::TYPES[17] = uObject_typeof();
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Factory, __parent1), 0,
        ::g::MyFirstProject_FuseControlsTextControl_string_Value_Property_typeof(), offsetof(::g::MainView__Factory, temp_Value_inst), 0,
        ::g::MyFirstProject_FuseControlsTextControl_string_Value_Property_typeof(), offsetof(::g::MainView__Factory, temp1_Value_inst), 0);
    return type;
}

// public Factory(MainView parent) :73
void MainView__Factory__ctor_1_fn(MainView__Factory* __this, ::g::MainView* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :83
void MainView__Factory__New1_fn(MainView__Factory* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Panel* self = ::g::Fuse::Controls::Panel::New2();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New2();
    __this->temp_Value_inst = ::g::MyFirstProject_FuseControlsTextControl_string_Value_Property::New1(temp);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New2();
    __this->temp1_Value_inst = ::g::MyFirstProject_FuseControlsTextControl_string_Value_Property::New1(temp1);
    ::g::Fuse::Controls::DockPanel* temp2 = ::g::Fuse::Controls::DockPanel::New3();
    ::g::Fuse::Reactive::DataBinding* temp3 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[0/*"title"*/]);
    ::g::Fuse::Reactive::DataBinding* temp4 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], __this->temp1_Value_inst, ::STRINGS[1/*"time"*/]);
    ::g::Fuse::Controls::Rectangle* temp5 = ::g::Fuse::Controls::Rectangle::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp6 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.5607843f, 0.7490196f, 0.9098039f, 1.0f));
    ::g::Fuse::Triggers::AddingAnimation* temp7 = ::g::Fuse::Triggers::AddingAnimation::New1();
    ::g::Fuse::Animations::Move* temp8 = ::g::Fuse::Animations::Move::New1();
    ::g::Fuse::Triggers::RemovingAnimation* temp9 = ::g::Fuse::Triggers::RemovingAnimation::New1();
    ::g::Fuse::Animations::Move* temp10 = ::g::Fuse::Animations::Move::New1();
    ::g::Fuse::Triggers::LayoutAnimation* temp11 = ::g::Fuse::Triggers::LayoutAnimation::New1();
    ::g::Fuse::Animations::Move* temp12 = ::g::Fuse::Animations::Move::New1();
    ::g::Fuse::Reactive::EventBinding* temp_eb01 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[2/*"removeLap"*/]);
    self->HitTestMode(6);
    self->Height(50.0f);
    ::g::Fuse::Gestures::Clicked::AddHandler(self, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb01));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[4/*Fuse.Node*/])), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[4/*Fuse.Node*/])), temp1);
    temp->FontSize(24.0f);
    temp->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->Alignment(10);
    ::g::Fuse::Controls::DockPanel::SetDock(temp, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/])), temp3);
    temp1->FontSize(24.0f);
    temp1->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp1->Alignment(10);
    ::g::Fuse::Controls::DockPanel::SetDock(temp1, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/])), temp4);
    temp5->Height(1.0f);
    temp5->Alignment(12);
    temp5->Fill(temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[11/*Fuse.Animations.Animator*/])), temp8);
    temp8->Y(-1.0f);
    temp8->Duration(0.3);
    temp8->RelativeTo(::g::Fuse::TranslationModes::Size());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[11/*Fuse.Animations.Animator*/])), temp10);
    temp10->X(1.4f);
    temp10->Duration(0.3);
    temp10->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[11/*Fuse.Animations.Animator*/])), temp12);
    temp12->Y(1.0f);
    temp12->Easing(21);
    temp12->Duration(0.3);
    temp12->RelativeTo(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[4/*Fuse.Node*/])), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[4/*Fuse.Node*/])), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/])), temp_eb01);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/])), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/])), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/])), temp11);
    return *__retval = self, void();
}

// public Factory New(MainView parent) :73
void MainView__Factory__New2_fn(::g::MainView* parent, MainView__Factory** __retval)
{
    *__retval = MainView__Factory::New2(parent);
}

// public Factory(MainView parent) [instance] :73
void MainView__Factory::ctor_1(::g::MainView* parent)
{
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Factory New(MainView parent) [static] :73
MainView__Factory* MainView__Factory::New2(::g::MainView* parent)
{
    MainView__Factory* obj1 = (MainView__Factory*)uNew(MainView__Factory_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
