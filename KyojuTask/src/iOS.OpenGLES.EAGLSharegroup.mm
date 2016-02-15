// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE EAGLSharegroup
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::OpenGLES::EAGLSharegroup*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::OpenGLES::EAGLSharegroup_typeof()

#include <OpenGLES/EAGL.h>
#include <uObjC.Wrapper.h>
#include <iOS.OpenGLES.EAGLSharegroup.h>

namespace g{
namespace iOS{
namespace OpenGLES{

// public sealed extern class EAGLSharegroup :21026
// {
::g::iOS::Foundation::NSObject_type* EAGLSharegroup_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(EAGLSharegroup);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSObject_type);
    type = (::g::iOS::Foundation::NSObject_type*)uClassType::New("iOS.OpenGLES.EAGLSharegroup", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::Foundation::NSObject_type, interface0));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}
// }

}}} // ::g::iOS::OpenGLES
