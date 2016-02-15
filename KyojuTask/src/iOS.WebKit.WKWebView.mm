// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE WKWebView
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::WebKit::WKWebView*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::WebKit::WKWebView_typeof()

#include <WebKit/WebKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSURL.h>
#include <iOS.Foundation.NSURLRequest.h>
#include <iOS.WebKit.IWKNavigationDelegate.h>
#include <iOS.WebKit.WKNavigation.h>
#include <iOS.WebKit.WKWebView.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.String.h>

namespace g{
namespace iOS{
namespace WebKit{

// public sealed extern class WKWebView :89746
// {
::g::iOS::UIKit::UIView_type* WKWebView_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(WKWebView);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIView_type);
    type = (::g::iOS::UIKit::UIView_type*)uClassType::New("iOS.WebKit.WKWebView", options);
    type->SetBase(::g::iOS::UIKit::UIView_typeof());
    type->fp_ctor_ = (void*)WKWebView__New9_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface0));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public WKWebView() :89749
void WKWebView__ctor_8_fn(WKWebView* __this)
{
    __this->ctor_8();
}

// public extern bool canGoBack() :89888
void WKWebView__canGoBack_fn(WKWebView* __this, bool* __retval)
{
    *__retval = __this->canGoBack();
}

// public bool get_CanGoBack() :89805
void WKWebView__get_CanGoBack_fn(WKWebView* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// public extern bool canGoForward() :89891
void WKWebView__canGoForward_fn(WKWebView* __this, bool* __retval)
{
    *__retval = __this->canGoForward();
}

// public bool get_CanGoForward() :89810
void WKWebView__get_CanGoForward_fn(WKWebView* __this, bool* __retval)
{
    *__retval = __this->CanGoForward();
}

// public extern double estimatedProgress() :89882
void WKWebView__estimatedProgress_fn(WKWebView* __this, double* __retval)
{
    *__retval = __this->estimatedProgress();
}

// public double get_EstimatedProgress() :89795
void WKWebView__get_EstimatedProgress_fn(WKWebView* __this, double* __retval)
{
    *__retval = __this->EstimatedProgress();
}

// public extern iOS.WebKit.WKNavigation goBack() :89840
void WKWebView__goBack_fn(WKWebView* __this, ::g::iOS::WebKit::WKNavigation** __retval)
{
    *__retval = __this->goBack();
}

// public extern iOS.WebKit.WKNavigation goForward() :89843
void WKWebView__goForward_fn(WKWebView* __this, ::g::iOS::WebKit::WKNavigation** __retval)
{
    *__retval = __this->goForward();
}

// public extern bool isLoading() :89879
void WKWebView__isLoading_fn(WKWebView* __this, bool* __retval)
{
    *__retval = __this->isLoading();
}

// public extern iOS.WebKit.WKNavigation loadHTMLStringBaseURL(string string_, iOS.Foundation.NSURL baseURL) :89834
void WKWebView__loadHTMLStringBaseURL_fn(WKWebView* __this, uString* string__, ::g::iOS::Foundation::NSURL* baseURL_, ::g::iOS::WebKit::WKNavigation** __retval)
{
    *__retval = __this->loadHTMLStringBaseURL(string__, baseURL_);
}

// public bool get_Loading() :89790
void WKWebView__get_Loading_fn(WKWebView* __this, bool* __retval)
{
    *__retval = __this->Loading();
}

// public extern iOS.WebKit.WKNavigation loadRequest(iOS.Foundation.NSURLRequest request) :89831
void WKWebView__loadRequest_fn(WKWebView* __this, ::g::iOS::Foundation::NSURLRequest* request_, ::g::iOS::WebKit::WKNavigation** __retval)
{
    *__retval = __this->loadRequest(request_);
}

// public WKWebView New() :89749
void WKWebView__New9_fn(WKWebView** __retval)
{
    *__retval = WKWebView::New9();
}

// public extern iOS.WebKit.WKNavigation reload() :89846
void WKWebView__reload_fn(WKWebView* __this, ::g::iOS::WebKit::WKNavigation** __retval)
{
    *__retval = __this->reload();
}

// public extern void setNavigationDelegate(iOS.WebKit.IWKNavigationDelegate navigationDelegate) :89861
void WKWebView__setNavigationDelegate_fn(WKWebView* __this, uObject* navigationDelegate_)
{
    __this->setNavigationDelegate(navigationDelegate_);
}

// public extern void stopLoading() :89852
void WKWebView__stopLoading_fn(WKWebView* __this)
{
    __this->stopLoading();
}

// public extern iOS.Foundation.NSURL url() :89876
void WKWebView__url_fn(WKWebView* __this, ::g::iOS::Foundation::NSURL** __retval)
{
    *__retval = __this->url();
}

// public iOS.Foundation.NSURL get_URL() :89785
void WKWebView__get_URL_fn(WKWebView* __this, ::g::iOS::Foundation::NSURL** __retval)
{
    *__retval = __this->URL();
}

// public WKWebView() [instance] :89749
void WKWebView::ctor_8()
{
    ctor_6();
}

// public extern bool canGoBack() [instance] :89888
bool WKWebView::canGoBack()
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(canGoBack));
    return (bool)__return;
}

