// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Experimental.Physics.BasicBoundedRegion2D.h>
#include <Experimental.Physics.BoundedRegion2D.h>
#include <Experimental.Physics.MotionSimulation-1.h>
#include <Experimental.Physics.PointerVelocity-1.h>
#include <Experimental.Physics.Simulation.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.RangeControl.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedArgs.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.Clicker.h>
#include <Fuse.Gestures.ClickerEventHandler.h>
#include <Fuse.Gestures.ClickerTrigger.h>
#include <Fuse.Gestures.DegreeSpan.h>
#include <Fuse.Gestures.Edge.h>
#include <Fuse.Gestures.Internal.Swiper.h>
#include <Fuse.Gestures.Internal.SwipeRegion.h>
#include <Fuse.Gestures.Internal.SwipeRegionArea.h>
#include <Fuse.Gestures.KeepFocusInView.h>
#include <Fuse.Gestures.KeepInViewCommon.h>
#include <Fuse.Gestures.LinearRangeBehavior.h>
#include <Fuse.Gestures.ScrollableGoto.h>
#include <Fuse.Gestures.ScrollDirections.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.Gestures.Scroller.MoveUserFlags.h>
#include <Fuse.Gestures.SetSwipeActive.h>
#include <Fuse.Gestures.SwipeDirection.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Gestures.SwipeGestureHelper.h>
#include <Fuse.Gestures.SwipeType.h>
#include <Fuse.Gestures.Tapped.h>
#include <Fuse.Gestures.TappedArgs.h>
#include <Fuse.Gestures.TappedHandler.h>
#include <Fuse.Gestures.ToggleSwipeActive.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEnteredArgs.h>
#include <Fuse.Input.PointerEnteredHandler.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerLeftArgs.h>
#include <Fuse.Input.PointerLeftHandler.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.Input.PointerWheelMovedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.NodeEvent-2.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.RequestBringIntoViewArgs.h>
#include <Fuse.RequestBringIntoViewHandler.h>
#include <Fuse.Time.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Uno.Action.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.String.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
#include <Uno.Vector.h>
static uString* STRINGS[7];
static uType* TYPES[45];

namespace g{
namespace Fuse{
namespace Gestures{

// ../../../../usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/$.uno(16)
// -----------------------------------------------------------------------

// public sealed class Clicked :16
// {
::g::Fuse::Triggers::Trigger_type* Clicked_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(Clicked);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Clicked", options);
    type->SetBase(::g::Fuse::Gestures::ClickerTrigger_typeof());
    type->fp_ctor_ = (void*)Clicked__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Clicked__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Clicked__OnUnrooted_fn;
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[1] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    ::TYPES[3] = ::g::Uno::Delegate_typeof();
    ::TYPES[4] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[6] = ::g::Fuse::Gestures::Clicker_typeof();
    ::TYPES[7] = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    ::TYPES[8] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    type->SetFields(16,
        ::g::Fuse::Gestures::ClickedHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicked, Handler1), 0);
    return type;
}

// public generated Clicked() :16
void Clicked__ctor_3_fn(Clicked* __this)
{
    __this->ctor_3();
}

// public static void AddHandler(Fuse.Node node, Fuse.Gestures.ClickedHandler handler) :30
void Clicked__AddHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    Clicked::AddHandler(node, handler);
}

// private static Fuse.Gestures.Clicked GetClicked(Fuse.Node n) :18
void Clicked__GetClicked_fn(::g::Fuse::Node* n, Clicked** __retval)
{
    *__retval = Clicked::GetClicked(n);
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) :43
void Clicked__add_Handler_fn(Clicked* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) :43
void Clicked__remove_Handler_fn(Clicked* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated Clicked New() :16
void Clicked__New1_fn(Clicked** __retval)
{
    *__retval = Clicked::New1();
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) :57
void Clicked__OnClicked_fn(Clicked* __this, ::g::Fuse::Input::PointerEventArgs* args, int* clickCount)
{
    __this->OnClicked(args, *clickCount);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :45
void Clicked__OnRooted_fn(Clicked* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this, parentNode);
    uPtr(__this->Clicker)->add_ClickedEvent(uDelegate::New(::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/], (void*)Clicked__OnClicked_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :51
void Clicked__OnUnrooted_fn(Clicked* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->Clicker)->remove_ClickedEvent(uDelegate::New(::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/], (void*)Clicked__OnClicked_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this, parentNode);
}

// public generated Clicked() [instance] :16
void Clicked::ctor_3()
{
    ctor_2();
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) [instance] :43
void Clicked::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[4/*Fuse.Gestures.ClickedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) [instance] :43
void Clicked::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[4/*Fuse.Gestures.ClickedHandler*/]);
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) [instance] :57
void Clicked::OnClicked(::g::Fuse::Input::PointerEventArgs* args, int clickCount)
{
    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::ClickedArgs*)::g::Fuse::Gestures::ClickedArgs::New3(args, ParentNode()));
}

// public static void AddHandler(Fuse.Node node, Fuse.Gestures.ClickedHandler handler) [static] :30
void Clicked::AddHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    Clicked* c = Clicked::GetClicked(node);
    uPtr(c)->add_Handler(handler);
}

// private static Fuse.Gestures.Clicked GetClicked(Fuse.Node n) [static] :18
Clicked* Clicked::GetClicked(::g::Fuse::Node* n)
{
    ::g::Fuse::Behavior* ret3;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(n)->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[2/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[1/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret3), ret3);

        if (uIs(b, Clicked_typeof()))
            return uCast<Clicked*>(b, Clicked_typeof());
    }

    Clicked* c = Clicked::New1();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(n->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*Fuse.Behavior*/])), c);
    return c;
}

// public generated Clicked New() [static] :16
Clicked* Clicked::New1()
{
    Clicked* obj2 = (Clicked*)uNew(Clicked_typeof());
    obj2->ctor_3();
    return obj2;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/$.uno(9)
// ----------------------------------------------------------------------

// public sealed class ClickedArgs :9
// {
::g::Fuse::NodeEventArgs_type* ClickedArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ClickedArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Gestures.ClickedArgs", options);
    type->SetBase(::g::Fuse::Input::CustomPointerEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__FuseScriptingIScriptEventSerialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(3);
    return type;
}

// public ClickedArgs(Fuse.Input.PointerEventArgs args, Fuse.Node node) :11
void ClickedArgs__ctor_4_fn(ClickedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    __this->ctor_4(args, node);
}

// public ClickedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Node node) :11
void ClickedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node, ClickedArgs** __retval)
{
    *__retval = ClickedArgs::New3(args, node);
}

// public ClickedArgs(Fuse.Input.PointerEventArgs args, Fuse.Node node) [instance] :11
void ClickedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    ctor_3(args, node);
}

// public ClickedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Node node) [static] :11
ClickedArgs* ClickedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    ClickedArgs* obj1 = (ClickedArgs*)uNew(ClickedArgs_typeof());
    obj1->ctor_4(args, node);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/$.uno(14)
// -----------------------------------------------------------------------

// public delegate void ClickedHandler(object sender, Fuse.Gestures.ClickedArgs args) :14
uDelegateType* ClickedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.ClickedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::ClickedArgs_typeof());
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/Internal/$.uno(47)
// --------------------------------------------------------------------------------

// internal sealed class Clicker :47
// {
// static Clicker() :47
static void Clicker__cctor__fn(uType* __type)
{
    Clicker::_clickerProperty_ = ::g::Fuse::Properties::CreateHandle();
}

uType* Clicker_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.ObjectSize = sizeof(Clicker);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.Clicker", options);
    type->fp_cctor_ = Clicker__cctor__fn;
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[3] = ::g::Uno::Delegate_typeof();
    ::TYPES[8] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[9] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[10] = ::g::Fuse::Time_typeof();
    ::TYPES[11] = ::g::Uno::Double_typeof();
    ::TYPES[12] = ::g::Uno::Bool_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[14] = ::g::Uno::EventHandler_typeof();
    ::TYPES[15] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[16] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[17] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[18] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _attachCount), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _clickCount), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _down), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _hasUpdate), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _hovering), 0,
        ::g::Fuse::Input::PointerEventArgs_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _lastArgs), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _lastUpTime), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _longPressTimeout), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maxDoubleInterval), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maxTapDistanceMoved), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maxTapTimeHeld), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maybeTap), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _node), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _startCoord), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _startTime), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _tapCount), 0,
        ::g::Fuse::Gestures::ClickerEventHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicker, ClickedEvent1), 0,
        ::g::Fuse::Gestures::ClickerEventHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicker, LongPressedEvent1), 0,
        ::g::Fuse::Gestures::ClickerEventHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicker, PressingEvent1), 0,
        ::g::Fuse::Gestures::ClickerEventHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicker, TappedEvent1), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Gestures::Clicker::_clickerProperty_, uFieldFlagsStatic);
    return type;
}

// private Clicker(Fuse.Node node) :62
void Clicker__ctor__fn(Clicker* __this, ::g::Fuse::Node* node)
{
    __this->ctor_(node);
}

// public static Fuse.Gestures.Clicker AttachClicker(Fuse.Node elm) :68
void Clicker__AttachClicker_fn(::g::Fuse::Node* elm, Clicker** __retval)
{
    *__retval = Clicker::AttachClicker(elm);
}

// public generated void add_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) :50
void Clicker__add_ClickedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_ClickedEvent(value);
}

// public generated void remove_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) :50
void Clicker__remove_ClickedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_ClickedEvent(value);
}

// public void Detach() :84
void Clicker__Detach_fn(Clicker* __this)
{
    __this->Detach();
}

// private void DoneCapture() :236
void Clicker__DoneCapture_fn(Clicker* __this)
{
    __this->DoneCapture();
}

// public generated void add_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) :51
void Clicker__add_LongPressedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_LongPressedEvent(value);
}

// public generated void remove_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) :51
void Clicker__remove_LongPressedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_LongPressedEvent(value);
}

// private bool NeedCapture() :178
void Clicker__NeedCapture_fn(Clicker* __this, bool* __retval)
{
    *__retval = __this->NeedCapture();
}

// private Clicker New(Fuse.Node node) :62
void Clicker__New1_fn(::g::Fuse::Node* node, Clicker** __retval)
{
    *__retval = Clicker::New1(node);
}

// private void OnLostCapture() :255
void Clicker__OnLostCapture_fn(Clicker* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :150
void Clicker__OnPointerMoved_fn(Clicker* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :120
void Clicker__OnPointerPressed_fn(Clicker* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :186
void Clicker__OnPointerReleased_fn(Clicker* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnRooted() :94
void Clicker__OnRooted_fn(Clicker* __this)
{
    __this->OnRooted();
}

// private void OnUnrooted() :101
void Clicker__OnUnrooted_fn(Clicker* __this)
{
    __this->OnUnrooted();
}

// private void OnUpdate(object s, object a) :225
void Clicker__OnUpdate_fn(Clicker* __this, uObject* s, uObject* a)
{
    __this->OnUpdate(s, a);
}

// public generated void add_PressingEvent(Fuse.Gestures.ClickerEventHandler value) :52
void Clicker__add_PressingEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_PressingEvent(value);
}

// public generated void remove_PressingEvent(Fuse.Gestures.ClickerEventHandler value) :52
void Clicker__remove_PressingEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_PressingEvent(value);
}

// private void ReleaseUpdate() :246
void Clicker__ReleaseUpdate_fn(Clicker* __this)
{
    __this->ReleaseUpdate();
}

// public generated void add_TappedEvent(Fuse.Gestures.ClickerEventHandler value) :49
void Clicker__add_TappedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_TappedEvent(value);
}

// public generated void remove_TappedEvent(Fuse.Gestures.ClickerEventHandler value) :49
void Clicker__remove_TappedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_TappedEvent(value);
}

