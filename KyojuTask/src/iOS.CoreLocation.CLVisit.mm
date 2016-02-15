// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE CLVisit
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::CoreLocation::CLVisit*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::CoreLocation::CLVisit_typeof()

#include <CoreLocation/CoreLocation.h>
#include <uObjC.Wrapper.h>
#include <iOS.CoreLocation.CLVisit.h>

namespace g{
namespace iOS{
namespace CoreLocation{

// public sealed extern class CLVisit :19912
// {
CLVisit_type* CLVisit_typeof()
{
    static uSStrong<CLVisit_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(CLVisit);
    options.TypeSize = sizeof(CLVisit_type);
    type = (CLVisit_type*)uClassType::New("iOS.CoreLocation.CLVisit", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(CLVisit_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(CLVisit_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}
// }

}}} // ::g::iOS::CoreLocation
