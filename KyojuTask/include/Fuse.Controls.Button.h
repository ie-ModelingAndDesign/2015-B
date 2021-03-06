// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct Button;}}}
namespace g{namespace Fuse{struct StyleProperty1;}}

namespace g{
namespace Fuse{
namespace Controls{

// public class Button :106
// {
::g::Fuse::Controls::ParentControl_type* Button_typeof();
void Button__ctor_4_fn(Button* __this);
void Button__GetText_fn(Button* b, uString** __retval);
void Button__New2_fn(Button** __retval);
void Button__OnTextChanged_fn(Button* __this, uString* value, uString* orig);
void Button__SetText_fn(Button* b, uString* value);
void Button__SetText1_fn(Button* __this, uString* value, uObject* origin);
void Button__get_Text_fn(Button* __this, uString** __retval);
void Button__set_Text_fn(Button* __this, uString* value);
void Button__add_TextChanged_fn(Button* __this, uDelegate* value);
void Button__remove_TextChanged_fn(Button* __this, uDelegate* value);

struct Button : ::g::Fuse::Controls::ParentControl
{
    uStrong<uString*> _text;
    static uSStrong< ::g::Fuse::StyleProperty1*> TextProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& TextProperty() { return Button_typeof()->Init(), TextProperty_; }
    uStrong<uDelegate*> TextChanged1;

    void ctor_4();
    void OnTextChanged(uString* value, uString* orig);
    void SetText1(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
    void add_TextChanged(uDelegate* value);
    void remove_TextChanged(uDelegate* value);
    static uString* GetText(Button* b);
    static Button* New2();
    static void SetText(Button* b, uString* value);
};
// }

}}} // ::g::Fuse::Controls