uSStrong< ::g::Fuse::PropertyHandle*> Clicker::_clickerProperty_;

// private Clicker(Fuse.Node node) [instance] :62
void Clicker::ctor_(::g::Fuse::Node* node)
{
    _maxTapDistanceMoved = 25.0f;
    _maxTapTimeHeld = 0.3f;
    _maxDoubleInterval = 0.3f;
    _longPressTimeout = 0.5f;
    _attachCount = 1;
    _down = -1;
    _node = node;
}

// public generated void add_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :50
void Clicker::add_ClickedEvent(uDelegate* value)
{
    ClickedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ClickedEvent1, value), ::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :50
void Clicker::remove_ClickedEvent(uDelegate* value)
{
    ClickedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ClickedEvent1, value), ::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public void Detach() [instance] :84
void Clicker::Detach()
{
    _attachCount--;

    if (_attachCount == 0)
    {
        OnUnrooted();
        uPtr(uPtr(_node)->Properties())->Clear(Clicker::_clickerProperty());
    }
}

// private void DoneCapture() [instance] :236
void Clicker::DoneCapture()
{
    _down = -1;
    ReleaseUpdate();

    if (_hovering && ::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
        uPtr(PressingEvent1)->Invoke(2, (::g::Fuse::Input::PointerEventArgs*)_lastArgs, uCRef<int>(0));

    _hovering = false;
}

// public generated void add_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :51
void Clicker::add_LongPressedEvent(uDelegate* value)
{
    LongPressedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LongPressedEvent1, value), ::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :51
void Clicker::remove_LongPressedEvent(uDelegate* value)
{
    LongPressedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LongPressedEvent1, value), ::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/]);
}

// private bool NeedCapture() [instance] :178
bool Clicker::NeedCapture()
{
    return (((_maybeTap && ::g::Uno::Delegate::op_Inequality(TappedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(ClickedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(LongPressedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL);
}

// private void OnLostCapture() [instance] :255
void Clicker::OnLostCapture()
{
    DoneCapture();
    _tapCount = 0;
    _clickCount = 0;
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :150
void Clicker::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    if (_down != uPtr(args)->PointIndex())
        return;

    float distance = ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(uPtr(args)->WindowPoint(), _startCoord));
    double deltaTime = ::g::Fuse::Time::FrameTime() - _startTime;

    if ((distance > _maxTapDistanceMoved) || (deltaTime > (double)_maxTapTimeHeld))
        _maybeTap = false;

    if (!NeedCapture())
    {
        uPtr(args)->ReleaseSoftCapture(this);
        DoneCapture();
    }

    bool hoverNow = uPtr(_node)->GetHitWindowPoint(args->WindowPoint()) != NULL;

    if (hoverNow != _hovering)
    {
        if (::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
            uPtr(PressingEvent1)->Invoke(2, args, uCRef<int>(hoverNow ? 1 : 0));

        _hovering = hoverNow;
    }

    _lastArgs = args;
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :120
void Clicker::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    if ((_down != -1) || !uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Clicker__OnLostCapture_fn, this), NULL))
        return;

    double delta = ::g::Fuse::Time::FrameTime() - _lastUpTime;

    if (delta > (double)_maxDoubleInterval)
    {
        _tapCount = 0;
        _clickCount = 0;
    }

    _down = uPtr(args)->PointIndex();
    _startCoord = args->WindowPoint();
    _startTime = ::g::Fuse::Time::FrameTime();
    _maybeTap = true;

    if (::g::Uno::Delegate::op_Inequality(LongPressedEvent1, NULL))
    {
        _hasUpdate = true;
        uPtr(_node)->add_Update(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)Clicker__OnUpdate_fn, this));
    }

    if (::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
        uPtr(PressingEvent1)->Invoke(2, args, uCRef<int>(1));

    _lastArgs = args;
    _hovering = true;
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :186
void Clicker::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    if (_down != uPtr(args)->PointIndex())
        return;

    uPtr(args)->ReleaseSoftCapture(this);
    double deltaTime = ::g::Fuse::Time::FrameTime() - _startTime;

    if (_maybeTap && (deltaTime <= (double)_maxTapTimeHeld))
    {
        _tapCount++;

        if (::g::Uno::Delegate::op_Inequality(TappedEvent1, NULL))
            uPtr(TappedEvent1)->Invoke(2, args, uCRef<int>(_tapCount));
    }
    else
        _tapCount = 0;

    bool hoverNow = uPtr(_node)->GetHitWindowPoint(args->WindowPoint()) != NULL;

    if (hoverNow)
    {
        _clickCount++;

        if (::g::Uno::Delegate::op_Inequality(ClickedEvent1, NULL))
            uPtr(ClickedEvent1)->Invoke(2, args, uCRef<int>(_clickCount));
    }
    else
        _clickCount = 0;

    if (_hovering && ::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
        uPtr(PressingEvent1)->Invoke(2, args, uCRef<int>(0));

    _hovering = false;
    DoneCapture();
    _lastUpTime = ::g::Fuse::Time::FrameTime();
    _lastArgs = args;
}

// private void OnRooted() [instance] :94
void Clicker::OnRooted()
{
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _node, uDelegate::New(::TYPES[16/*Fuse.Input.PointerPressedHandler*/], (void*)Clicker__OnPointerPressed_fn, this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _node, uDelegate::New(::TYPES[17/*Fuse.Input.PointerReleasedHandler*/], (void*)Clicker__OnPointerReleased_fn, this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _node, uDelegate::New(::TYPES[18/*Fuse.Input.PointerMovedHandler*/], (void*)Clicker__OnPointerMoved_fn, this));
}

// private void OnUnrooted() [instance] :101
void Clicker::OnUnrooted()
{
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _node, uDelegate::New(::TYPES[16/*Fuse.Input.PointerPressedHandler*/], (void*)Clicker__OnPointerPressed_fn, this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _node, uDelegate::New(::TYPES[17/*Fuse.Input.PointerReleasedHandler*/], (void*)Clicker__OnPointerReleased_fn, this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _node, uDelegate::New(::TYPES[18/*Fuse.Input.PointerMovedHandler*/], (void*)Clicker__OnPointerMoved_fn, this));
}

// private void OnUpdate(object s, object a) [instance] :225
void Clicker::OnUpdate(uObject* s, uObject* a)
{
    double elapsed = ::g::Fuse::Time::FrameTime() - _startTime;

    if (::g::Uno::Delegate::op_Inequality(LongPressedEvent1, NULL) && (elapsed > (double)_longPressTimeout))
    {
        uPtr(LongPressedEvent1)->Invoke(2, (::g::Fuse::Input::PointerEventArgs*)_lastArgs, uCRef<int>(0));
        ::g::Fuse::Input::Pointer::ReleaseSoftCapture(_down, this);
        DoneCapture();
    }
}

// public generated void add_PressingEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :52
void Clicker::add_PressingEvent(uDelegate* value)
{
    PressingEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PressingEvent1, value), ::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_PressingEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :52
void Clicker::remove_PressingEvent(uDelegate* value)
{
    PressingEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PressingEvent1, value), ::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/]);
}

// private void ReleaseUpdate() [instance] :246
void Clicker::ReleaseUpdate()
{
    if (_hasUpdate)
    {
        uPtr(_node)->remove_Update(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)Clicker__OnUpdate_fn, this));
        _hasUpdate = false;
    }
}

// public generated void add_TappedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :49
void Clicker::add_TappedEvent(uDelegate* value)
{
    TappedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TappedEvent1, value), ::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_TappedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :49
void Clicker::remove_TappedEvent(uDelegate* value)
{
    TappedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TappedEvent1, value), ::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public static Fuse.Gestures.Clicker AttachClicker(Fuse.Node elm) [static] :68
Clicker* Clicker::AttachClicker(::g::Fuse::Node* elm)
{
    Clicker_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(Clicker::_clickerProperty(), &v))
    {
        Clicker* c = uAs<Clicker*>(v, Clicker_typeof());
        uPtr(c)->_attachCount++;
        return c;
    }

    Clicker* nc = Clicker::New1(elm);
    uPtr(uPtr(elm)->Properties())->Set(Clicker::_clickerProperty(), nc);
    nc->OnRooted();
    return nc;
}

// private Clicker New(Fuse.Node node) [static] :62
Clicker* Clicker::New1(::g::Fuse::Node* node)
{
    Clicker* obj1 = (Clicker*)uNew(Clicker_typeof());
    obj1->ctor_(node);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/Internal/$.uno(11)
// --------------------------------------------------------------------------------

// internal delegate void ClickerEventHandler(Fuse.Input.PointerEventArgs args, int count) :11
uDelegateType* ClickerEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.ClickerEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Fuse::Input::PointerEventArgs_typeof(),
        ::g::Uno::Int_typeof());
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/Internal/$.uno(13)
// --------------------------------------------------------------------------------

// public abstract class ClickerTrigger :13
// {
::g::Fuse::Triggers::Trigger_type* ClickerTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(ClickerTrigger);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.ClickerTrigger", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ClickerTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ClickerTrigger__OnUnrooted_fn;
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    type->SetFields(15,
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(::g::Fuse::Gestures::ClickerTrigger, Clicker), 0);
    return type;
}

// protected generated ClickerTrigger() :13
void ClickerTrigger__ctor_2_fn(ClickerTrigger* __this)
{
    __this->ctor_2();
}

// protected override void OnRooted(Fuse.Node parentNode) :16
void ClickerTrigger__OnRooted_fn(ClickerTrigger* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    __this->Clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->ParentNode());
}

// protected override void OnUnrooted(Fuse.Node parentNode) :22
void ClickerTrigger__OnUnrooted_fn(ClickerTrigger* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->Clicker)->Detach();
    __this->Clicker = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// protected generated ClickerTrigger() [instance] :13
void ClickerTrigger::ctor_2()
{
    ctor_1();
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/Internal/$.uno(578)
// ---------------------------------------------------------------------------------

// internal sealed class DegreeSpan :578
// {
uType* DegreeSpan_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DegreeSpan);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.DegreeSpan", options);
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::DegreeSpan, _a), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::DegreeSpan, _b), 0);
    return type;
}

// public DegreeSpan(float a, float b) :583
void DegreeSpan__ctor__fn(DegreeSpan* __this, float* a, float* b)
{
    __this->ctor_(*a, *b);
}

// public bool IsWithinBounds(float x) :589
void DegreeSpan__IsWithinBounds_fn(DegreeSpan* __this, float* x, bool* __retval)
{
    *__retval = __this->IsWithinBounds(*x);
}

// public DegreeSpan New(float a, float b) :583
void DegreeSpan__New1_fn(float* a, float* b, DegreeSpan** __retval)
{
    *__retval = DegreeSpan::New1(*a, *b);
}

// public DegreeSpan(float a, float b) [instance] :583
void DegreeSpan::ctor_(float a, float b)
{
    _a = a;
    _b = b;
}

