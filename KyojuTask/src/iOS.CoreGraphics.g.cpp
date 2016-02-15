// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <iOS.CoreGraphics.CGAffineTransform.h>
#include <iOS.CoreGraphics.CGBitmapInfo.h>
#include <iOS.CoreGraphics.CGColorRef.h>
#include <iOS.CoreGraphics.CGColorSpaceRef.h>
#include <iOS.CoreGraphics.CGContextRef.h>
#include <iOS.CoreGraphics.CGDataProviderRef.h>
#include <iOS.CoreGraphics.CGFontRef.h>
#include <iOS.CoreGraphics.CGPathRef.h>
#include <iOS.CoreGraphics.CGPoint.h>
#include <iOS.CoreGraphics.CGRect.h>
#include <iOS.CoreGraphics.CGSize.h>
#include <Uno.Double.h>

namespace g{
namespace iOS{
namespace CoreGraphics{

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/struct/$.uno(1741)
// -----------------------------------------------------------------------------------

// public extern struct CGAffineTransform :1741
// {
uStructType* CGAffineTransform_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ValueSize = sizeof(CGAffineTransform);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("iOS.CoreGraphics.CGAffineTransform", options);
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::iOS::CoreGraphics::CGAffineTransform, A), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::iOS::CoreGraphics::CGAffineTransform, B), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::iOS::CoreGraphics::CGAffineTransform, C), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::iOS::CoreGraphics::CGAffineTransform, D), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::iOS::CoreGraphics::CGAffineTransform, Tx), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::iOS::CoreGraphics::CGAffineTransform, Ty), 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(2198)
// ---------------------------------------------------------------------------------

