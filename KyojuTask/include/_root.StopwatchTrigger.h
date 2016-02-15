// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/Stopwatch.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Trigger.h>
namespace g{struct Stopwatch;}
namespace g{struct StopwatchTrigger;}

namespace g{

// public abstract class StopwatchTrigger :9
// {
struct StopwatchTrigger_type : ::g::Fuse::Triggers::Trigger_type
{
    void(*fp_Time)(::g::StopwatchTrigger*, double*);
};

StopwatchTrigger_type* StopwatchTrigger_typeof();
void StopwatchTrigger__ctor_2_fn(StopwatchTrigger* __this);
void StopwatchTrigger__get_Stopwatch_fn(StopwatchTrigger* __this, ::g::Stopwatch** __retval);
void StopwatchTrigger__set_Stopwatch_fn(StopwatchTrigger* __this, ::g::Stopwatch* value);
void StopwatchTrigger__Tick_fn(StopwatchTrigger* __this);

struct StopwatchTrigger : ::g::Fuse::Triggers::Trigger
{
    double _factor;
    uStrong< ::g::Stopwatch*> _stopwatch;

    void ctor_2();
    ::g::Stopwatch* Stopwatch();
    void Stopwatch(::g::Stopwatch* value);
    void Tick();
    double Time() { double __retval; return (((StopwatchTrigger_type*)__type)->fp_Time)(this, &__retval), __retval; }
};
// }

} // ::g
