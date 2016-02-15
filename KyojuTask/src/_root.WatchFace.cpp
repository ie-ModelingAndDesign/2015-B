// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/WatchFace.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MyFirstProject_bundle.h>
#include <_root.MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property.h>
#include <_root.MyFirstProject_FuseElementsElement_float_Opacity_Property.h>
#include <_root.MyFirstProject_FuseElementsElement_FuseElementsVisibility-ee1da625.h>
#include <_root.MyFirstProject_FuseRotation_float_Degrees_Property.h>
#include <_root.MyFirstProject_FuseScaling_float_Factor_Property.h>
#include <_root.Seconds.h>
#include <_root.Stopwatch.h>
#include <_root.StopwatchTrigger.h>
#include <_root.WatchFace.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.LineCap.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Drawing.StrokeAlignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Node.h>
#include <Fuse.Rotation.h>
#include <Fuse.Scaling.h>
#include <Fuse.Transform.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.Pulse.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.BundleFile.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
static uString* STRINGS[2];
static uType* TYPES[27];

namespace g{

// public partial sealed class WatchFace :1
// {
// static WatchFace() :13
static void WatchFace__cctor_5_fn(uType* __type)
{
}

::g::Fuse::Controls::ParentControl_type* WatchFace_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 110;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WatchFace);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("WatchFace", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)WatchFace__New3_fn;
    type->fp_cctor_ = WatchFace__cctor_5_fn;
    type->interface7.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::ParentControl__FuseNavigationINavigationPanelAddChildAt_fn;
    type->interface7.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::ParentControl__FuseNavigationINavigationPanelRemoveChild_fn;
    type->interface8.fp_Add = (void(*)(uObject*, uObject*))::g::Fuse::Controls::ParentControl__FuseIObjectContainerAdd_fn;
    type->interface8.fp_Insert = (void(*)(uObject*, int*, uObject*))::g::Fuse::Controls::ParentControl__FuseIObjectContainerInsert_fn;
    type->interface8.fp_Remove = (void(*)(uObject*, uObject*))::g::Fuse::Controls::ParentControl__FuseIObjectContainerRemove_fn;
    type->interface8.fp_BeginRemove = (void(*)(uObject*, uObject*))::g::Fuse::Controls::ParentControl__FuseIObjectContainerBeginRemove_fn;
    type->interface7.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::ParentControl__get_Children_fn;
    type->interface7.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::ParentControl__add_ChildAdded_fn;
    type->interface7.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::ParentControl__remove_ChildAdded_fn;
    type->interface7.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::ParentControl__add_ChildRemoved_fn;
    type->interface7.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::ParentControl__remove_ChildRemoved_fn;
    type->interface7.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface7.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface7.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface7.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface2.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface4.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface3.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface6.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface5.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface5.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface5.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::STRINGS[0] = uString::Const("clock");
    ::STRINGS[1] = uString::Const("tickCircle");
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[3] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[4] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[5] = ::g::Fuse::Controls::Shape_typeof();
    ::TYPES[6] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[8] = ::g::Fuse::Transform_typeof();
    ::TYPES[9] = ::g::Fuse::Rotation_typeof();
    ::TYPES[10] = ::g::Fuse::Translation_typeof();
    ::TYPES[11] = ::g::Fuse::TranslationModes_typeof();
    ::TYPES[12] = ::g::Fuse::Controls::Circle_typeof();
    ::TYPES[13] = ::g::Fuse::Drawing::Stroke_typeof();
    ::TYPES[14] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[15] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[16] = ::g::MyFirstProject_bundle_typeof();
    ::TYPES[17] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[18] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[19] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[20] = ::g::StopwatchTrigger_typeof();
    ::TYPES[21] = ::g::MainView_typeof();
    ::TYPES[22] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[23] = ::g::Fuse::Triggers::Actions::Pulse_typeof();
    ::TYPES[24] = ::g::Fuse::Triggers::IPulseTrigger_typeof();
    ::TYPES[25] = ::g::Fuse::Controls::ParentControl_typeof();
    ::TYPES[26] = ::g::Fuse::Behavior_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::ParentControl_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::ParentControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::ParentControl_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::ParentControl_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::ParentControl_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::ParentControl_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::ParentControl_type, interface6),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::ParentControl_type, interface7),
        ::g::Fuse::IObjectContainer_typeof(), offsetof(::g::Fuse::Controls::ParentControl_type, interface8));
    type->SetFields(100,
        ::g::Fuse::Scaling_typeof(), offsetof(::g::WatchFace, circleScale), 0,
        ::g::MyFirstProject_FuseScaling_float_Factor_Property_typeof(), offsetof(::g::WatchFace, circleScale_Factor_inst), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::WatchFace, clock), 0,
        ::g::MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property_typeof(), offsetof(::g::WatchFace, clock_EndAngleDegrees_inst), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::WatchFace, tickCircle), 0,
        ::g::MyFirstProject_FuseElementsElement_float_Opacity_Property_typeof(), offsetof(::g::WatchFace, tickCircle_Opacity_inst), 0,
        ::g::MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property_typeof(), offsetof(::g::WatchFace, tickCircle_Visibility_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::WatchFace, tickCircleAnimation), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::WatchFace, trackerBall), 0,
        ::g::MyFirstProject_FuseRotation_float_Degrees_Property_typeof(), offsetof(::g::WatchFace, trackerBall_Degrees_inst), 0);
    return type;
}

