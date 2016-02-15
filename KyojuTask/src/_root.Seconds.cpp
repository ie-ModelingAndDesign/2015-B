// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/Stopwatch.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Seconds.h>
#include <_root.Stopwatch.h>
#include <Uno.Double.h>
static uType* TYPES[2];

namespace g{

// public sealed class Seconds :53
// {
::g::StopwatchTrigger_type* Seconds_typeof()
{
    static uSStrong< ::g::StopwatchTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(Seconds);
    options.TypeSize = sizeof(::g::StopwatchTrigger_type);
    type = (::g::StopwatchTrigger_type*)uClassType::New("Seconds", options);
    type->SetBase(::g::StopwatchTrigger_typeof());
    type->fp_ctor_ = (void*)Seconds__New1_fn;
    type->fp_Time = (void(*)(::g::StopwatchTrigger*, double*))Seconds__Time_fn;
    ::TYPES[0] = ::g::Stopwatch_typeof();
    ::TYPES[1] = ::g::StopwatchTrigger_typeof();
    type->SetFields(17);
    return type;
}

// public generated Seconds() :53
void Seconds__ctor_3_fn(Seconds* __this)
{
    __this->ctor_3();
}

// public generated Seconds New() :53
void Seconds__New1_fn(Seconds** __retval)
{
    *__retval = Seconds::New1();
}

// protected override sealed double Time() :55
void Seconds__Time_fn(Seconds* __this, double* __retval)
{
    return *__retval = uPtr(__this->Stopwatch())->EllapsedSeconds(), void();
}

// public generated Seconds() [instance] :53
void Seconds::ctor_3()
{
    ctor_2();
}

// public generated Seconds New() [static] :53
Seconds* Seconds::New1()
{
    Seconds* obj1 = (Seconds*)uNew(Seconds_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
