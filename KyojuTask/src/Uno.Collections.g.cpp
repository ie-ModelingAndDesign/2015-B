// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ConcurrentCollection-1.DeferLockImpl.h>
#include <Uno.Collections.ConcurrentCollection-1.h>
#include <Uno.Collections.ConcurrentCollection-1.ModItem.h>
#include <Uno.Collections.Dictionary-2.Bucket.h>
#include <Uno.Collections.Dictionary-2.BucketState.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.h>
#include <Uno.Collections.EmptyEnumerable-1.h>
#include <Uno.Collections.EmptyEnumerator-1.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.EnumerableExtensions.LinkedList-1.h>
#include <Uno.Collections.HashSet-1.Enumerator.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IDictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.IListExtensions.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.LinkedList-1.Enumerator.h>
#include <Uno.Collections.LinkedList-1.h>
#include <Uno.Collections.LinkedListNode-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Collections.Queue-1.Enumerator.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.Collections.ReadOnlyCollection-1.h>
#include <Uno.Collections.SelectEnumerable-2.h>
#include <Uno.Collections.SelectEnumerator-2.h>
#include <Uno.Collections.UnionEnumerable-1.h>
#include <Uno.Collections.UnionEnumerator-1.h>
#include <Uno.Collections.WhereEnumerable-1.h>
#include <Uno.Collections.WhereEnumerator-1.h>
#include <Uno.Comparison-1.h>
#include <Uno.Delegate.h>
#include <Uno.Exception.h>
#include <Uno.Func-2.h>
#include <Uno.Generic.h>
#include <Uno.IDisposable.h>
#include <Uno.IndexOutOfRangeException.h>
#include <Uno.Int.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
static uString* STRINGS[10];
static uType* TYPES[39];

namespace g{
namespace Uno{
namespace Collections{

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(18)
// ----------------------------------------------------------------------------------------

// internal struct Dictionary<TKey, TValue>.Bucket :18
// {
uStructType* Dictionary__Bucket_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 2;
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Collections.Dictionary`2.Bucket", options);
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Collections::Dictionary__BucketState_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(10)
// ----------------------------------------------------------------------------------------

// internal enum Dictionary<TKey, TValue>.BucketState :10
uEnumType* Dictionary__BucketState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Collections.Dictionary`2.BucketState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Empty", 0LL,
        "Used", 1LL,
        "Dummy", 2LL);
    return type;
}

// ../../../../usr/local/share/uno/Packages/FuseCore/0.24.6/Internal/$.uno(179)
// ----------------------------------------------------------------------------

// internal sealed class ConcurrentCollection<T> :179
// {
ConcurrentCollection_type* ConcurrentCollection_typeof()
{
    static uSStrong<ConcurrentCollection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 6;
    options.ObjectSize = sizeof(ConcurrentCollection);
    options.TypeSize = sizeof(ConcurrentCollection_type);
    type = (ConcurrentCollection_type*)uClassType::New("Uno.Collections.ConcurrentCollection`1", options);
    type->fp_ctor_ = (void*)ConcurrentCollection__New1_fn;
    type->interface0.fp_Clear = (void(*)(uObject*))ConcurrentCollection__Clear_fn;
    type->interface0.fp_Add = (void(*)(uObject*, void*))ConcurrentCollection__Add_fn;
    type->interface0.fp_Remove = (void(*)(uObject*, void*, bool*))ConcurrentCollection__Remove_fn;
    type->interface0.fp_Contains = (void(*)(uObject*, void*, bool*))ConcurrentCollection__Contains_fn;
    type->interface0.fp_get_Count = (void(*)(uObject*, int*))ConcurrentCollection__get_Count_fn;
    type->interface1.fp_GetEnumerator = (void(*)(uObject*, uObject**))ConcurrentCollection__GetEnumerator_fn;
    ::TYPES[0] = ::g::Uno::Collections::List_typeof();
    ::TYPES[1] = ConcurrentCollection__ModItem_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Uno::Bool_typeof();
    ::TYPES[4] = ConcurrentCollection__DeferLockImpl_typeof();
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[6] = ::g::Uno::Collections::List__Enumerator_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->SetPrecalc(
        ::TYPES[0/*Uno.Collections.List`1*/]->MakeType(type->T(0)),
        ::TYPES[1/*Uno.Collections.ConcurrentCollection`1.ModItem*/]->MakeType(type->T(0)),
        ::TYPES[0/*Uno.Collections.List`1*/]->MakeType(::TYPES[1/*Uno.Collections.ConcurrentCollection`1.ModItem*/]->MakeType(type->T(0))),
        ::TYPES[4/*Uno.Collections.ConcurrentCollection`1.DeferLockImpl*/]->MakeType(type->T(0)),
        ::TYPES[6/*Uno.Collections.List`1.Enumerator*/]->MakeType(type->T(0)),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0)), offsetof(ConcurrentCollection_type, interface0),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(ConcurrentCollection_type, interface1));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::ConcurrentCollection, _back), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Collections::ConcurrentCollection, _defer), 0,
        ConcurrentCollection__DeferLockImpl_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::ConcurrentCollection, _lockImpl), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(ConcurrentCollection__ModItem_typeof()->MakeType(type->T(0))), offsetof(::g::Uno::Collections::ConcurrentCollection, _mod), 0);
    return type;
}

// public generated ConcurrentCollection() :179
void ConcurrentCollection__ctor__fn(ConcurrentCollection* __this)
{
    __this->ctor_();
}

// public void Add(T item) :233
void ConcurrentCollection__Add_fn(ConcurrentCollection* __this, void* item)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Uno.Collections.ConcurrentCollection<T>.ModItem*/),
        __this->__type->Precalced(2/*Uno.Collections.List<Uno.Collections.ConcurrentCollection<T>.ModItem>*/),
    };
    uT collection1(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret2(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret3(__types[1], U_ALLOCA(__types[1]->ValueSize));
    ;
    ;
    ;

    if (__this->_defer)
    {
        for (int i = 0; i < uPtr(__this->Mod())->Count(); ++i)
            if (::g::Uno::Object::Equals1(uBoxPtr(__types[0], (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->Mod()), uCRef<int>(i), &ret2), ret2)[0/*Item*/]), uBoxPtr(__types[0], item)) && !(::g::Uno::Collections::List__get_Item_fn(uPtr(__this->Mod()), uCRef<int>(i), &ret3), ret3)[1/*Add*/].Value<bool>())
            {
                uPtr(__this->Mod())->RemoveAt(i);
                return;
            }

        ::g::Uno::Collections::List__Add_fn(uPtr(__this->Mod()), (collection1.Default(), collection1[0/*Item*/] = item, collection1[1/*Add*/].Value<bool>() = true, collection1));
    }
    else
        ::g::Uno::Collections::List__Add_fn(uPtr(__this->_back), item);
}

// public void Clear() :226
void ConcurrentCollection__Clear_fn(ConcurrentCollection* __this)
{
    __this->Clear();
}

// public bool Contains(T item) :279
void ConcurrentCollection__Contains_fn(ConcurrentCollection* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Uno.Collections.ConcurrentCollection<T>.ModItem*/),
        __this->__type->Precalced(2/*Uno.Collections.List<Uno.Collections.ConcurrentCollection<T>.ModItem>*/),
    };
    uT ret4(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT m(__types[1], U_ALLOCA(__types[1]->ValueSize));
    ;
    bool ret5;

    if (__this->_mod != NULL)

        for (int i = 0; i < uPtr(__this->_mod)->Count(); ++i)
        {
            m = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_mod), uCRef<int>(i), &ret4), ret4);

            if (!::g::Uno::Object::Equals1(uBoxPtr(__types[0], m[0/*Item*/]), uBoxPtr(__types[0], item)))
                continue;

            return *__retval = m[1/*Add*/].Value<bool>(), void();
        }

    return *__retval = (::g::Uno::Collections::List__Contains_fn(uPtr(__this->_back), item, &ret5), ret5), void();
}

// public int get_Count() :298
void ConcurrentCollection__get_Count_fn(ConcurrentCollection* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public void DeferChanges() :202
void ConcurrentCollection__DeferChanges_fn(ConcurrentCollection* __this)
{
    __this->DeferChanges();
}

// public Uno.IDisposable DeferLock() :346
void ConcurrentCollection__DeferLock_fn(ConcurrentCollection* __this, uObject** __retval)
{
    *__retval = __this->DeferLock();
}

// public void EndDefer() :207
void ConcurrentCollection__EndDefer_fn(ConcurrentCollection* __this)
{
    __this->EndDefer();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :325
void ConcurrentCollection__GetEnumerator_fn(ConcurrentCollection* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public T get_Item(int index) :319
void ConcurrentCollection__get_Item_fn(ConcurrentCollection* __this, int* index, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.List<T>*/),
    };
    uT ret14(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    int index_ = *index;
    return __retval.Store((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_back), uCRef<int>(index_), &ret14), ret14)), void();
}

// private Uno.Collections.List<Uno.Collections.ConcurrentCollection<T>.ModItem> get_Mod() :192
void ConcurrentCollection__get_Mod_fn(ConcurrentCollection* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->Mod();
}

// public generated ConcurrentCollection New() :179
void ConcurrentCollection__New1_fn(uType* __type, ConcurrentCollection** __retval)
{
    *__retval = ConcurrentCollection::New1(__type);
}

// public bool Remove(T item) :253
void ConcurrentCollection__Remove_fn(ConcurrentCollection* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Uno.Collections.ConcurrentCollection<T>.ModItem*/),
        __this->__type->Precalced(2/*Uno.Collections.List<Uno.Collections.ConcurrentCollection<T>.ModItem>*/),
    };
    uT collection2(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret9(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret10(__types[1], U_ALLOCA(__types[1]->ValueSize));
    ;
    ;
    ;
    bool ret11;
    bool ret12;

    if (__this->_defer)
    {
        for (int i = 0; i < uPtr(__this->Mod())->Count(); ++i)
            if (::g::Uno::Object::Equals1(uBoxPtr(__types[0], (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->Mod()), uCRef<int>(i), &ret9), ret9)[0/*Item*/]), uBoxPtr(__types[0], item)) && (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->Mod()), uCRef<int>(i), &ret10), ret10)[1/*Add*/].Value<bool>())
            {
                uPtr(__this->Mod())->RemoveAt(i);
                return *__retval = true, void();
            }

        if ((::g::Uno::Collections::List__Contains_fn(uPtr(__this->_back), item, &ret11), ret11))
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(__this->Mod()), (collection2.Default(), collection2[0/*Item*/] = item, collection2[1/*Add*/].Value<bool>() = false, collection2));
            return *__retval = true, void();
        }

        return *__retval = false, void();
    }

    return *__retval = (::g::Uno::Collections::List__Remove_fn(uPtr(__this->_back), item, &ret12), ret12), void();
}

// public generated ConcurrentCollection() [instance] :179
void ConcurrentCollection::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
        __type->T(0),
    };
    _back = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
}

// public void Clear() [instance] :226
void ConcurrentCollection::Clear()
{
    uPtr(_back)->Clear();

    if (_mod != NULL)
        uPtr(_mod)->Clear();
}

// public int get_Count() [instance] :298
int ConcurrentCollection::Count()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.ConcurrentCollection<T>.ModItem*/),
        __type->T(0),
        __type->Precalced(0/*Uno.Collections.List<T>*/),
        __type->Precalced(2/*Uno.Collections.List<Uno.Collections.ConcurrentCollection<T>.ModItem>*/),
    };
    uT ret13(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    int c = uPtr(_back)->Count();

    if (_mod != NULL)

        for (int i = 0; i < uPtr(_mod)->Count(); ++i)
            if ((::g::Uno::Collections::List__get_Item_fn(uPtr(_mod), uCRef<int>(i), &ret13), ret13)[1/*Add*/].Value<bool>())
                c++;
            else
                c--;

    return c;
}

// public void DeferChanges() [instance] :202
void ConcurrentCollection::DeferChanges()
{
    _defer = true;
}

// public Uno.IDisposable DeferLock() [instance] :346
uObject* ConcurrentCollection::DeferLock()
{
    uType* __types[] = {
        __type->Precalced(3/*Uno.Collections.ConcurrentCollection<T>.DeferLockImpl*/),
        __type->T(0),
    };

    if (_lockImpl == NULL)
        _lockImpl = ConcurrentCollection__DeferLockImpl::New1(__types[0], this);

    DeferChanges();
    return (uObject*)_lockImpl;
}

// public void EndDefer() [instance] :207
void ConcurrentCollection::EndDefer()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.ConcurrentCollection<T>.ModItem*/),
        __type->T(0),
        __type->Precalced(2/*Uno.Collections.List<Uno.Collections.ConcurrentCollection<T>.ModItem>*/),
    };
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT a(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    bool ret7;
    _defer = false;

    if (_mod != NULL)
    {
        for (int i = 0; i < uPtr(_mod)->Count(); ++i)
        {
            a = (::g::Uno::Collections::List__get_Item_fn(uPtr(_mod), uCRef<int>(i), &ret6), ret6);

            if (a[1/*Add*/].Value<bool>())
                ::g::Uno::Collections::List__Add_fn(uPtr(_back), a[0/*Item*/]);
            else
                ::g::Uno::Collections::List__Remove_fn(uPtr(_back), a[0/*Item*/], &ret7);
        }

        uPtr(_mod)->Clear();
    }
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :325
uObject* ConcurrentCollection::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(4/*Uno.Collections.List<T>.Enumerator*/),
        __type->T(0),
        __type->Precalced(5/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return uBoxPtr(__types[0], (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_back), &ret8), ret8));
}

// private Uno.Collections.List<Uno.Collections.ConcurrentCollection<T>.ModItem> get_Mod() [instance] :192
::g::Uno::Collections::List* ConcurrentCollection::Mod()
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.Collections.List<Uno.Collections.ConcurrentCollection<T>.ModItem>*/),
        __type->Precalced(1/*Uno.Collections.ConcurrentCollection<T>.ModItem*/),
        __type->T(0),
    };

    if (_mod == NULL)
        _mod = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));

    return _mod;
}

// public generated ConcurrentCollection New() [static] :179
ConcurrentCollection* ConcurrentCollection::New1(uType* __type)
{
    ConcurrentCollection* obj1 = (ConcurrentCollection*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/FuseCore/0.24.6/Internal/$.uno(330)
// ----------------------------------------------------------------------------

// private sealed class ConcurrentCollection<T>.DeferLockImpl :330
// {
ConcurrentCollection__DeferLockImpl_type* ConcurrentCollection__DeferLockImpl_typeof()
{
    static uSStrong<ConcurrentCollection__DeferLockImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ConcurrentCollection__DeferLockImpl);
    options.TypeSize = sizeof(ConcurrentCollection__DeferLockImpl_type);
    type = (ConcurrentCollection__DeferLockImpl_type*)uClassType::New("Uno.Collections.ConcurrentCollection`1.DeferLockImpl", options);
    type->interface0.fp_Dispose = (void(*)(uObject*))ConcurrentCollection__DeferLockImpl__Dispose_fn;
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ConcurrentCollection__DeferLockImpl_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::ConcurrentCollection_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::ConcurrentCollection__DeferLockImpl, _collection), 0);
    return type;
}

// public DeferLockImpl(Uno.Collections.ConcurrentCollection<T> c) :333
void ConcurrentCollection__DeferLockImpl__ctor__fn(ConcurrentCollection__DeferLockImpl* __this, ::g::Uno::Collections::ConcurrentCollection* c)
{
    __this->ctor_(c);
}

