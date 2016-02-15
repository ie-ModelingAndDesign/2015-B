// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.EasingFunction.h>
#include <Fuse.Animations.EasingFunctions.h>
#include <Fuse.Behavior.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Edge.h>
#include <Fuse.Gestures.Internal.EdgeSwiper.h>
#include <Fuse.LayoutRole.h>
#include <Fuse.Navigation.BackForwardNavigationTriggerAction.h>
#include <Fuse.Navigation.DefaultNavigationAnimator.h>
#include <Fuse.Navigation.DefaultNavigationAnimatorPlayer.h>
#include <Fuse.Navigation.DirectNavigation.h>
#include <Fuse.Navigation.EdgeNavigation.h>
#include <Fuse.Navigation.GoBack.h>
#include <Fuse.Navigation.GoForward.h>
#include <Fuse.Navigation.HistoryChangedHandler.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.INavigationAnimator.h>
#include <Fuse.Navigation.INavigationAnimatorPlayer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Navigation.IPageResourceBinding.h>
#include <Fuse.Navigation.NavigatedArgs.h>
#include <Fuse.Navigation.NavigatedHandler.h>
#include <Fuse.Navigation.NavigateTo.h>
#include <Fuse.Navigation.NavigateToggle.h>
#include <Fuse.Navigation.Navigation.h>
#include <Fuse.Navigation.NavigationArgs.h>
#include <Fuse.Navigation.NavigationEdge.h>
#include <Fuse.Navigation.NavigationGotoMode.h>
#include <Fuse.Navigation.NavigationHandler.h>
#include <Fuse.Navigation.NavigationMode.h>
#include <Fuse.Navigation.NavigationPageCountHandler.h>
#include <Fuse.Navigation.NavigationPageProgressHandler.h>
#include <Fuse.Navigation.NavigationPageProperty.h>
#include <Fuse.Navigation.NavigationState.h>
#include <Fuse.Navigation.NavigationStateArgs.h>
#include <Fuse.Navigation.NavigationStateHandler.h>
#include <Fuse.Navigation.NavigationTriggerAction.h>
#include <Fuse.Navigation.NavigationTween.h>
#include <Fuse.Navigation.PlayerFactory.h>
#include <Fuse.Navigation.ProgressSpan.h>
#include <Fuse.Navigation.ProgressTimer.h>
#include <Fuse.Navigation.StructuredNavigation.h>
#include <Fuse.Navigation.StructuredNavigation.NavigationStructure.h>
#include <Fuse.Node.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Time.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[5];
static uType* TYPES[54];

namespace g{
namespace Fuse{
namespace Navigation{

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(2113)
// ---------------------------------------------------------------------------

// public abstract class BackForwardNavigationTriggerAction :2113
// {
BackForwardNavigationTriggerAction_type* BackForwardNavigationTriggerAction_typeof()
{
    static uSStrong<BackForwardNavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(BackForwardNavigationTriggerAction);
    options.TypeSize = sizeof(BackForwardNavigationTriggerAction_type);
    type = (BackForwardNavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.BackForwardNavigationTriggerAction", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))BackForwardNavigationTriggerAction__Perform_fn;
    ::TYPES[0] = ::g::Fuse::Node_typeof()->MakeMethod(1, ::g::Fuse::Navigation::IBaseNavigation_typeof());
    ::TYPES[1] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetFields(7);
    return type;
}

// protected override sealed void Perform(Fuse.Node n) :2115
void BackForwardNavigationTriggerAction__Perform_fn(BackForwardNavigationTriggerAction* __this, ::g::Fuse::Node* n)
{
    uObject* nav = (uObject*)uPtr(n)->FindByType(::TYPES[0/*Fuse.Node.FindByType<Fuse.Navigation.IBaseNavigation>*/]);

    if (nav == NULL)
        nav = ::g::Fuse::Navigation::Navigation::TryFind(n);

    if (nav != NULL)
        __this->Perform1(nav, n);
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/Internal/$.uno(25)
// ----------------------------------------------------------------------------------

// internal sealed class DefaultNavigationAnimator :25
// {
DefaultNavigationAnimator_type* DefaultNavigationAnimator_typeof()
{
    static uSStrong<DefaultNavigationAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DefaultNavigationAnimator);
    options.TypeSize = sizeof(DefaultNavigationAnimator_type);
    type = (DefaultNavigationAnimator_type*)uClassType::New("Fuse.Navigation.DefaultNavigationAnimator", options);
    type->interface0.fp_Update = (void(*)(uObject*, double*, double*))DefaultNavigationAnimator__Update_fn;
    ::TYPES[2] = ::g::Uno::Double_typeof();
    type->SetInterfaces(
        ::g::Fuse::Navigation::INavigationAnimator_typeof(), offsetof(DefaultNavigationAnimator_type, interface0));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Navigation::DefaultNavigationAnimator, _index), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Navigation::DefaultNavigationAnimator, _node), 0);
    return type;
}

// public DefaultNavigationAnimator(int index, Fuse.Node node) :33
void DefaultNavigationAnimator__ctor__fn(DefaultNavigationAnimator* __this, int* index, ::g::Fuse::Node* node)
{
    __this->ctor_(*index, node);
}

// public DefaultNavigationAnimator New(int index, Fuse.Node node) :33
void DefaultNavigationAnimator__New1_fn(int* index, ::g::Fuse::Node* node, DefaultNavigationAnimator** __retval)
{
    *__retval = DefaultNavigationAnimator::New1(*index, node);
}

// public Fuse.Node get_Node() :28
void DefaultNavigationAnimator__get_Node_fn(DefaultNavigationAnimator* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// public void Update(double progress, double prevProgress) :39
void DefaultNavigationAnimator__Update_fn(DefaultNavigationAnimator* __this, double* progress, double* prevProgress)
{
    __this->Update(*progress, *prevProgress);
}

// public DefaultNavigationAnimator(int index, Fuse.Node node) [instance] :33
void DefaultNavigationAnimator::ctor_(int index, ::g::Fuse::Node* node)
{
    _index = index;
    _node = node;
}

// public Fuse.Node get_Node() [instance] :28
::g::Fuse::Node* DefaultNavigationAnimator::Node()
{
    return _node;
}

// public void Update(double progress, double prevProgress) [instance] :39
void DefaultNavigationAnimator::Update(double progress, double prevProgress)
{
    ::g::Fuse::Navigation::Navigation::NotifyNavigation(Node(), ::g::Fuse::Navigation::NavigationArgs::New2(progress - (double)_index, prevProgress - (double)_index, 2));
}

// public DefaultNavigationAnimator New(int index, Fuse.Node node) [static] :33
DefaultNavigationAnimator* DefaultNavigationAnimator::New1(int index, ::g::Fuse::Node* node)
{
    DefaultNavigationAnimator* obj1 = (DefaultNavigationAnimator*)uNew(DefaultNavigationAnimator_typeof());
    obj1->ctor_(index, node);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/Internal/$.uno(90)
// ----------------------------------------------------------------------------------

// internal sealed class DefaultNavigationAnimatorPlayer :90
// {
DefaultNavigationAnimatorPlayer_type* DefaultNavigationAnimatorPlayer_typeof()
{
    static uSStrong<DefaultNavigationAnimatorPlayer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DefaultNavigationAnimatorPlayer);
    options.TypeSize = sizeof(DefaultNavigationAnimatorPlayer_type);
    type = (DefaultNavigationAnimatorPlayer_type*)uClassType::New("Fuse.Navigation.DefaultNavigationAnimatorPlayer", options);
    type->interface0.fp_Update = (void(*)(uObject*))DefaultNavigationAnimatorPlayer__Update_fn;
    type->interface0.fp_EnsureAtEnd = (void(*)(uObject*))DefaultNavigationAnimatorPlayer__EnsureAtEnd_fn;
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[4] = ::g::Fuse::Navigation::ProgressTimer_typeof();
    ::TYPES[5] = ::g::Fuse::Navigation::ProgressSpan_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Navigation::INavigationAnimator_typeof());
    ::TYPES[7] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Navigation::INavigationAnimator_typeof());
    ::TYPES[8] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[9] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Navigation::INavigationAnimatorPlayer_typeof(), offsetof(DefaultNavigationAnimatorPlayer_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Navigation::INavigationAnimator_typeof()), offsetof(::g::Fuse::Navigation::DefaultNavigationAnimatorPlayer, _animators), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Navigation::DefaultNavigationAnimatorPlayer, _doneCallback), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::Navigation::DefaultNavigationAnimatorPlayer, _progressSetCallback), 0,
        ::g::Fuse::Navigation::ProgressTimer_typeof(), offsetof(::g::Fuse::Navigation::DefaultNavigationAnimatorPlayer, _progressTimer), 0);
    return type;
}

// public DefaultNavigationAnimatorPlayer(Fuse.Navigation.ProgressTimer progressTimer, Uno.Collections.IList<Fuse.Navigation.INavigationAnimator> animators, Uno.Action<double> progressSetCallback, Uno.Action doneCallback) :97
void DefaultNavigationAnimatorPlayer__ctor__fn(DefaultNavigationAnimatorPlayer* __this, ::g::Fuse::Navigation::ProgressTimer* progressTimer, uObject* animators, uDelegate* progressSetCallback, uDelegate* doneCallback)
{
    __this->ctor_(progressTimer, animators, progressSetCallback, doneCallback);
}

// public void EnsureAtEnd() :127
void DefaultNavigationAnimatorPlayer__EnsureAtEnd_fn(DefaultNavigationAnimatorPlayer* __this)
{
    __this->EnsureAtEnd();
}

// public DefaultNavigationAnimatorPlayer New(Fuse.Navigation.ProgressTimer progressTimer, Uno.Collections.IList<Fuse.Navigation.INavigationAnimator> animators, Uno.Action<double> progressSetCallback, Uno.Action doneCallback) :97
void DefaultNavigationAnimatorPlayer__New1_fn(::g::Fuse::Navigation::ProgressTimer* progressTimer, uObject* animators, uDelegate* progressSetCallback, uDelegate* doneCallback, DefaultNavigationAnimatorPlayer** __retval)
{
    *__retval = DefaultNavigationAnimatorPlayer::New1(progressTimer, animators, progressSetCallback, doneCallback);
}

// public void Update() :109
void DefaultNavigationAnimatorPlayer__Update_fn(DefaultNavigationAnimatorPlayer* __this)
{
    __this->Update();
}

// public DefaultNavigationAnimatorPlayer(Fuse.Navigation.ProgressTimer progressTimer, Uno.Collections.IList<Fuse.Navigation.INavigationAnimator> animators, Uno.Action<double> progressSetCallback, Uno.Action doneCallback) [instance] :97
void DefaultNavigationAnimatorPlayer::ctor_(::g::Fuse::Navigation::ProgressTimer* progressTimer, uObject* animators, uDelegate* progressSetCallback, uDelegate* doneCallback)
{
    _progressTimer = progressTimer;
    _animators = animators;
    _progressSetCallback = progressSetCallback;
    _doneCallback = doneCallback;
}

// public void EnsureAtEnd() [instance] :127
void DefaultNavigationAnimatorPlayer::EnsureAtEnd()
{
    uObject* ret2;
    double endProgress = (uPtr(_progressTimer)->Variant() == 0) ? uPtr(uPtr(_progressTimer)->ProgressSpan())->To() : uPtr(uPtr(_progressTimer)->ProgressSpan())->From();

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_animators), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Navigation.INavigationAnimator>*/])); i++)
        ::g::Fuse::Navigation::INavigationAnimator::Update(uInterface(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_animators), ::TYPES[7/*Uno.Collections.IList<Fuse.Navigation.INavigationAnimator>*/]), uCRef<int>(i), &ret2), ret2)), ::TYPES[51/*Fuse.Navigation.INavigationAnimator*/]), endProgress, endProgress);
}

// public void Update() [instance] :109
void DefaultNavigationAnimatorPlayer::Update()
{
    uObject* ret3;
    double prevProgress = uPtr(_progressTimer)->EasedProgress();
    uPtr(_progressTimer)->Update();
    double curProgress = uPtr(_progressTimer)->EasedProgress();
    uPtr(_progressSetCallback)->InvokeVoid(uCRef(curProgress));

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_animators), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Navigation.INavigationAnimator>*/])); i++)
        ::g::Fuse::Navigation::INavigationAnimator::Update(uInterface(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_animators), ::TYPES[7/*Uno.Collections.IList<Fuse.Navigation.INavigationAnimator>*/]), uCRef<int>(i), &ret3), ret3)), ::TYPES[51/*Fuse.Navigation.INavigationAnimator*/]), curProgress, prevProgress);

    if (uPtr(_progressTimer)->TimeLeft() == 0.0)
        uPtr(_doneCallback)->InvokeVoid();
}

