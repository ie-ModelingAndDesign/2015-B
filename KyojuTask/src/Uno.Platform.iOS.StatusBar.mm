// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Int.h>
#include <Uno.Platform.iOS.StatusBar.h>
#include <Uno.Platform.iOS.StatusBarAnimation.h>
#include <Uno.Platform.iOS.StatusBarStyle.h>
#include <Uno-iOS/AppDelegate.h>
namespace {

    static uAppDelegate *_getAppDelegate()
    {
        return (uAppDelegate *) [UIApplication sharedApplication].delegate;
    }

} // <anonymous> namespace
static uType* TYPES[3];

namespace g{
namespace Uno{
namespace Platform{
namespace iOS{

// public static extern class StatusBar :318
// {
uClassType* StatusBar_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Platform.iOS.StatusBar", options);
    ::TYPES[0] = ::g::Uno::Delegate_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::g::Uno::Action_typeof(), (uintptr_t)&::g::Uno::Platform::iOS::StatusBar::SettingsChanged1_, uFieldFlagsStatic);
    return type;
}

// public static Uno.Platform.iOS.StatusBarAnimation get_Animation() :356
void StatusBar__get_Animation_fn(int* __retval)
{
    *__retval = StatusBar::Animation();
}

// public static void set_Animation(Uno.Platform.iOS.StatusBarAnimation value) :357
void StatusBar__set_Animation_fn(int* value)
{
    StatusBar::Animation(*value);
}

// private static extern Uno.Platform.iOS.StatusBarAnimation GetAnimation() :378
void StatusBar__GetAnimation_fn(int* __retval)
{
    *__retval = StatusBar::GetAnimation();
}

// private static extern bool GetIsVisible() :372
void StatusBar__GetIsVisible_fn(bool* __retval)
{
    *__retval = StatusBar::GetIsVisible();
}

// private static extern Uno.Platform.iOS.StatusBarStyle GetStyle() :375
void StatusBar__GetStyle_fn(int* __retval)
{
    *__retval = StatusBar::GetStyle();
}

// public static bool get_IsVisible() :322
void StatusBar__get_IsVisible_fn(bool* __retval)
{
    *__retval = StatusBar::IsVisible();
}

// public static void set_IsVisible(bool value) :323
void StatusBar__set_IsVisible_fn(bool* value)
{
    StatusBar::IsVisible(*value);
}

// private static void OnSettingsChanged() :335
void StatusBar__OnSettingsChanged_fn()
{
    StatusBar::OnSettingsChanged();
}

// private static extern void SetAnimation(Uno.Platform.iOS.StatusBarAnimation animation) :379
void StatusBar__SetAnimation_fn(int* animation_)
{
    StatusBar::SetAnimation(*animation_);
}

// private static extern void SetIsVisible(bool isVisible) :373
void StatusBar__SetIsVisible_fn(bool* isVisible_)
{
    StatusBar::SetIsVisible(*isVisible_);
}

// private static extern void SetStyle(Uno.Platform.iOS.StatusBarStyle style) :376
void StatusBar__SetStyle_fn(int* style_)
{
    StatusBar::SetStyle(*style_);
}

// public static generated void add_SettingsChanged(Uno.Action value) :333
void StatusBar__add_SettingsChanged_fn(uDelegate* value)
{
    StatusBar::add_SettingsChanged(value);
}

// public static generated void remove_SettingsChanged(Uno.Action value) :333
void StatusBar__remove_SettingsChanged_fn(uDelegate* value)
{
    StatusBar::remove_SettingsChanged(value);
}

// public static Uno.Platform.iOS.StatusBarStyle get_Style() :343
void StatusBar__get_Style_fn(int* __retval)
{
    *__retval = StatusBar::Style();
}

// public static void set_Style(Uno.Platform.iOS.StatusBarStyle value) :344
void StatusBar__set_Style_fn(int* value)
{
    StatusBar::Style(*value);
}

uSStrong<uDelegate*> StatusBar::SettingsChanged1_;

// private static extern Uno.Platform.iOS.StatusBarAnimation GetAnimation() [static] :378
int StatusBar::GetAnimation()
{
    switch (_getAppDelegate().uStatusBarAnimation)
    {
        default:
        case UIStatusBarAnimationNone:
            return 0;
        case UIStatusBarAnimationFade:
            return 1;
        case UIStatusBarAnimationSlide:
            return 2;
    }
}

// private static extern bool GetIsVisible() [static] :372
bool StatusBar::GetIsVisible()
{
    return _getAppDelegate().uStatusBarVisible;
}

// private static extern Uno.Platform.iOS.StatusBarStyle GetStyle() [static] :375
int StatusBar::GetStyle()
{
    switch (_getAppDelegate().uStatusBarStyle)
    {
        case UIStatusBarStyleDefault:
            return 0;
    
        default:
        case UIStatusBarStyleLightContent:
            return 1;
    }
}

// private static void OnSettingsChanged() [static] :335
void StatusBar::OnSettingsChanged()
{
    if (::g::Uno::Delegate::op_Inequality(StatusBar::SettingsChanged1(), NULL))
        uPtr(StatusBar::SettingsChanged1())->InvokeVoid();
}

// private static extern void SetAnimation(Uno.Platform.iOS.StatusBarAnimation animation) [static] :379
void StatusBar::SetAnimation(int animation_)
{
    UIStatusBarAnimation animation;
    
    switch (animation_)
    {
        case 0:
            animation = UIStatusBarAnimationNone;
            break;
        case 1:
            animation = UIStatusBarAnimationFade;
            break;
        case 2:
            animation = UIStatusBarAnimationSlide;
            break;
    }
    
    _getAppDelegate().uStatusBarAnimation = animation;
}

// private static extern void SetIsVisible(bool isVisible) [static] :373
void StatusBar::SetIsVisible(bool isVisible_)
{
    _getAppDelegate().uStatusBarVisible = isVisible_;
}

// private static extern void SetStyle(Uno.Platform.iOS.StatusBarStyle style) [static] :376
void StatusBar::SetStyle(int style_)
{
    _getAppDelegate().uStatusBarStyle
        = 0 == style_
            ? UIStatusBarStyleDefault
            : UIStatusBarStyleLightContent;
}

// public static Uno.Platform.iOS.StatusBarAnimation get_Animation() [static] :356
int StatusBar::Animation()
{
    return StatusBar::GetAnimation();
}

// public static void set_Animation(Uno.Platform.iOS.StatusBarAnimation value) [static] :357
void StatusBar::Animation(int value)
{
    if (value != StatusBar::Animation())
    {
        StatusBar::SetAnimation(value);
        StatusBar::OnSettingsChanged();
    }
}

// public static bool get_IsVisible() [static] :322
bool StatusBar::IsVisible()
{
    return StatusBar::GetIsVisible();
}

// public static void set_IsVisible(bool value) [static] :323
void StatusBar::IsVisible(bool value)
{
    if (value != StatusBar::IsVisible())
    {
        StatusBar::SetIsVisible(value);
        StatusBar::OnSettingsChanged();
    }
}

// public static Uno.Platform.iOS.StatusBarStyle get_Style() [static] :343
int StatusBar::Style()
{
    return StatusBar::GetStyle();
}

// public static void set_Style(Uno.Platform.iOS.StatusBarStyle value) [static] :344
void StatusBar::Style(int value)
{
    if (value != StatusBar::Style())
    {
        StatusBar::SetStyle(value);
        StatusBar::OnSettingsChanged();
    }
}

// public static generated void add_SettingsChanged(Uno.Action value) [static] :333
void StatusBar::add_SettingsChanged(uDelegate* value)
{
    StatusBar::SettingsChanged1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(StatusBar::SettingsChanged1(), value), ::TYPES[1/*Uno.Action*/]);
}

// public static generated void remove_SettingsChanged(Uno.Action value) [static] :333
void StatusBar::remove_SettingsChanged(uDelegate* value)
{
    StatusBar::SettingsChanged1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(StatusBar::SettingsChanged1(), value), ::TYPES[1/*Uno.Action*/]);
}
// }

}}}} // ::g::Uno::Platform::iOS
