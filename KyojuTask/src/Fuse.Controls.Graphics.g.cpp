// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControls_bundle.h>
#include <Fuse.Controls.FillRule.h>
#include <Fuse.Controls.FitMode.h>
#include <Fuse.Controls.Graphics.CircleVisual.h>
#include <Fuse.Controls.Graphics.ControlVisual-1.h>
#include <Fuse.Controls.Graphics.DefaultTextVisual.h>
#include <Fuse.Controls.Graphics.EllipseVisual.h>
#include <Fuse.Controls.Graphics.ImageElementDraw.h>
#include <Fuse.Controls.Graphics.ImageVisual.h>
#include <Fuse.Controls.Graphics.PathShapeVisual-1.h>
#include <Fuse.Controls.Graphics.PathVisual.h>
#include <Fuse.Controls.Graphics.RectangleVisual.h>
#include <Fuse.Controls.Graphics.RegularPolygonVisual.h>
#include <Fuse.Controls.Graphics.ShapeVisual-1.h>
#include <Fuse.Controls.Graphics.StarVisual.h>
#include <Fuse.Controls.Graphics.TextVisual.h>
#include <Fuse.Controls.Graphics.Visual.h>
#include <Fuse.Controls.Internal.DefaultTextRenderer.h>
#include <Fuse.Controls.Internal.WordWrapInfo.h>
#include <Fuse.Controls.Internal.WordWrapper.h>
#include <Fuse.Controls.Internal.WrappedLine.h>
#include <Fuse.Controls.PathScaleMode.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Antialiasing.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.PathGeometry.h>
#include <Fuse.Drawing.PathGeometryExtensions.h>
#include <Fuse.Drawing.PathGeometryRenderer.h>
#include <Fuse.Drawing.Primitives.Circle.h>
#include <Fuse.Drawing.Primitives.Rectangle.h>
#include <Fuse.Drawing.Primitives.Wedge.h>
#include <Fuse.Drawing.RendererContext.h>
#include <Fuse.Drawing.ResampleMode.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Drawing.WindingRules.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Internal.Scale9Rectangle.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.Elements.TextWrapping.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.Font.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.Internal.ImageContainer.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Node.h>
#include <Fuse.NodeBounds.h>
#include <Fuse.Resources.ImageSource.h>
#include <Uno.Action.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Content.Fonts.FontFace.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.Rect.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
#include <Uno.Vector.h>
static uString* STRINGS[3];
static uType* TYPES[65];

namespace g{
namespace Fuse{
namespace Controls{
namespace Graphics{

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Graphics/$.uno(772)
// ---------------------------------------------------------------------------------

// public sealed class CircleVisual :772
// {
::g::Fuse::Controls::Graphics::ShapeVisual_type* CircleVisual_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Graphics::ShapeVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 58;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(CircleVisual);
    options.TypeSize = sizeof(::g::Fuse::Controls::Graphics::ShapeVisual_type);
    type = (::g::Fuse::Controls::Graphics::ShapeVisual_type*)uClassType::New("Fuse.Controls.Graphics.CircleVisual", options);
    type->SetBase(::g::Fuse::Controls::Graphics::ShapeVisual_typeof()->MakeType(::g::Fuse::Controls::Circle_typeof()));
    type->fp_ctor_ = (void*)CircleVisual__New1_fn;
    type->fp_DrawFill = (void(*)(::g::Fuse::Controls::Graphics::ShapeVisual*, ::g::Fuse::DrawContext*, ::g::Fuse::Drawing::Brush*))CircleVisual__DrawFill_fn;
    type->fp_DrawStroke = (void(*)(::g::Fuse::Controls::Graphics::ShapeVisual*, ::g::Fuse::DrawContext*, ::g::Fuse::Drawing::Stroke*))CircleVisual__DrawStroke_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Node*, ::g::Fuse::HitTestContext*))CircleVisual__OnHitTest_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[0] = ::g::Fuse::Controls::Circle_typeof();
    ::TYPES[1] = ::g::Fuse::Drawing::Primitives::Wedge_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[3] = ::g::Fuse::Controls::Shape_typeof();
    ::TYPES[4] = ::g::Fuse::Drawing::Primitives::Circle_typeof();
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[6] = ::g::Fuse::HitTestContext_typeof();
    ::TYPES[7] = ::g::Uno::Float2_typeof();
    ::TYPES[8] = ::g::Fuse::Node_typeof();
    ::TYPES[9] = ::g::Fuse::Controls::Graphics::ShapeVisual_typeof()->MakeType(::g::Fuse::Controls::Circle_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Graphics::ShapeVisual_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Graphics::ShapeVisual_type, interface1));
    type->SetFields(58);
    return type;
}

// public generated CircleVisual() :772
void CircleVisual__ctor_4_fn(CircleVisual* __this)
{
    __this->ctor_4();
}

// private Fuse.Controls.Circle get_Circle() :774
void CircleVisual__get_Circle_fn(CircleVisual* __this, ::g::Fuse::Controls::Circle** __retval)
{
    *__retval = __this->Circle();
}

// protected override sealed void DrawFill(Fuse.DrawContext dc, Fuse.Drawing.Brush fill) :776
void CircleVisual__DrawFill_fn(CircleVisual* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill)
{
    float startAngle = uPtr(__this->Circle())->StartAngle();
    float endAngle = uPtr(__this->Circle())->EffectiveEndAngle();

    if (uPtr(__this->Circle())->UseAngle())
        uPtr(::g::Fuse::Drawing::Primitives::Wedge::Singleton())->Fill(dc, __this->Circle(), uPtr(__this->Circle())->Radius(), fill, uPtr(__this->Circle())->Center(), startAngle, endAngle, uPtr(__this->Circle())->Smoothness());
    else
        uPtr(::g::Fuse::Drawing::Primitives::Circle::Singleton())->Fill(dc, __this->Circle(), uPtr(__this->Circle())->Radius(), fill, uPtr(__this->Circle())->Center(), uPtr(__this->Circle())->Smoothness());
}

// protected override sealed void DrawStroke(Fuse.DrawContext dc, Fuse.Drawing.Stroke stroke) :789
void CircleVisual__DrawStroke_fn(CircleVisual* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke)
{
    float startAngle = uPtr(__this->Circle())->StartAngle();
    float endAngle = uPtr(__this->Circle())->EffectiveEndAngle();

    if (uPtr(__this->Circle())->UseAngle())
        uPtr(::g::Fuse::Drawing::Primitives::Wedge::Singleton())->Stroke(dc, __this->Circle(), uPtr(__this->Circle())->Radius(), stroke, uPtr(__this->Circle())->Center(), startAngle, endAngle, uPtr(__this->Circle())->Smoothness());
    else
        uPtr(::g::Fuse::Drawing::Primitives::Circle::Singleton())->Stroke(dc, __this->Circle(), uPtr(__this->Circle())->Radius(), stroke, uPtr(__this->Circle())->Center(), uPtr(__this->Circle())->Smoothness());
}

// public generated CircleVisual New() :772
void CircleVisual__New1_fn(CircleVisual** __retval)
{
    *__retval = CircleVisual::New1();
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :802
void CircleVisual__OnHitTest_fn(CircleVisual* __this, ::g::Fuse::HitTestContext* htc)
{
    if (!uPtr(__this->Circle())->HasFills() || (::g::Uno::Vector::Distance(uPtr(htc)->LocalPoint(), uPtr(__this->Circle())->Center()) > uPtr(__this->Circle())->Radius()))
        return;

    if (uPtr(__this->Circle())->UseAngle())
    {
        ::g::Uno::Float2 off = ::g::Uno::Float2__op_Subtraction2(uPtr(htc)->LocalPoint(), uPtr(__this->Circle())->Center());
        float localAngle = ::g::Uno::Math::Atan22(off.Y, off.X);

        if (!::g::Fuse::Controls::Circle::AngleInRange(localAngle, uPtr(__this->Circle())->StartAngle(), uPtr(__this->Circle())->EffectiveEndAngle()))
            return;
    }

    uPtr(htc)->Hit(__this);
}

// public generated CircleVisual() [instance] :772
void CircleVisual::ctor_4()
{
    ctor_3();
}

// private Fuse.Controls.Circle get_Circle() [instance] :774
::g::Fuse::Controls::Circle* CircleVisual::Circle()
{
    return uCast< ::g::Fuse::Controls::Circle*>(Shape(), ::TYPES[0/*Fuse.Controls.Circle*/]);
}

// public generated CircleVisual New() [static] :772
CircleVisual* CircleVisual::New1()
{
    CircleVisual* obj1 = (CircleVisual*)uNew(CircleVisual_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Graphics/$.uno(6)
// -------------------------------------------------------------------------------

// public abstract class ControlVisual<T> :6
// {
ControlVisual_type* ControlVisual_typeof()
{
    static uSStrong<ControlVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 58;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ControlVisual);
    options.TypeSize = sizeof(ControlVisual_type);
    type = (ControlVisual_type*)uClassType::New("Fuse.Controls.Graphics.ControlVisual`1", options);
    type->SetBase(::g::Fuse::Controls::Graphics::Visual_typeof());
    type->fp_get_HitTestLocalBounds = (void(*)(::g::Fuse::Node*, ::g::Fuse::NodeBounds**))ControlVisual__get_HitTestLocalBounds_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))ControlVisual__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))ControlVisual__OnUnrooted_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::STRINGS[0] = uString::Const(" must be rooted in the subtree of a ");
    ::TYPES[8] = ::g::Fuse::Node_typeof();
    ::TYPES[10] = uObject_typeof();
    ::TYPES[11] = ::g::Fuse::Controls::Graphics::Visual_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(ControlVisual_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(ControlVisual_type, interface1));
    type->SetFields(57,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// protected generated ControlVisual() :6
void ControlVisual__ctor_2_fn(ControlVisual* __this)
{
    __this->ctor_2();
}

// protected T get_Control() :20
void ControlVisual__get_Control_fn(ControlVisual* __this, uTRef __retval)
{
    return __retval.Store(__this->_control()), void();
}

// private T FindControl() :8
void ControlVisual__FindControl_fn(ControlVisual* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(ControlVisual_typeof())->T(0),
    };
    ::g::Fuse::Node* p = __this;

    while (p != NULL)
    {
        if (uIs(p, __types[0]))
            return __retval.Store(__types[0], uUnboxAny(__types[0], p)), void();

        p = uPtr(p)->Parent();
    }

    return __retval.Store(__types[0], uT(__types[0], U_ALLOCA(__types[0]->ValueSize))), void();
}

// protected override sealed Fuse.NodeBounds get_HitTestLocalBounds() :46
void ControlVisual__get_HitTestLocalBounds_fn(ControlVisual* __this, ::g::Fuse::NodeBounds** __retval)
{
    return *__retval = ::g::Fuse::NodeBounds::Rect(::g::Uno::Float2__New1(0.0f), __this->ActualSize()), void();
}

// protected override sealed void OnRooted() :22
void ControlVisual__OnRooted_fn(ControlVisual* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(ControlVisual_typeof())->T(0),
    };
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_control() = (ControlVisual__FindControl_fn(__this, &ret1), ret1);

    if (uBoxPtr(__types[0], __this->_control()) == NULL)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(__this, ::STRINGS[0/*" must be ro...*/]), __types[0])));

    __this->Attach();
}

