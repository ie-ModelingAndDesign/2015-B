// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno'.
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
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{struct RangeControl2D;}}}
namespace g{namespace Fuse{struct StyleProperty1;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class RangeControl2D :2910
// {
struct RangeControl2D_type : ::g::Fuse::Controls::ParentControl_type
{
    ::g::Fuse::Triggers::IValue interface9;
};

RangeControl2D_type* RangeControl2D_typeof();
void RangeControl2D__ClampToRange_fn(RangeControl2D* __this, ::g::Uno::Float2* v, ::g::Uno::Float2* __retval);
void RangeControl2D__GetValue_fn(RangeControl2D* rc, ::g::Uno::Float2* __retval);
void RangeControl2D__get_Maximum_fn(RangeControl2D* __this, ::g::Uno::Float2* __retval);
void RangeControl2D__set_Maximum_fn(RangeControl2D* __this, ::g::Uno::Float2* value);
void RangeControl2D__get_Minimum_fn(RangeControl2D* __this, ::g::Uno::Float2* __retval);
void RangeControl2D__set_Minimum_fn(RangeControl2D* __this, ::g::Uno::Float2* value);
void RangeControl2D__OnRangeChanged_fn(RangeControl2D* rc);
void RangeControl2D__OnValueChanged_fn(RangeControl2D* __this, ::g::Uno::Float2* value, uObject* origin);
void RangeControl2D__SetInternal_fn(RangeControl2D* __this, ::g::Uno::Float2* value, uObject* origin);
void RangeControl2D__SetValue_fn(RangeControl2D* __this, ::g::Uno::Float2* value, uObject* origin);
void RangeControl2D__SetValue1_fn(RangeControl2D* rc, ::g::Uno::Float2* value);
void RangeControl2D__get_Value_fn(RangeControl2D* __this, ::g::Uno::Float2* __retval);
void RangeControl2D__set_Value_fn(RangeControl2D* __this, ::g::Uno::Float2* value);
void RangeControl2D__add_ValueChanged_fn(RangeControl2D* __this, uDelegate* value);
void RangeControl2D__remove_ValueChanged_fn(RangeControl2D* __this, uDelegate* value);
void RangeControl2D__add_ValueXChanged_fn(RangeControl2D* __this, uDelegate* value);
void RangeControl2D__remove_ValueXChanged_fn(RangeControl2D* __this, uDelegate* value);
void RangeControl2D__add_ValueYChanged_fn(RangeControl2D* __this, uDelegate* value);
void RangeControl2D__remove_ValueYChanged_fn(RangeControl2D* __this, uDelegate* value);

struct RangeControl2D : ::g::Fuse::Controls::Panel
{
    ::g::Uno::Float2 _value;
    static uSStrong< ::g::Fuse::StyleProperty1*> MaximumProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& MaximumProperty() { return RangeControl2D_typeof()->Init(), MaximumProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> MinimumProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& MinimumProperty() { return RangeControl2D_typeof()->Init(), MinimumProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> ValueProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& ValueProperty() { return RangeControl2D_typeof()->Init(), ValueProperty_; }
    uStrong<uDelegate*> ValueChanged1;
    uStrong<uDelegate*> ValueXChanged1;
    uStrong<uDelegate*> ValueYChanged1;

    ::g::Uno::Float2 ClampToRange(::g::Uno::Float2 v);
    ::g::Uno::Float2 Maximum();
    void Maximum(::g::Uno::Float2 value);
    ::g::Uno::Float2 Minimum();
    void Minimum(::g::Uno::Float2 value);
    void OnValueChanged(::g::Uno::Float2 value, uObject* origin);
    void SetInternal(::g::Uno::Float2 value, uObject* origin);
    void SetValue(::g::Uno::Float2 value, uObject* origin);
    ::g::Uno::Float2 Value();
    void Value(::g::Uno::Float2 value);
    void add_ValueChanged(uDelegate* value);
    void remove_ValueChanged(uDelegate* value);
    void add_ValueXChanged(uDelegate* value);
    void remove_ValueXChanged(uDelegate* value);
    void add_ValueYChanged(uDelegate* value);
    void remove_ValueYChanged(uDelegate* value);
    static ::g::Uno::Float2 GetValue(RangeControl2D* rc);
    static void OnRangeChanged(RangeControl2D* rc);
    static void SetValue1(RangeControl2D* rc, ::g::Uno::Float2 value);
};
// }

}}} // ::g::Fuse::Controls
