#define uObjC_NATIVE_TYPE UIControl
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIControl*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIControl_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.UIKit.UIControl.beginTrackingWithTouchWithEvent(iOS.UIKit.UITouch,iOS.UIKit.UIEvent):IsStripped}
//- (BOOL) beginTrackingWithTouch:(UITouch *)touch withEvent:(UIEvent *)event
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UIControl:Of(__this).beginTrackingWithTouchWithEvent(iOS.UIKit.UITouch,iOS.UIKit.UIEvent):Call((#{iOS.UIKit.UITouch})uObjC::Lifetime::GetUnoObject(touch, #{iOS.UIKit.UITouch:TypeOf}), (#{iOS.UIKit.UIEvent})uObjC::Lifetime::GetUnoObject(event, #{iOS.UIKit.UIEvent:TypeOf}))};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.continueTrackingWithTouchWithEvent(iOS.UIKit.UITouch,iOS.UIKit.UIEvent):IsStripped}
//- (BOOL) continueTrackingWithTouch:(UITouch *)touch withEvent:(UIEvent *)event
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UIControl:Of(__this).continueTrackingWithTouchWithEvent(iOS.UIKit.UITouch,iOS.UIKit.UIEvent):Call((#{iOS.UIKit.UITouch})uObjC::Lifetime::GetUnoObject(touch, #{iOS.UIKit.UITouch:TypeOf}), (#{iOS.UIKit.UIEvent})uObjC::Lifetime::GetUnoObject(event, #{iOS.UIKit.UIEvent:TypeOf}))};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.endTrackingWithTouchWithEvent(iOS.UIKit.UITouch,iOS.UIKit.UIEvent):IsStripped}
//- (void) endTrackingWithTouch:(UITouch *)touch withEvent:(UIEvent *)event
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIControl:Of(__this).endTrackingWithTouchWithEvent(iOS.UIKit.UITouch,iOS.UIKit.UIEvent):Call((#{iOS.UIKit.UITouch})uObjC::Lifetime::GetUnoObject(touch, #{iOS.UIKit.UITouch:TypeOf}), (#{iOS.UIKit.UIEvent})uObjC::Lifetime::GetUnoObject(event, #{iOS.UIKit.UIEvent:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.cancelTrackingWithEvent(iOS.UIKit.UIEvent):IsStripped}
//- (void) cancelTrackingWithEvent:(UIEvent *)event
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIControl:Of(__this).cancelTrackingWithEvent(iOS.UIKit.UIEvent):Call((#{iOS.UIKit.UIEvent})uObjC::Lifetime::GetUnoObject(event, #{iOS.UIKit.UIEvent:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.addTargetActionForControlEvents(ObjC.ID,ObjC.Selector,iOS.UIKit.UIControlEvents):IsStripped}
- (void) addTarget:(id)target action:(SEL)action forControlEvents:(UIControlEvents)controlEvents
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->addTargetActionForControlEvents((::id)target, (uObjC::Selector)action, uint32_t(controlEvents));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.removeTargetActionForControlEvents(ObjC.ID,ObjC.Selector,iOS.UIKit.UIControlEvents):IsStripped}
- (void) removeTarget:(id)target action:(SEL)action forControlEvents:(UIControlEvents)controlEvents
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->removeTargetActionForControlEvents((::id)target, (uObjC::Selector)action, uint32_t(controlEvents));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.allTargets():IsStripped}
//- (NSSet *) allTargets
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSSet} __return = #{iOS.UIKit.UIControl:Of(__this).allTargets():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.allControlEvents():IsStripped}
//- (UIControlEvents) allControlEvents
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIControlEvents} __return = #{iOS.UIKit.UIControl:Of(__this).allControlEvents():Call()};
//    return ::UIControlEvents(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.actionsForTargetForControlEvent(ObjC.ID,iOS.UIKit.UIControlEvents):IsStripped}
//- (NSArray *) actionsForTarget:(id)target forControlEvent:(UIControlEvents)controlEvent
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSArray} __return = #{iOS.UIKit.UIControl:Of(__this).actionsForTargetForControlEvent(ObjC.ID,iOS.UIKit.UIControlEvents):Call((#{ObjC.ID})target, #{uint}(controlEvent))};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.sendActionToForEvent(ObjC.Selector,ObjC.ID,iOS.UIKit.UIEvent):IsStripped}
//- (void) sendAction:(SEL)action to:(id)target forEvent:(UIEvent *)event
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIControl:Of(__this).sendActionToForEvent(ObjC.Selector,ObjC.ID,iOS.UIKit.UIEvent):Call((#{ObjC.Selector})action, (#{ObjC.ID})target, (#{iOS.UIKit.UIEvent})uObjC::Lifetime::GetUnoObject(event, #{iOS.UIKit.UIEvent:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.sendActionsForControlEvents(iOS.UIKit.UIControlEvents):IsStripped}
//- (void) sendActionsForControlEvents:(UIControlEvents)controlEvents
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIControl:Of(__this).sendActionsForControlEvents(iOS.UIKit.UIControlEvents):Call(#{uint}(controlEvents))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.isEnabled():IsStripped}
//- (BOOL) isEnabled
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UIControl:Of(__this).isEnabled():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.setEnabled(bool):IsStripped}
//- (void) setEnabled:(BOOL)enabled
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIControl:Of(__this).setEnabled(bool):Call((#{bool})enabled)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.isSelected():IsStripped}
//- (BOOL) isSelected
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UIControl:Of(__this).isSelected():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.setSelected(bool):IsStripped}
//- (void) setSelected:(BOOL)selected
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIControl:Of(__this).setSelected(bool):Call((#{bool})selected)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.isHighlighted():IsStripped}
//- (BOOL) isHighlighted
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UIControl:Of(__this).isHighlighted():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.setHighlighted(bool):IsStripped}
//- (void) setHighlighted:(BOOL)highlighted
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIControl:Of(__this).setHighlighted(bool):Call((#{bool})highlighted)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.contentVerticalAlignment():IsStripped}
//- (UIControlContentVerticalAlignment) contentVerticalAlignment
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIControlContentVerticalAlignment} __return = #{iOS.UIKit.UIControl:Of(__this).contentVerticalAlignment():Call()};
//    return ::UIControlContentVerticalAlignment(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.setContentVerticalAlignment(iOS.UIKit.UIControlContentVerticalAlignment):IsStripped}
//- (void) setContentVerticalAlignment:(UIControlContentVerticalAlignment)contentVerticalAlignment
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIControl:Of(__this).setContentVerticalAlignment(iOS.UIKit.UIControlContentVerticalAlignment):Call(#{int}(contentVerticalAlignment))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.contentHorizontalAlignment():IsStripped}
//- (UIControlContentHorizontalAlignment) contentHorizontalAlignment
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIControlContentHorizontalAlignment} __return = #{iOS.UIKit.UIControl:Of(__this).contentHorizontalAlignment():Call()};
//    return ::UIControlContentHorizontalAlignment(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.setContentHorizontalAlignment(iOS.UIKit.UIControlContentHorizontalAlignment):IsStripped}
//- (void) setContentHorizontalAlignment:(UIControlContentHorizontalAlignment)contentHorizontalAlignment
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIControl:Of(__this).setContentHorizontalAlignment(iOS.UIKit.UIControlContentHorizontalAlignment):Call(#{int}(contentHorizontalAlignment))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.state():IsStripped}
//- (UIControlState) state
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIControlState} __return = #{iOS.UIKit.UIControl:Of(__this).state():Call()};
//    return ::UIControlState(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.isTracking():IsStripped}
//- (BOOL) isTracking
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UIControl:Of(__this).isTracking():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIControl.isTouchInside():IsStripped}
//- (BOOL) isTouchInside
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UIControl:Of(__this).isTouchInside():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