// protected override sealed void OnUnrooted() :33
void ControlVisual__OnUnrooted_fn(ControlVisual* __this)
{
    __this->Detach();
    __this->_control().Default();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// protected generated ControlVisual() [instance] :6
void ControlVisual::ctor_2()
{
    ctor_1();
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Graphics/$.uno(64)
// --------------------------------------------------------------------------------

// public sealed class DefaultTextVisual :64
// {
// static DefaultTextVisual() :64
static void DefaultTextVisual__cctor_1_fn(uType* __type)
{
    DefaultTextVisual::_textRenderers_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[12/*Uno.Collections.Dictionary<Fuse.Font, Fuse.Controls.Internal.DefaultTextRenderer>*/]));
}

::g::Fuse::Controls::Graphics::ControlVisual_type* DefaultTextVisual_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Graphics::ControlVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 65;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(DefaultTextVisual);
    options.TypeSize = sizeof(::g::Fuse::Controls::Graphics::ControlVisual_type);
    type = (::g::Fuse::Controls::Graphics::ControlVisual_type*)uClassType::New("Fuse.Controls.Graphics.DefaultTextVisual", options);
    type->SetBase(::g::Fuse::Controls::Graphics::TextVisual_typeof());
    type->fp_cctor_ = DefaultTextVisual__cctor_1_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))DefaultTextVisual__GetMarginSize_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Controls::Graphics::Visual*, ::g::Fuse::DrawContext*))DefaultTextVisual__OnDraw_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[12] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Font_typeof(), ::g::Fuse::Controls::Internal::DefaultTextRenderer_typeof());
    ::TYPES[13] = ::g::Fuse::Controls::Graphics::ControlVisual_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof());
    ::TYPES[14] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[15] = ::g::Uno::String_typeof();
    ::TYPES[16] = ::g::Uno::Int_typeof();
    ::TYPES[17] = ::g::Fuse::LayoutParams_typeof();
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[18] = ::g::Fuse::Font_typeof();
    ::TYPES[8] = ::g::Fuse::Node_typeof();
    ::TYPES[19] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[20] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::Internal::WrappedLine_typeof());
    ::TYPES[21] = ::g::Uno::String_typeof()->Array();
    ::TYPES[22] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Controls::Internal::WrappedLine_typeof());
    ::TYPES[23] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Fuse::Controls::Internal::WrappedLine_typeof());
    ::TYPES[24] = ::g::Fuse::Controls::Internal::WordWrapInfo_typeof();
    ::TYPES[25] = ::g::Uno::Float_typeof();
    ::TYPES[7] = ::g::Uno::Float2_typeof();
    ::TYPES[26] = ::g::Fuse::Controls::Internal::WrappedLine_typeof()->Array();
    ::TYPES[27] = ::g::Fuse::Controls::Internal::WrappedLine_typeof();
    ::TYPES[11] = ::g::Fuse::Controls::Graphics::Visual_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Graphics::ControlVisual_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Graphics::ControlVisual_type, interface1));
    type->SetFields(58,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::Graphics::DefaultTextVisual, _cacheValue), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Graphics::DefaultTextVisual, _maxTextLength), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Graphics::DefaultTextVisual, _textBoundsSize), 0,
        ::g::Fuse::Controls::Internal::WordWrapInfo_typeof(), offsetof(::g::Fuse::Controls::Graphics::DefaultTextVisual, _wrapInfo), 0,
        ::g::Fuse::Controls::Internal::WrappedLine_typeof()->Array(), offsetof(::g::Fuse::Controls::Graphics::DefaultTextVisual, _wrappedLines), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Graphics::DefaultTextVisual, _wrapWidth), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Font_typeof(), ::g::Fuse::Controls::Internal::DefaultTextRenderer_typeof()), (uintptr_t)&::g::Fuse::Controls::Graphics::DefaultTextVisual::_textRenderers_, uFieldFlagsStatic);
    return type;
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp) :88
void DefaultTextVisual__GetMarginSize_fn(DefaultTextVisual* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::Controls::TextControl* ret14;
    ::g::Fuse::Controls::TextControl* ret15;
    ::g::Fuse::Controls::TextControl* ret16;
    ::g::Fuse::Controls::TextControl* ret17;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::Controls::TextControl* ret18;

    if ((((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret14), ret14) == NULL) || ::g::Uno::String::op_Equality(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret15), ret15))->Value(), NULL)) || (uPtr(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret16), ret16))->Value())->Length() == 0))
        return *__retval = ::g::Uno::Float2__New1(0.0f), void();

    bool hasWrap = (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret17), ret17))->TextWrapping() == 1) && (lp_.HasX() || lp_.HasMaxX());
    float wrapWidth = hasWrap ? lp_.HasX() ? lp_.X() : lp_.MaxX() : FLT_INF;
    __this->InitWrap(wrapWidth, uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret18), ret18))->Value());
    return *__retval = __this->_textBoundsSize, void();
}

// internal static Fuse.Controls.Internal.DefaultTextRenderer GetTextRenderer(Fuse.Font f) :68
void DefaultTextVisual__GetTextRenderer_fn(::g::Fuse::Font* f, ::g::Fuse::Controls::Internal::DefaultTextRenderer** __retval)
{
    *__retval = DefaultTextVisual::GetTextRenderer(f);
}

// private void InitWrap(float wrapWidth, string value) :99
void DefaultTextVisual__InitWrap_fn(DefaultTextVisual* __this, float* wrapWidth, uString* value)
{
    __this->InitWrap(*wrapWidth, value);
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :149
void DefaultTextVisual__OnDraw_fn(DefaultTextVisual* __this, ::g::Fuse::DrawContext* dc)
{
    uArray* array10;
    int index11;
    int length12;
    ::g::Fuse::Controls::TextControl* ret25;
    ::g::Fuse::Controls::TextControl* ret26;
    ::g::Fuse::Controls::TextControl* ret27;
    ::g::Fuse::Controls::TextControl* ret28;

    if (::g::Uno::String::op_Equality(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret25), ret25))->Value(), NULL))
        return;

    __this->InitWrap(__this->ActualSize().X, uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret26), ret26))->Value());
    uPtr(uPtr(__this->_wrapInfo)->TextRenderer)->BeginRendering(uPtr(__this->_wrapInfo)->FontSize, uPtr(__this->_wrapInfo)->AbsoluteZoom, __this->WorldTransform(), __this->ActualSize(), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret27), ret27))->TextColor(), __this->_maxTextLength);
    float y = 0.0f;

    for (array10 = __this->_wrappedLines, index11 = 0, length12 = uPtr(array10)->Length(); index11 < length12; ++index11)
    {
        ::g::Fuse::Controls::Internal::WrappedLine* wrappedLine = uPtr(array10)->Strong< ::g::Fuse::Controls::Internal::WrappedLine*>(index11);
        float x = uPtr(wrappedLine)->GetXOffset(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret28), ret28))->TextAlignment(), __this->ActualSize().X, __this->AbsoluteZoom());
        uPtr(uPtr(__this->_wrapInfo)->TextRenderer)->DrawLine(dc, x * uPtr(__this->_wrapInfo)->AbsoluteZoom, y, wrappedLine->Text);
        y = y + (uPtr(__this->_wrapInfo)->LineHeight * uPtr(__this->_wrapInfo)->AbsoluteZoom);
    }

    uPtr(uPtr(__this->_wrapInfo)->TextRenderer)->EndRendering(dc);
}

uSStrong< ::g::Uno::Collections::Dictionary*> DefaultTextVisual::_textRenderers_;

// private void InitWrap(float wrapWidth, string value) [instance] :99
void DefaultTextVisual::InitWrap(float wrapWidth, uString* value)
{
    uArray* array7;
    int index8;
    int length9;
    ::g::Fuse::Controls::TextControl* ret20;
    ::g::Fuse::Controls::TextControl* ret21;
    ::g::Fuse::Controls::TextControl* ret22;
    ::g::Fuse::Controls::TextControl* ret23;
    ::g::Fuse::Controls::TextControl* ret24;

    if (((_wrapInfo != NULL) && (_wrapWidth == wrapWidth)) && ::g::Uno::String::op_Equality(_cacheValue, value))
        return;

    _wrapWidth = wrapWidth;
    _cacheValue = value;
    ::g::Fuse::Font* font = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret20), ret20))->Font();
    ::g::Fuse::Controls::Internal::DefaultTextRenderer* renderer = DefaultTextVisual::GetTextRenderer(font);
    float fontSize = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret21), ret21))->FontSize();
    _wrapInfo = ::g::Fuse::Controls::Internal::WordWrapInfo::New1(renderer, uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret22), ret22))->TextWrapping() == 1, wrapWidth, fontSize, uPtr(renderer)->GetLineHeight(fontSize), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret23), ret23))->LineSpacing(), AbsoluteZoom());
    uArray* lines = ::g::Uno::String::Split(uPtr(value), uArray::Init<int>(::TYPES[19/*char[]*/], 1, 10));
    ::g::Uno::Collections::List* wrappedLines = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[20/*Uno.Collections.List<Fuse.Controls.Internal.WrappedLine>*/]);

    if (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret24), ret24))->TextWrapping() == 1)

        for (int index2 = 0, length3 = uPtr(lines)->Length(); index2 < length3; ++index2)
        {
            uString* line = uPtr(lines)->Strong<uString*>(index2);
            uPtr(wrappedLines)->AddRange((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[23/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Controls.Internal.WrappedLine>*/], ::g::Fuse::Controls::Internal::WordWrapper::WrapLine(_wrapInfo, line))));
        }
    else
    {
        int y = 0;

        for (int index5 = 0, length6 = uPtr(lines)->Length(); index5 < length6; ++index5)
        {
            uString* line1 = uPtr(lines)->Strong<uString*>(index5);
            ::g::Uno::Float2 lineSize = uPtr(uPtr(_wrapInfo)->TextRenderer)->MeasureStringVirtual(uPtr(_wrapInfo)->FontSize, uPtr(_wrapInfo)->AbsoluteZoom, line1);
            ::g::Fuse::Controls::Internal::WrappedLine* wrappedLine = ::g::Fuse::Controls::Internal::WrappedLine::New1(line1, 0, (float)(y++), lineSize.X);
            ::g::Uno::Collections::List__Add_fn(uPtr(wrappedLines), wrappedLine);
        }
    }

    _wrappedLines = ((uArray*)wrappedLines->ToArray());
    float maxWidth = 0.0f;
    float height = 0.0f;
    int maxTextLength = 0;

    for (array7 = _wrappedLines, index8 = 0, length9 = uPtr(array7)->Length(); index8 < length9; ++index8)
    {
        ::g::Fuse::Controls::Internal::WrappedLine* wrappedLine1 = uPtr(array7)->Strong< ::g::Fuse::Controls::Internal::WrappedLine*>(index8);
        maxWidth = ::g::Uno::Math::Max1(maxWidth, uPtr(wrappedLine1)->LineWidth);
        maxTextLength = maxTextLength + uPtr(wrappedLine1->Text)->Length();
        height = height + uPtr(_wrapInfo)->LineHeight;
    }

    _textBoundsSize = ::g::Uno::Float2__New2(maxWidth, height);
    _maxTextLength = maxTextLength;
}

// internal static Fuse.Controls.Internal.DefaultTextRenderer GetTextRenderer(Fuse.Font f) [static] :68
::g::Fuse::Controls::Internal::DefaultTextRenderer* DefaultTextVisual::GetTextRenderer(::g::Fuse::Font* f)
{
    DefaultTextVisual_typeof()->Init();
    bool ret19;
    ::g::Fuse::Controls::Internal::DefaultTextRenderer* tr;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(DefaultTextVisual::_textRenderers()), f, (void**)(&tr), &ret19), ret19))
    {
        tr = ::g::Fuse::Controls::Internal::DefaultTextRenderer::New1(uPtr(f)->FontFace());
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(DefaultTextVisual::_textRenderers()), f, tr);
    }

    return tr;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Graphics/$.uno(473)
