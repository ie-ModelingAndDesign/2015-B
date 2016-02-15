// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CloseIcon.h>
#include <_root.HamburgerIcon.h>
#include <_root.Kono.h>
#include <_root.MainView.Factory.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <_root.MainView.Template1.h>
#include <_root.MainView.Template2.h>
#include <_root.MyFirstProject_bundle.h>
#include <_root.MyFirstProject_FuseControlsTextControl_string_Value_Property.h>
#include <_root.MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property.h>
#include <_root.MyFirstProject_FuseReactiveEach_object_Items_Property.h>
#include <_root.MyFirstProject_FuseTriggersWhileBool_bool_Value_Property.h>
#include <_root.Nakamura.h>
#include <_root.Okazaki.h>
#include <_root.PlusIcon.h>
#include <_root.Stopwatch.h>
#include <_root.Toma.h>
#include <_root.Wada.h>
#include <_root.WatchFace.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Rotate.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.AppBase.h>
#include <Fuse.BasicTheme.BasicStyle.h>
#include <Fuse.BasicTheme.BasicTheme.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.BottomBarBackground.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.Toggle.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Effects.Blur.h>
#include <Fuse.Effects.Effect.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Rotation.h>
#include <Fuse.Style.h>
#include <Fuse.Theme.h>
#include <Fuse.Transform.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Android.h>
#include <Fuse.Triggers.iOS.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.Bool.h>
#include <Uno.BundleFile.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.iOS.StatusBarAnimation.h>
#include <Uno.Platform.iOS.StatusBarStyle.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.Factory.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Template-1.h>
static uString* STRINGS[27];
static uType* TYPES[49];

