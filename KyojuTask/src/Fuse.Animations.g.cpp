// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.AnimatorState.h>
#include <Fuse.Animations.AnimatorVariant.h>
#include <Fuse.Animations.AverageMasterProperty-1.h>
#include <Fuse.Animations.AverageMasterTransform.h>
#include <Fuse.Animations.AverageMixer.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.ContinuousTrackChangeState-1.h>
#include <Fuse.Animations.ContinuousTrackProvider.h>
#include <Fuse.Animations.Converter-1.h>
#include <Fuse.Animations.ConverterDouble.h>
#include <Fuse.Animations.ConverterFloat.h>
#include <Fuse.Animations.ConverterFloat2.h>
#include <Fuse.Animations.ConverterFloat3.h>
#include <Fuse.Animations.ConverterFloat4.h>
#include <Fuse.Animations.CreateStateParams.h>
#include <Fuse.Animations.Cycle-1.h>
#include <Fuse.Animations.CycleState-1.h>
#include <Fuse.Animations.CycleWaveform.h>
#include <Fuse.Animations.DiscreteMasterProperty-1.h>
#include <Fuse.Animations.DiscreteMasterTransform.h>
#include <Fuse.Animations.DiscreteMixer.h>
#include <Fuse.Animations.DiscreteSingleTrack.h>
#include <Fuse.Animations.DiscreteTrackChangeState-1.h>
#include <Fuse.Animations.DiscreteTrackProvider.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.EasingFunction.h>
#include <Fuse.Animations.EasingFunctions.h>
#include <Fuse.Animations.EasingTrack.h>
#include <Fuse.Animations.FastMatrixTransform.h>
#include <Fuse.Animations.IMixer.h>
#include <Fuse.Animations.IMixerHandle-1.h>
#include <Fuse.Animations.IMixerMaster.h>
#include <Fuse.Animations.IResize.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.MasterBase-1.GFWResult.h>
#include <Fuse.Animations.MasterBase-1.h>
#include <Fuse.Animations.MasterProperty-1.h>
#include <Fuse.Animations.MasterPropertyGet.h>
#include <Fuse.Animations.MasterTransform.h>
#include <Fuse.Animations.Mixer.h>
#include <Fuse.Animations.MixerBase.h>
#include <Fuse.Animations.MixerHandle-1.h>
#include <Fuse.Animations.MixOp.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Nothing.h>
#include <Fuse.Animations.NothingAnimatorState.h>
#include <Fuse.Animations.OpenAnimator.h>
#include <Fuse.Animations.OpenAnimatorState.h>
#include <Fuse.Animations.Player.h>
#include <Fuse.Animations.PlayerPart.h>
#include <Fuse.Animations.PlayMode.h>
#include <Fuse.Animations.Resize.h>
#include <Fuse.Animations.ResizeAnimatorState.h>
#include <Fuse.Animations.Rotate.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.SeekDirection.h>
#include <Fuse.Animations.Skew.h>
#include <Fuse.Animations.Spin.h>
#include <Fuse.Animations.SpinState.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TrackAnimatorState.h>
#include <Fuse.Animations.TrackProvider.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Animations.TransformAnimatorState-1.h>
#include <Fuse.Animations.TriggerAnimation.h>
#include <Fuse.Animations.TriggerAnimationState.h>
#include <Fuse.Animations.TriggerAnimationState.SeekFlags.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Internal.Blender-1.h>
#include <Fuse.Internal.BlenderMap.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITransformMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Node.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Rotation.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Time.h>
#include <Fuse.Transform.h>
#include <Fuse.TransformModeFlags.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ConcurrentCollection-1.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.Property-1.h>
static uString* STRINGS[9];
static uType* TYPES[86];

namespace g{
namespace Fuse{
namespace Animations{

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(3454)
// ---------------------------------------------------------------------------

// public enum AnimationVariant :3454
uEnumType* AnimationVariant_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.AnimationVariant", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(14)
// -------------------------------------------------------------------------

// public abstract class Animator :14
// {
Animator_type* Animator_typeof()
{
    static uSStrong<Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Animator);
    options.TypeSize = sizeof(Animator_type);
    type = (Animator_type*)uClassType::New("Fuse.Animations.Animator", options);
    type->fp_get_AnimatorVariant = Animator__get_AnimatorVariant_fn;
    type->fp_GetDurationWithDelay = Animator__GetDurationWithDelay_fn;
    ::TYPES[0] = ::g::Fuse::Animations::Mixer_typeof();
    type->SetFields(0,
        ::g::Fuse::Animations::MixOp_typeof(), offsetof(::g::Fuse::Animations::Animator, _mixOp), 0,
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(::g::Fuse::Animations::Animator, Mixer), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Animator, _Delay), 0);
    return type;
}

// internal Animator() :36
void Animator__ctor__fn(Animator* __this)
{
    __this->ctor_();
}

// internal virtual Fuse.Animations.AnimatorVariant get_AnimatorVariant() :20
void Animator__get_AnimatorVariant_fn(Animator* __this, int* __retval)
{
    return *__retval = 0, void();
}

// public generated double get_Delay() :18
void Animator__get_Delay_fn(Animator* __this, double* __retval)
{
    *__retval = __this->Delay();
}

// public generated void set_Delay(double value) :18
void Animator__set_Delay_fn(Animator* __this, double* value)
{
    __this->Delay(*value);
}

// internal virtual double GetDurationWithDelay(Fuse.Animations.AnimationVariant dir) :31
void Animator__GetDurationWithDelay_fn(Animator* __this, int* dir, double* __retval)
{
    return *__retval = __this->Delay(), void();
}

// public Fuse.Animations.MixOp get_MixOp() :27
void Animator__get_MixOp_fn(Animator* __this, int* __retval)
{
    *__retval = __this->MixOp();
}

// public void set_MixOp(Fuse.Animations.MixOp value) :28
void Animator__set_MixOp_fn(Animator* __this, int* value)
{
    __this->MixOp(*value);
}

// internal Animator() [instance] :36
void Animator::ctor_()
{
    Mixer = ::g::Fuse::Animations::Mixer::Default();
    _mixOp = 1;
}

// public generated double get_Delay() [instance] :18
double Animator::Delay()
{
    return _Delay;
}

// public generated void set_Delay(double value) [instance] :18
void Animator::Delay(double value)
{
    _Delay = value;
}

// public Fuse.Animations.MixOp get_MixOp() [instance] :27
int Animator::MixOp()
{
    return _mixOp;
}

// public void set_MixOp(Fuse.Animations.MixOp value) [instance] :28
void Animator::MixOp(int value)
{
    _mixOp = value;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(52)
// -------------------------------------------------------------------------

// internal abstract class AnimatorState :52
// {
AnimatorState_type* AnimatorState_typeof()
{
    static uSStrong<AnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(AnimatorState);
    options.TypeSize = sizeof(AnimatorState_type);
    type = (AnimatorState_type*)uClassType::New("Fuse.Animations.AnimatorState", options);
    type->fp_Disable = AnimatorState__Disable_fn;
    ::TYPES[1] = ::g::Fuse::Animations::CreateStateParams_typeof();
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Animations::AnimatorState, Node), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::AnimatorState, TotalDuration), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Animations::AnimatorState, Variant), 0);
    return type;
}

// protected AnimatorState(Fuse.Animations.CreateStateParams p, [Fuse.Node useNode]) :58
void AnimatorState__ctor__fn(AnimatorState* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Node* useNode)
{
    __this->ctor_(p, useNode);
}

// public virtual void Disable() :72
void AnimatorState__Disable_fn(AnimatorState* __this)
{
}

// protected AnimatorState(Fuse.Animations.CreateStateParams p, [Fuse.Node useNode]) [instance] :58
void AnimatorState::ctor_(::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Node* useNode)
{
    Variant = uPtr(p)->Variant;
    Node = ((useNode != NULL) ? useNode : (::g::Fuse::Node*)p->Attached);
    TotalDuration = p->TotalDuration;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(7)
// ------------------------------------------------------------------------

// internal enum AnimatorVariant :7
uEnumType* AnimatorVariant_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.AnimatorVariant", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Allow", 0LL,
        "Disallow", 1LL,
        "HasBackward", 2LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(231)
// --------------------------------------------------------------------------

// internal sealed class AverageMasterProperty<T> :231
// {
::g::Fuse::Animations::MasterProperty_type* AverageMasterProperty_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 6;
    options.ObjectSize = sizeof(AverageMasterProperty);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterProperty_type);
    type = (::g::Fuse::Animations::MasterProperty_type*)uClassType::New("Fuse.Animations.AverageMasterProperty`1", options);
    type->SetBase(::g::Fuse::Animations::MasterProperty_typeof()->MakeType(type->T(0)));
    type->fp_OnActive = (void(*)(::g::Fuse::Animations::MasterBase*))AverageMasterProperty__OnActive_fn;
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))AverageMasterProperty__OnComplete_fn;
    type->interface1.fp_GetPropertyObject = (void(*)(uObject*, uObject**))::g::Fuse::Animations::MasterProperty__GetPropertyObject_fn;
    type->interface0.fp_Complete = (void(*)(uObject*))::g::Fuse::Animations::MasterBase__Complete_fn;
    ::TYPES[2] = ::g::Fuse::Internal::BlenderMap_typeof();
    ::TYPES[3] = ::g::Fuse::Animations::MasterProperty_typeof();
    ::TYPES[4] = ::g::Uno::Double_typeof();
    ::TYPES[5] = ::g::Fuse::Animations::MasterBase__GFWResult_typeof();
    ::TYPES[6] = ::g::Uno::Collections::List_typeof();
    ::TYPES[7] = ::g::Fuse::Animations::MixerHandle_typeof();
    ::TYPES[8] = ::g::Fuse::Animations::MasterBase_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[10] = ::g::Uno::Int_typeof();
    ::TYPES[11] = uObject_typeof();
    type->SetPrecalc(
        ::TYPES[2/*Fuse.Internal.BlenderMap*/]->MakeMethod(1, type->T(0)),
        ::TYPES[3/*Fuse.Animations.MasterProperty`1*/]->MakeType(type->T(0)),
        ::TYPES[5/*Fuse.Animations.MasterBase`1.GFWResult*/]->MakeType(type->T(0)),
        ::TYPES[6/*Uno.Collections.List`1*/]->MakeType(::TYPES[7/*Fuse.Animations.MixerHandle`1*/]->MakeType(type->T(0))),
        ::TYPES[7/*Fuse.Animations.MixerHandle`1*/]->MakeType(type->T(0)),
        ::TYPES[8/*Fuse.Animations.MasterBase`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface0),
        ::g::Fuse::Animations::MasterPropertyGet_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface1));
    type->SetFields(6,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::AverageMasterProperty, blender), 0);
    return type;
}

// public AverageMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :233
void AverageMasterProperty__ctor_2_fn(AverageMasterProperty* __this, ::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(property, mixerBase);
}

// public AverageMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :233
void AverageMasterProperty__New1_fn(uType* __type, ::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase, AverageMasterProperty** __retval)
{
    *__retval = AverageMasterProperty::New1(__type, property, mixerBase);
}

// protected override sealed void OnActive() :237
void AverageMasterProperty__OnActive_fn(AverageMasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
        __this->__type->T(0),
    };

    if (__this->blender == NULL)
        __this->blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[0]));
}

// public override sealed void OnComplete() :243
void AverageMasterProperty__OnComplete_fn(AverageMasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Fuse.Animations.MasterProperty<T>*/),
        __this->__type->Precalced(2/*Fuse.Animations.MasterBase<T>.GFWResult*/),
        __this->__type->Precalced(3/*Uno.Collections.List<Fuse.Animations.MixerHandle<T>>*/),
        __this->__type->Precalced(4/*Fuse.Animations.MixerHandle<T>*/),
        __this->__type->Precalced(5/*Fuse.Animations.MasterBase<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT nv(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ;
    ::g::Fuse::Animations::MixerHandle* ret4;
    ;
    ;
    ;
    ;
    ::g::Fuse::Animations::MasterBase__GFWResult weight = __this->GetFullWeight();
    nv = (uPtr(__this->blender)->Weight_ex((::g::Fuse::Animations::MasterProperty__get_RestValue_fn(__this, &ret3), ret3), uCRef((double)(weight.Rest / weight.Full)), &ret2), ret2);
    int c = uPtr((::g::Uno::Collections::List*)__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret4), ret4);

        if (!uPtr(v)->HasValue())
            continue;

        if (uPtr(v)->MixOp() == 1)
            nv = (uPtr(__this->blender)->Add_ex(nv, (uPtr(__this->blender)->Weight_ex(uPtr(v)->Value(), uCRef((double)(uPtr(v)->Strength / weight.Full)), &ret6), ret6), &ret5), ret5);
        else
            nv = (uPtr(__this->blender)->Add_ex(nv, (uPtr(__this->blender)->Weight_ex(v->Value(), uCRef((double)v->Strength), &ret8), ret8), &ret7), ret7);
    }

    ::g::Uno::UX::Property__Set_fn(uPtr((::g::Uno::UX::Property*)__this->Property), nv, __this);
}

// public AverageMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [instance] :233
void AverageMasterProperty::ctor_2(::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_1(property, mixerBase);
}

// public AverageMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [static] :233
AverageMasterProperty* AverageMasterProperty::New1(uType* __type, ::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    AverageMasterProperty* obj1 = (AverageMasterProperty*)uNew(__type);
    obj1->ctor_2(property, mixerBase);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(265)
// --------------------------------------------------------------------------

// internal sealed class AverageMasterTransform :265
// {
::g::Fuse::Animations::MasterBase_type* AverageMasterTransform_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AverageMasterTransform);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterBase_type);
    type = (::g::Fuse::Animations::MasterBase_type*)uClassType::New("Fuse.Animations.AverageMasterTransform", options);
    type->SetBase(::g::Fuse::Animations::MasterTransform_typeof());
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))AverageMasterTransform__OnComplete_fn;
    type->interface0.fp_Complete = (void(*)(uObject*))::g::Fuse::Animations::MasterBase__Complete_fn;
    ::TYPES[12] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::MixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof()));
    ::TYPES[13] = ::g::Fuse::Animations::MasterBase_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[14] = ::g::Fuse::Animations::MixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[10] = ::g::Uno::Int_typeof();
    ::TYPES[15] = ::g::Fuse::Animations::MasterBase__GFWResult_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[16] = ::g::Uno::Float4x4_typeof();
    ::TYPES[17] = ::g::Fuse::FastMatrix_typeof();
    ::TYPES[11] = uObject_typeof();
    ::TYPES[18] = ::g::Fuse::Animations::FastMatrixTransform_typeof();
    ::TYPES[19] = ::g::Fuse::Animations::MasterTransform_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterBase_type, interface0));
    type->SetFields(7);
    return type;
}

// public AverageMasterTransform(Fuse.Node node, Fuse.Animations.MixerBase mixerBase) :267
void AverageMasterTransform__ctor_2_fn(AverageMasterTransform* __this, ::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(node, mixerBase);
}

// public AverageMasterTransform New(Fuse.Node node, Fuse.Animations.MixerBase mixerBase) :267
void AverageMasterTransform__New1_fn(::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase, AverageMasterTransform** __retval)
{
    *__retval = AverageMasterTransform::New1(node, mixerBase);
}

// public override sealed void OnComplete() :270
void AverageMasterTransform__OnComplete_fn(AverageMasterTransform* __this)
{
    ::g::Fuse::Animations::MixerHandle* ret2;
    ::g::Fuse::Animations::MasterBase__GFWResult weight = __this->GetFullWeight();
    ::g::Fuse::FastMatrix* nv = ::g::Fuse::FastMatrix::Identity();
    int c = uPtr((::g::Uno::Collections::List*)__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret2), ret2);

        if (!uPtr(v)->HasValue())
            continue;

        if (uPtr(v)->MixOp() == 1)
            uPtr(uPtr(v)->Value().Strong< ::g::Fuse::Transform*>())->AppendTo(nv, uPtr(v)->Strength / weight.Full);
        else
            uPtr(v->Value().Strong< ::g::Fuse::Transform*>())->AppendTo(nv, v->Strength);
    }

    if (!uPtr(nv)->Matrix().Equals(::TYPES[16/*float4x4*/], uBox(::TYPES[16/*float4x4*/], uPtr(uPtr(__this->FMT)->Matrix)->Matrix())))
    {
        uPtr(__this->FMT)->Matrix = nv;
        uPtr(__this->FMT)->Changed();
    }
}

// public AverageMasterTransform(Fuse.Node node, Fuse.Animations.MixerBase mixerBase) [instance] :267
void AverageMasterTransform::ctor_2(::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_1(node, mixerBase);
}

// public AverageMasterTransform New(Fuse.Node node, Fuse.Animations.MixerBase mixerBase) [static] :267
AverageMasterTransform* AverageMasterTransform::New1(::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    AverageMasterTransform* obj1 = (AverageMasterTransform*)uNew(AverageMasterTransform_typeof());
    obj1->ctor_2(node, mixerBase);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(221)
// --------------------------------------------------------------------------

// internal sealed class AverageMixer :221
// {
::g::Fuse::Animations::MixerBase_type* AverageMixer_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MixerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(AverageMixer);
    options.TypeSize = sizeof(::g::Fuse::Animations::MixerBase_type);
    type = (::g::Fuse::Animations::MixerBase_type*)uClassType::New("Fuse.Animations.AverageMixer", options);
    type->SetBase(::g::Fuse::Animations::MixerBase_typeof());
    type->fp_ctor_ = (void*)AverageMixer__New1_fn;
    type->fp_CreateMaster = (void(*)(::g::Fuse::Animations::MixerBase*, uType*, ::g::Uno::UX::Property*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterProperty**))AverageMixer__CreateMaster_fn;
    type->fp_CreateMasterTransform = (void(*)(::g::Fuse::Animations::MixerBase*, ::g::Fuse::Node*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterBase**))AverageMixer__CreateMasterTransform_fn;
    type->interface0.fp_Register = (void(*)(uObject*, uType*, ::g::Uno::UX::Property*, int*, uObject**))::g::Fuse::Animations::MixerBase__Register_fn;
    type->interface0.fp_RegisterTransform = (void(*)(uObject*, ::g::Fuse::Node*, int*, int*, uObject**))::g::Fuse::Animations::MixerBase__RegisterTransform_fn;
    ::TYPES[3] = ::g::Fuse::Animations::MasterProperty_typeof();
    ::TYPES[20] = ::g::Fuse::Animations::AverageMasterProperty_typeof();
    ::TYPES[13] = ::g::Fuse::Animations::MasterBase_typeof()->MakeType(::g::Fuse::Transform_typeof());
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(::g::Fuse::Animations::MixerBase_type, interface0));
    type->SetFields(2);
    return type;
}

// public generated AverageMixer() :221
void AverageMixer__ctor_1_fn(AverageMixer* __this)
{
    __this->ctor_1();
}

// protected override sealed Fuse.Animations.MasterProperty<T> CreateMaster<T>(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :223
void AverageMixer__CreateMaster_fn(AverageMixer* __this, uType* __type, ::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterProperty** __retval)
{
    __type = AverageMixer_typeof()->GetVirtual(__type);
    uType* __types[] = {
        ::TYPES[3/*Fuse.Animations.MasterProperty`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        ::TYPES[20/*Fuse.Animations.AverageMasterProperty`1*/]->MakeType(__type->U(0)),
    };
    return *__retval = (::g::Fuse::Animations::AverageMasterProperty*)::g::Fuse::Animations::AverageMasterProperty::New1(__types[2], property, mixerBase), void();
}

// protected override sealed Fuse.Animations.MasterBase<Fuse.Transform> CreateMasterTransform(Fuse.Node element, Fuse.Animations.MixerBase mixerBase) :226
void AverageMixer__CreateMasterTransform_fn(AverageMixer* __this, ::g::Fuse::Node* element, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterBase** __retval)
{
    return *__retval = ::g::Fuse::Animations::AverageMasterTransform::New1(element, mixerBase), void();
}

// public generated AverageMixer New() :221
void AverageMixer__New1_fn(AverageMixer** __retval)
{
    *__retval = AverageMixer::New1();
}

// public generated AverageMixer() [instance] :221
void AverageMixer::ctor_1()
{
    ctor_();
}

// public generated AverageMixer New() [static] :221
AverageMixer* AverageMixer::New1()
{
    AverageMixer* obj1 = (AverageMixer*)uNew(AverageMixer_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(307)
// --------------------------------------------------------------------------

// public sealed class Change<T> :307
// {
::g::Fuse::Animations::Animator_type* Change_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.GenericCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(Change);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Change`1", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimator_typeof());
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Change__CreateState_fn;
    ::STRINGS[0] = uString::Const("target");
    ::STRINGS[1] = uString::Const("Unsupported change type: ");
    ::TYPES[21] = ::g::Uno::Float_typeof();
    ::TYPES[11] = uObject_typeof();
    ::TYPES[22] = ::g::Fuse::Animations::ConverterFloat_typeof();
    ::TYPES[23] = ::g::Uno::Float2_typeof();
    ::TYPES[24] = ::g::Fuse::Animations::ConverterFloat2_typeof();
    ::TYPES[25] = ::g::Uno::Float3_typeof();
    ::TYPES[26] = ::g::Fuse::Animations::ConverterFloat3_typeof();
    ::TYPES[27] = ::g::Uno::Float4_typeof();
    ::TYPES[28] = ::g::Fuse::Animations::ConverterFloat4_typeof();
    ::TYPES[4] = ::g::Uno::Double_typeof();
    ::TYPES[29] = ::g::Fuse::Animations::ConverterDouble_typeof();
    ::TYPES[30] = ::g::Fuse::Animations::Converter_typeof();
    ::TYPES[31] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[0] = ::g::Fuse::Animations::Mixer_typeof();
    ::TYPES[32] = ::g::Fuse::Animations::AnimatorState_typeof();
    ::TYPES[33] = ::g::Fuse::Animations::ContinuousTrackChangeState_typeof();
    ::TYPES[34] = ::g::Fuse::Animations::DiscreteTrackChangeState_typeof();
    ::TYPES[35] = ::g::Fuse::Animations::TrackAnimator_typeof();
    type->SetPrecalc(
        ::TYPES[30/*Fuse.Animations.Converter`1*/]->MakeType(type->T(0)),
        ::TYPES[33/*Fuse.Animations.ContinuousTrackChangeState`1*/]->MakeType(type->T(0)),
        ::TYPES[34/*Fuse.Animations.DiscreteTrackChangeState`1*/]->MakeType(type->T(0)));
    type->SetFields(17,
        ::g::Fuse::Animations::Converter_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::Change, ContinuousConverter), 0,
        ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::Change, _Target), 0);
    return type;
}

// public Change(Uno.UX.Property<T> target) :329
void Change__ctor_2_fn(Change* __this, ::g::Uno::UX::Property* target)
{
    __this->ctor_2(target);
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :359
void Change__CreateState_fn(Change* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Animations.ContinuousTrackChangeState<T>*/),
        __this->__type->T(0),
        __this->__type->Precalced(2/*Fuse.Animations.DiscreteTrackChangeState<T>*/),
    };

    if (__this->IsContinuous())
        return *__retval = (::g::Fuse::Animations::ContinuousTrackChangeState*)::g::Fuse::Animations::ContinuousTrackChangeState::New1(__types[0], __this, p), void();

    return *__retval = (::g::Fuse::Animations::DiscreteTrackChangeState*)::g::Fuse::Animations::DiscreteTrackChangeState::New1(__types[2], __this, p), void();
}

// private bool get_IsContinuous() :368
void Change__get_IsContinuous_fn(Change* __this, bool* __retval)
{
    *__retval = __this->IsContinuous();
}

// public Change New(Uno.UX.Property<T> target) :329
void Change__New1_fn(uType* __type, ::g::Uno::UX::Property* target, Change** __retval)
{
    *__retval = Change::New1(__type, target);
}

// public generated Uno.UX.Property<T> get_Target() :309
void Change__get_Target_fn(Change* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :309
void Change__set_Target_fn(Change* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// public T get_Value() :313
void Change__get_Value_fn(Change* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store(__types[0], __this->IsContinuous() ? (uPtr(__this->ContinuousConverter)->Out_ex(uCRef(__this->_vectorValue), &ret3), (void*)ret3) : (void*)uUnboxAny(__types[0], __this->_objectValue)), void();
}

// public void set_Value(T value) :317
void Change__set_Value_fn(Change* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    ::g::Uno::Float4 ret4;

    if (__this->IsContinuous())
        __this->_vectorValue = (uPtr(__this->ContinuousConverter)->In_ex(value, &ret4), ret4);
    else
        __this->_objectValue = uBoxPtr(__types[0], value);
}

// public Change(Uno.UX.Property<T> target) [instance] :329
void Change::ctor_2(::g::Uno::UX::Property* target)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Fuse.Animations.Converter<T>*/),
    };
    ctor_1();

    if (target == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"target"*/]));

    Target(target);

    if (IsContinuous())
    {
        uObject* v;

        if (::g::Uno::Type::op_Equality(__types[0], ::TYPES[21/*float*/]))
            v = ::g::Fuse::Animations::ConverterFloat::Singleton();
        else if (::g::Uno::Type::op_Equality(__types[0], ::TYPES[23/*float2*/]))
            v = ::g::Fuse::Animations::ConverterFloat2::Singleton();
        else if (::g::Uno::Type::op_Equality(__types[0], ::TYPES[25/*float3*/]))
            v = ::g::Fuse::Animations::ConverterFloat3::Singleton();
        else if (::g::Uno::Type::op_Equality(__types[0], ::TYPES[27/*float4*/]))
            v = ::g::Fuse::Animations::ConverterFloat4::Singleton();
        else if (::g::Uno::Type::op_Equality(__types[0], ::TYPES[4/*double*/]))
            v = ::g::Fuse::Animations::ConverterDouble::Singleton();
        else
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[1/*"Unsupported...*/], __types[0])));

        ContinuousConverter = uCast< ::g::Fuse::Animations::Converter*>(v, __types[1]);
    }
    else
    {
        Mixer = ::g::Fuse::Animations::Mixer::DefaultDiscrete();
        MarkDiscrete();
    }
}

// private bool get_IsContinuous() [instance] :368
bool Change::IsContinuous()
{
    uType* __types[] = {
        __type->T(0),
    };
    return (((::g::Uno::Type::op_Equality(__types[0], ::TYPES[21/*float*/]) || ::g::Uno::Type::op_Equality(__types[0], ::TYPES[23/*float2*/])) || ::g::Uno::Type::op_Equality(__types[0], ::TYPES[25/*float3*/])) || ::g::Uno::Type::op_Equality(__types[0], ::TYPES[27/*float4*/])) || ::g::Uno::Type::op_Equality(__types[0], ::TYPES[4/*double*/]);
}

// public generated Uno.UX.Property<T> get_Target() [instance] :309
::g::Uno::UX::Property* Change::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :309
void Change::Target(::g::Uno::UX::Property* value)
{
    _Target = value;
}

// public Change New(Uno.UX.Property<T> target) [static] :329
Change* Change::New1(uType* __type, ::g::Uno::UX::Property* target)
{
    Change* obj2 = (Change*)uNew(__type);
    obj2->ctor_2(target);
    return obj2;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(461)
// --------------------------------------------------------------------------

// internal sealed class ContinuousTrackChangeState<T> :461
// {
::g::Fuse::Animations::TrackAnimatorState_type* ContinuousTrackChangeState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ContinuousTrackChangeState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.ContinuousTrackChangeState`1", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimatorState_typeof());
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Disable_fn;
    type->fp_SeekValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, ::g::Uno::Float4*, float*))ContinuousTrackChangeState__SeekValue_fn;
    ::STRINGS[2] = uString::Const("Invalid Seek");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno");
    ::TYPES[35] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[36] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[31] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[37] = ::g::Fuse::Animations::Change_typeof();
    type->SetPrecalc(
        ::TYPES[36/*Fuse.Animations.IMixer*/]->MakeMethod(1, type->T(0)),
        ::TYPES[37/*Fuse.Animations.Change`1*/]->MakeType(type->T(0)));
    type->SetFields(6,
        ::g::Fuse::Animations::Change_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::ContinuousTrackChangeState, Animator1), 0,
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::ContinuousTrackChangeState, mixHandle), 0);
    return type;
}

// public ContinuousTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :466
void ContinuousTrackChangeState__ctor_2_fn(ContinuousTrackChangeState* __this, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :473
void ContinuousTrackChangeState__Disable_fn(ContinuousTrackChangeState* __this)
{
    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), ::TYPES[52/*Fuse.Animations.IMixerHandle`1*/]->MakeType(__this->__type->T(0))));
    __this->mixHandle = NULL;
}

// public ContinuousTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :466
void ContinuousTrackChangeState__New1_fn(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p, ContinuousTrackChangeState** __retval)
{
    *__retval = ContinuousTrackChangeState::New1(__type, animator, p);
}

// protected override sealed void SeekValue(float4 value, float strength) :482
void ContinuousTrackChangeState__SeekValue_fn(ContinuousTrackChangeState* __this, ::g::Uno::Float4* value, float* strength)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Fuse.Animations.Change<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ::g::Uno::Float4 value_ = *value;
    float strength_ = *strength;

    if (__this->mixHandle == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[2/*"Invalid Seek"*/], 1, ::STRINGS[3/*"/usr/local/...*/], 486);
        return;
    }

    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), ::TYPES[52/*Fuse.Animations.IMixerHandle`1*/]->MakeType(__types[0])), (uPtr((::g::Fuse::Animations::Converter*)uPtr(__this->Animator1)->ContinuousConverter)->Out_ex(uCRef(value_), &ret2), ret2), uCRef(strength_));
}