// public DefaultNavigationAnimatorPlayer New(Fuse.Navigation.ProgressTimer progressTimer, Uno.Collections.IList<Fuse.Navigation.INavigationAnimator> animators, Uno.Action<double> progressSetCallback, Uno.Action doneCallback) [static] :97
DefaultNavigationAnimatorPlayer* DefaultNavigationAnimatorPlayer::New1(::g::Fuse::Navigation::ProgressTimer* progressTimer, uObject* animators, uDelegate* progressSetCallback, uDelegate* doneCallback)
{
    DefaultNavigationAnimatorPlayer* obj1 = (DefaultNavigationAnimatorPlayer*)uNew(DefaultNavigationAnimatorPlayer_typeof());
    obj1->ctor_(progressTimer, animators, progressSetCallback, doneCallback);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(12)
// -------------------------------------------------------------------------

// public sealed class DirectNavigation :12
// {
// static DirectNavigation() :12
static void DirectNavigation__cctor_1_fn(uType* __type)
{
    DirectNavigation::_progressStateProperty_ = ::g::Fuse::Properties::CreateHandle();
}

::g::Fuse::Navigation::Navigation_type* DirectNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::Navigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(DirectNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::Navigation_type);
    type = (::g::Fuse::Navigation::Navigation_type*)uClassType::New("Fuse.Navigation.DirectNavigation", options);
    type->SetBase(::g::Fuse::Navigation::Navigation_typeof());
    type->fp_cctor_ = DirectNavigation__cctor_1_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::Navigation*, ::g::Fuse::Node*, int*))DirectNavigation__Goto_fn;
    type->fp_OnChildAdded = (void(*)(::g::Fuse::Navigation::Navigation*, uObject*, ::g::Fuse::Node*))DirectNavigation__OnChildAdded_fn;
    type->fp_OnChildRemoved = (void(*)(::g::Fuse::Navigation::Navigation*, uObject*, ::g::Fuse::Node*))DirectNavigation__OnChildRemoved_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))DirectNavigation__OnRooted_fn;
    type->fp_get_PageProgress = (void(*)(::g::Fuse::Navigation::Navigation*, double*))DirectNavigation__get_PageProgress_fn;
    type->interface0.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Navigation::Navigation__GetPage_fn;
    type->interface0.fp_Goto = (void(*)(uObject*, ::g::Fuse::Node*, int*))DirectNavigation__Goto_fn;
    type->interface0.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::Navigation__Toggle_fn;
    type->interface0.fp_get_PageCount = (void(*)(uObject*, int*))::g::Fuse::Navigation::Navigation__get_PageCount_fn;
    type->interface0.fp_get_PageProgress = (void(*)(uObject*, double*))DirectNavigation__get_PageProgress_fn;
    type->interface0.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_PageCountChanged_fn;
    type->interface0.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_PageCountChanged_fn;
    type->interface0.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_PageProgressChanged_fn;
    type->interface0.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_PageProgressChanged_fn;
    type->interface1.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::Navigation__GoForward_fn;
    type->interface1.fp_GoBack = (void(*)(uObject*))::g::Fuse::Navigation::Navigation__GoBack_fn;
    type->interface1.fp_get_CanGoBack = (void(*)(uObject*, bool*))::g::Fuse::Navigation::Navigation__get_CanGoBack_fn;
    type->interface1.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::Navigation__get_CanGoForward_fn;
    ::TYPES[10] = ::g::Fuse::Node_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[11] = ::g::Fuse::Navigation::Navigation_typeof();
    ::TYPES[12] = uObject_typeof();
    ::TYPES[13] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[14] = ::g::Fuse::Navigation::INavigationPanel_typeof();
    ::TYPES[15] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[16] = ::g::Uno::Bool_typeof();
    ::TYPES[2] = ::g::Uno::Double_typeof();
    type->SetInterfaces(
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::Navigation_type, interface0),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::Navigation_type, interface1));
    type->SetFields(8,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Navigation::DirectNavigation, _active), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::DirectNavigation::_progressStateProperty_, uFieldFlagsStatic);
    return type;
}

// private static int GetProgressState(Fuse.Node elm) :98
void DirectNavigation__GetProgressState_fn(::g::Fuse::Node* elm, int* __retval)
{
    *__retval = DirectNavigation::GetProgressState(elm);
}

// public override sealed void Goto(Fuse.Node node, Fuse.Navigation.NavigationGotoMode mode) :41
void DirectNavigation__Goto_fn(DirectNavigation* __this, ::g::Fuse::Node* node, int* mode)
{
    int mode_ = *mode;
    __this->TransitionTo(node, mode_ == 2);
}

// protected override sealed void OnChildAdded(object s, Fuse.Node child) :21
void DirectNavigation__OnChildAdded_fn(DirectNavigation* __this, uObject* s, ::g::Fuse::Node* child)
{
    ::g::Fuse::Navigation::NavigationArgs* state = ::g::Fuse::Navigation::NavigationArgs::New2(-1.0, -1.0, 1);
    ::g::Fuse::Navigation::Navigation::NotifyNavigation(child, state);
    DirectNavigation::SetProgressState(child, -1);
    ::g::Fuse::Navigation::Navigation__OnChildAdded_fn(__this, s, child);
}

// protected override sealed void OnChildRemoved(object s, Fuse.Node child) :29
void DirectNavigation__OnChildRemoved_fn(DirectNavigation* __this, uObject* s, ::g::Fuse::Node* child)
{
    DirectNavigation::ResetProgressState(child);
    ::g::Fuse::Navigation::NavigationArgs* state = ::g::Fuse::Navigation::NavigationArgs::New2(0.0, 0.0, 1);
    ::g::Fuse::Navigation::Navigation::NotifyNavigation(child, state);

    if (__this->_active == child)
        __this->Goto(NULL, 0);

    ::g::Fuse::Navigation::Navigation__OnChildRemoved_fn(__this, s, child);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :14
void DirectNavigation__OnRooted_fn(DirectNavigation* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Navigation::Navigation__OnRooted_fn(__this, parentNode);

    if (__this->Owner() != NULL)
        __this->UpdateState(true);
}

// public override sealed double get_PageProgress() :120
void DirectNavigation__get_PageProgress_fn(DirectNavigation* __this, double* __retval)
{
    if (__this->_active == NULL)
        return *__retval = -1.0, void();

    return *__retval = 0.0, void();
}

// private static void ResetProgressState(Fuse.Node elm) :113
void DirectNavigation__ResetProgressState_fn(::g::Fuse::Node* elm)
{
    DirectNavigation::ResetProgressState(elm);
}

// private static void SetProgressState(Fuse.Node elm, int progress) :108
void DirectNavigation__SetProgressState_fn(::g::Fuse::Node* elm, int* progress)
{
    DirectNavigation::SetProgressState(elm, *progress);
}

// private void TransitionTo(Fuse.Node node, bool bypass) :46
void DirectNavigation__TransitionTo_fn(DirectNavigation* __this, ::g::Fuse::Node* node, bool* bypass)
{
    __this->TransitionTo(node, *bypass);
}

// private void UpdateState(bool bypass) :56
void DirectNavigation__UpdateState_fn(DirectNavigation* __this, bool* bypass)
{
    __this->UpdateState(*bypass);
}

uSStrong< ::g::Fuse::PropertyHandle*> DirectNavigation::_progressStateProperty_;

// private void TransitionTo(Fuse.Node node, bool bypass) [instance] :46
void DirectNavigation::TransitionTo(::g::Fuse::Node* node, bool bypass)
{
    ::g::Fuse::Node* oldActive = _active;
    _active = node;
    UpdateState(bypass);

    if (oldActive != _active)
        OnNavigated(_active);
}

// private void UpdateState(bool bypass) [instance] :56
void DirectNavigation::UpdateState(bool bypass)
{
    ::g::Fuse::Node* ret2;

    if (Owner() == NULL)
        return;

    for (int t = 0; t < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Node>*/])); t++)
    {
        ::g::Fuse::Node* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[15/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(t), &ret2), ret2);

        if (!IsPage(c))
            continue;

        int oldProgress = DirectNavigation::GetProgressState(c);
        bool active = _active == c;
        int newProgress = active ? 0 : -1;

        if (bypass)
        {
            ::g::Fuse::Navigation::NavigationArgs* jump = ::g::Fuse::Navigation::NavigationArgs::New2((double)newProgress, (double)newProgress, 1);
            ::g::Fuse::Navigation::Navigation::NotifyNavigation(c, jump);
            DirectNavigation::SetProgressState(c, newProgress);
            continue;
        }

        if (oldProgress == newProgress)
            continue;

        ::g::Fuse::Navigation::NavigationArgs* state = ::g::Fuse::Navigation::NavigationArgs::New2((double)newProgress, (double)oldProgress, 0);
        ::g::Fuse::Navigation::Navigation::NotifyNavigation(c, state);
        DirectNavigation::SetProgressState(c, newProgress);
    }
}

// private static int GetProgressState(Fuse.Node elm) [static] :98
int DirectNavigation::GetProgressState(::g::Fuse::Node* elm)
{
    DirectNavigation_typeof()->Init();
    uObject* val;

    if (uPtr(uPtr(elm)->Properties())->TryGet(DirectNavigation::_progressStateProperty(), &val))
        return uUnbox<int>(::TYPES[3/*int*/], val);

    return 0;
}

// private static void ResetProgressState(Fuse.Node elm) [static] :113
void DirectNavigation::ResetProgressState(::g::Fuse::Node* elm)
{
    DirectNavigation_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Clear(DirectNavigation::_progressStateProperty());
}

// private static void SetProgressState(Fuse.Node elm, int progress) [static] :108
void DirectNavigation::SetProgressState(::g::Fuse::Node* elm, int progress)
{
    DirectNavigation_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Set(DirectNavigation::_progressStateProperty(), uBox<int>(::TYPES[3/*int*/], progress));
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(152)
// --------------------------------------------------------------------------

// public sealed class EdgeNavigation :152
// {
// static EdgeNavigation() :152
static void EdgeNavigation__cctor_1_fn(uType* __type)
{
    EdgeNavigation::_edgeHandle_ = ::g::Fuse::Properties::CreateHandle();
}

::g::Fuse::Navigation::Navigation_type* EdgeNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::Navigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(EdgeNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::Navigation_type);
    type = (::g::Fuse::Navigation::Navigation_type*)uClassType::New("Fuse.Navigation.EdgeNavigation", options);
    type->SetBase(::g::Fuse::Navigation::Navigation_typeof());
    type->fp_cctor_ = EdgeNavigation__cctor_1_fn;
    type->fp_get_CanGoBack = (void(*)(::g::Fuse::Navigation::Navigation*, bool*))EdgeNavigation__get_CanGoBack_fn;
    type->fp_GoBack = (void(*)(::g::Fuse::Navigation::Navigation*))EdgeNavigation__GoBack_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::Navigation*, ::g::Fuse::Node*, int*))EdgeNavigation__Goto_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))EdgeNavigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))EdgeNavigation__OnUnrooted_fn;
    type->fp_get_PageProgress = (void(*)(::g::Fuse::Navigation::Navigation*, double*))EdgeNavigation__get_PageProgress_fn;
    type->fp_Toggle = (void(*)(::g::Fuse::Navigation::Navigation*, ::g::Fuse::Node*))EdgeNavigation__Toggle_fn;
    type->interface0.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Navigation::Navigation__GetPage_fn;
    type->interface0.fp_Goto = (void(*)(uObject*, ::g::Fuse::Node*, int*))EdgeNavigation__Goto_fn;
    type->interface0.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Node*))EdgeNavigation__Toggle_fn;
    type->interface0.fp_get_PageCount = (void(*)(uObject*, int*))::g::Fuse::Navigation::Navigation__get_PageCount_fn;
    type->interface0.fp_get_PageProgress = (void(*)(uObject*, double*))EdgeNavigation__get_PageProgress_fn;
    type->interface0.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_PageCountChanged_fn;
    type->interface0.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_PageCountChanged_fn;
    type->interface0.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_PageProgressChanged_fn;
    type->interface0.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_PageProgressChanged_fn;
    type->interface1.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::Navigation__GoForward_fn;
    type->interface1.fp_GoBack = (void(*)(uObject*))EdgeNavigation__GoBack_fn;
    type->interface1.fp_get_CanGoBack = (void(*)(uObject*, bool*))EdgeNavigation__get_CanGoBack_fn;
    type->interface1.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::Navigation__get_CanGoForward_fn;
    ::STRINGS[0] = uString::Const("Unexpected message");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno");
    ::STRINGS[2] = uString::Const("EdgeNavigation must be rooted in an Element");
    ::TYPES[13] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[14] = ::g::Fuse::Navigation::INavigationPanel_typeof();
    ::TYPES[11] = ::g::Fuse::Navigation::Navigation_typeof();
    ::TYPES[15] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[16] = ::g::Uno::Bool_typeof();
    ::TYPES[17] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[10] = ::g::Fuse::Node_typeof();
    ::TYPES[18] = ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof();
    ::TYPES[19] = ::g::Fuse::Gestures::Edge_typeof();
    ::TYPES[20] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Double_typeof());
    ::TYPES[21] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof());
    ::TYPES[22] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof());
    ::TYPES[23] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof());
    ::TYPES[24] = ::g::Fuse::Navigation::NavigationEdge_typeof();
    ::TYPES[2] = ::g::Uno::Double_typeof();
    ::TYPES[25] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[26] = ::g::Fuse::Behavior_typeof();
    type->SetInterfaces(
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::Navigation_type, interface0),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::Navigation_type, interface1));
    type->SetFields(8,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Navigation::EdgeNavigation, _active), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Navigation::EdgeNavigation, _element), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Navigation::EdgeNavigation, _mains), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof()), offsetof(::g::Fuse::Navigation::EdgeNavigation, _swipers), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::EdgeNavigation::_edgeHandle_, uFieldFlagsStatic);
    return type;
}

// public Fuse.Node get_Active() :201
void EdgeNavigation__get_Active_fn(EdgeNavigation* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Active();
}

// public void set_Active(Fuse.Node value) :205
void EdgeNavigation__set_Active_fn(EdgeNavigation* __this, ::g::Fuse::Node* value)
{
    __this->Active(value);
}

// public override sealed bool get_CanGoBack() :354
void EdgeNavigation__get_CanGoBack_fn(EdgeNavigation* __this, bool* __retval)
{
    return *__retval = __this->IsAnyPanelActive(), void();
}

// private void CheckChildren() :258
void EdgeNavigation__CheckChildren_fn(EdgeNavigation* __this)
{
    __this->CheckChildren();
}

// private void ClearChildren() :247
void EdgeNavigation__ClearChildren_fn(EdgeNavigation* __this)
{
    __this->ClearChildren();
}

// public static Fuse.Navigation.NavigationEdge GetEdge(Fuse.Elements.Element elm) :163
void EdgeNavigation__GetEdge_fn(::g::Fuse::Elements::Element* elm, int* __retval)
{
    *__retval = EdgeNavigation::GetEdge(elm);
}

