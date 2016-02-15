// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSError
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSError*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSError_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSError.h>
#include <Uno.Int.h>

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSError :39962
// {
NSError_type* NSError_typeof()
{
    static uSStrong<NSError_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSError);
    options.TypeSize = sizeof(NSError_type);
    type = (NSError_type*)uClassType::New("iOS.Foundation.NSError", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(NSError_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(NSError_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public extern int code() :40027
void NSError__code_fn(NSError* __this, int* __retval)
{
    *__retval = __this->code();
}

// public int get_Code() :39979
void NSError__get_Code_fn(NSError* __this, int* __retval)
{
    *__retval = __this->Code();
}

// public extern int code() [instance] :40027
int NSError::code()
{
    long __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, long, @selector(code));
    return (int)__return;
}

// public int get_Code() [instance] :39979
int NSError::Code()
{
    return code();
}
// }

}}} // ::g::iOS::Foundation
