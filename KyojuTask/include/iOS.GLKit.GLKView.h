// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.UIView.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace GLKit{struct GLKView;}}}
namespace g{namespace iOS{namespace OpenGLES{struct EAGLContext;}}}

namespace g{
namespace iOS{
namespace GLKit{

// public sealed extern class GLKView :24989
// {
::g::iOS::UIKit::UIView_type* GLKView_typeof();
void GLKView__ctor_8_fn(GLKView* __this);
void GLKView__bindDrawable_fn(GLKView* __this);
void GLKView__deleteDrawable_fn(GLKView* __this);
void GLKView__display_fn(GLKView* __this);
void GLKView__drawableDepthFormat_fn(GLKView* __this, int* __retval);
void GLKView__get_DrawableDepthFormat_fn(GLKView* __this, int* __retval);
void GLKView__set_DrawableDepthFormat_fn(GLKView* __this, int* value);
void GLKView__drawableHeight_fn(GLKView* __this, int* __retval);
void GLKView__drawableWidth_fn(GLKView* __this, int* __retval);
void GLKView__enableSetNeedsDisplay_fn(GLKView* __this, bool* __retval);
void GLKView__get_EnableSetNeedsDisplay_fn(GLKView* __this, bool* __retval);
void GLKView__set_EnableSetNeedsDisplay_fn(GLKView* __this, bool* value);
void GLKView__New9_fn(GLKView** __retval);
void GLKView__setContext_fn(GLKView* __this, ::g::iOS::OpenGLES::EAGLContext* context_);
void GLKView__setDrawableDepthFormat_fn(GLKView* __this, int* drawableDepthFormat_);
void GLKView__setEnableSetNeedsDisplay_fn(GLKView* __this, bool* enableSetNeedsDisplay_);

struct GLKView : ::g::iOS::UIKit::UIView
{
    void ctor_8();
    void bindDrawable();
    void deleteDrawable();
    void display();
    int drawableDepthFormat();
    int DrawableDepthFormat();
    void DrawableDepthFormat(int value);
    int drawableHeight();
    int drawableWidth();
    bool enableSetNeedsDisplay();
    bool EnableSetNeedsDisplay();
    void EnableSetNeedsDisplay(bool value);
    void setContext(::g::iOS::OpenGLES::EAGLContext* context_);
    void setDrawableDepthFormat(int drawableDepthFormat_);
    void setEnableSetNeedsDisplay(bool enableSetNeedsDisplay_);
    static GLKView* New9();
};
// }

}}} // ::g::iOS::GLKit