// public enum CGBitmapInfo :2198
uEnumType* CGBitmapInfo_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.CoreGraphics.CGBitmapInfo", ::g::Uno::UInt_typeof(), 8);
    type->SetLiterals(
        "kCGBitmapAlphaInfoMask", 31LL,
        "kCGBitmapFloatComponents", 256LL,
        "kCGBitmapByteOrderMask", 28672LL,
        "kCGBitmapByteOrderDefault", 0LL,
        "kCGBitmapByteOrder16Little", 4096LL,
        "kCGBitmapByteOrder32Little", 8192LL,
        "kCGBitmapByteOrder16Big", 12288LL,
        "kCGBitmapByteOrder32Big", 16384LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/opaque/$.uno(1235)
// -----------------------------------------------------------------------------------

// public extern struct CGColorRef :1235
// {
uStructType* CGColorRef_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(app::CGColorRef*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("iOS.CoreGraphics.CGColorRef", options);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/opaque/$.uno(1269)
// -----------------------------------------------------------------------------------

// public extern struct CGColorSpaceRef :1269
// {
uStructType* CGColorSpaceRef_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(app::CGColorSpaceRef*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("iOS.CoreGraphics.CGColorSpaceRef", options);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/opaque/$.uno(1303)
// -----------------------------------------------------------------------------------

// public extern struct CGContextRef :1303
// {
uStructType* CGContextRef_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(app::CGContextRef*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("iOS.CoreGraphics.CGContextRef", options);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/opaque/$.uno(1371)
// -----------------------------------------------------------------------------------

// public extern struct CGDataProviderRef :1371
// {
uStructType* CGDataProviderRef_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(app::CGDataProviderRef*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("iOS.CoreGraphics.CGDataProviderRef", options);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/opaque/$.uno(1405)
// -----------------------------------------------------------------------------------

// public extern struct CGFontRef :1405
// {
uStructType* CGFontRef_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(app::CGFontRef*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("iOS.CoreGraphics.CGFontRef", options);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/opaque/$.uno(2068)
// -----------------------------------------------------------------------------------

// public extern struct CGPathRef :2068
// {
uStructType* CGPathRef_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(app::CGPathRef*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("iOS.CoreGraphics.CGPathRef", options);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/struct/$.uno(1771)
// -----------------------------------------------------------------------------------

// public extern struct CGPoint :1771
// {
uStructType* CGPoint_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(CGPoint);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("iOS.CoreGraphics.CGPoint", options);
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::iOS::CoreGraphics::CGPoint, X), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::iOS::CoreGraphics::CGPoint, Y), 0);
    return type;
}

// public CGPoint(double X, double Y) :1773
void CGPoint__ctor__fn(CGPoint* __this, double* X1, double* Y1)
{
    __this->ctor_(*X1, *Y1);
}

// public CGPoint New(double X, double Y) :1773
void CGPoint__New1_fn(double* X1, double* Y1, CGPoint* __retval)
{
    *__retval = CGPoint__New1(*X1, *Y1);
}

// public CGPoint(double X, double Y) [instance] :1773
void CGPoint::ctor_(double X1, double Y1)
{
    X = X1;
    Y = Y1;
}

// public CGPoint New(double X, double Y) [static] :1773
CGPoint CGPoint__New1(double X1, double Y1)
{
    CGPoint obj1;
    obj1.ctor_(X1, Y1);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/struct/$.uno(1793)
// -----------------------------------------------------------------------------------

// public extern struct CGRect :1793
// {
uStructType* CGRect_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(CGRect);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("iOS.CoreGraphics.CGRect", options);
    type->SetFields(0,
        ::g::iOS::CoreGraphics::CGPoint_typeof(), offsetof(::g::iOS::CoreGraphics::CGRect, Origin), 0,
        ::g::iOS::CoreGraphics::CGSize_typeof(), offsetof(::g::iOS::CoreGraphics::CGRect, Size), 0);
    return type;
}

// public CGRect(iOS.CoreGraphics.CGPoint Origin, iOS.CoreGraphics.CGSize Size) :1795
void CGRect__ctor__fn(CGRect* __this, ::g::iOS::CoreGraphics::CGPoint* Origin1, ::g::iOS::CoreGraphics::CGSize* Size1)
{
    __this->ctor_(*Origin1, *Size1);
}

// public CGRect New(iOS.CoreGraphics.CGPoint Origin, iOS.CoreGraphics.CGSize Size) :1795
void CGRect__New1_fn(::g::iOS::CoreGraphics::CGPoint* Origin1, ::g::iOS::CoreGraphics::CGSize* Size1, CGRect* __retval)
{
    *__retval = CGRect__New1(*Origin1, *Size1);
}

// public CGRect(iOS.CoreGraphics.CGPoint Origin, iOS.CoreGraphics.CGSize Size) [instance] :1795
void CGRect::ctor_(::g::iOS::CoreGraphics::CGPoint Origin1, ::g::iOS::CoreGraphics::CGSize Size1)
{
    Origin = Origin1;
    Size = Size1;
}

// public CGRect New(iOS.CoreGraphics.CGPoint Origin, iOS.CoreGraphics.CGSize Size) [static] :1795
CGRect CGRect__New1(::g::iOS::CoreGraphics::CGPoint Origin1, ::g::iOS::CoreGraphics::CGSize Size1)
{
    CGRect obj1;
    obj1.ctor_(Origin1, Size1);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/struct/$.uno(1815)
// -----------------------------------------------------------------------------------

// public extern struct CGSize :1815
// {
uStructType* CGSize_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(CGSize);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("iOS.CoreGraphics.CGSize", options);
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::iOS::CoreGraphics::CGSize, Width), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::iOS::CoreGraphics::CGSize, Height), 0);
    return type;
}

// public CGSize(double Width, double Height) :1817
void CGSize__ctor__fn(CGSize* __this, double* Width1, double* Height1)
{
    __this->ctor_(*Width1, *Height1);
}

// public CGSize New(double Width, double Height) :1817
void CGSize__New1_fn(double* Width1, double* Height1, CGSize* __retval)
{
    *__retval = CGSize__New1(*Width1, *Height1);
}

// public CGSize(double Width, double Height) [instance] :1817
void CGSize::ctor_(double Width1, double Height1)
{
    Width = Width1;
    Height = Height1;
}

// public CGSize New(double Width, double Height) [static] :1817
CGSize CGSize__New1(double Width1, double Height1)
{
    CGSize obj1;
    obj1.ctor_(Width1, Height1);
    return obj1;
}
// }

}}} // ::g::iOS::CoreGraphics