// ---------------------------------------------------------------------------------

// public sealed class EllipseVisual :473
// {
::g::Fuse::Controls::Graphics::PathShapeVisual_type* EllipseVisual_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Graphics::PathShapeVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 61;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(EllipseVisual);
    options.TypeSize = sizeof(::g::Fuse::Controls::Graphics::PathShapeVisual_type);
    type = (::g::Fuse::Controls::Graphics::PathShapeVisual_type*)uClassType::New("Fuse.Controls.Graphics.EllipseVisual", options);
    type->SetBase(::g::Fuse::Controls::Graphics::PathShapeVisual_typeof()->MakeType(::g::Fuse::Controls::Ellipse_typeof()));
    type->fp_ctor_ = (void*)EllipseVisual__New1_fn;
    type->fp_UpdatePath = (void(*)(::g::Fuse::Controls::Graphics::PathShapeVisual*, ::g::Fuse::Drawing::PathGeometryRenderer*))EllipseVisual__UpdatePath_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[11] = ::g::Fuse::Controls::Graphics::Visual_typeof();
    ::TYPES[28] = ::g::Fuse::Drawing::PathGeometryRenderer_typeof();
    ::TYPES[29] = ::g::Fuse::Controls::Ellipse_typeof();
    ::TYPES[30] = ::g::Fuse::Controls::Graphics::ShapeVisual_typeof()->MakeType(::g::Fuse::Controls::Ellipse_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Graphics::PathShapeVisual_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Graphics::PathShapeVisual_type, interface1));
    type->SetFields(60,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Graphics::EllipseVisual, _cachedRadius), 0);
    return type;
}

// public generated EllipseVisual() :473
void EllipseVisual__ctor_5_fn(EllipseVisual* __this)
{
    __this->ctor_5();
}

// private Fuse.Controls.Ellipse get_Ellipse() :475
void EllipseVisual__get_Ellipse_fn(EllipseVisual* __this, ::g::Fuse::Controls::Ellipse** __retval)
{
    *__retval = __this->Ellipse();
}

// public generated EllipseVisual New() :473
void EllipseVisual__New1_fn(EllipseVisual** __retval)
{
    *__retval = EllipseVisual::New1();
}

// protected override sealed void UpdatePath(Fuse.Drawing.PathGeometryRenderer renderer) :479
void EllipseVisual__UpdatePath_fn(EllipseVisual* __this, ::g::Fuse::Drawing::PathGeometryRenderer* renderer)
{
    if (__this->Ellipse() == NULL)
        return;

    ::g::Uno::Float2 radius = ::g::Uno::Float2__op_Multiply1(__this->ActualSize(), 0.5f);

    if (::g::Uno::Float2::op_Equality(__this->_cachedRadius, radius))
        return;

    __this->_cachedRadius = radius;
    __this->InvalidateRenderBounds();
    uPtr(renderer)->Geometry(::g::Fuse::Drawing::PathGeometryExtensions::Ellipse(::g::Fuse::Drawing::PathGeometry::New1()->MoveTo1(radius), radius));
}

// public generated EllipseVisual() [instance] :473
void EllipseVisual::ctor_5()
{
    _cachedRadius = ::g::Uno::Float2__New2(0.0f, 0.0f);
    ctor_4();
}

// private Fuse.Controls.Ellipse get_Ellipse() [instance] :475
::g::Fuse::Controls::Ellipse* EllipseVisual::Ellipse()
{
    return uCast< ::g::Fuse::Controls::Ellipse*>(Shape(), ::TYPES[29/*Fuse.Controls.Ellipse*/]);
}

// public generated EllipseVisual New() [static] :473
EllipseVisual* EllipseVisual::New1()
{
    EllipseVisual* obj1 = (EllipseVisual*)uNew(EllipseVisual_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Graphics/$.uno(289)
// ---------------------------------------------------------------------------------

// internal sealed class ImageElementDraw :289
// {
// static ImageElementDraw() :289
static void ImageElementDraw__cctor__fn(uType* __type)
{
    ImageElementDraw::Impl_ = ImageElementDraw::New1();
}

uType* ImageElementDraw_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ImageElementDraw);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Graphics.ImageElementDraw", options);
    type->fp_ctor_ = (void*)ImageElementDraw__New1_fn;
    type->fp_cctor_ = ImageElementDraw__cctor__fn;
    ::STRINGS[1] = uString::Const("Invalid enum value");
    ::STRINGS[2] = uString::Const("resampleMode");
    ::TYPES[7] = ::g::Uno::Float2_typeof();
    ::TYPES[31] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[32] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[33] = ::g::Fuse::IViewport_typeof();
    ::TYPES[8] = ::g::Fuse::Node_typeof();
    ::TYPES[34] = ::g::Uno::Graphics::SamplerState_typeof();
    ::TYPES[35] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[25] = ::g::Uno::Float_typeof();
    ::TYPES[36] = ::g::FuseControls_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Controls::Graphics::ImageElementDraw, _draw_e407fca7), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Controls::Graphics::ImageElementDraw, Draw_LocalTransform_e407fca7_4_8_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Controls::Graphics::ImageElementDraw, Draw_LocalTransform_e407fca7_4_8_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Controls::Graphics::ImageElementDraw, Draw_VertexData_e407fca7_7_2_1), 0,
        ImageElementDraw_typeof(), (uintptr_t)&::g::Fuse::Controls::Graphics::ImageElementDraw::Impl_, uFieldFlagsStatic);
    return type;
}

// public generated ImageElementDraw() :289
void ImageElementDraw__ctor__fn(ImageElementDraw* __this)
{
    __this->ctor_();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Node element, float2 offset, float2 size, float2 uvPosition, float2 uvSize, texture2D tex, Fuse.Drawing.ResampleMode resampleMode, float4 Color) :304
void ImageElementDraw__Draw_fn(ImageElementDraw* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Node* element, ::g::Uno::Float2* offset, ::g::Uno::Float2* size, ::g::Uno::Float2* uvPosition, ::g::Uno::Float2* uvSize, ::g::Uno::Graphics::Texture2D* tex, int* resampleMode, ::g::Uno::Float4* Color)
{
    __this->Draw(dc, element, *offset, *size, *uvPosition, *uvSize, tex, *resampleMode, *Color);
}

// private Uno.Graphics.SamplerState GetSamplerState(Fuse.Drawing.ResampleMode resampleMode) :292
void ImageElementDraw__GetSamplerState_fn(ImageElementDraw* __this, int* resampleMode, ::g::Uno::Graphics::SamplerState* __retval)
{
    *__retval = __this->GetSamplerState(*resampleMode);
}

// private generated void init_DrawCalls() :289
void ImageElementDraw__init_DrawCalls_fn(ImageElementDraw* __this)
{
    __this->init_DrawCalls();
}

// public generated ImageElementDraw New() :289
void ImageElementDraw__New1_fn(ImageElementDraw** __retval)
{
    *__retval = ImageElementDraw::New1();
}

uSStrong<ImageElementDraw*> ImageElementDraw::Impl_;

// public generated ImageElementDraw() [instance] :289
void ImageElementDraw::ctor_()
{
    init_DrawCalls();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Node element, float2 offset, float2 size, float2 uvPosition, float2 uvSize, texture2D tex, Fuse.Drawing.ResampleMode resampleMode, float4 Color) [instance] :304
void ImageElementDraw::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Node* element, ::g::Uno::Float2 offset, ::g::Uno::Float2 size, ::g::Uno::Float2 uvPosition, ::g::Uno::Float2 uvSize, ::g::Uno::Graphics::Texture2D* tex, int resampleMode, ::g::Uno::Float4 Color)
{
    ::g::Uno::Float4x4 LocalTransform_e407fca7_4_8_4 = ::g::Uno::Matrix::Mul10(Draw_LocalTransform_e407fca7_4_8_2, ::g::Uno::Matrix::Scaling1(size.X, size.Y, 1.0f), Draw_LocalTransform_e407fca7_4_8_3, ::g::Uno::Matrix::Translation(offset.X, offset.Y, 0.0f));
    _draw_e407fca7.BlendEnabled(true);
    _draw_e407fca7.DepthTestEnabled(false);
    _draw_e407fca7.CullFace(uPtr(dc)->CullFace());
    _draw_e407fca7.BlendSrcRgb(2);
    _draw_e407fca7.BlendDstRgb(3);
    _draw_e407fca7.BlendDstAlpha(3);
    _draw_e407fca7.Use();
    _draw_e407fca7.Attrib1(0, 2, Draw_VertexData_e407fca7_7_2_1, 8, 0);
    _draw_e407fca7.Uniform12(1, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[33/*Fuse.IViewport*/])));
    _draw_e407fca7.Uniform2(2, uvSize);
    _draw_e407fca7.Uniform2(3, uvPosition);
    _draw_e407fca7.Uniform10(4, Color);
    _draw_e407fca7.Uniform12(5, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_e407fca7_4_8_4, uPtr(element)->WorldTransform()) : LocalTransform_e407fca7_4_8_4);
    _draw_e407fca7.Sampler3(6, tex, GetSamplerState(resampleMode));
    _draw_e407fca7.DrawArrays(6);
}

// private Uno.Graphics.SamplerState GetSamplerState(Fuse.Drawing.ResampleMode resampleMode) [instance] :292
::g::Uno::Graphics::SamplerState ImageElementDraw::GetSamplerState(int resampleMode)
{
    switch (resampleMode)
    {
        case 0:
            return ::g::Uno::Graphics::SamplerState__NearestClamp();
        case 1:
            return ::g::Uno::Graphics::SamplerState__LinearClamp();
        case 2:
            return ::g::Uno::Graphics::SamplerState__TrilinearClamp();
        default:
            U_THROW(::g::Uno::ArgumentException::New5(::STRINGS[1/*"Invalid enu...*/], ::STRINGS[2/*"resampleMode"*/]));
    }
}

// private generated void init_DrawCalls() [instance] :289
void ImageElementDraw::init_DrawCalls()
{
    Draw_VertexData_e407fca7_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[35/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f))), 0);
    Draw_LocalTransform_e407fca7_4_8_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    Draw_LocalTransform_e407fca7_4_8_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    _draw_e407fca7 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::ImageElementDraw0b0922af());
}

