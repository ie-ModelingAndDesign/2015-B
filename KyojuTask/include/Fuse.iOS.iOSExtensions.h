// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace iOS{struct iOSExtensions;}}}
namespace g{namespace iOS{namespace CoreGraphics{struct CGPoint;}}}
namespace g{namespace iOS{namespace CoreGraphics{struct CGSize;}}}
namespace g{namespace iOS{namespace UIKit{struct UIColor;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace iOS{

// internal static extern class iOSExtensions :521
// {
uClassType* iOSExtensions_typeof();
void iOSExtensions__ToCGPoint_fn(::g::Uno::Float2* f, ::g::iOS::CoreGraphics::CGPoint* __retval);
void iOSExtensions__ToCGSize_fn(::g::Uno::Float2* f, ::g::iOS::CoreGraphics::CGSize* __retval);
void iOSExtensions__ToFloat2_fn(::g::iOS::CoreGraphics::CGPoint* point, ::g::Uno::Float2* __retval);
void iOSExtensions__ToUIColor_fn(::g::Uno::Float4* color, ::g::iOS::UIKit::UIColor** __retval);

struct iOSExtensions : uObject
{
    static ::g::iOS::CoreGraphics::CGPoint ToCGPoint(::g::Uno::Float2 f);
    static ::g::iOS::CoreGraphics::CGSize ToCGSize(::g::Uno::Float2 f);
    static ::g::Uno::Float2 ToFloat2(::g::iOS::CoreGraphics::CGPoint point);
    static ::g::iOS::UIKit::UIColor* ToUIColor(::g::Uno::Float4 color);
};
// }

}}} // ::g::Fuse::iOS
