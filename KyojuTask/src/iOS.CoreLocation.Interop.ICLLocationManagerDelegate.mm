// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/interface/wrapper/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE CLLocationManagerDelegate
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::CoreLocation::ICLLocationManagerDelegate_typeof()

#include <CoreLocation/CoreLocation.h>
#include <uObjC.Wrapper.h>
#include <iOS.CoreLocation.CLAuthorizationStatus.h>
#include <iOS.CoreLocation.CLBeaconRegion.h>
#include <iOS.CoreLocation.CLHeading.h>
#include <iOS.CoreLocation.CLLocation.h>
#include <iOS.CoreLocation.CLLocationManager.h>
#include <iOS.CoreLocation.CLRegion.h>
#include <iOS.CoreLocation.CLRegionState.h>
#include <iOS.CoreLocation.CLVisit.h>
#include <iOS.CoreLocation.Interop.ICLLocationManagerDelegate.h>
#include <iOS.Foundation.NSArray.h>
#include <iOS.Foundation.NSError.h>
#include <Uno.Bool.h>

namespace g{
namespace iOS{
namespace CoreLocation{
namespace Interop{

// public sealed extern class ICLLocationManagerDelegate :1350
// {
ICLLocationManagerDelegate_type* ICLLocationManagerDelegate_typeof()
{
    static uSStrong<ICLLocationManagerDelegate_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ICLLocationManagerDelegate);
    options.TypeSize = sizeof(ICLLocationManagerDelegate_type);
    type = (ICLLocationManagerDelegate_type*)uClassType::New("iOS.CoreLocation.Interop.ICLLocationManagerDelegate", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->interface1.fp_locationManagerDidUpdateToLocationFromLocation = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLLocation*, ::g::iOS::CoreLocation::CLLocation*))ICLLocationManagerDelegate__locationManagerDidUpdateToLocationFromLocation_fn;
    type->interface1.fp_locationManagerDidUpdateLocations = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::Foundation::NSArray*))ICLLocationManagerDelegate__locationManagerDidUpdateLocations_fn;
    type->interface1.fp_locationManagerDidUpdateHeading = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLHeading*))ICLLocationManagerDelegate__locationManagerDidUpdateHeading_fn;
    type->interface1.fp_locationManagerShouldDisplayHeadingCalibration = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, bool*))ICLLocationManagerDelegate__locationManagerShouldDisplayHeadingCalibration_fn;
    type->interface1.fp_locationManagerDidDetermineStateForRegion = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, int*, ::g::iOS::CoreLocation::CLRegion*))ICLLocationManagerDelegate__locationManagerDidDetermineStateForRegion_fn;
    type->interface1.fp_locationManagerDidRangeBeaconsInRegion = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::Foundation::NSArray*, ::g::iOS::CoreLocation::CLBeaconRegion*))ICLLocationManagerDelegate__locationManagerDidRangeBeaconsInRegion_fn;
    type->interface1.fp_locationManagerRangingBeaconsDidFailForRegionWithError = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLBeaconRegion*, ::g::iOS::Foundation::NSError*))ICLLocationManagerDelegate__locationManagerRangingBeaconsDidFailForRegionWithError_fn;
    type->interface1.fp_locationManagerDidEnterRegion = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLRegion*))ICLLocationManagerDelegate__locationManagerDidEnterRegion_fn;
    type->interface1.fp_locationManagerDidExitRegion = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLRegion*))ICLLocationManagerDelegate__locationManagerDidExitRegion_fn;
    type->interface1.fp_locationManagerDidFailWithError = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::Foundation::NSError*))ICLLocationManagerDelegate__locationManagerDidFailWithError_fn;
    type->interface1.fp_locationManagerMonitoringDidFailForRegionWithError = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLRegion*, ::g::iOS::Foundation::NSError*))ICLLocationManagerDelegate__locationManagerMonitoringDidFailForRegionWithError_fn;
    type->interface1.fp_locationManagerDidChangeAuthorizationStatus = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, int*))ICLLocationManagerDelegate__locationManagerDidChangeAuthorizationStatus_fn;
    type->interface1.fp_locationManagerDidStartMonitoringForRegion = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLRegion*))ICLLocationManagerDelegate__locationManagerDidStartMonitoringForRegion_fn;
    type->interface1.fp_locationManagerDidPauseLocationUpdates = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*))ICLLocationManagerDelegate__locationManagerDidPauseLocationUpdates_fn;
    type->interface1.fp_locationManagerDidResumeLocationUpdates = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*))ICLLocationManagerDelegate__locationManagerDidResumeLocationUpdates_fn;
    type->interface1.fp_locationManagerDidFinishDeferredUpdatesWithError = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::Foundation::NSError*))ICLLocationManagerDelegate__locationManagerDidFinishDeferredUpdatesWithError_fn;
    type->interface1.fp_locationManagerDidVisit = (void(*)(uObject*, ::g::iOS::CoreLocation::CLLocationManager*, ::g::iOS::CoreLocation::CLVisit*))ICLLocationManagerDelegate__locationManagerDidVisit_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(ICLLocationManagerDelegate_type, interface0),
        ::g::iOS::CoreLocation::ICLLocationManagerDelegate_typeof(), offsetof(ICLLocationManagerDelegate_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public extern void locationManagerDidChangeAuthorizationStatus(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLAuthorizationStatus status) :1392
void ICLLocationManagerDelegate__locationManagerDidChangeAuthorizationStatus_fn(ICLLocationManagerDelegate* __this, ::g::iOS::CoreLocation::CLLocationManager* manager_, int* status_)
{
    __this->locationManagerDidChangeAuthorizationStatus(manager_, *status_);
}

// public extern void locationManagerDidDetermineStateForRegion(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLRegionState state, iOS.CoreLocation.CLRegion region) :1371
void ICLLocationManagerDelegate__locationManagerDidDetermineStateForRegion_fn(ICLLocationManagerDelegate* __this, ::g::iOS::CoreLocation::CLLocationManager* manager_, int* state_, ::g::iOS::CoreLocation::CLRegion* region_)
{
    __this->locationManagerDidDetermineStateForRegion(manager_, *state_, region_);
}

// public extern void locationManagerDidEnterRegion(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLRegion region) :1380
void ICLLocationManagerDelegate__locationManagerDidEnterRegion_fn(ICLLocationManagerDelegate* __this, ::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::CoreLocation::CLRegion* region_)
{
    __this->locationManagerDidEnterRegion(manager_, region_);
}

// public extern void locationManagerDidExitRegion(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLRegion region) :1383
void ICLLocationManagerDelegate__locationManagerDidExitRegion_fn(ICLLocationManagerDelegate* __this, ::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::CoreLocation::CLRegion* region_)
{
    __this->locationManagerDidExitRegion(manager_, region_);
}

// public extern void locationManagerDidFailWithError(iOS.CoreLocation.CLLocationManager manager, iOS.Foundation.NSError error) :1386
void ICLLocationManagerDelegate__locationManagerDidFailWithError_fn(ICLLocationManagerDelegate* __this, ::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::Foundation::NSError* error_)
{
    __this->locationManagerDidFailWithError(manager_, error_);
}

// public extern void locationManagerDidFinishDeferredUpdatesWithError(iOS.CoreLocation.CLLocationManager manager, iOS.Foundation.NSError error) :1404
void ICLLocationManagerDelegate__locationManagerDidFinishDeferredUpdatesWithError_fn(ICLLocationManagerDelegate* __this, ::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::Foundation::NSError* error_)
{
    __this->locationManagerDidFinishDeferredUpdatesWithError(manager_, error_);
}

// public extern void locationManagerDidPauseLocationUpdates(iOS.CoreLocation.CLLocationManager manager) :1398
void ICLLocationManagerDelegate__locationManagerDidPauseLocationUpdates_fn(ICLLocationManagerDelegate* __this, ::g::iOS::CoreLocation::CLLocationManager* manager_)
{
    __this->locationManagerDidPauseLocationUpdates(manager_);
}

// public extern void locationManagerDidRangeBeaconsInRegion(iOS.CoreLocation.CLLocationManager manager, iOS.Foundation.NSArray beacons, iOS.CoreLocation.CLBeaconRegion region) :1374
void ICLLocationManagerDelegate__locationManagerDidRangeBeaconsInRegion_fn(ICLLocationManagerDelegate* __this, ::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::Foundation::NSArray* beacons_, ::g::iOS::CoreLocation::CLBeaconRegion* region_)
{
    __this->locationManagerDidRangeBeaconsInRegion(manager_, beacons_, region_);
}

// public extern void locationManagerDidResumeLocationUpdates(iOS.CoreLocation.CLLocationManager manager) :1401
void ICLLocationManagerDelegate__locationManagerDidResumeLocationUpdates_fn(ICLLocationManagerDelegate* __this, ::g::iOS::CoreLocation::CLLocationManager* manager_)
{
    __this->locationManagerDidResumeLocationUpdates(manager_);
}

// public extern void locationManagerDidStartMonitoringForRegion(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLRegion region) :1395
void ICLLocationManagerDelegate__locationManagerDidStartMonitoringForRegion_fn(ICLLocationManagerDelegate* __this, ::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::CoreLocation::CLRegion* region_)
{
    __this->locationManagerDidStartMonitoringForRegion(manager_, region_);
}

// public extern void locationManagerDidUpdateHeading(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLHeading newHeading) :1365
void ICLLocationManagerDelegate__locationManagerDidUpdateHeading_fn(ICLLocationManagerDelegate* __this, ::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::CoreLocation::CLHeading* newHeading_)
{
    __this->locationManagerDidUpdateHeading(manager_, newHeading_);
}

// public extern void locationManagerDidUpdateLocations(iOS.CoreLocation.CLLocationManager manager, iOS.Foundation.NSArray locations) :1362
void ICLLocationManagerDelegate__locationManagerDidUpdateLocations_fn(ICLLocationManagerDelegate* __this, ::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::Foundation::NSArray* locations_)
{
    __this->locationManagerDidUpdateLocations(manager_, locations_);
}

// public extern void locationManagerDidUpdateToLocationFromLocation(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLLocation newLocation, iOS.CoreLocation.CLLocation oldLocation) :1359
void ICLLocationManagerDelegate__locationManagerDidUpdateToLocationFromLocation_fn(ICLLocationManagerDelegate* __this, ::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::CoreLocation::CLLocation* newLocation_, ::g::iOS::CoreLocation::CLLocation* oldLocation_)
{
    __this->locationManagerDidUpdateToLocationFromLocation(manager_, newLocation_, oldLocation_);
}

// public extern void locationManagerDidVisit(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLVisit visit) :1407
void ICLLocationManagerDelegate__locationManagerDidVisit_fn(ICLLocationManagerDelegate* __this, ::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::CoreLocation::CLVisit* visit_)
{
    __this->locationManagerDidVisit(manager_, visit_);
}

// public extern void locationManagerMonitoringDidFailForRegionWithError(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLRegion region, iOS.Foundation.NSError error) :1389
void ICLLocationManagerDelegate__locationManagerMonitoringDidFailForRegionWithError_fn(ICLLocationManagerDelegate* __this, ::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::CoreLocation::CLRegion* region_, ::g::iOS::Foundation::NSError* error_)
{
    __this->locationManagerMonitoringDidFailForRegionWithError(manager_, region_, error_);
}

// public extern void locationManagerRangingBeaconsDidFailForRegionWithError(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLBeaconRegion region, iOS.Foundation.NSError error) :1377
void ICLLocationManagerDelegate__locationManagerRangingBeaconsDidFailForRegionWithError_fn(ICLLocationManagerDelegate* __this, ::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::CoreLocation::CLBeaconRegion* region_, ::g::iOS::Foundation::NSError* error_)
{
    __this->locationManagerRangingBeaconsDidFailForRegionWithError(manager_, region_, error_);
}

// public extern bool locationManagerShouldDisplayHeadingCalibration(iOS.CoreLocation.CLLocationManager manager) :1368
void ICLLocationManagerDelegate__locationManagerShouldDisplayHeadingCalibration_fn(ICLLocationManagerDelegate* __this, ::g::iOS::CoreLocation::CLLocationManager* manager_, bool* __retval)
{
    *__retval = __this->locationManagerShouldDisplayHeadingCalibration(manager_);
}

// public extern void locationManagerDidChangeAuthorizationStatus(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLAuthorizationStatus status) [instance] :1392
void ICLLocationManagerDelegate::locationManagerDidChangeAuthorizationStatus(::g::iOS::CoreLocation::CLLocationManager* manager_, int status_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(locationManager:didChangeAuthorizationStatus:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)manager_),
        ::CLAuthorizationStatus(status_));
}

