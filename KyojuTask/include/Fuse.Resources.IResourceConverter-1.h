// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.24.6/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Resources{

// internal abstract interface IResourceConverter<T> :301
// {
uInterfaceType* IResourceConverter_typeof();

struct IResourceConverter
{
    void(*fp_Accept)(uObject*, uObject*, bool*);
    void(*fp_Convert)(uObject*, uObject*, uTRef);
    static bool Accept(const uInterface& __this, uObject* o) { bool __retval; return __this.VTable<IResourceConverter>()->fp_Accept(__this, o, &__retval), __retval; }
    template<class T>
    static T Convert(const uInterface& __this, uObject* o) { T __retval; return __this.VTable<IResourceConverter>()->fp_Convert(__this, o, &__retval), __retval; }
    static void Convert_ex(const uInterface& __this, uObject* o, uTRef __retval) { __this.VTable<IResourceConverter>()->fp_Convert(__this, o, __retval); }
};
// }

}}} // ::g::Fuse::Resources
