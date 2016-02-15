// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.24.6/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.iOS.NativeViews.ParentNativeView-1.h>
namespace g{namespace Fuse{namespace iOS{namespace NativeViews{struct NativeView;}}}}
namespace g{namespace Fuse{namespace iOS{namespace NativeViews{struct ParentControl;}}}}
namespace g{namespace iOS{namespace UIKit{struct UIControl;}}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace NativeViews{

// internal sealed extern class ParentControl :677
// {
::g::Fuse::iOS::NativeViews::ParentNativeView_type* ParentControl_typeof();
void ParentControl__ctor_3_fn(ParentControl* __this);
void ParentControl__ApplyZOrder_fn(ParentControl* __this);
void ParentControl__Attach_fn(ParentControl* __this);
void ParentControl__ChildRooted_fn(ParentControl* __this, ::g::Fuse::iOS::NativeViews::NativeView* child);
void ParentControl__Create_fn(ParentControl* __this, ::g::iOS::UIKit::UIView** __retval);
void ParentControl__Detach_fn(ParentControl* __this);
void ParentControl__New1_fn(ParentControl** __retval);
void ParentControl__OnZOrderChanged_fn(ParentControl* __this, uObject* s, uObject* a);

struct ParentControl : ::g::Fuse::iOS::NativeViews::ParentNativeView
{
    uStrong< ::g::iOS::UIKit::UIControl*> _group;

    void ctor_3();
    void ApplyZOrder();
    void OnZOrderChanged(uObject* s, uObject* a);
    static ParentControl* New1();
};
// }

}}}} // ::g::Fuse::iOS::NativeViews
