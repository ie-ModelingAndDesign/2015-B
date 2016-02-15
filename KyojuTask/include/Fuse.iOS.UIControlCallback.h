// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.24.6/UIControlEvents/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.NSObject.h>
#include <ObjC.Object.h>
#include <uObjC.h>
namespace g{namespace Fuse{namespace iOS{struct UIControlCallback;}}}

namespace g{
namespace Fuse{
namespace iOS{

// internal extern class UIControlCallback :77
// {
struct UIControlCallback_type : ::g::iOS::Foundation::NSObject_type
{
    void(*fp_callbackForEvent)(::g::Fuse::iOS::UIControlCallback*, ::g::iOS::Foundation::NSObject*, ::g::iOS::Foundation::NSObject*);
};

UIControlCallback_type* UIControlCallback_typeof();
void UIControlCallback__ctor_4_fn(UIControlCallback* __this);
void UIControlCallback__callbackForEvent_fn(UIControlCallback* __this, ::g::iOS::Foundation::NSObject* sender_, ::g::iOS::Foundation::NSObject* theEvent_);
void UIControlCallback__callbackSelector_fn(UIControlCallback* __this, uObjC::Selector* __retval);
void UIControlCallback__get_CallbackSelector_fn(UIControlCallback* __this, uObjC::Selector* __retval);

struct UIControlCallback : ::g::iOS::Foundation::NSObject
{
    void ctor_4();
    void callbackForEvent(::g::iOS::Foundation::NSObject* sender_, ::g::iOS::Foundation::NSObject* theEvent_) { (((UIControlCallback_type*)__type)->fp_callbackForEvent)(this, sender_, theEvent_); }
    uObjC::Selector callbackSelector();
    uObjC::Selector CallbackSelector();
    static void callbackForEvent(UIControlCallback* __this, ::g::iOS::Foundation::NSObject* sender_, ::g::iOS::Foundation::NSObject* theEvent_) { UIControlCallback__callbackForEvent_fn(__this, sender_, theEvent_); }
};
// }

}}} // ::g::Fuse::iOS
