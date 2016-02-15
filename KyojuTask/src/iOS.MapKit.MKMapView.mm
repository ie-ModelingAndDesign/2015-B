// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE MKMapView
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::MapKit::MKMapView*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::MapKit::MKMapView_typeof()

#include <MapKit/MapKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.MapKit.MKMapView.h>

namespace g{
namespace iOS{
namespace MapKit{

// public sealed extern class MKMapView :29889
// {
::g::iOS::UIKit::UIView_type* MKMapView_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MKMapView);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIView_type);
    type = (::g::iOS::UIKit::UIView_type*)uClassType::New("iOS.MapKit.MKMapView", options);
    type->SetBase(::g::iOS::UIKit::UIView_typeof());
    type->fp_ctor_ = (void*)MKMapView__New9_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface0));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public MKMapView() :29892
void MKMapView__ctor_8_fn(MKMapView* __this)
{
    __this->ctor_8();
}

// public MKMapView New() :29892
void MKMapView__New9_fn(MKMapView** __retval)
{
    *__retval = MKMapView::New9();
}

// public MKMapView() [instance] :29892
void MKMapView::ctor_8()
{
    ctor_6();
}

// public MKMapView New() [static] :29892
MKMapView* MKMapView::New9()
{
    MKMapView* obj1 = (MKMapView*)uNew(MKMapView_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

}}} // ::g::iOS::MapKit