// public void Dispose() :338
void ConcurrentCollection__DeferLockImpl__Dispose_fn(ConcurrentCollection__DeferLockImpl* __this)
{
    __this->Dispose();
}

// public DeferLockImpl New(Uno.Collections.ConcurrentCollection<T> c) :333
void ConcurrentCollection__DeferLockImpl__New1_fn(uType* __type, ::g::Uno::Collections::ConcurrentCollection* c, ConcurrentCollection__DeferLockImpl** __retval)
{
    *__retval = ConcurrentCollection__DeferLockImpl::New1(__type, c);
}

// public DeferLockImpl(Uno.Collections.ConcurrentCollection<T> c) [instance] :333
void ConcurrentCollection__DeferLockImpl::ctor_(::g::Uno::Collections::ConcurrentCollection* c)
{
    _collection = c;
}

// public void Dispose() [instance] :338
void ConcurrentCollection__DeferLockImpl::Dispose()
{
    uPtr(_collection)->EndDefer();
}

// public DeferLockImpl New(Uno.Collections.ConcurrentCollection<T> c) [static] :333
ConcurrentCollection__DeferLockImpl* ConcurrentCollection__DeferLockImpl::New1(uType* __type, ::g::Uno::Collections::ConcurrentCollection* c)
{
    ConcurrentCollection__DeferLockImpl* obj1 = (ConcurrentCollection__DeferLockImpl*)uNew(__type);
    obj1->ctor_(c);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(8)
// ---------------------------------------------------------------------------------------

// public sealed class Dictionary<TKey, TValue> :8
// {
Dictionary_type* Dictionary_typeof()
{
    static uSStrong<Dictionary_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 7;
    options.ObjectSize = sizeof(Dictionary);
    options.TypeSize = sizeof(Dictionary_type);
    type = (Dictionary_type*)uClassType::New("Uno.Collections.Dictionary`2", options);
    type->fp_ctor_ = (void*)Dictionary__New1_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))Dictionary__UnoCollectionsICollectionUnoCollectionsKeyValuePairTKeyTValueAdd_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))Dictionary__UnoCollectionsICollectionUnoCollectionsKeyValuePairTKeyTValueRemove_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))Dictionary__UnoCollectionsICollectionUnoCollectionsKeyValuePairTKeyTValueContains_fn;
    type->interface0.fp_TryGetValue = (void(*)(uObject*, void*, uTRef, bool*))Dictionary__TryGetValue_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))Dictionary__Clear_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int*))Dictionary__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))Dictionary__GetEnumerator_boxed_fn;
    ::STRINGS[0] = uString::Const("Dictionary already contains the given key");
    ::STRINGS[1] = uString::Const("Dictionary did not contain the given key");
    ::TYPES[8] = uObject_typeof()->Array();
    ::TYPES[9] = ::g::Uno::Int_typeof();
    ::TYPES[10] = Dictionary__Bucket_typeof();
    ::TYPES[11] = ::g::Uno::Generic_typeof();
    ::TYPES[12] = Dictionary__Enumerator_typeof();
    ::TYPES[13] = ::g::Uno::Collections::KeyValuePair_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[14] = Dictionary__ValueCollection_typeof();
    type->SetPrecalc(
        ::TYPES[10/*Uno.Collections.Dictionary`2.Bucket*/]->MakeType(type->T(0), type->T(1))->Array(),
        ::TYPES[10/*Uno.Collections.Dictionary`2.Bucket*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[11/*Uno.Generic*/]->MakeMethod(1, type->T(0)),
        ::TYPES[12/*Uno.Collections.Dictionary`2.Enumerator*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[13/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(::TYPES[13/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1))),
        ::TYPES[14/*Uno.Collections.Dictionary`2.ValueCollection*/]->MakeType(type->T(0), type->T(1)));
    type->SetInterfaces(
        ::g::Uno::Collections::IDictionary_typeof()->MakeType(type->T(0), type->T(1)), offsetof(Dictionary_type, interface0),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1))), offsetof(Dictionary_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1))), offsetof(Dictionary_type, interface2));
    type->SetFields(0,
        Dictionary__Bucket_typeof()->MakeType(type->T(0), type->T(1))->Array(), offsetof(::g::Uno::Collections::Dictionary, _buckets), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Dictionary, _count), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Dictionary, _dummies), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Dictionary, _version), 0);
    return type;
}

// public Dictionary() :267
void Dictionary__ctor__fn(Dictionary* __this)
{
    __this->ctor_();
}

// public void Add(TKey key, TValue value) :329
void Dictionary__Add_fn(Dictionary* __this, void* key, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
        __this->__type->Precalced(1/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
        __this->__type->Precalced(2/*Uno.Generic.Equals<TKey>*/),
    };
    bool ret6;

    if ((__this->_count + __this->_dummies) > (uPtr(__this->_buckets)->Length() / 2))
        __this->Rehash();

    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__types[0], key, U_ALLOCA(__types[0]->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
        {
            uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() = 1;
            uPtr(__this->_buckets)->TItem(x)[1/*Value*/] = value;
            uPtr(__this->_buckets)->TItem(x)[0/*Key*/] = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 2)
        {
            uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() = 1;
            uPtr(__this->_buckets)->TItem(x)[1/*Value*/] = value;
            uPtr(__this->_buckets)->TItem(x)[0/*Key*/] = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[4], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret6), ret6))
                U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Dictionary ...*/]));
        }

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// public void Clear() :315
void Dictionary__Clear_fn(Dictionary* __this)
{
    __this->Clear();
}

// public bool ContainsKey(TKey key) :428
void Dictionary__ContainsKey_fn(Dictionary* __this, void* key, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
        __this->__type->Precalced(1/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
        __this->__type->T(1),
        __this->__type->Precalced(2/*Uno.Generic.Equals<TKey>*/),
    };
    bool ret7;
    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__types[0], key, U_ALLOCA(__types[0]->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[4], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret7), ret7))
                return *__retval = true, void();
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
            return *__retval = false, void();

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// public int get_Count() :299
void Dictionary__get_Count_fn(Dictionary* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.Dictionary<TKey, TValue>.Enumerator GetEnumerator() :282
void Dictionary__GetEnumerator_fn(Dictionary* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(3/*Uno.Collections.Dictionary<TKey, TValue>.Enumerator*/),
        __this->__type->T(0),
        __this->__type->T(1),
    };
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((Dictionary__Enumerator__New1_fn(__types[0], __this, &ret8), ret8)), void();
}

// public Uno.Collections.Dictionary<TKey, TValue>.Enumerator GetEnumerator() :282
void Dictionary__GetEnumerator_boxed_fn(Dictionary* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// public TValue get_Item(TKey key) :455
void Dictionary__get_Item_fn(Dictionary* __this, void* key, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
        __this->__type->Precalced(1/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
        __this->__type->T(1),
        __this->__type->Precalced(2/*Uno.Generic.Equals<TKey>*/),
    };
    bool ret13;
    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__types[0], key, U_ALLOCA(__types[0]->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[4], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret13), ret13))
                return __retval.Store(uPtr(__this->_buckets)->TItem(x)[1/*Value*/]), void();
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"Dictionary ...*/]));

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// public void set_Item(TKey key, TValue value) :479
void Dictionary__set_Item_fn(Dictionary* __this, void* key, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
        __this->__type->Precalced(1/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
        __this->__type->Precalced(2/*Uno.Generic.Equals<TKey>*/),
    };
    bool ret14;
    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__types[0], key, U_ALLOCA(__types[0]->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[4], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret14), ret14))
            {
                uPtr(__this->_buckets)->TItem(x)[1/*Value*/] = value;
                __this->_version++;
                return;
            }
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
        {
            Dictionary__Add_fn(__this, key, value);
            return;
        }

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// public Dictionary New() :267
void Dictionary__New1_fn(uType* __type, Dictionary** __retval)
{
    *__retval = Dictionary::New1(__type);
}

// private void Rehash() :302
void Dictionary__Rehash_fn(Dictionary* __this)
{
    __this->Rehash();
}

// public bool Remove(TKey key) :397
void Dictionary__Remove_fn(Dictionary* __this, void* key, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
        __this->__type->Precalced(1/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
        __this->__type->T(1),
        __this->__type->Precalced(2/*Uno.Generic.Equals<TKey>*/),
    };
    bool ret9;
    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__types[0], key, U_ALLOCA(__types[0]->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[4], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret9), ret9))
            {
                uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() = 2;
                uPtr(__this->_buckets)->TItem(x)[1/*Value*/].Default();
                uPtr(__this->_buckets)->TItem(x)[0/*Key*/].Default();
                __this->_count--;
                __this->_dummies++;
                __this->_version++;
                return *__retval = true, void();
            }
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
            return *__retval = false, void();

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// public bool TryGetValue(TKey key, TValue& value) :370
void Dictionary__TryGetValue_fn(Dictionary* __this, void* key, uTRef value, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
        __this->__type->Precalced(1/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
        __this->__type->Precalced(2/*Uno.Generic.Equals<TKey>*/),
    };
    bool ret10;
    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__types[0], key, U_ALLOCA(__types[0]->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[4], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret10), ret10))
            {
                value.Store(uPtr(__this->_buckets)->TItem(x)[1/*Value*/]);
                return *__retval = true, void();
            }
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
        {
            value.Default(__types[1]);
            return *__retval = false, void();
        }

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// private void Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>.Add(Uno.Collections.KeyValuePair<TKey, TValue> item) :508
void Dictionary__UnoCollectionsICollectionUnoCollectionsKeyValuePairTKeyTValueAdd_fn(Dictionary* __this, void* item)
{
    uType* __types[] = {
        __this->__type->Precalced(4/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
        __this->__type->T(0),
        __this->__type->T(1),
    };
    uT ret11(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT item_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret12(__types[2], U_ALLOCA(__types[2]->ValueSize));
    ;
    item_ = item;
    ;
    Dictionary__Add_fn(__this, (::g::Uno::Collections::KeyValuePair__get_Key_fn(&item_, __types[0], &ret11), ret11), (::g::Uno::Collections::KeyValuePair__get_Value_fn(&item_, __types[0], &ret12), ret12));
}

// private bool Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>.Contains(Uno.Collections.KeyValuePair<TKey, TValue> item) :518
void Dictionary__UnoCollectionsICollectionUnoCollectionsKeyValuePairTKeyTValueContains_fn(Dictionary* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(4/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
        __this->__type->T(0),
        __this->__type->T(1),
    };
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private bool Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>.Remove(Uno.Collections.KeyValuePair<TKey, TValue> item) :513
void Dictionary__UnoCollectionsICollectionUnoCollectionsKeyValuePairTKeyTValueRemove_fn(Dictionary* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(4/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
        __this->__type->T(0),
        __this->__type->T(1),
    };
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// public Uno.Collections.Dictionary<TKey, TValue>.ValueCollection get_Values() :294
void Dictionary__get_Values_fn(Dictionary* __this, Dictionary__ValueCollection** __retval)
{
    *__retval = __this->Values();
}

// public Dictionary() [instance] :267
void Dictionary::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
    };
    _buckets = uArray::New(__types[0], 8);
    _count = 0;
    _dummies = 0;
}

// public void Clear() [instance] :315
void Dictionary::Clear()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
        __type->Precalced(1/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
        __type->T(0),
        __type->T(1),
    };

    for (int i = 0; i < uPtr(_buckets)->Length(); i++)
    {
        uPtr(_buckets)->TItem(i)[2/*State*/].Value<int>() = 0;
        uPtr(_buckets)->TItem(i)[1/*Value*/].Default();
        uPtr(_buckets)->TItem(i)[0/*Key*/].Default();
    }

    _count = 0;
    _dummies = 0;
    _version++;
}

// public int get_Count() [instance] :299
int Dictionary::Count()
{
    return _count;
}

// public Uno.Collections.Dictionary<TKey, TValue>.Enumerator GetEnumerator() [instance] :282
uObject* Dictionary::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(3/*Uno.Collections.Dictionary<TKey, TValue>.Enumerator*/),
        __type->T(0),
        __type->T(1),
        __type->Precalced(5/*Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<TKey, TValue>>*/),
        __type->Precalced(4/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
    };
    uT ret15(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return uBoxPtr(__types[0], (Dictionary__GetEnumerator_fn(this, &ret15), ret15));
}

// private void Rehash() [instance] :302
void Dictionary::Rehash()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
        __type->Precalced(1/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
        __type->T(0),
        __type->T(1),
    };
    uArray* oldBuckets = _buckets;
    _buckets = uArray::New(__types[0], uPtr(oldBuckets)->Length() * 2);
    _count = 0;
    _dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
        if (oldBuckets->TItem(i)[2/*State*/].Value<int>() == 1)
            Dictionary__Add_fn(this, oldBuckets->TItem(i)[0/*Key*/], oldBuckets->TItem(i)[1/*Value*/]);
}

// public Uno.Collections.Dictionary<TKey, TValue>.ValueCollection get_Values() [instance] :294
Dictionary__ValueCollection* Dictionary::Values()
{
    uType* __types[] = {
        __type->Precalced(6/*Uno.Collections.Dictionary<TKey, TValue>.ValueCollection*/),
        __type->T(0),
        __type->T(1),
    };
    return Dictionary__ValueCollection::New1(__types[0], this);
}

// public Dictionary New() [static] :267
Dictionary* Dictionary::New1(uType* __type)
{
    Dictionary* obj1 = (Dictionary*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Uno.Collections/0.24.0/Extensions/$.uno(5)
// -----------------------------------------------------------------------------------

// public sealed class EmptyEnumerable<T> :5
// {
EmptyEnumerable_type* EmptyEnumerable_typeof()
{
    static uSStrong<EmptyEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(EmptyEnumerable);
    options.TypeSize = sizeof(EmptyEnumerable_type);
    type = (EmptyEnumerable_type*)uClassType::New("Uno.Collections.EmptyEnumerable`1", options);
    type->fp_ctor_ = (void*)EmptyEnumerable__New1_fn;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))EmptyEnumerable__GetEnumerator_fn;
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[15] = ::g::Uno::Collections::EmptyEnumerator_typeof();
    type->SetPrecalc(
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)),
        ::TYPES[15/*Uno.Collections.EmptyEnumerator`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(EmptyEnumerable_type, interface0));
    return type;
}

// public generated EmptyEnumerable() :5
void EmptyEnumerable__ctor__fn(EmptyEnumerable* __this)
{
    __this->ctor_();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :7
void EmptyEnumerable__GetEnumerator_fn(EmptyEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public generated EmptyEnumerable New() :5
void EmptyEnumerable__New1_fn(uType* __type, EmptyEnumerable** __retval)
{
    *__retval = EmptyEnumerable::New1(__type);
}

// public generated EmptyEnumerable() [instance] :5
void EmptyEnumerable::ctor_()
{
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :7
uObject* EmptyEnumerable::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerator<T>*/),
        __type->T(0),
        __type->Precalced(1/*Uno.Collections.EmptyEnumerator<T>*/),
    };
    return (uObject*)((::g::Uno::Collections::EmptyEnumerator*)::g::Uno::Collections::EmptyEnumerator::New1(__types[2]));
}