namespace g{

// public partial sealed class MainView :1
// {
// static MainView() :162
static void MainView__cctor__fn(uType* __type)
{
    MainView::penna_ = ::g::Fuse::Font::New1(::g::Uno::UX::BundleFileSource::New1(::g::MyFirstProject_bundle::penna3aef1788()));
    MainView::Stopwatch_ = ::g::Stopwatch::New2();
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::penna_, ::STRINGS[0/*"penna"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Stopwatch_, ::STRINGS[1/*"Stopwatch"*/]);
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 39;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->SetBase(::g::Fuse::App_typeof());
    type->fp_ctor_ = (void*)MainView__New2_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    ::STRINGS[0] = uString::Const("penna");
    ::STRINGS[1] = uString::Const("Stopwatch");
    ::STRINGS[2] = uString::Const("timeString");
    ::STRINGS[3] = uString::Const("laps");
    ::STRINGS[4] = uString::Const("/Users/shintarooo0079/Desktop/MyFirstProject/MainView.ux");
    ::STRINGS[5] = uString::Const("menuButton");
    ::STRINGS[6] = uString::Const("statusBarBuckground");
    ::STRINGS[7] = uString::Const("content");
    ::STRINGS[8] = uString::Const("addMenuButton");
    ::STRINGS[9] = uString::Const("addMenu");
    ::STRINGS[10] = uString::Const("TASK NAME");
    ::STRINGS[11] = uString::Const("LIMIT DATE");
    ::STRINGS[12] = uString::Const("ENTER");
    ::STRINGS[13] = uString::Const("CURRENT TASK LIMIT");
    ::STRINGS[14] = uString::Const("TASKS");
    ::STRINGS[15] = uString::Const("OS ex10.1");
    ::STRINGS[16] = uString::Const("until February 14");
    ::STRINGS[17] = uString::Const("OS ex10.2");
    ::STRINGS[18] = uString::Const("sidebar");
    ::STRINGS[19] = uString::Const("wada");
    ::STRINGS[20] = uString::Const("nakamura");
    ::STRINGS[21] = uString::Const("okazaki");
    ::STRINGS[22] = uString::Const("OKAZAKI");
    ::STRINGS[23] = uString::Const("kono");
    ::STRINGS[24] = uString::Const("KONO");
    ::STRINGS[25] = uString::Const("toma");
    ::STRINGS[26] = uString::Const("TOMA");
    ::TYPES[0] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[1] = ::g::MyFirstProject_bundle_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[4] = ::g::Fuse::Triggers::WhileBool_typeof();
    ::TYPES[5] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[6] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[7] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Text_typeof());
    ::TYPES[8] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[9] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[10] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof());
    ::TYPES[11] = ::g::Uno::UX::Property_typeof()->MakeType(uObject_typeof());
    ::TYPES[12] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::StackPanel_typeof());
    ::TYPES[13] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[14] = ::g::Fuse::AppBase_typeof();
    ::TYPES[15] = ::g::Fuse::iOS::StatusBarConfig_typeof();
    ::TYPES[16] = ::g::Fuse::Reactive::JavaScript_typeof();
    ::TYPES[17] = ::g::Fuse::Controls::ParentControl_typeof();
    ::TYPES[18] = ::g::Fuse::Node_typeof();
    ::TYPES[19] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[20] = ::g::Fuse::Behavior_typeof();
    ::TYPES[21] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[22] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[23] = ::g::Fuse::Animations::Rotate_typeof();
    ::TYPES[24] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[25] = ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Rotation_typeof());
    ::TYPES[26] = ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Translation_typeof());
    ::TYPES[27] = ::g::Fuse::Controls::Shape_typeof();
    ::TYPES[28] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[29] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[30] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[31] = ::g::Fuse::Controls::Toggle_typeof();
    ::TYPES[32] = ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[33] = ::g::Fuse::Controls::Control_typeof();
    ::TYPES[34] = ::g::Fuse::Elements::TransformOrigins_typeof();
    ::TYPES[35] = ::g::Fuse::Transform_typeof();
    ::TYPES[36] = ::g::Fuse::Rotation_typeof();
    ::TYPES[37] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[38] = ::g::Fuse::Controls::Button_typeof();
    ::TYPES[39] = ::g::Fuse::Style_typeof();
    ::TYPES[40] = ::g::Uno::UX::ITemplate_typeof();
    ::TYPES[41] = ::g::Fuse::Controls::ScrollView_typeof();
    ::TYPES[42] = ::g::Fuse::BasicTheme::BasicStyle_typeof();
    ::TYPES[43] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[44] = ::g::Fuse::Effects::Effect_typeof();
    ::TYPES[45] = ::g::Fuse::Effects::Blur_typeof();
    ::TYPES[46] = ::g::Fuse::Reactive::Each_typeof();
    ::TYPES[47] = ::g::Uno::UX::Factory_typeof();
    ::TYPES[48] = ::g::Fuse::BasicTheme::BasicTheme_typeof();
    type->SetFields(19,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, addMenu), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, addMenuButton), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, content), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::MainView, kono), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, menuButton), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::MainView, nakamura), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::MainView, okazaki), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, showAddMenu), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, showMenu), 0,
        ::g::MyFirstProject_FuseTriggersWhileBool_bool_Value_Property_typeof(), offsetof(::g::MainView, showMenu_Value_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, sidebar), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, statusBarBuckground), 0,
        ::g::Fuse::iOS::StatusBarConfig_typeof(), offsetof(::g::MainView, statusBarConfig), 0,
        ::g::MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property_typeof(), offsetof(::g::MainView, statusBarConfig_IsVisible_inst), 0,
        ::g::MyFirstProject_FuseControlsTextControl_string_Value_Property_typeof(), offsetof(::g::MainView, temp_Value_inst), 0,
        ::g::MyFirstProject_FuseReactiveEach_object_Items_Property_typeof(), offsetof(::g::MainView, temp1_Items_inst), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::MainView, toma), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::MainView, wada), 0,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::penna_, uFieldFlagsStatic,
        ::g::Stopwatch_typeof(), (uintptr_t)&::g::MainView::Stopwatch_, uFieldFlagsStatic);
    return type;
}

// public MainView() :169
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// private void InitializeUX() :173
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :169
void MainView__New2_fn(MainView** __retval)
{
    *__retval = MainView::New2();
}

uSStrong< ::g::Fuse::Font*> MainView::penna_;
uSStrong< ::g::Stopwatch*> MainView::Stopwatch_;

// public MainView() [instance] :169
void MainView::ctor_3()
{
    ctor_2();
    InitializeUX();
}

