// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSMutableAttributedString
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSMutableAttributedString*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSMutableAttributedString_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSMutableAttributedString.h>

namespace g{
namespace iOS{
namespace Foundation{

// public extern class NSMutableAttributedString :45285
// {
::g::iOS::Foundation::NSAttributedString_type* NSMutableAttributedString_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSAttributedString_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSMutableAttributedString);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSAttributedString_type);
    type = (::g::iOS::Foundation::NSAttributedString_type*)uClassType::New("iOS.Foundation.NSMutableAttributedString", options);
    type->SetBase(::g::iOS::Foundation::NSAttributedString_typeof());
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::Foundation::NSAttributedString_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(::g::iOS::Foundation::NSAttributedString_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public NSMutableAttributedString() :45288
void NSMutableAttributedString__ctor_6_fn(NSMutableAttributedString* __this)
{
    __this->ctor_6();
}

// public NSMutableAttributedString() [instance] :45288
void NSMutableAttributedString::ctor_6()
{
    ctor_4();
}
// }

}}} // ::g::iOS::Foundation
