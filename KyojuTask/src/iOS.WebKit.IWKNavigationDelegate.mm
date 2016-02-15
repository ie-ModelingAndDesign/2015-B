// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/interface/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE WKNavigationDelegate
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::WebKit::IWKNavigationDelegate_typeof()

#include <WebKit/WebKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSError.h>
#include <iOS.WebKit.IWKNavigationDelegate.h>
#include <iOS.WebKit.WKNavigation.h>
#include <iOS.WebKit.WKWebView.h>

namespace g{
namespace iOS{
namespace WebKit{

// public abstract extern interface IWKNavigationDelegate :6543
// {
uInterfaceType* IWKNavigationDelegate_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("iOS.WebKit.IWKNavigationDelegate", 0, 0);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}
// }

}}} // ::g::iOS::WebKit
