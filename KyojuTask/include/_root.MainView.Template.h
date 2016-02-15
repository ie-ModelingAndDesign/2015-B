// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Text.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Template-1.h>
namespace g{struct MainView;}
namespace g{struct MainView__Template;}
namespace g{struct MyFirstProject_FuseElementsElement_float_Opacity_Property;}

namespace g{

// public partial sealed class MainView.Template :3
// {
::g::Uno::UX::Template_type* MainView__Template_typeof();
void MainView__Template__ctor_1_fn(MainView__Template* __this, ::g::MainView* parent);
void MainView__Template__New1_fn(::g::MainView* parent, MainView__Template** __retval);
void MainView__Template__OnApply_fn(MainView__Template* __this, ::g::Fuse::Controls::Text* self);

struct MainView__Template : ::g::Uno::UX::Template
{
    uStrong< ::g::MainView*> __parent1;
    uStrong< ::g::MyFirstProject_FuseElementsElement_float_Opacity_Property*> self_Opacity_inst;

    void ctor_1(::g::MainView* parent);
    static MainView__Template* New1(::g::MainView* parent);
};
// }

} // ::g
