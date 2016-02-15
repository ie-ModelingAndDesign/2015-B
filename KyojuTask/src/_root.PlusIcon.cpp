// This file was generated based on '/Users/shintarooo0079/Desktop/MyFirstProject/.uno/PlusIcon.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.PlusIcon.h>
#include <_root.PlusIcon.Template.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Node.h>
#include <Fuse.Rotation.h>
#include <Fuse.Style.h>
#include <Fuse.Transform.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Template-1.h>
static uType* TYPES[8];

namespace g{

// public partial sealed class PlusIcon :1
// {
// static PlusIcon() :22
static void PlusIcon__cctor_5_fn(uType* __type)
{
}

::g::Fuse::Controls::ParentControl_type* PlusIcon_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 100;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(PlusIcon);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("PlusIcon", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)PlusIcon__New3_fn;
    type->fp_cctor_ = PlusIcon__cctor_5_fn;
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
    ::TYPES[0] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Rectangle_typeof());
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[2] = ::g::Fuse::Style_typeof();
    ::TYPES[3] = ::g::Uno::UX::ITemplate_typeof();
    ::TYPES[4] = ::g::Fuse::Node_typeof();
    ::TYPES[5] = ::g::Fuse::Transform_typeof();
    ::TYPES[6] = ::g::Fuse::Rotation_typeof();
    ::TYPES[7] = ::g::Fuse::Controls::ParentControl_typeof();
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

// public PlusIcon() :25
void PlusIcon__ctor_5_fn(PlusIcon* __this)
{
    __this->ctor_5();
}

// private void InitializeUX() :29
void PlusIcon__InitializeUX_fn(PlusIcon* __this)
{
    __this->InitializeUX();
}

// public PlusIcon New() :25
void PlusIcon__New3_fn(PlusIcon** __retval)
{
    *__retval = PlusIcon::New3();
}

// public PlusIcon() [instance] :25
void PlusIcon::ctor_5()
{
    ctor_4();
    InitializeUX();
}

// private void InitializeUX() [instance] :29
void PlusIcon::InitializeUX()
{
    PlusIcon__Template* collection1;
    ::g::Fuse::Style* temp = ::g::Fuse::Style::New1();
    collection1 = PlusIcon__Template::New1(this);
    uPtr(collection1)->Cascade(true);
    true;
    uPtr(collection1)->AffectSubtypes(true);
    true;
    PlusIcon__Template* temp1 = collection1;
    ::g::Fuse::Controls::Rectangle* temp2 = ::g::Fuse::Controls::Rectangle::New2();
    ::g::Fuse::Controls::Rectangle* temp3 = ::g::Fuse::Controls::Rectangle::New2();
    ::g::Fuse::Rotation* temp4 = ::g::Fuse::Rotation::New1();
    Width(25.0f);
    Height(25.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[3/*Uno.UX.ITemplate*/])), (uObject*)temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Transform*/])), temp4);
    temp4->Degrees(90.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[4/*Fuse.Node*/])), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[4/*Fuse.Node*/])), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Styles()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*Fuse.Style*/])), temp);
}

// public PlusIcon New() [static] :25
PlusIcon* PlusIcon::New3()
{
    PlusIcon* obj2 = (PlusIcon*)uNew(PlusIcon_typeof());
    obj2->ctor_5();
    return obj2;
}
// }

} // ::g
