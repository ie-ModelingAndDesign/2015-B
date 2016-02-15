// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE CLRegion
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::CoreLocation::CLRegion*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::CoreLocation::CLRegion_typeof()

#include <CoreLocation/CoreLocation.h>
#include <uObjC.Wrapper.h>
#include <iOS.CoreLocation.CLRegion.h>

namespace g{
namespace iOS{
namespace CoreLocation{

// public extern class CLRegion :19821
// {
CLRegion_type* CLRegion_typeof()
{
    static uSStrong<CLRegion_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(CLRegion);
    options.TypeSize = sizeof(CLRegion_type);
    type = (CLRegion_type*)uClassType::New("iOS.CoreLocation.CLRegion", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(CLRegion_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(CLRegion_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}
// }

}}} // ::g::iOS::CoreLocation