// public ContinuousTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [instance] :466
void ContinuousTrackChangeState::ctor_2(::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.IMixer.Register<T>*/),
        __type->T(0),
        __type->Precalced(1/*Fuse.Animations.Change<T>*/),
    };
    ctor_1(animator, p, NULL);
    Animator1 = animator;
    mixHandle = ((uObject*)::g::Fuse::Animations::IMixer::Register(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[36/*Fuse.Animations.IMixer*/]), __types[0], (::g::Uno::UX::Property*)uPtr(Animator1)->Target(), uPtr(Animator1)->MixOp()));
}

// public ContinuousTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [static] :466
ContinuousTrackChangeState* ContinuousTrackChangeState::New1(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState* obj1 = (ContinuousTrackChangeState*)uNew(__type);
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(2921)
// ---------------------------------------------------------------------------

// internal abstract interface ContinuousTrackProvider :2921
// {
uInterfaceType* ContinuousTrackProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.ContinuousTrackProvider", 0, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(493)
// --------------------------------------------------------------------------

// internal abstract class Converter<T> :493
// {
Converter_type* Converter_typeof()
{
    static uSStrong<Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Converter);
    options.TypeSize = sizeof(Converter_type);
    type = (Converter_type*)uClassType::New("Fuse.Animations.Converter`1", options);
    return type;
}

// protected generated Converter() :493
void Converter__ctor__fn(Converter* __this)
{
    __this->ctor_();
}

// protected generated Converter() [instance] :493
void Converter::ctor_()
{
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(527)
// --------------------------------------------------------------------------

// internal sealed class ConverterDouble :527
// {
// static ConverterDouble() :527
static void ConverterDouble__cctor__fn(uType* __type)
{
    ConverterDouble::Singleton_ = ConverterDouble::New1();
}

::g::Fuse::Animations::Converter_type* ConverterDouble_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterDouble);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterDouble", options);
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Double_typeof()));
    type->fp_ctor_ = (void*)ConverterDouble__New1_fn;
    type->fp_cctor_ = ConverterDouble__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterDouble__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterDouble__Out_fn;
    ::TYPES[21] = ::g::Uno::Float_typeof();
    ::TYPES[4] = ::g::Uno::Double_typeof();
    ::TYPES[27] = ::g::Uno::Float4_typeof();
    type->SetFields(0,
        ConverterDouble_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterDouble::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated ConverterDouble() :527
void ConverterDouble__ctor_1_fn(ConverterDouble* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(double value) :531
void ConverterDouble__In_fn(ConverterDouble* __this, double* value, ::g::Uno::Float4* __retval)
{
    double value_ = *value;
    return *__retval = ::g::Uno::Float4__New2((float)value_, 0.0f, 0.0f, 0.0f), void();
}

// public generated ConverterDouble New() :527
void ConverterDouble__New1_fn(ConverterDouble** __retval)
{
    *__retval = ConverterDouble::New1();
}

// public override sealed double Out(float4 value) :530
void ConverterDouble__Out_fn(ConverterDouble* __this, ::g::Uno::Float4* value, double* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = (double)value_.X, void();
}

uSStrong<ConverterDouble*> ConverterDouble::Singleton_;

// public generated ConverterDouble() [instance] :527
void ConverterDouble::ctor_1()
{
    ctor_();
}

// public generated ConverterDouble New() [static] :527
ConverterDouble* ConverterDouble::New1()
{
    ConverterDouble* obj1 = (ConverterDouble*)uNew(ConverterDouble_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(499)
// --------------------------------------------------------------------------

// internal sealed class ConverterFloat :499
// {
// static ConverterFloat() :499
static void ConverterFloat__cctor__fn(uType* __type)
{
    ConverterFloat::Singleton_ = ConverterFloat::New1();
}

::g::Fuse::Animations::Converter_type* ConverterFloat_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat", options);
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_ctor_ = (void*)ConverterFloat__New1_fn;
    type->fp_cctor_ = ConverterFloat__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat__Out_fn;
    ::TYPES[27] = ::g::Uno::Float4_typeof();
    type->SetFields(0,
        ConverterFloat_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterFloat::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated ConverterFloat() :499
void ConverterFloat__ctor_1_fn(ConverterFloat* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float value) :503
void ConverterFloat__In_fn(ConverterFloat* __this, float* value, ::g::Uno::Float4* __retval)
{
    float value_ = *value;
    return *__retval = ::g::Uno::Float4__New2(value_, 0.0f, 0.0f, 0.0f), void();
}

// public generated ConverterFloat New() :499
void ConverterFloat__New1_fn(ConverterFloat** __retval)
{
    *__retval = ConverterFloat::New1();
}

// public override sealed float Out(float4 value) :502
void ConverterFloat__Out_fn(ConverterFloat* __this, ::g::Uno::Float4* value, float* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = value_.X, void();
}

uSStrong<ConverterFloat*> ConverterFloat::Singleton_;

// public generated ConverterFloat() [instance] :499
void ConverterFloat::ctor_1()
{
    ctor_();
}

// public generated ConverterFloat New() [static] :499
ConverterFloat* ConverterFloat::New1()
{
    ConverterFloat* obj1 = (ConverterFloat*)uNew(ConverterFloat_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(506)
// --------------------------------------------------------------------------

// internal sealed class ConverterFloat2 :506
// {
// static ConverterFloat2() :506
static void ConverterFloat2__cctor__fn(uType* __type)
{
    ConverterFloat2::Singleton_ = ConverterFloat2::New1();
}

::g::Fuse::Animations::Converter_type* ConverterFloat2_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat2);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat2", options);
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float2_typeof()));
    type->fp_ctor_ = (void*)ConverterFloat2__New1_fn;
    type->fp_cctor_ = ConverterFloat2__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat2__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat2__Out_fn;
    ::TYPES[27] = ::g::Uno::Float4_typeof();
    type->SetFields(0,
        ConverterFloat2_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterFloat2::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated ConverterFloat2() :506
void ConverterFloat2__ctor_1_fn(ConverterFloat2* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float2 value) :510
void ConverterFloat2__In_fn(ConverterFloat2* __this, ::g::Uno::Float2* value, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float2 value_ = *value;
    return *__retval = ::g::Uno::Float4__New6(value_, 0.0f, 0.0f), void();
}

// public generated ConverterFloat2 New() :506
void ConverterFloat2__New1_fn(ConverterFloat2** __retval)
{
    *__retval = ConverterFloat2::New1();
}

// public override sealed float2 Out(float4 value) :509
void ConverterFloat2__Out_fn(ConverterFloat2* __this, ::g::Uno::Float4* value, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = ::g::Uno::Float2__New2(value_.X, value_.Y), void();
}

uSStrong<ConverterFloat2*> ConverterFloat2::Singleton_;

// public generated ConverterFloat2() [instance] :506
void ConverterFloat2::ctor_1()
{
    ctor_();
}

// public generated ConverterFloat2 New() [static] :506
ConverterFloat2* ConverterFloat2::New1()
{
    ConverterFloat2* obj1 = (ConverterFloat2*)uNew(ConverterFloat2_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(513)
// --------------------------------------------------------------------------

// internal sealed class ConverterFloat3 :513
// {
// static ConverterFloat3() :513
static void ConverterFloat3__cctor__fn(uType* __type)
{
    ConverterFloat3::Singleton_ = ConverterFloat3::New1();
}

::g::Fuse::Animations::Converter_type* ConverterFloat3_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat3);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat3", options);
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float3_typeof()));
    type->fp_ctor_ = (void*)ConverterFloat3__New1_fn;
    type->fp_cctor_ = ConverterFloat3__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat3__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat3__Out_fn;
    ::TYPES[27] = ::g::Uno::Float4_typeof();
    type->SetFields(0,
        ConverterFloat3_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterFloat3::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated ConverterFloat3() :513
void ConverterFloat3__ctor_1_fn(ConverterFloat3* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float3 value) :517
void ConverterFloat3__In_fn(ConverterFloat3* __this, ::g::Uno::Float3* value, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float3 value_ = *value;
    return *__retval = ::g::Uno::Float4__New8(value_, 0.0f), void();
}

// public generated ConverterFloat3 New() :513
void ConverterFloat3__New1_fn(ConverterFloat3** __retval)
{
    *__retval = ConverterFloat3::New1();
}

// public override sealed float3 Out(float4 value) :516
void ConverterFloat3__Out_fn(ConverterFloat3* __this, ::g::Uno::Float4* value, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = ::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z), void();
}

uSStrong<ConverterFloat3*> ConverterFloat3::Singleton_;

// public generated ConverterFloat3() [instance] :513
void ConverterFloat3::ctor_1()
{
    ctor_();
}

// public generated ConverterFloat3 New() [static] :513
ConverterFloat3* ConverterFloat3::New1()
{
    ConverterFloat3* obj1 = (ConverterFloat3*)uNew(ConverterFloat3_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(520)
// --------------------------------------------------------------------------

// internal sealed class ConverterFloat4 :520
// {
// static ConverterFloat4() :520
static void ConverterFloat4__cctor__fn(uType* __type)
{
    ConverterFloat4::Singleton_ = ConverterFloat4::New1();
}

::g::Fuse::Animations::Converter_type* ConverterFloat4_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat4);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat4", options);
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_ctor_ = (void*)ConverterFloat4__New1_fn;
    type->fp_cctor_ = ConverterFloat4__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat4__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat4__Out_fn;
    type->SetFields(0,
        ConverterFloat4_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterFloat4::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated ConverterFloat4() :520
void ConverterFloat4__ctor_1_fn(ConverterFloat4* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float4 value) :524
void ConverterFloat4__In_fn(ConverterFloat4* __this, ::g::Uno::Float4* value, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = value_, void();
}

// public generated ConverterFloat4 New() :520
void ConverterFloat4__New1_fn(ConverterFloat4** __retval)
{
    *__retval = ConverterFloat4::New1();
}

// public override sealed float4 Out(float4 value) :523
void ConverterFloat4__Out_fn(ConverterFloat4* __this, ::g::Uno::Float4* value, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = value_, void();
}

uSStrong<ConverterFloat4*> ConverterFloat4::Singleton_;

// public generated ConverterFloat4() [instance] :520
void ConverterFloat4::ctor_1()
{
    ctor_();
}

// public generated ConverterFloat4 New() [static] :520
ConverterFloat4* ConverterFloat4::New1()
{
    ConverterFloat4* obj1 = (ConverterFloat4*)uNew(ConverterFloat4_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(39)
// -------------------------------------------------------------------------

// internal sealed class CreateStateParams :39
// {
uType* CreateStateParams_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(CreateStateParams);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.CreateStateParams", options);
    type->fp_ctor_ = (void*)CreateStateParams__New1_fn;
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Animations::CreateStateParams, Attached), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::CreateStateParams, TotalDuration), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Animations::CreateStateParams, Variant), 0);
    return type;
}

// public generated CreateStateParams() :39
void CreateStateParams__ctor__fn(CreateStateParams* __this)
{
    __this->ctor_();
}

// public generated CreateStateParams New() :39
void CreateStateParams__New1_fn(CreateStateParams** __retval)
{
    *__retval = CreateStateParams::New1();
}

// public generated CreateStateParams() [instance] :39
void CreateStateParams::ctor_()
{
}

// public generated CreateStateParams New() [static] :39
CreateStateParams* CreateStateParams::New1()
{
    CreateStateParams* obj1 = (CreateStateParams*)uNew(CreateStateParams_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(550)
// --------------------------------------------------------------------------

// public sealed class Cycle<T> :550
// {
::g::Fuse::Animations::Animator_type* Cycle_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Cycle);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Cycle`1", options);
    type->SetBase(::g::Fuse::Animations::OpenAnimator_typeof());
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Cycle__CreateState_fn;
    ::TYPES[32] = ::g::Fuse::Animations::AnimatorState_typeof();
    ::TYPES[38] = ::g::Fuse::Animations::CycleState_typeof();
    ::TYPES[39] = ::g::Uno::Delegate_typeof();
    ::TYPES[21] = ::g::Uno::Float_typeof();
    ::TYPES[4] = ::g::Uno::Double_typeof();
    type->SetPrecalc(
        ::TYPES[38/*Fuse.Animations.CycleState`1*/]->MakeType(type->T(0)));
    type->SetFields(5,
        ::g::Fuse::Animations::EasingFunction_typeof(), offsetof(::g::Fuse::Animations::Cycle, _easingFunction), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Cycle, _hasProgressOffset), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Cycle, _hertz), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::Cycle, _progressOffset), 0,
        ::g::Fuse::Animations::CycleWaveform_typeof(), offsetof(::g::Fuse::Animations::Cycle, _waveform), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::Cycle, _High), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::Cycle, _Low), 0,
        ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::Cycle, _Target), 0);
    return type;
}

// public generated T get_Base() :555
void Cycle__get_Base_fn(Cycle* __this, uTRef __retval)
{
    return __retval.Store(__this->_Base()), void();
}

// public generated void set_Base(T value) :555
void Cycle__set_Base_fn(Cycle* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_Base() = value;
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :581
void Cycle__CreateState_fn(Cycle* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Animations.CycleState<T>*/),
        __this->__type->T(0),
    };
    return *__retval = (::g::Fuse::Animations::CycleState*)::g::Fuse::Animations::CycleState::New1(__types[0], __this, p), void();
}

// public double get_Frequency() :570
void Cycle__get_Frequency_fn(Cycle* __this, double* __retval)
{
    *__retval = __this->Frequency();
}

// public void set_Frequency(double value) :571
void Cycle__set_Frequency_fn(Cycle* __this, double* value)
{
    __this->Frequency(*value);
}

// public generated float get_High() :554
void Cycle__get_High_fn(Cycle* __this, float* __retval)
{
    *__retval = __this->High();
}

// public generated void set_High(float value) :554
void Cycle__set_High_fn(Cycle* __this, float* value)
{
    __this->High(*value);
}

// private bool get_IsOneCrossing() :593
void Cycle__get_IsOneCrossing_fn(Cycle* __this, bool* __retval)
{
    *__retval = __this->IsOneCrossing();
}

// private bool get_IsZeroCrossing() :588
void Cycle__get_IsZeroCrossing_fn(Cycle* __this, bool* __retval)
{
    *__retval = __this->IsZeroCrossing();
}

// public generated float get_Low() :553
void Cycle__get_Low_fn(Cycle* __this, float* __retval)
{
    *__retval = __this->Low();
}

// public generated void set_Low(float value) :553
void Cycle__set_Low_fn(Cycle* __this, float* value)
{
    __this->Low(*value);
}

// public float get_ProgressOffset() :627
void Cycle__get_ProgressOffset_fn(Cycle* __this, float* __retval)
{
    *__retval = __this->ProgressOffset();
}

// public void set_ProgressOffset(float value) :628
void Cycle__set_ProgressOffset_fn(Cycle* __this, float* value)
{
    __this->ProgressOffset(*value);
}

// private double get_RestProgress() :601
void Cycle__get_RestProgress_fn(Cycle* __this, double* __retval)
{
    *__retval = __this->RestProgress();
}

// public generated Uno.UX.Property<T> get_Target() :552
void Cycle__get_Target_fn(Cycle* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :552
void Cycle__set_Target_fn(Cycle* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// public Fuse.Animations.CycleWaveform get_Waveform() :577
void Cycle__get_Waveform_fn(Cycle* __this, int* __retval)
{
    *__retval = __this->Waveform();
}

// public void set_Waveform(Fuse.Animations.CycleWaveform value) :578
void Cycle__set_Waveform_fn(Cycle* __this, int* value)
{
    __this->Waveform(*value);
}

// internal double WaveformFunc(double i, double offset) :647
void Cycle__WaveformFunc_fn(Cycle* __this, double* i, double* offset, double* __retval)
{
    *__retval = __this->WaveformFunc(*i, *offset);
}

// public double get_Frequency() [instance] :570
double Cycle::Frequency()
{
    return _hertz;
}

// public void set_Frequency(double value) [instance] :571
void Cycle::Frequency(double value)
{
    _hertz = value;
}

// public generated float get_High() [instance] :554
float Cycle::High()
{
    return _High;
}

// public generated void set_High(float value) [instance] :554
void Cycle::High(float value)
{
    _High = value;
}

// private bool get_IsOneCrossing() [instance] :593
bool Cycle::IsOneCrossing()
{
    return (Low() <= 1.0f) && (High() >= 1.0f);
}

// private bool get_IsZeroCrossing() [instance] :588
bool Cycle::IsZeroCrossing()
{
    return (Low() <= 0.0f) && (High() >= 0.0f);
}

// public generated float get_Low() [instance] :553
float Cycle::Low()
{
    return _Low;
}

// public generated void set_Low(float value) [instance] :553
void Cycle::Low(float value)
{
    _Low = value;
}

// public float get_ProgressOffset() [instance] :627
float Cycle::ProgressOffset()
{
    return (_hasProgressOffset || ::g::Uno::Delegate::op_Inequality(_easingFunction, NULL)) ? _progressOffset : (float)RestProgress();
}

// public void set_ProgressOffset(float value) [instance] :628
void Cycle::ProgressOffset(float value)
{
    _hasProgressOffset = true;
    _progressOffset = value;
}

// private double get_RestProgress() [instance] :601
double Cycle::RestProgress()
{
    double v = 0.0;

    if (IsZeroCrossing())
        v = (double)((0.0f - Low()) / (High() - Low()));
    else if (IsOneCrossing())
        v = (double)((1.0f - Low()) / (High() - Low()));

    switch (Waveform())
    {
        case 0:
            return ::g::Uno::Math::Asin(2.0 * (v - 0.5)) / 6.2831853071795862;
        case 1:
            return v * 0.5;
        case 2:
            return v;
    }

    return v;
}

// public generated Uno.UX.Property<T> get_Target() [instance] :552
::g::Uno::UX::Property* Cycle::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :552
void Cycle::Target(::g::Uno::UX::Property* value)
{
    _Target = value;
}

// public Fuse.Animations.CycleWaveform get_Waveform() [instance] :577
int Cycle::Waveform()
{
    return _waveform;
}

// public void set_Waveform(Fuse.Animations.CycleWaveform value) [instance] :578
void Cycle::Waveform(int value)
{
    _waveform = value;
}

// internal double WaveformFunc(double i, double offset) [instance] :647
double Cycle::WaveformFunc(double i, double offset)
{
    switch (Waveform())
    {
        case 0:
            return (::g::Uno::Math::Sin(((i + offset) * 3.1415926535897931) * 2.0) / 2.0) + 0.5;
        case 1:
        {
            double a = ::g::Uno::Math::Mod(i + offset, 1.0);

            if (a < 0.5)
                return a * 2.0;

            return 1.0 + (2.0 * (0.5 - a));
        }
        case 2:
            return ::g::Uno::Math::Mod(i + offset, 1.0);
    }

    return i;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(668)
// --------------------------------------------------------------------------

// internal sealed class CycleState<T> :668
// {
::g::Fuse::Animations::OpenAnimatorState_type* CycleState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::OpenAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(CycleState);
    options.TypeSize = sizeof(::g::Fuse::Animations::OpenAnimatorState_type);
    type = (::g::Fuse::Animations::OpenAnimatorState_type*)uClassType::New("Fuse.Animations.CycleState`1", options);
    type->SetBase(::g::Fuse::Animations::OpenAnimatorState_typeof());
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))CycleState__Disable_fn;
    type->fp_Seek = (void(*)(::g::Fuse::Animations::OpenAnimatorState*, bool*, float*, float*, int*, bool*))CycleState__Seek_fn;
    ::STRINGS[4] = uString::Const("Invalid seek");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno");
    ::TYPES[40] = ::g::Fuse::Animations::OpenAnimator_typeof();
    ::TYPES[36] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[31] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[41] = ::g::Fuse::Animations::Cycle_typeof();
    ::TYPES[2] = ::g::Fuse::Internal::BlenderMap_typeof();
    ::TYPES[4] = ::g::Uno::Double_typeof();
    ::TYPES[39] = ::g::Uno::Delegate_typeof();
    ::TYPES[42] = ::g::Fuse::Animations::EasingFunction_typeof();
    ::TYPES[21] = ::g::Uno::Float_typeof();
    type->SetPrecalc(
        ::TYPES[36/*Fuse.Animations.IMixer*/]->MakeMethod(1, type->T(0)),
        ::TYPES[41/*Fuse.Animations.Cycle`1*/]->MakeType(type->T(0)),
        ::TYPES[2/*Fuse.Internal.BlenderMap*/]->MakeMethod(1, type->T(0)));
    type->SetFields(5,
        ::g::Fuse::Animations::Cycle_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::CycleState, Animator1), 0,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::CycleState, blender), 0,
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::CycleState, mixHandle), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::CycleState, progress), 0);
    return type;
}

// public CycleState(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) :674
void CycleState__ctor_2_fn(CycleState* __this, ::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :682
void CycleState__Disable_fn(CycleState* __this)
{
    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), ::TYPES[52/*Fuse.Animations.IMixerHandle`1*/]->MakeType(__this->__type->T(0))));
    __this->mixHandle = NULL;
    __this->progress = 0.0;
}

// public CycleState New(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) :674
void CycleState__New1_fn(uType* __type, ::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p, CycleState** __retval)
{
    *__retval = CycleState::New1(__type, animator, p);
}

// protected override sealed bool Seek(bool on, float interval, float strength, Fuse.Animations.SeekDirection dir) :700
void CycleState__Seek_fn(CycleState* __this, bool* on, float* interval, float* strength, int* dir, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Fuse.Animations.Cycle<T>*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    float interval_ = *interval;
    bool on_ = *on;
    float ret2;
    ;
    ;
    float strength_ = *strength;

    if (__this->mixHandle == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[4/*"Invalid seek"*/], 1, ::STRINGS[3/*"/usr/local/...*/], 704);
        return *__retval = true, void();
    }

    bool done = false;
    double oldProgress = __this->progress;
    __this->progress = (__this->progress + ((double)interval_ * uPtr(__this->Animator1)->Frequency()));

    if (on_)
        __this->progress = ::g::Uno::Math::Mod(__this->progress, 1.0);
    else if ((((oldProgress <= 0.0) || (__this->progress <= 0.0)) || (__this->progress >= 1.0)) || (oldProgress >= 1.0))
    {
        __this->progress = 0.0;
        done = true;
    }

    double s = uPtr(__this->Animator1)->WaveformFunc(__this->progress, (double)uPtr(__this->Animator1)->ProgressOffset());

    if (::g::Uno::Delegate::op_Inequality(uPtr(__this->Animator1)->_easingFunction, NULL))
        s = (double)(uPtr(uPtr(__this->Animator1)->_easingFunction)->Invoke(&ret2, 1, uCRef((float)s)), ret2);

    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), ::TYPES[52/*Fuse.Animations.IMixerHandle`1*/]->MakeType(__types[0])), (uPtr(__this->blender)->Weight_ex((::g::Fuse::Animations::Cycle__get_Base_fn(uPtr(__this->Animator1), &ret4), ret4), uCRef((double)::g::Uno::Math::Lerp1(uPtr(__this->Animator1)->Low(), uPtr(__this->Animator1)->High(), (float)s)), &ret3), ret3), uCRef(strength_));
    return *__retval = done, void();
}

// public CycleState(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) [instance] :674
void CycleState::ctor_2(::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.IMixer.Register<T>*/),
        __type->T(0),
        __type->Precalced(1/*Fuse.Animations.Cycle<T>*/),
        __type->Precalced(2/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    ctor_1(animator, p, NULL);
    Animator1 = animator;
    mixHandle = ((uObject*)::g::Fuse::Animations::IMixer::Register(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[36/*Fuse.Animations.IMixer*/]), __types[0], (::g::Uno::UX::Property*)uPtr(Animator1)->Target(), uPtr(Animator1)->MixOp()));
    blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[3]));
}

// public CycleState New(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) [static] :674
CycleState* CycleState::New1(uType* __type, ::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    CycleState* obj1 = (CycleState*)uNew(__type);
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(542)
// --------------------------------------------------------------------------

// public enum CycleWaveform :542
uEnumType* CycleWaveform_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.CycleWaveform", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Sine", 0LL,
        "Triangle", 1LL,
        "Sawtooth", 2LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(836)
// --------------------------------------------------------------------------

// internal sealed class DiscreteMasterProperty<T> :836
// {
::g::Fuse::Animations::MasterProperty_type* DiscreteMasterProperty_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(DiscreteMasterProperty);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterProperty_type);
    type = (::g::Fuse::Animations::MasterProperty_type*)uClassType::New("Fuse.Animations.DiscreteMasterProperty`1", options);
    type->SetBase(::g::Fuse::Animations::MasterProperty_typeof()->MakeType(type->T(0)));
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))DiscreteMasterProperty__OnComplete_fn;
    type->interface1.fp_GetPropertyObject = (void(*)(uObject*, uObject**))::g::Fuse::Animations::MasterProperty__GetPropertyObject_fn;
    type->interface0.fp_Complete = (void(*)(uObject*))::g::Fuse::Animations::MasterBase__Complete_fn;
    ::TYPES[3] = ::g::Fuse::Animations::MasterProperty_typeof();
    ::TYPES[6] = ::g::Uno::Collections::List_typeof();
    ::TYPES[7] = ::g::Fuse::Animations::MixerHandle_typeof();
    ::TYPES[8] = ::g::Fuse::Animations::MasterBase_typeof();
    ::TYPES[11] = uObject_typeof();
    type->SetPrecalc(
        ::TYPES[3/*Fuse.Animations.MasterProperty`1*/]->MakeType(type->T(0)),
        ::TYPES[6/*Uno.Collections.List`1*/]->MakeType(::TYPES[7/*Fuse.Animations.MixerHandle`1*/]->MakeType(type->T(0))),
        ::TYPES[7/*Fuse.Animations.MixerHandle`1*/]->MakeType(type->T(0)),
        ::TYPES[8/*Fuse.Animations.MasterBase`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface0),
        ::g::Fuse::Animations::MasterPropertyGet_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface1));
    type->SetFields(6);
    return type;
}

// public DiscreteMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :838
void DiscreteMasterProperty__ctor_2_fn(DiscreteMasterProperty* __this, ::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(property, mixerBase);
}

// public DiscreteMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :838
void DiscreteMasterProperty__New1_fn(uType* __type, ::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase, DiscreteMasterProperty** __retval)
{
    *__retval = DiscreteMasterProperty::New1(__type, property, mixerBase);
}

// public override sealed void OnComplete() :841
void DiscreteMasterProperty__OnComplete_fn(DiscreteMasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Fuse.Animations.MasterProperty<T>*/),
        __this->__type->Precalced(1/*Uno.Collections.List<Fuse.Animations.MixerHandle<T>>*/),
        __this->__type->Precalced(2/*Fuse.Animations.MixerHandle<T>*/),
        __this->__type->Precalced(3/*Fuse.Animations.MasterBase<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT nv(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ::g::Fuse::Animations::MixerHandle* ret3;
    nv = (::g::Fuse::Animations::MasterProperty__get_RestValue_fn(__this, &ret2), ret2);
    float str = 0.5f;

    for (int i = 0; i < uPtr((::g::Uno::Collections::List*)__this->Handles)->Count(); ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret3), ret3);

        if (uPtr(v)->HasValue() && (uPtr(v)->Strength > str))
        {
            nv = uPtr(v)->Value();
            str = v->Strength;
        }
    }

    ::g::Uno::UX::Property__Set_fn(uPtr((::g::Uno::UX::Property*)__this->Property), nv, __this);
}

// public DiscreteMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [instance] :838
void DiscreteMasterProperty::ctor_2(::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_1(property, mixerBase);
}

// public DiscreteMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [static] :838
DiscreteMasterProperty* DiscreteMasterProperty::New1(uType* __type, ::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    DiscreteMasterProperty* obj1 = (DiscreteMasterProperty*)uNew(__type);
    obj1->ctor_2(property, mixerBase);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(859)
// --------------------------------------------------------------------------

// internal sealed class DiscreteMasterTransform :859
// {
::g::Fuse::Animations::MasterBase_type* DiscreteMasterTransform_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DiscreteMasterTransform);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterBase_type);
    type = (::g::Fuse::Animations::MasterBase_type*)uClassType::New("Fuse.Animations.DiscreteMasterTransform", options);
    type->SetBase(::g::Fuse::Animations::MasterTransform_typeof());
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))DiscreteMasterTransform__OnComplete_fn;
    type->interface0.fp_Complete = (void(*)(uObject*))::g::Fuse::Animations::MasterBase__Complete_fn;
    ::TYPES[18] = ::g::Fuse::Animations::FastMatrixTransform_typeof();
    ::TYPES[19] = ::g::Fuse::Animations::MasterTransform_typeof();
    ::TYPES[12] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::MixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof()));
    ::TYPES[13] = ::g::Fuse::Animations::MasterBase_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[14] = ::g::Fuse::Animations::MixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof());
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterBase_type, interface0));
    type->SetFields(7);
    return type;
}

// public DiscreteMasterTransform(Fuse.Node node, Fuse.Animations.MixerBase mixerBase) :861
void DiscreteMasterTransform__ctor_2_fn(DiscreteMasterTransform* __this, ::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(node, mixerBase);
}

// public DiscreteMasterTransform New(Fuse.Node node, Fuse.Animations.MixerBase mixerBase) :861
void DiscreteMasterTransform__New1_fn(::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase, DiscreteMasterTransform** __retval)
{
    *__retval = DiscreteMasterTransform::New1(node, mixerBase);
}

// public override sealed void OnComplete() :864
void DiscreteMasterTransform__OnComplete_fn(DiscreteMasterTransform* __this)
{
    ::g::Fuse::Animations::MixerHandle* ret2;
    uPtr(uPtr(__this->FMT)->Matrix)->ResetIdentity();
    float str = 0.5f;
    ::g::Fuse::Transform* value = NULL;

    for (int i = 0; i < uPtr((::g::Uno::Collections::List*)__this->Handles)->Count(); ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret2), ret2);

        if (uPtr(v)->HasValue() && (uPtr(v)->Strength > str))
        {
            value = uPtr(v)->Value().Strong< ::g::Fuse::Transform*>();
            str = v->Strength;
        }
    }

    if (value != NULL)
        uPtr(value)->AppendTo(uPtr(__this->FMT)->Matrix, 1.0f);

    uPtr(__this->FMT)->Changed();
}

// public DiscreteMasterTransform(Fuse.Node node, Fuse.Animations.MixerBase mixerBase) [instance] :861
void DiscreteMasterTransform::ctor_2(::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_1(node, mixerBase);
}

// public DiscreteMasterTransform New(Fuse.Node node, Fuse.Animations.MixerBase mixerBase) [static] :861
DiscreteMasterTransform* DiscreteMasterTransform::New1(::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    DiscreteMasterTransform* obj1 = (DiscreteMasterTransform*)uNew(DiscreteMasterTransform_typeof());
    obj1->ctor_2(node, mixerBase);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(826)
// --------------------------------------------------------------------------

// internal sealed class DiscreteMixer :826
// {
::g::Fuse::Animations::MixerBase_type* DiscreteMixer_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MixerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(DiscreteMixer);
    options.TypeSize = sizeof(::g::Fuse::Animations::MixerBase_type);
    type = (::g::Fuse::Animations::MixerBase_type*)uClassType::New("Fuse.Animations.DiscreteMixer", options);
    type->SetBase(::g::Fuse::Animations::MixerBase_typeof());
    type->fp_ctor_ = (void*)DiscreteMixer__New1_fn;
    type->fp_CreateMaster = (void(*)(::g::Fuse::Animations::MixerBase*, uType*, ::g::Uno::UX::Property*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterProperty**))DiscreteMixer__CreateMaster_fn;
    type->fp_CreateMasterTransform = (void(*)(::g::Fuse::Animations::MixerBase*, ::g::Fuse::Node*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterBase**))DiscreteMixer__CreateMasterTransform_fn;
    type->interface0.fp_Register = (void(*)(uObject*, uType*, ::g::Uno::UX::Property*, int*, uObject**))::g::Fuse::Animations::MixerBase__Register_fn;
    type->interface0.fp_RegisterTransform = (void(*)(uObject*, ::g::Fuse::Node*, int*, int*, uObject**))::g::Fuse::Animations::MixerBase__RegisterTransform_fn;
    ::TYPES[3] = ::g::Fuse::Animations::MasterProperty_typeof();
    ::TYPES[43] = ::g::Fuse::Animations::DiscreteMasterProperty_typeof();
    ::TYPES[13] = ::g::Fuse::Animations::MasterBase_typeof()->MakeType(::g::Fuse::Transform_typeof());
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(::g::Fuse::Animations::MixerBase_type, interface0));
    type->SetFields(2);
    return type;
}

// public generated DiscreteMixer() :826
void DiscreteMixer__ctor_1_fn(DiscreteMixer* __this)
{
    __this->ctor_1();
}

// protected override sealed Fuse.Animations.MasterProperty<T> CreateMaster<T>(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :828
void DiscreteMixer__CreateMaster_fn(DiscreteMixer* __this, uType* __type, ::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterProperty** __retval)
{
    __type = DiscreteMixer_typeof()->GetVirtual(__type);
    uType* __types[] = {
        ::TYPES[3/*Fuse.Animations.MasterProperty`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        ::TYPES[43/*Fuse.Animations.DiscreteMasterProperty`1*/]->MakeType(__type->U(0)),
    };
    return *__retval = (::g::Fuse::Animations::DiscreteMasterProperty*)::g::Fuse::Animations::DiscreteMasterProperty::New1(__types[2], property, mixerBase), void();
}

