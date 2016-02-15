// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Graphics.ControlVisual-1.h>
#include <Fuse.Controls.Graphics.Visual.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.Elements.TextWrapping.h>
#include <Fuse.Font.h>
#include <Fuse.iOS.Blitter.h>
#include <Fuse.iOS.FontCache.h>
#include <Fuse.iOS.iOSExtensions.h>
#include <Fuse.iOS.iOSInterop.h>
#include <Fuse.iOS.NSAttributedStringConstants.h>
#include <Fuse.iOS.TextRenderer.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.StyleProperty-2.h>
#include <iOS.CoreGraphics.CGBitmapInfo.h>
#include <iOS.CoreGraphics.CGColorSpaceRef.h>
#include <iOS.CoreGraphics.CGContextRef.h>
#include <iOS.CoreGraphics.CGPoint.h>
#include <iOS.CoreGraphics.CGRect.h>
#include <iOS.CoreGraphics.CGSize.h>
#include <iOS.CoreGraphics.Functions.h>
#include <iOS.Foundation._NSRange.h>
#include <iOS.Foundation.INSCopying.h>
#include <iOS.Foundation.NSArray.h>
#include <iOS.Foundation.NSAttributedString.h>
#include <iOS.Foundation.NSDictionary.h>
#include <iOS.Foundation.NSObject.h>
#include <iOS.Foundation.NSString.h>
#include <iOS.UIKit.Functions.h>
#include <iOS.UIKit.NSLayoutManager.h>
#include <iOS.UIKit.NSLineBreakMode.h>
#include <iOS.UIKit.NSMutableParagraphStyle.h>
#include <iOS.UIKit.NSParagraphStyle.h>
#include <iOS.UIKit.NSTextAlignment.h>
#include <iOS.UIKit.NSTextContainer.h>
#include <iOS.UIKit.NSTextStorage.h>
#include <iOS.UIKit.UIColor.h>
#include <iOS.UIKit.UIFont.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.ID.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLPixelFormat.h>
#include <OpenGL.GLPixelType.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureTarget.h>
#include <UIKit/NSAttributedString.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.ULong.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
#include <Fuse.LayoutParams.h>
static uString* STRINGS[1];
static uType* TYPES[26];

