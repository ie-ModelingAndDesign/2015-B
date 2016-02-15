// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct StackPanel;}}}
namespace g{namespace Fuse{namespace iOS{struct StatusBarConfig;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{struct MainView;}
namespace g{struct MyFirstProject_FuseControlsTextControl_string_Value_Property;}
namespace g{struct MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property;}
namespace g{struct MyFirstProject_FuseReactiveEach_object_Items_Property;}
namespace g{struct MyFirstProject_FuseTriggersWhileBool_bool_Value_Property;}
namespace g{struct Stopwatch;}

namespace g{

// public partial sealed class MainView :1
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_3_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New2_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    uStrong< ::g::Fuse::Controls::Panel*> addMenu;
    uStrong< ::g::Fuse::Controls::Panel*> addMenuButton;
    uStrong< ::g::Fuse::Controls::Panel*> content;
    uStrong< ::g::Fuse::Controls::StackPanel*> kono;
    uStrong< ::g::Fuse::Controls::Panel*> menuButton;
    uStrong< ::g::Fuse::Controls::StackPanel*> nakamura;
    uStrong< ::g::Fuse::Controls::StackPanel*> okazaki;
    static uSStrong< ::g::Fuse::Font*> penna_;
    static uSStrong< ::g::Fuse::Font*>& penna() { return MainView_typeof()->Init(), penna_; }
    uStrong< ::g::Fuse::Triggers::WhileTrue*> showAddMenu;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> showMenu;
    uStrong< ::g::MyFirstProject_FuseTriggersWhileBool_bool_Value_Property*> showMenu_Value_inst;
    uStrong< ::g::Fuse::Controls::Panel*> sidebar;
    uStrong< ::g::Fuse::Controls::Panel*> statusBarBuckground;
    uStrong< ::g::Fuse::iOS::StatusBarConfig*> statusBarConfig;
    uStrong< ::g::MyFirstProject_FuseiOSStatusBarConfig_bool_IsVisible_Property*> statusBarConfig_IsVisible_inst;
    static uSStrong< ::g::Stopwatch*> Stopwatch_;
    static uSStrong< ::g::Stopwatch*>& Stopwatch() { return MainView_typeof()->Init(), Stopwatch_; }
    uStrong< ::g::MyFirstProject_FuseControlsTextControl_string_Value_Property*> temp_Value_inst;
    uStrong< ::g::MyFirstProject_FuseReactiveEach_object_Items_Property*> temp1_Items_inst;
    uStrong< ::g::Fuse::Controls::StackPanel*> toma;
    uStrong< ::g::Fuse::Controls::StackPanel*> wada;

    void ctor_3();
    void InitializeUX();
    static MainView* New2();
};
// }

} // ::g