// public generated ImageElementDraw New() [static] :289
ImageElementDraw* ImageElementDraw::New1()
{
    ImageElementDraw* obj1 = (ImageElementDraw*)uNew(ImageElementDraw_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Graphics/$.uno(198)
// ---------------------------------------------------------------------------------

// public sealed class ImageVisual :198
// {
::g::Fuse::Controls::Graphics::ControlVisual_type* ImageVisual_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Graphics::ControlVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 63;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ImageVisual);
    options.TypeSize = sizeof(::g::Fuse::Controls::Graphics::ControlVisual_type);
    type = (::g::Fuse::Controls::Graphics::ControlVisual_type*)uClassType::New("Fuse.Controls.Graphics.ImageVisual", options);
    type->SetBase(::g::Fuse::Controls::Graphics::ControlVisual_typeof()->MakeType(::g::Fuse::Controls::Image_typeof()));
    type->fp_ctor_ = (void*)ImageVisual__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))ImageVisual__Attach_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))ImageVisual__Detach_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))ImageVisual__GetMarginSize_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))ImageVisual__OnArrangeMarginBox_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Controls::Graphics::Visual*, ::g::Fuse::DrawContext*))ImageVisual__OnDraw_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Node*, ::g::Fuse::HitTestContext*))ImageVisual__OnHitTest_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[37] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[38] = ::g::Fuse::Controls::Graphics::ControlVisual_typeof()->MakeType(::g::Fuse::Controls::Image_typeof());
    ::TYPES[39] = ::g::Uno::EventHandler_typeof();
    ::TYPES[40] = ::g::Fuse::Internal::SizingContainer_typeof();
    ::TYPES[41] = ::g::Fuse::Internal::ImageContainer_typeof();
    ::TYPES[8] = ::g::Fuse::Node_typeof();
    ::TYPES[42] = ::g::Fuse::Resources::ImageSource_typeof();
    ::TYPES[16] = ::g::Uno::Int_typeof();
    ::TYPES[43] = ::g::Fuse::Elements::Internal::Scale9Rectangle_typeof();
    ::TYPES[11] = ::g::Fuse::Controls::Graphics::Visual_typeof();
    ::TYPES[44] = ::g::Fuse::Controls::Graphics::ImageElementDraw_typeof();
    ::TYPES[45] = ::g::Uno::Float4_typeof();
    ::TYPES[6] = ::g::Fuse::HitTestContext_typeof();
    ::TYPES[7] = ::g::Uno::Float2_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Graphics::ControlVisual_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Graphics::ControlVisual_type, interface1));
    type->SetFields(58,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Graphics::ImageVisual, _drawOrigin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Graphics::ImageVisual, _drawSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Graphics::ImageVisual, _origin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Graphics::ImageVisual, _scale), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::Graphics::ImageVisual, _uvClip), 0);
    return type;
}

// public generated ImageVisual() :198
void ImageVisual__ctor_3_fn(ImageVisual* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :200
void ImageVisual__Attach_fn(ImageVisual* __this)
{
    ::g::Fuse::Controls::Image* ret5;
    ::g::Fuse::Controls::Image* ret6;
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret5), ret5))->add_ParamChanged(uDelegate::New(::TYPES[39/*Uno.EventHandler*/], (void*)ImageVisual__OnParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret6), ret6))->add_SourceChanged(uDelegate::New(::TYPES[39/*Uno.EventHandler*/], (void*)ImageVisual__OnParamChanged_fn, __this));
}

// private Fuse.Internal.ImageContainer get_Container() :218
void ImageVisual__get_Container_fn(ImageVisual* __this, ::g::Fuse::Internal::ImageContainer** __retval)
{
    *__retval = __this->Container();
}

// protected override sealed void Detach() :206
void ImageVisual__Detach_fn(ImageVisual* __this)
{
    ::g::Fuse::Controls::Image* ret7;
    ::g::Fuse::Controls::Image* ret8;
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret7), ret7))->remove_ParamChanged(uDelegate::New(::TYPES[39/*Uno.EventHandler*/], (void*)ImageVisual__OnParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret8), ret8))->remove_SourceChanged(uDelegate::New(::TYPES[39/*Uno.EventHandler*/], (void*)ImageVisual__OnParamChanged_fn, __this));
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp) :227
void ImageVisual__GetMarginSize_fn(ImageVisual* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::Controls::Image* ret9;
    ::g::Fuse::LayoutParams lp_ = *lp;
    uPtr(uPtr(__this->Container())->Sizing)->snapToPixels = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret9), ret9))->SnapToPixels();
    uPtr(uPtr(__this->Container())->Sizing)->absoluteZoom = __this->AbsoluteZoom();
    ::g::Uno::Float2 r = uPtr(uPtr(__this->Container())->Sizing)->ExpandFillSize(__this->GetSize(), lp_);
    return *__retval = r, void();
}

// private float2 GetSize() :220
void ImageVisual__GetSize_fn(ImageVisual* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetSize();
}

// public generated ImageVisual New() :198
void ImageVisual__New1_fn(ImageVisual** __retval)
{
    *__retval = ImageVisual::New1();
}

// protected override sealed float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :238
void ImageVisual__OnArrangeMarginBox_fn(ImageVisual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 ret13;
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::Controls::Image* ret14;
    ::g::Fuse::Controls::Image* ret15;
    ::g::Uno::Float2 size = (::g::Fuse::Controls::Graphics::Visual__OnArrangeMarginBox_fn(__this, uCRef(position_), uCRef(lp_), &ret13), ret13);
    uPtr(uPtr(__this->Container())->Sizing)->snapToPixels = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret14), ret14))->SnapToPixels();
    uPtr(uPtr(__this->Container())->Sizing)->absoluteZoom = __this->AbsoluteZoom();
    ::g::Uno::Float2 contentDesiredSize = __this->GetSize();
    __this->_scale = uPtr(uPtr(__this->Container())->Sizing)->CalcScale(size, contentDesiredSize);
    __this->_origin = uPtr(uPtr(__this->Container())->Sizing)->CalcOrigin(size, ::g::Uno::Float2__op_Multiply2(contentDesiredSize, __this->_scale));
    __this->_drawOrigin = __this->_origin;
    __this->_drawSize = ::g::Uno::Float2__op_Multiply2(contentDesiredSize, __this->_scale);
    __this->_uvClip = uPtr(uPtr(__this->Container())->Sizing)->CalcClip(size, &__this->_drawOrigin, &__this->_drawSize);
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret15), ret15))->SetContentBox(::g::Uno::Float4__New7(__this->_drawOrigin, ::g::Uno::Float2__op_Addition2(__this->_drawOrigin, __this->_drawSize)));
    return *__retval = size, void();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :257
void ImageVisual__OnDraw_fn(ImageVisual* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Fuse::Controls::Image* ret16;
    ::g::Fuse::Controls::Image* ret17;
    ::g::Fuse::Controls::Image* ret18;
    ::g::Uno::Graphics::Texture2D* tex = uPtr(__this->Container())->GetTexture();

    if (tex == NULL)
        return;

    if (uPtr(__this->Container())->StretchMode() == 4)
        uPtr(::g::Fuse::Elements::Internal::Scale9Rectangle::Impl())->Draw(dc, __this, __this->ActualSize(), __this->GetSize(), tex, uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret16), ret16))->Color(), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret17), ret17))->Scale9Margin());
    else
        uPtr(::g::Fuse::Controls::Graphics::ImageElementDraw::Impl())->Draw(dc, __this, __this->_drawOrigin, __this->_drawSize, (ind1 = __this->_uvClip, ::g::Uno::Float2__New2(ind1.X, ind1.Y)), ::g::Uno::Float2__op_Subtraction2((ind2 = __this->_uvClip, ::g::Uno::Float2__New2(ind2.Z, ind2.W)), (ind3 = __this->_uvClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y))), tex, uPtr(__this->Container())->ResampleMode(), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret18), ret18))->Color());
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :278
void ImageVisual__OnHitTest_fn(ImageVisual* __this, ::g::Fuse::HitTestContext* htc)
{
    ::g::Uno::Float2 lp = uPtr(htc)->LocalPoint();

    if ((((lp.X >= __this->_drawOrigin.X) && (lp.X <= (__this->_drawOrigin.X + __this->_drawSize.X))) && (lp.Y >= __this->_drawOrigin.Y)) && (lp.Y <= (__this->_drawOrigin.Y + __this->_drawSize.Y)))
        htc->Hit(__this);

    ::g::Fuse::Node__OnHitTest_fn(__this, htc);
}

// private void OnParamChanged(object s, object a) :212
void ImageVisual__OnParamChanged_fn(ImageVisual* __this, uObject* s, uObject* a)
{
    __this->OnParamChanged(s, a);
}

// public generated ImageVisual() [instance] :198
void ImageVisual::ctor_3()
{
    ctor_2();
}

// private Fuse.Internal.ImageContainer get_Container() [instance] :218
::g::Fuse::Internal::ImageContainer* ImageVisual::Container()
{
    ::g::Fuse::Controls::Image* ret19;
    return uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret19), ret19))->Container();
}

// private float2 GetSize() [instance] :220
::g::Uno::Float2 ImageVisual::GetSize()
{
    ::g::Fuse::Controls::Image* ret10;
    ::g::Fuse::Controls::Image* ret11;
    ::g::Fuse::Controls::Image* ret12;

    if (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret10), ret10))->Source() != NULL)
        return uPtr(uPtr(Container())->Sizing)->CalcContentSize(uPtr(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret11), ret11))->Source())->Size(), uPtr(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret12), ret12))->Source())->PixelSize());

    return ::g::Uno::Float2__New1(0.0f);
}

// private void OnParamChanged(object s, object a) [instance] :212
void ImageVisual::OnParamChanged(uObject* s, uObject* a)
{
    InvalidateLayout(2);
    InvalidateVisual();
}

// public generated ImageVisual New() [static] :198
ImageVisual* ImageVisual::New1()
{
    ImageVisual* obj4 = (ImageVisual*)uNew(ImageVisual_typeof());
    obj4->ctor_3();
    return obj4;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Graphics/$.uno(338)
// ---------------------------------------------------------------------------------

// public abstract class PathShapeVisual<T> :338
// {
PathShapeVisual_type* PathShapeVisual_typeof()
{
    static uSStrong<PathShapeVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 60;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(PathShapeVisual);
    options.TypeSize = sizeof(PathShapeVisual_type);
    type = (PathShapeVisual_type*)uClassType::New("Fuse.Controls.Graphics.PathShapeVisual`1", options);
    type->SetBase(::g::Fuse::Controls::Graphics::ShapeVisual_typeof()->MakeType(type->T(0)));
    type->fp_AlignMatrix = PathShapeVisual__AlignMatrix_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))PathShapeVisual__Attach_fn;
    type->fp_DrawFill = (void(*)(::g::Fuse::Controls::Graphics::ShapeVisual*, ::g::Fuse::DrawContext*, ::g::Fuse::Drawing::Brush*))PathShapeVisual__DrawFill_fn;
    type->fp_DrawStroke = (void(*)(::g::Fuse::Controls::Graphics::ShapeVisual*, ::g::Fuse::DrawContext*, ::g::Fuse::Drawing::Stroke*))PathShapeVisual__DrawStroke_fn;
    type->fp_get_LocalRenderBounds = (void(*)(::g::Fuse::Node*, ::g::Uno::Rect*))PathShapeVisual__get_LocalRenderBounds_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Node*, ::g::Fuse::HitTestContext*))PathShapeVisual__OnHitTest_fn;
    type->fp_PrepareDraw = (void(*)(::g::Fuse::Controls::Graphics::ShapeVisual*, ::g::Fuse::DrawContext*))PathShapeVisual__PrepareDraw_fn;
    type->fp_SoftDispose = (void(*)(::g::Fuse::Node*))PathShapeVisual__SoftDispose_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[28] = ::g::Fuse::Drawing::PathGeometryRenderer_typeof();
    ::TYPES[46] = ::g::Uno::Action_typeof();
    ::TYPES[33] = ::g::Fuse::IViewport_typeof();
    ::TYPES[8] = ::g::Fuse::Node_typeof();
    ::TYPES[3] = ::g::Fuse::Controls::Shape_typeof();
    ::TYPES[47] = ::g::Fuse::Controls::Graphics::ShapeVisual_typeof();
    ::TYPES[6] = ::g::Fuse::HitTestContext_typeof();
    ::TYPES[11] = ::g::Fuse::Controls::Graphics::Visual_typeof();
    ::TYPES[48] = ::g::Uno::Rect_typeof();
    type->SetPrecalc(
        ::TYPES[47/*Fuse.Controls.Graphics.ShapeVisual`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(PathShapeVisual_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(PathShapeVisual_type, interface1));
    type->SetFields(58,
        ::g::Fuse::Drawing::RendererContext_typeof(), offsetof(::g::Fuse::Controls::Graphics::PathShapeVisual, _context), 0,
        ::g::Fuse::Drawing::PathGeometryRenderer_typeof(), offsetof(::g::Fuse::Controls::Graphics::PathShapeVisual, _renderer), 0);
    return type;
}

// protected PathShapeVisual() :356
void PathShapeVisual__ctor_4_fn(PathShapeVisual* __this)
{
    __this->ctor_4();
}

// protected virtual float4x4 AlignMatrix(float4x4 b) :386
void PathShapeVisual__AlignMatrix_fn(PathShapeVisual* __this, ::g::Uno::Float4x4* b, ::g::Uno::Float4x4* __retval)
{
    ::g::Uno::Float4x4 b_ = *b;
    return *__retval = b_, void();
}

// protected override sealed void Attach() :350
void PathShapeVisual__Attach_fn(PathShapeVisual* __this)
{
    ::g::Fuse::Controls::Graphics::ShapeVisual__Attach_fn(__this);
    uPtr(__this->_renderer)->Density(::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[33/*Fuse.IViewport*/])));
}