namespace g{
namespace Fuse{
namespace iOS{

// public sealed extern class TextRenderer :1096
// {
::g::Fuse::Controls::Graphics::ControlVisual_type* TextRenderer_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Graphics::ControlVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 69;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TextRenderer);
    options.TypeSize = sizeof(::g::Fuse::Controls::Graphics::ControlVisual_type);
    type = (::g::Fuse::Controls::Graphics::ControlVisual_type*)uClassType::New("Fuse.iOS.TextRenderer", options);
    type->SetBase(::g::Fuse::Controls::Graphics::TextVisual_typeof());
    type->fp_ctor_ = (void*)TextRenderer__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))TextRenderer__Attach_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))TextRenderer__Detach_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TextRenderer__GetMarginSize_fn;
    type->fp_get_LocalRenderBounds = (void(*)(::g::Fuse::Node*, ::g::Uno::Rect*))TextRenderer__get_LocalRenderBounds_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Controls::Graphics::Visual*, ::g::Fuse::DrawContext*))TextRenderer__OnDraw_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::STRINGS[0] = uString::Const("Failed to create CGBitmapContext");
    ::TYPES[0] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[1] = ::g::Fuse::Controls::Graphics::ControlVisual_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof());
    ::TYPES[2] = ::g::Uno::EventHandler_typeof();
    ::TYPES[3] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[4] = ::g::Fuse::LayoutParams_typeof();
    ::TYPES[5] = ::g::Uno::Rect_typeof();
    ::TYPES[6] = ::g::Fuse::IViewport_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[8] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::iOS::Foundation::INSCopying_typeof(), ::g::ObjC::ID_typeof());
    ::TYPES[9] = ::g::iOS::Foundation::INSCopying_typeof();
    ::TYPES[10] = ::g::Fuse::iOS::NSAttributedStringConstants_typeof();
    ::TYPES[11] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[12] = ::g::Fuse::Controls::Graphics::Visual_typeof();
    ::TYPES[13] = ::g::Uno::Int2_typeof();
    ::TYPES[14] = ::g::Uno::Graphics::Texture2D_typeof();
    ::TYPES[15] = ::g::Uno::IntPtr_typeof();
    ::TYPES[16] = ::g::Uno::ULong_typeof();
    ::TYPES[17] = ::g::Uno::Double_typeof();
    ::TYPES[18] = ::g::Uno::Float_typeof();
    ::TYPES[19] = ::g::Uno::Float2_typeof();
    ::TYPES[20] = ::g::OpenGL::GLTextureHandle_typeof();
    ::TYPES[21] = ::g::Fuse::iOS::Blitter_typeof();
    ::TYPES[22] = ::g::Fuse::Font_typeof();
    ::TYPES[23] = ::g::iOS::CoreGraphics::CGPoint_typeof();
    ::TYPES[24] = ::g::iOS::CoreGraphics::CGRect_typeof();
    ::TYPES[25] = ::g::iOS::CoreGraphics::CGSize_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Graphics::ControlVisual_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Graphics::ControlVisual_type, interface1));
    type->SetFields(58,
        ::g::iOS::CoreGraphics::CGColorSpaceRef_typeof(), offsetof(::g::Fuse::iOS::TextRenderer, _colorSpace), 0,
        ::g::iOS::UIKit::UIFont_typeof(), offsetof(::g::Fuse::iOS::TextRenderer, _font), 0,
        ::g::iOS::UIKit::NSLayoutManager_typeof(), offsetof(::g::Fuse::iOS::TextRenderer, _layoutManager), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::TextRenderer, _layoutValid), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::iOS::TextRenderer, _pixelBounds), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::iOS::TextRenderer, _size), 0,
        ::g::iOS::UIKit::NSMutableParagraphStyle_typeof(), offsetof(::g::Fuse::iOS::TextRenderer, _style), 0,
        ::g::iOS::UIKit::UIColor_typeof(), offsetof(::g::Fuse::iOS::TextRenderer, _textColor), 0,
        ::g::iOS::UIKit::NSTextContainer_typeof(), offsetof(::g::Fuse::iOS::TextRenderer, _textContainer), 0,
        ::g::iOS::UIKit::NSTextStorage_typeof(), offsetof(::g::Fuse::iOS::TextRenderer, _textStorage), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::iOS::TextRenderer, _texture), 0);
    return type;
}

// public TextRenderer() :1109
void TextRenderer__ctor_4_fn(TextRenderer* __this)
{
    __this->ctor_4();
}

// protected override sealed void Attach() :1121
void TextRenderer__Attach_fn(TextRenderer* __this)
{
    ::g::Fuse::Controls::TextControl* ret3;
    ::g::Fuse::Controls::TextControl* ret4;
    ::g::Fuse::Controls::TextControl* ret5;
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret3), ret3))->add_TextLayoutPropertyChanged(uDelegate::New(::TYPES[2/*Uno.EventHandler*/], (void*)TextRenderer__OnTextLayoutPropertyChanged1_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret4), ret4))->add_TextRenderPropertyChanged(uDelegate::New(::TYPES[2/*Uno.EventHandler*/], (void*)TextRenderer__OnTextRenderPropertyChanged1_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret5), ret5))->add_ValueChanged(uDelegate::New(::TYPES[3/*Uno.UX.ValueChangedHandler<string>*/], (void*)TextRenderer__OnValueChanged1_fn, __this));
    ::g::Fuse::Controls::Graphics::TextVisual__Attach_fn(__this);
}