// public override sealed void GoBack() :348
void EdgeNavigation__GoBack_fn(EdgeNavigation* __this)
{
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret11;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum7 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_swipers), &ret11), ret11); enum7.MoveNext(::TYPES[22/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum7.Current(::TYPES[22/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        uPtr(sw.Value(::TYPES[23/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Disable();
    }
}

// public override sealed void Goto(Fuse.Node element, Fuse.Navigation.NavigationGotoMode mode) :177
void EdgeNavigation__Goto_fn(EdgeNavigation* __this, ::g::Fuse::Node* element, int* mode)
{
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret12;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_swipers), &ret12), ret12); enum1.MoveNext(::TYPES[22/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum1.Current(::TYPES[22/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

        if (uPtr(sw.Value(::TYPES[23/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target() == element)
            uPtr(sw.Value(::TYPES[23/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Enable();
        else
            uPtr(sw.Value(::TYPES[23/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Disable();
    }

    __this->_active = element;
}

// internal bool IsAnyPanelActive() :338
void EdgeNavigation__IsAnyPanelActive_fn(EdgeNavigation* __this, bool* __retval)
{
    *__retval = __this->IsAnyPanelActive();
}

// private void OnProgressChanged(object s, double progress) :293
void EdgeNavigation__OnProgressChanged_fn(EdgeNavigation* __this, uObject* s, double* progress)
{
    __this->OnProgressChanged(s, *progress);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :212
void EdgeNavigation__OnRooted_fn(EdgeNavigation* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Navigation::Navigation__OnRooted_fn(__this, parentNode);
    __this->_element = uAs< ::g::Fuse::Elements::Element*>(__this->ParentNode(), ::TYPES[17/*Fuse.Elements.Element*/]);

    if ((__this->_element == NULL) || (__this->Owner() == NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"EdgeNavigat...*/]));

    __this->CheckChildren();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :222
void EdgeNavigation__OnUnrooted_fn(EdgeNavigation* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->Owner() != NULL)
        __this->ClearChildren();

    __this->_element = NULL;
    ::g::Fuse::Navigation::Navigation__OnUnrooted_fn(__this, parentNode);
}

// public override sealed double get_PageProgress() :358
void EdgeNavigation__get_PageProgress_fn(EdgeNavigation* __this, double* __retval)
{
    return *__retval = (double)__this->GetPageIndex(__this->_active), void();
}

// public override sealed void Toggle(Fuse.Node page) :190
void EdgeNavigation__Toggle_fn(EdgeNavigation* __this, ::g::Fuse::Node* page)
{
    if (__this->Active() == page)
        __this->Active(NULL);
    else
        __this->Active(page);
}

uSStrong< ::g::Fuse::PropertyHandle*> EdgeNavigation::_edgeHandle_;

// public Fuse.Node get_Active() [instance] :201
::g::Fuse::Node* EdgeNavigation::Active()
{
    return _active;
}

// public void set_Active(Fuse.Node value) [instance] :205
void EdgeNavigation::Active(::g::Fuse::Node* value)
{
    Goto(value, 0);
}

// private void CheckChildren() [instance] :258
void EdgeNavigation::CheckChildren()
{
    ::g::Fuse::Node* ret9;
    ClearChildren();
    ::g::Fuse::Navigation::NavigationArgs* panelArgs = ::g::Fuse::Navigation::NavigationArgs::New2(1.0, 1.0, 1);
    ::g::Fuse::Navigation::NavigationArgs* mainArgs = ::g::Fuse::Navigation::NavigationArgs::New2(0.0, 0.0, 1);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Node* nodeChild = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[15/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret9), ret9);

        if (!IsPage(nodeChild))
            continue;

        ::g::Fuse::Elements::Element* element = uAs< ::g::Fuse::Elements::Element*>(nodeChild, ::TYPES[17/*Fuse.Elements.Element*/]);
        int edge = (element == NULL) ? 4 : EdgeNavigation::GetEdge(element);

        if (edge == 4)
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(_mains), nodeChild);
            ::g::Fuse::Navigation::Navigation::NotifyNavigation(nodeChild, mainArgs);
        }
        else
        {
            ::g::Fuse::Navigation::Navigation::NotifyNavigation(element, panelArgs);
            ::g::Fuse::Gestures::Internal::EdgeSwiper* s = ::g::Fuse::Gestures::Internal::EdgeSwiper::New1();
            s->Edge(edge);
            s->Target(element);
            s->add_ProgressChanged(uDelegate::New(::TYPES[20/*Uno.Action<object, double>*/], (void*)EdgeNavigation__OnProgressChanged_fn, this));
            s->Rooted(_element);
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_swipers), uCRef<int>(edge), s);
        }
    }
}

// private void ClearChildren() [instance] :247
void EdgeNavigation::ClearChildren()
{
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret10;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret10), ret10); enum2.MoveNext(::TYPES[22/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > s = enum2.Current(::TYPES[22/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        uPtr(s.Value(::TYPES[23/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->remove_ProgressChanged(uDelegate::New(::TYPES[20/*Uno.Action<object, double>*/], (void*)EdgeNavigation__OnProgressChanged_fn, this));
        uPtr(s.Value(::TYPES[23/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Unrooted();
    }

    uPtr(_swipers)->Clear();
    uPtr(_mains)->Clear();
}

// internal bool IsAnyPanelActive() [instance] :338
bool EdgeNavigation::IsAnyPanelActive()
{
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret13;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum6 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret13), ret13); enum6.MoveNext(::TYPES[22/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum6.Current(::TYPES[22/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

        if (uPtr(sw.Value(::TYPES[23/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress() > 0.0)
            return true;
    }

    return false;
}

// private void OnProgressChanged(object s, double progress) [instance] :293
void EdgeNavigation::OnProgressChanged(uObject* s, double progress)
{
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret15;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret16;
    ::g::Fuse::Gestures::Internal::EdgeSwiper* swiper = uAs< ::g::Fuse::Gestures::Internal::EdgeSwiper*>(s, ::TYPES[18/*Fuse.Gestures.Internal.EdgeSwiper*/]);
    ::g::Fuse::Elements::Element* panel = uPtr(swiper)->Target();

    if ((panel == NULL) || (swiper == NULL))
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[0/*"Unexpected ...*/], 1, ::STRINGS[1/*"/usr/local/...*/], 299);
        return;
    }

    ::g::Fuse::Navigation::NavigationArgs* a = ::g::Fuse::Navigation::NavigationArgs::New2(1.0 - progress, 1.0 - progress, 2);
    ::g::Fuse::Navigation::Navigation::NotifyNavigation(panel, a);
    ::g::Fuse::Node* maxPage = NULL;
    double maxProgress = 0.0;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum3 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret15), ret15); enum3.MoveNext(::TYPES[22/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum3.Current(::TYPES[22/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

        if (uPtr(sw.Value(::TYPES[23/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress() > maxProgress)
        {
            maxPage = uPtr(sw.Value(::TYPES[23/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target();
            maxProgress = uPtr(sw.Value(::TYPES[23/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress();
        }
    }

    _active = maxPage;
    ::g::Fuse::Navigation::NavigationArgs* b = ::g::Fuse::Navigation::NavigationArgs::New2(-maxProgress, -maxProgress, 2);

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum4 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_mains), &ret16), ret16); enum4.MoveNext(::TYPES[25/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
    {
        ::g::Fuse::Node* m = enum4.Current(::TYPES[25/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);
        ::g::Fuse::Navigation::Navigation::NotifyNavigation(m, b);
    }
}

// public static Fuse.Navigation.NavigationEdge GetEdge(Fuse.Elements.Element elm) [static] :163
int EdgeNavigation::GetEdge(::g::Fuse::Elements::Element* elm)
{
    EdgeNavigation_typeof()->Init();
    uObject* res;

    if (uPtr(uPtr(elm)->Properties())->TryGet(EdgeNavigation::_edgeHandle(), &res))
        return uUnbox<int>(::TYPES[24/*Fuse.Navigation.NavigationEdge*/], res);

    return 4;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(2128)
// ---------------------------------------------------------------------------

// public sealed class GoBack :2128
// {
::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoBack_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(GoBack);
    options.TypeSize = sizeof(::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.GoBack", options);
    type->SetBase(::g::Fuse::Navigation::BackForwardNavigationTriggerAction_typeof());
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::BackForwardNavigationTriggerAction*, uObject*, ::g::Fuse::Node*))GoBack__Perform1_fn;
    ::TYPES[1] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetFields(7);
    return type;
}

// protected override sealed void Perform(Fuse.Navigation.IBaseNavigation ctx, Fuse.Node node) :2130
void GoBack__Perform1_fn(GoBack* __this, uObject* ctx, ::g::Fuse::Node* node)
{
    if (::g::Fuse::Navigation::IBaseNavigation::CanGoBack(uInterface(uPtr(ctx), ::TYPES[1/*Fuse.Navigation.IBaseNavigation*/])))
        ::g::Fuse::Navigation::IBaseNavigation::GoBack(uInterface(uPtr(ctx), ::TYPES[1/*Fuse.Navigation.IBaseNavigation*/]));
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(2137)
// ---------------------------------------------------------------------------

// public sealed class GoForward :2137
// {
::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoForward_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(GoForward);
    options.TypeSize = sizeof(::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.GoForward", options);
    type->SetBase(::g::Fuse::Navigation::BackForwardNavigationTriggerAction_typeof());
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::BackForwardNavigationTriggerAction*, uObject*, ::g::Fuse::Node*))GoForward__Perform1_fn;
    ::TYPES[1] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetFields(7);
    return type;
}

// protected override sealed void Perform(Fuse.Navigation.IBaseNavigation ctx, Fuse.Node node) :2140
void GoForward__Perform1_fn(GoForward* __this, uObject* ctx, ::g::Fuse::Node* node)
{
    if (::g::Fuse::Navigation::IBaseNavigation::CanGoForward(uInterface(uPtr(ctx), ::TYPES[1/*Fuse.Navigation.IBaseNavigation*/])))
        ::g::Fuse::Navigation::IBaseNavigation::GoForward(uInterface(uPtr(ctx), ::TYPES[1/*Fuse.Navigation.IBaseNavigation*/]));
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(395)
// --------------------------------------------------------------------------

// public delegate void HistoryChangedHandler(object sender) :395
uDelegateType* HistoryChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.HistoryChangedHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof());
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(410)
// --------------------------------------------------------------------------

// public abstract interface IBaseNavigation :410
// {
uInterfaceType* IBaseNavigation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IBaseNavigation", 0, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(418)
// --------------------------------------------------------------------------

// public abstract interface INavigation :418
// {
uInterfaceType* INavigation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.INavigation", 0, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/Internal/$.uno(12)
// ----------------------------------------------------------------------------------

// internal abstract interface INavigationAnimator :12
// {
uInterfaceType* INavigationAnimator_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.INavigationAnimator", 0, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/Internal/$.uno(19)
// ----------------------------------------------------------------------------------

// internal abstract interface INavigationAnimatorPlayer :19
// {
uInterfaceType* INavigationAnimatorPlayer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.INavigationAnimatorPlayer", 0, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(444)
// --------------------------------------------------------------------------

// internal abstract interface INavigationPanel :444
// {
uInterfaceType* INavigationPanel_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.INavigationPanel", 0, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(1008)
// ---------------------------------------------------------------------------

// internal abstract interface IPageResourceBinding :1008
// {
uInterfaceType* IPageResourceBinding_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IPageResourceBinding", 0, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(378)
// --------------------------------------------------------------------------

// public sealed class NavigatedArgs :378
// {
NavigatedArgs_type* NavigatedArgs_typeof()
{
    static uSStrong<NavigatedArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NavigatedArgs);
    options.TypeSize = sizeof(NavigatedArgs_type);
    type = (NavigatedArgs_type*)uClassType::New("Fuse.Navigation.NavigatedArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))NavigatedArgs__FuseScriptingIScriptEventSerialize_fn;
    ::STRINGS[3] = uString::Const("name");
    ::STRINGS[4] = uString::Const("");
    ::TYPES[10] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(NavigatedArgs_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Navigation::NavigatedArgs, _NewNode), 0);
    return type;
}

// public NavigatedArgs(Fuse.Node newNode) :382
void NavigatedArgs__ctor_1_fn(NavigatedArgs* __this, ::g::Fuse::Node* newNode)
{
    __this->ctor_1(newNode);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :387
void NavigatedArgs__FuseScriptingIScriptEventSerialize_fn(NavigatedArgs* __this, uObject* s)
{
    if (::g::Uno::String::op_Inequality(uPtr(__this->NewNode())->Name(), NULL))
        ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::g::Fuse::Scripting::IEventSerializer_typeof()), ::STRINGS[3/*"name"*/], uPtr(__this->NewNode())->Name());
    else
        ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(s, ::g::Fuse::Scripting::IEventSerializer_typeof()), ::STRINGS[3/*"name"*/], ::STRINGS[4/*""*/]);
}

// public NavigatedArgs New(Fuse.Node newNode) :382
void NavigatedArgs__New2_fn(::g::Fuse::Node* newNode, NavigatedArgs** __retval)
{
    *__retval = NavigatedArgs::New2(newNode);
}

// public generated Fuse.Node get_NewNode() :380
void NavigatedArgs__get_NewNode_fn(NavigatedArgs* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->NewNode();
}

// private generated void set_NewNode(Fuse.Node value) :380
void NavigatedArgs__set_NewNode_fn(NavigatedArgs* __this, ::g::Fuse::Node* value)
{
    __this->NewNode(value);
}

// public NavigatedArgs(Fuse.Node newNode) [instance] :382
void NavigatedArgs::ctor_1(::g::Fuse::Node* newNode)
{
    ctor_();
    NewNode(newNode);
}

// public generated Fuse.Node get_NewNode() [instance] :380
::g::Fuse::Node* NavigatedArgs::NewNode()
{
    return _NewNode;
}

// private generated void set_NewNode(Fuse.Node value) [instance] :380
void NavigatedArgs::NewNode(::g::Fuse::Node* value)
{
    _NewNode = value;
}

// public NavigatedArgs New(Fuse.Node newNode) [static] :382
NavigatedArgs* NavigatedArgs::New2(::g::Fuse::Node* newNode)
{
    NavigatedArgs* obj1 = (NavigatedArgs*)uNew(NavigatedArgs_typeof());
    obj1->ctor_1(newNode);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(394)
// --------------------------------------------------------------------------

// public delegate void NavigatedHandler(object sender, Fuse.Navigation.NavigatedArgs args) :394
uDelegateType* NavigatedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigatedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Navigation::NavigatedArgs_typeof());
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(2083)
// ---------------------------------------------------------------------------

// public sealed class NavigateTo :2083
// {
::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateTo_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(NavigateTo);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::NavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.NavigateTo", options);
    type->SetBase(::g::Fuse::Navigation::NavigationTriggerAction_typeof());
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::NavigationTriggerAction*, uObject*, ::g::Fuse::Node*))NavigateTo__Perform1_fn;
    ::TYPES[27] = ::g::Fuse::Navigation::NavigationGotoMode_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    type->SetFields(8,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::NavigateTo, _Bypass), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::NavigateTo, _ClearForwardHistory), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Navigation::NavigateTo, _Target), 0);
    return type;
}

// public generated bool get_Bypass() :2087
void NavigateTo__get_Bypass_fn(NavigateTo* __this, bool* __retval)
{
    *__retval = __this->Bypass();
}

// public generated void set_Bypass(bool value) :2087
void NavigateTo__set_Bypass_fn(NavigateTo* __this, bool* value)
{
    __this->Bypass(*value);
}

// public generated bool get_ClearForwardHistory() :2089
void NavigateTo__get_ClearForwardHistory_fn(NavigateTo* __this, bool* __retval)
{
    *__retval = __this->ClearForwardHistory();
}

// public generated void set_ClearForwardHistory(bool value) :2089
void NavigateTo__set_ClearForwardHistory_fn(NavigateTo* __this, bool* value)
{
    __this->ClearForwardHistory(*value);
}

// protected override sealed void Perform(Fuse.Navigation.INavigation ctx, Fuse.Node n) :2091
void NavigateTo__Perform1_fn(NavigateTo* __this, uObject* ctx, ::g::Fuse::Node* n)
{
    int mode = __this->Bypass() ? 2 : 0;

    if (__this->ClearForwardHistory())
        mode = mode | 4;

    if (__this->Target() != NULL)
        ::g::Fuse::Navigation::INavigation::Goto(uInterface(uPtr(ctx), ::TYPES[29/*Fuse.Navigation.INavigation*/]), __this->Target(), mode);
}

// public generated Fuse.Node get_Target() :2085
void NavigateTo__get_Target_fn(NavigateTo* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Node value) :2085
void NavigateTo__set_Target_fn(NavigateTo* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// public generated bool get_Bypass() [instance] :2087
bool NavigateTo::Bypass()
{
    return _Bypass;
}

// public generated void set_Bypass(bool value) [instance] :2087
void NavigateTo::Bypass(bool value)
{
    _Bypass = value;
}

// public generated bool get_ClearForwardHistory() [instance] :2089
bool NavigateTo::ClearForwardHistory()
{
    return _ClearForwardHistory;
}

// public generated void set_ClearForwardHistory(bool value) [instance] :2089
void NavigateTo::ClearForwardHistory(bool value)
{
    _ClearForwardHistory = value;
}

// public generated Fuse.Node get_Target() [instance] :2085
::g::Fuse::Node* NavigateTo::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Node value) [instance] :2085
void NavigateTo::Target(::g::Fuse::Node* value)
{
    _Target = value;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(2101)
// ---------------------------------------------------------------------------

// public sealed class NavigateToggle :2101
// {
::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateToggle_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(NavigateToggle);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::NavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.NavigateToggle", options);
    type->SetBase(::g::Fuse::Navigation::NavigationTriggerAction_typeof());
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::NavigationTriggerAction*, uObject*, ::g::Fuse::Node*))NavigateToggle__Perform1_fn;
    type->SetFields(8,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Navigation::NavigateToggle, _Target), 0);
    return type;
}

// protected override sealed void Perform(Fuse.Navigation.INavigation ctx, Fuse.Node n) :2105
void NavigateToggle__Perform1_fn(NavigateToggle* __this, uObject* ctx, ::g::Fuse::Node* n)
{
    ::g::Fuse::Node* ind1;
    ::g::Fuse::Node* page = ::g::Fuse::Navigation::Navigation::TryFindPage((ind1 = __this->Target(), (ind1 != NULL) ? ind1 : n));

    if (page != NULL)
        ::g::Fuse::Navigation::INavigation::Toggle(uInterface(uPtr(ctx), ::TYPES[29/*Fuse.Navigation.INavigation*/]), page);
}

// public generated Fuse.Node get_Target() :2103
void NavigateToggle__get_Target_fn(NavigateToggle* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Node value) :2103
void NavigateToggle__set_Target_fn(NavigateToggle* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// public generated Fuse.Node get_Target() [instance] :2103
::g::Fuse::Node* NavigateToggle::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Node value) [instance] :2103
void NavigateToggle::Target(::g::Fuse::Node* value)
{
    _Target = value;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(681)
// --------------------------------------------------------------------------

// public interfacemodifiers class Navigation :681
// {
// static Navigation() :681
static void Navigation__cctor__fn(uType* __type)
{
    Navigation::_navigationHandler_ = ::g::Fuse::Properties::CreateHandle();
    Navigation::_navigationStateHandler_ = ::g::Fuse::Properties::CreateHandle();
    Navigation::_navigationProgress_ = ::g::Fuse::Properties::CreateHandle();
    Navigation::_contextHandle_ = ::g::Fuse::Properties::CreateHandle();
}

Navigation_type* Navigation_typeof()
{
    static uSStrong<Navigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Navigation);
    options.TypeSize = sizeof(Navigation_type);
    type = (Navigation_type*)uClassType::New("Fuse.Navigation.Navigation", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_cctor_ = Navigation__cctor__fn;
    type->fp_get_CanGoBack = Navigation__get_CanGoBack_fn;
    type->fp_get_CanGoForward = Navigation__get_CanGoForward_fn;
    type->fp_GoBack = Navigation__GoBack_fn;
    type->fp_GoForward = Navigation__GoForward_fn;
    type->fp_OnChildAdded = Navigation__OnChildAdded_fn;
    type->fp_OnChildRemoved = Navigation__OnChildRemoved_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Navigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Navigation__OnUnrooted_fn;
    type->fp_Toggle = Navigation__Toggle_fn;
    type->interface0.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Node**))Navigation__GetPage_fn;
    type->interface0.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Node*))Navigation__Toggle_fn;
    type->interface0.fp_get_PageCount = (void(*)(uObject*, int*))Navigation__get_PageCount_fn;
    type->interface0.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))Navigation__add_PageCountChanged_fn;
    type->interface0.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))Navigation__remove_PageCountChanged_fn;
    type->interface0.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))Navigation__add_PageProgressChanged_fn;
    type->interface0.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))Navigation__remove_PageProgressChanged_fn;
    type->interface1.fp_GoForward = (void(*)(uObject*))Navigation__GoForward_fn;
    type->interface1.fp_GoBack = (void(*)(uObject*))Navigation__GoBack_fn;
    type->interface1.fp_get_CanGoBack = (void(*)(uObject*, bool*))Navigation__get_CanGoBack_fn;
    type->interface1.fp_get_CanGoForward = (void(*)(uObject*, bool*))Navigation__get_CanGoForward_fn;
    ::TYPES[28] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[10] = ::g::Fuse::Node_typeof();
    ::TYPES[29] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[30] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[13] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[14] = ::g::Fuse::Navigation::INavigationPanel_typeof();
    ::TYPES[15] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[31] = ::g::Fuse::Navigation::NavigationHandler_typeof();
    ::TYPES[32] = ::g::Fuse::Navigation::NavigationArgs_typeof();
    ::TYPES[12] = uObject_typeof();
    ::TYPES[33] = ::g::Fuse::Navigation::NavigationStateHandler_typeof();
    ::TYPES[34] = ::g::Fuse::Navigation::NavigationStateArgs_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[35] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof()->Array());
    ::TYPES[36] = uObject_typeof()->Array();
    ::TYPES[37] = ::g::Uno::Delegate_typeof();
    ::TYPES[38] = ::g::Fuse::Navigation::HistoryChangedHandler_typeof();
    ::TYPES[39] = ::g::Fuse::Navigation::NavigatedHandler_typeof();
    ::TYPES[40] = ::g::Fuse::Navigation::NavigationPageCountHandler_typeof();
    ::TYPES[41] = ::g::Fuse::Navigation::NavigationPageProgressHandler_typeof();
    ::TYPES[26] = ::g::Fuse::Behavior_typeof();
    ::TYPES[42] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetInterfaces(
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(Navigation_type, interface0),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(Navigation_type, interface1));
    type->SetFields(3,
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Navigation::Navigation, _panel), 0,
        ::g::Fuse::Navigation::HistoryChangedHandler_typeof(), offsetof(::g::Fuse::Navigation::Navigation, HistoryChanged1), 0,
        ::g::Fuse::Navigation::NavigatedHandler_typeof(), offsetof(::g::Fuse::Navigation::Navigation, Navigated1), 0,
        ::g::Fuse::Navigation::NavigationPageCountHandler_typeof(), offsetof(::g::Fuse::Navigation::Navigation, PageCountChanged1), 0,
        ::g::Fuse::Navigation::NavigationPageProgressHandler_typeof(), offsetof(::g::Fuse::Navigation::Navigation, PageProgressChanged1), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::Navigation::_contextHandle_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::Navigation::_navigationHandler_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::Navigation::_navigationProgress_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::Navigation::_navigationStateHandler_, uFieldFlagsStatic);
    return type;
}

// public virtual bool get_CanGoBack() :882
void Navigation__get_CanGoBack_fn(Navigation* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public virtual bool get_CanGoForward() :883
void Navigation__get_CanGoForward_fn(Navigation* __this, bool* __retval)
{
    return *__retval = false, void();
}

// internal static Fuse.Navigation.INavigation GetLocalNavigation(Fuse.Node node) :777
void Navigation__GetLocalNavigation_fn(::g::Fuse::Node* node, uObject** __retval)
{
    *__retval = Navigation::GetLocalNavigation(node);
}

// public static Fuse.Navigation.INavigation GetNavigationNavigation(Fuse.Node n) :828
void Navigation__GetNavigationNavigation_fn(::g::Fuse::Node* n, uObject** __retval)
{
    *__retval = Navigation::GetNavigationNavigation(n);
}

// public Fuse.Node GetPage(int index) :945
void Navigation__GetPage_fn(Navigation* __this, int* index, ::g::Fuse::Node** __retval)
{
    *__retval = __this->GetPage(*index);
}

// protected int GetPageIndex(Fuse.Node child) :976
void Navigation__GetPageIndex_fn(Navigation* __this, ::g::Fuse::Node* child, int* __retval)
{
    *__retval = __this->GetPageIndex(child);
}

// public virtual void GoBack() :881
void Navigation__GoBack_fn(Navigation* __this)
{
}

// public virtual void GoForward() :880
void Navigation__GoForward_fn(Navigation* __this)
{
}

// protected bool get_HasPages() :964
void Navigation__get_HasPages_fn(Navigation* __this, bool* __retval)
{
    *__retval = __this->HasPages();
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :872
void Navigation__add_HistoryChanged_fn(Navigation* __this, uDelegate* value)
{
    __this->add_HistoryChanged(value);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :872
void Navigation__remove_HistoryChanged_fn(Navigation* __this, uDelegate* value)
{
    __this->remove_HistoryChanged(value);
}

// private static void Invoke(object handler, object[] state) :704
void Navigation__Invoke_fn(uObject* handler, uArray* state)
{
    Navigation::Invoke(handler, state);
}

// private static void InvokeState(object handler, object[] state) :730
void Navigation__InvokeState_fn(uObject* handler, uArray* state)
{
    Navigation::InvokeState(handler, state);
}

// protected bool IsPage(Fuse.Node n) :989
void Navigation__IsPage_fn(Navigation* __this, ::g::Fuse::Node* n, bool* __retval)
{
    *__retval = __this->IsPage(n);
}

// public generated void add_Navigated(Fuse.Navigation.NavigatedHandler value) :861
void Navigation__add_Navigated_fn(Navigation* __this, uDelegate* value)
{
    __this->add_Navigated(value);
}

// public generated void remove_Navigated(Fuse.Navigation.NavigatedHandler value) :861
void Navigation__remove_Navigated_fn(Navigation* __this, uDelegate* value)
{
    __this->remove_Navigated(value);
}

// internal static void NotifyNavigation(Fuse.Node n, Fuse.Navigation.NavigationArgs state) :695
void Navigation__NotifyNavigation_fn(::g::Fuse::Node* n, ::g::Fuse::Navigation::NavigationArgs* state)
{
    Navigation::NotifyNavigation(n, state);
}

// internal static void NotifyNavigationState(Fuse.Node n, Fuse.Navigation.NavigationStateArgs state) :725
void Navigation__NotifyNavigationState_fn(::g::Fuse::Node* n, ::g::Fuse::Navigation::NavigationStateArgs* state)
{
    Navigation::NotifyNavigationState(n, state);
}

// protected virtual void OnChildAdded(object s, Fuse.Node child) :926
void Navigation__OnChildAdded_fn(Navigation* __this, uObject* s, ::g::Fuse::Node* child)
{
}

// protected virtual void OnChildRemoved(object s, Fuse.Node child) :927
void Navigation__OnChildRemoved_fn(Navigation* __this, uObject* s, ::g::Fuse::Node* child)
{
}

// protected void OnHistoryChanged() :874
void Navigation__OnHistoryChanged_fn(Navigation* __this)
{
    __this->OnHistoryChanged();
}

// private void OnNavChildAdded(object s, Fuse.Node child) :914
void Navigation__OnNavChildAdded_fn(Navigation* __this, uObject* s, ::g::Fuse::Node* child)
{
    __this->OnNavChildAdded(s, child);
}

// private void OnNavChildRemoved(object s, Fuse.Node child) :920
void Navigation__OnNavChildRemoved_fn(Navigation* __this, uObject* s, ::g::Fuse::Node* child)
{
    __this->OnNavChildRemoved(s, child);
}

// protected void OnNavigated(Fuse.Node newElement) :863
void Navigation__OnNavigated_fn(Navigation* __this, ::g::Fuse::Node* newElement)
{
    __this->OnNavigated(newElement);
}

// protected void OnPageCountChanged() :847
void Navigation__OnPageCountChanged_fn(Navigation* __this)
{
    __this->OnPageCountChanged();
}

// protected void OnPageProgressChanged(double current, double prev) :855
void Navigation__OnPageProgressChanged_fn(Navigation* __this, double* current, double* prev)
{
    __this->OnPageProgressChanged(*current, *prev);
}

// protected override void OnRooted(Fuse.Node parentNode) :889
void Navigation__OnRooted_fn(Navigation* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_panel = uAs<uObject*>(__this->ParentNode(), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]);

    if (__this->_panel != NULL)
    {
        ::g::Fuse::Navigation::INavigationPanel::add_ChildAdded(uInterface(uPtr(__this->_panel), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]), uDelegate::New(::TYPES[42/*Uno.EventHandler<Fuse.Node>*/], (void*)Navigation__OnNavChildAdded_fn, __this));
        ::g::Fuse::Navigation::INavigationPanel::add_ChildRemoved(uInterface(uPtr(__this->_panel), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]), uDelegate::New(::TYPES[42/*Uno.EventHandler<Fuse.Node>*/], (void*)Navigation__OnNavChildRemoved_fn, __this));
    }

    __this->OnPageCountChanged();
}

// protected override void OnUnrooted(Fuse.Node parentNode) :902
void Navigation__OnUnrooted_fn(Navigation* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->_panel != NULL)
    {
        ::g::Fuse::Navigation::INavigationPanel::remove_ChildAdded(uInterface(uPtr(__this->_panel), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]), uDelegate::New(::TYPES[42/*Uno.EventHandler<Fuse.Node>*/], (void*)Navigation__OnNavChildAdded_fn, __this));
        ::g::Fuse::Navigation::INavigationPanel::remove_ChildRemoved(uInterface(uPtr(__this->_panel), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]), uDelegate::New(::TYPES[42/*Uno.EventHandler<Fuse.Node>*/], (void*)Navigation__OnNavChildRemoved_fn, __this));
        __this->_panel = NULL;
    }

    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// internal Fuse.Navigation.INavigationPanel get_Owner() :886
void Navigation__get_Owner_fn(Navigation* __this, uObject** __retval)
{
    *__retval = __this->Owner();
}

// public int get_PageCount() :931
void Navigation__get_PageCount_fn(Navigation* __this, int* __retval)
{
    *__retval = __this->PageCount();
}

// public generated void add_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) :845
void Navigation__add_PageCountChanged_fn(Navigation* __this, uDelegate* value)
{
    __this->add_PageCountChanged(value);
}

// public generated void remove_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) :845
void Navigation__remove_PageCountChanged_fn(Navigation* __this, uDelegate* value)
{
    __this->remove_PageCountChanged(value);
}

// public generated void add_PageProgressChanged(Fuse.Navigation.NavigationPageProgressHandler value) :853
void Navigation__add_PageProgressChanged_fn(Navigation* __this, uDelegate* value)
{
    __this->add_PageProgressChanged(value);
}

// public generated void remove_PageProgressChanged(Fuse.Navigation.NavigationPageProgressHandler value) :853
void Navigation__remove_PageProgressChanged_fn(Navigation* __this, uDelegate* value)
{
    __this->remove_PageProgressChanged(value);
}

// private static void SetProgress(Fuse.Node n, double progress) :741
void Navigation__SetProgress_fn(::g::Fuse::Node* n, double* progress)
{
    Navigation::SetProgress(n, *progress);
}

// public virtual void Toggle(Fuse.Node page) :775
void Navigation__Toggle_fn(Navigation* __this, ::g::Fuse::Node* page)
{
}

// public static Fuse.Navigation.INavigation TryFind(Fuse.Node node) :791
void Navigation__TryFind_fn(::g::Fuse::Node* node, uObject** __retval)
{
    *__retval = Navigation::TryFind(node);
}

// public static Fuse.Node TryFindPage(Fuse.Node node) :804
void Navigation__TryFindPage_fn(::g::Fuse::Node* node, ::g::Fuse::Node** __retval)
{
    *__retval = Navigation::TryFindPage(node);
}

uSStrong< ::g::Fuse::PropertyHandle*> Navigation::_contextHandle_;
uSStrong< ::g::Fuse::PropertyHandle*> Navigation::_navigationHandler_;
uSStrong< ::g::Fuse::PropertyHandle*> Navigation::_navigationProgress_;
uSStrong< ::g::Fuse::PropertyHandle*> Navigation::_navigationStateHandler_;

// public Fuse.Node GetPage(int index) [instance] :945
::g::Fuse::Node* Navigation::GetPage(int index)
{
    ::g::Fuse::Node* ret3;
    int c = 0;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Node* x = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[15/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret3), ret3);

        if (IsPage(x))
        {
            if (c == index)
                return x;

            c++;
        }
    }

    return NULL;
}