// protected override sealed Fuse.Animations.MasterBase<Fuse.Transform> CreateMasterTransform(Fuse.Node element, Fuse.Animations.MixerBase mixerBase) :831
void DiscreteMixer__CreateMasterTransform_fn(DiscreteMixer* __this, ::g::Fuse::Node* element, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterBase** __retval)
{
    return *__retval = ::g::Fuse::Animations::DiscreteMasterTransform::New1(element, mixerBase), void();
}

// public generated DiscreteMixer New() :826
void DiscreteMixer__New1_fn(DiscreteMixer** __retval)
{
    *__retval = DiscreteMixer::New1();
}

// public generated DiscreteMixer() [instance] :826
void DiscreteMixer::ctor_1()
{
    ctor_();
}

// public generated DiscreteMixer New() [static] :826
DiscreteMixer* DiscreteMixer::New1()
{
    DiscreteMixer* obj1 = (DiscreteMixer*)uNew(DiscreteMixer_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(894)
// --------------------------------------------------------------------------

// internal sealed class DiscreteSingleTrack :894
// {
// static DiscreteSingleTrack() :894
static void DiscreteSingleTrack__cctor__fn(uType* __type)
{
    DiscreteSingleTrack::Singleton_ = DiscreteSingleTrack::New1();
}

DiscreteSingleTrack_type* DiscreteSingleTrack_typeof()
{
    static uSStrong<DiscreteSingleTrack_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(DiscreteSingleTrack);
    options.TypeSize = sizeof(DiscreteSingleTrack_type);
    type = (DiscreteSingleTrack_type*)uClassType::New("Fuse.Animations.DiscreteSingleTrack", options);
    type->fp_ctor_ = (void*)DiscreteSingleTrack__New1_fn;
    type->fp_cctor_ = DiscreteSingleTrack__cctor__fn;
    type->interface1.fp_GetDuration = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*, double*))DiscreteSingleTrack__FuseAnimationsTrackProviderGetDuration_fn;
    type->interface1.fp_GetAnimatorVariant = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*))DiscreteSingleTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn;
    type->interface0.fp_GetSeekProgress = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, uObject**, double*, bool*))DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekProgress_fn;
    type->interface0.fp_GetSeekTime = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, uObject**, double*, bool*))DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekTime_fn;
    ::TYPES[35] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[44] = ::g::Fuse::Animations::TrackAnimatorState_typeof();
    ::TYPES[10] = ::g::Uno::Int_typeof();
    ::TYPES[21] = ::g::Uno::Float_typeof();
    ::TYPES[4] = ::g::Uno::Double_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::DiscreteTrackProvider_typeof(), offsetof(DiscreteSingleTrack_type, interface0),
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(DiscreteSingleTrack_type, interface1));
    type->SetFields(0,
        DiscreteSingleTrack_typeof(), (uintptr_t)&::g::Fuse::Animations::DiscreteSingleTrack::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated DiscreteSingleTrack() :894
void DiscreteSingleTrack__ctor__fn(DiscreteSingleTrack* __this)
{
    __this->ctor_();
}

// private bool Fuse.Animations.DiscreteTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState tas, double progress, double interval, Fuse.Animations.SeekDirection dir, object& value, double& strength) :909
void DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekProgress_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, uObject** value, double* strength, bool* __retval)
{
    double progress_ = *progress;
    int dir_ = *dir;
    *strength = progress_;
    *value = uPtr(uPtr(tas)->Animator)->_objectValue;
    return *__retval = (dir_ == 0) ? progress_ >= 1.0 : progress_ <= 0.0, void();
}

// private bool Fuse.Animations.DiscreteTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState tas, double elapsed, double interval, Fuse.Animations.SeekDirection dir, object& value, double& strength) :919
void DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekTime_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, uObject** value, double* strength, bool* __retval)
{
    int dir_ = *dir;
    double elapsed_ = *elapsed;
    double duration = uPtr(tas)->Duration();
    float progress;

    if (duration < 9.9999997473787516e-06)
        progress = (float)(((dir_ == 0) ? elapsed_ >= -9.9999997473787516e-06 : elapsed_ > 9.9999997473787516e-06) ? 1 : 0);
    else
        progress = (float)(elapsed_ / duration);

    *strength = (double)::g::Uno::Math::Clamp1(progress, 0.0f, 1.0f);
    *value = uPtr(tas->Animator)->_objectValue;
    return *__retval = (dir_ == 0) ? elapsed_ >= 0.0 : elapsed_ <= 0.0, void();
}

// private Fuse.Animations.AnimatorVariant Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator ta) :904
void DiscreteSingleTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* __retval)
{
    return *__retval = uPtr(ta)->HasBack() ? 2 : 0, void();
}

// private double Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator ta, Fuse.Animations.AnimationVariant variant) :899
void DiscreteSingleTrack__FuseAnimationsTrackProviderGetDuration_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval)
{
    int variant_ = *variant;
    return *__retval = (variant_ == 1) ? uPtr(ta)->DurationBack() : uPtr(ta)->Duration(), void();
}

// public generated DiscreteSingleTrack New() :894
void DiscreteSingleTrack__New1_fn(DiscreteSingleTrack** __retval)
{
    *__retval = DiscreteSingleTrack::New1();
}

uSStrong<DiscreteSingleTrack*> DiscreteSingleTrack::Singleton_;

// public generated DiscreteSingleTrack() [instance] :894
void DiscreteSingleTrack::ctor_()
{
}

// public generated DiscreteSingleTrack New() [static] :894
DiscreteSingleTrack* DiscreteSingleTrack::New1()
{
    DiscreteSingleTrack* obj1 = (DiscreteSingleTrack*)uNew(DiscreteSingleTrack_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(428)
// --------------------------------------------------------------------------

// internal sealed class DiscreteTrackChangeState<T> :428
// {
::g::Fuse::Animations::TrackAnimatorState_type* DiscreteTrackChangeState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(DiscreteTrackChangeState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.DiscreteTrackChangeState`1", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimatorState_typeof());
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Disable_fn;
    type->fp_SeekObjectValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, uObject*, float*))DiscreteTrackChangeState__SeekObjectValue_fn;
    ::STRINGS[2] = uString::Const("Invalid Seek");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno");
    ::TYPES[35] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[36] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[31] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[37] = ::g::Fuse::Animations::Change_typeof();
    type->SetPrecalc(
        ::TYPES[36/*Fuse.Animations.IMixer*/]->MakeMethod(1, type->T(0)),
        ::TYPES[37/*Fuse.Animations.Change`1*/]->MakeType(type->T(0)));
    type->SetFields(6,
        ::g::Fuse::Animations::Change_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::DiscreteTrackChangeState, Animator1), 0,
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::DiscreteTrackChangeState, mixHandle), 0);
    return type;
}

// public DiscreteTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :433
void DiscreteTrackChangeState__ctor_2_fn(DiscreteTrackChangeState* __this, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :440
void DiscreteTrackChangeState__Disable_fn(DiscreteTrackChangeState* __this)
{
    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), ::TYPES[52/*Fuse.Animations.IMixerHandle`1*/]->MakeType(__this->__type->T(0))));
    __this->mixHandle = NULL;
}

// public DiscreteTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :433
void DiscreteTrackChangeState__New1_fn(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p, DiscreteTrackChangeState** __retval)
{
    *__retval = DiscreteTrackChangeState::New1(__type, animator, p);
}

// protected override sealed void SeekObjectValue(object value, float strength) :449
void DiscreteTrackChangeState__SeekObjectValue_fn(DiscreteTrackChangeState* __this, uObject* value, float* strength)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    float strength_ = *strength;

    if (__this->mixHandle == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[2/*"Invalid Seek"*/], 1, ::STRINGS[3/*"/usr/local/...*/], 453);
        return;
    }

    if ((value != NULL) && uIs(value, __types[0]))
        ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), ::TYPES[52/*Fuse.Animations.IMixerHandle`1*/]->MakeType(__types[0])), uUnboxAny(__types[0], value), uCRef(strength_));
}

// public DiscreteTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [instance] :433
void DiscreteTrackChangeState::ctor_2(::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.IMixer.Register<T>*/),
        __type->T(0),
        __type->Precalced(1/*Fuse.Animations.Change<T>*/),
    };
    ctor_1(animator, p, NULL);
    Animator1 = animator;
    mixHandle = ((uObject*)::g::Fuse::Animations::IMixer::Register(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[36/*Fuse.Animations.IMixer*/]), __types[0], (::g::Uno::UX::Property*)uPtr(Animator1)->Target(), uPtr(Animator1)->MixOp()));
}

// public DiscreteTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [static] :433
DiscreteTrackChangeState* DiscreteTrackChangeState::New1(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState* obj1 = (DiscreteTrackChangeState*)uNew(__type);
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(2929)
// ---------------------------------------------------------------------------

// internal abstract interface DiscreteTrackProvider :2929
// {
uInterfaceType* DiscreteTrackProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.DiscreteTrackProvider", 0, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(949)
// --------------------------------------------------------------------------

// public enum Easing :949
uEnumType* Easing_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.Easing", ::g::Uno::Int_typeof(), 31);
    type->SetLiterals(
        "Linear", 0LL,
        "QuadraticIn", 1LL,
        "QuadraticOut", 2LL,
        "QuadraticInOut", 3LL,
        "CubicIn", 4LL,
        "CubicOut", 5LL,
        "CubicInOut", 6LL,
        "QuarticIn", 7LL,
        "QuarticOut", 8LL,
        "QuarticInOut", 9LL,
        "QuinticIn", 10LL,
        "QuinticOut", 11LL,
        "QuinticInOut", 12LL,
        "SinusoidalIn", 13LL,
        "SinusoidalOut", 14LL,
        "SinusoidalInOut", 15LL,
        "ExponentialIn", 16LL,
        "ExponentialOut", 17LL,
        "ExponentialInOut", 18LL,
        "CircularIn", 19LL,
        "CircularOut", 20LL,
        "CircularInOut", 21LL,
        "ElasticIn", 22LL,
        "ElasticOut", 23LL,
        "ElasticInOut", 24LL,
        "BackIn", 25LL,
        "BackOut", 26LL,
        "BackInOut", 27LL,
        "BounceIn", 28LL,
        "BounceOut", 29LL,
        "BounceInOut", 30LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(947)
// --------------------------------------------------------------------------

// public delegate float EasingFunction(float k) :947
uDelegateType* EasingFunction_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Animations.EasingFunction", 1, 0);
    type->SetSignature(::g::Uno::Float_typeof(),
        ::g::Uno::Float_typeof());
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(994)
// --------------------------------------------------------------------------

// public static class EasingFunctions :994
// {
uClassType* EasingFunctions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Animations.EasingFunctions", options);
    ::TYPES[21] = ::g::Uno::Float_typeof();
    ::TYPES[42] = ::g::Fuse::Animations::EasingFunction_typeof();
    return type;
}

// public static float BackIn(float k) :1231
void EasingFunctions__BackIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BackIn(*k);
}

// public static float BackInOut(float k) :1244
void EasingFunctions__BackInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BackInOut(*k);
}

// public static float BackOut(float k) :1237
void EasingFunctions__BackOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BackOut(*k);
}

// public static float BounceIn(float k) :1256
void EasingFunctions__BounceIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BounceIn(*k);
}

// public static float BounceInOut(float k) :1284
void EasingFunctions__BounceInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BounceInOut(*k);
}

// public static float BounceOut(float k) :1261
void EasingFunctions__BounceOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BounceOut(*k);
}

// public static float CircularIn(float k) :1175
void EasingFunctions__CircularIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CircularIn(*k);
}

// public static float CircularInOut(float k) :1186
void EasingFunctions__CircularInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CircularInOut(*k);
}

// public static float CircularOut(float k) :1180
void EasingFunctions__CircularOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CircularOut(*k);
}

// public static float CubicIn(float k) :1073
void EasingFunctions__CubicIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CubicIn(*k);
}

// public static float CubicInOut(float k) :1084
void EasingFunctions__CubicInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CubicInOut(*k);
}

// public static float CubicOut(float k) :1078
void EasingFunctions__CubicOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CubicOut(*k);
}

// public static float ElasticIn(float k) :1195
void EasingFunctions__ElasticIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ElasticIn(*k);
}

// public static float ElasticInOut(float k) :1217
void EasingFunctions__ElasticInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ElasticInOut(*k);
}

// public static float ElasticOut(float k) :1206
void EasingFunctions__ElasticOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ElasticOut(*k);
}

// public static float ExponentialIn(float k) :1150
void EasingFunctions__ExponentialIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ExponentialIn(*k);
}

// public static float ExponentialInOut(float k) :1160
void EasingFunctions__ExponentialInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ExponentialInOut(*k);
}

// public static float ExponentialOut(float k) :1155
void EasingFunctions__ExponentialOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ExponentialOut(*k);
}

// public static Fuse.Animations.EasingFunction FromEasing(Fuse.Animations.Easing e) :996
void EasingFunctions__FromEasing_fn(int* e, uDelegate** __retval)
{
    *__retval = EasingFunctions::FromEasing(*e);
}

// public static float Linear(float k) :1046
void EasingFunctions__Linear_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::Linear(*k);
}

// public static float QuadraticIn(float k) :1051
void EasingFunctions__QuadraticIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuadraticIn(*k);
}

// public static float QuadraticInOut(float k) :1061
void EasingFunctions__QuadraticInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuadraticInOut(*k);
}

// public static float QuadraticOut(float k) :1056
void EasingFunctions__QuadraticOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuadraticOut(*k);
}

// public static float QuarticIn(float k) :1094
void EasingFunctions__QuarticIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuarticIn(*k);
}

// public static float QuarticInOut(float k) :1105
void EasingFunctions__QuarticInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuarticInOut(*k);
}

// public static float QuarticOut(float k) :1099
void EasingFunctions__QuarticOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuarticOut(*k);
}

// public static float QuinticIn(float k) :1114
void EasingFunctions__QuinticIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuinticIn(*k);
}

// public static float QuinticInOut(float k) :1125
void EasingFunctions__QuinticInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuinticInOut(*k);
}

// public static float QuinticOut(float k) :1119
void EasingFunctions__QuinticOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuinticOut(*k);
}

// public static float SinusoidalIn(float k) :1135
void EasingFunctions__SinusoidalIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::SinusoidalIn(*k);
}

// public static float SinusoidalInOut(float k) :1145
void EasingFunctions__SinusoidalInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::SinusoidalInOut(*k);
}

// public static float SinusoidalOut(float k) :1140
void EasingFunctions__SinusoidalOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::SinusoidalOut(*k);
}

// public static float BackIn(float k) [static] :1231
float EasingFunctions::BackIn(float k)
{
    float s = 1.70158f;
    return (k * k) * (((s + 1.0f) * k) - s);
}

// public static float BackInOut(float k) [static] :1244
float EasingFunctions::BackInOut(float k)
{
    float s = 2.59490943f;
    k = k * 2.0f;

    if (k < 1.0f)
        return 0.5f * ((k * k) * (((s + 1.0f) * k) - s));

    k = k - 2.0f;
    return 0.5f * (((k * k) * (((s + 1.0f) * k) + s)) + 2.0f);
}

// public static float BackOut(float k) [static] :1237
float EasingFunctions::BackOut(float k)
{
    float s = 1.70158f;
    k = k - 1.0f;
    return ((k * k) * (((s + 1.0f) * k) + s)) + 1.0f;
}

// public static float BounceIn(float k) [static] :1256
float EasingFunctions::BounceIn(float k)
{
    return 1.0f - EasingFunctions::BounceOut(1.0f - k);
}

// public static float BounceInOut(float k) [static] :1284
float EasingFunctions::BounceInOut(float k)
{
    if (k < 0.5f)
        return EasingFunctions::BounceIn(k * 2.0f) * 0.5f;

    return (EasingFunctions::BounceOut((k * 2.0f) - 1.0f) * 0.5f) + 0.5f;
}

// public static float BounceOut(float k) [static] :1261
float EasingFunctions::BounceOut(float k)
{
    if (k < 0.363636374f)
        return (7.5625f * k) * k;
    else if (k < 0.727272749f)
    {
        k = k - 0.545454562f;
        return ((7.5625f * k) * k) + 0.75f;
    }
    else if (k < 0.909090936f)
    {
        k = k - 0.8181818f;
        return ((7.562f * k) * k) + 0.9375f;
    }
    else
    {
        k = k - 0.954545438f;
        return ((7.5625f * k) * k) + 0.984375f;
    }
}

// public static float CircularIn(float k) [static] :1175
float EasingFunctions::CircularIn(float k)
{
    return 1.0f - ::g::Uno::Math::Sqrt1(1.0f - (k * k));
}

// public static float CircularInOut(float k) [static] :1186
float EasingFunctions::CircularInOut(float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
        return -0.5f * (::g::Uno::Math::Sqrt1(1.0f - (k * k)) - 1.0f);

    k = k - 2.0f;
    return 0.5f * (::g::Uno::Math::Sqrt1(1.0f - (k * k)) + 1.0f);
}

// public static float CircularOut(float k) [static] :1180
float EasingFunctions::CircularOut(float k)
{
    k = k - 1.0f;
    return ::g::Uno::Math::Sqrt1(1.0f - (k * k));
}

// public static float CubicIn(float k) [static] :1073
float EasingFunctions::CubicIn(float k)
{
    return (k * k) * k;
}

// public static float CubicInOut(float k) [static] :1084
float EasingFunctions::CubicInOut(float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
        return ((0.5f * k) * k) * k;

    k = k - 2.0f;
    return 0.5f * (((k * k) * k) + 2.0f);
}

// public static float CubicOut(float k) [static] :1078
float EasingFunctions::CubicOut(float k)
{
    k = k - 1.0f;
    return ((k * k) * k) + 1.0f;
}

// public static float ElasticIn(float k) [static] :1195
float EasingFunctions::ElasticIn(float k)
{
    if (k == 0.0f)
        return 0.0f;

    if (k == 1.0f)
        return 1.0f;

    k = k - 1.0f;
    return -::g::Uno::Math::Pow1(2.0f, 10.0f * k) * ::g::Uno::Math::Sin1(((k - 0.1f) * 6.28318548f) * 2.5f);
}

// public static float ElasticInOut(float k) [static] :1217
float EasingFunctions::ElasticInOut(float k)
{
    if (k == 0.0f)
        return 0.0f;

    if (k == 1.0f)
        return 1.0f;

    k = (k * 2.0f) - 1.0f;

    if (k < 0.0f)
        return (-0.5f * ::g::Uno::Math::Pow1(2.0f, 10.0f * k)) * ::g::Uno::Math::Sin1(((k - 0.1f) * 6.28318548f) * 2.5f);

    return ((::g::Uno::Math::Pow1(2.0f, -10.0f * k) * ::g::Uno::Math::Sin1(((k - 0.1f) * 6.28318548f) * 2.5f)) * 0.5f) + 1.0f;
}

// public static float ElasticOut(float k) [static] :1206
float EasingFunctions::ElasticOut(float k)
{
    if (k == 0.0f)
        return 0.0f;

    if (k == 1.0f)
        return 1.0f;

    return (::g::Uno::Math::Pow1(2.0f, -10.0f * k) * ::g::Uno::Math::Sin1(((k - 0.1f) * 6.28318548f) * 2.5f)) + 1.0f;
}

// public static float ExponentialIn(float k) [static] :1150
float EasingFunctions::ExponentialIn(float k)
{
    return (k == 0.0f) ? 0.0f : ::g::Uno::Math::Pow1(1024.0f, k - 1.0f);
}

// public static float ExponentialInOut(float k) [static] :1160
float EasingFunctions::ExponentialInOut(float k)
{
    if (k == 0.0f)
        return 0.0f;

    if (k == 1.0f)
        return 1.0f;

    k = k * 2.0f;

    if (k < 1.0f)
        return 0.5f * ::g::Uno::Math::Pow1(1024.0f, k - 1.0f);

    return 0.5f * (-::g::Uno::Math::Pow1(2.0f, -10.0f * (k - 1.0f)) + 2.0f);
}

// public static float ExponentialOut(float k) [static] :1155
float EasingFunctions::ExponentialOut(float k)
{
    return (k == 1.0f) ? 1.0f : 1.0f - ::g::Uno::Math::Pow1(2.0f, -10.0f * k);
}

// public static Fuse.Animations.EasingFunction FromEasing(Fuse.Animations.Easing e) [static] :996
uDelegate* EasingFunctions::FromEasing(int e)
{
    switch (e)
    {
        case 0:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__Linear_fn);
        case 1:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuadraticIn_fn);
        case 2:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuadraticOut_fn);
        case 3:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuadraticInOut_fn);
        case 4:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CubicIn_fn);
        case 5:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CubicOut_fn);
        case 6:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CubicInOut_fn);
        case 7:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuarticIn_fn);
        case 8:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuarticOut_fn);
        case 9:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuarticInOut_fn);
        case 10:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuinticIn_fn);
        case 11:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuinticOut_fn);
        case 12:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuinticInOut_fn);
        case 13:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__SinusoidalIn_fn);
        case 14:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__SinusoidalOut_fn);
        case 15:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__SinusoidalInOut_fn);
        case 16:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ExponentialIn_fn);
        case 17:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ExponentialOut_fn);
        case 18:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ExponentialInOut_fn);
        case 19:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CircularIn_fn);
        case 20:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CircularOut_fn);
        case 21:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CircularInOut_fn);
        case 22:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ElasticIn_fn);
        case 23:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ElasticOut_fn);
        case 24:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ElasticInOut_fn);
        case 25:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BackIn_fn);
        case 26:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BackOut_fn);
        case 27:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BackInOut_fn);
        case 28:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BounceIn_fn);
        case 29:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BounceOut_fn);
        case 30:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BounceInOut_fn);
        default:
            return uDelegate::New(::TYPES[42/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__Linear_fn);
    }
}

// public static float Linear(float k) [static] :1046
float EasingFunctions::Linear(float k)
{
    return k;
}

// public static float QuadraticIn(float k) [static] :1051
float EasingFunctions::QuadraticIn(float k)
{
    return k * k;
}

// public static float QuadraticInOut(float k) [static] :1061
float EasingFunctions::QuadraticInOut(float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
        return (0.5f * k) * k;

    k = k - 1.0f;
    return -0.5f * ((k * (k - 2.0f)) - 1.0f);
}

// public static float QuadraticOut(float k) [static] :1056
float EasingFunctions::QuadraticOut(float k)
{
    return k * (2.0f - k);
}

// public static float QuarticIn(float k) [static] :1094
float EasingFunctions::QuarticIn(float k)
{
    return ((k * k) * k) * k;
}

// public static float QuarticInOut(float k) [static] :1105
float EasingFunctions::QuarticInOut(float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
        return (((0.5f * k) * k) * k) * k;

    k = k - 2.0f;
    return -0.5f * ((((k * k) * k) * k) - 2.0f);
}

// public static float QuarticOut(float k) [static] :1099
float EasingFunctions::QuarticOut(float k)
{
    k = k - 1.0f;
    return 1.0f - (((k * k) * k) * k);
}

// public static float QuinticIn(float k) [static] :1114
float EasingFunctions::QuinticIn(float k)
{
    return (((k * k) * k) * k) * k;
}

// public static float QuinticInOut(float k) [static] :1125
float EasingFunctions::QuinticInOut(float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
        return ((((0.5f * k) * k) * k) * k) * k;

    k = k - 2.0f;
    return 0.5f * (((((k * k) * k) * k) * k) + 2.0f);
}

// public static float QuinticOut(float k) [static] :1119
float EasingFunctions::QuinticOut(float k)
{
    k = k - 1.0f;
    return ((((k * k) * k) * k) * k) + 1.0f;
}

// public static float SinusoidalIn(float k) [static] :1135
float EasingFunctions::SinusoidalIn(float k)
{
    return 1.0f - ::g::Uno::Math::Cos1((k * 3.14159274f) / 2.0f);
}

// public static float SinusoidalInOut(float k) [static] :1145
float EasingFunctions::SinusoidalInOut(float k)
{
    return 0.5f * (1.0f - ::g::Uno::Math::Cos1(3.14159274f * k));
}

// public static float SinusoidalOut(float k) [static] :1140
float EasingFunctions::SinusoidalOut(float k)
{
    return ::g::Uno::Math::Sin1((k * 3.14159274f) / 2.0f);
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(1300)
// ---------------------------------------------------------------------------

// internal sealed class EasingTrack :1300
// {
// static EasingTrack() :1300
static void EasingTrack__cctor__fn(uType* __type)
{
    EasingTrack::Singleton_ = EasingTrack::New1();
}

EasingTrack_type* EasingTrack_typeof()
{
    static uSStrong<EasingTrack_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(EasingTrack);
    options.TypeSize = sizeof(EasingTrack_type);
    type = (EasingTrack_type*)uClassType::New("Fuse.Animations.EasingTrack", options);
    type->fp_ctor_ = (void*)EasingTrack__New1_fn;
    type->fp_cctor_ = EasingTrack__cctor__fn;
    type->interface1.fp_GetDuration = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*, double*))EasingTrack__FuseAnimationsTrackProviderGetDuration_fn;
    type->interface1.fp_GetAnimatorVariant = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*))EasingTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn;
    type->interface0.fp_GetSeekProgress = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, ::g::Uno::Float4*, double*, bool*))EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekProgress_fn;
    type->interface0.fp_GetSeekTime = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, ::g::Uno::Float4*, double*, bool*))EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekTime_fn;
    ::TYPES[42] = ::g::Fuse::Animations::EasingFunction_typeof();
    ::TYPES[44] = ::g::Fuse::Animations::TrackAnimatorState_typeof();
    ::TYPES[21] = ::g::Uno::Float_typeof();
    ::TYPES[4] = ::g::Uno::Double_typeof();
    ::TYPES[35] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[10] = ::g::Uno::Int_typeof();
    ::TYPES[45] = ::g::Fuse::Animations::ContinuousTrackProvider_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::ContinuousTrackProvider_typeof(), offsetof(EasingTrack_type, interface0),
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(EasingTrack_type, interface1));
    type->SetFields(0,
        EasingTrack_typeof(), (uintptr_t)&::g::Fuse::Animations::EasingTrack::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated EasingTrack() :1300
void EasingTrack__ctor__fn(EasingTrack* __this)
{
    __this->ctor_();
}

// private bool Fuse.Animations.ContinuousTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState tas, double progress, double interval, Fuse.Animations.SeekDirection dir, float4& value, double& strength) :1315
void EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekProgress_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, ::g::Uno::Float4* value, double* strength, bool* __retval)
{
    double progress_ = *progress;
    float ret2;
    int dir_ = *dir;
    progress_ = ::g::Uno::Math::Clamp(progress_, 0.0, 1.0);
    float ease = (uPtr(::g::Fuse::Animations::EasingFunctions::FromEasing(uPtr(tas)->Easing()))->Invoke(&ret2, 1, uCRef((float)progress_)), ret2);
    *strength = (double)ease;
    *value = uPtr(tas->Animator)->_vectorValue;
    return *__retval = (dir_ == 0) ? progress_ >= 1.0 : progress_ <= 0.0, void();
}

