// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Android.TextRenderer.h>
#include <Fuse.DrawContext.h>
#include <Fuse.LayoutParams.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>

namespace g{
namespace Fuse{
namespace Android{

// ../../../../usr/local/share/uno/Packages/Fuse.Android/0.24.6/$.uno(914)
// -----------------------------------------------------------------------

// public sealed extern class TextRenderer :914
// {
::g::Fuse::Controls::Graphics::ControlVisual_type* TextRenderer_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Graphics::ControlVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 58;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TextRenderer);
    options.TypeSize = sizeof(::g::Fuse::Controls::Graphics::ControlVisual_type);
    type = (::g::Fuse::Controls::Graphics::ControlVisual_type*)uClassType::New("Fuse.Android.TextRenderer", options);
    type->SetBase(::g::Fuse::Controls::Graphics::TextVisual_typeof());
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TextRenderer__GetMarginSize_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Controls::Graphics::Visual*, ::g::Fuse::DrawContext*))TextRenderer__OnDraw_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Graphics::ControlVisual_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Graphics::ControlVisual_type, interface1));
    type->SetFields(58);
    return type;
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp) :916
void TextRenderer__GetMarginSize_fn(TextRenderer* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :921
void TextRenderer__OnDraw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc)
{
}
// }

}}} // ::g::Fuse::Android