// public bool IsWithinBounds(float x) [instance] :589
bool DegreeSpan::IsWithinBounds(float x)
{
    float angle1 = _a;
    float angle2 = _b;
    float rAngle = ::g::Uno::Math::Mod1(::g::Uno::Math::Mod1(angle2 - angle1, 360.0f) + 360.0f, 360.0f);

    if (rAngle >= 180.0f)
    {
        float a = angle1;
        angle1 = angle2;
        angle2 = a;
    }

    if (angle1 <= angle2)
        return (x >= angle1) && (x <= angle2);
    else
        return (x >= angle2) || (x <= angle2);
}

// public DegreeSpan New(float a, float b) [static] :583
DegreeSpan* DegreeSpan::New1(float a, float b)
{
    DegreeSpan* obj1 = (DegreeSpan*)uNew(DegreeSpan_typeof());
    obj1->ctor_(a, b);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/$.uno(1409)
// -------------------------------------------------------------------------

// public enum Edge :1409
uEnumType* Edge_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Edge", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/$.uno(186)
// ------------------------------------------------------------------------

// public sealed class KeepFocusInView :186
// {
::g::Fuse::Behavior_type* KeepFocusInView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(KeepFocusInView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Gestures.KeepFocusInView", options);
    type->SetBase(::g::Fuse::Gestures::KeepInViewCommon_typeof());
    type->fp_ctor_ = (void*)KeepFocusInView__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))KeepFocusInView__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))KeepFocusInView__OnUnrooted_fn;
    ::TYPES[19] = ::g::Fuse::Gestures::KeepInViewCommon_typeof();
    ::TYPES[20] = ::g::Fuse::Input::Focus_typeof();
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    ::TYPES[21] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[22] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetFields(6);
    return type;
}

// public generated KeepFocusInView() :186
void KeepFocusInView__ctor_2_fn(KeepFocusInView* __this)
{
    __this->ctor_2();
}

// public generated KeepFocusInView New() :186
void KeepFocusInView__New2_fn(KeepFocusInView** __retval)
{
    *__retval = KeepFocusInView::New2();
}

// private void OnGotFocus(object s, Fuse.Input.FocusGainedArgs fga) :202
void KeepFocusInView__OnGotFocus_fn(KeepFocusInView* __this, uObject* s, ::g::Fuse::Input::FocusGainedArgs* fga)
{
    __this->OnGotFocus(s, fga);
}

// private void OnLostFocus(object s, object a) :207
void KeepFocusInView__OnLostFocus_fn(KeepFocusInView* __this, uObject* s, uObject* a)
{
    __this->OnLostFocus(s, a);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :188
void KeepFocusInView__OnRooted_fn(KeepFocusInView* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Gestures::KeepInViewCommon__OnRooted_fn(__this, parentNode);
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->ParentNode(), uDelegate::New(::TYPES[21/*Fuse.Input.FocusGainedHandler*/], (void*)KeepFocusInView__OnGotFocus_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->ParentNode(), uDelegate::New(::TYPES[22/*Fuse.Input.FocusLostHandler*/], (void*)KeepFocusInView__OnLostFocus_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :195
void KeepFocusInView__OnUnrooted_fn(KeepFocusInView* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->ParentNode(), uDelegate::New(::TYPES[21/*Fuse.Input.FocusGainedHandler*/], (void*)KeepFocusInView__OnGotFocus_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->ParentNode(), uDelegate::New(::TYPES[22/*Fuse.Input.FocusLostHandler*/], (void*)KeepFocusInView__OnLostFocus_fn, __this));
    ::g::Fuse::Gestures::KeepInViewCommon__OnUnrooted_fn(__this, parentNode);
}

// public generated KeepFocusInView() [instance] :186
void KeepFocusInView::ctor_2()
{
    ctor_1();
}

// private void OnGotFocus(object s, Fuse.Input.FocusGainedArgs fga) [instance] :202
void KeepFocusInView::OnGotFocus(uObject* s, ::g::Fuse::Input::FocusGainedArgs* fga)
{
    Target(::g::Fuse::Input::Focus::FocusedNode());
}

// private void OnLostFocus(object s, object a) [instance] :207
void KeepFocusInView::OnLostFocus(uObject* s, uObject* a)
{
    Target(NULL);
}

// public generated KeepFocusInView New() [static] :186
KeepFocusInView* KeepFocusInView::New2()
{
    KeepFocusInView* obj1 = (KeepFocusInView*)uNew(KeepFocusInView_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/$.uno(104)
// ------------------------------------------------------------------------

// public class KeepInViewCommon :104
// {
::g::Fuse::Behavior_type* KeepInViewCommon_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(KeepInViewCommon);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Gestures.KeepInViewCommon", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))KeepInViewCommon__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))KeepInViewCommon__OnUnrooted_fn;
    ::TYPES[23] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[24] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    ::TYPES[12] = ::g::Uno::Bool_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    type->SetFields(3,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::KeepInViewCommon, _attached), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::KeepInViewCommon, _rootElement), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::KeepInViewCommon, _target), 0);
    return type;
}

// internal KeepInViewCommon() :106
void KeepInViewCommon__ctor_1_fn(KeepInViewCommon* __this)
{
    __this->ctor_1();
}

// private void AttachElement() :165
void KeepInViewCommon__AttachElement_fn(KeepInViewCommon* __this)
{
    __this->AttachElement();
}

// protected override void OnRooted(Fuse.Node parentNode) :133
void KeepInViewCommon__OnRooted_fn(KeepInViewCommon* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_rootElement = uAs< ::g::Fuse::Elements::Element*>(__this->ParentNode(), ::TYPES[23/*Fuse.Elements.Element*/]);

    if (__this->_rootElement != NULL)
    {
        uPtr(__this->_rootElement)->add_Placed(uDelegate::New(::TYPES[24/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, __this));
        __this->AttachElement();
    }
}

// protected override void OnUnrooted(Fuse.Node parentNode) :145
void KeepInViewCommon__OnUnrooted_fn(KeepInViewCommon* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->_rootElement != NULL)
    {
        uPtr(__this->_rootElement)->remove_Placed(uDelegate::New(::TYPES[24/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, __this));
        __this->ReleaseElement();
    }

    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// private void ReleaseElement() :156
void KeepInViewCommon__ReleaseElement_fn(KeepInViewCommon* __this)
{
    __this->ReleaseElement();
}

// public Fuse.Node get_Target() :112
void KeepInViewCommon__get_Target_fn(KeepInViewCommon* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public void set_Target(Fuse.Node value) :113
void KeepInViewCommon__set_Target_fn(KeepInViewCommon* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// private void Update(object s, object a) :175
void KeepInViewCommon__Update_fn(KeepInViewCommon* __this, uObject* s, uObject* a)
{
    __this->Update(s, a);
}

// internal KeepInViewCommon() [instance] :106
void KeepInViewCommon::ctor_1()
{
    ctor_();
}

// private void AttachElement() [instance] :165
void KeepInViewCommon::AttachElement()
{
    if (_target == NULL)
        return;

    uPtr(_target)->add_Placed(uDelegate::New(::TYPES[24/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, this));
    _attached = true;
    Update(NULL, NULL);
}

// private void ReleaseElement() [instance] :156
void KeepInViewCommon::ReleaseElement()
{
    if (!_attached)
        return;

    uPtr(_target)->remove_Placed(uDelegate::New(::TYPES[24/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, this));
    _attached = false;
}

// public Fuse.Node get_Target() [instance] :112
::g::Fuse::Node* KeepInViewCommon::Target()
{
    return _target;
}

// public void set_Target(Fuse.Node value) [instance] :113
void KeepInViewCommon::Target(::g::Fuse::Node* value)
{
    ReleaseElement();
    ::g::Fuse::Node* v = value;

    while (v != NULL)
    {
        _target = uAs< ::g::Fuse::Elements::Element*>(v, ::TYPES[23/*Fuse.Elements.Element*/]);

        if (_target != NULL)
            break;

        v = uPtr(v)->Parent();
    }

    AttachElement();
}

// private void Update(object s, object a) [instance] :175
void KeepInViewCommon::Update(uObject* s, uObject* a)
{
    if (_target != NULL)
        uPtr(_target)->BringIntoView();
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Gestures/$.uno(11)
// --------------------------------------------------------------------------------

// public sealed class LinearRangeBehavior :11
// {
// static LinearRangeBehavior() :11
static void LinearRangeBehavior__cctor__fn(uType* __type)
{
    LinearRangeBehavior::_horizontalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[25/*Fuse.Gestures.DegreeSpan[]*/], 2, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(45.0f, 135.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, -135.0f)));
}

::g::Fuse::Behavior_type* LinearRangeBehavior_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(LinearRangeBehavior);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Gestures.LinearRangeBehavior", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)LinearRangeBehavior__New1_fn;
    type->fp_cctor_ = LinearRangeBehavior__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))LinearRangeBehavior__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))LinearRangeBehavior__OnUnrooted_fn;
    ::STRINGS[0] = uString::Const(" must be rooted in a RangeControl");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Gestures/$.uno");
    ::STRINGS[2] = uString::Const("OnRooted");
    ::TYPES[25] = ::g::Fuse::Gestures::DegreeSpan_typeof()->Array();
    ::TYPES[26] = ::g::Fuse::Controls::RangeControl_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[9] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    ::TYPES[16] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[18] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[17] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[11] = ::g::Uno::Double_typeof();
    ::TYPES[27] = ::g::Uno::Float2_typeof();
    ::TYPES[23] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(3,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::LinearRangeBehavior, _down), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::LinearRangeBehavior, _initialValue), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::LinearRangeBehavior, _startCoord), 0,
        ::g::Fuse::Controls::RangeControl_typeof(), offsetof(::g::Fuse::Gestures::LinearRangeBehavior, Control), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::LinearRangeBehavior::_horizontalGesture_, uFieldFlagsStatic);
    return type;
}

// public generated LinearRangeBehavior() :11
void LinearRangeBehavior__ctor_1_fn(LinearRangeBehavior* __this)
{
    __this->ctor_1();
}

// public generated LinearRangeBehavior New() :11
void LinearRangeBehavior__New1_fn(LinearRangeBehavior** __retval)
{
    *__retval = LinearRangeBehavior::New1();
}

// private void OnLostCapture() :39
void LinearRangeBehavior__OnLostCapture_fn(LinearRangeBehavior* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs c) :66
void LinearRangeBehavior__OnPointerMoved_fn(LinearRangeBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* c)
{
    __this->OnPointerMoved(sender, c);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs c) :50
void LinearRangeBehavior__OnPointerPressed_fn(LinearRangeBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* c)
{
    __this->OnPointerPressed(sender, c);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs c) :82
void LinearRangeBehavior__OnPointerReleased_fn(LinearRangeBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* c)
{
    __this->OnPointerReleased(sender, c);
}

