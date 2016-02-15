// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <iOS.GLKit.GLKViewDrawableDepthFormat.h>

namespace g{
namespace iOS{
namespace GLKit{

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(4225)
// ---------------------------------------------------------------------------------

// public enum GLKViewDrawableDepthFormat :4225
uEnumType* GLKViewDrawableDepthFormat_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.GLKit.GLKViewDrawableDepthFormat", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "GLKViewDrawableDepthFormatNone", 0LL,
        "GLKViewDrawableDepthFormat16", 1LL,
        "GLKViewDrawableDepthFormat24", 2LL);
    return type;
}

}}} // ::g::iOS::GLKit