// public bool get_CanGoBack() [instance] :89805
bool WKWebView::CanGoBack()
{
    return canGoBack();
}

// public extern bool canGoForward() [instance] :89891
bool WKWebView::canGoForward()
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(canGoForward));
    return (bool)__return;
}

// public bool get_CanGoForward() [instance] :89810
bool WKWebView::CanGoForward()
{
    return canGoForward();
}

// public extern double estimatedProgress() [instance] :89882
double WKWebView::estimatedProgress()
{
    double __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, double, @selector(estimatedProgress));
    return __return;
}

// public double get_EstimatedProgress() [instance] :89795
double WKWebView::EstimatedProgress()
{
    return estimatedProgress();
}

// public extern iOS.WebKit.WKNavigation goBack() [instance] :89840
::g::iOS::WebKit::WKNavigation* WKWebView::goBack()
{
    ::WKNavigation* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::WKNavigation*, @selector(goBack));
    return (::g::iOS::WebKit::WKNavigation*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::WebKit::WKNavigation_typeof());
}

// public extern iOS.WebKit.WKNavigation goForward() [instance] :89843
::g::iOS::WebKit::WKNavigation* WKWebView::goForward()
{
    ::WKNavigation* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::WKNavigation*, @selector(goForward));
    return (::g::iOS::WebKit::WKNavigation*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::WebKit::WKNavigation_typeof());
}

// public extern bool isLoading() [instance] :89879
bool WKWebView::isLoading()
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(isLoading));
    return (bool)__return;
}

// public extern iOS.WebKit.WKNavigation loadHTMLStringBaseURL(string string_, iOS.Foundation.NSURL baseURL) [instance] :89834
::g::iOS::WebKit::WKNavigation* WKWebView::loadHTMLStringBaseURL(uString* string__, ::g::iOS::Foundation::NSURL* baseURL_)
{
    ::WKNavigation* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::WKNavigation*, @selector(loadHTMLString:baseURL:),
        uObjC::NativeString(string__),
        uObjC::Lifetime::GetNativeHandle((::uObject *)baseURL_));
    return (::g::iOS::WebKit::WKNavigation*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::WebKit::WKNavigation_typeof());
}

// public bool get_Loading() [instance] :89790
bool WKWebView::Loading()
{
    return isLoading();
}

// public extern iOS.WebKit.WKNavigation loadRequest(iOS.Foundation.NSURLRequest request) [instance] :89831
::g::iOS::WebKit::WKNavigation* WKWebView::loadRequest(::g::iOS::Foundation::NSURLRequest* request_)
{
    ::WKNavigation* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::WKNavigation*, @selector(loadRequest:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)request_));
    return (::g::iOS::WebKit::WKNavigation*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::WebKit::WKNavigation_typeof());
}

// public extern iOS.WebKit.WKNavigation reload() [instance] :89846
::g::iOS::WebKit::WKNavigation* WKWebView::reload()
{
    ::WKNavigation* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::WKNavigation*, @selector(reload));
    return (::g::iOS::WebKit::WKNavigation*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::WebKit::WKNavigation_typeof());
}

// public extern void setNavigationDelegate(iOS.WebKit.IWKNavigationDelegate navigationDelegate) [instance] :89861
void WKWebView::setNavigationDelegate(uObject* navigationDelegate_)
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setNavigationDelegate:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)navigationDelegate_, ::g::iOS::WebKit::IWKNavigationDelegate_typeof()));
}

// public extern void stopLoading() [instance] :89852
void WKWebView::stopLoading()
{
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(stopLoading));
}

// public extern iOS.Foundation.NSURL url() [instance] :89876
::g::iOS::Foundation::NSURL* WKWebView::url()
{
    ::NSURL* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::NSURL*, @selector(URL));
    return (::g::iOS::Foundation::NSURL*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::Foundation::NSURL_typeof());
}

// public iOS.Foundation.NSURL get_URL() [instance] :89785
::g::iOS::Foundation::NSURL* WKWebView::URL()
{
    return url();
}

// public WKWebView New() [static] :89749
WKWebView* WKWebView::New9()
{
    WKWebView* obj1 = (WKWebView*)uNew(WKWebView_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

}}} // ::g::iOS::WebKit