// private bool Fuse.Animations.ContinuousTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState tas, double elapsed, double interval, Fuse.Animations.SeekDirection dir, float4& value, double& strength) :1328
void EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekTime_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, ::g::Uno::Float4* value, double* strength, bool* __retval)
{
    int dir_ = *dir;
    double elapsed_ = *elapsed;
    double interval_ = *interval;
    double duration = uPtr(tas)->Duration();
    float progress;

    if (duration < 9.9999997473787516e-06)
        progress = (float)(((dir_ == 0) ? elapsed_ >= -9.9999997473787516e-06 : elapsed_ > 9.9999997473787516e-06) ? 1 : 0);
    else
        progress = (float)(elapsed_ / duration);

    return *__retval = ::g::Fuse::Animations::ContinuousTrackProvider::GetSeekProgress(uInterface(uPtr(uAs<uObject*>(__this, ::TYPES[45/*Fuse.Animations.ContinuousTrackProvider*/])), ::TYPES[45/*Fuse.Animations.ContinuousTrackProvider*/]), tas, (double)progress, interval_, dir_, value, strength), void();
}

// private Fuse.Animations.AnimatorVariant Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator ta) :1310
void EasingTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* __retval)
{
    return *__retval = uPtr(ta)->HasBack() ? 2 : 0, void();
}

// private double Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator ta, Fuse.Animations.AnimationVariant variant) :1305
void EasingTrack__FuseAnimationsTrackProviderGetDuration_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval)
{
    int variant_ = *variant;
    return *__retval = ((variant_ == 1) && uPtr(ta)->HasBack()) ? uPtr(ta)->DurationBack() : uPtr(ta)->Duration(), void();
}

// public generated EasingTrack New() :1300
void EasingTrack__New1_fn(EasingTrack** __retval)
{
    *__retval = EasingTrack::New1();
}

uSStrong<EasingTrack*> EasingTrack::Singleton_;

// public generated EasingTrack() [instance] :1300
void EasingTrack::ctor_()
{
}

// public generated EasingTrack New() [static] :1300
EasingTrack* EasingTrack::New1()
{
    EasingTrack* obj1 = (EasingTrack*)uNew(EasingTrack_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(1806)
// ---------------------------------------------------------------------------

// internal sealed class FastMatrixTransform :1806
// {
::g::Fuse::Transform_type* FastMatrixTransform_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(FastMatrixTransform);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Animations.FastMatrixTransform", options);
    type->SetBase(::g::Fuse::Transform_typeof());
    type->fp_ctor_ = (void*)FastMatrixTransform__New1_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))FastMatrixTransform__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))FastMatrixTransform__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))FastMatrixTransform__PrependTo_fn;
    ::TYPES[17] = ::g::Fuse::FastMatrix_typeof();
    ::TYPES[16] = ::g::Uno::Float4x4_typeof();
    type->SetFields(4,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Animations::FastMatrixTransform, Matrix), 0);
    return type;
}

// public generated FastMatrixTransform() :1806
void FastMatrixTransform__ctor_1_fn(FastMatrixTransform* __this)
{
    __this->ctor_1();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :1810
void FastMatrixTransform__AppendTo_fn(FastMatrixTransform* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    uPtr(m)->AppendFastMatrix(__this->Matrix);
}

// public void Changed() :1821
void FastMatrixTransform__Changed_fn(FastMatrixTransform* __this)
{
    __this->Changed();
}

// public override sealed bool get_IsFlat() :1828
void FastMatrixTransform__get_IsFlat_fn(FastMatrixTransform* __this, bool* __retval)
{
    ::g::Uno::Float4x4 m = uPtr(__this->Matrix)->Matrix();
    bool q = (((((::g::Uno::Math::Abs1(m.M13) < 1e-05f) && (::g::Uno::Math::Abs1(m.M23) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M43) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M14) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M24) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M34) < 1e-05f);
    return *__retval = q, void();
}

// public generated FastMatrixTransform New() :1806
void FastMatrixTransform__New1_fn(FastMatrixTransform** __retval)
{
    *__retval = FastMatrixTransform::New1();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :1816
void FastMatrixTransform__PrependTo_fn(FastMatrixTransform* __this, ::g::Fuse::FastMatrix* m)
{
    uPtr(m)->PrependFastMatrix(__this->Matrix);
}

// public generated FastMatrixTransform() [instance] :1806
void FastMatrixTransform::ctor_1()
{
    Matrix = ::g::Fuse::FastMatrix::Identity();
    ctor_();
}

// public void Changed() [instance] :1821
void FastMatrixTransform::Changed()
{
    OnMatrixChanged();
}

// public generated FastMatrixTransform New() [static] :1806
FastMatrixTransform* FastMatrixTransform::New1()
{
    FastMatrixTransform* obj1 = (FastMatrixTransform*)uNew(FastMatrixTransform_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(1748)
// ---------------------------------------------------------------------------

// protected struct MasterBase<T>.GFWResult :1748
// {
uStructType* MasterBase__GFWResult_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ValueSize = sizeof(MasterBase__GFWResult);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Animations.MasterBase`1.GFWResult", options);
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::MasterBase__GFWResult, Rest), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::MasterBase__GFWResult, Full), 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(1553)
// ---------------------------------------------------------------------------

// public abstract interface IMixer :1553
// {
uInterfaceType* IMixer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IMixer", 0, 1);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(1559)
// ---------------------------------------------------------------------------

// public abstract interface IMixerHandle<T> :1559
// {
uInterfaceType* IMixerHandle_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IMixerHandle`1", 1, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(1566)
// ---------------------------------------------------------------------------

// internal abstract interface IMixerMaster :1566
// {
uInterfaceType* IMixerMaster_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IMixerMaster", 0, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(2492)
// ---------------------------------------------------------------------------

// public abstract interface IResize :2492
// {
uInterfaceType* IResize_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IResize", 0, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(2497)
// ---------------------------------------------------------------------------

// public abstract interface IResizeMode :2497
// {
uInterfaceType* IResizeMode_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IResizeMode", 0, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(1673)
// ---------------------------------------------------------------------------

// internal abstract class MasterBase<T> :1673
// {
//  ~MasterBase() :1681
static void MasterBase__Finalize_fn(MasterBase* __this)
{
}

MasterBase_type* MasterBase_typeof()
{
    static uSStrong<MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(MasterBase);
    options.TypeSize = sizeof(MasterBase_type);
    type = (MasterBase_type*)uClassType::New("Fuse.Animations.MasterBase`1", options);
    type->fp_Finalize = (void(*)(uObject*))MasterBase__Finalize_fn;
    type->fp_OnActive = MasterBase__OnActive_fn;
    type->fp_get_PostLayout = MasterBase__get_PostLayout_fn;
    type->interface0.fp_Complete = (void(*)(uObject*))MasterBase__Complete_fn;
    ::TYPES[6] = ::g::Uno::Collections::List_typeof();
    ::TYPES[7] = ::g::Fuse::Animations::MixerHandle_typeof();
    ::TYPES[46] = ::g::Fuse::Animations::IMixerMaster_typeof();
    ::TYPES[10] = ::g::Uno::Int_typeof();
    ::TYPES[5] = MasterBase__GFWResult_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    type->SetPrecalc(
        ::TYPES[6/*Uno.Collections.List`1*/]->MakeType(::TYPES[7/*Fuse.Animations.MixerHandle`1*/]->MakeType(type->T(0))),
        ::TYPES[7/*Fuse.Animations.MixerHandle`1*/]->MakeType(type->T(0)),
        ::TYPES[5/*Fuse.Animations.MasterBase`1.GFWResult*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(MasterBase_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MasterBase, _inactive), 0,
        ::g::Fuse::Animations::MixerBase_typeof(), offsetof(::g::Fuse::Animations::MasterBase, _mixerBase), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MasterBase, DirtyValue), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::MixerHandle_typeof()->MakeType(type->T(0))), offsetof(::g::Fuse::Animations::MasterBase, Handles), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MasterBase, masterAdded), 0);
    return type;
}

// protected MasterBase([Fuse.Animations.MixerBase mixerBase]) :1676
void MasterBase__ctor__fn(MasterBase* __this, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_(mixerBase);
}

// public void Complete() :1723
void MasterBase__Complete_fn(MasterBase* __this)
{
    __this->Complete();
}

// protected Fuse.Animations.MasterBase<T>.GFWResult GetFullWeight() :1754
void MasterBase__GetFullWeight_fn(MasterBase* __this, MasterBase__GFWResult* __retval)
{
    *__retval = __this->GetFullWeight();
}

// protected virtual void OnActive() :1719
void MasterBase__OnActive_fn(MasterBase* __this)
{
}

// protected virtual bool get_PostLayout() :1717
void MasterBase__get_PostLayout_fn(MasterBase* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public void Register(Fuse.Animations.MixerHandle<T> handle) :1692
void MasterBase__Register_fn(MasterBase* __this, ::g::Fuse::Animations::MixerHandle* handle)
{
    __this->Register(handle);
}

// public void Unregister(Fuse.Animations.MixerHandle<T> handle) :1712
void MasterBase__Unregister_fn(MasterBase* __this, ::g::Fuse::Animations::MixerHandle* handle)
{
    __this->Unregister(handle);
}

// protected MasterBase([Fuse.Animations.MixerBase mixerBase]) [instance] :1676
void MasterBase::ctor_(::g::Fuse::Animations::MixerBase* mixerBase)
{
    uType* __types[] = {
        __type->GetBase(MasterBase_typeof())->Precalced(0/*Uno.Collections.List<Fuse.Animations.MixerHandle<T>>*/),
        __type->GetBase(MasterBase_typeof())->Precalced(1/*Fuse.Animations.MixerHandle<T>*/),
        __type->GetBase(MasterBase_typeof())->T(0),
    };
    Handles = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
    _mixerBase = mixerBase;
}

// public void Complete() [instance] :1723
void MasterBase::Complete()
{
    uType* __types[] = {
        __type->GetBase(MasterBase_typeof())->Precalced(0/*Uno.Collections.List<Fuse.Animations.MixerHandle<T>>*/),
        __type->GetBase(MasterBase_typeof())->Precalced(1/*Fuse.Animations.MixerHandle<T>*/),
        __type->GetBase(MasterBase_typeof())->T(0),
    };

    if (uPtr(Handles)->Count() == 0)
    {
        if (masterAdded)
        {
            ::g::Fuse::Animations::Mixer::RemoveMaster((uObject*)this, PostLayout());
            masterAdded = false;
            OnInactive();
        }

        if (_mixerBase != NULL)
            uPtr(_mixerBase)->Unused((uObject*)this);

        _inactive = true;
        return;
    }

    if (DirtyValue)
    {
        OnComplete();
        DirtyValue = false;
    }
}

// protected Fuse.Animations.MasterBase<T>.GFWResult GetFullWeight() [instance] :1754
MasterBase__GFWResult MasterBase::GetFullWeight()
{
    uType* __types[] = {
        __type->GetBase(MasterBase_typeof())->Precalced(0/*Uno.Collections.List<Fuse.Animations.MixerHandle<T>>*/),
        __type->GetBase(MasterBase_typeof())->Precalced(1/*Fuse.Animations.MixerHandle<T>*/),
        __type->GetBase(MasterBase_typeof())->T(0),
        __type->GetBase(MasterBase_typeof())->Precalced(2/*Fuse.Animations.MasterBase<T>.GFWResult*/),
    };
    MasterBase__GFWResult collection1;
    ::g::Fuse::Animations::MixerHandle* ret1;
    float fullWeight = 0.0f;
    int c = uPtr(Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr(Handles), uCRef<int>(i), &ret1), ret1);

        if (uPtr(v)->MixOp() == 1)
            fullWeight = fullWeight + (uPtr(v)->HasValue() ? uPtr(v)->Strength : 0.0f);
    }

    float restWeight = 1.0f - ::g::Uno::Math::Min1(fullWeight, 1.0f);
    fullWeight = ::g::Uno::Math::Max1(1.0f, fullWeight);
    collection1 = uDefault<MasterBase__GFWResult>();
    collection1.Rest = restWeight;
    collection1.Full = fullWeight;
    return collection1;
}

// public void Register(Fuse.Animations.MixerHandle<T> handle) [instance] :1692
void MasterBase::Register(::g::Fuse::Animations::MixerHandle* handle)
{
    uType* __types[] = {
        __type->GetBase(MasterBase_typeof())->Precalced(0/*Uno.Collections.List<Fuse.Animations.MixerHandle<T>>*/),
        __type->GetBase(MasterBase_typeof())->Precalced(1/*Fuse.Animations.MixerHandle<T>*/),
        __type->GetBase(MasterBase_typeof())->T(0),
    };
    ::g::Fuse::Animations::MixerHandle* ret2;

    if (_inactive)
        return;

    int at = 0;

    for (; (at < uPtr(Handles)->Count()) && (uPtr(handle)->Priority() <= uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Handles), uCRef<int>(at), &ret2), ret2))->Priority()); ++at)
        ;

    ::g::Uno::Collections::List__Insert_fn(uPtr(Handles), uCRef<int>(at), handle);

    if (!masterAdded)
    {
        masterAdded = true;
        ::g::Fuse::Animations::Mixer::AddMaster((uObject*)this, PostLayout());
        OnActive();
    }
}

// public void Unregister(Fuse.Animations.MixerHandle<T> handle) [instance] :1712
void MasterBase::Unregister(::g::Fuse::Animations::MixerHandle* handle)
{
    bool ret3;
    ::g::Uno::Collections::List__Remove_fn(uPtr(Handles), handle, &ret3);
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(1781)
// ---------------------------------------------------------------------------

// internal abstract class MasterProperty<T> :1781
// {
MasterProperty_type* MasterProperty_typeof()
{
    static uSStrong<MasterProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(MasterProperty);
    options.TypeSize = sizeof(MasterProperty_type);
    type = (MasterProperty_type*)uClassType::New("Fuse.Animations.MasterProperty`1", options);
    type->SetBase(::g::Fuse::Animations::MasterBase_typeof()->MakeType(type->T(0)));
    type->fp_OnInactive = (void(*)(::g::Fuse::Animations::MasterBase*))MasterProperty__OnInactive_fn;
    type->interface1.fp_GetPropertyObject = (void(*)(uObject*, uObject**))MasterProperty__GetPropertyObject_fn;
    type->interface0.fp_Complete = (void(*)(uObject*))::g::Fuse::Animations::MasterBase__Complete_fn;
    ::TYPES[11] = uObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(MasterProperty_type, interface0),
        ::g::Fuse::Animations::MasterPropertyGet_typeof(), offsetof(MasterProperty_type, interface1));
    type->SetFields(5,
        ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::MasterProperty, Property), 0);
    return type;
}

// protected MasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :1786
void MasterProperty__ctor_1_fn(MasterProperty* __this, ::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_1(property, mixerBase);
}

// public object GetPropertyObject() :1784
void MasterProperty__GetPropertyObject_fn(MasterProperty* __this, uObject** __retval)
{
    *__retval = __this->GetPropertyObject();
}

// protected override sealed void OnInactive() :1800
void MasterProperty__OnInactive_fn(MasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(MasterProperty_typeof())->T(0),
    };
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ::g::Uno::UX::Property__Set_fn(uPtr(__this->Property), (MasterProperty__get_RestValue_fn(__this, &ret1), ret1), __this);
}

// public T get_RestValue() :1794
void MasterProperty__get_RestValue_fn(MasterProperty* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(MasterProperty_typeof())->T(0),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((::g::Uno::UX::Property__GetRestState_fn(uPtr(__this->Property), &ret2), ret2)), void();
}

// protected MasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [instance] :1786
void MasterProperty::ctor_1(::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_(mixerBase);
    Property = property;
}

// public object GetPropertyObject() [instance] :1784
uObject* MasterProperty::GetPropertyObject()
{
    return Property;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(1777)
// ---------------------------------------------------------------------------

// internal abstract interface MasterPropertyGet :1777
// {
uInterfaceType* MasterPropertyGet_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.MasterPropertyGet", 0, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(1842)
// ---------------------------------------------------------------------------

// internal abstract class MasterTransform :1842
// {
// static MasterTransform() :1842
static void MasterTransform__cctor__fn(uType* __type)
{
    MasterTransform::identity_ = ::g::Fuse::Translation::New1();
}

::g::Fuse::Animations::MasterBase_type* MasterTransform_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MasterTransform);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterBase_type);
    type = (::g::Fuse::Animations::MasterBase_type*)uClassType::New("Fuse.Animations.MasterTransform", options);
    type->SetBase(::g::Fuse::Animations::MasterBase_typeof()->MakeType(::g::Fuse::Transform_typeof()));
    type->fp_cctor_ = MasterTransform__cctor__fn;
    type->fp_OnActive = (void(*)(::g::Fuse::Animations::MasterBase*))MasterTransform__OnActive_fn;
    type->fp_OnInactive = (void(*)(::g::Fuse::Animations::MasterBase*))MasterTransform__OnInactive_fn;
    type->fp_get_PostLayout = (void(*)(::g::Fuse::Animations::MasterBase*, bool*))MasterTransform__get_PostLayout_fn;
    type->interface0.fp_Complete = (void(*)(uObject*))::g::Fuse::Animations::MasterBase__Complete_fn;
    ::TYPES[47] = ::g::Fuse::Transform_typeof();
    ::TYPES[48] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterBase_type, interface0));
    type->SetFields(5,
        ::g::Fuse::Animations::FastMatrixTransform_typeof(), offsetof(::g::Fuse::Animations::MasterTransform, FMT), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Animations::MasterTransform, Node), 0,
        ::g::Fuse::Transform_typeof(), (uintptr_t)&::g::Fuse::Animations::MasterTransform::identity_, uFieldFlagsStatic);
    return type;
}

// protected MasterTransform(Fuse.Node node, Fuse.Animations.MixerBase mixerBase) :1847
void MasterTransform__ctor_1_fn(MasterTransform* __this, ::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_1(node, mixerBase);
}

// protected override sealed void OnActive() :1854
void MasterTransform__OnActive_fn(MasterTransform* __this)
{
    __this->FMT = ::g::Fuse::Animations::FastMatrixTransform::New1();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->Node)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[47/*Fuse.Transform*/])), __this->FMT);
}

// protected override sealed void OnInactive() :1860
void MasterTransform__OnInactive_fn(MasterTransform* __this)
{
    bool ret1;
    ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(__this->Node)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[47/*Fuse.Transform*/])), __this->FMT, &ret1);
    __this->FMT = NULL;
}

// protected override sealed bool get_PostLayout() :1844
void MasterTransform__get_PostLayout_fn(MasterTransform* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Fuse::Transform*> MasterTransform::identity_;

// protected MasterTransform(Fuse.Node node, Fuse.Animations.MixerBase mixerBase) [instance] :1847
void MasterTransform::ctor_1(::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_(mixerBase);
    Node = node;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(1571)
// ---------------------------------------------------------------------------

// internal sealed class Mixer :1571
// {
// static Mixer() :1571
static void Mixer__cctor__fn(uType* __type)
{
    Mixer::_default_ = (uObject*)::g::Fuse::Animations::AverageMixer::New1();
    Mixer::_defaultDiscrete_ = (uObject*)::g::Fuse::Animations::DiscreteMixer::New1();
    Mixer::PreMasters_ = ((::g::Uno::Collections::ConcurrentCollection*)::g::Uno::Collections::ConcurrentCollection::New1(::TYPES[49/*Uno.Collections.ConcurrentCollection<Fuse.Animations.IMixerMaster>*/]));
    Mixer::PostMasters_ = ((::g::Uno::Collections::ConcurrentCollection*)::g::Uno::Collections::ConcurrentCollection::New1(::TYPES[49/*Uno.Collections.ConcurrentCollection<Fuse.Animations.IMixerMaster>*/]));
}

uType* Mixer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Mixer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.Mixer", options);
    type->fp_cctor_ = Mixer__cctor__fn;
    ::TYPES[36] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[49] = ::g::Uno::Collections::ConcurrentCollection_typeof()->MakeType(::g::Fuse::Animations::IMixerMaster_typeof());
    ::TYPES[50] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Fuse::Animations::IMixer_typeof(), (uintptr_t)&::g::Fuse::Animations::Mixer::_default_, uFieldFlagsStatic,
        ::g::Fuse::Animations::IMixer_typeof(), (uintptr_t)&::g::Fuse::Animations::Mixer::_defaultDiscrete_, uFieldFlagsStatic,
        ::g::Uno::Collections::ConcurrentCollection_typeof()->MakeType(::g::Fuse::Animations::IMixerMaster_typeof()), (uintptr_t)&::g::Fuse::Animations::Mixer::PostMasters_, uFieldFlagsStatic,
        ::g::Uno::Collections::ConcurrentCollection_typeof()->MakeType(::g::Fuse::Animations::IMixerMaster_typeof()), (uintptr_t)&::g::Fuse::Animations::Mixer::PreMasters_, uFieldFlagsStatic);
    return type;
}

// public static void AddMaster(Fuse.Animations.IMixerMaster master, bool postLayout) :1580
void Mixer__AddMaster_fn(uObject* master, bool* postLayout)
{
    Mixer::AddMaster(master, *postLayout);
}

// public static void CompletePost() :1612
void Mixer__CompletePost_fn()
{
    Mixer::CompletePost();
}

// public static void CompletePre() :1602
void Mixer__CompletePre_fn()
{
    Mixer::CompletePre();
}

// public static Fuse.Animations.IMixer get_Default() :1574
void Mixer__get_Default_fn(uObject** __retval)
{
    *__retval = Mixer::Default();
}

// public static Fuse.Animations.IMixer get_DefaultDiscrete() :1576
void Mixer__get_DefaultDiscrete_fn(uObject** __retval)
{
    *__retval = Mixer::DefaultDiscrete();
}

// public static void RemoveMaster(Fuse.Animations.IMixerMaster master, bool postLayout) :1591
void Mixer__RemoveMaster_fn(uObject* master, bool* postLayout)
{
    Mixer::RemoveMaster(master, *postLayout);
}

uSStrong<uObject*> Mixer::_default_;
uSStrong<uObject*> Mixer::_defaultDiscrete_;
uSStrong< ::g::Uno::Collections::ConcurrentCollection*> Mixer::PostMasters_;
uSStrong< ::g::Uno::Collections::ConcurrentCollection*> Mixer::PreMasters_;

// public static void AddMaster(Fuse.Animations.IMixerMaster master, bool postLayout) [static] :1580
void Mixer::AddMaster(uObject* master, bool postLayout)
{
    Mixer_typeof()->Init();
    ::g::Uno::Collections::ConcurrentCollection* list = postLayout ? (::g::Uno::Collections::ConcurrentCollection*)Mixer::PostMasters() : (::g::Uno::Collections::ConcurrentCollection*)Mixer::PreMasters();
    int stage = postLayout ? 3 : 1;
    uDelegate* act = postLayout ? uDelegate::New(::TYPES[50/*Uno.Action*/], (void*)Mixer__CompletePost_fn) : uDelegate::New(::TYPES[50/*Uno.Action*/], (void*)Mixer__CompletePre_fn);

    if (uPtr(list)->Count() == 0)
        ::g::Fuse::UpdateManager::AddAction(act, stage);

    ::g::Uno::Collections::ConcurrentCollection__Add_fn(uPtr(list), master);
}

// public static void CompletePost() [static] :1612
void Mixer::CompletePost()
{
    Mixer_typeof()->Init();
    uObject* ret2;
    uObject* l = uPtr(Mixer::PostMasters())->DeferLock();

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(l), ::g::Uno::IDisposable_typeof()));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        int c = uPtr(Mixer::PostMasters())->Count();

        for (int i = 0; i < c; ++i)
            ::g::Fuse::Animations::IMixerMaster::Complete(uInterface(uPtr((::g::Uno::Collections::ConcurrentCollection__get_Item_fn(uPtr(Mixer::PostMasters()), uCRef<int>(i), &ret2), ret2)), ::TYPES[46/*Fuse.Animations.IMixerMaster*/]));
    }
}

// public static void CompletePre() [static] :1602
void Mixer::CompletePre()
{
    Mixer_typeof()->Init();
    uObject* ret3;
    uObject* l = uPtr(Mixer::PreMasters())->DeferLock();

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(l), ::g::Uno::IDisposable_typeof()));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        int c = uPtr(Mixer::PreMasters())->Count();

        for (int i = 0; i < c; ++i)
            ::g::Fuse::Animations::IMixerMaster::Complete(uInterface(uPtr((::g::Uno::Collections::ConcurrentCollection__get_Item_fn(uPtr(Mixer::PreMasters()), uCRef<int>(i), &ret3), ret3)), ::TYPES[46/*Fuse.Animations.IMixerMaster*/]));
    }
}

// public static void RemoveMaster(Fuse.Animations.IMixerMaster master, bool postLayout) [static] :1591
void Mixer::RemoveMaster(uObject* master, bool postLayout)
{
    Mixer_typeof()->Init();
    bool ret4;
    ::g::Uno::Collections::ConcurrentCollection* list = postLayout ? (::g::Uno::Collections::ConcurrentCollection*)Mixer::PostMasters() : (::g::Uno::Collections::ConcurrentCollection*)Mixer::PreMasters();
    int stage = postLayout ? 3 : 1;
    uDelegate* act = postLayout ? uDelegate::New(::TYPES[50/*Uno.Action*/], (void*)Mixer__CompletePost_fn) : uDelegate::New(::TYPES[50/*Uno.Action*/], (void*)Mixer__CompletePre_fn);
    ::g::Uno::Collections::ConcurrentCollection__Remove_fn(uPtr(list), master, &ret4);

    if (list->Count() == 0)
        ::g::Fuse::UpdateManager::RemoveAction(act, stage);
}

// public static Fuse.Animations.IMixer get_Default() [static] :1574
uObject* Mixer::Default()
{
    Mixer_typeof()->Init();
    return Mixer::_default();
}

// public static Fuse.Animations.IMixer get_DefaultDiscrete() [static] :1576
uObject* Mixer::DefaultDiscrete()
{
    Mixer_typeof()->Init();
    return Mixer::_defaultDiscrete();
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(1623)
// ---------------------------------------------------------------------------

// internal abstract class MixerBase :1623
// {
MixerBase_type* MixerBase_typeof()
{
    static uSStrong<MixerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(MixerBase);
    options.TypeSize = sizeof(MixerBase_type);
    type = (MixerBase_type*)uClassType::New("Fuse.Animations.MixerBase", options);
    type->interface0.fp_Register = (void(*)(uObject*, uType*, ::g::Uno::UX::Property*, int*, uObject**))MixerBase__Register_fn;
    type->interface0.fp_RegisterTransform = (void(*)(uObject*, ::g::Fuse::Node*, int*, int*, uObject**))MixerBase__RegisterTransform_fn;
    ::TYPES[51] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), uObject_typeof());
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[11] = uObject_typeof();
    ::TYPES[8] = ::g::Fuse::Animations::MasterBase_typeof();
    ::TYPES[52] = ::g::Fuse::Animations::IMixerHandle_typeof();
    ::TYPES[7] = ::g::Fuse::Animations::MixerHandle_typeof();
    ::TYPES[48] = ::g::Fuse::Node_typeof();
    ::TYPES[13] = ::g::Fuse::Animations::MasterBase_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[53] = ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[14] = ::g::Fuse::Animations::MixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[54] = ::g::Fuse::Animations::MasterPropertyGet_typeof();
    ::TYPES[19] = ::g::Fuse::Animations::MasterTransform_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(MixerBase_type, interface0));
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(::g::Fuse::Animations::MixerBase, _propHandle), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), uObject_typeof()), offsetof(::g::Fuse::Animations::MixerBase, Masters), 0);
    return type;
}

// protected generated MixerBase() :1623
void MixerBase__ctor__fn(MixerBase* __this)
{
    __this->ctor_();
}

// public Fuse.Animations.IMixerHandle<T> Register<T>(Uno.UX.Property<T> property, Fuse.Animations.MixOp mode) :1627
void MixerBase__Register_fn(MixerBase* __this, uType* __type, ::g::Uno::UX::Property* property, int* mode, uObject** __retval)
{
    *__retval = __this->Register(__type, property, *mode);
}

// public Fuse.Animations.IMixerHandle<Fuse.Transform> RegisterTransform(Fuse.Node element, Fuse.Animations.MixOp mode, [int priority]) :1641
void MixerBase__RegisterTransform_fn(MixerBase* __this, ::g::Fuse::Node* element, int* mode, int* priority, uObject** __retval)
{
    *__retval = __this->RegisterTransform(element, *mode, *priority);
}

// public void Unused(Fuse.Animations.IMixerMaster mb) :1656
void MixerBase__Unused_fn(MixerBase* __this, uObject* mb)
{
    __this->Unused(mb);
}

