// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/Stopwatch.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Stopwatch.h>
#include <_root.StopwatchTickHandler.h>
#include <_root.StopwatchTrigger.h>
#include <Fuse.Behavior.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Math.h>
static uType* TYPES[3];

namespace g{

// public abstract class StopwatchTrigger :9
// {
StopwatchTrigger_type* StopwatchTrigger_typeof()
{
    static uSStrong<StopwatchTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(StopwatchTrigger);
    options.TypeSize = sizeof(StopwatchTrigger_type);
    type = (StopwatchTrigger_type*)uClassType::New("StopwatchTrigger", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    ::TYPES[0] = ::g::Fuse::Behavior_typeof();
    ::TYPES[1] = ::g::Stopwatch_typeof();
    ::TYPES[2] = ::g::StopwatchTickHandler_typeof();
    type->SetFields(15,
        ::g::Uno::Double_typeof(), offsetof(::g::StopwatchTrigger, _factor), 0,
        ::g::Stopwatch_typeof(), offsetof(::g::StopwatchTrigger, _stopwatch), 0);
    return type;
}

// protected generated StopwatchTrigger() :9
void StopwatchTrigger__ctor_2_fn(StopwatchTrigger* __this)
{
    __this->ctor_2();
}

// public Stopwatch get_Stopwatch() :14
void StopwatchTrigger__get_Stopwatch_fn(StopwatchTrigger* __this, ::g::Stopwatch** __retval)
{
    *__retval = __this->Stopwatch();
}

// public void set_Stopwatch(Stopwatch value) :15
void StopwatchTrigger__set_Stopwatch_fn(StopwatchTrigger* __this, ::g::Stopwatch* value)
{
    __this->Stopwatch(value);
}

// private void Tick() :24
void StopwatchTrigger__Tick_fn(StopwatchTrigger* __this)
{
    __this->Tick();
}

// protected generated StopwatchTrigger() [instance] :9
void StopwatchTrigger::ctor_2()
{
    _factor = 1.0;
    ctor_1();
}

// public Stopwatch get_Stopwatch() [instance] :14
::g::Stopwatch* StopwatchTrigger::Stopwatch()
{
    return _stopwatch;
}

// public void set_Stopwatch(Stopwatch value) [instance] :15
void StopwatchTrigger::Stopwatch(::g::Stopwatch* value)
{
    if (_stopwatch != NULL)
        uPtr(_stopwatch)->remove_Ticked(uDelegate::New(::TYPES[2/*StopwatchTickHandler*/], (void*)StopwatchTrigger__Tick_fn, this));

    _stopwatch = value;
    uPtr(_stopwatch)->add_Ticked(uDelegate::New(::TYPES[2/*StopwatchTickHandler*/], (void*)StopwatchTrigger__Tick_fn, this));
}

// private void Tick() [instance] :24
void StopwatchTrigger::Tick()
{
    double time = ::g::Uno::Math::Mod(Time(), 1.0) * _factor;

    if (IsRooted())
        Seek(time);
}
// }

} // ::g
