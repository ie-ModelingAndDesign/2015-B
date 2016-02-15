// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/PlusIcon.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Rectangle.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Template-1.h>
namespace g{struct PlusIcon;}
namespace g{struct PlusIcon__Template;}

namespace g{

// public partial sealed class PlusIcon.Template :3
// {
::g::Uno::UX::Template_type* PlusIcon__Template_typeof();
void PlusIcon__Template__ctor_1_fn(PlusIcon__Template* __this, ::g::PlusIcon* parent);
void PlusIcon__Template__New1_fn(::g::PlusIcon* parent, PlusIcon__Template** __retval);
void PlusIcon__Template__OnApply_fn(PlusIcon__Template* __this, ::g::Fuse::Controls::Rectangle* self);

struct PlusIcon__Template : ::g::Uno::UX::Template
{
    uStrong< ::g::PlusIcon*> __parent1;

    void ctor_1(::g::PlusIcon* parent);
    static PlusIcon__Template* New1(::g::PlusIcon* parent);
};
// }

} // ::g
