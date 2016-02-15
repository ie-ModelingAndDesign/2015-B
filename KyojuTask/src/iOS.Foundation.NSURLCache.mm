// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSURLCache
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSURLCache*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSURLCache_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSURLCache.h>

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSURLCache :52765
// {
::g::iOS::Foundation::NSObject_type* NSURLCache_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NSURLCache);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSObject_type);
    type = (::g::iOS::Foundation::NSObject_type*)uClassType::New("iOS.Foundation.NSURLCache", options);
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

// public static extern iOS.Foundation.NSURLCache _sharedURLCache() :52798
void NSURLCache___sharedURLCache_fn(NSURLCache** __retval)
{
    *__retval = NSURLCache::_sharedURLCache();
}

// public extern void removeAllCachedResponses() :52816
void NSURLCache__removeAllCachedResponses_fn(NSURLCache* __this)
{
    __this->removeAllCachedResponses();
}

// public extern void removeAllCachedResponses() [instance] :52816
void NSURLCache::removeAllCachedResponses()
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(removeAllCachedResponses));
}

// public static extern iOS.Foundation.NSURLCache _sharedURLCache() [static] :52798
NSURLCache* NSURLCache::_sharedURLCache()
{
    ::NSURLCache* __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::NSURLCache*, @selector(sharedURLCache));
    return (NSURLCache*)uObjC::Lifetime::GetUnoObject(__return, NSURLCache_typeof());
}
// }

}}} // ::g::iOS::Foundation
