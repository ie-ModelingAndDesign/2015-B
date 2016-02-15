#include <uObjC.h>

#include <Xli/StringBuilder.h>

#include <Foundation/NSException.h>
#include <Foundation/NSString.h>

#include <libkern/OSByteOrder.h>

#include <objc/runtime.h>


namespace uObjC {

    static Xli::String _getMessage(NSException *exception) XLI_NOEXCEPT
    {
        Xli::StringBuilder message;

        message += [[exception name] UTF8String];
        message += ": ";
        message += [[exception reason] UTF8String];

        return message.ToString();
    }

    Exception::Exception(NSException *exception, char const *function, int line)
        XLI_NOEXCEPT
        : Xli::Exception(_getMessage(exception), function, line)
        , _exception(exception)
    {
        [_exception retain];
    }

    Exception::~Exception() XLI_NOEXCEPT
    {
        [_exception autorelease];
    }

#if __BIG_ENDIAN__
    enum { NativeUTF16Encoding = NSUTF16BigEndianStringEncoding };
#else
    enum { NativeUTF16Encoding = NSUTF16LittleEndianStringEncoding };
#endif

    uString *UnoSelectorString(Selector selector)
    {
        char const *name = ::sel_getName(selector);
        return ::uString::Const(name);
    }

    Selector NativeSelector(uString *string)
    {
        const char *name = ::uStringToCStr(string);
        SEL result = ::sel_registerName(name);
        ::uFreeCStr(name);

        return result;
    }

    uString *UnoProtocolString(Protocol protocol)
    {
        char const *name = ::protocol_getName((id)protocol);
        return ::uString::Const(name);
    }

    Protocol NativeProtocol(uString *string)
    {
        const char *name = ::uStringToCStr(string);
        id protocol = ::objc_getProtocol(name);
        ::uFreeCStr(name);

        return protocol;
    }

} // namespace uObjC
