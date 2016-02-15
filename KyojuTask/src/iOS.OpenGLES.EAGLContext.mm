// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.24.0/class/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE EAGLContext
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::OpenGLES::EAGLContext*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::OpenGLES::EAGLContext_typeof()

#include <OpenGLES/EAGL.h>
#include <uObjC.Wrapper.h>
#include <iOS.OpenGLES.EAGLContext.h>
#include <iOS.OpenGLES.EAGLRenderingAPI.h>
#include <iOS.OpenGLES.EAGLSharegroup.h>
#include <Uno.Bool.h>

namespace g{
namespace iOS{
namespace OpenGLES{

// public sealed extern class EAGLContext :20946
// {
::g::iOS::Foundation::NSObject_type* EAGLContext_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(EAGLContext);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSObject_type);
    type = (::g::iOS::Foundation::NSObject_type*)uClassType::New("iOS.OpenGLES.EAGLContext", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->fp_ctor_ = (void*)EAGLContext__New5_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::Foundation::NSObject_type, interface0));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public EAGLContext() :20949
void EAGLContext__ctor_4_fn(EAGLContext* __this)
{
    __this->ctor_4();
}

// public static extern iOS.OpenGLES.EAGLContext _currentContext() :20988
void EAGLContext___currentContext_fn(EAGLContext** __retval)
{
    *__retval = EAGLContext::_currentContext();
}

// public static extern bool _setCurrentContext(iOS.OpenGLES.EAGLContext context) :20985
void EAGLContext___setCurrentContext_fn(EAGLContext* context_, bool* __retval)
{
    *__retval = EAGLContext::_setCurrentContext(context_);
}

// public extern void initWithAPISharegroup(iOS.OpenGLES.EAGLRenderingAPI api, iOS.OpenGLES.EAGLSharegroup sharegroup) :20982
void EAGLContext__initWithAPISharegroup_fn(EAGLContext* __this, uint32_t* api_, ::g::iOS::OpenGLES::EAGLSharegroup* sharegroup_)
{
    __this->initWithAPISharegroup(*api_, sharegroup_);
}

// public EAGLContext New() :20949
void EAGLContext__New5_fn(EAGLContext** __retval)
{
    *__retval = EAGLContext::New5();
}

// public extern iOS.OpenGLES.EAGLSharegroup sharegroup() :20994
void EAGLContext__sharegroup_fn(EAGLContext* __this, ::g::iOS::OpenGLES::EAGLSharegroup** __retval)
{
    *__retval = __this->sharegroup();
}

// public EAGLContext() [instance] :20949
void EAGLContext::ctor_4()
{
    ctor_2();
}

// public extern void initWithAPISharegroup(iOS.OpenGLES.EAGLRenderingAPI api, iOS.OpenGLES.EAGLSharegroup sharegroup) [instance] :20982
void EAGLContext::initWithAPISharegroup(uint32_t api_, ::g::iOS::OpenGLES::EAGLSharegroup* sharegroup_)
{
    uint32_t api__ = api_;
    uObjC_DO_INIT(this, @selector(initWithAPI:sharegroup:),
        ::EAGLRenderingAPI(api__),
        uObjC::Lifetime::GetNativeHandle((::uObject *)sharegroup_));
}

// public extern iOS.OpenGLES.EAGLSharegroup sharegroup() [instance] :20994
::g::iOS::OpenGLES::EAGLSharegroup* EAGLContext::sharegroup()
{
    ::EAGLSharegroup* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::EAGLSharegroup*, @selector(sharegroup));
    return (::g::iOS::OpenGLES::EAGLSharegroup*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::OpenGLES::EAGLSharegroup_typeof());
}

// public static extern iOS.OpenGLES.EAGLContext _currentContext() [static] :20988
EAGLContext* EAGLContext::_currentContext()
{
    ::EAGLContext* __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::EAGLContext*, @selector(currentContext));
    return (EAGLContext*)uObjC::Lifetime::GetUnoObject(__return, EAGLContext_typeof());
}

// public static extern bool _setCurrentContext(iOS.OpenGLES.EAGLContext context) [static] :20985
bool EAGLContext::_setCurrentContext(EAGLContext* context_)
{
    BOOL __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, BOOL, @selector(setCurrentContext:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)context_));
    return (bool)__return;
}

// public EAGLContext New() [static] :20949
EAGLContext* EAGLContext::New5()
{
    EAGLContext* obj1 = (EAGLContext*)uNew(EAGLContext_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

}}} // ::g::iOS::OpenGLES