// protected int GetPageIndex(Fuse.Node child) [instance] :976
int Navigation::GetPageIndex(::g::Fuse::Node* child)
{
    ::g::Fuse::Node* ret4;
    int c = 0;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
    {
        ::g::Fuse::Node* x = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[15/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret4), ret4);

        if (x == child)
            return c;

        if (IsPage(x))
            c++;
    }

    return -1;
}

// protected bool get_HasPages() [instance] :964
bool Navigation::HasPages()
{
    ::g::Fuse::Node* ret5;

    if (Owner() == NULL)
        return false;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
        if (IsPage((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[15/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret5), ret5)))
            return true;

    return false;
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :872
void Navigation::add_HistoryChanged(uDelegate* value)
{
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(HistoryChanged1, value), ::TYPES[38/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :872
void Navigation::remove_HistoryChanged(uDelegate* value)
{
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(HistoryChanged1, value), ::TYPES[38/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// protected bool IsPage(Fuse.Node n) [instance] :989
bool Navigation::IsPage(::g::Fuse::Node* n)
{
    return uPtr(n)->LayoutRole() == 0;
}

// public generated void add_Navigated(Fuse.Navigation.NavigatedHandler value) [instance] :861
void Navigation::add_Navigated(uDelegate* value)
{
    Navigated1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Navigated1, value), ::TYPES[39/*Fuse.Navigation.NavigatedHandler*/]);
}

// public generated void remove_Navigated(Fuse.Navigation.NavigatedHandler value) [instance] :861
void Navigation::remove_Navigated(uDelegate* value)
{
    Navigated1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Navigated1, value), ::TYPES[39/*Fuse.Navigation.NavigatedHandler*/]);
}

// protected void OnHistoryChanged() [instance] :874
void Navigation::OnHistoryChanged()
{
    if (::g::Uno::Delegate::op_Inequality(HistoryChanged1, NULL))
        uPtr(HistoryChanged1)->InvokeVoid(this);
}

// private void OnNavChildAdded(object s, Fuse.Node child) [instance] :914
void Navigation::OnNavChildAdded(uObject* s, ::g::Fuse::Node* child)
{
    OnPageCountChanged();
    OnChildAdded(s, child);
}

// private void OnNavChildRemoved(object s, Fuse.Node child) [instance] :920
void Navigation::OnNavChildRemoved(uObject* s, ::g::Fuse::Node* child)
{
    OnPageCountChanged();
    OnChildRemoved(s, child);
}

// protected void OnNavigated(Fuse.Node newElement) [instance] :863
void Navigation::OnNavigated(::g::Fuse::Node* newElement)
{
    uDelegate* handler = Navigated1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, this, (::g::Fuse::Navigation::NavigatedArgs*)::g::Fuse::Navigation::NavigatedArgs::New2(newElement));
}

