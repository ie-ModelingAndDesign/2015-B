#define uObjC_NATIVE_TYPE UIView
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::g::iOS::UIKit::UIView*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::UIView_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY

//#if !#{iOS.UIKit.UIView._layerClass():IsStripped}
//+ (Class) layerClass
//{
//    #{ObjC.Class} __return = #{iOS.UIKit.UIView._layerClass():Call()};
//    return (::Class)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.initWithFrame(iOS.CoreGraphics.CGRect):IsStripped}
//- (instancetype) initWithFrame:(CGRect)frame
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).initWithFrame(iOS.CoreGraphics.CGRect):Call(uObjC::Struct::ToUno_CGRect(frame, #{iOS.CoreGraphics.CGRect}()))};
//    return uObjC_OBJECT_HANDLE(__this);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.isUserInteractionEnabled():IsStripped}
- (BOOL) isUserInteractionEnabled
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isUserInteractionEnabled();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setUserInteractionEnabled(bool):IsStripped}
- (void) setUserInteractionEnabled:(BOOL)userInteractionEnabled
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setUserInteractionEnabled((bool)userInteractionEnabled);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.tag():IsStripped}
//- (NSInteger) tag
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{int} __return = #{iOS.UIKit.UIView:Of(__this).tag():Call()};
//    return (long)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setTag(int):IsStripped}
//- (void) setTag:(NSInteger)tag
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).setTag(int):Call((#{int})tag)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.layer():IsStripped}
- (CALayer *) layer
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::QuartzCore::CALayer* __return = __this->layer();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.viewPrintFormatter():IsStripped}
//- (UIViewPrintFormatter *) viewPrintFormatter
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIViewPrintFormatter} __return = #{iOS.UIKit.UIView:Of(__this).viewPrintFormatter():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.drawRectForViewPrintFormatter(iOS.CoreGraphics.CGRect,iOS.UIKit.UIViewPrintFormatter):IsStripped}
//- (void) drawRect:(CGRect)rect forViewPrintFormatter:(UIViewPrintFormatter *)formatter
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).drawRectForViewPrintFormatter(iOS.CoreGraphics.CGRect,iOS.UIKit.UIViewPrintFormatter):Call(uObjC::Struct::ToUno_CGRect(rect, #{iOS.CoreGraphics.CGRect}()), (#{iOS.UIKit.UIViewPrintFormatter})uObjC::Lifetime::GetUnoObject(formatter, #{iOS.UIKit.UIViewPrintFormatter:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.endEditing(bool):IsStripped}
//- (BOOL) endEditing:(BOOL)force
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UIView:Of(__this).endEditing(bool):Call((#{bool})force)};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.snapshotViewAfterScreenUpdates(bool):IsStripped}
//- (UIView *) snapshotViewAfterScreenUpdates:(BOOL)afterUpdates
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView} __return = #{iOS.UIKit.UIView:Of(__this).snapshotViewAfterScreenUpdates(bool):Call((#{bool})afterUpdates)};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.resizableSnapshotViewFromRectAfterScreenUpdatesWithCapInsets(iOS.CoreGraphics.CGRect,bool,iOS.UIKit.UIEdgeInsets):IsStripped}
//- (UIView *) resizableSnapshotViewFromRect:(CGRect)rect afterScreenUpdates:(BOOL)afterUpdates withCapInsets:(UIEdgeInsets)capInsets
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView} __return = #{iOS.UIKit.UIView:Of(__this).resizableSnapshotViewFromRectAfterScreenUpdatesWithCapInsets(iOS.CoreGraphics.CGRect,bool,iOS.UIKit.UIEdgeInsets):Call(uObjC::Struct::ToUno_CGRect(rect, #{iOS.CoreGraphics.CGRect}()), (#{bool})afterUpdates, uObjC::Struct::ToUno_UIEdgeInsets(capInsets, #{iOS.UIKit.UIEdgeInsets}()))};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.drawViewHierarchyInRectAfterScreenUpdates(iOS.CoreGraphics.CGRect,bool):IsStripped}
//- (BOOL) drawViewHierarchyInRect:(CGRect)rect afterScreenUpdates:(BOOL)afterUpdates
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UIView:Of(__this).drawViewHierarchyInRectAfterScreenUpdates(iOS.CoreGraphics.CGRect,bool):Call(uObjC::Struct::ToUno_CGRect(rect, #{iOS.CoreGraphics.CGRect}()), (#{bool})afterUpdates)};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.encodeRestorableStateWithCoder(iOS.Foundation.NSCoder):IsStripped}
//- (void) encodeRestorableStateWithCoder:(NSCoder *)coder
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).encodeRestorableStateWithCoder(iOS.Foundation.NSCoder):Call((#{iOS.Foundation.NSCoder})uObjC::Lifetime::GetUnoObject(coder, #{iOS.Foundation.NSCoder:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.decodeRestorableStateWithCoder(iOS.Foundation.NSCoder):IsStripped}
//- (void) decodeRestorableStateWithCoder:(NSCoder *)coder
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).decodeRestorableStateWithCoder(iOS.Foundation.NSCoder):Call((#{iOS.Foundation.NSCoder})uObjC::Lifetime::GetUnoObject(coder, #{iOS.Foundation.NSCoder:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.restorationIdentifier():IsStripped}
//- (NSString *) restorationIdentifier
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{string} __return = #{iOS.UIKit.UIView:Of(__this).restorationIdentifier():Call()};
//    return uObjC::NativeString(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setRestorationIdentifier(string):IsStripped}
//- (void) setRestorationIdentifier:(NSString *)restorationIdentifier
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).setRestorationIdentifier(string):Call(uObjC::UnoString(restorationIdentifier))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.constraintsAffectingLayoutForAxis(iOS.UIKit.UILayoutConstraintAxis):IsStripped}
//- (NSArray *) constraintsAffectingLayoutForAxis:(UILayoutConstraintAxis)axis
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSArray} __return = #{iOS.UIKit.UIView:Of(__this).constraintsAffectingLayoutForAxis(iOS.UIKit.UILayoutConstraintAxis):Call(#{int}(axis))};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.hasAmbiguousLayout():IsStripped}
//- (BOOL) hasAmbiguousLayout
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UIView:Of(__this).hasAmbiguousLayout():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.exerciseAmbiguityInLayout():IsStripped}
//- (void) exerciseAmbiguityInLayout
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).exerciseAmbiguityInLayout():Call()};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.systemLayoutSizeFittingSize(iOS.CoreGraphics.CGSize):IsStripped}
//- (CGSize) systemLayoutSizeFittingSize:(CGSize)targetSize
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGSize} __return = #{iOS.UIKit.UIView:Of(__this).systemLayoutSizeFittingSize(iOS.CoreGraphics.CGSize):Call(uObjC::Struct::ToUno_CGSize(targetSize, #{iOS.CoreGraphics.CGSize}()))};
//    return uObjC::Struct::FromUno_CGSize(__return, ::CGSize());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.systemLayoutSizeFittingSizeWithHorizontalFittingPriorityVerticalFittingPriority(iOS.CoreGraphics.CGSize,float,float):IsStripped}
//- (CGSize) systemLayoutSizeFittingSize:(CGSize)targetSize withHorizontalFittingPriority:(UILayoutPriority)horizontalFittingPriority verticalFittingPriority:(UILayoutPriority)verticalFittingPriority
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGSize} __return = #{iOS.UIKit.UIView:Of(__this).systemLayoutSizeFittingSizeWithHorizontalFittingPriorityVerticalFittingPriority(iOS.CoreGraphics.CGSize,float,float):Call(uObjC::Struct::ToUno_CGSize(targetSize, #{iOS.CoreGraphics.CGSize}()), horizontalFittingPriority, verticalFittingPriority)};
//    return uObjC::Struct::FromUno_CGSize(__return, ::CGSize());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.alignmentRectForFrame(iOS.CoreGraphics.CGRect):IsStripped}
//- (CGRect) alignmentRectForFrame:(CGRect)frame
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGRect} __return = #{iOS.UIKit.UIView:Of(__this).alignmentRectForFrame(iOS.CoreGraphics.CGRect):Call(uObjC::Struct::ToUno_CGRect(frame, #{iOS.CoreGraphics.CGRect}()))};
//    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.frameForAlignmentRect(iOS.CoreGraphics.CGRect):IsStripped}
//- (CGRect) frameForAlignmentRect:(CGRect)alignmentRect
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGRect} __return = #{iOS.UIKit.UIView:Of(__this).frameForAlignmentRect(iOS.CoreGraphics.CGRect):Call(uObjC::Struct::ToUno_CGRect(alignmentRect, #{iOS.CoreGraphics.CGRect}()))};
//    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.alignmentRectInsets():IsStripped}
//- (UIEdgeInsets) alignmentRectInsets
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIEdgeInsets} __return = #{iOS.UIKit.UIView:Of(__this).alignmentRectInsets():Call()};
//    return uObjC::Struct::FromUno_UIEdgeInsets(__return, ::UIEdgeInsets());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.viewForBaselineLayout():IsStripped}
//- (UIView *) viewForBaselineLayout
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView} __return = #{iOS.UIKit.UIView:Of(__this).viewForBaselineLayout():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.intrinsicContentSize():IsStripped}
//- (CGSize) intrinsicContentSize
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGSize} __return = #{iOS.UIKit.UIView:Of(__this).intrinsicContentSize():Call()};
//    return uObjC::Struct::FromUno_CGSize(__return, ::CGSize());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.invalidateIntrinsicContentSize():IsStripped}
//- (void) invalidateIntrinsicContentSize
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).invalidateIntrinsicContentSize():Call()};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.contentHuggingPriorityForAxis(iOS.UIKit.UILayoutConstraintAxis):IsStripped}
//- (UILayoutPriority) contentHuggingPriorityForAxis:(UILayoutConstraintAxis)axis
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{float} __return = #{iOS.UIKit.UIView:Of(__this).contentHuggingPriorityForAxis(iOS.UIKit.UILayoutConstraintAxis):Call(#{int}(axis))};
//    return __return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setContentHuggingPriorityForAxis(float,iOS.UIKit.UILayoutConstraintAxis):IsStripped}
//- (void) setContentHuggingPriority:(UILayoutPriority)priority forAxis:(UILayoutConstraintAxis)axis
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).setContentHuggingPriorityForAxis(float,iOS.UIKit.UILayoutConstraintAxis):Call(priority, #{int}(axis))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.contentCompressionResistancePriorityForAxis(iOS.UIKit.UILayoutConstraintAxis):IsStripped}
//- (UILayoutPriority) contentCompressionResistancePriorityForAxis:(UILayoutConstraintAxis)axis
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{float} __return = #{iOS.UIKit.UIView:Of(__this).contentCompressionResistancePriorityForAxis(iOS.UIKit.UILayoutConstraintAxis):Call(#{int}(axis))};
//    return __return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setContentCompressionResistancePriorityForAxis(float,iOS.UIKit.UILayoutConstraintAxis):IsStripped}
//- (void) setContentCompressionResistancePriority:(UILayoutPriority)priority forAxis:(UILayoutConstraintAxis)axis
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).setContentCompressionResistancePriorityForAxis(float,iOS.UIKit.UILayoutConstraintAxis):Call(priority, #{int}(axis))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.translatesAutoresizingMaskIntoConstraints():IsStripped}
//- (BOOL) translatesAutoresizingMaskIntoConstraints
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UIView:Of(__this).translatesAutoresizingMaskIntoConstraints():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setTranslatesAutoresizingMaskIntoConstraints(bool):IsStripped}
- (void) setTranslatesAutoresizingMaskIntoConstraints:(BOOL)flag
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setTranslatesAutoresizingMaskIntoConstraints((bool)flag);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView._requiresConstraintBasedLayout():IsStripped}
//+ (BOOL) requiresConstraintBasedLayout
//{
//    #{bool} __return = #{iOS.UIKit.UIView._requiresConstraintBasedLayout():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.updateConstraintsIfNeeded():IsStripped}
//- (void) updateConstraintsIfNeeded
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).updateConstraintsIfNeeded():Call()};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.updateConstraints():IsStripped}
//- (void) updateConstraints
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).updateConstraints():Call()};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.needsUpdateConstraints():IsStripped}
//- (BOOL) needsUpdateConstraints
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UIView:Of(__this).needsUpdateConstraints():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setNeedsUpdateConstraints():IsStripped}
//- (void) setNeedsUpdateConstraints
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).setNeedsUpdateConstraints():Call()};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.constraints():IsStripped}
//- (NSArray *) constraints
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSArray} __return = #{iOS.UIKit.UIView:Of(__this).constraints():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.addConstraint(iOS.UIKit.NSLayoutConstraint):IsStripped}
//- (void) addConstraint:(NSLayoutConstraint *)constraint
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).addConstraint(iOS.UIKit.NSLayoutConstraint):Call((#{iOS.UIKit.NSLayoutConstraint})uObjC::Lifetime::GetUnoObject(constraint, #{iOS.UIKit.NSLayoutConstraint:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.addConstraints(iOS.Foundation.NSArray):IsStripped}
//- (void) addConstraints:(NSArray *)constraints
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).addConstraints(iOS.Foundation.NSArray):Call((#{iOS.Foundation.NSArray})uObjC::Lifetime::GetUnoObject(constraints, #{iOS.Foundation.NSArray:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.removeConstraint(iOS.UIKit.NSLayoutConstraint):IsStripped}
//- (void) removeConstraint:(NSLayoutConstraint *)constraint
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).removeConstraint(iOS.UIKit.NSLayoutConstraint):Call((#{iOS.UIKit.NSLayoutConstraint})uObjC::Lifetime::GetUnoObject(constraint, #{iOS.UIKit.NSLayoutConstraint:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.removeConstraints(iOS.Foundation.NSArray):IsStripped}
//- (void) removeConstraints:(NSArray *)constraints
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).removeConstraints(iOS.Foundation.NSArray):Call((#{iOS.Foundation.NSArray})uObjC::Lifetime::GetUnoObject(constraints, #{iOS.Foundation.NSArray:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.addMotionEffect(iOS.UIKit.UIMotionEffect):IsStripped}
//- (void) addMotionEffect:(UIMotionEffect *)effect
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).addMotionEffect(iOS.UIKit.UIMotionEffect):Call((#{iOS.UIKit.UIMotionEffect})uObjC::Lifetime::GetUnoObject(effect, #{iOS.UIKit.UIMotionEffect:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.removeMotionEffect(iOS.UIKit.UIMotionEffect):IsStripped}
//- (void) removeMotionEffect:(UIMotionEffect *)effect
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).removeMotionEffect(iOS.UIKit.UIMotionEffect):Call((#{iOS.UIKit.UIMotionEffect})uObjC::Lifetime::GetUnoObject(effect, #{iOS.UIKit.UIMotionEffect:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.motionEffects():IsStripped}
//- (NSArray *) motionEffects
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSArray} __return = #{iOS.UIKit.UIView:Of(__this).motionEffects():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setMotionEffects(iOS.Foundation.NSArray):IsStripped}
//- (void) setMotionEffects:(NSArray *)motionEffects
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).setMotionEffects(iOS.Foundation.NSArray):Call((#{iOS.Foundation.NSArray})uObjC::Lifetime::GetUnoObject(motionEffects, #{iOS.Foundation.NSArray:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.addGestureRecognizer(iOS.UIKit.UIGestureRecognizer):IsStripped}
//- (void) addGestureRecognizer:(UIGestureRecognizer *)gestureRecognizer
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).addGestureRecognizer(iOS.UIKit.UIGestureRecognizer):Call((#{iOS.UIKit.UIGestureRecognizer})uObjC::Lifetime::GetUnoObject(gestureRecognizer, #{iOS.UIKit.UIGestureRecognizer:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.removeGestureRecognizer(iOS.UIKit.UIGestureRecognizer):IsStripped}
//- (void) removeGestureRecognizer:(UIGestureRecognizer *)gestureRecognizer
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).removeGestureRecognizer(iOS.UIKit.UIGestureRecognizer):Call((#{iOS.UIKit.UIGestureRecognizer})uObjC::Lifetime::GetUnoObject(gestureRecognizer, #{iOS.UIKit.UIGestureRecognizer:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.gestureRecognizerShouldBegin(iOS.UIKit.UIGestureRecognizer):IsStripped}
//- (BOOL) gestureRecognizerShouldBegin:(UIGestureRecognizer *)gestureRecognizer
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UIView:Of(__this).gestureRecognizerShouldBegin(iOS.UIKit.UIGestureRecognizer):Call((#{iOS.UIKit.UIGestureRecognizer})uObjC::Lifetime::GetUnoObject(gestureRecognizer, #{iOS.UIKit.UIGestureRecognizer:TypeOf}))};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.gestureRecognizers():IsStripped}
//- (NSArray *) gestureRecognizers
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSArray} __return = #{iOS.UIKit.UIView:Of(__this).gestureRecognizers():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setGestureRecognizers(iOS.Foundation.NSArray):IsStripped}
//- (void) setGestureRecognizers:(NSArray *)gestureRecognizers
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).setGestureRecognizers(iOS.Foundation.NSArray):Call((#{iOS.Foundation.NSArray})uObjC::Lifetime::GetUnoObject(gestureRecognizers, #{iOS.Foundation.NSArray:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView._beginAnimationsContext(string,Uno.IntPtr):IsStripped}
//+ (void) beginAnimations:(NSString *)animationID context:(void *)context
//{
//    #{iOS.UIKit.UIView._beginAnimationsContext(string,Uno.IntPtr):Call(uObjC::UnoString(animationID), (#{Uno.IntPtr})context)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView._commitAnimations():IsStripped}
//+ (void) commitAnimations
//{
//    #{iOS.UIKit.UIView._commitAnimations():Call()};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView._setAnimationDelegate(ObjC.ID):IsStripped}
//+ (void) setAnimationDelegate:(id)delegate
//{
//    #{iOS.UIKit.UIView._setAnimationDelegate(ObjC.ID):Call((#{ObjC.ID})delegate)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView._setAnimationWillStartSelector(ObjC.Selector):IsStripped}
//+ (void) setAnimationWillStartSelector:(SEL)selector
//{
//    #{iOS.UIKit.UIView._setAnimationWillStartSelector(ObjC.Selector):Call((#{ObjC.Selector})selector)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView._setAnimationDidStopSelector(ObjC.Selector):IsStripped}
//+ (void) setAnimationDidStopSelector:(SEL)selector
//{
//    #{iOS.UIKit.UIView._setAnimationDidStopSelector(ObjC.Selector):Call((#{ObjC.Selector})selector)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView._setAnimationDuration(double):IsStripped}
//+ (void) setAnimationDuration:(NSTimeInterval)duration
//{
//    #{iOS.UIKit.UIView._setAnimationDuration(double):Call(duration)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView._setAnimationDelay(double):IsStripped}
//+ (void) setAnimationDelay:(NSTimeInterval)delay
//{
//    #{iOS.UIKit.UIView._setAnimationDelay(double):Call(delay)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView._setAnimationStartDate(iOS.Foundation.NSDate):IsStripped}
//+ (void) setAnimationStartDate:(NSDate *)startDate
//{
//    #{iOS.UIKit.UIView._setAnimationStartDate(iOS.Foundation.NSDate):Call((#{iOS.Foundation.NSDate})uObjC::Lifetime::GetUnoObject(startDate, #{iOS.Foundation.NSDate:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView._setAnimationCurve(iOS.UIKit.UIViewAnimationCurve):IsStripped}
//+ (void) setAnimationCurve:(UIViewAnimationCurve)curve
//{
//    #{iOS.UIKit.UIView._setAnimationCurve(iOS.UIKit.UIViewAnimationCurve):Call(#{int}(curve))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView._setAnimationRepeatCount(float):IsStripped}
//+ (void) setAnimationRepeatCount:(float)repeatCount
//{
//    #{iOS.UIKit.UIView._setAnimationRepeatCount(float):Call(repeatCount)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView._setAnimationRepeatAutoreverses(bool):IsStripped}
//+ (void) setAnimationRepeatAutoreverses:(BOOL)repeatAutoreverses
//{
//    #{iOS.UIKit.UIView._setAnimationRepeatAutoreverses(bool):Call((#{bool})repeatAutoreverses)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView._setAnimationBeginsFromCurrentState(bool):IsStripped}
//+ (void) setAnimationBeginsFromCurrentState:(BOOL)fromCurrentState
//{
//    #{iOS.UIKit.UIView._setAnimationBeginsFromCurrentState(bool):Call((#{bool})fromCurrentState)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView._setAnimationTransitionForViewCache(iOS.UIKit.UIViewAnimationTransition,iOS.UIKit.UIView,bool):IsStripped}
//+ (void) setAnimationTransition:(UIViewAnimationTransition)transition forView:(UIView *)view cache:(BOOL)cache
//{
//    #{iOS.UIKit.UIView._setAnimationTransitionForViewCache(iOS.UIKit.UIViewAnimationTransition,iOS.UIKit.UIView,bool):Call(#{int}(transition), (#{iOS.UIKit.UIView})uObjC::Lifetime::GetUnoObject(view, #{iOS.UIKit.UIView:TypeOf}), (#{bool})cache)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView._setAnimationsEnabled(bool):IsStripped}
//+ (void) setAnimationsEnabled:(BOOL)enabled
//{
//    #{iOS.UIKit.UIView._setAnimationsEnabled(bool):Call((#{bool})enabled)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView._areAnimationsEnabled():IsStripped}
//+ (BOOL) areAnimationsEnabled
//{
//    #{bool} __return = #{iOS.UIKit.UIView._areAnimationsEnabled():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.drawRect(iOS.CoreGraphics.CGRect):IsStripped}
//- (void) drawRect:(CGRect)rect
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).drawRect(iOS.CoreGraphics.CGRect):Call(uObjC::Struct::ToUno_CGRect(rect, #{iOS.CoreGraphics.CGRect}()))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setNeedsDisplay():IsStripped}
- (void) setNeedsDisplay
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setNeedsDisplay();
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setNeedsDisplayInRect(iOS.CoreGraphics.CGRect):IsStripped}
//- (void) setNeedsDisplayInRect:(CGRect)rect
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).setNeedsDisplayInRect(iOS.CoreGraphics.CGRect):Call(uObjC::Struct::ToUno_CGRect(rect, #{iOS.CoreGraphics.CGRect}()))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.tintColorDidChange():IsStripped}
//- (void) tintColorDidChange
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).tintColorDidChange():Call()};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.clipsToBounds():IsStripped}
- (BOOL) clipsToBounds
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->clipsToBounds();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setClipsToBounds(bool):IsStripped}
- (void) setClipsToBounds:(BOOL)clipsToBounds
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setClipsToBounds((bool)clipsToBounds);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.backgroundColor():IsStripped}
- (UIColor *) backgroundColor
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIColor* __return = __this->backgroundColor();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setBackgroundColor(iOS.UIKit.UIColor):IsStripped}
- (void) setBackgroundColor:(UIColor *)backgroundColor
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setBackgroundColor((::g::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(backgroundColor, ::g::iOS::UIKit::UIColor_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.alpha():IsStripped}
- (CGFloat) alpha
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    double __return = __this->alpha();
    return (CGFloat)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setAlpha(double):IsStripped}
- (void) setAlpha:(CGFloat)alpha
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setAlpha((double)alpha);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.isOpaque():IsStripped}
- (BOOL) isOpaque
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isOpaque();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setOpaque(bool):IsStripped}
- (void) setOpaque:(BOOL)opaque
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setOpaque((bool)opaque);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.clearsContextBeforeDrawing():IsStripped}
//- (BOOL) clearsContextBeforeDrawing
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UIView:Of(__this).clearsContextBeforeDrawing():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setClearsContextBeforeDrawing(bool):IsStripped}
//- (void) setClearsContextBeforeDrawing:(BOOL)clearsContextBeforeDrawing
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).setClearsContextBeforeDrawing(bool):Call((#{bool})clearsContextBeforeDrawing)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.isHidden():IsStripped}
- (BOOL) isHidden
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isHidden();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setHidden(bool):IsStripped}
- (void) setHidden:(BOOL)hidden
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setHidden((bool)hidden);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.contentMode():IsStripped}
//- (UIViewContentMode) contentMode
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIViewContentMode} __return = #{iOS.UIKit.UIView:Of(__this).contentMode():Call()};
//    return ::UIViewContentMode(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setContentMode(iOS.UIKit.UIViewContentMode):IsStripped}
//- (void) setContentMode:(UIViewContentMode)contentMode
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).setContentMode(iOS.UIKit.UIViewContentMode):Call(#{int}(contentMode))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.contentStretch():IsStripped}
//- (CGRect) contentStretch
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGRect} __return = #{iOS.UIKit.UIView:Of(__this).contentStretch():Call()};
//    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setContentStretch(iOS.CoreGraphics.CGRect):IsStripped}
//- (void) setContentStretch:(CGRect)contentStretch
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).setContentStretch(iOS.CoreGraphics.CGRect):Call(uObjC::Struct::ToUno_CGRect(contentStretch, #{iOS.CoreGraphics.CGRect}()))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.maskView():IsStripped}
//- (UIView *) maskView
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView} __return = #{iOS.UIKit.UIView:Of(__this).maskView():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setMaskView(iOS.UIKit.UIView):IsStripped}
//- (void) setMaskView:(UIView *)maskView
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).setMaskView(iOS.UIKit.UIView):Call((#{iOS.UIKit.UIView})uObjC::Lifetime::GetUnoObject(maskView, #{iOS.UIKit.UIView:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.tintColor():IsStripped}
- (UIColor *) tintColor
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::UIKit::UIColor* __return = __this->tintColor();
    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setTintColor(iOS.UIKit.UIColor):IsStripped}
- (void) setTintColor:(UIColor *)tintColor
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setTintColor((::g::iOS::UIKit::UIColor*)uObjC::Lifetime::GetUnoObject(tintColor, ::g::iOS::UIKit::UIColor_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.tintAdjustmentMode():IsStripped}
//- (UIViewTintAdjustmentMode) tintAdjustmentMode
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIViewTintAdjustmentMode} __return = #{iOS.UIKit.UIView:Of(__this).tintAdjustmentMode():Call()};
//    return ::UIViewTintAdjustmentMode(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setTintAdjustmentMode(iOS.UIKit.UIViewTintAdjustmentMode):IsStripped}
//- (void) setTintAdjustmentMode:(UIViewTintAdjustmentMode)tintAdjustmentMode
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).setTintAdjustmentMode(iOS.UIKit.UIViewTintAdjustmentMode):Call(#{int}(tintAdjustmentMode))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.removeFromSuperview():IsStripped}
- (void) removeFromSuperview
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->removeFromSuperview();
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.insertSubviewAtIndex(iOS.UIKit.UIView,int):IsStripped}
//- (void) insertSubview:(UIView *)view atIndex:(NSInteger)index
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).insertSubviewAtIndex(iOS.UIKit.UIView,int):Call((#{iOS.UIKit.UIView})uObjC::Lifetime::GetUnoObject(view, #{iOS.UIKit.UIView:TypeOf}), (#{int})index)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.exchangeSubviewAtIndexWithSubviewAtIndex(int,int):IsStripped}
//- (void) exchangeSubviewAtIndex:(NSInteger)index1 withSubviewAtIndex:(NSInteger)index2
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).exchangeSubviewAtIndexWithSubviewAtIndex(int,int):Call((#{int})index1, (#{int})index2)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.addSubview(iOS.UIKit.UIView):IsStripped}
- (void) addSubview:(UIView *)view
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->addSubview((::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(view, ::g::iOS::UIKit::UIView_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.insertSubviewBelowSubview(iOS.UIKit.UIView,iOS.UIKit.UIView):IsStripped}
//- (void) insertSubview:(UIView *)view belowSubview:(UIView *)siblingSubview
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).insertSubviewBelowSubview(iOS.UIKit.UIView,iOS.UIKit.UIView):Call((#{iOS.UIKit.UIView})uObjC::Lifetime::GetUnoObject(view, #{iOS.UIKit.UIView:TypeOf}), (#{iOS.UIKit.UIView})uObjC::Lifetime::GetUnoObject(siblingSubview, #{iOS.UIKit.UIView:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.insertSubviewAboveSubview(iOS.UIKit.UIView,iOS.UIKit.UIView):IsStripped}
//- (void) insertSubview:(UIView *)view aboveSubview:(UIView *)siblingSubview
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).insertSubviewAboveSubview(iOS.UIKit.UIView,iOS.UIKit.UIView):Call((#{iOS.UIKit.UIView})uObjC::Lifetime::GetUnoObject(view, #{iOS.UIKit.UIView:TypeOf}), (#{iOS.UIKit.UIView})uObjC::Lifetime::GetUnoObject(siblingSubview, #{iOS.UIKit.UIView:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.bringSubviewToFront(iOS.UIKit.UIView):IsStripped}
- (void) bringSubviewToFront:(UIView *)view
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->bringSubviewToFront((::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(view, ::g::iOS::UIKit::UIView_typeof()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.sendSubviewToBack(iOS.UIKit.UIView):IsStripped}
//- (void) sendSubviewToBack:(UIView *)view
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).sendSubviewToBack(iOS.UIKit.UIView):Call((#{iOS.UIKit.UIView})uObjC::Lifetime::GetUnoObject(view, #{iOS.UIKit.UIView:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.didAddSubview(iOS.UIKit.UIView):IsStripped}
//- (void) didAddSubview:(UIView *)subview
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).didAddSubview(iOS.UIKit.UIView):Call((#{iOS.UIKit.UIView})uObjC::Lifetime::GetUnoObject(subview, #{iOS.UIKit.UIView:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.willRemoveSubview(iOS.UIKit.UIView):IsStripped}
//- (void) willRemoveSubview:(UIView *)subview
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).willRemoveSubview(iOS.UIKit.UIView):Call((#{iOS.UIKit.UIView})uObjC::Lifetime::GetUnoObject(subview, #{iOS.UIKit.UIView:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.willMoveToSuperview(iOS.UIKit.UIView):IsStripped}
//- (void) willMoveToSuperview:(UIView *)newSuperview
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).willMoveToSuperview(iOS.UIKit.UIView):Call((#{iOS.UIKit.UIView})uObjC::Lifetime::GetUnoObject(newSuperview, #{iOS.UIKit.UIView:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.didMoveToSuperview():IsStripped}
//- (void) didMoveToSuperview
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).didMoveToSuperview():Call()};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.willMoveToWindow(iOS.UIKit.UIWindow):IsStripped}
//- (void) willMoveToWindow:(UIWindow *)newWindow
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).willMoveToWindow(iOS.UIKit.UIWindow):Call((#{iOS.UIKit.UIWindow})uObjC::Lifetime::GetUnoObject(newWindow, #{iOS.UIKit.UIWindow:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.didMoveToWindow():IsStripped}
//- (void) didMoveToWindow
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).didMoveToWindow():Call()};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.isDescendantOfView(iOS.UIKit.UIView):IsStripped}
//- (BOOL) isDescendantOfView:(UIView *)view
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UIView:Of(__this).isDescendantOfView(iOS.UIKit.UIView):Call((#{iOS.UIKit.UIView})uObjC::Lifetime::GetUnoObject(view, #{iOS.UIKit.UIView:TypeOf}))};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.viewWithTag(int):IsStripped}
//- (UIView *) viewWithTag:(NSInteger)tag
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView} __return = #{iOS.UIKit.UIView:Of(__this).viewWithTag(int):Call((#{int})tag)};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setNeedsLayout():IsStripped}
//- (void) setNeedsLayout
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).setNeedsLayout():Call()};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.layoutIfNeeded():IsStripped}
//- (void) layoutIfNeeded
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).layoutIfNeeded():Call()};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.layoutSubviews():IsStripped}
//- (void) layoutSubviews
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).layoutSubviews():Call()};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.layoutMarginsDidChange():IsStripped}
//- (void) layoutMarginsDidChange
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).layoutMarginsDidChange():Call()};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.superview():IsStripped}
//- (UIView *) superview
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView} __return = #{iOS.UIKit.UIView:Of(__this).superview():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.subviews():IsStripped}
//- (NSArray *) subviews
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.Foundation.NSArray} __return = #{iOS.UIKit.UIView:Of(__this).subviews():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.window():IsStripped}
//- (UIWindow *) window
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIWindow} __return = #{iOS.UIKit.UIView:Of(__this).window():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.layoutMargins():IsStripped}
//- (UIEdgeInsets) layoutMargins
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIEdgeInsets} __return = #{iOS.UIKit.UIView:Of(__this).layoutMargins():Call()};
//    return uObjC::Struct::FromUno_UIEdgeInsets(__return, ::UIEdgeInsets());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setLayoutMargins(iOS.UIKit.UIEdgeInsets):IsStripped}
//- (void) setLayoutMargins:(UIEdgeInsets)layoutMargins
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).setLayoutMargins(iOS.UIKit.UIEdgeInsets):Call(uObjC::Struct::ToUno_UIEdgeInsets(layoutMargins, #{iOS.UIKit.UIEdgeInsets}()))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.preservesSuperviewLayoutMargins():IsStripped}
//- (BOOL) preservesSuperviewLayoutMargins
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UIView:Of(__this).preservesSuperviewLayoutMargins():Call()};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setPreservesSuperviewLayoutMargins(bool):IsStripped}
//- (void) setPreservesSuperviewLayoutMargins:(BOOL)preservesSuperviewLayoutMargins
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).setPreservesSuperviewLayoutMargins(bool):Call((#{bool})preservesSuperviewLayoutMargins)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.hitTestWithEvent(iOS.CoreGraphics.CGPoint,iOS.UIKit.UIEvent):IsStripped}
//- (UIView *) hitTest:(CGPoint)point withEvent:(UIEvent *)event
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView} __return = #{iOS.UIKit.UIView:Of(__this).hitTestWithEvent(iOS.CoreGraphics.CGPoint,iOS.UIKit.UIEvent):Call(uObjC::Struct::ToUno_CGPoint(point, #{iOS.CoreGraphics.CGPoint}()), (#{iOS.UIKit.UIEvent})uObjC::Lifetime::GetUnoObject(event, #{iOS.UIKit.UIEvent:TypeOf}))};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.pointInsideWithEvent(iOS.CoreGraphics.CGPoint,iOS.UIKit.UIEvent):IsStripped}
//- (BOOL) pointInside:(CGPoint)point withEvent:(UIEvent *)event
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{bool} __return = #{iOS.UIKit.UIView:Of(__this).pointInsideWithEvent(iOS.CoreGraphics.CGPoint,iOS.UIKit.UIEvent):Call(uObjC::Struct::ToUno_CGPoint(point, #{iOS.CoreGraphics.CGPoint}()), (#{iOS.UIKit.UIEvent})uObjC::Lifetime::GetUnoObject(event, #{iOS.UIKit.UIEvent:TypeOf}))};
//    return (BOOL)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.convertPointToView(iOS.CoreGraphics.CGPoint,iOS.UIKit.UIView):IsStripped}
//- (CGPoint) convertPoint:(CGPoint)point toView:(UIView *)view
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGPoint} __return = #{iOS.UIKit.UIView:Of(__this).convertPointToView(iOS.CoreGraphics.CGPoint,iOS.UIKit.UIView):Call(uObjC::Struct::ToUno_CGPoint(point, #{iOS.CoreGraphics.CGPoint}()), (#{iOS.UIKit.UIView})uObjC::Lifetime::GetUnoObject(view, #{iOS.UIKit.UIView:TypeOf}))};
//    return uObjC::Struct::FromUno_CGPoint(__return, ::CGPoint());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.convertPointFromView(iOS.CoreGraphics.CGPoint,iOS.UIKit.UIView):IsStripped}
//- (CGPoint) convertPoint:(CGPoint)point fromView:(UIView *)view
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGPoint} __return = #{iOS.UIKit.UIView:Of(__this).convertPointFromView(iOS.CoreGraphics.CGPoint,iOS.UIKit.UIView):Call(uObjC::Struct::ToUno_CGPoint(point, #{iOS.CoreGraphics.CGPoint}()), (#{iOS.UIKit.UIView})uObjC::Lifetime::GetUnoObject(view, #{iOS.UIKit.UIView:TypeOf}))};
//    return uObjC::Struct::FromUno_CGPoint(__return, ::CGPoint());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.convertRectToView(iOS.CoreGraphics.CGRect,iOS.UIKit.UIView):IsStripped}
//- (CGRect) convertRect:(CGRect)rect toView:(UIView *)view
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGRect} __return = #{iOS.UIKit.UIView:Of(__this).convertRectToView(iOS.CoreGraphics.CGRect,iOS.UIKit.UIView):Call(uObjC::Struct::ToUno_CGRect(rect, #{iOS.CoreGraphics.CGRect}()), (#{iOS.UIKit.UIView})uObjC::Lifetime::GetUnoObject(view, #{iOS.UIKit.UIView:TypeOf}))};
//    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.convertRectFromView(iOS.CoreGraphics.CGRect,iOS.UIKit.UIView):IsStripped}
//- (CGRect) convertRect:(CGRect)rect fromView:(UIView *)view
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGRect} __return = #{iOS.UIKit.UIView:Of(__this).convertRectFromView(iOS.CoreGraphics.CGRect,iOS.UIKit.UIView):Call(uObjC::Struct::ToUno_CGRect(rect, #{iOS.CoreGraphics.CGRect}()), (#{iOS.UIKit.UIView})uObjC::Lifetime::GetUnoObject(view, #{iOS.UIKit.UIView:TypeOf}))};
//    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.sizeThatFits(iOS.CoreGraphics.CGSize):IsStripped}
- (CGSize) sizeThatFits:(CGSize)size
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::CoreGraphics::CGSize __return = __this->sizeThatFits(uObjC::Struct::ToUno_CGSize(size, ::g::iOS::CoreGraphics::CGSize()));
    return uObjC::Struct::FromUno_CGSize(__return, ::CGSize());
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.sizeToFit():IsStripped}
- (void) sizeToFit
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->sizeToFit();
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.frame():IsStripped}
- (CGRect) frame
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    ::g::iOS::CoreGraphics::CGRect __return = __this->frame();
    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setFrame(iOS.CoreGraphics.CGRect):IsStripped}
