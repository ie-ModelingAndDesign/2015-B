// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Node.h>
#include <Fuse.Vibration.Vibrate.h>
#include <Fuse.Vibration.Vibration.h>
#include <iOS.AudioToolbox.Functions.h>
#include <Uno.Double.h>
#include <Uno.UInt.h>

namespace g{
namespace Fuse{
namespace Vibration{

// ../../../../usr/local/share/uno/Packages/Fuse.Vibration/0.24.6/$.uno(46)
// ------------------------------------------------------------------------

// public sealed class Vibrate :46
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Vibrate_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Vibrate);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Vibration.Vibrate", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Vibrate__Perform_fn;
    type->SetFields(7,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Vibration::Vibrate, _Duration), 0);
    return type;
}

// public generated double get_Duration() :48
void Vibrate__get_Duration_fn(Vibrate* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public generated void set_Duration(double value) :48
void Vibrate__set_Duration_fn(Vibrate* __this, double* value)
{
    __this->Duration(*value);
}

// protected override sealed void Perform(Fuse.Node target) :50
void Vibrate__Perform_fn(Vibrate* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Vibration::Vibration::Vibrate(__this->Duration());
}

// public generated double get_Duration() [instance] :48
double Vibrate::Duration()
{
    return _Duration;
}

// public generated void set_Duration(double value) [instance] :48
void Vibrate::Duration(double value)
{
    _Duration = value;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Vibration/0.24.6/$.uno(13)
// ------------------------------------------------------------------------

// public static class Vibration :13
// {
uClassType* Vibration_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Vibration.Vibration", options);
    return type;
}

// public static void Vibrate(double seconds) :15
void Vibration__Vibrate_fn(double* seconds)
{
    Vibration::Vibrate(*seconds);
}

// public static void Vibrate(double seconds) [static] :15
void Vibration::Vibrate(double seconds)
{
    ::g::iOS::AudioToolbox::Functions::AudioServicesPlayAlertSound(4095U);
}
// }

}}} // ::g::Fuse::Vibration
