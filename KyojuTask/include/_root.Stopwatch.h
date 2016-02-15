// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/Stopwatch.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModule.h>
#include <Fuse.Scripting.NativeModule.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{struct Stopwatch;}

namespace g{

// public sealed class Stopwatch :92
// {
::g::Fuse::Scripting::NativeModule_type* Stopwatch_typeof();
void Stopwatch__ctor_1_fn(Stopwatch* __this);
void Stopwatch__get_EllapsedSeconds_fn(Stopwatch* __this, double* __retval);
void Stopwatch__GetSeconds_fn(Stopwatch* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void Stopwatch__New2_fn(Stopwatch** __retval);
void Stopwatch__Pause_fn(Stopwatch* __this);
void Stopwatch__Pause1_fn(Stopwatch* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void Stopwatch__Start_fn(Stopwatch* __this);
void Stopwatch__Start1_fn(Stopwatch* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void Stopwatch__Stop_fn(Stopwatch* __this);
void Stopwatch__Stop1_fn(Stopwatch* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void Stopwatch__Tick_fn(Stopwatch* __this);
void Stopwatch__add_Ticked_fn(Stopwatch* __this, uDelegate* value);
void Stopwatch__remove_Ticked_fn(Stopwatch* __this, uDelegate* value);

struct Stopwatch : ::g::Fuse::Scripting::NativeModule
{
    double _ellapsedSeconds;
    bool _isPaused;
    double _lastTick;
    bool _subscribedToUpdate;
    uStrong<uDelegate*> Ticked1;

    void ctor_1();
    double EllapsedSeconds();
    uObject* GetSeconds(::g::Fuse::Scripting::Context* c, uArray* args);
    void Pause();
    uObject* Pause1(::g::Fuse::Scripting::Context* c, uArray* args);
    void Start();
    uObject* Start1(::g::Fuse::Scripting::Context* c, uArray* args);
    void Stop();
    uObject* Stop1(::g::Fuse::Scripting::Context* c, uArray* args);
    void Tick();
    void add_Ticked(uDelegate* value);
    void remove_Ticked(uDelegate* value);
    static Stopwatch* New2();
};
// }

} // ::g
