// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UIImage
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIImage*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIImage_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.CoreImage.CIImage.h>
#include <iOS.UIKit.UIImage.h>
#include <ObjC.ID.h>
#include <Uno.String.h>
#include <iOS.CoreGraphics.CGRect.h>
#include <iOS.CoreGraphics.CGSize.h>

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UIImage :75521
// {
::g::iOS::Foundation::NSObject_type* UIImage_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UIImage);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSObject_type);
    type = (::g::iOS::Foundation::NSObject_type*)uClassType::New("iOS.UIKit.UIImage", options);
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

// public UIImage(ObjC.ID __id) :75526
void UIImage__ctor_5_fn(UIImage* __this, ::id* __id1)
{
    __this->ctor_5(*__id1);
}

// public static extern iOS.UIKit.UIImage _imageWithCIImage(iOS.CoreImage.CIImage ciImage) :75628
void UIImage___imageWithCIImage_fn(::g::iOS::CoreImage::CIImage* ciImage_, UIImage** __retval)
{
    *__retval = UIImage::_imageWithCIImage(ciImage_);
}

// public static extern iOS.UIKit.UIImage _imageWithContentsOfFile(string path) :75613
void UIImage___imageWithContentsOfFile_fn(uString* path_, UIImage** __retval)
{
    *__retval = UIImage::_imageWithContentsOfFile(path_);
}

// public extern void drawInRect(iOS.CoreGraphics.CGRect rect) :75676
void UIImage__drawInRect_fn(UIImage* __this, ::g::iOS::CoreGraphics::CGRect* rect_)
{
    __this->drawInRect(*rect_);
}

// public UIImage New(ObjC.ID __id) :75526
void UIImage__New6_fn(::id* __id1, UIImage** __retval)
{
    *__retval = UIImage::New6(*__id1);
}

// public extern iOS.CoreGraphics.CGSize size() :75697
void UIImage__size_fn(UIImage* __this, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->size();
}

// public iOS.CoreGraphics.CGSize get_Size() :75533
void UIImage__get_Size_fn(UIImage* __this, ::g::iOS::CoreGraphics::CGSize* __retval)
{
    *__retval = __this->Size();
}

// public UIImage(ObjC.ID __id) [instance] :75526
void UIImage::ctor_5(::id __id1)
{
    ctor_3(__id1);
}

// public extern void drawInRect(iOS.CoreGraphics.CGRect rect) [instance] :75676
void UIImage::drawInRect(::g::iOS::CoreGraphics::CGRect rect_)
{
    ::g::iOS::CoreGraphics::CGRect rect__ = rect_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(drawInRect:),
        uObjC::Struct::FromUno_CGRect(rect__, ::CGRect()));
}

// public extern iOS.CoreGraphics.CGSize size() [instance] :75697
::g::iOS::CoreGraphics::CGSize UIImage::size()
{
    ::CGSize __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::CGSize, @selector(size));
    return uObjC::Struct::ToUno_CGSize(__return, ::g::iOS::CoreGraphics::CGSize());
}

// public iOS.CoreGraphics.CGSize get_Size() [instance] :75533
::g::iOS::CoreGraphics::CGSize UIImage::Size()
{
    return size();
}

// public static extern iOS.UIKit.UIImage _imageWithCIImage(iOS.CoreImage.CIImage ciImage) [static] :75628
UIImage* UIImage::_imageWithCIImage(::g::iOS::CoreImage::CIImage* ciImage_)
{
    ::UIImage* __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::UIImage*, @selector(imageWithCIImage:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)ciImage_));
    return (UIImage*)uObjC::Lifetime::GetUnoObject(__return, UIImage_typeof());
}

// public static extern iOS.UIKit.UIImage _imageWithContentsOfFile(string path) [static] :75613
UIImage* UIImage::_imageWithContentsOfFile(uString* path_)
{
    ::UIImage* __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::UIImage*, @selector(imageWithContentsOfFile:),
        uObjC::NativeString(path_));
    return (UIImage*)uObjC::Lifetime::GetUnoObject(__return, UIImage_typeof());
}

// public UIImage New(ObjC.ID __id) [static] :75526
UIImage* UIImage::New6(::id __id1)
{
    UIImage* obj2 = (UIImage*)uNew(UIImage_typeof());
    obj2->ctor_5(__id1);
    return obj2;
}
// }

}}} // ::g::iOS::UIKit
