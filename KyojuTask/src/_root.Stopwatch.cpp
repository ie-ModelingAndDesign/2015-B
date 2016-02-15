// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/Stopwatch.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Stopwatch.h>
#include <_root.StopwatchTickHandler.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[4];
static uType* TYPES[8];

namespace g{

// public sealed class Stopwatch :92
// {
::g::Fuse::Scripting::NativeModule_type* Stopwatch_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Stopwatch);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Stopwatch", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_ctor_ = (void*)Stopwatch__New2_fn;
    type->interface0.fp_get_Code = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_Code_fn;
    type->interface0.fp_get_FileName = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_FileName_fn;
    type->interface0.fp_get_LineNumberOffset = (void(*)(uObject*, int*))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleget_LineNumberOffset_fn;
    type->interface0.fp_Evaluate = (void(*)(uObject*, uString*, ::g::Fuse::Scripting::Context*, uObject**))::g::Fuse::Scripting::NativeModule__Evaluate_fn;
    ::STRINGS[0] = uString::Const("Start");
    ::STRINGS[1] = uString::Const("Stop");
    ::STRINGS[2] = uString::Const("Pause");
    ::STRINGS[3] = uString::Const("GetSeconds");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[5] = ::g::Uno::Action_typeof();
    ::TYPES[6] = ::g::Uno::Delegate_typeof();
    ::TYPES[7] = ::g::StopwatchTickHandler_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IModule_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0));
    type->SetFields(3,
        ::g::Uno::Double_typeof(), offsetof(::g::Stopwatch, _ellapsedSeconds), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Stopwatch, _isPaused), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Stopwatch, _lastTick), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Stopwatch, _subscribedToUpdate), 0,
        ::g::StopwatchTickHandler_typeof(), offsetof(::g::Stopwatch, Ticked1), 0);
    return type;
}

// public Stopwatch() :94
void Stopwatch__ctor_1_fn(Stopwatch* __this)
{
    __this->ctor_1();
}

// public double get_EllapsedSeconds() :107
void Stopwatch__get_EllapsedSeconds_fn(Stopwatch* __this, double* __retval)
{
    *__retval = __this->EllapsedSeconds();
}

// public object GetSeconds(Fuse.Scripting.Context c, object[] args) :110
void Stopwatch__GetSeconds_fn(Stopwatch* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->GetSeconds(c, args);
}

// public Stopwatch New() :94
void Stopwatch__New2_fn(Stopwatch** __retval)
{
    *__retval = Stopwatch::New2();
}

// public void Pause() :179
void Stopwatch__Pause_fn(Stopwatch* __this)
{
    __this->Pause();
}

// public object Pause(Fuse.Scripting.Context c, object[] args) :128
void Stopwatch__Pause1_fn(Stopwatch* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->Pause1(c, args);
}

// public void Start() :149
void Stopwatch__Start_fn(Stopwatch* __this)
{
    __this->Start();
}

// public object Start(Fuse.Scripting.Context c, object[] args) :116
void Stopwatch__Start1_fn(Stopwatch* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->Start1(c, args);
}

// public void Stop() :166
void Stopwatch__Stop_fn(Stopwatch* __this)
{
    __this->Stop();
}

// public object Stop(Fuse.Scripting.Context c, object[] args) :122
void Stopwatch__Stop1_fn(Stopwatch* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->Stop1(c, args);
}

// private void Tick() :139
void Stopwatch__Tick_fn(Stopwatch* __this)
{
    __this->Tick();
}

// public generated void add_Ticked(StopwatchTickHandler value) :102
void Stopwatch__add_Ticked_fn(Stopwatch* __this, uDelegate* value)
{
    __this->add_Ticked(value);
}

// public generated void remove_Ticked(StopwatchTickHandler value) :102
void Stopwatch__remove_Ticked_fn(Stopwatch* __this, uDelegate* value)
{
    __this->remove_Ticked(value);
}

// public Stopwatch() [instance] :94
void Stopwatch::ctor_1()
{
    _lastTick = 0.0;
    ctor_(uArray::New(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 0));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[0/*"Start"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Stopwatch__Start1_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[1/*"Stop"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Stopwatch__Stop1_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[2/*"Pause"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Stopwatch__Pause1_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[3/*"GetSeconds"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Stopwatch__GetSeconds_fn, this)));
}

// public double get_EllapsedSeconds() [instance] :107
double Stopwatch::EllapsedSeconds()
{
    return _ellapsedSeconds;
}

// public object GetSeconds(Fuse.Scripting.Context c, object[] args) [instance] :110
uObject* Stopwatch::GetSeconds(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uObject* ret = uBox(::g::Uno::Double_typeof(), EllapsedSeconds());
    return ret;
}

// public void Pause() [instance] :179
void Stopwatch::Pause()
{
    _isPaused = true;
}

// public object Pause(Fuse.Scripting.Context c, object[] args) [instance] :128
uObject* Stopwatch::Pause1(::g::Fuse::Scripting::Context* c, uArray* args)
{
    Pause();
    return NULL;
}

// public void Start() [instance] :149
void Stopwatch::Start()
{
    if (_isPaused)
    {
        _lastTick = ::g::Uno::Diagnostics::Clock::GetSeconds();
        _isPaused = false;
        return;
    }

    _lastTick = ::g::Uno::Diagnostics::Clock::GetSeconds();

    if (!_subscribedToUpdate)
    {
        ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)Stopwatch__Tick_fn, this), 0);
        _subscribedToUpdate = true;
    }
}

// public object Start(Fuse.Scripting.Context c, object[] args) [instance] :116
uObject* Stopwatch::Start1(::g::Fuse::Scripting::Context* c, uArray* args)
{
    Start();
    return NULL;
}

// public void Stop() [instance] :166
void Stopwatch::Stop()
{
    if (_subscribedToUpdate)
    {
        ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)Stopwatch__Tick_fn, this), 0);
        _subscribedToUpdate = false;
    }

    _isPaused = false;
    _ellapsedSeconds = 0.0;

    if (::g::Uno::Delegate::op_Inequality(Ticked1, NULL))
        uPtr(Ticked1)->InvokeVoid();
}

// public object Stop(Fuse.Scripting.Context c, object[] args) [instance] :122
uObject* Stopwatch::Stop1(::g::Fuse::Scripting::Context* c, uArray* args)
{
    Stop();
    return NULL;
}

// private void Tick() [instance] :139
void Stopwatch::Tick()
{
    if (::g::Uno::Delegate::op_Inequality(Ticked1, NULL) && !_isPaused)
    {
        _ellapsedSeconds = (_ellapsedSeconds + (::g::Uno::Diagnostics::Clock::GetSeconds() - _lastTick));
        _lastTick = ::g::Uno::Diagnostics::Clock::GetSeconds();
        uPtr(Ticked1)->InvokeVoid();
    }
}

// public generated void add_Ticked(StopwatchTickHandler value) [instance] :102
void Stopwatch::add_Ticked(uDelegate* value)
{
    Ticked1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Ticked1, value), ::TYPES[7/*StopwatchTickHandler*/]);
}

// public generated void remove_Ticked(StopwatchTickHandler value) [instance] :102
void Stopwatch::remove_Ticked(uDelegate* value)
{
    Ticked1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Ticked1, value), ::TYPES[7/*StopwatchTickHandler*/]);
}

// public Stopwatch New() [static] :94
Stopwatch* Stopwatch::New2()
{
    Stopwatch* obj1 = (Stopwatch*)uNew(Stopwatch_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
