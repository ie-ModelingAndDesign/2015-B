#pragma once

#if __OBJC__
@class NSString;
#else
struct NSString;
#endif

namespace uObjC
{
uString* UnoString(NSString* string);
NSString* NativeString(uString* string);
}