// public extern void locationManagerDidDetermineStateForRegion(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLRegionState state, iOS.CoreLocation.CLRegion region) [instance] :1371
void ICLLocationManagerDelegate::locationManagerDidDetermineStateForRegion(::g::iOS::CoreLocation::CLLocationManager* manager_, int state_, ::g::iOS::CoreLocation::CLRegion* region_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(locationManager:didDetermineState:forRegion:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)manager_),
        ::CLRegionState(state_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)region_));
}

// public extern void locationManagerDidEnterRegion(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLRegion region) [instance] :1380
void ICLLocationManagerDelegate::locationManagerDidEnterRegion(::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::CoreLocation::CLRegion* region_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(locationManager:didEnterRegion:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)manager_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)region_));
}

// public extern void locationManagerDidExitRegion(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLRegion region) [instance] :1383
void ICLLocationManagerDelegate::locationManagerDidExitRegion(::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::CoreLocation::CLRegion* region_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(locationManager:didExitRegion:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)manager_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)region_));
}

// public extern void locationManagerDidFailWithError(iOS.CoreLocation.CLLocationManager manager, iOS.Foundation.NSError error) [instance] :1386
void ICLLocationManagerDelegate::locationManagerDidFailWithError(::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::Foundation::NSError* error_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(locationManager:didFailWithError:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)manager_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)error_));
}