// public generated EmptyEnumerable New() [static] :5
EmptyEnumerable* EmptyEnumerable::New1(uType* __type)
{
    EmptyEnumerable* obj1 = (EmptyEnumerable*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Uno.Collections/0.24.0/Extensions/$.uno(13)
// ------------------------------------------------------------------------------------

// internal sealed class EmptyEnumerator<T> :13
// {
EmptyEnumerator_type* EmptyEnumerator_typeof()
{
    static uSStrong<EmptyEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(EmptyEnumerator);
    options.TypeSize = sizeof(EmptyEnumerator_type);
    type = (EmptyEnumerator_type*)uClassType::New("Uno.Collections.EmptyEnumerator`1", options);
    type->fp_ctor_ = (void*)EmptyEnumerator__New1_fn;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))EmptyEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))EmptyEnumerator__Dispose_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))EmptyEnumerator__MoveNext_fn;
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(EmptyEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(EmptyEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(EmptyEnumerator_type, interface2));
    return type;
}

// public generated EmptyEnumerator() :13
void EmptyEnumerator__ctor__fn(EmptyEnumerator* __this)
{
    __this->ctor_();
}

// public T get_Current() :15
void EmptyEnumerator__get_Current_fn(EmptyEnumerator* __this, uTRef __retval)
{
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// public void Dispose() :18
void EmptyEnumerator__Dispose_fn(EmptyEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :17
void EmptyEnumerator__MoveNext_fn(EmptyEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public generated EmptyEnumerator New() :13
void EmptyEnumerator__New1_fn(uType* __type, EmptyEnumerator** __retval)
{
    *__retval = EmptyEnumerator::New1(__type);
}

// public generated EmptyEnumerator() [instance] :13
void EmptyEnumerator::ctor_()
{
}

// public void Dispose() [instance] :18
void EmptyEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :17
bool EmptyEnumerator::MoveNext()
{
    return false;
}

// public generated EmptyEnumerator New() [static] :13
EmptyEnumerator* EmptyEnumerator::New1(uType* __type)
{
    EmptyEnumerator* obj1 = (EmptyEnumerator*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Uno.Collections/0.24.0/Extensions/$.uno(27)
// ------------------------------------------------------------------------------------

// public static class EnumerableExtensions :27
// {
uClassType* EnumerableExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Collections.EnumerableExtensions", options);
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[16] = ::g::Uno::Predicate_typeof();
    ::TYPES[17] = ::g::Uno::Collections::IEnumerable_typeof();
    ::TYPES[18] = ::g::Uno::Collections::SelectEnumerable_typeof();
    ::TYPES[19] = EnumerableExtensions__LinkedList_typeof();
    ::TYPES[8] = uObject_typeof()->Array();
    ::TYPES[20] = ::g::Uno::Collections::UnionEnumerable_typeof();
    ::TYPES[21] = ::g::Uno::Collections::WhereEnumerable_typeof();
    return type;
}

// public static int Count<T>(Uno.Collections.IEnumerable<T> self) :133
void EnumerableExtensions__Count_fn(uType* __type, uObject* self, int* __retval)
{
    *__retval = EnumerableExtensions::Count(__type, self);
}

// public static T First<T>(Uno.Collections.IEnumerable<T> self) :163
void EnumerableExtensions__First_fn(uType* __type, uObject* self, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(__type->U(0)),
    };
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT item(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__types[0]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[1]), &ret6), ret6);
        return __retval.Store(item), void();
    }

    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// public static T FirstOrDefault<T>(Uno.Collections.IEnumerable<T> self, Uno.Predicate<T> where) :170
void EnumerableExtensions__FirstOrDefault1_fn(uType* __type, uObject* self, uDelegate* where, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(__type->U(0)),
        ::TYPES[16/*Uno.Predicate`1*/]->MakeType(__type->U(0)),
    };
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT item(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    bool ret9;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__types[0]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[1]), &ret8), ret8);

        if ((uPtr(where)->Invoke(&ret9, 1, (void*)item), ret9))
            return __retval.Store(item), void();
    }

    return __retval.Store(__types[0], uT(__types[0], U_ALLOCA(__types[0]->ValueSize))), void();
}

// public static Uno.Collections.IEnumerable<TRet> Select<T, TRet>(Uno.Collections.IEnumerable<T> self, Uno.Func<T, TRet> func) :53
void EnumerableExtensions__Select_fn(uType* __type, uObject* self, uDelegate* func, uObject** __retval)
{
    *__retval = EnumerableExtensions::Select(__type, self, func);
}

// public static T[] ToArray<T>(Uno.Collections.IEnumerable<T> self) :92
void EnumerableExtensions__ToArray_fn(uType* __type, uObject* self, uArray** __retval)
{
    *__retval = EnumerableExtensions::ToArray(__type, self);
}

// public static Uno.Collections.IEnumerable<T> Union<T>(Uno.Collections.IEnumerable<T> self, Uno.Collections.IEnumerable<T> other) :58
void EnumerableExtensions__Union_fn(uType* __type, uObject* self, uObject* other, uObject** __retval)
{
    *__retval = EnumerableExtensions::Union(__type, self, other);
}

// public static Uno.Collections.IEnumerable<T> Where<T>(Uno.Collections.IEnumerable<T> self, Uno.Predicate<T> predicate) :63
void EnumerableExtensions__Where_fn(uType* __type, uObject* self, uDelegate* predicate, uObject** __retval)
{
    *__retval = EnumerableExtensions::Where(__type, self, predicate);
}

// public static int Count<T>(Uno.Collections.IEnumerable<T> self) [static] :133
int EnumerableExtensions::Count(uType* __type, uObject* self)
{
    int c = 0;
    uObject* enumerator = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__type->U(0))));

    while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enumerator), ::g::Uno::Collections::IEnumerator_typeof())))
        c++;

    return c;
}

// public static Uno.Collections.IEnumerable<TRet> Select<T, TRet>(Uno.Collections.IEnumerable<T> self, Uno.Func<T, TRet> func) [static] :53
uObject* EnumerableExtensions::Select(uType* __type, uObject* self, uDelegate* func)
{
    uType* __types[] = {
        ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__type->U(1)),
        __type->U(1),
        ::TYPES[18/*Uno.Collections.SelectEnumerable`2*/]->MakeType(__type->U(0), __type->U(1)),
        __type->U(0),
    };
    return (uObject*)((::g::Uno::Collections::SelectEnumerable*)::g::Uno::Collections::SelectEnumerable::New1(__types[2], self, func));
}

// public static T[] ToArray<T>(Uno.Collections.IEnumerable<T> self) [static] :92
uArray* EnumerableExtensions::ToArray(uType* __type, uObject* self)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(__type->U(0)),
        ::TYPES[19/*Uno.Collections.EnumerableExtensions.LinkedList`1*/]->MakeType(__type->U(0)),
        __type->U(0)->Array(),
    };
    uT ret15(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT item(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    EnumerableExtensions__LinkedList* ret16;
    EnumerableExtensions__LinkedList* head = NULL;
    int count = 0;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__types[0]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[1]), &ret15), ret15);
        head = (EnumerableExtensions__LinkedList__New1_fn(__types[2], item, head, &ret16), ret16);
        count++;
    }

    uArray* res = uArray::New(__types[3], count);

    for (EnumerableExtensions__LinkedList* current = head; current != NULL; current = (EnumerableExtensions__LinkedList*)uPtr(current)->Next)
        res->TItem(--count) = uPtr(current)->Item();

    return res;
}

// public static Uno.Collections.IEnumerable<T> Union<T>(Uno.Collections.IEnumerable<T> self, Uno.Collections.IEnumerable<T> other) [static] :58
uObject* EnumerableExtensions::Union(uType* __type, uObject* self, uObject* other)
{
    uType* __types[] = {
        ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        ::TYPES[20/*Uno.Collections.UnionEnumerable`1*/]->MakeType(__type->U(0)),
    };
    return (uObject*)((::g::Uno::Collections::UnionEnumerable*)::g::Uno::Collections::UnionEnumerable::New1(__types[2], self, other));
}

// public static Uno.Collections.IEnumerable<T> Where<T>(Uno.Collections.IEnumerable<T> self, Uno.Predicate<T> predicate) [static] :63
uObject* EnumerableExtensions::Where(uType* __type, uObject* self, uDelegate* predicate)
{
    uType* __types[] = {
        ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        ::TYPES[21/*Uno.Collections.WhereEnumerable`1*/]->MakeType(__type->U(0)),
    };
    return (uObject*)((::g::Uno::Collections::WhereEnumerable*)::g::Uno::Collections::WhereEnumerable::New1(__types[2], self, predicate));
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(535)
// -----------------------------------------------------------------------------------------

// public struct HashSet<T>.Enumerator :535
// {
// public T get_Current() [adapter] :551
static void HashSet__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    HashSet__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :554
static void HashSet__Enumerator__Dispose_ex(uObject* __this)
{
    HashSet__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :566
static void HashSet__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    HashSet__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

HashSet__Enumerator_type* HashSet__Enumerator_typeof()
{
    static uSStrong<HashSet__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 3;
    options.TypeSize = sizeof(HashSet__Enumerator_type);
    type = (HashSet__Enumerator_type*)uStructType::New("Uno.Collections.HashSet`1.Enumerator", options);
    type->interface0.fp_get_Current = HashSet__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = HashSet__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = HashSet__Enumerator__MoveNext_ex;
    ::STRINGS[2] = uString::Const("Collection was modified");
    ::TYPES[22] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[3] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Uno::Int_typeof();
    ::TYPES[10] = ::g::Uno::Collections::Dictionary__Bucket_typeof();
    ::TYPES[8] = uObject_typeof()->Array();
    type->SetPrecalc(
        ::TYPES[22/*Uno.Collections.Dictionary`2*/]->MakeType(type->T(0), ::TYPES[3/*bool*/]),
        ::TYPES[10/*Uno.Collections.Dictionary`2.Bucket*/]->MakeType(type->T(0), ::TYPES[3/*bool*/]),
        ::TYPES[10/*Uno.Collections.Dictionary`2.Bucket*/]->MakeType(type->T(0), ::TYPES[3/*bool*/])->Array());
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(HashSet__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(HashSet__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(HashSet__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), ::g::Uno::Bool_typeof()), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// internal Enumerator(Uno.Collections.Dictionary<T, bool> source) :542
void HashSet__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Dictionary* source)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<T, bool>*/),
        __type->T(0),
    };
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>() = source;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
}

// public T get_Current() :551
void HashSet__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 1/*_current*/)), void();
}

// public void Dispose() :554
void HashSet__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :566
void HashSet__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<T, bool>*/),
        __type->T(0),
        __type->Precalced(1/*Uno.Collections.Dictionary<T, bool>.Bucket*/),
        __type->Precalced(2/*Uno.Collections.Dictionary<T, bool>.Bucket[]*/),
    };
    uT bucket(__types[2], U_ALLOCA(__types[2]->ValueSize));

    if (__type->Field(__this, 3/*_version*/).Value<int>() != uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[2/*"Collection ...*/]));

    do
    {
        __type->Field(__this, 2/*_iterator*/).Value<int>()++;

        if (__type->Field(__this, 2/*_iterator*/).Value<int>() >= uPtr((uArray*)uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->Length())
            return *__retval = false, void();
    }
    while (uPtr((uArray*)uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>())[2/*State*/].Value<int>() != 1);

    bucket = uPtr((uArray*)uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>());
    __type->Field(__this, 1/*_current*/) = bucket[0/*Key*/];
    return *__retval = true, void();
}

// internal Enumerator New(Uno.Collections.Dictionary<T, bool> source) :542
void HashSet__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    ;
    HashSet__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(1023)
// ------------------------------------------------------------------------------------------

// public struct List<T>.Enumerator :1023
// {
// public T get_Current() [adapter] :1039
static void List__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    List__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :1042
static void List__Enumerator__Dispose_ex(uObject* __this)
{
    List__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :1054
static void List__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    List__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

List__Enumerator_type* List__Enumerator_typeof()
{
    static uSStrong<List__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.TypeSize = sizeof(List__Enumerator_type);
    type = (List__Enumerator_type*)uStructType::New("Uno.Collections.List`1.Enumerator", options);
    type->interface0.fp_get_Current = List__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = List__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = List__Enumerator__MoveNext_ex;
    ::STRINGS[2] = uString::Const("Collection was modified");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof();
    type->SetPrecalc(
        ::TYPES[0/*Uno.Collections.List`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(List__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(List__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(List__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0)), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// internal Enumerator(Uno.Collections.List<T> source) :1030
void List__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::List* source)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
        __type->T(0),
    };
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::List*>() = source;
    __type->Field(__this, 1/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
}

// public T get_Current() :1039
void List__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 3/*_current*/)), void();
}

// public void Dispose() :1042
void List__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :1054
void List__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
        __type->T(0),
    };

    if (uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::List*>())->_version != __type->Field(__this, 1/*_version*/).Value<int>())
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[2/*"Collection ...*/]));

    __type->Field(__this, 2/*_iterator*/).Value<int>()++;

    if (__type->Field(__this, 2/*_iterator*/).Value<int>() < uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::List*>())->_used)
    {
        __type->Field(__this, 3/*_current*/) = uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::List*>())->_data)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>());
        return *__retval = true, void();
    }

    return *__retval = false, void();
}

// internal Enumerator New(Uno.Collections.List<T> source) :1030
void List__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::List* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    ;
    List__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(823)
// -----------------------------------------------------------------------------------------