// protected void OnPageCountChanged() [instance] :847
void Navigation::OnPageCountChanged()
{
    if (::g::Uno::Delegate::op_Inequality(PageCountChanged1, NULL))
        uPtr(PageCountChanged1)->InvokeVoid(this);
}

// protected void OnPageProgressChanged(double current, double prev) [instance] :855
void Navigation::OnPageProgressChanged(double current, double prev)
{
    if (::g::Uno::Delegate::op_Inequality(PageProgressChanged1, NULL))
        uPtr(PageProgressChanged1)->Invoke(3, this, uCRef(current), uCRef(prev));
}

// internal Fuse.Navigation.INavigationPanel get_Owner() [instance] :886
uObject* Navigation::Owner()
{
    return _panel;
}

// public int get_PageCount() [instance] :931
int Navigation::PageCount()
{
    ::g::Fuse::Node* ret6;

    if (Owner() == NULL)
        return 0;

    int c = 0;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Node* x = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[15/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret6), ret6);

        if (IsPage(x))
            c++;
    }

    return c;
}

// public generated void add_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) [instance] :845
void Navigation::add_PageCountChanged(uDelegate* value)
{
    PageCountChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageCountChanged1, value), ::TYPES[40/*Fuse.Navigation.NavigationPageCountHandler*/]);
}

// public generated void remove_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) [instance] :845
void Navigation::remove_PageCountChanged(uDelegate* value)
{
    PageCountChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageCountChanged1, value), ::TYPES[40/*Fuse.Navigation.NavigationPageCountHandler*/]);
}

// public generated void add_PageProgressChanged(Fuse.Navigation.NavigationPageProgressHandler value) [instance] :853
void Navigation::add_PageProgressChanged(uDelegate* value)
{
    PageProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageProgressChanged1, value), ::TYPES[41/*Fuse.Navigation.NavigationPageProgressHandler*/]);
}

// public generated void remove_PageProgressChanged(Fuse.Navigation.NavigationPageProgressHandler value) [instance] :853
void Navigation::remove_PageProgressChanged(uDelegate* value)
{
    PageProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageProgressChanged1, value), ::TYPES[41/*Fuse.Navigation.NavigationPageProgressHandler*/]);
}

// internal static Fuse.Navigation.INavigation GetLocalNavigation(Fuse.Node node) [static] :777
uObject* Navigation::GetLocalNavigation(::g::Fuse::Node* node)
{
    Navigation_typeof()->Init();
    ::g::Fuse::Behavior* ret1;
    ::g::Fuse::Behavior* ret2;
    uObject* n = Navigation::GetNavigationNavigation(node);

    if (n != NULL)
        return n;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(node)->Behaviors()), ::TYPES[28/*Uno.Collections.ICollection<Fuse.Behavior>*/])); i++)
        if (uIs((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(node)->Behaviors()), ::TYPES[30/*Uno.Collections.IList<Fuse.Behavior>*/]), uCRef<int>(i), &ret1), ret1), ::TYPES[29/*Fuse.Navigation.INavigation*/]))
            return (uObject*)(::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(node)->Behaviors()), ::TYPES[30/*Uno.Collections.IList<Fuse.Behavior>*/]), uCRef<int>(i), &ret2), ret2);

    return NULL;
}

// public static Fuse.Navigation.INavigation GetNavigationNavigation(Fuse.Node n) [static] :828
uObject* Navigation::GetNavigationNavigation(::g::Fuse::Node* n)
{
    Navigation_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(n)->Properties())->TryGet(Navigation::_contextHandle(), &v))
        return (uObject*)v;

    return NULL;
}

// private static void Invoke(object handler, object[] state) [static] :704
void Navigation::Invoke(uObject* handler, uArray* state)
{
    Navigation_typeof()->Init();
    uDelegate* h = uCast<uDelegate*>(handler, ::TYPES[31/*Fuse.Navigation.NavigationHandler*/]);
    ::g::Fuse::Node* n = uCast< ::g::Fuse::Node*>(uPtr(state)->Strong<uObject*>(0), ::TYPES[10/*Fuse.Node*/]);
    ::g::Fuse::Navigation::NavigationArgs* s = uCast< ::g::Fuse::Navigation::NavigationArgs*>(state->Strong<uObject*>(1), ::TYPES[32/*Fuse.Navigation.NavigationArgs*/]);
    uPtr(h)->Invoke(2, n, s);
}

// private static void InvokeState(object handler, object[] state) [static] :730
void Navigation::InvokeState(uObject* handler, uArray* state)
{
    Navigation_typeof()->Init();
    uDelegate* h = uCast<uDelegate*>(handler, ::TYPES[33/*Fuse.Navigation.NavigationStateHandler*/]);
    ::g::Fuse::Node* n = uCast< ::g::Fuse::Node*>(uPtr(state)->Strong<uObject*>(0), ::TYPES[10/*Fuse.Node*/]);
    ::g::Fuse::Navigation::NavigationStateArgs* s = uCast< ::g::Fuse::Navigation::NavigationStateArgs*>(state->Strong<uObject*>(1), ::TYPES[34/*Fuse.Navigation.NavigationStateArgs*/]);
    uPtr(h)->Invoke(2, n, s);
}

// internal static void NotifyNavigation(Fuse.Node n, Fuse.Navigation.NavigationArgs state) [static] :695
void Navigation::NotifyNavigation(::g::Fuse::Node* n, ::g::Fuse::Navigation::NavigationArgs* state)
{
    Navigation_typeof()->Init();

    if (n == NULL)
        return;

    Navigation::SetProgress(n, uPtr(state)->Progress());
    uPtr(uPtr(n)->Properties())->ForeachInList(Navigation::_navigationHandler(), uDelegate::New(::TYPES[35/*Uno.Action<object, object[]>*/], (void*)Navigation__Invoke_fn), uArray::Init<uObject*>(::TYPES[36/*object[]*/], 2, n, state));
}

// internal static void NotifyNavigationState(Fuse.Node n, Fuse.Navigation.NavigationStateArgs state) [static] :725
void Navigation::NotifyNavigationState(::g::Fuse::Node* n, ::g::Fuse::Navigation::NavigationStateArgs* state)
{
    Navigation_typeof()->Init();
    uPtr(uPtr(n)->Properties())->ForeachInList(Navigation::_navigationStateHandler(), uDelegate::New(::TYPES[35/*Uno.Action<object, object[]>*/], (void*)Navigation__InvokeState_fn), uArray::Init<uObject*>(::TYPES[36/*object[]*/], 2, n, state));
}

// private static void SetProgress(Fuse.Node n, double progress) [static] :741
void Navigation::SetProgress(::g::Fuse::Node* n, double progress)
{
    Navigation_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(Navigation::_navigationProgress(), uBox(::TYPES[2/*double*/], progress));
}

// public static Fuse.Navigation.INavigation TryFind(Fuse.Node node) [static] :791
uObject* Navigation::TryFind(::g::Fuse::Node* node)
{
    Navigation_typeof()->Init();

    while (node != NULL)
    {
        uObject* n = Navigation::GetLocalNavigation(node);

        if (n != NULL)
            return n;

        node = uPtr(node)->Parent();
    }

    return NULL;
}

// public static Fuse.Node TryFindPage(Fuse.Node node) [static] :804
::g::Fuse::Node* Navigation::TryFindPage(::g::Fuse::Node* node)
{
    Navigation_typeof()->Init();
    ::g::Fuse::Node* prev = node;

    while (node != NULL)
    {
        uObject* n = Navigation::GetLocalNavigation(node);

        if (n != NULL)
            return prev;

        prev = node;
        node = uPtr(node)->Parent();
    }

    return NULL;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(651)
// --------------------------------------------------------------------------

// internal sealed class NavigationArgs :651
// {
uType* NavigationArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NavigationArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.NavigationArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Fuse::Navigation::NavigationMode_typeof(), offsetof(::g::Fuse::Navigation::NavigationArgs, _Mode), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::NavigationArgs, _PreviousProgress), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::NavigationArgs, _Progress), 0);
    return type;
}

// public NavigationArgs(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) :657
void NavigationArgs__ctor_1_fn(NavigationArgs* __this, double* progress, double* prevProgress, int* mode)
{
    __this->ctor_1(*progress, *prevProgress, *mode);
}