// protected override sealed void OnRooted(Fuse.Node n) :15
void LinearRangeBehavior__OnRooted_fn(LinearRangeBehavior* __this, ::g::Fuse::Node* n)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, n);
    __this->Control = uAs< ::g::Fuse::Controls::RangeControl*>(__this->ParentNode(), ::TYPES[26/*Fuse.Controls.RangeControl*/]);

    if (__this->Control == NULL)
        ::g::Fuse::Diagnostics::Error(::g::Uno::String::op_Addition(__this, ::STRINGS[0/*" must be ro...*/]), __this->ParentNode(), ::STRINGS[1/*"/usr/local/...*/], 21, ::STRINGS[2/*"OnRooted"*/]);

    ::g::Fuse::Input::Pointer::AddHandlers(__this->Control, uDelegate::New(::TYPES[16/*Fuse.Input.PointerPressedHandler*/], (void*)LinearRangeBehavior__OnPointerPressed_fn, __this), uDelegate::New(::TYPES[18/*Fuse.Input.PointerMovedHandler*/], (void*)LinearRangeBehavior__OnPointerMoved_fn, __this), uDelegate::New(::TYPES[17/*Fuse.Input.PointerReleasedHandler*/], (void*)LinearRangeBehavior__OnPointerReleased_fn, __this), NULL, NULL, NULL);
}

// protected override sealed void OnUnrooted(Fuse.Node n) :26
void LinearRangeBehavior__OnUnrooted_fn(LinearRangeBehavior* __this, ::g::Fuse::Node* n)
{
    if (__this->Control != NULL)
        ::g::Fuse::Input::Pointer::RemoveHandlers(__this->Control, uDelegate::New(::TYPES[16/*Fuse.Input.PointerPressedHandler*/], (void*)LinearRangeBehavior__OnPointerPressed_fn, __this), uDelegate::New(::TYPES[18/*Fuse.Input.PointerMovedHandler*/], (void*)LinearRangeBehavior__OnPointerMoved_fn, __this), uDelegate::New(::TYPES[17/*Fuse.Input.PointerReleasedHandler*/], (void*)LinearRangeBehavior__OnPointerReleased_fn, __this), NULL, NULL, NULL);

    __this->Control = NULL;
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, n);
}

// private double PositionToValue(float2 pos) :106
void LinearRangeBehavior__PositionToValue_fn(LinearRangeBehavior* __this, ::g::Uno::Float2* pos, double* __retval)
{
    *__retval = __this->PositionToValue(*pos);
}

// private void UpdateValue(float2 pos) :101
void LinearRangeBehavior__UpdateValue_fn(LinearRangeBehavior* __this, ::g::Uno::Float2* pos)
{
    __this->UpdateValue(*pos);
}

uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> LinearRangeBehavior::_horizontalGesture_;

// public generated LinearRangeBehavior() [instance] :11
void LinearRangeBehavior::ctor_1()
{
    _startCoord = ::g::Uno::Float2__New1(0.0f);
    _initialValue = 0.0;
    _down = -1;
    ctor_();
}

// private void OnLostCapture() [instance] :39
void LinearRangeBehavior::OnLostCapture()
{
    _down = -1;
    uPtr(Control)->Value(_initialValue);
    uPtr(Control)->EndInteraction(this);
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs c) [instance] :66
void LinearRangeBehavior::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* c)
{
    if (_down != uPtr(c)->PointIndex())
        return;

    if (uPtr(c)->IsSoftCapturedTo(this))
    {
        if (uPtr(LinearRangeBehavior::_horizontalGesture())->IsWithinBounds(::g::Uno::Float2__op_Subtraction2(uPtr(c)->WindowPoint(), _startCoord)))
            uPtr(c)->TryHardCapture(this, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)LinearRangeBehavior__OnLostCapture_fn, this), NULL);
    }
    else if (uPtr(c)->IsHardCapturedTo(this))
        UpdateValue(uPtr(Control)->WindowToLocal(uPtr(c)->WindowPoint()));
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs c) [instance] :50
void LinearRangeBehavior::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* c)
{
    if (_down == -1)
    {
        if (uPtr(c)->TrySoftCapture(this, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)LinearRangeBehavior__OnLostCapture_fn, this), NULL))
        {
            ::g::Fuse::Input::Focus::GiveTo(Control);
            uPtr(Control)->BeginInteraction(this, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)LinearRangeBehavior__OnLostCapture_fn, this));
            _startCoord = uPtr(c)->WindowPoint();
            _down = c->PointIndex();
            _initialValue = uPtr(Control)->Value();
        }
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs c) [instance] :82
void LinearRangeBehavior::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* c)
{
    if (_down != uPtr(c)->PointIndex())
        return;

    if (uPtr(c)->IsHardCapturedTo(this))
    {
        UpdateValue(uPtr(Control)->WindowToLocal(uPtr(c)->WindowPoint()));
        c->ReleaseHardCapture(this);
    }

    if (uPtr(c)->IsSoftCapturedTo(this))
    {
        UpdateValue(uPtr(Control)->WindowToLocal(uPtr(c)->WindowPoint()));
        c->ReleaseSoftCapture(this);
    }

    uPtr(Control)->EndInteraction(this);
    _down = -1;
}

// private double PositionToValue(float2 pos) [instance] :106
double LinearRangeBehavior::PositionToValue(::g::Uno::Float2 pos)
{
    return (double)(pos.X / uPtr(Control)->ActualSize().X);
}

// private void UpdateValue(float2 pos) [instance] :101
void LinearRangeBehavior::UpdateValue(::g::Uno::Float2 pos)
{
    uPtr(Control)->RelativeValue(PositionToValue(pos));
}

// public generated LinearRangeBehavior New() [static] :11
LinearRangeBehavior* LinearRangeBehavior::New1()
{
    LinearRangeBehavior* obj1 = (LinearRangeBehavior*)uNew(LinearRangeBehavior_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Gestures/$.uno(824)
// ---------------------------------------------------------------------------------

// private enum Scroller.MoveUserFlags :824
uEnumType* Scroller__MoveUserFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Scroller.MoveUserFlags", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Started", 1LL,
        "Release", 2LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Gestures/$.uno(430)
// ---------------------------------------------------------------------------------

// public sealed class ScrollableGoto :430
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollableGoto_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.ObjectSize = sizeof(ScrollableGoto);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.ScrollableGoto", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ScrollableGoto__Perform_fn;
    ::TYPES[28] = ::g::Fuse::Controls::ScrollView_typeof();
    type->SetFields(7,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::ScrollableGoto, _hasPosition), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::ScrollableGoto, _hasRelativePosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::ScrollableGoto, _position), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::ScrollableGoto, _relativePosition), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::Fuse::Gestures::ScrollableGoto, _Target), 0);
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :458
void ScrollableGoto__Perform_fn(ScrollableGoto* __this, ::g::Fuse::Node* target)
{
    if (__this->Target() == NULL)
        return;

    if (__this->_hasRelativePosition)
        uPtr(__this->Target())->Goto(::g::Uno::Float2__op_Addition2(uPtr(__this->Target())->MinScroll(), ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(__this->Target())->MaxScroll(), uPtr(__this->Target())->MinScroll()), __this->_relativePosition)));
    else if (__this->_hasPosition)
        uPtr(__this->Target())->Goto(__this->_position);
}

// public generated Fuse.Controls.ScrollView get_Target() :432
void ScrollableGoto__get_Target_fn(ScrollableGoto* __this, ::g::Fuse::Controls::ScrollView** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Controls.ScrollView value) :432
void ScrollableGoto__set_Target_fn(ScrollableGoto* __this, ::g::Fuse::Controls::ScrollView* value)
{
    __this->Target(value);
}

// public generated Fuse.Controls.ScrollView get_Target() [instance] :432
::g::Fuse::Controls::ScrollView* ScrollableGoto::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Controls.ScrollView value) [instance] :432
void ScrollableGoto::Target(::g::Fuse::Controls::ScrollView* value)
{
    _Target = value;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Gestures/$.uno(484)
// ---------------------------------------------------------------------------------

// public enum ScrollDirections :484
uEnumType* ScrollDirections_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.ScrollDirections", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Left", 1LL,
        "Right", 2LL,
        "Up", 4LL,
        "Down", 8LL,
        "Horizontal", 3LL,
        "Vertical", 12LL,
        "Both", 15LL,
        "All", 15LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Gestures/$.uno(496)
// ---------------------------------------------------------------------------------

// public sealed class Scroller :496
// {
// static Scroller() :496
static void Scroller__cctor__fn(uType* __type)
{
    Scroller::_horizontalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[25/*Fuse.Gestures.DegreeSpan[]*/], 2, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(45.0f, 135.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, -135.0f)));
    Scroller::_verticalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[25/*Fuse.Gestures.DegreeSpan[]*/], 3, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, 45.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-135.0f, -180.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(135.0f, 180.0f)));
}

::g::Fuse::Behavior_type* Scroller_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.ObjectSize = sizeof(Scroller);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Gestures.Scroller", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)Scroller__New1_fn;
    type->fp_cctor_ = Scroller__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Scroller__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Scroller__OnUnrooted_fn;
    ::STRINGS[3] = uString::Const("Scroller can only be used in a ScrollView");
    ::STRINGS[4] = uString::Const("Invalid tear-down of pointer events");
    ::TYPES[25] = ::g::Fuse::Gestures::DegreeSpan_typeof()->Array();
    ::TYPES[29] = ::g::Experimental::Physics::BoundedRegion2D_typeof();
    ::TYPES[30] = ::g::Experimental::Physics::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[31] = ::g::Experimental::Physics::Simulation_typeof();
    ::TYPES[12] = ::g::Uno::Bool_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[32] = ::g::Experimental::Physics::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[28] = ::g::Fuse::Controls::ScrollView_typeof();
    ::TYPES[33] = ::g::Uno::Int_typeof();
    ::TYPES[34] = ::g::Uno::Float_typeof();
    ::TYPES[9] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[35] = ::g::Fuse::RequestBringIntoViewArgs_typeof();
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    ::TYPES[36] = ::g::Fuse::RequestBringIntoViewHandler_typeof();
    ::TYPES[10] = ::g::Fuse::Time_typeof();
    ::TYPES[27] = ::g::Uno::Float2_typeof();
    ::TYPES[15] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[16] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[18] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[17] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    type->SetFields(3,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _delayStart), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _down), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _hasUpdated), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _isHardCapture), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _pendingBringIntoView), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _pointerListening), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _pointerPos), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _prevPos), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _prevTime), 0,
        ::g::Experimental::Physics::BoundedRegion2D_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _region), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _scrollable), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _softCaptureCurrent), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _softCaptureStart), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _startPos), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _userScroll), 0,
        ::g::Experimental::Physics::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Fuse::Gestures::Scroller, _velocity), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::Scroller::_horizontalGesture_, uFieldFlagsStatic,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::Scroller::_verticalGesture_, uFieldFlagsStatic);
    return type;
}

// public generated Scroller() :496
void Scroller__ctor_1_fn(Scroller* __this)
{
    __this->ctor_1();
}

// public void CheckLimits() :751
void Scroller__CheckLimits_fn(Scroller* __this)
{
    __this->CheckLimits();
}

// private void CheckNeedUpdated([bool off]) :589
void Scroller__CheckNeedUpdated_fn(Scroller* __this, bool* off)
{
    __this->CheckNeedUpdated(*off);
}

// private void EndInteraction() :661
void Scroller__EndInteraction_fn(Scroller* __this)
{
    __this->EndInteraction();
}

// private float2 FromWindow(float2 p) :649
void Scroller__FromWindow_fn(Scroller* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->FromWindow(*p);
}

// public void Goto(float2 position) :776
void Scroller__Goto_fn(Scroller* __this, ::g::Uno::Float2* position)
{
    __this->Goto(*position);
}

