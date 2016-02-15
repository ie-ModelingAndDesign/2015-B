// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <iOS.UIKit.NSLineBreakMode.h>
#include <iOS.UIKit.NSTextAlignment.h>
#include <iOS.UIKit.UIButtonType.h>
#include <iOS.UIKit.UIControlEvents.h>
#include <iOS.UIKit.UIControlState.h>
#include <iOS.UIKit.UIEdgeInsets.h>
#include <iOS.UIKit.UIImagePickerControllerSourceType.h>
#include <iOS.UIKit.UIInterfaceOrientation.h>
#include <iOS.UIKit.UIKeyboardAppearance.h>
#include <iOS.UIKit.UIKeyboardType.h>
#include <iOS.UIKit.UIReturnKeyType.h>
#include <iOS.UIKit.UITextAutocapitalizationType.h>
#include <iOS.UIKit.UITextAutocorrectionType.h>
#include <iOS.UIKit.UITextBorderStyle.h>
#include <iOS.UIKit.UITextGranularity.h>
#include <iOS.UIKit.UITextLayoutDirection.h>
#include <iOS.UIKit.UITextSpellCheckingType.h>
#include <iOS.UIKit.UITextStorageDirection.h>
#include <iOS.UIKit.UITextWritingDirection.h>
#include <iOS.UIKit.UITouchPhase.h>
#include <Uno.Double.h>

namespace g{
namespace iOS{
namespace UIKit{

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(6831)
// ---------------------------------------------------------------------------------

// public enum NSLineBreakMode :6831
uEnumType* NSLineBreakMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.UIKit.NSLineBreakMode", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "NSLineBreakByWordWrapping", 0LL,
        "NSLineBreakByCharWrapping", 1LL,
        "NSLineBreakByClipping", 2LL,
        "NSLineBreakByTruncatingHead", 3LL,
        "NSLineBreakByTruncatingTail", 4LL,
        "NSLineBreakByTruncatingMiddle", 5LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(7485)
// ---------------------------------------------------------------------------------

// public enum NSTextAlignment :7485
uEnumType* NSTextAlignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.UIKit.NSTextAlignment", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "NSTextAlignmentLeft", 0LL,
        "NSTextAlignmentCenter", 1LL,
        "NSTextAlignmentRight", 2LL,
        "NSTextAlignmentJustified", 3LL,
        "NSTextAlignmentNatural", 4LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(9499)
// ---------------------------------------------------------------------------------

// public enum UIButtonType :9499
uEnumType* UIButtonType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.UIKit.UIButtonType", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "UIButtonTypeCustom", 0LL,
        "UIButtonTypeSystem", 1LL,
        "UIButtonTypeDetailDisclosure", 2LL,
        "UIButtonTypeInfoLight", 3LL,
        "UIButtonTypeInfoDark", 4LL,
        "UIButtonTypeContactAdd", 5LL,
        "UIButtonTypeRoundedRect", 1LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(9638)
// ---------------------------------------------------------------------------------

// public enum UIControlEvents :9638
uEnumType* UIControlEvents_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.UIKit.UIControlEvents", ::g::Uno::UInt_typeof(), 19);
    type->SetLiterals(
        "UIControlEventTouchDown", 1LL,
        "UIControlEventTouchDownRepeat", 2LL,
        "UIControlEventTouchDragInside", 4LL,
        "UIControlEventTouchDragOutside", 8LL,
        "UIControlEventTouchDragEnter", 16LL,
        "UIControlEventTouchDragExit", 32LL,
        "UIControlEventTouchUpInside", 64LL,
        "UIControlEventTouchUpOutside", 128LL,
        "UIControlEventTouchCancel", 256LL,
        "UIControlEventValueChanged", 4096LL,
        "UIControlEventEditingDidBegin", 65536LL,
        "UIControlEventEditingChanged", 131072LL,
        "UIControlEventEditingDidEnd", 262144LL,
        "UIControlEventEditingDidEndOnExit", 524288LL,
        "UIControlEventAllTouchEvents", 4095LL,
        "UIControlEventAllEditingEvents", 983040LL,
        "UIControlEventApplicationReserved", 251658240LL,
        "UIControlEventSystemReserved", 4026531840LL,
        "UIControlEventAllEvents", 4294967295LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(9670)
// ---------------------------------------------------------------------------------

// public enum UIControlState :9670
uEnumType* UIControlState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.UIKit.UIControlState", ::g::Uno::UInt_typeof(), 6);
    type->SetLiterals(
        "UIControlStateNormal", 0LL,
        "UIControlStateHighlighted", 1LL,
        "UIControlStateDisabled", 2LL,
        "UIControlStateSelected", 4LL,
        "UIControlStateApplication", 16711680LL,
        "UIControlStateReserved", 4278190080LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/struct/$.uno(4239)
// -----------------------------------------------------------------------------------

// public extern struct UIEdgeInsets :4239
// {
uStructType* UIEdgeInsets_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(UIEdgeInsets);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("iOS.UIKit.UIEdgeInsets", options);
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::iOS::UIKit::UIEdgeInsets, Top), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::iOS::UIKit::UIEdgeInsets, Left), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::iOS::UIKit::UIEdgeInsets, Bottom), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::iOS::UIKit::UIEdgeInsets, Right), 0);
    return type;
}