// protected generated MixerBase() [instance] :1623
void MixerBase::ctor_()
{
    Masters = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[51/*Uno.Collections.Dictionary<object, object>*/]));
    _propHandle = ::g::Fuse::Properties::CreateHandle();
}

// public Fuse.Animations.IMixerHandle<T> Register<T>(Uno.UX.Property<T> property, Fuse.Animations.MixOp mode) [instance] :1627
uObject* MixerBase::Register(uType* __type, ::g::Uno::UX::Property* property, int mode)
{
    uType* __types[] = {
        MixerBase_typeof()->MakeMethod(1, __type->U(0)),
        __type->U(0),
        ::TYPES[8/*Fuse.Animations.MasterBase`1*/]->MakeType(__type->U(0)),
        ::TYPES[52/*Fuse.Animations.IMixerHandle`1*/]->MakeType(__type->U(0)),
        ::TYPES[7/*Fuse.Animations.MixerHandle`1*/]->MakeType(__type->U(0)),
    };
    bool ret1;
    uObject* master;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Masters), property, (void**)(&master), &ret1), ret1))
    {
        master = (::g::Fuse::Animations::MasterProperty*)CreateMaster(__types[0], property, this);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Masters), property, master);
    }

    ::g::Fuse::Animations::MasterBase* masterT = uCast< ::g::Fuse::Animations::MasterBase*>(master, __types[2]);
    return (uObject*)((::g::Fuse::Animations::MixerHandle*)::g::Fuse::Animations::MixerHandle::New1(__types[4], masterT, mode, 0));
}

// public Fuse.Animations.IMixerHandle<Fuse.Transform> RegisterTransform(Fuse.Node element, Fuse.Animations.MixOp mode, [int priority]) [instance] :1641
uObject* MixerBase::RegisterTransform(::g::Fuse::Node* element, int mode, int priority)
{
    uObject* master;

    if (!uPtr(uPtr(element)->Properties())->TryGet(_propHandle, &master))
    {
        master = CreateMasterTransform(element, this);
        uPtr(uPtr(element)->Properties())->Set(_propHandle, master);
    }

    ::g::Fuse::Animations::MasterBase* masterT = uCast< ::g::Fuse::Animations::MasterBase*>(master, ::TYPES[13/*Fuse.Animations.MasterBase<Fuse.Transform>*/]);
    return (uObject*)((::g::Fuse::Animations::MixerHandle*)::g::Fuse::Animations::MixerHandle::New1(::TYPES[14/*Fuse.Animations.MixerHandle<Fuse.Transform>*/], masterT, mode, priority));
}

// public void Unused(Fuse.Animations.IMixerMaster mb) [instance] :1656
void MixerBase::Unused(uObject* mb)
{
    bool ret2;
    uObject* prop = uAs<uObject*>(mb, ::TYPES[54/*Fuse.Animations.MasterPropertyGet*/]);

    if (prop != NULL)
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(Masters), ::g::Fuse::Animations::MasterPropertyGet::GetPropertyObject(uInterface(uPtr(prop), ::TYPES[54/*Fuse.Animations.MasterPropertyGet*/])), &ret2);

    ::g::Fuse::Animations::MasterTransform* trans = uAs< ::g::Fuse::Animations::MasterTransform*>(mb, ::TYPES[19/*Fuse.Animations.MasterTransform*/]);

    if (trans != NULL)
        uPtr(uPtr(uPtr(trans)->Node)->Properties())->Clear(_propHandle);
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(1873)
// ---------------------------------------------------------------------------

// internal sealed class MixerHandle<T> :1873
// {
MixerHandle_type* MixerHandle_typeof()
{
    static uSStrong<MixerHandle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(MixerHandle);
    options.TypeSize = sizeof(MixerHandle_type);
    type = (MixerHandle_type*)uClassType::New("Fuse.Animations.MixerHandle`1", options);
    type->interface0.fp_Unregister = (void(*)(uObject*))MixerHandle__Unregister_fn;
    type->interface0.fp_Set = (void(*)(uObject*, void*, float*))MixerHandle__Set_fn;
    ::STRINGS[5] = uString::Const("invalid MixerHandle.Set post-Unregister");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno");
    ::TYPES[8] = ::g::Fuse::Animations::MasterBase_typeof();
    type->SetPrecalc(
        ::TYPES[8/*Fuse.Animations.MasterBase`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0)), offsetof(MixerHandle_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MixerHandle, _hasValue), 0,
        ::g::Fuse::Animations::MasterBase_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::MixerHandle, Master), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::MixerHandle, Strength), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Fuse::Animations::MixOp_typeof(), offsetof(::g::Fuse::Animations::MixerHandle, _MixOp), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Animations::MixerHandle, _Priority), 0);
    return type;
}

// public MixerHandle(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) :1886
void MixerHandle__ctor__fn(MixerHandle* __this, ::g::Fuse::Animations::MasterBase* master, int* mode, int* priority)
{
    __this->ctor_(master, *mode, *priority);
}

// public bool get_HasValue() :1879
void MixerHandle__get_HasValue_fn(MixerHandle* __this, bool* __retval)
{
    *__retval = __this->HasValue();
}

// public generated Fuse.Animations.MixOp get_MixOp() :1881
void MixerHandle__get_MixOp_fn(MixerHandle* __this, int* __retval)
{
    *__retval = __this->MixOp();
}

// public generated void set_MixOp(Fuse.Animations.MixOp value) :1881
void MixerHandle__set_MixOp_fn(MixerHandle* __this, int* value)
{
    __this->MixOp(*value);
}

// public MixerHandle New(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) :1886
void MixerHandle__New1_fn(uType* __type, ::g::Fuse::Animations::MasterBase* master, int* mode, int* priority, MixerHandle** __retval)
{
    *__retval = MixerHandle::New1(__type, master, *mode, *priority);
}

// public generated int get_Priority() :1883
void MixerHandle__get_Priority_fn(MixerHandle* __this, int* __retval)
{
    *__retval = __this->Priority();
}

// private generated void set_Priority(int value) :1883
void MixerHandle__set_Priority_fn(MixerHandle* __this, int* value)
{
    __this->Priority(*value);
}

// public void Set(T value, float strength) :1902
void MixerHandle__Set_fn(MixerHandle* __this, void* value, float* strength)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Fuse.Animations.MasterBase<T>*/),
    };
    float strength_ = *strength;

    if (__this->Master == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[5/*"invalid Mix...*/], 1, ::STRINGS[3/*"/usr/local/...*/], 1906);
        return;
    }

    __this->_hasValue = true;
    __this->Value() = value;
    __this->Strength = strength_;
    uPtr(__this->Master)->DirtyValue = true;
}

// public void Unregister() :1894
void MixerHandle__Unregister_fn(MixerHandle* __this)
{
    __this->Unregister();
}

// public MixerHandle(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) [instance] :1886
void MixerHandle::ctor_(::g::Fuse::Animations::MasterBase* master, int mode, int priority)
{
    Priority(priority);
    Master = master;
    MixOp(mode);
    uPtr(Master)->Register(this);
}

// public bool get_HasValue() [instance] :1879
bool MixerHandle::HasValue()
{
    return _hasValue;
}

// public generated Fuse.Animations.MixOp get_MixOp() [instance] :1881
int MixerHandle::MixOp()
{
    return _MixOp;
}

// public generated void set_MixOp(Fuse.Animations.MixOp value) [instance] :1881
void MixerHandle::MixOp(int value)
{
    _MixOp = value;
}

// public generated int get_Priority() [instance] :1883
int MixerHandle::Priority()
{
    return _Priority;
}

// private generated void set_Priority(int value) [instance] :1883
void MixerHandle::Priority(int value)
{
    _Priority = value;
}

// public void Unregister() [instance] :1894
void MixerHandle::Unregister()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.MasterBase<T>*/),
        __type->T(0),
    };
    uPtr(Master)->Unregister(this);
    _hasValue = false;
    uPtr(Master)->DirtyValue = true;
    Master = NULL;
}

// public MixerHandle New(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) [static] :1886
MixerHandle* MixerHandle::New1(uType* __type, ::g::Fuse::Animations::MasterBase* master, int mode, int priority)
{
    MixerHandle* obj1 = (MixerHandle*)uNew(__type);
    obj1->ctor_(master, mode, priority);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(1547)
// ---------------------------------------------------------------------------

// public enum MixOp :1547
uEnumType* MixOp_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.MixOp", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Add", 0LL,
        "Weight", 1LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(3319)
// ---------------------------------------------------------------------------

// public sealed class Move :3319
// {
::g::Fuse::Animations::TransformAnimator_type* Move_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.ObjectSize = sizeof(Move);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Move", options);
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Translation_typeof()));
    type->fp_ctor_ = (void*)Move__New1_fn;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Node*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Move__Update_fn;
    ::TYPES[55] = ::g::Fuse::TranslationModes_typeof();
    ::TYPES[56] = ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Translation_typeof());
    ::TYPES[57] = ::g::Fuse::Translation_typeof();
    ::TYPES[27] = ::g::Uno::Float4_typeof();
    type->SetFields(20,
        ::g::Fuse::ITranslationMode_typeof(), offsetof(::g::Fuse::Animations::Move, _relativeTo), 0);
    return type;
}

// public Move() :3321
void Move__ctor_3_fn(Move* __this)
{
    __this->ctor_3();
}

// public Move New() :3321
void Move__New1_fn(Move** __retval)
{
    *__retval = Move::New1();
}

// public Fuse.ITranslationMode get_RelativeTo() :3329
void Move__get_RelativeTo_fn(Move* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.ITranslationMode value) :3330
void Move__set_RelativeTo_fn(Move* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// internal override sealed void Update(Fuse.Node elm, Fuse.Translation t, float4 value) :3333
void Move__Update_fn(Move* __this, ::g::Fuse::Node* elm, ::g::Fuse::Translation* t, ::g::Uno::Float4* value)
{
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->RelativeTo(__this->RelativeTo());
    t->Vector(::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z));
}

// public Move() [instance] :3321
void Move::ctor_3()
{
    _relativeTo = ::g::Fuse::TranslationModes::Local();
    ctor_2();
    Priority(1000);
}

// public Fuse.ITranslationMode get_RelativeTo() [instance] :3329
uObject* Move::RelativeTo()
{
    return _relativeTo;
}

// public void set_RelativeTo(Fuse.ITranslationMode value) [instance] :3330
void Move::RelativeTo(uObject* value)
{
    _relativeTo = value;
}

// public Move New() [static] :3321
Move* Move::New1()
{
    Move* obj1 = (Move*)uNew(Move_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(1936)
// ---------------------------------------------------------------------------

// public sealed class Nothing :1936
// {
::g::Fuse::Animations::Animator_type* Nothing_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(Nothing);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Nothing", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimator_typeof());
    type->fp_ctor_ = (void*)Nothing__New1_fn;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Nothing__CreateState_fn;
    ::TYPES[32] = ::g::Fuse::Animations::AnimatorState_typeof();
    type->SetFields(17);
    return type;
}

// public generated Nothing() :1936
void Nothing__ctor_2_fn(Nothing* __this)
{
    __this->ctor_2();
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :1938
void Nothing__CreateState_fn(Nothing* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    return *__retval = ::g::Fuse::Animations::NothingAnimatorState::New1(__this, p), void();
}

// public generated Nothing New() :1936
void Nothing__New1_fn(Nothing** __retval)
{
    *__retval = Nothing::New1();
}

// public generated Nothing() [instance] :1936
void Nothing::ctor_2()
{
    ctor_1();
}

// public generated Nothing New() [static] :1936
Nothing* Nothing::New1()
{
    Nothing* obj1 = (Nothing*)uNew(Nothing_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(1944)
// ---------------------------------------------------------------------------

// internal sealed class NothingAnimatorState :1944
// {
::g::Fuse::Animations::TrackAnimatorState_type* NothingAnimatorState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(NothingAnimatorState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.NothingAnimatorState", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimatorState_typeof());
    ::TYPES[35] = ::g::Fuse::Animations::TrackAnimator_typeof();
    type->SetFields(6);
    return type;
}

// public NothingAnimatorState(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) :1946
void NothingAnimatorState__ctor_2_fn(NothingAnimatorState* __this, ::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public NothingAnimatorState New(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) :1946
void NothingAnimatorState__New1_fn(::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p, NothingAnimatorState** __retval)
{
    *__retval = NothingAnimatorState::New1(animator, p);
}

// public NothingAnimatorState(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) [instance] :1946
void NothingAnimatorState::ctor_2(::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    ctor_1(animator, p, NULL);
}

// public NothingAnimatorState New(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) [static] :1946
NothingAnimatorState* NothingAnimatorState::New1(::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    NothingAnimatorState* obj1 = (NothingAnimatorState*)uNew(NothingAnimatorState_typeof());
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(1959)
// ---------------------------------------------------------------------------

// public abstract class OpenAnimator :1959
// {
::g::Fuse::Animations::Animator_type* OpenAnimator_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(OpenAnimator);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.OpenAnimator", options);
    type->SetBase(::g::Fuse::Animations::Animator_typeof());
    type->fp_get_AnimatorVariant = (void(*)(::g::Fuse::Animations::Animator*, int*))OpenAnimator__get_AnimatorVariant_fn;
    type->fp_GetDurationWithDelay = (void(*)(::g::Fuse::Animations::Animator*, int*, double*))OpenAnimator__GetDurationWithDelay_fn;
    ::TYPES[31] = ::g::Fuse::Animations::Animator_typeof();
    type->SetFields(3,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::OpenAnimator, _duration), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::OpenAnimator, _hasDuration), 0);
    return type;
}

// internal override sealed Fuse.Animations.AnimatorVariant get_AnimatorVariant() :1963
void OpenAnimator__get_AnimatorVariant_fn(OpenAnimator* __this, int* __retval)
{
    return *__retval = 1, void();
}

// public double get_Duration() :1969
void OpenAnimator__get_Duration_fn(OpenAnimator* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public void set_Duration(double value) :1970
void OpenAnimator__set_Duration_fn(OpenAnimator* __this, double* value)
{
    __this->Duration(*value);
}

// internal double GetDelay(Fuse.Animations.AnimationVariant dir, double totalDuration) :1991
void OpenAnimator__GetDelay_fn(OpenAnimator* __this, int* dir, double* totalDuration, double* __retval)
{
    *__retval = __this->GetDelay(*dir, *totalDuration);
}

// internal override sealed double GetDurationWithDelay(Fuse.Animations.AnimationVariant dir) :1986
void OpenAnimator__GetDurationWithDelay_fn(OpenAnimator* __this, int* dir, double* __retval)
{
    return *__retval = __this->Delay() + __this->Duration(), void();
}

// public bool get_HasDuration() :1984
void OpenAnimator__get_HasDuration_fn(OpenAnimator* __this, bool* __retval)
{
    *__retval = __this->HasDuration();
}

// public double get_Duration() [instance] :1969
double OpenAnimator::Duration()
{
    return _duration;
}

// public void set_Duration(double value) [instance] :1970
void OpenAnimator::Duration(double value)
{
    _duration = value;
    _hasDuration = true;
}

// internal double GetDelay(Fuse.Animations.AnimationVariant dir, double totalDuration) [instance] :1991
double OpenAnimator::GetDelay(int dir, double totalDuration)
{
    return Delay();
}

// public bool get_HasDuration() [instance] :1984
bool OpenAnimator::HasDuration()
{
    return _hasDuration;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(1997)
// ---------------------------------------------------------------------------

// internal abstract class OpenAnimatorState :1997
// {
OpenAnimatorState_type* OpenAnimatorState_typeof()
{
    static uSStrong<OpenAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(OpenAnimatorState);
    options.TypeSize = sizeof(OpenAnimatorState_type);
    type = (OpenAnimatorState_type*)uClassType::New("Fuse.Animations.OpenAnimatorState", options);
    type->SetBase(::g::Fuse::Animations::AnimatorState_typeof());
    type->fp_SeekProgress = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, bool*))OpenAnimatorState__SeekProgress_fn;
    type->fp_SeekTime = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, bool*))OpenAnimatorState__SeekTime_fn;
    ::TYPES[32] = ::g::Fuse::Animations::AnimatorState_typeof();
    ::TYPES[10] = ::g::Uno::Int_typeof();
    ::TYPES[40] = ::g::Fuse::Animations::OpenAnimator_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[21] = ::g::Uno::Float_typeof();
    type->SetFields(3,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::OpenAnimatorState, _seekDone), 0,
        ::g::Fuse::Animations::OpenAnimator_typeof(), offsetof(::g::Fuse::Animations::OpenAnimatorState, Animator), 0);
    return type;
}

// protected OpenAnimatorState(Fuse.Animations.OpenAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Node useNode]) :2002
void OpenAnimatorState__ctor_1_fn(OpenAnimatorState* __this, ::g::Fuse::Animations::OpenAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Node* useNode)
{
    __this->ctor_1(animator, p, useNode);
}

// internal override sealed bool SeekProgress(double progress, double interval, Fuse.Animations.SeekDirection dir, double strength) :2011
void OpenAnimatorState__SeekProgress_fn(OpenAnimatorState* __this, double* progress, double* interval, int* dir, double* strength, bool* __retval)
{
    double progress_ = *progress;
    double interval_ = *interval;
    int dir_ = *dir;
    double strength_ = *strength;
    return *__retval = __this->SeekTime(progress_ * __this->TotalDuration, interval_, dir_, strength_), void();
}

// internal override sealed bool SeekTime(double nominal, double interval, Fuse.Animations.SeekDirection dir, double strength) :2017
void OpenAnimatorState__SeekTime_fn(OpenAnimatorState* __this, double* nominal, double* interval, int* dir, double* strength, bool* __retval)
{
    int dir_ = *dir;
    double nominal_ = *nominal;
    double interval_ = *interval;
    double strength_ = *strength;
    double delay = uPtr(__this->Animator)->GetDelay(__this->Variant, __this->TotalDuration);
    bool on = (dir_ == 0) ? nominal_ > (delay - 9.9999997473787516e-06) : nominal_ > (delay + 9.9999997473787516e-06);

    if (uPtr(__this->Animator)->HasDuration() && (nominal_ > ((delay + uPtr(__this->Animator)->Duration()) - 9.9999997473787516e-06)))
        on = false;

    bool mayEnd = (dir_ == 0) ? nominal_ >= (uPtr(__this->Animator)->GetDurationWithDelay(__this->Variant) - 9.9999997473787516e-06) : nominal_ <= (delay + 9.9999997473787516e-06);

    if (on || !__this->_seekDone)
        __this->_seekDone = __this->Seek(on, (float)interval_, (float)strength_, dir_);

    return *__retval = __this->_seekDone && mayEnd, void();
}

// protected OpenAnimatorState(Fuse.Animations.OpenAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Node useNode]) [instance] :2002
void OpenAnimatorState::ctor_1(::g::Fuse::Animations::OpenAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Node* useNode)
{
    _seekDone = true;
    ctor_(p, useNode);
    Animator = animator;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(2210)
// ---------------------------------------------------------------------------

// internal sealed class Player :2210
// {
uType* Player_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.ObjectSize = sizeof(Player);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.Player", options);
    ::TYPES[58] = ::g::Fuse::Animations::PlayerPart_typeof();
    ::TYPES[10] = ::g::Uno::Int_typeof();
    ::TYPES[39] = ::g::Uno::Delegate_typeof();
    ::TYPES[59] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof());
    ::TYPES[11] = uObject_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[60] = ::g::Fuse::Animations::AnimatorState_typeof()->Array();
    ::TYPES[48] = ::g::Fuse::Node_typeof();
    ::TYPES[61] = ::g::Uno::EventHandler_typeof();
    ::TYPES[50] = ::g::Uno::Action_typeof();
    ::TYPES[62] = ::g::Fuse::Time_typeof();
    ::TYPES[4] = ::g::Uno::Double_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Player, _isDone), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Player, _isStarted), 0,
        ::g::Fuse::Animations::PlayerPart_typeof(), offsetof(::g::Fuse::Animations::Player, _progress), 0,
        ::g::Fuse::Animations::SeekDirection_typeof(), offsetof(::g::Fuse::Animations::Player, _seekDirection), 0,
        ::g::Fuse::Animations::AnimatorState_typeof()->Array(), offsetof(::g::Fuse::Animations::Player, _states), 0,
        ::g::Fuse::Animations::PlayerPart_typeof(), offsetof(::g::Fuse::Animations::Player, _strength), 0,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Fuse::Animations::Player, ProgressUpdated), 0,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Fuse::Animations::Player, StrengthUpdated), 0,
        ::g::Fuse::Animations::TriggerAnimation_typeof(), offsetof(::g::Fuse::Animations::Player, _Animation), 0,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Fuse::Animations::Player, _DoneCallback), 0,
        ::g::Fuse::Animations::PlayMode_typeof(), offsetof(::g::Fuse::Animations::Player, _Mode), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Animations::Player, _Node), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Animations::Player, _Variant), 0);
    return type;
}

// public Player(Fuse.Node elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) :2233
void Player__ctor__fn(Player* __this, ::g::Fuse::Node* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int* variant, int* mode)
{
    __this->ctor_(elm, animation, *variant, *mode);
}

// public generated Fuse.Animations.TriggerAnimation get_Animation() :2216
void Player__get_Animation_fn(Player* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->Animation();
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) :2216
void Player__set_Animation_fn(Player* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->Animation(value);
}

// public double get_AnimatorsDuration() :2249
void Player__get_AnimatorsDuration_fn(Player* __this, double* __retval)
{
    *__retval = __this->AnimatorsDuration();
}

// internal bool get_AnyEffect() :2395
void Player__get_AnyEffect_fn(Player* __this, bool* __retval)
{
    *__retval = __this->AnyEffect();
}

// private void CheckUpdate([bool interval]) :2256
void Player__CheckUpdate_fn(Player* __this, bool* interval)
{
    __this->CheckUpdate(*interval);
}

// private void CheckUpdateAction() :2254
void Player__CheckUpdateAction_fn(Player* __this)
{
    __this->CheckUpdateAction();
}

// public void Disable() :2347
void Player__Disable_fn(Player* __this)
{
    __this->Disable();
}

// private void Done() :2332
void Player__Done_fn(Player* __this)
{
    __this->Done();
}

// public generated Uno.Action<object> get_DoneCallback() :2251
void Player__get_DoneCallback_fn(Player* __this, uDelegate** __retval)
{
    *__retval = __this->DoneCallback();
}

// public generated void set_DoneCallback(Uno.Action<object> value) :2251
void Player__set_DoneCallback_fn(Player* __this, uDelegate* value)
{
    __this->DoneCallback(value);
}

// public void FadeIn(double time) :2469
void Player__FadeIn_fn(Player* __this, double* time)
{
    __this->FadeIn(*time);
}

// public void FadeOut(double time) :2476
void Player__FadeOut_fn(Player* __this, double* time)
{
    __this->FadeOut(*time);
}

// internal bool get_IsSyncState() :2387
void Player__get_IsSyncState_fn(Player* __this, bool* __retval)
{
    *__retval = __this->IsSyncState();
}

// public generated Fuse.Animations.PlayMode get_Mode() :2218
void Player__get_Mode_fn(Player* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// private generated void set_Mode(Fuse.Animations.PlayMode value) :2218
void Player__set_Mode_fn(Player* __this, int* value)
{
    __this->Mode(*value);
}

// public Player New(Fuse.Node elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) :2233
void Player__New1_fn(::g::Fuse::Node* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int* variant, int* mode, Player** __retval)
{
    *__retval = Player::New1(elm, animation, *variant, *mode);
}

// public generated Fuse.Node get_Node() :2215
void Player__get_Node_fn(Player* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// private generated void set_Node(Fuse.Node value) :2215
void Player__set_Node_fn(Player* __this, ::g::Fuse::Node* value)
{
    __this->Node(value);
}

// public void PlayToEnd() :2441
void Player__PlayToEnd_fn(Player* __this)
{
    __this->PlayToEnd();
}

// public void PlayToProgress(double progress) :2432
void Player__PlayToProgress_fn(Player* __this, double* progress)
{
    __this->PlayToProgress(*progress);
}

// public void PlayToStart() :2449
void Player__PlayToStart_fn(Player* __this)
{
    __this->PlayToStart();
}

// public double get_Progress() :2361
void Player__get_Progress_fn(Player* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public double get_RemainTime() :2365
void Player__get_RemainTime_fn(Player* __this, double* __retval)
{
    *__retval = __this->RemainTime();
}

// public void SeekProgress(double progress, [bool triggerUpdate]) :2375
void Player__SeekProgress_fn(Player* __this, double* progress, bool* triggerUpdate)
{
    __this->SeekProgress(*progress, *triggerUpdate);
}

// private void Start() :2295
void Player__Start_fn(Player* __this)
{
    __this->Start();
}

// private Fuse.Animations.AnimatorState[] get_States() :2223
void Player__get_States_fn(Player* __this, uArray** __retval)
{
    *__retval = __this->States();
}

// private void Stop() :2307
void Player__Stop_fn(Player* __this)
{
    __this->Stop();
}

// public double get_Strength() :2461
void Player__get_Strength_fn(Player* __this, double* __retval)
{
    *__retval = __this->Strength();
}

// public void set_Strength(double value) :2462
void Player__set_Strength_fn(Player* __this, double* value)
{
    __this->Strength(*value);
}

// public void TimeChanged() :2243
void Player__TimeChanged_fn(Player* __this)
{
    __this->TimeChanged();
}

// private void Update(object s, object a) :2253
void Player__Update_fn(Player* __this, uObject* s, uObject* a)
{
    __this->Update(s, a);
}

// private bool UpdateStates(bool isInterval) :2401
void Player__UpdateStates_fn(Player* __this, bool* isInterval, bool* __retval)
{
    *__retval = __this->UpdateStates(*isInterval);
}

// public generated Fuse.Animations.AnimationVariant get_Variant() :2217
void Player__get_Variant_fn(Player* __this, int* __retval)
{
    *__retval = __this->Variant();
}

// public generated void set_Variant(Fuse.Animations.AnimationVariant value) :2217
void Player__set_Variant_fn(Player* __this, int* value)
{
    __this->Variant(*value);
}

// public Player(Fuse.Node elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) [instance] :2233
void Player::ctor_(::g::Fuse::Node* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int variant, int mode)
{
    _progress = ::g::Fuse::Animations::PlayerPart::New1(0.0);
    _seekDirection = 1;
    _strength = ::g::Fuse::Animations::PlayerPart::New1(1.0);
    Animation(animation);
    Node(elm);
    Variant(variant);
    Mode(mode);
    TimeChanged();
}

// public generated Fuse.Animations.TriggerAnimation get_Animation() [instance] :2216
::g::Fuse::Animations::TriggerAnimation* Player::Animation()
{
    return _Animation;
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) [instance] :2216
void Player::Animation(::g::Fuse::Animations::TriggerAnimation* value)
{
    _Animation = value;
}

// public double get_AnimatorsDuration() [instance] :2249
double Player::AnimatorsDuration()
{
    return uPtr(_progress)->Duration;
}

// internal bool get_AnyEffect() [instance] :2395
bool Player::AnyEffect()
{
    return (uPtr(_progress)->Current > 0.0) && (uPtr(_strength)->Current > 0.0);
}

// private void CheckUpdate([bool interval]) [instance] :2256
void Player::CheckUpdate(bool interval)
{
    bool running = false;

    if (uPtr(_progress)->Animate)
    {
        running = true;

        if (Mode() == 1)
            uPtr(_progress)->WrapStep();
        else
            uPtr(_progress)->Step();

        if (::g::Uno::Delegate::op_Inequality(ProgressUpdated, NULL))
            uPtr(ProgressUpdated)->InvokeVoid(this);
    }

    if (uPtr(_strength)->Animate)
    {
        running = true;
        uPtr(_strength)->Step();

        if (::g::Uno::Delegate::op_Inequality(StrengthUpdated, NULL))
            uPtr(StrengthUpdated)->InvokeVoid(this);
    }

    bool stable = UpdateStates(interval);

    if (stable && !running)
        Stop();
    else
        Start();

    if (!running)
        Done();
}

// private void CheckUpdateAction() [instance] :2254
void Player::CheckUpdateAction()
{
    CheckUpdate(true);
}

// public void Disable() [instance] :2347
void Player::Disable()
{
    Stop();

    if (_states != NULL)
    {
        for (int i = 0; i < uPtr(_states)->Length(); i++)
            uPtr(uPtr(_states)->Strong< ::g::Fuse::Animations::AnimatorState*>(i))->Disable();

        _states = NULL;
    }
}

// private void Done() [instance] :2332
void Player::Done()
{
    uPtr(_progress)->Animate = false;
    uPtr(_strength)->Animate = false;

    if (!_isDone)
    {
        _isDone = true;

        if (::g::Uno::Delegate::op_Inequality(DoneCallback(), NULL))
            uPtr(DoneCallback())->InvokeVoid(this);
    }
}

// public generated Uno.Action<object> get_DoneCallback() [instance] :2251
uDelegate* Player::DoneCallback()
{
    return _DoneCallback;
}

// public generated void set_DoneCallback(Uno.Action<object> value) [instance] :2251
void Player::DoneCallback(uDelegate* value)
{
    _DoneCallback = value;
}

// public void FadeIn(double time) [instance] :2469
void Player::FadeIn(double time)
{
    uPtr(_strength)->AlterDuration(time, 1.0);
    uPtr(_strength)->PlayToEnd();
    CheckUpdate(false);
}

// public void FadeOut(double time) [instance] :2476
void Player::FadeOut(double time)
{
    uPtr(_strength)->AlterDuration(time, 1.0);
    uPtr(_strength)->PlayToStart();
    CheckUpdate(false);
}

// internal bool get_IsSyncState() [instance] :2387
bool Player::IsSyncState()
{
    return (uPtr(_progress)->Current == 0.0) || (uPtr(_progress)->Progress() == 1.0);
}

// public generated Fuse.Animations.PlayMode get_Mode() [instance] :2218
int Player::Mode()
{
    return _Mode;
}

// private generated void set_Mode(Fuse.Animations.PlayMode value) [instance] :2218
void Player::Mode(int value)
{
    _Mode = value;
}

// public generated Fuse.Node get_Node() [instance] :2215
::g::Fuse::Node* Player::Node()
{
    return _Node;
}

// private generated void set_Node(Fuse.Node value) [instance] :2215
void Player::Node(::g::Fuse::Node* value)
{
    _Node = value;
}

// public void PlayToEnd() [instance] :2441
void Player::PlayToEnd()
{
    _seekDirection = 0;
    uPtr(_progress)->PlayToEnd();
    _isDone = false;
    CheckUpdate(false);
}

// public void PlayToProgress(double progress) [instance] :2432
void Player::PlayToProgress(double progress)
{
    if (progress != uPtr(_progress)->Progress())
        _seekDirection = ((progress > uPtr(_progress)->Progress()) ? 0 : 1);

    uPtr(_progress)->PlayToProgress(progress);
    _isDone = false;
    CheckUpdate(false);
}

// public void PlayToStart() [instance] :2449
void Player::PlayToStart()
{
    _seekDirection = 1;
    uPtr(_progress)->PlayToStart();
    _isDone = false;
    CheckUpdate(false);
}

// public double get_Progress() [instance] :2361
double Player::Progress()
{
    return uPtr(_progress)->Progress();
}

// public double get_RemainTime() [instance] :2365
double Player::RemainTime()
{
    if (uPtr(_progress)->IsProgress || (uPtr(_progress)->Duration < 9.9999997473787516e-06))
        return 0.0;

    return (Variant() == 0) ? uPtr(_progress)->Duration - uPtr(_progress)->Current : uPtr(_progress)->Current;
}

// public void SeekProgress(double progress, [bool triggerUpdate]) [instance] :2375
void Player::SeekProgress(double progress, bool triggerUpdate)
{
    uPtr(_progress)->SeekProgress(progress);
    _isDone = true;
    CheckUpdate(false);

    if (triggerUpdate && ::g::Uno::Delegate::op_Inequality(ProgressUpdated, NULL))
        uPtr(ProgressUpdated)->InvokeVoid(this);
}

// private void Start() [instance] :2295
void Player::Start()
{
    if (!_isStarted)
    {
        _isStarted = true;

        if (Node() != NULL)
            uPtr(Node())->add_Update(uDelegate::New(::TYPES[61/*Uno.EventHandler*/], (void*)Player__Update_fn, this));
        else
            ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[50/*Uno.Action*/], (void*)Player__CheckUpdateAction_fn, this), 0);
    }
}

// private Fuse.Animations.AnimatorState[] get_States() [instance] :2223
uArray* Player::States()
{
    if (_states == NULL)
        _states = uPtr(Animation())->CreateAnimatorsState(Variant(), Node());

    return _states;
}

// private void Stop() [instance] :2307
void Player::Stop()
{
    if (_isStarted)
    {
        _isStarted = false;

        if (Node() != NULL)
            uPtr(Node())->remove_Update(uDelegate::New(::TYPES[61/*Uno.EventHandler*/], (void*)Player__Update_fn, this));
        else
            ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[50/*Uno.Action*/], (void*)Player__CheckUpdateAction_fn, this), 0);

        if (!AnyEffect())
            Disable();
    }
}