// private bool HardCapture(Fuse.Input.PointerEventArgs args) :681
void Scroller__HardCapture_fn(Scroller* __this, ::g::Fuse::Input::PointerEventArgs* args, bool* __retval)
{
    *__retval = __this->HardCapture(args);
}

// private void MoveUser(Fuse.Gestures.Scroller.MoveUserFlags flags) :831
void Scroller__MoveUser_fn(Scroller* __this, int* flags)
{
    __this->MoveUser(*flags);
}

// public generated Scroller New() :496
void Scroller__New1_fn(Scroller** __retval)
{
    *__retval = Scroller::New1();
}

// private void OnLostCapture() :654
void Scroller__OnLostCapture_fn(Scroller* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :690
void Scroller__OnPointerMoved_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :621
void Scroller__OnPointerPressed_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :726
void Scroller__OnPointerReleased_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnRequestBringIntoView(object sender, Fuse.RequestBringIntoViewArgs args) :760
void Scroller__OnRequestBringIntoView_fn(Scroller* __this, uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args)
{
    __this->OnRequestBringIntoView(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :516
void Scroller__OnRooted_fn(Scroller* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_scrollable = uAs< ::g::Fuse::Controls::ScrollView*>(__this->ParentNode(), ::TYPES[28/*Fuse.Controls.ScrollView*/]);

    if (__this->_scrollable == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"Scroller ca...*/]));

    uPtr(__this->_scrollable)->_scroller = __this;
    uPtr(__this->_scrollable)->add_RequestBringIntoView(uDelegate::New(::TYPES[36/*Fuse.RequestBringIntoViewHandler*/], (void*)Scroller__OnRequestBringIntoView_fn, __this));
    __this->UpdatePointerEvents(false);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :529
void Scroller__OnUnrooted_fn(Scroller* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->_scrollable)->remove_RequestBringIntoView(uDelegate::New(::TYPES[36/*Fuse.RequestBringIntoViewHandler*/], (void*)Scroller__OnRequestBringIntoView_fn, __this));
    uPtr(__this->_scrollable)->_scroller = NULL;

    if (__this->_hasUpdated)
    {
        __this->_hasUpdated = false;
        ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, __this), 0);
    }

    __this->UpdatePointerEvents(true);
    __this->_scrollable = NULL;
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// private void OnUpdated() :797
void Scroller__OnUpdated_fn(Scroller* __this)
{
    __this->OnUpdated();
}

// private void PerformBringIntoView() :767
void Scroller__PerformBringIntoView_fn(Scroller* __this)
{
    __this->PerformBringIntoView();
}

// private void SetScrollPosition(float2 position) :806
void Scroller__SetScrollPosition_fn(Scroller* __this, ::g::Uno::Float2* position)
{
    __this->SetScrollPosition(*position);
}

// private void UpdatePointerEvents([bool forceOff]) :562
void Scroller__UpdatePointerEvents_fn(Scroller* __this, bool* forceOff)
{
    __this->UpdatePointerEvents(*forceOff);
}

// private void UpdateScrollMax() :788
void Scroller__UpdateScrollMax_fn(Scroller* __this)
{
    __this->UpdateScrollMax();
}

// public bool get_UserScroll() :549
void Scroller__get_UserScroll_fn(Scroller* __this, bool* __retval)
{
    *__retval = __this->UserScroll();
}

// public void set_UserScroll(bool value) :550
void Scroller__set_UserScroll_fn(Scroller* __this, bool* value)
{
    __this->UserScroll(*value);
}

uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> Scroller::_horizontalGesture_;
uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> Scroller::_verticalGesture_;

// public generated Scroller() [instance] :496
void Scroller::ctor_1()
{
    _region = (uObject*)::g::Experimental::Physics::BasicBoundedRegion2D::CreatePoints();
    _velocity = ((::g::Experimental::Physics::PointerVelocity*)::g::Experimental::Physics::PointerVelocity::New1(::TYPES[30/*Experimental.Physics.PointerVelocity<float2>*/]));
    _delayStart = true;
    _userScroll = true;
    _down = -1;
    ctor_();
}

// public void CheckLimits() [instance] :751
void Scroller::CheckLimits()
{
    UpdateScrollMax();

    if (::g::Experimental::Physics::Simulation::IsStatic(uInterface(uPtr(_region), ::TYPES[31/*Experimental.Physics.Simulation*/])))
        ::g::Experimental::Physics::BoundedRegion2D::EndUser(uInterface(uPtr(_region), ::TYPES[29/*Experimental.Physics.BoundedRegion2D*/]), ::g::Uno::Float2__New1(0.0f));

    CheckNeedUpdated(false);
}

// private void CheckNeedUpdated([bool off]) [instance] :589
void Scroller::CheckNeedUpdated(bool off)
{
    bool needUpdated = !::g::Experimental::Physics::Simulation::IsStatic(uInterface(uPtr(_region), ::TYPES[31/*Experimental.Physics.Simulation*/]));

    if (needUpdated == _hasUpdated)
        return;

    if (needUpdated)
    {
        ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, this), 0);
        _hasUpdated = true;
    }
    else if (off)
    {
        ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, this), 0);
        _hasUpdated = false;
    }
}

// private void EndInteraction() [instance] :661
void Scroller::EndInteraction()
{
    _down = -1;
    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(this);
    CheckNeedUpdated(false);
    uPtr(_scrollable)->EndInteraction(this);
}

// private float2 FromWindow(float2 p) [instance] :649
::g::Uno::Float2 Scroller::FromWindow(::g::Uno::Float2 p)
{
    return uPtr(uPtr(_scrollable)->Parent())->WindowToLocal(p);
}

// public void Goto(float2 position) [instance] :776
void Scroller::Goto(::g::Uno::Float2 position)
{
    if (_scrollable == NULL)
        return;

    UpdateScrollMax();
    ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[32/*Experimental.Physics.MotionSimulation<float2>*/]), uCRef(uPtr(_scrollable)->ScrollPosition()));
    ::g::Experimental::Physics::BoundedRegion2D::MoveTo(uInterface(uPtr(_region), ::TYPES[29/*Experimental.Physics.BoundedRegion2D*/]), position);
    CheckNeedUpdated(false);
}

// private bool HardCapture(Fuse.Input.PointerEventArgs args) [instance] :681
bool Scroller::HardCapture(::g::Fuse::Input::PointerEventArgs* args)
{
    _isHardCapture = uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Scroller__OnLostCapture_fn, this), NULL);

    if (!_isHardCapture)
        OnLostCapture();

    uPtr(_scrollable)->BeginInteraction(this, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Scroller__OnLostCapture_fn, this));
    return _isHardCapture;
}

// private void MoveUser(Fuse.Gestures.Scroller.MoveUserFlags flags) [instance] :831
void Scroller::MoveUser(int flags)
{
    ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(FromWindow(_prevPos), FromWindow(_pointerPos));

    if ((flags & 2) == 2)
        diff = ::g::Uno::Float2__New1(0.0f);

    _prevPos = _pointerPos;
    double t = ::g::Uno::Diagnostics::Clock::GetSeconds();
    double elapsed = t - _prevTime;
    _prevTime = t;

    if ((flags & 1) == 1)
    {
        ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[32/*Experimental.Physics.MotionSimulation<float2>*/]), uCRef(uPtr(_scrollable)->ScrollPosition()));
        ::g::Experimental::Physics::BoundedRegion2D::StepUser(uInterface(uPtr(_region), ::TYPES[29/*Experimental.Physics.BoundedRegion2D*/]), diff);
    }

    ::g::Experimental::Physics::PointerVelocity__AddSample_fn(uPtr(_velocity), uCRef(FromWindow(_pointerPos)), uCRef((float)elapsed), uCRef(!_isHardCapture));
}

// private void OnLostCapture() [instance] :654
void Scroller::OnLostCapture()
{
    EndInteraction();

    if (::g::Experimental::Physics::BoundedRegion2D::IsUser(uInterface(uPtr(_region), ::TYPES[29/*Experimental.Physics.BoundedRegion2D*/])))
        ::g::Experimental::Physics::BoundedRegion2D::EndUser(uInterface(uPtr(_region), ::TYPES[29/*Experimental.Physics.BoundedRegion2D*/]), ::g::Uno::Float2__New1(0.0f));
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :690
void Scroller::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    if (_down != uPtr(args)->PointIndex())
        return;

    if (!::g::Fuse::Input::Pointer::IsPressed1(_down))
        OnLostCapture();

    if (!_isHardCapture)
    {
        _softCaptureCurrent = uPtr(args)->WindowPoint();
        ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(_softCaptureCurrent, _softCaptureStart);

        if (uPtr(_scrollable)->AllowedScrollDirections() == 15)
        {
            if (::g::Uno::Vector::Length(diff) > 10.0f)
                HardCapture(args);
        }

        if (uPtr(_scrollable)->AllowedScrollDirections() == 3)
        {
            if (uPtr(Scroller::_horizontalGesture())->IsWithinBounds(diff))
                HardCapture(args);
        }

        if (uPtr(_scrollable)->AllowedScrollDirections() == 12)
        {
            if (uPtr(Scroller::_verticalGesture())->IsWithinBounds(diff))
                HardCapture(args);
        }
    }

    _pointerPos = uPtr(args)->WindowPoint();
    MoveUser((!_delayStart || _isHardCapture) ? 1 : 0);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :621
void Scroller::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    ::g::Uno::Float2 ret2;

    if (_down == -1)
    {
        bool captured = false;
        _isHardCapture = false;

        if (::g::Uno::Vector::Length((::g::Experimental::Physics::MotionSimulation::get_Velocity_ex(uInterface(uPtr(_region), ::TYPES[32/*Experimental.Physics.MotionSimulation<float2>*/]), &ret2), ret2)) > 100.0f)
            captured = HardCapture(args);
        else
            captured = uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Scroller__OnLostCapture_fn, this), NULL);

        if (captured)
        {
            _softCaptureStart = (_softCaptureCurrent = uPtr(args)->WindowPoint());
            _down = args->PointIndex();
            _pointerPos = args->WindowPoint();
            _prevPos = (_startPos = _pointerPos);
            _prevTime = ::g::Uno::Diagnostics::Clock::GetSeconds();
            ::g::Experimental::Physics::PointerVelocity__Reset1_fn(uPtr(_velocity), uCRef(FromWindow(_pointerPos)), uCRef(::g::Uno::Float2__New1(0.0f)));
            ::g::Experimental::Physics::BoundedRegion2D::StartUser(uInterface(uPtr(_region), ::TYPES[29/*Experimental.Physics.BoundedRegion2D*/]));
            ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[32/*Experimental.Physics.MotionSimulation<float2>*/]), uCRef(uPtr(_scrollable)->ScrollPosition()));
            CheckNeedUpdated(false);
        }
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :726
void Scroller::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    ::g::Uno::Float2 ret3;

    if (_down == uPtr(args)->PointIndex())
    {
        if (_delayStart && !_isHardCapture)
        {
            OnLostCapture();
            return;
        }

        if (::g::Experimental::Physics::BoundedRegion2D::IsUser(uInterface(uPtr(_region), ::TYPES[29/*Experimental.Physics.BoundedRegion2D*/])))
        {
            _pointerPos = uPtr(args)->WindowPoint();
            MoveUser(3);
            ::g::Experimental::Physics::BoundedRegion2D::EndUser(uInterface(uPtr(_region), ::TYPES[29/*Experimental.Physics.BoundedRegion2D*/]), ::g::Uno::Float2__op_UnaryNegation((::g::Experimental::Physics::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret3), ret3)));
        }

        EndInteraction();
    }
}

