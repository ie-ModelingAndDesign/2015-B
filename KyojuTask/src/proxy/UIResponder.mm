#define uObjC_NATIVE_TYPE UIResponder
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIResponder*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIResponder_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.UIKit.UIResponder.nextResponder():IsStripped}
//- (UIResponder *) nextResponder
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIResponder} __return = #{iOS.UIKit.UIResponder:Of(__this).nextResponder():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.canBecomeFirstResponder():IsStripped}
//- (BOOL) canBecomeFirstResponder
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UIResponder:Of(__this).canBecomeFirstResponder():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.becomeFirstResponder():IsStripped}
- (BOOL) becomeFirstResponder
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->becomeFirstResponder();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.canResignFirstResponder():IsStripped}
//- (BOOL) canResignFirstResponder
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UIResponder:Of(__this).canResignFirstResponder():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.resignFirstResponder():IsStripped}
- (BOOL) resignFirstResponder
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->resignFirstResponder();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.isFirstResponder():IsStripped}
- (BOOL) isFirstResponder
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isFirstResponder();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.touchesBeganWithEvent(iOS.Foundation.NSSet,iOS.UIKit.UIEvent):IsStripped}
//- (void) touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIResponder:Of(__this).touchesBeganWithEvent(iOS.Foundation.NSSet,iOS.UIKit.UIEvent):Call((#{iOS.Foundation.NSSet})uObjC::Lifetime::GetUnoObject(touches, #{iOS.Foundation.NSSet:TypeOf}), (#{iOS.UIKit.UIEvent})uObjC::Lifetime::GetUnoObject(event, #{iOS.UIKit.UIEvent:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.touchesMovedWithEvent(iOS.Foundation.NSSet,iOS.UIKit.UIEvent):IsStripped}
//- (void) touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIResponder:Of(__this).touchesMovedWithEvent(iOS.Foundation.NSSet,iOS.UIKit.UIEvent):Call((#{iOS.Foundation.NSSet})uObjC::Lifetime::GetUnoObject(touches, #{iOS.Foundation.NSSet:TypeOf}), (#{iOS.UIKit.UIEvent})uObjC::Lifetime::GetUnoObject(event, #{iOS.UIKit.UIEvent:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.touchesEndedWithEvent(iOS.Foundation.NSSet,iOS.UIKit.UIEvent):IsStripped}
//- (void) touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIResponder:Of(__this).touchesEndedWithEvent(iOS.Foundation.NSSet,iOS.UIKit.UIEvent):Call((#{iOS.Foundation.NSSet})uObjC::Lifetime::GetUnoObject(touches, #{iOS.Foundation.NSSet:TypeOf}), (#{iOS.UIKit.UIEvent})uObjC::Lifetime::GetUnoObject(event, #{iOS.UIKit.UIEvent:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.touchesCancelledWithEvent(iOS.Foundation.NSSet,iOS.UIKit.UIEvent):IsStripped}
//- (void) touchesCancelled:(NSSet *)touches withEvent:(UIEvent *)event
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIResponder:Of(__this).touchesCancelledWithEvent(iOS.Foundation.NSSet,iOS.UIKit.UIEvent):Call((#{iOS.Foundation.NSSet})uObjC::Lifetime::GetUnoObject(touches, #{iOS.Foundation.NSSet:TypeOf}), (#{iOS.UIKit.UIEvent})uObjC::Lifetime::GetUnoObject(event, #{iOS.UIKit.UIEvent:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.motionBeganWithEvent(iOS.UIKit.UIEventSubtype,iOS.UIKit.UIEvent):IsStripped}
//- (void) motionBegan:(UIEventSubtype)motion withEvent:(UIEvent *)event
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIResponder:Of(__this).motionBeganWithEvent(iOS.UIKit.UIEventSubtype,iOS.UIKit.UIEvent):Call(#{int}(motion), (#{iOS.UIKit.UIEvent})uObjC::Lifetime::GetUnoObject(event, #{iOS.UIKit.UIEvent:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.motionEndedWithEvent(iOS.UIKit.UIEventSubtype,iOS.UIKit.UIEvent):IsStripped}
//- (void) motionEnded:(UIEventSubtype)motion withEvent:(UIEvent *)event
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIResponder:Of(__this).motionEndedWithEvent(iOS.UIKit.UIEventSubtype,iOS.UIKit.UIEvent):Call(#{int}(motion), (#{iOS.UIKit.UIEvent})uObjC::Lifetime::GetUnoObject(event, #{iOS.UIKit.UIEvent:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.motionCancelledWithEvent(iOS.UIKit.UIEventSubtype,iOS.UIKit.UIEvent):IsStripped}
//- (void) motionCancelled:(UIEventSubtype)motion withEvent:(UIEvent *)event
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIResponder:Of(__this).motionCancelledWithEvent(iOS.UIKit.UIEventSubtype,iOS.UIKit.UIEvent):Call(#{int}(motion), (#{iOS.UIKit.UIEvent})uObjC::Lifetime::GetUnoObject(event, #{iOS.UIKit.UIEvent:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.remoteControlReceivedWithEvent(iOS.UIKit.UIEvent):IsStripped}
//- (void) remoteControlReceivedWithEvent:(UIEvent *)event
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIResponder:Of(__this).remoteControlReceivedWithEvent(iOS.UIKit.UIEvent):Call((#{iOS.UIKit.UIEvent})uObjC::Lifetime::GetUnoObject(event, #{iOS.UIKit.UIEvent:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.canPerformActionWithSender(ObjC.Selector,ObjC.ID):IsStripped}
//- (BOOL) canPerformAction:(SEL)action withSender:(id)sender
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UIResponder:Of(__this).canPerformActionWithSender(ObjC.Selector,ObjC.ID):Call((#{ObjC.Selector})action, (#{ObjC.ID})sender)};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.targetForActionWithSender(ObjC.Selector,ObjC.ID):IsStripped}
//- (id) targetForAction:(SEL)action withSender:(id)sender
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{ObjC.ID} __return = #{iOS.UIKit.UIResponder:Of(__this).targetForActionWithSender(ObjC.Selector,ObjC.ID):Call((#{ObjC.Selector})action, (#{ObjC.ID})sender)};
//    return (::id)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.undoManager():IsStripped}
//- (NSUndoManager *) undoManager
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSUndoManager} __return = #{iOS.UIKit.UIResponder:Of(__this).undoManager():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.updateUserActivityState(iOS.Foundation.NSUserActivity):IsStripped}
//- (void) updateUserActivityState:(NSUserActivity *)activity
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIResponder:Of(__this).updateUserActivityState(iOS.Foundation.NSUserActivity):Call((#{iOS.Foundation.NSUserActivity})uObjC::Lifetime::GetUnoObject(activity, #{iOS.Foundation.NSUserActivity:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.restoreUserActivityState(iOS.Foundation.NSUserActivity):IsStripped}
//- (void) restoreUserActivityState:(NSUserActivity *)activity
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIResponder:Of(__this).restoreUserActivityState(iOS.Foundation.NSUserActivity):Call((#{iOS.Foundation.NSUserActivity})uObjC::Lifetime::GetUnoObject(activity, #{iOS.Foundation.NSUserActivity:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.userActivity():IsStripped}
//- (NSUserActivity *) userActivity
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSUserActivity} __return = #{iOS.UIKit.UIResponder:Of(__this).userActivity():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.setUserActivity(iOS.Foundation.NSUserActivity):IsStripped}
//- (void) setUserActivity:(NSUserActivity *)userActivity
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIResponder:Of(__this).setUserActivity(iOS.Foundation.NSUserActivity):Call((#{iOS.Foundation.NSUserActivity})uObjC::Lifetime::GetUnoObject(userActivity, #{iOS.Foundation.NSUserActivity:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder._clearTextInputContextIdentifier(string):IsStripped}
//+ (void) clearTextInputContextIdentifier:(NSString *)identifier
//{
//    #{iOS.UIKit.UIResponder._clearTextInputContextIdentifier(string):Call(uObjC::UnoString(identifier))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.reloadInputViews():IsStripped}
//- (void) reloadInputViews
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIResponder:Of(__this).reloadInputViews():Call()};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.inputView():IsStripped}
//- (UIView *) inputView
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView} __return = #{iOS.UIKit.UIResponder:Of(__this).inputView():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.inputAccessoryView():IsStripped}
//- (UIView *) inputAccessoryView
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView} __return = #{iOS.UIKit.UIResponder:Of(__this).inputAccessoryView():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.inputViewController():IsStripped}
//- (UIInputViewController *) inputViewController
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIInputViewController} __return = #{iOS.UIKit.UIResponder:Of(__this).inputViewController():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.inputAccessoryViewController():IsStripped}
//- (UIInputViewController *) inputAccessoryViewController
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIInputViewController} __return = #{iOS.UIKit.UIResponder:Of(__this).inputAccessoryViewController():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.textInputMode():IsStripped}
//- (UITextInputMode *) textInputMode
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITextInputMode} __return = #{iOS.UIKit.UIResponder:Of(__this).textInputMode():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.textInputContextIdentifier():IsStripped}
//- (NSString *) textInputContextIdentifier
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{string} __return = #{iOS.UIKit.UIResponder:Of(__this).textInputContextIdentifier():Call()};
//    return uObjC::NativeString(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIResponder.keyCommands():IsStripped}
//- (NSArray *) keyCommands
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSArray} __return = #{iOS.UIKit.UIResponder:Of(__this).keyCommands():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