// public WatchFace() :16
void WatchFace__ctor_5_fn(WatchFace* __this)
{
    __this->ctor_5();
}

// private void InitializeUX() :20
void WatchFace__InitializeUX_fn(WatchFace* __this)
{
    __this->InitializeUX();
}

// public WatchFace New() :16
void WatchFace__New3_fn(WatchFace** __retval)
{
    *__retval = WatchFace::New3();
}

// public WatchFace() [instance] :16
void WatchFace::ctor_5()
{
    ctor_4();
    InitializeUX();
}

// private void InitializeUX() [instance] :20
void WatchFace::InitializeUX()
{
    tickCircle = ::g::Fuse::Controls::Circle::New2();
    tickCircle_Visibility_inst = ::g::MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property::New1(tickCircle);
    tickCircle_Opacity_inst = ::g::MyFirstProject_FuseElementsElement_float_Opacity_Property::New1(tickCircle);
    circleScale = ::g::Fuse::Scaling::New1();
    circleScale_Factor_inst = ::g::MyFirstProject_FuseScaling_float_Factor_Property::New1(circleScale);
    clock = ::g::Fuse::Controls::Circle::New2();
    clock_EndAngleDegrees_inst = ::g::MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property::New1(clock);
    trackerBall = ::g::Fuse::Rotation::New1();
    trackerBall_Degrees_inst = ::g::MyFirstProject_FuseRotation_float_Degrees_Property::New1(trackerBall);
    ::g::Fuse::Controls::Circle* temp = ::g::Fuse::Controls::Circle::New2();
    ::g::Fuse::Translation* temp1 = ::g::Fuse::Translation::New1();
    ::g::Fuse::Drawing::StaticSolidColor* temp2 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Rotation* temp3 = ::g::Fuse::Rotation::New1();
    ::g::Fuse::Drawing::Stroke* temp4 = ::g::Fuse::Drawing::Stroke::New1();
    ::g::Fuse::Drawing::ImageFill* temp5 = ::g::Fuse::Drawing::ImageFill::New1();
    ::g::Fuse::Controls::Circle* temp6 = ::g::Fuse::Controls::Circle::New2();
    ::g::Fuse::Drawing::Stroke* temp7 = ::g::Fuse::Drawing::Stroke::New1();
    ::g::Fuse::Drawing::StaticSolidColor* temp8 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.2705882f, 0.3294118f, 0.5764706f, 1.0f));
    ::g::Fuse::Drawing::Stroke* temp9 = ::g::Fuse::Drawing::Stroke::New1();
    ::g::Fuse::Drawing::ImageFill* temp10 = ::g::Fuse::Drawing::ImageFill::New1();
    tickCircleAnimation = ::g::Fuse::Triggers::WhileTrue::New1();
    ::g::Fuse::Animations::Change* temp11 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[1/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], tickCircle_Visibility_inst);
    ::g::Fuse::Animations::Change* temp12 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], tickCircle_Opacity_inst);
    ::g::Fuse::Animations::Change* temp13 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], circleScale_Factor_inst);
    ::g::Seconds* temp14 = ::g::Seconds::New1();
    ::g::Fuse::Animations::Change* temp15 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], clock_EndAngleDegrees_inst);
    ::g::Fuse::Animations::Change* temp16 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], trackerBall_Degrees_inst);
    ::g::Fuse::Triggers::Actions::Pulse* temp17 = ::g::Fuse::Triggers::Actions::Pulse::New1();
    temp->Width(10.0f);
    temp->Height(10.0f);
    temp->Fill(temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Transform*/])), trackerBall);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Transform*/])), temp1);
    uPtr(trackerBall)->Degrees(0.0f);
    temp1->Y(-0.487f);
    temp1->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    uPtr(clock)->StartAngleDegrees(0.0f);
    uPtr(clock)->EndAngleDegrees(0.0f);
    uPtr(clock)->Name(::STRINGS[0/*"clock"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(clock)->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Drawing.Stroke*/])), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(clock)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Transform*/])), temp3);
    temp3->Degrees(-90.0f);
    temp4->Width(6.0f);
    temp4->Offset(-1.0f);
    temp4->Alignment(1);
    temp4->LineCap(1);
    temp4->Brush(temp5);
    temp5->File(::g::Uno::UX::BundleFileSource::New1(::g::MyFirstProject_bundle::gradientcff7ea2f()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Drawing.Stroke*/])), temp7);
    temp7->Width(6.0f);
    temp7->Offset(-1.0f);
    temp7->Alignment(1);
    temp7->Brush(temp8);
    uPtr(tickCircle)->Visibility(2);
    uPtr(tickCircle)->Name(::STRINGS[1/*"tickCircle"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(tickCircle)->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Drawing.Stroke*/])), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(tickCircle)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Transform*/])), circleScale);
    temp9->Width(6.0f);
    temp9->Offset(-1.0f);
    temp9->Alignment(1);
    temp9->Brush(temp10);
    temp10->File(::g::Uno::UX::BundleFileSource::New1(::g::MyFirstProject_bundle::gradientcff7ea2f()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(tickCircleAnimation)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Animations.Animator*/])), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(tickCircleAnimation)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Animations.Animator*/])), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(tickCircleAnimation)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Animations.Animator*/])), temp13);
    ::g::Fuse::Animations::Change__set_Value_fn(temp11, uCRef<int>(0));
    ::g::Fuse::Animations::Change__set_Value_fn(temp12, uCRef(0.0f));
    temp12->Easing(2);
    temp12->Duration(0.5);
    temp12->DurationBack(0.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp13, uCRef(1.3f));
    temp13->Easing(2);
    temp13->Duration(0.5);
    temp13->DurationBack(0.0);
    temp14->Stopwatch(::g::MainView::Stopwatch());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Animations.Animator*/])), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Animations.Animator*/])), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[22/*Fuse.Triggers.Actions.TriggerAction*/])), temp17);
    ::g::Fuse::Animations::Change__set_Value_fn(temp15, uCRef(360.0f));
    temp15->Duration(1.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp16, uCRef(360.0f));
    temp16->Duration(1.0);
    temp17->Target((uObject*)tickCircleAnimation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Node*/])), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Node*/])), clock);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Node*/])), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Node*/])), tickCircle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[26/*Fuse.Behavior*/])), tickCircleAnimation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[26/*Fuse.Behavior*/])), temp14);
}

// public WatchFace New() [static] :16
WatchFace* WatchFace::New3()
{
    WatchFace* obj1 = (WatchFace*)uNew(WatchFace_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

} // ::g
