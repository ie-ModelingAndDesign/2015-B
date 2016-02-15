// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSTextStorage
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::NSTextStorage*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::NSTextStorage_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.NSTextStorage.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class NSTextStorage :51759
// {
::g::iOS::Foundation::NSAttributedString_type* NSTextStorage_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSAttributedString_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSTextStorage);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSAttributedString_type);
    type = (::g::iOS::Foundation::NSAttributedString_type*)uClassType::New("iOS.UIKit.NSTextStorage", options);
    type->SetBase(::g::iOS::Foundation::NSMutableAttributedString_typeof());
    type->fp_ctor_ = (void*)NSTextStorage__New9_fn;
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

// public NSTextStorage() :51762
void NSTextStorage__ctor_8_fn(NSTextStorage* __this)
{
    __this->ctor_8();
}

// public NSTextStorage New() :51762
void NSTextStorage__New9_fn(NSTextStorage** __retval)
{
    *__retval = NSTextStorage::New9();
}

// public NSTextStorage() [instance] :51762
void NSTextStorage::ctor_8()
{
    ctor_6();
}

// public NSTextStorage New() [static] :51762
NSTextStorage* NSTextStorage::New9()
{
    NSTextStorage* obj1 = (NSTextStorage*)uNew(NSTextStorage_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

}}} // ::g::iOS::UIKit