// public extern void locationManagerDidFinishDeferredUpdatesWithError(iOS.CoreLocation.CLLocationManager manager, iOS.Foundation.NSError error) [instance] :1404
void ICLLocationManagerDelegate::locationManagerDidFinishDeferredUpdatesWithError(::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::Foundation::NSError* error_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(locationManager:didFinishDeferredUpdatesWithError:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)manager_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)error_));
}

// public extern void locationManagerDidPauseLocationUpdates(iOS.CoreLocation.CLLocationManager manager) [instance] :1398
void ICLLocationManagerDelegate::locationManagerDidPauseLocationUpdates(::g::iOS::CoreLocation::CLLocationManager* manager_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(locationManagerDidPauseLocationUpdates:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)manager_));
}

// public extern void locationManagerDidRangeBeaconsInRegion(iOS.CoreLocation.CLLocationManager manager, iOS.Foundation.NSArray beacons, iOS.CoreLocation.CLBeaconRegion region) [instance] :1374
void ICLLocationManagerDelegate::locationManagerDidRangeBeaconsInRegion(::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::Foundation::NSArray* beacons_, ::g::iOS::CoreLocation::CLBeaconRegion* region_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(locationManager:didRangeBeacons:inRegion:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)manager_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)beacons_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)region_));
}