// protected override sealed void DrawFill(Fuse.DrawContext dc, Fuse.Drawing.Brush fill) :388
void PathShapeVisual__DrawFill_fn(PathShapeVisual* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill)
{
    uPtr(__this->Renderer())->DrawFill(__this->_context, fill);
}

// protected override sealed void DrawStroke(Fuse.DrawContext dc, Fuse.Drawing.Stroke stroke) :393
void PathShapeVisual__DrawStroke_fn(PathShapeVisual* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke)
{
    uPtr(__this->Renderer())->DrawStroke(__this->_context, stroke);
}

// public object GetHitPart(float2 localCoords) :407
void PathShapeVisual__GetHitPart_fn(PathShapeVisual* __this, ::g::Uno::Float2* localCoords, uObject** __retval)
{
    *__retval = __this->GetHitPart(*localCoords);
}

// private void Invalidated() :361
void PathShapeVisual__Invalidated_fn(PathShapeVisual* __this)
{
    __this->Invalidated();
}

// public override Uno.Rect get_LocalRenderBounds() :370
void PathShapeVisual__get_LocalRenderBounds_fn(PathShapeVisual* __this, ::g::Uno::Rect* __retval)
{
    return *__retval = uPtr(__this->Renderer())->Bounds(), void();
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :398
void PathShapeVisual__OnHitTest_fn(PathShapeVisual* __this, ::g::Fuse::HitTestContext* htc)
{
    ::g::Uno::Float2 rel = ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Division2(uPtr(htc)->LocalPoint(), __this->ActualSize()), uPtr(__this->Renderer())->Bounds().Size()), uPtr(__this->Renderer())->Bounds().Minimum());
    uObject* hitPart = __this->GetHitPart(rel);

    if (hitPart != NULL)
        htc->Hit(__this);

    ::g::Fuse::Node__OnHitTest_fn(__this, htc);
}

// protected override sealed void PrepareDraw(Fuse.DrawContext dc) :377
void PathShapeVisual__PrepareDraw_fn(PathShapeVisual* __this, ::g::Fuse::DrawContext* dc)
{
    uType* __types[] = {
        __this->__type->GetBase(PathShapeVisual_typeof())->Precalced(0/*Fuse.Controls.Graphics.ShapeVisual<T>*/),
        __this->__type->GetBase(PathShapeVisual_typeof())->T(0),
    };
    ::g::Fuse::Controls::Graphics::ShapeVisual__PrepareDraw_fn(__this, dc);
    __this->UpdatePath(__this->_renderer);
    uPtr(__this->_renderer)->Antialiasing((uPtr(__this->Shape())->Smoothness() > 0.5f) ? 1 : 0);
    __this->_context = uPtr(__this->_renderer)->GetRendererContext(dc, __this->AlignMatrix(uPtr(dc)->GetLocalToClipTransform(__this)), __this->ActualSize());
}

// protected Fuse.Drawing.PathGeometryRenderer get_Renderer() :343
void PathShapeVisual__get_Renderer_fn(PathShapeVisual* __this, ::g::Fuse::Drawing::PathGeometryRenderer** __retval)
{
    *__retval = __this->Renderer();
}

// protected override sealed void SoftDispose() :413
void PathShapeVisual__SoftDispose_fn(PathShapeVisual* __this)
{
    uPtr(__this->_renderer)->SoftDispose();
}

// protected PathShapeVisual() [instance] :356
void PathShapeVisual::ctor_4()
{
    _renderer = ::g::Fuse::Drawing::PathGeometryRenderer::New1();
    ctor_3();
    uPtr(Renderer())->add_VisualInvalidated(uDelegate::New(::TYPES[46/*Uno.Action*/], (void*)PathShapeVisual__Invalidated_fn, this));
}

// public object GetHitPart(float2 localCoords) [instance] :407
uObject* PathShapeVisual::GetHitPart(::g::Uno::Float2 localCoords)
{
    uType* __types[] = {
        __type->GetBase(PathShapeVisual_typeof())->Precalced(0/*Fuse.Controls.Graphics.ShapeVisual<T>*/),
        __type->GetBase(PathShapeVisual_typeof())->T(0),
    };
    ::g::Uno::Float2 localCoords_ = localCoords;
    return uPtr(Renderer())->GetHitPart1(localCoords_, uPtr(Shape())->HasFills() ? (uObject*)uPtr(Shape())->Fills() : NULL, uPtr(Shape())->HasStrokes() ? (uObject*)uPtr(Shape())->Strokes() : NULL);
}

// private void Invalidated() [instance] :361
void PathShapeVisual::Invalidated()
{
    InvalidateVisual();
}

// protected Fuse.Drawing.PathGeometryRenderer get_Renderer() [instance] :343
::g::Fuse::Drawing::PathGeometryRenderer* PathShapeVisual::Renderer()
{
    UpdatePath(_renderer);
    return _renderer;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Graphics/$.uno(539)
// ---------------------------------------------------------------------------------

// public sealed class PathVisual :539
// {
::g::Fuse::Controls::Graphics::PathShapeVisual_type* PathVisual_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Graphics::PathShapeVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 62;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(PathVisual);
    options.TypeSize = sizeof(::g::Fuse::Controls::Graphics::PathShapeVisual_type);
    type = (::g::Fuse::Controls::Graphics::PathShapeVisual_type*)uClassType::New("Fuse.Controls.Graphics.PathVisual", options);
    type->SetBase(::g::Fuse::Controls::Graphics::PathShapeVisual_typeof()->MakeType(::g::Fuse::Controls::Path_typeof()));
    type->fp_ctor_ = (void*)PathVisual__New1_fn;
    type->fp_AlignMatrix = (void(*)(::g::Fuse::Controls::Graphics::PathShapeVisual*, ::g::Uno::Float4x4*, ::g::Uno::Float4x4*))PathVisual__AlignMatrix_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))PathVisual__GetMarginSize_fn;
    type->fp_get_LocalRenderBounds = (void(*)(::g::Fuse::Node*, ::g::Uno::Rect*))PathVisual__get_LocalRenderBounds_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))PathVisual__OnArrangeMarginBox_fn;
    type->fp_UpdatePath = (void(*)(::g::Fuse::Controls::Graphics::PathShapeVisual*, ::g::Fuse::Drawing::PathGeometryRenderer*))PathVisual__UpdatePath_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[49] = ::g::Fuse::Controls::Path_typeof();
    ::TYPES[48] = ::g::Uno::Rect_typeof();
    ::TYPES[28] = ::g::Fuse::Drawing::PathGeometryRenderer_typeof();
    ::TYPES[50] = ::g::Fuse::Controls::Graphics::PathShapeVisual_typeof()->MakeType(::g::Fuse::Controls::Path_typeof());
    ::TYPES[7] = ::g::Uno::Float2_typeof();
    ::TYPES[45] = ::g::Uno::Float4_typeof();
    ::TYPES[16] = ::g::Uno::Int_typeof();
    ::TYPES[51] = ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[52] = ::g::Uno::Float4x4_typeof();
    ::TYPES[53] = ::g::Fuse::Controls::Graphics::ShapeVisual_typeof()->MakeType(::g::Fuse::Controls::Path_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Graphics::PathShapeVisual_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Graphics::PathShapeVisual_type, interface1));
    type->SetFields(60,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Graphics::PathVisual, _origin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Graphics::PathVisual, _postScale), 0);
    return type;
}

// public generated PathVisual() :539
void PathVisual__ctor_5_fn(PathVisual* __this)
{
    __this->ctor_5();
}

// protected override sealed float4x4 AlignMatrix(float4x4 b) :641
void PathVisual__AlignMatrix_fn(PathVisual* __this, ::g::Uno::Float4x4* b, ::g::Uno::Float4x4* __retval)
{
    ::g::Uno::Float4x4 b_ = *b;
    ::g::Uno::Float4x4 t = ::g::Uno::Matrix::Translation1(::g::Uno::Float3__New4(__this->_origin, 0.0f));
    ::g::Uno::Float4x4 r0 = ::g::Uno::Matrix::Mul8(t, b_);
    ::g::Uno::Float4x4 s = ::g::Uno::Matrix::Scaling2(::g::Uno::Float3__New4(__this->_postScale, 1.0f));
    ::g::Uno::Float4x4 r1 = ::g::Uno::Matrix::Mul8(s, r0);
    return *__retval = r1, void();
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp) :596
void PathVisual__GetMarginSize_fn(PathVisual* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 natural = __this->GetNaturalContentSize();
    ::g::Uno::Float2 r = uPtr(uPtr(__this->Path())->Sizing())->ExpandFillSize(natural, lp_);
    return *__retval = r, void();
}

// protected float2 GetNaturalContentSize() :554
void PathVisual__GetNaturalContentSize_fn(PathVisual* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetNaturalContentSize();
}

// public override sealed Uno.Rect get_LocalRenderBounds() :654
void PathVisual__get_LocalRenderBounds_fn(PathVisual* __this, ::g::Uno::Rect* __retval)
{
    ::g::Uno::Float4x4 m = __this->AlignMatrix(::g::Uno::Float4x4__Identity());
    ::g::Uno::Rect b = uPtr(__this->Renderer())->Bounds();
    ::g::Uno::Float4 ind3 = ::g::Uno::Vector::Transform1(b.Minimum(), m);
    ::g::Uno::Float2 tl = ::g::Uno::Float2__New2(ind3.X, ind3.Y);
    ::g::Uno::Float4 ind4 = ::g::Uno::Vector::Transform1(b.Maximum(), m);
    ::g::Uno::Float2 br = ::g::Uno::Float2__New2(ind4.X, ind4.Y);
    return *__retval = ::g::Uno::Rect__New2(tl, ::g::Uno::Float2__op_Subtraction2(br, tl)), void();
}

// public generated PathVisual New() :539
void PathVisual__New1_fn(PathVisual** __retval)
{
    *__retval = PathVisual::New1();
}

