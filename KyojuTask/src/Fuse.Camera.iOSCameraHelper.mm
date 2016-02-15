// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Camera/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Camera.iOSCameraHelper.h>
#include <ImageIO/ImageIO.h>
#include <MobileCoreServices/MobileCoreServices.h>
#include <ObjC.ID.h>
#include <Uno.String.h>
#include <uObjC.String.h>

namespace g{
namespace Fuse{
namespace Camera{

// internal sealed extern class iOSCameraHelper :172
// {
uType* iOSCameraHelper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(iOSCameraHelper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Camera.iOSCameraHelper", options);
    return type;
}

// public static extern void SaveImageJPG(ObjC.ID image, string path) :177
void iOSCameraHelper__SaveImageJPG_fn(::id* image_, uString* path_)
{
    iOSCameraHelper::SaveImageJPG(*image_, path_);
}

// public static extern void SaveImageJPG(ObjC.ID image, string path) [static] :177
void iOSCameraHelper::SaveImageJPG(::id image_, uString* path_)
{
    // http://stackoverflow.com/questions/1320988/saving-cgimageref-to-a-png-file
    // http://stackoverflow.com/questions/14831312/ios-writing-a-cgimageref-disk-in-png-or-jpeg
    ::NSString *path = uObjC::NativeString(path_);
    [UIImageJPEGRepresentation(image_, 0.9f) writeToFile:path atomically:YES];
    return;
}
// }

}}} // ::g::Fuse::Camera
