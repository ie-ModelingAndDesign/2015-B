// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSURLRequest
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSURLRequest*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSURLRequest_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSURL.h>
#include <iOS.Foundation.NSURLRequest.h>

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSURLRequest :53571
// {
NSURLRequest_type* NSURLRequest_typeof()
{
    static uSStrong<NSURLRequest_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NSURLRequest);
    options.TypeSize = sizeof(NSURLRequest_type);
    type = (NSURLRequest_type*)uClassType::New("iOS.Foundation.NSURLRequest", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_ctor_ = (void*)NSURLRequest__New5_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(NSURLRequest_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(NSURLRequest_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public NSURLRequest() :53574
void NSURLRequest__ctor_4_fn(NSURLRequest* __this)
{
    __this->ctor_4();
}

// public extern void initWithURL(iOS.Foundation.NSURL URL) :53651
void NSURLRequest__initWithURL_fn(NSURLRequest* __this, ::g::iOS::Foundation::NSURL* URL_)
{
    __this->initWithURL(URL_);
}

// public NSURLRequest New() :53574
void NSURLRequest__New5_fn(NSURLRequest** __retval)
{
    *__retval = NSURLRequest::New5();
}

// public NSURLRequest() [instance] :53574
void NSURLRequest::ctor_4()
{
    ctor_2();
}

// public extern void initWithURL(iOS.Foundation.NSURL URL) [instance] :53651
void NSURLRequest::initWithURL(::g::iOS::Foundation::NSURL* URL_)
{
    uObjC_DO_INIT(this, @selector(initWithURL:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)URL_));
}

// public NSURLRequest New() [static] :53574
NSURLRequest* NSURLRequest::New5()
{
    NSURLRequest* obj1 = (NSURLRequest*)uNew(NSURLRequest_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

}}} // ::g::iOS::Foundation
