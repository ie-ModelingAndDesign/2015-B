// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/Stopwatch.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Minutes.h>
#include <_root.Stopwatch.h>
#include <Uno.Double.h>
static uType* TYPES[2];

namespace g{

// public sealed class Minutes :45
// {
::g::StopwatchTrigger_type* Minutes_typeof()
{
    static uSStrong< ::g::StopwatchTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(Minutes);
    options.TypeSize = sizeof(::g::StopwatchTrigger_type);
    type = (::g::StopwatchTrigger_type*)uClassType::New("Minutes", options);
    type->SetBase(::g::StopwatchTrigger_typeof());
    type->fp_Time = (void(*)(::g::StopwatchTrigger*, double*))Minutes__Time_fn;
    ::TYPES[0] = ::g::Stopwatch_typeof();
    ::TYPES[1] = ::g::StopwatchTrigger_typeof();
    type->SetFields(17);
    return type;
}

// protected override sealed double Time() :47
void Minutes__Time_fn(Minutes* __this, double* __retval)
{
    return *__retval = uPtr(__this->Stopwatch())->EllapsedSeconds() / 60.0, void();
}
// }

} // ::g
