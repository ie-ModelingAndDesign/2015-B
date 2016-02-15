// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE CAShapeLayer
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::QuartzCore::CAShapeLayer*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::QuartzCore::CAShapeLayer_typeof()

#include <QuartzCore/QuartzCore.h>
#include <uObjC.Wrapper.h>
#include <iOS.CoreGraphics.CGColorRef.h>
#include <iOS.CoreGraphics.CGPathRef.h>
#include <iOS.QuartzCore.CAShapeLayer.h>
#include <Uno.Double.h>

namespace g{
namespace iOS{
namespace QuartzCore{

// public sealed extern class CAShapeLayer :14664
// {
::g::iOS::Foundation::NSObject_type* CAShapeLayer_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CAShapeLayer);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSObject_type);
    type = (::g::iOS::Foundation::NSObject_type*)uClassType::New("iOS.QuartzCore.CAShapeLayer", options);
    type->SetBase(::g::iOS::QuartzCore::CALayer_typeof());
    type->fp_ctor_ = (void*)CAShapeLayer__New7_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::Foundation::NSObject_type, interface0));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public CAShapeLayer() :14667
void CAShapeLayer__ctor_6_fn(CAShapeLayer* __this)
{
    __this->ctor_6();
}

// public CAShapeLayer New() :14667
void CAShapeLayer__New7_fn(CAShapeLayer** __retval)
{
    *__retval = CAShapeLayer::New7();
}

// public extern void setFillColor(iOS.CoreGraphics.CGColorRef fillColor) :14756
void CAShapeLayer__setFillColor_fn(CAShapeLayer* __this, app::CGColorRef** fillColor_)
{
    __this->setFillColor(*fillColor_);
}

// public extern void setLineWidth(double lineWidth) :14786
void CAShapeLayer__setLineWidth_fn(CAShapeLayer* __this, double* lineWidth_)
{
    __this->setLineWidth(*lineWidth_);
}

// public extern void setPath(iOS.CoreGraphics.CGPathRef path) :14750
void CAShapeLayer__setPath_fn(CAShapeLayer* __this, app::CGPathRef** path_)
{
    __this->setPath(*path_);
}

// public extern void setStrokeColor(iOS.CoreGraphics.CGColorRef strokeColor) :14768
void CAShapeLayer__setStrokeColor_fn(CAShapeLayer* __this, app::CGColorRef** strokeColor_)
{
    __this->setStrokeColor(*strokeColor_);
}

// public CAShapeLayer() [instance] :14667
void CAShapeLayer::ctor_6()
{
    ctor_4();
}

// public extern void setFillColor(iOS.CoreGraphics.CGColorRef fillColor) [instance] :14756
void CAShapeLayer::setFillColor(app::CGColorRef* fillColor_)
{
    app::CGColorRef* fillColor__ = fillColor_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setFillColor:),
        (::CGColorRef)(size_t) fillColor__);
}

// public extern void setLineWidth(double lineWidth) [instance] :14786
void CAShapeLayer::setLineWidth(double lineWidth_)
{
    double lineWidth__ = lineWidth_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setLineWidth:),
        (CGFloat)lineWidth__);
}

// public extern void setPath(iOS.CoreGraphics.CGPathRef path) [instance] :14750
void CAShapeLayer::setPath(app::CGPathRef* path_)
{
    app::CGPathRef* path__ = path_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setPath:),
        (::CGPathRef)(size_t) path__);
}

// public extern void setStrokeColor(iOS.CoreGraphics.CGColorRef strokeColor) [instance] :14768
void CAShapeLayer::setStrokeColor(app::CGColorRef* strokeColor_)
{
    app::CGColorRef* strokeColor__ = strokeColor_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setStrokeColor:),
        (::CGColorRef)(size_t) strokeColor__);
}

// public CAShapeLayer New() [static] :14667
CAShapeLayer* CAShapeLayer::New7()
{
    CAShapeLayer* obj1 = (CAShapeLayer*)uNew(CAShapeLayer_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

}}} // ::g::iOS::QuartzCore