// private void OnRequestBringIntoView(object sender, Fuse.RequestBringIntoViewArgs args) [instance] :760
void Scroller::OnRequestBringIntoView(uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args)
{
    _pendingBringIntoView = uPtr(args)->Node();
    ::g::Fuse::UpdateManager::PerformNextFrame(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Scroller__PerformBringIntoView_fn, this), 0);
}

// private void OnUpdated() [instance] :797
void Scroller::OnUpdated()
{
    ::g::Uno::Float2 ret4;
    UpdateScrollMax();
    ::g::Experimental::Physics::Simulation::Update(uInterface(uPtr(_region), ::TYPES[31/*Experimental.Physics.Simulation*/]), ::g::Fuse::Time::FrameInterval());
    SetScrollPosition((::g::Experimental::Physics::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[32/*Experimental.Physics.MotionSimulation<float2>*/]), &ret4), ret4));
    CheckNeedUpdated(true);
}

// private void PerformBringIntoView() [instance] :767
void Scroller::PerformBringIntoView()
{
    if (_pendingBringIntoView == NULL)
        return;

    Goto(uPtr(_scrollable)->GetNodeScrollPosition(_pendingBringIntoView));
    _pendingBringIntoView = NULL;
}

// private void SetScrollPosition(float2 position) [instance] :806
void Scroller::SetScrollPosition(::g::Uno::Float2 position)
{
    if (_scrollable == NULL)
        return;

    if (!((uPtr(_scrollable)->AllowedScrollDirections() & 3) == 3))
        position.X = 0.0f;

    if (!((uPtr(_scrollable)->AllowedScrollDirections() & 12) == 12))
        position.Y = 0.0f;

    if (uPtr(_scrollable)->SnapToPixels())
        position = uPtr(_scrollable)->InternSnap(position);

    if (::g::Uno::Vector::LengthSquared(::g::Uno::Float2__op_Subtraction2(position, uPtr(_scrollable)->ScrollPosition())) > 1e-05f)
        uPtr(_scrollable)->SetScrollPosition(position, this);
}

// private void UpdatePointerEvents([bool forceOff]) [instance] :562
void Scroller::UpdatePointerEvents(bool forceOff)
{
    bool shouldListen = (!forceOff && (_scrollable != NULL)) && _userScroll;

    if (shouldListen == _pointerListening)
        return;

    if (shouldListen)
    {
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _scrollable, uDelegate::New(::TYPES[16/*Fuse.Input.PointerPressedHandler*/], (void*)Scroller__OnPointerPressed_fn, this));
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _scrollable, uDelegate::New(::TYPES[18/*Fuse.Input.PointerMovedHandler*/], (void*)Scroller__OnPointerMoved_fn, this));
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _scrollable, uDelegate::New(::TYPES[17/*Fuse.Input.PointerReleasedHandler*/], (void*)Scroller__OnPointerReleased_fn, this));
    }
    else if (_scrollable != NULL)
    {
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _scrollable, uDelegate::New(::TYPES[16/*Fuse.Input.PointerPressedHandler*/], (void*)Scroller__OnPointerPressed_fn, this));
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _scrollable, uDelegate::New(::TYPES[18/*Fuse.Input.PointerMovedHandler*/], (void*)Scroller__OnPointerMoved_fn, this));
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _scrollable, uDelegate::New(::TYPES[17/*Fuse.Input.PointerReleasedHandler*/], (void*)Scroller__OnPointerReleased_fn, this));
    }
    else
        U_THROW(::g::Uno::Exception::New2(::STRINGS[4/*"Invalid tea...*/]));

    _pointerListening = shouldListen;
}

// private void UpdateScrollMax() [instance] :788
void Scroller::UpdateScrollMax()
{
    if (_scrollable == NULL)
        return;

    ::g::Experimental::Physics::BoundedRegion2D::MaxPosition(uInterface(uPtr(_region), ::TYPES[29/*Experimental.Physics.BoundedRegion2D*/]), uPtr(_scrollable)->MaxScroll());
    ::g::Experimental::Physics::BoundedRegion2D::MinPosition(uInterface(uPtr(_region), ::TYPES[29/*Experimental.Physics.BoundedRegion2D*/]), uPtr(_scrollable)->MinScroll());
}

// public bool get_UserScroll() [instance] :549
bool Scroller::UserScroll()
{
    return _userScroll;
}

// public void set_UserScroll(bool value) [instance] :550
void Scroller::UserScroll(bool value)
{
    if (_userScroll != value)
    {
        _userScroll = value;
        UpdatePointerEvents(false);
        OnLostCapture();
    }
}

// public generated Scroller New() [static] :496
Scroller* Scroller::New1()
{
    Scroller* obj1 = (Scroller*)uNew(Scroller_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/$.uno(879)
// ------------------------------------------------------------------------

// public sealed class SetSwipeActive :879
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* SetSwipeActive_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(SetSwipeActive);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.SetSwipeActive", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))SetSwipeActive__Perform_fn;
    type->SetFields(7,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SetSwipeActive, _Bypass), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::SetSwipeActive, _Target), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SetSwipeActive, _Value), 0);
    return type;
}

// public generated bool get_Bypass() :885
void SetSwipeActive__get_Bypass_fn(SetSwipeActive* __this, bool* __retval)
{
    *__retval = __this->Bypass();
}

// public generated void set_Bypass(bool value) :885
void SetSwipeActive__set_Bypass_fn(SetSwipeActive* __this, bool* value)
{
    __this->Bypass(*value);
}

// protected override sealed void Perform(Fuse.Node target) :887
void SetSwipeActive__Perform_fn(SetSwipeActive* __this, ::g::Fuse::Node* target)
{
    if (__this->Target() != NULL)
        uPtr(__this->Target())->SetActive(__this->Value(), NULL, __this->Bypass());
}

// public generated Fuse.Gestures.SwipeGesture get_Target() :881
void SetSwipeActive__get_Target_fn(SetSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) :881
void SetSwipeActive__set_Target_fn(SetSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Target(value);
}

// public generated bool get_Value() :883
void SetSwipeActive__get_Value_fn(SetSwipeActive* __this, bool* __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(bool value) :883
void SetSwipeActive__set_Value_fn(SetSwipeActive* __this, bool* value)
{
    __this->Value(*value);
}

// public generated bool get_Bypass() [instance] :885
bool SetSwipeActive::Bypass()
{
    return _Bypass;
}

// public generated void set_Bypass(bool value) [instance] :885
void SetSwipeActive::Bypass(bool value)
{
    _Bypass = value;
}

// public generated Fuse.Gestures.SwipeGesture get_Target() [instance] :881
::g::Fuse::Gestures::SwipeGesture* SetSwipeActive::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) [instance] :881
void SetSwipeActive::Target(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Target = value;
}

// public generated bool get_Value() [instance] :883
bool SetSwipeActive::Value()
{
    return _Value;
}

// public generated void set_Value(bool value) [instance] :883
void SetSwipeActive::Value(bool value)
{
    _Value = value;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/$.uno(639)
// ------------------------------------------------------------------------

// public enum SwipeDirection :639
uEnumType* SwipeDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.SwipeDirection", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Left", 0LL,
        "Up", 1LL,
        "Right", 2LL,
        "Down", 3LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/$.uno(656)
// ------------------------------------------------------------------------

// public sealed class SwipeGesture :656
// {
::g::Fuse::Behavior_type* SwipeGesture_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(SwipeGesture);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Gestures.SwipeGesture", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))SwipeGesture__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))SwipeGesture__OnUnrooted_fn;
    ::STRINGS[5] = uString::Const("SwipingAnimation must be attached to an Element");
    ::STRINGS[6] = uString::Const("/usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/$.uno");
    ::STRINGS[2] = uString::Const("OnRooted");
    ::TYPES[37] = ::g::Fuse::Gestures::Internal::SwipeRegion_typeof();
    ::TYPES[11] = ::g::Uno::Double_typeof();
    ::TYPES[38] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Bool_typeof(), uObject_typeof());
    ::TYPES[33] = ::g::Uno::Int_typeof();
    ::TYPES[23] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[3] = ::g::Uno::Delegate_typeof();
    ::TYPES[39] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[40] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Bool_typeof());
    type->SetFields(3,
        ::g::Fuse::Gestures::SwipeDirection_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _direction), 0,
        ::g::Fuse::Gestures::Edge_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _edge), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _hasDirection), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _hasEdge), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _hitSize), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _isActive), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _length), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _lengthNode), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _region), 0,
        ::g::Fuse::Gestures::Internal::Swiper_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _swiper), 0,
        ::g::Fuse::Gestures::SwipeType_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _type), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Gestures::SwipeGesture, IsActiveChanged1), 0);
    return type;
}

// private void ConstructRegion() :727
void SwipeGesture__ConstructRegion_fn(SwipeGesture* __this)
{
    __this->ConstructRegion();
}

// public Fuse.Gestures.SwipeDirection get_Direction() :684
void SwipeGesture__get_Direction_fn(SwipeGesture* __this, int* __retval)
{
    *__retval = __this->Direction();
}

// public void set_Direction(Fuse.Gestures.SwipeDirection value) :685
void SwipeGesture__set_Direction_fn(SwipeGesture* __this, int* value)
{
    __this->Direction(*value);
}

// public float get_HitSize() :709
void SwipeGesture__get_HitSize_fn(SwipeGesture* __this, float* __retval)
{
    *__retval = __this->HitSize();
}

// public void set_HitSize(float value) :710
void SwipeGesture__set_HitSize_fn(SwipeGesture* __this, float* value)
{
    __this->HitSize(*value);
}

// public bool get_IsActive() :826
void SwipeGesture__get_IsActive_fn(SwipeGesture* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value) :827
void SwipeGesture__set_IsActive_fn(SwipeGesture* __this, bool* value)
{
    __this->IsActive(*value);
}

// internal generated void add_IsActiveChanged(Uno.UX.ValueChangedHandler<bool> value) :819
void SwipeGesture__add_IsActiveChanged_fn(SwipeGesture* __this, uDelegate* value)
{
    __this->add_IsActiveChanged(value);
}

// internal generated void remove_IsActiveChanged(Uno.UX.ValueChangedHandler<bool> value) :819
void SwipeGesture__remove_IsActiveChanged_fn(SwipeGesture* __this, uDelegate* value)
{
    __this->remove_IsActiveChanged(value);
}

// public float get_Length() :695
void SwipeGesture__get_Length_fn(SwipeGesture* __this, float* __retval)
{
    *__retval = __this->Length();
}

// public void set_Length(float value) :696
void SwipeGesture__set_Length_fn(SwipeGesture* __this, float* value)
{
    __this->Length(*value);
}

// public Fuse.Elements.Element get_LengthNode() :702
void SwipeGesture__get_LengthNode_fn(SwipeGesture* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->LengthNode();
}

// public void set_LengthNode(Fuse.Elements.Element value) :703
void SwipeGesture__set_LengthNode_fn(SwipeGesture* __this, ::g::Fuse::Elements::Element* value)
{
    __this->LengthNode(value);
}

