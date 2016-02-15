// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/WatchFace.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Fuse{struct Rotation;}}
namespace g{namespace Fuse{struct Scaling;}}
namespace g{struct MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property;}
namespace g{struct MyFirstProject_FuseElementsElement_float_Opacity_Property;}
namespace g{struct MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property;}
namespace g{struct MyFirstProject_FuseRotation_float_Degrees_Property;}
namespace g{struct MyFirstProject_FuseScaling_float_Factor_Property;}
namespace g{struct WatchFace;}

namespace g{

// public partial sealed class WatchFace :1
// {
::g::Fuse::Controls::ParentControl_type* WatchFace_typeof();
void WatchFace__ctor_5_fn(WatchFace* __this);
void WatchFace__InitializeUX_fn(WatchFace* __this);
void WatchFace__New3_fn(WatchFace** __retval);

struct WatchFace : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Scaling*> circleScale;
    uStrong< ::g::MyFirstProject_FuseScaling_float_Factor_Property*> circleScale_Factor_inst;
    uStrong< ::g::Fuse::Controls::Circle*> clock;
    uStrong< ::g::MyFirstProject_FuseControlsCircle_float_EndAngleDegrees_Property*> clock_EndAngleDegrees_inst;
    uStrong< ::g::Fuse::Controls::Circle*> tickCircle;
    uStrong< ::g::MyFirstProject_FuseElementsElement_float_Opacity_Property*> tickCircle_Opacity_inst;
    uStrong< ::g::MyFirstProject_FuseElementsElement_FuseElementsVisibility_Visibility_Property*> tickCircle_Visibility_inst;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> tickCircleAnimation;
    uStrong< ::g::Fuse::Rotation*> trackerBall;
    uStrong< ::g::MyFirstProject_FuseRotation_float_Degrees_Property*> trackerBall_Degrees_inst;

    void ctor_5();
    void InitializeUX();
    static WatchFace* New3();
};
// }

} // ::g
