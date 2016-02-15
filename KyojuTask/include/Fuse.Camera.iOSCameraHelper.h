// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Camera/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <objc/objc.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Camera{struct iOSCameraHelper;}}}

namespace g{
namespace Fuse{
namespace Camera{

// internal sealed extern class iOSCameraHelper :172
// {
uType* iOSCameraHelper_typeof();
void iOSCameraHelper__SaveImageJPG_fn(::id* image_, uString* path_);

struct iOSCameraHelper : uObject
{
    static void SaveImageJPG(::id image_, uString* path_);
};
// }

}}} // ::g::Fuse::Camera
