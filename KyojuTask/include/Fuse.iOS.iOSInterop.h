// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <objc/objc.h>
#include <Uno.h>
namespace g{namespace Fuse{namespace iOS{struct iOSInterop;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace iOS{namespace CoreGraphics{struct CGSize;}}}
namespace g{namespace iOS{namespace Foundation{struct NSDictionary;}}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace iOS{

// internal static extern class iOSInterop :654
// {
uClassType* iOSInterop_typeof();
void iOSInterop__GetContentSize_fn(::g::iOS::UIKit::UIView* view, ::g::Fuse::LayoutParams* lp, float* scale, ::g::Uno::Float2* __retval);
void iOSInterop__ToCGSize_fn(::g::Uno::Float2* unoSize, float* scale, ::g::iOS::CoreGraphics::CGSize* __retval);
void iOSInterop__ToFloat2_fn(::g::iOS::CoreGraphics::CGSize* size, float* scale, ::g::Uno::Float2* __retval);
void iOSInterop__ToNSDictionary_fn(::g::Uno::Collections::Dictionary* dict, ::g::iOS::Foundation::NSDictionary** __retval);
void iOSInterop__ToNSTextAlignment_fn(int* textAlignment, int* __retval);

struct iOSInterop : uObject
{
    static ::g::Uno::Float2 GetContentSize(::g::iOS::UIKit::UIView* view, ::g::Fuse::LayoutParams lp, float scale);
    static ::g::iOS::CoreGraphics::CGSize ToCGSize(::g::Uno::Float2 unoSize, float scale);
    static ::g::Uno::Float2 ToFloat2(::g::iOS::CoreGraphics::CGSize size, float scale);
    static ::g::iOS::Foundation::NSDictionary* ToNSDictionary(::g::Uno::Collections::Dictionary* dict);
    static int ToNSTextAlignment(int textAlignment);
};
// }

}}} // ::g::Fuse::iOS
