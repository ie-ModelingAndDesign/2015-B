// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE UINavigationController
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UINavigationController*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UINavigationController_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.UINavigationController.h>

namespace g{
namespace iOS{
namespace UIKit{

// public extern class UINavigationController :77628
// {
::g::iOS::Foundation::NSObject_type* UINavigationController_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UINavigationController);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSObject_type);
    type = (::g::iOS::Foundation::NSObject_type*)uClassType::New("iOS.UIKit.UINavigationController", options);
    type->SetBase(::g::iOS::UIKit::UIViewController_typeof());
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::Foundation::NSObject_type, interface0));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public UINavigationController() :77631
void UINavigationController__ctor_8_fn(UINavigationController* __this)
{
    __this->ctor_8();
}

// public UINavigationController() [instance] :77631
void UINavigationController::ctor_8()
{
    ctor_6();
}
// }

}}} // ::g::iOS::UIKit