// public struct LinkedList<T>.Enumerator :823
// {
// public T get_Current() [adapter] :834
static void LinkedList__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    LinkedList__Enumerator__get_Current_fn((LinkedList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :836
static void LinkedList__Enumerator__Dispose_ex(uObject* __this)
{
    LinkedList__Enumerator__Dispose_fn((LinkedList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :846
static void LinkedList__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    LinkedList__Enumerator__MoveNext_fn((LinkedList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

LinkedList__Enumerator_type* LinkedList__Enumerator_typeof()
{
    static uSStrong<LinkedList__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.ValueSize = sizeof(LinkedList__Enumerator);
    options.TypeSize = sizeof(LinkedList__Enumerator_type);
    type = (LinkedList__Enumerator_type*)uStructType::New("Uno.Collections.LinkedList`1.Enumerator", options);
    type->interface0.fp_get_Current = LinkedList__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = LinkedList__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = LinkedList__Enumerator__MoveNext_ex;
    ::TYPES[23] = ::g::Uno::Collections::LinkedList_typeof();
    ::TYPES[24] = ::g::Uno::Collections::LinkedListNode_typeof();
    type->SetPrecalc(
        ::TYPES[23/*Uno.Collections.LinkedList`1*/]->MakeType(type->T(0)),
        ::TYPES[24/*Uno.Collections.LinkedListNode`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(LinkedList__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(LinkedList__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(LinkedList__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::LinkedList_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::LinkedList__Enumerator, _list), 0,
        ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::LinkedList__Enumerator, _current), 0,
        ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::LinkedList__Enumerator, _next), 0);
    return type;
}

// internal Enumerator(Uno.Collections.LinkedList<T> list) :828
void LinkedList__Enumerator__ctor__fn(LinkedList__Enumerator* __this, uType* __type, ::g::Uno::Collections::LinkedList* list)
{
    __this->ctor_(__type, list);
}

// public T get_Current() :834
void LinkedList__Enumerator__get_Current_fn(LinkedList__Enumerator* __this, uType* __type, uTRef __retval)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(1/*Uno.Collections.LinkedListNode<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(__this->_current), &ret2), ret2)), void();
}

// public void Dispose() :836
void LinkedList__Enumerator__Dispose_fn(LinkedList__Enumerator* __this, uType* __type)
{
    __this->Dispose(__type);
}

// public bool MoveNext() :846
void LinkedList__Enumerator__MoveNext_fn(LinkedList__Enumerator* __this, uType* __type, bool* __retval)
{
    *__retval = __this->MoveNext(__type);
}

// internal Enumerator New(Uno.Collections.LinkedList<T> list) :828
void LinkedList__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::LinkedList* list, LinkedList__Enumerator* __retval)
{
    *__retval = LinkedList__Enumerator__New1(__type, list);
}

// internal Enumerator(Uno.Collections.LinkedList<T> list) [instance] :828
void LinkedList__Enumerator::ctor_(uType* __type, ::g::Uno::Collections::LinkedList* list)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.LinkedList<T>*/),
        __type->T(0),
    };
    _list = list;
    _next = uPtr(_list)->First();
}

// public void Dispose() [instance] :836
void LinkedList__Enumerator::Dispose(uType* __type)
{
}

// public bool MoveNext() [instance] :846
bool LinkedList__Enumerator::MoveNext(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.LinkedListNode<T>*/),
        __type->T(0),
    };

    if (_next == NULL)
        return false;

    _current = _next;
    _next = ((::g::Uno::Collections::LinkedListNode*)uPtr(_next)->Next());
    return true;
}

// internal Enumerator New(Uno.Collections.LinkedList<T> list) [static] :828
LinkedList__Enumerator LinkedList__Enumerator__New1(uType* __type, ::g::Uno::Collections::LinkedList* list)
{
    LinkedList__Enumerator obj1;
    obj1.ctor_(__type, list);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(25)
// ----------------------------------------------------------------------------------------

// public struct Dictionary<TKey, TValue>.Enumerator :25
// {
// public Uno.Collections.KeyValuePair<TKey, TValue> get_Current() [adapter] :41
static void Dictionary__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    Dictionary__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :44
static void Dictionary__Enumerator__Dispose_ex(uObject* __this)
{
    Dictionary__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :56
static void Dictionary__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    Dictionary__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

Dictionary__Enumerator_type* Dictionary__Enumerator_typeof()
{
    static uSStrong<Dictionary__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 4;
    options.TypeSize = sizeof(Dictionary__Enumerator_type);
    type = (Dictionary__Enumerator_type*)uStructType::New("Uno.Collections.Dictionary`2.Enumerator", options);
    type->interface0.fp_get_Current = Dictionary__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = Dictionary__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = Dictionary__Enumerator__MoveNext_ex;
    ::STRINGS[2] = uString::Const("Collection was modified");
    ::TYPES[22] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[13] = ::g::Uno::Collections::KeyValuePair_typeof();
    ::TYPES[9] = ::g::Uno::Int_typeof();
    ::TYPES[10] = ::g::Uno::Collections::Dictionary__Bucket_typeof();
    ::TYPES[8] = uObject_typeof()->Array();
    type->SetPrecalc(
        ::TYPES[22/*Uno.Collections.Dictionary`2*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[13/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[10/*Uno.Collections.Dictionary`2.Bucket*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[10/*Uno.Collections.Dictionary`2.Bucket*/]->MakeType(type->T(0), type->T(1))->Array());
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1))), offsetof(Dictionary__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Dictionary__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(Dictionary__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), type->T(1)), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1)), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// internal Enumerator(Uno.Collections.Dictionary<TKey, TValue> source) :32
void Dictionary__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Dictionary* source)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>*/),
        __type->T(0),
        __type->T(1),
    };
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>() = source;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
}

// public Uno.Collections.KeyValuePair<TKey, TValue> get_Current() :41
void Dictionary__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 1/*_current*/)), void();
}

// public void Dispose() :44
void Dictionary__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :56
void Dictionary__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
        __type->T(0),
        __type->T(1),
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>*/),
        __type->Precalced(2/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
        __type->Precalced(3/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT bucket(__types[4], U_ALLOCA(__types[4]->ValueSize));
    ;

    if (__type->Field(__this, 3/*_version*/).Value<int>() != uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[2/*"Collection ...*/]));

    do
    {
        __type->Field(__this, 2/*_iterator*/).Value<int>()++;

        if (__type->Field(__this, 2/*_iterator*/).Value<int>() >= uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->Length())
            return *__retval = false, void();
    }
    while (uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>())[2/*State*/].Value<int>() != 1);

    bucket = uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>());
    __type->Field(__this, 1/*_current*/) = (::g::Uno::Collections::KeyValuePair__New1_fn(__types[0], bucket[0/*Key*/], bucket[1/*Value*/], &ret2), ret2);
    return *__retval = true, void();
}

// internal Enumerator New(Uno.Collections.Dictionary<TKey, TValue> source) :32
void Dictionary__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    ;
    Dictionary__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(1237)
// ------------------------------------------------------------------------------------------

// public struct Queue<T>.Enumerator :1237
// {
// public T get_Current() [adapter] :1254
static void Queue__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    Queue__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :1264
static void Queue__Enumerator__Dispose_ex(uObject* __this)
{
    Queue__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :1275
static void Queue__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    Queue__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

Queue__Enumerator_type* Queue__Enumerator_typeof()
{
    static uSStrong<Queue__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.TypeSize = sizeof(Queue__Enumerator_type);
    type = (Queue__Enumerator_type*)uStructType::New("Uno.Collections.Queue`1.Enumerator", options);
    type->interface0.fp_get_Current = Queue__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = Queue__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = Queue__Enumerator__MoveNext_ex;
    ::STRINGS[2] = uString::Const("Collection was modified");
    ::STRINGS[3] = uString::Const("Enumerator is invalid");
    ::TYPES[25] = ::g::Uno::Collections::Queue_typeof();
    type->SetPrecalc(
        ::TYPES[25/*Uno.Collections.Queue`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(Queue__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Queue__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(Queue__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::Queue_typeof()->MakeType(type->T(0)), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// internal Enumerator(Uno.Collections.Queue<T> source) :1244
void Queue__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Queue* source)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Queue<T>*/),
        __type->T(0),
    };
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Queue*>() = source;
    __type->Field(__this, 3/*_current*/).Default();
    __type->Field(__this, 1/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_index*/).Value<int>() = -1;
}

// public T get_Current() :1254
void Queue__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    if (__type->Field(__this, 2/*_index*/).Value<int>() < 0)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[3/*"Enumerator ...*/]));

    return __retval.Store(__type->Field(__this, 3/*_current*/)), void();
}

// public void Dispose() :1264
void Queue__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :1275
void Queue__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Uno.Collections.Queue<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Queue*>())->_version != __type->Field(__this, 1/*_version*/).Value<int>())
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[2/*"Collection ...*/]));

    __type->Field(__this, 2/*_index*/).Value<int>()++;

    if (__type->Field(__this, 2/*_index*/).Value<int>() < uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Queue*>())->_size)
    {
        __type->Field(__this, 3/*_current*/) = (::g::Uno::Collections::Queue__ElementAt_fn(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Queue*>()), uCRef<int>(__type->Field(__this, 2/*_index*/).Value<int>()), &ret2), ret2);
        return *__retval = true, void();
    }

    return *__retval = false, void();
}

// internal Enumerator New(Uno.Collections.Queue<T> source) :1244
void Queue__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Queue* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    ;
    Queue__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(172)
// -----------------------------------------------------------------------------------------

// public struct Dictionary<TKey, TValue>.ValueCollection.Enumerator :172
// {
// public TValue get_Current() [adapter] :188
static void Dictionary__ValueCollection__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    Dictionary__ValueCollection__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :191
static void Dictionary__ValueCollection__Enumerator__Dispose_ex(uObject* __this)
{
    Dictionary__ValueCollection__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :203
static void Dictionary__ValueCollection__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    Dictionary__ValueCollection__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

Dictionary__ValueCollection__Enumerator_type* Dictionary__ValueCollection__Enumerator_typeof()
{
    static uSStrong<Dictionary__ValueCollection__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 3;
    options.TypeSize = sizeof(Dictionary__ValueCollection__Enumerator_type);
    type = (Dictionary__ValueCollection__Enumerator_type*)uStructType::New("Uno.Collections.Dictionary`2.ValueCollection.Enumerator", options);
    type->interface0.fp_get_Current = Dictionary__ValueCollection__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = Dictionary__ValueCollection__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = Dictionary__ValueCollection__Enumerator__MoveNext_ex;
    ::STRINGS[2] = uString::Const("Collection was modified");
    ::TYPES[22] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[9] = ::g::Uno::Int_typeof();
    ::TYPES[10] = ::g::Uno::Collections::Dictionary__Bucket_typeof();
    ::TYPES[8] = uObject_typeof()->Array();
    type->SetPrecalc(
        ::TYPES[22/*Uno.Collections.Dictionary`2*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[10/*Uno.Collections.Dictionary`2.Bucket*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[10/*Uno.Collections.Dictionary`2.Bucket*/]->MakeType(type->T(0), type->T(1))->Array());
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(1)), offsetof(Dictionary__ValueCollection__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Dictionary__ValueCollection__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(Dictionary__ValueCollection__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), type->T(1)), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// internal Enumerator(Uno.Collections.Dictionary<TKey, TValue> source) :179
void Dictionary__ValueCollection__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Dictionary* source)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>*/),
        __type->T(0),
        __type->T(1),
    };
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>() = source;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
}

// public TValue get_Current() :188
void Dictionary__ValueCollection__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 1/*_current*/)), void();
}

// public void Dispose() :191
void Dictionary__ValueCollection__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :203
void Dictionary__ValueCollection__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>*/),
        __type->T(0),
        __type->T(1),
        __type->Precalced(1/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
        __type->Precalced(2/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
    };
    uT bucket(__types[3], U_ALLOCA(__types[3]->ValueSize));

    if (__type->Field(__this, 3/*_version*/).Value<int>() != uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[2/*"Collection ...*/]));

    do
    {
        __type->Field(__this, 2/*_iterator*/).Value<int>()++;

        if (__type->Field(__this, 2/*_iterator*/).Value<int>() >= uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->Length())
            return *__retval = false, void();
    }
    while (uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>())[2/*State*/].Value<int>() != 1);

    bucket = uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>());
    __type->Field(__this, 1/*_current*/) = bucket[1/*Value*/];
    return *__retval = true, void();
}

// internal Enumerator New(Uno.Collections.Dictionary<TKey, TValue> source) :179
void Dictionary__ValueCollection__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    ;
    Dictionary__ValueCollection__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(533)
// -----------------------------------------------------------------------------------------

// public sealed class HashSet<T> :533
// {
HashSet_type* HashSet_typeof()
{
    static uSStrong<HashSet_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(HashSet);
    options.TypeSize = sizeof(HashSet_type);
    type = (HashSet_type*)uClassType::New("Uno.Collections.HashSet`1", options);
    type->fp_ctor_ = (void*)HashSet__New1_fn;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))HashSet__GetEnumerator_boxed_fn;
    ::TYPES[22] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[3] = ::g::Uno::Bool_typeof();
    ::TYPES[26] = HashSet__Enumerator_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->SetPrecalc(
        ::TYPES[22/*Uno.Collections.Dictionary`2*/]->MakeType(type->T(0), ::TYPES[3/*bool*/]),
        ::TYPES[26/*Uno.Collections.HashSet`1.Enumerator*/]->MakeType(type->T(0)),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(HashSet_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), ::g::Uno::Bool_typeof()), offsetof(::g::Uno::Collections::HashSet, _map), 0);
    return type;
}

// public HashSet() :589
void HashSet__ctor__fn(HashSet* __this)
{
    __this->ctor_();
}

// public bool Add(T item) :614
void HashSet__Add_fn(HashSet* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<T, bool>*/),
    };
    bool ret5;
    bool result = (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(__this->_map), item, &ret5), ret5);
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(__this->_map), item, uCRef(true));
    return *__retval = result, void();
}

// public void Clear() :636
void HashSet__Clear_fn(HashSet* __this)
{
    __this->Clear();
}

// public bool Contains(T item) :621
void HashSet__Contains_fn(HashSet* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    bool ret6;
    return *__retval = (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(__this->_map), item, &ret6), ret6), void();
}

// public Uno.Collections.HashSet<T>.Enumerator GetEnumerator() :641
void HashSet__GetEnumerator_fn(HashSet* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.HashSet<T>.Enumerator*/),
        __this->__type->T(0),
    };
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((HashSet__Enumerator__New1_fn(__types[0], __this->_map, &ret7), ret7)), void();
}

// public Uno.Collections.HashSet<T>.Enumerator GetEnumerator() :641
void HashSet__GetEnumerator_boxed_fn(HashSet* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// public HashSet New() :589
void HashSet__New1_fn(uType* __type, HashSet** __retval)
{
    *__retval = HashSet::New1(__type);
}

// public bool Remove(T item) :626
void HashSet__Remove_fn(HashSet* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    bool ret8;
    return *__retval = (::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->_map), item, &ret8), ret8), void();
}

// public HashSet() [instance] :589
void HashSet::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<T, bool>*/),
        __type->T(0),
    };
    _map = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(__types[0]));
}

// public void Clear() [instance] :636
void HashSet::Clear()
{
    uPtr(_map)->Clear();
}

// public Uno.Collections.HashSet<T>.Enumerator GetEnumerator() [instance] :641
uObject* HashSet::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.HashSet<T>.Enumerator*/),
        __type->T(0),
        __type->Precalced(2/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret16(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return uBoxPtr(__types[0], (HashSet__GetEnumerator_fn(this, &ret16), ret16));
}

// public HashSet New() [static] :589
HashSet* HashSet::New1(uType* __type)
{
    HashSet* obj1 = (HashSet*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(655)
// -----------------------------------------------------------------------------------------

// public abstract interface ICollection<T> :655
// {
uInterfaceType* ICollection_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.ICollection`1", 1, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(673)
// -----------------------------------------------------------------------------------------

// public abstract interface IDictionary<TKey, TValue> :673
// {
uInterfaceType* IDictionary_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.IDictionary`2", 2, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(697)
// -----------------------------------------------------------------------------------------

// public abstract interface IEnumerable<T> :697
// {
uInterfaceType* IEnumerable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.IEnumerable`1", 1, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(711)
// -----------------------------------------------------------------------------------------

// public abstract interface IEnumerator :711
// {
uInterfaceType* IEnumerator_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.IEnumerator", 0, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(718)
// -----------------------------------------------------------------------------------------

// public abstract interface IEnumerator<T> :718
// {
uInterfaceType* IEnumerator1_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.IEnumerator`1", 1, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(732)
// -----------------------------------------------------------------------------------------

// public abstract interface IList<T> :732
// {
uInterfaceType* IList_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.IList`1", 1, 0);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Uno.Collections/0.24.0/Extensions/$.uno(249)
// -------------------------------------------------------------------------------------

// public static class IListExtensions :249
// {
uClassType* IListExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Collections.IListExtensions", options);
    ::TYPES[27] = ::g::Uno::Collections::ICollection_typeof();
    ::TYPES[28] = ::g::Uno::Collections::IList_typeof();
    return type;
}

// public static T RemoveLast<T>(Uno.Collections.IList<T> self) :299
void IListExtensions__RemoveLast_fn(uType* __type, uObject* self, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[27/*Uno.Collections.ICollection`1*/]->MakeType(__type->U(0)),
        ::TYPES[28/*Uno.Collections.IList`1*/]->MakeType(__type->U(0)),
    };
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT t(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(self), __types[1])) - 1;
    t = (::g::Uno::Collections::IList::get_Item_ex(uInterface(self, __types[2]), uCRef<int>(i), &ret6), ret6);
    ::g::Uno::Collections::IList::RemoveAt(uInterface(self, __types[2]), i);
    return __retval.Store(t), void();
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(772)
// -----------------------------------------------------------------------------------------

