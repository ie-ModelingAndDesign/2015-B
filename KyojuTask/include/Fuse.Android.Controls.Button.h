// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.24.6/Controls/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IDataContext.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.INameScope.h>
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Button;}}}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// public sealed extern class Button :24
// {
::g::Fuse::Node_type* Button_typeof();
void Button__OnButtonPropertyChanged_fn(Button* t);

struct Button : ::g::Fuse::Node
{
    static uSStrong< ::g::Fuse::StyleProperty1*> TextColorProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& TextColorProperty() { return Button_typeof()->Init(), TextColorProperty_; }

    static void OnButtonPropertyChanged(Button* t);
};
// }

}}}} // ::g::Fuse::Android::Controls
