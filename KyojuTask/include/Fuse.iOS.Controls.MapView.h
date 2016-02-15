// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.24.6/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.MapView.h>
#include <Fuse.IDataContext.h>
#include <Fuse.iOS.Controls.Control-1.h>
#include <Fuse.Scripting.INameScope.h>
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct MapView;}}}}
namespace g{namespace iOS{namespace MapKit{struct MKMapView;}}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// public sealed extern class MapView :661
// {
::g::Fuse::iOS::Controls::Control_type* MapView_typeof();
void MapView__Attach_fn(MapView* __this);
void MapView__CreateInternal_fn(MapView* __this, ::g::iOS::UIKit::UIView** __retval);
void MapView__Detach_fn(MapView* __this);

struct MapView : ::g::Fuse::iOS::Controls::Control
{
    uStrong< ::g::iOS::MapKit::MKMapView*> _mapView;
};
// }

}}}} // ::g::Fuse::iOS::Controls
