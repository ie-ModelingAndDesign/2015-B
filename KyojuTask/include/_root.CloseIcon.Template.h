// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/CloseIcon.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Rectangle.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Template-1.h>
namespace g{struct CloseIcon;}
namespace g{struct CloseIcon__Template;}

namespace g{

// public partial sealed class CloseIcon.Template :3
// {
::g::Uno::UX::Template_type* CloseIcon__Template_typeof();
void CloseIcon__Template__ctor_1_fn(CloseIcon__Template* __this, ::g::CloseIcon* parent);
void CloseIcon__Template__New1_fn(::g::CloseIcon* parent, CloseIcon__Template** __retval);
void CloseIcon__Template__OnApply_fn(CloseIcon__Template* __this, ::g::Fuse::Controls::Rectangle* self);

struct CloseIcon__Template : ::g::Uno::UX::Template
{
    uStrong< ::g::CloseIcon*> __parent1;

    void ctor_1(::g::CloseIcon* parent);
    static CloseIcon__Template* New1(::g::CloseIcon* parent);
};
// }

} // ::g