// protected override sealed void OnRooted(Fuse.Node n) :713
void SwipeGesture__OnRooted_fn(SwipeGesture* __this, ::g::Fuse::Node* n)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, n);
    ::g::Fuse::Elements::Element* element = uAs< ::g::Fuse::Elements::Element*>(__this->ParentNode(), ::TYPES[23/*Fuse.Elements.Element*/]);

    if (element == NULL)
    {
        ::g::Fuse::Diagnostics::Error(::STRINGS[5/*"SwipingAnim...*/], __this->ParentNode(), ::STRINGS[6/*"/usr/local/...*/], 719, ::STRINGS[2/*"OnRooted"*/]);
        return;
    }

    __this->_swiper = ::g::Fuse::Gestures::Internal::Swiper::AttachSwiper(element);
    uPtr(__this->_swiper)->AddRegion(__this->Region());
}

// protected override sealed void OnUnrooted(Fuse.Node n) :802
void SwipeGesture__OnUnrooted_fn(SwipeGesture* __this, ::g::Fuse::Node* n)
{
    if (__this->_swiper != NULL)
    {
        if (__this->_region != NULL)
        {
            uPtr(__this->_region)->remove_ActivationChanged(uDelegate::New(::TYPES[38/*Uno.Action<bool, object>*/], (void*)SwipeGesture__SetIsActive_fn, __this));
            __this->_region = NULL;
            uPtr(__this->_swiper)->RemoveRegion(__this->_region);
        }

        uPtr(__this->_swiper)->Detach();
        __this->_swiper = NULL;
    }

    ::g::Fuse::Behavior__OnUnrooted_fn(__this, n);
}

// internal Fuse.Gestures.Internal.SwipeRegion get_Region() :794
void SwipeGesture__get_Region_fn(SwipeGesture* __this, ::g::Fuse::Gestures::Internal::SwipeRegion** __retval)
{
    *__retval = __this->Region();
}

// internal void SetActive(bool value, object origin, [bool bypass]) :835
void SwipeGesture__SetActive_fn(SwipeGesture* __this, bool* value, uObject* origin, bool* bypass)
{
    __this->SetActive(*value, origin, *bypass);
}

// public void SetIsActive(bool value, object origin) :830
void SwipeGesture__SetIsActive_fn(SwipeGesture* __this, bool* value, uObject* origin)
{
    __this->SetIsActive(*value, origin);
}

// public Fuse.Gestures.SwipeType get_Type() :664
void SwipeGesture__get_Type_fn(SwipeGesture* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(Fuse.Gestures.SwipeType value) :665
void SwipeGesture__set_Type_fn(SwipeGesture* __this, int* value)
{
    __this->Type(*value);
}

// private void ConstructRegion() [instance] :727
void SwipeGesture::ConstructRegion()
{
    _region = ::g::Fuse::Gestures::Internal::SwipeRegion::New1();

    if (_hasEdge)
    {
        uPtr(_region)->Area = 1;

        switch (_edge)
        {
            case 0:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(1.0f, 0.0f);
                uPtr(_region)->Priority = 1;
                break;
            }
            case 2:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 0.0f, 1.0f, 0.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, 1.0f);
                uPtr(_region)->Priority = 2;
                break;
            }
            case 1:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(1.0f, 0.0f, 1.0f, 1.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(-1.0f, 0.0f);
                uPtr(_region)->Priority = 3;
                break;
            }
            case 3:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 1.0f, 1.0f, 1.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, -1.0f);
                uPtr(_region)->Priority = 4;
                break;
            }
        }
    }
    else
    {
        uPtr(_region)->Area = 0;

        switch (Direction())
        {
            case 0:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(-1.0f, 0.0f);
                uPtr(_region)->Priority = 101;
                break;
            }
            case 1:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, -1.0f);
                uPtr(_region)->Priority = 102;
                break;
            }
            case 2:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(1.0f, 0.0f);
                uPtr(_region)->Priority = 103;
                break;
            }
            case 3:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, 1.0f);
                uPtr(_region)->Priority = 104;
                break;
            }
        }
    }

    uPtr(_region)->SetProgress((double)(IsActive() ? 1 : 0), false);
    uPtr(_region)->Length = (double)Length();
    uPtr(_region)->LengthElement = LengthNode();
    uPtr(_region)->AreaVectorDistance = HitSize();
    uPtr(_region)->add_ActivationChanged(uDelegate::New(::TYPES[38/*Uno.Action<bool, object>*/], (void*)SwipeGesture__SetIsActive_fn, this));
    uPtr(_region)->IsInterruptible = (Type() != 0);
    uPtr(_region)->RevertActive = (Type() == 0);
}

// public Fuse.Gestures.SwipeDirection get_Direction() [instance] :684
int SwipeGesture::Direction()
{
    return _direction;
}

// public void set_Direction(Fuse.Gestures.SwipeDirection value) [instance] :685
void SwipeGesture::Direction(int value)
{
    _direction = value;
    _hasDirection = true;
}

// public float get_HitSize() [instance] :709
float SwipeGesture::HitSize()
{
    return _hitSize;
}

// public void set_HitSize(float value) [instance] :710
void SwipeGesture::HitSize(float value)
{
    _hitSize = value;
}

// public bool get_IsActive() [instance] :826
bool SwipeGesture::IsActive()
{
    return _isActive;
}

// public void set_IsActive(bool value) [instance] :827
void SwipeGesture::IsActive(bool value)
{
    SetIsActive(value, NULL);
}

// internal generated void add_IsActiveChanged(Uno.UX.ValueChangedHandler<bool> value) [instance] :819
void SwipeGesture::add_IsActiveChanged(uDelegate* value)
{
    IsActiveChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(IsActiveChanged1, value), ::TYPES[39/*Uno.UX.ValueChangedHandler<bool>*/]);
}

// internal generated void remove_IsActiveChanged(Uno.UX.ValueChangedHandler<bool> value) [instance] :819
void SwipeGesture::remove_IsActiveChanged(uDelegate* value)
{
    IsActiveChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(IsActiveChanged1, value), ::TYPES[39/*Uno.UX.ValueChangedHandler<bool>*/]);
}

// public float get_Length() [instance] :695
float SwipeGesture::Length()
{
    return _length;
}

// public void set_Length(float value) [instance] :696
void SwipeGesture::Length(float value)
{
    _length = value;
}

// public Fuse.Elements.Element get_LengthNode() [instance] :702
::g::Fuse::Elements::Element* SwipeGesture::LengthNode()
{
    return _lengthNode;
}

// public void set_LengthNode(Fuse.Elements.Element value) [instance] :703
void SwipeGesture::LengthNode(::g::Fuse::Elements::Element* value)
{
    _lengthNode = value;
}

// internal Fuse.Gestures.Internal.SwipeRegion get_Region() [instance] :794
::g::Fuse::Gestures::Internal::SwipeRegion* SwipeGesture::Region()
{
    if (_region == NULL)
        ConstructRegion();

    return _region;
}

// internal void SetActive(bool value, object origin, [bool bypass]) [instance] :835
void SwipeGesture::SetActive(bool value, uObject* origin, bool bypass)
{
    ::g::Uno::UX::ValueChangedArgs* ret2;

    if ((value == _isActive) || (origin == this))
        return;

    _isActive = value;

    if (::g::Uno::Delegate::op_Inequality(IsActiveChanged1, NULL))
        uPtr(IsActiveChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[40/*Uno.UX.ValueChangedArgs<bool>*/], uCRef(value), (origin != NULL) ? origin : this, &ret2), ret2));

    if (_region != NULL)
        uPtr(_swiper)->SetActivation(_region, value, (origin != NULL) ? origin : this, bypass);
}

// public void SetIsActive(bool value, object origin) [instance] :830
void SwipeGesture::SetIsActive(bool value, uObject* origin)
{
    SetActive(value, origin, false);
}

// public Fuse.Gestures.SwipeType get_Type() [instance] :664
int SwipeGesture::Type()
{
    return _type;
}

// public void set_Type(Fuse.Gestures.SwipeType value) [instance] :665
void SwipeGesture::Type(int value)
{
    _type = value;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/Internal/$.uno(615)
// ---------------------------------------------------------------------------------

// internal sealed class SwipeGestureHelper :615
// {
uType* SwipeGestureHelper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SwipeGestureHelper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.SwipeGestureHelper", options);
    ::TYPES[27] = ::g::Uno::Float2_typeof();
    ::TYPES[25] = ::g::Fuse::Gestures::DegreeSpan_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::SwipeGestureHelper, _lengthThreshold), 0,
        ::g::Fuse::Gestures::DegreeSpan_typeof()->Array(), offsetof(::g::Fuse::Gestures::SwipeGestureHelper, _spans), 0);
    return type;
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) :621
void SwipeGestureHelper__ctor__fn(SwipeGestureHelper* __this, float* lengthThreshold, uArray* spans)
{
    __this->ctor_(*lengthThreshold, spans);
}

// public bool IsWithinBounds(float2 vector) :627
void SwipeGestureHelper__IsWithinBounds_fn(SwipeGestureHelper* __this, ::g::Uno::Float2* vector, bool* __retval)
{
    *__retval = __this->IsWithinBounds(*vector);
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) :621
void SwipeGestureHelper__New1_fn(float* lengthThreshold, uArray* spans, SwipeGestureHelper** __retval)
{
    *__retval = SwipeGestureHelper::New1(*lengthThreshold, spans);
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) [instance] :621
void SwipeGestureHelper::ctor_(float lengthThreshold, uArray* spans)
{
    _spans = spans;
    _lengthThreshold = lengthThreshold;
}

// public bool IsWithinBounds(float2 vector) [instance] :627
bool SwipeGestureHelper::IsWithinBounds(::g::Uno::Float2 vector)
{
    float length = ::g::Uno::Vector::Length(vector);

    if (length < _lengthThreshold)
        return false;

    float angle = ::g::Uno::Math::RadiansToDegrees1(::g::Uno::Math::Atan22(vector.X, vector.Y));

    for (int i = 0; i < uPtr(_spans)->Length(); i++)
        if (uPtr(uPtr(_spans)->Strong< ::g::Fuse::Gestures::DegreeSpan*>(i))->IsWithinBounds(angle))
            return true;

    return false;
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) [static] :621
SwipeGestureHelper* SwipeGestureHelper::New1(float lengthThreshold, uArray* spans)
{
    SwipeGestureHelper* obj1 = (SwipeGestureHelper*)uNew(SwipeGestureHelper_typeof());
    obj1->ctor_(lengthThreshold, spans);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/$.uno(647)
// ------------------------------------------------------------------------

// public enum SwipeType :647
uEnumType* SwipeType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.SwipeType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Simple", 0LL,
        "Active", 1LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/$.uno(1000)
// -------------------------------------------------------------------------

// public sealed class Tapped :1000
// {
::g::Fuse::Triggers::Trigger_type* Tapped_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(Tapped);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Tapped", options);
    type->SetBase(::g::Fuse::Gestures::ClickerTrigger_typeof());
    type->fp_ctor_ = (void*)Tapped__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Tapped__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Tapped__OnUnrooted_fn;
    ::TYPES[6] = ::g::Fuse::Gestures::Clicker_typeof();
    ::TYPES[7] = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    ::TYPES[8] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[3] = ::g::Uno::Delegate_typeof();
    ::TYPES[41] = ::g::Fuse::Gestures::TappedHandler_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    type->SetFields(16,
        ::g::Fuse::Gestures::TappedHandler_typeof(), offsetof(::g::Fuse::Gestures::Tapped, Handler1), 0);
    return type;
}