// protected override sealed float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :605
void PathVisual__OnArrangeMarginBox_fn(PathVisual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float2 ret6;
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 size = (::g::Fuse::Controls::Graphics::Visual__OnArrangeMarginBox_fn(__this, uCRef(position_), uCRef(lp_), &ret6), ret6);
    ::g::Uno::Float2 contentDesiredSize = __this->GetNaturalContentSize();
    ::g::Uno::Float2 scale = uPtr(uPtr(__this->Path())->Sizing())->CalcScale(size, contentDesiredSize);
    __this->_origin = uPtr(uPtr(__this->Path())->Sizing())->CalcOrigin(size, ::g::Uno::Float2__op_Multiply2(contentDesiredSize, scale));

    if (uPtr(__this->Path())->ScaleMode() == 0)
        uPtr(__this->Renderer())->PreScale(scale);
    else
        __this->_postScale = scale;

    switch (uPtr(__this->Path())->FitMode())
    {
        case 0:
            break;
        case 1:
        {
            __this->_origin = ::g::Uno::Float2__op_Addition2(__this->_origin, (ind1 = uPtr(__this->Renderer())->StrokePadding(), ::g::Uno::Float2__New2(ind1.X, ind1.Y)));
            break;
        }
        case 2:
        {
            __this->_origin = ::g::Uno::Float2__op_Subtraction2(__this->_origin, uPtr(__this->Renderer())->InnerBounds().Minimum());
            break;
        }
        case 3:
        {
            __this->_origin = ::g::Uno::Float2__op_Subtraction2(__this->_origin, uPtr(__this->Renderer())->InnerBounds().Minimum());
            __this->_origin = ::g::Uno::Float2__op_Addition2(__this->_origin, (ind2 = uPtr(__this->Renderer())->StrokePadding(), ::g::Uno::Float2__New2(ind2.X, ind2.Y)));
            break;
        }
    }

    return *__retval = size, void();
}

// private Fuse.Controls.Path get_Path() :541
void PathVisual__get_Path_fn(PathVisual* __this, ::g::Fuse::Controls::Path** __retval)
{
    *__retval = __this->Path();
}

// protected override sealed void UpdatePath(Fuse.Drawing.PathGeometryRenderer renderer) :543
void PathVisual__UpdatePath_fn(PathVisual* __this, ::g::Fuse::Drawing::PathGeometryRenderer* renderer)
{
    if (__this->Path() == NULL)
        return;

    uPtr(renderer)->Geometry(uPtr(__this->Path())->Geometry());
    renderer->FillRule((uPtr(__this->Path())->FillRule() == 1) ? uDelegate::New(::TYPES[51/*Uno.Predicate<int>*/], (void*)::g::Fuse::Drawing::WindingRules__Odd_fn) : uDelegate::New(::TYPES[51/*Uno.Predicate<int>*/], (void*)::g::Fuse::Drawing::WindingRules__NonZero_fn));
}

// public generated PathVisual() [instance] :539
void PathVisual::ctor_5()
{
    _postScale = ::g::Uno::Float2__New1(1.0f);
    ctor_4();
}

// protected float2 GetNaturalContentSize() [instance] :554
::g::Uno::Float2 PathVisual::GetNaturalContentSize()
{
    ::g::Uno::Float2 hi = ::g::Uno::Float2__New1(0.0f);
    ::g::Uno::Float2 lo = ::g::Uno::Float2__New1(0.0f);

    switch (uPtr(Path())->FitMode())
    {
        case 0:
        {
            lo = ::g::Uno::Float2__New1(0.0f);
            hi = uPtr(Renderer())->InnerBounds().Maximum();
            break;
        }
        case 1:
        {
            hi = uPtr(Renderer())->InnerBounds().Maximum();
            ::g::Uno::Float4 s = uPtr(Renderer())->StrokePadding();
            hi.X = (hi.X + s.Item(2));
            hi.Y = (hi.Y + s.Item(3));
            lo.X = (lo.X - s.Item(0));
            lo.Y = (lo.Y - s.Item(1));
            break;
        }
        case 2:
        {
            lo = uPtr(Renderer())->InnerBounds().Minimum();
            hi = uPtr(Renderer())->InnerBounds().Maximum();
            break;
        }
        case 3:
        {
            lo = uPtr(Renderer())->InnerBounds().Minimum();
            hi = uPtr(Renderer())->InnerBounds().Maximum();
            ::g::Uno::Float4 s1 = uPtr(Renderer())->StrokePadding();
            lo.X = (lo.X - s1.Item(0));
            lo.Y = (lo.Y - s1.Item(1));
            hi.X = (hi.X + s1.Item(2));
            hi.Y = (hi.Y + s1.Item(3));
            break;
        }
    }

    ::g::Uno::Float2 natural = ::g::Uno::Float2__op_Subtraction2(hi, lo);
    return natural;
}

// private Fuse.Controls.Path get_Path() [instance] :541
::g::Fuse::Controls::Path* PathVisual::Path()
{
    return uCast< ::g::Fuse::Controls::Path*>(Shape(), ::TYPES[49/*Fuse.Controls.Path*/]);
}

// public generated PathVisual New() [static] :539
PathVisual* PathVisual::New1()
{
    PathVisual* obj5 = (PathVisual*)uNew(PathVisual_typeof());
    obj5->ctor_5();
    return obj5;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Graphics/$.uno(720)
// ---------------------------------------------------------------------------------

// public sealed class RectangleVisual :720
// {
::g::Fuse::Controls::Graphics::ShapeVisual_type* RectangleVisual_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Graphics::ShapeVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 58;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(RectangleVisual);
    options.TypeSize = sizeof(::g::Fuse::Controls::Graphics::ShapeVisual_type);
    type = (::g::Fuse::Controls::Graphics::ShapeVisual_type*)uClassType::New("Fuse.Controls.Graphics.RectangleVisual", options);
    type->SetBase(::g::Fuse::Controls::Graphics::ShapeVisual_typeof()->MakeType(::g::Fuse::Controls::Rectangle_typeof()));
    type->fp_ctor_ = (void*)RectangleVisual__New1_fn;
    type->fp_DrawFill = (void(*)(::g::Fuse::Controls::Graphics::ShapeVisual*, ::g::Fuse::DrawContext*, ::g::Fuse::Drawing::Brush*))RectangleVisual__DrawFill_fn;
    type->fp_DrawStroke = (void(*)(::g::Fuse::Controls::Graphics::ShapeVisual*, ::g::Fuse::DrawContext*, ::g::Fuse::Drawing::Stroke*))RectangleVisual__DrawStroke_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Node*, ::g::Fuse::HitTestContext*))RectangleVisual__OnHitTest_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[54] = ::g::Fuse::Drawing::Primitives::Rectangle_typeof();
    ::TYPES[8] = ::g::Fuse::Node_typeof();
    ::TYPES[11] = ::g::Fuse::Controls::Graphics::Visual_typeof();
    ::TYPES[55] = ::g::Fuse::Controls::Rectangle_typeof();
    ::TYPES[3] = ::g::Fuse::Controls::Shape_typeof();
    ::TYPES[6] = ::g::Fuse::HitTestContext_typeof();
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[7] = ::g::Uno::Float2_typeof();
    ::TYPES[45] = ::g::Uno::Float4_typeof();
    ::TYPES[56] = ::g::Fuse::Controls::Graphics::ShapeVisual_typeof()->MakeType(::g::Fuse::Controls::Rectangle_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Graphics::ShapeVisual_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Graphics::ShapeVisual_type, interface1));
    type->SetFields(58);
    return type;
}

// public generated RectangleVisual() :720
void RectangleVisual__ctor_4_fn(RectangleVisual* __this)
{
    __this->ctor_4();
}

// protected override sealed void DrawFill(Fuse.DrawContext dc, Fuse.Drawing.Brush fill) :724
void RectangleVisual__DrawFill_fn(RectangleVisual* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill)
{
    uPtr(::g::Fuse::Drawing::Primitives::Rectangle::Singleton())->Fill(dc, __this->Rectangle(), __this->ActualSize(), uPtr(__this->Rectangle())->CornerRadius(), fill, ::g::Uno::Float2__New1(0.0f), uPtr(__this->Rectangle())->Smoothness());
}

// protected override sealed void DrawStroke(Fuse.DrawContext dc, Fuse.Drawing.Stroke stroke) :730
void RectangleVisual__DrawStroke_fn(RectangleVisual* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke)
{
    uPtr(::g::Fuse::Drawing::Primitives::Rectangle::Singleton())->Stroke(dc, __this->Rectangle(), __this->ActualSize(), uPtr(__this->Rectangle())->CornerRadius(), stroke, ::g::Uno::Float2__New1(0.0f), uPtr(__this->Rectangle())->Smoothness());
}

// public generated RectangleVisual New() :720
void RectangleVisual__New1_fn(RectangleVisual** __retval)
{
    *__retval = RectangleVisual::New1();
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :736
void RectangleVisual__OnHitTest_fn(RectangleVisual* __this, ::g::Fuse::HitTestContext* htc)
{
    ::g::Uno::Float2 lp = uPtr(htc)->LocalPoint();

    if (!uPtr(__this->Rectangle())->HasFills() || !__this->IsPointInside(lp))
        return;

    ::g::Uno::Float4 cr = uPtr(__this->Rectangle())->CornerRadius();

    if ((lp.X < cr.Item(0)) && (lp.Y < cr.Item(0)))
    {
        if (::g::Uno::Vector::Distance(lp, ::g::Uno::Float2__New1(cr.Item(0))) > cr.Item(0))
            return;
    }
    else if ((lp.X > (__this->ActualSize().X - cr.Item(1))) && (lp.Y < cr.Item(1)))
    {
        if (::g::Uno::Vector::Distance(lp, ::g::Uno::Float2__New2(__this->ActualSize().X - cr.Item(1), cr.Item(1))) > cr.Item(1))
            return;
    }
    else if ((lp.X < cr.Item(3)) && (lp.Y > (__this->ActualSize().Y - cr.Item(3))))
    {
        if (::g::Uno::Vector::Distance(lp, ::g::Uno::Float2__New2(cr.Item(3), __this->ActualSize().Y - cr.Item(3))) > cr.Item(3))
            return;
    }
    else if ((lp.X > (__this->ActualSize().X - cr.Item(2))) && (lp.Y > (__this->ActualSize().Y - cr.Item(2))))
    {
        if (::g::Uno::Vector::Distance(lp, ::g::Uno::Float2__New2(__this->ActualSize().X - cr.Item(2), __this->ActualSize().Y - cr.Item(2))) > cr.Item(2))
            return;
    }

    htc->Hit(__this);
}

// private Fuse.Controls.Rectangle get_Rectangle() :722
void RectangleVisual__get_Rectangle_fn(RectangleVisual* __this, ::g::Fuse::Controls::Rectangle** __retval)
{
    *__retval = __this->Rectangle();
}

// public generated RectangleVisual() [instance] :720
void RectangleVisual::ctor_4()
{
    ctor_3();
}

// private Fuse.Controls.Rectangle get_Rectangle() [instance] :722
::g::Fuse::Controls::Rectangle* RectangleVisual::Rectangle()
{
    return uCast< ::g::Fuse::Controls::Rectangle*>(Shape(), ::TYPES[55/*Fuse.Controls.Rectangle*/]);
}

// public generated RectangleVisual New() [static] :720
RectangleVisual* RectangleVisual::New1()
{
    RectangleVisual* obj1 = (RectangleVisual*)uNew(RectangleVisual_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Graphics/$.uno(498)
// ---------------------------------------------------------------------------------

// public sealed class RegularPolygonVisual :498
// {
::g::Fuse::Controls::Graphics::PathShapeVisual_type* RegularPolygonVisual_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Graphics::PathShapeVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 62;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(RegularPolygonVisual);
    options.TypeSize = sizeof(::g::Fuse::Controls::Graphics::PathShapeVisual_type);
    type = (::g::Fuse::Controls::Graphics::PathShapeVisual_type*)uClassType::New("Fuse.Controls.Graphics.RegularPolygonVisual", options);
    type->SetBase(::g::Fuse::Controls::Graphics::PathShapeVisual_typeof()->MakeType(::g::Fuse::Controls::RegularPolygon_typeof()));
    type->fp_ctor_ = (void*)RegularPolygonVisual__New1_fn;
    type->fp_UpdatePath = (void(*)(::g::Fuse::Controls::Graphics::PathShapeVisual*, ::g::Fuse::Drawing::PathGeometryRenderer*))RegularPolygonVisual__UpdatePath_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[57] = ::g::Fuse::Controls::RegularPolygon_typeof();
    ::TYPES[28] = ::g::Fuse::Drawing::PathGeometryRenderer_typeof();
    ::TYPES[7] = ::g::Uno::Float2_typeof();
    ::TYPES[11] = ::g::Fuse::Controls::Graphics::Visual_typeof();
    ::TYPES[58] = ::g::Fuse::Controls::Graphics::ShapeVisual_typeof()->MakeType(::g::Fuse::Controls::RegularPolygon_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Graphics::PathShapeVisual_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Graphics::PathShapeVisual_type, interface1));
    type->SetFields(60,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Graphics::RegularPolygonVisual, _cachedRadius), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Graphics::RegularPolygonVisual, _cachedSides), 0);
    return type;
}