// public UIEdgeInsets(double Top, double Left, double Bottom, double Right) :4241
void UIEdgeInsets__ctor__fn(UIEdgeInsets* __this, double* Top1, double* Left1, double* Bottom1, double* Right1)
{
    __this->ctor_(*Top1, *Left1, *Bottom1, *Right1);
}

// public UIEdgeInsets New(double Top, double Left, double Bottom, double Right) :4241
void UIEdgeInsets__New1_fn(double* Top1, double* Left1, double* Bottom1, double* Right1, UIEdgeInsets* __retval)
{
    *__retval = UIEdgeInsets__New1(*Top1, *Left1, *Bottom1, *Right1);
}

// public UIEdgeInsets(double Top, double Left, double Bottom, double Right) [instance] :4241
void UIEdgeInsets::ctor_(double Top1, double Left1, double Bottom1, double Right1)
{
    Top = Top1;
    Left = Left1;
    Bottom = Bottom1;
    Right = Right1;
}

// public UIEdgeInsets New(double Top, double Left, double Bottom, double Right) [static] :4241
UIEdgeInsets UIEdgeInsets__New1(double Top1, double Left1, double Bottom1, double Right1)
{
    UIEdgeInsets obj1;
    obj1.ctor_(Top1, Left1, Bottom1, Right1);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(10040)
// ----------------------------------------------------------------------------------

// public enum UIImagePickerControllerSourceType :10040
uEnumType* UIImagePickerControllerSourceType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.UIKit.UIImagePickerControllerSourceType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "UIImagePickerControllerSourceTypePhotoLibrary", 0LL,
        "UIImagePickerControllerSourceTypeCamera", 1LL,
        "UIImagePickerControllerSourceTypeSavedPhotosAlbum", 2LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(10102)
// ----------------------------------------------------------------------------------

// public enum UIInterfaceOrientation :10102
uEnumType* UIInterfaceOrientation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.UIKit.UIInterfaceOrientation", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "UIInterfaceOrientationUnknown", 0LL,
        "UIInterfaceOrientationPortrait", 1LL,
        "UIInterfaceOrientationPortraitUpsideDown", 2LL,
        "UIInterfaceOrientationLandscapeLeft", 4LL,
        "UIInterfaceOrientationLandscapeRight", 3LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(10174)
// ----------------------------------------------------------------------------------

// public enum UIKeyboardAppearance :10174
uEnumType* UIKeyboardAppearance_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.UIKit.UIKeyboardAppearance", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "UIKeyboardAppearanceDefault", 0LL,
        "UIKeyboardAppearanceDark", 1LL,
        "UIKeyboardAppearanceLight", 2LL,
        "UIKeyboardAppearanceAlert", 1LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(10191)
// ----------------------------------------------------------------------------------

// public enum UIKeyboardType :10191
uEnumType* UIKeyboardType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.UIKit.UIKeyboardType", ::g::Uno::Int_typeof(), 12);
    type->SetLiterals(
        "UIKeyboardTypeDefault", 0LL,
        "UIKeyboardTypeASCIICapable", 1LL,
        "UIKeyboardTypeNumbersAndPunctuation", 2LL,
        "UIKeyboardTypeURL", 3LL,
        "UIKeyboardTypeNumberPad", 4LL,
        "UIKeyboardTypePhonePad", 5LL,
        "UIKeyboardTypeNamePhonePad", 6LL,
        "UIKeyboardTypeEmailAddress", 7LL,
        "UIKeyboardTypeDecimalPad", 8LL,
        "UIKeyboardTypeTwitter", 9LL,
        "UIKeyboardTypeWebSearch", 10LL,
        "UIKeyboardTypeAlphabet", 1LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(10559)
// ----------------------------------------------------------------------------------

// public enum UIReturnKeyType :10559
uEnumType* UIReturnKeyType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.UIKit.UIReturnKeyType", ::g::Uno::Int_typeof(), 11);
    type->SetLiterals(
        "UIReturnKeyDefault", 0LL,
        "UIReturnKeyGo", 1LL,
        "UIReturnKeyGoogle", 2LL,
        "UIReturnKeyJoin", 3LL,
        "UIReturnKeyNext", 4LL,
        "UIReturnKeyRoute", 5LL,
        "UIReturnKeySearch", 6LL,
        "UIReturnKeySend", 7LL,
        "UIReturnKeyYahoo", 8LL,
        "UIReturnKeyDone", 9LL,
        "UIReturnKeyEmergencyCall", 10LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(11006)
// ----------------------------------------------------------------------------------

// public enum UITextAutocapitalizationType :11006
uEnumType* UITextAutocapitalizationType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.UIKit.UITextAutocapitalizationType", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "UITextAutocapitalizationTypeNone", 0LL,
        "UITextAutocapitalizationTypeWords", 1LL,
        "UITextAutocapitalizationTypeSentences", 2LL,
        "UITextAutocapitalizationTypeAllCharacters", 3LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(11023)
// ----------------------------------------------------------------------------------

// public enum UITextAutocorrectionType :11023
uEnumType* UITextAutocorrectionType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.UIKit.UITextAutocorrectionType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "UITextAutocorrectionTypeDefault", 0LL,
        "UITextAutocorrectionTypeNo", 1LL,
        "UITextAutocorrectionTypeYes", 2LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(11039)
// ----------------------------------------------------------------------------------

// public enum UITextBorderStyle :11039
uEnumType* UITextBorderStyle_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.UIKit.UITextBorderStyle", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "UITextBorderStyleNone", 0LL,
        "UITextBorderStyleLine", 1LL,
        "UITextBorderStyleBezel", 2LL,
        "UITextBorderStyleRoundedRect", 3LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(11073)
// ----------------------------------------------------------------------------------

// public enum UITextGranularity :11073
uEnumType* UITextGranularity_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.UIKit.UITextGranularity", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "UITextGranularityCharacter", 0LL,
        "UITextGranularityWord", 1LL,
        "UITextGranularitySentence", 2LL,
        "UITextGranularityParagraph", 3LL,
        "UITextGranularityLine", 4LL,
        "UITextGranularityDocument", 5LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(11092)
// ----------------------------------------------------------------------------------

// public enum UITextLayoutDirection :11092
uEnumType* UITextLayoutDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.UIKit.UITextLayoutDirection", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "UITextLayoutDirectionRight", 2LL,
        "UITextLayoutDirectionLeft", 3LL,
        "UITextLayoutDirectionUp", 4LL,
        "UITextLayoutDirectionDown", 5LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(11109)
// ----------------------------------------------------------------------------------

// public enum UITextSpellCheckingType :11109
uEnumType* UITextSpellCheckingType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.UIKit.UITextSpellCheckingType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "UITextSpellCheckingTypeDefault", 0LL,
        "UITextSpellCheckingTypeNo", 1LL,
        "UITextSpellCheckingTypeYes", 2LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(11125)
// ----------------------------------------------------------------------------------

// public enum UITextStorageDirection :11125
uEnumType* UITextStorageDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.UIKit.UITextStorageDirection", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "UITextStorageDirectionForward", 0LL,
        "UITextStorageDirectionBackward", 1LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(11140)
// ----------------------------------------------------------------------------------

// public enum UITextWritingDirection :11140
uEnumType* UITextWritingDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.UIKit.UITextWritingDirection", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "UITextWritingDirectionNatural", -1LL,
        "UITextWritingDirectionLeftToRight", 0LL,
        "UITextWritingDirectionRightToLeft", 1LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Experimental.iOS/0.24.0/enum/$.uno(11156)
// ----------------------------------------------------------------------------------

// public enum UITouchPhase :11156
uEnumType* UITouchPhase_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.UIKit.UITouchPhase", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "UITouchPhaseBegan", 0LL,
        "UITouchPhaseMoved", 1LL,
        "UITouchPhaseStationary", 2LL,
        "UITouchPhaseEnded", 3LL,
        "UITouchPhaseCancelled", 4LL);
    return type;
}

}}} // ::g::iOS::UIKit
