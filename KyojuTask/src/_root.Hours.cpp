// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/Stopwatch.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Hours.h>
#include <_root.Stopwatch.h>
#include <Uno.Double.h>
static uType* TYPES[2];

namespace g{

// public sealed class Hours :37
// {
::g::StopwatchTrigger_type* Hours_typeof()
{
    static uSStrong< ::g::StopwatchTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(Hours);
    options.TypeSize = sizeof(::g::StopwatchTrigger_type);
    type = (::g::StopwatchTrigger_type*)uClassType::New("Hours", options);
    type->SetBase(::g::StopwatchTrigger_typeof());
    type->fp_Time = (void(*)(::g::StopwatchTrigger*, double*))Hours__Time_fn;
    ::TYPES[0] = ::g::Stopwatch_typeof();
    ::TYPES[1] = ::g::StopwatchTrigger_typeof();
    type->SetFields(17);
    return type;
}

// protected override sealed double Time() :39
void Hours__Time_fn(Hours* __this, double* __retval)
{
    return *__retval = uPtr(__this->Stopwatch())->EllapsedSeconds() / 3600.0, void();
}
// }

} // ::g