// public double get_Strength() [instance] :2461
double Player::Strength()
{
    return uPtr(_strength)->Progress();
}

// public void set_Strength(double value) [instance] :2462
void Player::Strength(double value)
{
    uPtr(_strength)->SeekProgress(value);
    CheckUpdate(false);
}

// public void TimeChanged() [instance] :2243
void Player::TimeChanged()
{
    uPtr(_progress)->AlterDuration(uPtr(Animation())->GetAnimatorsDuration(Variant()), uPtr(Animation())->GetTimeMultiplier(Variant()));
}

// private void Update(object s, object a) [instance] :2253
void Player::Update(uObject* s, uObject* a)
{
    CheckUpdate(true);
}

// private bool UpdateStates(bool isInterval) [instance] :2401
bool Player::UpdateStates(bool isInterval)
{
    bool allStable = true;
    double interval = isInterval ? ::g::Fuse::Time::FrameInterval() * uPtr(_progress)->TimeMultiplier() : 0.0;

    if (_seekDirection == 1)
        interval = -interval;

    for (int i = 0; i < uPtr(States())->Length(); ++i)
    {
        ::g::Fuse::Animations::AnimatorState* s = uPtr(States())->Strong< ::g::Fuse::Animations::AnimatorState*>(i);
        bool stable;

        if (uPtr(_progress)->IsProgress)
            stable = uPtr(s)->SeekProgress(uPtr(_progress)->Current, interval, _seekDirection, uPtr(_strength)->Progress());
        else
            stable = s->SeekTime(uPtr(_progress)->Current, interval, _seekDirection, uPtr(_strength)->Progress());

        allStable = allStable && stable;
    }

    return allStable;
}

// public generated Fuse.Animations.AnimationVariant get_Variant() [instance] :2217
int Player::Variant()
{
    return _Variant;
}

// public generated void set_Variant(Fuse.Animations.AnimationVariant value) [instance] :2217
void Player::Variant(int value)
{
    _Variant = value;
}

// public Player New(Fuse.Node elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) [static] :2233
Player* Player::New1(::g::Fuse::Node* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int variant, int mode)
{
    Player* obj1 = (Player*)uNew(Player_typeof());
    obj1->ctor_(elm, animation, variant, mode);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(2063)
// ---------------------------------------------------------------------------

// internal sealed class PlayerPart :2063
// {
uType* PlayerPart_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(PlayerPart);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.PlayerPart", options);
    ::TYPES[62] = ::g::Fuse::Time_typeof();
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, _stepTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, _timeMultiplier), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Animate), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Current), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Duration), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, IsProgress), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Source), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, SourceTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Target), 0);
    return type;
}

// public PlayerPart([double currentProgress]) :2073
void PlayerPart__ctor__fn(PlayerPart* __this, double* currentProgress)
{
    __this->ctor_(*currentProgress);
}

// public void AlterDuration(double t, double timeMult) :2198
void PlayerPart__AlterDuration_fn(PlayerPart* __this, double* t, double* timeMult)
{
    __this->AlterDuration(*t, *timeMult);
}

// private void MarkSource(bool isAnimating) :2105
void PlayerPart__MarkSource_fn(PlayerPart* __this, bool* isAnimating)
{
    __this->MarkSource(*isAnimating);
}

// public PlayerPart New([double currentProgress]) :2073
void PlayerPart__New1_fn(double* currentProgress, PlayerPart** __retval)
{
    *__retval = PlayerPart::New1(*currentProgress);
}

// public void PlayToEnd() :2117
void PlayerPart__PlayToEnd_fn(PlayerPart* __this)
{
    __this->PlayToEnd();
}

// public void PlayToProgress(double progress) :2079
void PlayerPart__PlayToProgress_fn(PlayerPart* __this, double* progress)
{
    __this->PlayToProgress(*progress);
}

// public void PlayToStart() :2122
void PlayerPart__PlayToStart_fn(PlayerPart* __this)
{
    __this->PlayToStart();
}

// public double get_Progress() :2188
void PlayerPart__get_Progress_fn(PlayerPart* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public void SeekProgress(double p) :2170
void PlayerPart__SeekProgress_fn(PlayerPart* __this, double* p)
{
    __this->SeekProgress(*p);
}

// public void Step() :2128
void PlayerPart__Step_fn(PlayerPart* __this)
{
    __this->Step();
}

// public double get_TimeMultiplier() :2207
void PlayerPart__get_TimeMultiplier_fn(PlayerPart* __this, double* __retval)
{
    *__retval = __this->TimeMultiplier();
}

// public void WrapStep() :2149
void PlayerPart__WrapStep_fn(PlayerPart* __this)
{
    __this->WrapStep();
}

// public PlayerPart([double currentProgress]) [instance] :2073
void PlayerPart::ctor_(double currentProgress)
{
    _timeMultiplier = 1.0;
    IsProgress = true;
    Current = currentProgress;
}

// public void AlterDuration(double t, double timeMult) [instance] :2198
void PlayerPart::AlterDuration(double t, double timeMult)
{
    _timeMultiplier = timeMult;
    MarkSource(Animate);
    double p = Progress();
    Duration = t;
    SeekProgress(p);
}

// private void MarkSource(bool isAnimating) [instance] :2105
void PlayerPart::MarkSource(bool isAnimating)
{
    Source = Current;

    if (isAnimating && (_stepTime < ::g::Fuse::Time::FrameTime()))
        SourceTime = (::g::Fuse::Time::FrameTime() - (::g::Fuse::Time::FrameInterval() * _timeMultiplier));
    else
        SourceTime = ::g::Fuse::Time::FrameTime();
}

// public void PlayToEnd() [instance] :2117
void PlayerPart::PlayToEnd()
{
    PlayToProgress(1.0);
}

// public void PlayToProgress(double progress) [instance] :2079
void PlayerPart::PlayToProgress(double progress)
{
    bool nIsProgress;
    double nTarget;

    if (Duration < 9.9999997473787516e-06)
    {
        nIsProgress = true;
        nTarget = progress;
    }
    else
    {
        nIsProgress = false;
        nTarget = progress * Duration;
    }

    if (((nIsProgress == IsProgress) && (nTarget == Target)) && Animate)
        return;

    MarkSource(Animate);
    Animate = true;
    IsProgress = nIsProgress;
    Target = nTarget;
}

// public void PlayToStart() [instance] :2122
void PlayerPart::PlayToStart()
{
    PlayToProgress(0.0);
}

// public double get_Progress() [instance] :2188
double PlayerPart::Progress()
{
    if (IsProgress)
        return Current;
    else
        return ::g::Uno::Math::Clamp(Current / Duration, 0.0, 1.0);
}

// public void SeekProgress(double p) [instance] :2170
void PlayerPart::SeekProgress(double p)
{
    p = ::g::Uno::Math::Clamp(p, 0.0, 1.0);
    Animate = false;

    if (Duration < 9.9999997473787516e-06)
    {
        IsProgress = true;
        Current = p;
    }
    else
    {
        IsProgress = false;
        Current = (p * Duration);
    }
}

// public void Step() [instance] :2128
void PlayerPart::Step()
{
    _stepTime = ::g::Fuse::Time::FrameTime();
    double elapsed = (::g::Fuse::Time::FrameTime() - SourceTime) * _timeMultiplier;

    if (Target > Source)
        Current = (IsProgress ? 1.0 : ::g::Uno::Math::Min(elapsed + Source, Duration));
    else
        Current = (IsProgress ? 0.0 : ::g::Uno::Math::Max(Source - elapsed, 0.0));

    if (((Target >= Source) && (Current >= Target)) || ((Target <= Source) && (Current <= Target)))
    {
        Current = Target;
        Animate = false;
    }
}

// public double get_TimeMultiplier() [instance] :2207
double PlayerPart::TimeMultiplier()
{
    return _timeMultiplier;
}

// public void WrapStep() [instance] :2149
void PlayerPart::WrapStep()
{
    if (IsProgress || ((Target > 0.0) && (Target < 1.0)))
    {
        Step();
        return;
    }

    _stepTime = ::g::Fuse::Time::FrameTime();
    double elapsed = (::g::Fuse::Time::FrameTime() - SourceTime) * _timeMultiplier;

    if (Target > Source)
        Current = ::g::Uno::Math::Mod(elapsed + Source, Duration);
    else
        Current = ::g::Uno::Math::Mod(Source - elapsed, Duration);
}

// public PlayerPart New([double currentProgress]) [static] :2073
PlayerPart* PlayerPart::New1(double currentProgress)
{
    PlayerPart* obj1 = (PlayerPart*)uNew(PlayerPart_typeof());
    obj1->ctor_(currentProgress);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(3460)
// ---------------------------------------------------------------------------

// public enum PlayMode :3460
uEnumType* PlayMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.PlayMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Once", 0LL,
        "Wrap", 1LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(2502)
// ---------------------------------------------------------------------------

// public sealed class Resize :2502
// {
::g::Fuse::Animations::Animator_type* Resize_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.ObjectSize = sizeof(Resize);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Resize", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimator_typeof());
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Resize__CreateState_fn;
    ::TYPES[32] = ::g::Fuse::Animations::AnimatorState_typeof();
    type->SetFields(17,
        ::g::Fuse::Animations::IResizeMode_typeof(), offsetof(::g::Fuse::Animations::Resize, _resizeMode), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Animations::Resize, _RelativeNode), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Animations::Resize, _Target), 0);
    return type;
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :2533
void Resize__CreateState_fn(Resize* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    return *__retval = ::g::Fuse::Animations::ResizeAnimatorState::New1(__this, p), void();
}

// public generated Fuse.Node get_RelativeNode() :2506
void Resize__get_RelativeNode_fn(Resize* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->RelativeNode();
}

// public generated void set_RelativeNode(Fuse.Node value) :2506
void Resize__set_RelativeNode_fn(Resize* __this, ::g::Fuse::Node* value)
{
    __this->RelativeNode(value);
}

// public Fuse.Animations.IResizeMode get_RelativeTo() :2511
void Resize__get_RelativeTo_fn(Resize* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.Animations.IResizeMode value) :2512
void Resize__set_RelativeTo_fn(Resize* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// public generated Fuse.Node get_Target() :2504
void Resize__get_Target_fn(Resize* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Node value) :2504
void Resize__set_Target_fn(Resize* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// public generated Fuse.Node get_RelativeNode() [instance] :2506
::g::Fuse::Node* Resize::RelativeNode()
{
    return _RelativeNode;
}

// public generated void set_RelativeNode(Fuse.Node value) [instance] :2506
void Resize::RelativeNode(::g::Fuse::Node* value)
{
    _RelativeNode = value;
}

// public Fuse.Animations.IResizeMode get_RelativeTo() [instance] :2511
uObject* Resize::RelativeTo()
{
    return _resizeMode;
}

// public void set_RelativeTo(Fuse.Animations.IResizeMode value) [instance] :2512
void Resize::RelativeTo(uObject* value)
{
    _resizeMode = value;
}

// public generated Fuse.Node get_Target() [instance] :2504
::g::Fuse::Node* Resize::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Node value) [instance] :2504
void Resize::Target(::g::Fuse::Node* value)
{
    _Target = value;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(2539)
// ---------------------------------------------------------------------------

// internal sealed class ResizeAnimatorState :2539
// {
::g::Fuse::Animations::TrackAnimatorState_type* ResizeAnimatorState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.ObjectSize = sizeof(ResizeAnimatorState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.ResizeAnimatorState", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimatorState_typeof());
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))ResizeAnimatorState__Disable_fn;
    type->fp_SeekValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, ::g::Uno::Float4*, float*))ResizeAnimatorState__SeekValue_fn;
    ::STRINGS[6] = uString::Const("Resize started without a Target node");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno");
    ::STRINGS[7] = uString::Const(".ctor");
    ::STRINGS[8] = uString::Const("Resize started without as RelativeTo");
    ::TYPES[35] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[63] = ::g::Fuse::Animations::Resize_typeof();
    ::TYPES[64] = ::g::Fuse::Animations::IResize_typeof();
    ::TYPES[32] = ::g::Fuse::Animations::AnimatorState_typeof();
    ::TYPES[11] = uObject_typeof();
    ::TYPES[10] = ::g::Uno::Int_typeof();
    ::TYPES[65] = ::g::Fuse::ITransformMode_typeof();
    ::TYPES[66] = ::g::Fuse::IActualPlacement_typeof();
    ::TYPES[67] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[27] = ::g::Uno::Float4_typeof();
    type->SetFields(6,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _lastStrength), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _lastValue), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _relativeNode), 0,
        ::g::Fuse::Animations::IResizeMode_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _relativeTo), 0,
        ::g::Fuse::Animations::Resize_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _resize), 0,
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _target), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _valid), 0);
    return type;
}

// public ResizeAnimatorState(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) :2547
void ResizeAnimatorState__ctor_2_fn(ResizeAnimatorState* __this, ::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(r, p);
}

// public override sealed void Disable() :2581
void ResizeAnimatorState__Disable_fn(ResizeAnimatorState* __this)
{
    ::g::Fuse::Animations::AnimatorState__Disable_fn(__this);

    if (!__this->_valid)
        return;

    uObject* e = uAs<uObject*>(__this->_target, ::TYPES[66/*Fuse.IActualPlacement*/]);

    if (e != NULL)
        ::g::Fuse::IActualPlacement::remove_Placed(uInterface(uPtr(e), ::TYPES[66/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[67/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, __this));

    if ((::g::Fuse::ITransformMode::Flags(uInterface(uPtr(__this->_relativeTo), ::TYPES[65/*Fuse.ITransformMode*/])) & 1) == 1)
    {
        uObject* elm = uAs<uObject*>(__this->_relativeNode, ::TYPES[66/*Fuse.IActualPlacement*/]);

        if (elm != NULL)
            ::g::Fuse::IActualPlacement::remove_Placed(uInterface(uPtr(elm), ::TYPES[66/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[67/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, __this));
    }
}

// public ResizeAnimatorState New(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) :2547
void ResizeAnimatorState__New1_fn(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p, ResizeAnimatorState** __retval)
{
    *__retval = ResizeAnimatorState::New1(r, p);
}

// private void OnPlaced(object s, object a) :2623
void ResizeAnimatorState__OnPlaced_fn(ResizeAnimatorState* __this, uObject* s, uObject* a)
{
    __this->OnPlaced(s, a);
}

// protected override sealed void SeekValue(float4 value, float strength) :2601
void ResizeAnimatorState__SeekValue_fn(ResizeAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
    float strength_ = *strength;
    ::g::Uno::Float4 value_ = *value;
    __this->_lastStrength = strength_;
    __this->_lastValue = value_;
    __this->Update(value_, strength_);
}

// private void Update(float4 value, float strength) :2608
void ResizeAnimatorState__Update_fn(ResizeAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
    __this->Update(*value, *strength);
}

// public ResizeAnimatorState(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) [instance] :2547
void ResizeAnimatorState::ctor_2(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p)
{
    ::g::Fuse::Node* ind1;
    _valid = true;
    ctor_1(r, p, uPtr(r)->Target());
    _resize = r;
    _target = uAs<uObject*>(Node, ::TYPES[64/*Fuse.Animations.IResize*/]);

    if (_target == NULL)
    {
        ::g::Fuse::Diagnostics::Error(::STRINGS[6/*"Resize star...*/], r, ::STRINGS[3/*"/usr/local/...*/], 2553, ::STRINGS[7/*".ctor"*/]);
        _valid = false;
        return;
    }

    _relativeTo = r->RelativeTo();

    if (_relativeTo == NULL)
    {
        ::g::Fuse::Diagnostics::Error(::STRINGS[8/*"Resize star...*/], r, ::STRINGS[3/*"/usr/local/...*/], 2561, ::STRINGS[7/*".ctor"*/]);
        _valid = false;
        return;
    }

    _relativeNode = (ind1 = uPtr(_resize)->RelativeNode(), ((ind1 != NULL) ? ind1 : (::g::Fuse::Node*)Node));

    if ((::g::Fuse::ITransformMode::Flags(uInterface(uPtr(_relativeTo), ::TYPES[65/*Fuse.ITransformMode*/])) & 1) == 1)
    {
        uObject* elm = uAs<uObject*>(_relativeNode, ::TYPES[66/*Fuse.IActualPlacement*/]);

        if (elm != NULL)
            ::g::Fuse::IActualPlacement::add_Placed(uInterface(uPtr(elm), ::TYPES[66/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[67/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, this));
    }

    uObject* e = uAs<uObject*>(_target, ::TYPES[66/*Fuse.IActualPlacement*/]);

    if (e != NULL)
        ::g::Fuse::IActualPlacement::add_Placed(uInterface(uPtr(e), ::TYPES[66/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[67/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, this));
}

// private void OnPlaced(object s, object a) [instance] :2623
void ResizeAnimatorState::OnPlaced(uObject* s, uObject* a)
{
    Update(_lastValue, _lastStrength);
}

// private void Update(float4 value, float strength) [instance] :2608
void ResizeAnimatorState::Update(::g::Uno::Float4 value, float strength)
{
    if (!_valid)
        return;

    ::g::Uno::Float2 baseSize;
    ::g::Uno::Float2 deltaSize;

    if (::g::Fuse::Animations::IResizeMode::GetSizeChange(uInterface(uPtr(_relativeTo), ::g::Fuse::Animations::IResizeMode_typeof()), Node, _relativeNode, &baseSize, &deltaSize))
    {
        ::g::Uno::Float2 sz = ::g::Uno::Float2__op_Addition2(baseSize, ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Multiply2(deltaSize, ::g::Uno::Float2__New2(value.X, value.Y)), strength));
        ::g::Fuse::Animations::IResize::SetSize(uInterface(uPtr(_target), ::TYPES[64/*Fuse.Animations.IResize*/]), sz);
    }
}

// public ResizeAnimatorState New(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) [static] :2547
ResizeAnimatorState* ResizeAnimatorState::New1(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p)
{
    ResizeAnimatorState* obj2 = (ResizeAnimatorState*)uNew(ResizeAnimatorState_typeof());
    obj2->ctor_2(r, p);
    return obj2;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(3340)
// ---------------------------------------------------------------------------

// public sealed class Rotate :3340
// {
::g::Fuse::Animations::TransformAnimator_type* Rotate_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.ObjectSize = sizeof(Rotate);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Rotate", options);
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Rotation_typeof()));
    type->fp_ctor_ = (void*)Rotate__New1_fn;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Node*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Rotate__Update_fn;
    ::TYPES[68] = ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Rotation_typeof());
    ::TYPES[69] = ::g::Fuse::Rotation_typeof();
    ::TYPES[27] = ::g::Uno::Float4_typeof();
    type->SetFields(20);
    return type;
}

// public Rotate() :3342
void Rotate__ctor_3_fn(Rotate* __this)
{
    __this->ctor_3();
}

// public float get_Degrees() :3349
void Rotate__get_Degrees_fn(Rotate* __this, float* __retval)
{
    *__retval = __this->Degrees();
}

// public void set_Degrees(float value) :3350
void Rotate__set_Degrees_fn(Rotate* __this, float* value)
{
    __this->Degrees(*value);
}

// public float get_DegreesZ() :3367
void Rotate__get_DegreesZ_fn(Rotate* __this, float* __retval)
{
    *__retval = __this->DegreesZ();
}

// public void set_DegreesZ(float value) :3368
void Rotate__set_DegreesZ_fn(Rotate* __this, float* value)
{
    __this->DegreesZ(*value);
}

// public Rotate New() :3342
void Rotate__New1_fn(Rotate** __retval)
{
    *__retval = Rotate::New1();
}

// internal override sealed void Update(Fuse.Node elm, Fuse.Rotation t, float4 value) :3371
void Rotate__Update_fn(Rotate* __this, ::g::Fuse::Node* elm, ::g::Fuse::Rotation* t, ::g::Uno::Float4* value)
{
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->EulerAngle(::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z));
}

// public Rotate() [instance] :3342
void Rotate::ctor_3()
{
    ctor_2();
    Priority(3000);
}

// public float get_Degrees() [instance] :3349
float Rotate::Degrees()
{
    return DegreesZ();
}

// public void set_Degrees(float value) [instance] :3350
void Rotate::Degrees(float value)
{
    DegreesZ(value);
}

// public float get_DegreesZ() [instance] :3367
float Rotate::DegreesZ()
{
    return ::g::Uno::Math::RadiansToDegrees1(Z());
}

// public void set_DegreesZ(float value) [instance] :3368
void Rotate::DegreesZ(float value)
{
    Z(::g::Uno::Math::DegreesToRadians1(value));
}

// public Rotate New() [static] :3342
Rotate* Rotate::New1()
{
    Rotate* obj1 = (Rotate*)uNew(Rotate_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(3377)
// ---------------------------------------------------------------------------

// public sealed class Scale :3377
// {
::g::Fuse::Animations::TransformAnimator_type* Scale_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.ObjectSize = sizeof(Scale);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Scale", options);
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Scaling_typeof()));
    type->fp_ctor_ = (void*)Scale__New1_fn;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Node*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Scale__Update_fn;
    ::TYPES[70] = ::g::Fuse::ScalingModes_typeof();
    ::TYPES[71] = ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Scaling_typeof());
    ::TYPES[35] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[72] = ::g::Fuse::Scaling_typeof();
    ::TYPES[27] = ::g::Uno::Float4_typeof();
    type->SetFields(20,
        ::g::Fuse::IScalingMode_typeof(), offsetof(::g::Fuse::Animations::Scale, _relativeTo), 0);
    return type;
}

// public Scale() :3386
void Scale__ctor_3_fn(Scale* __this)
{
    __this->ctor_3();
}

// public float get_Factor() :3394
void Scale__get_Factor_fn(Scale* __this, float* __retval)
{
    *__retval = __this->Factor();
}

// public void set_Factor(float value) :3395
void Scale__set_Factor_fn(Scale* __this, float* value)
{
    __this->Factor(*value);
}

// public Scale New() :3386
void Scale__New1_fn(Scale** __retval)
{
    *__retval = Scale::New1();
}

// public Fuse.IScalingMode get_RelativeTo() :3382
void Scale__get_RelativeTo_fn(Scale* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.IScalingMode value) :3383
void Scale__set_RelativeTo_fn(Scale* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// internal override sealed void Update(Fuse.Node elm, Fuse.Scaling t, float4 value) :3398
void Scale__Update_fn(Scale* __this, ::g::Fuse::Node* elm, ::g::Fuse::Scaling* t, ::g::Uno::Float4* value)
{
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->RelativeTo(__this->RelativeTo());
    t->Vector(::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z));
}

// public Scale() [instance] :3386
void Scale::ctor_3()
{
    _relativeTo = ::g::Fuse::ScalingModes::Identity();
    ctor_2();
    Priority(2000);
    _vectorValue = ::g::Uno::Float4__New1(1.0f);
}

// public float get_Factor() [instance] :3394
float Scale::Factor()
{
    return X();
}

// public void set_Factor(float value) [instance] :3395
void Scale::Factor(float value)
{
    _vectorValue = ::g::Uno::Float4__New1(value);
}

// public Fuse.IScalingMode get_RelativeTo() [instance] :3382
uObject* Scale::RelativeTo()
{
    return _relativeTo;
}

// public void set_RelativeTo(Fuse.IScalingMode value) [instance] :3383
void Scale::RelativeTo(uObject* value)
{
    _relativeTo = value;
}

// public Scale New() [static] :3386
Scale* Scale::New1()
{
    Scale* obj1 = (Scale*)uNew(Scale_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(46)
// -------------------------------------------------------------------------

// internal enum SeekDirection :46
uEnumType* SeekDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.SeekDirection", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(3853)
// ---------------------------------------------------------------------------

// public enum TriggerAnimationState.SeekFlags :3853
uEnumType* TriggerAnimationState__SeekFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.TriggerAnimationState.SeekFlags", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "ForcePlayer", 1LL,
        "BypassUpdate", 2LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(3405)
// ---------------------------------------------------------------------------

// public sealed class Skew :3405
// {
::g::Fuse::Animations::TransformAnimator_type* Skew_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.ObjectSize = sizeof(Skew);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Skew", options);
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Shear_typeof()));
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Node*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Skew__Update_fn;
    ::TYPES[73] = ::g::Fuse::Shear_typeof();
    ::TYPES[27] = ::g::Uno::Float4_typeof();
    type->SetFields(20);
    return type;
}

// internal override sealed void Update(Fuse.Node elm, Fuse.Shear t, float4 value) :3412
void Skew__Update_fn(Skew* __this, ::g::Fuse::Node* elm, ::g::Fuse::Shear* t, ::g::Uno::Float4* value)
{
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->Vector(::g::Uno::Float2__New2(value_.X, value_.Y));
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(2636)
// ---------------------------------------------------------------------------

// public sealed class Spin :2636
// {
::g::Fuse::Animations::Animator_type* Spin_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Spin);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Spin", options);
    type->SetBase(::g::Fuse::Animations::OpenAnimator_typeof());
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Spin__CreateState_fn;
    ::TYPES[32] = ::g::Fuse::Animations::AnimatorState_typeof();
    type->SetFields(5,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Spin, _hertz), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Animations::Spin, _Target), 0);
    return type;
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :2652
void Spin__CreateState_fn(Spin* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    return *__retval = ::g::Fuse::Animations::SpinState::New1(__this, p), void();
}

// public double get_Frequency() :2648
void Spin__get_Frequency_fn(Spin* __this, double* __retval)
{
    *__retval = __this->Frequency();
}

// public void set_Frequency(double value) :2649
void Spin__set_Frequency_fn(Spin* __this, double* value)
{
    __this->Frequency(*value);
}