// public generated Fuse.Navigation.NavigationMode get_Mode() :653
void NavigationArgs__get_Mode_fn(NavigationArgs* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// private generated void set_Mode(Fuse.Navigation.NavigationMode value) :653
void NavigationArgs__set_Mode_fn(NavigationArgs* __this, int* value)
{
    __this->Mode(*value);
}

// public NavigationArgs New(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) :657
void NavigationArgs__New2_fn(double* progress, double* prevProgress, int* mode, NavigationArgs** __retval)
{
    *__retval = NavigationArgs::New2(*progress, *prevProgress, *mode);
}

// public generated double get_PreviousProgress() :655
void NavigationArgs__get_PreviousProgress_fn(NavigationArgs* __this, double* __retval)
{
    *__retval = __this->PreviousProgress();
}

// private generated void set_PreviousProgress(double value) :655
void NavigationArgs__set_PreviousProgress_fn(NavigationArgs* __this, double* value)
{
    __this->PreviousProgress(*value);
}

// public generated double get_Progress() :654
void NavigationArgs__get_Progress_fn(NavigationArgs* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// private generated void set_Progress(double value) :654
void NavigationArgs__set_Progress_fn(NavigationArgs* __this, double* value)
{
    __this->Progress(*value);
}

// public NavigationArgs(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) [instance] :657
void NavigationArgs::ctor_1(double progress, double prevProgress, int mode)
{
    ctor_();
    Progress(progress);
    PreviousProgress(prevProgress);
    Mode(mode);
}

// public generated Fuse.Navigation.NavigationMode get_Mode() [instance] :653
int NavigationArgs::Mode()
{
    return _Mode;
}

// private generated void set_Mode(Fuse.Navigation.NavigationMode value) [instance] :653
void NavigationArgs::Mode(int value)
{
    _Mode = value;
}

// public generated double get_PreviousProgress() [instance] :655
double NavigationArgs::PreviousProgress()
{
    return _PreviousProgress;
}

// private generated void set_PreviousProgress(double value) [instance] :655
void NavigationArgs::PreviousProgress(double value)
{
    _PreviousProgress = value;
}

// public generated double get_Progress() [instance] :654
double NavigationArgs::Progress()
{
    return _Progress;
}

// private generated void set_Progress(double value) [instance] :654
void NavigationArgs::Progress(double value)
{
    _Progress = value;
}

// public NavigationArgs New(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) [static] :657
NavigationArgs* NavigationArgs::New2(double progress, double prevProgress, int mode)
{
    NavigationArgs* obj1 = (NavigationArgs*)uNew(NavigationArgs_typeof());
    obj1->ctor_1(progress, prevProgress, mode);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(143)
// --------------------------------------------------------------------------

// public enum NavigationEdge :143
uEnumType* NavigationEdge_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationEdge", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL,
        "None", 4LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(399)
// --------------------------------------------------------------------------

// public enum NavigationGotoMode :399
uEnumType* NavigationGotoMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationGotoMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Transition", 0LL,
        "Bypass", 2LL,
        "ClearForwardHistory", 4LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(666)
// --------------------------------------------------------------------------

// internal delegate void NavigationHandler(object sender, Fuse.Navigation.NavigationArgs state) :666
uDelegateType* NavigationHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Navigation::NavigationArgs_typeof());
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(644)
// --------------------------------------------------------------------------

// internal enum NavigationMode :644
uEnumType* NavigationMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Switch", 0LL,
        "Bypass", 1LL,
        "Seek", 2LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(407)
// --------------------------------------------------------------------------

// public delegate void NavigationPageCountHandler(object sender) :407
uDelegateType* NavigationPageCountHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationPageCountHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof());
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(408)
// --------------------------------------------------------------------------

// public delegate void NavigationPageProgressHandler(object sender, double Current, double Previous) :408
uDelegateType* NavigationPageProgressHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationPageProgressHandler", 3, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::Double_typeof(),
        ::g::Uno::Double_typeof());
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(1169)
// ---------------------------------------------------------------------------

// public static class NavigationPageProperty :1169
// {
// static NavigationPageProperty() :1169
static void NavigationPageProperty__cctor__fn(uType* __type)
{
    NavigationPageProperty::_pageProperty_ = ::g::Fuse::Properties::CreateHandle();
    NavigationPageProperty::RootedBindings_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[43/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>*/]));
}

uClassType* NavigationPageProperty_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Navigation.NavigationPageProperty", options);
    type->fp_cctor_ = NavigationPageProperty__cctor__fn;
    ::TYPES[43] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::IPageResourceBinding_typeof());
    ::TYPES[10] = ::g::Fuse::Node_typeof();
    ::TYPES[12] = uObject_typeof();
    ::TYPES[44] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Navigation::IPageResourceBinding_typeof());
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::NavigationPageProperty::_pageProperty_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::IPageResourceBinding_typeof()), (uintptr_t)&::g::Fuse::Navigation::NavigationPageProperty::RootedBindings_, uFieldFlagsStatic);
    return type;
}

// public static void SetNavigationPage(Fuse.Node n, Fuse.Node page) :1176
void NavigationPageProperty__SetNavigationPage_fn(::g::Fuse::Node* n, ::g::Fuse::Node* page)
{
    NavigationPageProperty::SetNavigationPage(n, page);
}

uSStrong< ::g::Fuse::PropertyHandle*> NavigationPageProperty::_pageProperty_;
uSStrong< ::g::Uno::Collections::List*> NavigationPageProperty::RootedBindings_;

// public static void SetNavigationPage(Fuse.Node n, Fuse.Node page) [static] :1176
void NavigationPageProperty::SetNavigationPage(::g::Fuse::Node* n, ::g::Fuse::Node* page)
{
    NavigationPageProperty_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret2;
    uPtr(uPtr(n)->Properties())->Set(NavigationPageProperty::_pageProperty(), page);

    for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(NavigationPageProperty::RootedBindings()), &ret2), ret2); enum1.MoveNext(::TYPES[44/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>.Enumerator*/]); )
    {
        uObject* binding = enum1.Current(::TYPES[44/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>.Enumerator*/]);
        ::g::Fuse::Navigation::IPageResourceBinding::UpdateSource(uInterface(uPtr(binding), ::g::Fuse::Navigation::IPageResourceBinding_typeof()));
    }
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(668)
// --------------------------------------------------------------------------

// internal enum NavigationState :668
uEnumType* NavigationState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Seek", 1LL,
        "Transition", 2LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(674)
// --------------------------------------------------------------------------

// internal sealed class NavigationStateArgs :674
// {
uType* NavigationStateArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(NavigationStateArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.NavigationStateArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->fp_ctor_ = (void*)NavigationStateArgs__New2_fn;
    type->SetFields(0,
        ::g::Fuse::Navigation::NavigationState_typeof(), offsetof(::g::Fuse::Navigation::NavigationStateArgs, _State), 0);
    return type;
}

// public generated NavigationStateArgs() :674
void NavigationStateArgs__ctor_1_fn(NavigationStateArgs* __this)
{
    __this->ctor_1();
}

// public generated NavigationStateArgs New() :674
void NavigationStateArgs__New2_fn(NavigationStateArgs** __retval)
{
    *__retval = NavigationStateArgs::New2();
}

// public generated Fuse.Navigation.NavigationState get_State() :676
void NavigationStateArgs__get_State_fn(NavigationStateArgs* __this, int* __retval)
{
    *__retval = __this->State();
}

// public generated void set_State(Fuse.Navigation.NavigationState value) :676
void NavigationStateArgs__set_State_fn(NavigationStateArgs* __this, int* value)
{
    __this->State(*value);
}

// public generated NavigationStateArgs() [instance] :674
void NavigationStateArgs::ctor_1()
{
    ctor_();
}

// public generated Fuse.Navigation.NavigationState get_State() [instance] :676
int NavigationStateArgs::State()
{
    return _State;
}

// public generated void set_State(Fuse.Navigation.NavigationState value) [instance] :676
void NavigationStateArgs::State(int value)
{
    _State = value;
}

// public generated NavigationStateArgs New() [static] :674
NavigationStateArgs* NavigationStateArgs::New2()
{
    NavigationStateArgs* obj1 = (NavigationStateArgs*)uNew(NavigationStateArgs_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(679)
// --------------------------------------------------------------------------

// internal delegate void NavigationStateHandler(object sender, Fuse.Navigation.NavigationStateArgs args) :679
uDelegateType* NavigationStateHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationStateHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Navigation::NavigationStateArgs_typeof());
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(1216)
// ---------------------------------------------------------------------------

// internal enum StructuredNavigation.NavigationStructure :1216
uEnumType* StructuredNavigation__NavigationStructure_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.StructuredNavigation.NavigationStructure", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Linear", 0LL,
        "Hierarchical", 1LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(2068)
// ---------------------------------------------------------------------------

// public abstract class NavigationTriggerAction :2068
// {
NavigationTriggerAction_type* NavigationTriggerAction_typeof()
{
    static uSStrong<NavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(NavigationTriggerAction);
    options.TypeSize = sizeof(NavigationTriggerAction_type);
    type = (NavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.NavigationTriggerAction", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))NavigationTriggerAction__Perform_fn;
    type->SetFields(7,
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::NavigationTriggerAction, _NavigationContext), 0);
    return type;
}

// public generated Fuse.Navigation.INavigation get_NavigationContext() :2070
void NavigationTriggerAction__get_NavigationContext_fn(NavigationTriggerAction* __this, uObject** __retval)
{
    *__retval = __this->NavigationContext();
}

// public generated void set_NavigationContext(Fuse.Navigation.INavigation value) :2070
void NavigationTriggerAction__set_NavigationContext_fn(NavigationTriggerAction* __this, uObject* value)
{
    __this->NavigationContext(value);
}

// protected override sealed void Perform(Fuse.Node n) :2072
void NavigationTriggerAction__Perform_fn(NavigationTriggerAction* __this, ::g::Fuse::Node* n)
{
    uObject* ind1 = __this->NavigationContext();
    uObject* ctx = (ind1 != NULL) ? ind1 : (uObject*)::g::Fuse::Navigation::Navigation::TryFind(n);

    if (ctx == NULL)
        return;

    __this->Perform1(ctx, n);
}

// public generated Fuse.Navigation.INavigation get_NavigationContext() [instance] :2070
uObject* NavigationTriggerAction::NavigationContext()
{
    return _NavigationContext;
}

// public generated void set_NavigationContext(Fuse.Navigation.INavigation value) [instance] :2070
void NavigationTriggerAction::NavigationContext(uObject* value)
{
    _NavigationContext = value;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(1593)
// ---------------------------------------------------------------------------

// internal sealed class NavigationTween :1593
// {
uType* NavigationTween_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(NavigationTween);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.NavigationTween", options);
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::NavigationTween, _duration), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::NavigationTween, _durationBack), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(::g::Fuse::Navigation::NavigationTween, _easing), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(::g::Fuse::Navigation::NavigationTween, _easingBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::NavigationTween, _hasDurationBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::NavigationTween, _hasEasingBack), 0);
    return type;
}

// public double get_Duration() :1609
void NavigationTween__get_Duration_fn(NavigationTween* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public void set_Duration(double value) :1610
void NavigationTween__set_Duration_fn(NavigationTween* __this, double* value)
{
    __this->Duration(*value);
}

// public double get_DurationBack() :1636
void NavigationTween__get_DurationBack_fn(NavigationTween* __this, double* __retval)
{
    *__retval = __this->DurationBack();
}

// public void set_DurationBack(double value) :1641
void NavigationTween__set_DurationBack_fn(NavigationTween* __this, double* value)
{
    __this->DurationBack(*value);
}

// public Fuse.Animations.Easing get_Easing() :1599
void NavigationTween__get_Easing_fn(NavigationTween* __this, int* __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) :1600
void NavigationTween__set_Easing_fn(NavigationTween* __this, int* value)
{
    __this->Easing(*value);
}

// public Fuse.Animations.Easing get_EasingBack() :1620
void NavigationTween__get_EasingBack_fn(NavigationTween* __this, int* __retval)
{
    *__retval = __this->EasingBack();
}

// public void set_EasingBack(Fuse.Animations.Easing value) :1625
void NavigationTween__set_EasingBack_fn(NavigationTween* __this, int* value)
{
    __this->EasingBack(*value);
}

// public double get_Duration() [instance] :1609
double NavigationTween::Duration()
{
    return _duration;
}

// public void set_Duration(double value) [instance] :1610
void NavigationTween::Duration(double value)
{
    _duration = value;
}

// public double get_DurationBack() [instance] :1636
double NavigationTween::DurationBack()
{
    if (_hasDurationBack)
        return _durationBack;

    return Duration();
}

// public void set_DurationBack(double value) [instance] :1641
void NavigationTween::DurationBack(double value)
{
    _durationBack = value;
    _hasDurationBack = true;
}

// public Fuse.Animations.Easing get_Easing() [instance] :1599
int NavigationTween::Easing()
{
    return _easing;
}

// public void set_Easing(Fuse.Animations.Easing value) [instance] :1600
void NavigationTween::Easing(int value)
{
    _easing = value;
}

// public Fuse.Animations.Easing get_EasingBack() [instance] :1620
int NavigationTween::EasingBack()
{
    if (_hasEasingBack)
        return _easingBack;

    return Easing();
}

// public void set_EasingBack(Fuse.Animations.Easing value) [instance] :1625
void NavigationTween::EasingBack(int value)
{
    _easingBack = value;
    _hasEasingBack = true;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/Internal/$.uno(58)
// ----------------------------------------------------------------------------------

// internal static class PlayerFactory :58
// {
uClassType* PlayerFactory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Navigation.PlayerFactory", options);
    ::TYPES[45] = ::g::Fuse::Navigation::NavigationTween_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[46] = ::g::Fuse::Navigation::INavigationAnimatorPlayer_typeof();
    return type;
}

// public static Fuse.Navigation.INavigationAnimatorPlayer Start(double targetProgress, double startProgress, Uno.Collections.IList<Fuse.Navigation.INavigationAnimator> animators, Uno.Action doneCallback, Uno.Action<double> progressSetterCallback, Fuse.Navigation.NavigationTween navigationTween) :61
void PlayerFactory__Start_fn(double* targetProgress, double* startProgress, uObject* animators, uDelegate* doneCallback, uDelegate* progressSetterCallback, ::g::Fuse::Navigation::NavigationTween* navigationTween, uObject** __retval)
{
    *__retval = PlayerFactory::Start(*targetProgress, *startProgress, animators, doneCallback, progressSetterCallback, navigationTween);
}

// public static Fuse.Navigation.INavigationAnimatorPlayer Start(double targetProgress, double startProgress, Uno.Collections.IList<Fuse.Navigation.INavigationAnimator> animators, Uno.Action doneCallback, Uno.Action<double> progressSetterCallback, Fuse.Navigation.NavigationTween navigationTween) [static] :61
uObject* PlayerFactory::Start(double targetProgress, double startProgress, uObject* animators, uDelegate* doneCallback, uDelegate* progressSetterCallback, ::g::Fuse::Navigation::NavigationTween* navigationTween)
{
    double duration = (targetProgress > startProgress) ? uPtr(navigationTween)->Duration() : uPtr(navigationTween)->DurationBack();
    int easing = (targetProgress > startProgress) ? navigationTween->Easing() : navigationTween->EasingBack();
    int playDirection = (targetProgress > startProgress) ? 0 : 1;
    double actualStartProgress = (playDirection == 0) ? startProgress : targetProgress;
    double actualTargetProgress = (playDirection == 0) ? targetProgress : startProgress;
    ::g::Fuse::Navigation::ProgressSpan* progressSpan = ::g::Fuse::Navigation::ProgressSpan::New1(actualStartProgress, actualTargetProgress);
    ::g::Fuse::Navigation::ProgressTimer* progressTimer = ::g::Fuse::Navigation::ProgressTimer::Start(duration, progressSpan, easing, playDirection);
    return (uObject*)::g::Fuse::Navigation::DefaultNavigationAnimatorPlayer::New1(progressTimer, animators, progressSetterCallback, doneCallback);
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/Internal/$.uno(184)
// -----------------------------------------------------------------------------------

// internal sealed class ProgressSpan :184
// {
uType* ProgressSpan_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ProgressSpan);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.ProgressSpan", options);
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::ProgressSpan, _From), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::ProgressSpan, _To), 0);
    return type;
}

