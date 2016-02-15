// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/CloseIcon.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CloseIcon.h>
#include <_root.CloseIcon.Template.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.SizeUnit.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.StylePropertyWithUnit-3.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
static uType* TYPES[4];

namespace g{

// public partial sealed class CloseIcon.Template :3
// {
// static Template() :10
static void CloseIcon__Template__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* CloseIcon__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CloseIcon__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("CloseIcon.Template", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Rectangle_typeof()));
    type->fp_cctor_ = CloseIcon__Template__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))CloseIcon__Template__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[0] = ::g::Fuse::Controls::Rectangle_typeof();
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[2] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[3] = ::g::Fuse::Drawing::Brush_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::CloseIcon_typeof(), offsetof(::g::CloseIcon__Template, __parent1), 0);
    return type;
}

// public Template(CloseIcon parent) :6
void CloseIcon__Template__ctor_1_fn(CloseIcon__Template* __this, ::g::CloseIcon* parent)
{
    __this->ctor_1(parent);
}

// public Template New(CloseIcon parent) :6
void CloseIcon__Template__New1_fn(::g::CloseIcon* parent, CloseIcon__Template** __retval)
{
    *__retval = CloseIcon__Template::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.Rectangle self) :13
void CloseIcon__Template__OnApply_fn(CloseIcon__Template* __this, ::g::Fuse::Controls::Rectangle* self)
{
    bool ret2;
    bool ret3;
    ::g::Fuse::Drawing::SolidColor* temp = ::g::Fuse::Drawing::SolidColor::New1();
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::Rectangle::CornerRadiusProperty()), self, uCRef(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f)), &ret2);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Elements::Element::HeightProperty()), self, uCRef(3.0f), &ret3);
    temp->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(self)->AddStyleFill(temp);
}

// public Template(CloseIcon parent) [instance] :6
void CloseIcon__Template::ctor_1(::g::CloseIcon* parent)
{
    ctor_();
    __parent1 = parent;
}

// public Template New(CloseIcon parent) [static] :6
CloseIcon__Template* CloseIcon__Template::New1(::g::CloseIcon* parent)
{
    CloseIcon__Template* obj1 = (CloseIcon__Template*)uNew(CloseIcon__Template_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