// public generated Fuse.Node get_Target() :2643
void Spin__get_Target_fn(Spin* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Node value) :2643
void Spin__set_Target_fn(Spin* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// public double get_Frequency() [instance] :2648
double Spin::Frequency()
{
    return _hertz;
}

// public void set_Frequency(double value) [instance] :2649
void Spin::Frequency(double value)
{
    _hertz = value;
}

// public generated Fuse.Node get_Target() [instance] :2643
::g::Fuse::Node* Spin::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Node value) [instance] :2643
void Spin::Target(::g::Fuse::Node* value)
{
    _Target = value;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(2659)
// ---------------------------------------------------------------------------

// internal sealed class SpinState :2659
// {
::g::Fuse::Animations::OpenAnimatorState_type* SpinState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::OpenAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(SpinState);
    options.TypeSize = sizeof(::g::Fuse::Animations::OpenAnimatorState_type);
    type = (::g::Fuse::Animations::OpenAnimatorState_type*)uClassType::New("Fuse.Animations.SpinState", options);
    type->SetBase(::g::Fuse::Animations::OpenAnimatorState_typeof());
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))SpinState__Disable_fn;
    type->fp_Seek = (void(*)(::g::Fuse::Animations::OpenAnimatorState*, bool*, float*, float*, int*, bool*))SpinState__Seek_fn;
    ::STRINGS[4] = uString::Const("Invalid seek");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno");
    ::TYPES[40] = ::g::Fuse::Animations::OpenAnimator_typeof();
    ::TYPES[74] = ::g::Fuse::Animations::Spin_typeof();
    ::TYPES[31] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[32] = ::g::Fuse::Animations::AnimatorState_typeof();
    ::TYPES[4] = ::g::Uno::Double_typeof();
    ::TYPES[69] = ::g::Fuse::Rotation_typeof();
    ::TYPES[21] = ::g::Uno::Float_typeof();
    ::TYPES[47] = ::g::Fuse::Transform_typeof();
    type->SetFields(5,
        ::g::Fuse::Animations::Spin_typeof(), offsetof(::g::Fuse::Animations::SpinState, Animator1), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::SpinState, degrees), 0,
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof()), offsetof(::g::Fuse::Animations::SpinState, mixHandle), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::Fuse::Animations::SpinState, transform), 0);
    return type;
}

// public SpinState(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) :2665
void SpinState__ctor_2_fn(SpinState* __this, ::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :2675
void SpinState__Disable_fn(SpinState* __this)
{
    if (__this->mixHandle == NULL)
        return;

    __this->degrees = 0.0;
    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), ::TYPES[53/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]));
    __this->mixHandle = NULL;
}

// public SpinState New(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) :2665
void SpinState__New1_fn(::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p, SpinState** __retval)
{
    *__retval = SpinState::New1(animator, p);
}

// protected override sealed bool Seek(bool on, float interval, float strength, Fuse.Animations.SeekDirection dir) :2685
void SpinState__Seek_fn(SpinState* __this, bool* on, float* interval, float* strength, int* dir, bool* __retval)
{
    float interval_ = *interval;
    bool on_ = *on;
    float strength_ = *strength;

    if ((__this->mixHandle == NULL) || (__this->transform == NULL))
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[4/*"Invalid seek"*/], 1, ::STRINGS[3/*"/usr/local/...*/], 2689);
        return *__retval = true, void();
    }

    bool done = false;
    double oldDegrees = __this->degrees;
    __this->degrees = (__this->degrees + ((double)(interval_ * 360.0f) * uPtr(__this->Animator1)->Frequency()));

    if (on_)
        __this->degrees = ::g::Uno::Math::Mod(__this->degrees, 360.0);
    else if ((((oldDegrees <= 9.9999997473787516e-06) || (__this->degrees <= 9.9999997473787516e-06)) || (oldDegrees >= 360.0)) || (__this->degrees >= 360.0))
    {
        __this->degrees = 0.0;
        done = true;
    }

    uPtr(__this->transform)->Degrees((float)__this->degrees);
    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), ::TYPES[53/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]), __this->transform, uCRef(strength_));
    return *__retval = done, void();
}

// public SpinState(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) [instance] :2665
void SpinState::ctor_2(::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    transform = ::g::Fuse::Rotation::New1();
    ctor_1(animator, p, uPtr(animator)->Target());
    Animator1 = animator;
    mixHandle = ::g::Fuse::Animations::IMixer::RegisterTransform(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[36/*Fuse.Animations.IMixer*/]), Node, uPtr(Animator1)->MixOp(), 3000);
}

// public SpinState New(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) [static] :2665
SpinState* SpinState::New1(::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    SpinState* obj1 = (SpinState*)uNew(SpinState_typeof());
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(2943)
// ---------------------------------------------------------------------------

// public abstract class TrackAnimator :2943
// {
::g::Fuse::Animations::Animator_type* TrackAnimator_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(TrackAnimator);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.TrackAnimator", options);
    type->SetBase(::g::Fuse::Animations::Animator_typeof());
    type->fp_get_AnimatorVariant = (void(*)(::g::Fuse::Animations::Animator*, int*))TrackAnimator__get_AnimatorVariant_fn;
    type->fp_GetDurationWithDelay = (void(*)(::g::Fuse::Animations::Animator*, int*, double*))TrackAnimator__GetDurationWithDelay_fn;
    ::TYPES[75] = ::g::Fuse::Animations::TrackProvider_typeof();
    ::TYPES[76] = ::g::Fuse::Animations::EasingTrack_typeof();
    ::TYPES[10] = ::g::Uno::Int_typeof();
    ::TYPES[31] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[77] = ::g::Fuse::Animations::DiscreteSingleTrack_typeof();
    type->SetFields(3,
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _continuousProvider), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _delayBack), 0,
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _discreteProvider), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _durationBack), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _easing), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _easingBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _hasDelayBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _hasDurationBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _hasEasingBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _isDiscrete), 0,
        uObject_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _objectValue), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _vectorValue), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _weight), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _Duration), 0);
    return type;
}

// protected generated TrackAnimator() :2943
void TrackAnimator__ctor_1_fn(TrackAnimator* __this)
{
    __this->ctor_1();
}

// internal override sealed Fuse.Animations.AnimatorVariant get_AnimatorVariant() :2947
void TrackAnimator__get_AnimatorVariant_fn(TrackAnimator* __this, int* __retval)
{
    if (__this->_discreteProvider != NULL)
        return *__retval = ::g::Fuse::Animations::TrackProvider::GetAnimatorVariant(uInterface(uPtr(__this->_discreteProvider), ::TYPES[75/*Fuse.Animations.TrackProvider*/]), __this), void();
    else if (__this->_continuousProvider != NULL)
        return *__retval = ::g::Fuse::Animations::TrackProvider::GetAnimatorVariant(uInterface(uPtr(__this->_continuousProvider), ::TYPES[75/*Fuse.Animations.TrackProvider*/]), __this), void();

    return *__retval = 0, void();
}

// public double get_DelayBack() :3041
void TrackAnimator__get_DelayBack_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->DelayBack();
}

// public void set_DelayBack(double value) :3042
void TrackAnimator__set_DelayBack_fn(TrackAnimator* __this, double* value)
{
    __this->DelayBack(*value);
}

// public generated double get_Duration() :3023
void TrackAnimator__get_Duration_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public generated void set_Duration(double value) :3023
void TrackAnimator__set_Duration_fn(TrackAnimator* __this, double* value)
{
    __this->Duration(*value);
}

// public double get_DurationBack() :3029
void TrackAnimator__get_DurationBack_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->DurationBack();
}

// public void set_DurationBack(double value) :3030
void TrackAnimator__set_DurationBack_fn(TrackAnimator* __this, double* value)
{
    __this->DurationBack(*value);
}

// public Fuse.Animations.Easing get_Easing() :3007
void TrackAnimator__get_Easing_fn(TrackAnimator* __this, int* __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) :3008
void TrackAnimator__set_Easing_fn(TrackAnimator* __this, int* value)
{
    __this->Easing(*value);
}

// public Fuse.Animations.Easing get_EasingBack() :3015
void TrackAnimator__get_EasingBack_fn(TrackAnimator* __this, int* __retval)
{
    *__retval = __this->EasingBack();
}

// public void set_EasingBack(Fuse.Animations.Easing value) :3016
void TrackAnimator__set_EasingBack_fn(TrackAnimator* __this, int* value)
{
    __this->EasingBack(*value);
}

// internal override sealed double GetDurationWithDelay(Fuse.Animations.AnimationVariant dir) :2957
void TrackAnimator__GetDurationWithDelay_fn(TrackAnimator* __this, int* dir, double* __retval)
{
    int dir_ = *dir;
    double duration = 0.0;

    if (__this->_discreteProvider != NULL)
        duration = ::g::Fuse::Animations::TrackProvider::GetDuration(uInterface(uPtr(__this->_discreteProvider), ::TYPES[75/*Fuse.Animations.TrackProvider*/]), __this, dir_);
    else if (__this->_continuousProvider != NULL)
        duration = ::g::Fuse::Animations::TrackProvider::GetDuration(uInterface(uPtr(__this->_continuousProvider), ::TYPES[75/*Fuse.Animations.TrackProvider*/]), __this, dir_);

    return *__retval = (((dir_ == 1) && __this->HasBack()) ? __this->DelayBack() : __this->Delay()) + duration, void();
}

// internal Fuse.Animations.TrackProvider GetProvider(Fuse.Animations.AnimationVariant variant) :2997
void TrackAnimator__GetProvider_fn(TrackAnimator* __this, int* variant, uObject** __retval)
{
    *__retval = __this->GetProvider(*variant);
}

// internal bool get_HasBack() :3051
void TrackAnimator__get_HasBack_fn(TrackAnimator* __this, bool* __retval)
{
    *__retval = __this->HasBack();
}

// internal void MarkDiscrete() :2972
void TrackAnimator__MarkDiscrete_fn(TrackAnimator* __this)
{
    __this->MarkDiscrete();
}

// public double get_Weight() :3093
void TrackAnimator__get_Weight_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->Weight();
}

// public void set_Weight(double value) :3094
void TrackAnimator__set_Weight_fn(TrackAnimator* __this, double* value)
{
    __this->Weight(*value);
}

// protected generated TrackAnimator() [instance] :2943
void TrackAnimator::ctor_1()
{
    _continuousProvider = (uObject*)::g::Fuse::Animations::EasingTrack::Singleton();
    _weight = 1.0;
    ctor_();
}

// public double get_DelayBack() [instance] :3041
double TrackAnimator::DelayBack()
{
    return _hasDelayBack ? _delayBack : 0.0;
}

// public void set_DelayBack(double value) [instance] :3042
void TrackAnimator::DelayBack(double value)
{
    _delayBack = value;
    _hasDelayBack = true;
}

// public generated double get_Duration() [instance] :3023
double TrackAnimator::Duration()
{
    return _Duration;
}

// public generated void set_Duration(double value) [instance] :3023
void TrackAnimator::Duration(double value)
{
    _Duration = value;
}

// public double get_DurationBack() [instance] :3029
double TrackAnimator::DurationBack()
{
    return _hasDurationBack ? _durationBack : Duration();
}

// public void set_DurationBack(double value) [instance] :3030
void TrackAnimator::DurationBack(double value)
{
    _durationBack = value;
    _hasDurationBack = true;
}

// public Fuse.Animations.Easing get_Easing() [instance] :3007
int TrackAnimator::Easing()
{
    return _easing;
}

// public void set_Easing(Fuse.Animations.Easing value) [instance] :3008
void TrackAnimator::Easing(int value)
{
    _easing = value;
}

// public Fuse.Animations.Easing get_EasingBack() [instance] :3015
int TrackAnimator::EasingBack()
{
    return _hasEasingBack ? _easingBack : _easing;
}

// public void set_EasingBack(Fuse.Animations.Easing value) [instance] :3016
void TrackAnimator::EasingBack(int value)
{
    _easingBack = value;
    _hasEasingBack = true;
}

// internal Fuse.Animations.TrackProvider GetProvider(Fuse.Animations.AnimationVariant variant) [instance] :2997
uObject* TrackAnimator::GetProvider(int variant)
{
    uObject* ind1 = _discreteProvider;
    return (ind1 != NULL) ? ind1 : (uObject*)_continuousProvider;
}

// internal bool get_HasBack() [instance] :3051
bool TrackAnimator::HasBack()
{
    return (_hasDelayBack || _hasDurationBack) || _hasEasingBack;
}

// internal void MarkDiscrete() [instance] :2972
void TrackAnimator::MarkDiscrete()
{
    _discreteProvider = (uObject*)::g::Fuse::Animations::DiscreteSingleTrack::Singleton();
    _continuousProvider = NULL;
    _isDiscrete = true;
}

// public double get_Weight() [instance] :3093
double TrackAnimator::Weight()
{
    return _weight;
}

// public void set_Weight(double value) [instance] :3094
void TrackAnimator::Weight(double value)
{
    _weight = value;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(3103)
// ---------------------------------------------------------------------------

// internal abstract class TrackAnimatorState :3103
// {
TrackAnimatorState_type* TrackAnimatorState_typeof()
{
    static uSStrong<TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(TrackAnimatorState);
    options.TypeSize = sizeof(TrackAnimatorState_type);
    type = (TrackAnimatorState_type*)uClassType::New("Fuse.Animations.TrackAnimatorState", options);
    type->SetBase(::g::Fuse::Animations::AnimatorState_typeof());
    type->fp_SeekObjectValue = TrackAnimatorState__SeekObjectValue_fn;
    type->fp_SeekProgress = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, bool*))TrackAnimatorState__SeekProgress_fn;
    type->fp_SeekTime = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, bool*))TrackAnimatorState__SeekTime_fn;
    type->fp_SeekValue = TrackAnimatorState__SeekValue_fn;
    ::TYPES[32] = ::g::Fuse::Animations::AnimatorState_typeof();
    ::TYPES[45] = ::g::Fuse::Animations::ContinuousTrackProvider_typeof();
    ::TYPES[78] = ::g::Fuse::Animations::DiscreteTrackProvider_typeof();
    ::TYPES[21] = ::g::Uno::Float_typeof();
    ::TYPES[35] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[31] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[10] = ::g::Uno::Int_typeof();
    type->SetFields(3,
        ::g::Fuse::Animations::ContinuousTrackProvider_typeof(), offsetof(::g::Fuse::Animations::TrackAnimatorState, _continuousProvider), 0,
        ::g::Fuse::Animations::DiscreteTrackProvider_typeof(), offsetof(::g::Fuse::Animations::TrackAnimatorState, _discreteProvider), 0,
        ::g::Fuse::Animations::TrackAnimator_typeof(), offsetof(::g::Fuse::Animations::TrackAnimatorState, Animator), 0);
    return type;
}

// protected TrackAnimatorState(Fuse.Animations.TrackAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Node useNode]) :3109
void TrackAnimatorState__ctor_1_fn(TrackAnimatorState* __this, ::g::Fuse::Animations::TrackAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Node* useNode)
{
    __this->ctor_1(animator, p, useNode);
}

// public double get_Duration() :3188
void TrackAnimatorState__get_Duration_fn(TrackAnimatorState* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public Fuse.Animations.Easing get_Easing() :3193
void TrackAnimatorState__get_Easing_fn(TrackAnimatorState* __this, int* __retval)
{
    *__retval = __this->Easing();
}

// public bool get_IsBackward() :3183
void TrackAnimatorState__get_IsBackward_fn(TrackAnimatorState* __this, bool* __retval)
{
    *__retval = __this->IsBackward();
}

// protected virtual void SeekObjectValue(object value, float strength) :3179
void TrackAnimatorState__SeekObjectValue_fn(TrackAnimatorState* __this, uObject* value, float* strength)
{
}

// internal override sealed bool SeekProgress(double progress, double interval, Fuse.Animations.SeekDirection dir, double strength) :3119
void TrackAnimatorState__SeekProgress_fn(TrackAnimatorState* __this, double* progress, double* interval, int* dir, double* strength, bool* __retval)
{
    double progress_ = *progress;
    double interval_ = *interval;
    int dir_ = *dir;
    double strength_ = *strength;

    if (__this->_continuousProvider != NULL)
    {
        double oStrength;
        ::g::Uno::Float4 oValue;
        bool r = ::g::Fuse::Animations::ContinuousTrackProvider::GetSeekProgress(uInterface(uPtr(__this->_continuousProvider), ::TYPES[45/*Fuse.Animations.ContinuousTrackProvider*/]), __this, progress_, interval_, dir_, &oValue, &oStrength);
        __this->SeekValue(oValue, (float)((oStrength * strength_) * uPtr(__this->Animator)->Weight()));
        return *__retval = r, void();
    }

    if (__this->_discreteProvider != NULL)
    {
        double oStrength1;
        uObject* oValue1;
        bool r1 = ::g::Fuse::Animations::DiscreteTrackProvider::GetSeekProgress(uInterface(uPtr(__this->_discreteProvider), ::TYPES[78/*Fuse.Animations.DiscreteTrackProvider*/]), __this, progress_, interval_, dir_, &oValue1, &oStrength1);
        __this->SeekObjectValue(oValue1, (float)((oStrength1 * strength_) * uPtr(__this->Animator)->Weight()));
        return *__retval = r1, void();
    }

    return *__retval = true, void();
}

// internal override sealed bool SeekTime(double elapsed, double interval, Fuse.Animations.SeekDirection dir, double strength) :3145
void TrackAnimatorState__SeekTime_fn(TrackAnimatorState* __this, double* elapsed, double* interval, int* dir, double* strength, bool* __retval)
{
    double elapsed_ = *elapsed;
    double interval_ = *interval;
    int dir_ = *dir;
    double strength_ = *strength;
    double relTime;

    if (__this->IsBackward() && uPtr(__this->Animator)->HasBack())
        relTime = elapsed_ - ((__this->TotalDuration - uPtr(__this->Animator)->DelayBack()) - uPtr(__this->Animator)->DurationBack());
    else
        relTime = elapsed_ - uPtr(__this->Animator)->Delay();

    if (__this->_continuousProvider != NULL)
    {
        double oStrength;
        ::g::Uno::Float4 oValue;
        bool r = ::g::Fuse::Animations::ContinuousTrackProvider::GetSeekTime(uInterface(uPtr(__this->_continuousProvider), ::TYPES[45/*Fuse.Animations.ContinuousTrackProvider*/]), __this, relTime, interval_, dir_, &oValue, &oStrength);
        __this->SeekValue(oValue, (float)(oStrength * strength_));
        return *__retval = r, void();
    }

    if (__this->_discreteProvider != NULL)
    {
        double oStrength1;
        uObject* oValue1;
        bool r1 = ::g::Fuse::Animations::DiscreteTrackProvider::GetSeekTime(uInterface(uPtr(__this->_discreteProvider), ::TYPES[78/*Fuse.Animations.DiscreteTrackProvider*/]), __this, relTime, interval_, dir_, &oValue1, &oStrength1);
        __this->SeekObjectValue(oValue1, (float)(oStrength1 * strength_));
        return *__retval = r1, void();
    }

    return *__retval = true, void();
}

// protected virtual void SeekValue(float4 value, float strength) :3178
void TrackAnimatorState__SeekValue_fn(TrackAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
}

// protected TrackAnimatorState(Fuse.Animations.TrackAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Node useNode]) [instance] :3109
void TrackAnimatorState::ctor_1(::g::Fuse::Animations::TrackAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Node* useNode)
{
    ctor_(p, useNode);
    Animator = animator;
    uObject* pr = uPtr(animator)->GetProvider(Variant);
    _continuousProvider = uAs<uObject*>(pr, ::TYPES[45/*Fuse.Animations.ContinuousTrackProvider*/]);
    _discreteProvider = uAs<uObject*>(pr, ::TYPES[78/*Fuse.Animations.DiscreteTrackProvider*/]);
}

// public double get_Duration() [instance] :3188
double TrackAnimatorState::Duration()
{
    return IsBackward() ? uPtr(Animator)->DurationBack() : uPtr(Animator)->Duration();
}

// public Fuse.Animations.Easing get_Easing() [instance] :3193
int TrackAnimatorState::Easing()
{
    return IsBackward() ? uPtr(Animator)->EasingBack() : uPtr(Animator)->Easing();
}

// public bool get_IsBackward() [instance] :3183
bool TrackAnimatorState::IsBackward()
{
    return Variant == 1;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(2915)
// ---------------------------------------------------------------------------

// internal abstract interface TrackProvider :2915
// {
uInterfaceType* TrackProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.TrackProvider", 0, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(3212)
// ---------------------------------------------------------------------------

// public abstract class TransformAnimator<TransformType> :3212
// {
TransformAnimator_type* TransformAnimator_typeof()
{
    static uSStrong<TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(TransformAnimator);
    options.TypeSize = sizeof(TransformAnimator_type);
    type = (TransformAnimator_type*)uClassType::New("Fuse.Animations.TransformAnimator`1", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimator_typeof());
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))TransformAnimator__CreateState_fn;
    ::TYPES[31] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[32] = ::g::Fuse::Animations::AnimatorState_typeof();
    ::TYPES[79] = ::g::Fuse::Animations::TransformAnimatorState_typeof();
    ::TYPES[27] = ::g::Uno::Float4_typeof();
    ::TYPES[35] = ::g::Fuse::Animations::TrackAnimator_typeof();
    type->SetPrecalc(
        ::TYPES[79/*Fuse.Animations.TransformAnimatorState`1*/]->MakeType(type->T(0)));
    type->SetFields(17,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Animations::TransformAnimator, _Priority), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Animations::TransformAnimator, _RelativeNode), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Animations::TransformAnimator, _Target), 0);
    return type;
}

// internal TransformAnimator() :3215
void TransformAnimator__ctor_2_fn(TransformAnimator* __this)
{
    __this->ctor_2();
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :3252
void TransformAnimator__CreateState_fn(TransformAnimator* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(TransformAnimator_typeof())->Precalced(0/*Fuse.Animations.TransformAnimatorState<TransformType>*/),
        __this->__type->GetBase(TransformAnimator_typeof())->T(0),
    };
    return *__retval = (::g::Fuse::Animations::TransformAnimatorState*)::g::Fuse::Animations::TransformAnimatorState::New1(__types[0], __this, p), void();
}

// public generated int get_Priority() :3248
void TransformAnimator__get_Priority_fn(TransformAnimator* __this, int* __retval)
{
    *__retval = __this->Priority();
}

// public generated void set_Priority(int value) :3248
void TransformAnimator__set_Priority_fn(TransformAnimator* __this, int* value)
{
    __this->Priority(*value);
}

// public generated Fuse.Node get_RelativeNode() :3244
void TransformAnimator__get_RelativeNode_fn(TransformAnimator* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->RelativeNode();
}

// public generated void set_RelativeNode(Fuse.Node value) :3244
void TransformAnimator__set_RelativeNode_fn(TransformAnimator* __this, ::g::Fuse::Node* value)
{
    __this->RelativeNode(value);
}

// public generated Fuse.Node get_Target() :3246
void TransformAnimator__get_Target_fn(TransformAnimator* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Node value) :3246
void TransformAnimator__set_Target_fn(TransformAnimator* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// public float get_X() :3222
void TransformAnimator__get_X_fn(TransformAnimator* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :3223
void TransformAnimator__set_X_fn(TransformAnimator* __this, float* value)
{
    __this->X(*value);
}

// public float get_Y() :3228
void TransformAnimator__get_Y_fn(TransformAnimator* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :3229
void TransformAnimator__set_Y_fn(TransformAnimator* __this, float* value)
{
    __this->Y(*value);
}

// public float get_Z() :3234
void TransformAnimator__get_Z_fn(TransformAnimator* __this, float* __retval)
{
    *__retval = __this->Z();
}

// public void set_Z(float value) :3235
void TransformAnimator__set_Z_fn(TransformAnimator* __this, float* value)
{
    __this->Z(*value);
}

// internal TransformAnimator() [instance] :3215
void TransformAnimator::ctor_2()
{
    ctor_1();
    MixOp(0);
}

// public generated int get_Priority() [instance] :3248
int TransformAnimator::Priority()
{
    return _Priority;
}

// public generated void set_Priority(int value) [instance] :3248
void TransformAnimator::Priority(int value)
{
    _Priority = value;
}

// public generated Fuse.Node get_RelativeNode() [instance] :3244
::g::Fuse::Node* TransformAnimator::RelativeNode()
{
    return _RelativeNode;
}

// public generated void set_RelativeNode(Fuse.Node value) [instance] :3244
void TransformAnimator::RelativeNode(::g::Fuse::Node* value)
{
    _RelativeNode = value;
}

// public generated Fuse.Node get_Target() [instance] :3246
::g::Fuse::Node* TransformAnimator::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Node value) [instance] :3246
void TransformAnimator::Target(::g::Fuse::Node* value)
{
    _Target = value;
}

// public float get_X() [instance] :3222
float TransformAnimator::X()
{
    return _vectorValue.X;
}

// public void set_X(float value) [instance] :3223
void TransformAnimator::X(float value)
{
    _vectorValue.X = value;
}

// public float get_Y() [instance] :3228
float TransformAnimator::Y()
{
    return _vectorValue.Y;
}

// public void set_Y(float value) [instance] :3229
void TransformAnimator::Y(float value)
{
    _vectorValue.Y = value;
}

// public float get_Z() [instance] :3234
float TransformAnimator::Z()
{
    return _vectorValue.Z;
}

// public void set_Z(float value) [instance] :3235
void TransformAnimator::Z(float value)
{
    _vectorValue.Z = value;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(3258)
// ---------------------------------------------------------------------------

// internal sealed class TransformAnimatorState<TransformType> :3258
// {
::g::Fuse::Animations::TrackAnimatorState_type* TransformAnimatorState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(TransformAnimatorState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.TransformAnimatorState`1", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimatorState_typeof());
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))TransformAnimatorState__Disable_fn;
    type->fp_SeekValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, ::g::Uno::Float4*, float*))TransformAnimatorState__SeekValue_fn;
    ::STRINGS[4] = uString::Const("Invalid seek");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno");
    ::TYPES[35] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[80] = ::g::Fuse::Animations::TransformAnimator_typeof();
    ::TYPES[31] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[32] = ::g::Fuse::Animations::AnimatorState_typeof();
    ::TYPES[81] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[47] = ::g::Fuse::Transform_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    type->SetPrecalc(
        ::TYPES[80/*Fuse.Animations.TransformAnimator`1*/]->MakeType(type->T(0)));
    type->SetFields(6,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TransformAnimatorState, _inSeek), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::TransformAnimatorState, _lastStrength), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Transform_typeof()), offsetof(::g::Fuse::Animations::TransformAnimatorState, _matAct), 0,
        ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::TransformAnimatorState, Animator1), 0,
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof()), offsetof(::g::Fuse::Animations::TransformAnimatorState, mixHandle), 0,
        type->T(0), offsetof(::g::Fuse::Animations::TransformAnimatorState, transform), 0);
    return type;
}

// public TransformAnimatorState(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) :3266
void TransformAnimatorState__ctor_2_fn(TransformAnimatorState* __this, ::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :3279
void TransformAnimatorState__Disable_fn(TransformAnimatorState* __this)
{
    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), ::TYPES[53/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]));
    __this->mixHandle = NULL;
    uPtr(uAs< ::g::Fuse::Transform*>(__this->transform, ::TYPES[47/*Fuse.Transform*/]))->remove_MatrixChanged(__this->_matAct);
    uPtr(uAs< ::g::Fuse::Transform*>(__this->transform, ::TYPES[47/*Fuse.Transform*/]))->Removed(__this->Node);
    __this->_matAct = NULL;
    __this->transform = NULL;
}

// public TransformAnimatorState New(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) :3266
void TransformAnimatorState__New1_fn(uType* __type, ::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, TransformAnimatorState** __retval)
{
    *__retval = TransformAnimatorState::New1(__type, animator, p);
}

// internal void OnMatrixChanged(Fuse.Transform ignore) :3312
void TransformAnimatorState__OnMatrixChanged_fn(TransformAnimatorState* __this, ::g::Fuse::Transform* ignore)
{
    __this->OnMatrixChanged(ignore);
}

// protected override sealed void SeekValue(float4 value, float strength) :3293
void TransformAnimatorState__SeekValue_fn(TransformAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Animations.TransformAnimator<TransformType>*/),
        __this->__type->T(0),
    };
    ::g::Fuse::Node* ind1;
    ::g::Uno::Float4 value_ = *value;
    float strength_ = *strength;

    if ((__this->mixHandle == NULL) || (__this->transform == NULL))
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[4/*"Invalid seek"*/], 1, ::STRINGS[3/*"/usr/local/...*/], 3297);
        return;
    }

    __this->_inSeek = true;
    uPtr(uAs< ::g::Fuse::Transform*>(__this->transform, ::TYPES[47/*Fuse.Transform*/]))->RelativeNode((ind1 = uPtr(__this->Animator1)->RelativeNode(), (ind1 != NULL) ? ind1 : (::g::Fuse::Node*)__this->Node));
    uPtr(__this->Animator1)->Update(__this->Node, __this->transform, value_);
    __this->_lastStrength = strength_;
    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), ::TYPES[53/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]), __this->transform, uCRef(__this->_lastStrength));
    __this->_inSeek = false;
}

// public TransformAnimatorState(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) [instance] :3266
void TransformAnimatorState::ctor_2(::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Fuse.Animations.TransformAnimator<TransformType>*/),
    };
    transform = (::g::Fuse::Transform*)__types[0]->New();
    ctor_1(animator, p, uPtr(animator)->Target());
    Animator1 = animator;
    mixHandle = ::g::Fuse::Animations::IMixer::RegisterTransform(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[36/*Fuse.Animations.IMixer*/]), Node, uPtr(Animator1)->MixOp(), uPtr(Animator1)->Priority());
    _matAct = uDelegate::New(::TYPES[81/*Uno.Action<Fuse.Transform>*/], (void*)TransformAnimatorState__OnMatrixChanged_fn, this);
    uPtr(uAs< ::g::Fuse::Transform*>(transform, ::TYPES[47/*Fuse.Transform*/]))->add_MatrixChanged(_matAct);
    uPtr(uAs< ::g::Fuse::Transform*>(transform, ::TYPES[47/*Fuse.Transform*/]))->Added(Node);
}

// internal void OnMatrixChanged(Fuse.Transform ignore) [instance] :3312
void TransformAnimatorState::OnMatrixChanged(::g::Fuse::Transform* ignore)
{
    if ((!_inSeek && (mixHandle != NULL)) && (transform != NULL))
        ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(mixHandle), ::TYPES[53/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]), transform, uCRef(_lastStrength));
}