// public ProgressSpan(double from, double to) :189
void ProgressSpan__ctor__fn(ProgressSpan* __this, double* from, double* to)
{
    __this->ctor_(*from, *to);
}

// public generated double get_From() :186
void ProgressSpan__get_From_fn(ProgressSpan* __this, double* __retval)
{
    *__retval = __this->From();
}

// private generated void set_From(double value) :186
void ProgressSpan__set_From_fn(ProgressSpan* __this, double* value)
{
    __this->From(*value);
}

// public ProgressSpan New(double from, double to) :189
void ProgressSpan__New1_fn(double* from, double* to, ProgressSpan** __retval)
{
    *__retval = ProgressSpan::New1(*from, *to);
}

// public generated double get_To() :187
void ProgressSpan__get_To_fn(ProgressSpan* __this, double* __retval)
{
    *__retval = __this->To();
}

// private generated void set_To(double value) :187
void ProgressSpan__set_To_fn(ProgressSpan* __this, double* value)
{
    __this->To(*value);
}

// public ProgressSpan(double from, double to) [instance] :189
void ProgressSpan::ctor_(double from, double to)
{
    From(from);
    To(to);
}

// public generated double get_From() [instance] :186
double ProgressSpan::From()
{
    return _From;
}

// private generated void set_From(double value) [instance] :186
void ProgressSpan::From(double value)
{
    _From = value;
}

// public generated double get_To() [instance] :187
double ProgressSpan::To()
{
    return _To;
}

// private generated void set_To(double value) [instance] :187
void ProgressSpan::To(double value)
{
    _To = value;
}

// public ProgressSpan New(double from, double to) [static] :189
ProgressSpan* ProgressSpan::New1(double from, double to)
{
    ProgressSpan* obj1 = (ProgressSpan*)uNew(ProgressSpan_typeof());
    obj1->ctor_(from, to);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/Internal/$.uno(196)
// -----------------------------------------------------------------------------------

// internal sealed class ProgressTimer :196
// {
uType* ProgressTimer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ProgressTimer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.ProgressTimer", options);
    ::TYPES[2] = ::g::Uno::Double_typeof();
    ::TYPES[47] = ::g::Fuse::Animations::EasingFunction_typeof();
    ::TYPES[48] = ::g::Uno::Float_typeof();
    ::TYPES[49] = ::g::Fuse::Time_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[5] = ::g::Fuse::Navigation::ProgressSpan_typeof();
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::ProgressTimer, _duration), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(::g::Fuse::Navigation::ProgressTimer, _easing), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::ProgressTimer, _elapsedTime), 0,
        ::g::Fuse::Navigation::ProgressSpan_typeof(), offsetof(::g::Fuse::Navigation::ProgressTimer, _progressSpan), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Navigation::ProgressTimer, _variant), 0);
    return type;
}

// private ProgressTimer(double duration, Fuse.Navigation.ProgressSpan progressSpan, Fuse.Animations.Easing easing, Fuse.Animations.AnimationVariant variant) :252
void ProgressTimer__ctor__fn(ProgressTimer* __this, double* duration, ::g::Fuse::Navigation::ProgressSpan* progressSpan, int* easing, int* variant)
{
    __this->ctor_(*duration, progressSpan, *easing, *variant);
}

// private double Ease(double progress) :273
void ProgressTimer__Ease_fn(ProgressTimer* __this, double* progress, double* __retval)
{
    *__retval = __this->Ease(*progress);
}

// public double get_EasedNormalizedProgress() :221
void ProgressTimer__get_EasedNormalizedProgress_fn(ProgressTimer* __this, double* __retval)
{
    *__retval = __this->EasedNormalizedProgress();
}

// public double get_EasedProgress() :237
void ProgressTimer__get_EasedProgress_fn(ProgressTimer* __this, double* __retval)
{
    *__retval = __this->EasedProgress();
}

// private ProgressTimer New(double duration, Fuse.Navigation.ProgressSpan progressSpan, Fuse.Animations.Easing easing, Fuse.Animations.AnimationVariant variant) :252
void ProgressTimer__New1_fn(double* duration, ::g::Fuse::Navigation::ProgressSpan* progressSpan, int* easing, int* variant, ProgressTimer** __retval)
{
    *__retval = ProgressTimer::New1(*duration, progressSpan, *easing, *variant);
}

// public Fuse.Navigation.ProgressSpan get_ProgressSpan() :242
void ProgressTimer__get_ProgressSpan_fn(ProgressTimer* __this, ::g::Fuse::Navigation::ProgressSpan** __retval)
{
    *__retval = __this->ProgressSpan();
}

// public static Fuse.Navigation.ProgressTimer Start(double duration, Fuse.Navigation.ProgressSpan progressSpan, Fuse.Animations.Easing easing, Fuse.Animations.AnimationVariant variant) :264
void ProgressTimer__Start_fn(double* duration, ::g::Fuse::Navigation::ProgressSpan* progressSpan, int* easing, int* variant, ProgressTimer** __retval)
{
    *__retval = ProgressTimer::Start(*duration, progressSpan, *easing, *variant);
}

// public double get_TimeLeft() :205
void ProgressTimer__get_TimeLeft_fn(ProgressTimer* __this, double* __retval)
{
    *__retval = __this->TimeLeft();
}

// public void Update() :278
void ProgressTimer__Update_fn(ProgressTimer* __this)
{
    __this->Update();
}

// public Fuse.Animations.AnimationVariant get_Variant() :200
void ProgressTimer__get_Variant_fn(ProgressTimer* __this, int* __retval)
{
    *__retval = __this->Variant();
}

// private ProgressTimer(double duration, Fuse.Navigation.ProgressSpan progressSpan, Fuse.Animations.Easing easing, Fuse.Animations.AnimationVariant variant) [instance] :252
void ProgressTimer::ctor_(double duration, ::g::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant)
{
    _duration = duration;
    _easing = easing;
    _variant = variant;
    _progressSpan = progressSpan;
}

// private double Ease(double progress) [instance] :273
double ProgressTimer::Ease(double progress)
{
    float ret2;
    return (double)(uPtr(::g::Fuse::Animations::EasingFunctions::FromEasing(_easing))->Invoke(&ret2, 1, uCRef((float)progress)), ret2);
}

// public double get_EasedNormalizedProgress() [instance] :221
double ProgressTimer::EasedNormalizedProgress()
{
    double progress = Ease(_elapsedTime / _duration);

    if (_variant == 1)
        progress = 1.0 - progress;

    return progress;
}

// public double get_EasedProgress() [instance] :237
double ProgressTimer::EasedProgress()
{
    return (EasedNormalizedProgress() * (uPtr(_progressSpan)->To() - uPtr(_progressSpan)->From())) + uPtr(_progressSpan)->From();
}

// public Fuse.Navigation.ProgressSpan get_ProgressSpan() [instance] :242
::g::Fuse::Navigation::ProgressSpan* ProgressTimer::ProgressSpan()
{
    return _progressSpan;
}

// public double get_TimeLeft() [instance] :205
double ProgressTimer::TimeLeft()
{
    return ::g::Uno::Math::Clamp(_duration - _elapsedTime, 0.0, _duration);
}

// public void Update() [instance] :278
void ProgressTimer::Update()
{
    _elapsedTime = ::g::Uno::Math::Min(_elapsedTime + ::g::Fuse::Time::FrameInterval(), _duration);
}

// public Fuse.Animations.AnimationVariant get_Variant() [instance] :200
int ProgressTimer::Variant()
{
    return _variant;
}

// private ProgressTimer New(double duration, Fuse.Navigation.ProgressSpan progressSpan, Fuse.Animations.Easing easing, Fuse.Animations.AnimationVariant variant) [static] :252
ProgressTimer* ProgressTimer::New1(double duration, ::g::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant)
{
    ProgressTimer* obj1 = (ProgressTimer*)uNew(ProgressTimer_typeof());
    obj1->ctor_(duration, progressSpan, easing, variant);
    return obj1;
}

// public static Fuse.Navigation.ProgressTimer Start(double duration, Fuse.Navigation.ProgressSpan progressSpan, Fuse.Animations.Easing easing, Fuse.Animations.AnimationVariant variant) [static] :264
ProgressTimer* ProgressTimer::Start(double duration, ::g::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant)
{
    return ProgressTimer::New1(duration, progressSpan, easing, variant);
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno(1214)
// ---------------------------------------------------------------------------

// public interfacemodifiers class StructuredNavigation :1214
// {
::g::Fuse::Navigation::Navigation_type* StructuredNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::Navigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(StructuredNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::Navigation_type);
    type = (::g::Fuse::Navigation::Navigation_type*)uClassType::New("Fuse.Navigation.StructuredNavigation", options);
    type->SetBase(::g::Fuse::Navigation::Navigation_typeof());
    type->fp_get_CanGoBack = (void(*)(::g::Fuse::Navigation::Navigation*, bool*))StructuredNavigation__get_CanGoBack_fn;
    type->fp_get_CanGoForward = (void(*)(::g::Fuse::Navigation::Navigation*, bool*))StructuredNavigation__get_CanGoForward_fn;
    type->fp_GoBack = (void(*)(::g::Fuse::Navigation::Navigation*))StructuredNavigation__GoBack_fn;
    type->fp_GoForward = (void(*)(::g::Fuse::Navigation::Navigation*))StructuredNavigation__GoForward_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::Navigation*, ::g::Fuse::Node*, int*))StructuredNavigation__Goto_fn;
    type->fp_OnChildAdded = (void(*)(::g::Fuse::Navigation::Navigation*, uObject*, ::g::Fuse::Node*))StructuredNavigation__OnChildAdded_fn;
    type->fp_OnChildRemoved = (void(*)(::g::Fuse::Navigation::Navigation*, uObject*, ::g::Fuse::Node*))StructuredNavigation__OnChildRemoved_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))StructuredNavigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))StructuredNavigation__OnUnrooted_fn;
    type->fp_get_PageProgress = (void(*)(::g::Fuse::Navigation::Navigation*, double*))StructuredNavigation__get_PageProgress_fn;
    type->interface0.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Navigation::Navigation__GetPage_fn;
    type->interface0.fp_Goto = (void(*)(uObject*, ::g::Fuse::Node*, int*))StructuredNavigation__Goto_fn;
    type->interface0.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::Navigation__Toggle_fn;
    type->interface0.fp_get_PageCount = (void(*)(uObject*, int*))::g::Fuse::Navigation::Navigation__get_PageCount_fn;
    type->interface0.fp_get_PageProgress = (void(*)(uObject*, double*))StructuredNavigation__get_PageProgress_fn;
    type->interface0.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_PageCountChanged_fn;
    type->interface0.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_PageCountChanged_fn;
    type->interface0.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_PageProgressChanged_fn;
    type->interface0.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_PageProgressChanged_fn;
    type->interface1.fp_GoForward = (void(*)(uObject*))StructuredNavigation__GoForward_fn;
    type->interface1.fp_GoBack = (void(*)(uObject*))StructuredNavigation__GoBack_fn;
    type->interface1.fp_get_CanGoBack = (void(*)(uObject*, bool*))StructuredNavigation__get_CanGoBack_fn;
    type->interface1.fp_get_CanGoForward = (void(*)(uObject*, bool*))StructuredNavigation__get_CanGoForward_fn;
    ::TYPES[2] = ::g::Uno::Double_typeof();
    ::TYPES[26] = ::g::Fuse::Behavior_typeof();
    ::TYPES[34] = ::g::Fuse::Navigation::NavigationStateArgs_typeof();
    ::TYPES[11] = ::g::Fuse::Navigation::Navigation_typeof();
    ::TYPES[13] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[14] = ::g::Fuse::Navigation::INavigationPanel_typeof();
    ::TYPES[15] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[16] = ::g::Uno::Bool_typeof();
    ::TYPES[50] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::INavigationAnimator_typeof());
    ::TYPES[51] = ::g::Fuse::Navigation::INavigationAnimator_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Navigation::INavigationAnimator_typeof());
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[52] = ::g::Uno::EventHandler_typeof();
    ::TYPES[53] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[9] = ::g::Uno::Action_typeof();
    ::TYPES[8] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Double_typeof());
    type->SetInterfaces(
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::Navigation_type, interface0),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::Navigation_type, interface1));
    type->SetFields(8,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _active), 0,
        ::g::Fuse::Navigation::INavigationAnimatorPlayer_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _currentAnimatorPlayer), 0,
        ::g::Fuse::Navigation::NavigationTween_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _navigationTween), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _progress), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _queueClearForwardHistory), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _reuseExistingNode), 0,
        StructuredNavigation__NavigationStructure_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _Mode), 0);
    return type;
}

// private void AnimatorDoneCallback() :1457
void StructuredNavigation__AnimatorDoneCallback_fn(StructuredNavigation* __this)
{
    __this->AnimatorDoneCallback();
}

// private Fuse.Node get_Back() :1573
void StructuredNavigation__get_Back_fn(StructuredNavigation* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Back();
}

// public override sealed bool get_CanGoBack() :1352
void StructuredNavigation__get_CanGoBack_fn(StructuredNavigation* __this, bool* __retval)
{
    return *__retval = __this->HasPages() && (__this->_active != __this->Back()), void();
}

// public override sealed bool get_CanGoForward() :1344
void StructuredNavigation__get_CanGoForward_fn(StructuredNavigation* __this, bool* __retval)
{
    return *__retval = __this->HasPages() && (__this->_active != __this->Front()), void();
}

// private void ClearForwardHistory() :1543
void StructuredNavigation__ClearForwardHistory_fn(StructuredNavigation* __this)
{
    __this->ClearForwardHistory();
}

