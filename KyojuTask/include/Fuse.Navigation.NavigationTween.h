// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationTween;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal sealed class NavigationTween :1593
// {
uType* NavigationTween_typeof();
void NavigationTween__get_Duration_fn(NavigationTween* __this, double* __retval);
void NavigationTween__set_Duration_fn(NavigationTween* __this, double* value);
void NavigationTween__get_DurationBack_fn(NavigationTween* __this, double* __retval);
void NavigationTween__set_DurationBack_fn(NavigationTween* __this, double* value);
void NavigationTween__get_Easing_fn(NavigationTween* __this, int* __retval);
void NavigationTween__set_Easing_fn(NavigationTween* __this, int* value);
void NavigationTween__get_EasingBack_fn(NavigationTween* __this, int* __retval);
void NavigationTween__set_EasingBack_fn(NavigationTween* __this, int* value);

struct NavigationTween : uObject
{
    double _duration;
    double _durationBack;
    int _easing;
    int _easingBack;
    bool _hasDurationBack;
    bool _hasEasingBack;

    double Duration();
    void Duration(double value);
    double DurationBack();
    void DurationBack(double value);
    int Easing();
    void Easing(int value);
    int EasingBack();
    void EasingBack(int value);
};
// }

}}} // ::g::Fuse::Navigation
