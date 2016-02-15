// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/HamburgerIcon.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HamburgerIcon.h>
#include <_root.HamburgerIcon.Template.h>
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

// public partial sealed class HamburgerIcon.Template :3
// {
// static Template() :10
static void HamburgerIcon__Template__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* HamburgerIcon__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HamburgerIcon__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("HamburgerIcon.Template", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Rectangle_typeof()));
    type->fp_cctor_ = HamburgerIcon__Template__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))HamburgerIcon__Template__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[0] = ::g::Fuse::Controls::Rectangle_typeof();
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[2] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[3] = ::g::Fuse::Drawing::Brush_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::HamburgerIcon_typeof(), offsetof(::g::HamburgerIcon__Template, __parent1), 0);
    return type;
}

// public Template(HamburgerIcon parent) :6
void HamburgerIcon__Template__ctor_1_fn(HamburgerIcon__Template* __this, ::g::HamburgerIcon* parent)
{
    __this->ctor_1(parent);
}

// public Template New(HamburgerIcon parent) :6
void HamburgerIcon__Template__New1_fn(::g::HamburgerIcon* parent, HamburgerIcon__Template** __retval)
{
    *__retval = HamburgerIcon__Template::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.Rectangle self) :13
void HamburgerIcon__Template__OnApply_fn(HamburgerIcon__Template* __this, ::g::Fuse::Controls::Rectangle* self)
{
    bool ret2;
    bool ret3;
    bool ret4;
    ::g::Fuse::Drawing::SolidColor* temp = ::g::Fuse::Drawing::SolidColor::New1();
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::Rectangle::CornerRadiusProperty()), self, uCRef(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f)), &ret2);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Elements::Element::HeightProperty()), self, uCRef(3.0f), &ret3);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Elements::Element::MarginProperty()), self, uCRef(::g::Uno::Float4__New2(0.0f, 2.0f, 0.0f, 2.0f)), &ret4);
    temp->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(self)->AddStyleFill(temp);
}

// public Template(HamburgerIcon parent) [instance] :6
void HamburgerIcon__Template::ctor_1(::g::HamburgerIcon* parent)
{
    ctor_();
    __parent1 = parent;
}

// public Template New(HamburgerIcon parent) [static] :6
HamburgerIcon__Template* HamburgerIcon__Template::New1(::g::HamburgerIcon* parent)
{
    HamburgerIcon__Template* obj1 = (HamburgerIcon__Template*)uNew(HamburgerIcon__Template_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
