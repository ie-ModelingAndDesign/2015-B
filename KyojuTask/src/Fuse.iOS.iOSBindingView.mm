// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOS.iOSBindingView.h>
#include <Fuse.iOS.iOSInterop.h>
#include <iOS.UIKit.UIView.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.ID.h>
#include <objc/runtime.h>
#include <Uno.Float.h>
#include <Uno.Platform.ViewNativeHandle.h>
#include <Uno.Platform2.Application.h>
#include <Fuse.LayoutParams.h>
#include <Uno.Float2.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace iOS{

// internal static extern class iOSBindingView :395
// {
uClassType* iOSBindingView_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.iOSBindingView", options);
    ::TYPES[0] = ::g::ObjC::Bindings::Object_typeof();
    return type;
}

// public static float2 GetContentSize(iOS.UIKit.UIView view, Fuse.LayoutParams lp) :402
void iOSBindingView__GetContentSize_fn(::g::iOS::UIKit::UIView* view, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = iOSBindingView::GetContentSize(view, *lp);
}

// public static Uno.Platform.ViewNativeHandle GetNativeViewHandle(iOS.UIKit.UIView view) :407
void iOSBindingView__GetNativeViewHandle_fn(::g::iOS::UIKit::UIView* view, uPlatform2::ViewNativeHandle* __retval)
{
    *__retval = iOSBindingView::GetNativeViewHandle(view);
}

// public static float2 GetContentSize(iOS.UIKit.UIView view, Fuse.LayoutParams lp) [static] :402
::g::Uno::Float2 iOSBindingView::GetContentSize(::g::iOS::UIKit::UIView* view, ::g::Fuse::LayoutParams lp)
{
    return ::g::Fuse::iOS::iOSInterop::GetContentSize(view, lp, 1.0f);
}

// public static Uno.Platform.ViewNativeHandle GetNativeViewHandle(iOS.UIKit.UIView view) [static] :407
uPlatform2::ViewNativeHandle iOSBindingView::GetNativeViewHandle(::g::iOS::UIKit::UIView* view)
{
    return (uPlatform2::ViewNativeHandle)uPtr(view)->Handle();
}
// }

}}} // ::g::Fuse::iOS
