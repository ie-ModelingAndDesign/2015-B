// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.24.6/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{struct Control;}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct ControlProperties;}}}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// public static class ControlProperties :315
// {
uClassType* ControlProperties_typeof();
void ControlProperties__OnTintColorChanged_fn(::g::Fuse::Controls::Control* panel);

struct ControlProperties : uObject
{
    static uSStrong< ::g::Fuse::StyleProperty1*> TintColorProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& TintColorProperty() { return ControlProperties_typeof()->Init(), TintColorProperty_; }

    static void OnTintColorChanged(::g::Fuse::Controls::Control* panel);
};
// }

}}}} // ::g::Fuse::iOS::Controls