// public struct KeyValuePair<TKey, TValue> :772
// {
uStructType* KeyValuePair_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Collections.KeyValuePair`2", options);
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// public KeyValuePair(TKey key, TValue value) :777
void KeyValuePair__ctor__fn(uTRef __this, uType* __type, void* key, void* value)
{
    uType* __types[] = {
        __type->T(0),
        __type->T(1),
    };
    __type->Field(__this, 0/*_key*/) = key;
    __type->Field(__this, 1/*_value*/) = value;
}

// public TKey get_Key() :785
void KeyValuePair__get_Key_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 0/*_key*/)), void();
}

// public KeyValuePair New(TKey key, TValue value) :777
void KeyValuePair__New1_fn(uType* __type, void* key, void* value, uTRef __retval)
{
    uType* __types[] = {
        __type->T(0),
        __type->T(1),
    };
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    ;
    KeyValuePair__ctor__fn(&obj1, __type, key, value);
    return __retval.Store(obj1), void();
}

// public TValue get_Value() :790
void KeyValuePair__get_Value_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 1/*_value*/)), void();
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(817)
// -----------------------------------------------------------------------------------------

// public sealed class LinkedList<T> :817
// {
LinkedList_type* LinkedList_typeof()
{
    static uSStrong<LinkedList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(LinkedList);
    options.TypeSize = sizeof(LinkedList_type);
    type = (LinkedList_type*)uClassType::New("Uno.Collections.LinkedList`1", options);
    type->fp_ctor_ = (void*)LinkedList__New1_fn;
    type->interface0.fp_Add = (void(*)(uObject*, void*))LinkedList__UnoCollectionsICollectionTAdd_fn;
    type->interface0.fp_Clear = (void(*)(uObject*))LinkedList__Clear_fn;
    type->interface0.fp_Remove = (void(*)(uObject*, void*, bool*))LinkedList__Remove_fn;
    type->interface0.fp_Contains = (void(*)(uObject*, void*, bool*))LinkedList__Contains_fn;
    type->interface0.fp_get_Count = (void(*)(uObject*, int*))LinkedList__get_Count_fn;
    type->interface1.fp_GetEnumerator = (void(*)(uObject*, uObject**))LinkedList__GetEnumerator_fn;
    ::STRINGS[4] = uString::Const("node");
    ::STRINGS[5] = uString::Const("The LinkedList node already belongs to a LinkedList.");
    ::STRINGS[6] = uString::Const("The LinkedList node does not belong to current LinkedList.");
    ::TYPES[24] = ::g::Uno::Collections::LinkedListNode_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[29] = LinkedList__Enumerator_typeof();
    type->SetPrecalc(
        ::TYPES[24/*Uno.Collections.LinkedListNode`1*/]->MakeType(type->T(0)),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)),
        ::TYPES[29/*Uno.Collections.LinkedList`1.Enumerator*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0)), offsetof(LinkedList_type, interface0),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(LinkedList_type, interface1));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::LinkedList, _Count), 0,
        ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::LinkedList, _First), 0,
        ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::LinkedList, _Last), 0);
    return type;
}

// public generated LinkedList() :817
void LinkedList__ctor__fn(LinkedList* __this)
{
    __this->ctor_();
}

// public void AddFirst(Uno.Collections.LinkedListNode<T> node) :862
void LinkedList__AddFirst1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node)
{
    __this->AddFirst1(node);
}

// public Uno.Collections.LinkedListNode<T> AddLast(T value) :925
void LinkedList__AddLast_fn(LinkedList* __this, void* value, ::g::Uno::Collections::LinkedListNode** __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.LinkedListNode<T>*/),
    };
    ::g::Uno::Collections::LinkedListNode* ret3;
    ::g::Uno::Collections::LinkedListNode* node = (::g::Uno::Collections::LinkedListNode__New1_fn(__types[1], value, &ret3), ret3);
    __this->AddLast1(node);
    return *__retval = node, void();
}

// public void AddLast(Uno.Collections.LinkedListNode<T> node) :897
void LinkedList__AddLast1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node)
{
    __this->AddLast1(node);
}

// public void Clear() :944
void LinkedList__Clear_fn(LinkedList* __this)
{
    __this->Clear();
}

// public bool Contains(T value) :967
void LinkedList__Contains_fn(LinkedList* __this, void* value, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    ::g::Uno::Collections::LinkedListNode* ret4;
    return *__retval = (LinkedList__Find_fn(__this, value, &ret4), ret4) != NULL, void();
}

// public generated int get_Count() :819
void LinkedList__get_Count_fn(LinkedList* __this, int* __retval)
{
    *__retval = __this->Count();
}

// private generated void set_Count(int value) :819
void LinkedList__set_Count_fn(LinkedList* __this, int* value)
{
    __this->Count(*value);
}

// public Uno.Collections.LinkedListNode<T> Find(T value) :932
void LinkedList__Find_fn(LinkedList* __this, void* value, ::g::Uno::Collections::LinkedListNode** __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.LinkedListNode<T>*/),
    };
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ::g::Uno::Collections::LinkedListNode* curr = __this->First();

    while (curr != NULL)
    {
        if (::g::Uno::Object::Equals(uBoxPtr(__types[0], (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(curr), &ret5), ret5), U_ALLOCA(__types[0]->ObjectSize)), uBoxPtr(__types[0], value)))
            return *__retval = curr, void();

        curr = (::g::Uno::Collections::LinkedListNode*)uPtr(curr)->Next();
    }

    return *__retval = NULL, void();
}

// public generated Uno.Collections.LinkedListNode<T> get_First() :820
void LinkedList__get_First_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode** __retval)
{
    *__retval = __this->First();
}

// private generated void set_First(Uno.Collections.LinkedListNode<T> value) :820
void LinkedList__set_First_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* value)
{
    __this->First(value);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :857
void LinkedList__GetEnumerator_fn(LinkedList* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public generated Uno.Collections.LinkedListNode<T> get_Last() :821
void LinkedList__get_Last_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode** __retval)
{
    *__retval = __this->Last();
}

// private generated void set_Last(Uno.Collections.LinkedListNode<T> value) :821
void LinkedList__set_Last_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* value)
{
    __this->Last(value);
}

// public generated LinkedList New() :817
void LinkedList__New1_fn(uType* __type, LinkedList** __retval)
{
    *__retval = LinkedList::New1(__type);
}

// public bool Remove(T value) :996
void LinkedList__Remove_fn(LinkedList* __this, void* value, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    ::g::Uno::Collections::LinkedListNode* ret6;
    ::g::Uno::Collections::LinkedListNode* node = (LinkedList__Find_fn(__this, value, &ret6), ret6);

    if (node != NULL)
    {
        __this->Remove1(node);
        return *__retval = true, void();
    }

    return *__retval = false, void();
}

// public void Remove(Uno.Collections.LinkedListNode<T> node) :972
void LinkedList__Remove1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node)
{
    __this->Remove1(node);
}

// public void Uno.Collections.ICollection<T>.Add(T value) :962
void LinkedList__UnoCollectionsICollectionTAdd_fn(LinkedList* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    ::g::Uno::Collections::LinkedListNode* ret7;
    LinkedList__AddLast_fn(__this, value, &ret7);
}

// public generated LinkedList() [instance] :817
void LinkedList::ctor_()
{
}

// public void AddFirst(Uno.Collections.LinkedListNode<T> node) [instance] :862
void LinkedList::AddFirst1(::g::Uno::Collections::LinkedListNode* node)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.LinkedListNode<T>*/),
        __type->T(0),
    };

    if (node == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[4/*"node"*/]));

    if (((LinkedList*)uPtr(node)->List()) != NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[5/*"The LinkedL...*/]));

    if (Last() == NULL)
        First((Last(node), node));
    else
    {
        uPtr(First())->Previous(node);
        uPtr(node)->Next(First());
        node->Previous(NULL);
        First(node);
    }

    if (((LinkedList*)uPtr(node)->List()) != this)
    {
        uPtr(node)->List(this);
        Count(Count() + 1);
    }
}

// public void AddLast(Uno.Collections.LinkedListNode<T> node) [instance] :897
void LinkedList::AddLast1(::g::Uno::Collections::LinkedListNode* node)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.LinkedListNode<T>*/),
        __type->T(0),
    };

    if (node == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[4/*"node"*/]));

    if (((LinkedList*)uPtr(node)->List()) != NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[5/*"The LinkedL...*/]));

    if (Last() == NULL)
        First((Last(node), node));
    else
    {
        uPtr(Last())->Next(node);
        uPtr(node)->Next(NULL);
        node->Previous(Last());
        Last(node);
    }

    if (((LinkedList*)uPtr(node)->List()) != this)
    {
        uPtr(node)->List(this);
        Count(Count() + 1);
    }
}

// public void Clear() [instance] :944
void LinkedList::Clear()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.LinkedListNode<T>*/),
        __type->T(0),
    };
    ::g::Uno::Collections::LinkedListNode* curr = First();

    while (curr != NULL)
    {
        ::g::Uno::Collections::LinkedListNode* next = (::g::Uno::Collections::LinkedListNode*)uPtr(curr)->Next();
        curr->Previous(NULL);
        curr->Next(NULL);
        curr->List(NULL);
        curr = next;
    }

    First((Last(NULL), uCast< ::g::Uno::Collections::LinkedListNode*>(NULL, __types[0])));
    Count(0);
}

// public generated int get_Count() [instance] :819
int LinkedList::Count()
{
    return _Count;
}

// private generated void set_Count(int value) [instance] :819
void LinkedList::Count(int value)
{
    _Count = value;
}

// public generated Uno.Collections.LinkedListNode<T> get_First() [instance] :820
::g::Uno::Collections::LinkedListNode* LinkedList::First()
{
    return _First;
}

// private generated void set_First(Uno.Collections.LinkedListNode<T> value) [instance] :820
void LinkedList::First(::g::Uno::Collections::LinkedListNode* value)
{
    _First = value;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :857
uObject* LinkedList::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
        __type->T(0),
        __type->Precalced(2/*Uno.Collections.LinkedList<T>.Enumerator*/),
    };
    return uBox(__types[2], LinkedList__Enumerator__New1(__types[2], this));
}

// public generated Uno.Collections.LinkedListNode<T> get_Last() [instance] :821
::g::Uno::Collections::LinkedListNode* LinkedList::Last()
{
    return _Last;
}

// private generated void set_Last(Uno.Collections.LinkedListNode<T> value) [instance] :821
void LinkedList::Last(::g::Uno::Collections::LinkedListNode* value)
{
    _Last = value;
}

// public void Remove(Uno.Collections.LinkedListNode<T> node) [instance] :972
void LinkedList::Remove1(::g::Uno::Collections::LinkedListNode* node)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.LinkedListNode<T>*/),
        __type->T(0),
    };

    if (node == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[4/*"node"*/]));

    if (((LinkedList*)uPtr(node)->List()) != this)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[6/*"The LinkedL...*/]));

    if (((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous()) != NULL)
        uPtr((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous())->Next((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next());

    if (((::g::Uno::Collections::LinkedListNode*)node->Next()) != NULL)
        uPtr((::g::Uno::Collections::LinkedListNode*)node->Next())->Previous((::g::Uno::Collections::LinkedListNode*)node->Previous());

    if (node == First())
        First((::g::Uno::Collections::LinkedListNode*)node->Next());

    if (node == Last())
        Last((::g::Uno::Collections::LinkedListNode*)node->Previous());

    node->List(NULL);
    Count(Count() - 1);
}

// public generated LinkedList New() [static] :817
LinkedList* LinkedList::New1(uType* __type)
{
    LinkedList* obj1 = (LinkedList*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Uno.Collections/0.24.0/Extensions/$.uno(80)
// ------------------------------------------------------------------------------------

// private sealed class EnumerableExtensions.LinkedList<T> :80
// {
uType* EnumerableExtensions__LinkedList_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(EnumerableExtensions__LinkedList);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Collections.EnumerableExtensions.LinkedList`1", options);
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type, offsetof(::g::Uno::Collections::EnumerableExtensions__LinkedList, Next), 0);
    return type;
}

// public LinkedList(T item, Uno.Collections.EnumerableExtensions.LinkedList<T> next) :85
void EnumerableExtensions__LinkedList__ctor__fn(EnumerableExtensions__LinkedList* __this, void* item, EnumerableExtensions__LinkedList* next)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->Item() = item;
    __this->Next = next;
}

// public LinkedList New(T item, Uno.Collections.EnumerableExtensions.LinkedList<T> next) :85
void EnumerableExtensions__LinkedList__New1_fn(uType* __type, void* item, EnumerableExtensions__LinkedList* next, EnumerableExtensions__LinkedList** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    EnumerableExtensions__LinkedList* obj1 = (EnumerableExtensions__LinkedList*)uNew(__type);
    EnumerableExtensions__LinkedList__ctor__fn(obj1, item, next);
    return *__retval = obj1, void();
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(803)
// -----------------------------------------------------------------------------------------

// public sealed class LinkedListNode<T> :803
// {
uType* LinkedListNode_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(LinkedListNode);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Collections.LinkedListNode`1", options);
    type->SetFields(0,
        ::g::Uno::Collections::LinkedList_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::LinkedListNode, _List), 0,
        type, offsetof(::g::Uno::Collections::LinkedListNode, _Next), 0,
        type, offsetof(::g::Uno::Collections::LinkedListNode, _Previous), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// public LinkedListNode(T value) :810
void LinkedListNode__ctor__fn(LinkedListNode* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    LinkedListNode__set_Value_fn(__this, value);
}

// public generated Uno.Collections.LinkedList<T> get_List() :805
void LinkedListNode__get_List_fn(LinkedListNode* __this, ::g::Uno::Collections::LinkedList** __retval)
{
    *__retval = __this->List();
}

// internal generated void set_List(Uno.Collections.LinkedList<T> value) :805
void LinkedListNode__set_List_fn(LinkedListNode* __this, ::g::Uno::Collections::LinkedList* value)
{
    __this->List(value);
}

// public LinkedListNode New(T value) :810
void LinkedListNode__New1_fn(uType* __type, void* value, LinkedListNode** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    LinkedListNode* obj1 = (LinkedListNode*)uNew(__type);
    LinkedListNode__ctor__fn(obj1, value);
    return *__retval = obj1, void();
}

// public generated Uno.Collections.LinkedListNode<T> get_Next() :806
void LinkedListNode__get_Next_fn(LinkedListNode* __this, LinkedListNode** __retval)
{
    *__retval = __this->Next();
}

// internal generated void set_Next(Uno.Collections.LinkedListNode<T> value) :806
void LinkedListNode__set_Next_fn(LinkedListNode* __this, LinkedListNode* value)
{
    __this->Next(value);
}

// public generated Uno.Collections.LinkedListNode<T> get_Previous() :807
void LinkedListNode__get_Previous_fn(LinkedListNode* __this, LinkedListNode** __retval)
{
    *__retval = __this->Previous();
}

// internal generated void set_Previous(Uno.Collections.LinkedListNode<T> value) :807
void LinkedListNode__set_Previous_fn(LinkedListNode* __this, LinkedListNode* value)
{
    __this->Previous(value);
}

// public generated T get_Value() :808
void LinkedListNode__get_Value_fn(LinkedListNode* __this, uTRef __retval)
{
    return __retval.Store(__this->_Value()), void();
}

// private generated void set_Value(T value) :808
void LinkedListNode__set_Value_fn(LinkedListNode* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_Value() = value;
}

// public generated Uno.Collections.LinkedList<T> get_List() [instance] :805
::g::Uno::Collections::LinkedList* LinkedListNode::List()
{
    return _List;
}

// internal generated void set_List(Uno.Collections.LinkedList<T> value) [instance] :805
void LinkedListNode::List(::g::Uno::Collections::LinkedList* value)
{
    _List = value;
}

// public generated Uno.Collections.LinkedListNode<T> get_Next() [instance] :806
LinkedListNode* LinkedListNode::Next()
{
    return _Next;
}

// internal generated void set_Next(Uno.Collections.LinkedListNode<T> value) [instance] :806
void LinkedListNode::Next(LinkedListNode* value)
{
    _Next = value;
}

// public generated Uno.Collections.LinkedListNode<T> get_Previous() [instance] :807
LinkedListNode* LinkedListNode::Previous()
{
    return _Previous;
}

// internal generated void set_Previous(Uno.Collections.LinkedListNode<T> value) [instance] :807
void LinkedListNode::Previous(LinkedListNode* value)
{
    _Previous = value;
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(1017)
// ------------------------------------------------------------------------------------------

// public sealed class List<T> :1017
// {
List_type* List_typeof()
{
    static uSStrong<List_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 5;
    options.ObjectSize = sizeof(List);
    options.TypeSize = sizeof(List_type);
    type = (List_type*)uClassType::New("Uno.Collections.List`1", options);
    type->fp_ctor_ = (void*)List__New1_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))List__Insert_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))List__RemoveAt_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))List__get_Item_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))List__Clear_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))List__Add_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))List__Remove_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))List__Contains_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int*))List__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))List__GetEnumerator_boxed_fn;
    ::TYPES[8] = uObject_typeof()->Array();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[11] = ::g::Uno::Generic_typeof();
    ::TYPES[6] = List__Enumerator_typeof();
    ::TYPES[30] = ::g::Uno::Array_typeof();
    type->SetPrecalc(
        type->T(0)->Array(),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)),
        ::TYPES[11/*Uno.Generic*/]->MakeMethod(1, type->T(0)),
        ::TYPES[6/*Uno.Collections.List`1.Enumerator*/]->MakeType(type->T(0)),
        ::TYPES[30/*Uno.Array*/]->MakeMethod(1, type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0)), offsetof(List_type, interface0),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0)), offsetof(List_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(List_type, interface2));
    type->SetFields(0,
        type->T(0)->Array(), offsetof(::g::Uno::Collections::List, _data), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::List, _used), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::List, _version), 0);
    return type;
}

