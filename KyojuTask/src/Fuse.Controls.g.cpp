// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.AppBase.h>
#include <Fuse.BeginRemoveArgs.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.BackButton.h>
#include <Fuse.Controls.BeginRemoveArgsImpl.h>
#include <Fuse.Controls.BottomBarBackground.h>
#include <Fuse.Controls.BottomFrameBackground.h>
#include <Fuse.Controls.BufferedWebViewCall.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.ContentControl.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DefaultSwitchBehavior.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Ellipse.h>
#include <Fuse.Controls.FallbackWebViewClient.h>
#include <Fuse.Controls.FillRule.h>
#include <Fuse.Controls.FitMode.h>
#include <Fuse.Controls.GraphicsView.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.ISourceReceiver.h>
#include <Fuse.Controls.IWebView.h>
#include <Fuse.Controls.JavaScriptCall.h>
#include <Fuse.Controls.LoadHtmlCall.h>
#include <Fuse.Controls.MapView.h>
#include <Fuse.Controls.NativeViewHost.h>
#include <Fuse.Controls.NavigationBar.h>
#include <Fuse.Controls.Number.h>
#include <Fuse.Controls.PageIndicator.h>
#include <Fuse.Controls.PageIndicatorDot.h>
#include <Fuse.Controls.PageIndicatorDotFactory.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.Controls.Path.h>
#include <Fuse.Controls.PathScaleMode.h>
#include <Fuse.Controls.PlainTextEdit.h>
#include <Fuse.Controls.PropertyBinding-1.h>
#include <Fuse.Controls.RangeControl.h>
#include <Fuse.Controls.RangeControl2D.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.RegularPolygon.h>
#include <Fuse.Controls.ScrollPositionChangedArgs.h>
#include <Fuse.Controls.ScrollPositionChangedHandler.h>
#include <Fuse.Controls.ScrollPropertyChangedArgs.h>
#include <Fuse.Controls.ScrollPropertyChangedHandler.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Slider.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Star.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Controls.Switch.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextBlock.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextEdit.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputActionArgs.h>
#include <Fuse.Controls.TextInputActionHandler.h>
#include <Fuse.Controls.TextInputActionStyle.h>
#include <Fuse.Controls.TextInputActionType.h>
#include <Fuse.Controls.Toggle.h>
#include <Fuse.Controls.ToggleControl.h>
#include <Fuse.Controls.TopFrameBackground.h>
#include <Fuse.Controls.Video.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.PathGeometry.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.BoxSizing.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.ElementBatchEntry.h>
#include <Fuse.Elements.ElementBatcher.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.SizeUnit.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.StretchSizing.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.Elements.TextWrapping.h>
#include <Fuse.Font.h>
#include <Fuse.Fonts.h>
#include <Fuse.FrustumViewport.h>
#include <Fuse.Gestures.Clicker.h>
#include <Fuse.Gestures.ClickerEventHandler.h>
#include <Fuse.Gestures.ScrollDirections.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.IFrustum.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusDelegator.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.FocusNavigationDirection.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.Internal.Drawing.SolidRectangle.h>
#include <Fuse.Internal.IImageContainerOwner.h>
#include <Fuse.Internal.ImageContainer.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.Layer.h>
#include <Fuse.LayoutDependent.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.DockLayout.h>
#include <Fuse.Layouts.GridLayout.h>
#include <Fuse.Layouts.Layout.h>
#include <Fuse.Layouts.Layouts.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Layouts.StackLayout.h>
#include <Fuse.Layouts.StackLayoutMode.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.Navigation.h>
#include <Fuse.Navigation.NavigationArgs.h>
#include <Fuse.Navigation.NavigationMode.h>
#include <Fuse.Navigation.NavigationPageCountHandler.h>
#include <Fuse.Navigation.NavigationPageProgressHandler.h>
#include <Fuse.Navigation.NavigationPageProperty.h>
#include <Fuse.Node.h>
#include <Fuse.NodeBounds.h>
#include <Fuse.NodeEvent-2.h>
#include <Fuse.OrthographicFrustum.h>
#include <Fuse.PlacedArgs.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.ImageSourceErrorArgs.h>
#include <Fuse.Resources.ImageSourceErrorHandler.h>
#include <Fuse.Resources.ImageSourceState.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.Scripting.BoolChangedArgs.h>
#include <Fuse.Scripting.DoubleChangedArgs.h>
#include <Fuse.Scripting.StringChangedArgs.h>
#include <Fuse.Style.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.StylePropertyWithUnit-3.h>
#include <Fuse.Transform.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Triggers.WhileFailed.h>
#include <Fuse.Triggers.WhileLoading.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Comparison-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-2.h>
#include <Uno.Geometry.Ray.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform.SystemUI.h>
#include <Uno.Platform.SystemUIWillResizeEventArgs.h>
#include <Uno.Platform.TextInputHint.h>
#include <Uno.Platform2.Display.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno.UX.Factory.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
#include <Uno.Vector.h>
static uString* STRINGS[13];
static uType* TYPES[213];

namespace g{
namespace Fuse{
namespace Controls{

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/.uno/$.uno(5)
// ---------------------------------------------------------------------------

// public partial sealed class BackButton :5
// {
// static BackButton() :8
static void BackButton__cctor_5_fn(uType* __type)
{
}

::g::Fuse::Controls::ParentControl_type* BackButton_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 101;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(BackButton);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("Fuse.Controls.BackButton", options);
    type->SetBase(::g::Fuse::Controls::Button_typeof());
    type->fp_cctor_ = BackButton__cctor_5_fn;
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
    type->SetFields(101);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(1755)
// -------------------------------------------------------------------------

// internal sealed class BeginRemoveArgsImpl :1755
// {
::g::Fuse::BeginRemoveArgs_type* BeginRemoveArgsImpl_typeof()
{
    static uSStrong< ::g::Fuse::BeginRemoveArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(BeginRemoveArgsImpl);
    options.TypeSize = sizeof(::g::Fuse::BeginRemoveArgs_type);
    type = (::g::Fuse::BeginRemoveArgs_type*)uClassType::New("Fuse.Controls.BeginRemoveArgsImpl", options);
    type->SetBase(::g::Fuse::BeginRemoveArgs_typeof());
    type->fp_OnRemoved = (void(*)(::g::Fuse::BeginRemoveArgs*))BeginRemoveArgsImpl__OnRemoved_fn;
    type->SetFields(2,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Controls::BeginRemoveArgsImpl, _Child), 0,
        ::g::Fuse::Controls::ParentControl_typeof(), offsetof(::g::Fuse::Controls::BeginRemoveArgsImpl, _Parent), 0);
    return type;
}

// public BeginRemoveArgsImpl(Fuse.Node child, Fuse.Controls.ParentControl parent) :1759
void BeginRemoveArgsImpl__ctor_2_fn(BeginRemoveArgsImpl* __this, ::g::Fuse::Node* child, ::g::Fuse::Controls::ParentControl* parent)
{
    __this->ctor_2(child, parent);
}

// public generated Fuse.Node get_Child() :1758
void BeginRemoveArgsImpl__get_Child_fn(BeginRemoveArgsImpl* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Child();
}

// private generated void set_Child(Fuse.Node value) :1758
void BeginRemoveArgsImpl__set_Child_fn(BeginRemoveArgsImpl* __this, ::g::Fuse::Node* value)
{
    __this->Child(value);
}

// public BeginRemoveArgsImpl New(Fuse.Node child, Fuse.Controls.ParentControl parent) :1759
void BeginRemoveArgsImpl__New2_fn(::g::Fuse::Node* child, ::g::Fuse::Controls::ParentControl* parent, BeginRemoveArgsImpl** __retval)
{
    *__retval = BeginRemoveArgsImpl::New2(child, parent);
}

// protected internal override sealed void OnRemoved() :1764
void BeginRemoveArgsImpl__OnRemoved_fn(BeginRemoveArgsImpl* __this)
{
    uPtr(__this->Parent())->EndRemoveChild(__this->Child());
}

// public generated Fuse.Controls.ParentControl get_Parent() :1757
void BeginRemoveArgsImpl__get_Parent_fn(BeginRemoveArgsImpl* __this, ::g::Fuse::Controls::ParentControl** __retval)
{
    *__retval = __this->Parent();
}

// private generated void set_Parent(Fuse.Controls.ParentControl value) :1757
void BeginRemoveArgsImpl__set_Parent_fn(BeginRemoveArgsImpl* __this, ::g::Fuse::Controls::ParentControl* value)
{
    __this->Parent(value);
}

// public BeginRemoveArgsImpl(Fuse.Node child, Fuse.Controls.ParentControl parent) [instance] :1759
void BeginRemoveArgsImpl::ctor_2(::g::Fuse::Node* child, ::g::Fuse::Controls::ParentControl* parent)
{
    ctor_1();
    Parent(parent);
    Child(child);
}

// public generated Fuse.Node get_Child() [instance] :1758
::g::Fuse::Node* BeginRemoveArgsImpl::Child()
{
    return _Child;
}

// private generated void set_Child(Fuse.Node value) [instance] :1758
void BeginRemoveArgsImpl::Child(::g::Fuse::Node* value)
{
    _Child = value;
}

// public generated Fuse.Controls.ParentControl get_Parent() [instance] :1757
::g::Fuse::Controls::ParentControl* BeginRemoveArgsImpl::Parent()
{
    return _Parent;
}

// private generated void set_Parent(Fuse.Controls.ParentControl value) [instance] :1757
void BeginRemoveArgsImpl::Parent(::g::Fuse::Controls::ParentControl* value)
{
    _Parent = value;
}

// public BeginRemoveArgsImpl New(Fuse.Node child, Fuse.Controls.ParentControl parent) [static] :1759
BeginRemoveArgsImpl* BeginRemoveArgsImpl::New2(::g::Fuse::Node* child, ::g::Fuse::Controls::ParentControl* parent)
{
    BeginRemoveArgsImpl* obj1 = (BeginRemoveArgsImpl*)uNew(BeginRemoveArgsImpl_typeof());
    obj1->ctor_2(child, parent);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(10)
// -----------------------------------------------------------------------

// public sealed class BottomBarBackground :10
// {
::g::Fuse::Controls::Control_type* BottomBarBackground_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 91;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(BottomBarBackground);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("Fuse.Controls.BottomBarBackground", options);
    type->SetBase(::g::Fuse::Controls::BottomFrameBackground_typeof());
    type->fp_ctor_ = (void*)BottomBarBackground__New2_fn;
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
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface6));
    type->SetFields(91);
    return type;
}

// public generated BottomBarBackground() :10
void BottomBarBackground__ctor_4_fn(BottomBarBackground* __this)
{
    __this->ctor_4();
}

// public generated BottomBarBackground New() :10
void BottomBarBackground__New2_fn(BottomBarBackground** __retval)
{
    *__retval = BottomBarBackground::New2();
}

// public generated BottomBarBackground() [instance] :10
void BottomBarBackground::ctor_4()
{
    ctor_3();
}

// public generated BottomBarBackground New() [static] :10
BottomBarBackground* BottomBarBackground::New2()
{
    BottomBarBackground* obj1 = (BottomBarBackground*)uNew(BottomBarBackground_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(12)
// -----------------------------------------------------------------------

// public class BottomFrameBackground :12
// {
::g::Fuse::Controls::Control_type* BottomFrameBackground_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 91;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(BottomFrameBackground);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("Fuse.Controls.BottomFrameBackground", options);
    type->SetBase(::g::Fuse::Controls::Control_typeof());
    type->fp_GetContentSize = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))BottomFrameBackground__GetContentSize_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))BottomFrameBackground__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))BottomFrameBackground__OnUnrooted_fn;
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
    ::TYPES[0] = ::g::Fuse::LayoutParams_typeof();
    ::TYPES[1] = ::g::Fuse::AppBase_typeof();
    ::TYPES[2] = ::g::Uno::Float2_typeof();
    ::TYPES[3] = ::g::Uno::Rect_typeof();
    ::TYPES[4] = ::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof();
    ::TYPES[5] = ::g::Uno::Platform2::Display_typeof();
    ::TYPES[6] = ::g::Uno::Platform::SystemUI_typeof();
    ::TYPES[7] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface6));
    type->SetFields(88,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::BottomFrameBackground, _height1), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::BottomFrameBackground, _includesKeyboard), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::BottomFrameBackground, _keyboardVisibleThreshold), 0);
    return type;
}

// public generated BottomFrameBackground() :12
void BottomFrameBackground__ctor_3_fn(BottomFrameBackground* __this)
{
    __this->ctor_3();
}

// protected override sealed float2 GetContentSize(Fuse.LayoutParams lp) :82
void BottomFrameBackground__GetContentSize_fn(BottomFrameBackground* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = ::g::Uno::Float2__New2(lp_.HasX() ? lp_.X() : 0.0f, __this->_height1 / uPtr(::g::Fuse::AppBase::Current1())->OSPointDensity()), void();
    return *__retval = ::g::Uno::Float2__New2(0.0f, 0.0f), void();
}

// public bool get_IncludesKeyboard() :17
void BottomFrameBackground__get_IncludesKeyboard_fn(BottomFrameBackground* __this, bool* __retval)
{
    *__retval = __this->IncludesKeyboard();
}

// public void set_IncludesKeyboard(bool value) :18
void BottomFrameBackground__set_IncludesKeyboard_fn(BottomFrameBackground* __this, bool* value)
{
    __this->IncludesKeyboard(*value);
}

// public float get_KeyboardVisibleThreshold() :31
void BottomFrameBackground__get_KeyboardVisibleThreshold_fn(BottomFrameBackground* __this, float* __retval)
{
    *__retval = __this->KeyboardVisibleThreshold();
}

// public void set_KeyboardVisibleThreshold(float value) :32
void BottomFrameBackground__set_KeyboardVisibleThreshold_fn(BottomFrameBackground* __this, float* value)
{
    __this->KeyboardVisibleThreshold(*value);
}

// private extern void OnFrameResized(object sender, Uno.Platform.SystemUIWillResizeEventArgs args) :62
void BottomFrameBackground__OnFrameResized_fn(BottomFrameBackground* __this, uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    __this->OnFrameResized(sender, args);
}

// protected override sealed void OnRooted() :42
void BottomFrameBackground__OnRooted_fn(BottomFrameBackground* __this)
{
    ::g::Fuse::Controls::Control__OnRooted_fn(__this);
    __this->_height1 = ::g::Uno::Platform::SystemUI::BottomFrame().Size().Y;
    ::g::Uno::Platform::SystemUI::add_BottomFrameWillResize(uDelegate::New(::TYPES[7/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/], (void*)BottomFrameBackground__OnFrameResized_fn, __this));
}

// protected override sealed void OnUnrooted() :52
void BottomFrameBackground__OnUnrooted_fn(BottomFrameBackground* __this)
{
    ::g::Fuse::Controls::Control__OnUnrooted_fn(__this);
    ::g::Uno::Platform::SystemUI::remove_BottomFrameWillResize(uDelegate::New(::TYPES[7/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/], (void*)BottomFrameBackground__OnFrameResized_fn, __this));
}

// public generated BottomFrameBackground() [instance] :12
void BottomFrameBackground::ctor_3()
{
    _includesKeyboard = true;
    _keyboardVisibleThreshold = 150.0f;
    ctor_2();
}

// public bool get_IncludesKeyboard() [instance] :17
bool BottomFrameBackground::IncludesKeyboard()
{
    return _includesKeyboard;
}

// public void set_IncludesKeyboard(bool value) [instance] :18
void BottomFrameBackground::IncludesKeyboard(bool value)
{
    if (_includesKeyboard != value)
    {
        _includesKeyboard = value;
        InvalidateLayout(2);
    }
}

// public float get_KeyboardVisibleThreshold() [instance] :31
float BottomFrameBackground::KeyboardVisibleThreshold()
{
    return _keyboardVisibleThreshold;
}

// public void set_KeyboardVisibleThreshold(float value) [instance] :32
void BottomFrameBackground::KeyboardVisibleThreshold(float value)
{
    if (_keyboardVisibleThreshold != value)
    {
        _keyboardVisibleThreshold = value;
        InvalidateLayout(2);
    }
}

// private extern void OnFrameResized(object sender, Uno.Platform.SystemUIWillResizeEventArgs args) [instance] :62
void BottomFrameBackground::OnFrameResized(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    float newHeight = uPtr(args)->EndFrame().Size().Y;
    ::g::Uno::Platform2::Display* display = ::g::Uno::Platform2::Display::MainDisplay();
    newHeight = ::g::Uno::Rect__Intersect(uPtr(display)->Frame(), ::g::Uno::Platform::SystemUI::BottomFrame()).Size().Y;

    if (IncludesKeyboard() || (newHeight < KeyboardVisibleThreshold()))
    {
        _height1 = newHeight;
        InvalidateLayout(2);
    }
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/WebView/$.uno(533)
// --------------------------------------------------------------------------------

// internal abstract interface BufferedWebViewCall :533
// {
uInterfaceType* BufferedWebViewCall_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.BufferedWebViewCall", 0, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(106)
// ------------------------------------------------------------------------

// public class Button :106
// {
// static Button() :106
static void Button__cctor_4_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    Button::TextProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[8/*Fuse.StyleProperty<Fuse.Controls.Button, string>*/], ::STRINGS[0/*""*/], NULL, uDelegate::New(::TYPES[9/*Uno.Action<Fuse.Controls.Button, string>*/], (void*)Button__SetText_fn), uDelegate::New(::TYPES[10/*Uno.Func<Fuse.Controls.Button, string>*/], (void*)Button__GetText_fn), &ret2), ret2);
}

::g::Fuse::Controls::ParentControl_type* Button_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 102;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("Fuse.Controls.Button", options);
    type->SetBase(::g::Fuse::Controls::ParentControl_typeof());
    type->fp_ctor_ = (void*)Button__New2_fn;
    type->fp_cctor_ = Button__cctor_4_fn;
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
    ::STRINGS[0] = uString::Const("");
    ::TYPES[8] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::String_typeof());
    ::TYPES[9] = ::g::Uno::Action2_typeof()->MakeType(Button_typeof(), ::g::Uno::String_typeof());
    ::TYPES[10] = ::g::Uno::Func1_typeof()->MakeType(Button_typeof(), ::g::Uno::String_typeof());
    ::TYPES[11] = ::g::Uno::Delegate_typeof();
    ::TYPES[12] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[13] = uObject_typeof();
    ::TYPES[14] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof());
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
    type->SetFields(99,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::Button, _text), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Controls::Button, TextChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Controls::Button::TextProperty_, uFieldFlagsStatic);
    return type;
}

// public generated Button() :106
void Button__ctor_4_fn(Button* __this)
{
    __this->ctor_4();
}

// private static string GetText(Fuse.Controls.Button b) :115
void Button__GetText_fn(Button* b, uString** __retval)
{
    *__retval = Button::GetText(b);
}

// public generated Button New() :106
void Button__New2_fn(Button** __retval)
{
    *__retval = Button::New2();
}

// private void OnTextChanged(string value, string orig) :141
void Button__OnTextChanged_fn(Button* __this, uString* value, uString* orig)
{
    __this->OnTextChanged(value, orig);
}

// private static void SetText(Fuse.Controls.Button b, string value) :120
void Button__SetText_fn(Button* b, uString* value)
{
    Button::SetText(b, value);
}

// public void SetText(string value, object origin) :136
void Button__SetText1_fn(Button* __this, uString* value, uObject* origin)
{
    __this->SetText1(value, origin);
}

// public string get_Text() :133
void Button__get_Text_fn(Button* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value) :134
void Button__set_Text_fn(Button* __this, uString* value)
{
    __this->Text(value);
}

// public generated void add_TextChanged(Uno.UX.ValueChangedHandler<string> value) :108
void Button__add_TextChanged_fn(Button* __this, uDelegate* value)
{
    __this->add_TextChanged(value);
}

// public generated void remove_TextChanged(Uno.UX.ValueChangedHandler<string> value) :108
void Button__remove_TextChanged_fn(Button* __this, uDelegate* value)
{
    __this->remove_TextChanged(value);
}

uSStrong< ::g::Fuse::StyleProperty1*> Button::TextProperty_;

// public generated Button() [instance] :106
void Button::ctor_4()
{
    _text = ::STRINGS[0/*""*/];
    ctor_3();
}

// private void OnTextChanged(string value, string orig) [instance] :141
void Button::OnTextChanged(uString* value, uString* orig)
{
    ::g::Uno::UX::ValueChangedArgs* ret3;

    if (::g::Uno::Delegate::op_Inequality(TextChanged1, NULL))
        uPtr(TextChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[14/*Uno.UX.ValueChangedArgs<string>*/], value, orig, &ret3), ret3));
}

// public void SetText(string value, object origin) [instance] :136
void Button::SetText1(uString* value, uObject* origin)
{
    Text(value);
}

// public string get_Text() [instance] :133
uString* Button::Text()
{
    return Button::GetText(this);
}

// public void set_Text(string value) [instance] :134
void Button::Text(uString* value)
{
    Button::SetText(this, value);
}

// public generated void add_TextChanged(Uno.UX.ValueChangedHandler<string> value) [instance] :108
void Button::add_TextChanged(uDelegate* value)
{
    TextChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TextChanged1, value), ::TYPES[12/*Uno.UX.ValueChangedHandler<string>*/]);
}

// public generated void remove_TextChanged(Uno.UX.ValueChangedHandler<string> value) [instance] :108
void Button::remove_TextChanged(uDelegate* value)
{
    TextChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TextChanged1, value), ::TYPES[12/*Uno.UX.ValueChangedHandler<string>*/]);
}

// private static string GetText(Fuse.Controls.Button b) [static] :115
uString* Button::GetText(Button* b)
{
    Button_typeof()->Init();
    return uPtr(b)->_text;
}

// public generated Button New() [static] :106
Button* Button::New2()
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_4();
    return obj1;
}

// private static void SetText(Fuse.Controls.Button b, string value) [static] :120
void Button::SetText(Button* b, uString* value)
{
    Button_typeof()->Init();

    if (::g::Uno::String::op_Inequality(uPtr(b)->_text, value))
    {
        uString* s = uPtr(b)->_text;
        b->_text = value;
        b->OnTextChanged(value, s);
    }
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(162)
// ------------------------------------------------------------------------

// public sealed class Circle :162
// {
::g::Fuse::Controls::ParentControl_type* Circle_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 111;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Circle);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("Fuse.Controls.Circle", options);
    type->SetBase(::g::Fuse::Controls::Shape_typeof());
    type->fp_ctor_ = (void*)Circle__New2_fn;
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
    ::TYPES[15] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[2] = ::g::Uno::Float2_typeof();
    ::TYPES[16] = ::g::Uno::Bool_typeof();
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
    type->SetFields(106,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Circle, _endAngle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Circle, _hasAngle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Circle, _hasLengthAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Circle, _lengthAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Circle, _startAngle), 0);
    return type;
}

// public generated Circle() :162
void Circle__ctor_5_fn(Circle* __this)
{
    __this->ctor_5();
}

// internal static bool AngleInRange(float angle, float start, float end) :262
void Circle__AngleInRange_fn(float* angle, float* start, float* end, bool* __retval)
{
    *__retval = Circle::AngleInRange(*angle, *start, *end);
}

// internal float2 get_Center() :166
void Circle__get_Center_fn(Circle* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Center();
}

// internal float get_EffectiveEndAngle() :251
void Circle__get_EffectiveEndAngle_fn(Circle* __this, float* __retval)
{
    *__retval = __this->EffectiveEndAngle();
}

// public float get_EndAngle() :194
void Circle__get_EndAngle_fn(Circle* __this, float* __retval)
{
    *__retval = __this->EndAngle();
}

// public void set_EndAngle(float value) :195
void Circle__set_EndAngle_fn(Circle* __this, float* value)
{
    __this->EndAngle(*value);
}

// public float get_EndAngleDegrees() :239
void Circle__get_EndAngleDegrees_fn(Circle* __this, float* __retval)
{
    *__retval = __this->EndAngleDegrees();
}

// public void set_EndAngleDegrees(float value) :240
void Circle__set_EndAngleDegrees_fn(Circle* __this, float* value)
{
    __this->EndAngleDegrees(*value);
}

// public generated Circle New() :162
void Circle__New2_fn(Circle** __retval)
{
    *__retval = Circle::New2();
}

// internal float get_Radius() :175
void Circle__get_Radius_fn(Circle* __this, float* __retval)
{
    *__retval = __this->Radius();
}

// public float get_StartAngle() :183
void Circle__get_StartAngle_fn(Circle* __this, float* __retval)
{
    *__retval = __this->StartAngle();
}

// public void set_StartAngle(float value) :184
void Circle__set_StartAngle_fn(Circle* __this, float* value)
{
    __this->StartAngle(*value);
}

// public float get_StartAngleDegrees() :234
void Circle__get_StartAngleDegrees_fn(Circle* __this, float* __retval)
{
    *__retval = __this->StartAngleDegrees();
}

// public void set_StartAngleDegrees(float value) :235
void Circle__set_StartAngleDegrees_fn(Circle* __this, float* value)
{
    __this->StartAngleDegrees(*value);
}

// internal bool get_UseAngle() :204
void Circle__get_UseAngle_fn(Circle* __this, bool* __retval)
{
    *__retval = __this->UseAngle();
}

// public generated Circle() [instance] :162
void Circle::ctor_5()
{
    ctor_4();
}

// internal float2 get_Center() [instance] :166
::g::Uno::Float2 Circle::Center()
{
    return ::g::Uno::Float2__op_Division1(ActualSize(), 2.0f);
}

// internal float get_EffectiveEndAngle() [instance] :251
float Circle::EffectiveEndAngle()
{
    return _hasLengthAngle ? _startAngle + _lengthAngle : _endAngle;
}

// public float get_EndAngle() [instance] :194
float Circle::EndAngle()
{
    return _endAngle;
}

// public void set_EndAngle(float value) [instance] :195
void Circle::EndAngle(float value)
{
    _endAngle = value;
    OnShapeChanged();
}

// public float get_EndAngleDegrees() [instance] :239
float Circle::EndAngleDegrees()
{
    return ::g::Uno::Math::RadiansToDegrees1(_endAngle);
}

// public void set_EndAngleDegrees(float value) [instance] :240
void Circle::EndAngleDegrees(float value)
{
    EndAngle(::g::Uno::Math::DegreesToRadians1(value));
}

// internal float get_Radius() [instance] :175
float Circle::Radius()
{
    return ::g::Uno::Math::Min1(ActualSize().X, ActualSize().Y) * 0.5f;
}

// public float get_StartAngle() [instance] :183
float Circle::StartAngle()
{
    return _startAngle;
}

// public void set_StartAngle(float value) [instance] :184
void Circle::StartAngle(float value)
{
    _startAngle = value;
    _hasAngle = true;
    OnShapeChanged();
}

// public float get_StartAngleDegrees() [instance] :234
float Circle::StartAngleDegrees()
{
    return ::g::Uno::Math::RadiansToDegrees1(_startAngle);
}

// public void set_StartAngleDegrees(float value) [instance] :235
void Circle::StartAngleDegrees(float value)
{
    StartAngle(::g::Uno::Math::DegreesToRadians1(value));
}

// internal bool get_UseAngle() [instance] :204
bool Circle::UseAngle()
{
    if (!_hasAngle)
        return false;

    if (_hasLengthAngle && (_lengthAngle >= 6.28318548f))
        return false;

    return true;
}

// internal static bool AngleInRange(float angle, float start, float end) [static] :262
bool Circle::AngleInRange(float angle, float start, float end)
{
    angle = ::g::Uno::Math::Mod1(angle, 6.28318548f);
    float pStartAngle = ::g::Uno::Math::Mod1(start, 6.28318548f);
    float pEndAngle = ::g::Uno::Math::Mod1(end, 6.28318548f);

    if (pStartAngle > pEndAngle)
        return (angle > pStartAngle) || (angle < pEndAngle);
    else
        return (angle > pStartAngle) && (angle < pEndAngle);
}

// public generated Circle New() [static] :162
Circle* Circle::New2()
{
    Circle* obj1 = (Circle*)uNew(Circle_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(291)
// ------------------------------------------------------------------------

// public class ContentControl :291
// {
ContentControl_type* ContentControl_typeof()
{
    static uSStrong<ContentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 89;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(ContentControl);
    options.TypeSize = sizeof(ContentControl_type);
    type = (ContentControl_type*)uClassType::New("Fuse.Controls.ContentControl", options);
    type->SetBase(::g::Fuse::Controls::Control_typeof());
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*))ContentControl__ArrangePaddingBox_fn;
    type->fp_CalcRenderBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Rect*))ContentControl__CalcRenderBounds_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))ContentControl__GetContentSize_fn;
    type->fp_GetSubNode = (void(*)(::g::Fuse::Node*, int*, ::g::Fuse::Node**))ContentControl__GetSubNode_fn;
    type->fp_OnContentChanged = ContentControl__OnContentChanged_fn;
    type->fp_OnDrawControl = (void(*)(::g::Fuse::Controls::Control*, ::g::Fuse::DrawContext*))ContentControl__OnDrawControl_fn;
    type->fp_OnHitTestChildren = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::HitTestContext*))ContentControl__OnHitTestChildren_fn;
    type->fp_get_SubNodeCount = (void(*)(::g::Fuse::Node*, int*))ContentControl__get_SubNodeCount_fn;
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
    ::TYPES[15] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[17] = ::g::Uno::Float4_typeof();
    ::TYPES[18] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(ContentControl_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(ContentControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(ContentControl_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(ContentControl_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(ContentControl_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(ContentControl_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(ContentControl_type, interface6));
    type->SetFields(88,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Controls::ContentControl, _content), 0);
    return type;
}

// public generated ContentControl() :291
void ContentControl__ctor_3_fn(ContentControl* __this)
{
    __this->ctor_3();
}

// protected override void ArrangePaddingBox(Fuse.LayoutParams lp) :341
void ContentControl__ArrangePaddingBox_fn(ContentControl* __this, ::g::Fuse::LayoutParams* lp)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Fuse::LayoutParams lp_ = *lp;

    if (__this->Content() != NULL)
    {
        ::g::Fuse::LayoutParams nlp = lp_.DeriveClone();
        nlp.RemoveSize(::g::Uno::Float2__op_Addition2((ind1 = __this->Padding(), ::g::Uno::Float2__New2(ind1.X, ind1.Y)), (ind2 = __this->Padding(), ::g::Uno::Float2__New2(ind2.Z, ind2.W))));
        uPtr(__this->Content())->ArrangeMarginBox((ind3 = __this->Padding(), ::g::Uno::Float2__New2(ind3.X, ind3.Y)), nlp);
    }
}

// protected override sealed Uno.Rect CalcRenderBounds() :320
void ContentControl__CalcRenderBounds_fn(ContentControl* __this, ::g::Uno::Rect* __retval)
{
    ::g::Uno::Rect ret5;
    ::g::Uno::Rect baseRect = (::g::Fuse::Elements::Element__CalcRenderBounds_fn(__this, &ret5), ret5);

    if (__this->Content() != NULL)
        baseRect = ::g::Uno::Rect__Union(baseRect, uPtr(__this->Content())->CalcRenderBoundsInParentSpace());

    return *__retval = baseRect, void();
}

// public Fuse.Node get_Content() :297
void ContentControl__get_Content_fn(ContentControl* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Content();
}

// public void set_Content(Fuse.Node value) :298
void ContentControl__set_Content_fn(ContentControl* __this, ::g::Fuse::Node* value)
{
    __this->Content(value);
}

// protected override float2 GetContentSize(Fuse.LayoutParams lp) :334
void ContentControl__GetContentSize_fn(ContentControl* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 ret6;

    if (__this->Content() != NULL)
        return *__retval = uPtr(__this->Content())->GetMarginSize(lp_), void();

    return *__retval = (::g::Fuse::Elements::Element__GetContentSize_fn(__this, uCRef(lp_), &ret6), ret6), void();
}

// public override sealed Fuse.Node GetSubNode(int index) :366
void ContentControl__GetSubNode_fn(ContentControl* __this, int* index, ::g::Fuse::Node** __retval)
{
    int ret7;
    int index_ = *index;
    ::g::Fuse::Node* ret8;
    int b = (::g::Fuse::Node__get_SubNodeCount_fn(__this, &ret7), ret7);

    if (index_ >= b)
        return *__retval = __this->Content(), void();

    return *__retval = (::g::Fuse::Node__GetSubNode_fn(__this, uCRef<int>(index_), &ret8), ret8), void();
}

// protected virtual void OnContentChanged(Fuse.Node oldContent, Fuse.Node newContent) :315
void ContentControl__OnContentChanged_fn(ContentControl* __this, ::g::Fuse::Node* oldContent, ::g::Fuse::Node* newContent)
{
    __this->InvalidateLayout(2);
}

// protected override sealed void OnDrawControl(Fuse.DrawContext dc) :328
void ContentControl__OnDrawControl_fn(ContentControl* __this, ::g::Fuse::DrawContext* dc)
{
    if (__this->Content() != NULL)
        uPtr(__this->Content())->Draw(dc);
}

// protected override sealed void OnHitTestChildren(Fuse.HitTestContext htc) :351
void ContentControl__OnHitTestChildren_fn(ContentControl* __this, ::g::Fuse::HitTestContext* htc)
{
    if (__this->Content() != NULL)
        uPtr(__this->Content())->HitTest(htc);

    ::g::Fuse::Elements::Element__OnHitTestChildren_fn(__this, htc);
}

// public override sealed int get_SubNodeCount() :360
void ContentControl__get_SubNodeCount_fn(ContentControl* __this, int* __retval)
{
    int ret9;
    return *__retval = (::g::Fuse::Node__get_SubNodeCount_fn(__this, &ret9), ret9) + ((__this->Content() == NULL) ? 0 : 1), void();
}

// public generated ContentControl() [instance] :291
void ContentControl::ctor_3()
{
    ctor_2();
}

// public Fuse.Node get_Content() [instance] :297
::g::Fuse::Node* ContentControl::Content()
{
    return _content;
}

// public void set_Content(Fuse.Node value) [instance] :298
void ContentControl::Content(::g::Fuse::Node* value)
{
    if (_content != value)
    {
        ::g::Fuse::Node* old = _content;

        if ((_content != NULL) && (uPtr(_content)->Parent() == this))
            uPtr(_content)->OnRemoved(this);

        _content = value;

        if ((_content != NULL) && (uPtr(_content)->Parent() != this))
            uPtr(_content)->OnAdded(this);

        OnContentChanged(old, value);
    }
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(386)
// ------------------------------------------------------------------------

// public interfacemodifiers class Control :386
// {
// static Control() :386
static void Control__cctor_2_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret1;
    Control::BackgroundProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[19/*Fuse.StyleProperty<Fuse.Controls.Control, Fuse.Drawing.Brush>*/], NULL, uDelegate::New(::TYPES[20/*Uno.Action<Fuse.Controls.Control>*/], (void*)Control__OnBackgroundChanged_fn), uDelegate::New(::TYPES[21/*Uno.Action<Fuse.Controls.Control, Fuse.Drawing.Brush>*/], (void*)Control__SetBackground_fn), uDelegate::New(::TYPES[22/*Uno.Func<Fuse.Controls.Control, Fuse.Drawing.Brush>*/], (void*)Control__GetBackground_fn), &ret1), ret1);
}

Control_type* Control_typeof()
{
    static uSStrong<Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 89;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(Control);
    options.TypeSize = sizeof(Control_type);
    type = (Control_type*)uClassType::New("Fuse.Controls.Control", options);
    type->SetBase(::g::Fuse::Elements::Element_typeof());
    type->fp_cctor_ = Control__cctor_2_fn;
    type->fp_get_HitTestLocalVisualBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::NodeBounds**))Control__get_HitTestLocalVisualBounds_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*))Control__OnDraw_fn;
    type->fp_OnDrawControl = Control__OnDrawControl_fn;
    type->fp_OnHitTestLocalVisual = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::HitTestContext*))Control__OnHitTestLocalVisual_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Control__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Control__OnUnrooted_fn;
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
    ::TYPES[19] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Control_typeof(), ::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[20] = ::g::Uno::Action1_typeof()->MakeType(Control_typeof());
    ::TYPES[21] = ::g::Uno::Action2_typeof()->MakeType(Control_typeof(), ::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[22] = ::g::Uno::Func1_typeof()->MakeType(Control_typeof(), ::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[16] = ::g::Uno::Bool_typeof();
    ::TYPES[23] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[15] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[24] = ::g::Fuse::Internal::Drawing::SolidRectangle_typeof();
    ::TYPES[11] = ::g::Uno::Delegate_typeof();
    ::TYPES[25] = ::g::Uno::EventHandler_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[26] = ::g::Uno::EventArgs_typeof();
    ::TYPES[27] = ::g::Fuse::HitTestContext_typeof();
    ::TYPES[18] = ::g::Fuse::Node_typeof();
    ::TYPES[28] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    ::TYPES[29] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(Control_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(Control_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(Control_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(Control_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(Control_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(Control_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(Control_type, interface6));
    type->SetFields(86,
        ::g::Fuse::Drawing::Brush_typeof(), offsetof(::g::Fuse::Controls::Control, _background), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::Control, ControlRenderPropertyChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Control_typeof(), ::g::Fuse::Drawing::Brush_typeof()), (uintptr_t)&::g::Fuse::Controls::Control::BackgroundProperty_, uFieldFlagsStatic);
    return type;
}

// protected generated Control() :386
void Control__ctor_2_fn(Control* __this)
{
    __this->ctor_2();
}

// public Fuse.Drawing.Brush get_Background() :395
void Control__get_Background_fn(Control* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->Background();
}

// public void set_Background(Fuse.Drawing.Brush value) :396
void Control__set_Background_fn(Control* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->Background(value);
}

// public generated void add_ControlRenderPropertyChanged(Uno.EventHandler value) :514
void Control__add_ControlRenderPropertyChanged_fn(Control* __this, uDelegate* value)
{
    __this->add_ControlRenderPropertyChanged(value);
}

// public generated void remove_ControlRenderPropertyChanged(Uno.EventHandler value) :514
void Control__remove_ControlRenderPropertyChanged_fn(Control* __this, uDelegate* value)
{
    __this->remove_ControlRenderPropertyChanged(value);
}

// protected void DrawBackground(Fuse.DrawContext dc, float opacity) :421
void Control__DrawBackground_fn(Control* __this, ::g::Fuse::DrawContext* dc, float* opacity)
{
    __this->DrawBackground(dc, *opacity);
}

// private static Fuse.Drawing.Brush GetBackground(Fuse.Controls.Control c) :412
void Control__GetBackground_fn(Control* c, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = Control::GetBackground(c);
}

// protected override sealed Fuse.NodeBounds get_HitTestLocalVisualBounds() :491
void Control__get_HitTestLocalVisualBounds_fn(Control* __this, ::g::Fuse::NodeBounds** __retval)
{
    ::g::Fuse::NodeBounds* ret3;
    ::g::Fuse::NodeBounds* nb = (::g::Fuse::Elements::Element__get_HitTestLocalVisualBounds_fn(__this, &ret3), ret3);

    if (__this->Background() != NULL)
        nb = uPtr(nb)->AddRect(::g::Uno::Float2__New1(0.0f), __this->ActualSize());

    return *__retval = nb, void();
}

// private static void OnBackgroundChanged(Fuse.Controls.Control c) :416
void Control__OnBackgroundChanged_fn(Control* c)
{
    Control::OnBackgroundChanged(c);
}

// protected void OnControlRenderPropertyChanged() :515
void Control__OnControlRenderPropertyChanged_fn(Control* __this)
{
    __this->OnControlRenderPropertyChanged();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :473
void Control__OnDraw_fn(Control* __this, ::g::Fuse::DrawContext* dc)
{
    __this->DrawBackground(dc, 1.0f);
    __this->OnDrawControl(dc);
}

// protected virtual void OnDrawControl(Fuse.DrawContext dc) :479
void Control__OnDrawControl_fn(Control* __this, ::g::Fuse::DrawContext* dc)
{
}

// protected override sealed void OnHitTestLocalVisual(Fuse.HitTestContext htc) :481
void Control__OnHitTestLocalVisual_fn(Control* __this, ::g::Fuse::HitTestContext* htc)
{
    if ((__this->Background() != NULL) && __this->IsPointInside(uPtr(htc)->LocalPoint()))
        uPtr(htc)->Hit(__this);

    ::g::Fuse::Elements::Element__OnHitTestLocalVisual_fn(__this, htc);
}

// protected override void OnRooted() :500
void Control__OnRooted_fn(Control* __this)
{
    ::g::Fuse::Elements::Element__OnRooted_fn(__this);

    if (__this->_background != NULL)
        uPtr(__this->_background)->Pin();
}

// protected override void OnUnrooted() :507
void Control__OnUnrooted_fn(Control* __this)
{
    if (__this->_background != NULL)
        uPtr(__this->_background)->Unpin();

    ::g::Fuse::Elements::Element__OnUnrooted_fn(__this);
}

// private static void SetBackground(Fuse.Controls.Control c, Fuse.Drawing.Brush value) :398
void Control__SetBackground_fn(Control* c, ::g::Fuse::Drawing::Brush* value)
{
    Control::SetBackground(c, value);
}

uSStrong< ::g::Fuse::StyleProperty1*> Control::BackgroundProperty_;

// protected generated Control() [instance] :386
void Control::ctor_2()
{
    ctor_1();
}

// public Fuse.Drawing.Brush get_Background() [instance] :395
::g::Fuse::Drawing::Brush* Control::Background()
{
    return _background;
}

// public void set_Background(Fuse.Drawing.Brush value) [instance] :396
void Control::Background(::g::Fuse::Drawing::Brush* value)
{
    bool ret2;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Control::BackgroundProperty()), this, value, &ret2);
}

// public generated void add_ControlRenderPropertyChanged(Uno.EventHandler value) [instance] :514
void Control::add_ControlRenderPropertyChanged(uDelegate* value)
{
    ControlRenderPropertyChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ControlRenderPropertyChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public generated void remove_ControlRenderPropertyChanged(Uno.EventHandler value) [instance] :514
void Control::remove_ControlRenderPropertyChanged(uDelegate* value)
{
    ControlRenderPropertyChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ControlRenderPropertyChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// protected void DrawBackground(Fuse.DrawContext dc, float opacity) [instance] :421
void Control::DrawBackground(::g::Fuse::DrawContext* dc, float opacity)
{
    if ((Background() != NULL) && !uPtr(Background())->IsCompletelyTransparent())
    {
        uPtr(Background())->Prepare(dc, ActualSize());
        uPtr(::g::Fuse::Internal::Drawing::SolidRectangle::Impl())->DrawElement(dc, this, Background(), opacity);
    }
}

// protected void OnControlRenderPropertyChanged() [instance] :515
void Control::OnControlRenderPropertyChanged()
{
    InvalidateVisual();

    if (::g::Uno::Delegate::op_Inequality(ControlRenderPropertyChanged1, NULL))
        uPtr(ControlRenderPropertyChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private static Fuse.Drawing.Brush GetBackground(Fuse.Controls.Control c) [static] :412
::g::Fuse::Drawing::Brush* Control::GetBackground(Control* c)
{
    Control_typeof()->Init();
    return uPtr(c)->_background;
}

// private static void OnBackgroundChanged(Fuse.Controls.Control c) [static] :416
void Control::OnBackgroundChanged(Control* c)
{
    Control_typeof()->Init();
    uPtr(c)->OnControlRenderPropertyChanged();
}

// private static void SetBackground(Fuse.Controls.Control c, Fuse.Drawing.Brush value) [static] :398
void Control::SetBackground(Control* c, ::g::Fuse::Drawing::Brush* value)
{
    Control_typeof()->Init();

    if (uPtr(c)->IsLocalRooted() && (uPtr(c)->_background != NULL))
        uPtr(uPtr(c)->_background)->Unpin();

    if (uIs(c->_background, ::TYPES[28/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(c->_background, ::TYPES[28/*Fuse.Drawing.DynamicBrush*/]))->remove_ShadingChanged(uDelegate::New(::TYPES[29/*Uno.Action*/], (void*)Control__OnControlRenderPropertyChanged_fn, c));

    c->_background = value;

    if (uIs(c->_background, ::TYPES[28/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(c->_background, ::TYPES[28/*Fuse.Drawing.DynamicBrush*/]))->add_ShadingChanged(uDelegate::New(::TYPES[29/*Uno.Action*/], (void*)Control__OnControlRenderPropertyChanged_fn, c));

    if (c->IsLocalRooted() && (c->_background != NULL))
        uPtr(c->_background)->Pin();
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/Graphics/$.uno(836)
// ---------------------------------------------------------------------------------

// public sealed class DefaultSwitchBehavior :836
// {
::g::Fuse::Triggers::Trigger_type* DefaultSwitchBehavior_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 23;
    options.ObjectSize = sizeof(DefaultSwitchBehavior);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Controls.DefaultSwitchBehavior", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)DefaultSwitchBehavior__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))DefaultSwitchBehavior__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))DefaultSwitchBehavior__OnUnrooted_fn;
    ::STRINGS[1] = uString::Const("SwitchBehavior must be rooted in a Switch");
    ::TYPES[30] = ::g::Fuse::Controls::ToggleControl_typeof();
    ::TYPES[16] = ::g::Uno::Bool_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[2] = ::g::Uno::Float2_typeof();
    ::TYPES[31] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[29] = ::g::Uno::Action_typeof();
    ::TYPES[32] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[33] = ::g::Uno::Double_typeof();
    ::TYPES[34] = ::g::Fuse::Controls::Switch_typeof();
    ::TYPES[35] = ::g::Fuse::Behavior_typeof();
    ::TYPES[36] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[37] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[18] = ::g::Fuse::Node_typeof();
    ::TYPES[38] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[39] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[40] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[41] = ::g::Fuse::Gestures::Clicker_typeof();
    ::TYPES[42] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[15] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[43] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[44] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Bool_typeof());
    type->SetFields(15,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Controls::DefaultSwitchBehavior, _bounds), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::DefaultSwitchBehavior, _captured), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::DefaultSwitchBehavior, _capturedIndex), 0,
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(::g::Fuse::Controls::DefaultSwitchBehavior, _clicker), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::DefaultSwitchBehavior, _currentCoord), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::DefaultSwitchBehavior, _originalP), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::DefaultSwitchBehavior, _prevCoord), 0,
        ::g::Fuse::Controls::Switch_typeof(), offsetof(::g::Fuse::Controls::DefaultSwitchBehavior, _switch), 0);
    return type;
}

// public generated DefaultSwitchBehavior() :836
void DefaultSwitchBehavior__ctor_2_fn(DefaultSwitchBehavior* __this)
{
    __this->ctor_2();
}

// public Fuse.Elements.Element get_Bounds() :843
void DefaultSwitchBehavior__get_Bounds_fn(DefaultSwitchBehavior* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Bounds();
}

// public void set_Bounds(Fuse.Elements.Element value) :844
void DefaultSwitchBehavior__set_Bounds_fn(DefaultSwitchBehavior* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Bounds(value);
}

// public generated DefaultSwitchBehavior New() :836
void DefaultSwitchBehavior__New1_fn(DefaultSwitchBehavior** __retval)
{
    *__retval = DefaultSwitchBehavior::New1();
}

// private void OnCaptureLost() :923
void DefaultSwitchBehavior__OnCaptureLost_fn(DefaultSwitchBehavior* __this)
{
    __this->OnCaptureLost();
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args) :901
void DefaultSwitchBehavior__OnPlaced_fn(DefaultSwitchBehavior* __this, uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    __this->OnPlaced(sender, args);
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :929
void DefaultSwitchBehavior__OnPointerMoved_fn(DefaultSwitchBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :910
void DefaultSwitchBehavior__OnPointerPressed_fn(DefaultSwitchBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :961
void DefaultSwitchBehavior__OnPointerReleased_fn(DefaultSwitchBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnPointerTapped(object a, int tapCount) :970
void DefaultSwitchBehavior__OnPointerTapped_fn(DefaultSwitchBehavior* __this, uObject* a, int* tapCount)
{
    __this->OnPointerTapped(a, *tapCount);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :848
void DefaultSwitchBehavior__OnRooted_fn(DefaultSwitchBehavior* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    __this->_switch = uAs< ::g::Fuse::Controls::Switch*>(__this->ParentNode(), ::TYPES[34/*Fuse.Controls.Switch*/]);

    if (__this->_switch == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"SwitchBehav...*/]));

    uPtr(__this->_switch)->add_ValueChanged(uDelegate::New(::TYPES[36/*Uno.UX.ValueChangedHandler<bool>*/], (void*)DefaultSwitchBehavior__OnValueChanged_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->_switch, uDelegate::New(::TYPES[38/*Fuse.Input.PointerPressedHandler*/], (void*)DefaultSwitchBehavior__OnPointerPressed_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), __this->_switch, uDelegate::New(::TYPES[39/*Fuse.Input.PointerMovedHandler*/], (void*)DefaultSwitchBehavior__OnPointerMoved_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->_switch, uDelegate::New(::TYPES[40/*Fuse.Input.PointerReleasedHandler*/], (void*)DefaultSwitchBehavior__OnPointerReleased_fn, __this));
    __this->_clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->_switch);
    uPtr(__this->_clicker)->add_TappedEvent(uDelegate::New(::TYPES[42/*Fuse.Gestures.ClickerEventHandler*/], (void*)DefaultSwitchBehavior__OnPointerTapped_fn, __this));

    if (__this->Bounds() == NULL)
        __this->Bounds(uAs< ::g::Fuse::Elements::Element*>(__this->_switch, ::TYPES[15/*Fuse.Elements.Element*/]));

    if (uPtr(__this->_switch)->Value())
        __this->BypassActivate();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :871
void DefaultSwitchBehavior__OnUnrooted_fn(DefaultSwitchBehavior* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->_switch)->remove_ValueChanged(uDelegate::New(::TYPES[36/*Uno.UX.ValueChangedHandler<bool>*/], (void*)DefaultSwitchBehavior__OnValueChanged_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->_switch, uDelegate::New(::TYPES[38/*Fuse.Input.PointerPressedHandler*/], (void*)DefaultSwitchBehavior__OnPointerPressed_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), __this->_switch, uDelegate::New(::TYPES[39/*Fuse.Input.PointerMovedHandler*/], (void*)DefaultSwitchBehavior__OnPointerMoved_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->_switch, uDelegate::New(::TYPES[40/*Fuse.Input.PointerReleasedHandler*/], (void*)DefaultSwitchBehavior__OnPointerReleased_fn, __this));
    uPtr(__this->_switch)->remove_Placed(uDelegate::New(::TYPES[43/*Fuse.PlacedHandler*/], (void*)DefaultSwitchBehavior__OnPlaced_fn, __this));
    uPtr(__this->_clicker)->remove_TappedEvent(uDelegate::New(::TYPES[42/*Fuse.Gestures.ClickerEventHandler*/], (void*)DefaultSwitchBehavior__OnPointerTapped_fn, __this));
    uPtr(__this->_clicker)->Detach();
    __this->_clicker = NULL;
    __this->_switch = NULL;
    __this->Bounds(NULL);
    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(__this);
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<bool> args) :977
void DefaultSwitchBehavior__OnValueChanged_fn(DefaultSwitchBehavior* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// private bool ReleaseCapture() :951
void DefaultSwitchBehavior__ReleaseCapture_fn(DefaultSwitchBehavior* __this, bool* __retval)
{
    *__retval = __this->ReleaseCapture();
}

// private float2 get_Size() :895
void DefaultSwitchBehavior__get_Size_fn(DefaultSwitchBehavior* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public generated DefaultSwitchBehavior() [instance] :836
void DefaultSwitchBehavior::ctor_2()
{
    ctor_1();
}

// public Fuse.Elements.Element get_Bounds() [instance] :843
::g::Fuse::Elements::Element* DefaultSwitchBehavior::Bounds()
{
    return _bounds;
}

// public void set_Bounds(Fuse.Elements.Element value) [instance] :844
void DefaultSwitchBehavior::Bounds(::g::Fuse::Elements::Element* value)
{
    _bounds = value;
}

// private void OnCaptureLost() [instance] :923
void DefaultSwitchBehavior::OnCaptureLost()
{
    _captured = false;
    PlayEnd(uPtr(_switch)->Value(), NULL);
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args) [instance] :901
void DefaultSwitchBehavior::OnPlaced(uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    PlayEnd(uPtr(_switch)->Value(), NULL);
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :929
void DefaultSwitchBehavior::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    if (_captured)
    {
        if (!uPtr(args)->IsHardCapturedTo(this))
        {
            if (::g::Uno::Math::Abs1(_originalP.X - uPtr(_switch)->WindowToLocal(uPtr(args)->WindowPoint()).X) > 10.0f)
                uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[29/*Uno.Action*/], (void*)DefaultSwitchBehavior__OnCaptureLost_fn, this), NULL);
        }

        _prevCoord = _currentCoord;
        _currentCoord = uPtr(_switch)->WindowToLocal(uPtr(args)->WindowPoint());
        ::g::Uno::Float2 delta = ::g::Uno::Float2__op_Subtraction2(_currentCoord, _prevCoord);
        float p = delta.X / Size().X;
        Seek1(Progress() + (double)p, uPtr(_switch)->Value() ? 1 : 0);
    }
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :910
void DefaultSwitchBehavior::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    if (_captured)
        return;

    if (uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[29/*Uno.Action*/], (void*)DefaultSwitchBehavior__OnCaptureLost_fn, this), NULL))
    {
        _captured = true;
        _capturedIndex = uPtr(args)->PointIndex();
        _originalP = (_prevCoord = (_currentCoord = uPtr(_switch)->WindowToLocal(args->WindowPoint())));
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :961
void DefaultSwitchBehavior::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    if (ReleaseCapture())
    {
        uPtr(_switch)->Value(Progress() >= 0.5);
        PlayEnd(uPtr(_switch)->Value(), NULL);
    }
}

// private void OnPointerTapped(object a, int tapCount) [instance] :970
void DefaultSwitchBehavior::OnPointerTapped(uObject* a, int tapCount)
{
    ReleaseCapture();
    uPtr(_switch)->Value(!uPtr(_switch)->Value());
    PlayEnd(uPtr(_switch)->Value(), NULL);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<bool> args) [instance] :977
void DefaultSwitchBehavior::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    bool ret2;
    PlayEnd((::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret2), ret2), NULL);
}

// private bool ReleaseCapture() [instance] :951
bool DefaultSwitchBehavior::ReleaseCapture()
{
    if (!_captured)
        return false;

    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(this);
    _captured = false;
    return true;
}

// private float2 get_Size() [instance] :895
::g::Uno::Float2 DefaultSwitchBehavior::Size()
{
    return uPtr(_bounds)->ActualSize();
}

// public generated DefaultSwitchBehavior New() [static] :836
DefaultSwitchBehavior* DefaultSwitchBehavior::New1()
{
    DefaultSwitchBehavior* obj1 = (DefaultSwitchBehavior*)uNew(DefaultSwitchBehavior_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(538)
// ------------------------------------------------------------------------

// public sealed class DockPanel :538
// {
::g::Fuse::Controls::ParentControl_type* DockPanel_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 101;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(DockPanel);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("Fuse.Controls.DockPanel", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)DockPanel__New3_fn;
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
    ::TYPES[45] = ::g::Fuse::Controls::ParentControl_typeof();
    ::TYPES[46] = ::g::Fuse::Layouts::Layout_typeof();
    ::TYPES[18] = ::g::Fuse::Node_typeof();
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
    type->SetFields(100,
        ::g::Fuse::Layouts::DockLayout_typeof(), offsetof(::g::Fuse::Controls::DockPanel, _dockLayout), 0);
    return type;
}

// public DockPanel() :561
void DockPanel__ctor_5_fn(DockPanel* __this)
{
    __this->ctor_5();
}

// public DockPanel New() :561
void DockPanel__New3_fn(DockPanel** __retval)
{
    *__retval = DockPanel::New3();
}

// public static void SetDock(Fuse.Elements.Element elm, Fuse.Layouts.Dock dock) :542
void DockPanel__SetDock_fn(::g::Fuse::Elements::Element* elm, int* dock)
{
    DockPanel::SetDock(elm, *dock);
}

// public DockPanel() [instance] :561
void DockPanel::ctor_5()
{
    ctor_4();
    Layout(_dockLayout = ::g::Fuse::Layouts::DockLayout::New1());
}

// public DockPanel New() [static] :561
DockPanel* DockPanel::New3()
{
    DockPanel* obj1 = (DockPanel*)uNew(DockPanel_typeof());
    obj1->ctor_5();
    return obj1;
}

// public static void SetDock(Fuse.Elements.Element elm, Fuse.Layouts.Dock dock) [static] :542
void DockPanel::SetDock(::g::Fuse::Elements::Element* elm, int dock)
{
    ::g::Fuse::Layouts::DockLayout::SetDock(elm, dock);
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(663)
// ------------------------------------------------------------------------

// public sealed class Ellipse :663
// {
::g::Fuse::Controls::ParentControl_type* Ellipse_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 106;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Ellipse);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("Fuse.Controls.Ellipse", options);
    type->SetBase(::g::Fuse::Controls::Shape_typeof());
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
    type->SetFields(106);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/WebView/$.uno(578)
// --------------------------------------------------------------------------------

// internal sealed class FallbackWebViewClient :578
// {
FallbackWebViewClient_type* FallbackWebViewClient_typeof()
{
    static uSStrong<FallbackWebViewClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(FallbackWebViewClient);
    options.TypeSize = sizeof(FallbackWebViewClient_type);
    type = (FallbackWebViewClient_type*)uClassType::New("Fuse.Controls.FallbackWebViewClient", options);
    type->interface0.fp_Eval1 = (void(*)(uObject*, uString*, uDelegate*))FallbackWebViewClient__Eval1_fn;
    type->interface0.fp_Eval = (void(*)(uObject*, uString*))FallbackWebViewClient__Eval_fn;
    type->interface0.fp_LoadHtml1 = (void(*)(uObject*, uString*, uString*))FallbackWebViewClient__LoadHtml1_fn;
    type->interface0.fp_LoadUrl = (void(*)(uObject*, uString*))FallbackWebViewClient__LoadUrl_fn;
    type->interface0.fp_Stop = (void(*)(uObject*))FallbackWebViewClient__Stop_fn;
    type->interface0.fp_Reload = (void(*)(uObject*))FallbackWebViewClient__Reload_fn;
    type->interface0.fp_get_BaseUrl = (void(*)(uObject*, uString**))FallbackWebViewClient__get_BaseUrl_fn;
    type->interface0.fp_set_BaseUrl = (void(*)(uObject*, uString*))FallbackWebViewClient__set_BaseUrl_fn;
    type->interface0.fp_get_Url = (void(*)(uObject*, uString**))FallbackWebViewClient__get_Url_fn;
    type->interface0.fp_set_Url = (void(*)(uObject*, uString*))FallbackWebViewClient__set_Url_fn;
    type->interface0.fp_get_File = (void(*)(uObject*, ::g::Uno::UX::FileSource**))FallbackWebViewClient__get_File_fn;
    type->interface0.fp_set_File = (void(*)(uObject*, ::g::Uno::UX::FileSource*))FallbackWebViewClient__set_File_fn;
    type->interface0.fp_add_PageLoaded = (void(*)(uObject*, uDelegate*))FallbackWebViewClient__add_PageLoaded_fn;
    type->interface0.fp_remove_PageLoaded = (void(*)(uObject*, uDelegate*))FallbackWebViewClient__remove_PageLoaded_fn;
    type->interface0.fp_add_BeginLoading = (void(*)(uObject*, uDelegate*))FallbackWebViewClient__add_BeginLoading_fn;
    type->interface0.fp_remove_BeginLoading = (void(*)(uObject*, uDelegate*))FallbackWebViewClient__remove_BeginLoading_fn;
    type->interface0.fp_add_UrlChanged = (void(*)(uObject*, uDelegate*))FallbackWebViewClient__add_UrlChanged_fn;
    type->interface0.fp_remove_UrlChanged = (void(*)(uObject*, uDelegate*))FallbackWebViewClient__remove_UrlChanged_fn;
    type->interface1.fp_get_Progress = (void(*)(uObject*, double*))FallbackWebViewClient__get_Progress_fn;
    type->interface1.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))FallbackWebViewClient__add_ProgressChanged_fn;
    type->interface1.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))FallbackWebViewClient__remove_ProgressChanged_fn;
    type->interface2.fp_GoForward = (void(*)(uObject*))FallbackWebViewClient__GoForward_fn;
    type->interface2.fp_GoBack = (void(*)(uObject*))FallbackWebViewClient__GoBack_fn;
    type->interface2.fp_get_CanGoBack = (void(*)(uObject*, bool*))FallbackWebViewClient__get_CanGoBack_fn;
    type->interface2.fp_get_CanGoForward = (void(*)(uObject*, bool*))FallbackWebViewClient__get_CanGoForward_fn;
    type->interface3.fp_get_Source = (void(*)(uObject*, uString**))FallbackWebViewClient__get_Source_fn;
    type->interface3.fp_set_Source = (void(*)(uObject*, uString*))FallbackWebViewClient__set_Source_fn;
    ::TYPES[47] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::BufferedWebViewCall_typeof());
    ::TYPES[48] = ::g::Fuse::Controls::BufferedWebViewCall_typeof();
    ::TYPES[25] = ::g::Uno::EventHandler_typeof();
    ::TYPES[11] = ::g::Uno::Delegate_typeof();
    ::TYPES[49] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    type->SetInterfaces(
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(FallbackWebViewClient_type, interface0),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(FallbackWebViewClient_type, interface1),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(FallbackWebViewClient_type, interface2),
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(FallbackWebViewClient_type, interface3));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::BufferedWebViewCall_typeof()), offsetof(::g::Fuse::Controls::FallbackWebViewClient, _bufferedCalls), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::FallbackWebViewClient, _BaseUrl), 0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Controls::FallbackWebViewClient, _File), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::FallbackWebViewClient, _Source), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::FallbackWebViewClient, _Url), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::FallbackWebViewClient, BeginLoading1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::FallbackWebViewClient, PageLoaded1), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::Controls::FallbackWebViewClient, ProgressChanged1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::FallbackWebViewClient, UrlChanged1), 0);
    return type;
}

// public void ApplyBufferedCalls(Fuse.Controls.IWebView wv) :589
void FallbackWebViewClient__ApplyBufferedCalls_fn(FallbackWebViewClient* __this, uObject* wv)
{
    __this->ApplyBufferedCalls(wv);
}

// public generated string get_BaseUrl() :600
void FallbackWebViewClient__get_BaseUrl_fn(FallbackWebViewClient* __this, uString** __retval)
{
    *__retval = __this->BaseUrl();
}

// public generated void set_BaseUrl(string value) :600
void FallbackWebViewClient__set_BaseUrl_fn(FallbackWebViewClient* __this, uString* value)
{
    __this->BaseUrl(value);
}

// public generated void add_BeginLoading(Uno.EventHandler value) :628
void FallbackWebViewClient__add_BeginLoading_fn(FallbackWebViewClient* __this, uDelegate* value)
{
    __this->add_BeginLoading(value);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) :628
void FallbackWebViewClient__remove_BeginLoading_fn(FallbackWebViewClient* __this, uDelegate* value)
{
    __this->remove_BeginLoading(value);
}

// public bool get_CanGoBack() :602
void FallbackWebViewClient__get_CanGoBack_fn(FallbackWebViewClient* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// public bool get_CanGoForward() :603
void FallbackWebViewClient__get_CanGoForward_fn(FallbackWebViewClient* __this, bool* __retval)
{
    *__retval = __this->CanGoForward();
}

// public void Eval(string js) :609
void FallbackWebViewClient__Eval_fn(FallbackWebViewClient* __this, uString* js)
{
    __this->Eval(js);
}

// public void Eval(string js, Uno.Action<string> resultHandler) :613
void FallbackWebViewClient__Eval1_fn(FallbackWebViewClient* __this, uString* js, uDelegate* resultHandler)
{
    __this->Eval1(js, resultHandler);
}

// public generated Uno.UX.FileSource get_File() :580
void FallbackWebViewClient__get_File_fn(FallbackWebViewClient* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public generated void set_File(Uno.UX.FileSource value) :580
void FallbackWebViewClient__set_File_fn(FallbackWebViewClient* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public void GoBack() :605
void FallbackWebViewClient__GoBack_fn(FallbackWebViewClient* __this)
{
    __this->GoBack();
}

// public void GoForward() :606
void FallbackWebViewClient__GoForward_fn(FallbackWebViewClient* __this)
{
    __this->GoForward();
}

// public void LoadHtml(string html, string baseUrl) :622
void FallbackWebViewClient__LoadHtml1_fn(FallbackWebViewClient* __this, uString* html, uString* baseUrl)
{
    __this->LoadHtml1(html, baseUrl);
}

// public void LoadUrl(string url) :617
void FallbackWebViewClient__LoadUrl_fn(FallbackWebViewClient* __this, uString* url)
{
    __this->LoadUrl(url);
}

// public generated void add_PageLoaded(Uno.EventHandler value) :627
void FallbackWebViewClient__add_PageLoaded_fn(FallbackWebViewClient* __this, uDelegate* value)
{
    __this->add_PageLoaded(value);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) :627
void FallbackWebViewClient__remove_PageLoaded_fn(FallbackWebViewClient* __this, uDelegate* value)
{
    __this->remove_PageLoaded(value);
}

// public double get_Progress() :630
void FallbackWebViewClient__get_Progress_fn(FallbackWebViewClient* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :626
void FallbackWebViewClient__add_ProgressChanged_fn(FallbackWebViewClient* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :626
void FallbackWebViewClient__remove_ProgressChanged_fn(FallbackWebViewClient* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public void Reload() :607
void FallbackWebViewClient__Reload_fn(FallbackWebViewClient* __this)
{
    __this->Reload();
}

// public generated string get_Source() :599
void FallbackWebViewClient__get_Source_fn(FallbackWebViewClient* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public generated void set_Source(string value) :599
void FallbackWebViewClient__set_Source_fn(FallbackWebViewClient* __this, uString* value)
{
    __this->Source(value);
}

// public void Stop() :608
void FallbackWebViewClient__Stop_fn(FallbackWebViewClient* __this)
{
    __this->Stop();
}

// public generated string get_Url() :601
void FallbackWebViewClient__get_Url_fn(FallbackWebViewClient* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public generated void set_Url(string value) :601
void FallbackWebViewClient__set_Url_fn(FallbackWebViewClient* __this, uString* value)
{
    __this->Url(value);
}

// public generated void add_UrlChanged(Uno.EventHandler value) :629
void FallbackWebViewClient__add_UrlChanged_fn(FallbackWebViewClient* __this, uDelegate* value)
{
    __this->add_UrlChanged(value);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) :629
void FallbackWebViewClient__remove_UrlChanged_fn(FallbackWebViewClient* __this, uDelegate* value)
{
    __this->remove_UrlChanged(value);
}

// public void ApplyBufferedCalls(Fuse.Controls.IWebView wv) [instance] :589
void FallbackWebViewClient::ApplyBufferedCalls(uObject* wv)
{
    uObject* ret2;
    bool ret3;

    while (uPtr(_bufferedCalls)->Count() > 0)
    {
        uObject* call = (::g::Uno::Collections::List__get_Item_fn(uPtr(_bufferedCalls), uCRef<int>(0), &ret2), ret2);
        ::g::Fuse::Controls::BufferedWebViewCall::Apply(uInterface(uPtr(call), ::TYPES[48/*Fuse.Controls.BufferedWebViewCall*/]), wv);
        ::g::Uno::Collections::List__Remove_fn(uPtr(_bufferedCalls), call, &ret3);
    }
}

// public generated string get_BaseUrl() [instance] :600
uString* FallbackWebViewClient::BaseUrl()
{
    return _BaseUrl;
}

// public generated void set_BaseUrl(string value) [instance] :600
void FallbackWebViewClient::BaseUrl(uString* value)
{
    _BaseUrl = value;
}

// public generated void add_BeginLoading(Uno.EventHandler value) [instance] :628
void FallbackWebViewClient::add_BeginLoading(uDelegate* value)
{
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BeginLoading1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) [instance] :628
void FallbackWebViewClient::remove_BeginLoading(uDelegate* value)
{
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BeginLoading1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public bool get_CanGoBack() [instance] :602
bool FallbackWebViewClient::CanGoBack()
{
    return false;
}

// public bool get_CanGoForward() [instance] :603
bool FallbackWebViewClient::CanGoForward()
{
    return false;
}

// public void Eval(string js) [instance] :609
void FallbackWebViewClient::Eval(uString* js)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_bufferedCalls), (uObject*)::g::Fuse::Controls::JavaScriptCall::New1(js, NULL));
}

// public void Eval(string js, Uno.Action<string> resultHandler) [instance] :613
void FallbackWebViewClient::Eval1(uString* js, uDelegate* resultHandler)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_bufferedCalls), (uObject*)::g::Fuse::Controls::JavaScriptCall::New1(js, resultHandler));
}

// public generated Uno.UX.FileSource get_File() [instance] :580
::g::Uno::UX::FileSource* FallbackWebViewClient::File()
{
    return _File;
}

// public generated void set_File(Uno.UX.FileSource value) [instance] :580
void FallbackWebViewClient::File(::g::Uno::UX::FileSource* value)
{
    _File = value;
}

// public void GoBack() [instance] :605
void FallbackWebViewClient::GoBack()
{
}

// public void GoForward() [instance] :606
void FallbackWebViewClient::GoForward()
{
}

// public void LoadHtml(string html, string baseUrl) [instance] :622
void FallbackWebViewClient::LoadHtml1(uString* html, uString* baseUrl)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_bufferedCalls), (uObject*)::g::Fuse::Controls::LoadHtmlCall::New1(html, baseUrl));
}

// public void LoadUrl(string url) [instance] :617
void FallbackWebViewClient::LoadUrl(uString* url)
{
}

// public generated void add_PageLoaded(Uno.EventHandler value) [instance] :627
void FallbackWebViewClient::add_PageLoaded(uDelegate* value)
{
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageLoaded1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) [instance] :627
void FallbackWebViewClient::remove_PageLoaded(uDelegate* value)
{
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageLoaded1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public double get_Progress() [instance] :630
double FallbackWebViewClient::Progress()
{
    return 0.0;
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :626
void FallbackWebViewClient::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[49/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :626
void FallbackWebViewClient::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[49/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public void Reload() [instance] :607
void FallbackWebViewClient::Reload()
{
}

// public generated string get_Source() [instance] :599
uString* FallbackWebViewClient::Source()
{
    return _Source;
}

// public generated void set_Source(string value) [instance] :599
void FallbackWebViewClient::Source(uString* value)
{
    _Source = value;
}

// public void Stop() [instance] :608
void FallbackWebViewClient::Stop()
{
}

// public generated string get_Url() [instance] :601
uString* FallbackWebViewClient::Url()
{
    return _Url;
}

// public generated void set_Url(string value) [instance] :601
void FallbackWebViewClient::Url(uString* value)
{
    _Url = value;
}

// public generated void add_UrlChanged(Uno.EventHandler value) [instance] :629
void FallbackWebViewClient::add_UrlChanged(uDelegate* value)
{
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UrlChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) [instance] :629
void FallbackWebViewClient::remove_UrlChanged(uDelegate* value)
{
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UrlChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(2461)
// -------------------------------------------------------------------------

// public enum FillRule :2461
uEnumType* FillRule_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.FillRule", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "NonZero", 0LL,
        "EvenOdd", 1LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(2466)
// -------------------------------------------------------------------------

// public enum FitMode :2466
uEnumType* FitMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.FitMode", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "GeometryMaximum", 0LL,
        "StrokeMaximum", 1LL,
        "ShrinkToGeometry", 2LL,
        "ShrinkToStroke", 3LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(676)
// ------------------------------------------------------------------------

// public sealed class GraphicsView :676
// {
GraphicsView_type* GraphicsView_typeof()
{
    static uSStrong<GraphicsView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 94;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(GraphicsView);
    options.TypeSize = sizeof(GraphicsView_type);
    type = (GraphicsView_type*)uClassType::New("Fuse.Controls.GraphicsView", options);
    type->SetBase(::g::Fuse::Controls::ContentControl_typeof());
    type->fp_ctor_ = (void*)GraphicsView__New2_fn;
    type->fp_Draw = (void(*)(::g::Fuse::Node*, ::g::Fuse::DrawContext*))GraphicsView__Draw_fn;
    type->fp_InvalidateVisual = (void(*)(::g::Fuse::Node*))GraphicsView__InvalidateVisual_fn;
    type->interface7.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*))GraphicsView__PointToWorldRay_fn;
    type->interface7.fp_get_PointDensity = (void(*)(uObject*, float*))GraphicsView__get_PointDensity_fn;
    type->interface7.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))GraphicsView__get_Size_fn;
    type->interface7.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))GraphicsView__get_ViewProjectionTransform_fn;
    type->interface7.fp_get_ViewProjectionTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))GraphicsView__get_ViewProjectionTransformInverse_fn;
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
    ::TYPES[50] = ::g::Fuse::IViewport_typeof();
    ::TYPES[51] = ::g::Fuse::IFrustum_typeof();
    ::TYPES[1] = ::g::Fuse::AppBase_typeof();
    ::TYPES[11] = ::g::Uno::Delegate_typeof();
    ::TYPES[52] = ::g::Fuse::OrthographicFrustum_typeof();
    ::TYPES[18] = ::g::Fuse::Node_typeof();
    ::TYPES[25] = ::g::Uno::EventHandler_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[26] = ::g::Uno::EventArgs_typeof();
    ::TYPES[16] = ::g::Uno::Bool_typeof();
    ::TYPES[29] = ::g::Uno::Action_typeof();
    ::TYPES[15] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[53] = ::g::Fuse::FrustumViewport_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(GraphicsView_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(GraphicsView_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(GraphicsView_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(GraphicsView_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(GraphicsView_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(GraphicsView_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(GraphicsView_type, interface6),
        ::g::Fuse::IViewport_typeof(), offsetof(GraphicsView_type, interface7));
    type->SetFields(89,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::GraphicsView, _color), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::GraphicsView, _frameScheduled), 0,
        ::g::Fuse::OrthographicFrustum_typeof(), offsetof(::g::Fuse::Controls::GraphicsView, _frustum), 0,
        ::g::Fuse::FrustumViewport_typeof(), offsetof(::g::Fuse::Controls::GraphicsView, _frustumViewport), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::GraphicsView, Redraw1), 0);
    return type;
}

// public GraphicsView() :684
void GraphicsView__ctor_4_fn(GraphicsView* __this)
{
    __this->ctor_4();
}

// public float4 get_Color() :693
void GraphicsView__get_Color_fn(GraphicsView* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :694
void GraphicsView__set_Color_fn(GraphicsView* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public override sealed void Draw(Fuse.DrawContext dc) :743
void GraphicsView__Draw_fn(GraphicsView* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Fuse::Elements::Element__Draw_fn(__this, dc);
    uPtr(::g::Fuse::AppBase::Current1())->DrawSelection(dc);
}

// private void DrawFrame() :731
void GraphicsView__DrawFrame_fn(GraphicsView* __this)
{
    __this->DrawFrame();
}

// public override sealed void InvalidateVisual() :721
void GraphicsView__InvalidateVisual_fn(GraphicsView* __this)
{
    if (__this->IsRooted() && !__this->_frameScheduled)
    {
        ::g::Fuse::UpdateManager::AddOnceAction(uDelegate::New(::TYPES[29/*Uno.Action*/], (void*)GraphicsView__DrawFrame_fn, __this), 4);
        __this->_frameScheduled = true;
    }

    ::g::Fuse::Elements::Element__InvalidateVisual_fn(__this);
}

// public GraphicsView New() :684
void GraphicsView__New2_fn(GraphicsView** __retval)
{
    *__retval = GraphicsView::New2();
}

// public float get_PointDensity() :706
void GraphicsView__get_PointDensity_fn(GraphicsView* __this, float* __retval)
{
    *__retval = __this->PointDensity();
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pixelPos) :759
void GraphicsView__PointToWorldRay_fn(GraphicsView* __this, ::g::Uno::Float2* pixelPos, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->PointToWorldRay(*pixelPos);
}

// public generated void add_Redraw(Uno.EventHandler value) :749
void GraphicsView__add_Redraw_fn(GraphicsView* __this, uDelegate* value)
{
    __this->add_Redraw(value);
}

// public generated void remove_Redraw(Uno.EventHandler value) :749
void GraphicsView__remove_Redraw_fn(GraphicsView* __this, uDelegate* value)
{
    __this->remove_Redraw(value);
}

// public float2 get_Size() :712
void GraphicsView__get_Size_fn(GraphicsView* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public float4x4 get_ViewProjectionTransform() :753
void GraphicsView__get_ViewProjectionTransform_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransform();
}

// public float4x4 get_ViewProjectionTransformInverse() :754
void GraphicsView__get_ViewProjectionTransformInverse_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransformInverse();
}

// public GraphicsView() [instance] :684
void GraphicsView::ctor_4()
{
    _frustum = ::g::Fuse::OrthographicFrustum::New1();
    _color = ::g::Uno::Float4__New1(0.0f);
    ctor_3();
    _frustumViewport = ::g::Fuse::FrustumViewport::New1();
    uPtr(_frustumViewport)->Update((uObject*)this, (uObject*)_frustum);
}

// public float4 get_Color() [instance] :693
::g::Uno::Float4 GraphicsView::Color()
{
    return _color;
}

// public void set_Color(float4 value) [instance] :694
void GraphicsView::Color(::g::Uno::Float4 value)
{
    if (::g::Uno::Float4::op_Inequality(_color, value))
    {
        _color = value;
        InvalidateVisual();
    }
}

// private void DrawFrame() [instance] :731
void GraphicsView::DrawFrame()
{
    _frameScheduled = false;

    if (::g::Uno::Delegate::op_Inequality(Redraw1, NULL))
    {
        uPtr(_frustum)->LocalFromWorld(WorldTransformInverse());
        uPtr(_frustumViewport)->Update((uObject*)this, (uObject*)_frustum);
        uPtr(Redraw1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
    }
}

// public float get_PointDensity() [instance] :706
float GraphicsView::PointDensity()
{
    return (Parent() != NULL) ? ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr(Parent())->Viewport()), ::TYPES[50/*Fuse.IViewport*/])) : uPtr(::g::Fuse::AppBase::Current1())->DefaultDensity();
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pixelPos) [instance] :759
::g::Uno::Geometry::Ray GraphicsView::PointToWorldRay(::g::Uno::Float2 pixelPos)
{
    return ::g::Fuse::FrustumViewport::PointToWorldRay((uObject*)this, pixelPos);
}

// public generated void add_Redraw(Uno.EventHandler value) [instance] :749
void GraphicsView::add_Redraw(uDelegate* value)
{
    Redraw1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Redraw1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public generated void remove_Redraw(Uno.EventHandler value) [instance] :749
void GraphicsView::remove_Redraw(uDelegate* value)
{
    Redraw1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Redraw1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public float2 get_Size() [instance] :712
::g::Uno::Float2 GraphicsView::Size()
{
    return ActualSize();
}

// public float4x4 get_ViewProjectionTransform() [instance] :753
::g::Uno::Float4x4 GraphicsView::ViewProjectionTransform()
{
    return uPtr(_frustumViewport)->ViewProjectionTransform;
}

// public float4x4 get_ViewProjectionTransformInverse() [instance] :754
::g::Uno::Float4x4 GraphicsView::ViewProjectionTransformInverse()
{
    return uPtr(_frustumViewport)->ViewProjectionTransformInverse;
}

// public GraphicsView New() [static] :684
GraphicsView* GraphicsView::New2()
{
    GraphicsView* obj1 = (GraphicsView*)uNew(GraphicsView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(780)
// ------------------------------------------------------------------------

// public sealed class Grid :780
// {
// static Grid() :780
static void Grid__cctor_5_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    Grid::CellSpacingProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[54/*Fuse.StyleProperty<Fuse.Controls.Grid, float>*/], uCRef(0.0f), uDelegate::New(::TYPES[55/*Uno.Action<Fuse.Controls.Grid>*/], (void*)Grid__OnCellSpacingChanged_fn), &ret2), ret2);
    Grid::ContentAlignmentProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[56/*Fuse.StyleProperty<Fuse.Controls.Grid, Fuse.Elements.Alignment>*/], uCRef<int>(0), uDelegate::New(::TYPES[55/*Uno.Action<Fuse.Controls.Grid>*/], (void*)Grid__OnContentAlignmentChanged_fn), &ret3), ret3);
}

::g::Fuse::Controls::ParentControl_type* Grid_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 103;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Grid);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("Fuse.Controls.Grid", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_cctor_ = Grid__cctor_5_fn;
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
    ::TYPES[54] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Grid_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[55] = ::g::Uno::Action1_typeof()->MakeType(Grid_typeof());
    ::TYPES[56] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Grid_typeof(), ::g::Fuse::Elements::Alignment_typeof());
    ::TYPES[57] = ::g::Fuse::Layouts::GridLayout_typeof();
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
    type->SetFields(100,
        ::g::Fuse::Layouts::GridLayout_typeof(), offsetof(::g::Fuse::Controls::Grid, _gridLayout), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Grid_typeof(), ::g::Uno::Float_typeof()), (uintptr_t)&::g::Fuse::Controls::Grid::CellSpacingProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Grid_typeof(), ::g::Fuse::Elements::Alignment_typeof()), (uintptr_t)&::g::Fuse::Controls::Grid::ContentAlignmentProperty_, uFieldFlagsStatic);
    return type;
}

// public float get_CellSpacing() :918
void Grid__get_CellSpacing_fn(Grid* __this, float* __retval)
{
    *__retval = __this->CellSpacing();
}

// public void set_CellSpacing(float value) :919
void Grid__set_CellSpacing_fn(Grid* __this, float* value)
{
    __this->CellSpacing(*value);
}

// public Fuse.Elements.Alignment get_ContentAlignment() :933
void Grid__get_ContentAlignment_fn(Grid* __this, int* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :934
void Grid__set_ContentAlignment_fn(Grid* __this, int* value)
{
    __this->ContentAlignment(*value);
}

// private static void OnCellSpacingChanged(Fuse.Controls.Grid p) :922
void Grid__OnCellSpacingChanged_fn(Grid* p)
{
    Grid::OnCellSpacingChanged(p);
}

// private static void OnContentAlignmentChanged(Fuse.Controls.Grid p) :937
void Grid__OnContentAlignmentChanged_fn(Grid* p)
{
    Grid::OnContentAlignmentChanged(p);
}

uSStrong< ::g::Fuse::StyleProperty1*> Grid::CellSpacingProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Grid::ContentAlignmentProperty_;

// public float get_CellSpacing() [instance] :918
float Grid::CellSpacing()
{
    float ret4;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Grid::CellSpacingProperty()), this, &ret4), ret4);
}

// public void set_CellSpacing(float value) [instance] :919
void Grid::CellSpacing(float value)
{
    bool ret5;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Grid::CellSpacingProperty()), this, uCRef(value), &ret5);
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :933
int Grid::ContentAlignment()
{
    int ret6;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Grid::ContentAlignmentProperty()), this, &ret6), ret6);
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :934
void Grid::ContentAlignment(int value)
{
    bool ret7;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Grid::ContentAlignmentProperty()), this, uCRef<int>(value), &ret7);
}

// private static void OnCellSpacingChanged(Fuse.Controls.Grid p) [static] :922
void Grid::OnCellSpacingChanged(Grid* p)
{
    Grid_typeof()->Init();
    uPtr(uPtr(p)->_gridLayout)->CellSpacing(uPtr(p)->CellSpacing());
}

// private static void OnContentAlignmentChanged(Fuse.Controls.Grid p) [static] :937
void Grid::OnContentAlignmentChanged(Grid* p)
{
    Grid_typeof()->Init();
    uPtr(uPtr(p)->_gridLayout)->ContentAlignment(uPtr(p)->ContentAlignment());
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(971)
// ------------------------------------------------------------------------

// public sealed class Image :971
// {
// static Image() :971
static void Image__cctor_4_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret6;
    ::g::Fuse::StyleProperty1* ret7;
    ::g::Fuse::StyleProperty1* ret8;
    ::g::Fuse::StyleProperty1* ret9;
    ::g::Fuse::StyleProperty1* ret10;
    Image::MemoryPolicyProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[58/*Fuse.StyleProperty<Fuse.Controls.Image, Fuse.Resources.MemoryPolicy>*/], ::g::Fuse::Resources::MemoryPolicy::PreloadRetain(), uDelegate::New(::TYPES[60/*Uno.Action<Fuse.Controls.Image>*/], (void*)Image__UpdateParam_fn), uDelegate::New(::TYPES[61/*Uno.Action<Fuse.Controls.Image, Fuse.Resources.MemoryPolicy>*/], (void*)Image__SetMemoryPolicy_fn), uDelegate::New(::TYPES[62/*Uno.Func<Fuse.Controls.Image, Fuse.Resources.MemoryPolicy>*/], (void*)Image__GetMemoryPolicy_fn), &ret6), ret6);
    Image::StretchModeProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[63/*Fuse.StyleProperty<Fuse.Controls.Image, Fuse.Elements.StretchMode>*/], uCRef<int>(5), uDelegate::New(::TYPES[60/*Uno.Action<Fuse.Controls.Image>*/], (void*)Image__UpdateParam_fn), uDelegate::New(::TYPES[64/*Uno.Action<Fuse.Controls.Image, Fuse.Elements.StretchMode>*/], (void*)Image__SetStretchMode_fn), uDelegate::New(::TYPES[65/*Uno.Func<Fuse.Controls.Image, Fuse.Elements.StretchMode>*/], (void*)Image__GetStretchMode_fn), &ret7), ret7);
    Image::StretchDirectionProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[66/*Fuse.StyleProperty<Fuse.Controls.Image, Fuse.Elements.StretchDirection>*/], uCRef<int>(0), uDelegate::New(::TYPES[60/*Uno.Action<Fuse.Controls.Image>*/], (void*)Image__UpdateParam_fn), uDelegate::New(::TYPES[67/*Uno.Action<Fuse.Controls.Image, Fuse.Elements.StretchDirection>*/], (void*)Image__SetStretchDirection_fn), uDelegate::New(::TYPES[68/*Uno.Func<Fuse.Controls.Image, Fuse.Elements.StretchDirection>*/], (void*)Image__GetStretchDirection_fn), &ret8), ret8);
    Image::StretchSizingProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[69/*Fuse.StyleProperty<Fuse.Controls.Image, Fuse.Elements.StretchSizing>*/], uCRef<int>(1), uDelegate::New(::TYPES[60/*Uno.Action<Fuse.Controls.Image>*/], (void*)Image__UpdateParam_fn), uDelegate::New(::TYPES[70/*Uno.Action<Fuse.Controls.Image, Fuse.Elements.StretchSizing>*/], (void*)Image__SetStretchSizing_fn), uDelegate::New(::TYPES[71/*Uno.Func<Fuse.Controls.Image, Fuse.Elements.StretchSizing>*/], (void*)Image__GetStretchSizing_fn), &ret9), ret9);
    Image::ContentAlignmentProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[72/*Fuse.StyleProperty<Fuse.Controls.Image, Fuse.Elements.Alignment>*/], uCRef<int>(10), uDelegate::New(::TYPES[60/*Uno.Action<Fuse.Controls.Image>*/], (void*)Image__UpdateParam_fn), uDelegate::New(::TYPES[73/*Uno.Action<Fuse.Controls.Image, Fuse.Elements.Alignment>*/], (void*)Image__SetContentAlignment_fn), uDelegate::New(::TYPES[74/*Uno.Func<Fuse.Controls.Image, Fuse.Elements.Alignment>*/], (void*)Image__GetContentAlignment_fn), &ret10), ret10);
}

::g::Fuse::Controls::ParentControl_type* Image_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 113;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Image);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("Fuse.Controls.Image", options);
    type->SetBase(::g::Fuse::Controls::ParentControl_typeof());
    type->fp_ctor_ = (void*)Image__New2_fn;
    type->fp_cctor_ = Image__cctor_4_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Image__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Image__OnUnrooted_fn;
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
    ::STRINGS[2] = uString::Const("unknown failure");
    ::TYPES[58] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Resources::MemoryPolicy_typeof());
    ::TYPES[59] = ::g::Fuse::Resources::MemoryPolicy_typeof();
    ::TYPES[60] = ::g::Uno::Action1_typeof()->MakeType(Image_typeof());
    ::TYPES[61] = ::g::Uno::Action2_typeof()->MakeType(Image_typeof(), ::g::Fuse::Resources::MemoryPolicy_typeof());
    ::TYPES[62] = ::g::Uno::Func1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Resources::MemoryPolicy_typeof());
    ::TYPES[63] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchMode_typeof());
    ::TYPES[64] = ::g::Uno::Action2_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchMode_typeof());
    ::TYPES[65] = ::g::Uno::Func1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchMode_typeof());
    ::TYPES[66] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchDirection_typeof());
    ::TYPES[67] = ::g::Uno::Action2_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchDirection_typeof());
    ::TYPES[68] = ::g::Uno::Func1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchDirection_typeof());
    ::TYPES[69] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchSizing_typeof());
    ::TYPES[70] = ::g::Uno::Action2_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchSizing_typeof());
    ::TYPES[71] = ::g::Uno::Func1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchSizing_typeof());
    ::TYPES[72] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::Alignment_typeof());
    ::TYPES[73] = ::g::Uno::Action2_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::Alignment_typeof());
    ::TYPES[74] = ::g::Uno::Func1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::Alignment_typeof());
    ::TYPES[75] = ::g::Fuse::Internal::ImageContainer_typeof();
    ::TYPES[18] = ::g::Fuse::Node_typeof();
    ::TYPES[11] = ::g::Uno::Delegate_typeof();
    ::TYPES[25] = ::g::Uno::EventHandler_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[26] = ::g::Uno::EventArgs_typeof();
    ::TYPES[76] = ::g::Fuse::Resources::ImageSourceErrorHandler_typeof();
    ::TYPES[77] = ::g::Uno::Int_typeof();
    ::TYPES[78] = ::g::Fuse::Resources::ImageSource_typeof();
    ::TYPES[79] = ::g::Fuse::Resources::ImageSourceErrorArgs_typeof();
    ::TYPES[16] = ::g::Uno::Bool_typeof();
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
    type->SetFields(99,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::Image, _color), 0,
        ::g::Fuse::Internal::ImageContainer_typeof(), offsetof(::g::Fuse::Controls::Image, _container), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::Image, _contentBox), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Image, _hasContentBox), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Image, _hasScale9Margin), 0,
        ::g::Fuse::Resources::ImageSourceErrorArgs_typeof(), offsetof(::g::Fuse::Controls::Image, _lastError), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::Image, _scale9Margin), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::Image, ParamChanged1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::Image, SourceChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::Alignment_typeof()), (uintptr_t)&::g::Fuse::Controls::Image::ContentAlignmentProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Resources::MemoryPolicy_typeof()), (uintptr_t)&::g::Fuse::Controls::Image::MemoryPolicyProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchDirection_typeof()), (uintptr_t)&::g::Fuse::Controls::Image::StretchDirectionProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchMode_typeof()), (uintptr_t)&::g::Fuse::Controls::Image::StretchModeProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchSizing_typeof()), (uintptr_t)&::g::Fuse::Controls::Image::StretchSizingProperty_, uFieldFlagsStatic);
    return type;
}

// public generated Image() :971
void Image__ctor_4_fn(Image* __this)
{
    __this->ctor_4();
}

// public float4 get_Color() :1060
void Image__get_Color_fn(Image* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :1061
void Image__set_Color_fn(Image* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// internal Fuse.Internal.ImageContainer get_Container() :976
void Image__get_Container_fn(Image* __this, ::g::Fuse::Internal::ImageContainer** __retval)
{
    *__retval = __this->Container();
}

// public Fuse.Elements.Alignment get_ContentAlignment() :1150
void Image__get_ContentAlignment_fn(Image* __this, int* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :1151
void Image__set_ContentAlignment_fn(Image* __this, int* value)
{
    __this->ContentAlignment(*value);
}

// public Uno.UX.FileSource get_File() :1028
void Image__get_File_fn(Image* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :1029
void Image__set_File_fn(Image* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// private static Fuse.Elements.Alignment GetContentAlignment(Fuse.Controls.Image img) :1182
void Image__GetContentAlignment_fn(Image* img, int* __retval)
{
    *__retval = Image::GetContentAlignment(img);
}

// private static Fuse.Resources.MemoryPolicy GetMemoryPolicy(Fuse.Controls.Image img) :1158
void Image__GetMemoryPolicy_fn(Image* img, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = Image::GetMemoryPolicy(img);
}

// private static Fuse.Elements.StretchDirection GetStretchDirection(Fuse.Controls.Image img) :1170
void Image__GetStretchDirection_fn(Image* img, int* __retval)
{
    *__retval = Image::GetStretchDirection(img);
}

// private static Fuse.Elements.StretchMode GetStretchMode(Fuse.Controls.Image img) :1164
void Image__GetStretchMode_fn(Image* img, int* __retval)
{
    *__retval = Image::GetStretchMode(img);
}

// private static Fuse.Elements.StretchSizing GetStretchSizing(Fuse.Controls.Image img) :1176
void Image__GetStretchSizing_fn(Image* img, int* __retval)
{
    *__retval = Image::GetStretchSizing(img);
}

// public generated Image New() :971
void Image__New2_fn(Image** __retval)
{
    *__retval = Image::New2();
}

// private void OnContainerParamChanged(object s, object a) :1005
void Image__OnContainerParamChanged_fn(Image* __this, uObject* s, uObject* a)
{
    __this->OnContainerParamChanged(s, a);
}

// private void OnContainerSourceChanged(object s, object a) :1009
void Image__OnContainerSourceChanged_fn(Image* __this, uObject* s, uObject* a)
{
    __this->OnContainerSourceChanged(s, a);
}

// private void OnContainerSourceError(object s, Fuse.Resources.ImageSourceErrorArgs args) :1015
void Image__OnContainerSourceError_fn(Image* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    __this->OnContainerSourceError(s, args);
}

// private void OnIsVisibleChanged(object s, object a) :1021
void Image__OnIsVisibleChanged1_fn(Image* __this, uObject* s, uObject* a)
{
    __this->OnIsVisibleChanged1(s, a);
}

// private void OnParamChanged() :1096
void Image__OnParamChanged_fn(Image* __this)
{
    __this->OnParamChanged();
}

// protected override sealed void OnRooted() :979
void Image__OnRooted_fn(Image* __this)
{
    ::g::Fuse::Controls::ParentControl__OnRooted_fn(__this);
    __this->AddDrawCost(1.0);
    __this->add_IsVisibleChanged(uDelegate::New(::TYPES[25/*Uno.EventHandler*/], (void*)Image__OnIsVisibleChanged1_fn, __this));
    uPtr(__this->_container)->IsRooted(true);
    uPtr(__this->_container)->add_ParamChanged(uDelegate::New(::TYPES[25/*Uno.EventHandler*/], (void*)Image__OnContainerParamChanged_fn, __this));
    uPtr(__this->_container)->add_SourceChanged(uDelegate::New(::TYPES[25/*Uno.EventHandler*/], (void*)Image__OnContainerSourceChanged_fn, __this));
    uPtr(__this->_container)->add_SourceError(uDelegate::New(::TYPES[76/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)Image__OnContainerSourceError_fn, __this));
}

// private void OnSourceChanged() :1103
void Image__OnSourceChanged_fn(Image* __this)
{
    __this->OnSourceChanged();
}

// protected override sealed void OnUnrooted() :992
void Image__OnUnrooted_fn(Image* __this)
{
    __this->remove_IsVisibleChanged(uDelegate::New(::TYPES[25/*Uno.EventHandler*/], (void*)Image__OnIsVisibleChanged1_fn, __this));
    uPtr(__this->_container)->IsRooted(false);
    uPtr(__this->_container)->remove_ParamChanged(uDelegate::New(::TYPES[25/*Uno.EventHandler*/], (void*)Image__OnContainerParamChanged_fn, __this));
    uPtr(__this->_container)->remove_SourceChanged(uDelegate::New(::TYPES[25/*Uno.EventHandler*/], (void*)Image__OnContainerSourceChanged_fn, __this));
    uPtr(__this->_container)->remove_SourceError(uDelegate::New(::TYPES[76/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)Image__OnContainerSourceError_fn, __this));
    __this->RemoveDrawCost(1.0);
    ::g::Fuse::Controls::ParentControl__OnUnrooted_fn(__this);
}

// public generated void add_ParamChanged(Uno.EventHandler value) :1095
void Image__add_ParamChanged_fn(Image* __this, uDelegate* value)
{
    __this->add_ParamChanged(value);
}

// public generated void remove_ParamChanged(Uno.EventHandler value) :1095
void Image__remove_ParamChanged_fn(Image* __this, uDelegate* value)
{
    __this->remove_ParamChanged(value);
}

// public float4 get_Scale9Margin() :1083
void Image__get_Scale9Margin_fn(Image* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Scale9Margin();
}

// public void set_Scale9Margin(float4 value) :1084
void Image__set_Scale9Margin_fn(Image* __this, ::g::Uno::Float4* value)
{
    __this->Scale9Margin(*value);
}

// private static void SetContentAlignment(Fuse.Controls.Image img, Fuse.Elements.Alignment v) :1181
void Image__SetContentAlignment_fn(Image* img, int* v)
{
    Image::SetContentAlignment(img, *v);
}

// internal void SetContentBox(float4 contentBox) :1196
void Image__SetContentBox_fn(Image* __this, ::g::Uno::Float4* contentBox)
{
    __this->SetContentBox(*contentBox);
}

// private static void SetMemoryPolicy(Fuse.Controls.Image img, Fuse.Resources.MemoryPolicy v) :1157
void Image__SetMemoryPolicy_fn(Image* img, ::g::Fuse::Resources::MemoryPolicy* v)
{
    Image::SetMemoryPolicy(img, v);
}

// private static void SetStretchDirection(Fuse.Controls.Image img, Fuse.Elements.StretchDirection v) :1169
void Image__SetStretchDirection_fn(Image* img, int* v)
{
    Image::SetStretchDirection(img, *v);
}

// private static void SetStretchMode(Fuse.Controls.Image img, Fuse.Elements.StretchMode v) :1163
void Image__SetStretchMode_fn(Image* img, int* v)
{
    Image::SetStretchMode(img, *v);
}

// private static void SetStretchSizing(Fuse.Controls.Image img, Fuse.Elements.StretchSizing v) :1175
void Image__SetStretchSizing_fn(Image* img, int* v)
{
    Image::SetStretchSizing(img, *v);
}

// public Fuse.Resources.ImageSource get_Source() :1053
void Image__get_Source_fn(Image* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Resources.ImageSource value) :1054
void Image__set_Source_fn(Image* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->Source(value);
}

// public generated void add_SourceChanged(Uno.EventHandler value) :1102
void Image__add_SourceChanged_fn(Image* __this, uDelegate* value)
{
    __this->add_SourceChanged(value);
}

// public generated void remove_SourceChanged(Uno.EventHandler value) :1102
void Image__remove_SourceChanged_fn(Image* __this, uDelegate* value)
{
    __this->remove_SourceChanged(value);
}

// public Fuse.Elements.StretchDirection get_StretchDirection() :1136
void Image__get_StretchDirection_fn(Image* __this, int* __retval)
{
    *__retval = __this->StretchDirection();
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) :1137
void Image__set_StretchDirection_fn(Image* __this, int* value)
{
    __this->StretchDirection(*value);
}

// public Fuse.Elements.StretchMode get_StretchMode() :1129
void Image__get_StretchMode_fn(Image* __this, int* __retval)
{
    *__retval = __this->StretchMode();
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) :1130
void Image__set_StretchMode_fn(Image* __this, int* value)
{
    __this->StretchMode(*value);
}

// public Fuse.Elements.StretchSizing get_StretchSizing() :1143
void Image__get_StretchSizing_fn(Image* __this, int* __retval)
{
    *__retval = __this->StretchSizing();
}

// public void set_StretchSizing(Fuse.Elements.StretchSizing value) :1144
void Image__set_StretchSizing_fn(Image* __this, int* value)
{
    __this->StretchSizing(*value);
}

// private static void UpdateParam(Fuse.Controls.Image img) :1184
void Image__UpdateParam_fn(Image* img)
{
    Image::UpdateParam(img);
}

uSStrong< ::g::Fuse::StyleProperty1*> Image::ContentAlignmentProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Image::MemoryPolicyProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Image::StretchDirectionProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Image::StretchModeProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Image::StretchSizingProperty_;

// public generated Image() [instance] :971
void Image::ctor_4()
{
    _container = ::g::Fuse::Internal::ImageContainer::New1(NULL);
    _color = ::g::Uno::Float4__New1(1.0f);
    _scale9Margin = ::g::Uno::Float4__New1(10.0f);
    ctor_3();
}

// public float4 get_Color() [instance] :1060
::g::Uno::Float4 Image::Color()
{
    return _color;
}

// public void set_Color(float4 value) [instance] :1061
void Image::Color(::g::Uno::Float4 value)
{
    if (::g::Uno::Float4::op_Inequality(_color, value))
    {
        _color = value;
        OnParamChanged();
    }
}

// internal Fuse.Internal.ImageContainer get_Container() [instance] :976
::g::Fuse::Internal::ImageContainer* Image::Container()
{
    return _container;
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :1150
int Image::ContentAlignment()
{
    int ret11;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Image::ContentAlignmentProperty()), this, &ret11), ret11);
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :1151
void Image::ContentAlignment(int value)
{
    bool ret12;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Image::ContentAlignmentProperty()), this, uCRef<int>(value), &ret12);
}

// public Uno.UX.FileSource get_File() [instance] :1028
::g::Uno::UX::FileSource* Image::File()
{
    return uPtr(_container)->File();
}

// public void set_File(Uno.UX.FileSource value) [instance] :1029
void Image::File(::g::Uno::UX::FileSource* value)
{
    uPtr(_container)->File(value);
}

// private void OnContainerParamChanged(object s, object a) [instance] :1005
void Image::OnContainerParamChanged(uObject* s, uObject* a)
{
    OnParamChanged();
}

// private void OnContainerSourceChanged(object s, object a) [instance] :1009
void Image::OnContainerSourceChanged(uObject* s, uObject* a)
{
    OnSourceChanged();
}

// private void OnContainerSourceError(object s, Fuse.Resources.ImageSourceErrorArgs args) [instance] :1015
void Image::OnContainerSourceError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    _lastError = args;
    OnSourceChanged();
}

// private void OnIsVisibleChanged(object s, object a) [instance] :1021
void Image::OnIsVisibleChanged1(uObject* s, uObject* a)
{
    uPtr(_container)->IsVisible(IsVisible());
}

// private void OnParamChanged() [instance] :1096
void Image::OnParamChanged()
{
    if (::g::Uno::Delegate::op_Inequality(ParamChanged1, NULL))
        uPtr(ParamChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnSourceChanged() [instance] :1103
void Image::OnSourceChanged()
{
    ::g::Fuse::Triggers::WhileFailed::SetState(this, uPtr(uPtr(_container)->Source())->State() == 3, (_lastError == NULL) ? ::STRINGS[2/*"unknown fai...*/] : (uString*)uPtr(_lastError)->Reason);
    ::g::Fuse::Triggers::WhileLoading::SetState(this, uPtr(uPtr(_container)->Source())->State() == 2);

    if (::g::Uno::Delegate::op_Inequality(SourceChanged1, NULL))
        uPtr(SourceChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public generated void add_ParamChanged(Uno.EventHandler value) [instance] :1095
void Image::add_ParamChanged(uDelegate* value)
{
    ParamChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ParamChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public generated void remove_ParamChanged(Uno.EventHandler value) [instance] :1095
void Image::remove_ParamChanged(uDelegate* value)
{
    ParamChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ParamChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public float4 get_Scale9Margin() [instance] :1083
::g::Uno::Float4 Image::Scale9Margin()
{
    return _scale9Margin;
}

// public void set_Scale9Margin(float4 value) [instance] :1084
void Image::Scale9Margin(::g::Uno::Float4 value)
{
    if (!_hasScale9Margin || ::g::Uno::Float4::op_Inequality(_scale9Margin, value))
    {
        _scale9Margin = value;
        _hasScale9Margin = true;
        OnParamChanged();
    }
}

// internal void SetContentBox(float4 contentBox) [instance] :1196
void Image::SetContentBox(::g::Uno::Float4 contentBox)
{
    _hasContentBox = true;
    _contentBox = contentBox;
}

// public Fuse.Resources.ImageSource get_Source() [instance] :1053
::g::Fuse::Resources::ImageSource* Image::Source()
{
    return uPtr(_container)->Source();
}

// public void set_Source(Fuse.Resources.ImageSource value) [instance] :1054
void Image::Source(::g::Fuse::Resources::ImageSource* value)
{
    uPtr(_container)->Source(value);
}

// public generated void add_SourceChanged(Uno.EventHandler value) [instance] :1102
void Image::add_SourceChanged(uDelegate* value)
{
    SourceChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SourceChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public generated void remove_SourceChanged(Uno.EventHandler value) [instance] :1102
void Image::remove_SourceChanged(uDelegate* value)
{
    SourceChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SourceChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public Fuse.Elements.StretchDirection get_StretchDirection() [instance] :1136
int Image::StretchDirection()
{
    int ret15;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Image::StretchDirectionProperty()), this, &ret15), ret15);
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) [instance] :1137
void Image::StretchDirection(int value)
{
    bool ret16;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Image::StretchDirectionProperty()), this, uCRef<int>(value), &ret16);
}

// public Fuse.Elements.StretchMode get_StretchMode() [instance] :1129
int Image::StretchMode()
{
    int ret17;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Image::StretchModeProperty()), this, &ret17), ret17);
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) [instance] :1130
void Image::StretchMode(int value)
{
    bool ret18;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Image::StretchModeProperty()), this, uCRef<int>(value), &ret18);
}

// public Fuse.Elements.StretchSizing get_StretchSizing() [instance] :1143
int Image::StretchSizing()
{
    int ret19;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Image::StretchSizingProperty()), this, &ret19), ret19);
}

// public void set_StretchSizing(Fuse.Elements.StretchSizing value) [instance] :1144
void Image::StretchSizing(int value)
{
    bool ret20;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Image::StretchSizingProperty()), this, uCRef<int>(value), &ret20);
}

// private static Fuse.Elements.Alignment GetContentAlignment(Fuse.Controls.Image img) [static] :1182
int Image::GetContentAlignment(Image* img)
{
    Image_typeof()->Init();
    return uPtr(uPtr(img)->_container)->ContentAlignment();
}

// private static Fuse.Resources.MemoryPolicy GetMemoryPolicy(Fuse.Controls.Image img) [static] :1158
::g::Fuse::Resources::MemoryPolicy* Image::GetMemoryPolicy(Image* img)
{
    Image_typeof()->Init();
    return uPtr(uPtr(img)->_container)->MemoryPolicy();
}

// private static Fuse.Elements.StretchDirection GetStretchDirection(Fuse.Controls.Image img) [static] :1170
int Image::GetStretchDirection(Image* img)
{
    Image_typeof()->Init();
    return uPtr(uPtr(img)->_container)->StretchDirection();
}

// private static Fuse.Elements.StretchMode GetStretchMode(Fuse.Controls.Image img) [static] :1164
int Image::GetStretchMode(Image* img)
{
    Image_typeof()->Init();
    return uPtr(uPtr(img)->_container)->StretchMode();
}

// private static Fuse.Elements.StretchSizing GetStretchSizing(Fuse.Controls.Image img) [static] :1176
int Image::GetStretchSizing(Image* img)
{
    Image_typeof()->Init();
    return uPtr(uPtr(img)->_container)->StretchSizing();
}

// public generated Image New() [static] :971
Image* Image::New2()
{
    Image* obj5 = (Image*)uNew(Image_typeof());
    obj5->ctor_4();
    return obj5;
}

// private static void SetContentAlignment(Fuse.Controls.Image img, Fuse.Elements.Alignment v) [static] :1181
void Image::SetContentAlignment(Image* img, int v)
{
    Image_typeof()->Init();
    uPtr(uPtr(img)->_container)->ContentAlignment(v);
}

// private static void SetMemoryPolicy(Fuse.Controls.Image img, Fuse.Resources.MemoryPolicy v) [static] :1157
void Image::SetMemoryPolicy(Image* img, ::g::Fuse::Resources::MemoryPolicy* v)
{
    Image_typeof()->Init();
    uPtr(uPtr(img)->_container)->MemoryPolicy(v);
}

// private static void SetStretchDirection(Fuse.Controls.Image img, Fuse.Elements.StretchDirection v) [static] :1169
void Image::SetStretchDirection(Image* img, int v)
{
    Image_typeof()->Init();
    uPtr(uPtr(img)->_container)->StretchDirection(v);
}

// private static void SetStretchMode(Fuse.Controls.Image img, Fuse.Elements.StretchMode v) [static] :1163
void Image::SetStretchMode(Image* img, int v)
{
    Image_typeof()->Init();
    uPtr(uPtr(img)->_container)->StretchMode(v);
}

// private static void SetStretchSizing(Fuse.Controls.Image img, Fuse.Elements.StretchSizing v) [static] :1175
void Image::SetStretchSizing(Image* img, int v)
{
    Image_typeof()->Init();
    uPtr(uPtr(img)->_container)->StretchSizing(v);
}

// private static void UpdateParam(Fuse.Controls.Image img) [static] :1184
void Image::UpdateParam(Image* img)
{
    Image_typeof()->Init();
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/WebView/$.uno(268)
// --------------------------------------------------------------------------------

// public abstract interface ISourceReceiver :268
// {
uInterfaceType* ISourceReceiver_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.ISourceReceiver", 0, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/WebView/$.uno(273)
// --------------------------------------------------------------------------------

// public abstract interface IWebView :273
// {
uInterfaceType* IWebView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.IWebView", 0, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/WebView/$.uno(553)
// --------------------------------------------------------------------------------

// internal sealed class JavaScriptCall :553
// {
JavaScriptCall_type* JavaScriptCall_typeof()
{
    static uSStrong<JavaScriptCall_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(JavaScriptCall);
    options.TypeSize = sizeof(JavaScriptCall_type);
    type = (JavaScriptCall_type*)uClassType::New("Fuse.Controls.JavaScriptCall", options);
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*))JavaScriptCall__Apply_fn;
    ::TYPES[11] = ::g::Uno::Delegate_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::BufferedWebViewCall_typeof(), offsetof(JavaScriptCall_type, interface0));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Controls::JavaScriptCall, Handler), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::JavaScriptCall, Script), 0);
    return type;
}

// public JavaScriptCall(string script, Uno.Action<string> handler) :558
void JavaScriptCall__ctor__fn(JavaScriptCall* __this, uString* script, uDelegate* handler)
{
    __this->ctor_(script, handler);
}

// public void Apply(Fuse.Controls.IWebView wv) :564
void JavaScriptCall__Apply_fn(JavaScriptCall* __this, uObject* wv)
{
    __this->Apply(wv);
}

// public JavaScriptCall New(string script, Uno.Action<string> handler) :558
void JavaScriptCall__New1_fn(uString* script, uDelegate* handler, JavaScriptCall** __retval)
{
    *__retval = JavaScriptCall::New1(script, handler);
}

// public JavaScriptCall(string script, Uno.Action<string> handler) [instance] :558
void JavaScriptCall::ctor_(uString* script, uDelegate* handler)
{
    Script = script;
    Handler = handler;
}

// public void Apply(Fuse.Controls.IWebView wv) [instance] :564
void JavaScriptCall::Apply(uObject* wv)
{
    if (::g::Uno::Delegate::op_Inequality(Handler, NULL))
        ::g::Fuse::Controls::IWebView::Eval1(uInterface(uPtr(wv), ::TYPES[210/*Fuse.Controls.IWebView*/]), Script, Handler);
    else
        ::g::Fuse::Controls::IWebView::Eval(uInterface(uPtr(wv), ::TYPES[210/*Fuse.Controls.IWebView*/]), Script);
}

// public JavaScriptCall New(string script, Uno.Action<string> handler) [static] :558
JavaScriptCall* JavaScriptCall::New1(uString* script, uDelegate* handler)
{
    JavaScriptCall* obj1 = (JavaScriptCall*)uNew(JavaScriptCall_typeof());
    obj1->ctor_(script, handler);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/WebView/$.uno(538)
// --------------------------------------------------------------------------------

// internal sealed class LoadHtmlCall :538
// {
LoadHtmlCall_type* LoadHtmlCall_typeof()
{
    static uSStrong<LoadHtmlCall_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LoadHtmlCall);
    options.TypeSize = sizeof(LoadHtmlCall_type);
    type = (LoadHtmlCall_type*)uClassType::New("Fuse.Controls.LoadHtmlCall", options);
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*))LoadHtmlCall__Apply_fn;
    type->SetInterfaces(
        ::g::Fuse::Controls::BufferedWebViewCall_typeof(), offsetof(LoadHtmlCall_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::LoadHtmlCall, baseUrl), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::LoadHtmlCall, html), 0);
    return type;
}

// public LoadHtmlCall(string html, string baseUrl) :542
void LoadHtmlCall__ctor__fn(LoadHtmlCall* __this, uString* html1, uString* baseUrl1)
{
    __this->ctor_(html1, baseUrl1);
}

// public void Apply(Fuse.Controls.IWebView wv) :547
void LoadHtmlCall__Apply_fn(LoadHtmlCall* __this, uObject* wv)
{
    __this->Apply(wv);
}

// public LoadHtmlCall New(string html, string baseUrl) :542
void LoadHtmlCall__New1_fn(uString* html1, uString* baseUrl1, LoadHtmlCall** __retval)
{
    *__retval = LoadHtmlCall::New1(html1, baseUrl1);
}

// public LoadHtmlCall(string html, string baseUrl) [instance] :542
void LoadHtmlCall::ctor_(uString* html1, uString* baseUrl1)
{
    html = html1;
    baseUrl = baseUrl1;
}

// public void Apply(Fuse.Controls.IWebView wv) [instance] :547
void LoadHtmlCall::Apply(uObject* wv)
{
    ::g::Fuse::Controls::IWebView::LoadHtml1(uInterface(uPtr(wv), ::TYPES[210/*Fuse.Controls.IWebView*/]), html, baseUrl);
}

// public LoadHtmlCall New(string html, string baseUrl) [static] :542
LoadHtmlCall* LoadHtmlCall::New1(uString* html1, uString* baseUrl1)
{
    LoadHtmlCall* obj1 = (LoadHtmlCall*)uNew(LoadHtmlCall_typeof());
    obj1->ctor_(html1, baseUrl1);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(1262)
// -------------------------------------------------------------------------

// public sealed class MapView :1262
// {
::g::Fuse::Controls::ParentControl_type* MapView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 99;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(MapView);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("Fuse.Controls.MapView", options);
    type->SetBase(::g::Fuse::Controls::ParentControl_typeof());
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
    type->SetFields(99);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(1416)
// -------------------------------------------------------------------------

// public sealed class NativeViewHost :1416
// {
::g::Fuse::Controls::ParentControl_type* NativeViewHost_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 100;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(NativeViewHost);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("Fuse.Controls.NativeViewHost", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)NativeViewHost__New3_fn;
    type->fp_OnApplyStyle = (void(*)(::g::Fuse::Node*, uObject*))NativeViewHost__OnApplyStyle_fn;
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
    ::TYPES[1] = ::g::Fuse::AppBase_typeof();
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

// public generated NativeViewHost() :1416
void NativeViewHost__ctor_5_fn(NativeViewHost* __this)
{
    __this->ctor_5();
}

// public generated NativeViewHost New() :1416
void NativeViewHost__New3_fn(NativeViewHost** __retval)
{
    *__retval = NativeViewHost::New3();
}

// protected override sealed void OnApplyStyle(object target) :1418
void NativeViewHost__OnApplyStyle_fn(NativeViewHost* __this, uObject* target)
{
    uPtr(uPtr(::g::Fuse::AppBase::Current1())->NativeStyle())->Apply(target);
    __this->ApplyLocalStyles(target);
}

// public generated NativeViewHost() [instance] :1416
void NativeViewHost::ctor_5()
{
    ctor_4();
}

// public generated NativeViewHost New() [static] :1416
NativeViewHost* NativeViewHost::New3()
{
    NativeViewHost* obj1 = (NativeViewHost*)uNew(NativeViewHost_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(1441)
// -------------------------------------------------------------------------

// public sealed class NavigationBar :1441
// {
::g::Fuse::Controls::ParentControl_type* NavigationBar_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 100;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(NavigationBar);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("Fuse.Controls.NavigationBar", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
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
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(1458)
// -------------------------------------------------------------------------

// public sealed class Number :1458
// {
// static Number() :1458
static void Number__cctor_4_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    ::g::Fuse::StyleProperty1* ret4;
    Number::FormatProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[80/*Fuse.StyleProperty<Fuse.Controls.Number, string>*/], ::STRINGS[3/*"F0"*/], uDelegate::New(::TYPES[81/*Uno.Action<Fuse.Controls.Number>*/], (void*)Number__FormatChanged_fn), &ret2), ret2);
    Number::FormatStringProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[80/*Fuse.StyleProperty<Fuse.Controls.Number, string>*/], ::STRINGS[4/*"{0:F0}"*/], uDelegate::New(::TYPES[81/*Uno.Action<Fuse.Controls.Number>*/], (void*)Number__FormatChanged_fn), &ret3), ret3);
    Number::ValueProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[82/*Fuse.StyleProperty<Fuse.Controls.Number, float>*/], uCRef(0.0f), uDelegate::New(::TYPES[81/*Uno.Action<Fuse.Controls.Number>*/], (void*)Number__StaticValueChanged_fn), &ret4), ret4);
}

Number_type* Number_typeof()
{
    static uSStrong<Number_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 104;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(Number);
    options.TypeSize = sizeof(Number_type);
    type = (Number_type*)uClassType::New("Fuse.Controls.Number", options);
    type->SetBase(::g::Fuse::Controls::ParentControl_typeof());
    type->fp_cctor_ = Number__cctor_4_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Number__OnRooted_fn;
    type->interface9.fp_get_Value = (void(*)(uObject*, uTRef))Number__get_Value_fn;
    type->interface9.fp_set_Value = (void(*)(uObject*, void*))Number__set_Value_fn;
    type->interface9.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))Number__add_ValueChanged_fn;
    type->interface9.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))Number__remove_ValueChanged_fn;
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
    ::STRINGS[3] = uString::Const("F0");
    ::STRINGS[4] = uString::Const("{0:F0}");
    ::STRINGS[5] = uString::Const("{0:");
    ::STRINGS[6] = uString::Const("}");
    ::TYPES[80] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Number_typeof(), ::g::Uno::String_typeof());
    ::TYPES[81] = ::g::Uno::Action1_typeof()->MakeType(Number_typeof());
    ::TYPES[82] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Number_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[11] = ::g::Uno::Delegate_typeof();
    ::TYPES[83] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[84] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[13] = uObject_typeof();
    ::TYPES[85] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[86] = uObject_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(Number_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(Number_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(Number_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(Number_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(Number_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(Number_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(Number_type, interface6),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(Number_type, interface7),
        ::g::Fuse::IObjectContainer_typeof(), offsetof(Number_type, interface8),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(Number_type, interface9));
    type->SetFields(99,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::Fuse::Controls::Number, _text), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Fuse::Controls::Number, ValueChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Number_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Controls::Number::FormatProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Number_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Controls::Number::FormatStringProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Number_typeof(), ::g::Uno::Float_typeof()), (uintptr_t)&::g::Fuse::Controls::Number::ValueProperty_, uFieldFlagsStatic);
    return type;
}

// public string get_Format() :1478
void Number__get_Format_fn(Number* __this, uString** __retval)
{
    *__retval = __this->Format();
}

// public void set_Format(string value) :1479
void Number__set_Format_fn(Number* __this, uString* value)
{
    __this->Format(value);
}

// private static void FormatChanged(Fuse.Controls.Number n) :1491
void Number__FormatChanged_fn(Number* n)
{
    Number::FormatChanged(n);
}

// public string get_FormatString() :1487
void Number__get_FormatString_fn(Number* __this, uString** __retval)
{
    *__retval = __this->FormatString();
}

// public void set_FormatString(string value) :1488
void Number__set_FormatString_fn(Number* __this, uString* value)
{
    __this->FormatString(value);
}

// protected override sealed void OnRooted() :1467
void Number__OnRooted_fn(Number* __this)
{
    ::g::Fuse::Controls::ParentControl__OnRooted_fn(__this);
    __this->UpdateValue();
}

// private void OnValueChanged(float n, object origin) :1513
void Number__OnValueChanged_fn(Number* __this, float* n, uObject* origin)
{
    __this->OnValueChanged(*n, origin);
}

// private static void StaticValueChanged(Fuse.Controls.Number n) :1505
void Number__StaticValueChanged_fn(Number* n)
{
    Number::StaticValueChanged(n);
}

// private void UpdateValue() :1522
void Number__UpdateValue_fn(Number* __this)
{
    __this->UpdateValue();
}

// public float get_Value() :1501
void Number__get_Value_fn(Number* __this, float* __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(float value) :1502
void Number__set_Value_fn(Number* __this, float* value)
{
    __this->Value(*value);
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<float> value) :1511
void Number__add_ValueChanged_fn(Number* __this, uDelegate* value)
{
    __this->add_ValueChanged(value);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<float> value) :1511
void Number__remove_ValueChanged_fn(Number* __this, uDelegate* value)
{
    __this->remove_ValueChanged(value);
}

uSStrong< ::g::Fuse::StyleProperty1*> Number::FormatProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Number::FormatStringProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Number::ValueProperty_;

// public string get_Format() [instance] :1478
uString* Number::Format()
{
    uString* ret7;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Number::FormatProperty()), this, &ret7), ret7);
}

// public void set_Format(string value) [instance] :1479
void Number::Format(uString* value)
{
    bool ret8;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Number::FormatProperty()), this, value, &ret8);
}

// public string get_FormatString() [instance] :1487
uString* Number::FormatString()
{
    uString* ret9;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Number::FormatStringProperty()), this, &ret9), ret9);
}

// public void set_FormatString(string value) [instance] :1488
void Number::FormatString(uString* value)
{
    bool ret10;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Number::FormatStringProperty()), this, value, &ret10);
}

// private void OnValueChanged(float n, object origin) [instance] :1513
void Number::OnValueChanged(float n, uObject* origin)
{
    ::g::Uno::UX::ValueChangedArgs* ret5;

    if (::g::Uno::Delegate::op_Inequality(ValueChanged1, NULL))
    {
        ::g::Uno::UX::ValueChangedArgs* args = (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[83/*Uno.UX.ValueChangedArgs<float>*/], uCRef(n), origin, &ret5), ret5);
        uPtr(ValueChanged1)->Invoke(2, uBox(::TYPES[165/*float*/], n), args);
    }
}

// private void UpdateValue() [instance] :1522
void Number::UpdateValue()
{
    bool ret6;
    uString* fmt = (::g::Fuse::StyleProperty1__HasValue_fn(uPtr(Number::FormatStringProperty()), this, &ret6), ret6) ? (uString*)FormatString() : (uString*)::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[5/*"{0:"*/], Format()), ::STRINGS[6/*"}"*/]);
    uPtr(_text)->Value(::g::Uno::String::Format(fmt, uArray::Init<uObject*>(::TYPES[86/*object[]*/], 1, uBox(::TYPES[165/*float*/], Value()))));
}

// public float get_Value() [instance] :1501
float Number::Value()
{
    float ret11;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Number::ValueProperty()), this, &ret11), ret11);
}

// public void set_Value(float value) [instance] :1502
void Number::Value(float value)
{
    bool ret12;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Number::ValueProperty()), this, uCRef(value), &ret12);
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<float> value) [instance] :1511
void Number::add_ValueChanged(uDelegate* value)
{
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ValueChanged1, value), ::TYPES[84/*Uno.UX.ValueChangedHandler<float>*/]);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<float> value) [instance] :1511
void Number::remove_ValueChanged(uDelegate* value)
{
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ValueChanged1, value), ::TYPES[84/*Uno.UX.ValueChangedHandler<float>*/]);
}

// private static void FormatChanged(Fuse.Controls.Number n) [static] :1491
void Number::FormatChanged(Number* n)
{
    Number_typeof()->Init();
    uPtr(n)->UpdateValue();
}

// private static void StaticValueChanged(Fuse.Controls.Number n) [static] :1505
void Number::StaticValueChanged(Number* n)
{
    Number_typeof()->Init();
    uPtr(n)->UpdateValue();
    n->OnValueChanged(n->Value(), n);
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(1605)
// -------------------------------------------------------------------------

// public partial sealed class PageIndicator :1605
// {
// static PageIndicator() :185
static void PageIndicator__cctor_6_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret3;
    PageIndicator::DotFactoryProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[87/*Fuse.StyleProperty<Fuse.Controls.PageIndicator, Uno.UX.Factory>*/], NULL, uDelegate::New(::TYPES[88/*Uno.Action<Fuse.Controls.PageIndicator>*/], (void*)PageIndicator__OnDotFactoryChanged_fn), &ret3), ret3);
}

::g::Fuse::Controls::ParentControl_type* PageIndicator_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 103;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(PageIndicator);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("Fuse.Controls.PageIndicator", options);
    type->SetBase(::g::Fuse::Controls::StackPanel_typeof());
    type->fp_cctor_ = PageIndicator__cctor_6_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PageIndicator__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PageIndicator__OnUnrooted_fn;
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
    ::TYPES[87] = ::g::Fuse::StyleProperty1_typeof()->MakeType(PageIndicator_typeof(), ::g::Uno::UX::Factory_typeof());
    ::TYPES[88] = ::g::Uno::Action1_typeof()->MakeType(PageIndicator_typeof());
    ::TYPES[89] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[90] = ::g::Fuse::Navigation::NavigationPageCountHandler_typeof();
    ::TYPES[91] = ::g::Fuse::Navigation::NavigationPageProgressHandler_typeof();
    ::TYPES[92] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[45] = ::g::Fuse::Controls::ParentControl_typeof();
    ::TYPES[18] = ::g::Fuse::Node_typeof();
    ::TYPES[93] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[13] = uObject_typeof();
    ::TYPES[33] = ::g::Uno::Double_typeof();
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
    type->SetFields(101,
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Controls::PageIndicator, _pageProgress), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(PageIndicator_typeof(), ::g::Uno::UX::Factory_typeof()), (uintptr_t)&::g::Fuse::Controls::PageIndicator::DotFactoryProperty_, uFieldFlagsStatic);
    return type;
}

// public Uno.UX.Factory get_DotFactory() :1623
void PageIndicator__get_DotFactory_fn(PageIndicator* __this, ::g::Uno::UX::Factory** __retval)
{
    *__retval = __this->DotFactory();
}

// public void set_DotFactory(Uno.UX.Factory value) :1624
void PageIndicator__set_DotFactory_fn(PageIndicator* __this, ::g::Uno::UX::Factory* value)
{
    __this->DotFactory(value);
}

// private static void OnDotFactoryChanged(Fuse.Controls.PageIndicator p) :1627
void PageIndicator__OnDotFactoryChanged_fn(PageIndicator* p)
{
    PageIndicator::OnDotFactoryChanged(p);
}

// protected override sealed void OnRooted() :1632
void PageIndicator__OnRooted_fn(PageIndicator* __this)
{
    ::g::Fuse::Controls::ParentControl__OnRooted_fn(__this);
    ::g::Fuse::Navigation::INavigation::add_PageCountChanged(uInterface(uPtr(__this->_pageProgress), ::TYPES[89/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[90/*Fuse.Navigation.NavigationPageCountHandler*/], (void*)PageIndicator__UpdateCount_fn, __this));
    ::g::Fuse::Navigation::INavigation::add_PageProgressChanged(uInterface(uPtr(__this->_pageProgress), ::TYPES[89/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[91/*Fuse.Navigation.NavigationPageProgressHandler*/], (void*)PageIndicator__UpdateCurrent_fn, __this));
    __this->UpdateCount(NULL);
    __this->UpdateCurrent(NULL, ::g::Fuse::Navigation::INavigation::PageProgress(uInterface(uPtr(__this->_pageProgress), ::TYPES[89/*Fuse.Navigation.INavigation*/])), ::g::Fuse::Navigation::INavigation::PageProgress(uInterface(uPtr(__this->_pageProgress), ::TYPES[89/*Fuse.Navigation.INavigation*/])));
}

// protected override sealed void OnUnrooted() :1641
void PageIndicator__OnUnrooted_fn(PageIndicator* __this)
{
    ::g::Fuse::Navigation::INavigation::remove_PageCountChanged(uInterface(uPtr(__this->_pageProgress), ::TYPES[89/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[90/*Fuse.Navigation.NavigationPageCountHandler*/], (void*)PageIndicator__UpdateCount_fn, __this));
    ::g::Fuse::Navigation::INavigation::remove_PageProgressChanged(uInterface(uPtr(__this->_pageProgress), ::TYPES[89/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[91/*Fuse.Navigation.NavigationPageProgressHandler*/], (void*)PageIndicator__UpdateCurrent_fn, __this));
    ::g::Fuse::Controls::ParentControl__OnUnrooted_fn(__this);
}

// private void RecreateDots() :1653
void PageIndicator__RecreateDots_fn(PageIndicator* __this)
{
    __this->RecreateDots();
}

// private void UpdateCount(object s) :1648
void PageIndicator__UpdateCount_fn(PageIndicator* __this, uObject* s)
{
    __this->UpdateCount(s);
}

// private void UpdateCurrent(object s, double progress, double prevProgress) :1670
void PageIndicator__UpdateCurrent_fn(PageIndicator* __this, uObject* s, double* progress, double* prevProgress)
{
    __this->UpdateCurrent(s, *progress, *prevProgress);
}

uSStrong< ::g::Fuse::StyleProperty1*> PageIndicator::DotFactoryProperty_;

// public Uno.UX.Factory get_DotFactory() [instance] :1623
::g::Uno::UX::Factory* PageIndicator::DotFactory()
{
    ::g::Uno::UX::Factory* ret6;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(PageIndicator::DotFactoryProperty()), this, &ret6), ret6);
}

// public void set_DotFactory(Uno.UX.Factory value) [instance] :1624
void PageIndicator::DotFactory(::g::Uno::UX::Factory* value)
{
    bool ret7;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(PageIndicator::DotFactoryProperty()), this, value, &ret7);
}

// private void RecreateDots() [instance] :1653
void PageIndicator::RecreateDots()
{
    ::g::Fuse::Node* ret4;
    int count = ::g::Fuse::Navigation::INavigation::PageCount(uInterface(uPtr(_pageProgress), ::TYPES[89/*Fuse.Navigation.INavigation*/]));

    while (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/])) > count)
        ::g::Uno::Collections::IList::RemoveAt(uInterface(uPtr(Children()), ::TYPES[93/*Uno.Collections.IList<Fuse.Node>*/]), ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/])) - 1);

    while (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/])) < count)
    {
        ::g::Fuse::Node* dot = uAs< ::g::Fuse::Node*>(uPtr(DotFactory())->New1(), ::TYPES[18/*Fuse.Node*/]);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/]), dot);
    }

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
        ::g::Fuse::Navigation::NavigationPageProperty::SetNavigationPage((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[93/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret4), ret4), ::g::Fuse::Navigation::INavigation::GetPage(uInterface(uPtr(_pageProgress), ::TYPES[89/*Fuse.Navigation.INavigation*/]), i));

    UpdateCurrent(_pageProgress, ::g::Fuse::Navigation::INavigation::PageProgress(uInterface(uPtr(_pageProgress), ::TYPES[89/*Fuse.Navigation.INavigation*/])), ::g::Fuse::Navigation::INavigation::PageProgress(uInterface(uPtr(_pageProgress), ::TYPES[89/*Fuse.Navigation.INavigation*/])));
}

// private void UpdateCount(object s) [instance] :1648
void PageIndicator::UpdateCount(uObject* s)
{
    RecreateDots();
}

// private void UpdateCurrent(object s, double progress, double prevProgress) [instance] :1670
void PageIndicator::UpdateCurrent(uObject* s, double progress, double prevProgress)
{
    ::g::Fuse::Node* ret5;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
    {
        double p = progress - (double)i;
        double pp = prevProgress - (double)i;
        ::g::Fuse::Navigation::Navigation::NotifyNavigation((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[93/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret5), ret5), ::g::Fuse::Navigation::NavigationArgs::New2(p, pp, 2));
    }
}

// private static void OnDotFactoryChanged(Fuse.Controls.PageIndicator p) [static] :1627
void PageIndicator::OnDotFactoryChanged(PageIndicator* p)
{
    PageIndicator_typeof()->Init();
    uPtr(p)->RecreateDots();
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/.uno/$.uno(204)
// -----------------------------------------------------------------------------

// public partial sealed class PageIndicatorDot :204
// {
// static PageIndicatorDot() :206
static void PageIndicatorDot__cctor_5_fn(uType* __type)
{
}

::g::Fuse::Controls::ParentControl_type* PageIndicatorDot_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 100;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(PageIndicatorDot);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("Fuse.Controls.PageIndicatorDot", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)PageIndicatorDot__New3_fn;
    type->fp_cctor_ = PageIndicatorDot__cctor_5_fn;
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

// public PageIndicatorDot() :209
void PageIndicatorDot__ctor_5_fn(PageIndicatorDot* __this)
{
    __this->ctor_5();
}

// private void InitializeUX() :213
void PageIndicatorDot__InitializeUX_fn(PageIndicatorDot* __this)
{
    __this->InitializeUX();
}

// public PageIndicatorDot New() :209
void PageIndicatorDot__New3_fn(PageIndicatorDot** __retval)
{
    *__retval = PageIndicatorDot::New3();
}

// public PageIndicatorDot() [instance] :209
void PageIndicatorDot::ctor_5()
{
    ctor_4();
    InitializeUX();
}

// private void InitializeUX() [instance] :213
void PageIndicatorDot::InitializeUX()
{
}

// public PageIndicatorDot New() [static] :209
PageIndicatorDot* PageIndicatorDot::New3()
{
    PageIndicatorDot* obj1 = (PageIndicatorDot*)uNew(PageIndicatorDot_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(1682)
// -------------------------------------------------------------------------

// internal sealed class PageIndicatorDotFactory :1682
// {
::g::Uno::UX::Factory_type* PageIndicatorDotFactory_typeof()
{
    static uSStrong< ::g::Uno::UX::Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PageIndicatorDotFactory);
    options.TypeSize = sizeof(::g::Uno::UX::Factory_type);
    type = (::g::Uno::UX::Factory_type*)uClassType::New("Fuse.Controls.PageIndicatorDotFactory", options);
    type->SetBase(::g::Uno::UX::Factory_typeof());
    type->fp_New1 = (void(*)(::g::Uno::UX::Factory*, uObject**))PageIndicatorDotFactory__New1_fn;
    ::TYPES[13] = uObject_typeof();
    type->SetFields(2);
    return type;
}

// public override sealed object New() :1686
void PageIndicatorDotFactory__New1_fn(PageIndicatorDotFactory* __this, uObject** __retval)
{
    return *__retval = ::g::Fuse::Controls::PageIndicatorDot::New3(), void();
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(2410)
// -------------------------------------------------------------------------

// public class Panel :2410
// {
// static Panel() :2410
static void Panel__cctor_4_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    Panel::ColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[94/*Fuse.StyleProperty<Fuse.Controls.Panel, float4>*/], uCRef(::g::Uno::Float4__New1(0.0f)), uDelegate::New(::TYPES[95/*Uno.Action<Fuse.Controls.Panel>*/], (void*)Panel__OnColorChanged1_fn), &ret2), ret2);
}

::g::Fuse::Controls::ParentControl_type* Panel_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 101;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Panel);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("Fuse.Controls.Panel", options);
    type->SetBase(::g::Fuse::Controls::ParentControl_typeof());
    type->fp_ctor_ = (void*)Panel__New2_fn;
    type->fp_cctor_ = Panel__cctor_4_fn;
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
    ::TYPES[94] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Panel_typeof(), ::g::Uno::Float4_typeof());
    ::TYPES[95] = ::g::Uno::Action1_typeof()->MakeType(Panel_typeof());
    ::TYPES[11] = ::g::Uno::Delegate_typeof();
    ::TYPES[96] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[13] = uObject_typeof();
    ::TYPES[97] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[16] = ::g::Uno::Bool_typeof();
    ::TYPES[98] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[99] = ::g::Fuse::Controls::Control_typeof();
    ::TYPES[23] = ::g::Fuse::Drawing::Brush_typeof();
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
    type->SetFields(99,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::Fuse::Controls::Panel, ColorChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Panel_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::Controls::Panel::ColorProperty_, uFieldFlagsStatic);
    return type;
}

// public generated Panel() :2410
void Panel__ctor_4_fn(Panel* __this)
{
    __this->ctor_4();
}

// public float4 get_Color() :2415
void Panel__get_Color_fn(Panel* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :2416
void Panel__set_Color_fn(Panel* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public generated void add_ColorChanged(Uno.UX.ValueChangedHandler<float4> value) :2426
void Panel__add_ColorChanged_fn(Panel* __this, uDelegate* value)
{
    __this->add_ColorChanged(value);
}

// public generated void remove_ColorChanged(Uno.UX.ValueChangedHandler<float4> value) :2426
void Panel__remove_ColorChanged_fn(Panel* __this, uDelegate* value)
{
    __this->remove_ColorChanged(value);
}

// public generated Panel New() :2410
void Panel__New2_fn(Panel** __retval)
{
    *__retval = Panel::New2();
}

// private void OnColorChanged(float4 value, object origin) :2436
void Panel__OnColorChanged_fn(Panel* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->OnColorChanged(*value, origin);
}

// private static void OnColorChanged(Fuse.Controls.Panel c) :2431
void Panel__OnColorChanged1_fn(Panel* c)
{
    Panel::OnColorChanged1(c);
}

uSStrong< ::g::Fuse::StyleProperty1*> Panel::ColorProperty_;

// public generated Panel() [instance] :2410
void Panel::ctor_4()
{
    ctor_3();
}

// public float4 get_Color() [instance] :2415
::g::Uno::Float4 Panel::Color()
{
    ::g::Uno::Float4 ret4;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Panel::ColorProperty()), this, &ret4), ret4);
}

// public void set_Color(float4 value) [instance] :2416
void Panel::Color(::g::Uno::Float4 value)
{
    bool ret5;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Panel::ColorProperty()), this, uCRef(value), &ret5);
}

// public generated void add_ColorChanged(Uno.UX.ValueChangedHandler<float4> value) [instance] :2426
void Panel::add_ColorChanged(uDelegate* value)
{
    ColorChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ColorChanged1, value), ::TYPES[96/*Uno.UX.ValueChangedHandler<float4>*/]);
}

// public generated void remove_ColorChanged(Uno.UX.ValueChangedHandler<float4> value) [instance] :2426
void Panel::remove_ColorChanged(uDelegate* value)
{
    ColorChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ColorChanged1, value), ::TYPES[96/*Uno.UX.ValueChangedHandler<float4>*/]);
}

// private void OnColorChanged(float4 value, object origin) [instance] :2436
void Panel::OnColorChanged(::g::Uno::Float4 value, uObject* origin)
{
    ::g::Uno::UX::ValueChangedArgs* ret3;

    if (::g::Uno::Delegate::op_Inequality(ColorChanged1, NULL))
        uPtr(ColorChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[97/*Uno.UX.ValueChangedArgs<float4>*/], uCRef(Color()), origin, &ret3), ret3));

    if (!uIs(Background(), ::TYPES[98/*Fuse.Drawing.SolidColor*/]))
        Background(::g::Fuse::Drawing::SolidColor::New2(value));
    else
        uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(Background(), ::TYPES[98/*Fuse.Drawing.SolidColor*/]))->Color(value);
}

// public generated Panel New() [static] :2410
Panel* Panel::New2()
{
    Panel* obj1 = (Panel*)uNew(Panel_typeof());
    obj1->ctor_4();
    return obj1;
}

// private static void OnColorChanged(Fuse.Controls.Panel c) [static] :2431
void Panel::OnColorChanged1(Panel* c)
{
    Panel_typeof()->Init();
    uPtr(c)->OnColorChanged(uPtr(c)->Color(), c);
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(1770)
// -------------------------------------------------------------------------

// public partial class ParentControl :1770
// {
// static ParentControl() :1770
static void ParentControl__cctor_3_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret6;
    ::g::Fuse::StyleProperty1* ret7;
    ParentControl::AppearanceProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[100/*Fuse.StyleProperty<Fuse.Controls.ParentControl, Fuse.Node>*/], NULL, uDelegate::New(::TYPES[101/*Uno.Action<Fuse.Controls.ParentControl>*/], (void*)ParentControl__OnAppearanceChanged_fn), uDelegate::New(::TYPES[102/*Uno.Action<Fuse.Controls.ParentControl, Fuse.Node>*/], (void*)ParentControl__SetAppearance_fn), uDelegate::New(::TYPES[103/*Uno.Func<Fuse.Controls.ParentControl, Fuse.Node>*/], (void*)ParentControl__GetAppearance_fn), &ret6), ret6);
    ParentControl::LayoutProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[104/*Fuse.StyleProperty<Fuse.Controls.ParentControl, Fuse.Layouts.Layout>*/], ::g::Fuse::Layouts::Layouts::Default(), uDelegate::New(::TYPES[101/*Uno.Action<Fuse.Controls.ParentControl>*/], (void*)ParentControl__OnLayoutChanged_fn), uDelegate::New(::TYPES[106/*Uno.Action<Fuse.Controls.ParentControl, Fuse.Layouts.Layout>*/], (void*)ParentControl__SetLayout_fn), uDelegate::New(::TYPES[107/*Uno.Func<Fuse.Controls.ParentControl, Fuse.Layouts.Layout>*/], (void*)ParentControl__GetLayout_fn), &ret7), ret7);
    ParentControl::_implicitEachHandle_ = ::g::Fuse::Properties::CreateHandle();
}

ParentControl_type* ParentControl_typeof()
{
    static uSStrong<ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 102;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(ParentControl);
    options.TypeSize = sizeof(ParentControl_type);
    type = (ParentControl_type*)uClassType::New("Fuse.Controls.ParentControl", options);
    type->SetBase(::g::Fuse::Controls::Control_typeof());
    type->fp_cctor_ = ParentControl__cctor_3_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*))ParentControl__ArrangePaddingBox_fn;
    type->fp_CalcRenderBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Rect*))ParentControl__CalcRenderBounds_fn;
    type->fp_FastTrackDrawWithOpacity = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*, bool*))ParentControl__FastTrackDrawWithOpacity_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))ParentControl__GetContentSize_fn;
    type->fp_GetSubNode = (void(*)(::g::Fuse::Node*, int*, ::g::Fuse::Node**))ParentControl__GetSubNode_fn;
    type->fp_IsMarginBoxDependent = (void(*)(::g::Fuse::Node*, ::g::Fuse::Node*, int*))ParentControl__IsMarginBoxDependent_fn;
    type->fp_OnDrawControl = (void(*)(::g::Fuse::Controls::Control*, ::g::Fuse::DrawContext*))ParentControl__OnDrawControl_fn;
    type->fp_OnHitTestChildren = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::HitTestContext*))ParentControl__OnHitTestChildren_fn;
    type->fp_OnInvalidateLayout = (void(*)(::g::Fuse::Node*))ParentControl__OnInvalidateLayout_fn;
    type->fp_OnResetStyle = (void(*)(::g::Fuse::Node*))ParentControl__OnResetStyle_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))ParentControl__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))ParentControl__OnUnrooted_fn;
    type->fp_get_SubNodeCount = (void(*)(::g::Fuse::Node*, int*))ParentControl__get_SubNodeCount_fn;
    type->interface7.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))ParentControl__FuseNavigationINavigationPanelAddChildAt_fn;
    type->interface7.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))ParentControl__FuseNavigationINavigationPanelRemoveChild_fn;
    type->interface8.fp_Add = (void(*)(uObject*, uObject*))ParentControl__FuseIObjectContainerAdd_fn;
    type->interface8.fp_Insert = (void(*)(uObject*, int*, uObject*))ParentControl__FuseIObjectContainerInsert_fn;
    type->interface8.fp_Remove = (void(*)(uObject*, uObject*))ParentControl__FuseIObjectContainerRemove_fn;
    type->interface8.fp_BeginRemove = (void(*)(uObject*, uObject*))ParentControl__FuseIObjectContainerBeginRemove_fn;
    type->interface7.fp_get_Children = (void(*)(uObject*, uObject**))ParentControl__get_Children_fn;
    type->interface7.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))ParentControl__add_ChildAdded_fn;
    type->interface7.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))ParentControl__remove_ChildAdded_fn;
    type->interface7.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))ParentControl__add_ChildRemoved_fn;
    type->interface7.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))ParentControl__remove_ChildRemoved_fn;
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
    ::STRINGS[7] = uString::Const("Dynamic children of ParentControl must be of type Node");
    ::STRINGS[8] = uString::Const("Use `Layer=\"Background\"` instead of setting the appearance on a ParentControl");
    ::STRINGS[9] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno");
    ::STRINGS[10] = uString::Const("SetAppearance");
    ::TYPES[100] = ::g::Fuse::StyleProperty1_typeof()->MakeType(ParentControl_typeof(), ::g::Fuse::Node_typeof());
    ::TYPES[101] = ::g::Uno::Action1_typeof()->MakeType(ParentControl_typeof());
    ::TYPES[102] = ::g::Uno::Action2_typeof()->MakeType(ParentControl_typeof(), ::g::Fuse::Node_typeof());
    ::TYPES[103] = ::g::Uno::Func1_typeof()->MakeType(ParentControl_typeof(), ::g::Fuse::Node_typeof());
    ::TYPES[104] = ::g::Fuse::StyleProperty1_typeof()->MakeType(ParentControl_typeof(), ::g::Fuse::Layouts::Layout_typeof());
    ::TYPES[105] = ::g::Fuse::Layouts::Layouts_typeof();
    ::TYPES[106] = ::g::Uno::Action2_typeof()->MakeType(ParentControl_typeof(), ::g::Fuse::Layouts::Layout_typeof());
    ::TYPES[107] = ::g::Uno::Func1_typeof()->MakeType(ParentControl_typeof(), ::g::Fuse::Layouts::Layout_typeof());
    ::TYPES[18] = ::g::Fuse::Node_typeof();
    ::TYPES[15] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[16] = ::g::Uno::Bool_typeof();
    ::TYPES[108] = ::g::Fuse::BeginRemoveArgs_typeof();
    ::TYPES[109] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[92] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[93] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[11] = ::g::Uno::Delegate_typeof();
    ::TYPES[25] = ::g::Uno::EventHandler_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[26] = ::g::Uno::EventArgs_typeof();
    ::TYPES[110] = ::g::Uno::Comparison_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[99] = ::g::Fuse::Controls::Control_typeof();
    ::TYPES[111] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[77] = ::g::Uno::Int_typeof();
    ::TYPES[112] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[113] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[29] = ::g::Uno::Action_typeof();
    ::TYPES[114] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[115] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(ParentControl_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(ParentControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(ParentControl_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(ParentControl_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(ParentControl_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(ParentControl_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(ParentControl_type, interface6),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(ParentControl_type, interface7),
        ::g::Fuse::IObjectContainer_typeof(), offsetof(ParentControl_type, interface8));
    type->SetFields(88,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Controls::ParentControl, _appearance), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::ParentControl, _children), 0,
        ::g::Fuse::Elements::ElementBatcher_typeof(), offsetof(::g::Fuse::Controls::ParentControl, _elementBatcher), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::ParentControl, _elementBatchValid), 0,
        ::g::Fuse::Layouts::Layout_typeof(), offsetof(::g::Fuse::Controls::ParentControl, _layout), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::ParentControl, _nodeZOrders), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::ParentControl, _sortedZOrder), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::ParentControl, _zOrder), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::ParentControl, ChildAdded1), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::ParentControl, ChildRemoved1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::ParentControl, ZOrderChanged1), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Controls::ParentControl::_implicitEachHandle_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(ParentControl_typeof(), ::g::Fuse::Node_typeof()), (uintptr_t)&::g::Fuse::Controls::ParentControl::AppearanceProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(ParentControl_typeof(), ::g::Fuse::Layouts::Layout_typeof()), (uintptr_t)&::g::Fuse::Controls::ParentControl::LayoutProperty_, uFieldFlagsStatic);
    return type;
}

// public generated ParentControl() :1770
void ParentControl__ctor_3_fn(ParentControl* __this)
{
    __this->ctor_3();
}

// public void AddStyleChild(Fuse.Node child) :1827
void ParentControl__AddStyleChild_fn(ParentControl* __this, ::g::Fuse::Node* child)
{
    __this->AddStyleChild(child);
}

// protected override sealed void ArrangePaddingBox(Fuse.LayoutParams lp) :2233
void ParentControl__ArrangePaddingBox_fn(ParentControl* __this, ::g::Fuse::LayoutParams* lp)
{
    ::g::Fuse::LayoutParams lp_ = *lp;

    if (__this->HasChildren())
        uPtr(__this->Layout())->ArrangePaddingBox(__this->Children(), __this->Padding(), lp_);

    ::g::Fuse::Elements::Element__ArrangePaddingBox_fn(__this, uCRef(lp_));
}

// public void BeginRemoveChild(Fuse.Node child) :1772
void ParentControl__BeginRemoveChild_fn(ParentControl* __this, ::g::Fuse::Node* child)
{
    __this->BeginRemoveChild(child);
}

// public void BringToFront(Fuse.Node item) :1890
void ParentControl__BringToFront_fn(ParentControl* __this, ::g::Fuse::Node* item)
{
    __this->BringToFront(item);
}

// protected override Uno.Rect CalcRenderBounds() :2240
void ParentControl__CalcRenderBounds_fn(ParentControl* __this, ::g::Uno::Rect* __retval)
{
    ::g::Uno::Rect ret10;
    ::g::Fuse::Node* ret11;
    ::g::Uno::Rect r = (::g::Fuse::Elements::Element__CalcRenderBounds_fn(__this, &ret10), ret10);

    if (__this->HasChildren())

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
            r = ::g::Uno::Rect__Union(r, uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::TYPES[93/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret11), ret11))->CalcRenderBoundsInParentSpace());

    return *__retval = r, void();
}

// public generated void add_ChildAdded(Uno.EventHandler<Fuse.Node> value) :2201
void ParentControl__add_ChildAdded_fn(ParentControl* __this, uDelegate* value)
{
    __this->add_ChildAdded(value);
}

// public generated void remove_ChildAdded(Uno.EventHandler<Fuse.Node> value) :2201
void ParentControl__remove_ChildAdded_fn(ParentControl* __this, uDelegate* value)
{
    __this->remove_ChildAdded(value);
}

// public generated void add_ChildRemoved(Uno.EventHandler<Fuse.Node> value) :2202
void ParentControl__add_ChildRemoved_fn(ParentControl* __this, uDelegate* value)
{
    __this->add_ChildRemoved(value);
}

// public generated void remove_ChildRemoved(Uno.EventHandler<Fuse.Node> value) :2202
void ParentControl__remove_ChildRemoved_fn(ParentControl* __this, uDelegate* value)
{
    __this->remove_ChildRemoved(value);
}

// public Uno.Collections.IList<Fuse.Node> get_Children() :1818
void ParentControl__get_Children_fn(ParentControl* __this, uObject** __retval)
{
    *__retval = __this->Children();
}

// private void EmitZOrderChanged() :1964
void ParentControl__EmitZOrderChanged_fn(ParentControl* __this)
{
    __this->EmitZOrderChanged();
}

// internal void EndRemoveChild(Fuse.Node child) :1792
void ParentControl__EndRemoveChild_fn(ParentControl* __this, ::g::Fuse::Node* child)
{
    __this->EndRemoveChild(child);
}

// private void EnsureSortedZOrder() :1935
void ParentControl__EnsureSortedZOrder_fn(ParentControl* __this)
{
    __this->EnsureSortedZOrder();
}

// protected override sealed bool FastTrackDrawWithOpacity(Fuse.DrawContext dc) :2167
void ParentControl__FastTrackDrawWithOpacity_fn(ParentControl* __this, ::g::Fuse::DrawContext* dc, bool* __retval)
{
    if (__this->HasChildren())
        return *__retval = false, void();

    if (__this->Background() == NULL)
        return *__retval = true, void();

    __this->DrawBackground(dc, __this->Opacity());
    return *__retval = true, void();
}

// private void Fuse.IObjectContainer.Add(object obj) :2283
void ParentControl__FuseIObjectContainerAdd_fn(ParentControl* __this, uObject* obj)
{
    ::g::Fuse::Node* n = uAs< ::g::Fuse::Node*>(obj, ::TYPES[18/*Fuse.Node*/]);

    if (n != NULL)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__this->Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/]), n);
    else
        U_THROW(::g::Uno::Exception::New2(::STRINGS[7/*"Dynamic chi...*/]));
}

// private void Fuse.IObjectContainer.BeginRemove(object obj) :2304
void ParentControl__FuseIObjectContainerBeginRemove_fn(ParentControl* __this, uObject* obj)
{
    ::g::Fuse::Node* n = uAs< ::g::Fuse::Node*>(obj, ::TYPES[18/*Fuse.Node*/]);

    if (n != NULL)
        __this->BeginRemoveChild(n);
    else
        U_THROW(::g::Uno::Exception::New2(::STRINGS[7/*"Dynamic chi...*/]));
}

// private void Fuse.IObjectContainer.Insert(int index, object obj) :2290
void ParentControl__FuseIObjectContainerInsert_fn(ParentControl* __this, int* index, uObject* obj)
{
    int index_ = *index;
    ::g::Fuse::Node* n = uAs< ::g::Fuse::Node*>(obj, ::TYPES[18/*Fuse.Node*/]);

    if (n != NULL)
        ::g::Uno::Collections::IList::Insert_ex(uInterface(uPtr(__this->Children()), ::TYPES[93/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(index_), n);
    else
        U_THROW(::g::Uno::Exception::New2(::STRINGS[7/*"Dynamic chi...*/]));
}

// private void Fuse.IObjectContainer.Remove(object obj) :2297
void ParentControl__FuseIObjectContainerRemove_fn(ParentControl* __this, uObject* obj)
{
    bool ret15;
    ::g::Fuse::Node* n = uAs< ::g::Fuse::Node*>(obj, ::TYPES[18/*Fuse.Node*/]);

    if (n != NULL)
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(__this->Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/]), n, &ret15);
    else
        U_THROW(::g::Uno::Exception::New2(::STRINGS[7/*"Dynamic chi...*/]));
}

// private void Fuse.Navigation.INavigationPanel.AddChildAt(int index, Fuse.Node n) :2139
void ParentControl__FuseNavigationINavigationPanelAddChildAt_fn(ParentControl* __this, int* index, ::g::Fuse::Node* n)
{
    int index_ = *index;
    ::g::Uno::Collections::IList::Insert_ex(uInterface(uPtr(__this->Children()), ::TYPES[93/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(index_), n);
}

// private void Fuse.Navigation.INavigationPanel.RemoveChild(Fuse.Node child) :2140
void ParentControl__FuseNavigationINavigationPanelRemoveChild_fn(ParentControl* __this, ::g::Fuse::Node* child)
{
    bool ret17;
    ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(__this->Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/]), child, &ret17);
}

// private static Fuse.Node GetAppearance(Fuse.Controls.ParentControl c) :2110
void ParentControl__GetAppearance_fn(ParentControl* c, ::g::Fuse::Node** __retval)
{
    *__retval = ParentControl::GetAppearance(c);
}

// protected override sealed float2 GetContentSize(Fuse.LayoutParams lp) :2226
void ParentControl__GetContentSize_fn(ParentControl* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 ret18;

    if (__this->HasChildren())
        return *__retval = uPtr(__this->Layout())->GetContentSize(__this->Children(), lp_), void();

    return *__retval = (::g::Fuse::Elements::Element__GetContentSize_fn(__this, uCRef(lp_), &ret18), ret18), void();
}

// private static Fuse.Layouts.Layout GetLayout(Fuse.Controls.ParentControl p) :2199
void ParentControl__GetLayout_fn(ParentControl* p, ::g::Fuse::Layouts::Layout** __retval)
{
    *__retval = ParentControl::GetLayout(p);
}

// public override sealed Fuse.Node GetSubNode(int index) :2276
void ParentControl__GetSubNode_fn(ParentControl* __this, int* index, ::g::Fuse::Node** __retval)
{
    int index_ = *index;
    int ret19;
    ::g::Fuse::Node* ret20;
    ::g::Fuse::Node* ret21;
    int ret22;

    if (index_ < (::g::Fuse::Node__get_SubNodeCount_fn(__this, &ret19), ret19))
        return *__retval = (::g::Fuse::Node__GetSubNode_fn(__this, uCRef<int>(index_), &ret20), ret20), void();

    return *__retval = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::TYPES[93/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(index_ - (::g::Fuse::Node__get_SubNodeCount_fn(__this, &ret22), ret22)), &ret21), ret21), void();
}

// internal Fuse.Node GetZOrderChild(int index) :1979
void ParentControl__GetZOrderChild_fn(ParentControl* __this, int* index, ::g::Fuse::Node** __retval)
{
    *__retval = __this->GetZOrderChild(*index);
}

// public bool get_HasChildren() :1813
void ParentControl__get_HasChildren_fn(ParentControl* __this, bool* __retval)
{
    *__retval = __this->HasChildren();
}

// private void InvalidateZOrder() :1970
void ParentControl__InvalidateZOrder_fn(ParentControl* __this)
{
    __this->InvalidateZOrder();
}

// protected override sealed Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Node child) :2319
void ParentControl__IsMarginBoxDependent_fn(ParentControl* __this, ::g::Fuse::Node* child, int* __retval)
{
    int outer = uPtr(__this->BoxSizingObject())->IsContentRelativeSize(__this);
    int inner = uPtr(__this->Layout())->IsMarginBoxDependent(child);

    if (outer == 4)
    {
        if (inner == 0)
            return *__retval = 0, void();

        return *__retval = 4, void();
    }
    else if (outer == 0)
    {
        if (inner == 4)
            return *__retval = 1, void();

        if (inner == 0)
            return *__retval = 0, void();

        return *__retval = 3, void();
    }
    else
    {
        if (inner == 4)
            return *__retval = 3, void();

        if (inner == 0)
            return *__retval = 0, void();

        return *__retval = 2, void();
    }
}

// public Fuse.Layouts.Layout get_Layout() :2184
void ParentControl__get_Layout_fn(ParentControl* __this, ::g::Fuse::Layouts::Layout** __retval)
{
    *__retval = __this->Layout();
}

// public void set_Layout(Fuse.Layouts.Layout value) :2185
void ParentControl__set_Layout_fn(ParentControl* __this, ::g::Fuse::Layouts::Layout* value)
{
    __this->Layout(value);
}

// private void ListChildAdded(Fuse.Node item) :1858
void ParentControl__ListChildAdded_fn(ParentControl* __this, ::g::Fuse::Node* item)
{
    __this->ListChildAdded(item);
}

// private void ListChildRemoved(Fuse.Node child) :1871
void ParentControl__ListChildRemoved_fn(ParentControl* __this, ::g::Fuse::Node* child)
{
    __this->ListChildRemoved(child);
}

// private static void OnAppearanceChanged(Fuse.Controls.ParentControl c) :2114
void ParentControl__OnAppearanceChanged_fn(ParentControl* c)
{
    ParentControl::OnAppearanceChanged(c);
}

// protected void OnChildAdded(Fuse.Node elm) :2251
void ParentControl__OnChildAdded_fn(ParentControl* __this, ::g::Fuse::Node* elm)
{
    __this->OnChildAdded(elm);
}

// protected void OnChildRemoved(Fuse.Node elm) :2256
void ParentControl__OnChildRemoved_fn(ParentControl* __this, ::g::Fuse::Node* elm)
{
    __this->OnChildRemoved(elm);
}

// protected override sealed void OnDrawControl(Fuse.DrawContext dc) :2013
void ParentControl__OnDrawControl_fn(ParentControl* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Fuse::Controls::Control__OnDrawControl_fn(__this, dc);

    if (!__this->HasChildren())
        return;

    if (!__this->ShouldBatch())
    {
        if (__this->_elementBatcher != NULL)
            __this->_elementBatcher = NULL;

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
            uPtr(__this->GetZOrderChild(i))->Draw(dc);
    }
    else
    {
        if ((__this->_elementBatcher == NULL) || !__this->_elementBatchValid)
        {
            if (__this->_elementBatcher == NULL)
                __this->_elementBatcher = ::g::Fuse::Elements::ElementBatcher::New1();
            else
                uPtr(__this->_elementBatcher)->RemoveAllElements();

            for (int i1 = 0; i1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i1)
                uPtr(__this->_elementBatcher)->AddElement(__this->GetZOrderChild(i1));

            __this->_elementBatchValid = true;
        }

        uPtr(__this->_elementBatcher)->Draw(dc);
    }
}

// protected override sealed void OnHitTestChildren(Fuse.HitTestContext htc) :2261
void ParentControl__OnHitTestChildren_fn(ParentControl* __this, ::g::Fuse::HitTestContext* htc)
{
    if (__this->HasChildren())

        for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/])) - 1; i >= 0; --i)
            uPtr(__this->GetZOrderChild(i))->HitTest(htc);

    ::g::Fuse::Elements::Element__OnHitTestChildren_fn(__this, htc);
}

// protected override sealed void OnInvalidateLayout() :2348
void ParentControl__OnInvalidateLayout_fn(ParentControl* __this)
{
    ::g::Fuse::Elements::Element__OnInvalidateLayout_fn(__this);

    if (__this->HasChildren())
        __this->InvalidateZOrder();
}

// private static void OnLayoutChanged(Fuse.Controls.ParentControl p) :2188
void ParentControl__OnLayoutChanged_fn(ParentControl* p)
{
    ParentControl::OnLayoutChanged(p);
}

// protected override void OnResetStyle() :2204
void ParentControl__OnResetStyle_fn(ParentControl* __this)
{
    if (__this->HasChildren())
        __this->RemoveStyleChildren();

    ::g::Fuse::Elements::Element__OnResetStyle_fn(__this);
}

// protected override void OnRooted() :2212
void ParentControl__OnRooted_fn(ParentControl* __this)
{
    if (__this->_layout != NULL)
        uPtr(__this->_layout)->SetContainer(__this);

    ::g::Fuse::Controls::Control__OnRooted_fn(__this);
}

// protected override void OnUnrooted() :2219
void ParentControl__OnUnrooted_fn(ParentControl* __this)
{
    if (__this->_layout != NULL)
        uPtr(__this->_layout)->RemoveContainer(__this);

    ::g::Fuse::Controls::Control__OnUnrooted_fn(__this);
}

// private void RemoveStyleChildren() :1985
void ParentControl__RemoveStyleChildren_fn(ParentControl* __this)
{
    __this->RemoveStyleChildren();
}

// public void SendToBack(Fuse.Node item) :1907
void ParentControl__SendToBack_fn(ParentControl* __this, ::g::Fuse::Node* item)
{
    __this->SendToBack(item);
}

// private static void SetAppearance(Fuse.Controls.ParentControl c, Fuse.Node a) :2095
void ParentControl__SetAppearance_fn(ParentControl* c, ::g::Fuse::Node* a)
{
    ParentControl::SetAppearance(c, a);
}

// private static void SetLayout(Fuse.Controls.ParentControl p, Fuse.Layouts.Layout value) :2190
void ParentControl__SetLayout_fn(ParentControl* p, ::g::Fuse::Layouts::Layout* value)
{
    ParentControl::SetLayout(p, value);
}

// private bool ShouldBatch() :1998
void ParentControl__ShouldBatch_fn(ParentControl* __this, bool* __retval)
{
    *__retval = __this->ShouldBatch();
}

// private void SoftInvalidateZOrder([bool force]) :1952
void ParentControl__SoftInvalidateZOrder_fn(ParentControl* __this, bool* force)
{
    __this->SoftInvalidateZOrder(*force);
}

// public override sealed int get_SubNodeCount() :2273
void ParentControl__get_SubNodeCount_fn(ParentControl* __this, int* __retval)
{
    int ret32;
    return *__retval = (::g::Fuse::Node__get_SubNodeCount_fn(__this, &ret32), ret32) + (__this->HasChildren() ? ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/])) : 0), void();
}

// private Uno.Collections.List<Fuse.Node> get_ZOrder() :1837
void ParentControl__get_ZOrder_fn(ParentControl* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->ZOrder();
}

// internal generated void add_ZOrderChanged(Uno.EventHandler value) :1950
void ParentControl__add_ZOrderChanged_fn(ParentControl* __this, uDelegate* value)
{
    __this->add_ZOrderChanged(value);
}

// internal generated void remove_ZOrderChanged(Uno.EventHandler value) :1950
void ParentControl__remove_ZOrderChanged_fn(ParentControl* __this, uDelegate* value)
{
    __this->remove_ZOrderChanged(value);
}

// private int ZOrderComparator(Fuse.Node a, Fuse.Node b) :1924
void ParentControl__ZOrderComparator_fn(ParentControl* __this, ::g::Fuse::Node* a, ::g::Fuse::Node* b, int* __retval)
{
    *__retval = __this->ZOrderComparator(a, b);
}

uSStrong< ::g::Fuse::PropertyHandle*> ParentControl::_implicitEachHandle_;
uSStrong< ::g::Fuse::StyleProperty1*> ParentControl::AppearanceProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> ParentControl::LayoutProperty_;

// public generated ParentControl() [instance] :1770
void ParentControl::ctor_3()
{
    ctor_2();
}

// public void AddStyleChild(Fuse.Node child) [instance] :1827
void ParentControl::AddStyleChild(::g::Fuse::Node* child)
{
    uPtr(child)->AddedByStyle(true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/]), child);
}

// public void BeginRemoveChild(Fuse.Node child) [instance] :1772
void ParentControl::BeginRemoveChild(::g::Fuse::Node* child)
{
    bool ret8;

    if (!IsRooted())
    {
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/]), child, &ret8);
        return;
    }

    ::g::Fuse::Controls::BeginRemoveArgsImpl* args = ::g::Fuse::Controls::BeginRemoveArgsImpl::New2(child, this);
    uPtr(child)->OnBeginRemove(args);

    if (args->HasSubscribers())
    {
        uPtr(child)->_pendingRemove = args;
        InvalidateLayout(2);
        return;
    }

    EndRemoveChild(child);
}

// public void BringToFront(Fuse.Node item) [instance] :1890
void ParentControl::BringToFront(::g::Fuse::Node* item)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret9;

    if (!HasChildren())
        return;

    int mx = uPtr(item)->ZOffset;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(ZOrder()), &ret9), ret9); enum1.MoveNext(::TYPES[109/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
    {
        ::g::Fuse::Node* c = enum1.Current(::TYPES[109/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);

        if (uPtr(c)->ZLayer == uPtr(item)->ZLayer)
            mx = ::g::Uno::Math::Max8(mx, uPtr(c)->ZOffset);
    }

    item->ZOffset = (mx + 1);
    item->ZOffsetFixed = true;
    _elementBatchValid = false;
    SoftInvalidateZOrder(false);
}

// public generated void add_ChildAdded(Uno.EventHandler<Fuse.Node> value) [instance] :2201
void ParentControl::add_ChildAdded(uDelegate* value)
{
    ChildAdded1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ChildAdded1, value), ::TYPES[112/*Uno.EventHandler<Fuse.Node>*/]);
}

// public generated void remove_ChildAdded(Uno.EventHandler<Fuse.Node> value) [instance] :2201
void ParentControl::remove_ChildAdded(uDelegate* value)
{
    ChildAdded1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ChildAdded1, value), ::TYPES[112/*Uno.EventHandler<Fuse.Node>*/]);
}

// public generated void add_ChildRemoved(Uno.EventHandler<Fuse.Node> value) [instance] :2202
void ParentControl::add_ChildRemoved(uDelegate* value)
{
    ChildRemoved1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ChildRemoved1, value), ::TYPES[112/*Uno.EventHandler<Fuse.Node>*/]);
}

// public generated void remove_ChildRemoved(Uno.EventHandler<Fuse.Node> value) [instance] :2202
void ParentControl::remove_ChildRemoved(uDelegate* value)
{
    ChildRemoved1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ChildRemoved1, value), ::TYPES[112/*Uno.EventHandler<Fuse.Node>*/]);
}

// public Uno.Collections.IList<Fuse.Node> get_Children() [instance] :1818
uObject* ParentControl::Children()
{
    if (_children == NULL)
        _children = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[114/*Uno.Collections.ObservableList<Fuse.Node>*/], uDelegate::New(::TYPES[115/*Uno.Action<Fuse.Node>*/], (void*)ParentControl__ListChildAdded_fn, this), uDelegate::New(::TYPES[115/*Uno.Action<Fuse.Node>*/], (void*)ParentControl__ListChildRemoved_fn, this)));

    return _children;
}

// private void EmitZOrderChanged() [instance] :1964
void ParentControl::EmitZOrderChanged()
{
    if (::g::Uno::Delegate::op_Inequality(ZOrderChanged1, NULL))
        uPtr(ZOrderChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// internal void EndRemoveChild(Fuse.Node child) [instance] :1792
void ParentControl::EndRemoveChild(::g::Fuse::Node* child)
{
    bool ret14;
    ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/]), child, &ret14);
}

// private void EnsureSortedZOrder() [instance] :1935
void ParentControl::EnsureSortedZOrder()
{
    if (_sortedZOrder && _nodeZOrders)
        return;

    if (!_nodeZOrders)
    {
        ::g::Fuse::Layouts::Layout::AssignZOrder(Children());
        _nodeZOrders = true;
    }

    uPtr(ZOrder())->Sort(uDelegate::New(::TYPES[110/*Uno.Comparison<Fuse.Node>*/], (void*)ParentControl__ZOrderComparator_fn, this));
    _sortedZOrder = true;
}

// internal Fuse.Node GetZOrderChild(int index) [instance] :1979
::g::Fuse::Node* ParentControl::GetZOrderChild(int index)
{
    ::g::Fuse::Node* ret23;
    EnsureSortedZOrder();
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(ZOrder()), uCRef<int>(index), &ret23), ret23);
}

// public bool get_HasChildren() [instance] :1813
bool ParentControl::HasChildren()
{
    return (_children != NULL) && (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_children), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/])) > 0);
}

// private void InvalidateZOrder() [instance] :1970
void ParentControl::InvalidateZOrder()
{
    if (!_nodeZOrders)
        return;

    _nodeZOrders = false;
    SoftInvalidateZOrder(true);
}

// public Fuse.Layouts.Layout get_Layout() [instance] :2184
::g::Fuse::Layouts::Layout* ParentControl::Layout()
{
    ::g::Fuse::Layouts::Layout* ind4 = _layout;
    return (ind4 != NULL) ? ind4 : (::g::Fuse::Layouts::Layout*)::g::Fuse::Layouts::Layouts::Default();
}

// public void set_Layout(Fuse.Layouts.Layout value) [instance] :2185
void ParentControl::Layout(::g::Fuse::Layouts::Layout* value)
{
    bool ret31;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(ParentControl::LayoutProperty()), this, value, &ret31);
}

// private void ListChildAdded(Fuse.Node item) [instance] :1858
void ParentControl::ListChildAdded(::g::Fuse::Node* item)
{
    ::g::Uno::Collections::List__Insert_fn(uPtr(ZOrder()), uCRef<int>(0), item);
    InvalidateZOrder();
    uPtr(item)->OnAdded(this);
    _elementBatchValid = false;
    OnChildAdded(item);

    if (::g::Uno::Delegate::op_Inequality(ChildAdded1, NULL))
        uPtr(ChildAdded1)->Invoke(2, this, item);
}

// private void ListChildRemoved(Fuse.Node child) [instance] :1871
void ParentControl::ListChildRemoved(::g::Fuse::Node* child)
{
    bool ret24;
    ::g::Uno::Collections::List__Remove_fn(uPtr(ZOrder()), child, &ret24);
    uPtr(child)->OnRemoved(this);
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(child, ::TYPES[15/*Fuse.Elements.Element*/]);

    if ((elm != NULL) && (uPtr(elm)->ElementBatchEntry() != NULL))
    {
        uPtr(uPtr(elm)->ElementBatchEntry())->OnRemoved();
        elm->ElementBatchEntry(NULL);
    }

    _elementBatchValid = false;
    OnChildRemoved(child);

    if (::g::Uno::Delegate::op_Inequality(ChildRemoved1, NULL))
        uPtr(ChildRemoved1)->Invoke(2, this, child);
}

// protected void OnChildAdded(Fuse.Node elm) [instance] :2251
void ParentControl::OnChildAdded(::g::Fuse::Node* elm)
{
    InvalidateLayout(2);
}

// protected void OnChildRemoved(Fuse.Node elm) [instance] :2256
void ParentControl::OnChildRemoved(::g::Fuse::Node* elm)
{
    InvalidateLayout(2);
}

// private void RemoveStyleChildren() [instance] :1985
void ParentControl::RemoveStyleChildren()
{
    ::g::Fuse::Node* ret25;
    bool ret26;

    for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/])) - 1; i >= 0; --i)
    {
        ::g::Fuse::Node* n = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[93/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret25), ret25);

        if (uPtr(n)->AddedByStyle())
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/]), n, &ret26);
    }
}

// public void SendToBack(Fuse.Node item) [instance] :1907
void ParentControl::SendToBack(::g::Fuse::Node* item)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret27;

    if (!HasChildren())
        return;

    int mn = uPtr(item)->ZOffset;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(ZOrder()), &ret27), ret27); enum2.MoveNext(::TYPES[109/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
    {
        ::g::Fuse::Node* c = enum2.Current(::TYPES[109/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);

        if (uPtr(c)->ZLayer == uPtr(item)->ZLayer)
            mn = ::g::Uno::Math::Min8(mn, uPtr(c)->ZOffset);
    }

    item->ZOffset = (mn - 1);
    item->ZOffsetFixed = true;
    _elementBatchValid = false;
    SoftInvalidateZOrder(false);
}

// private bool ShouldBatch() [instance] :1998
bool ParentControl::ShouldBatch()
{
    ::g::Fuse::Node* ret29;

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/])) < 10)
        return false;

    int batchable = 0;

    for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Children()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[18/*Fuse.Node*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Node* node = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[113/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret29), ret29);

        if (::g::Fuse::Elements::ElementBatcher::ShouldBatchElement(node))
            batchable++;
    }

    return batchable > (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/])) / 2);
}

// private void SoftInvalidateZOrder([bool force]) [instance] :1952
void ParentControl::SoftInvalidateZOrder(bool force)
{
    if (!_sortedZOrder && !force)
        return;

    _sortedZOrder = false;
    InvalidateVisual();

    if (::g::Uno::Delegate::op_Inequality(ZOrderChanged1, NULL))
        ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[29/*Uno.Action*/], (void*)ParentControl__EmitZOrderChanged_fn, this), -1);
}

// private Uno.Collections.List<Fuse.Node> get_ZOrder() [instance] :1837
::g::Uno::Collections::List* ParentControl::ZOrder()
{
    if (_zOrder == NULL)
        _zOrder = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[111/*Uno.Collections.List<Fuse.Node>*/]));

    return _zOrder;
}

// internal generated void add_ZOrderChanged(Uno.EventHandler value) [instance] :1950
void ParentControl::add_ZOrderChanged(uDelegate* value)
{
    ZOrderChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ZOrderChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// internal generated void remove_ZOrderChanged(Uno.EventHandler value) [instance] :1950
void ParentControl::remove_ZOrderChanged(uDelegate* value)
{
    ZOrderChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ZOrderChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// private int ZOrderComparator(Fuse.Node a, Fuse.Node b) [instance] :1924
int ParentControl::ZOrderComparator(::g::Fuse::Node* a, ::g::Fuse::Node* b)
{
    if (uPtr(a)->ZLayer != uPtr(b)->ZLayer)
        return uPtr(a)->ZLayer - uPtr(b)->ZLayer;

    return uPtr(a)->ZOffset - uPtr(b)->ZOffset;
}

// private static Fuse.Node GetAppearance(Fuse.Controls.ParentControl c) [static] :2110
::g::Fuse::Node* ParentControl::GetAppearance(ParentControl* c)
{
    ParentControl_typeof()->Init();
    return uPtr(c)->_appearance;
}

// private static Fuse.Layouts.Layout GetLayout(Fuse.Controls.ParentControl p) [static] :2199
::g::Fuse::Layouts::Layout* ParentControl::GetLayout(ParentControl* p)
{
    ParentControl_typeof()->Init();
    return uPtr(p)->_layout;
}

// private static void OnAppearanceChanged(Fuse.Controls.ParentControl c) [static] :2114
void ParentControl::OnAppearanceChanged(ParentControl* c)
{
    ParentControl_typeof()->Init();
}

// private static void OnLayoutChanged(Fuse.Controls.ParentControl p) [static] :2188
void ParentControl::OnLayoutChanged(ParentControl* p)
{
    ParentControl_typeof()->Init();
    uPtr(p)->InvalidateLayout(2);
}

// private static void SetAppearance(Fuse.Controls.ParentControl c, Fuse.Node a) [static] :2095
void ParentControl::SetAppearance(ParentControl* c, ::g::Fuse::Node* a)
{
    ParentControl_typeof()->Init();
    bool ret28;
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[8/*"Use `Layer=...*/], c, ::STRINGS[9/*"/usr/local/...*/], 2097, ::STRINGS[10/*"SetAppearance"*/]);

    if (uPtr(c)->_appearance != NULL)
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(c)->Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/]), a, &ret28);

    c->_appearance = a;

    if (c->_appearance != NULL)
    {
        uPtr(a)->Layer(0);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(c)->Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/]), a);
    }
}

// private static void SetLayout(Fuse.Controls.ParentControl p, Fuse.Layouts.Layout value) [static] :2190
void ParentControl::SetLayout(ParentControl* p, ::g::Fuse::Layouts::Layout* value)
{
    ParentControl_typeof()->Init();

    if (uPtr(p)->IsLocalRooted() && (uPtr(p)->_layout != NULL))
        uPtr(uPtr(p)->_layout)->RemoveContainer(p);

    p->_layout = value;

    if (p->IsLocalRooted() && (p->_layout != NULL))
        uPtr(p->_layout)->SetContainer(p);
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(2481)
// -------------------------------------------------------------------------

// public sealed class Path :2481
// {
::g::Fuse::Controls::ParentControl_type* Path_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 111;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Path);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("Fuse.Controls.Path", options);
    type->SetBase(::g::Fuse::Controls::Shape_typeof());
    type->fp_ctor_ = (void*)Path__New2_fn;
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
    ::TYPES[77] = ::g::Uno::Int_typeof();
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
    type->SetFields(106,
        ::g::Fuse::Controls::FillRule_typeof(), offsetof(::g::Fuse::Controls::Path, _fillRule), 0,
        ::g::Fuse::Controls::FitMode_typeof(), offsetof(::g::Fuse::Controls::Path, _fitMode), 0,
        ::g::Fuse::Drawing::PathGeometry_typeof(), offsetof(::g::Fuse::Controls::Path, _geometry), 0,
        ::g::Fuse::Controls::PathScaleMode_typeof(), offsetof(::g::Fuse::Controls::Path, _scaleMode), 0,
        ::g::Fuse::Internal::SizingContainer_typeof(), offsetof(::g::Fuse::Controls::Path, sizing), 0);
    return type;
}

// public generated Path() :2481
void Path__ctor_5_fn(Path* __this)
{
    __this->ctor_5();
}

// public string get_Data() :2562
void Path__get_Data_fn(Path* __this, uString** __retval)
{
    *__retval = __this->Data();
}

// public void set_Data(string value) :2563
void Path__set_Data_fn(Path* __this, uString* value)
{
    __this->Data(value);
}

// public Fuse.Controls.FillRule get_FillRule() :2570
void Path__get_FillRule_fn(Path* __this, int* __retval)
{
    *__retval = __this->FillRule();
}

// public void set_FillRule(Fuse.Controls.FillRule value) :2571
void Path__set_FillRule_fn(Path* __this, int* value)
{
    __this->FillRule(*value);
}

// public Fuse.Controls.FitMode get_FitMode() :2523
void Path__get_FitMode_fn(Path* __this, int* __retval)
{
    *__retval = __this->FitMode();
}

// public void set_FitMode(Fuse.Controls.FitMode value) :2524
void Path__set_FitMode_fn(Path* __this, int* value)
{
    __this->FitMode(*value);
}

// public Fuse.Drawing.PathGeometry get_Geometry() :2551
void Path__get_Geometry_fn(Path* __this, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = __this->Geometry();
}

// public void set_Geometry(Fuse.Drawing.PathGeometry value) :2552
void Path__set_Geometry_fn(Path* __this, ::g::Fuse::Drawing::PathGeometry* value)
{
    __this->Geometry(value);
}

// public generated Path New() :2481
void Path__New2_fn(Path** __retval)
{
    *__retval = Path::New2();
}

// public Fuse.Controls.PathScaleMode get_ScaleMode() :2537
void Path__get_ScaleMode_fn(Path* __this, int* __retval)
{
    *__retval = __this->ScaleMode();
}

// public void set_ScaleMode(Fuse.Controls.PathScaleMode value) :2538
void Path__set_ScaleMode_fn(Path* __this, int* value)
{
    __this->ScaleMode(*value);
}

// internal Fuse.Internal.SizingContainer get_Sizing() :2484
void Path__get_Sizing_fn(Path* __this, ::g::Fuse::Internal::SizingContainer** __retval)
{
    *__retval = __this->Sizing();
}

// public generated Path() [instance] :2481
void Path::ctor_5()
{
    sizing = ::g::Fuse::Internal::SizingContainer::New1();
    _fitMode = 2;
    _scaleMode = 1;
    _geometry = ::g::Fuse::Drawing::PathGeometry::New1();
    ctor_4();
}

// public string get_Data() [instance] :2562
uString* Path::Data()
{
    return uPtr(Geometry())->ToString();
}

// public void set_Data(string value) [instance] :2563
void Path::Data(uString* value)
{
    Geometry(::g::Fuse::Drawing::PathGeometry::Parse(value));
}

// public Fuse.Controls.FillRule get_FillRule() [instance] :2570
int Path::FillRule()
{
    return _fillRule;
}

// public void set_FillRule(Fuse.Controls.FillRule value) [instance] :2571
void Path::FillRule(int value)
{
    _fillRule = value;
    OnShapeChanged();
}

// public Fuse.Controls.FitMode get_FitMode() [instance] :2523
int Path::FitMode()
{
    return _fitMode;
}

// public void set_FitMode(Fuse.Controls.FitMode value) [instance] :2524
void Path::FitMode(int value)
{
    if (value != _fitMode)
    {
        _fitMode = value;
        OnShapeChanged();
    }
}

// public Fuse.Drawing.PathGeometry get_Geometry() [instance] :2551
::g::Fuse::Drawing::PathGeometry* Path::Geometry()
{
    return _geometry;
}

// public void set_Geometry(Fuse.Drawing.PathGeometry value) [instance] :2552
void Path::Geometry(::g::Fuse::Drawing::PathGeometry* value)
{
    _geometry = value;
    OnShapeChanged();
}

// public Fuse.Controls.PathScaleMode get_ScaleMode() [instance] :2537
int Path::ScaleMode()
{
    return _scaleMode;
}

// public void set_ScaleMode(Fuse.Controls.PathScaleMode value) [instance] :2538
void Path::ScaleMode(int value)
{
    if (_scaleMode != value)
    {
        _scaleMode = value;
        OnShapeChanged();
    }
}

// internal Fuse.Internal.SizingContainer get_Sizing() [instance] :2484
::g::Fuse::Internal::SizingContainer* Path::Sizing()
{
    return sizing;
}

// public generated Path New() [static] :2481
Path* Path::New2()
{
    Path* obj1 = (Path*)uNew(Path_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(2474)
// -------------------------------------------------------------------------

// public enum PathScaleMode :2474
uEnumType* PathScaleMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.PathScaleMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Pre", 0LL,
        "Post", 1LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(2590)
// -------------------------------------------------------------------------

// public sealed class PlainTextEdit :2590
// {
// static PlainTextEdit() :2590
static void PlainTextEdit__cctor_4_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    PlainTextEdit::NativeEditProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[116/*Fuse.StyleProperty<Fuse.Controls.PlainTextEdit, Uno.UX.Factory>*/], NULL, uDelegate::New(::TYPES[117/*Uno.Action<Fuse.Controls.PlainTextEdit>*/], (void*)PlainTextEdit__OnFactoryChanged_fn), &ret2), ret2);
    PlainTextEdit::NativeTextProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[116/*Fuse.StyleProperty<Fuse.Controls.PlainTextEdit, Uno.UX.Factory>*/], NULL, uDelegate::New(::TYPES[117/*Uno.Action<Fuse.Controls.PlainTextEdit>*/], (void*)PlainTextEdit__OnFactoryChanged_fn), &ret3), ret3);
}

::g::Fuse::Controls::ParentControl_type* PlainTextEdit_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 105;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(PlainTextEdit);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("Fuse.Controls.PlainTextEdit", options);
    type->SetBase(::g::Fuse::Controls::ParentControl_typeof());
    type->fp_ctor_ = (void*)PlainTextEdit__New2_fn;
    type->fp_cctor_ = PlainTextEdit__cctor_4_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PlainTextEdit__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PlainTextEdit__OnUnrooted_fn;
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
    ::TYPES[116] = ::g::Fuse::StyleProperty1_typeof()->MakeType(PlainTextEdit_typeof(), ::g::Uno::UX::Factory_typeof());
    ::TYPES[117] = ::g::Uno::Action1_typeof()->MakeType(PlainTextEdit_typeof());
    ::TYPES[18] = ::g::Fuse::Node_typeof();
    ::TYPES[118] = ::g::Fuse::Input::FocusDelegator_typeof();
    ::TYPES[15] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[16] = ::g::Uno::Bool_typeof();
    ::TYPES[29] = ::g::Uno::Action_typeof();
    ::TYPES[45] = ::g::Fuse::Controls::ParentControl_typeof();
    ::TYPES[119] = ::g::Fuse::Input::Focus_typeof();
    ::TYPES[120] = ::g::Fuse::Input::FocusLostHandler_typeof();
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
    type->SetFields(99,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Controls::PlainTextEdit, _nativeEdit), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Controls::PlainTextEdit, _nativeText), 0,
        ::g::Fuse::Controls::NativeViewHost_typeof(), offsetof(::g::Fuse::Controls::PlainTextEdit, _nativeViewHost), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::PlainTextEdit, _textMode), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(PlainTextEdit_typeof(), ::g::Uno::UX::Factory_typeof()), (uintptr_t)&::g::Fuse::Controls::PlainTextEdit::NativeEditProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(PlainTextEdit_typeof(), ::g::Uno::UX::Factory_typeof()), (uintptr_t)&::g::Fuse::Controls::PlainTextEdit::NativeTextProperty_, uFieldFlagsStatic);
    return type;
}

// public PlainTextEdit() :2619
void PlainTextEdit__ctor_4_fn(PlainTextEdit* __this)
{
    __this->ctor_4();
}

// private Fuse.Node ForwardFocusNode() :2625
void PlainTextEdit__ForwardFocusNode_fn(PlainTextEdit* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->ForwardFocusNode();
}

// public Uno.UX.Factory get_NativeEdit() :2596
void PlainTextEdit__get_NativeEdit_fn(PlainTextEdit* __this, ::g::Uno::UX::Factory** __retval)
{
    *__retval = __this->NativeEdit();
}

// public void set_NativeEdit(Uno.UX.Factory value) :2597
void PlainTextEdit__set_NativeEdit_fn(PlainTextEdit* __this, ::g::Uno::UX::Factory* value)
{
    __this->NativeEdit(value);
}

// public Uno.UX.Factory get_NativeText() :2604
void PlainTextEdit__get_NativeText_fn(PlainTextEdit* __this, ::g::Uno::UX::Factory** __retval)
{
    *__retval = __this->NativeText();
}

// public void set_NativeText(Uno.UX.Factory value) :2605
void PlainTextEdit__set_NativeText_fn(PlainTextEdit* __this, ::g::Uno::UX::Factory* value)
{
    __this->NativeText(value);
}

// public PlainTextEdit New() :2619
void PlainTextEdit__New2_fn(PlainTextEdit** __retval)
{
    *__retval = PlainTextEdit::New2();
}

// private static void OnFactoryChanged(Fuse.Controls.PlainTextEdit pte) :2608
void PlainTextEdit__OnFactoryChanged_fn(PlainTextEdit* pte)
{
    PlainTextEdit::OnFactoryChanged(pte);
}

// private void OnLostFocus(object s, object a) :2642
void PlainTextEdit__OnLostFocus_fn(PlainTextEdit* __this, uObject* s, uObject* a)
{
    __this->OnLostFocus(s, a);
}

// protected override sealed void OnRooted() :2631
void PlainTextEdit__OnRooted_fn(PlainTextEdit* __this)
{
    ::g::Fuse::Controls::ParentControl__OnRooted_fn(__this);
    __this->SetupText();
}

// protected override sealed void OnUnrooted() :2637
void PlainTextEdit__OnUnrooted_fn(PlainTextEdit* __this)
{
    ::g::Fuse::Controls::ParentControl__OnUnrooted_fn(__this);
}

// private void SetupEdit() :2652
void PlainTextEdit__SetupEdit_fn(PlainTextEdit* __this)
{
    __this->SetupEdit();
}

// private void SetupText() :2672
void PlainTextEdit__SetupText_fn(PlainTextEdit* __this)
{
    __this->SetupText();
}

uSStrong< ::g::Fuse::StyleProperty1*> PlainTextEdit::NativeEditProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> PlainTextEdit::NativeTextProperty_;

// public PlainTextEdit() [instance] :2619
void PlainTextEdit::ctor_4()
{
    ctor_3();
    ::g::Fuse::Input::Focus::SetDelegator(this, uDelegate::New(::TYPES[118/*Fuse.Input.FocusDelegator*/], (void*)PlainTextEdit__ForwardFocusNode_fn, this));
    HitTestMode(6);
}

// private Fuse.Node ForwardFocusNode() [instance] :2625
::g::Fuse::Node* PlainTextEdit::ForwardFocusNode()
{
    SetupEdit();
    return _nativeEdit;
}

// public Uno.UX.Factory get_NativeEdit() [instance] :2596
::g::Uno::UX::Factory* PlainTextEdit::NativeEdit()
{
    ::g::Uno::UX::Factory* ret6;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(PlainTextEdit::NativeEditProperty()), this, &ret6), ret6);
}

// public void set_NativeEdit(Uno.UX.Factory value) [instance] :2597
void PlainTextEdit::NativeEdit(::g::Uno::UX::Factory* value)
{
    bool ret7;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(PlainTextEdit::NativeEditProperty()), this, value, &ret7);
}

// public Uno.UX.Factory get_NativeText() [instance] :2604
::g::Uno::UX::Factory* PlainTextEdit::NativeText()
{
    ::g::Uno::UX::Factory* ret8;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(PlainTextEdit::NativeTextProperty()), this, &ret8), ret8);
}

// public void set_NativeText(Uno.UX.Factory value) [instance] :2605
void PlainTextEdit::NativeText(::g::Uno::UX::Factory* value)
{
    bool ret9;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(PlainTextEdit::NativeTextProperty()), this, value, &ret9);
}

// private void OnLostFocus(object s, object a) [instance] :2642
void PlainTextEdit::OnLostFocus(uObject* s, uObject* a)
{
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[29/*Uno.Action*/], (void*)PlainTextEdit__SetupText_fn, this), -1);
}

// private void SetupEdit() [instance] :2652
void PlainTextEdit::SetupEdit()
{
    bool ret4;

    if (_nativeText != NULL)
    {
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/]), _nativeText, &ret4);
        _nativeText = NULL;
    }

    _textMode = false;

    if ((NativeEdit() == NULL) || (_nativeViewHost != NULL))
        return;

    _nativeViewHost = ::g::Fuse::Controls::NativeViewHost::New3();
    _nativeEdit = uAs< ::g::Fuse::Node*>(uPtr(NativeEdit())->New1(), ::TYPES[18/*Fuse.Node*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(_nativeViewHost)->Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/]), _nativeEdit);
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), _nativeEdit, uDelegate::New(::TYPES[120/*Fuse.Input.FocusLostHandler*/], (void*)PlainTextEdit__OnLostFocus_fn, this));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/]), _nativeViewHost);
}

// private void SetupText() [instance] :2672
void PlainTextEdit::SetupText()
{
    bool ret5;

    if ((NativeText() == NULL) && (NativeEdit() != NULL))
    {
        SetupEdit();
        return;
    }

    if (_nativeViewHost != NULL)
    {
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/]), _nativeViewHost, &ret5);
        _nativeViewHost = NULL;
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), _nativeEdit, uDelegate::New(::TYPES[120/*Fuse.Input.FocusLostHandler*/], (void*)PlainTextEdit__OnLostFocus_fn, this));
    }

    _textMode = true;

    if ((NativeText() == NULL) || (_nativeText != NULL))
        return;

    _nativeText = uAs< ::g::Fuse::Node*>(uPtr(NativeText())->New1(), ::TYPES[18/*Fuse.Node*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Node>*/]), _nativeText);
}

// public PlainTextEdit New() [static] :2619
PlainTextEdit* PlainTextEdit::New2()
{
    PlainTextEdit* obj1 = (PlainTextEdit*)uNew(PlainTextEdit_typeof());
    obj1->ctor_4();
    return obj1;
}

// private static void OnFactoryChanged(Fuse.Controls.PlainTextEdit pte) [static] :2608
void PlainTextEdit::OnFactoryChanged(PlainTextEdit* pte)
{
    PlainTextEdit_typeof()->Init();

    if (!uPtr(pte)->IsLocalRooted())
        return;

    if (uPtr(pte)->_textMode)
        uPtr(pte)->SetupText();
    else
        pte->SetupEdit();
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(2709)
// -------------------------------------------------------------------------

// public sealed class PropertyBinding<T> :2709
// {
::g::Fuse::Behavior_type* PropertyBinding_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(PropertyBinding);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Controls.PropertyBinding`1", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))PropertyBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))PropertyBinding__OnUnrooted_fn;
    ::TYPES[121] = ::g::Uno::UX::Property_typeof();
    ::TYPES[122] = ::g::Uno::UX::ValueChangedHandler_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[123] = ::g::Uno::UX::ValueChangedArgs_typeof();
    type->SetPrecalc(
        ::TYPES[121/*Uno.UX.Property`1*/]->MakeType(type->T(0)),
        ::TYPES[122/*Uno.UX.ValueChangedHandler`1*/]->MakeType(type->T(0)),
        ::TYPES[123/*Uno.UX.ValueChangedArgs`1*/]->MakeType(type->T(0)));
    type->SetFields(3,
        ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Controls::PropertyBinding, _Source), 0,
        ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Controls::PropertyBinding, _Target), 0);
    return type;
}

// public PropertyBinding(Uno.UX.Property<T> target, Uno.UX.Property<T> source) :2718
void PropertyBinding__ctor_1_fn(PropertyBinding* __this, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    __this->ctor_1(target, source);
}

// public PropertyBinding New(Uno.UX.Property<T> target, Uno.UX.Property<T> source) :2718
void PropertyBinding__New1_fn(uType* __type, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source, PropertyBinding** __retval)
{
    *__retval = PropertyBinding::New1(__type, target, source);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :2725
void PropertyBinding__OnRooted_fn(PropertyBinding* __this, ::g::Fuse::Node* parentNode)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.UX.Property<T>*/),
        __this->__type->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    uPtr(__this->Source())->add_ValueChanged(uDelegate::New(__types[2], (void*)PropertyBinding__OnSourceValueChanged_fn, __this));
    uPtr(__this->Target())->add_ValueChanged(uDelegate::New(__types[2], (void*)PropertyBinding__OnTargetValueChanged_fn, __this));
    ::g::Uno::UX::Property__SetRestState_fn(uPtr(__this->Target()), (::g::Uno::UX::Property__Get_fn(uPtr(__this->Source()), &ret2), ret2), __this);
}

// private void OnSourceValueChanged(object s, Uno.UX.ValueChangedArgs<T> args) :2742
void PropertyBinding__OnSourceValueChanged_fn(PropertyBinding* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnSourceValueChanged(s, args);
}

// private void OnTargetValueChanged(object s, Uno.UX.ValueChangedArgs<T> args) :2748
void PropertyBinding__OnTargetValueChanged_fn(PropertyBinding* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnTargetValueChanged(s, args);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :2734
void PropertyBinding__OnUnrooted_fn(PropertyBinding* __this, ::g::Fuse::Node* parentNode)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.UX.Property<T>*/),
        __this->__type->T(0),
        __this->__type->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uPtr(__this->Source())->remove_ValueChanged(uDelegate::New(__types[2], (void*)PropertyBinding__OnSourceValueChanged_fn, __this));
    uPtr(__this->Target())->remove_ValueChanged(uDelegate::New(__types[2], (void*)PropertyBinding__OnTargetValueChanged_fn, __this));
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// public generated Uno.UX.Property<T> get_Source() :2715
void PropertyBinding__get_Source_fn(PropertyBinding* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Uno.UX.Property<T> value) :2715
void PropertyBinding__set_Source_fn(PropertyBinding* __this, ::g::Uno::UX::Property* value)
{
    __this->Source(value);
}

// public generated Uno.UX.Property<T> get_Target() :2712
void PropertyBinding__get_Target_fn(PropertyBinding* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :2712
void PropertyBinding__set_Target_fn(PropertyBinding* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// public PropertyBinding(Uno.UX.Property<T> target, Uno.UX.Property<T> source) [instance] :2718
void PropertyBinding::ctor_1(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    ctor_();
    Target(target);
    Source(source);
}

// private void OnSourceValueChanged(object s, Uno.UX.ValueChangedArgs<T> args) [instance] :2742
void PropertyBinding::OnSourceValueChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* args)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(2/*Uno.UX.ValueChangedArgs<T>*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (uPtr(args)->Origin() != this)
        ::g::Uno::UX::Property__SetRestState_fn(uPtr(Target()), (::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret3), ret3), this);
}

// private void OnTargetValueChanged(object s, Uno.UX.ValueChangedArgs<T> args) [instance] :2748
void PropertyBinding::OnTargetValueChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* args)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(2/*Uno.UX.ValueChangedArgs<T>*/),
    };
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (uPtr(args)->Origin() != this)
        ::g::Uno::UX::Property__SetRestState_fn(uPtr(Source()), (::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret4), ret4), this);
}

// public generated Uno.UX.Property<T> get_Source() [instance] :2715
::g::Uno::UX::Property* PropertyBinding::Source()
{
    return _Source;
}

// private generated void set_Source(Uno.UX.Property<T> value) [instance] :2715
void PropertyBinding::Source(::g::Uno::UX::Property* value)
{
    _Source = value;
}

// public generated Uno.UX.Property<T> get_Target() [instance] :2712
::g::Uno::UX::Property* PropertyBinding::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :2712
void PropertyBinding::Target(::g::Uno::UX::Property* value)
{
    _Target = value;
}

// public PropertyBinding New(Uno.UX.Property<T> target, Uno.UX.Property<T> source) [static] :2718
PropertyBinding* PropertyBinding::New1(uType* __type, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    PropertyBinding* obj1 = (PropertyBinding*)uNew(__type);
    obj1->ctor_1(target, source);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(2768)
// -------------------------------------------------------------------------

// public class RangeControl :2768
// {
// static RangeControl() :2768
static void RangeControl__cctor_4_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    ::g::Fuse::StyleProperty1* ret4;
    RangeControl::MinimumProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[124/*Fuse.StyleProperty<Fuse.Controls.RangeControl, double>*/], uCRef(0.0), uDelegate::New(::TYPES[125/*Uno.Action<Fuse.Controls.RangeControl>*/], (void*)RangeControl__OnRangeChanged_fn), &ret2), ret2);
    RangeControl::MaximumProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[124/*Fuse.StyleProperty<Fuse.Controls.RangeControl, double>*/], uCRef(100.0), uDelegate::New(::TYPES[125/*Uno.Action<Fuse.Controls.RangeControl>*/], (void*)RangeControl__OnRangeChanged_fn), &ret3), ret3);
    RangeControl::ValueProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[124/*Fuse.StyleProperty<Fuse.Controls.RangeControl, double>*/], uCRef(0.0), NULL, uDelegate::New(::TYPES[126/*Uno.Action<Fuse.Controls.RangeControl, double>*/], (void*)RangeControl__SetValue1_fn), uDelegate::New(::TYPES[127/*Uno.Func<Fuse.Controls.RangeControl, double>*/], (void*)RangeControl__GetValue_fn), &ret4), ret4);
}

RangeControl_type* RangeControl_typeof()
{
    static uSStrong<RangeControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 104;
    options.InterfaceCount = 11;
    options.ObjectSize = sizeof(RangeControl);
    options.TypeSize = sizeof(RangeControl_type);
    type = (RangeControl_type*)uClassType::New("Fuse.Controls.RangeControl", options);
    type->SetBase(::g::Fuse::Controls::ParentControl_typeof());
    type->fp_cctor_ = RangeControl__cctor_4_fn;
    type->interface9.fp_get_Progress = (void(*)(uObject*, double*))RangeControl__get_Progress_fn;
    type->interface9.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))RangeControl__add_ProgressChanged_fn;
    type->interface9.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))RangeControl__remove_ProgressChanged_fn;
    type->interface10.fp_get_Value = (void(*)(uObject*, uTRef))RangeControl__get_Value_fn;
    type->interface10.fp_set_Value = (void(*)(uObject*, void*))RangeControl__set_Value_fn;
    type->interface10.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))RangeControl__add_ValueChanged_fn;
    type->interface10.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))RangeControl__remove_ValueChanged_fn;
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
    ::TYPES[124] = ::g::Fuse::StyleProperty1_typeof()->MakeType(RangeControl_typeof(), ::g::Uno::Double_typeof());
    ::TYPES[125] = ::g::Uno::Action1_typeof()->MakeType(RangeControl_typeof());
    ::TYPES[126] = ::g::Uno::Action2_typeof()->MakeType(RangeControl_typeof(), ::g::Uno::Double_typeof());
    ::TYPES[127] = ::g::Uno::Func1_typeof()->MakeType(RangeControl_typeof(), ::g::Uno::Double_typeof());
    ::TYPES[11] = ::g::Uno::Delegate_typeof();
    ::TYPES[49] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[13] = uObject_typeof();
    ::TYPES[128] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(RangeControl_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(RangeControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(RangeControl_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(RangeControl_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(RangeControl_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(RangeControl_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(RangeControl_type, interface6),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(RangeControl_type, interface7),
        ::g::Fuse::IObjectContainer_typeof(), offsetof(RangeControl_type, interface8),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(RangeControl_type, interface9),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(RangeControl_type, interface10));
    type->SetFields(99,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Controls::RangeControl, _value), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::Controls::RangeControl, ValueChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(RangeControl_typeof(), ::g::Uno::Double_typeof()), (uintptr_t)&::g::Fuse::Controls::RangeControl::MaximumProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(RangeControl_typeof(), ::g::Uno::Double_typeof()), (uintptr_t)&::g::Fuse::Controls::RangeControl::MinimumProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(RangeControl_typeof(), ::g::Uno::Double_typeof()), (uintptr_t)&::g::Fuse::Controls::RangeControl::ValueProperty_, uFieldFlagsStatic);
    return type;
}

// private double ClampToRange(double v) :2845
void RangeControl__ClampToRange_fn(RangeControl* __this, double* v, double* __retval)
{
    *__retval = __this->ClampToRange(*v);
}

// private static double GetValue(Fuse.Controls.RangeControl rc) :2800
void RangeControl__GetValue_fn(RangeControl* rc, double* __retval)
{
    *__retval = RangeControl::GetValue(rc);
}

// public double get_Maximum() :2786
void RangeControl__get_Maximum_fn(RangeControl* __this, double* __retval)
{
    *__retval = __this->Maximum();
}

// public void set_Maximum(double value) :2787
void RangeControl__set_Maximum_fn(RangeControl* __this, double* value)
{
    __this->Maximum(*value);
}

// public double get_Minimum() :2776
void RangeControl__get_Minimum_fn(RangeControl* __this, double* __retval)
{
    *__retval = __this->Minimum();
}

// public void set_Minimum(double value) :2777
void RangeControl__set_Minimum_fn(RangeControl* __this, double* value)
{
    __this->Minimum(*value);
}

// protected void OnProgressChanged() :2876
void RangeControl__OnProgressChanged_fn(RangeControl* __this)
{
    __this->OnProgressChanged();
}

// private static void OnRangeChanged(Fuse.Controls.RangeControl rc) :2858
void RangeControl__OnRangeChanged_fn(RangeControl* rc)
{
    RangeControl::OnRangeChanged(rc);
}

// private void OnValueChanged(double value, object origin) :2867
void RangeControl__OnValueChanged_fn(RangeControl* __this, double* value, uObject* origin)
{
    __this->OnValueChanged(*value, origin);
}

// public double get_Progress() :2882
void RangeControl__get_Progress_fn(RangeControl* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public void set_Progress(double value) :2883
void RangeControl__set_Progress_fn(RangeControl* __this, double* value)
{
    __this->Progress(*value);
}

// public void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :2854
void RangeControl__add_ProgressChanged_fn(RangeControl* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :2855
void RangeControl__remove_ProgressChanged_fn(RangeControl* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public double get_RelativeValue() :2814
void RangeControl__get_RelativeValue_fn(RangeControl* __this, double* __retval)
{
    *__retval = __this->RelativeValue();
}

// public void set_RelativeValue(double value) :2815
void RangeControl__set_RelativeValue_fn(RangeControl* __this, double* value)
{
    __this->RelativeValue(*value);
}

// private void SetInternal(double value, object origin) :2817
void RangeControl__SetInternal_fn(RangeControl* __this, double* value, uObject* origin)
{
    __this->SetInternal(*value, origin);
}

// public void SetValue(double value, object origin) :2806
void RangeControl__SetValue_fn(RangeControl* __this, double* value, uObject* origin)
{
    __this->SetValue(*value, origin);
}

// private static void SetValue(Fuse.Controls.RangeControl rc, double value) :2801
void RangeControl__SetValue1_fn(RangeControl* rc, double* value)
{
    RangeControl::SetValue1(rc, *value);
}

// public double get_Value() :2797
void RangeControl__get_Value_fn(RangeControl* __this, double* __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(double value) :2798
void RangeControl__set_Value_fn(RangeControl* __this, double* value)
{
    __this->Value(*value);
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<double> value) :2850
void RangeControl__add_ValueChanged_fn(RangeControl* __this, uDelegate* value)
{
    __this->add_ValueChanged(value);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<double> value) :2850
void RangeControl__remove_ValueChanged_fn(RangeControl* __this, uDelegate* value)
{
    __this->remove_ValueChanged(value);
}

// internal double ValueFromRelative(double relative) :2886
void RangeControl__ValueFromRelative_fn(RangeControl* __this, double* relative, double* __retval)
{
    *__retval = __this->ValueFromRelative(*relative);
}

// internal double ValueToRelative(double value) :2891
void RangeControl__ValueToRelative_fn(RangeControl* __this, double* value, double* __retval)
{
    *__retval = __this->ValueToRelative(*value);
}

uSStrong< ::g::Fuse::StyleProperty1*> RangeControl::MaximumProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> RangeControl::MinimumProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> RangeControl::ValueProperty_;

// private double ClampToRange(double v) [instance] :2845
double RangeControl::ClampToRange(double v)
{
    return ::g::Uno::Math::Min(::g::Uno::Math::Max(Minimum(), v), Maximum());
}

// public double get_Maximum() [instance] :2786
double RangeControl::Maximum()
{
    double ret5;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(RangeControl::MaximumProperty()), this, &ret5), ret5);
}

// public void set_Maximum(double value) [instance] :2787
void RangeControl::Maximum(double value)
{
    bool ret6;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(RangeControl::MaximumProperty()), this, uCRef(value), &ret6);
}

// public double get_Minimum() [instance] :2776
double RangeControl::Minimum()
{
    double ret7;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(RangeControl::MinimumProperty()), this, &ret7), ret7);
}

// public void set_Minimum(double value) [instance] :2777
void RangeControl::Minimum(double value)
{
    bool ret8;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(RangeControl::MinimumProperty()), this, uCRef(value), &ret8);
}

// protected void OnProgressChanged() [instance] :2876
void RangeControl::OnProgressChanged()
{
}

// private void OnValueChanged(double value, object origin) [instance] :2867
void RangeControl::OnValueChanged(double value, uObject* origin)
{
    if (::g::Uno::Delegate::op_Inequality(ValueChanged1, NULL))
        uPtr(ValueChanged1)->Invoke(2, this, (::g::Fuse::Scripting::DoubleChangedArgs*)::g::Fuse::Scripting::DoubleChangedArgs::New4(value, origin));

    OnProgressChanged();
}

// public double get_Progress() [instance] :2882
double RangeControl::Progress()
{
    return ValueToRelative(Value());
}

// public void set_Progress(double value) [instance] :2883
void RangeControl::Progress(double value)
{
    Value(ValueFromRelative(value));
}

// public void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :2854
void RangeControl::add_ProgressChanged(uDelegate* value)
{
    add_ValueChanged(value);
}

// public void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :2855
void RangeControl::remove_ProgressChanged(uDelegate* value)
{
    remove_ValueChanged(value);
}

// public double get_RelativeValue() [instance] :2814
double RangeControl::RelativeValue()
{
    return ValueToRelative(Value());
}

// public void set_RelativeValue(double value) [instance] :2815
void RangeControl::RelativeValue(double value)
{
    Value(ValueFromRelative(value));
}

// private void SetInternal(double value, object origin) [instance] :2817
void RangeControl::SetInternal(double value, uObject* origin)
{
    double v = ClampToRange(value);

    if (v != _value)
    {
        _value = v;
        OnValueChanged(v, origin);
    }
}

// public void SetValue(double value, object origin) [instance] :2806
void RangeControl::SetValue(double value, uObject* origin)
{
    ::g::Fuse::StyleProperty1__SetLocalState_fn(uPtr(RangeControl::ValueProperty()), this);
    SetInternal(value, origin);
}

// public double get_Value() [instance] :2797
double RangeControl::Value()
{
    return _value;
}

// public void set_Value(double value) [instance] :2798
void RangeControl::Value(double value)
{
    bool ret9;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(RangeControl::ValueProperty()), this, uCRef(value), &ret9);
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :2850
void RangeControl::add_ValueChanged(uDelegate* value)
{
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ValueChanged1, value), ::TYPES[49/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :2850
void RangeControl::remove_ValueChanged(uDelegate* value)
{
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ValueChanged1, value), ::TYPES[49/*Uno.UX.ValueChangedHandler<double>*/]);
}

// internal double ValueFromRelative(double relative) [instance] :2886
double RangeControl::ValueFromRelative(double relative)
{
    return (relative * (Maximum() - Minimum())) + Minimum();
}

// internal double ValueToRelative(double value) [instance] :2891
double RangeControl::ValueToRelative(double value)
{
    return (value - Minimum()) / (Maximum() - Minimum());
}

// private static double GetValue(Fuse.Controls.RangeControl rc) [static] :2800
double RangeControl::GetValue(RangeControl* rc)
{
    RangeControl_typeof()->Init();
    return uPtr(rc)->_value;
}

// private static void OnRangeChanged(Fuse.Controls.RangeControl rc) [static] :2858
void RangeControl::OnRangeChanged(RangeControl* rc)
{
    RangeControl_typeof()->Init();
    uPtr(rc)->SetValue(uPtr(rc)->Value(), NULL);
    rc->OnProgressChanged();
}

// private static void SetValue(Fuse.Controls.RangeControl rc, double value) [static] :2801
void RangeControl::SetValue1(RangeControl* rc, double value)
{
    RangeControl_typeof()->Init();
    uPtr(rc)->SetInternal(value, NULL);
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(2910)
// -------------------------------------------------------------------------

// public sealed class RangeControl2D :2910
// {
// static RangeControl2D() :2910
static void RangeControl2D__cctor_5_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    ::g::Fuse::StyleProperty1* ret4;
    RangeControl2D::MinimumProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[129/*Fuse.StyleProperty<Fuse.Controls.RangeControl2D, float2>*/], uCRef(::g::Uno::Float2__New1(0.0f)), uDelegate::New(::TYPES[130/*Uno.Action<Fuse.Controls.RangeControl2D>*/], (void*)RangeControl2D__OnRangeChanged_fn), &ret2), ret2);
    RangeControl2D::MaximumProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[129/*Fuse.StyleProperty<Fuse.Controls.RangeControl2D, float2>*/], uCRef(::g::Uno::Float2__New1(100.0f)), uDelegate::New(::TYPES[130/*Uno.Action<Fuse.Controls.RangeControl2D>*/], (void*)RangeControl2D__OnRangeChanged_fn), &ret3), ret3);
    RangeControl2D::ValueProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[129/*Fuse.StyleProperty<Fuse.Controls.RangeControl2D, float2>*/], uCRef(::g::Uno::Float2__New1(0.0f)), NULL, uDelegate::New(::TYPES[131/*Uno.Action<Fuse.Controls.RangeControl2D, float2>*/], (void*)RangeControl2D__SetValue1_fn), uDelegate::New(::TYPES[132/*Uno.Func<Fuse.Controls.RangeControl2D, float2>*/], (void*)RangeControl2D__GetValue_fn), &ret4), ret4);
}

RangeControl2D_type* RangeControl2D_typeof()
{
    static uSStrong<RangeControl2D_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 107;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(RangeControl2D);
    options.TypeSize = sizeof(RangeControl2D_type);
    type = (RangeControl2D_type*)uClassType::New("Fuse.Controls.RangeControl2D", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_cctor_ = RangeControl2D__cctor_5_fn;
    type->interface9.fp_get_Value = (void(*)(uObject*, uTRef))RangeControl2D__get_Value_fn;
    type->interface9.fp_set_Value = (void(*)(uObject*, void*))RangeControl2D__set_Value_fn;
    type->interface9.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))RangeControl2D__add_ValueChanged_fn;
    type->interface9.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))RangeControl2D__remove_ValueChanged_fn;
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
    ::TYPES[129] = ::g::Fuse::StyleProperty1_typeof()->MakeType(RangeControl2D_typeof(), ::g::Uno::Float2_typeof());
    ::TYPES[130] = ::g::Uno::Action1_typeof()->MakeType(RangeControl2D_typeof());
    ::TYPES[131] = ::g::Uno::Action2_typeof()->MakeType(RangeControl2D_typeof(), ::g::Uno::Float2_typeof());
    ::TYPES[132] = ::g::Uno::Func1_typeof()->MakeType(RangeControl2D_typeof(), ::g::Uno::Float2_typeof());
    ::TYPES[11] = ::g::Uno::Delegate_typeof();
    ::TYPES[133] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[13] = uObject_typeof();
    ::TYPES[134] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[84] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[83] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[2] = ::g::Uno::Float2_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(RangeControl2D_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(RangeControl2D_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(RangeControl2D_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(RangeControl2D_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(RangeControl2D_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(RangeControl2D_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(RangeControl2D_type, interface6),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(RangeControl2D_type, interface7),
        ::g::Fuse::IObjectContainer_typeof(), offsetof(RangeControl2D_type, interface8),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(RangeControl2D_type, interface9));
    type->SetFields(100,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::RangeControl2D, _value), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Fuse::Controls::RangeControl2D, ValueChanged1), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Fuse::Controls::RangeControl2D, ValueXChanged1), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Fuse::Controls::RangeControl2D, ValueYChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(RangeControl2D_typeof(), ::g::Uno::Float2_typeof()), (uintptr_t)&::g::Fuse::Controls::RangeControl2D::MaximumProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(RangeControl2D_typeof(), ::g::Uno::Float2_typeof()), (uintptr_t)&::g::Fuse::Controls::RangeControl2D::MinimumProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(RangeControl2D_typeof(), ::g::Uno::Float2_typeof()), (uintptr_t)&::g::Fuse::Controls::RangeControl2D::ValueProperty_, uFieldFlagsStatic);
    return type;
}

// private float2 ClampToRange(float2 v) :2987
void RangeControl2D__ClampToRange_fn(RangeControl2D* __this, ::g::Uno::Float2* v, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ClampToRange(*v);
}

// private static float2 GetValue(Fuse.Controls.RangeControl2D rc) :2942
void RangeControl2D__GetValue_fn(RangeControl2D* rc, ::g::Uno::Float2* __retval)
{
    *__retval = RangeControl2D::GetValue(rc);
}

// public float2 get_Maximum() :2928
void RangeControl2D__get_Maximum_fn(RangeControl2D* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Maximum();
}

// public void set_Maximum(float2 value) :2929
void RangeControl2D__set_Maximum_fn(RangeControl2D* __this, ::g::Uno::Float2* value)
{
    __this->Maximum(*value);
}

// public float2 get_Minimum() :2918
void RangeControl2D__get_Minimum_fn(RangeControl2D* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Minimum();
}

// public void set_Minimum(float2 value) :2919
void RangeControl2D__set_Minimum_fn(RangeControl2D* __this, ::g::Uno::Float2* value)
{
    __this->Minimum(*value);
}

// private static void OnRangeChanged(Fuse.Controls.RangeControl2D rc) :2996
void RangeControl2D__OnRangeChanged_fn(RangeControl2D* rc)
{
    RangeControl2D::OnRangeChanged(rc);
}

// private void OnValueChanged(float2 value, object origin) :3003
void RangeControl2D__OnValueChanged_fn(RangeControl2D* __this, ::g::Uno::Float2* value, uObject* origin)
{
    __this->OnValueChanged(*value, origin);
}

// private void SetInternal(float2 value, object origin) :2959
void RangeControl2D__SetInternal_fn(RangeControl2D* __this, ::g::Uno::Float2* value, uObject* origin)
{
    __this->SetInternal(*value, origin);
}

// public void SetValue(float2 value, object origin) :2948
void RangeControl2D__SetValue_fn(RangeControl2D* __this, ::g::Uno::Float2* value, uObject* origin)
{
    __this->SetValue(*value, origin);
}

// private static void SetValue(Fuse.Controls.RangeControl2D rc, float2 value) :2943
void RangeControl2D__SetValue1_fn(RangeControl2D* rc, ::g::Uno::Float2* value)
{
    RangeControl2D::SetValue1(rc, *value);
}

// public float2 get_Value() :2939
void RangeControl2D__get_Value_fn(RangeControl2D* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(float2 value) :2940
void RangeControl2D__set_Value_fn(RangeControl2D* __this, ::g::Uno::Float2* value)
{
    __this->Value(*value);
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<float2> value) :2992
void RangeControl2D__add_ValueChanged_fn(RangeControl2D* __this, uDelegate* value)
{
    __this->add_ValueChanged(value);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<float2> value) :2992
void RangeControl2D__remove_ValueChanged_fn(RangeControl2D* __this, uDelegate* value)
{
    __this->remove_ValueChanged(value);
}

// public generated void add_ValueXChanged(Uno.UX.ValueChangedHandler<float> value) :2993
void RangeControl2D__add_ValueXChanged_fn(RangeControl2D* __this, uDelegate* value)
{
    __this->add_ValueXChanged(value);
}

// public generated void remove_ValueXChanged(Uno.UX.ValueChangedHandler<float> value) :2993
void RangeControl2D__remove_ValueXChanged_fn(RangeControl2D* __this, uDelegate* value)
{
    __this->remove_ValueXChanged(value);
}

// public generated void add_ValueYChanged(Uno.UX.ValueChangedHandler<float> value) :2994
void RangeControl2D__add_ValueYChanged_fn(RangeControl2D* __this, uDelegate* value)
{
    __this->add_ValueYChanged(value);
}

// public generated void remove_ValueYChanged(Uno.UX.ValueChangedHandler<float> value) :2994
void RangeControl2D__remove_ValueYChanged_fn(RangeControl2D* __this, uDelegate* value)
{
    __this->remove_ValueYChanged(value);
}

uSStrong< ::g::Fuse::StyleProperty1*> RangeControl2D::MaximumProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> RangeControl2D::MinimumProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> RangeControl2D::ValueProperty_;

// private float2 ClampToRange(float2 v) [instance] :2987
::g::Uno::Float2 RangeControl2D::ClampToRange(::g::Uno::Float2 v)
{
    return ::g::Uno::Math::Min3(::g::Uno::Math::Max3(Minimum(), v), Maximum());
}

// public float2 get_Maximum() [instance] :2928
::g::Uno::Float2 RangeControl2D::Maximum()
{
    ::g::Uno::Float2 ret8;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(RangeControl2D::MaximumProperty()), this, &ret8), ret8);
}

// public void set_Maximum(float2 value) [instance] :2929
void RangeControl2D::Maximum(::g::Uno::Float2 value)
{
    bool ret9;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(RangeControl2D::MaximumProperty()), this, uCRef(value), &ret9);
}

// public float2 get_Minimum() [instance] :2918
::g::Uno::Float2 RangeControl2D::Minimum()
{
    ::g::Uno::Float2 ret10;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(RangeControl2D::MinimumProperty()), this, &ret10), ret10);
}

// public void set_Minimum(float2 value) [instance] :2919
void RangeControl2D::Minimum(::g::Uno::Float2 value)
{
    bool ret11;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(RangeControl2D::MinimumProperty()), this, uCRef(value), &ret11);
}

// private void OnValueChanged(float2 value, object origin) [instance] :3003
void RangeControl2D::OnValueChanged(::g::Uno::Float2 value, uObject* origin)
{
    ::g::Uno::UX::ValueChangedArgs* ret5;
    ::g::Uno::UX::ValueChangedArgs* ret6;
    ::g::Uno::UX::ValueChangedArgs* ret7;

    if (::g::Uno::Delegate::op_Inequality(ValueChanged1, NULL))
        uPtr(ValueChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[134/*Uno.UX.ValueChangedArgs<float2>*/], uCRef(value), origin, &ret5), ret5));

    if (::g::Uno::Delegate::op_Inequality(ValueXChanged1, NULL))
        uPtr(ValueXChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[83/*Uno.UX.ValueChangedArgs<float>*/], uCRef(value.X), origin, &ret6), ret6));

    if (::g::Uno::Delegate::op_Inequality(ValueYChanged1, NULL))
        uPtr(ValueYChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[83/*Uno.UX.ValueChangedArgs<float>*/], uCRef(value.Y), origin, &ret7), ret7));
}

// private void SetInternal(float2 value, object origin) [instance] :2959
void RangeControl2D::SetInternal(::g::Uno::Float2 value, uObject* origin)
{
    ::g::Uno::Float2 v = ClampToRange(value);

    if (::g::Uno::Float2::op_Inequality(v, _value))
    {
        _value = v;
        OnValueChanged(v, origin);
    }
}

// public void SetValue(float2 value, object origin) [instance] :2948
void RangeControl2D::SetValue(::g::Uno::Float2 value, uObject* origin)
{
    ::g::Fuse::StyleProperty1__SetLocalState_fn(uPtr(RangeControl2D::ValueProperty()), this);
    SetInternal(value, origin);
}

// public float2 get_Value() [instance] :2939
::g::Uno::Float2 RangeControl2D::Value()
{
    return _value;
}

// public void set_Value(float2 value) [instance] :2940
void RangeControl2D::Value(::g::Uno::Float2 value)
{
    bool ret12;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(RangeControl2D::ValueProperty()), this, uCRef(value), &ret12);
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<float2> value) [instance] :2992
void RangeControl2D::add_ValueChanged(uDelegate* value)
{
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ValueChanged1, value), ::TYPES[133/*Uno.UX.ValueChangedHandler<float2>*/]);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<float2> value) [instance] :2992
void RangeControl2D::remove_ValueChanged(uDelegate* value)
{
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ValueChanged1, value), ::TYPES[133/*Uno.UX.ValueChangedHandler<float2>*/]);
}

// public generated void add_ValueXChanged(Uno.UX.ValueChangedHandler<float> value) [instance] :2993
void RangeControl2D::add_ValueXChanged(uDelegate* value)
{
    ValueXChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ValueXChanged1, value), ::TYPES[84/*Uno.UX.ValueChangedHandler<float>*/]);
}

// public generated void remove_ValueXChanged(Uno.UX.ValueChangedHandler<float> value) [instance] :2993
void RangeControl2D::remove_ValueXChanged(uDelegate* value)
{
    ValueXChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ValueXChanged1, value), ::TYPES[84/*Uno.UX.ValueChangedHandler<float>*/]);
}

// public generated void add_ValueYChanged(Uno.UX.ValueChangedHandler<float> value) [instance] :2994
void RangeControl2D::add_ValueYChanged(uDelegate* value)
{
    ValueYChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ValueYChanged1, value), ::TYPES[84/*Uno.UX.ValueChangedHandler<float>*/]);
}

// public generated void remove_ValueYChanged(Uno.UX.ValueChangedHandler<float> value) [instance] :2994
void RangeControl2D::remove_ValueYChanged(uDelegate* value)
{
    ValueYChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ValueYChanged1, value), ::TYPES[84/*Uno.UX.ValueChangedHandler<float>*/]);
}

// private static float2 GetValue(Fuse.Controls.RangeControl2D rc) [static] :2942
::g::Uno::Float2 RangeControl2D::GetValue(RangeControl2D* rc)
{
    RangeControl2D_typeof()->Init();
    return uPtr(rc)->_value;
}

// private static void OnRangeChanged(Fuse.Controls.RangeControl2D rc) [static] :2996
void RangeControl2D::OnRangeChanged(RangeControl2D* rc)
{
    RangeControl2D_typeof()->Init();
    uPtr(rc)->SetValue(uPtr(rc)->Value(), NULL);
}

// private static void SetValue(Fuse.Controls.RangeControl2D rc, float2 value) [static] :2943
void RangeControl2D::SetValue1(RangeControl2D* rc, ::g::Uno::Float2 value)
{
    RangeControl2D_typeof()->Init();
    uPtr(rc)->SetInternal(value, NULL);
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(3065)
// -------------------------------------------------------------------------

// public sealed class Rectangle :3065
// {
// static Rectangle() :3065
static void Rectangle__cctor_5_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    Rectangle::CornerRadiusProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[135/*Fuse.StyleProperty<Fuse.Controls.Rectangle, float4>*/], uCRef(::g::Uno::Float4__New1(0.0f)), uDelegate::New(::TYPES[136/*Uno.Action<Fuse.Controls.Rectangle>*/], (void*)Rectangle__OnCornerRadiusChanged_fn), &ret2), ret2);
}

::g::Fuse::Controls::ParentControl_type* Rectangle_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 107;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Rectangle);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("Fuse.Controls.Rectangle", options);
    type->SetBase(::g::Fuse::Controls::Shape_typeof());
    type->fp_ctor_ = (void*)Rectangle__New2_fn;
    type->fp_cctor_ = Rectangle__cctor_5_fn;
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
    ::TYPES[135] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Rectangle_typeof(), ::g::Uno::Float4_typeof());
    ::TYPES[136] = ::g::Uno::Action1_typeof()->MakeType(Rectangle_typeof());
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
    type->SetFields(106,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Rectangle_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::Controls::Rectangle::CornerRadiusProperty_, uFieldFlagsStatic);
    return type;
}

// public generated Rectangle() :3065
void Rectangle__ctor_5_fn(Rectangle* __this)
{
    __this->ctor_5();
}

// public float4 get_CornerRadius() :3073
void Rectangle__get_CornerRadius_fn(Rectangle* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->CornerRadius();
}

// public void set_CornerRadius(float4 value) :3074
void Rectangle__set_CornerRadius_fn(Rectangle* __this, ::g::Uno::Float4* value)
{
    __this->CornerRadius(*value);
}

// public generated Rectangle New() :3065
void Rectangle__New2_fn(Rectangle** __retval)
{
    *__retval = Rectangle::New2();
}

// private static void OnCornerRadiusChanged(Fuse.Controls.Rectangle r) :3076
void Rectangle__OnCornerRadiusChanged_fn(Rectangle* r)
{
    Rectangle::OnCornerRadiusChanged(r);
}

uSStrong< ::g::Fuse::StyleProperty1*> Rectangle::CornerRadiusProperty_;

// public generated Rectangle() [instance] :3065
void Rectangle::ctor_5()
{
    ctor_4();
}

// public float4 get_CornerRadius() [instance] :3073
::g::Uno::Float4 Rectangle::CornerRadius()
{
    ::g::Uno::Float4 ret3;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Rectangle::CornerRadiusProperty()), this, &ret3), ret3);
}

// public void set_CornerRadius(float4 value) [instance] :3074
void Rectangle::CornerRadius(::g::Uno::Float4 value)
{
    bool ret4;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Rectangle::CornerRadiusProperty()), this, uCRef(value), &ret4);
}

// public generated Rectangle New() [static] :3065
Rectangle* Rectangle::New2()
{
    Rectangle* obj1 = (Rectangle*)uNew(Rectangle_typeof());
    obj1->ctor_5();
    return obj1;
}

// private static void OnCornerRadiusChanged(Fuse.Controls.Rectangle r) [static] :3076
void Rectangle::OnCornerRadiusChanged(Rectangle* r)
{
    Rectangle_typeof()->Init();
    uPtr(r)->OnShapeChanged();
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(3096)
// -------------------------------------------------------------------------

// public sealed class RegularPolygon :3096
// {
::g::Fuse::Controls::ParentControl_type* RegularPolygon_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 107;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(RegularPolygon);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("Fuse.Controls.RegularPolygon", options);
    type->SetBase(::g::Fuse::Controls::Shape_typeof());
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
    type->SetFields(106,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::RegularPolygon, _sides), 0);
    return type;
}

// public int get_Sides() :3101
void RegularPolygon__get_Sides_fn(RegularPolygon* __this, int* __retval)
{
    *__retval = __this->Sides();
}

// public void set_Sides(int value) :3102
void RegularPolygon__set_Sides_fn(RegularPolygon* __this, int* value)
{
    __this->Sides(*value);
}

// public int get_Sides() [instance] :3101
int RegularPolygon::Sides()
{
    return _sides;
}

// public void set_Sides(int value) [instance] :3102
void RegularPolygon::Sides(int value)
{
    if (value == _sides)
        return;

    _sides = value;
    OnShapeChanged();
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(3127)
// -------------------------------------------------------------------------

// public sealed class ScrollPositionChangedArgs :3127
// {
uType* ScrollPositionChangedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ScrollPositionChangedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.ScrollPositionChangedArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Controls::ScrollPositionChangedArgs, _Origin), 0);
    return type;
}

// public ScrollPositionChangedArgs(object origin) :3131
void ScrollPositionChangedArgs__ctor_1_fn(ScrollPositionChangedArgs* __this, uObject* origin)
{
    __this->ctor_1(origin);
}

// public ScrollPositionChangedArgs New(object origin) :3131
void ScrollPositionChangedArgs__New2_fn(uObject* origin, ScrollPositionChangedArgs** __retval)
{
    *__retval = ScrollPositionChangedArgs::New2(origin);
}

// public generated object get_Origin() :3129
void ScrollPositionChangedArgs__get_Origin_fn(ScrollPositionChangedArgs* __this, uObject** __retval)
{
    *__retval = __this->Origin();
}

// private generated void set_Origin(object value) :3129
void ScrollPositionChangedArgs__set_Origin_fn(ScrollPositionChangedArgs* __this, uObject* value)
{
    __this->Origin(value);
}

// public ScrollPositionChangedArgs(object origin) [instance] :3131
void ScrollPositionChangedArgs::ctor_1(uObject* origin)
{
    ctor_();
    Origin(origin);
}

// public generated object get_Origin() [instance] :3129
uObject* ScrollPositionChangedArgs::Origin()
{
    return _Origin;
}

// private generated void set_Origin(object value) [instance] :3129
void ScrollPositionChangedArgs::Origin(uObject* value)
{
    _Origin = value;
}

// public ScrollPositionChangedArgs New(object origin) [static] :3131
ScrollPositionChangedArgs* ScrollPositionChangedArgs::New2(uObject* origin)
{
    ScrollPositionChangedArgs* obj1 = (ScrollPositionChangedArgs*)uNew(ScrollPositionChangedArgs_typeof());
    obj1->ctor_1(origin);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(3138)
// -------------------------------------------------------------------------

// public delegate void ScrollPositionChangedHandler(object sender, Fuse.Controls.ScrollPositionChangedArgs args) :3138
uDelegateType* ScrollPositionChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Controls.ScrollPositionChangedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Controls::ScrollPositionChangedArgs_typeof());
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(3124)
// -------------------------------------------------------------------------

// public sealed class ScrollPropertyChangedArgs :3124
// {
uType* ScrollPropertyChangedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ScrollPropertyChangedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.ScrollPropertyChangedArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->fp_ctor_ = (void*)ScrollPropertyChangedArgs__New2_fn;
    return type;
}

// public generated ScrollPropertyChangedArgs() :3124
void ScrollPropertyChangedArgs__ctor_1_fn(ScrollPropertyChangedArgs* __this)
{
    __this->ctor_1();
}

// public generated ScrollPropertyChangedArgs New() :3124
void ScrollPropertyChangedArgs__New2_fn(ScrollPropertyChangedArgs** __retval)
{
    *__retval = ScrollPropertyChangedArgs::New2();
}

// public generated ScrollPropertyChangedArgs() [instance] :3124
void ScrollPropertyChangedArgs::ctor_1()
{
    ctor_();
}

// public generated ScrollPropertyChangedArgs New() [static] :3124
ScrollPropertyChangedArgs* ScrollPropertyChangedArgs::New2()
{
    ScrollPropertyChangedArgs* obj1 = (ScrollPropertyChangedArgs*)uNew(ScrollPropertyChangedArgs_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(3137)
// -------------------------------------------------------------------------

// public delegate void ScrollPropertyChangedHandler(object sender, Fuse.Controls.ScrollPropertyChangedArgs args) :3137
uDelegateType* ScrollPropertyChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Controls.ScrollPropertyChangedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Controls::ScrollPropertyChangedArgs_typeof());
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(3150)
// -------------------------------------------------------------------------

// public sealed class ScrollView :3150
// {
// static ScrollView() :3150
static void ScrollView__cctor_3_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret10;
    ScrollView::AllowedScrollDirectionsProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[137/*Fuse.StyleProperty<Fuse.Controls.ScrollView, Fuse.Gestures.ScrollDirections>*/], uCRef<int>(12), uDelegate::New(::TYPES[138/*Uno.Action<Fuse.Controls.ScrollView>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), uDelegate::New(::TYPES[139/*Uno.Action<Fuse.Controls.ScrollView, Fuse.Gestures.ScrollDirections>*/], (void*)ScrollView__SetAllowedScrollDirections_fn), uDelegate::New(::TYPES[140/*Uno.Func<Fuse.Controls.ScrollView, Fuse.Gestures.ScrollDirections>*/], (void*)ScrollView__GetAllowedScrollDirections_fn), &ret10), ret10);
}

::g::Fuse::Controls::ContentControl_type* ScrollView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ContentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 101;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(::g::Fuse::Controls::ContentControl_type);
    type = (::g::Fuse::Controls::ContentControl_type*)uClassType::New("Fuse.Controls.ScrollView", options);
    type->SetBase(::g::Fuse::Controls::ContentControl_typeof());
    type->fp_ctor_ = (void*)ScrollView__New2_fn;
    type->fp_cctor_ = ScrollView__cctor_3_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*))ScrollView__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))ScrollView__GetContentSize_fn;
    type->fp_IsMarginBoxDependent = (void(*)(::g::Fuse::Node*, ::g::Fuse::Node*, int*))ScrollView__IsMarginBoxDependent_fn;
    type->fp_OnApplyStyle = (void(*)(::g::Fuse::Node*, uObject*))ScrollView__OnApplyStyle_fn;
    type->fp_OnBehaviorAdded = (void(*)(::g::Fuse::Node*, ::g::Fuse::Behavior*))ScrollView__OnBehaviorAdded_fn;
    type->fp_OnBehaviorRemoved = (void(*)(::g::Fuse::Node*, ::g::Fuse::Behavior*))ScrollView__OnBehaviorRemoved_fn;
    type->fp_OnContentChanged = (void(*)(::g::Fuse::Controls::ContentControl*, ::g::Fuse::Node*, ::g::Fuse::Node*))ScrollView__OnContentChanged_fn;
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
    ::TYPES[137] = ::g::Fuse::StyleProperty1_typeof()->MakeType(ScrollView_typeof(), ::g::Fuse::Gestures::ScrollDirections_typeof());
    ::TYPES[138] = ::g::Uno::Action1_typeof()->MakeType(ScrollView_typeof());
    ::TYPES[139] = ::g::Uno::Action2_typeof()->MakeType(ScrollView_typeof(), ::g::Fuse::Gestures::ScrollDirections_typeof());
    ::TYPES[140] = ::g::Uno::Func1_typeof()->MakeType(ScrollView_typeof(), ::g::Fuse::Gestures::ScrollDirections_typeof());
    ::TYPES[15] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[77] = ::g::Uno::Int_typeof();
    ::TYPES[16] = ::g::Uno::Bool_typeof();
    ::TYPES[17] = ::g::Uno::Float4_typeof();
    ::TYPES[29] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Uno::Float2_typeof();
    ::TYPES[18] = ::g::Fuse::Node_typeof();
    ::TYPES[141] = ::g::Fuse::Gestures::Scroller_typeof();
    ::TYPES[142] = ::g::Fuse::Transform_typeof();
    ::TYPES[11] = ::g::Uno::Delegate_typeof();
    ::TYPES[143] = ::g::Fuse::Controls::ScrollPositionChangedHandler_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[144] = ::g::Fuse::Controls::ScrollPropertyChangedHandler_typeof();
    ::TYPES[145] = ::g::Fuse::Translation_typeof();
    ::TYPES[146] = ::g::Fuse::Controls::ContentControl_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface6));
    type->SetFields(89,
        ::g::Fuse::Gestures::ScrollDirections_typeof(), offsetof(::g::Fuse::Controls::ScrollView, _allowedScrollDirections), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::ScrollView, _cacheContentMarginSize), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::ScrollView, _keepFocusInView), 0,
        ::g::Fuse::Gestures::Scroller_typeof(), offsetof(::g::Fuse::Controls::ScrollView, _scroller), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::ScrollView, _scrollPosition), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::Fuse::Controls::ScrollView, _scrollTranslation), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::ScrollView, _snapMaxTransform), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::ScrollView, _snapMinTransform), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::ScrollView, _userScroll), 0,
        ::g::Fuse::Controls::ScrollPositionChangedHandler_typeof(), offsetof(::g::Fuse::Controls::ScrollView, ScrollPositionChanged1), 0,
        ::g::Fuse::Controls::ScrollPropertyChangedHandler_typeof(), offsetof(::g::Fuse::Controls::ScrollView, ScrollPropertyChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(ScrollView_typeof(), ::g::Fuse::Gestures::ScrollDirections_typeof()), (uintptr_t)&::g::Fuse::Controls::ScrollView::AllowedScrollDirectionsProperty_, uFieldFlagsStatic);
    return type;
}

// public ScrollView() :3191
void ScrollView__ctor_4_fn(ScrollView* __this)
{
    __this->ctor_4();
}

// public Fuse.Gestures.ScrollDirections get_AllowedScrollDirections() :3239
void ScrollView__get_AllowedScrollDirections_fn(ScrollView* __this, int* __retval)
{
    *__retval = __this->AllowedScrollDirections();
}

// public void set_AllowedScrollDirections(Fuse.Gestures.ScrollDirections value) :3240
void ScrollView__set_AllowedScrollDirections_fn(ScrollView* __this, int* value)
{
    __this->AllowedScrollDirections(*value);
}

// private void ApplyContentStyle() :3421
void ScrollView__ApplyContentStyle_fn(ScrollView* __this)
{
    __this->ApplyContentStyle();
}

// protected override sealed void ArrangePaddingBox(Fuse.LayoutParams lp) :3372
void ScrollView__ArrangePaddingBox_fn(ScrollView* __this, ::g::Fuse::LayoutParams* lp)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Fuse::LayoutParams lp_ = *lp;

    if (__this->Content1() == NULL)
        __this->_cacheContentMarginSize = ::g::Uno::Float2__New1(0.0f);
    else
    {
        ::g::Fuse::LayoutParams nlp = lp_.DeriveClone();
        nlp.RemoveSize(::g::Uno::Float2__op_Addition2((ind1 = __this->Padding(), ::g::Uno::Float2__New2(ind1.X, ind1.Y)), (ind2 = __this->Padding(), ::g::Uno::Float2__New2(ind2.Z, ind2.W))));
        __this->_cacheContentMarginSize = uPtr(__this->Content1())->ArrangeMarginBox((ind3 = __this->Padding(), ::g::Uno::Float2__New2(ind3.X, ind3.Y)), nlp);
    }

    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[29/*Uno.Action*/], (void*)ScrollView__UpdateScrollPosition_fn, __this), -1);
}

// private float2 ConstrainExtent(float2 t) :3363
void ScrollView__ConstrainExtent_fn(ScrollView* __this, ::g::Uno::Float2* t, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ConstrainExtent(*t);
}

// public new Fuse.Elements.Element get_Content() :3155
void ScrollView__get_Content1_fn(ScrollView* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Content1();
}

// public new void set_Content(Fuse.Elements.Element value) :3156
void ScrollView__set_Content1_fn(ScrollView* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Content1(value);
}

// private static Fuse.Gestures.ScrollDirections GetAllowedScrollDirections(Fuse.Controls.ScrollView sv) :3242
void ScrollView__GetAllowedScrollDirections_fn(ScrollView* sv, int* __retval)
{
    *__retval = ScrollView::GetAllowedScrollDirections(sv);
}

// protected override sealed float2 GetContentSize(Fuse.LayoutParams lp) :3398
void ScrollView__GetContentSize_fn(ScrollView* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Fuse::LayoutParams lp_ = *lp;

    if (__this->Content1() != NULL)
    {
        ::g::Fuse::LayoutParams nlp = lp_.DeriveClone();
        nlp.RemoveSize(::g::Uno::Float2__op_Addition2((ind4 = __this->Padding(), ::g::Uno::Float2__New2(ind4.X, ind4.Y)), (ind5 = __this->Padding(), ::g::Uno::Float2__New2(ind5.Z, ind5.W))));
        ::g::Uno::Float2 r = uPtr(__this->Content1())->GetMarginSize(nlp);
        return *__retval = r, void();
    }

    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public float2 GetNodeScrollPosition(Fuse.Node n) :3281
void ScrollView__GetNodeScrollPosition_fn(ScrollView* __this, ::g::Fuse::Node* n, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetNodeScrollPosition(n);
}

// public void Goto(float2 position) :3297
void ScrollView__Goto_fn(ScrollView* __this, ::g::Uno::Float2* position)
{
    __this->Goto(*position);
}

// protected override sealed Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Node child) :3477
void ScrollView__IsMarginBoxDependent_fn(ScrollView* __this, ::g::Fuse::Node* child, int* __retval)
{
    return *__retval = 3, void();
}

// public bool get_KeepFocusInView() :3220
void ScrollView__get_KeepFocusInView_fn(ScrollView* __this, bool* __retval)
{
    *__retval = __this->KeepFocusInView();
}

// public void set_KeepFocusInView(bool value) :3221
void ScrollView__set_KeepFocusInView_fn(ScrollView* __this, bool* value)
{
    __this->KeepFocusInView(*value);
}

// public float2 get_MaxScroll() :3335
void ScrollView__get_MaxScroll_fn(ScrollView* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MaxScroll();
}

// public float2 get_MinScroll() :3347
void ScrollView__get_MinScroll_fn(ScrollView* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MinScroll();
}

// public ScrollView New() :3191
void ScrollView__New2_fn(ScrollView** __retval)
{
    *__retval = ScrollView::New2();
}

// protected override sealed void OnApplyStyle(object target) :3410
void ScrollView__OnApplyStyle_fn(ScrollView* __this, uObject* target)
{
    ::g::Fuse::Node__OnApplyStyle_fn(__this, target);
    ::g::Fuse::Elements::Element* elm = __this->Content1();

    if (target != elm)
        return;

    __this->ApplyContentStyle();
}

// internal override sealed void OnBehaviorAdded(Fuse.Behavior b) :3203
void ScrollView__OnBehaviorAdded_fn(ScrollView* __this, ::g::Fuse::Behavior* b)
{
    ::g::Fuse::Node__OnBehaviorAdded_fn(__this, b);

    if (uIs(b, ::TYPES[141/*Fuse.Gestures.Scroller*/]))
        __this->_scroller = uAs< ::g::Fuse::Gestures::Scroller*>(b, ::TYPES[141/*Fuse.Gestures.Scroller*/]);
}

// internal override sealed void OnBehaviorRemoved(Fuse.Behavior b) :3210
void ScrollView__OnBehaviorRemoved_fn(ScrollView* __this, ::g::Fuse::Behavior* b)
{
    ::g::Fuse::Node__OnBehaviorRemoved_fn(__this, b);

    if (b == __this->_scroller)
        __this->_scroller = NULL;
}

// protected override sealed void OnContentChanged(Fuse.Node oldContent, Fuse.Node newContent) :3184
void ScrollView__OnContentChanged_fn(ScrollView* __this, ::g::Fuse::Node* oldContent, ::g::Fuse::Node* newContent)
{
    bool ret28;
    ::g::Fuse::Controls::ContentControl__OnContentChanged_fn(__this, oldContent, newContent);

    if (oldContent != NULL)
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(oldContent)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[142/*Fuse.Transform*/])), __this->_scrollTranslation, &ret28);

    if (newContent != NULL)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(newContent)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[142/*Fuse.Transform*/])), __this->_scrollTranslation);
}

// private void OnScrollPositionChanged(object origin) :3325
void ScrollView__OnScrollPositionChanged_fn(ScrollView* __this, uObject* origin)
{
    __this->OnScrollPositionChanged(origin);
}

// private void OnScrollPropertyChanged(object origin) :3249
void ScrollView__OnScrollPropertyChanged_fn(ScrollView* __this, uObject* origin)
{
    __this->OnScrollPropertyChanged(origin);
}

// public float2 get_ScrollPosition() :3262
void ScrollView__get_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ScrollPosition();
}

// public void set_ScrollPosition(float2 value) :3263
void ScrollView__set_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* value)
{
    __this->ScrollPosition(*value);
}

// public generated void add_ScrollPositionChanged(Fuse.Controls.ScrollPositionChangedHandler value) :3323
void ScrollView__add_ScrollPositionChanged_fn(ScrollView* __this, uDelegate* value)
{
    __this->add_ScrollPositionChanged(value);
}

// public generated void remove_ScrollPositionChanged(Fuse.Controls.ScrollPositionChangedHandler value) :3323
void ScrollView__remove_ScrollPositionChanged_fn(ScrollView* __this, uDelegate* value)
{
    __this->remove_ScrollPositionChanged(value);
}

// public generated void add_ScrollPropertyChanged(Fuse.Controls.ScrollPropertyChangedHandler value) :3279
void ScrollView__add_ScrollPropertyChanged_fn(ScrollView* __this, uDelegate* value)
{
    __this->add_ScrollPropertyChanged(value);
}

// public generated void remove_ScrollPropertyChanged(Fuse.Controls.ScrollPropertyChangedHandler value) :3279
void ScrollView__remove_ScrollPropertyChanged_fn(ScrollView* __this, uDelegate* value)
{
    __this->remove_ScrollPropertyChanged(value);
}

// private static void SetAllowedScrollDirections(Fuse.Controls.ScrollView sv, Fuse.Gestures.ScrollDirections value) :3243
void ScrollView__SetAllowedScrollDirections_fn(ScrollView* sv, int* value)
{
    ScrollView::SetAllowedScrollDirections(sv, *value);
}

// public void SetScrollPosition(float2 position, object origin) :3266
void ScrollView__SetScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* position, uObject* origin)
{
    __this->SetScrollPosition(*position, origin);
}

// public bool get_SnapMaxTransform() :3180
void ScrollView__get_SnapMaxTransform_fn(ScrollView* __this, bool* __retval)
{
    *__retval = __this->SnapMaxTransform();
}

// public void set_SnapMaxTransform(bool value) :3181
void ScrollView__set_SnapMaxTransform_fn(ScrollView* __this, bool* value)
{
    __this->SnapMaxTransform(*value);
}

// public bool get_SnapMinTransform() :3173
void ScrollView__get_SnapMinTransform_fn(ScrollView* __this, bool* __retval)
{
    *__retval = __this->SnapMinTransform();
}

// public void set_SnapMinTransform(bool value) :3174
void ScrollView__set_SnapMinTransform_fn(ScrollView* __this, bool* value)
{
    __this->SnapMinTransform(*value);
}

// private void UpdateScrollPosition() :3386
void ScrollView__UpdateScrollPosition_fn(ScrollView* __this)
{
    __this->UpdateScrollPosition();
}

// public bool get_UserScroll() :3162
void ScrollView__get_UserScroll_fn(ScrollView* __this, bool* __retval)
{
    *__retval = __this->UserScroll();
}

// public void set_UserScroll(bool value) :3163
void ScrollView__set_UserScroll_fn(ScrollView* __this, bool* value)
{
    __this->UserScroll(*value);
}

uSStrong< ::g::Fuse::StyleProperty1*> ScrollView::AllowedScrollDirectionsProperty_;

// public ScrollView() [instance] :3191
void ScrollView::ctor_4()
{
    _userScroll = true;
    _snapMinTransform = true;
    _snapMaxTransform = true;
    _keepFocusInView = true;
    _allowedScrollDirections = 12;
    _scrollTranslation = ::g::Fuse::Translation::New1();
    ctor_3();
    ClipToBounds(true);
    HitTestMode(6);
}

// public Fuse.Gestures.ScrollDirections get_AllowedScrollDirections() [instance] :3239
int ScrollView::AllowedScrollDirections()
{
    return _allowedScrollDirections;
}

// public void set_AllowedScrollDirections(Fuse.Gestures.ScrollDirections value) [instance] :3240
void ScrollView::AllowedScrollDirections(int value)
{
    bool ret29;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(ScrollView::AllowedScrollDirectionsProperty()), this, uCRef<int>(value), &ret29);
}

// private void ApplyContentStyle() [instance] :3421
void ScrollView::ApplyContentStyle()
{
    bool ret11;
    bool ret12;
    bool ret13;
    bool ret14;
    bool ret15;
    bool ret16;
    bool ret17;
    bool ret18;
    bool ret19;
    bool ret20;
    bool ret21;
    bool ret22;
    bool ret23;
    bool ret24;
    bool ret25;
    bool ret26;
    bool ret27;

    if (Content1() == NULL)
        return;

    int align = 0;
    bool setWidth = false;
    bool setHeight = false;

    if (AllowedScrollDirections() == 15)
    {
        align = 5;
        setWidth = true;
        setHeight = true;
    }
    else if (AllowedScrollDirections() == 3)
    {
        align = 1;
        setWidth = true;
    }
    else if (AllowedScrollDirections() == 12)
    {
        align = 4;
        setHeight = true;
    }

    ::g::Fuse::StyleProperty1__ResetStyle_fn(uPtr(::g::Fuse::Elements::Element::MaxWidthProperty()), Content1(), &ret11);
    ::g::Fuse::StyleProperty1__ResetStyle_fn(uPtr(::g::Fuse::Elements::Element::MaxHeightProperty()), Content1(), &ret12);
    ::g::Fuse::StyleProperty1__ResetStyle_fn(uPtr(::g::Fuse::Elements::Element::MinWidthProperty()), Content1(), &ret13);
    ::g::Fuse::StyleProperty1__ResetStyle_fn(uPtr(::g::Fuse::Elements::Element::MinHeightProperty()), Content1(), &ret14);
    ::g::Fuse::StyleProperty1__ResetStyle_fn(uPtr(::g::Fuse::Elements::Element::AlignmentProperty()), Content1(), &ret15);

    if (!(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::MaxWidthProperty()), Content1(), &ret16), ret16) && setWidth)
        ::g::Fuse::StylePropertyWithUnit__SetStyle1_fn(uPtr(::g::Fuse::Elements::Element::MaxWidthProperty()), Content1(), uCRef(FLT_INF), uCRef<int>(1), &ret17);

    if (!(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::MaxHeightProperty()), Content1(), &ret18), ret18) && setHeight)
        ::g::Fuse::StylePropertyWithUnit__SetStyle1_fn(uPtr(::g::Fuse::Elements::Element::MaxHeightProperty()), Content1(), uCRef(FLT_INF), uCRef<int>(1), &ret19);

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::AlignmentProperty()), Content1(), &ret20), ret20))
        return;

    bool setAlign = false;

    if ((setWidth && !(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), Content1(), &ret21), ret21)) && !(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::MinWidthProperty()), Content1(), &ret22), ret22))
    {
        ::g::Fuse::StylePropertyWithUnit__SetStyle1_fn(uPtr(::g::Fuse::Elements::Element::MinWidthProperty()), Content1(), uCRef(100.0f), uCRef<int>(1), &ret23);
        setAlign = true;
    }

    if ((setHeight && !(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::HeightProperty()), Content1(), &ret24), ret24)) && !(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::MinHeightProperty()), Content1(), &ret25), ret25))
    {
        ::g::Fuse::StylePropertyWithUnit__SetStyle1_fn(uPtr(::g::Fuse::Elements::Element::MinHeightProperty()), Content1(), uCRef(100.0f), uCRef<int>(1), &ret26);
        setAlign = true;
    }

    if (setAlign)
        ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Elements::Element::AlignmentProperty()), Content1(), uCRef<int>(align), &ret27);
}

// private float2 ConstrainExtent(float2 t) [instance] :3363
::g::Uno::Float2 ScrollView::ConstrainExtent(::g::Uno::Float2 t)
{
    if (AllowedScrollDirections() == 3)
        t.Y = 0.0f;
    else if (AllowedScrollDirections() == 12)
        t.X = 0.0f;

    return t;
}

// public new Fuse.Elements.Element get_Content() [instance] :3155
::g::Fuse::Elements::Element* ScrollView::Content1()
{
    return uAs< ::g::Fuse::Elements::Element*>(Content(), ::TYPES[15/*Fuse.Elements.Element*/]);
}

// public new void set_Content(Fuse.Elements.Element value) [instance] :3156
void ScrollView::Content1(::g::Fuse::Elements::Element* value)
{
    Content(value);
}

// public float2 GetNodeScrollPosition(Fuse.Node n) [instance] :3281
::g::Uno::Float2 ScrollView::GetNodeScrollPosition(::g::Fuse::Node* n)
{
    if ((n == NULL) || (Content1() == NULL))
        return ::g::Uno::Float2__New1(0.0f);

    ::g::Uno::Float4x4 trans = uPtr(n)->GetTransformTo(Content1());
    ::g::Uno::Float4 local = ::g::Uno::Vector::Transform4(::g::Uno::Float3__New1(0.0f), trans);
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(n, ::TYPES[15/*Fuse.Elements.Element*/]);

    if (elm == NULL)
        return ::g::Uno::Float2__New2(local.X, local.Y);

    return ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(local.X, local.Y), ::g::Uno::Float2__op_Division1(uPtr(elm)->ActualSize(), 2.0f)), ::g::Uno::Float2__op_Division1(ActualSize(), 2.0f));
}

// public void Goto(float2 position) [instance] :3297
void ScrollView::Goto(::g::Uno::Float2 position)
{
    if (_scroller == NULL)
        ScrollPosition(::g::Uno::Math::Min3(MaxScroll(), ::g::Uno::Math::Max3(MinScroll(), ScrollPosition())));
    else
        uPtr(_scroller)->Goto(position);
}

// public bool get_KeepFocusInView() [instance] :3220
bool ScrollView::KeepFocusInView()
{
    return _keepFocusInView;
}

// public void set_KeepFocusInView(bool value) [instance] :3221
void ScrollView::KeepFocusInView(bool value)
{
    if (_keepFocusInView != value)
    {
        _keepFocusInView = value;
        OnScrollPropertyChanged(this);
    }
}

// public float2 get_MaxScroll() [instance] :3335
::g::Uno::Float2 ScrollView::MaxScroll()
{
    ::g::Uno::Float4 ind6;
    ::g::Uno::Float4 ind7;

    if (Content1() == NULL)
        return ::g::Uno::Float2__New1(0.0f);

    return ConstrainExtent(::g::Uno::Math::Max3(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(_cacheContentMarginSize, uPtr(Content1())->ActualPosition()), (ind6 = Padding(), ::g::Uno::Float2__New2(ind6.X, ind6.Y))), (ind7 = Padding(), ::g::Uno::Float2__New2(ind7.Z, ind7.W))), ActualSize()), ::g::Uno::Float2__New1(0.0f)));
}

// public float2 get_MinScroll() [instance] :3347
::g::Uno::Float2 ScrollView::MinScroll()
{
    ::g::Uno::Float4 ind8;

    if (Content1() == NULL)
        return ::g::Uno::Float2__New1(0.0f);

    return ConstrainExtent(::g::Uno::Math::Min3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Subtraction2(uPtr(Content1())->ActualPosition(), (ind8 = Padding(), ::g::Uno::Float2__New2(ind8.X, ind8.Y)))));
}

// private void OnScrollPositionChanged(object origin) [instance] :3325
void ScrollView::OnScrollPositionChanged(uObject* origin)
{
    uDelegate* handler = ScrollPositionChanged1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, this, (::g::Fuse::Controls::ScrollPositionChangedArgs*)::g::Fuse::Controls::ScrollPositionChangedArgs::New2(origin));
}

// private void OnScrollPropertyChanged(object origin) [instance] :3249
void ScrollView::OnScrollPropertyChanged(uObject* origin)
{
    ApplyContentStyle();

    if (::g::Uno::Delegate::op_Inequality(ScrollPropertyChanged1, NULL))
        uPtr(ScrollPropertyChanged1)->Invoke(2, this, (::g::Fuse::Controls::ScrollPropertyChangedArgs*)::g::Fuse::Controls::ScrollPropertyChangedArgs::New2());
}

// public float2 get_ScrollPosition() [instance] :3262
::g::Uno::Float2 ScrollView::ScrollPosition()
{
    return _scrollPosition;
}

// public void set_ScrollPosition(float2 value) [instance] :3263
void ScrollView::ScrollPosition(::g::Uno::Float2 value)
{
    SetScrollPosition(value, this);
}

// public generated void add_ScrollPositionChanged(Fuse.Controls.ScrollPositionChangedHandler value) [instance] :3323
void ScrollView::add_ScrollPositionChanged(uDelegate* value)
{
    ScrollPositionChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ScrollPositionChanged1, value), ::TYPES[143/*Fuse.Controls.ScrollPositionChangedHandler*/]);
}

// public generated void remove_ScrollPositionChanged(Fuse.Controls.ScrollPositionChangedHandler value) [instance] :3323
void ScrollView::remove_ScrollPositionChanged(uDelegate* value)
{
    ScrollPositionChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ScrollPositionChanged1, value), ::TYPES[143/*Fuse.Controls.ScrollPositionChangedHandler*/]);
}

// public generated void add_ScrollPropertyChanged(Fuse.Controls.ScrollPropertyChangedHandler value) [instance] :3279
void ScrollView::add_ScrollPropertyChanged(uDelegate* value)
{
    ScrollPropertyChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ScrollPropertyChanged1, value), ::TYPES[144/*Fuse.Controls.ScrollPropertyChangedHandler*/]);
}

// public generated void remove_ScrollPropertyChanged(Fuse.Controls.ScrollPropertyChangedHandler value) [instance] :3279
void ScrollView::remove_ScrollPropertyChanged(uDelegate* value)
{
    ScrollPropertyChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ScrollPropertyChanged1, value), ::TYPES[144/*Fuse.Controls.ScrollPropertyChangedHandler*/]);
}

// public void SetScrollPosition(float2 position, object origin) [instance] :3266
void ScrollView::SetScrollPosition(::g::Uno::Float2 position, uObject* origin)
{
    _scrollPosition = ConstrainExtent(position);

    if (!SnapMinTransform())
        position = ::g::Uno::Math::Max3(MinScroll(), position);

    if (!SnapMaxTransform())
        position = ::g::Uno::Math::Min3(MaxScroll(), position);

    uPtr(_scrollTranslation)->Vector(::g::Uno::Float3__New4(::g::Uno::Float2__op_UnaryNegation(position), 0.0f));
    OnScrollPositionChanged(origin);
}

// public bool get_SnapMaxTransform() [instance] :3180
bool ScrollView::SnapMaxTransform()
{
    return _snapMaxTransform;
}

// public void set_SnapMaxTransform(bool value) [instance] :3181
void ScrollView::SnapMaxTransform(bool value)
{
    _snapMaxTransform = value;
}

// public bool get_SnapMinTransform() [instance] :3173
bool ScrollView::SnapMinTransform()
{
    return _snapMinTransform;
}

// public void set_SnapMinTransform(bool value) [instance] :3174
void ScrollView::SnapMinTransform(bool value)
{
    _snapMinTransform = value;
}

// private void UpdateScrollPosition() [instance] :3386
void ScrollView::UpdateScrollPosition()
{
    if (_scroller != NULL)
        uPtr(_scroller)->CheckLimits();
    else
        ScrollPosition(::g::Uno::Math::Min3(MaxScroll(), ::g::Uno::Math::Max3(MinScroll(), ScrollPosition())));

    OnScrollPositionChanged(this);
}

// public bool get_UserScroll() [instance] :3162
bool ScrollView::UserScroll()
{
    return _userScroll;
}

// public void set_UserScroll(bool value) [instance] :3163
void ScrollView::UserScroll(bool value)
{
    _userScroll = value;
    OnScrollPropertyChanged(this);
}

// private static Fuse.Gestures.ScrollDirections GetAllowedScrollDirections(Fuse.Controls.ScrollView sv) [static] :3242
int ScrollView::GetAllowedScrollDirections(ScrollView* sv)
{
    ScrollView_typeof()->Init();
    return uPtr(sv)->_allowedScrollDirections;
}

// public ScrollView New() [static] :3191
ScrollView* ScrollView::New2()
{
    ScrollView* obj9 = (ScrollView*)uNew(ScrollView_typeof());
    obj9->ctor_4();
    return obj9;
}

// private static void SetAllowedScrollDirections(Fuse.Controls.ScrollView sv, Fuse.Gestures.ScrollDirections value) [static] :3243
void ScrollView::SetAllowedScrollDirections(ScrollView* sv, int value)
{
    ScrollView_typeof()->Init();
    uPtr(sv)->_allowedScrollDirections = value;
    sv->OnScrollPropertyChanged(sv);
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(3498)
// -------------------------------------------------------------------------

// public abstract class Shape :3498
// {
// static Shape() :3498
static void Shape__cctor_4_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    ::g::Fuse::StyleProperty1* ret4;
    ::g::Fuse::StyleProperty1* ret5;
    Shape::ColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[147/*Fuse.StyleProperty<Fuse.Controls.Shape, float4>*/], uCRef(::g::Uno::Float4__New1(0.0f)), uDelegate::New(::TYPES[148/*Uno.Action<Fuse.Controls.Shape>*/], (void*)Shape__OnColorChanged1_fn), &ret2), ret2);
    Shape::FillProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[149/*Fuse.StyleProperty<Fuse.Controls.Shape, Fuse.Drawing.Brush>*/], NULL, NULL, uDelegate::New(::TYPES[150/*Uno.Action<Fuse.Controls.Shape, Fuse.Drawing.Brush>*/], (void*)Shape__SetFill_fn), uDelegate::New(::TYPES[151/*Uno.Func<Fuse.Controls.Shape, Fuse.Drawing.Brush>*/], (void*)Shape__GetFill_fn), &ret3), ret3);
    Shape::StrokeProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[152/*Fuse.StyleProperty<Fuse.Controls.Shape, Fuse.Drawing.Stroke>*/], NULL, NULL, uDelegate::New(::TYPES[153/*Uno.Action<Fuse.Controls.Shape, Fuse.Drawing.Stroke>*/], (void*)Shape__SetStroke_fn), uDelegate::New(::TYPES[154/*Uno.Func<Fuse.Controls.Shape, Fuse.Drawing.Stroke>*/], (void*)Shape__GetStroke_fn), &ret4), ret4);
    Shape::SmoothnessProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[155/*Fuse.StyleProperty<Fuse.Controls.Shape, float>*/], uCRef(1.0f), uDelegate::New(::TYPES[148/*Uno.Action<Fuse.Controls.Shape>*/], (void*)Shape__OnSmoothnessChanged_fn), uDelegate::New(::TYPES[156/*Uno.Action<Fuse.Controls.Shape, float>*/], (void*)Shape__SetSmoothness_fn), uDelegate::New(::TYPES[157/*Uno.Func<Fuse.Controls.Shape, float>*/], (void*)Shape__GetSmoothness_fn), &ret5), ret5);
}

::g::Fuse::Controls::ParentControl_type* Shape_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 110;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Shape);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("Fuse.Controls.Shape", options);
    type->SetBase(::g::Fuse::Controls::ParentControl_typeof());
    type->fp_cctor_ = Shape__cctor_4_fn;
    type->fp_CalcRenderBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Rect*))Shape__CalcRenderBounds_fn;
    type->fp_OnResetStyle = (void(*)(::g::Fuse::Node*))Shape__OnResetStyle_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Shape__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Shape__OnUnrooted_fn;
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
    ::TYPES[147] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Shape_typeof(), ::g::Uno::Float4_typeof());
    ::TYPES[148] = ::g::Uno::Action1_typeof()->MakeType(Shape_typeof());
    ::TYPES[149] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[150] = ::g::Uno::Action2_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[151] = ::g::Uno::Func1_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[152] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[153] = ::g::Uno::Action2_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[154] = ::g::Uno::Func1_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[155] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Shape_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[156] = ::g::Uno::Action2_typeof()->MakeType(Shape_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[157] = ::g::Uno::Func1_typeof()->MakeType(Shape_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[158] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[15] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[159] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[160] = ::g::Fuse::Drawing::Stroke_typeof();
    ::TYPES[161] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[162] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[11] = ::g::Uno::Delegate_typeof();
    ::TYPES[96] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[13] = uObject_typeof();
    ::TYPES[97] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[16] = ::g::Uno::Bool_typeof();
    ::TYPES[98] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[23] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[18] = ::g::Fuse::Node_typeof();
    ::TYPES[28] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    ::TYPES[29] = ::g::Uno::Action_typeof();
    ::TYPES[163] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[33] = ::g::Uno::Double_typeof();
    ::TYPES[164] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[165] = ::g::Uno::Float_typeof();
    ::TYPES[166] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[167] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[168] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[169] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[170] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
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
    type->SetFields(99,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()), offsetof(::g::Fuse::Controls::Shape, _fills), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Shape, _smoothness), 0,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof()), offsetof(::g::Fuse::Controls::Shape, _strokes), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()), offsetof(::g::Fuse::Controls::Shape, _styleFills), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof()), offsetof(::g::Fuse::Controls::Shape, _styleStrokes), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::Fuse::Controls::Shape, ColorChanged1), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Controls::Shape, ShapeChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Shape_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::Controls::Shape::ColorProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Brush_typeof()), (uintptr_t)&::g::Fuse::Controls::Shape::FillProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Shape_typeof(), ::g::Uno::Float_typeof()), (uintptr_t)&::g::Fuse::Controls::Shape::SmoothnessProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Stroke_typeof()), (uintptr_t)&::g::Fuse::Controls::Shape::StrokeProperty_, uFieldFlagsStatic);
    return type;
}

// protected generated Shape() :3498
void Shape__ctor_4_fn(Shape* __this)
{
    __this->ctor_4();
}

// public void AddStyleFill(Fuse.Drawing.Brush b) :3569
void Shape__AddStyleFill_fn(Shape* __this, ::g::Fuse::Drawing::Brush* b)
{
    __this->AddStyleFill(b);
}

// protected override sealed Uno.Rect CalcRenderBounds() :3714
void Shape__CalcRenderBounds_fn(Shape* __this, ::g::Uno::Rect* __retval)
{
    ::g::Fuse::Drawing::Stroke* ret6;
    ::g::Uno::Rect r = ::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), __this->ActualSize());

    if (__this->HasStrokes())

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->Strokes()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[160/*Fuse.Drawing.Stroke*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Drawing::Stroke* stroke = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[159/*Uno.Collections.IEnumerator<Fuse.Drawing.Stroke>*/]), &ret6), ret6);
            float b = uPtr(stroke)->Offset() + uPtr(stroke)->Width();

            if (b > 0.0f)
                r = ::g::Uno::Rect__Inflate(r, b);
        }

    r = ::g::Uno::Rect__Inflate(r, __this->Smoothness() - 1.0f);
    return *__retval = r, void();
}

// public float4 get_Color() :3503
void Shape__get_Color_fn(Shape* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :3504
void Shape__set_Color_fn(Shape* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public generated void add_ColorChanged(Uno.UX.ValueChangedHandler<float4> value) :3514
void Shape__add_ColorChanged_fn(Shape* __this, uDelegate* value)
{
    __this->add_ColorChanged(value);
}

// public generated void remove_ColorChanged(Uno.UX.ValueChangedHandler<float4> value) :3514
void Shape__remove_ColorChanged_fn(Shape* __this, uDelegate* value)
{
    __this->remove_ColorChanged(value);
}

// private float get_CurrentDrawCost() :3755
void Shape__get_CurrentDrawCost_fn(Shape* __this, float* __retval)
{
    *__retval = __this->CurrentDrawCost();
}

// public Fuse.Drawing.Brush get_Fill() :3541
void Shape__get_Fill_fn(Shape* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->Fill();
}

// public void set_Fill(Fuse.Drawing.Brush value) :3542
void Shape__set_Fill_fn(Shape* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->Fill(value);
}

// public Uno.Collections.IList<Fuse.Drawing.Brush> get_Fills() :3561
void Shape__get_Fills_fn(Shape* __this, uObject** __retval)
{
    *__retval = __this->Fills();
}

// private static Fuse.Drawing.Brush GetFill(Fuse.Controls.Shape s) :3544
void Shape__GetFill_fn(Shape* s, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = Shape::GetFill(s);
}

// private static float GetSmoothness(Fuse.Controls.Shape s) :3707
void Shape__GetSmoothness_fn(Shape* s, float* __retval)
{
    *__retval = Shape::GetSmoothness(s);
}

// private static Fuse.Drawing.Stroke GetStroke(Fuse.Controls.Shape s) :3620
void Shape__GetStroke_fn(Shape* s, ::g::Fuse::Drawing::Stroke** __retval)
{
    *__retval = Shape::GetStroke(s);
}

// public bool get_HasFills() :3609
void Shape__get_HasFills_fn(Shape* __this, bool* __retval)
{
    *__retval = __this->HasFills();
}

// public bool get_HasStrokes() :3632
void Shape__get_HasStrokes_fn(Shape* __this, bool* __retval)
{
    *__retval = __this->HasStrokes();
}

// private void OnColorChanged(float4 value, object origin) :3524
void Shape__OnColorChanged_fn(Shape* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->OnColorChanged(*value, origin);
}

// private static void OnColorChanged(Fuse.Controls.Shape c) :3519
void Shape__OnColorChanged1_fn(Shape* c)
{
    Shape::OnColorChanged1(c);
}

// private void OnFillAdded(Fuse.Drawing.Brush f) :3577
void Shape__OnFillAdded_fn(Shape* __this, ::g::Fuse::Drawing::Brush* f)
{
    __this->OnFillAdded(f);
}

// private void OnFillRemoved(Fuse.Drawing.Brush f) :3593
void Shape__OnFillRemoved_fn(Shape* __this, ::g::Fuse::Drawing::Brush* f)
{
    __this->OnFillRemoved(f);
}

// protected override sealed void OnResetStyle() :3732
void Shape__OnResetStyle_fn(Shape* __this)
{
    bool ret10;
    ::g::Fuse::Drawing::Brush* ret11;
    bool ret12;
    ::g::Fuse::Drawing::Stroke* ret13;

    if (__this->_styleFills != NULL)
    {
        for (int i = 0; i < uPtr(__this->_styleFills)->Count(); i++)
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(__this->Fills()), ::TYPES[166/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_styleFills), uCRef<int>(i), &ret11), ret11), &ret10);

        __this->_styleFills = NULL;
    }

    if (__this->_styleStrokes != NULL)
    {
        for (int i1 = 0; i1 < uPtr(__this->_styleStrokes)->Count(); i1++)
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(__this->Strokes()), ::TYPES[167/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_styleStrokes), uCRef<int>(i1), &ret13), ret13), &ret12);

        __this->_styleStrokes = NULL;
    }

    ::g::Fuse::Controls::ParentControl__OnResetStyle_fn(__this);
}

// protected override sealed void OnRooted() :3769
void Shape__OnRooted_fn(Shape* __this)
{
    ::g::Fuse::Drawing::Stroke* ret14;
    ::g::Fuse::Drawing::Brush* ret15;
    ::g::Fuse::Controls::ParentControl__OnRooted_fn(__this);

    if (__this->HasStrokes())

        for (int i = 0; i < uPtr(__this->_strokes)->Count(); ++i)
            uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_strokes), uCRef<int>(i), &ret14), ret14))->Pin();

    if (__this->HasFills())

        for (int i1 = 0; i1 < uPtr(__this->_fills)->Count(); ++i1)
            uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_fills), uCRef<int>(i1), &ret15), ret15))->Pin();

    __this->AddDrawCost((double)__this->CurrentDrawCost());
}

// private void OnShadingChanged() :3686
void Shape__OnShadingChanged_fn(Shape* __this)
{
    __this->OnShadingChanged();
}

// protected void OnShapeChanged() :3692
void Shape__OnShapeChanged_fn(Shape* __this)
{
    __this->OnShapeChanged();
}

// private static void OnSmoothnessChanged(Fuse.Controls.Shape s) :3708
void Shape__OnSmoothnessChanged_fn(Shape* s)
{
    Shape::OnSmoothnessChanged(s);
}

// private void OnStrokeAdded(Fuse.Drawing.Stroke s) :3655
void Shape__OnStrokeAdded_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s)
{
    __this->OnStrokeAdded(s);
}

// private void OnStrokeChanged(Fuse.Drawing.Stroke s) :3681
void Shape__OnStrokeChanged_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s)
{
    __this->OnStrokeChanged(s);
}

// private void OnStrokeRemoved(Fuse.Drawing.Stroke s) :3668
void Shape__OnStrokeRemoved_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s)
{
    __this->OnStrokeRemoved(s);
}

// protected override sealed void OnUnrooted() :3786
void Shape__OnUnrooted_fn(Shape* __this)
{
    ::g::Fuse::Drawing::Stroke* ret16;
    ::g::Fuse::Drawing::Brush* ret17;
    ::g::Fuse::Controls::ParentControl__OnUnrooted_fn(__this);

    if (__this->HasStrokes())

        for (int i = 0; i < uPtr(__this->_strokes)->Count(); ++i)
            uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_strokes), uCRef<int>(i), &ret16), ret16))->Unpin();

    if (__this->HasFills())

        for (int i1 = 0; i1 < uPtr(__this->_fills)->Count(); ++i1)
            uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_fills), uCRef<int>(i1), &ret17), ret17))->Unpin();

    __this->RemoveDrawCost((double)__this->CurrentDrawCost());
}

// internal void PrepareDraw(Fuse.DrawContext dc, float2 canvasSize) :3803
void Shape__PrepareDraw_fn(Shape* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
    __this->PrepareDraw(dc, *canvasSize);
}

// private static void SetFill(Fuse.Controls.Shape s, Fuse.Drawing.Brush value) :3550
void Shape__SetFill_fn(Shape* s, ::g::Fuse::Drawing::Brush* value)
{
    Shape::SetFill(s, value);
}

// private static void SetSmoothness(Fuse.Controls.Shape s, float value) :3706
void Shape__SetSmoothness_fn(Shape* s, float* value)
{
    Shape::SetSmoothness(s, *value);
}

// private static void SetStroke(Fuse.Controls.Shape s, Fuse.Drawing.Stroke value) :3626
void Shape__SetStroke_fn(Shape* s, ::g::Fuse::Drawing::Stroke* value)
{
    Shape::SetStroke(s, value);
}

// internal generated void add_ShapeChanged(Uno.Action value) :3691
void Shape__add_ShapeChanged_fn(Shape* __this, uDelegate* value)
{
    __this->add_ShapeChanged(value);
}

// internal generated void remove_ShapeChanged(Uno.Action value) :3691
void Shape__remove_ShapeChanged_fn(Shape* __this, uDelegate* value)
{
    __this->remove_ShapeChanged(value);
}

// public float get_Smoothness() :3703
void Shape__get_Smoothness_fn(Shape* __this, float* __retval)
{
    *__retval = __this->Smoothness();
}

// public void set_Smoothness(float value) :3704
void Shape__set_Smoothness_fn(Shape* __this, float* value)
{
    __this->Smoothness(*value);
}

// public Fuse.Drawing.Stroke get_Stroke() :3617
void Shape__get_Stroke_fn(Shape* __this, ::g::Fuse::Drawing::Stroke** __retval)
{
    *__retval = __this->Stroke();
}

// public void set_Stroke(Fuse.Drawing.Stroke value) :3618
void Shape__set_Stroke_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* value)
{
    __this->Stroke(value);
}

// public Uno.Collections.IList<Fuse.Drawing.Stroke> get_Strokes() :3640
void Shape__get_Strokes_fn(Shape* __this, uObject** __retval)
{
    *__retval = __this->Strokes();
}

uSStrong< ::g::Fuse::StyleProperty1*> Shape::ColorProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Shape::FillProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Shape::SmoothnessProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Shape::StrokeProperty_;

// protected generated Shape() [instance] :3498
void Shape::ctor_4()
{
    _smoothness = 1.0f;
    ctor_3();
}

// public void AddStyleFill(Fuse.Drawing.Brush b) [instance] :3569
void Shape::AddStyleFill(::g::Fuse::Drawing::Brush* b)
{
    if (_styleFills == NULL)
        _styleFills = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[158/*Uno.Collections.List<Fuse.Drawing.Brush>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(_styleFills), b);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Fills()), ::TYPES[166/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), b);
}

// public float4 get_Color() [instance] :3503
::g::Uno::Float4 Shape::Color()
{
    ::g::Uno::Float4 ret20;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Shape::ColorProperty()), this, &ret20), ret20);
}

// public void set_Color(float4 value) [instance] :3504
void Shape::Color(::g::Uno::Float4 value)
{
    bool ret21;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Shape::ColorProperty()), this, uCRef(value), &ret21);
}

// public generated void add_ColorChanged(Uno.UX.ValueChangedHandler<float4> value) [instance] :3514
void Shape::add_ColorChanged(uDelegate* value)
{
    ColorChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ColorChanged1, value), ::TYPES[96/*Uno.UX.ValueChangedHandler<float4>*/]);
}

// public generated void remove_ColorChanged(Uno.UX.ValueChangedHandler<float4> value) [instance] :3514
void Shape::remove_ColorChanged(uDelegate* value)
{
    ColorChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ColorChanged1, value), ::TYPES[96/*Uno.UX.ValueChangedHandler<float4>*/]);
}

// private float get_CurrentDrawCost() [instance] :3755
float Shape::CurrentDrawCost()
{
    float cost = 0.0f;

    if (HasFills())
        cost = cost + (float)::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Fills()), ::TYPES[166/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]));

    if (HasStrokes())
        cost = cost + (float)::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Strokes()), ::TYPES[167/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]));

    return cost;
}

// public Fuse.Drawing.Brush get_Fill() [instance] :3541
::g::Fuse::Drawing::Brush* Shape::Fill()
{
    return Shape::GetFill(this);
}

// public void set_Fill(Fuse.Drawing.Brush value) [instance] :3542
void Shape::Fill(::g::Fuse::Drawing::Brush* value)
{
    Shape::SetFill(this, value);
}

// public Uno.Collections.IList<Fuse.Drawing.Brush> get_Fills() [instance] :3561
uObject* Shape::Fills()
{
    if (_fills == NULL)
        _fills = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[161/*Uno.Collections.ObservableList<Fuse.Drawing.Brush>*/], uDelegate::New(::TYPES[168/*Uno.Action<Fuse.Drawing.Brush>*/], (void*)Shape__OnFillAdded_fn, this), uDelegate::New(::TYPES[168/*Uno.Action<Fuse.Drawing.Brush>*/], (void*)Shape__OnFillRemoved_fn, this)));

    return (uObject*)_fills;
}

// public bool get_HasFills() [instance] :3609
bool Shape::HasFills()
{
    return (_fills != NULL) && (uPtr(_fills)->Count() > 0);
}

// public bool get_HasStrokes() [instance] :3632
bool Shape::HasStrokes()
{
    return (_strokes != NULL) && (uPtr(_strokes)->Count() > 0);
}

// private void OnColorChanged(float4 value, object origin) [instance] :3524
void Shape::OnColorChanged(::g::Uno::Float4 value, uObject* origin)
{
    ::g::Uno::UX::ValueChangedArgs* ret9;

    if (::g::Uno::Delegate::op_Inequality(ColorChanged1, NULL))
        uPtr(ColorChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[97/*Uno.UX.ValueChangedArgs<float4>*/], uCRef(Color()), origin, &ret9), ret9));

    if (!uIs(Fill(), ::TYPES[98/*Fuse.Drawing.SolidColor*/]))
        Fill(::g::Fuse::Drawing::SolidColor::New2(value));
    else
        uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(Fill(), ::TYPES[98/*Fuse.Drawing.SolidColor*/]))->Color(value);
}

// private void OnFillAdded(Fuse.Drawing.Brush f) [instance] :3577
void Shape::OnFillAdded(::g::Fuse::Drawing::Brush* f)
{
    if (IsLocalRooted() && (f != NULL))
    {
        uPtr(f)->Pin();
        AddDrawCost(1.0);
    }

    if (uIs(f, ::TYPES[28/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(f, ::TYPES[28/*Fuse.Drawing.DynamicBrush*/]))->add_ShadingChanged(uDelegate::New(::TYPES[29/*Uno.Action*/], (void*)Shape__OnShadingChanged_fn, this));

    OnShadingChanged();
}

// private void OnFillRemoved(Fuse.Drawing.Brush f) [instance] :3593
void Shape::OnFillRemoved(::g::Fuse::Drawing::Brush* f)
{
    if (IsLocalRooted() && (f != NULL))
    {
        uPtr(f)->Unpin();
        RemoveDrawCost(1.0);
    }

    if (uIs(f, ::TYPES[28/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(f, ::TYPES[28/*Fuse.Drawing.DynamicBrush*/]))->remove_ShadingChanged(uDelegate::New(::TYPES[29/*Uno.Action*/], (void*)Shape__OnShadingChanged_fn, this));

    OnShadingChanged();
}

// private void OnShadingChanged() [instance] :3686
void Shape::OnShadingChanged()
{
    OnShapeChanged();
}

// protected void OnShapeChanged() [instance] :3692
void Shape::OnShapeChanged()
{
    if (::g::Uno::Delegate::op_Inequality(ShapeChanged1, NULL))
        uPtr(ShapeChanged1)->InvokeVoid();
}

// private void OnStrokeAdded(Fuse.Drawing.Stroke s) [instance] :3655
void Shape::OnStrokeAdded(::g::Fuse::Drawing::Stroke* s)
{
    if (IsLocalRooted() && (s != NULL))
    {
        uPtr(s)->Pin();
        AddDrawCost(1.0);
    }

    uPtr(s)->add_ShadingChanged(uDelegate::New(::TYPES[29/*Uno.Action*/], (void*)Shape__OnShadingChanged_fn, this));
    s->add_StrokeChanged(uDelegate::New(::TYPES[164/*Uno.Action<Fuse.Drawing.Stroke>*/], (void*)Shape__OnStrokeChanged_fn, this));
    OnStrokeChanged(s);
}

// private void OnStrokeChanged(Fuse.Drawing.Stroke s) [instance] :3681
void Shape::OnStrokeChanged(::g::Fuse::Drawing::Stroke* s)
{
    OnShapeChanged();
}

// private void OnStrokeRemoved(Fuse.Drawing.Stroke s) [instance] :3668
void Shape::OnStrokeRemoved(::g::Fuse::Drawing::Stroke* s)
{
    if (IsLocalRooted() && (s != NULL))
    {
        uPtr(s)->Unpin();
        RemoveDrawCost(1.0);
    }

    uPtr(s)->remove_ShadingChanged(uDelegate::New(::TYPES[29/*Uno.Action*/], (void*)Shape__OnShadingChanged_fn, this));
    s->remove_StrokeChanged(uDelegate::New(::TYPES[164/*Uno.Action<Fuse.Drawing.Stroke>*/], (void*)Shape__OnStrokeChanged_fn, this));
    OnStrokeChanged(s);
}

// internal void PrepareDraw(Fuse.DrawContext dc, float2 canvasSize) [instance] :3803
void Shape::PrepareDraw(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize)
{
    ::g::Fuse::Drawing::Brush* ret18;
    ::g::Fuse::Drawing::Stroke* ret19;

    if (HasFills())

        for (int i = 0; i < uPtr(_fills)->Count(); ++i)
            uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_fills), uCRef<int>(i), &ret18), ret18))->Prepare(dc, canvasSize);

    if (HasStrokes())

        for (int i1 = 0; i1 < uPtr(_strokes)->Count(); ++i1)
            uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_strokes), uCRef<int>(i1), &ret19), ret19))->Prepare(dc, canvasSize);
}

// internal generated void add_ShapeChanged(Uno.Action value) [instance] :3691
void Shape::add_ShapeChanged(uDelegate* value)
{
    ShapeChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ShapeChanged1, value), ::TYPES[29/*Uno.Action*/]);
}

// internal generated void remove_ShapeChanged(Uno.Action value) [instance] :3691
void Shape::remove_ShapeChanged(uDelegate* value)
{
    ShapeChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ShapeChanged1, value), ::TYPES[29/*Uno.Action*/]);
}

// public float get_Smoothness() [instance] :3703
float Shape::Smoothness()
{
    return _smoothness;
}

// public void set_Smoothness(float value) [instance] :3704
void Shape::Smoothness(float value)
{
    bool ret22;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Shape::SmoothnessProperty()), this, uCRef(value), &ret22);
}

// public Fuse.Drawing.Stroke get_Stroke() [instance] :3617
::g::Fuse::Drawing::Stroke* Shape::Stroke()
{
    return Shape::GetStroke(this);
}

// public void set_Stroke(Fuse.Drawing.Stroke value) [instance] :3618
void Shape::Stroke(::g::Fuse::Drawing::Stroke* value)
{
    Shape::SetStroke(this, value);
}

// public Uno.Collections.IList<Fuse.Drawing.Stroke> get_Strokes() [instance] :3640
uObject* Shape::Strokes()
{
    if (_strokes == NULL)
        _strokes = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[162/*Uno.Collections.ObservableList<Fuse.Drawing.Stroke>*/], uDelegate::New(::TYPES[164/*Uno.Action<Fuse.Drawing.Stroke>*/], (void*)Shape__OnStrokeAdded_fn, this), uDelegate::New(::TYPES[164/*Uno.Action<Fuse.Drawing.Stroke>*/], (void*)Shape__OnStrokeRemoved_fn, this)));

    return (uObject*)_strokes;
}

// private static Fuse.Drawing.Brush GetFill(Fuse.Controls.Shape s) [static] :3544
::g::Fuse::Drawing::Brush* Shape::GetFill(Shape* s)
{
    Shape_typeof()->Init();
    ::g::Fuse::Drawing::Brush* ret7;

    if ((uPtr(s)->_fills == NULL) || (uPtr(uPtr(s)->_fills)->Count() == 0))
        return NULL;
    else
        return (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(uPtr(s)->_fills), uCRef<int>(0), &ret7), ret7);
}

// private static float GetSmoothness(Fuse.Controls.Shape s) [static] :3707
float Shape::GetSmoothness(Shape* s)
{
    Shape_typeof()->Init();
    return uPtr(s)->_smoothness;
}

// private static Fuse.Drawing.Stroke GetStroke(Fuse.Controls.Shape s) [static] :3620
::g::Fuse::Drawing::Stroke* Shape::GetStroke(Shape* s)
{
    Shape_typeof()->Init();
    ::g::Fuse::Drawing::Stroke* ret8;

    if ((uPtr(s)->_strokes == NULL) || (uPtr(uPtr(s)->_strokes)->Count() == 0))
        return NULL;

    return (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(uPtr(s)->_strokes), uCRef<int>(0), &ret8), ret8);
}

// private static void OnColorChanged(Fuse.Controls.Shape c) [static] :3519
void Shape::OnColorChanged1(Shape* c)
{
    Shape_typeof()->Init();
    uPtr(c)->OnColorChanged(uPtr(c)->Color(), c);
}

// private static void OnSmoothnessChanged(Fuse.Controls.Shape s) [static] :3708
void Shape::OnSmoothnessChanged(Shape* s)
{
    Shape_typeof()->Init();
    uPtr(s)->InvalidateVisual();
    s->InvalidateRenderBounds();
}

// private static void SetFill(Fuse.Controls.Shape s, Fuse.Drawing.Brush value) [static] :3550
void Shape::SetFill(Shape* s, ::g::Fuse::Drawing::Brush* value)
{
    Shape_typeof()->Init();
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(uPtr(s)->Fills()), ::TYPES[166/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(s->Fills()), ::TYPES[166/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), value);
}

// private static void SetSmoothness(Fuse.Controls.Shape s, float value) [static] :3706
void Shape::SetSmoothness(Shape* s, float value)
{
    Shape_typeof()->Init();
    uPtr(s)->_smoothness = value;
}

// private static void SetStroke(Fuse.Controls.Shape s, Fuse.Drawing.Stroke value) [static] :3626
void Shape::SetStroke(Shape* s, ::g::Fuse::Drawing::Stroke* value)
{
    Shape_typeof()->Init();
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(uPtr(s)->Strokes()), ::TYPES[167/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(s->Strokes()), ::TYPES[167/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), value);
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(2897)
// -------------------------------------------------------------------------

// public sealed class Slider :2897
// {
::g::Fuse::Controls::RangeControl_type* Slider_typeof()
{
    static uSStrong< ::g::Fuse::Controls::RangeControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 101;
    options.InterfaceCount = 11;
    options.ObjectSize = sizeof(Slider);
    options.TypeSize = sizeof(::g::Fuse::Controls::RangeControl_type);
    type = (::g::Fuse::Controls::RangeControl_type*)uClassType::New("Fuse.Controls.Slider", options);
    type->SetBase(::g::Fuse::Controls::RangeControl_typeof());
    type->interface9.fp_get_Progress = (void(*)(uObject*, double*))::g::Fuse::Controls::RangeControl__get_Progress_fn;
    type->interface9.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::RangeControl__add_ProgressChanged_fn;
    type->interface9.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::RangeControl__remove_ProgressChanged_fn;
    type->interface10.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Controls::RangeControl__get_Value_fn;
    type->interface10.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Controls::RangeControl__set_Value_fn;
    type->interface10.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::RangeControl__add_ValueChanged_fn;
    type->interface10.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::RangeControl__remove_ValueChanged_fn;
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
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::RangeControl_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::RangeControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::RangeControl_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::RangeControl_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::RangeControl_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::RangeControl_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::RangeControl_type, interface6),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::RangeControl_type, interface7),
        ::g::Fuse::IObjectContainer_typeof(), offsetof(::g::Fuse::Controls::RangeControl_type, interface8),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(::g::Fuse::Controls::RangeControl_type, interface9),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::Controls::RangeControl_type, interface10));
    type->SetFields(101);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(3832)
// -------------------------------------------------------------------------

// public class StackPanel :3832
// {
// static StackPanel() :3832
static void StackPanel__cctor_5_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    ::g::Fuse::StyleProperty1* ret4;
    ::g::Fuse::StyleProperty1* ret5;
    StackPanel::OrientationProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[171/*Fuse.StyleProperty<Fuse.Controls.StackPanel, Fuse.Layouts.Orientation>*/], uCRef<int>(1), uDelegate::New(::TYPES[172/*Uno.Action<Fuse.Controls.StackPanel>*/], (void*)StackPanel__OnOrientationChanged_fn), &ret2), ret2);
    StackPanel::ItemSpacingProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[173/*Fuse.StyleProperty<Fuse.Controls.StackPanel, float>*/], uCRef(0.0f), uDelegate::New(::TYPES[172/*Uno.Action<Fuse.Controls.StackPanel>*/], (void*)StackPanel__OnItemSpacingChanged_fn), &ret3), ret3);
    StackPanel::ContentAlignmentProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[174/*Fuse.StyleProperty<Fuse.Controls.StackPanel, Fuse.Elements.Alignment>*/], uCRef<int>(0), uDelegate::New(::TYPES[172/*Uno.Action<Fuse.Controls.StackPanel>*/], (void*)StackPanel__OnContentAlignmentChanged_fn), &ret4), ret4);
    StackPanel::ModeProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[175/*Fuse.StyleProperty<Fuse.Controls.StackPanel, Fuse.Layouts.StackLayoutMode>*/], uCRef<int>(0), uDelegate::New(::TYPES[172/*Uno.Action<Fuse.Controls.StackPanel>*/], (void*)StackPanel__OnModeChanged_fn), &ret5), ret5);
}

::g::Fuse::Controls::ParentControl_type* StackPanel_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 105;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(StackPanel);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("Fuse.Controls.StackPanel", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)StackPanel__New3_fn;
    type->fp_cctor_ = StackPanel__cctor_5_fn;
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
    ::TYPES[171] = ::g::Fuse::StyleProperty1_typeof()->MakeType(StackPanel_typeof(), ::g::Fuse::Layouts::Orientation_typeof());
    ::TYPES[172] = ::g::Uno::Action1_typeof()->MakeType(StackPanel_typeof());
    ::TYPES[173] = ::g::Fuse::StyleProperty1_typeof()->MakeType(StackPanel_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[174] = ::g::Fuse::StyleProperty1_typeof()->MakeType(StackPanel_typeof(), ::g::Fuse::Elements::Alignment_typeof());
    ::TYPES[175] = ::g::Fuse::StyleProperty1_typeof()->MakeType(StackPanel_typeof(), ::g::Fuse::Layouts::StackLayoutMode_typeof());
    ::TYPES[45] = ::g::Fuse::Controls::ParentControl_typeof();
    ::TYPES[46] = ::g::Fuse::Layouts::Layout_typeof();
    ::TYPES[176] = ::g::Fuse::Layouts::StackLayout_typeof();
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
    type->SetFields(100,
        ::g::Fuse::Layouts::StackLayout_typeof(), offsetof(::g::Fuse::Controls::StackPanel, _stackLayout), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(StackPanel_typeof(), ::g::Fuse::Elements::Alignment_typeof()), (uintptr_t)&::g::Fuse::Controls::StackPanel::ContentAlignmentProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(StackPanel_typeof(), ::g::Uno::Float_typeof()), (uintptr_t)&::g::Fuse::Controls::StackPanel::ItemSpacingProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(StackPanel_typeof(), ::g::Fuse::Layouts::StackLayoutMode_typeof()), (uintptr_t)&::g::Fuse::Controls::StackPanel::ModeProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(StackPanel_typeof(), ::g::Fuse::Layouts::Orientation_typeof()), (uintptr_t)&::g::Fuse::Controls::StackPanel::OrientationProperty_, uFieldFlagsStatic);
    return type;
}

// public StackPanel() :3866
void StackPanel__ctor_5_fn(StackPanel* __this)
{
    __this->ctor_5();
}

// public Fuse.Elements.Alignment get_ContentAlignment() :3877
void StackPanel__get_ContentAlignment_fn(StackPanel* __this, int* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :3878
void StackPanel__set_ContentAlignment_fn(StackPanel* __this, int* value)
{
    __this->ContentAlignment(*value);
}

// public float get_ItemSpacing() :3855
void StackPanel__get_ItemSpacing_fn(StackPanel* __this, float* __retval)
{
    *__retval = __this->ItemSpacing();
}

// public void set_ItemSpacing(float value) :3856
void StackPanel__set_ItemSpacing_fn(StackPanel* __this, float* value)
{
    __this->ItemSpacing(*value);
}

// public Fuse.Layouts.StackLayoutMode get_Mode() :3891
void StackPanel__get_Mode_fn(StackPanel* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// public void set_Mode(Fuse.Layouts.StackLayoutMode value) :3892
void StackPanel__set_Mode_fn(StackPanel* __this, int* value)
{
    __this->Mode(*value);
}

// public StackPanel New() :3866
void StackPanel__New3_fn(StackPanel** __retval)
{
    *__retval = StackPanel::New3();
}

// private static void OnContentAlignmentChanged(Fuse.Controls.StackPanel p) :3881
void StackPanel__OnContentAlignmentChanged_fn(StackPanel* p)
{
    StackPanel::OnContentAlignmentChanged(p);
}

// private static void OnItemSpacingChanged(Fuse.Controls.StackPanel p) :3859
void StackPanel__OnItemSpacingChanged_fn(StackPanel* p)
{
    StackPanel::OnItemSpacingChanged(p);
}

// private static void OnModeChanged(Fuse.Controls.StackPanel p) :3895
void StackPanel__OnModeChanged_fn(StackPanel* p)
{
    StackPanel::OnModeChanged(p);
}

// private static void OnOrientationChanged(Fuse.Controls.StackPanel p) :3844
void StackPanel__OnOrientationChanged_fn(StackPanel* p)
{
    StackPanel::OnOrientationChanged(p);
}

// public Fuse.Layouts.Orientation get_Orientation() :3840
void StackPanel__get_Orientation_fn(StackPanel* __this, int* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Layouts.Orientation value) :3841
void StackPanel__set_Orientation_fn(StackPanel* __this, int* value)
{
    __this->Orientation(*value);
}

uSStrong< ::g::Fuse::StyleProperty1*> StackPanel::ContentAlignmentProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> StackPanel::ItemSpacingProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> StackPanel::ModeProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> StackPanel::OrientationProperty_;

// public StackPanel() [instance] :3866
void StackPanel::ctor_5()
{
    ctor_4();
    Layout(_stackLayout = ::g::Fuse::Layouts::StackLayout::New1());
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :3877
int StackPanel::ContentAlignment()
{
    int ret6;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(StackPanel::ContentAlignmentProperty()), this, &ret6), ret6);
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :3878
void StackPanel::ContentAlignment(int value)
{
    bool ret7;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(StackPanel::ContentAlignmentProperty()), this, uCRef<int>(value), &ret7);
}

// public float get_ItemSpacing() [instance] :3855
float StackPanel::ItemSpacing()
{
    float ret8;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(StackPanel::ItemSpacingProperty()), this, &ret8), ret8);
}

// public void set_ItemSpacing(float value) [instance] :3856
void StackPanel::ItemSpacing(float value)
{
    bool ret9;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(StackPanel::ItemSpacingProperty()), this, uCRef(value), &ret9);
}

// public Fuse.Layouts.StackLayoutMode get_Mode() [instance] :3891
int StackPanel::Mode()
{
    int ret10;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(StackPanel::ModeProperty()), this, &ret10), ret10);
}

// public void set_Mode(Fuse.Layouts.StackLayoutMode value) [instance] :3892
void StackPanel::Mode(int value)
{
    bool ret11;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(StackPanel::ModeProperty()), this, uCRef<int>(value), &ret11);
}

// public Fuse.Layouts.Orientation get_Orientation() [instance] :3840
int StackPanel::Orientation()
{
    int ret12;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(StackPanel::OrientationProperty()), this, &ret12), ret12);
}

// public void set_Orientation(Fuse.Layouts.Orientation value) [instance] :3841
void StackPanel::Orientation(int value)
{
    bool ret13;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(StackPanel::OrientationProperty()), this, uCRef<int>(value), &ret13);
}

// public StackPanel New() [static] :3866
StackPanel* StackPanel::New3()
{
    StackPanel* obj1 = (StackPanel*)uNew(StackPanel_typeof());
    obj1->ctor_5();
    return obj1;
}

// private static void OnContentAlignmentChanged(Fuse.Controls.StackPanel p) [static] :3881
void StackPanel::OnContentAlignmentChanged(StackPanel* p)
{
    StackPanel_typeof()->Init();
    uPtr(uPtr(p)->_stackLayout)->ContentAlignment(uPtr(p)->ContentAlignment());
}

// private static void OnItemSpacingChanged(Fuse.Controls.StackPanel p) [static] :3859
void StackPanel::OnItemSpacingChanged(StackPanel* p)
{
    StackPanel_typeof()->Init();
    uPtr(uPtr(p)->_stackLayout)->ItemSpacing(uPtr(p)->ItemSpacing());
}

// private static void OnModeChanged(Fuse.Controls.StackPanel p) [static] :3895
void StackPanel::OnModeChanged(StackPanel* p)
{
    StackPanel_typeof()->Init();
    uPtr(uPtr(p)->_stackLayout)->Mode(uPtr(p)->Mode());
}

// private static void OnOrientationChanged(Fuse.Controls.StackPanel p) [static] :3844
void StackPanel::OnOrientationChanged(StackPanel* p)
{
    StackPanel_typeof()->Init();
    uPtr(uPtr(p)->_stackLayout)->Orientation(uPtr(p)->Orientation());
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(3914)
// -------------------------------------------------------------------------

// public sealed class Star :3914
// {
::g::Fuse::Controls::ParentControl_type* Star_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ParentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 110;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Star);
    options.TypeSize = sizeof(::g::Fuse::Controls::ParentControl_type);
    type = (::g::Fuse::Controls::ParentControl_type*)uClassType::New("Fuse.Controls.Star", options);
    type->SetBase(::g::Fuse::Controls::Shape_typeof());
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
    type->SetFields(106,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Star, _degrees), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Star, _points), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Star, _ratio), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Star, _roundRatio), 0);
    return type;
}

// public int get_Points() :3919
void Star__get_Points_fn(Star* __this, int* __retval)
{
    *__retval = __this->Points();
}

// public void set_Points(int value) :3920
void Star__set_Points_fn(Star* __this, int* value)
{
    __this->Points(*value);
}

// public float get_Ratio() :3931
void Star__get_Ratio_fn(Star* __this, float* __retval)
{
    *__retval = __this->Ratio();
}

// public void set_Ratio(float value) :3932
void Star__set_Ratio_fn(Star* __this, float* value)
{
    __this->Ratio(*value);
}

// public float get_RotationDegrees() :3957
void Star__get_RotationDegrees_fn(Star* __this, float* __retval)
{
    *__retval = __this->RotationDegrees();
}

// public void set_RotationDegrees(float value) :3958
void Star__set_RotationDegrees_fn(Star* __this, float* value)
{
    __this->RotationDegrees(*value);
}

// internal float get_RotationRadians() :3969
void Star__get_RotationRadians_fn(Star* __this, float* __retval)
{
    *__retval = __this->RotationRadians();
}

// public float get_RoundRatio() :3944
void Star__get_RoundRatio_fn(Star* __this, float* __retval)
{
    *__retval = __this->RoundRatio();
}

// public void set_RoundRatio(float value) :3945
void Star__set_RoundRatio_fn(Star* __this, float* value)
{
    __this->RoundRatio(*value);
}

// public int get_Points() [instance] :3919
int Star::Points()
{
    return _points;
}

// public void set_Points(int value) [instance] :3920
void Star::Points(int value)
{
    if (value == _points)
        return;

    _points = value;
    OnShapeChanged();
}

// public float get_Ratio() [instance] :3931
float Star::Ratio()
{
    return _ratio;
}

// public void set_Ratio(float value) [instance] :3932
void Star::Ratio(float value)
{
    if (value == _ratio)
        return;

    _ratio = value;
    OnShapeChanged();
}

// public float get_RotationDegrees() [instance] :3957
float Star::RotationDegrees()
{
    return _degrees;
}

// public void set_RotationDegrees(float value) [instance] :3958
void Star::RotationDegrees(float value)
{
    if (value == _degrees)
        return;

    _degrees = value;
    InvalidateVisual();
}

// internal float get_RotationRadians() [instance] :3969
float Star::RotationRadians()
{
    return (_degrees / 180.0f) * 3.14159274f;
}

// public float get_RoundRatio() [instance] :3944
float Star::RoundRatio()
{
    return _roundRatio;
}

// public void set_RoundRatio(float value) [instance] :3945
void Star::RoundRatio(float value)
{
    if (value == _roundRatio)
        return;

    _roundRatio = value;
    OnShapeChanged();
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(4490)
// -------------------------------------------------------------------------

// public sealed class StatusBarBackground :4490
// {
::g::Fuse::Controls::Control_type* StatusBarBackground_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 88;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(StatusBarBackground);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("Fuse.Controls.StatusBarBackground", options);
    type->SetBase(::g::Fuse::Controls::TopFrameBackground_typeof());
    type->fp_ctor_ = (void*)StatusBarBackground__New2_fn;
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
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface6));
    type->SetFields(88);
    return type;
}

// public generated StatusBarBackground() :4490
void StatusBarBackground__ctor_4_fn(StatusBarBackground* __this)
{
    __this->ctor_4();
}

// public generated StatusBarBackground New() :4490
void StatusBarBackground__New2_fn(StatusBarBackground** __retval)
{
    *__retval = StatusBarBackground::New2();
}

// public generated StatusBarBackground() [instance] :4490
void StatusBarBackground::ctor_4()
{
    ctor_3();
}

// public generated StatusBarBackground New() [static] :4490
StatusBarBackground* StatusBarBackground::New2()
{
    StatusBarBackground* obj1 = (StatusBarBackground*)uNew(StatusBarBackground_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(4475)
// -------------------------------------------------------------------------

// public sealed class Switch :4475
// {
::g::Fuse::Controls::ToggleControl_type* Switch_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ToggleControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 101;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(::g::Fuse::Controls::ToggleControl_type);
    type = (::g::Fuse::Controls::ToggleControl_type*)uClassType::New("Fuse.Controls.Switch", options);
    type->SetBase(::g::Fuse::Controls::ToggleControl_typeof());
    type->interface9.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Controls::ToggleControl__get_Value_fn;
    type->interface9.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Controls::ToggleControl__set_Value_fn;
    type->interface9.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::ToggleControl__add_ValueChanged_fn;
    type->interface9.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::ToggleControl__remove_ValueChanged_fn;
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
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface6),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface7),
        ::g::Fuse::IObjectContainer_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface8),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Controls::ToggleControl_type, interface9));
    type->SetFields(101);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(4382)
// -------------------------------------------------------------------------

// public sealed class Text :4382
// {
::g::Fuse::Controls::TextControl_type* Text_typeof()
{
    static uSStrong< ::g::Fuse::Controls::TextControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 103;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(Text);
    options.TypeSize = sizeof(::g::Fuse::Controls::TextControl_type);
    type = (::g::Fuse::Controls::TextControl_type*)uClassType::New("Fuse.Controls.Text", options);
    type->SetBase(::g::Fuse::Controls::TextBlock_typeof());
    type->fp_ctor_ = (void*)Text__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Text__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Text__OnUnrooted_fn;
    type->interface9.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Controls::TextControl__get_Value_fn;
    type->interface9.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Controls::TextControl__set_Value_fn;
    type->interface9.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextControl__add_ValueChanged_fn;
    type->interface9.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextControl__remove_ValueChanged_fn;
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
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface6),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface7),
        ::g::Fuse::IObjectContainer_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface8),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Controls::TextControl_type, interface9));
    type->SetFields(103);
    return type;
}

// public generated Text() :4382
void Text__ctor_6_fn(Text* __this)
{
    __this->ctor_6();
}

// public generated Text New() :4382
void Text__New2_fn(Text** __retval)
{
    *__retval = Text::New2();
}

// protected override sealed void OnRooted() :4384
void Text__OnRooted_fn(Text* __this)
{
    ::g::Fuse::Controls::ParentControl__OnRooted_fn(__this);
    __this->AddDrawCost(2.0);
}

// protected override sealed void OnUnrooted() :4390
void Text__OnUnrooted_fn(Text* __this)
{
    __this->RemoveDrawCost(2.0);
    ::g::Fuse::Controls::ParentControl__OnUnrooted_fn(__this);
}

// public generated Text() [instance] :4382
void Text::ctor_6()
{
    ctor_5();
}

// public generated Text New() [static] :4382
Text* Text::New2()
{
    Text* obj1 = (Text*)uNew(Text_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(4377)
// -------------------------------------------------------------------------

// public abstract class TextBlock :4377
// {
::g::Fuse::Controls::TextControl_type* TextBlock_typeof()
{
    static uSStrong< ::g::Fuse::Controls::TextControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 103;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(TextBlock);
    options.TypeSize = sizeof(::g::Fuse::Controls::TextControl_type);
    type = (::g::Fuse::Controls::TextControl_type*)uClassType::New("Fuse.Controls.TextBlock", options);
    type->SetBase(::g::Fuse::Controls::TextControl_typeof());
    type->interface9.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Controls::TextControl__get_Value_fn;
    type->interface9.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Controls::TextControl__set_Value_fn;
    type->interface9.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextControl__add_ValueChanged_fn;
    type->interface9.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextControl__remove_ValueChanged_fn;
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
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface6),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface7),
        ::g::Fuse::IObjectContainer_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface8),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Controls::TextControl_type, interface9));
    type->SetFields(103);
    return type;
}

// protected generated TextBlock() :4377
void TextBlock__ctor_5_fn(TextBlock* __this)
{
    __this->ctor_5();
}

// protected generated TextBlock() [instance] :4377
void TextBlock::ctor_5()
{
    ctor_4();
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(3986)
// -------------------------------------------------------------------------

// public abstract class TextControl :3986
// {
// static TextControl() :3986
static void TextControl__cctor_4_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    ::g::Fuse::StyleProperty1* ret4;
    ::g::Fuse::StyleProperty1* ret5;
    ::g::Fuse::StyleProperty1* ret6;
    ::g::Fuse::StyleProperty1* ret7;
    ::g::Fuse::StyleProperty1* ret8;
    TextControl::ValueProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[177/*Fuse.StyleProperty<Fuse.Controls.TextControl, string>*/], ::STRINGS[0/*""*/], NULL, uDelegate::New(::TYPES[178/*Uno.Action<Fuse.Controls.TextControl, string>*/], (void*)TextControl__SetValue_fn), uDelegate::New(::TYPES[179/*Uno.Func<Fuse.Controls.TextControl, string>*/], (void*)TextControl__GetValue_fn), &ret2), ret2);
    TextControl::TextWrappingProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[180/*Fuse.StyleProperty<Fuse.Controls.TextControl, Fuse.Elements.TextWrapping>*/], uCRef<int>(0), uDelegate::New(::TYPES[181/*Uno.Action<Fuse.Controls.TextControl>*/], (void*)TextControl__OnTextLayoutPropertyChanged1_fn), &ret3), ret3);
    TextControl::LineSpacingProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[182/*Fuse.StyleProperty<Fuse.Controls.TextControl, float>*/], uCRef(0.0f), uDelegate::New(::TYPES[181/*Uno.Action<Fuse.Controls.TextControl>*/], (void*)TextControl__OnTextLayoutPropertyChanged1_fn), &ret4), ret4);
    TextControl::FontSizeProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[182/*Fuse.StyleProperty<Fuse.Controls.TextControl, float>*/], uCRef(16.0f), uDelegate::New(::TYPES[181/*Uno.Action<Fuse.Controls.TextControl>*/], (void*)TextControl__OnTextLayoutPropertyChanged1_fn), &ret5), ret5);
    TextControl::FontProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[183/*Fuse.StyleProperty<Fuse.Controls.TextControl, Fuse.Font>*/], ::g::Fuse::Fonts::Fallback(), uDelegate::New(::TYPES[181/*Uno.Action<Fuse.Controls.TextControl>*/], (void*)TextControl__OnTextLayoutPropertyChanged1_fn), &ret6), ret6);
    TextControl::TextAlignmentProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[185/*Fuse.StyleProperty<Fuse.Controls.TextControl, Fuse.Elements.TextAlignment>*/], uCRef<int>(0), uDelegate::New(::TYPES[181/*Uno.Action<Fuse.Controls.TextControl>*/], (void*)TextControl__OnTextLayoutPropertyChanged1_fn), &ret7), ret7);
    TextControl::TextColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[186/*Fuse.StyleProperty<Fuse.Controls.TextControl, float4>*/], uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)), uDelegate::New(::TYPES[181/*Uno.Action<Fuse.Controls.TextControl>*/], (void*)TextControl__OnTextRenderPropertyChanged1_fn), &ret8), ret8);
}

TextControl_type* TextControl_typeof()
{
    static uSStrong<TextControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 110;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(TextControl);
    options.TypeSize = sizeof(TextControl_type);
    type = (TextControl_type*)uClassType::New("Fuse.Controls.TextControl", options);
    type->SetBase(::g::Fuse::Controls::ParentControl_typeof());
    type->fp_cctor_ = TextControl__cctor_4_fn;
    type->fp_OnValueChanged = TextControl__OnValueChanged_fn;
    type->fp_get_RenderColor = TextControl__get_RenderColor_fn;
    type->fp_get_RenderValue = TextControl__get_RenderValue_fn;
    type->interface9.fp_get_Value = (void(*)(uObject*, uTRef))TextControl__get_Value_fn;
    type->interface9.fp_set_Value = (void(*)(uObject*, void*))TextControl__set_Value_fn;
    type->interface9.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))TextControl__add_ValueChanged_fn;
    type->interface9.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))TextControl__remove_ValueChanged_fn;
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
    ::STRINGS[0] = uString::Const("");
    ::TYPES[177] = ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Uno::String_typeof());
    ::TYPES[178] = ::g::Uno::Action2_typeof()->MakeType(TextControl_typeof(), ::g::Uno::String_typeof());
    ::TYPES[179] = ::g::Uno::Func1_typeof()->MakeType(TextControl_typeof(), ::g::Uno::String_typeof());
    ::TYPES[180] = ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Fuse::Elements::TextWrapping_typeof());
    ::TYPES[181] = ::g::Uno::Action1_typeof()->MakeType(TextControl_typeof());
    ::TYPES[182] = ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[183] = ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Fuse::Font_typeof());
    ::TYPES[184] = ::g::Fuse::Fonts_typeof();
    ::TYPES[185] = ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Fuse::Elements::TextAlignment_typeof());
    ::TYPES[186] = ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Uno::Float4_typeof());
    ::TYPES[11] = ::g::Uno::Delegate_typeof();
    ::TYPES[25] = ::g::Uno::EventHandler_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[26] = ::g::Uno::EventArgs_typeof();
    ::TYPES[12] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[14] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[187] = ::g::Uno::String_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(TextControl_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(TextControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(TextControl_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(TextControl_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(TextControl_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(TextControl_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(TextControl_type, interface6),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(TextControl_type, interface7),
        ::g::Fuse::IObjectContainer_typeof(), offsetof(TextControl_type, interface8),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(TextControl_type, interface9));
    type->SetFields(99,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::TextControl, _value), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::TextControl, TextLayoutPropertyChanged1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::TextControl, TextRenderPropertyChanged1), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Controls::TextControl, ValueChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Fuse::Font_typeof()), (uintptr_t)&::g::Fuse::Controls::TextControl::FontProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Uno::Float_typeof()), (uintptr_t)&::g::Fuse::Controls::TextControl::FontSizeProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Uno::Float_typeof()), (uintptr_t)&::g::Fuse::Controls::TextControl::LineSpacingProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Fuse::Elements::TextAlignment_typeof()), (uintptr_t)&::g::Fuse::Controls::TextControl::TextAlignmentProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::Controls::TextControl::TextColorProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Fuse::Elements::TextWrapping_typeof()), (uintptr_t)&::g::Fuse::Controls::TextControl::TextWrappingProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Controls::TextControl::ValueProperty_, uFieldFlagsStatic);
    return type;
}

// protected generated TextControl() :3986
void TextControl__ctor_4_fn(TextControl* __this)
{
    __this->ctor_4();
}

// public Fuse.Font get_Font() :4093
void TextControl__get_Font_fn(TextControl* __this, ::g::Fuse::Font** __retval)
{
    *__retval = __this->Font();
}

// public void set_Font(Fuse.Font value) :4094
void TextControl__set_Font_fn(TextControl* __this, ::g::Fuse::Font* value)
{
    __this->Font(value);
}

// public float get_FontSize() :4082
void TextControl__get_FontSize_fn(TextControl* __this, float* __retval)
{
    *__retval = __this->FontSize();
}

// public void set_FontSize(float value) :4083
void TextControl__set_FontSize_fn(TextControl* __this, float* value)
{
    __this->FontSize(*value);
}

// private static string GetValue(Fuse.Controls.TextControl t) :3999
void TextControl__GetValue_fn(TextControl* t, uString** __retval)
{
    *__retval = TextControl::GetValue(t);
}

// public float get_LineSpacing() :4071
void TextControl__get_LineSpacing_fn(TextControl* __this, float* __retval)
{
    *__retval = __this->LineSpacing();
}

// public void set_LineSpacing(float value) :4072
void TextControl__set_LineSpacing_fn(TextControl* __this, float* value)
{
    __this->LineSpacing(*value);
}

// protected void OnTextLayoutPropertyChanged() :4035
void TextControl__OnTextLayoutPropertyChanged_fn(TextControl* __this)
{
    __this->OnTextLayoutPropertyChanged();
}

// protected static void OnTextLayoutPropertyChanged(Fuse.Controls.TextControl t) :4029
void TextControl__OnTextLayoutPropertyChanged1_fn(TextControl* t)
{
    TextControl::OnTextLayoutPropertyChanged1(t);
}

// protected void OnTextRenderPropertyChanged() :4047
void TextControl__OnTextRenderPropertyChanged_fn(TextControl* __this)
{
    __this->OnTextRenderPropertyChanged();
}

// protected static void OnTextRenderPropertyChanged(Fuse.Controls.TextControl t) :4041
void TextControl__OnTextRenderPropertyChanged1_fn(TextControl* t)
{
    TextControl::OnTextRenderPropertyChanged1(t);
}

// protected virtual void OnValueChanged(string newString, object origin) :4014
void TextControl__OnValueChanged_fn(TextControl* __this, uString* newString, uObject* origin)
{
    if (::g::Uno::Delegate::op_Inequality(__this->ValueChanged1, NULL))
    {
        ::g::Fuse::Scripting::StringChangedArgs* args = ::g::Fuse::Scripting::StringChangedArgs::New4(newString, origin);
        uPtr(__this->ValueChanged1)->Invoke(2, __this, args);
    }
}

// public virtual float4 get_RenderColor() :4025
void TextControl__get_RenderColor_fn(TextControl* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = __this->TextColor(), void();
}

// public virtual string get_RenderValue() :4024
void TextControl__get_RenderValue_fn(TextControl* __this, uString** __retval)
{
    uString* ind1 = __this->Value();
    return *__retval = (ind1 != NULL) ? ind1 : (uString*)::g::Uno::String::Empty(), void();
}

// private static void SetValue(Fuse.Controls.TextControl t, string value) :4003
void TextControl__SetValue_fn(TextControl* t, uString* value)
{
    TextControl::SetValue(t, value);
}

// public void SetValue(string value, object origin) :4008
void TextControl__SetValue1_fn(TextControl* __this, uString* value, uObject* origin)
{
    __this->SetValue1(value, origin);
}

// public Fuse.Elements.TextAlignment get_TextAlignment() :4104
void TextControl__get_TextAlignment_fn(TextControl* __this, int* __retval)
{
    *__retval = __this->TextAlignment();
}

// public void set_TextAlignment(Fuse.Elements.TextAlignment value) :4105
void TextControl__set_TextAlignment_fn(TextControl* __this, int* value)
{
    __this->TextAlignment(*value);
}

// public float4 get_TextColor() :4115
void TextControl__get_TextColor_fn(TextControl* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TextColor();
}

// public void set_TextColor(float4 value) :4116
void TextControl__set_TextColor_fn(TextControl* __this, ::g::Uno::Float4* value)
{
    __this->TextColor(*value);
}

// public generated void add_TextLayoutPropertyChanged(Uno.EventHandler value) :4034
void TextControl__add_TextLayoutPropertyChanged_fn(TextControl* __this, uDelegate* value)
{
    __this->add_TextLayoutPropertyChanged(value);
}

// public generated void remove_TextLayoutPropertyChanged(Uno.EventHandler value) :4034
void TextControl__remove_TextLayoutPropertyChanged_fn(TextControl* __this, uDelegate* value)
{
    __this->remove_TextLayoutPropertyChanged(value);
}

// public generated void add_TextRenderPropertyChanged(Uno.EventHandler value) :4046
void TextControl__add_TextRenderPropertyChanged_fn(TextControl* __this, uDelegate* value)
{
    __this->add_TextRenderPropertyChanged(value);
}

// public generated void remove_TextRenderPropertyChanged(Uno.EventHandler value) :4046
void TextControl__remove_TextRenderPropertyChanged_fn(TextControl* __this, uDelegate* value)
{
    __this->remove_TextRenderPropertyChanged(value);
}

// public Fuse.Elements.TextWrapping get_TextWrapping() :4060
void TextControl__get_TextWrapping_fn(TextControl* __this, int* __retval)
{
    *__retval = __this->TextWrapping();
}

// public void set_TextWrapping(Fuse.Elements.TextWrapping value) :4061
void TextControl__set_TextWrapping_fn(TextControl* __this, int* value)
{
    __this->TextWrapping(*value);
}

// public string get_Value() :3996
void TextControl__get_Value_fn(TextControl* __this, uString** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(string value) :3997
void TextControl__set_Value_fn(TextControl* __this, uString* value)
{
    __this->Value(value);
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<string> value) :4027
void TextControl__add_ValueChanged_fn(TextControl* __this, uDelegate* value)
{
    __this->add_ValueChanged(value);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<string> value) :4027
void TextControl__remove_ValueChanged_fn(TextControl* __this, uDelegate* value)
{
    __this->remove_ValueChanged(value);
}

uSStrong< ::g::Fuse::StyleProperty1*> TextControl::FontProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextControl::FontSizeProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextControl::LineSpacingProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextControl::TextAlignmentProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextControl::TextColorProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextControl::TextWrappingProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextControl::ValueProperty_;

// protected generated TextControl() [instance] :3986
void TextControl::ctor_4()
{
    _value = ::STRINGS[0/*""*/];
    ctor_3();
}

// public Fuse.Font get_Font() [instance] :4093
::g::Fuse::Font* TextControl::Font()
{
    ::g::Fuse::Font* ret9;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextControl::FontProperty()), this, &ret9), ret9);
}

// public void set_Font(Fuse.Font value) [instance] :4094
void TextControl::Font(::g::Fuse::Font* value)
{
    bool ret10;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextControl::FontProperty()), this, value, &ret10);
}

// public float get_FontSize() [instance] :4082
float TextControl::FontSize()
{
    float ret11;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextControl::FontSizeProperty()), this, &ret11), ret11);
}

// public void set_FontSize(float value) [instance] :4083
void TextControl::FontSize(float value)
{
    bool ret12;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextControl::FontSizeProperty()), this, uCRef(value), &ret12);
}

// public float get_LineSpacing() [instance] :4071
float TextControl::LineSpacing()
{
    float ret13;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextControl::LineSpacingProperty()), this, &ret13), ret13);
}

// public void set_LineSpacing(float value) [instance] :4072
void TextControl::LineSpacing(float value)
{
    bool ret14;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextControl::LineSpacingProperty()), this, uCRef(value), &ret14);
}

// protected void OnTextLayoutPropertyChanged() [instance] :4035
void TextControl::OnTextLayoutPropertyChanged()
{
    if (::g::Uno::Delegate::op_Inequality(TextLayoutPropertyChanged1, NULL))
        uPtr(TextLayoutPropertyChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// protected void OnTextRenderPropertyChanged() [instance] :4047
void TextControl::OnTextRenderPropertyChanged()
{
    if (::g::Uno::Delegate::op_Inequality(TextRenderPropertyChanged1, NULL))
        uPtr(TextRenderPropertyChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public void SetValue(string value, object origin) [instance] :4008
void TextControl::SetValue1(uString* value, uObject* origin)
{
    _value = value;
    ::g::Fuse::StyleProperty1__SetLocalState_fn(uPtr(TextControl::ValueProperty()), this);
    OnValueChanged(value, origin);
}

// public Fuse.Elements.TextAlignment get_TextAlignment() [instance] :4104
int TextControl::TextAlignment()
{
    int ret15;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextControl::TextAlignmentProperty()), this, &ret15), ret15);
}

// public void set_TextAlignment(Fuse.Elements.TextAlignment value) [instance] :4105
void TextControl::TextAlignment(int value)
{
    bool ret16;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextControl::TextAlignmentProperty()), this, uCRef<int>(value), &ret16);
}

// public float4 get_TextColor() [instance] :4115
::g::Uno::Float4 TextControl::TextColor()
{
    ::g::Uno::Float4 ret17;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextControl::TextColorProperty()), this, &ret17), ret17);
}

// public void set_TextColor(float4 value) [instance] :4116
void TextControl::TextColor(::g::Uno::Float4 value)
{
    bool ret18;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextControl::TextColorProperty()), this, uCRef(value), &ret18);
}

// public generated void add_TextLayoutPropertyChanged(Uno.EventHandler value) [instance] :4034
void TextControl::add_TextLayoutPropertyChanged(uDelegate* value)
{
    TextLayoutPropertyChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TextLayoutPropertyChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public generated void remove_TextLayoutPropertyChanged(Uno.EventHandler value) [instance] :4034
void TextControl::remove_TextLayoutPropertyChanged(uDelegate* value)
{
    TextLayoutPropertyChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TextLayoutPropertyChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public generated void add_TextRenderPropertyChanged(Uno.EventHandler value) [instance] :4046
void TextControl::add_TextRenderPropertyChanged(uDelegate* value)
{
    TextRenderPropertyChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TextRenderPropertyChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public generated void remove_TextRenderPropertyChanged(Uno.EventHandler value) [instance] :4046
void TextControl::remove_TextRenderPropertyChanged(uDelegate* value)
{
    TextRenderPropertyChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TextRenderPropertyChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public Fuse.Elements.TextWrapping get_TextWrapping() [instance] :4060
int TextControl::TextWrapping()
{
    int ret19;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextControl::TextWrappingProperty()), this, &ret19), ret19);
}

// public void set_TextWrapping(Fuse.Elements.TextWrapping value) [instance] :4061
void TextControl::TextWrapping(int value)
{
    bool ret20;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextControl::TextWrappingProperty()), this, uCRef<int>(value), &ret20);
}

// public string get_Value() [instance] :3996
uString* TextControl::Value()
{
    return _value;
}

// public void set_Value(string value) [instance] :3997
void TextControl::Value(uString* value)
{
    bool ret21;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextControl::ValueProperty()), this, (value != NULL) ? value : ::STRINGS[0/*""*/], &ret21);
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<string> value) [instance] :4027
void TextControl::add_ValueChanged(uDelegate* value)
{
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ValueChanged1, value), ::TYPES[12/*Uno.UX.ValueChangedHandler<string>*/]);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<string> value) [instance] :4027
void TextControl::remove_ValueChanged(uDelegate* value)
{
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ValueChanged1, value), ::TYPES[12/*Uno.UX.ValueChangedHandler<string>*/]);
}

// private static string GetValue(Fuse.Controls.TextControl t) [static] :3999
uString* TextControl::GetValue(TextControl* t)
{
    TextControl_typeof()->Init();
    return uPtr(t)->_value;
}

// protected static void OnTextLayoutPropertyChanged(Fuse.Controls.TextControl t) [static] :4029
void TextControl::OnTextLayoutPropertyChanged1(TextControl* t)
{
    TextControl_typeof()->Init();
    uPtr(t)->OnTextLayoutPropertyChanged();
}

// protected static void OnTextRenderPropertyChanged(Fuse.Controls.TextControl t) [static] :4041
void TextControl::OnTextRenderPropertyChanged1(TextControl* t)
{
    TextControl_typeof()->Init();
    uPtr(t)->OnTextRenderPropertyChanged();
}

// private static void SetValue(Fuse.Controls.TextControl t, string value) [static] :4003
void TextControl::SetValue(TextControl* t, uString* value)
{
    TextControl_typeof()->Init();
    uPtr(t)->_value = value;
    t->OnValueChanged(value, NULL);
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(4166)
// -------------------------------------------------------------------------

// public class TextEdit :4166
// {
// static TextEdit() :4166
static void TextEdit__cctor_5_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    ::g::Fuse::StyleProperty1* ret4;
    ::g::Fuse::StyleProperty1* ret5;
    ::g::Fuse::StyleProperty1* ret6;
    ::g::Fuse::StyleProperty1* ret7;
    ::g::Fuse::StyleProperty1* ret8;
    ::g::Fuse::StyleProperty1* ret9;
    ::g::Fuse::StyleProperty1* ret10;
    TextEdit::IsMultilineProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[188/*Fuse.StyleProperty<Fuse.Controls.TextEdit, bool>*/], uCRef(false), uDelegate::New(::TYPES[189/*Uno.Action<Fuse.Controls.TextEdit>*/], (void*)::g::Fuse::Controls::TextControl__OnTextLayoutPropertyChanged1_fn), &ret2), ret2);
    TextEdit::IsPasswordProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[188/*Fuse.StyleProperty<Fuse.Controls.TextEdit, bool>*/], uCRef(false), uDelegate::New(::TYPES[189/*Uno.Action<Fuse.Controls.TextEdit>*/], (void*)::g::Fuse::Controls::TextControl__OnTextLayoutPropertyChanged1_fn), &ret3), ret3);
    TextEdit::IsReadOnlyProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[188/*Fuse.StyleProperty<Fuse.Controls.TextEdit, bool>*/], uCRef(false), uDelegate::New(::TYPES[189/*Uno.Action<Fuse.Controls.TextEdit>*/], (void*)::g::Fuse::Controls::TextControl__OnTextRenderPropertyChanged1_fn), &ret4), ret4);
    TextEdit::InputHintProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[190/*Fuse.StyleProperty<Fuse.Controls.TextEdit, Uno.Platform.TextInputHint>*/], uCRef<int>(0), uDelegate::New(::TYPES[189/*Uno.Action<Fuse.Controls.TextEdit>*/], (void*)::g::Fuse::Controls::TextControl__OnTextRenderPropertyChanged1_fn), &ret5), ret5);
    TextEdit::CaretColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[191/*Fuse.StyleProperty<Fuse.Controls.TextEdit, float4>*/], uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)), uDelegate::New(::TYPES[189/*Uno.Action<Fuse.Controls.TextEdit>*/], (void*)::g::Fuse::Controls::TextControl__OnTextRenderPropertyChanged1_fn), &ret6), ret6);
    TextEdit::SelectionColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[191/*Fuse.StyleProperty<Fuse.Controls.TextEdit, float4>*/], uCRef(::g::Uno::Float4__New2(0.6f, 0.8f, 1.0f, 0.5f)), uDelegate::New(::TYPES[189/*Uno.Action<Fuse.Controls.TextEdit>*/], (void*)::g::Fuse::Controls::TextControl__OnTextRenderPropertyChanged1_fn), &ret7), ret7);
    TextEdit::ActionStyleProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[192/*Fuse.StyleProperty<Fuse.Controls.TextEdit, Fuse.Controls.TextInputActionStyle>*/], uCRef<int>(2), uDelegate::New(::TYPES[189/*Uno.Action<Fuse.Controls.TextEdit>*/], (void*)TextEdit__OnTextInputActionStyleChanged_fn), &ret8), ret8);
    TextEdit::PlaceholderTextProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[177/*Fuse.StyleProperty<Fuse.Controls.TextControl, string>*/], ::STRINGS[0/*""*/], uDelegate::New(::TYPES[181/*Uno.Action<Fuse.Controls.TextControl>*/], (void*)::g::Fuse::Controls::TextControl__OnTextRenderPropertyChanged1_fn), &ret9), ret9);
    TextEdit::PlaceholderColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[186/*Fuse.StyleProperty<Fuse.Controls.TextControl, float4>*/], uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)), uDelegate::New(::TYPES[181/*Uno.Action<Fuse.Controls.TextControl>*/], (void*)::g::Fuse::Controls::TextControl__OnTextRenderPropertyChanged1_fn), &ret10), ret10);
}

::g::Fuse::Controls::TextControl_type* TextEdit_typeof()
{
    static uSStrong< ::g::Fuse::Controls::TextControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 114;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(TextEdit);
    options.TypeSize = sizeof(::g::Fuse::Controls::TextControl_type);
    type = (::g::Fuse::Controls::TextControl_type*)uClassType::New("Fuse.Controls.TextEdit", options);
    type->SetBase(::g::Fuse::Controls::TextControl_typeof());
    type->fp_cctor_ = TextEdit__cctor_5_fn;
    type->fp_OnValueChanged = (void(*)(::g::Fuse::Controls::TextControl*, uString*, uObject*))TextEdit__OnValueChanged_fn;
    type->fp_get_RenderColor = (void(*)(::g::Fuse::Controls::TextControl*, ::g::Uno::Float4*))TextEdit__get_RenderColor_fn;
    type->fp_get_RenderValue = (void(*)(::g::Fuse::Controls::TextControl*, uString**))TextEdit__get_RenderValue_fn;
    type->interface9.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Controls::TextControl__get_Value_fn;
    type->interface9.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Controls::TextControl__set_Value_fn;
    type->interface9.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextControl__add_ValueChanged_fn;
    type->interface9.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextControl__remove_ValueChanged_fn;
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
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[11] = uString::Const(" ");
    ::TYPES[188] = ::g::Fuse::StyleProperty1_typeof()->MakeType(TextEdit_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[189] = ::g::Uno::Action1_typeof()->MakeType(TextEdit_typeof());
    ::TYPES[190] = ::g::Fuse::StyleProperty1_typeof()->MakeType(TextEdit_typeof(), ::g::Uno::Platform::TextInputHint_typeof());
    ::TYPES[191] = ::g::Fuse::StyleProperty1_typeof()->MakeType(TextEdit_typeof(), ::g::Uno::Float4_typeof());
    ::TYPES[192] = ::g::Fuse::StyleProperty1_typeof()->MakeType(TextEdit_typeof(), ::g::Fuse::Controls::TextInputActionStyle_typeof());
    ::TYPES[177] = ::g::Fuse::StyleProperty1_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof(), ::g::Uno::String_typeof());
    ::TYPES[181] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof());
    ::TYPES[186] = ::g::Fuse::StyleProperty1_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof(), ::g::Uno::Float4_typeof());
    ::TYPES[11] = ::g::Uno::Delegate_typeof();
    ::TYPES[18] = ::g::Fuse::Node_typeof();
    ::TYPES[193] = ::g::Fuse::Controls::TextInputActionHandler_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[77] = ::g::Uno::Int_typeof();
    ::TYPES[85] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[187] = ::g::Uno::String_typeof();
    ::TYPES[194] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[16] = ::g::Uno::Bool_typeof();
    ::TYPES[195] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Char_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface6),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface7),
        ::g::Fuse::IObjectContainer_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface8),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Controls::TextControl_type, interface9));
    type->SetFields(103,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::TextEdit, _renderValue), 0,
        ::g::Fuse::Controls::TextInputActionHandler_typeof(), offsetof(::g::Fuse::Controls::TextEdit, ActionTriggered1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextEdit_typeof(), ::g::Fuse::Controls::TextInputActionStyle_typeof()), (uintptr_t)&::g::Fuse::Controls::TextEdit::ActionStyleProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextEdit_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::Controls::TextEdit::CaretColorProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextEdit_typeof(), ::g::Uno::Platform::TextInputHint_typeof()), (uintptr_t)&::g::Fuse::Controls::TextEdit::InputHintProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextEdit_typeof(), ::g::Uno::Bool_typeof()), (uintptr_t)&::g::Fuse::Controls::TextEdit::IsMultilineProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextEdit_typeof(), ::g::Uno::Bool_typeof()), (uintptr_t)&::g::Fuse::Controls::TextEdit::IsPasswordProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextEdit_typeof(), ::g::Uno::Bool_typeof()), (uintptr_t)&::g::Fuse::Controls::TextEdit::IsReadOnlyProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::Controls::TextEdit::PlaceholderColorProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Controls::TextEdit::PlaceholderTextProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextEdit_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::Controls::TextEdit::SelectionColorProperty_, uFieldFlagsStatic);
    return type;
}

// public generated TextEdit() :4166
void TextEdit__ctor_5_fn(TextEdit* __this)
{
    __this->ctor_5();
}

// public Fuse.Controls.TextInputActionStyle get_ActionStyle() :4244
void TextEdit__get_ActionStyle_fn(TextEdit* __this, int* __retval)
{
    *__retval = __this->ActionStyle();
}

// public void set_ActionStyle(Fuse.Controls.TextInputActionStyle value) :4245
void TextEdit__set_ActionStyle_fn(TextEdit* __this, int* value)
{
    __this->ActionStyle(*value);
}

// public generated void add_ActionTriggered(Fuse.Controls.TextInputActionHandler value) :4343
void TextEdit__add_ActionTriggered_fn(TextEdit* __this, uDelegate* value)
{
    __this->add_ActionTriggered(value);
}

// public generated void remove_ActionTriggered(Fuse.Controls.TextInputActionHandler value) :4343
void TextEdit__remove_ActionTriggered_fn(TextEdit* __this, uDelegate* value)
{
    __this->remove_ActionTriggered(value);
}

// public float4 get_CaretColor() :4218
void TextEdit__get_CaretColor_fn(TextEdit* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->CaretColor();
}

// public void set_CaretColor(float4 value) :4224
void TextEdit__set_CaretColor_fn(TextEdit* __this, ::g::Uno::Float4* value)
{
    __this->CaretColor(*value);
}

// public Uno.Platform.TextInputHint get_InputHint() :4207
void TextEdit__get_InputHint_fn(TextEdit* __this, int* __retval)
{
    *__retval = __this->InputHint();
}

// public void set_InputHint(Uno.Platform.TextInputHint value) :4208
void TextEdit__set_InputHint_fn(TextEdit* __this, int* value)
{
    __this->InputHint(*value);
}

// public bool get_IsMultiline() :4175
void TextEdit__get_IsMultiline_fn(TextEdit* __this, bool* __retval)
{
    *__retval = __this->IsMultiline();
}

// public void set_IsMultiline(bool value) :4176
void TextEdit__set_IsMultiline_fn(TextEdit* __this, bool* value)
{
    __this->IsMultiline(*value);
}

// public bool get_IsPassword() :4186
void TextEdit__get_IsPassword_fn(TextEdit* __this, bool* __retval)
{
    *__retval = __this->IsPassword();
}

// public void set_IsPassword(bool value) :4187
void TextEdit__set_IsPassword_fn(TextEdit* __this, bool* value)
{
    __this->IsPassword(*value);
}

// public bool get_IsReadOnly() :4197
void TextEdit__get_IsReadOnly_fn(TextEdit* __this, bool* __retval)
{
    *__retval = __this->IsReadOnly();
}

// public void set_IsReadOnly(bool value) :4198
void TextEdit__set_IsReadOnly_fn(TextEdit* __this, bool* value)
{
    __this->IsReadOnly(*value);
}

// internal bool OnAction() :4345
void TextEdit__OnAction_fn(TextEdit* __this, bool* __retval)
{
    *__retval = __this->OnAction();
}

// private static void OnTextInputActionStyleChanged(Fuse.Controls.TextEdit input) :4248
void TextEdit__OnTextInputActionStyleChanged_fn(TextEdit* input)
{
    TextEdit::OnTextInputActionStyleChanged(input);
}

// protected override sealed void OnValueChanged(string newString, object origin) :4337
void TextEdit__OnValueChanged_fn(TextEdit* __this, uString* newString, uObject* origin)
{
    ::g::Fuse::Controls::TextControl__OnValueChanged_fn(__this, newString, origin);
    __this->_renderValue = NULL;
}

// public float4 get_PlaceholderColor() :4268
void TextEdit__get_PlaceholderColor_fn(TextEdit* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->PlaceholderColor();
}

// public void set_PlaceholderColor(float4 value) :4269
void TextEdit__set_PlaceholderColor_fn(TextEdit* __this, ::g::Uno::Float4* value)
{
    __this->PlaceholderColor(*value);
}

// public string get_PlaceholderText() :4257
void TextEdit__get_PlaceholderText_fn(TextEdit* __this, uString** __retval)
{
    *__retval = __this->PlaceholderText();
}

// public void set_PlaceholderText(string value) :4258
void TextEdit__set_PlaceholderText_fn(TextEdit* __this, uString* value)
{
    __this->PlaceholderText(value);
}

// public override sealed float4 get_RenderColor() :4335
void TextEdit__get_RenderColor_fn(TextEdit* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = __this->UsePlaceholder() ? __this->PlaceholderColor() : __this->TextColor(), void();
}

// public override sealed string get_RenderValue() :4277
void TextEdit__get_RenderValue_fn(TextEdit* __this, uString** __retval)
{
    if (::g::Uno::String::op_Inequality(__this->_renderValue, NULL))
        return *__retval = __this->_renderValue, void();

    if (::g::Uno::String::op_Equality(__this->Value(), NULL))
        return *__retval = ::g::Uno::String::Empty(), void();

    if (uPtr(__this->Value())->Length() == 0)
    {
        if (__this->UsePlaceholder())
            return *__retval = __this->PlaceholderText(), void();

        __this->_renderValue = ::STRINGS[11/*" "*/];
        return *__retval = __this->_renderValue, void();
    }

    if (__this->IsPassword())
    {
        uArray* c = uArray::New(::TYPES[194/*char[]*/], uPtr(__this->Value())->Length());
        uChar replacementChar = 8226;
        replacementChar = 9679;

        for (int i = 0; i < c->Length(); ++i)
            c->Item<uChar>(i) = replacementChar;

        __this->_renderValue = uString::CharArray(c);
        return *__retval = __this->_renderValue, void();
    }

    if (!__this->IsMultiline())
    {
        ::g::Uno::Collections::List* s = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[195/*Uno.Collections.List<char>*/]);
        uString* v = __this->Value();

        for (int i1 = 0; i1 < uPtr(v)->Length(); ++i1)
        {
            uChar c1 = uPtr(v)->Item(i1);

            if ((c1 == 10) || (c1 == 13))
                c1 = ' ';

            ::g::Uno::Collections::List__Add_fn(uPtr(s), uCRef<uChar>(c1));
        }

        __this->_renderValue = uString::CharArray((uArray*)s->ToArray());
        return *__retval = __this->_renderValue, void();
    }

    return *__retval = __this->Value(), void();
}

// public float4 get_SelectionColor() :4234
void TextEdit__get_SelectionColor_fn(TextEdit* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->SelectionColor();
}

// public void set_SelectionColor(float4 value) :4235
void TextEdit__set_SelectionColor_fn(TextEdit* __this, ::g::Uno::Float4* value)
{
    __this->SelectionColor(*value);
}

// public bool get_UsePlaceholder() :4272
void TextEdit__get_UsePlaceholder_fn(TextEdit* __this, bool* __retval)
{
    *__retval = __this->UsePlaceholder();
}

uSStrong< ::g::Fuse::StyleProperty1*> TextEdit::ActionStyleProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextEdit::CaretColorProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextEdit::InputHintProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextEdit::IsMultilineProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextEdit::IsPasswordProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextEdit::IsReadOnlyProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextEdit::PlaceholderColorProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextEdit::PlaceholderTextProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextEdit::SelectionColorProperty_;

// public generated TextEdit() [instance] :4166
void TextEdit::ctor_5()
{
    ctor_4();
}

// public Fuse.Controls.TextInputActionStyle get_ActionStyle() [instance] :4244
int TextEdit::ActionStyle()
{
    int ret11;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextEdit::ActionStyleProperty()), this, &ret11), ret11);
}

// public void set_ActionStyle(Fuse.Controls.TextInputActionStyle value) [instance] :4245
void TextEdit::ActionStyle(int value)
{
    bool ret12;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextEdit::ActionStyleProperty()), this, uCRef<int>(value), &ret12);
}

// public generated void add_ActionTriggered(Fuse.Controls.TextInputActionHandler value) [instance] :4343
void TextEdit::add_ActionTriggered(uDelegate* value)
{
    ActionTriggered1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ActionTriggered1, value), ::TYPES[193/*Fuse.Controls.TextInputActionHandler*/]);
}

// public generated void remove_ActionTriggered(Fuse.Controls.TextInputActionHandler value) [instance] :4343
void TextEdit::remove_ActionTriggered(uDelegate* value)
{
    ActionTriggered1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ActionTriggered1, value), ::TYPES[193/*Fuse.Controls.TextInputActionHandler*/]);
}

// public float4 get_CaretColor() [instance] :4218
::g::Uno::Float4 TextEdit::CaretColor()
{
    bool ret13;
    ::g::Uno::Float4 ret14;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(TextEdit::CaretColorProperty()), this, &ret13), ret13))
        return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextEdit::CaretColorProperty()), this, &ret14), ret14);

    return TextColor();
}

// public void set_CaretColor(float4 value) [instance] :4224
void TextEdit::CaretColor(::g::Uno::Float4 value)
{
    bool ret15;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextEdit::CaretColorProperty()), this, uCRef(value), &ret15);
}

// public Uno.Platform.TextInputHint get_InputHint() [instance] :4207
int TextEdit::InputHint()
{
    int ret16;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextEdit::InputHintProperty()), this, &ret16), ret16);
}

// public void set_InputHint(Uno.Platform.TextInputHint value) [instance] :4208
void TextEdit::InputHint(int value)
{
    bool ret17;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextEdit::InputHintProperty()), this, uCRef<int>(value), &ret17);
}

// public bool get_IsMultiline() [instance] :4175
bool TextEdit::IsMultiline()
{
    bool ret18;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextEdit::IsMultilineProperty()), this, &ret18), ret18);
}

// public void set_IsMultiline(bool value) [instance] :4176
void TextEdit::IsMultiline(bool value)
{
    bool ret19;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextEdit::IsMultilineProperty()), this, uCRef(value), &ret19);
}

// public bool get_IsPassword() [instance] :4186
bool TextEdit::IsPassword()
{
    bool ret20;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextEdit::IsPasswordProperty()), this, &ret20), ret20);
}

// public void set_IsPassword(bool value) [instance] :4187
void TextEdit::IsPassword(bool value)
{
    bool ret21;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextEdit::IsPasswordProperty()), this, uCRef(value), &ret21);
}

// public bool get_IsReadOnly() [instance] :4197
bool TextEdit::IsReadOnly()
{
    bool ret22;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextEdit::IsReadOnlyProperty()), this, &ret22), ret22);
}

// public void set_IsReadOnly(bool value) [instance] :4198
void TextEdit::IsReadOnly(bool value)
{
    bool ret23;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextEdit::IsReadOnlyProperty()), this, uCRef(value), &ret23);
}

// internal bool OnAction() [instance] :4345
bool TextEdit::OnAction()
{
    if (::g::Uno::Delegate::op_Inequality(ActionTriggered1, NULL))
    {
        ::g::Fuse::Controls::TextInputActionArgs* args = ::g::Fuse::Controls::TextInputActionArgs::New3(this, 0);
        uPtr(ActionTriggered1)->Invoke(2, this, args);
        return true;
    }

    if (ActionStyle() == 2)
        ::g::Fuse::Input::Focus::Move(1);
    else
        ::g::Fuse::Input::Focus::Release();

    return true;
}

// public float4 get_PlaceholderColor() [instance] :4268
::g::Uno::Float4 TextEdit::PlaceholderColor()
{
    ::g::Uno::Float4 ret24;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextEdit::PlaceholderColorProperty()), this, &ret24), ret24);
}

// public void set_PlaceholderColor(float4 value) [instance] :4269
void TextEdit::PlaceholderColor(::g::Uno::Float4 value)
{
    bool ret25;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextEdit::PlaceholderColorProperty()), this, uCRef(value), &ret25);
}

// public string get_PlaceholderText() [instance] :4257
uString* TextEdit::PlaceholderText()
{
    uString* ret26;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextEdit::PlaceholderTextProperty()), this, &ret26), ret26);
}

// public void set_PlaceholderText(string value) [instance] :4258
void TextEdit::PlaceholderText(uString* value)
{
    bool ret27;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextEdit::PlaceholderTextProperty()), this, value, &ret27);
}

// public float4 get_SelectionColor() [instance] :4234
::g::Uno::Float4 TextEdit::SelectionColor()
{
    ::g::Uno::Float4 ret28;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextEdit::SelectionColorProperty()), this, &ret28), ret28);
}

// public void set_SelectionColor(float4 value) [instance] :4235
void TextEdit::SelectionColor(::g::Uno::Float4 value)
{
    bool ret29;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextEdit::SelectionColorProperty()), this, uCRef(value), &ret29);
}

// public bool get_UsePlaceholder() [instance] :4272
bool TextEdit::UsePlaceholder()
{
    bool ret30;
    return ((uPtr(Value())->Length() == 0) && (::g::Fuse::StyleProperty1__HasValue_fn(uPtr(TextEdit::PlaceholderTextProperty()), this, &ret30), ret30)) && (uPtr(PlaceholderText())->Length() > 0);
}

// private static void OnTextInputActionStyleChanged(Fuse.Controls.TextEdit input) [static] :4248
void TextEdit::OnTextInputActionStyleChanged(TextEdit* input)
{
    TextEdit_typeof()->Init();
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(4363)
// -------------------------------------------------------------------------

// public sealed class TextInput :4363
// {
::g::Fuse::Controls::TextControl_type* TextInput_typeof()
{
    static uSStrong< ::g::Fuse::Controls::TextControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 105;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(TextInput);
    options.TypeSize = sizeof(::g::Fuse::Controls::TextControl_type);
    type = (::g::Fuse::Controls::TextControl_type*)uClassType::New("Fuse.Controls.TextInput", options);
    type->SetBase(::g::Fuse::Controls::TextEdit_typeof());
    type->fp_ctor_ = (void*)TextInput__New3_fn;
    type->interface9.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Controls::TextControl__get_Value_fn;
    type->interface9.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Controls::TextControl__set_Value_fn;
    type->interface9.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextControl__add_ValueChanged_fn;
    type->interface9.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextControl__remove_ValueChanged_fn;
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
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface6),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface7),
        ::g::Fuse::IObjectContainer_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface8),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Controls::TextControl_type, interface9));
    type->SetFields(105);
    return type;
}

// public generated TextInput() :4363
void TextInput__ctor_6_fn(TextInput* __this)
{
    __this->ctor_6();
}

// public generated TextInput New() :4363
void TextInput__New3_fn(TextInput** __retval)
{
    *__retval = TextInput::New3();
}

// public generated TextInput() [instance] :4363
void TextInput::ctor_6()
{
    ctor_5();
}

// public generated TextInput New() [static] :4363
TextInput* TextInput::New3()
{
    TextInput* obj1 = (TextInput*)uNew(TextInput_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(4142)
// -------------------------------------------------------------------------

// public sealed class TextInputActionArgs :4142
// {
::g::Fuse::NodeEventArgs_type* TextInputActionArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextInputActionArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Controls.TextInputActionArgs", options);
    type->SetBase(::g::Fuse::NodeEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__FuseScriptingIScriptEventSerialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Controls::TextInputActionType_typeof(), offsetof(::g::Fuse::Controls::TextInputActionArgs, _Type), 0);
    return type;
}

// public TextInputActionArgs(Fuse.Node node, Fuse.Controls.TextInputActionType type) :4146
void TextInputActionArgs__ctor_2_fn(TextInputActionArgs* __this, ::g::Fuse::Node* node, int* type)
{
    __this->ctor_2(node, *type);
}

// public TextInputActionArgs New(Fuse.Node node, Fuse.Controls.TextInputActionType type) :4146
void TextInputActionArgs__New3_fn(::g::Fuse::Node* node, int* type, TextInputActionArgs** __retval)
{
    *__retval = TextInputActionArgs::New3(node, *type);
}

// public generated Fuse.Controls.TextInputActionType get_Type() :4144
void TextInputActionArgs__get_Type_fn(TextInputActionArgs* __this, int* __retval)
{
    *__retval = __this->Type();
}

// private generated void set_Type(Fuse.Controls.TextInputActionType value) :4144
void TextInputActionArgs__set_Type_fn(TextInputActionArgs* __this, int* value)
{
    __this->Type(*value);
}

// public TextInputActionArgs(Fuse.Node node, Fuse.Controls.TextInputActionType type) [instance] :4146
void TextInputActionArgs::ctor_2(::g::Fuse::Node* node, int type)
{
    ctor_1(node);
    Type(type);
}

// public generated Fuse.Controls.TextInputActionType get_Type() [instance] :4144
int TextInputActionArgs::Type()
{
    return _Type;
}

// private generated void set_Type(Fuse.Controls.TextInputActionType value) [instance] :4144
void TextInputActionArgs::Type(int value)
{
    _Type = value;
}

// public TextInputActionArgs New(Fuse.Node node, Fuse.Controls.TextInputActionType type) [static] :4146
TextInputActionArgs* TextInputActionArgs::New3(::g::Fuse::Node* node, int type)
{
    TextInputActionArgs* obj1 = (TextInputActionArgs*)uNew(TextInputActionArgs_typeof());
    obj1->ctor_2(node, type);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(4163)
// -------------------------------------------------------------------------

// public delegate void TextInputActionHandler(object sender, Fuse.Controls.TextInputActionArgs args) :4163
uDelegateType* TextInputActionHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Controls.TextInputActionHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Controls::TextInputActionArgs_typeof());
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(4153)
// -------------------------------------------------------------------------

// public enum TextInputActionStyle :4153
uEnumType* TextInputActionStyle_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.TextInputActionStyle", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "Default", 0LL,
        "Done", 1LL,
        "Next", 2LL,
        "Go", 3LL,
        "Search", 4LL,
        "Send", 5LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(4137)
// -------------------------------------------------------------------------

// public enum TextInputActionType :4137
uEnumType* TextInputActionType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.TextInputActionType", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Primary", 0LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(4413)
// -------------------------------------------------------------------------

// public sealed class Toggle :4413
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Toggle_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Toggle);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Controls.Toggle", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)Toggle__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Toggle__Perform_fn;
    ::TYPES[196] = ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[18] = ::g::Fuse::Node_typeof();
    ::TYPES[16] = ::g::Uno::Bool_typeof();
    type->SetFields(7,
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Controls::Toggle, _Target), 0);
    return type;
}

// public generated Toggle() :4413
void Toggle__ctor_1_fn(Toggle* __this)
{
    __this->ctor_1();
}

// private Fuse.Triggers.IValue<bool> FindTarget(Fuse.Node n) :4424
void Toggle__FindTarget_fn(Toggle* __this, ::g::Fuse::Node* n, uObject** __retval)
{
    *__retval = __this->FindTarget(n);
}

// public generated Toggle New() :4413
void Toggle__New1_fn(Toggle** __retval)
{
    *__retval = Toggle::New1();
}

// protected override sealed void Perform(Fuse.Node target) :4417
void Toggle__Perform_fn(Toggle* __this, ::g::Fuse::Node* target)
{
    bool ret3;
    uObject* ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : (uObject*)__this->FindTarget(target);

    if (t != NULL)
        ::g::Fuse::Triggers::IValue::set_Value_ex(uInterface(uPtr(t), ::TYPES[196/*Fuse.Triggers.IValue<bool>*/]), uCRef(!(::g::Fuse::Triggers::IValue::get_Value_ex(uInterface(uPtr(t), ::TYPES[196/*Fuse.Triggers.IValue<bool>*/]), &ret3), ret3)));
}

// public generated Fuse.Triggers.IValue<bool> get_Target() :4415
void Toggle__get_Target_fn(Toggle* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.IValue<bool> value) :4415
void Toggle__set_Target_fn(Toggle* __this, uObject* value)
{
    __this->Target(value);
}

// public generated Toggle() [instance] :4413
void Toggle::ctor_1()
{
    ctor_();
}

// private Fuse.Triggers.IValue<bool> FindTarget(Fuse.Node n) [instance] :4424
uObject* Toggle::FindTarget(::g::Fuse::Node* n)
{
    while (n != NULL)
    {
        uObject* iv = uAs<uObject*>(n, ::TYPES[196/*Fuse.Triggers.IValue<bool>*/]);

        if (iv != NULL)
            return iv;

        n = uPtr(n)->Parent();
    }

    return NULL;
}

// public generated Fuse.Triggers.IValue<bool> get_Target() [instance] :4415
uObject* Toggle::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.IValue<bool> value) [instance] :4415
void Toggle::Target(uObject* value)
{
    _Target = value;
}

// public generated Toggle New() [static] :4413
Toggle* Toggle::New1()
{
    Toggle* obj2 = (Toggle*)uNew(Toggle_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(4436)
// -------------------------------------------------------------------------

// public class ToggleControl :4436
// {
// static ToggleControl() :4436
static void ToggleControl__cctor_4_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ToggleControl::ValueProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[197/*Fuse.StyleProperty<Fuse.Controls.ToggleControl, bool>*/], uCRef(false), NULL, uDelegate::New(::TYPES[198/*Uno.Action<Fuse.Controls.ToggleControl, bool>*/], (void*)ToggleControl__SetValue1_fn), uDelegate::New(::TYPES[199/*Uno.Func<Fuse.Controls.ToggleControl, bool>*/], (void*)ToggleControl__GetValue_fn), &ret2), ret2);
}

ToggleControl_type* ToggleControl_typeof()
{
    static uSStrong<ToggleControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 102;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(ToggleControl);
    options.TypeSize = sizeof(ToggleControl_type);
    type = (ToggleControl_type*)uClassType::New("Fuse.Controls.ToggleControl", options);
    type->SetBase(::g::Fuse::Controls::ParentControl_typeof());
    type->fp_cctor_ = ToggleControl__cctor_4_fn;
    type->interface9.fp_get_Value = (void(*)(uObject*, uTRef))ToggleControl__get_Value_fn;
    type->interface9.fp_set_Value = (void(*)(uObject*, void*))ToggleControl__set_Value_fn;
    type->interface9.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))ToggleControl__add_ValueChanged_fn;
    type->interface9.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))ToggleControl__remove_ValueChanged_fn;
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
    ::TYPES[197] = ::g::Fuse::StyleProperty1_typeof()->MakeType(ToggleControl_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[198] = ::g::Uno::Action2_typeof()->MakeType(ToggleControl_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[199] = ::g::Uno::Func1_typeof()->MakeType(ToggleControl_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[11] = ::g::Uno::Delegate_typeof();
    ::TYPES[36] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[13] = uObject_typeof();
    ::TYPES[44] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Bool_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(ToggleControl_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(ToggleControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(ToggleControl_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(ToggleControl_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(ToggleControl_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(ToggleControl_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(ToggleControl_type, interface6),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(ToggleControl_type, interface7),
        ::g::Fuse::IObjectContainer_typeof(), offsetof(ToggleControl_type, interface8),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(ToggleControl_type, interface9));
    type->SetFields(99,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::ToggleControl, _value), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Controls::ToggleControl, ValueChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(ToggleControl_typeof(), ::g::Uno::Bool_typeof()), (uintptr_t)&::g::Fuse::Controls::ToggleControl::ValueProperty_, uFieldFlagsStatic);
    return type;
}

// private static bool GetValue(Fuse.Controls.ToggleControl s) :4448
void ToggleControl__GetValue_fn(ToggleControl* s, bool* __retval)
{
    *__retval = ToggleControl::GetValue(s);
}

// protected void OnValueChanged(bool value, object origin) :4466
void ToggleControl__OnValueChanged_fn(ToggleControl* __this, bool* value, uObject* origin)
{
    __this->OnValueChanged(*value, origin);
}

// private static void SetValue(Fuse.Controls.ToggleControl s, bool value) :4452
void ToggleControl__SetValue1_fn(ToggleControl* s, bool* value)
{
    ToggleControl::SetValue1(s, *value);
}

// public bool get_Value() :4445
void ToggleControl__get_Value_fn(ToggleControl* __this, bool* __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(bool value) :4446
void ToggleControl__set_Value_fn(ToggleControl* __this, bool* value)
{
    __this->Value(*value);
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<bool> value) :4472
void ToggleControl__add_ValueChanged_fn(ToggleControl* __this, uDelegate* value)
{
    __this->add_ValueChanged(value);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<bool> value) :4472
void ToggleControl__remove_ValueChanged_fn(ToggleControl* __this, uDelegate* value)
{
    __this->remove_ValueChanged(value);
}

uSStrong< ::g::Fuse::StyleProperty1*> ToggleControl::ValueProperty_;

// protected void OnValueChanged(bool value, object origin) [instance] :4466
void ToggleControl::OnValueChanged(bool value, uObject* origin)
{
    bool value_ = value;

    if (::g::Uno::Delegate::op_Inequality(ValueChanged1, NULL))
        uPtr(ValueChanged1)->Invoke(2, this, (::g::Fuse::Scripting::BoolChangedArgs*)::g::Fuse::Scripting::BoolChangedArgs::New4(value_, origin));
}

// public bool get_Value() [instance] :4445
bool ToggleControl::Value()
{
    return _value;
}

// public void set_Value(bool value) [instance] :4446
void ToggleControl::Value(bool value)
{
    bool ret3;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(ToggleControl::ValueProperty()), this, uCRef(value), &ret3);
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<bool> value) [instance] :4472
void ToggleControl::add_ValueChanged(uDelegate* value)
{
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ValueChanged1, value), ::TYPES[36/*Uno.UX.ValueChangedHandler<bool>*/]);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<bool> value) [instance] :4472
void ToggleControl::remove_ValueChanged(uDelegate* value)
{
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ValueChanged1, value), ::TYPES[36/*Uno.UX.ValueChangedHandler<bool>*/]);
}

// private static bool GetValue(Fuse.Controls.ToggleControl s) [static] :4448
bool ToggleControl::GetValue(ToggleControl* s)
{
    ToggleControl_typeof()->Init();
    return uPtr(s)->_value;
}

// private static void SetValue(Fuse.Controls.ToggleControl s, bool value) [static] :4452
void ToggleControl::SetValue1(ToggleControl* s, bool value)
{
    ToggleControl_typeof()->Init();
    uPtr(s)->_value = value;
    s->OnValueChanged(value, NULL);
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(4492)
// -------------------------------------------------------------------------

// public class TopFrameBackground :4492
// {
::g::Fuse::Controls::Control_type* TopFrameBackground_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 88;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(TopFrameBackground);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("Fuse.Controls.TopFrameBackground", options);
    type->SetBase(::g::Fuse::Controls::Control_typeof());
    type->fp_GetContentSize = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TopFrameBackground__GetContentSize_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))TopFrameBackground__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))TopFrameBackground__OnUnrooted_fn;
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
    ::TYPES[3] = ::g::Uno::Rect_typeof();
    ::TYPES[6] = ::g::Uno::Platform::SystemUI_typeof();
    ::TYPES[1] = ::g::Fuse::AppBase_typeof();
    ::TYPES[7] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface6));
    type->SetFields(88);
    return type;
}

// public generated TopFrameBackground() :4492
void TopFrameBackground__ctor_3_fn(TopFrameBackground* __this)
{
    __this->ctor_3();
}

// protected override sealed float2 GetContentSize(Fuse.LayoutParams lp) :4513
void TopFrameBackground__GetContentSize_fn(TopFrameBackground* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 x = ::g::Uno::Float2__op_Division1(::g::Uno::Platform::SystemUI::TopFrame().Size(), uPtr(::g::Fuse::AppBase::Current1())->OSPointDensity());
    return *__retval = x, void();
    return *__retval = ::g::Uno::Float2__New2(0.0f, 0.0f), void();
}

// private extern void OnFrameResized(object sender, Uno.Platform.SystemUIWillResizeEventArgs args) :4508
void TopFrameBackground__OnFrameResized_fn(TopFrameBackground* __this, uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    __this->OnFrameResized(sender, args);
}

// protected override sealed void OnRooted() :4494
void TopFrameBackground__OnRooted_fn(TopFrameBackground* __this)
{
    ::g::Fuse::Controls::Control__OnRooted_fn(__this);
    ::g::Uno::Platform::SystemUI::add_TopFrameWillResize(uDelegate::New(::TYPES[7/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/], (void*)TopFrameBackground__OnFrameResized_fn, __this));
}

// protected override sealed void OnUnrooted() :4500
void TopFrameBackground__OnUnrooted_fn(TopFrameBackground* __this)
{
    ::g::Fuse::Controls::Control__OnUnrooted_fn(__this);
    ::g::Uno::Platform::SystemUI::remove_TopFrameWillResize(uDelegate::New(::TYPES[7/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/], (void*)TopFrameBackground__OnFrameResized_fn, __this));
}

// public generated TopFrameBackground() [instance] :4492
void TopFrameBackground::ctor_3()
{
    ctor_2();
}

// private extern void OnFrameResized(object sender, Uno.Platform.SystemUIWillResizeEventArgs args) [instance] :4508
void TopFrameBackground::OnFrameResized(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    InvalidateLayout(2);
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/$.uno(4580)
// -------------------------------------------------------------------------

// public sealed class Video :4580
// {
// static Video() :4580
static void Video__cctor_4_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    ::g::Fuse::StyleProperty1* ret4;
    ::g::Fuse::StyleProperty1* ret5;
    ::g::Fuse::StyleProperty1* ret6;
    ::g::Fuse::StyleProperty1* ret7;
    ::g::Fuse::StyleProperty1* ret8;
    Video::IsLoopingProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[200/*Fuse.StyleProperty<Fuse.Controls.Video, bool>*/], uCRef(false), uDelegate::New(::TYPES[201/*Uno.Action<Fuse.Controls.Video>*/], (void*)Video__UpdateParam_fn), &ret2), ret2);
    Video::AutoPlayProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[200/*Fuse.StyleProperty<Fuse.Controls.Video, bool>*/], uCRef(false), uDelegate::New(::TYPES[201/*Uno.Action<Fuse.Controls.Video>*/], (void*)Video__UpdateParam_fn), &ret3), ret3);
    Video::StretchModeProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[202/*Fuse.StyleProperty<Fuse.Controls.Video, Fuse.Elements.StretchMode>*/], uCRef<int>(5), uDelegate::New(::TYPES[201/*Uno.Action<Fuse.Controls.Video>*/], (void*)Video__UpdateRenderParam_fn), &ret4), ret4);
    Video::StretchDirectionProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[203/*Fuse.StyleProperty<Fuse.Controls.Video, Fuse.Elements.StretchDirection>*/], uCRef<int>(0), uDelegate::New(::TYPES[201/*Uno.Action<Fuse.Controls.Video>*/], (void*)Video__UpdateRenderParam_fn), &ret5), ret5);
    Video::StretchSizingProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[204/*Fuse.StyleProperty<Fuse.Controls.Video, Fuse.Elements.StretchSizing>*/], uCRef<int>(1), uDelegate::New(::TYPES[201/*Uno.Action<Fuse.Controls.Video>*/], (void*)Video__UpdateRenderParam_fn), &ret6), ret6);
    Video::ContentAlignmentProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[205/*Fuse.StyleProperty<Fuse.Controls.Video, Fuse.Elements.Alignment>*/], uCRef<int>(10), uDelegate::New(::TYPES[201/*Uno.Action<Fuse.Controls.Video>*/], (void*)Video__UpdateRenderParam_fn), &ret7), ret7);
    Video::VolumeProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[206/*Fuse.StyleProperty<Fuse.Controls.Video, float>*/], uCRef(1.0f), uDelegate::New(::TYPES[201/*Uno.Action<Fuse.Controls.Video>*/], (void*)Video__UpdateParam_fn), &ret8), ret8);
}

Video_type* Video_typeof()
{
    static uSStrong<Video_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 115;
    options.InterfaceCount = 12;
    options.ObjectSize = sizeof(Video);
    options.TypeSize = sizeof(Video_type);
    type = (Video_type*)uClassType::New("Fuse.Controls.Video", options);
    type->SetBase(::g::Fuse::Controls::ParentControl_typeof());
    type->fp_cctor_ = Video__cctor_4_fn;
    type->interface10.fp_Stop = (void(*)(uObject*))Video__Stop_fn;
    type->interface10.fp_PlayTo = (void(*)(uObject*, double*))Video__PlayTo_fn;
    type->interface10.fp_Pause = (void(*)(uObject*))Video__Pause_fn;
    type->interface10.fp_Resume = (void(*)(uObject*))Video__Resume_fn;
    type->interface10.fp_get_Progress = (void(*)(uObject*, double*))Video__get_Progress_fn;
    type->interface10.fp_set_Progress = (void(*)(uObject*, double*))Video__set_Progress_fn;
    type->interface10.fp_get_CanPlayTo = (void(*)(uObject*, bool*))Video__get_CanPlayTo_fn;
    type->interface10.fp_get_CanStop = (void(*)(uObject*, bool*))Video__get_CanStop_fn;
    type->interface10.fp_get_CanPause = (void(*)(uObject*, bool*))Video__get_CanPause_fn;
    type->interface10.fp_get_CanResume = (void(*)(uObject*, bool*))Video__get_CanResume_fn;
    type->interface11.fp_get_Progress = (void(*)(uObject*, double*))Video__get_Progress_fn;
    type->interface11.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))Video__add_ProgressChanged_fn;
    type->interface11.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))Video__remove_ProgressChanged_fn;
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
    ::TYPES[200] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[201] = ::g::Uno::Action1_typeof()->MakeType(Video_typeof());
    ::TYPES[202] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Fuse::Elements::StretchMode_typeof());
    ::TYPES[203] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Fuse::Elements::StretchDirection_typeof());
    ::TYPES[204] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Fuse::Elements::StretchSizing_typeof());
    ::TYPES[205] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Fuse::Elements::Alignment_typeof());
    ::TYPES[206] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[11] = ::g::Uno::Delegate_typeof();
    ::TYPES[25] = ::g::Uno::EventHandler_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[26] = ::g::Uno::EventArgs_typeof();
    ::TYPES[49] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[128] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[207] = ::g::Fuse::Triggers::IPlayback_typeof();
    ::TYPES[208] = ::g::Fuse::Triggers::IProgress_typeof();
    ::TYPES[16] = ::g::Uno::Bool_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(Video_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(Video_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(Video_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(Video_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(Video_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(Video_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(Video_type, interface6),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(Video_type, interface7),
        ::g::Fuse::IObjectContainer_typeof(), offsetof(Video_type, interface8),
        ::g::Fuse::Triggers::IMediaPlayback_typeof(), offsetof(Video_type, interface9),
        ::g::Fuse::Triggers::IPlayback_typeof(), offsetof(Video_type, interface10),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(Video_type, interface11));
    type->SetFields(99,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Controls::Video, _file), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Video, _hasScale9Margin), 0,
        ::g::Fuse::Triggers::IMediaPlayback_typeof(), offsetof(::g::Fuse::Controls::Video, _playback), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::Video, _scale9Margin), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::Video, _url), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::Video, ParamChanged1), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::Controls::Video, ProgressChanged1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::Video, RenderParamChanged1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::Video, SourceChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Uno::Bool_typeof()), (uintptr_t)&::g::Fuse::Controls::Video::AutoPlayProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Fuse::Elements::Alignment_typeof()), (uintptr_t)&::g::Fuse::Controls::Video::ContentAlignmentProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Uno::Bool_typeof()), (uintptr_t)&::g::Fuse::Controls::Video::IsLoopingProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Fuse::Elements::StretchDirection_typeof()), (uintptr_t)&::g::Fuse::Controls::Video::StretchDirectionProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Fuse::Elements::StretchMode_typeof()), (uintptr_t)&::g::Fuse::Controls::Video::StretchModeProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Fuse::Elements::StretchSizing_typeof()), (uintptr_t)&::g::Fuse::Controls::Video::StretchSizingProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Uno::Float_typeof()), (uintptr_t)&::g::Fuse::Controls::Video::VolumeProperty_, uFieldFlagsStatic);
    return type;
}

// public bool get_AutoPlay() :4686
void Video__get_AutoPlay_fn(Video* __this, bool* __retval)
{
    *__retval = __this->AutoPlay();
}

// public void set_AutoPlay(bool value) :4687
void Video__set_AutoPlay_fn(Video* __this, bool* value)
{
    __this->AutoPlay(*value);
}

// public bool get_CanPause() :4816
void Video__get_CanPause_fn(Video* __this, bool* __retval)
{
    *__retval = __this->CanPause();
}

// public bool get_CanPlayTo() :4806
void Video__get_CanPlayTo_fn(Video* __this, bool* __retval)
{
    *__retval = __this->CanPlayTo();
}

// public bool get_CanResume() :4821
void Video__get_CanResume_fn(Video* __this, bool* __retval)
{
    *__retval = __this->CanResume();
}

// public bool get_CanStop() :4811
void Video__get_CanStop_fn(Video* __this, bool* __retval)
{
    *__retval = __this->CanStop();
}

// public Fuse.Elements.Alignment get_ContentAlignment() :4714
void Video__get_ContentAlignment_fn(Video* __this, int* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :4715
void Video__set_ContentAlignment_fn(Video* __this, int* value)
{
    __this->ContentAlignment(*value);
}

// public Uno.UX.FileSource get_File() :4633
void Video__get_File_fn(Video* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :4634
void Video__set_File_fn(Video* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public bool get_IsLooping() :4679
void Video__get_IsLooping_fn(Video* __this, bool* __retval)
{
    *__retval = __this->IsLooping();
}

// public void set_IsLooping(bool value) :4680
void Video__set_IsLooping_fn(Video* __this, bool* value)
{
    __this->IsLooping(*value);
}

// private void OnParamChanged() :4768
void Video__OnParamChanged_fn(Video* __this)
{
    __this->OnParamChanged();
}

// private void OnProgressChanged(object sender, Uno.EventArgs args) :4862
void Video__OnProgressChanged_fn(Video* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnProgressChanged(sender, args);
}

// private void OnRenderParamChanged() :4762
void Video__OnRenderParamChanged_fn(Video* __this)
{
    __this->OnRenderParamChanged();
}

// private void OnSourceChanged() :4774
void Video__OnSourceChanged_fn(Video* __this)
{
    __this->OnSourceChanged();
}

// public generated void add_ParamChanged(Uno.EventHandler value) :4758
void Video__add_ParamChanged_fn(Video* __this, uDelegate* value)
{
    __this->add_ParamChanged(value);
}

// public generated void remove_ParamChanged(Uno.EventHandler value) :4758
void Video__remove_ParamChanged_fn(Video* __this, uDelegate* value)
{
    __this->remove_ParamChanged(value);
}

// public void Pause() :4792
void Video__Pause_fn(Video* __this)
{
    __this->Pause();
}

// private Fuse.Triggers.IMediaPlayback get_Playback() :4847
void Video__get_Playback_fn(Video* __this, uObject** __retval)
{
    *__retval = __this->Playback();
}

// private void set_Playback(Fuse.Triggers.IMediaPlayback value) :4848
void Video__set_Playback_fn(Video* __this, uObject* value)
{
    __this->Playback(value);
}

// public void PlayTo(double progress) :4786
void Video__PlayTo_fn(Video* __this, double* progress)
{
    __this->PlayTo(*progress);
}

// public double get_Progress() :4827
void Video__get_Progress_fn(Video* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public void set_Progress(double value) :4828
void Video__set_Progress_fn(Video* __this, double* value)
{
    __this->Progress(*value);
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :4842
void Video__add_ProgressChanged_fn(Video* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :4842
void Video__remove_ProgressChanged_fn(Video* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public generated void add_RenderParamChanged(Uno.EventHandler value) :4756
void Video__add_RenderParamChanged_fn(Video* __this, uDelegate* value)
{
    __this->add_RenderParamChanged(value);
}

// public generated void remove_RenderParamChanged(Uno.EventHandler value) :4756
void Video__remove_RenderParamChanged_fn(Video* __this, uDelegate* value)
{
    __this->remove_RenderParamChanged(value);
}

// public void Resume() :4798
void Video__Resume_fn(Video* __this)
{
    __this->Resume();
}

// public float4 get_Scale9Margin() :4664
void Video__get_Scale9Margin_fn(Video* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Scale9Margin();
}

// public void set_Scale9Margin(float4 value) :4665
void Video__set_Scale9Margin_fn(Video* __this, ::g::Uno::Float4* value)
{
    __this->Scale9Margin(*value);
}

// public void SetPlayback(Fuse.Triggers.IMediaPlayback playback) :4868
void Video__SetPlayback_fn(Video* __this, uObject* playback)
{
    __this->SetPlayback(playback);
}

// public generated void add_SourceChanged(Uno.EventHandler value) :4760
void Video__add_SourceChanged_fn(Video* __this, uDelegate* value)
{
    __this->add_SourceChanged(value);
}

// public generated void remove_SourceChanged(Uno.EventHandler value) :4760
void Video__remove_SourceChanged_fn(Video* __this, uDelegate* value)
{
    __this->remove_SourceChanged(value);
}

// public void Stop() :4780
void Video__Stop_fn(Video* __this)
{
    __this->Stop();
}

// public Fuse.Elements.StretchDirection get_StretchDirection() :4700
void Video__get_StretchDirection_fn(Video* __this, int* __retval)
{
    *__retval = __this->StretchDirection();
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) :4701
void Video__set_StretchDirection_fn(Video* __this, int* value)
{
    __this->StretchDirection(*value);
}

// public Fuse.Elements.StretchMode get_StretchMode() :4693
void Video__get_StretchMode_fn(Video* __this, int* __retval)
{
    *__retval = __this->StretchMode();
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) :4694
void Video__set_StretchMode_fn(Video* __this, int* value)
{
    __this->StretchMode(*value);
}

// public Fuse.Elements.StretchSizing get_StretchSizing() :4707
void Video__get_StretchSizing_fn(Video* __this, int* __retval)
{
    *__retval = __this->StretchSizing();
}

// public void set_StretchSizing(Fuse.Elements.StretchSizing value) :4708
void Video__set_StretchSizing_fn(Video* __this, int* value)
{
    __this->StretchSizing(*value);
}

// private static void UpdateParam(Fuse.Controls.Video video) :4746
void Video__UpdateParam_fn(Video* video)
{
    Video::UpdateParam(video);
}

// private static void UpdateRenderParam(Fuse.Controls.Video video) :4751
void Video__UpdateRenderParam_fn(Video* video)
{
    Video::UpdateRenderParam(video);
}

// public string get_Url() :4648
void Video__get_Url_fn(Video* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :4649
void Video__set_Url_fn(Video* __this, uString* value)
{
    __this->Url(value);
}

// public float get_Volume() :4721
void Video__get_Volume_fn(Video* __this, float* __retval)
{
    *__retval = __this->Volume();
}

// public void set_Volume(float value) :4722
void Video__set_Volume_fn(Video* __this, float* value)
{
    __this->Volume(*value);
}

uSStrong< ::g::Fuse::StyleProperty1*> Video::AutoPlayProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Video::ContentAlignmentProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Video::IsLoopingProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Video::StretchDirectionProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Video::StretchModeProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Video::StretchSizingProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Video::VolumeProperty_;

// public bool get_AutoPlay() [instance] :4686
bool Video::AutoPlay()
{
    bool ret10;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Video::AutoPlayProperty()), this, &ret10), ret10);
}

// public void set_AutoPlay(bool value) [instance] :4687
void Video::AutoPlay(bool value)
{
    bool ret11;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Video::AutoPlayProperty()), this, uCRef(value), &ret11);
}

// public bool get_CanPause() [instance] :4816
bool Video::CanPause()
{
    return (Playback() != NULL) ? ::g::Fuse::Triggers::IPlayback::CanPause(uInterface(uPtr(Playback()), ::TYPES[207/*Fuse.Triggers.IPlayback*/])) : false;
}

// public bool get_CanPlayTo() [instance] :4806
bool Video::CanPlayTo()
{
    return (Playback() != NULL) ? ::g::Fuse::Triggers::IPlayback::CanPlayTo(uInterface(uPtr(Playback()), ::TYPES[207/*Fuse.Triggers.IPlayback*/])) : false;
}

// public bool get_CanResume() [instance] :4821
bool Video::CanResume()
{
    return (Playback() != NULL) ? ::g::Fuse::Triggers::IPlayback::CanResume(uInterface(uPtr(Playback()), ::TYPES[207/*Fuse.Triggers.IPlayback*/])) : false;
}

// public bool get_CanStop() [instance] :4811
bool Video::CanStop()
{
    return (Playback() != NULL) ? ::g::Fuse::Triggers::IPlayback::CanStop(uInterface(uPtr(Playback()), ::TYPES[207/*Fuse.Triggers.IPlayback*/])) : false;
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :4714
int Video::ContentAlignment()
{
    int ret12;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Video::ContentAlignmentProperty()), this, &ret12), ret12);
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :4715
void Video::ContentAlignment(int value)
{
    bool ret13;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Video::ContentAlignmentProperty()), this, uCRef<int>(value), &ret13);
}

// public Uno.UX.FileSource get_File() [instance] :4633
::g::Uno::UX::FileSource* Video::File()
{
    return _file;
}

// public void set_File(Uno.UX.FileSource value) [instance] :4634
void Video::File(::g::Uno::UX::FileSource* value)
{
    if (_file != value)
    {
        _file = value;
        OnSourceChanged();
    }
}

// public bool get_IsLooping() [instance] :4679
bool Video::IsLooping()
{
    bool ret14;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Video::IsLoopingProperty()), this, &ret14), ret14);
}

// public void set_IsLooping(bool value) [instance] :4680
void Video::IsLooping(bool value)
{
    bool ret15;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Video::IsLoopingProperty()), this, uCRef(value), &ret15);
}

// private void OnParamChanged() [instance] :4768
void Video::OnParamChanged()
{
    if (::g::Uno::Delegate::op_Inequality(ParamChanged1, NULL))
        uPtr(ParamChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnProgressChanged(object sender, Uno.EventArgs args) [instance] :4862
void Video::OnProgressChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Uno::UX::ValueChangedArgs* ret9;

    if (::g::Uno::Delegate::op_Inequality(ProgressChanged1, NULL))
        uPtr(ProgressChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[128/*Uno.UX.ValueChangedArgs<double>*/], uCRef(Progress()), this, &ret9), ret9));
}

// private void OnRenderParamChanged() [instance] :4762
void Video::OnRenderParamChanged()
{
    if (::g::Uno::Delegate::op_Inequality(RenderParamChanged1, NULL))
        uPtr(RenderParamChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnSourceChanged() [instance] :4774
void Video::OnSourceChanged()
{
    if (::g::Uno::Delegate::op_Inequality(SourceChanged1, NULL))
        uPtr(SourceChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public generated void add_ParamChanged(Uno.EventHandler value) [instance] :4758
void Video::add_ParamChanged(uDelegate* value)
{
    ParamChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ParamChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public generated void remove_ParamChanged(Uno.EventHandler value) [instance] :4758
void Video::remove_ParamChanged(uDelegate* value)
{
    ParamChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ParamChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public void Pause() [instance] :4792
void Video::Pause()
{
    if (Playback() != NULL)
        ::g::Fuse::Triggers::IPlayback::Pause(uInterface(uPtr(Playback()), ::TYPES[207/*Fuse.Triggers.IPlayback*/]));
}

// private Fuse.Triggers.IMediaPlayback get_Playback() [instance] :4847
uObject* Video::Playback()
{
    return _playback;
}

// private void set_Playback(Fuse.Triggers.IMediaPlayback value) [instance] :4848
void Video::Playback(uObject* value)
{
    if (_playback != NULL)
        ::g::Fuse::Triggers::IProgress::remove_ProgressChanged(uInterface(uPtr(_playback), ::TYPES[208/*Fuse.Triggers.IProgress*/]), uDelegate::New(::TYPES[49/*Uno.UX.ValueChangedHandler<double>*/], (void*)Video__OnProgressChanged_fn, this));

    _playback = value;

    if (_playback != NULL)
        ::g::Fuse::Triggers::IProgress::add_ProgressChanged(uInterface(uPtr(_playback), ::TYPES[208/*Fuse.Triggers.IProgress*/]), uDelegate::New(::TYPES[49/*Uno.UX.ValueChangedHandler<double>*/], (void*)Video__OnProgressChanged_fn, this));

    OnProgressChanged(NULL, NULL);
}

// public void PlayTo(double progress) [instance] :4786
void Video::PlayTo(double progress)
{
    if (Playback() != NULL)
        ::g::Fuse::Triggers::IPlayback::PlayTo(uInterface(uPtr(Playback()), ::TYPES[207/*Fuse.Triggers.IPlayback*/]), progress);
}

// public double get_Progress() [instance] :4827
double Video::Progress()
{
    return (Playback() != NULL) ? ::g::Fuse::Triggers::IPlayback::Progress(uInterface(uPtr(uAs<uObject*>(Playback(), ::TYPES[207/*Fuse.Triggers.IPlayback*/])), ::TYPES[207/*Fuse.Triggers.IPlayback*/])) : 0.0;
}

// public void set_Progress(double value) [instance] :4828
void Video::Progress(double value)
{
    if (Playback() != NULL)
        ::g::Fuse::Triggers::IPlayback::Progress(uInterface(uPtr(uAs<uObject*>(Playback(), ::TYPES[207/*Fuse.Triggers.IPlayback*/])), ::TYPES[207/*Fuse.Triggers.IPlayback*/]), value);
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :4842
void Video::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[49/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :4842
void Video::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[49/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void add_RenderParamChanged(Uno.EventHandler value) [instance] :4756
void Video::add_RenderParamChanged(uDelegate* value)
{
    RenderParamChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(RenderParamChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public generated void remove_RenderParamChanged(Uno.EventHandler value) [instance] :4756
void Video::remove_RenderParamChanged(uDelegate* value)
{
    RenderParamChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(RenderParamChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public void Resume() [instance] :4798
void Video::Resume()
{
    if (Playback() != NULL)
        ::g::Fuse::Triggers::IPlayback::Resume(uInterface(uPtr(Playback()), ::TYPES[207/*Fuse.Triggers.IPlayback*/]));
}

// public float4 get_Scale9Margin() [instance] :4664
::g::Uno::Float4 Video::Scale9Margin()
{
    return _scale9Margin;
}

// public void set_Scale9Margin(float4 value) [instance] :4665
void Video::Scale9Margin(::g::Uno::Float4 value)
{
    if (!_hasScale9Margin || ::g::Uno::Float4::op_Inequality(_scale9Margin, value))
    {
        _scale9Margin = value;
        _hasScale9Margin = true;
        OnParamChanged();
    }
}

// public void SetPlayback(Fuse.Triggers.IMediaPlayback playback) [instance] :4868
void Video::SetPlayback(uObject* playback)
{
    Playback(playback);
}

// public generated void add_SourceChanged(Uno.EventHandler value) [instance] :4760
void Video::add_SourceChanged(uDelegate* value)
{
    SourceChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SourceChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public generated void remove_SourceChanged(Uno.EventHandler value) [instance] :4760
void Video::remove_SourceChanged(uDelegate* value)
{
    SourceChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SourceChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public void Stop() [instance] :4780
void Video::Stop()
{
    if (Playback() != NULL)
        ::g::Fuse::Triggers::IPlayback::Stop(uInterface(uPtr(Playback()), ::TYPES[207/*Fuse.Triggers.IPlayback*/]));
}

// public Fuse.Elements.StretchDirection get_StretchDirection() [instance] :4700
int Video::StretchDirection()
{
    int ret16;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Video::StretchDirectionProperty()), this, &ret16), ret16);
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) [instance] :4701
void Video::StretchDirection(int value)
{
    bool ret17;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Video::StretchDirectionProperty()), this, uCRef<int>(value), &ret17);
}

// public Fuse.Elements.StretchMode get_StretchMode() [instance] :4693
int Video::StretchMode()
{
    int ret18;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Video::StretchModeProperty()), this, &ret18), ret18);
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) [instance] :4694
void Video::StretchMode(int value)
{
    bool ret19;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Video::StretchModeProperty()), this, uCRef<int>(value), &ret19);
}

// public Fuse.Elements.StretchSizing get_StretchSizing() [instance] :4707
int Video::StretchSizing()
{
    int ret20;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Video::StretchSizingProperty()), this, &ret20), ret20);
}

// public void set_StretchSizing(Fuse.Elements.StretchSizing value) [instance] :4708
void Video::StretchSizing(int value)
{
    bool ret21;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Video::StretchSizingProperty()), this, uCRef<int>(value), &ret21);
}

// public string get_Url() [instance] :4648
uString* Video::Url()
{
    return _url;
}

// public void set_Url(string value) [instance] :4649
void Video::Url(uString* value)
{
    if (::g::Uno::String::op_Inequality(_url, value))
    {
        _url = value;
        OnSourceChanged();
    }
}

// public float get_Volume() [instance] :4721
float Video::Volume()
{
    float ret22;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Video::VolumeProperty()), this, &ret22), ret22);
}

// public void set_Volume(float value) [instance] :4722
void Video::Volume(float value)
{
    bool ret23;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Video::VolumeProperty()), this, uCRef(value), &ret23);
}

// private static void UpdateParam(Fuse.Controls.Video video) [static] :4746
void Video::UpdateParam(Video* video)
{
    Video_typeof()->Init();
    uPtr(video)->OnParamChanged();
}

// private static void UpdateRenderParam(Fuse.Controls.Video video) [static] :4751
void Video::UpdateRenderParam(Video* video)
{
    Video_typeof()->Init();
    uPtr(video)->OnRenderParamChanged();
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Controls/0.24.6/WebView/$.uno(309)
// --------------------------------------------------------------------------------

// public sealed class WebView :309
// {
WebView_type* WebView_typeof()
{
    static uSStrong<WebView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 106;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(WebView);
    options.TypeSize = sizeof(WebView_type);
    type = (WebView_type*)uClassType::New("Fuse.Controls.WebView", options);
    type->SetBase(::g::Fuse::Controls::ParentControl_typeof());
    type->interface9.fp_Eval1 = (void(*)(uObject*, uString*, uDelegate*))WebView__Eval1_fn;
    type->interface9.fp_Eval = (void(*)(uObject*, uString*))WebView__Eval_fn;
    type->interface9.fp_LoadHtml1 = (void(*)(uObject*, uString*, uString*))WebView__LoadHtml1_fn;
    type->interface9.fp_LoadUrl = (void(*)(uObject*, uString*))WebView__LoadUrl_fn;
    type->interface9.fp_Stop = (void(*)(uObject*))WebView__Stop_fn;
    type->interface9.fp_Reload = (void(*)(uObject*))WebView__Reload_fn;
    type->interface9.fp_get_BaseUrl = (void(*)(uObject*, uString**))WebView__get_BaseUrl_fn;
    type->interface9.fp_set_BaseUrl = (void(*)(uObject*, uString*))WebView__set_BaseUrl_fn;
    type->interface9.fp_get_Url = (void(*)(uObject*, uString**))WebView__get_Url_fn;
    type->interface9.fp_set_Url = (void(*)(uObject*, uString*))WebView__set_Url_fn;
    type->interface9.fp_get_File = (void(*)(uObject*, ::g::Uno::UX::FileSource**))WebView__get_File_fn;
    type->interface9.fp_set_File = (void(*)(uObject*, ::g::Uno::UX::FileSource*))WebView__set_File_fn;
    type->interface9.fp_add_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__add_PageLoaded_fn;
    type->interface9.fp_remove_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__remove_PageLoaded_fn;
    type->interface9.fp_add_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__add_BeginLoading_fn;
    type->interface9.fp_remove_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__remove_BeginLoading_fn;
    type->interface9.fp_add_UrlChanged = (void(*)(uObject*, uDelegate*))WebView__add_UrlChanged_fn;
    type->interface9.fp_remove_UrlChanged = (void(*)(uObject*, uDelegate*))WebView__remove_UrlChanged_fn;
    type->interface10.fp_get_Progress = (void(*)(uObject*, double*))WebView__get_Progress_fn;
    type->interface10.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__add_ProgressChanged_fn;
    type->interface10.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__remove_ProgressChanged_fn;
    type->interface11.fp_GoForward = (void(*)(uObject*))WebView__GoForward_fn;
    type->interface11.fp_GoBack = (void(*)(uObject*))WebView__GoBack_fn;
    type->interface11.fp_get_CanGoBack = (void(*)(uObject*, bool*))WebView__get_CanGoBack_fn;
    type->interface11.fp_get_CanGoForward = (void(*)(uObject*, bool*))WebView__get_CanGoForward_fn;
    type->interface12.fp_get_Source = (void(*)(uObject*, uString**))WebView__get_Source_fn;
    type->interface12.fp_set_Source = (void(*)(uObject*, uString*))WebView__set_Source_fn;
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
    ::STRINGS[12] = uString::Const("about:blank");
    ::STRINGS[0] = uString::Const("");
    ::TYPES[209] = ::g::Fuse::Controls::FallbackWebViewClient_typeof();
    ::TYPES[11] = ::g::Uno::Delegate_typeof();
    ::TYPES[25] = ::g::Uno::EventHandler_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[26] = ::g::Uno::EventArgs_typeof();
    ::TYPES[49] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[128] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[210] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[14] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[12] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[211] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    ::TYPES[208] = ::g::Fuse::Triggers::IProgress_typeof();
    ::TYPES[212] = ::g::Fuse::Controls::ISourceReceiver_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(WebView_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(WebView_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(WebView_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(WebView_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(WebView_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(WebView_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(WebView_type, interface6),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(WebView_type, interface7),
        ::g::Fuse::IObjectContainer_typeof(), offsetof(WebView_type, interface8),
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(WebView_type, interface9),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(WebView_type, interface10),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(WebView_type, interface11),
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(WebView_type, interface12));
    type->SetFields(99,
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(::g::Fuse::Controls::WebView, _fallbackClient), 0,
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(::g::Fuse::Controls::WebView, _webViewClient), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::WebView, BeginLoading1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::WebView, PageLoaded1), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::Controls::WebView, ProgressChanged1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::WebView, UrlChanged1), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Controls::WebView, UrlChangedHandler1), 0);
    return type;
}

// private void applyFallbackCalls(Fuse.Controls.IWebView client) :401
void WebView__applyFallbackCalls_fn(WebView* __this, uObject* client)
{
    __this->applyFallbackCalls(client);
}

// public string get_BaseUrl() :448
void WebView__get_BaseUrl_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->BaseUrl();
}

// public void set_BaseUrl(string value) :449
void WebView__set_BaseUrl_fn(WebView* __this, uString* value)
{
    __this->BaseUrl(value);
}

// public generated void add_BeginLoading(Uno.EventHandler value) :318
void WebView__add_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->add_BeginLoading(value);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) :318
void WebView__remove_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->remove_BeginLoading(value);
}

// public bool get_CanGoBack() :488
void WebView__get_CanGoBack_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// public bool get_CanGoForward() :493
void WebView__get_CanGoForward_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoForward();
}

// public void Eval(string js) :496
void WebView__Eval_fn(WebView* __this, uString* js)
{
    __this->Eval(js);
}

// public void Eval(string js, Uno.Action<string> resultHandler) :501
void WebView__Eval1_fn(WebView* __this, uString* js, uDelegate* resultHandler)
{
    __this->Eval1(js, resultHandler);
}

// public Uno.UX.FileSource get_File() :482
void WebView__get_File_fn(WebView* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :483
void WebView__set_File_fn(WebView* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public void GoBack() :506
void WebView__GoBack_fn(WebView* __this)
{
    __this->GoBack();
}

// public void GoForward() :511
void WebView__GoForward_fn(WebView* __this)
{
    __this->GoForward();
}

// public void LoadHtml(string html, string baseUrl) :437
void WebView__LoadHtml1_fn(WebView* __this, uString* html, uString* baseUrl)
{
    __this->LoadHtml1(html, baseUrl);
}

// public void LoadUrl(string url) :526
void WebView__LoadUrl_fn(WebView* __this, uString* url)
{
    __this->LoadUrl(url);
}

// private void OnBeginLoading(object sender, Uno.EventArgs args) :414
void WebView__OnBeginLoading_fn(WebView* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnBeginLoading(sender, args);
}

// private void OnPageChanged(object sender, Uno.EventArgs args) :407
void WebView__OnPageChanged_fn(WebView* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnPageChanged(sender, args);
}

// private void OnPageLoaded(object sender, Uno.EventArgs args) :426
void WebView__OnPageLoaded_fn(WebView* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnPageLoaded(sender, args);
}

// private void OnProgressChanged(object sender, Uno.EventArgs args) :420
void WebView__OnProgressChanged_fn(WebView* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnProgressChanged(sender, args);
}

// public void OnURLChanged(string value, object sender) :465
void WebView__OnURLChanged_fn(WebView* __this, uString* value, uObject* sender)
{
    __this->OnURLChanged(value, sender);
}

// public generated void add_PageLoaded(Uno.EventHandler value) :317
void WebView__add_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->add_PageLoaded(value);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) :317
void WebView__remove_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->remove_PageLoaded(value);
}

// public double get_Progress() :313
void WebView__get_Progress_fn(WebView* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :316
void WebView__add_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :316
void WebView__remove_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public void Reload() :516
void WebView__Reload_fn(WebView* __this)
{
    __this->Reload();
}

// public string get_Source() :454
void WebView__get_Source_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(string value) :455
void WebView__set_Source_fn(WebView* __this, uString* value)
{
    __this->Source(value);
}

// public void Stop() :521
void WebView__Stop_fn(WebView* __this)
{
    __this->Stop();
}

// internal void UpdateRestState() :458
void WebView__UpdateRestState_fn(WebView* __this)
{
    __this->UpdateRestState();
}

// public string get_Url() :476
void WebView__get_Url_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :477
void WebView__set_Url_fn(WebView* __this, uString* value)
{
    __this->Url(value);
}

// public generated void add_UrlChanged(Uno.EventHandler value) :319
void WebView__add_UrlChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_UrlChanged(value);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) :319
void WebView__remove_UrlChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_UrlChanged(value);
}

// public generated void add_UrlChangedHandler(Uno.UX.ValueChangedHandler<string> value) :464
void WebView__add_UrlChangedHandler_fn(WebView* __this, uDelegate* value)
{
    __this->add_UrlChangedHandler(value);
}

// public generated void remove_UrlChangedHandler(Uno.UX.ValueChangedHandler<string> value) :464
void WebView__remove_UrlChangedHandler_fn(WebView* __this, uDelegate* value)
{
    __this->remove_UrlChangedHandler(value);
}

// public Fuse.Controls.IWebView get_WebViewClient() :357
void WebView__get_WebViewClient_fn(WebView* __this, uObject** __retval)
{
    *__retval = __this->WebViewClient();
}

// public void set_WebViewClient(Fuse.Controls.IWebView value) :358
void WebView__set_WebViewClient_fn(WebView* __this, uObject* value)
{
    __this->WebViewClient(value);
}

// private void applyFallbackCalls(Fuse.Controls.IWebView client) [instance] :401
void WebView::applyFallbackCalls(uObject* client)
{
    ::g::Fuse::Controls::FallbackWebViewClient* fbc = uAs< ::g::Fuse::Controls::FallbackWebViewClient*>(_fallbackClient, ::TYPES[209/*Fuse.Controls.FallbackWebViewClient*/]);
    uPtr(fbc)->ApplyBufferedCalls(client);
}

// public string get_BaseUrl() [instance] :448
uString* WebView::BaseUrl()
{
    return ::g::Fuse::Controls::IWebView::BaseUrl(uInterface(uPtr(WebViewClient()), ::TYPES[210/*Fuse.Controls.IWebView*/]));
}

// public void set_BaseUrl(string value) [instance] :449
void WebView::BaseUrl(uString* value)
{
    ::g::Fuse::Controls::IWebView::BaseUrl(uInterface(uPtr(WebViewClient()), ::TYPES[210/*Fuse.Controls.IWebView*/]), value);
}

// public generated void add_BeginLoading(Uno.EventHandler value) [instance] :318
void WebView::add_BeginLoading(uDelegate* value)
{
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BeginLoading1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) [instance] :318
void WebView::remove_BeginLoading(uDelegate* value)
{
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BeginLoading1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public bool get_CanGoBack() [instance] :488
bool WebView::CanGoBack()
{
    return ::g::Fuse::Navigation::IBaseNavigation::CanGoBack(uInterface(uPtr(WebViewClient()), ::TYPES[211/*Fuse.Navigation.IBaseNavigation*/]));
}

// public bool get_CanGoForward() [instance] :493
bool WebView::CanGoForward()
{
    return ::g::Fuse::Navigation::IBaseNavigation::CanGoForward(uInterface(uPtr(WebViewClient()), ::TYPES[211/*Fuse.Navigation.IBaseNavigation*/]));
}

// public void Eval(string js) [instance] :496
void WebView::Eval(uString* js)
{
    ::g::Fuse::Controls::IWebView::Eval(uInterface(uPtr(WebViewClient()), ::TYPES[210/*Fuse.Controls.IWebView*/]), js);
}

// public void Eval(string js, Uno.Action<string> resultHandler) [instance] :501
void WebView::Eval1(uString* js, uDelegate* resultHandler)
{
    ::g::Fuse::Controls::IWebView::Eval1(uInterface(uPtr(WebViewClient()), ::TYPES[210/*Fuse.Controls.IWebView*/]), js, resultHandler);
}

// public Uno.UX.FileSource get_File() [instance] :482
::g::Uno::UX::FileSource* WebView::File()
{
    return ::g::Fuse::Controls::IWebView::File(uInterface(uPtr(WebViewClient()), ::TYPES[210/*Fuse.Controls.IWebView*/]));
}

// public void set_File(Uno.UX.FileSource value) [instance] :483
void WebView::File(::g::Uno::UX::FileSource* value)
{
    ::g::Fuse::Controls::IWebView::File(uInterface(uPtr(WebViewClient()), ::TYPES[210/*Fuse.Controls.IWebView*/]), value);
}

// public void GoBack() [instance] :506
void WebView::GoBack()
{
    ::g::Fuse::Navigation::IBaseNavigation::GoBack(uInterface(uPtr(WebViewClient()), ::TYPES[211/*Fuse.Navigation.IBaseNavigation*/]));
}

// public void GoForward() [instance] :511
void WebView::GoForward()
{
    ::g::Fuse::Navigation::IBaseNavigation::GoForward(uInterface(uPtr(WebViewClient()), ::TYPES[211/*Fuse.Navigation.IBaseNavigation*/]));
}

// public void LoadHtml(string html, string baseUrl) [instance] :437
void WebView::LoadHtml1(uString* html, uString* baseUrl)
{
    ::g::Fuse::Controls::IWebView::LoadHtml1(uInterface(uPtr(WebViewClient()), ::TYPES[210/*Fuse.Controls.IWebView*/]), html, baseUrl);
}

// public void LoadUrl(string url) [instance] :526
void WebView::LoadUrl(uString* url)
{
    ::g::Fuse::Controls::IWebView::LoadUrl(uInterface(uPtr(WebViewClient()), ::TYPES[210/*Fuse.Controls.IWebView*/]), url);
}

// private void OnBeginLoading(object sender, Uno.EventArgs args) [instance] :414
void WebView::OnBeginLoading(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(BeginLoading1, NULL))
        uPtr(BeginLoading1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnPageChanged(object sender, Uno.EventArgs args) [instance] :407
void WebView::OnPageChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    UpdateRestState();

    if (::g::Uno::Delegate::op_Inequality(UrlChanged1, NULL))
        uPtr(UrlChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnPageLoaded(object sender, Uno.EventArgs args) [instance] :426
void WebView::OnPageLoaded(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(PageLoaded1, NULL))
        uPtr(PageLoaded1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnProgressChanged(object sender, Uno.EventArgs args) [instance] :420
void WebView::OnProgressChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Uno::UX::ValueChangedArgs* ret4;

    if (::g::Uno::Delegate::op_Inequality(ProgressChanged1, NULL))
        uPtr(ProgressChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[128/*Uno.UX.ValueChangedArgs<double>*/], uCRef(Progress()), this, &ret4), ret4));
}

// public void OnURLChanged(string value, object sender) [instance] :465
void WebView::OnURLChanged(uString* value, uObject* sender)
{
    ::g::Uno::UX::ValueChangedArgs* ret5;
    ::g::Fuse::Controls::IWebView::Url(uInterface(uPtr(WebViewClient()), ::TYPES[210/*Fuse.Controls.IWebView*/]), value);

    if (::g::Uno::Delegate::op_Inequality(UrlChanged1, NULL))
        uPtr(UrlChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[14/*Uno.UX.ValueChangedArgs<string>*/], value, this, &ret5), ret5));
}

// public generated void add_PageLoaded(Uno.EventHandler value) [instance] :317
void WebView::add_PageLoaded(uDelegate* value)
{
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageLoaded1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) [instance] :317
void WebView::remove_PageLoaded(uDelegate* value)
{
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageLoaded1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public double get_Progress() [instance] :313
double WebView::Progress()
{
    return ::g::Fuse::Triggers::IProgress::Progress(uInterface(uPtr(WebViewClient()), ::TYPES[208/*Fuse.Triggers.IProgress*/]));
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :316
void WebView::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[49/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :316
void WebView::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[49/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public void Reload() [instance] :516
void WebView::Reload()
{
    ::g::Fuse::Controls::IWebView::Reload(uInterface(uPtr(WebViewClient()), ::TYPES[210/*Fuse.Controls.IWebView*/]));
}

// public string get_Source() [instance] :454
uString* WebView::Source()
{
    return ::g::Fuse::Controls::ISourceReceiver::Source(uInterface(uPtr(WebViewClient()), ::TYPES[212/*Fuse.Controls.ISourceReceiver*/]));
}

// public void set_Source(string value) [instance] :455
void WebView::Source(uString* value)
{
    ::g::Fuse::Controls::ISourceReceiver::Source(uInterface(uPtr(WebViewClient()), ::TYPES[212/*Fuse.Controls.ISourceReceiver*/]), value);
}

// public void Stop() [instance] :521
void WebView::Stop()
{
    ::g::Fuse::Controls::IWebView::Stop(uInterface(uPtr(WebViewClient()), ::TYPES[210/*Fuse.Controls.IWebView*/]));
}

// internal void UpdateRestState() [instance] :458
void WebView::UpdateRestState()
{
    ::g::Uno::UX::ValueChangedArgs* ret6;

    if (::g::Uno::Delegate::op_Inequality(UrlChangedHandler1, NULL))
        uPtr(UrlChangedHandler1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[14/*Uno.UX.ValueChangedArgs<string>*/], Url(), this, &ret6), ret6));
}

// public string get_Url() [instance] :476
uString* WebView::Url()
{
    return ::g::Fuse::Controls::IWebView::Url(uInterface(uPtr(WebViewClient()), ::TYPES[210/*Fuse.Controls.IWebView*/]));
}

// public void set_Url(string value) [instance] :477
void WebView::Url(uString* value)
{
    OnURLChanged(value, this);
}

// public generated void add_UrlChanged(Uno.EventHandler value) [instance] :319
void WebView::add_UrlChanged(uDelegate* value)
{
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UrlChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) [instance] :319
void WebView::remove_UrlChanged(uDelegate* value)
{
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UrlChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public generated void add_UrlChangedHandler(Uno.UX.ValueChangedHandler<string> value) [instance] :464
void WebView::add_UrlChangedHandler(uDelegate* value)
{
    UrlChangedHandler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UrlChangedHandler1, value), ::TYPES[12/*Uno.UX.ValueChangedHandler<string>*/]);
}

// public generated void remove_UrlChangedHandler(Uno.UX.ValueChangedHandler<string> value) [instance] :464
void WebView::remove_UrlChangedHandler(uDelegate* value)
{
    UrlChangedHandler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UrlChangedHandler1, value), ::TYPES[12/*Uno.UX.ValueChangedHandler<string>*/]);
}

// public Fuse.Controls.IWebView get_WebViewClient() [instance] :357
uObject* WebView::WebViewClient()
{
    uObject* ind1 = _webViewClient;
    return (ind1 != NULL) ? ind1 : (uObject*)_fallbackClient;
}

// public void set_WebViewClient(Fuse.Controls.IWebView value) [instance] :358
void WebView::WebViewClient(uObject* value)
{
    uString* ind2;
    uString* url = ::STRINGS[12/*"about:blank"*/];
    uString* source = NULL;
    uString* baseUrl = NULL;
    ::g::Uno::UX::FileSource* file = NULL;

    if (_webViewClient != NULL)
    {
        ::g::Fuse::Triggers::IProgress::remove_ProgressChanged(uInterface(uPtr(_webViewClient), ::TYPES[208/*Fuse.Triggers.IProgress*/]), uDelegate::New(::TYPES[49/*Uno.UX.ValueChangedHandler<double>*/], (void*)WebView__OnProgressChanged_fn, this));
        ::g::Fuse::Controls::IWebView::remove_PageLoaded(uInterface(uPtr(_webViewClient), ::TYPES[210/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[25/*Uno.EventHandler*/], (void*)WebView__OnPageLoaded_fn, this));
        ::g::Fuse::Controls::IWebView::remove_BeginLoading(uInterface(uPtr(_webViewClient), ::TYPES[210/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[25/*Uno.EventHandler*/], (void*)WebView__OnBeginLoading_fn, this));
        ::g::Fuse::Controls::IWebView::remove_UrlChanged(uInterface(uPtr(_webViewClient), ::TYPES[210/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[25/*Uno.EventHandler*/], (void*)WebView__OnPageChanged_fn, this));
        url = ::g::Fuse::Controls::IWebView::Url(uInterface(uPtr(_webViewClient), ::TYPES[210/*Fuse.Controls.IWebView*/]));
        source = (ind2 = ::g::Fuse::Controls::ISourceReceiver::Source(uInterface(uPtr(_webViewClient), ::TYPES[212/*Fuse.Controls.ISourceReceiver*/])), (ind2 != NULL) ? ind2 : ::STRINGS[0/*""*/]);
        baseUrl = ::g::Fuse::Controls::IWebView::BaseUrl(uInterface(uPtr(_webViewClient), ::TYPES[210/*Fuse.Controls.IWebView*/]));
        file = ::g::Fuse::Controls::IWebView::File(uInterface(uPtr(_webViewClient), ::TYPES[210/*Fuse.Controls.IWebView*/]));
    }

    _webViewClient = ((value != NULL) ? value : (uObject*)_fallbackClient);

    if (_webViewClient != NULL)
    {
        ::g::Fuse::Triggers::IProgress::add_ProgressChanged(uInterface(uPtr(_webViewClient), ::TYPES[208/*Fuse.Triggers.IProgress*/]), uDelegate::New(::TYPES[49/*Uno.UX.ValueChangedHandler<double>*/], (void*)WebView__OnProgressChanged_fn, this));
        ::g::Fuse::Controls::IWebView::add_PageLoaded(uInterface(uPtr(_webViewClient), ::TYPES[210/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[25/*Uno.EventHandler*/], (void*)WebView__OnPageLoaded_fn, this));
        ::g::Fuse::Controls::IWebView::add_BeginLoading(uInterface(uPtr(_webViewClient), ::TYPES[210/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[25/*Uno.EventHandler*/], (void*)WebView__OnBeginLoading_fn, this));
        ::g::Fuse::Controls::IWebView::add_UrlChanged(uInterface(uPtr(_webViewClient), ::TYPES[210/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[25/*Uno.EventHandler*/], (void*)WebView__OnPageChanged_fn, this));
        ::g::Fuse::Controls::IWebView::BaseUrl(uInterface(uPtr(_webViewClient), ::TYPES[210/*Fuse.Controls.IWebView*/]), baseUrl);
        ::g::Fuse::Controls::ISourceReceiver::Source(uInterface(uPtr(_webViewClient), ::TYPES[212/*Fuse.Controls.ISourceReceiver*/]), source);

        if (::g::Uno::String::op_Equality(source, ::STRINGS[0/*""*/]))
            ::g::Fuse::Controls::IWebView::Url(uInterface(uPtr(_webViewClient), ::TYPES[210/*Fuse.Controls.IWebView*/]), url);

        ::g::Fuse::Controls::IWebView::File(uInterface(uPtr(_webViewClient), ::TYPES[210/*Fuse.Controls.IWebView*/]), file);
        applyFallbackCalls(_webViewClient);
    }
}
// }

}}} // ::g::Fuse::Controls
