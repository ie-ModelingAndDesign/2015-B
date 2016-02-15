// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <iOS.CoreLocation.CLAuthorizationStatus.h>
#include <iOS.CoreLocation.CLLocationCoordinate2D.h>
#include <iOS.CoreLocation.CLRegionState.h>
#include <Uno.Double.h>

namespace g{
namespace iOS{
namespace CoreLocation{

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(2823)
// ---------------------------------------------------------------------------------

// public enum CLAuthorizationStatus :2823
uEnumType* CLAuthorizationStatus_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.CoreLocation.CLAuthorizationStatus", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "kCLAuthorizationStatusNotDetermined", 0LL,
        "kCLAuthorizationStatusRestricted", 1LL,
        "kCLAuthorizationStatusDenied", 2LL,
        "kCLAuthorizationStatusAuthorizedAlways", 3LL,
        "kCLAuthorizationStatusAuthorizedWhenInUse", 4LL,
        "kCLAuthorizationStatusAuthorized", 3LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/struct/$.uno(1859)
// -----------------------------------------------------------------------------------

// public extern struct CLLocationCoordinate2D :1859
// {
uStructType* CLLocationCoordinate2D_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(CLLocationCoordinate2D);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("iOS.CoreLocation.CLLocationCoordinate2D", options);
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::iOS::CoreLocation::CLLocationCoordinate2D, Latitude), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::iOS::CoreLocation::CLLocationCoordinate2D, Longitude), 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(2910)
// ---------------------------------------------------------------------------------

// public enum CLRegionState :2910
uEnumType* CLRegionState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.CoreLocation.CLRegionState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "CLRegionStateUnknown", 0LL,
        "CLRegionStateInside", 1LL,
        "CLRegionStateOutside", 2LL);
    return type;
}

}}} // ::g::iOS::CoreLocation