// public Tapped() :1004
void Tapped__ctor_3_fn(Tapped* __this)
{
    __this->ctor_3();
}

// public generated void add_Handler(Fuse.Gestures.TappedHandler value) :1002
void Tapped__add_Handler_fn(Tapped* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.TappedHandler value) :1002
void Tapped__remove_Handler_fn(Tapped* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public Tapped New() :1004
void Tapped__New1_fn(Tapped** __retval)
{
    *__retval = Tapped::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1011
void Tapped__OnRooted_fn(Tapped* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this, parentNode);
    uPtr(__this->Clicker)->add_TappedEvent(uDelegate::New(::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/], (void*)Tapped__OnTapped_fn, __this));
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) :1023
void Tapped__OnTapped_fn(Tapped* __this, ::g::Fuse::Input::PointerEventArgs* args, int* tapCount)
{
    __this->OnTapped(args, *tapCount);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1017
void Tapped__OnUnrooted_fn(Tapped* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->Clicker)->remove_TappedEvent(uDelegate::New(::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/], (void*)Tapped__OnTapped_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this, parentNode);
}

// public Tapped() [instance] :1004
void Tapped::ctor_3()
{
    ctor_2();
}

// public generated void add_Handler(Fuse.Gestures.TappedHandler value) [instance] :1002
void Tapped::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[41/*Fuse.Gestures.TappedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.TappedHandler value) [instance] :1002
void Tapped::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[41/*Fuse.Gestures.TappedHandler*/]);
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) [instance] :1023
void Tapped::OnTapped(::g::Fuse::Input::PointerEventArgs* args, int tapCount)
{
    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::TappedArgs*)::g::Fuse::Gestures::TappedArgs::New3(args, ParentNode()));
}

// public Tapped New() [static] :1004
Tapped* Tapped::New1()
{
    Tapped* obj1 = (Tapped*)uNew(Tapped_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/$.uno(990)
// ------------------------------------------------------------------------

// public sealed class TappedArgs :990
// {
::g::Fuse::NodeEventArgs_type* TappedArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TappedArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Gestures.TappedArgs", options);
    type->SetBase(::g::Fuse::Input::CustomPointerEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__FuseScriptingIScriptEventSerialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(3);
    return type;
}

// public TappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Node node) :992
void TappedArgs__ctor_4_fn(TappedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    __this->ctor_4(args, node);
}

// public TappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Node node) :992
void TappedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node, TappedArgs** __retval)
{
    *__retval = TappedArgs::New3(args, node);
}

// public TappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Node node) [instance] :992
void TappedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    ctor_3(args, node);
}

// public TappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Node node) [static] :992
TappedArgs* TappedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    TappedArgs* obj1 = (TappedArgs*)uNew(TappedArgs_typeof());
    obj1->ctor_4(args, node);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/$.uno(998)
// ------------------------------------------------------------------------

// public delegate void TappedHandler(object sender, Fuse.Gestures.TappedArgs args) :998
uDelegateType* TappedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.TappedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::TappedArgs_typeof());
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/$.uno(894)
// ------------------------------------------------------------------------

// public sealed class ToggleSwipeActive :894
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSwipeActive_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(ToggleSwipeActive);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.ToggleSwipeActive", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ToggleSwipeActive__Perform_fn;
    ::TYPES[12] = ::g::Uno::Bool_typeof();
    ::TYPES[42] = ::g::Fuse::Gestures::SwipeGesture_typeof();
    type->SetFields(7,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::ToggleSwipeActive, _Target), 0);
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :898
void ToggleSwipeActive__Perform_fn(ToggleSwipeActive* __this, ::g::Fuse::Node* target)
{
    if (__this->Target() != NULL)
        uPtr(__this->Target())->SetActive(!uPtr(__this->Target())->IsActive(), NULL, false);
}

// public generated Fuse.Gestures.SwipeGesture get_Target() :896
void ToggleSwipeActive__get_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) :896
void ToggleSwipeActive__set_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Target(value);
}

// public generated Fuse.Gestures.SwipeGesture get_Target() [instance] :896
::g::Fuse::Gestures::SwipeGesture* ToggleSwipeActive::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) [instance] :896
void ToggleSwipeActive::Target(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Target = value;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Gestures/0.24.6/$.uno(437)
// ------------------------------------------------------------------------

// public sealed class WhilePressed :437
// {
::g::Fuse::Triggers::Trigger_type* WhilePressed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.ObjectSize = sizeof(WhilePressed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.WhilePressed", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhilePressed__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhilePressed__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhilePressed__OnUnrooted_fn;
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    ::TYPES[33] = ::g::Uno::Int_typeof();
    ::TYPES[9] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[6] = ::g::Fuse::Gestures::Clicker_typeof();
    ::TYPES[8] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[15] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[43] = ::g::Fuse::Input::PointerEnteredHandler_typeof();
    ::TYPES[44] = ::g::Fuse::Input::PointerLeftHandler_typeof();
    ::TYPES[16] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[17] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[14] = ::g::Uno::EventHandler_typeof();
    type->SetFields(17,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, _inside), 0,
        ::g::Uno::Platform::PointerType_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, _pointerType), 0,
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, Clicker), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, _Capture), 0);
    return type;
}

// public generated WhilePressed() :437
void WhilePressed__ctor_3_fn(WhilePressed* __this)
{
    __this->ctor_3();
}

// public generated bool get_Capture() :439
void WhilePressed__get_Capture_fn(WhilePressed* __this, bool* __retval)
{
    *__retval = __this->Capture();
}

// public generated void set_Capture(bool value) :439
void WhilePressed__set_Capture_fn(WhilePressed* __this, bool* value)
{
    __this->Capture(*value);
}

// private void CheckStatus(object s, object a) :513
void WhilePressed__CheckStatus_fn(WhilePressed* __this, uObject* s, uObject* a)
{
    __this->CheckStatus(s, a);
}

// public generated WhilePressed New() :437
void WhilePressed__New1_fn(WhilePressed** __retval)
{
    *__retval = WhilePressed::New1();
}

// private void OnClickerPressing(Fuse.Input.PointerEventArgs args, int count) :492
void WhilePressed__OnClickerPressing_fn(WhilePressed* __this, ::g::Fuse::Input::PointerEventArgs* args, int* count)
{
    __this->OnClickerPressing(args, *count);
}

// private void OnPointerEntered(object sender, object args) :501
void WhilePressed__OnPointerEntered_fn(WhilePressed* __this, uObject* sender, uObject* args)
{
    __this->OnPointerEntered(sender, args);
}

// private void OnPointerLeft(object sender, object args) :507
void WhilePressed__OnPointerLeft_fn(WhilePressed* __this, uObject* sender, uObject* args)
{
    __this->OnPointerLeft(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :450
void WhilePressed__OnRooted_fn(WhilePressed* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);

    if (__this->Capture())
    {
        __this->Clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->ParentNode());
        uPtr(__this->Clicker)->add_PressingEvent(uDelegate::New(::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/], (void*)WhilePressed__OnClickerPressing_fn, __this));
    }
    else
    {
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->ParentNode(), uDelegate::New(::TYPES[43/*Fuse.Input.PointerEnteredHandler*/], (void*)WhilePressed__OnPointerEntered_fn, __this));
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->ParentNode(), uDelegate::New(::TYPES[44/*Fuse.Input.PointerLeftHandler*/], (void*)WhilePressed__OnPointerLeft_fn, __this));
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->ParentNode(), uDelegate::New(::TYPES[16/*Fuse.Input.PointerPressedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        ::g::Fuse::NodeEvent__AddGlobalHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), uDelegate::New(::TYPES[17/*Fuse.Input.PointerReleasedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        uPtr(__this->ParentNode())->add_IsEnabledChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        __this->_inside = false;
    }

    __this->BypassSetActive(false);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :472
void WhilePressed__OnUnrooted_fn(WhilePressed* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->Capture())
    {
        uPtr(__this->Clicker)->remove_PressingEvent(uDelegate::New(::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/], (void*)WhilePressed__OnClickerPressing_fn, __this));
        uPtr(__this->Clicker)->Detach();
        __this->Clicker = NULL;
    }
    else
    {
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->ParentNode(), uDelegate::New(::TYPES[43/*Fuse.Input.PointerEnteredHandler*/], (void*)WhilePressed__OnPointerEntered_fn, __this));
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->ParentNode(), uDelegate::New(::TYPES[44/*Fuse.Input.PointerLeftHandler*/], (void*)WhilePressed__OnPointerLeft_fn, __this));
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->ParentNode(), uDelegate::New(::TYPES[16/*Fuse.Input.PointerPressedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        ::g::Fuse::NodeEvent__RemoveGlobalHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), uDelegate::New(::TYPES[17/*Fuse.Input.PointerReleasedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        uPtr(__this->ParentNode())->remove_IsEnabledChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public Uno.Platform.PointerType get_PointerType() :446
void WhilePressed__get_PointerType_fn(WhilePressed* __this, int* __retval)
{
    *__retval = __this->PointerType();
}

// public void set_PointerType(Uno.Platform.PointerType value) :447
void WhilePressed__set_PointerType_fn(WhilePressed* __this, int* value)
{
    __this->PointerType(*value);
}

// public generated WhilePressed() [instance] :437
void WhilePressed::ctor_3()
{
    ctor_2();
}

// public generated bool get_Capture() [instance] :439
bool WhilePressed::Capture()
{
    return _Capture;
}

// public generated void set_Capture(bool value) [instance] :439
void WhilePressed::Capture(bool value)
{
    _Capture = value;
}

// private void CheckStatus(object s, object a) [instance] :513
void WhilePressed::CheckStatus(uObject* s, uObject* a)
{
    SetActive((_inside && uPtr(ParentNode())->IsEnabled()) && ::g::Fuse::Input::Pointer::IsPressed());
}

// private void OnClickerPressing(Fuse.Input.PointerEventArgs args, int count) [instance] :492
void WhilePressed::OnClickerPressing(::g::Fuse::Input::PointerEventArgs* args, int count)
{
    bool q = (PointerType() == 0) || (PointerType() == uPtr(args)->PointerType());
    bool on = count > 0;

    if (q)
        SetActive(on);
}

// private void OnPointerEntered(object sender, object args) [instance] :501
void WhilePressed::OnPointerEntered(uObject* sender, uObject* args)
{
    _inside = true;
    CheckStatus(sender, args);
}

// private void OnPointerLeft(object sender, object args) [instance] :507
void WhilePressed::OnPointerLeft(uObject* sender, uObject* args)
{
    _inside = false;
    CheckStatus(sender, args);
}

// public Uno.Platform.PointerType get_PointerType() [instance] :446
int WhilePressed::PointerType()
{
    return _pointerType;
}

// public void set_PointerType(Uno.Platform.PointerType value) [instance] :447
void WhilePressed::PointerType(int value)
{
    _pointerType = value;
}

// public generated WhilePressed New() [static] :437
WhilePressed* WhilePressed::New1()
{
    WhilePressed* obj1 = (WhilePressed*)uNew(WhilePressed_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

}}} // ::g::Fuse::Gestures