// protected override sealed void Detach() :1129
void TextRenderer__Detach_fn(TextRenderer* __this)
{
    ::g::Fuse::Controls::TextControl* ret6;
    ::g::Fuse::Controls::TextControl* ret7;
    ::g::Fuse::Controls::TextControl* ret8;
    ::g::Fuse::Controls::Graphics::TextVisual__Detach_fn(__this);
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret6), ret6))->remove_TextLayoutPropertyChanged(uDelegate::New(::TYPES[2/*Uno.EventHandler*/], (void*)TextRenderer__OnTextLayoutPropertyChanged1_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret7), ret7))->remove_TextRenderPropertyChanged(uDelegate::New(::TYPES[2/*Uno.EventHandler*/], (void*)TextRenderer__OnTextRenderPropertyChanged1_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret8), ret8))->remove_ValueChanged(uDelegate::New(::TYPES[3/*Uno.UX.ValueChangedHandler<string>*/], (void*)TextRenderer__OnValueChanged1_fn, __this));
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp) :1238
void TextRenderer__GetMarginSize_fn(TextRenderer* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 size = ::g::Uno::Float2__New2(lp_.HasX() ? ::g::Uno::Math::Max1(lp_.X(), 0.0f) : FLT_INF, lp_.HasY() ? ::g::Uno::Math::Max1(lp_.Y(), 0.0f) : FLT_INF);
    __this->UpdateLayout1(size);
    return *__retval = ::g::Uno::Float2__op_Division1(__this->_pixelBounds.Size(), ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[6/*Fuse.IViewport*/]))), void();
}

// private iOS.Foundation.NSDictionary GetTextAttributes() :1217
void TextRenderer__GetTextAttributes_fn(TextRenderer* __this, ::g::iOS::Foundation::NSDictionary** __retval)
{
    *__retval = __this->GetTextAttributes();
}

// private void InvalidateTexture() :1149
void TextRenderer__InvalidateTexture_fn(TextRenderer* __this)
{
    __this->InvalidateTexture();
}

// public override sealed Uno.Rect get_LocalRenderBounds() :1231
void TextRenderer__get_LocalRenderBounds_fn(TextRenderer* __this, ::g::Uno::Rect* __retval)
{
    return *__retval = ::g::Uno::Rect__New2(::g::Uno::Float2__op_Division1(__this->_pixelBounds.Position(), ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[6/*Fuse.IViewport*/]))), ::g::Uno::Float2__op_Division1(__this->_pixelBounds.Size(), ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[6/*Fuse.IViewport*/])))), void();
}

// public TextRenderer New() :1109
void TextRenderer__New1_fn(TextRenderer** __retval)
{
    *__retval = TextRenderer::New1();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :1249
void TextRenderer__OnDraw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc)
{
    __this->UpdateLayout1(__this->ActualSize());
    ::g::Uno::Float4x4 m = uPtr(dc)->GetLocalToClipTransform(__this);
    ::g::Uno::Int2 pixelSize = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Ceil2(__this->_pixelBounds.Size()));

    if ((((pixelSize.X < 1) || (pixelSize.Y < 1)) || (pixelSize.X > ::g::Uno::Graphics::Texture2D::MaxSize())) || (pixelSize.Y > ::g::Uno::Graphics::Texture2D::MaxSize()))
        return;

    ::g::Uno::Float2 pointSize = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(pixelSize), ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[6/*Fuse.IViewport*/])));

    if (__this->_texture == NULL)
    {
        void* textureBuffer = malloc(pixelSize.X * pixelSize.Y * 4);

        if (::g::Uno::IntPtr::op_Equality(textureBuffer, ::g::Uno::IntPtr::Zero()))
            return;

        uint32_t flags = 8194;
        app::CGContextRef* imageContext = ::g::iOS::CoreGraphics::Functions::CGBitmapContextCreate(textureBuffer, (uint64_t)pixelSize.X, (uint64_t)pixelSize.Y, 8ULL, (uint64_t)(pixelSize.X * 4), __this->_colorSpace, flags);

        if (::g::Uno::IntPtr::op_Equality(imageContext, ::g::Uno::IntPtr::Zero()))
            U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Failed to c...*/]));

        ::g::iOS::UIKit::Functions::UIGraphicsPushContext(imageContext);
        ::g::iOS::CoreGraphics::CGRect rect = ::g::iOS::CoreGraphics::Functions::CGRectMake(0.0, 0.0, (double)pixelSize.X, (double)pixelSize.Y);
        ::g::iOS::CoreGraphics::Functions::CGContextClearRect(imageContext, rect);
        ::g::iOS::Foundation::_NSRange glyphRange = uPtr(__this->_layoutManager)->glyphRangeForTextContainer(__this->_textContainer);
        ::g::iOS::CoreGraphics::CGPoint pos = ::g::iOS::CoreGraphics::Functions::CGPointMake((double)-__this->_pixelBounds.Position().X, (double)-__this->_pixelBounds.Position().Y);
        uPtr(__this->_layoutManager)->drawGlyphsForGlyphRangeAtPoint(glyphRange, pos);
        ::g::iOS::UIKit::Functions::UIGraphicsPopContext();
        ::g::iOS::CoreGraphics::Functions::CGContextRelease(imageContext);
        uint32_t textureHandle = ::g::OpenGL::GL::CreateTexture();
        ::g::OpenGL::GL::BindTexture(3553, textureHandle);
        ::g::OpenGL::GL::TexImage2D1(3553, 0, 6408, pixelSize.X, pixelSize.Y, 0, 32993, 5121, textureBuffer);
        free(textureBuffer);
        textureBuffer = ::g::Uno::IntPtr::Zero();
        ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero());
        __this->_texture = ::g::Uno::Graphics::Texture2D::New2(textureHandle, pixelSize, 1, 3);
    }

    uPtr(::g::Fuse::iOS::Blitter::Singleton())->Blit(__this->_texture, ::g::Uno::Float2__op_Division1(__this->_pixelBounds.Position(), ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[6/*Fuse.IViewport*/]))), pointSize, m);
}