// public generated RegularPolygonVisual() :498
void RegularPolygonVisual__ctor_5_fn(RegularPolygonVisual* __this)
{
    __this->ctor_5();
}

// public generated RegularPolygonVisual New() :498
void RegularPolygonVisual__New1_fn(RegularPolygonVisual** __retval)
{
    *__retval = RegularPolygonVisual::New1();
}

// private float2 get_Offset() :507
void RegularPolygonVisual__get_Offset_fn(RegularPolygonVisual* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Offset();
}

// private float get_Radius() :517
void RegularPolygonVisual__get_Radius_fn(RegularPolygonVisual* __this, float* __retval)
{
    *__retval = __this->Radius();
}

// private Fuse.Controls.RegularPolygon get_RegularPolygon() :500
void RegularPolygonVisual__get_RegularPolygon_fn(RegularPolygonVisual* __this, ::g::Fuse::Controls::RegularPolygon** __retval)
{
    *__retval = __this->RegularPolygon();
}

// protected override sealed void UpdatePath(Fuse.Drawing.PathGeometryRenderer renderer) :520
void RegularPolygonVisual__UpdatePath_fn(RegularPolygonVisual* __this, ::g::Fuse::Drawing::PathGeometryRenderer* renderer)
{
    if ((__this->RegularPolygon() == NULL) || (uPtr(__this->RegularPolygon())->Sides() < 3))
        return;

    if ((__this->_cachedSides == uPtr(__this->RegularPolygon())->Sides()) && (__this->_cachedRadius == __this->Radius()))
        return;

    __this->_cachedSides = uPtr(__this->RegularPolygon())->Sides();
    __this->_cachedRadius = __this->Radius();
    __this->InvalidateRenderBounds();
    uPtr(renderer)->Geometry(::g::Fuse::Drawing::PathGeometryExtensions::RegularPolygon(::g::Fuse::Drawing::PathGeometry::New1()->MoveTo1(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New1(__this->Radius()), __this->Offset())), uPtr(__this->RegularPolygon())->Sides(), __this->Radius()));
}

// public generated RegularPolygonVisual() [instance] :498
void RegularPolygonVisual::ctor_5()
{
    ctor_4();
}

// private float2 get_Offset() [instance] :507
::g::Uno::Float2 RegularPolygonVisual::Offset()
{
    return (ActualSize().X > ActualSize().Y) ? ::g::Uno::Float2__New2((ActualSize().X * 0.5f) - (ActualSize().Y * 0.5f), 0.0f) : ::g::Uno::Float2__New2(0.0f, (ActualSize().Y * 0.5f) - (ActualSize().X * 0.5f));
}

// private float get_Radius() [instance] :517
float RegularPolygonVisual::Radius()
{
    return ::g::Uno::Math::Min1(ActualSize().X, ActualSize().Y) * 0.5f;
}

// private Fuse.Controls.RegularPolygon get_RegularPolygon() [instance] :500
::g::Fuse::Controls::RegularPolygon* RegularPolygonVisual::RegularPolygon()
{
    return uCast< ::g::Fuse::Controls::RegularPolygon*>(Shape(), ::TYPES[57/*Fuse.Controls.RegularPolygon*/]);
}

// public generated RegularPolygonVisual New() [static] :498
RegularPolygonVisual* RegularPolygonVisual::New1()
{
    RegularPolygonVisual* obj1 = (RegularPolygonVisual*)uNew(RegularPolygonVisual_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Graphics/$.uno(676)
// ---------------------------------------------------------------------------------

// public abstract class ShapeVisual<T> :676
// {
ShapeVisual_type* ShapeVisual_typeof()
{
    static uSStrong<ShapeVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 58;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ShapeVisual);
    options.TypeSize = sizeof(ShapeVisual_type);
    type = (ShapeVisual_type*)uClassType::New("Fuse.Controls.Graphics.ShapeVisual`1", options);
    type->SetBase(::g::Fuse::Controls::Graphics::ControlVisual_typeof()->MakeType(type->T(0)));
    type->fp_Attach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))ShapeVisual__Attach_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))ShapeVisual__Detach_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))ShapeVisual__GetMarginSize_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Controls::Graphics::Visual*, ::g::Fuse::DrawContext*))ShapeVisual__OnDraw_fn;
    type->fp_PrepareDraw = ShapeVisual__PrepareDraw_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[3] = ::g::Fuse::Controls::Shape_typeof();
    ::TYPES[46] = ::g::Uno::Action_typeof();
    ::TYPES[17] = ::g::Fuse::LayoutParams_typeof();
    ::TYPES[59] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[60] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[11] = ::g::Fuse::Controls::Graphics::Visual_typeof();
    ::TYPES[10] = uObject_typeof();
    ::TYPES[61] = ::g::Fuse::Controls::Graphics::ControlVisual_typeof();
    type->SetPrecalc(
        ::TYPES[61/*Fuse.Controls.Graphics.ControlVisual`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(ShapeVisual_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(ShapeVisual_type, interface1));
    type->SetFields(58);
    return type;
}

// protected generated ShapeVisual() :676
void ShapeVisual__ctor_3_fn(ShapeVisual* __this)
{
    __this->ctor_3();
}

// protected override void Attach() :685
void ShapeVisual__Attach_fn(ShapeVisual* __this)
{
    uPtr(__this->Shape())->add_ShapeChanged(uDelegate::New(::TYPES[46/*Uno.Action*/], __this, offsetof(::g::Fuse::Node_type, fp_InvalidateVisual)));
}

// protected override sealed void Detach() :690
void ShapeVisual__Detach_fn(ShapeVisual* __this)
{
    uPtr(__this->Shape())->remove_ShapeChanged(uDelegate::New(::TYPES[46/*Uno.Action*/], __this, offsetof(::g::Fuse::Node_type, fp_InvalidateVisual)));
}

// public override float2 GetMarginSize(Fuse.LayoutParams lp) :678
void ShapeVisual__GetMarginSize_fn(ShapeVisual* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = lp_.Size(), void();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :695
void ShapeVisual__OnDraw_fn(ShapeVisual* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Fuse::Drawing::Brush* ret1;
    ::g::Fuse::Drawing::Stroke* ret2;
    __this->PrepareDraw(dc);

    if (uPtr(__this->Shape())->HasFills())

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(__this->Shape())->Fills()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Drawing::Brush* fill = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[59/*Uno.Collections.IEnumerator<Fuse.Drawing.Brush>*/]), &ret1), ret1);
            __this->DrawFill(dc, fill);
        }

    if (uPtr(__this->Shape())->HasStrokes())

        for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(__this->Shape())->Strokes()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof()))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Drawing::Stroke* stroke = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[60/*Uno.Collections.IEnumerator<Fuse.Drawing.Stroke>*/]), &ret2), ret2);
            __this->DrawStroke(dc, stroke);
        }
}

// protected virtual void PrepareDraw(Fuse.DrawContext dc) :712
void ShapeVisual__PrepareDraw_fn(ShapeVisual* __this, ::g::Fuse::DrawContext* dc)
{
    uPtr(__this->Shape())->PrepareDraw(dc, __this->ActualSize());
}

// protected internal Fuse.Controls.Shape get_Shape() :683
void ShapeVisual__get_Shape_fn(ShapeVisual* __this, ::g::Fuse::Controls::Shape** __retval)
{
    *__retval = __this->Shape();
}

// protected generated ShapeVisual() [instance] :676
void ShapeVisual::ctor_3()
{
    ctor_2();
}

// protected internal Fuse.Controls.Shape get_Shape() [instance] :683
::g::Fuse::Controls::Shape* ShapeVisual::Shape()
{
    uType* __types[] = {
        __type->GetBase(ShapeVisual_typeof())->T(0),
        __type->GetBase(ShapeVisual_typeof())->Precalced(0/*Fuse.Controls.Graphics.ControlVisual<T>*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return uCast< ::g::Fuse::Controls::Shape*>(uBoxPtr(__types[0], (::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret3), ret3)), ::TYPES[3/*Fuse.Controls.Shape*/]);
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Graphics/$.uno(419)
// ---------------------------------------------------------------------------------

// public sealed class StarVisual :419
// {
::g::Fuse::Controls::Graphics::PathShapeVisual_type* StarVisual_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Graphics::PathShapeVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 65;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(StarVisual);
    options.TypeSize = sizeof(::g::Fuse::Controls::Graphics::PathShapeVisual_type);
    type = (::g::Fuse::Controls::Graphics::PathShapeVisual_type*)uClassType::New("Fuse.Controls.Graphics.StarVisual", options);
    type->SetBase(::g::Fuse::Controls::Graphics::PathShapeVisual_typeof()->MakeType(::g::Fuse::Controls::Star_typeof()));
    type->fp_ctor_ = (void*)StarVisual__New1_fn;
    type->fp_UpdatePath = (void(*)(::g::Fuse::Controls::Graphics::PathShapeVisual*, ::g::Fuse::Drawing::PathGeometryRenderer*))StarVisual__UpdatePath_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[62] = ::g::Fuse::Controls::Star_typeof();
    ::TYPES[28] = ::g::Fuse::Drawing::PathGeometryRenderer_typeof();
    ::TYPES[7] = ::g::Uno::Float2_typeof();
    ::TYPES[11] = ::g::Fuse::Controls::Graphics::Visual_typeof();
    ::TYPES[63] = ::g::Fuse::Controls::Graphics::ShapeVisual_typeof()->MakeType(::g::Fuse::Controls::Star_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Graphics::PathShapeVisual_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Graphics::PathShapeVisual_type, interface1));
    type->SetFields(60,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Graphics::StarVisual, _cachedDegrees), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Graphics::StarVisual, _cachedPoints), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Graphics::StarVisual, _cachedRadius), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Graphics::StarVisual, _cachedRoundRatio), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Graphics::StarVisual, _cachedSpokeRadius), 0);
    return type;
}

// public generated StarVisual() :419
void StarVisual__ctor_5_fn(StarVisual* __this)
{
    __this->ctor_5();
}

// public generated StarVisual New() :419
void StarVisual__New1_fn(StarVisual** __retval)
{
    *__retval = StarVisual::New1();
}

// private float2 get_Offset() :431
void StarVisual__get_Offset_fn(StarVisual* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Offset();
}

// private float get_Radius() :441
void StarVisual__get_Radius_fn(StarVisual* __this, float* __retval)
{
    *__retval = __this->Radius();
}

// private float get_SpokeRadius() :446
void StarVisual__get_SpokeRadius_fn(StarVisual* __this, float* __retval)
{
    *__retval = __this->SpokeRadius();
}

// private Fuse.Controls.Star get_Star() :421
void StarVisual__get_Star_fn(StarVisual* __this, ::g::Fuse::Controls::Star** __retval)
{
    *__retval = __this->Star();
}