// public TransformAnimatorState New(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) [static] :3266
TransformAnimatorState* TransformAnimatorState::New1(uType* __type, ::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    TransformAnimatorState* obj2 = (TransformAnimatorState*)uNew(__type);
    obj2->ctor_2(animator, p);
    return obj2;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(3466)
// ---------------------------------------------------------------------------

// public sealed class TriggerAnimation :3466
// {
uType* TriggerAnimation_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(TriggerAnimation);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.TriggerAnimation", options);
    type->fp_ctor_ = (void*)TriggerAnimation__New1_fn;
    ::TYPES[1] = ::g::Fuse::Animations::CreateStateParams_typeof();
    ::TYPES[60] = ::g::Fuse::Animations::AnimatorState_typeof()->Array();
    ::TYPES[82] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[10] = ::g::Uno::Int_typeof();
    ::TYPES[39] = ::g::Uno::Delegate_typeof();
    ::TYPES[50] = ::g::Uno::Action_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[83] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[31] = ::g::Fuse::Animations::Animator_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof()), offsetof(::g::Fuse::Animations::TriggerAnimation, _animators), 0,
        TriggerAnimation_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _backward), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _crossFadeDuration), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _hasStretchDuration), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _hasTimeMultiplier), 0,
        ::g::Fuse::Animations::PlayMode_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _playMode), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _stretchDuration), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _timeMultiplier), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, TimeChanged1), 0);
    return type;
}

// public generated TriggerAnimation() :3466
void TriggerAnimation__ctor__fn(TriggerAnimation* __this)
{
    __this->ctor_();
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() :3472
void TriggerAnimation__get_Animators_fn(TriggerAnimation* __this, uObject** __retval)
{
    *__retval = __this->Animators();
}

// public Fuse.Animations.TriggerAnimation get_Backward() :3487
void TriggerAnimation__get_Backward_fn(TriggerAnimation* __this, TriggerAnimation** __retval)
{
    *__retval = __this->Backward();
}

// public void set_Backward(Fuse.Animations.TriggerAnimation value) :3493
void TriggerAnimation__set_Backward_fn(TriggerAnimation* __this, TriggerAnimation* value)
{
    __this->Backward(value);
}

// internal Fuse.Animations.AnimatorState[] CreateAnimatorsState(Fuse.Animations.AnimationVariant variant, Fuse.Node elm) :3499
void TriggerAnimation__CreateAnimatorsState_fn(TriggerAnimation* __this, int* variant, ::g::Fuse::Node* elm, uArray** __retval)
{
    *__retval = __this->CreateAnimatorsState(*variant, elm);
}

// internal Fuse.Animations.Player CreatePlayer([Fuse.Node node], [Fuse.Animations.AnimationVariant variant]) :3630
void TriggerAnimation__CreatePlayer_fn(TriggerAnimation* __this, ::g::Fuse::Node* node, int* variant, ::g::Fuse::Animations::Player** __retval)
{
    *__retval = __this->CreatePlayer(node, *variant);
}

// internal Fuse.Animations.TriggerAnimationState CreateState([Fuse.Node elm]) :3618
void TriggerAnimation__CreateState_fn(TriggerAnimation* __this, ::g::Fuse::Node* elm, ::g::Fuse::Animations::TriggerAnimationState** __retval)
{
    *__retval = __this->CreateState(elm);
}

// public double get_CrossFadeDuration() :3563
void TriggerAnimation__get_CrossFadeDuration_fn(TriggerAnimation* __this, double* __retval)
{
    *__retval = __this->CrossFadeDuration();
}

// public void set_CrossFadeDuration(double value) :3564
void TriggerAnimation__set_CrossFadeDuration_fn(TriggerAnimation* __this, double* value)
{
    __this->CrossFadeDuration(*value);
}

// public double GetAnimatorsDuration(Fuse.Animations.AnimationVariant variant) :3514
void TriggerAnimation__GetAnimatorsDuration_fn(TriggerAnimation* __this, int* variant, double* __retval)
{
    *__retval = __this->GetAnimatorsDuration(*variant);
}

// public double GetTimeMultiplier(Fuse.Animations.AnimationVariant variant) :3573
void TriggerAnimation__GetTimeMultiplier_fn(TriggerAnimation* __this, int* variant, double* __retval)
{
    *__retval = __this->GetTimeMultiplier(*variant);
}

// public bool get_HasAnimators() :3481
void TriggerAnimation__get_HasAnimators_fn(TriggerAnimation* __this, bool* __retval)
{
    *__retval = __this->HasAnimators();
}

// internal bool get_HasDirectionVariant() :3598
void TriggerAnimation__get_HasDirectionVariant_fn(TriggerAnimation* __this, bool* __retval)
{
    *__retval = __this->HasDirectionVariant();
}

// public generated TriggerAnimation New() :3466
void TriggerAnimation__New1_fn(TriggerAnimation** __retval)
{
    *__retval = TriggerAnimation::New1();
}

// private void OnTimeChanged() :3567
void TriggerAnimation__OnTimeChanged_fn(TriggerAnimation* __this)
{
    __this->OnTimeChanged();
}

// public Fuse.Animations.PlayMode get_PlayMode() :3646
void TriggerAnimation__get_PlayMode_fn(TriggerAnimation* __this, int* __retval)
{
    *__retval = __this->PlayMode();
}

// public void set_PlayMode(Fuse.Animations.PlayMode value) :3647
void TriggerAnimation__set_PlayMode_fn(TriggerAnimation* __this, int* value)
{
    __this->PlayMode(*value);
}

// internal Fuse.Animations.AnimationVariant RestrictVariant(Fuse.Animations.AnimationVariant variant) :3623
void TriggerAnimation__RestrictVariant_fn(TriggerAnimation* __this, int* variant, int* __retval)
{
    *__retval = __this->RestrictVariant(*variant);
}

// internal generated void add_TimeChanged(Uno.Action value) :3594
void TriggerAnimation__add_TimeChanged_fn(TriggerAnimation* __this, uDelegate* value)
{
    __this->add_TimeChanged(value);
}

// internal generated void remove_TimeChanged(Uno.Action value) :3594
void TriggerAnimation__remove_TimeChanged_fn(TriggerAnimation* __this, uDelegate* value)
{
    __this->remove_TimeChanged(value);
}

// public double get_TimeMultiplier() :3534
void TriggerAnimation__get_TimeMultiplier_fn(TriggerAnimation* __this, double* __retval)
{
    *__retval = __this->TimeMultiplier();
}

// public void set_TimeMultiplier(double value) :3535
void TriggerAnimation__set_TimeMultiplier_fn(TriggerAnimation* __this, double* value)
{
    __this->TimeMultiplier(*value);
}

// public generated TriggerAnimation() [instance] :3466
void TriggerAnimation::ctor_()
{
    _crossFadeDuration = 0.5;
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() [instance] :3472
uObject* TriggerAnimation::Animators()
{
    if (_animators == NULL)
        _animators = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[82/*Uno.Collections.List<Fuse.Animations.Animator>*/]));

    return (uObject*)_animators;
}

// public Fuse.Animations.TriggerAnimation get_Backward() [instance] :3487
TriggerAnimation* TriggerAnimation::Backward()
{
    if (_backward == NULL)
        _backward = TriggerAnimation::New1();

    return _backward;
}

// public void set_Backward(Fuse.Animations.TriggerAnimation value) [instance] :3493
void TriggerAnimation::Backward(TriggerAnimation* value)
{
    _backward = value;
}

// internal Fuse.Animations.AnimatorState[] CreateAnimatorsState(Fuse.Animations.AnimationVariant variant, Fuse.Node elm) [instance] :3499
uArray* TriggerAnimation::CreateAnimatorsState(int variant, ::g::Fuse::Node* elm)
{
    ::g::Fuse::Animations::CreateStateParams* collection1;
    ::g::Fuse::Animations::Animator* ret3;
    collection1 = ::g::Fuse::Animations::CreateStateParams::New1();
    uPtr(collection1)->Variant = variant;
    uPtr(collection1)->TotalDuration = GetAnimatorsDuration(variant);
    uPtr(collection1)->Attached = elm;
    ::g::Fuse::Animations::CreateStateParams* csp = collection1;

    if (_animators == NULL)
        return uArray::New(::TYPES[60/*Fuse.Animations.AnimatorState[]*/], 0);

    uArray* state = uArray::New(::TYPES[60/*Fuse.Animations.AnimatorState[]*/], uPtr(_animators)->Count());

    for (int i = 0; i < uPtr(_animators)->Count(); ++i)
        state->Strong< ::g::Fuse::Animations::AnimatorState*>(i) = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_animators), uCRef<int>(i), &ret3), ret3))->CreateState(csp);

    return state;
}

// internal Fuse.Animations.Player CreatePlayer([Fuse.Node node], [Fuse.Animations.AnimationVariant variant]) [instance] :3630
::g::Fuse::Animations::Player* TriggerAnimation::CreatePlayer(::g::Fuse::Node* node, int variant)
{
    variant = RestrictVariant(variant);

    if (variant == 0)
        return ::g::Fuse::Animations::Player::New1(node, this, 0, PlayMode());

    if (_backward != NULL)
        return ::g::Fuse::Animations::Player::New1(node, _backward, 0, PlayMode());

    return ::g::Fuse::Animations::Player::New1(node, this, 1, PlayMode());
}

// internal Fuse.Animations.TriggerAnimationState CreateState([Fuse.Node elm]) [instance] :3618
::g::Fuse::Animations::TriggerAnimationState* TriggerAnimation::CreateState(::g::Fuse::Node* elm)
{
    return ::g::Fuse::Animations::TriggerAnimationState::New1(this, elm);
}

// public double get_CrossFadeDuration() [instance] :3563
double TriggerAnimation::CrossFadeDuration()
{
    return _crossFadeDuration;
}

// public void set_CrossFadeDuration(double value) [instance] :3564
void TriggerAnimation::CrossFadeDuration(double value)
{
    _crossFadeDuration = value;
}

// public double GetAnimatorsDuration(Fuse.Animations.AnimationVariant variant) [instance] :3514
double TriggerAnimation::GetAnimatorsDuration(int variant)
{
    ::g::Fuse::Animations::Animator* ret4;

    if ((variant == 1) && (_backward != NULL))
        return uPtr(_backward)->GetAnimatorsDuration(0);

    if (_animators == NULL)
        return 0.0;

    double max = 0.0;
    int c = uPtr(_animators)->Count();

    for (int i = 0; i < c; ++i)
        max = ::g::Uno::Math::Max(max, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_animators), uCRef<int>(i), &ret4), ret4))->GetDurationWithDelay(variant));

    return max;
}

// public double GetTimeMultiplier(Fuse.Animations.AnimationVariant variant) [instance] :3573
double TriggerAnimation::GetTimeMultiplier(int variant)
{
    if (_hasStretchDuration)
    {
        double dur = GetAnimatorsDuration(variant);

        if (_stretchDuration < 9.9999997473787516e-06)
            return 1.0;

        double mult = dur / _stretchDuration;

        if (_hasTimeMultiplier)
            mult = mult * TimeMultiplier();

        return mult;
    }

    if (_hasTimeMultiplier)
        return TimeMultiplier();

    return 1.0;
}

// public bool get_HasAnimators() [instance] :3481
bool TriggerAnimation::HasAnimators()
{
    return (_animators != NULL) && (uPtr(_animators)->Count() > 0);
}

// internal bool get_HasDirectionVariant() [instance] :3598
bool TriggerAnimation::HasDirectionVariant()
{
    ::g::Fuse::Animations::Animator* ret5;

    if (_animators == NULL)
        return false;

    bool has = false;
    int c = uPtr(_animators)->Count();

    for (int i = 0; i < c; ++i)
    {
        int v = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_animators), uCRef<int>(i), &ret5), ret5))->AnimatorVariant();

        if (v == 2)
            has = true;

        if (v == 1)
            return false;
    }

    return has;
}

// private void OnTimeChanged() [instance] :3567
void TriggerAnimation::OnTimeChanged()
{
    if (::g::Uno::Delegate::op_Inequality(TimeChanged1, NULL))
        uPtr(TimeChanged1)->InvokeVoid();
}

// public Fuse.Animations.PlayMode get_PlayMode() [instance] :3646
int TriggerAnimation::PlayMode()
{
    return _playMode;
}

// public void set_PlayMode(Fuse.Animations.PlayMode value) [instance] :3647
void TriggerAnimation::PlayMode(int value)
{
    _playMode = value;
}

// internal Fuse.Animations.AnimationVariant RestrictVariant(Fuse.Animations.AnimationVariant variant) [instance] :3623
int TriggerAnimation::RestrictVariant(int variant)
{
    if (!HasDirectionVariant() && (_backward == NULL))
        return 0;

    return variant;
}

// internal generated void add_TimeChanged(Uno.Action value) [instance] :3594
void TriggerAnimation::add_TimeChanged(uDelegate* value)
{
    TimeChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TimeChanged1, value), ::TYPES[50/*Uno.Action*/]);
}

// internal generated void remove_TimeChanged(Uno.Action value) [instance] :3594
void TriggerAnimation::remove_TimeChanged(uDelegate* value)
{
    TimeChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TimeChanged1, value), ::TYPES[50/*Uno.Action*/]);
}

// public double get_TimeMultiplier() [instance] :3534
double TriggerAnimation::TimeMultiplier()
{
    return _timeMultiplier;
}

// public void set_TimeMultiplier(double value) [instance] :3535
void TriggerAnimation::TimeMultiplier(double value)
{
    if ((_timeMultiplier == value) && _hasTimeMultiplier)
        return;

    _timeMultiplier = value;
    _hasTimeMultiplier = true;
    OnTimeChanged();
}

// public generated TriggerAnimation New() [static] :3466
TriggerAnimation* TriggerAnimation::New1()
{
    TriggerAnimation* obj2 = (TriggerAnimation*)uNew(TriggerAnimation_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// ../../../../usr/local/share/uno/Packages/Fuse.Animations/0.24.6/$.uno(3651)
// ---------------------------------------------------------------------------

// public sealed class TriggerAnimationState :3651
// {
uType* TriggerAnimationState_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(TriggerAnimationState);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.TriggerAnimationState", options);
    ::TYPES[84] = ::g::Fuse::Animations::TriggerAnimation_typeof();
    ::TYPES[50] = ::g::Uno::Action_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[10] = ::g::Uno::Int_typeof();
    ::TYPES[85] = ::g::Fuse::Animations::Player_typeof();
    ::TYPES[39] = ::g::Uno::Delegate_typeof();
    ::TYPES[59] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof());
    ::TYPES[11] = uObject_typeof();
    type->SetFields(0,
        ::g::Fuse::Animations::Player_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _backPlayer), 0,
        ::g::Fuse::Animations::Player_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _curPlayer), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _curPlayerVariant), 0,
        ::g::Fuse::Animations::Player_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _forePlayer), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _node), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _prevProgress), 0,
        ::g::Fuse::Animations::TriggerAnimation_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _Animation), 0,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Fuse::Animations::TriggerAnimationState, PlaybackDone1), 0,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Fuse::Animations::TriggerAnimationState, ProgressUpdated1), 0);
    return type;
}

// internal TriggerAnimationState(Fuse.Animations.TriggerAnimation animation, Fuse.Node node) :3656
void TriggerAnimationState__ctor__fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Node* node)
{
    __this->ctor_(animation, node);
}

// private generated Fuse.Animations.TriggerAnimation get_Animation() :3653
void TriggerAnimationState__get_Animation_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->Animation();
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) :3653
void TriggerAnimationState__set_Animation_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->Animation(value);
}

// public double get_CurrentAnimatorsDuration() :3830
void TriggerAnimationState__get_CurrentAnimatorsDuration_fn(TriggerAnimationState* __this, double* __retval)
{
    *__retval = __this->CurrentAnimatorsDuration();
}

// public void Dispose() :3667
void TriggerAnimationState__Dispose_fn(TriggerAnimationState* __this)
{
    __this->Dispose();
}

// private Fuse.Animations.Player GetCurrentPlayer(Fuse.Animations.AnimationVariant tendTo, Fuse.Animations.TriggerAnimationState.SeekFlags flags) :3841
void TriggerAnimationState__GetCurrentPlayer_fn(TriggerAnimationState* __this, int* tendTo, int* flags, ::g::Fuse::Animations::Player** __retval)
{
    *__retval = __this->GetCurrentPlayer(*tendTo, *flags);
}

// private Fuse.Animations.Player GetPlayer([Fuse.Animations.AnimationVariant variant], [bool noFade]) :3722
void TriggerAnimationState__GetPlayer_fn(TriggerAnimationState* __this, int* variant, bool* noFade, ::g::Fuse::Animations::Player** __retval)
{
    *__retval = __this->GetPlayer(*variant, *noFade);
}

// internal TriggerAnimationState New(Fuse.Animations.TriggerAnimation animation, Fuse.Node node) :3656
void TriggerAnimationState__New1_fn(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Node* node, TriggerAnimationState** __retval)
{
    *__retval = TriggerAnimationState::New1(animation, node);
}

// private void OnPlaybackDone(object s) :3713
void TriggerAnimationState__OnPlaybackDone_fn(TriggerAnimationState* __this, uObject* s)
{
    __this->OnPlaybackDone(s);
}

// private void OnProgressUpdated(object s) :3702
void TriggerAnimationState__OnProgressUpdated_fn(TriggerAnimationState* __this, uObject* s)
{
    __this->OnProgressUpdated(s);
}

// private void OnTimeChanged() :3685
void TriggerAnimationState__OnTimeChanged_fn(TriggerAnimationState* __this)
{
    __this->OnTimeChanged();
}

// public generated void add_PlaybackDone(Uno.Action<object> value) :3694
void TriggerAnimationState__add_PlaybackDone_fn(TriggerAnimationState* __this, uDelegate* value)
{
    __this->add_PlaybackDone(value);
}

// public generated void remove_PlaybackDone(Uno.Action<object> value) :3694
void TriggerAnimationState__remove_PlaybackDone_fn(TriggerAnimationState* __this, uDelegate* value)
{
    __this->remove_PlaybackDone(value);
}

// public void PlayEnd(bool on) :3802
void TriggerAnimationState__PlayEnd_fn(TriggerAnimationState* __this, bool* on)
{
    __this->PlayEnd(*on);
}

// public void PlayOff() :3790
void TriggerAnimationState__PlayOff_fn(TriggerAnimationState* __this)
{
    __this->PlayOff();
}

// public void PlayOn() :3796
void TriggerAnimationState__PlayOn_fn(TriggerAnimationState* __this)
{
    __this->PlayOn();
}

// public void PlayToProgress(double progress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) :3868
void TriggerAnimationState__PlayToProgress_fn(TriggerAnimationState* __this, double* progress, int* tendTo, int* flags)
{
    __this->PlayToProgress(*progress, *tendTo, *flags);
}

// public double get_PreviousProgress() :3822
void TriggerAnimationState__get_PreviousProgress_fn(TriggerAnimationState* __this, double* __retval)
{
    *__retval = __this->PreviousProgress();
}

// public double get_Progress() :3812
void TriggerAnimationState__get_Progress_fn(TriggerAnimationState* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public bool get_ProgressFullOff() :3839
void TriggerAnimationState__get_ProgressFullOff_fn(TriggerAnimationState* __this, bool* __retval)
{
    *__retval = __this->ProgressFullOff();
}

// public bool get_ProgressFullOn() :3838
void TriggerAnimationState__get_ProgressFullOn_fn(TriggerAnimationState* __this, bool* __retval)
{
    *__retval = __this->ProgressFullOn();
}

// public generated void add_ProgressUpdated(Uno.Action<object> value) :3693
void TriggerAnimationState__add_ProgressUpdated_fn(TriggerAnimationState* __this, uDelegate* value)
{
    __this->add_ProgressUpdated(value);
}

// public generated void remove_ProgressUpdated(Uno.Action<object> value) :3693
void TriggerAnimationState__remove_ProgressUpdated_fn(TriggerAnimationState* __this, uDelegate* value)
{
    __this->remove_ProgressUpdated(value);
}

// public void SeekProgress(double newProgress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) :3858
void TriggerAnimationState__SeekProgress_fn(TriggerAnimationState* __this, double* newProgress, int* tendTo, int* flags)
{
    __this->SeekProgress(*newProgress, *tendTo, *flags);
}

// private void TrackProgress(Fuse.Animations.Player player) :3695
void TriggerAnimationState__TrackProgress_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::Player* player)
{
    __this->TrackProgress(player);
}

// internal TriggerAnimationState(Fuse.Animations.TriggerAnimation animation, Fuse.Node node) [instance] :3656
void TriggerAnimationState::ctor_(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Node* node)
{
    Animation(animation);
    uPtr(Animation())->add_TimeChanged(uDelegate::New(::TYPES[50/*Uno.Action*/], (void*)TriggerAnimationState__OnTimeChanged_fn, this));
    _node = node;
}

// private generated Fuse.Animations.TriggerAnimation get_Animation() [instance] :3653
::g::Fuse::Animations::TriggerAnimation* TriggerAnimationState::Animation()
{
    return _Animation;
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) [instance] :3653
void TriggerAnimationState::Animation(::g::Fuse::Animations::TriggerAnimation* value)
{
    _Animation = value;
}

// public double get_CurrentAnimatorsDuration() [instance] :3830
double TriggerAnimationState::CurrentAnimatorsDuration()
{
    if (_curPlayer == NULL)
        return uPtr(Animation())->GetAnimatorsDuration(0);

    return uPtr(_curPlayer)->AnimatorsDuration();
}

// public void Dispose() [instance] :3667
void TriggerAnimationState::Dispose()
{
    if (_forePlayer != NULL)
    {
        uPtr(_forePlayer)->Disable();
        _forePlayer = NULL;
    }

    if (_backPlayer != NULL)
    {
        uPtr(_backPlayer)->Disable();
        _backPlayer = NULL;
    }

    _curPlayer = NULL;
    _node = NULL;
}

// private Fuse.Animations.Player GetCurrentPlayer(Fuse.Animations.AnimationVariant tendTo, Fuse.Animations.TriggerAnimationState.SeekFlags flags) [instance] :3841
::g::Fuse::Animations::Player* TriggerAnimationState::GetCurrentPlayer(int tendTo, int flags)
{
    if (!((flags & 1) == 1))
    {
        if (((_curPlayer != NULL) && (uPtr(_curPlayer)->Progress() < 1.0)) && (uPtr(_curPlayer)->Progress() > 0.0))
            return _curPlayer;
    }

    return uAs< ::g::Fuse::Animations::Player*>(GetPlayer(tendTo, false), ::TYPES[85/*Fuse.Animations.Player*/]);
}

// private Fuse.Animations.Player GetPlayer([Fuse.Animations.AnimationVariant variant], [bool noFade]) [instance] :3722
::g::Fuse::Animations::Player* TriggerAnimationState::GetPlayer(int variant, bool noFade)
{
    ::g::Fuse::Animations::Player* cur;
    ::g::Fuse::Animations::Player* prev;
    variant = uPtr(Animation())->RestrictVariant(variant);

    if ((_curPlayer != NULL) && (_curPlayerVariant == variant))
        return _curPlayer;

    bool isNew = false;

    if (variant == 0)
    {
        if (_forePlayer == NULL)
        {
            _forePlayer = uPtr(Animation())->CreatePlayer(_node, variant);
            isNew = true;
        }

        cur = _forePlayer;
        prev = _backPlayer;
    }
    else
    {
        if (_backPlayer == NULL)
        {
            _backPlayer = uPtr(Animation())->CreatePlayer(_node, variant);
            uPtr(_backPlayer)->SeekProgress(1.0, false);
            isNew = true;
        }

        cur = _backPlayer;
        prev = _forePlayer;
    }

    if (isNew)
        TrackProgress(cur);

    _curPlayer = cur;
    _curPlayerVariant = variant;

    if (prev != NULL)
    {
        double prevProgress = uPtr(prev)->Progress();
        prev->SeekProgress(prevProgress, false);
        uPtr(cur)->SeekProgress(prevProgress, false);

        if (isNew)
            cur->Strength(0.0);

        double remainTime = prev->RemainTime();

        if ((prev->IsSyncState() || (remainTime < 9.9999997473787516e-06)) || noFade)
        {
            uPtr(prev)->Strength(0.0);
            uPtr(cur)->Strength(1.0);
        }
        else
        {
            double fadeTime = ::g::Uno::Math::Min(remainTime, uPtr(Animation())->CrossFadeDuration());
            uPtr(cur)->FadeIn(fadeTime);
            uPtr(prev)->FadeOut(fadeTime);
        }
    }

    return cur;
}

// private void OnPlaybackDone(object s) [instance] :3713
void TriggerAnimationState::OnPlaybackDone(uObject* s)
{
    if (s != _curPlayer)
        return;

    if (::g::Uno::Delegate::op_Inequality(PlaybackDone1, NULL))
        uPtr(PlaybackDone1)->InvokeVoid(this);
}

// private void OnProgressUpdated(object s) [instance] :3702
void TriggerAnimationState::OnProgressUpdated(uObject* s)
{
    if (s != _curPlayer)
        return;

    if (::g::Uno::Delegate::op_Inequality(ProgressUpdated1, NULL))
        uPtr(ProgressUpdated1)->InvokeVoid(this);

    _prevProgress = Progress();
}

// private void OnTimeChanged() [instance] :3685
void TriggerAnimationState::OnTimeChanged()
{
    if (_forePlayer != NULL)
        uPtr(_forePlayer)->TimeChanged();

    if (_backPlayer != NULL)
        uPtr(_backPlayer)->TimeChanged();
}

// public generated void add_PlaybackDone(Uno.Action<object> value) [instance] :3694
void TriggerAnimationState::add_PlaybackDone(uDelegate* value)
{
    PlaybackDone1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PlaybackDone1, value), ::TYPES[59/*Uno.Action<object>*/]);
}

// public generated void remove_PlaybackDone(Uno.Action<object> value) [instance] :3694
void TriggerAnimationState::remove_PlaybackDone(uDelegate* value)
{
    PlaybackDone1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PlaybackDone1, value), ::TYPES[59/*Uno.Action<object>*/]);
}

// public void PlayEnd(bool on) [instance] :3802
void TriggerAnimationState::PlayEnd(bool on)
{
    if (on)
        PlayOn();
    else
        PlayOff();
}

// public void PlayOff() [instance] :3790
void TriggerAnimationState::PlayOff()
{
    ::g::Fuse::Animations::Player* p = GetPlayer(1, false);
    uPtr(p)->PlayToStart();
}

// public void PlayOn() [instance] :3796
void TriggerAnimationState::PlayOn()
{
    ::g::Fuse::Animations::Player* p = GetPlayer(0, false);
    uPtr(p)->PlayToEnd();
}

// public void PlayToProgress(double progress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) [instance] :3868
void TriggerAnimationState::PlayToProgress(double progress, int tendTo, int flags)
{
    ::g::Fuse::Animations::Player* player = GetCurrentPlayer(tendTo, flags);
    uPtr(player)->PlayToProgress(progress);
}

// public double get_PreviousProgress() [instance] :3822
double TriggerAnimationState::PreviousProgress()
{
    return _prevProgress;
}

// public double get_Progress() [instance] :3812
double TriggerAnimationState::Progress()
{
    if (_curPlayer != NULL)
        return uPtr(_curPlayer)->Progress();

    return 0.0;
}

// public bool get_ProgressFullOff() [instance] :3839
bool TriggerAnimationState::ProgressFullOff()
{
    return Progress() <= 0.0;
}

// public bool get_ProgressFullOn() [instance] :3838
bool TriggerAnimationState::ProgressFullOn()
{
    return Progress() >= 1.0;
}

// public generated void add_ProgressUpdated(Uno.Action<object> value) [instance] :3693
void TriggerAnimationState::add_ProgressUpdated(uDelegate* value)
{
    ProgressUpdated1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressUpdated1, value), ::TYPES[59/*Uno.Action<object>*/]);
}

// public generated void remove_ProgressUpdated(Uno.Action<object> value) [instance] :3693
void TriggerAnimationState::remove_ProgressUpdated(uDelegate* value)
{
    ProgressUpdated1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressUpdated1, value), ::TYPES[59/*Uno.Action<object>*/]);
}

// public void SeekProgress(double newProgress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) [instance] :3858
void TriggerAnimationState::SeekProgress(double newProgress, int tendTo, int flags)
{
    bool bypassUpdate = (flags & 2) == 2;
    ::g::Fuse::Animations::Player* player = GetCurrentPlayer(tendTo, flags);

    if (bypassUpdate)
        _prevProgress = newProgress;

    uPtr(player)->SeekProgress(newProgress, !bypassUpdate);
}

// private void TrackProgress(Fuse.Animations.Player player) [instance] :3695
void TriggerAnimationState::TrackProgress(::g::Fuse::Animations::Player* player)
{
    uPtr(player)->ProgressUpdated = uDelegate::New(::TYPES[59/*Uno.Action<object>*/], (void*)TriggerAnimationState__OnProgressUpdated_fn, this);
    player->DoneCallback(uDelegate::New(::TYPES[59/*Uno.Action<object>*/], (void*)TriggerAnimationState__OnPlaybackDone_fn, this));
}

// internal TriggerAnimationState New(Fuse.Animations.TriggerAnimation animation, Fuse.Node node) [static] :3656
TriggerAnimationState* TriggerAnimationState::New1(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Node* node)
{
    TriggerAnimationState* obj1 = (TriggerAnimationState*)uNew(TriggerAnimationState_typeof());
    obj1->ctor_(animation, node);
    return obj1;
}
// }

}}} // ::g::Fuse::Animations