// private void OnTextLayoutPropertyChanged(object sender, Uno.EventArgs args) :1139
void TextRenderer__OnTextLayoutPropertyChanged1_fn(TextRenderer* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnTextLayoutPropertyChanged1(sender, args);
}

// private void OnTextRenderPropertyChanged(object sender, Uno.EventArgs args) :1144
void TextRenderer__OnTextRenderPropertyChanged1_fn(TextRenderer* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnTextRenderPropertyChanged1(sender, args);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) :1158
void TextRenderer__OnValueChanged1_fn(TextRenderer* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged1(sender, args);
}

// private void UpdateLayout(float2 size) :1163
void TextRenderer__UpdateLayout1_fn(TextRenderer* __this, ::g::Uno::Float2* size)
{
    __this->UpdateLayout1(*size);
}

// public TextRenderer() [instance] :1109
void TextRenderer::ctor_4()
{
    ctor_3();
    _colorSpace = ::g::iOS::CoreGraphics::Functions::CGColorSpaceCreateDeviceRGB();
    _layoutManager = ::g::iOS::UIKit::NSLayoutManager::New5();
    _textContainer = ::g::iOS::UIKit::NSTextContainer::New5();
    _style = ::g::iOS::UIKit::NSMutableParagraphStyle::New8(uPtr(::g::iOS::UIKit::NSParagraphStyle::_defaultParagraphStyle())->mutableCopy());
    uPtr(_layoutManager)->init();
}

