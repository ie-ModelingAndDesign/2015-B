// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.24.6/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.iOS.NativeViews.ParentNativeView-1.h>
#include <iOS.UIKit.IUIScrollViewDelegate.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollPositionChangedArgs;}}}
namespace g{namespace Fuse{namespace iOS{namespace NativeViews{struct NativeView;}}}}
namespace g{namespace Fuse{namespace iOS{namespace NativeViews{struct ScrollView;}}}}
namespace g{namespace iOS{namespace UIKit{struct UIScrollView;}}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace iOS{
namespace NativeViews{

// public sealed extern class ScrollView :779
// {
struct ScrollView_type : ::g::Fuse::iOS::NativeViews::ParentNativeView_type
{
    ::g::iOS::UIKit::IUIScrollViewDelegate interface0;
};

ScrollView_type* ScrollView_typeof();
void ScrollView__ctor_3_fn(ScrollView* __this);
void ScrollView__Attach_fn(ScrollView* __this);
void ScrollView__Create_fn(ScrollView* __this, ::g::iOS::UIKit::UIView** __retval);
void ScrollView__Detach_fn(ScrollView* __this);
void ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewDidEndDecelerating_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView);
void ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewDidEndDraggingWillDecelerate_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView, bool* decelerate);
void ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewDidEndScrollingAnimation_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView);
void ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewDidEndZoomingWithViewAtScale_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView, ::g::iOS::UIKit::UIView* view, double* scale);
void ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewDidScroll_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView);
void ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewDidScrollToTop_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView);
void ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewDidZoom_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView);
void ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewShouldScrollToTop_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView, bool* __retval);
void ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewWillBeginDecelerating_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView);
void ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewWillBeginDragging_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView);
void ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewWillBeginZoomingWithView_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView, ::g::iOS::UIKit::UIView* view);
void ScrollView__iOSUIKitIUIScrollViewDelegateviewForZoomingInScrollView_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView, ::g::iOS::UIKit::UIView** __retval);
void ScrollView__New1_fn(ScrollView** __retval);
void ScrollView__NotifyNewSize_fn(ScrollView* __this, ::g::Fuse::iOS::NativeViews::NativeView* child);
void ScrollView__OnScrollPositionChanged_fn(ScrollView* __this);
void ScrollView__OnScrollPositionChanged1_fn(ScrollView* __this, uObject* sender, ::g::Fuse::Controls::ScrollPositionChangedArgs* args);
void ScrollView__UpdateContentSize_fn(ScrollView* __this, ::g::Uno::Float2* newContentSize);

struct ScrollView : ::g::Fuse::iOS::NativeViews::ParentNativeView
{
    uStrong< ::g::iOS::UIKit::UIScrollView*> _scrollView;

    void ctor_3();
    void OnScrollPositionChanged();
    void OnScrollPositionChanged1(uObject* sender, ::g::Fuse::Controls::ScrollPositionChangedArgs* args);
    void UpdateContentSize(::g::Uno::Float2 newContentSize);
    static ScrollView* New1();
};
// }

}}}} // ::g::Fuse::iOS::NativeViews