// public List() :1071
void List__ctor__fn(List* __this)
{
    __this->ctor_();
}

// public List(int capacity) :1077
void List__ctor_1_fn(List* __this, int* capacity)
{
    __this->ctor_1(*capacity);
}

// public void Add(T item) :1126
void List__Add_fn(List* __this, void* item)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->EnsureCapacity();
    uPtr(__this->_data)->TItem(__this->_used++) = item;
    __this->_version++;
}

// public void AddRange(Uno.Collections.IEnumerable<T> items) :1133
void List__AddRange_fn(List* __this, uObject* items)
{
    __this->AddRange(items);
}

// private void BoundsCheck(int index) :1098
void List__BoundsCheck_fn(List* __this, int* index)
{
    __this->BoundsCheck(*index);
}

// public void Clear() :1188
void List__Clear_fn(List* __this)
{
    __this->Clear();
}

// public bool Contains(T item) :1195
void List__Contains_fn(List* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(2/*Uno.Generic.Equals<T>*/),
    };
    bool ret4;

    for (int i = 0; i < __this->_used; i++)
        if ((::g::Uno::Generic__Equals_fn(__types[1], uPtr(__this->_data)->TItem(i), item, &ret4), ret4))
            return *__retval = true, void();

    return *__retval = false, void();
}

// public int get_Count() :1123
void List__get_Count_fn(List* __this, int* __retval)
{
    *__retval = __this->Count();
}

// private void EnsureCapacity() :1104
void List__EnsureCapacity_fn(List* __this)
{
    __this->EnsureCapacity();
}

// public Uno.Collections.List<T>.Enumerator GetEnumerator() :1083
void List__GetEnumerator_fn(List* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(3/*Uno.Collections.List<T>.Enumerator*/),
        __this->__type->T(0),
    };
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((List__Enumerator__New1_fn(__types[0], __this, &ret5), ret5)), void();
}

// public Uno.Collections.List<T>.Enumerator GetEnumerator() :1083
void List__GetEnumerator_boxed_fn(List* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// public int IndexOf(T item) :1153
void List__IndexOf_fn(List* __this, void* item, int* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(2/*Uno.Generic.Equals<T>*/),
    };
    bool ret6;

    for (int i = 0; i < __this->_used; i++)
        if ((::g::Uno::Generic__Equals_fn(__types[1], uPtr(__this->_data)->TItem(i), item, &ret6), ret6))
            return *__retval = i, void();

    return *__retval = -1, void();
}

// public void Insert(int index, T item) :1138
void List__Insert_fn(List* __this, int* index, void* item)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    int index_ = *index;

    if ((index_ < 0) || (index_ > __this->_used))
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());

    __this->EnsureCapacity();

    for (int i = __this->_used; i >= index_; i--)
        uPtr(__this->_data)->TItem(i + 1) = uPtr(__this->_data)->TItem(i);

    uPtr(__this->_data)->TItem(index_) = item;
    __this->_version++;
    __this->_used++;
}

// public T get_Item(int index) :1206
void List__get_Item_fn(List* __this, int* index, uTRef __retval)
{
    int index_ = *index;
    __this->BoundsCheck(index_);
    return __retval.Store(uPtr(__this->_data)->TItem(index_)), void();
}

// public void set_Item(int index, T value) :1211
void List__set_Item_fn(List* __this, int* index, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    int index_ = *index;
    __this->BoundsCheck(index_);
    uPtr(__this->_data)->TItem(index_) = value;
    __this->_version++;
}

// public List New() :1071
void List__New1_fn(uType* __type, List** __retval)
{
    *__retval = List::New1(__type);
}

// public List New(int capacity) :1077
void List__New2_fn(uType* __type, int* capacity, List** __retval)
{
    *__retval = List::New2(__type, *capacity);
}

// public bool Remove(T item) :1162
void List__Remove_fn(List* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(2/*Uno.Generic.Equals<T>*/),
    };
    bool ret7;

    for (int i = 0; i < __this->_used; i++)
        if ((::g::Uno::Generic__Equals_fn(__types[1], uPtr(__this->_data)->TItem(i), item, &ret7), ret7))
        {
            __this->RemoveAt(i);
            return *__retval = true, void();
        }

    return *__retval = false, void();
}

// public void RemoveAt(int index) :1176
void List__RemoveAt_fn(List* __this, int* index)
{
    __this->RemoveAt(*index);
}

// public void Sort(Uno.Comparison<T> comparer) :1219
void List__Sort_fn(List* __this, uDelegate* comparer)
{
    __this->Sort(comparer);
}

// public T[] ToArray() :1088
void List__ToArray_fn(List* __this, uArray** __retval)
{
    *__retval = __this->ToArray();
}

// public List() [instance] :1071
void List::ctor_()
{
    _data = NULL;
    _used = 0;
}

// public List(int capacity) [instance] :1077
void List::ctor_1(int capacity)
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };
    _data = uArray::New(__types[0], capacity);
    _used = 0;
}

// public void AddRange(Uno.Collections.IEnumerable<T> items) [instance] :1133
void List::AddRange(uObject* items)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT i(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(items), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__types[0]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        i = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[1]), &ret3), ret3);
        List__Add_fn(this, i);
    }
}

// private void BoundsCheck(int index) [instance] :1098
void List::BoundsCheck(int index)
{
    if ((index < 0) || (index >= Count()))
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public void Clear() [instance] :1188
void List::Clear()
{
    _data = NULL;
    _used = 0;
    _version++;
}

// public int get_Count() [instance] :1123
int List::Count()
{
    return _used;
}

// private void EnsureCapacity() [instance] :1104
void List::EnsureCapacity()
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };

    if (_data == NULL)
        _data = uArray::New(__types[0], 2);
    else if ((_used + 1) == uPtr(_data)->Length())
    {
        uArray* newData = uArray::New(__types[0], uPtr(_data)->Length() * 2);

        for (int i = 0; i < _used; i++)
            newData->TItem(i) = uPtr(_data)->TItem(i);

        _data = newData;
    }
}

// public Uno.Collections.List<T>.Enumerator GetEnumerator() [instance] :1083
uObject* List::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(3/*Uno.Collections.List<T>.Enumerator*/),
        __type->T(0),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return uBoxPtr(__types[0], (List__GetEnumerator_fn(this, &ret8), ret8));
}

// public void RemoveAt(int index) [instance] :1176
void List::RemoveAt(int index)
{
    BoundsCheck(index);

    for (int i = index; i < (_used - 1); i++)
        uPtr(_data)->TItem(i) = uPtr(_data)->TItem(i + 1);

    _used = (_used - 1);
    uPtr(_data)->TItem(_used).Default();
    _version++;
}

// public void Sort(Uno.Comparison<T> comparer) [instance] :1219
void List::Sort(uDelegate* comparer)
{
    uType* __types[] = {
        __type->Precalced(4/*Uno.Array.Sort<T>*/),
        __type->T(0),
    };
    ::g::Uno::Array::Sort(__types[0], _data, 0, _used, comparer);
    _version++;
}

// public T[] ToArray() [instance] :1088
uArray* List::ToArray()
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };
    uArray* t = uArray::New(__types[0], _used);

    for (int i = 0; i < _used; i++)
        t->TItem(i) = uPtr(_data)->TItem(i);

    return t;
}

// public List New() [static] :1071
List* List::New1(uType* __type)
{
    List* obj1 = (List*)uNew(__type);
    obj1->ctor_();
    return obj1;
}

// public List New(int capacity) [static] :1077
List* List::New2(uType* __type, int capacity)
{
    List* obj2 = (List*)uNew(__type);
    obj2->ctor_1(capacity);
    return obj2;
}
// }

// ../../../../usr/local/share/uno/Packages/FuseCore/0.24.6/Internal/$.uno(183)
// ----------------------------------------------------------------------------

// private struct ConcurrentCollection<T>.ModItem :183
// {
uStructType* ConcurrentCollection__ModItem_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Collections.ConcurrentCollection`1.ModItem", options);
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Bool_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}
// }

// ../../../../usr/local/share/uno/Packages/Uno.Collections/0.24.0/$.uno(8)
// ------------------------------------------------------------------------

// public sealed class ObservableList<T> :8
// {
ObservableList_type* ObservableList_typeof()
{
    static uSStrong<ObservableList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(ObservableList);
    options.TypeSize = sizeof(ObservableList_type);
    type = (ObservableList_type*)uClassType::New("Uno.Collections.ObservableList`1", options);
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))ObservableList__Insert_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))ObservableList__RemoveAt_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))ObservableList__get_Item_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))ObservableList__Clear_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))ObservableList__Add_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))ObservableList__Remove_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))ObservableList__Contains_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int*))ObservableList__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))ObservableList__GetEnumerator_fn;
    ::STRINGS[7] = uString::Const("added");
    ::STRINGS[8] = uString::Const("removed");
    ::TYPES[31] = ::g::Uno::Delegate_typeof();
    ::TYPES[0] = ::g::Uno::Collections::List_typeof();
    ::TYPES[32] = ::g::Uno::Action1_typeof();
    ::TYPES[6] = ::g::Uno::Collections::List__Enumerator_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->SetPrecalc(
        ::TYPES[0/*Uno.Collections.List`1*/]->MakeType(type->T(0)),
        ::TYPES[32/*Uno.Action`1*/]->MakeType(type->T(0)),
        ::TYPES[6/*Uno.Collections.List`1.Enumerator*/]->MakeType(type->T(0)),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0)), offsetof(ObservableList_type, interface0),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0)), offsetof(ObservableList_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(ObservableList_type, interface2));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::ObservableList, added), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::ObservableList, items), 0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::ObservableList, removed), 0);
    return type;
}

// public ObservableList(Uno.Action<T> added, Uno.Action<T> removed) :14
void ObservableList__ctor__fn(ObservableList* __this, uDelegate* added1, uDelegate* removed1)
{
    __this->ctor_(added1, removed1);
}

// public void Add(T item) :44
void ObservableList__Add_fn(ObservableList* __this, void* item)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.List<T>*/),
        __this->__type->Precalced(1/*Uno.Action<T>*/),
    };

    if (__this->items == NULL)
        __this->items = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[1]));

    ::g::Uno::Collections::List__Add_fn(uPtr(__this->items), item);
    uPtr(__this->added)->InvokeVoid(item);
}

// public void Clear() :25
void ObservableList__Clear_fn(ObservableList* __this)
{
    __this->Clear();
}

// public bool Contains(T item) :36
void ObservableList__Contains_fn(ObservableList* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    bool ret5;

    if (__this->items == NULL)
        return *__retval = false, void();

    return *__retval = (::g::Uno::Collections::List__Contains_fn(uPtr(__this->items), item, &ret5), ret5), void();
}

// public int get_Count() :92
void ObservableList__get_Count_fn(ObservableList* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :105
void ObservableList__GetEnumerator_fn(ObservableList* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public void Insert(int index, T item) :53
void ObservableList__Insert_fn(ObservableList* __this, int* index, void* item)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.List<T>*/),
        __this->__type->Precalced(1/*Uno.Action<T>*/),
    };
    int index_ = *index;

    if (__this->items == NULL)
        __this->items = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[1]));

    ::g::Uno::Collections::List__Insert_fn(uPtr(__this->items), uCRef<int>(index_), item);
    uPtr(__this->added)->InvokeVoid(item);
}

// public T get_Item(int index) :96
void ObservableList__get_Item_fn(ObservableList* __this, int* index, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.List<T>*/),
    };
    uT ret11(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    int index_ = *index;

    if (__this->items == NULL)
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());

    return __retval.Store((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->items), uCRef<int>(index_), &ret11), ret11)), void();
}

// public ObservableList New(Uno.Action<T> added, Uno.Action<T> removed) :14
void ObservableList__New1_fn(uType* __type, uDelegate* added1, uDelegate* removed1, ObservableList** __retval)
{
    *__retval = ObservableList::New1(__type, added1, removed1);
}

// public bool Remove(T item) :81
void ObservableList__Remove_fn(ObservableList* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Uno.Action<T>*/),
    };
    bool ret7;

    if (__this->items == NULL)
        return *__retval = false, void();

    bool res = (::g::Uno::Collections::List__Remove_fn(uPtr(__this->items), item, &ret7), ret7);

    if (res)
        uPtr(__this->removed)->InvokeVoid(item);

    return *__retval = res, void();
}

// public void RemoveAt(int index) :73
void ObservableList__RemoveAt_fn(ObservableList* __this, int* index)
{
    __this->RemoveAt(*index);
}