// private iOS.Foundation.NSDictionary GetTextAttributes() [instance] :1217
::g::iOS::Foundation::NSDictionary* TextRenderer::GetTextAttributes()
{
    ::g::Uno::Collections::Dictionary* collection1;
    return ::g::Fuse::iOS::iOSInterop::ToNSDictionary((collection1 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[8/*Uno.Collections.Dictionary<iOS.Foundation.INSCopying, ObjC.ID>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), (uObject*)::g::Fuse::iOS::NSAttributedStringConstants::NSFontAttributeName(), uCRef(::g::ObjC::Bindings::Object::op_Implicit(_font))), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), (uObject*)::g::Fuse::iOS::NSAttributedStringConstants::NSForegroundColorAttributeName(), uCRef(::g::ObjC::Bindings::Object::op_Implicit(_textColor))), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), (uObject*)::g::Fuse::iOS::NSAttributedStringConstants::NSParagraphStyleAttributeName(), uCRef(::g::ObjC::Bindings::Object::op_Implicit(_style))), collection1));
}

// private void InvalidateTexture() [instance] :1149
void TextRenderer::InvalidateTexture()
{
    if (_texture != NULL)
    {
        uPtr(_texture)->Dispose();
        _texture = NULL;
    }
}

// private void OnTextLayoutPropertyChanged(object sender, Uno.EventArgs args) [instance] :1139
void TextRenderer::OnTextLayoutPropertyChanged1(uObject* sender, ::g::Uno::EventArgs* args)
{
    _layoutValid = false;
}

// private void OnTextRenderPropertyChanged(object sender, Uno.EventArgs args) [instance] :1144
void TextRenderer::OnTextRenderPropertyChanged1(uObject* sender, ::g::Uno::EventArgs* args)
{
    _layoutValid = false;
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) [instance] :1158
void TextRenderer::OnValueChanged1(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    _layoutValid = false;
}

// private void UpdateLayout(float2 size) [instance] :1163
void TextRenderer::UpdateLayout1(::g::Uno::Float2 size)
{
    bool ret9;
    ::g::Fuse::Controls::TextControl* ret10;
    ::g::Fuse::Controls::TextControl* ret11;
    ::g::Fuse::Controls::TextControl* ret12;
    ::g::Fuse::Controls::TextControl* ret13;
    ::g::Fuse::Controls::TextControl* ret14;
    ::g::Fuse::Controls::TextControl* ret15;
    ::g::Fuse::Controls::TextControl* ret16;
    ::g::Fuse::Controls::TextControl* ret17;
    ::g::Fuse::Controls::TextControl* ret18;
    ::g::Fuse::Controls::TextControl* ret19;
    size = ::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Multiply1(size, ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(Viewport()), ::TYPES[6/*Fuse.IViewport*/]))));

    if (_layoutValid && ::g::Uno::Float2::op_Equality(_size, size))
        return;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Controls::TextControl::FontProperty()), (::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret10), ret10), &ret9), ret9))
        _font = ::g::Fuse::iOS::FontCache::GetFontFromFile(uPtr(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret11), ret11))->Font())->File(), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret12), ret12))->FontSize() * ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(Viewport()), ::TYPES[6/*Fuse.IViewport*/])));
    else
        _font = ::g::iOS::UIKit::UIFont::_systemFontOfSize((double)(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret13), ret13))->FontSize() * ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(Viewport()), ::TYPES[6/*Fuse.IViewport*/]))));

    _textColor = ::g::Fuse::iOS::iOSExtensions::ToUIColor(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret14), ret14))->RenderColor());

    while (uPtr(uPtr(_layoutManager)->textContainers())->count() > 0ULL)
        uPtr(_layoutManager)->removeTextContainerAtIndex(0ULL);

    uPtr(_textContainer)->initWithSize(::g::iOS::CoreGraphics::Functions::CGSizeMake((double)size.X, (double)size.Y));
    uPtr(_textContainer)->setLineFragmentPadding(0.0);
    uPtr(_layoutManager)->addTextContainer(_textContainer);
    uPtr(_style)->setAlignment(::g::Fuse::iOS::iOSInterop::ToNSTextAlignment(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret15), ret15))->TextAlignment()));
    uPtr(_style)->setLineSpacing((double)(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret16), ret16))->LineSpacing() * ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret17), ret17))->Viewport()), ::TYPES[6/*Fuse.IViewport*/]))));

    switch (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret18), ret18))->TextWrapping())
    {
        case 0:
        {
            uPtr(_style)->setLineBreakMode(4);
            break;
        }
        case 1:
        {
            uPtr(_style)->setLineBreakMode(0);
            break;
        }
    }

    _textStorage = ::g::iOS::UIKit::NSTextStorage::New9();
    uPtr(_textStorage)->initWithStringAttributes(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret19), ret19))->RenderValue(), GetTextAttributes());
    uPtr(_layoutManager)->setTextStorage(_textStorage);
    _size = size;
    _layoutValid = true;
    ::g::iOS::Foundation::_NSRange glyphRange = uPtr(_layoutManager)->glyphRangeForTextContainer(_textContainer);
    ::g::iOS::CoreGraphics::CGRect cgRect = uPtr(_layoutManager)->boundingRectForGlyphRangeInTextContainer(glyphRange, _textContainer);
    _pixelBounds = ::g::Uno::Rect__New2(::g::Uno::Float2__New2((float)cgRect.Origin.X, (float)-cgRect.Origin.Y), ::g::Uno::Float2__New2((float)cgRect.Size.Width, (float)cgRect.Size.Height));
    InvalidateRenderBounds();
    InvalidateTexture();
}

// public TextRenderer New() [static] :1109
TextRenderer* TextRenderer::New1()
{
    TextRenderer* obj2 = (TextRenderer*)uNew(TextRenderer_typeof());
    obj2->ctor_4();
    return obj2;
}
// }

}}} // ::g::Fuse::iOS
