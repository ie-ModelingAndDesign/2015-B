// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal abstract interface INavigationPanel :444
// {
uInterfaceType* INavigationPanel_typeof();

struct INavigationPanel
{
    void(*fp_AddChildAt)(uObject*, int*, ::g::Fuse::Node*);
    void(*fp_add_ChildAdded)(uObject*, uDelegate*);
    void(*fp_remove_ChildAdded)(uObject*, uDelegate*);
    void(*fp_add_ChildRemoved)(uObject*, uDelegate*);
    void(*fp_remove_ChildRemoved)(uObject*, uDelegate*);
    void(*fp_get_Children)(uObject*, uObject**);
    void(*fp_add_Placed)(uObject*, uDelegate*);
    void(*fp_remove_Placed)(uObject*, uDelegate*);
    void(*fp_RemoveChild)(uObject*, ::g::Fuse::Node*);
    void(*fp_add_Update)(uObject*, uDelegate*);
    void(*fp_remove_Update)(uObject*, uDelegate*);
    static void AddChildAt(const uInterface& __this, int index, ::g::Fuse::Node* n) { __this.VTable<INavigationPanel>()->fp_AddChildAt(__this, &index, n); }
    static void add_ChildAdded(const uInterface& __this, uDelegate* value) { __this.VTable<INavigationPanel>()->fp_add_ChildAdded(__this, value); }
    static void remove_ChildAdded(const uInterface& __this, uDelegate* value) { __this.VTable<INavigationPanel>()->fp_remove_ChildAdded(__this, value); }
    static void add_ChildRemoved(const uInterface& __this, uDelegate* value) { __this.VTable<INavigationPanel>()->fp_add_ChildRemoved(__this, value); }
    static void remove_ChildRemoved(const uInterface& __this, uDelegate* value) { __this.VTable<INavigationPanel>()->fp_remove_ChildRemoved(__this, value); }
    static uObject* Children(const uInterface& __this) { uObject* __retval; return __this.VTable<INavigationPanel>()->fp_get_Children(__this, &__retval), __retval; }
    static void add_Placed(const uInterface& __this, uDelegate* value) { __this.VTable<INavigationPanel>()->fp_add_Placed(__this, value); }
    static void remove_Placed(const uInterface& __this, uDelegate* value) { __this.VTable<INavigationPanel>()->fp_remove_Placed(__this, value); }
    static void RemoveChild(const uInterface& __this, ::g::Fuse::Node* child) { __this.VTable<INavigationPanel>()->fp_RemoveChild(__this, child); }
    static void add_Update(const uInterface& __this, uDelegate* value) { __this.VTable<INavigationPanel>()->fp_add_Update(__this, value); }
    static void remove_Update(const uInterface& __this, uDelegate* value) { __this.VTable<INavigationPanel>()->fp_remove_Update(__this, value); }
};
// }

}}} // ::g::Fuse::Navigation
