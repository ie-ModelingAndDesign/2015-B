// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSBundle
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSBundle*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSBundle_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSBundle.h>
#include <iOS.Foundation.NSURL.h>
#include <Uno.String.h>

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSBundle :36145
// {
::g::iOS::Foundation::NSObject_type* NSBundle_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NSBundle);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSObject_type);
    type = (::g::iOS::Foundation::NSObject_type*)uClassType::New("iOS.Foundation.NSBundle", options);
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

// public static extern iOS.Foundation.NSBundle _mainBundle() :36276
void NSBundle___mainBundle_fn(NSBundle** __retval)
{
    *__retval = NSBundle::_mainBundle();
}

// public extern string pathForResourceOfType(string name, string ext) :36348
void NSBundle__pathForResourceOfType_fn(NSBundle* __this, uString* name_, uString* ext_, uString** __retval)
{
    *__retval = __this->pathForResourceOfType(name_, ext_);
}

// public extern iOS.Foundation.NSURL urlForResourceWithExtension(string name, string ext) :36327
void NSBundle__urlForResourceWithExtension_fn(NSBundle* __this, uString* name_, uString* ext_, ::g::iOS::Foundation::NSURL** __retval)
{
    *__retval = __this->urlForResourceWithExtension(name_, ext_);
}

// public extern string pathForResourceOfType(string name, string ext) [instance] :36348
uString* NSBundle::pathForResourceOfType(uString* name_, uString* ext_)
{
    ::NSString * __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSString *, @selector(pathForResource:ofType:),
        uObjC::NativeString(name_),
        uObjC::NativeString(ext_));
    return uObjC::UnoString(__return);
}

// public extern iOS.Foundation.NSURL urlForResourceWithExtension(string name, string ext) [instance] :36327
::g::iOS::Foundation::NSURL* NSBundle::urlForResourceWithExtension(uString* name_, uString* ext_)
{
    ::NSURL* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSURL*, @selector(URLForResource:withExtension:),
        uObjC::NativeString(name_),
        uObjC::NativeString(ext_));
    return (::g::iOS::Foundation::NSURL*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSURL_typeof());
}

// public static extern iOS.Foundation.NSBundle _mainBundle() [static] :36276
NSBundle* NSBundle::_mainBundle()
{
    ::NSBundle* __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::NSBundle*, @selector(mainBundle));
    return (NSBundle*)uObjC::Lifetime::GetUnoObject(__return, NSBundle_typeof());
}
// }

}}} // ::g::iOS::Foundation
