// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/Wada.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MyFirstProject_bundle.h>
#include <_root.Wada.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Node.h>
#include <Uno.BundleFile.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
static uType* TYPES[6];

namespace g{

// public partial sealed class Wada :1
// {
// static Wada() :3
static void Wada__cctor_5_fn(uType* __type)
{
}

::g::Fuse::Controls::ParentControl_type* Wada_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 100;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Wada);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("Wada", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)Wada__New3_fn;
    type->fp_cctor_ = Wada__cctor_5_fn;
    type->interface7.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::ParentControl__FuseNavigationINavigationPanelAddChildAt_fn;
    type->interface7.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::ParentControl__FuseNavigationINavigationPanelRemoveChild_fn;
    type->interface8.fp_Add = (void(*)(uObject*, uObject*))::g::Fuse::Controls::ParentControl__FuseIObjectContainerAdd_fn;
    type->interface8.fp_Insert = (void(*)(uObject*, int*, uObject*))::g::Fuse::Controls::ParentControl__FuseIObjectContainerInsert_fn;
    type->interface8.fp_Remove = (void(*)(uObject*, uObject*))::g::Fuse::Controls::ParentControl__FuseIObjectContainerRemove_fn;
    type->interface8.fp_BeginRemove = (void(*)(uObject*, uObject*))::g::Fuse::Controls::ParentControl__FuseIObjectContainerBeginRemove_fn;
    type->interface7.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::ParentControl__get_Children_fn;
    type->interface7.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::ParentControl__add_ChildAdded_fn;
    type->interface7.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::ParentControl__remove_ChildAdded_fn;
    type->interface7.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::ParentControl__add_ChildRemoved_fn;
    type->interface7.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::ParentControl__remove_ChildRemoved_fn;
    type->interface7.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface7.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface7.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface7.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface2.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface4.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface3.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface6.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface5.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface5.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface5.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[1] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[2] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[3] = ::g::MyFirstProject_bundle_typeof();
    ::TYPES[4] = ::g::Fuse::Controls::ParentControl_typeof();
    ::TYPES[5] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::ParentControl_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::ParentControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::ParentControl_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::ParentControl_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::ParentControl_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::ParentControl_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::ParentControl_type, interface6),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::ParentControl_type, interface7),
        ::g::Fuse::IObjectContainer_typeof(), offsetof(::g::Fuse::Controls::ParentControl_type, interface8));
    type->SetFields(100);
    return type;
}

// public Wada() :6
void Wada__ctor_5_fn(Wada* __this)
{
    __this->ctor_5();
}

// private void InitializeUX() :10
void Wada__InitializeUX_fn(Wada* __this)
{
    __this->InitializeUX();
}

// public Wada New() :6
void Wada__New3_fn(Wada** __retval)
{
    *__retval = Wada::New3();
}

// public Wada() [instance] :6
void Wada::ctor_5()
{
    ctor_4();
    InitializeUX();
}

// private void InitializeUX() [instance] :10
void Wada::InitializeUX()
{
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New2();
    Width(450.0f);
    Height(450.0f);
    temp->File(::g::Uno::UX::BundleFileSource::New1(::g::MyFirstProject_bundle::wadaa29e0c46()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp);
}

// public Wada New() [static] :6
Wada* Wada::New3()
{
    Wada* obj1 = (Wada*)uNew(Wada_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

} // ::g