// public extern void locationManagerDidResumeLocationUpdates(iOS.CoreLocation.CLLocationManager manager) [instance] :1401
void ICLLocationManagerDelegate::locationManagerDidResumeLocationUpdates(::g::iOS::CoreLocation::CLLocationManager* manager_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(locationManagerDidResumeLocationUpdates:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)manager_));
}

// public extern void locationManagerDidStartMonitoringForRegion(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLRegion region) [instance] :1395
void ICLLocationManagerDelegate::locationManagerDidStartMonitoringForRegion(::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::CoreLocation::CLRegion* region_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(locationManager:didStartMonitoringForRegion:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)manager_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)region_));
}

// public extern void locationManagerDidUpdateHeading(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLHeading newHeading) [instance] :1365
void ICLLocationManagerDelegate::locationManagerDidUpdateHeading(::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::CoreLocation::CLHeading* newHeading_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(locationManager:didUpdateHeading:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)manager_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)newHeading_));
}

// public extern void locationManagerDidUpdateLocations(iOS.CoreLocation.CLLocationManager manager, iOS.Foundation.NSArray locations) [instance] :1362
void ICLLocationManagerDelegate::locationManagerDidUpdateLocations(::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::Foundation::NSArray* locations_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(locationManager:didUpdateLocations:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)manager_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)locations_));
}

// public extern void locationManagerDidUpdateToLocationFromLocation(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLLocation newLocation, iOS.CoreLocation.CLLocation oldLocation) [instance] :1359
void ICLLocationManagerDelegate::locationManagerDidUpdateToLocationFromLocation(::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::CoreLocation::CLLocation* newLocation_, ::g::iOS::CoreLocation::CLLocation* oldLocation_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(locationManager:didUpdateToLocation:fromLocation:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)manager_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)newLocation_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)oldLocation_));
}

// public extern void locationManagerDidVisit(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLVisit visit) [instance] :1407
void ICLLocationManagerDelegate::locationManagerDidVisit(::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::CoreLocation::CLVisit* visit_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(locationManager:didVisit:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)manager_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)visit_));
}

// public extern void locationManagerMonitoringDidFailForRegionWithError(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLRegion region, iOS.Foundation.NSError error) [instance] :1389
void ICLLocationManagerDelegate::locationManagerMonitoringDidFailForRegionWithError(::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::CoreLocation::CLRegion* region_, ::g::iOS::Foundation::NSError* error_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(locationManager:monitoringDidFailForRegion:withError:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)manager_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)region_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)error_));
}

// public extern void locationManagerRangingBeaconsDidFailForRegionWithError(iOS.CoreLocation.CLLocationManager manager, iOS.CoreLocation.CLBeaconRegion region, iOS.Foundation.NSError error) [instance] :1377
void ICLLocationManagerDelegate::locationManagerRangingBeaconsDidFailForRegionWithError(::g::iOS::CoreLocation::CLLocationManager* manager_, ::g::iOS::CoreLocation::CLBeaconRegion* region_, ::g::iOS::Foundation::NSError* error_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(locationManager:rangingBeaconsDidFailForRegion:withError:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)manager_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)region_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)error_));
}

// public extern bool locationManagerShouldDisplayHeadingCalibration(iOS.CoreLocation.CLLocationManager manager) [instance] :1368
bool ICLLocationManagerDelegate::locationManagerShouldDisplayHeadingCalibration(::g::iOS::CoreLocation::CLLocationManager* manager_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(locationManagerShouldDisplayHeadingCalibration:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)manager_));
    return (bool)__return;
}
// }

}}}} // ::g::iOS::CoreLocation::Interop