// public ObservableList(Uno.Action<T> added, Uno.Action<T> removed) [instance] :14
void ObservableList::ctor_(uDelegate* added1, uDelegate* removed1)
{
    if (::g::Uno::Delegate::op_Equality(added1, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[7/*"added"*/]));

    if (::g::Uno::Delegate::op_Equality(removed1, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[8/*"removed"*/]));

    added = added1;
    removed = removed1;
}

// public void Clear() [instance] :25
void ObservableList::Clear()
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.Collections.List<T>.Enumerator*/),
        __type->T(0),
        __type->Precalced(1/*Uno.Action<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT enum1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT i(__types[1], U_ALLOCA(__types[1]->ValueSize));
    ;
    bool ret3;
    ;

    if (items != NULL)
    {
        ::g::Uno::Collections::List* removedItems = items;
        items = NULL;

        for (enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(removedItems), &ret2), ret2); (::g::Uno::Collections::List__Enumerator__MoveNext_fn(&enum1, __types[0], &ret3), ret3); )
        {
            i = (::g::Uno::Collections::List__Enumerator__get_Current_fn(&enum1, __types[0], &ret4), ret4);
            uPtr(removed)->InvokeVoid(i);
        }
    }
}

// public int get_Count() [instance] :92
int ObservableList::Count()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
        __type->T(0),
    };
    return (items != NULL) ? uPtr(items)->Count() : 0;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :105
uObject* ObservableList::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.Collections.List<T>.Enumerator*/),
        __type->T(0),
        __type->Precalced(0/*Uno.Collections.List<T>*/),
        __type->Precalced(3/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (items == NULL)
        items = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[2]));

    return uBoxPtr(__types[0], (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(items), &ret6), ret6));
}

// public void RemoveAt(int index) [instance] :73
void ObservableList::RemoveAt(int index)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Uno.Collections.List<T>*/),
    };
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret8;
    ;

    if (items == NULL)
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());

    ObservableList__Remove_fn(this, (::g::Uno::Collections::List__get_Item_fn(uPtr(items), uCRef<int>(index), &ret9), ret9), &ret8);
}

// public ObservableList New(Uno.Action<T> added, Uno.Action<T> removed) [static] :14
ObservableList* ObservableList::New1(uType* __type, uDelegate* added1, uDelegate* removed1)
{
    ObservableList* obj1 = (ObservableList*)uNew(__type);
    obj1->ctor_(added1, removed1);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(1235)
// ------------------------------------------------------------------------------------------

// public sealed class Queue<T> :1235
// {
Queue_type* Queue_typeof()
{
    static uSStrong<Queue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(Queue);
    options.TypeSize = sizeof(Queue_type);
    type = (Queue_type*)uClassType::New("Uno.Collections.Queue`1", options);
    type->fp_ctor_ = (void*)Queue__New1_fn;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))Queue__GetEnumerator_boxed_fn;
    ::STRINGS[9] = uString::Const("Queue is empty");
    ::TYPES[8] = uObject_typeof()->Array();
    ::TYPES[33] = Queue__Enumerator_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->SetPrecalc(
        type->T(0)->Array(),
        ::TYPES[33/*Uno.Collections.Queue`1.Enumerator*/]->MakeType(type->T(0)),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(Queue_type, interface0));
    type->SetFields(0,
        type->T(0)->Array(), offsetof(::g::Uno::Collections::Queue, _data), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Queue, _head), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Queue, _size), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Queue, _tail), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Queue, _version), 0);
    return type;
}

// public Queue() :1298
void Queue__ctor__fn(Queue* __this)
{
    __this->ctor_();
}

// public int get_Count() :1316
void Queue__get_Count_fn(Queue* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public T Dequeue() :1351
void Queue__Dequeue_fn(Queue* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uT result(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__this->_size == 0)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[9/*"Queue is em...*/]));

    result = uPtr(__this->_data)->TItem(__this->_head);
    uPtr(__this->_data)->TItem(__this->_head).Default();
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return __retval.Store(result), void();
}

// private T ElementAt(int index) :1395
void Queue__ElementAt_fn(Queue* __this, int* index, uTRef __retval)
{
    int index_ = *index;
    return __retval.Store(uPtr(__this->_data)->TItem(__this->_head + index_)), void();
}

// public void Enqueue(T item) :1342
void Queue__Enqueue_fn(Queue* __this, void* item)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->EnsureCapacity();
    uPtr(__this->_data)->TItem(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

// private void EnsureCapacity() :1374
void Queue__EnsureCapacity_fn(Queue* __this)
{
    __this->EnsureCapacity();
}

// public Uno.Collections.Queue<T>.Enumerator GetEnumerator() :1319
void Queue__GetEnumerator_fn(Queue* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.Queue<T>.Enumerator*/),
        __this->__type->T(0),
    };
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((Queue__Enumerator__New1_fn(__types[0], __this, &ret5), ret5)), void();
}

// public Uno.Collections.Queue<T>.Enumerator GetEnumerator() :1319
void Queue__GetEnumerator_boxed_fn(Queue* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// public Queue New() :1298
void Queue__New1_fn(uType* __type, Queue** __retval)
{
    *__retval = Queue::New1(__type);
}

// public Queue() [instance] :1298
void Queue::ctor_()
{
    _data = NULL;
    _head = 0;
    _tail = 0;
    _size = 0;
}

// public int get_Count() [instance] :1316
int Queue::Count()
{
    return _size;
}

// private void EnsureCapacity() [instance] :1374
void Queue::EnsureCapacity()
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*T[]*/),
    };
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (_data == NULL)
        _data = uArray::New(__types[1], 2);

    if (_tail == uPtr(_data)->Length())
    {
        int newSize = (_size != 0) ? _size * 2 : uPtr(_data)->Length();
        uArray* newData = uArray::New(__types[1], newSize);

        for (int i = 0; i < _size; i++)
            newData->TItem(i) = (Queue__ElementAt_fn(this, uCRef<int>(i), &ret4), ret4);

        _data = newData;
        _head = 0;
        _tail = _size;
    }
}

// public Uno.Collections.Queue<T>.Enumerator GetEnumerator() [instance] :1319
uObject* Queue::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.Queue<T>.Enumerator*/),
        __type->T(0),
        __type->Precalced(2/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return uBoxPtr(__types[0], (Queue__GetEnumerator_fn(this, &ret6), ret6));
}

// public Queue New() [static] :1298
Queue* Queue::New1(uType* __type)
{
    Queue* obj1 = (Queue*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(1411)
// ------------------------------------------------------------------------------------------

// public sealed class ReadOnlyCollection<T> :1411
// {
uType* ReadOnlyCollection_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ReadOnlyCollection);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Collections.ReadOnlyCollection`1", options);
    ::TYPES[27] = ::g::Uno::Collections::ICollection_typeof();
    ::TYPES[28] = ::g::Uno::Collections::IList_typeof();
    type->SetPrecalc(
        ::TYPES[27/*Uno.Collections.ICollection`1*/]->MakeType(type->T(0)),
        ::TYPES[28/*Uno.Collections.IList`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::ReadOnlyCollection, _list), 0);
    return type;
}

// public ReadOnlyCollection(Uno.Collections.IList<T> list) :1415
void ReadOnlyCollection__ctor__fn(ReadOnlyCollection* __this, uObject* list)
{
    __this->ctor_(list);
}

// public int get_Count() :1420
void ReadOnlyCollection__get_Count_fn(ReadOnlyCollection* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public T get_Item(int index) :1422
void ReadOnlyCollection__get_Item_fn(ReadOnlyCollection* __this, int* index, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    int index_ = *index;
    return __retval.Store((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->_list), __types[1]), uCRef<int>(index_), &ret2), ret2)), void();
}

// public ReadOnlyCollection New(Uno.Collections.IList<T> list) :1415
void ReadOnlyCollection__New1_fn(uType* __type, uObject* list, ReadOnlyCollection** __retval)
{
    *__retval = ReadOnlyCollection::New1(__type, list);
}

// public ReadOnlyCollection(Uno.Collections.IList<T> list) [instance] :1415
void ReadOnlyCollection::ctor_(uObject* list)
{
    _list = list;
}

// public int get_Count() [instance] :1420
int ReadOnlyCollection::Count()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->T(0),
    };
    return ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_list), __types[0]));
}

// public ReadOnlyCollection New(Uno.Collections.IList<T> list) [static] :1415
ReadOnlyCollection* ReadOnlyCollection::New1(uType* __type, uObject* list)
{
    ReadOnlyCollection* obj1 = (ReadOnlyCollection*)uNew(__type);
    obj1->ctor_(list);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Uno.Collections/0.24.0/Extensions/$.uno(423)
// -------------------------------------------------------------------------------------

// internal sealed class SelectEnumerable<T, TRet> :423
// {
SelectEnumerable_type* SelectEnumerable_typeof()
{
    static uSStrong<SelectEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(SelectEnumerable);
    options.TypeSize = sizeof(SelectEnumerable_type);
    type = (SelectEnumerable_type*)uClassType::New("Uno.Collections.SelectEnumerable`2", options);
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))SelectEnumerable__GetEnumerator_fn;
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[34] = ::g::Uno::Collections::SelectEnumerator_typeof();
    type->SetPrecalc(
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(1)),
        ::TYPES[34/*Uno.Collections.SelectEnumerator`2*/]->MakeType(type->T(0), type->T(1)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(1)), offsetof(SelectEnumerable_type, interface0));
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Uno::Collections::SelectEnumerable, _select), 0,
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::SelectEnumerable, _source), 0);
    return type;
}

// public SelectEnumerable(Uno.Collections.IEnumerable<T> source, Uno.Func<T, TRet> select) :428
void SelectEnumerable__ctor__fn(SelectEnumerable* __this, uObject* source, uDelegate* select)
{
    __this->ctor_(source, select);
}

// public Uno.Collections.IEnumerator<TRet> GetEnumerator() :434
void SelectEnumerable__GetEnumerator_fn(SelectEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public SelectEnumerable New(Uno.Collections.IEnumerable<T> source, Uno.Func<T, TRet> select) :428
void SelectEnumerable__New1_fn(uType* __type, uObject* source, uDelegate* select, SelectEnumerable** __retval)
{
    *__retval = SelectEnumerable::New1(__type, source, select);
}

// public SelectEnumerable(Uno.Collections.IEnumerable<T> source, Uno.Func<T, TRet> select) [instance] :428
void SelectEnumerable::ctor_(uObject* source, uDelegate* select)
{
    _source = source;
    _select = select;
}

// public Uno.Collections.IEnumerator<TRet> GetEnumerator() [instance] :434
uObject* SelectEnumerable::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerator<TRet>*/),
        __type->T(1),
        __type->Precalced(1/*Uno.Collections.SelectEnumerator<T, TRet>*/),
        __type->T(0),
    };
    return (uObject*)((::g::Uno::Collections::SelectEnumerator*)::g::Uno::Collections::SelectEnumerator::New1(__types[2], (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_source), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__types[3]))), _select));
}

// public SelectEnumerable New(Uno.Collections.IEnumerable<T> source, Uno.Func<T, TRet> select) [static] :428
SelectEnumerable* SelectEnumerable::New1(uType* __type, uObject* source, uDelegate* select)
{
    SelectEnumerable* obj1 = (SelectEnumerable*)uNew(__type);
    obj1->ctor_(source, select);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Uno.Collections/0.24.0/Extensions/$.uno(440)
// -------------------------------------------------------------------------------------

// internal sealed class SelectEnumerator<T, TRet> :440
// {
SelectEnumerator_type* SelectEnumerator_typeof()
{
    static uSStrong<SelectEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(SelectEnumerator);
    options.TypeSize = sizeof(SelectEnumerator_type);
    type = (SelectEnumerator_type*)uClassType::New("Uno.Collections.SelectEnumerator`2", options);
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))SelectEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))SelectEnumerator__Dispose_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))SelectEnumerator__MoveNext_fn;
    ::TYPES[35] = ::g::Uno::Func1_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->SetPrecalc(
        ::TYPES[35/*Uno.Func`2*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(1)), offsetof(SelectEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(SelectEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(SelectEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Uno::Collections::SelectEnumerator, _select), 0,
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::SelectEnumerator, _source), 0);
    return type;
}

// public SelectEnumerator(Uno.Collections.IEnumerator<T> source, Uno.Func<T, TRet> select) :445
void SelectEnumerator__ctor__fn(SelectEnumerator* __this, uObject* source, uDelegate* select)
{
    __this->ctor_(source, select);
}

// public TRet get_Current() :453
void SelectEnumerator__get_Current_fn(SelectEnumerator* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(1),
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Func<T, TRet>*/),
        __this->__type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[1], U_ALLOCA(__types[1]->ValueSize));
    ;
    ;
    return __retval.Store((uPtr(__this->_select)->Invoke(&ret2, 1, (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(__this->_source), __types[3]), &ret3), (void*)ret3)), ret2)), void();
}

// public void Dispose() :456
void SelectEnumerator__Dispose_fn(SelectEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :466
void SelectEnumerator__MoveNext_fn(SelectEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public SelectEnumerator New(Uno.Collections.IEnumerator<T> source, Uno.Func<T, TRet> select) :445
void SelectEnumerator__New1_fn(uType* __type, uObject* source, uDelegate* select, SelectEnumerator** __retval)
{
    *__retval = SelectEnumerator::New1(__type, source, select);
}

// public SelectEnumerator(Uno.Collections.IEnumerator<T> source, Uno.Func<T, TRet> select) [instance] :445
void SelectEnumerator::ctor_(uObject* source, uDelegate* select)
{
    _source = source;
    _select = select;
}

// public void Dispose() [instance] :456
void SelectEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :466
bool SelectEnumerator::MoveNext()
{
    return ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(_source), ::g::Uno::Collections::IEnumerator_typeof()));
}

// public SelectEnumerator New(Uno.Collections.IEnumerator<T> source, Uno.Func<T, TRet> select) [static] :445
SelectEnumerator* SelectEnumerator::New1(uType* __type, uObject* source, uDelegate* select)
{
    SelectEnumerator* obj1 = (SelectEnumerator*)uNew(__type);
    obj1->ctor_(source, select);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Uno.Collections/0.24.0/Extensions/$.uno(478)
// -------------------------------------------------------------------------------------

// internal sealed class UnionEnumerable<T> :478
// {
UnionEnumerable_type* UnionEnumerable_typeof()
{
    static uSStrong<UnionEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(UnionEnumerable);
    options.TypeSize = sizeof(UnionEnumerable_type);
    type = (UnionEnumerable_type*)uClassType::New("Uno.Collections.UnionEnumerable`1", options);
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))UnionEnumerable__GetEnumerator_fn;
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[36] = ::g::Uno::Collections::UnionEnumerator_typeof();
    type->SetPrecalc(
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)),
        ::TYPES[36/*Uno.Collections.UnionEnumerator`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(UnionEnumerable_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::UnionEnumerable, _first), 0,
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::UnionEnumerable, _second), 0);
    return type;
}

// public UnionEnumerable(Uno.Collections.IEnumerable<T> first, Uno.Collections.IEnumerable<T> second) :483
void UnionEnumerable__ctor__fn(UnionEnumerable* __this, uObject* first, uObject* second)
{
    __this->ctor_(first, second);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :489
void UnionEnumerable__GetEnumerator_fn(UnionEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public UnionEnumerable New(Uno.Collections.IEnumerable<T> first, Uno.Collections.IEnumerable<T> second) :483
void UnionEnumerable__New1_fn(uType* __type, uObject* first, uObject* second, UnionEnumerable** __retval)
{
    *__retval = UnionEnumerable::New1(__type, first, second);
}

// public UnionEnumerable(Uno.Collections.IEnumerable<T> first, Uno.Collections.IEnumerable<T> second) [instance] :483
void UnionEnumerable::ctor_(uObject* first, uObject* second)
{
    _first = first;
    _second = second;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :489
uObject* UnionEnumerable::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerator<T>*/),
        __type->T(0),
        __type->Precalced(1/*Uno.Collections.UnionEnumerator<T>*/),
    };
    return (uObject*)((::g::Uno::Collections::UnionEnumerator*)::g::Uno::Collections::UnionEnumerator::New1(__types[2], (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_first), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__types[1]))), (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_second), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__types[1])))));
}

