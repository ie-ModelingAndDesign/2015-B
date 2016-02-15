// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Android.Controls.Button.h>
#include <Fuse.StyleProperty-2.h>
#include <Uno.Action-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// ../../../../usr/local/share/uno/Packages/Fuse.Android/0.24.6/Controls/$.uno(24)
// -------------------------------------------------------------------------------

// public sealed extern class Button :24
// {
// static Button() :24
static void Button__cctor_1_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    Button::TextColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[0/*Fuse.StyleProperty<Fuse.Android.Controls.Button, float4>*/], uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f)), uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Android.Controls.Button>*/], (void*)Button__OnButtonPropertyChanged_fn), &ret2), ret2);
}

::g::Fuse::Node_type* Button_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 56;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Android.Controls.Button", options);
    type->SetBase(::g::Fuse::Node_typeof());
    type->fp_cctor_ = Button__cctor_1_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[0] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::Float4_typeof());
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(Button_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Node_type, interface1));
    type->SetFields(55,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::Android::Controls::Button::TextColorProperty_, uFieldFlagsStatic);
    return type;
}

// protected static void OnButtonPropertyChanged(Fuse.Android.Controls.Button t) :36
void Button__OnButtonPropertyChanged_fn(Button* t)
{
    Button::OnButtonPropertyChanged(t);
}

uSStrong< ::g::Fuse::StyleProperty1*> Button::TextColorProperty_;

// protected static void OnButtonPropertyChanged(Fuse.Android.Controls.Button t) [static] :36
void Button::OnButtonPropertyChanged(Button* t)
{
    Button_typeof()->Init();
}
// }

}}}} // ::g::Fuse::Android::Controls