- (void) setFrame:(CGRect)frame
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setFrame(uObjC::Struct::ToUno_CGRect(frame, ::g::iOS::CoreGraphics::CGRect()));
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.bounds():IsStripped}
//- (CGRect) bounds
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGRect} __return = #{iOS.UIKit.UIView:Of(__this).bounds():Call()};
//    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setBounds(iOS.CoreGraphics.CGRect):IsStripped}
//- (void) setBounds:(CGRect)bounds
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).setBounds(iOS.CoreGraphics.CGRect):Call(uObjC::Struct::ToUno_CGRect(bounds, #{iOS.CoreGraphics.CGRect}()))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.center():IsStripped}
//- (CGPoint) center
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGPoint} __return = #{iOS.UIKit.UIView:Of(__this).center():Call()};
//    return uObjC::Struct::FromUno_CGPoint(__return, ::CGPoint());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setCenter(iOS.CoreGraphics.CGPoint):IsStripped}
//- (void) setCenter:(CGPoint)center
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).setCenter(iOS.CoreGraphics.CGPoint):Call(uObjC::Struct::ToUno_CGPoint(center, #{iOS.CoreGraphics.CGPoint}()))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.transform():IsStripped}
//- (CGAffineTransform) transform
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGAffineTransform} __return = #{iOS.UIKit.UIView:Of(__this).transform():Call()};
//    return uObjC::Struct::FromUno_CGAffineTransform(__return, ::CGAffineTransform());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setTransform(iOS.CoreGraphics.CGAffineTransform):IsStripped}
//- (void) setTransform:(CGAffineTransform)transform
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).setTransform(iOS.CoreGraphics.CGAffineTransform):Call(uObjC::Struct::ToUno_CGAffineTransform(transform, #{iOS.CoreGraphics.CGAffineTransform}()))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.contentScaleFactor():IsStripped}
//- (CGFloat) contentScaleFactor
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{double} __return = #{iOS.UIKit.UIView:Of(__this).contentScaleFactor():Call()};
//    return (CGFloat)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setContentScaleFactor(double):IsStripped}
//- (void) setContentScaleFactor:(CGFloat)contentScaleFactor
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).setContentScaleFactor(double):Call((#{double})contentScaleFactor)};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.isMultipleTouchEnabled():IsStripped}
- (BOOL) isMultipleTouchEnabled
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isMultipleTouchEnabled();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setMultipleTouchEnabled(bool):IsStripped}
- (void) setMultipleTouchEnabled:(BOOL)multipleTouchEnabled
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setMultipleTouchEnabled((bool)multipleTouchEnabled);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.isExclusiveTouch():IsStripped}
- (BOOL) isExclusiveTouch
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->isExclusiveTouch();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setExclusiveTouch(bool):IsStripped}
- (void) setExclusiveTouch:(BOOL)exclusiveTouch
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setExclusiveTouch((bool)exclusiveTouch);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.autoresizesSubviews():IsStripped}
- (BOOL) autoresizesSubviews
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    bool __return = __this->autoresizesSubviews();
    return (BOOL)__return;
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setAutoresizesSubviews(bool):IsStripped}
- (void) setAutoresizesSubviews:(BOOL)autoresizesSubviews
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->setAutoresizesSubviews((bool)autoresizesSubviews);
}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.autoresizingMask():IsStripped}
//- (UIViewAutoresizing) autoresizingMask
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIViewAutoresizing} __return = #{iOS.UIKit.UIView:Of(__this).autoresizingMask():Call()};
//    return ::UIViewAutoresizing(__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.setAutoresizingMask(iOS.UIKit.UIViewAutoresizing):IsStripped}
//- (void) setAutoresizingMask:(UIViewAutoresizing)autoresizingMask
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).setAutoresizingMask(iOS.UIKit.UIViewAutoresizing):Call(#{uint}(autoresizingMask))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.encodeWithCoder(iOS.Foundation.NSCoder):IsStripped}
//- (void) encodeWithCoder:(NSCoder *)aCoder
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).encodeWithCoder(iOS.Foundation.NSCoder):Call((#{iOS.Foundation.NSCoder})uObjC::Lifetime::GetUnoObject(aCoder, #{iOS.Foundation.NSCoder:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.initWithCoder(iOS.Foundation.NSCoder):IsStripped}
//- (id) initWithCoder:(NSCoder *)aDecoder
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).initWithCoder(iOS.Foundation.NSCoder):Call((#{iOS.Foundation.NSCoder})uObjC::Lifetime::GetUnoObject(aDecoder, #{iOS.Foundation.NSCoder:TypeOf}))};
//    return uObjC_OBJECT_HANDLE(__this);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView._appearance():IsStripped}
//+ (instancetype) appearance
//{
//    #{ObjC.ID} __return = #{iOS.UIKit.UIView._appearance():Call()};
//    return (::id)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView._appearanceForTraitCollection(iOS.UIKit.UITraitCollection):IsStripped}
//+ (instancetype) appearanceForTraitCollection:(UITraitCollection *)trait
//{
//    #{ObjC.ID} __return = #{iOS.UIKit.UIView._appearanceForTraitCollection(iOS.UIKit.UITraitCollection):Call((#{iOS.UIKit.UITraitCollection})uObjC::Lifetime::GetUnoObject(trait, #{iOS.UIKit.UITraitCollection:TypeOf}))};
//    return (::id)__return;
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.traitCollectionDidChange(iOS.UIKit.UITraitCollection):IsStripped}
//- (void) traitCollectionDidChange:(UITraitCollection *)previousTraitCollection
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UIView:Of(__this).traitCollectionDidChange(iOS.UIKit.UITraitCollection):Call((#{iOS.UIKit.UITraitCollection})uObjC::Lifetime::GetUnoObject(previousTraitCollection, #{iOS.UIKit.UITraitCollection:TypeOf}))};
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.traitCollection():IsStripped}
//- (UITraitCollection *) traitCollection
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.UIKit.UITraitCollection} __return = #{iOS.UIKit.UIView:Of(__this).traitCollection():Call()};
//    return uObjC::Lifetime::GetNativeHandle((::uObject *)__return);
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.convertPointToCoordinateSpace(iOS.CoreGraphics.CGPoint,iOS.UIKit.IUICoordinateSpace):IsStripped}
//- (CGPoint) convertPoint:(CGPoint)point toCoordinateSpace:(id<UICoordinateSpace>)coordinateSpace
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGPoint} __return = #{iOS.UIKit.UIView:Of(__this).convertPointToCoordinateSpace(iOS.CoreGraphics.CGPoint,iOS.UIKit.IUICoordinateSpace):Call(uObjC::Struct::ToUno_CGPoint(point, #{iOS.CoreGraphics.CGPoint}()), uObjC::Lifetime::GetUnoObject(coordinateSpace, #{iOS.UIKit.Interop.IUICoordinateSpace:TypeOf}))};
//    return uObjC::Struct::FromUno_CGPoint(__return, ::CGPoint());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.convertPointFromCoordinateSpace(iOS.CoreGraphics.CGPoint,iOS.UIKit.IUICoordinateSpace):IsStripped}
//- (CGPoint) convertPoint:(CGPoint)point fromCoordinateSpace:(id<UICoordinateSpace>)coordinateSpace
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGPoint} __return = #{iOS.UIKit.UIView:Of(__this).convertPointFromCoordinateSpace(iOS.CoreGraphics.CGPoint,iOS.UIKit.IUICoordinateSpace):Call(uObjC::Struct::ToUno_CGPoint(point, #{iOS.CoreGraphics.CGPoint}()), uObjC::Lifetime::GetUnoObject(coordinateSpace, #{iOS.UIKit.Interop.IUICoordinateSpace:TypeOf}))};
//    return uObjC::Struct::FromUno_CGPoint(__return, ::CGPoint());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.convertRectToCoordinateSpace(iOS.CoreGraphics.CGRect,iOS.UIKit.IUICoordinateSpace):IsStripped}
//- (CGRect) convertRect:(CGRect)rect toCoordinateSpace:(id<UICoordinateSpace>)coordinateSpace
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGRect} __return = #{iOS.UIKit.UIView:Of(__this).convertRectToCoordinateSpace(iOS.CoreGraphics.CGRect,iOS.UIKit.IUICoordinateSpace):Call(uObjC::Struct::ToUno_CGRect(rect, #{iOS.CoreGraphics.CGRect}()), uObjC::Lifetime::GetUnoObject(coordinateSpace, #{iOS.UIKit.Interop.IUICoordinateSpace:TypeOf}))};
//    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
//}
//#endif // !IsStripped

//#if !#{iOS.UIKit.UIView.convertRectFromCoordinateSpace(iOS.CoreGraphics.CGRect,iOS.UIKit.IUICoordinateSpace):IsStripped}
//- (CGRect) convertRect:(CGRect)rect fromCoordinateSpace:(id<UICoordinateSpace>)coordinateSpace
//{
//    uObjC_PROXY_FUNCTION_PROLOGUE
//    #{iOS.CoreGraphics.CGRect} __return = #{iOS.UIKit.UIView:Of(__this).convertRectFromCoordinateSpace(iOS.CoreGraphics.CGRect,iOS.UIKit.IUICoordinateSpace):Call(uObjC::Struct::ToUno_CGRect(rect, #{iOS.CoreGraphics.CGRect}()), uObjC::Lifetime::GetUnoObject(coordinateSpace, #{iOS.UIKit.Interop.IUICoordinateSpace:TypeOf}))};
//    return uObjC::Struct::FromUno_CGRect(__return, ::CGRect());
//}
//#endif // !IsStripped

@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