// private void InitializeUX() [instance] :173
void MainView::InitializeUX()
{
    MainView__Template* collection1;
    MainView__Template1* collection2;
    MainView__Template2* collection3;
    statusBarConfig = ::g::Fuse::iOS::StatusBarConfig::New1();
    statusBarConfig_IsVisible_inst = ::g::MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property::New1(statusBarConfig);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New2();
    temp_Value_inst = ::g::MyFirstProject_FuseControlsTextControl_string_Value_Property::New1(temp);
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New1();
    temp1_Items_inst = ::g::MyFirstProject_FuseReactiveEach_object_Items_Property::New1(temp1);
    showMenu = ::g::Fuse::Triggers::WhileTrue::New1();
    showMenu_Value_inst = ::g::MyFirstProject_FuseTriggersWhileBool_bool_Value_Property::New1(showMenu);
    showMenu_Value_inst = ::g::MyFirstProject_FuseTriggersWhileBool_bool_Value_Property::New1(showMenu);
    showMenu_Value_inst = ::g::MyFirstProject_FuseTriggersWhileBool_bool_Value_Property::New1(showMenu);
    showMenu_Value_inst = ::g::MyFirstProject_FuseTriggersWhileBool_bool_Value_Property::New1(showMenu);
    showMenu_Value_inst = ::g::MyFirstProject_FuseTriggersWhileBool_bool_Value_Property::New1(showMenu);
    ::g::Fuse::Reactive::JavaScript* temp2 = ::g::Fuse::Reactive::JavaScript::New1();
    ::g::Fuse::Controls::DockPanel* temp3 = ::g::Fuse::Controls::DockPanel::New3();
    ::g::Fuse::Controls::BottomBarBackground* temp4 = ::g::Fuse::Controls::BottomBarBackground::New2();
    ::g::Fuse::Controls::DockPanel* temp5 = ::g::Fuse::Controls::DockPanel::New3();
    ::g::Fuse::Animations::Rotate* temp6 = ::g::Fuse::Animations::Rotate::New1();
    ::g::Fuse::Animations::Rotate* temp7 = ::g::Fuse::Animations::Rotate::New1();
    ::g::Fuse::Animations::Rotate* temp8 = ::g::Fuse::Animations::Rotate::New1();
    ::g::Fuse::Animations::Move* temp9 = ::g::Fuse::Animations::Move::New1();
    ::g::Fuse::Animations::Rotate* temp10 = ::g::Fuse::Animations::Rotate::New1();
    ::g::Fuse::Animations::Move* temp11 = ::g::Fuse::Animations::Move::New1();
    ::g::Fuse::Animations::Rotate* temp12 = ::g::Fuse::Animations::Rotate::New1();
    ::g::Fuse::Animations::Move* temp13 = ::g::Fuse::Animations::Move::New1();
    ::g::Fuse::Animations::Rotate* temp14 = ::g::Fuse::Animations::Rotate::New1();
    ::g::Fuse::Animations::Move* temp15 = ::g::Fuse::Animations::Move::New1();
    ::g::Fuse::Animations::Rotate* temp16 = ::g::Fuse::Animations::Rotate::New1();
    ::g::Fuse::Animations::Move* temp17 = ::g::Fuse::Animations::Move::New1();
    ::g::Fuse::Animations::Change* temp18 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[5/*Fuse.Animations.Change<bool>*/], statusBarConfig_IsVisible_inst);
    showAddMenu = ::g::Fuse::Triggers::WhileTrue::New1();
    ::g::Fuse::Animations::Rotate* temp19 = ::g::Fuse::Animations::Rotate::New1();
    ::g::Fuse::Animations::Rotate* temp20 = ::g::Fuse::Animations::Rotate::New1();
    menuButton = ::g::Fuse::Controls::Panel::New2();
    ::g::Fuse::Controls::Circle* temp21 = ::g::Fuse::Controls::Circle::New2();
    ::g::Fuse::Drawing::SolidColor* temp22 = ::g::Fuse::Drawing::SolidColor::New1();
    ::g::HamburgerIcon* temp23 = ::g::HamburgerIcon::New4();
    ::g::CloseIcon* temp24 = ::g::CloseIcon::New3();
    ::g::Fuse::Gestures::Clicked* temp25 = ::g::Fuse::Gestures::Clicked::New1();
    ::g::Fuse::Controls::Toggle* temp26 = ::g::Fuse::Controls::Toggle::New1();
    ::g::Fuse::Controls::Panel* temp27 = ::g::Fuse::Controls::Panel::New2();
    ::g::Fuse::Triggers::iOS* temp28 = ::g::Fuse::Triggers::iOS::New1();
    statusBarBuckground = ::g::Fuse::Controls::Panel::New2();
    ::g::Fuse::Triggers::Android* temp29 = ::g::Fuse::Triggers::Android::New1();
    ::g::Fuse::Controls::StatusBarBackground* temp30 = ::g::Fuse::Controls::StatusBarBackground::New2();
    content = ::g::Fuse::Controls::Panel::New2();
    addMenuButton = ::g::Fuse::Controls::Panel::New2();
    ::g::PlusIcon* temp31 = ::g::PlusIcon::New3();
    ::g::CloseIcon* temp32 = ::g::CloseIcon::New3();
    ::g::Fuse::Controls::Circle* temp33 = ::g::Fuse::Controls::Circle::New2();
    ::g::Fuse::Drawing::SolidColor* temp34 = ::g::Fuse::Drawing::SolidColor::New1();
    ::g::Fuse::Gestures::Clicked* temp35 = ::g::Fuse::Gestures::Clicked::New1();
    ::g::Fuse::Controls::Toggle* temp36 = ::g::Fuse::Controls::Toggle::New1();
    ::g::Fuse::Controls::Panel* temp37 = ::g::Fuse::Controls::Panel::New2();
    ::g::Fuse::Rotation* temp38 = ::g::Fuse::Rotation::New1();
    addMenu = ::g::Fuse::Controls::Panel::New2();
    ::g::Fuse::Drawing::ImageFill* temp39 = ::g::Fuse::Drawing::ImageFill::New1();
    ::g::Fuse::Rotation* temp40 = ::g::Fuse::Rotation::New1();
    ::g::Fuse::Controls::StackPanel* temp41 = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Fuse::Rotation* temp42 = ::g::Fuse::Rotation::New1();
    ::g::Fuse::Controls::TextInput* temp43 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Fuse::Controls::TextInput* temp44 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Fuse::Controls::Button* temp45 = ::g::Fuse::Controls::Button::New2();
    ::g::Fuse::Gestures::Clicked* temp46 = ::g::Fuse::Gestures::Clicked::New1();
    ::g::Fuse::Controls::Toggle* temp47 = ::g::Fuse::Controls::Toggle::New1();
    ::g::Fuse::Style* temp48 = ::g::Fuse::Style::New1();
    collection1 = MainView__Template::New1(this);
    uPtr(collection1)->Cascade(true);
    true;
    uPtr(collection1)->AffectSubtypes(true);
    true;
    MainView__Template* temp49 = collection1;
    ::g::Fuse::Drawing::ImageFill* temp50 = ::g::Fuse::Drawing::ImageFill::New1();
    ::g::Fuse::Controls::ScrollView* temp51 = ::g::Fuse::Controls::ScrollView::New2();
    ::g::Fuse::Controls::StackPanel* temp52 = ::g::Fuse::Controls::StackPanel::New3();
    ::g::WatchFace* temp53 = ::g::WatchFace::New3();
    ::g::Fuse::Controls::StackPanel* temp54 = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Fuse::Controls::Text* temp55 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Reactive::DataBinding* temp56 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[8/*Fuse.Reactive.DataBinding<string>*/], temp_Value_inst, ::STRINGS[2/*"timeString"*/]);
    ::g::Fuse::Controls::Image* temp57 = ::g::Fuse::Controls::Image::New2();
    ::g::Fuse::Effects::Blur* temp58 = ::g::Fuse::Effects::Blur::New1();
    ::g::Fuse::Controls::StackPanel* temp59 = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Fuse::Controls::Text* temp60 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Rectangle* temp61 = ::g::Fuse::Controls::Rectangle::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp62 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.5607843f, 0.7490196f, 0.9098039f, 1.0f));
    ::g::Fuse::Controls::DockPanel* temp63 = ::g::Fuse::Controls::DockPanel::New3();
    ::g::Fuse::Controls::Text* temp64 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Text* temp65 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Rectangle* temp66 = ::g::Fuse::Controls::Rectangle::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp67 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.5607843f, 0.7490196f, 0.9098039f, 1.0f));
    ::g::Fuse::Controls::DockPanel* temp68 = ::g::Fuse::Controls::DockPanel::New3();
    ::g::Fuse::Controls::Text* temp69 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Text* temp70 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Rectangle* temp71 = ::g::Fuse::Controls::Rectangle::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp72 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.5607843f, 0.7490196f, 0.9098039f, 1.0f));
    MainView__Factory* temp73 = MainView__Factory::New2(this);
    ::g::Fuse::Reactive::DataBinding* temp74 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[10/*Fuse.Reactive.DataBinding<object>*/], temp1_Items_inst, ::STRINGS[3/*"laps"*/]);
    sidebar = ::g::Fuse::Controls::Panel::New2();
    ::g::Fuse::Style* temp75 = ::g::Fuse::Style::New1();
    collection2 = MainView__Template1::New1(this);
    uPtr(collection2)->Cascade(true);
    true;
    uPtr(collection2)->AffectSubtypes(true);
    true;
    MainView__Template1* temp76 = collection2;
    collection3 = MainView__Template2::New1(this);
    uPtr(collection3)->Cascade(true);
    true;
    uPtr(collection3)->AffectSubtypes(true);
    true;
    MainView__Template2* temp77 = collection3;
    wada = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Wada* temp78 = ::g::Wada::New3();
    ::g::Fuse::Gestures::Clicked* temp79 = ::g::Fuse::Gestures::Clicked::New1();
    ::g::Fuse::Triggers::Actions::Set* temp80 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New1(::TYPES[13/*Fuse.Triggers.Actions.Set<bool>*/], showMenu_Value_inst);
    nakamura = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Nakamura* temp81 = ::g::Nakamura::New3();
    ::g::Fuse::Gestures::Clicked* temp82 = ::g::Fuse::Gestures::Clicked::New1();
    ::g::Fuse::Triggers::Actions::Set* temp83 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New1(::TYPES[13/*Fuse.Triggers.Actions.Set<bool>*/], showMenu_Value_inst);
    okazaki = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Okazaki* temp84 = ::g::Okazaki::New3();
    ::g::Fuse::Controls::Text* temp85 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Gestures::Clicked* temp86 = ::g::Fuse::Gestures::Clicked::New1();
    ::g::Fuse::Triggers::Actions::Set* temp87 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New1(::TYPES[13/*Fuse.Triggers.Actions.Set<bool>*/], showMenu_Value_inst);
    kono = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Kono* temp88 = ::g::Kono::New3();
    ::g::Fuse::Controls::Text* temp89 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Gestures::Clicked* temp90 = ::g::Fuse::Gestures::Clicked::New1();
    ::g::Fuse::Triggers::Actions::Set* temp91 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New1(::TYPES[13/*Fuse.Triggers.Actions.Set<bool>*/], showMenu_Value_inst);
    toma = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Toma* temp92 = ::g::Toma::New3();
    ::g::Fuse::Controls::Text* temp93 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Gestures::Clicked* temp94 = ::g::Fuse::Gestures::Clicked::New1();
    ::g::Fuse::Triggers::Actions::Set* temp95 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New1(::TYPES[13/*Fuse.Triggers.Actions.Set<bool>*/], showMenu_Value_inst);
    Background(::g::Uno::Float4__New2(0.227451f, 0.254902f, 0.345098f, 1.0f));
    uPtr(statusBarConfig)->IsVisible(true);
    uPtr(statusBarConfig)->Style(1);
    uPtr(statusBarConfig)->Animation(2);
    temp2->LineNumber(5);
    temp2->FileName(::STRINGS[4/*"/Users/shin...*/]);
    temp2->File(::g::Uno::UX::BundleFileSource::New1(::g::MyFirstProject_bundle::MainView1df5d1f1()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp5);
    ::g::Fuse::Controls::DockPanel::SetDock(temp4, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), menuButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), content);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), sidebar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[20/*Fuse.Behavior*/])), showMenu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[20/*Fuse.Behavior*/])), showAddMenu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showMenu)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[22/*Fuse.Animations.Animator*/])), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showMenu)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[22/*Fuse.Animations.Animator*/])), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showMenu)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[22/*Fuse.Animations.Animator*/])), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showMenu)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[22/*Fuse.Animations.Animator*/])), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showMenu)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[22/*Fuse.Animations.Animator*/])), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showMenu)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[22/*Fuse.Animations.Animator*/])), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showMenu)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[22/*Fuse.Animations.Animator*/])), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showMenu)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[22/*Fuse.Animations.Animator*/])), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showMenu)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[22/*Fuse.Animations.Animator*/])), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showMenu)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[22/*Fuse.Animations.Animator*/])), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showMenu)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[22/*Fuse.Animations.Animator*/])), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showMenu)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[22/*Fuse.Animations.Animator*/])), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showMenu)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[22/*Fuse.Animations.Animator*/])), temp18);
    temp6->Degrees(-45.0f);
    temp6->Easing(18);
    temp6->EasingBack(28);
    temp6->Duration(0.45);
    temp6->DurationBack(0.6);
    temp6->Target(content);
    temp7->Degrees(-90.0f);
    temp7->Easing(18);
    temp7->EasingBack(28);
    temp7->Duration(0.45);
    temp7->DurationBack(0.6);
    temp7->Target(menuButton);
    temp8->Degrees(45.0f);
    temp8->Easing(23);
    temp8->EasingBack(9);
    temp8->Duration(0.6);
    temp8->DurationBack(0.3);
    temp8->DelayBack(0.0);
    temp8->Delay(0.3);
    temp8->Target(toma);
    temp9->X(80.0f);
    temp9->Easing(23);
    temp9->EasingBack(9);
    temp9->Duration(0.6);
    temp9->DurationBack(0.3);
    temp9->DelayBack(0.0);
    temp9->Delay(0.3);
    temp9->Target(toma);
    temp10->Degrees(50.0f);
    temp10->Easing(23);
    temp10->EasingBack(9);
    temp10->Duration(0.65);
    temp10->DurationBack(0.3);
    temp10->DelayBack(0.0);
    temp10->Delay(0.32);
    temp10->Target(kono);
    temp11->X(150.0f);
    temp11->Easing(23);
    temp11->EasingBack(9);
    temp11->Duration(0.65);
    temp11->DurationBack(0.3);
    temp11->DelayBack(0.0);
    temp11->Delay(0.32);
    temp11->Target(kono);
    temp12->Degrees(45.0f);
    temp12->Easing(23);
    temp12->EasingBack(9);
    temp12->Duration(0.7);
    temp12->DurationBack(0.3);
    temp12->DelayBack(0.0);
    temp12->Delay(0.34);
    temp12->Target(okazaki);
    temp13->X(180.0f);
    temp13->Easing(23);
    temp13->EasingBack(9);
    temp13->Duration(0.7);
    temp13->DurationBack(0.3);
    temp13->DelayBack(0.0);
    temp13->Delay(0.34);
    temp13->Target(okazaki);
    temp14->Degrees(60.0f);
    temp14->Easing(23);
    temp14->EasingBack(9);
    temp14->Duration(0.75);
    temp14->DurationBack(0.3);
    temp14->DelayBack(0.0);
    temp14->Delay(0.36);
    temp14->Target(nakamura);
    temp15->X(280.0f);
    temp15->Easing(23);
    temp15->EasingBack(9);
    temp15->Duration(0.75);
    temp15->DurationBack(0.3);
    temp15->DelayBack(0.0);
    temp15->Delay(0.36);
    temp15->Target(nakamura);
    temp16->Degrees(-5.0f);
    temp16->Easing(23);
    temp16->EasingBack(9);
    temp16->Duration(0.8);
    temp16->DurationBack(0.3);
    temp16->DelayBack(0.0);
    temp16->Delay(0.38);
    temp16->Target(wada);
    temp17->Y(-190.0f);
    temp17->Easing(23);
    temp17->EasingBack(9);
    temp17->Duration(0.8);
    temp17->DurationBack(0.3);
    temp17->DelayBack(0.0);
    temp17->Delay(0.38);
    temp17->Target(wada);
    ::g::Fuse::Animations::Change__set_Value_fn(temp18, uCRef(false));
    temp18->Delay(0.25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showAddMenu)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[22/*Fuse.Animations.Animator*/])), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showAddMenu)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[22/*Fuse.Animations.Animator*/])), temp20);
    temp19->Degrees(-90.0f);
    temp19->Easing(18);
    temp19->EasingBack(18);
    temp19->Duration(0.45);
    temp19->DurationBack(0.6);
    temp19->Target(addMenu);
    temp20->Degrees(-90.0f);
    temp20->Easing(18);
    temp20->EasingBack(18);
    temp20->Duration(0.45);
    temp20->DurationBack(0.6);
    temp20->Target(addMenuButton);
    uPtr(menuButton)->Width(170.0f);
    uPtr(menuButton)->Height(170.0f);
    uPtr(menuButton)->Alignment(5);
    uPtr(menuButton)->Padding(::g::Uno::Float4__New2(40.0f, 40.0f, 40.0f, 40.0f));
    uPtr(menuButton)->Offset(::g::Uno::Float2__New2(-85.0f, -85.0f));
    uPtr(menuButton)->Name(::STRINGS[5/*"menuButton"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menuButton)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menuButton)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menuButton)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menuButton)->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[20/*Fuse.Behavior*/])), temp25);
    temp21->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[28/*Fuse.Drawing.Brush*/])), temp22);
    temp22->Color(::g::Uno::Float4__New2(0.8823529f, 0.2666667f, 0.3882353f, 1.0f));
    temp23->Alignment(15);
    temp24->Alignment(13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[30/*Fuse.Triggers.Actions.TriggerAction*/])), temp26);
    temp26->Target((uObject*)showMenu);
    ::g::Fuse::Controls::DockPanel::SetDock(temp27, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[20/*Fuse.Behavior*/])), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[20/*Fuse.Behavior*/])), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), statusBarBuckground);
    uPtr(statusBarBuckground)->Height(20.0f);
    uPtr(statusBarBuckground)->Name(::STRINGS[6/*"statusBarBu...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp30);
    uPtr(content)->Name(::STRINGS[7/*"content"*/]);
    uPtr(content)->Background(temp50);
    uPtr(content)->TransformOrigin(::g::Fuse::Elements::TransformOrigins::TopLeft());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(content)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), addMenuButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(content)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(content)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(content)->Styles()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[39/*Fuse.Style*/])), temp48);
    uPtr(addMenuButton)->Width(170.0f);
    uPtr(addMenuButton)->Height(170.0f);
    uPtr(addMenuButton)->Alignment(15);
    uPtr(addMenuButton)->Padding(::g::Uno::Float4__New2(40.0f, 40.0f, 40.0f, 40.0f));
    uPtr(addMenuButton)->Offset(::g::Uno::Float2__New2(85.0f, 80.0f));
    uPtr(addMenuButton)->Layer(2);
    uPtr(addMenuButton)->Name(::STRINGS[8/*"addMenuButton"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(addMenuButton)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(addMenuButton)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(addMenuButton)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(addMenuButton)->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[20/*Fuse.Behavior*/])), temp35);
    temp31->Alignment(5);
    temp32->Alignment(7);
    temp33->Width(170.0f);
    temp33->Height(170.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[28/*Fuse.Drawing.Brush*/])), temp34);
    temp34->Color(::g::Uno::Float4__New2(0.8823529f, 0.2666667f, 0.3882353f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[30/*Fuse.Triggers.Actions.TriggerAction*/])), temp36);
    temp36->Target((uObject*)showAddMenu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), addMenu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[35/*Fuse.Transform*/])), temp38);
    temp38->Degrees(180.0f);
    uPtr(addMenu)->Name(::STRINGS[9/*"addMenu"*/]);
    uPtr(addMenu)->Background(temp39);
    uPtr(addMenu)->TransformOrigin(::g::Fuse::Elements::TransformOrigins::TopLeft());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(addMenu)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(addMenu)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[35/*Fuse.Transform*/])), temp40);
    temp39->File(::g::Uno::UX::BundleFileSource::New1(::g::MyFirstProject_bundle::background11f14d0fcd()));
    temp40->Degrees(90.0f);
    temp41->Alignment(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[35/*Fuse.Transform*/])), temp42);
    temp42->Degrees(180.0f);
    temp43->Value(::STRINGS[10/*"TASK NAME"*/]);
    temp43->FontSize(30.0f);
    temp43->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp43->Font(MainView::penna());
    temp44->Value(::STRINGS[11/*"LIMIT DATE"*/]);
    temp44->FontSize(30.0f);
    temp44->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp44->Font(MainView::penna());
    temp45->Text(::STRINGS[12/*"ENTER"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[20/*Fuse.Behavior*/])), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[30/*Fuse.Triggers.Actions.TriggerAction*/])), temp47);
    temp47->Target((uObject*)showAddMenu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[40/*Uno.UX.ITemplate*/])), (uObject*)temp49);
    temp50->File(::g::Uno::UX::BundleFileSource::New1(::g::MyFirstProject_bundle::backgroundde83c32d()));
    temp51->SnapMinTransform(false);
    ::g::Fuse::Controls::DockPanel::SetDock(temp51, 4);
    temp51->Content1(temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp59);
    temp53->Width(250.0f);
    temp53->Height(250.0f);
    temp53->Margin(::g::Uno::Float4__New2(30.0f, 40.0f, 30.0f, 30.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp53, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp57);
    temp54->Alignment(10);
    temp54->Margin(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp);
    temp55->Value(::STRINGS[13/*"CURRENT TAS...*/]);
    temp55->FontSize(25.0f);
    temp55->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->FontSize(50.0f);
    temp->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->Font(::g::Fuse::BasicTheme::BasicStyle::RobotoLight());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[20/*Fuse.Behavior*/])), temp56);
    temp57->Opacity(0.7f);
    temp57->File(::g::Uno::UX::BundleFileSource::New1(::g::MyFirstProject_bundle::konoIcon922a243d()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Effects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[44/*Fuse.Effects.Effect*/])), temp58);
    temp58->Radius(2.0f);
    temp59->Margin(::g::Uno::Float4__New2(40.0f, 30.0f, 40.0f, 30.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp68);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp71);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[20/*Fuse.Behavior*/])), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[20/*Fuse.Behavior*/])), temp1);
    temp60->Value(::STRINGS[14/*"TASKS"*/]);
    temp60->FontSize(20.0f);
    temp60->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp60->Alignment(1);
    ::g::Fuse::Controls::DockPanel::SetDock(temp60, 0);
    temp61->Height(1.0f);
    temp61->Alignment(12);
    temp61->Fill(temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp65);
    temp64->Value(::STRINGS[15/*"OS ex10.1"*/]);
    temp64->FontSize(50.0f);
    temp64->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp64->Alignment(12);
    ::g::Fuse::Controls::DockPanel::SetDock(temp64, 0);
    temp65->Value(::STRINGS[16/*"until Febru...*/]);
    temp65->FontSize(30.0f);
    temp65->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp65->Alignment(12);
    ::g::Fuse::Controls::DockPanel::SetDock(temp65, 1);
    temp66->Height(1.0f);
    temp66->Alignment(12);
    temp66->Fill(temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp70);
    temp69->Value(::STRINGS[17/*"OS ex10.2"*/]);
    temp69->FontSize(50.0f);
    temp69->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp69->Alignment(12);
    ::g::Fuse::Controls::DockPanel::SetDock(temp69, 0);
    temp70->Value(::STRINGS[16/*"until Febru...*/]);
    temp70->FontSize(30.0f);
    temp70->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp70->Alignment(12);
    ::g::Fuse::Controls::DockPanel::SetDock(temp70, 1);
    temp71->Height(1.0f);
    temp71->Alignment(12);
    temp71->Fill(temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Factories()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[47/*Uno.UX.Factory*/])), temp73);
    uPtr(sidebar)->Alignment(13);
    uPtr(sidebar)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 50.0f));
    uPtr(sidebar)->Offset(::g::Uno::Float2__New2(-150.0f, 0.0f));
    uPtr(sidebar)->Name(::STRINGS[18/*"sidebar"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), wada);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), nakamura);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), okazaki);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), kono);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), toma);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Styles()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[39/*Fuse.Style*/])), temp75);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[40/*Uno.UX.ITemplate*/])), (uObject*)temp76);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[40/*Uno.UX.ITemplate*/])), (uObject*)temp77);
    uPtr(wada)->Offset(::g::Uno::Float2__New2(200.0f, 380.0f));
    uPtr(wada)->Name(::STRINGS[19/*"wada"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(wada)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp78);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(wada)->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[20/*Fuse.Behavior*/])), temp79);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp79->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[30/*Fuse.Triggers.Actions.TriggerAction*/])), temp80);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp80, uCRef(false));
    uPtr(nakamura)->Offset(::g::Uno::Float2__New2(-250.0f, 130.0f));
    uPtr(nakamura)->Name(::STRINGS[20/*"nakamura"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nakamura)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp81);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nakamura)->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[20/*Fuse.Behavior*/])), temp82);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp82->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[30/*Fuse.Triggers.Actions.TriggerAction*/])), temp83);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp83, uCRef(false));
    uPtr(okazaki)->Offset(::g::Uno::Float2__New2(-140.0f, 30.0f));
    uPtr(okazaki)->Name(::STRINGS[21/*"okazaki"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(okazaki)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp84);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(okazaki)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp85);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(okazaki)->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[20/*Fuse.Behavior*/])), temp86);
    temp85->Value(::STRINGS[22/*"OKAZAKI"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp86->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[30/*Fuse.Triggers.Actions.TriggerAction*/])), temp87);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp87, uCRef(false));
    uPtr(kono)->Offset(::g::Uno::Float2__New2(-150.0f, -50.0f));
    uPtr(kono)->Name(::STRINGS[23/*"kono"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(kono)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp88);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(kono)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp89);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(kono)->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[20/*Fuse.Behavior*/])), temp90);
    temp89->Value(::STRINGS[24/*"KONO"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp90->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[30/*Fuse.Triggers.Actions.TriggerAction*/])), temp91);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp91, uCRef(false));
    uPtr(toma)->Offset(::g::Uno::Float2__New2(-150.0f, -150.0f));
    uPtr(toma)->Name(::STRINGS[25/*"toma"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(toma)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp92);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(toma)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Node*/])), temp93);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(toma)->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[20/*Fuse.Behavior*/])), temp94);
    temp93->Value(::STRINGS[26/*"TOMA"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp94->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[30/*Fuse.Triggers.Actions.TriggerAction*/])), temp95);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp95, uCRef(false));
    RootNode(temp3);
    Theme(::g::Fuse::BasicTheme::BasicTheme::Singleton1());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[20/*Fuse.Behavior*/])), statusBarConfig);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[20/*Fuse.Behavior*/])), temp2);
}

// public MainView New() [static] :169
MainView* MainView::New2()
{
    MainView* obj4 = (MainView*)uNew(MainView_typeof());
    obj4->ctor_3();
    return obj4;
}
// }

} // ::g
