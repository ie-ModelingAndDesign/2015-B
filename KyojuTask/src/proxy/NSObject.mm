#define uObjC_NATIVE_TYPE NSObject
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSObject_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.Foundation.NSObject.init():IsStripped}
- (instancetype) init
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->init();
    return uObjC_OBJECT_HANDLE(__this);
}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject._new():IsStripped}
//+ (instancetype) new
//{
//    #{ObjC.ID} __return = #{iOS.Foundation.NSObject._new():Call()};
//    return (::id)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject._alloc():IsStripped}
//+ (instancetype) alloc
//{
//    #{ObjC.ID} __return = #{iOS.Foundation.NSObject._alloc():Call()};
//    return (::id)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.copy():IsStripped}
//- (id) copy
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{ObjC.ID} __return = #{iOS.Foundation.NSObject:Of(__this).copy():Call()};
//    return (::id)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.mutableCopy():IsStripped}
- (id) mutableCopy
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::id __return = __this->mutableCopy();
    return (::id)__return;
}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject._instancesRespondToSelector(ObjC.Selector):IsStripped}
//+ (BOOL) instancesRespondToSelector:(SEL)aSelector
//{
//    #{bool} __return = #{iOS.Foundation.NSObject._instancesRespondToSelector(ObjC.Selector):Call((#{ObjC.Selector})aSelector)};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject._conformsToProtocol(ObjC.Protocol):IsStripped}
//+ (BOOL) conformsToProtocol:(Protocol *)protocol
//{
//    #{bool} __return = #{iOS.Foundation.NSObject._conformsToProtocol(ObjC.Protocol):Call(#{ObjC.Protocol}(protocol))};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.doesNotRecognizeSelector(ObjC.Selector):IsStripped}
//- (void) doesNotRecognizeSelector:(SEL)aSelector
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).doesNotRecognizeSelector(ObjC.Selector):Call((#{ObjC.Selector})aSelector)};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.forwardingTargetForSelector(ObjC.Selector):IsStripped}
//- (id) forwardingTargetForSelector:(SEL)aSelector
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{ObjC.ID} __return = #{iOS.Foundation.NSObject:Of(__this).forwardingTargetForSelector(ObjC.Selector):Call((#{ObjC.Selector})aSelector)};
//    return (::id)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.forwardInvocation(iOS.Foundation.NSInvocation):IsStripped}
//- (void) forwardInvocation:(NSInvocation *)anInvocation
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).forwardInvocation(iOS.Foundation.NSInvocation):Call((#{iOS.Foundation.NSInvocation})uObjC::Lifetime::GetUnoObject(anInvocation, #{iOS.Foundation.NSInvocation:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.methodSignatureForSelector(ObjC.Selector):IsStripped}
//- (NSMethodSignature *) methodSignatureForSelector:(SEL)aSelector
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSMethodSignature} __return = #{iOS.Foundation.NSObject:Of(__this).methodSignatureForSelector(ObjC.Selector):Call((#{ObjC.Selector})aSelector)};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject._instanceMethodSignatureForSelector(ObjC.Selector):IsStripped}
//+ (NSMethodSignature *) instanceMethodSignatureForSelector:(SEL)aSelector
//{
//    #{iOS.Foundation.NSMethodSignature} __return = #{iOS.Foundation.NSObject._instanceMethodSignatureForSelector(ObjC.Selector):Call((#{ObjC.Selector})aSelector)};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.allowsWeakReference():IsStripped}
//- (BOOL) allowsWeakReference
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.Foundation.NSObject:Of(__this).allowsWeakReference():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.retainWeakReference():IsStripped}
//- (BOOL) retainWeakReference
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.Foundation.NSObject:Of(__this).retainWeakReference():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject._isSubclassOfClass(ObjC.Class):IsStripped}
//+ (BOOL) isSubclassOfClass:(Class)aClass
//{
//    #{bool} __return = #{iOS.Foundation.NSObject._isSubclassOfClass(ObjC.Class):Call((#{ObjC.Class})aClass)};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject._resolveClassMethod(ObjC.Selector):IsStripped}
//+ (BOOL) resolveClassMethod:(SEL)sel
//{
//    #{bool} __return = #{iOS.Foundation.NSObject._resolveClassMethod(ObjC.Selector):Call((#{ObjC.Selector})sel)};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject._resolveInstanceMethod(ObjC.Selector):IsStripped}
//+ (BOOL) resolveInstanceMethod:(SEL)sel
//{
//    #{bool} __return = #{iOS.Foundation.NSObject._resolveInstanceMethod(ObjC.Selector):Call((#{ObjC.Selector})sel)};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject._hash():IsStripped}
//+ (NSUInteger) hash
//{
//    #{ulong} __return = #{iOS.Foundation.NSObject._hash():Call()};
//    return (unsigned long)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject._superclass():IsStripped}
//+ (Class) superclass
//{
//    #{ObjC.Class} __return = #{iOS.Foundation.NSObject._superclass():Call()};
//    return (::Class)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject._class():IsStripped}
//+ (Class) class
//{
//    #{ObjC.Class} __return = #{iOS.Foundation.NSObject._class():Call()};
//    return (::Class)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject._description():IsStripped}
//+ (NSString *) description
//{
//    #{string} __return = #{iOS.Foundation.NSObject._description():Call()};
//    return uObjC::NativeString(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject._debugDescription():IsStripped}
//+ (NSString *) debugDescription
//{
//    #{string} __return = #{iOS.Foundation.NSObject._debugDescription():Call()};
//    return uObjC::NativeString(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.performSelectorOnMainThreadWithObjectWaitUntilDoneModes(ObjC.Selector,ObjC.ID,bool,iOS.Foundation.NSArray):IsStripped}
//- (void) performSelectorOnMainThread:(SEL)aSelector withObject:(id)arg waitUntilDone:(BOOL)wait modes:(NSArray *)array
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).performSelectorOnMainThreadWithObjectWaitUntilDoneModes(ObjC.Selector,ObjC.ID,bool,iOS.Foundation.NSArray):Call((#{ObjC.Selector})aSelector, (#{ObjC.ID})arg, (#{bool})wait, (#{iOS.Foundation.NSArray})uObjC::Lifetime::GetUnoObject(array, #{iOS.Foundation.NSArray:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.performSelectorOnMainThreadWithObjectWaitUntilDone(ObjC.Selector,ObjC.ID,bool):IsStripped}
//- (void) performSelectorOnMainThread:(SEL)aSelector withObject:(id)arg waitUntilDone:(BOOL)wait
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).performSelectorOnMainThreadWithObjectWaitUntilDone(ObjC.Selector,ObjC.ID,bool):Call((#{ObjC.Selector})aSelector, (#{ObjC.ID})arg, (#{bool})wait)};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.performSelectorOnThreadWithObjectWaitUntilDoneModes(ObjC.Selector,iOS.Foundation.NSThread,ObjC.ID,bool,iOS.Foundation.NSArray):IsStripped}
//- (void) performSelector:(SEL)aSelector onThread:(NSThread *)thr withObject:(id)arg waitUntilDone:(BOOL)wait modes:(NSArray *)array
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).performSelectorOnThreadWithObjectWaitUntilDoneModes(ObjC.Selector,iOS.Foundation.NSThread,ObjC.ID,bool,iOS.Foundation.NSArray):Call((#{ObjC.Selector})aSelector, (#{iOS.Foundation.NSThread})uObjC::Lifetime::GetUnoObject(thr, #{iOS.Foundation.NSThread:TypeOf}), (#{ObjC.ID})arg, (#{bool})wait, (#{iOS.Foundation.NSArray})uObjC::Lifetime::GetUnoObject(array, #{iOS.Foundation.NSArray:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.performSelectorOnThreadWithObjectWaitUntilDone(ObjC.Selector,iOS.Foundation.NSThread,ObjC.ID,bool):IsStripped}
//- (void) performSelector:(SEL)aSelector onThread:(NSThread *)thr withObject:(id)arg waitUntilDone:(BOOL)wait
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).performSelectorOnThreadWithObjectWaitUntilDone(ObjC.Selector,iOS.Foundation.NSThread,ObjC.ID,bool):Call((#{ObjC.Selector})aSelector, (#{iOS.Foundation.NSThread})uObjC::Lifetime::GetUnoObject(thr, #{iOS.Foundation.NSThread:TypeOf}), (#{ObjC.ID})arg, (#{bool})wait)};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.performSelectorInBackgroundWithObject(ObjC.Selector,ObjC.ID):IsStripped}
//- (void) performSelectorInBackground:(SEL)aSelector withObject:(id)arg
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).performSelectorInBackgroundWithObject(ObjC.Selector,ObjC.ID):Call((#{ObjC.Selector})aSelector, (#{ObjC.ID})arg)};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.performSelectorWithObjectAfterDelayInModes(ObjC.Selector,ObjC.ID,double,iOS.Foundation.NSArray):IsStripped}
//- (void) performSelector:(SEL)aSelector withObject:(id)anArgument afterDelay:(NSTimeInterval)delay inModes:(NSArray *)modes
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).performSelectorWithObjectAfterDelayInModes(ObjC.Selector,ObjC.ID,double,iOS.Foundation.NSArray):Call((#{ObjC.Selector})aSelector, (#{ObjC.ID})anArgument, delay, (#{iOS.Foundation.NSArray})uObjC::Lifetime::GetUnoObject(modes, #{iOS.Foundation.NSArray:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.performSelectorWithObjectAfterDelay(ObjC.Selector,ObjC.ID,double):IsStripped}
//- (void) performSelector:(SEL)aSelector withObject:(id)anArgument afterDelay:(NSTimeInterval)delay
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).performSelectorWithObjectAfterDelay(ObjC.Selector,ObjC.ID,double):Call((#{ObjC.Selector})aSelector, (#{ObjC.ID})anArgument, delay)};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject._cancelPreviousPerformRequestsWithTargetSelectorObject(ObjC.ID,ObjC.Selector,ObjC.ID):IsStripped}
//+ (void) cancelPreviousPerformRequestsWithTarget:(id)aTarget selector:(SEL)aSelector object:(id)anArgument
//{
//    #{iOS.Foundation.NSObject._cancelPreviousPerformRequestsWithTargetSelectorObject(ObjC.ID,ObjC.Selector,ObjC.ID):Call((#{ObjC.ID})aTarget, (#{ObjC.Selector})aSelector, (#{ObjC.ID})anArgument)};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject._cancelPreviousPerformRequestsWithTarget(ObjC.ID):IsStripped}
//+ (void) cancelPreviousPerformRequestsWithTarget:(id)aTarget
//{
//    #{iOS.Foundation.NSObject._cancelPreviousPerformRequestsWithTarget(ObjC.ID):Call((#{ObjC.ID})aTarget)};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject._classForKeyedUnarchiver():IsStripped}
//+ (Class) classForKeyedUnarchiver
//{
//    #{ObjC.Class} __return = #{iOS.Foundation.NSObject._classForKeyedUnarchiver():Call()};
//    return (::Class)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.replacementObjectForKeyedArchiver(iOS.Foundation.NSKeyedArchiver):IsStripped}
//- (id) replacementObjectForKeyedArchiver:(NSKeyedArchiver *)archiver
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{ObjC.ID} __return = #{iOS.Foundation.NSObject:Of(__this).replacementObjectForKeyedArchiver(iOS.Foundation.NSKeyedArchiver):Call((#{iOS.Foundation.NSKeyedArchiver})uObjC::Lifetime::GetUnoObject(archiver, #{iOS.Foundation.NSKeyedArchiver:TypeOf}))};
//    return (::id)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject._classFallbacksForKeyedArchiver():IsStripped}
//+ (NSArray *) classFallbacksForKeyedArchiver
//{
//    #{iOS.Foundation.NSArray} __return = #{iOS.Foundation.NSObject._classFallbacksForKeyedArchiver():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.classForKeyedArchiver():IsStripped}
//- (Class) classForKeyedArchiver
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{ObjC.Class} __return = #{iOS.Foundation.NSObject:Of(__this).classForKeyedArchiver():Call()};
//    return (::Class)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject._keyPathsForValuesAffectingValueForKey(string):IsStripped}
//+ (NSSet *) keyPathsForValuesAffectingValueForKey:(NSString *)key
//{
//    #{iOS.Foundation.NSSet} __return = #{iOS.Foundation.NSObject._keyPathsForValuesAffectingValueForKey(string):Call(uObjC::UnoString(key))};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject._automaticallyNotifiesObserversForKey(string):IsStripped}
//+ (BOOL) automaticallyNotifiesObserversForKey:(NSString *)key
//{
//    #{bool} __return = #{iOS.Foundation.NSObject._automaticallyNotifiesObserversForKey(string):Call(uObjC::UnoString(key))};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.observationInfo():IsStripped}
//- (void *) observationInfo
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{Uno.IntPtr} __return = #{iOS.Foundation.NSObject:Of(__this).observationInfo():Call()};
//    return (void*)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.setObservationInfo(Uno.IntPtr):IsStripped}
//- (void) setObservationInfo:(void *)observationInfo
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).setObservationInfo(Uno.IntPtr):Call((#{Uno.IntPtr})observationInfo)};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.willChangeValueForKey(string):IsStripped}
//- (void) willChangeValueForKey:(NSString *)key
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).willChangeValueForKey(string):Call(uObjC::UnoString(key))};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.didChangeValueForKey(string):IsStripped}
//- (void) didChangeValueForKey:(NSString *)key
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).didChangeValueForKey(string):Call(uObjC::UnoString(key))};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.willChangeValuesAtIndexesForKey(iOS.Foundation.NSKeyValueChange,iOS.Foundation.NSIndexSet,string):IsStripped}
//- (void) willChange:(NSKeyValueChange)changeKind valuesAtIndexes:(NSIndexSet *)indexes forKey:(NSString *)key
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).willChangeValuesAtIndexesForKey(iOS.Foundation.NSKeyValueChange,iOS.Foundation.NSIndexSet,string):Call(#{uint}(changeKind), (#{iOS.Foundation.NSIndexSet})uObjC::Lifetime::GetUnoObject(indexes, #{iOS.Foundation.NSIndexSet:TypeOf}), uObjC::UnoString(key))};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.didChangeValuesAtIndexesForKey(iOS.Foundation.NSKeyValueChange,iOS.Foundation.NSIndexSet,string):IsStripped}
//- (void) didChange:(NSKeyValueChange)changeKind valuesAtIndexes:(NSIndexSet *)indexes forKey:(NSString *)key
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).didChangeValuesAtIndexesForKey(iOS.Foundation.NSKeyValueChange,iOS.Foundation.NSIndexSet,string):Call(#{uint}(changeKind), (#{iOS.Foundation.NSIndexSet})uObjC::Lifetime::GetUnoObject(indexes, #{iOS.Foundation.NSIndexSet:TypeOf}), uObjC::UnoString(key))};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.willChangeValueForKeyWithSetMutationUsingObjects(string,iOS.Foundation.NSKeyValueSetMutationKind,iOS.Foundation.NSSet):IsStripped}
//- (void) willChangeValueForKey:(NSString *)key withSetMutation:(NSKeyValueSetMutationKind)mutationKind usingObjects:(NSSet *)objects
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).willChangeValueForKeyWithSetMutationUsingObjects(string,iOS.Foundation.NSKeyValueSetMutationKind,iOS.Foundation.NSSet):Call(uObjC::UnoString(key), #{uint}(mutationKind), (#{iOS.Foundation.NSSet})uObjC::Lifetime::GetUnoObject(objects, #{iOS.Foundation.NSSet:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.didChangeValueForKeyWithSetMutationUsingObjects(string,iOS.Foundation.NSKeyValueSetMutationKind,iOS.Foundation.NSSet):IsStripped}
//- (void) didChangeValueForKey:(NSString *)key withSetMutation:(NSKeyValueSetMutationKind)mutationKind usingObjects:(NSSet *)objects
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).didChangeValueForKeyWithSetMutationUsingObjects(string,iOS.Foundation.NSKeyValueSetMutationKind,iOS.Foundation.NSSet):Call(uObjC::UnoString(key), #{uint}(mutationKind), (#{iOS.Foundation.NSSet})uObjC::Lifetime::GetUnoObject(objects, #{iOS.Foundation.NSSet:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.addObserverForKeyPathOptionsContext(iOS.Foundation.NSObject,string,iOS.Foundation.NSKeyValueObservingOptions,Uno.IntPtr):IsStripped}
//- (void) addObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath options:(NSKeyValueObservingOptions)options context:(void *)context
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).addObserverForKeyPathOptionsContext(iOS.Foundation.NSObject,string,iOS.Foundation.NSKeyValueObservingOptions,Uno.IntPtr):Call((#{iOS.Foundation.NSObject})uObjC::Lifetime::GetUnoObject(observer, #{iOS.Foundation.NSObject:TypeOf}), uObjC::UnoString(keyPath), #{uint}(options), (#{Uno.IntPtr})context)};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.removeObserverForKeyPathContext(iOS.Foundation.NSObject,string,Uno.IntPtr):IsStripped}
//- (void) removeObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath context:(void *)context
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).removeObserverForKeyPathContext(iOS.Foundation.NSObject,string,Uno.IntPtr):Call((#{iOS.Foundation.NSObject})uObjC::Lifetime::GetUnoObject(observer, #{iOS.Foundation.NSObject:TypeOf}), uObjC::UnoString(keyPath), (#{Uno.IntPtr})context)};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.removeObserverForKeyPath(iOS.Foundation.NSObject,string):IsStripped}
//- (void) removeObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).removeObserverForKeyPath(iOS.Foundation.NSObject,string):Call((#{iOS.Foundation.NSObject})uObjC::Lifetime::GetUnoObject(observer, #{iOS.Foundation.NSObject:TypeOf}), uObjC::UnoString(keyPath))};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.observeValueForKeyPathOfObjectChangeContext(string,ObjC.ID,iOS.Foundation.NSDictionary,Uno.IntPtr):IsStripped}
//- (void) observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary *)change context:(void *)context
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).observeValueForKeyPathOfObjectChangeContext(string,ObjC.ID,iOS.Foundation.NSDictionary,Uno.IntPtr):Call(uObjC::UnoString(keyPath), (#{ObjC.ID})object, (#{iOS.Foundation.NSDictionary})uObjC::Lifetime::GetUnoObject(change, #{iOS.Foundation.NSDictionary:TypeOf}), (#{Uno.IntPtr})context)};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject._accessInstanceVariablesDirectly():IsStripped}
//+ (BOOL) accessInstanceVariablesDirectly
//{
//    #{bool} __return = #{iOS.Foundation.NSObject._accessInstanceVariablesDirectly():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.valueForKey(string):IsStripped}
//- (id) valueForKey:(NSString *)key
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{ObjC.ID} __return = #{iOS.Foundation.NSObject:Of(__this).valueForKey(string):Call(uObjC::UnoString(key))};
//    return (::id)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.setValueForKey(ObjC.ID,string):IsStripped}
//- (void) setValue:(id)value forKey:(NSString *)key
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).setValueForKey(ObjC.ID,string):Call((#{ObjC.ID})value, uObjC::UnoString(key))};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.mutableArrayValueForKey(string):IsStripped}
//- (NSMutableArray *) mutableArrayValueForKey:(NSString *)key
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSMutableArray} __return = #{iOS.Foundation.NSObject:Of(__this).mutableArrayValueForKey(string):Call(uObjC::UnoString(key))};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.mutableOrderedSetValueForKey(string):IsStripped}
//- (NSMutableOrderedSet *) mutableOrderedSetValueForKey:(NSString *)key
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSMutableOrderedSet} __return = #{iOS.Foundation.NSObject:Of(__this).mutableOrderedSetValueForKey(string):Call(uObjC::UnoString(key))};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.mutableSetValueForKey(string):IsStripped}
//- (NSMutableSet *) mutableSetValueForKey:(NSString *)key
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSMutableSet} __return = #{iOS.Foundation.NSObject:Of(__this).mutableSetValueForKey(string):Call(uObjC::UnoString(key))};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.valueForKeyPath(string):IsStripped}
//- (id) valueForKeyPath:(NSString *)keyPath
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{ObjC.ID} __return = #{iOS.Foundation.NSObject:Of(__this).valueForKeyPath(string):Call(uObjC::UnoString(keyPath))};
//    return (::id)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.setValueForKeyPath(ObjC.ID,string):IsStripped}
//- (void) setValue:(id)value forKeyPath:(NSString *)keyPath
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).setValueForKeyPath(ObjC.ID,string):Call((#{ObjC.ID})value, uObjC::UnoString(keyPath))};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.mutableArrayValueForKeyPath(string):IsStripped}
//- (NSMutableArray *) mutableArrayValueForKeyPath:(NSString *)keyPath
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSMutableArray} __return = #{iOS.Foundation.NSObject:Of(__this).mutableArrayValueForKeyPath(string):Call(uObjC::UnoString(keyPath))};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.mutableOrderedSetValueForKeyPath(string):IsStripped}
//- (NSMutableOrderedSet *) mutableOrderedSetValueForKeyPath:(NSString *)keyPath
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSMutableOrderedSet} __return = #{iOS.Foundation.NSObject:Of(__this).mutableOrderedSetValueForKeyPath(string):Call(uObjC::UnoString(keyPath))};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.mutableSetValueForKeyPath(string):IsStripped}
//- (NSMutableSet *) mutableSetValueForKeyPath:(NSString *)keyPath
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSMutableSet} __return = #{iOS.Foundation.NSObject:Of(__this).mutableSetValueForKeyPath(string):Call(uObjC::UnoString(keyPath))};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.valueForUndefinedKey(string):IsStripped}
//- (id) valueForUndefinedKey:(NSString *)key
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{ObjC.ID} __return = #{iOS.Foundation.NSObject:Of(__this).valueForUndefinedKey(string):Call(uObjC::UnoString(key))};
//    return (::id)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.setValueForUndefinedKey(ObjC.ID,string):IsStripped}
//- (void) setValue:(id)value forUndefinedKey:(NSString *)key
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).setValueForUndefinedKey(ObjC.ID,string):Call((#{ObjC.ID})value, uObjC::UnoString(key))};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.setNilValueForKey(string):IsStripped}
//- (void) setNilValueForKey:(NSString *)key
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).setNilValueForKey(string):Call(uObjC::UnoString(key))};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.dictionaryWithValuesForKeys(iOS.Foundation.NSArray):IsStripped}
//- (NSDictionary *) dictionaryWithValuesForKeys:(NSArray *)keys
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSDictionary} __return = #{iOS.Foundation.NSObject:Of(__this).dictionaryWithValuesForKeys(iOS.Foundation.NSArray):Call((#{iOS.Foundation.NSArray})uObjC::Lifetime::GetUnoObject(keys, #{iOS.Foundation.NSArray:TypeOf}))};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.setValuesForKeysWithDictionary(iOS.Foundation.NSDictionary):IsStripped}
//- (void) setValuesForKeysWithDictionary:(NSDictionary *)keyedValues
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).setValuesForKeysWithDictionary(iOS.Foundation.NSDictionary):Call((#{iOS.Foundation.NSDictionary})uObjC::Lifetime::GetUnoObject(keyedValues, #{iOS.Foundation.NSDictionary:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.fileManagerShouldProceedAfterError(iOS.Foundation.NSFileManager,iOS.Foundation.NSDictionary):IsStripped}
//- (BOOL) fileManager:(NSFileManager *)fm shouldProceedAfterError:(NSDictionary *)errorInfo
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.Foundation.NSObject:Of(__this).fileManagerShouldProceedAfterError(iOS.Foundation.NSFileManager,iOS.Foundation.NSDictionary):Call((#{iOS.Foundation.NSFileManager})uObjC::Lifetime::GetUnoObject(fm, #{iOS.Foundation.NSFileManager:TypeOf}), (#{iOS.Foundation.NSDictionary})uObjC::Lifetime::GetUnoObject(errorInfo, #{iOS.Foundation.NSDictionary:TypeOf}))};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.fileManagerWillProcessPath(iOS.Foundation.NSFileManager,string):IsStripped}
//- (void) fileManager:(NSFileManager *)fm willProcessPath:(NSString *)path
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).fileManagerWillProcessPath(iOS.Foundation.NSFileManager,string):Call((#{iOS.Foundation.NSFileManager})uObjC::Lifetime::GetUnoObject(fm, #{iOS.Foundation.NSFileManager:TypeOf}), uObjC::UnoString(path))};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.attemptRecoveryFromErrorOptionIndexDelegateDidRecoverSelectorContextInfo(iOS.Foundation.NSError,ulong,ObjC.ID,ObjC.Selector,Uno.IntPtr):IsStripped}
//- (void) attemptRecoveryFromError:(NSError *)error optionIndex:(NSUInteger)recoveryOptionIndex delegate:(id)delegate didRecoverSelector:(SEL)didRecoverSelector contextInfo:(void *)contextInfo
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSObject:Of(__this).attemptRecoveryFromErrorOptionIndexDelegateDidRecoverSelectorContextInfo(iOS.Foundation.NSError,ulong,ObjC.ID,ObjC.Selector,Uno.IntPtr):Call((#{iOS.Foundation.NSError})uObjC::Lifetime::GetUnoObject(error, #{iOS.Foundation.NSError:TypeOf}), (#{ulong})recoveryOptionIndex, (#{ObjC.ID})delegate, (#{ObjC.Selector})didRecoverSelector, (#{Uno.IntPtr})contextInfo)};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.attemptRecoveryFromErrorOptionIndex(iOS.Foundation.NSError,ulong):IsStripped}
//- (BOOL) attemptRecoveryFromError:(NSError *)error optionIndex:(NSUInteger)recoveryOptionIndex
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.Foundation.NSObject:Of(__this).attemptRecoveryFromErrorOptionIndex(iOS.Foundation.NSError,ulong):Call((#{iOS.Foundation.NSError})uObjC::Lifetime::GetUnoObject(error, #{iOS.Foundation.NSError:TypeOf}), (#{ulong})recoveryOptionIndex)};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.autoContentAccessingProxy():IsStripped}
//- (id) autoContentAccessingProxy
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{ObjC.ID} __return = #{iOS.Foundation.NSObject:Of(__this).autoContentAccessingProxy():Call()};
//    return (::id)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject._version():IsStripped}
//+ (NSInteger) version
//{
//    #{int} __return = #{iOS.Foundation.NSObject._version():Call()};
//    return (long)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject._setVersion(int):IsStripped}
//+ (void) setVersion:(NSInteger)aVersion
//{
//    #{iOS.Foundation.NSObject._setVersion(int):Call((#{int})aVersion)};
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.replacementObjectForCoder(iOS.Foundation.NSCoder):IsStripped}
//- (id) replacementObjectForCoder:(NSCoder *)aCoder
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{ObjC.ID} __return = #{iOS.Foundation.NSObject:Of(__this).replacementObjectForCoder(iOS.Foundation.NSCoder):Call((#{iOS.Foundation.NSCoder})uObjC::Lifetime::GetUnoObject(aCoder, #{iOS.Foundation.NSCoder:TypeOf}))};
//    return (::id)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.awakeAfterUsingCoder(iOS.Foundation.NSCoder):IsStripped}
//- (id) awakeAfterUsingCoder:(NSCoder *)aDecoder
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{ObjC.ID} __return = #{iOS.Foundation.NSObject:Of(__this).awakeAfterUsingCoder(iOS.Foundation.NSCoder):Call((#{iOS.Foundation.NSCoder})uObjC::Lifetime::GetUnoObject(aDecoder, #{iOS.Foundation.NSCoder:TypeOf}))};
//    return (::id)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.Foundation.NSObject.classForCoder():IsStripped}
//- (Class) classForCoder
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{ObjC.Class} __return = #{iOS.Foundation.NSObject:Of(__this).classForCoder():Call()};
//    return (::Class)__return;
//}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