// private void EnsureChildAnimationState() :1429
void StructuredNavigation__EnsureChildAnimationState_fn(StructuredNavigation* __this)
{
    __this->EnsureChildAnimationState();
}

// private Fuse.Node get_Front() :1578
void StructuredNavigation__get_Front_fn(StructuredNavigation* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Front();
}

// private Uno.Collections.IList<Fuse.Navigation.INavigationAnimator> GetAnimators() :48
void StructuredNavigation__GetAnimators_fn(StructuredNavigation* __this, uObject** __retval)
{
    *__retval = __this->GetAnimators();
}

// public override sealed void GoBack() :1364
void StructuredNavigation__GoBack_fn(StructuredNavigation* __this)
{
    if (__this->CanGoBack())
        __this->TransitionToChild(__this->Previous(), false);
}

// public override sealed void GoForward() :1358
void StructuredNavigation__GoForward_fn(StructuredNavigation* __this)
{
    if (__this->CanGoForward())
        __this->TransitionToChild(__this->Next(), false);
}

// public override sealed void Goto(Fuse.Node element, Fuse.Navigation.NavigationGotoMode mode) :1268
void StructuredNavigation__Goto_fn(StructuredNavigation* __this, ::g::Fuse::Node* element, int* mode)
{
    int mode_ = *mode;

    if (__this->Owner() == NULL)
    {
        __this->_active = element;
        return;
    }

    if (element == __this->_active)
        return;

    __this->GotoImpl(element, mode_);
}

// public void GotoImpl(Fuse.Node element, Fuse.Navigation.NavigationGotoMode mode) :1283
void StructuredNavigation__GotoImpl_fn(StructuredNavigation* __this, ::g::Fuse::Node* element, int* mode)
{
    __this->GotoImpl(element, *mode);
}

// private int get_MaxIndex() :1568
void StructuredNavigation__get_MaxIndex_fn(StructuredNavigation* __this, int* __retval)
{
    *__retval = __this->MaxIndex();
}

// internal generated Fuse.Navigation.StructuredNavigation.NavigationStructure get_Mode() :1224
void StructuredNavigation__get_Mode_fn(StructuredNavigation* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// internal generated void set_Mode(Fuse.Navigation.StructuredNavigation.NavigationStructure value) :1224
void StructuredNavigation__set_Mode_fn(StructuredNavigation* __this, int* value)
{
    __this->Mode(*value);
}

// private Fuse.Node get_Next() :1588
void StructuredNavigation__get_Next_fn(StructuredNavigation* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Next();
}

// protected override sealed void OnChildAdded(object s, Fuse.Node child) :1396
void StructuredNavigation__OnChildAdded_fn(StructuredNavigation* __this, uObject* s, ::g::Fuse::Node* child)
{
    if (__this->_active != NULL)
        __this->Progress((double)__this->GetPageIndex(__this->_active));

    if (__this->_active == NULL)
        __this->_active = child;

    __this->OnHistoryChanged();
    __this->EnsureChildAnimationState();
    ::g::Fuse::Navigation::Navigation__OnChildAdded_fn(__this, s, child);
}

// protected override sealed void OnChildRemoved(object s, Fuse.Node child) :1410
void StructuredNavigation__OnChildRemoved_fn(StructuredNavigation* __this, uObject* s, ::g::Fuse::Node* child)
{
    if (__this->_active == child)
        __this->_active = NULL;

    __this->OnHistoryChanged();
    ::g::Fuse::Navigation::DefaultNavigationAnimator* animator = ::g::Fuse::Navigation::DefaultNavigationAnimator::New1(0, child);
    animator->Update(0.0, 0.0);
    ::g::Fuse::Navigation::Navigation__OnChildRemoved_fn(__this, s, child);
}

// private void OnPlaced(object s, object a) :1258
void StructuredNavigation__OnPlaced_fn(StructuredNavigation* __this, uObject* s, uObject* a)
{
    __this->OnPlaced(s, a);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1231
void StructuredNavigation__OnRooted_fn(StructuredNavigation* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Navigation::Navigation__OnRooted_fn(__this, parentNode);

    if (__this->Owner() != NULL)
    {
        ::g::Fuse::Navigation::INavigationPanel::add_Update(uInterface(uPtr(__this->Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]), uDelegate::New(::TYPES[52/*Uno.EventHandler*/], (void*)StructuredNavigation__OnUpdate_fn, __this));
        ::g::Fuse::Navigation::INavigationPanel::add_Placed(uInterface(uPtr(__this->Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]), uDelegate::New(::TYPES[53/*Fuse.PlacedHandler*/], (void*)StructuredNavigation__OnPlaced_fn, __this));

        if ((__this->PageCount() > 0) && (__this->_active == NULL))
            __this->_active = __this->GetPage(0);

        if (__this->_active != NULL)
            __this->GotoImpl(__this->_active, 2);

        __this->EnsureChildAnimationState();
    }
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1248
void StructuredNavigation__OnUnrooted_fn(StructuredNavigation* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->Owner() != NULL)
    {
        ::g::Fuse::Navigation::INavigationPanel::remove_Update(uInterface(uPtr(__this->Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]), uDelegate::New(::TYPES[52/*Uno.EventHandler*/], (void*)StructuredNavigation__OnUpdate_fn, __this));
        ::g::Fuse::Navigation::INavigationPanel::remove_Placed(uInterface(uPtr(__this->Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]), uDelegate::New(::TYPES[53/*Fuse.PlacedHandler*/], (void*)StructuredNavigation__OnPlaced_fn, __this));
    }

    ::g::Fuse::Navigation::Navigation__OnUnrooted_fn(__this, parentNode);
}

// private void OnUpdate(object sender, Uno.EventArgs args) :1423
void StructuredNavigation__OnUpdate_fn(StructuredNavigation* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnUpdate(sender, args);
}

// public override sealed double get_PageProgress() :1265
void StructuredNavigation__get_PageProgress_fn(StructuredNavigation* __this, double* __retval)
{
    return *__retval = __this->Progress(), void();
}

// private Fuse.Node get_Previous() :1583
void StructuredNavigation__get_Previous_fn(StructuredNavigation* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Previous();
}

// public double get_Progress() :1446
void StructuredNavigation__get_Progress_fn(StructuredNavigation* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// private void set_Progress(double value) :1447
void StructuredNavigation__set_Progress_fn(StructuredNavigation* __this, double* value)
{
    __this->Progress(*value);
}

// private void ProgressSetterCallback(double newProgress) :1475
void StructuredNavigation__ProgressSetterCallback_fn(StructuredNavigation* __this, double* newProgress)
{
    __this->ProgressSetterCallback(*newProgress);
}

// private void TransitionToChild(Fuse.Node element, [bool bypass]) :1311
void StructuredNavigation__TransitionToChild_fn(StructuredNavigation* __this, ::g::Fuse::Node* element, bool* bypass)
{
    __this->TransitionToChild(element, *bypass);
}

// private void AnimatorDoneCallback() [instance] :1457
void StructuredNavigation::AnimatorDoneCallback()
{
    ::g::Fuse::Navigation::NavigationStateArgs* collection3;
    ::g::Fuse::Navigation::INavigationAnimatorPlayer::EnsureAtEnd(uInterface(uPtr(_currentAnimatorPlayer), ::TYPES[46/*Fuse.Navigation.INavigationAnimatorPlayer*/]));
    Progress((double)GetPageIndex(_active));
    _currentAnimatorPlayer = NULL;

    if (_queueClearForwardHistory)
    {
        ClearForwardHistory();
        _queueClearForwardHistory = false;
    }

    OnNavigated(_active);
    OnHistoryChanged();
    ::g::Fuse::Navigation::Navigation::NotifyNavigationState(ParentNode(), (collection3 = ::g::Fuse::Navigation::NavigationStateArgs::New2(), uPtr(collection3)->State(0), 0, collection3));
}

// private Fuse.Node get_Back() [instance] :1573
::g::Fuse::Node* StructuredNavigation::Back()
{
    return (PageCount() > 0) ? (::g::Fuse::Node*)GetPage(MaxIndex()) : NULL;
}

// private void ClearForwardHistory() [instance] :1543
void StructuredNavigation::ClearForwardHistory()
{
    if (HasPages() && (_active != Front()))
    {
        int target = GetPageIndex(_active);

        for (int i = target - 1; i >= 0; i--)
            ::g::Fuse::Navigation::INavigationPanel::RemoveChild(uInterface(uPtr(Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]), GetPage(i));
    }

    OnHistoryChanged();
}

// private void EnsureChildAnimationState() [instance] :1429
void StructuredNavigation::EnsureChildAnimationState()
{
    ::g::Fuse::Node* ret5;
    int i = 0;

    for (int t = 0; t < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Node>*/])); t++)
    {
        ::g::Fuse::Node* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[15/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(t), &ret5), ret5);

        if (!IsPage(c))
            continue;

        double p = Progress() - (double)(i++);
        ::g::Fuse::Navigation::Navigation::NotifyNavigation(c, ::g::Fuse::Navigation::NavigationArgs::New2(p, p, 1));
    }
}

// private Fuse.Node get_Front() [instance] :1578
::g::Fuse::Node* StructuredNavigation::Front()
{
    return (PageCount() > 0) ? (::g::Fuse::Node*)GetPage(0) : NULL;
}

// private Uno.Collections.IList<Fuse.Navigation.INavigationAnimator> GetAnimators() [instance] :48
uObject* StructuredNavigation::GetAnimators()
{
    int pc = PageCount();
    ::g::Uno::Collections::List* animators = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[50/*Uno.Collections.List<Fuse.Navigation.INavigationAnimator>*/], pc);

    for (int i = 0; i < pc; i++)
        ::g::Uno::Collections::List__Add_fn(animators, (uObject*)::g::Fuse::Navigation::DefaultNavigationAnimator::New1(i, GetPage(i)));

    return (uObject*)animators;
}

// public void GotoImpl(Fuse.Node element, Fuse.Navigation.NavigationGotoMode mode) [instance] :1283
void StructuredNavigation::GotoImpl(::g::Fuse::Node* element, int mode)
{
    bool ret6;

    if (!(::g::Uno::Collections::ICollection::Contains_ex(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Node>*/]), element, &ret6), ret6))
    {
        if (Mode() == 1)
            ClearForwardHistory();

        ::g::Fuse::Navigation::INavigationPanel::AddChildAt(uInterface(uPtr(Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]), 0, element);
    }
    else if (!_reuseExistingNode)
    {
        if (Mode() == 1)
        {
            double diff = Progress() - (double)GetPageIndex(_active);
            ::g::Fuse::Navigation::INavigationPanel::RemoveChild(uInterface(uPtr(Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]), element);
            Progress((double)GetPageIndex(_active) + diff);
            ClearForwardHistory();
            ::g::Fuse::Navigation::INavigationPanel::AddChildAt(uInterface(uPtr(Owner()), ::TYPES[14/*Fuse.Navigation.INavigationPanel*/]), 0, element);
        }
    }

    TransitionToChild(element, (mode & 2) == 2);

    if ((mode & 4) == 4)
        _queueClearForwardHistory = true;

    OnHistoryChanged();
}

// private int get_MaxIndex() [instance] :1568
int StructuredNavigation::MaxIndex()
{
    return PageCount() - 1;
}

// internal generated Fuse.Navigation.StructuredNavigation.NavigationStructure get_Mode() [instance] :1224
int StructuredNavigation::Mode()
{
    return _Mode;
}

// internal generated void set_Mode(Fuse.Navigation.StructuredNavigation.NavigationStructure value) [instance] :1224
void StructuredNavigation::Mode(int value)
{
    _Mode = value;
}

// private Fuse.Node get_Next() [instance] :1588
::g::Fuse::Node* StructuredNavigation::Next()
{
    return GetPage(GetPageIndex(_active) - 1);
}

// private void OnPlaced(object s, object a) [instance] :1258
void StructuredNavigation::OnPlaced(uObject* s, uObject* a)
{
    EnsureChildAnimationState();
}

// private void OnUpdate(object sender, Uno.EventArgs args) [instance] :1423
void StructuredNavigation::OnUpdate(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (_currentAnimatorPlayer != NULL)
        ::g::Fuse::Navigation::INavigationAnimatorPlayer::Update(uInterface(uPtr(_currentAnimatorPlayer), ::TYPES[46/*Fuse.Navigation.INavigationAnimatorPlayer*/]));
}

// private Fuse.Node get_Previous() [instance] :1583
::g::Fuse::Node* StructuredNavigation::Previous()
{
    return GetPage(GetPageIndex(_active) + 1);
}

// public double get_Progress() [instance] :1446
double StructuredNavigation::Progress()
{
    return _progress;
}

// private void set_Progress(double value) [instance] :1447
void StructuredNavigation::Progress(double value)
{
    double prev = _progress;
    _progress = value;
    OnPageProgressChanged(_progress, prev);
}

// private void ProgressSetterCallback(double newProgress) [instance] :1475
void StructuredNavigation::ProgressSetterCallback(double newProgress)
{
    Progress(newProgress);
}

// private void TransitionToChild(Fuse.Node element, [bool bypass]) [instance] :1311
void StructuredNavigation::TransitionToChild(::g::Fuse::Node* element, bool bypass)
{
    ::g::Fuse::Navigation::NavigationStateArgs* collection1;
    ::g::Fuse::Navigation::NavigationStateArgs* collection2;
    double targetProgress = (double)GetPageIndex(element);
    _active = element;

    if (bypass)
    {
        Progress(targetProgress);
        EnsureChildAnimationState();
        return;
    }

    if ((Progress() == targetProgress) && (_currentAnimatorPlayer == NULL))
    {
        ::g::Fuse::Navigation::Navigation::NotifyNavigationState(ParentNode(), (collection1 = ::g::Fuse::Navigation::NavigationStateArgs::New2(), uPtr(collection1)->State(0), 0, collection1));
        return;
    }

    ::g::Fuse::Navigation::Navigation::NotifyNavigationState(ParentNode(), (collection2 = ::g::Fuse::Navigation::NavigationStateArgs::New2(), uPtr(collection2)->State(2), 2, collection2));
    _currentAnimatorPlayer = ::g::Fuse::Navigation::PlayerFactory::Start(targetProgress, Progress(), GetAnimators(), uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)StructuredNavigation__AnimatorDoneCallback_fn, this), uDelegate::New(::TYPES[8/*Uno.Action<double>*/], (void*)StructuredNavigation__ProgressSetterCallback_fn, this), _navigationTween);
}
// }

}}} // ::g::Fuse::Navigation
