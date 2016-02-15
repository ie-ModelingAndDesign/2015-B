// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSValue
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSValue*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSValue_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSValue.h>
#include <ObjC.ID.h>

namespace g{
namespace iOS{
namespace Foundation{

// public extern class NSValue :54980
// {
NSValue_type* NSValue_typeof()
{
    static uSStrong<NSValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSValue);
    options.TypeSize = sizeof(NSValue_type);
    type = (NSValue_type*)uClassType::New("iOS.Foundation.NSValue", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(NSValue_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(NSValue_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public NSValue(ObjC.ID __id) :54985
void NSValue__ctor_5_fn(NSValue* __this, ::id* __id1)
{
    __this->ctor_5(*__id1);
}

// public NSValue(ObjC.ID __id) [instance] :54985
void NSValue::ctor_5(::id __id1)
{
    ctor_3(__id1);
}
// }

}}} // ::g::iOS::Foundation
