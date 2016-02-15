// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/functions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <AudioToolbox/AudioToolbox.h>
#include <iOS.AudioToolbox.Functions.h>
#include <Uno.UInt.h>

namespace g{
namespace iOS{
namespace AudioToolbox{

// public static class Functions :376
// {
uClassType* Functions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("iOS.AudioToolbox.Functions", options);
    return type;
}

// public static void AudioServicesPlayAlertSound(uint inSystemSoundID) :562
void Functions__AudioServicesPlayAlertSound_fn(uint32_t* inSystemSoundID)
{
    Functions::AudioServicesPlayAlertSound(*inSystemSoundID);
}

// public static void AudioServicesPlayAlertSound(uint inSystemSoundID) [static] :562
void Functions::AudioServicesPlayAlertSound(uint32_t inSystemSoundID)
{
    ::AudioServicesPlayAlertSound((UInt32)inSystemSoundID);
}
// }

}}} // ::g::iOS::AudioToolbox