// protected override sealed void UpdatePath(Fuse.Drawing.PathGeometryRenderer renderer) :449
void StarVisual__UpdatePath_fn(StarVisual* __this, ::g::Fuse::Drawing::PathGeometryRenderer* renderer)
{
    if ((__this->Star() == NULL) || (uPtr(__this->Star())->Points() < 3))
        return;

    if (((((__this->_cachedPoints == uPtr(__this->Star())->Points()) && (__this->_cachedRadius == __this->Radius())) && (__this->_cachedSpokeRadius == __this->SpokeRadius())) && (__this->_cachedDegrees == uPtr(__this->Star())->RotationDegrees())) && (__this->_cachedRoundRatio == uPtr(__this->Star())->RoundRatio()))
        return;

    __this->_cachedPoints = uPtr(__this->Star())->Points();
    __this->_cachedRadius = __this->Radius();
    __this->_cachedSpokeRadius = __this->SpokeRadius();
    __this->_cachedDegrees = uPtr(__this->Star())->RotationDegrees();
    __this->_cachedRoundRatio = uPtr(__this->Star())->RoundRatio();
    __this->InvalidateRenderBounds();
    uPtr(renderer)->Geometry(::g::Fuse::Drawing::PathGeometryExtensions::Star(::g::Fuse::Drawing::PathGeometry::New1()->MoveTo1(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New1(__this->Radius()), __this->Offset())), uPtr(__this->Star())->Points(), __this->Radius(), __this->SpokeRadius(), uPtr(__this->Star())->RoundRatio(), uPtr(__this->Star())->RotationRadians()));
}

// public generated StarVisual() [instance] :419
void StarVisual::ctor_5()
{
    ctor_4();
}

// private float2 get_Offset() [instance] :431
::g::Uno::Float2 StarVisual::Offset()
{
    return (ActualSize().X > ActualSize().Y) ? ::g::Uno::Float2__New2((ActualSize().X * 0.5f) - (ActualSize().Y * 0.5f), 0.0f) : ::g::Uno::Float2__New2(0.0f, (ActualSize().Y * 0.5f) - (ActualSize().X * 0.5f));
}

// private float get_Radius() [instance] :441
float StarVisual::Radius()
{
    return ::g::Uno::Math::Min1(ActualSize().X, ActualSize().Y) * 0.5f;
}

// private float get_SpokeRadius() [instance] :446
float StarVisual::SpokeRadius()
{
    return Radius() * uPtr(Star())->Ratio();
}

// private Fuse.Controls.Star get_Star() [instance] :421
::g::Fuse::Controls::Star* StarVisual::Star()
{
    return uCast< ::g::Fuse::Controls::Star*>(Shape(), ::TYPES[62/*Fuse.Controls.Star*/]);
}

// public generated StarVisual New() [static] :419
StarVisual* StarVisual::New1()
{
    StarVisual* obj1 = (StarVisual*)uNew(StarVisual_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Graphics/$.uno(993)
// ---------------------------------------------------------------------------------

// public abstract class TextVisual :993
// {
::g::Fuse::Controls::Graphics::ControlVisual_type* TextVisual_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Graphics::ControlVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 58;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TextVisual);
    options.TypeSize = sizeof(::g::Fuse::Controls::Graphics::ControlVisual_type);
    type = (::g::Fuse::Controls::Graphics::ControlVisual_type*)uClassType::New("Fuse.Controls.Graphics.TextVisual", options);
    type->SetBase(::g::Fuse::Controls::Graphics::ControlVisual_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof()));
    type->fp_Attach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))TextVisual__Attach_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))TextVisual__Detach_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Node*, ::g::Fuse::HitTestContext*))TextVisual__OnHitTest_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[14] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[13] = ::g::Fuse::Controls::Graphics::ControlVisual_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof());
    ::TYPES[39] = ::g::Uno::EventHandler_typeof();
    ::TYPES[64] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[6] = ::g::Fuse::HitTestContext_typeof();
    ::TYPES[8] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Graphics::ControlVisual_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Graphics::ControlVisual_type, interface1));
    type->SetFields(58);
    return type;
}

// protected generated TextVisual() :993
void TextVisual__ctor_3_fn(TextVisual* __this)
{
    __this->ctor_3();
}

// protected override void Attach() :995
void TextVisual__Attach_fn(TextVisual* __this)
{
    ::g::Fuse::Controls::TextControl* ret1;
    ::g::Fuse::Controls::TextControl* ret2;
    ::g::Fuse::Controls::TextControl* ret3;
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret1), ret1))->add_TextLayoutPropertyChanged(uDelegate::New(::TYPES[39/*Uno.EventHandler*/], (void*)TextVisual__OnTextLayoutPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret2), ret2))->add_TextRenderPropertyChanged(uDelegate::New(::TYPES[39/*Uno.EventHandler*/], (void*)TextVisual__OnTextRenderPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret3), ret3))->add_ValueChanged(uDelegate::New(::TYPES[64/*Uno.UX.ValueChangedHandler<string>*/], (void*)TextVisual__OnValueChanged_fn, __this));
}

// protected override void Detach() :1002
void TextVisual__Detach_fn(TextVisual* __this)
{
    ::g::Fuse::Controls::TextControl* ret4;
    ::g::Fuse::Controls::TextControl* ret5;
    ::g::Fuse::Controls::TextControl* ret6;
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret4), ret4))->remove_TextLayoutPropertyChanged(uDelegate::New(::TYPES[39/*Uno.EventHandler*/], (void*)TextVisual__OnTextLayoutPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret5), ret5))->remove_TextRenderPropertyChanged(uDelegate::New(::TYPES[39/*Uno.EventHandler*/], (void*)TextVisual__OnTextRenderPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret6), ret6))->remove_ValueChanged(uDelegate::New(::TYPES[64/*Uno.UX.ValueChangedHandler<string>*/], (void*)TextVisual__OnValueChanged_fn, __this));
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :1025
void TextVisual__OnHitTest_fn(TextVisual* __this, ::g::Fuse::HitTestContext* htc)
{
    if (__this->IsPointInside(uPtr(htc)->LocalPoint()))
        uPtr(htc)->Hit(__this);

    ::g::Fuse::Node__OnHitTest_fn(__this, htc);
}

// private void OnTextLayoutPropertyChanged(object sender, Uno.EventArgs args) :1009
void TextVisual__OnTextLayoutPropertyChanged_fn(TextVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnTextLayoutPropertyChanged(sender, args);
}

// private void OnTextRenderPropertyChanged(object sender, Uno.EventArgs args) :1014
void TextVisual__OnTextRenderPropertyChanged_fn(TextVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnTextRenderPropertyChanged(sender, args);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) :1019
void TextVisual__OnValueChanged_fn(TextVisual* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// protected generated TextVisual() [instance] :993
void TextVisual::ctor_3()
{
    ctor_2();
}

// private void OnTextLayoutPropertyChanged(object sender, Uno.EventArgs args) [instance] :1009
void TextVisual::OnTextLayoutPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::TextControl* ret7;
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret7), ret7))->InvalidateLayout(2);
}

// private void OnTextRenderPropertyChanged(object sender, Uno.EventArgs args) [instance] :1014
void TextVisual::OnTextRenderPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::TextControl* ret8;
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret8), ret8))->InvalidateVisual();
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) [instance] :1019
void TextVisual::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    ::g::Fuse::Controls::TextControl* ret9;
    ::g::Fuse::Controls::TextControl* ret10;
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret9), ret9))->InvalidateLayout(2);
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret10), ret10))->InvalidateVisual();
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Graphics/$.uno(1041)
// ----------------------------------------------------------------------------------

// public abstract class Visual :1041
// {
Visual_type* Visual_typeof()
{
    static uSStrong<Visual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 57;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Visual);
    options.TypeSize = sizeof(Visual_type);
    type = (Visual_type*)uClassType::New("Fuse.Controls.Graphics.Visual", options);
    type->SetBase(::g::Fuse::Node_typeof());
    type->fp_Draw = (void(*)(::g::Fuse::Node*, ::g::Fuse::DrawContext*))Visual__Draw_fn;
    type->fp_get_LocalRenderBounds = (void(*)(::g::Fuse::Node*, ::g::Uno::Rect*))Visual__get_LocalRenderBounds_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))Visual__OnArrangeMarginBox_fn;
    type->fp_PrependImplicitTransform = (void(*)(::g::Fuse::Node*, ::g::Fuse::FastMatrix*))Visual__PrependImplicitTransform_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[7] = ::g::Uno::Float2_typeof();
    ::TYPES[17] = ::g::Fuse::LayoutParams_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(Visual_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(Visual_type, interface1));
    type->SetFields(55,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Graphics::Visual, _position), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Graphics::Visual, _ActualSize), 0);
    return type;
}

// protected generated Visual() :1041
void Visual__ctor_1_fn(Visual* __this)
{
    __this->ctor_1();
}

// protected generated float2 get_ActualSize() :1043
void Visual__get_ActualSize_fn(Visual* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ActualSize();
}

// protected generated void set_ActualSize(float2 value) :1043
void Visual__set_ActualSize_fn(Visual* __this, ::g::Uno::Float2* value)
{
    __this->ActualSize(*value);
}

// public override sealed void Draw(Fuse.DrawContext dc) :1081
void Visual__Draw_fn(Visual* __this, ::g::Fuse::DrawContext* dc)
{
    double t;
    __this->OnDraw(dc);
    __this->ValidateVisual();
}

// public bool IsPointInside(float2 localPoint) :1071
void Visual__IsPointInside_fn(Visual* __this, ::g::Uno::Float2* localPoint, bool* __retval)
{
    *__retval = __this->IsPointInside(*localPoint);
}

// public override Uno.Rect get_LocalRenderBounds() :1078
void Visual__get_LocalRenderBounds_fn(Visual* __this, ::g::Uno::Rect* __retval)
{
    return *__retval = ::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), __this->ActualSize()), void();
}

// protected override float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :1047
void Visual__OnArrangeMarginBox_fn(Visual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 sz = lp_.Size();

    if (!lp_.HasSize())
    {
        ::g::Uno::Float2 rsz = __this->GetMarginSize(lp_);

        if (!lp_.HasX())
            sz.X = rsz.X;

        if (!lp_.HasY())
            sz.Y = rsz.Y;
    }

    __this->_position = position_;
    __this->ActualSize(sz);
    __this->InvalidateLocalTransform();
    return *__retval = __this->ActualSize(), void();
}

// protected override sealed void PrependImplicitTransform(Fuse.FastMatrix m) :1066
void Visual__PrependImplicitTransform_fn(Visual* __this, ::g::Fuse::FastMatrix* m)
{
    uPtr(m)->PrependTranslation1(::g::Uno::Float3__New4(__this->_position, 0.0f));
}

// protected generated Visual() [instance] :1041
void Visual::ctor_1()
{
    ctor_();
}

// protected generated float2 get_ActualSize() [instance] :1043
::g::Uno::Float2 Visual::ActualSize()
{
    return _ActualSize;
}

// protected generated void set_ActualSize(float2 value) [instance] :1043
void Visual::ActualSize(::g::Uno::Float2 value)
{
    _ActualSize = value;
}

// public bool IsPointInside(float2 localPoint) [instance] :1071
bool Visual::IsPointInside(::g::Uno::Float2 localPoint)
{
    return !((((localPoint.X < 0.0f) || (localPoint.Y < 0.0f)) || (localPoint.X > ActualSize().X)) || (localPoint.Y > ActualSize().Y));
}
// }

}}}} // ::g::Fuse::Controls::Graphics