// public UnionEnumerable New(Uno.Collections.IEnumerable<T> first, Uno.Collections.IEnumerable<T> second) [static] :483
UnionEnumerable* UnionEnumerable::New1(uType* __type, uObject* first, uObject* second)
{
    UnionEnumerable* obj1 = (UnionEnumerable*)uNew(__type);
    obj1->ctor_(first, second);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Uno.Collections/0.24.0/Extensions/$.uno(495)
// -------------------------------------------------------------------------------------

// internal sealed class UnionEnumerator<T> :495
// {
UnionEnumerator_type* UnionEnumerator_typeof()
{
    static uSStrong<UnionEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(UnionEnumerator);
    options.TypeSize = sizeof(UnionEnumerator_type);
    type = (UnionEnumerator_type*)uClassType::New("Uno.Collections.UnionEnumerator`1", options);
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))UnionEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))UnionEnumerator__Dispose_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))UnionEnumerator__MoveNext_fn;
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->SetPrecalc(
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(UnionEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(UnionEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(UnionEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::UnionEnumerator, _current), 0,
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::UnionEnumerator, _first), 0,
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::UnionEnumerator, _second), 0);
    return type;
}

// public UnionEnumerator(Uno.Collections.IEnumerator<T> first, Uno.Collections.IEnumerator<T> second) :501
void UnionEnumerator__ctor__fn(UnionEnumerator* __this, uObject* first, uObject* second)
{
    __this->ctor_(first, second);
}

// public T get_Current() :510
void UnionEnumerator__get_Current_fn(UnionEnumerator* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(__this->_current), __types[1]), &ret2), ret2)), void();
}

// public void Dispose() :513
void UnionEnumerator__Dispose_fn(UnionEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :525
void UnionEnumerator__MoveNext_fn(UnionEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public UnionEnumerator New(Uno.Collections.IEnumerator<T> first, Uno.Collections.IEnumerator<T> second) :501
void UnionEnumerator__New1_fn(uType* __type, uObject* first, uObject* second, UnionEnumerator** __retval)
{
    *__retval = UnionEnumerator::New1(__type, first, second);
}

// public UnionEnumerator(Uno.Collections.IEnumerator<T> first, Uno.Collections.IEnumerator<T> second) [instance] :501
void UnionEnumerator::ctor_(uObject* first, uObject* second)
{
    _first = first;
    _second = second;
    _current = _first;
}

// public void Dispose() [instance] :513
void UnionEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :525
bool UnionEnumerator::MoveNext()
{
    if (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(_current), ::g::Uno::Collections::IEnumerator_typeof())))
        return true;

    if (_current == _first)
    {
        _current = _second;
        return MoveNext();
    }

    return false;
}

// public UnionEnumerator New(Uno.Collections.IEnumerator<T> first, Uno.Collections.IEnumerator<T> second) [static] :501
UnionEnumerator* UnionEnumerator::New1(uType* __type, uObject* first, uObject* second)
{
    UnionEnumerator* obj1 = (UnionEnumerator*)uNew(__type);
    obj1->ctor_(first, second);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/UnoCore/0.24.3/Source/Uno/Collections/$.uno(170)
// -----------------------------------------------------------------------------------------

// public sealed class Dictionary<TKey, TValue>.ValueCollection :170
// {
Dictionary__ValueCollection_type* Dictionary__ValueCollection_typeof()
{
    static uSStrong<Dictionary__ValueCollection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.InterfaceCount = 2;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(Dictionary__ValueCollection);
    options.TypeSize = sizeof(Dictionary__ValueCollection_type);
    type = (Dictionary__ValueCollection_type*)uClassType::New("Uno.Collections.Dictionary`2.ValueCollection", options);
    type->interface0.fp_Clear = (void(*)(uObject*))Dictionary__ValueCollection__UnoCollectionsICollectionTValueClear_fn;
    type->interface0.fp_Add = (void(*)(uObject*, void*))Dictionary__ValueCollection__UnoCollectionsICollectionTValueAdd_fn;
    type->interface0.fp_Remove = (void(*)(uObject*, void*, bool*))Dictionary__ValueCollection__UnoCollectionsICollectionTValueRemove_fn;
    type->interface0.fp_Contains = (void(*)(uObject*, void*, bool*))Dictionary__ValueCollection__UnoCollectionsICollectionTValueContains_fn;
    type->interface0.fp_get_Count = (void(*)(uObject*, int*))Dictionary__ValueCollection__get_Count_fn;
    type->interface1.fp_GetEnumerator = (void(*)(uObject*, uObject**))Dictionary__ValueCollection__GetEnumerator_boxed_fn;
    ::TYPES[37] = Dictionary__ValueCollection__Enumerator_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[22] = ::g::Uno::Collections::Dictionary_typeof();
    type->SetPrecalc(
        ::TYPES[37/*Uno.Collections.Dictionary`2.ValueCollection.Enumerator*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(1)),
        ::TYPES[22/*Uno.Collections.Dictionary`2*/]->MakeType(type->T(0), type->T(1)));
    type->SetInterfaces(
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(1)), offsetof(Dictionary__ValueCollection_type, interface0),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(1)), offsetof(Dictionary__ValueCollection_type, interface1));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Uno::Collections::Dictionary__ValueCollection, _source), 0);
    return type;
}

// internal ValueCollection(Uno.Collections.Dictionary<TKey, TValue> source) :226
void Dictionary__ValueCollection__ctor__fn(Dictionary__ValueCollection* __this, ::g::Uno::Collections::Dictionary* source)
{
    __this->ctor_(source);
}

// public int get_Count() :258
void Dictionary__ValueCollection__get_Count_fn(Dictionary__ValueCollection* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.Dictionary<TKey, TValue>.ValueCollection.Enumerator GetEnumerator() :231
void Dictionary__ValueCollection__GetEnumerator_fn(Dictionary__ValueCollection* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.ValueCollection.Enumerator*/),
        __this->__type->T(0),
        __this->__type->T(1),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((Dictionary__ValueCollection__Enumerator__New1_fn(__types[0], __this->_source, &ret2), ret2)), void();
}

// public Uno.Collections.Dictionary<TKey, TValue>.ValueCollection.Enumerator GetEnumerator() :231
void Dictionary__ValueCollection__GetEnumerator_boxed_fn(Dictionary__ValueCollection* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// internal ValueCollection New(Uno.Collections.Dictionary<TKey, TValue> source) :226
void Dictionary__ValueCollection__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, Dictionary__ValueCollection** __retval)
{
    *__retval = Dictionary__ValueCollection::New1(__type, source);
}

// private void Uno.Collections.ICollection<TValue>.Add(TValue item) :241
void Dictionary__ValueCollection__UnoCollectionsICollectionTValueAdd_fn(Dictionary__ValueCollection* __this, void* item)
{
    uType* __types[] = {
        __this->__type->T(1),
    };
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private void Uno.Collections.ICollection<TValue>.Clear() :236
void Dictionary__ValueCollection__UnoCollectionsICollectionTValueClear_fn(Dictionary__ValueCollection* __this)
{
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private bool Uno.Collections.ICollection<TValue>.Contains(TValue item) :251
void Dictionary__ValueCollection__UnoCollectionsICollectionTValueContains_fn(Dictionary__ValueCollection* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(1),
    };
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private bool Uno.Collections.ICollection<TValue>.Remove(TValue item) :246
void Dictionary__ValueCollection__UnoCollectionsICollectionTValueRemove_fn(Dictionary__ValueCollection* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(1),
    };
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// internal ValueCollection(Uno.Collections.Dictionary<TKey, TValue> source) [instance] :226
void Dictionary__ValueCollection::ctor_(::g::Uno::Collections::Dictionary* source)
{
    _source = source;
}

// public int get_Count() [instance] :258
int Dictionary__ValueCollection::Count()
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.Collections.Dictionary<TKey, TValue>*/),
        __type->T(0),
        __type->T(1),
    };
    return uPtr(_source)->Count();
}

// public Uno.Collections.Dictionary<TKey, TValue>.ValueCollection.Enumerator GetEnumerator() [instance] :231
uObject* Dictionary__ValueCollection::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.ValueCollection.Enumerator*/),
        __type->T(0),
        __type->T(1),
        __type->Precalced(1/*Uno.Collections.IEnumerator<TValue>*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return uBoxPtr(__types[0], (Dictionary__ValueCollection__GetEnumerator_fn(this, &ret3), ret3));
}

// internal ValueCollection New(Uno.Collections.Dictionary<TKey, TValue> source) [static] :226
Dictionary__ValueCollection* Dictionary__ValueCollection::New1(uType* __type, ::g::Uno::Collections::Dictionary* source)
{
    Dictionary__ValueCollection* obj1 = (Dictionary__ValueCollection*)uNew(__type);
    obj1->ctor_(source);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Uno.Collections/0.24.0/Extensions/$.uno(546)
// -------------------------------------------------------------------------------------

// internal sealed class WhereEnumerable<T> :546
// {
WhereEnumerable_type* WhereEnumerable_typeof()
{
    static uSStrong<WhereEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(WhereEnumerable);
    options.TypeSize = sizeof(WhereEnumerable_type);
    type = (WhereEnumerable_type*)uClassType::New("Uno.Collections.WhereEnumerable`1", options);
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))WhereEnumerable__GetEnumerator_fn;
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[38] = ::g::Uno::Collections::WhereEnumerator_typeof();
    type->SetPrecalc(
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)),
        ::TYPES[38/*Uno.Collections.WhereEnumerator`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(WhereEnumerable_type, interface0));
    type->SetFields(0,
        ::g::Uno::Predicate_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::WhereEnumerable, _predicate), 0,
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::WhereEnumerable, _source), 0);
    return type;
}

// public WhereEnumerable(Uno.Collections.IEnumerable<T> source, Uno.Predicate<T> predicate) :551
void WhereEnumerable__ctor__fn(WhereEnumerable* __this, uObject* source, uDelegate* predicate)
{
    __this->ctor_(source, predicate);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :557
void WhereEnumerable__GetEnumerator_fn(WhereEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public WhereEnumerable New(Uno.Collections.IEnumerable<T> source, Uno.Predicate<T> predicate) :551
void WhereEnumerable__New1_fn(uType* __type, uObject* source, uDelegate* predicate, WhereEnumerable** __retval)
{
    *__retval = WhereEnumerable::New1(__type, source, predicate);
}

// public WhereEnumerable(Uno.Collections.IEnumerable<T> source, Uno.Predicate<T> predicate) [instance] :551
void WhereEnumerable::ctor_(uObject* source, uDelegate* predicate)
{
    _source = source;
    _predicate = predicate;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :557
uObject* WhereEnumerable::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerator<T>*/),
        __type->T(0),
        __type->Precalced(1/*Uno.Collections.WhereEnumerator<T>*/),
    };
    return (uObject*)((::g::Uno::Collections::WhereEnumerator*)::g::Uno::Collections::WhereEnumerator::New1(__types[2], (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_source), ::TYPES[17/*Uno.Collections.IEnumerable`1*/]->MakeType(__types[1]))), _predicate));
}

// public WhereEnumerable New(Uno.Collections.IEnumerable<T> source, Uno.Predicate<T> predicate) [static] :551
WhereEnumerable* WhereEnumerable::New1(uType* __type, uObject* source, uDelegate* predicate)
{
    WhereEnumerable* obj1 = (WhereEnumerable*)uNew(__type);
    obj1->ctor_(source, predicate);
    return obj1;
}
// }

// ../../../../usr/local/share/uno/Packages/Uno.Collections/0.24.0/Extensions/$.uno(563)
// -------------------------------------------------------------------------------------

// internal sealed class WhereEnumerator<T> :563
// {
WhereEnumerator_type* WhereEnumerator_typeof()
{
    static uSStrong<WhereEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(WhereEnumerator);
    options.TypeSize = sizeof(WhereEnumerator_type);
    type = (WhereEnumerator_type*)uClassType::New("Uno.Collections.WhereEnumerator`1", options);
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))WhereEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))WhereEnumerator__Dispose_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))WhereEnumerator__MoveNext_fn;
    ::TYPES[3] = ::g::Uno::Bool_typeof();
    ::TYPES[16] = ::g::Uno::Predicate_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->SetPrecalc(
        ::TYPES[16/*Uno.Predicate`1*/]->MakeType(type->T(0)),
        ::TYPES[7/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(WhereEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(WhereEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(WhereEnumerator_type, interface2));
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Predicate_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::WhereEnumerator, _predicate), 0,
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Collections::WhereEnumerator, _source), 0);
    return type;
}

// public WhereEnumerator(Uno.Collections.IEnumerator<T> source, Uno.Predicate<T> predicate) :569
void WhereEnumerator__ctor__fn(WhereEnumerator* __this, uObject* source, uDelegate* predicate)
{
    __this->ctor_(source, predicate);
}

// public T get_Current() :577
void WhereEnumerator__get_Current_fn(WhereEnumerator* __this, uTRef __retval)
{
    return __retval.Store(__this->_current()), void();
}

// public void Dispose() :580
void WhereEnumerator__Dispose_fn(WhereEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :590
void WhereEnumerator__MoveNext_fn(WhereEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public WhereEnumerator New(Uno.Collections.IEnumerator<T> source, Uno.Predicate<T> predicate) :569
void WhereEnumerator__New1_fn(uType* __type, uObject* source, uDelegate* predicate, WhereEnumerator** __retval)
{
    *__retval = WhereEnumerator::New1(__type, source, predicate);
}

// public WhereEnumerator(Uno.Collections.IEnumerator<T> source, Uno.Predicate<T> predicate) [instance] :569
void WhereEnumerator::ctor_(uObject* source, uDelegate* predicate)
{
    _source = source;
    _predicate = predicate;
}

// public void Dispose() [instance] :580
void WhereEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :590
bool WhereEnumerator::MoveNext()
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Uno.Predicate<T>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret2;
    ;
    ;

    while (true)
    {
        if (!::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(_source), ::g::Uno::Collections::IEnumerator_typeof())))
            return false;

        if ((uPtr(_predicate)->Invoke(&ret2, 1, (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(_source), __types[2]), &ret3), (void*)ret3)), ret2))
        {
            _current() = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(_source), __types[2]), &ret4), ret4);
            return true;
        }
    }

    return false;
}

// public WhereEnumerator New(Uno.Collections.IEnumerator<T> source, Uno.Predicate<T> predicate) [static] :569
WhereEnumerator* WhereEnumerator::New1(uType* __type, uObject* source, uDelegate* predicate)
{
    WhereEnumerator* obj1 = (WhereEnumerator*)uNew(__type);
    obj1->ctor_(source, predicate);
    return obj1;
}
// }

}}} // ::g::Uno::Collections
