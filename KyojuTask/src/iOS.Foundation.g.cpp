// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <iOS.Foundation._NSRange.h>
#include <iOS.Foundation.NSComparisonResult.h>
#include <Uno.ULong.h>

namespace g{
namespace iOS{
namespace Foundation{

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/struct/$.uno(4311)
// -----------------------------------------------------------------------------------

// public extern struct _NSRange :4311
// {
uStructType* _NSRange_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(_NSRange);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("iOS.Foundation._NSRange", options);
    type->SetFields(0,
        ::g::Uno::ULong_typeof(), offsetof(::g::iOS::Foundation::_NSRange, Location), 0,
        ::g::Uno::ULong_typeof(), offsetof(::g::iOS::Foundation::_NSRange, Length), 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(6088)
// ---------------------------------------------------------------------------------

// public enum NSComparisonResult :6088
uEnumType* NSComparisonResult_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.Foundation.NSComparisonResult", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "NSOrderedAscending", -1LL,
        "NSOrderedSame", 0LL,
        "NSOrderedDescending", 1LL);
    return type;
}

}}} // ::g::iOS::Foundation
