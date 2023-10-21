#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Exception System.Linq.Error::NotSupported()
extern void Error_NotSupported_m51A0560ABF374B66CF6D1208DAF27C4CBAD9AABA (void);
// 0x00000006 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000008 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000009 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::SkipIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<TKey,TSource>> System.Linq.Enumerable::GroupBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ConcatIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
// 0x00000016 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000017 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x00000018 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x00000019 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001A TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001B TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001E System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000020 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000021 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000022 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000023 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000024 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000025 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000026 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000027 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000028 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000029 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000002B System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000002C System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000002D System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000002F System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000030 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000031 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000032 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000033 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000035 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000036 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000037 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000038 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000039 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000003F System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000040 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000042 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000043 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000044 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000045 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000046 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000047 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000048 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000049 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000004A System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000004B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004D System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000004E System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000004F System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000050 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000051 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x00000052 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000053 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x00000054 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000055 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000056 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000057 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000058 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000059 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000005A System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005B System.Void System.Linq.Enumerable/<SkipIterator>d__31`1::.ctor(System.Int32)
// 0x0000005C System.Void System.Linq.Enumerable/<SkipIterator>d__31`1::System.IDisposable.Dispose()
// 0x0000005D System.Boolean System.Linq.Enumerable/<SkipIterator>d__31`1::MoveNext()
// 0x0000005E System.Void System.Linq.Enumerable/<SkipIterator>d__31`1::<>m__Finally1()
// 0x0000005F TSource System.Linq.Enumerable/<SkipIterator>d__31`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000060 System.Void System.Linq.Enumerable/<SkipIterator>d__31`1::System.Collections.IEnumerator.Reset()
// 0x00000061 System.Object System.Linq.Enumerable/<SkipIterator>d__31`1::System.Collections.IEnumerator.get_Current()
// 0x00000062 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<SkipIterator>d__31`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000063 System.Collections.IEnumerator System.Linq.Enumerable/<SkipIterator>d__31`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000064 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::.ctor(System.Int32)
// 0x00000065 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::System.IDisposable.Dispose()
// 0x00000066 System.Boolean System.Linq.Enumerable/<ConcatIterator>d__59`1::MoveNext()
// 0x00000067 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::<>m__Finally1()
// 0x00000068 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::<>m__Finally2()
// 0x00000069 TSource System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006A System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerator.Reset()
// 0x0000006B System.Object System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerator.get_Current()
// 0x0000006C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006D System.Collections.IEnumerator System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006E System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x0000006F System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x00000070 System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x00000071 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x00000072 TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000073 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x00000074 System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x00000075 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000076 System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000077 System.Func`2<TElement,TElement> System.Linq.IdentityFunction`1::get_Instance()
// 0x00000078 System.Void System.Linq.IdentityFunction`1/<>c::.cctor()
// 0x00000079 System.Void System.Linq.IdentityFunction`1/<>c::.ctor()
// 0x0000007A TElement System.Linq.IdentityFunction`1/<>c::<get_Instance>b__1_0(TElement)
// 0x0000007B System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000007C TKey System.Linq.IGrouping`2::get_Key()
// 0x0000007D System.Linq.Lookup`2<TKey,TElement> System.Linq.Lookup`2::Create(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000007E System.Void System.Linq.Lookup`2::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000007F System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.Lookup`2::GetEnumerator()
// 0x00000080 System.Collections.IEnumerator System.Linq.Lookup`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000081 System.Int32 System.Linq.Lookup`2::InternalGetHashCode(TKey)
// 0x00000082 System.Linq.Lookup`2/Grouping<TKey,TElement> System.Linq.Lookup`2::GetGrouping(TKey,System.Boolean)
// 0x00000083 System.Void System.Linq.Lookup`2::Resize()
// 0x00000084 System.Void System.Linq.Lookup`2/Grouping::Add(TElement)
// 0x00000085 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.Lookup`2/Grouping::GetEnumerator()
// 0x00000086 System.Collections.IEnumerator System.Linq.Lookup`2/Grouping::System.Collections.IEnumerable.GetEnumerator()
// 0x00000087 TKey System.Linq.Lookup`2/Grouping::get_Key()
// 0x00000088 System.Int32 System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.get_Count()
// 0x00000089 System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.get_IsReadOnly()
// 0x0000008A System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Add(TElement)
// 0x0000008B System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Clear()
// 0x0000008C System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Contains(TElement)
// 0x0000008D System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.CopyTo(TElement[],System.Int32)
// 0x0000008E System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Remove(TElement)
// 0x0000008F System.Int32 System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.IndexOf(TElement)
// 0x00000090 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.Insert(System.Int32,TElement)
// 0x00000091 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.RemoveAt(System.Int32)
// 0x00000092 TElement System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.get_Item(System.Int32)
// 0x00000093 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.set_Item(System.Int32,TElement)
// 0x00000094 System.Void System.Linq.Lookup`2/Grouping::.ctor()
// 0x00000095 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::.ctor(System.Int32)
// 0x00000096 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.IDisposable.Dispose()
// 0x00000097 System.Boolean System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::MoveNext()
// 0x00000098 TElement System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000099 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.IEnumerator.Reset()
// 0x0000009A System.Object System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.IEnumerator.get_Current()
// 0x0000009B System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::.ctor(System.Int32)
// 0x0000009C System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::System.IDisposable.Dispose()
// 0x0000009D System.Boolean System.Linq.Lookup`2/<GetEnumerator>d__12::MoveNext()
// 0x0000009E System.Linq.IGrouping`2<TKey,TElement> System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.Generic.IEnumerator<System.Linq.IGrouping<TKey,TElement>>.get_Current()
// 0x0000009F System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.IEnumerator.Reset()
// 0x000000A0 System.Object System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.IEnumerator.get_Current()
// 0x000000A1 System.Void System.Linq.GroupedEnumerable`3::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x000000A2 System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.GroupedEnumerable`3::GetEnumerator()
// 0x000000A3 System.Collections.IEnumerator System.Linq.GroupedEnumerable`3::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A4 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x000000A5 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A6 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A7 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A8 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x000000A9 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x000000AA System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000AB System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000AC TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000AD System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000AE System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000AF System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000B0 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000B1 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000B2 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000B3 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000B4 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000B5 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000B6 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000B7 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000B8 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000B9 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000BA TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000BB System.Void System.Collections.Generic.BitHelper::.ctor(System.Int32*,System.Int32)
extern void BitHelper__ctor_m2770BB414919277B2CF522840B54819F5082CD80 (void);
// 0x000000BC System.Void System.Collections.Generic.BitHelper::.ctor(System.Int32[],System.Int32)
extern void BitHelper__ctor_m7A8E43BE1D2A4ED086E708B6FFE693322FC9D2EB (void);
// 0x000000BD System.Void System.Collections.Generic.BitHelper::MarkBit(System.Int32)
extern void BitHelper_MarkBit_m1C6D787021BEA9D02DCA0762C09E5D443E04A86B (void);
// 0x000000BE System.Boolean System.Collections.Generic.BitHelper::IsMarked(System.Int32)
extern void BitHelper_IsMarked_m6036A81F50D820045D3F62E52D57098A332AB608 (void);
// 0x000000BF System.Int32 System.Collections.Generic.BitHelper::ToIntArrayLength(System.Int32)
extern void BitHelper_ToIntArrayLength_m32A0B1B014CB81891165AC325514784171C8E7B3 (void);
// 0x000000C0 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000C1 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000C2 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000C3 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000C4 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000C5 System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x000000C6 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000C7 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000C8 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000C9 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000CA System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000CB System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000CC System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000CD System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000CE System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000CF System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000D0 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000D1 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000D2 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000D3 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000D4 System.Boolean System.Collections.Generic.HashSet`1::SetEquals(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000D5 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000D6 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000D7 System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x000000D8 System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x000000D9 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000DA System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000DB System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000DC System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000DD System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x000000DE System.Boolean System.Collections.Generic.HashSet`1::ContainsAllElements(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000DF System.Int32 System.Collections.Generic.HashSet`1::InternalIndexOf(T)
// 0x000000E0 System.Collections.Generic.HashSet`1/ElementCount<T> System.Collections.Generic.HashSet`1::CheckUniqueAndUnfoundElements(System.Collections.Generic.IEnumerable`1<T>,System.Boolean)
// 0x000000E1 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x000000E2 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000E3 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000E4 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000E5 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000E6 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000E7 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000E8 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[232] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	Error_NotSupported_m51A0560ABF374B66CF6D1208DAF27C4CBAD9AABA,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	BitHelper__ctor_m2770BB414919277B2CF522840B54819F5082CD80,
	BitHelper__ctor_m7A8E43BE1D2A4ED086E708B6FFE693322FC9D2EB,
	BitHelper_MarkBit_m1C6D787021BEA9D02DCA0762C09E5D443E04A86B,
	BitHelper_IsMarked_m6036A81F50D820045D3F62E52D57098A332AB608,
	BitHelper_ToIntArrayLength_m32A0B1B014CB81891165AC325514784171C8E7B3,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[232] = 
{
	4170,
	4170,
	4291,
	4291,
	4291,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	1204,
	1425,
	2255,
	1985,
	4114,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[63] = 
{
	{ 0x02000004, { 90, 4 } },
	{ 0x02000005, { 94, 9 } },
	{ 0x02000006, { 105, 7 } },
	{ 0x02000007, { 114, 10 } },
	{ 0x02000008, { 126, 11 } },
	{ 0x02000009, { 140, 9 } },
	{ 0x0200000A, { 152, 12 } },
	{ 0x0200000B, { 167, 1 } },
	{ 0x0200000C, { 168, 2 } },
	{ 0x0200000D, { 170, 12 } },
	{ 0x0200000E, { 182, 8 } },
	{ 0x0200000F, { 190, 9 } },
	{ 0x02000010, { 199, 6 } },
	{ 0x02000011, { 205, 4 } },
	{ 0x02000012, { 209, 3 } },
	{ 0x02000015, { 212, 17 } },
	{ 0x02000016, { 233, 5 } },
	{ 0x02000017, { 238, 1 } },
	{ 0x02000019, { 239, 4 } },
	{ 0x0200001A, { 243, 3 } },
	{ 0x0200001B, { 248, 5 } },
	{ 0x0200001C, { 253, 7 } },
	{ 0x0200001D, { 260, 3 } },
	{ 0x0200001E, { 263, 7 } },
	{ 0x0200001F, { 270, 4 } },
	{ 0x02000021, { 274, 39 } },
	{ 0x02000024, { 313, 2 } },
	{ 0x06000006, { 0, 10 } },
	{ 0x06000007, { 10, 10 } },
	{ 0x06000008, { 20, 5 } },
	{ 0x06000009, { 25, 5 } },
	{ 0x0600000A, { 30, 1 } },
	{ 0x0600000B, { 31, 2 } },
	{ 0x0600000C, { 33, 1 } },
	{ 0x0600000D, { 34, 2 } },
	{ 0x0600000E, { 36, 2 } },
	{ 0x0600000F, { 38, 1 } },
	{ 0x06000010, { 39, 4 } },
	{ 0x06000011, { 43, 1 } },
	{ 0x06000012, { 44, 2 } },
	{ 0x06000013, { 46, 3 } },
	{ 0x06000014, { 49, 2 } },
	{ 0x06000015, { 51, 1 } },
	{ 0x06000016, { 52, 7 } },
	{ 0x06000017, { 59, 2 } },
	{ 0x06000018, { 61, 2 } },
	{ 0x06000019, { 63, 4 } },
	{ 0x0600001A, { 67, 3 } },
	{ 0x0600001B, { 70, 4 } },
	{ 0x0600001C, { 74, 3 } },
	{ 0x0600001D, { 77, 1 } },
	{ 0x0600001E, { 78, 3 } },
	{ 0x0600001F, { 81, 2 } },
	{ 0x06000020, { 83, 2 } },
	{ 0x06000021, { 85, 5 } },
	{ 0x06000031, { 103, 2 } },
	{ 0x06000036, { 112, 2 } },
	{ 0x0600003B, { 124, 2 } },
	{ 0x06000041, { 137, 3 } },
	{ 0x06000046, { 149, 3 } },
	{ 0x0600004B, { 164, 3 } },
	{ 0x0600007D, { 229, 4 } },
	{ 0x060000A7, { 246, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[315] = 
{
	{ (Il2CppRGCTXDataType)2, 3507 },
	{ (Il2CppRGCTXDataType)3, 10558 },
	{ (Il2CppRGCTXDataType)2, 4932 },
	{ (Il2CppRGCTXDataType)2, 4490 },
	{ (Il2CppRGCTXDataType)3, 17591 },
	{ (Il2CppRGCTXDataType)2, 3627 },
	{ (Il2CppRGCTXDataType)2, 4497 },
	{ (Il2CppRGCTXDataType)3, 17615 },
	{ (Il2CppRGCTXDataType)2, 4492 },
	{ (Il2CppRGCTXDataType)3, 17598 },
	{ (Il2CppRGCTXDataType)2, 3508 },
	{ (Il2CppRGCTXDataType)3, 10559 },
	{ (Il2CppRGCTXDataType)2, 4973 },
	{ (Il2CppRGCTXDataType)2, 4499 },
	{ (Il2CppRGCTXDataType)3, 17622 },
	{ (Il2CppRGCTXDataType)2, 3649 },
	{ (Il2CppRGCTXDataType)2, 4507 },
	{ (Il2CppRGCTXDataType)3, 17652 },
	{ (Il2CppRGCTXDataType)2, 4503 },
	{ (Il2CppRGCTXDataType)3, 17636 },
	{ (Il2CppRGCTXDataType)2, 1323 },
	{ (Il2CppRGCTXDataType)3, 251 },
	{ (Il2CppRGCTXDataType)3, 252 },
	{ (Il2CppRGCTXDataType)2, 2404 },
	{ (Il2CppRGCTXDataType)3, 8291 },
	{ (Il2CppRGCTXDataType)2, 1330 },
	{ (Il2CppRGCTXDataType)3, 285 },
	{ (Il2CppRGCTXDataType)3, 286 },
	{ (Il2CppRGCTXDataType)2, 2431 },
	{ (Il2CppRGCTXDataType)3, 8300 },
	{ (Il2CppRGCTXDataType)3, 20265 },
	{ (Il2CppRGCTXDataType)2, 1399 },
	{ (Il2CppRGCTXDataType)3, 803 },
	{ (Il2CppRGCTXDataType)3, 20271 },
	{ (Il2CppRGCTXDataType)2, 1401 },
	{ (Il2CppRGCTXDataType)3, 819 },
	{ (Il2CppRGCTXDataType)2, 4126 },
	{ (Il2CppRGCTXDataType)3, 15520 },
	{ (Il2CppRGCTXDataType)3, 9161 },
	{ (Il2CppRGCTXDataType)3, 9170 },
	{ (Il2CppRGCTXDataType)2, 3490 },
	{ (Il2CppRGCTXDataType)2, 2629 },
	{ (Il2CppRGCTXDataType)3, 8793 },
	{ (Il2CppRGCTXDataType)3, 20222 },
	{ (Il2CppRGCTXDataType)2, 1357 },
	{ (Il2CppRGCTXDataType)3, 470 },
	{ (Il2CppRGCTXDataType)2, 1733 },
	{ (Il2CppRGCTXDataType)3, 2738 },
	{ (Il2CppRGCTXDataType)3, 2739 },
	{ (Il2CppRGCTXDataType)2, 3628 },
	{ (Il2CppRGCTXDataType)3, 11308 },
	{ (Il2CppRGCTXDataType)3, 20293 },
	{ (Il2CppRGCTXDataType)2, 1928 },
	{ (Il2CppRGCTXDataType)3, 3862 },
	{ (Il2CppRGCTXDataType)2, 2894 },
	{ (Il2CppRGCTXDataType)2, 3078 },
	{ (Il2CppRGCTXDataType)3, 8298 },
	{ (Il2CppRGCTXDataType)3, 8299 },
	{ (Il2CppRGCTXDataType)3, 3863 },
	{ (Il2CppRGCTXDataType)2, 2821 },
	{ (Il2CppRGCTXDataType)3, 20205 },
	{ (Il2CppRGCTXDataType)2, 1355 },
	{ (Il2CppRGCTXDataType)3, 456 },
	{ (Il2CppRGCTXDataType)2, 3404 },
	{ (Il2CppRGCTXDataType)2, 2690 },
	{ (Il2CppRGCTXDataType)2, 2830 },
	{ (Il2CppRGCTXDataType)2, 3066 },
	{ (Il2CppRGCTXDataType)2, 2831 },
	{ (Il2CppRGCTXDataType)2, 3067 },
	{ (Il2CppRGCTXDataType)3, 8292 },
	{ (Il2CppRGCTXDataType)2, 3405 },
	{ (Il2CppRGCTXDataType)2, 2691 },
	{ (Il2CppRGCTXDataType)2, 2832 },
	{ (Il2CppRGCTXDataType)2, 3068 },
	{ (Il2CppRGCTXDataType)2, 2833 },
	{ (Il2CppRGCTXDataType)2, 3069 },
	{ (Il2CppRGCTXDataType)3, 8293 },
	{ (Il2CppRGCTXDataType)2, 2817 },
	{ (Il2CppRGCTXDataType)2, 2818 },
	{ (Il2CppRGCTXDataType)2, 3064 },
	{ (Il2CppRGCTXDataType)3, 8290 },
	{ (Il2CppRGCTXDataType)2, 2689 },
	{ (Il2CppRGCTXDataType)2, 2829 },
	{ (Il2CppRGCTXDataType)2, 2688 },
	{ (Il2CppRGCTXDataType)3, 20231 },
	{ (Il2CppRGCTXDataType)3, 7647 },
	{ (Il2CppRGCTXDataType)2, 2252 },
	{ (Il2CppRGCTXDataType)2, 2820 },
	{ (Il2CppRGCTXDataType)2, 3065 },
	{ (Il2CppRGCTXDataType)2, 3218 },
	{ (Il2CppRGCTXDataType)3, 10560 },
	{ (Il2CppRGCTXDataType)3, 10562 },
	{ (Il2CppRGCTXDataType)2, 846 },
	{ (Il2CppRGCTXDataType)3, 10561 },
	{ (Il2CppRGCTXDataType)3, 10570 },
	{ (Il2CppRGCTXDataType)2, 3511 },
	{ (Il2CppRGCTXDataType)2, 4493 },
	{ (Il2CppRGCTXDataType)3, 17599 },
	{ (Il2CppRGCTXDataType)3, 10571 },
	{ (Il2CppRGCTXDataType)2, 2935 },
	{ (Il2CppRGCTXDataType)2, 3108 },
	{ (Il2CppRGCTXDataType)3, 8311 },
	{ (Il2CppRGCTXDataType)3, 20208 },
	{ (Il2CppRGCTXDataType)2, 4504 },
	{ (Il2CppRGCTXDataType)3, 17637 },
	{ (Il2CppRGCTXDataType)3, 10563 },
	{ (Il2CppRGCTXDataType)2, 3510 },
	{ (Il2CppRGCTXDataType)2, 4491 },
	{ (Il2CppRGCTXDataType)3, 17592 },
	{ (Il2CppRGCTXDataType)3, 8310 },
	{ (Il2CppRGCTXDataType)3, 10564 },
	{ (Il2CppRGCTXDataType)3, 20207 },
	{ (Il2CppRGCTXDataType)2, 4500 },
	{ (Il2CppRGCTXDataType)3, 17623 },
	{ (Il2CppRGCTXDataType)3, 10577 },
	{ (Il2CppRGCTXDataType)2, 3512 },
	{ (Il2CppRGCTXDataType)2, 4498 },
	{ (Il2CppRGCTXDataType)3, 17616 },
	{ (Il2CppRGCTXDataType)3, 11396 },
	{ (Il2CppRGCTXDataType)3, 6622 },
	{ (Il2CppRGCTXDataType)3, 8312 },
	{ (Il2CppRGCTXDataType)3, 6621 },
	{ (Il2CppRGCTXDataType)3, 10578 },
	{ (Il2CppRGCTXDataType)3, 20209 },
	{ (Il2CppRGCTXDataType)2, 4508 },
	{ (Il2CppRGCTXDataType)3, 17653 },
	{ (Il2CppRGCTXDataType)3, 10591 },
	{ (Il2CppRGCTXDataType)2, 3514 },
	{ (Il2CppRGCTXDataType)2, 4506 },
	{ (Il2CppRGCTXDataType)3, 17639 },
	{ (Il2CppRGCTXDataType)3, 10592 },
	{ (Il2CppRGCTXDataType)2, 2938 },
	{ (Il2CppRGCTXDataType)2, 3111 },
	{ (Il2CppRGCTXDataType)3, 8316 },
	{ (Il2CppRGCTXDataType)3, 8315 },
	{ (Il2CppRGCTXDataType)2, 4495 },
	{ (Il2CppRGCTXDataType)3, 17601 },
	{ (Il2CppRGCTXDataType)3, 20213 },
	{ (Il2CppRGCTXDataType)2, 4505 },
	{ (Il2CppRGCTXDataType)3, 17638 },
	{ (Il2CppRGCTXDataType)3, 10584 },
	{ (Il2CppRGCTXDataType)2, 3513 },
	{ (Il2CppRGCTXDataType)2, 4502 },
	{ (Il2CppRGCTXDataType)3, 17625 },
	{ (Il2CppRGCTXDataType)3, 8314 },
	{ (Il2CppRGCTXDataType)3, 8313 },
	{ (Il2CppRGCTXDataType)3, 10585 },
	{ (Il2CppRGCTXDataType)2, 4494 },
	{ (Il2CppRGCTXDataType)3, 17600 },
	{ (Il2CppRGCTXDataType)3, 20212 },
	{ (Il2CppRGCTXDataType)2, 4501 },
	{ (Il2CppRGCTXDataType)3, 17624 },
	{ (Il2CppRGCTXDataType)3, 10598 },
	{ (Il2CppRGCTXDataType)2, 3515 },
	{ (Il2CppRGCTXDataType)2, 4510 },
	{ (Il2CppRGCTXDataType)3, 17655 },
	{ (Il2CppRGCTXDataType)3, 11397 },
	{ (Il2CppRGCTXDataType)3, 6624 },
	{ (Il2CppRGCTXDataType)3, 8318 },
	{ (Il2CppRGCTXDataType)3, 8317 },
	{ (Il2CppRGCTXDataType)3, 6623 },
	{ (Il2CppRGCTXDataType)3, 10599 },
	{ (Il2CppRGCTXDataType)2, 4496 },
	{ (Il2CppRGCTXDataType)3, 17602 },
	{ (Il2CppRGCTXDataType)3, 20214 },
	{ (Il2CppRGCTXDataType)2, 4509 },
	{ (Il2CppRGCTXDataType)3, 17654 },
	{ (Il2CppRGCTXDataType)3, 8307 },
	{ (Il2CppRGCTXDataType)3, 8308 },
	{ (Il2CppRGCTXDataType)3, 8319 },
	{ (Il2CppRGCTXDataType)3, 806 },
	{ (Il2CppRGCTXDataType)3, 805 },
	{ (Il2CppRGCTXDataType)2, 2927 },
	{ (Il2CppRGCTXDataType)2, 3102 },
	{ (Il2CppRGCTXDataType)3, 8309 },
	{ (Il2CppRGCTXDataType)2, 3022 },
	{ (Il2CppRGCTXDataType)2, 3176 },
	{ (Il2CppRGCTXDataType)3, 808 },
	{ (Il2CppRGCTXDataType)2, 1156 },
	{ (Il2CppRGCTXDataType)2, 1400 },
	{ (Il2CppRGCTXDataType)3, 804 },
	{ (Il2CppRGCTXDataType)3, 807 },
	{ (Il2CppRGCTXDataType)3, 821 },
	{ (Il2CppRGCTXDataType)2, 2930 },
	{ (Il2CppRGCTXDataType)2, 3104 },
	{ (Il2CppRGCTXDataType)3, 823 },
	{ (Il2CppRGCTXDataType)2, 844 },
	{ (Il2CppRGCTXDataType)2, 1402 },
	{ (Il2CppRGCTXDataType)3, 820 },
	{ (Il2CppRGCTXDataType)3, 822 },
	{ (Il2CppRGCTXDataType)3, 472 },
	{ (Il2CppRGCTXDataType)3, 473 },
	{ (Il2CppRGCTXDataType)2, 2924 },
	{ (Il2CppRGCTXDataType)2, 3100 },
	{ (Il2CppRGCTXDataType)3, 475 },
	{ (Il2CppRGCTXDataType)2, 841 },
	{ (Il2CppRGCTXDataType)2, 1358 },
	{ (Il2CppRGCTXDataType)3, 471 },
	{ (Il2CppRGCTXDataType)3, 474 },
	{ (Il2CppRGCTXDataType)3, 458 },
	{ (Il2CppRGCTXDataType)2, 839 },
	{ (Il2CppRGCTXDataType)3, 460 },
	{ (Il2CppRGCTXDataType)2, 1356 },
	{ (Il2CppRGCTXDataType)3, 457 },
	{ (Il2CppRGCTXDataType)3, 459 },
	{ (Il2CppRGCTXDataType)2, 1259 },
	{ (Il2CppRGCTXDataType)3, 2 },
	{ (Il2CppRGCTXDataType)2, 2440 },
	{ (Il2CppRGCTXDataType)3, 8303 },
	{ (Il2CppRGCTXDataType)2, 1265 },
	{ (Il2CppRGCTXDataType)3, 8 },
	{ (Il2CppRGCTXDataType)2, 1265 },
	{ (Il2CppRGCTXDataType)2, 4016 },
	{ (Il2CppRGCTXDataType)3, 14459 },
	{ (Il2CppRGCTXDataType)3, 14461 },
	{ (Il2CppRGCTXDataType)3, 8802 },
	{ (Il2CppRGCTXDataType)3, 7680 },
	{ (Il2CppRGCTXDataType)2, 2267 },
	{ (Il2CppRGCTXDataType)2, 5043 },
	{ (Il2CppRGCTXDataType)2, 1372 },
	{ (Il2CppRGCTXDataType)3, 594 },
	{ (Il2CppRGCTXDataType)3, 14460 },
	{ (Il2CppRGCTXDataType)2, 685 },
	{ (Il2CppRGCTXDataType)2, 3233 },
	{ (Il2CppRGCTXDataType)3, 14462 },
	{ (Il2CppRGCTXDataType)3, 14463 },
	{ (Il2CppRGCTXDataType)2, 2630 },
	{ (Il2CppRGCTXDataType)3, 8801 },
	{ (Il2CppRGCTXDataType)2, 5037 },
	{ (Il2CppRGCTXDataType)2, 2870 },
	{ (Il2CppRGCTXDataType)2, 3077 },
	{ (Il2CppRGCTXDataType)3, 8294 },
	{ (Il2CppRGCTXDataType)3, 8295 },
	{ (Il2CppRGCTXDataType)3, 19719 },
	{ (Il2CppRGCTXDataType)2, 1374 },
	{ (Il2CppRGCTXDataType)3, 614 },
	{ (Il2CppRGCTXDataType)3, 8803 },
	{ (Il2CppRGCTXDataType)3, 17825 },
	{ (Il2CppRGCTXDataType)2, 1173 },
	{ (Il2CppRGCTXDataType)3, 14464 },
	{ (Il2CppRGCTXDataType)2, 4018 },
	{ (Il2CppRGCTXDataType)3, 14465 },
	{ (Il2CppRGCTXDataType)3, 8794 },
	{ (Il2CppRGCTXDataType)2, 1371 },
	{ (Il2CppRGCTXDataType)3, 581 },
	{ (Il2CppRGCTXDataType)3, 15504 },
	{ (Il2CppRGCTXDataType)2, 4127 },
	{ (Il2CppRGCTXDataType)3, 15521 },
	{ (Il2CppRGCTXDataType)2, 1734 },
	{ (Il2CppRGCTXDataType)3, 2740 },
	{ (Il2CppRGCTXDataType)3, 15510 },
	{ (Il2CppRGCTXDataType)3, 6592 },
	{ (Il2CppRGCTXDataType)2, 940 },
	{ (Il2CppRGCTXDataType)3, 15505 },
	{ (Il2CppRGCTXDataType)2, 4123 },
	{ (Il2CppRGCTXDataType)3, 2858 },
	{ (Il2CppRGCTXDataType)2, 1762 },
	{ (Il2CppRGCTXDataType)2, 2214 },
	{ (Il2CppRGCTXDataType)3, 6601 },
	{ (Il2CppRGCTXDataType)3, 15506 },
	{ (Il2CppRGCTXDataType)3, 6587 },
	{ (Il2CppRGCTXDataType)3, 6588 },
	{ (Il2CppRGCTXDataType)3, 6586 },
	{ (Il2CppRGCTXDataType)3, 6589 },
	{ (Il2CppRGCTXDataType)2, 2210 },
	{ (Il2CppRGCTXDataType)2, 5033 },
	{ (Il2CppRGCTXDataType)3, 8302 },
	{ (Il2CppRGCTXDataType)3, 6591 },
	{ (Il2CppRGCTXDataType)2, 2794 },
	{ (Il2CppRGCTXDataType)3, 6590 },
	{ (Il2CppRGCTXDataType)2, 2702 },
	{ (Il2CppRGCTXDataType)2, 4979 },
	{ (Il2CppRGCTXDataType)2, 2895 },
	{ (Il2CppRGCTXDataType)2, 3079 },
	{ (Il2CppRGCTXDataType)3, 7670 },
	{ (Il2CppRGCTXDataType)2, 2263 },
	{ (Il2CppRGCTXDataType)3, 8855 },
	{ (Il2CppRGCTXDataType)3, 8856 },
	{ (Il2CppRGCTXDataType)2, 2643 },
	{ (Il2CppRGCTXDataType)3, 8859 },
	{ (Il2CppRGCTXDataType)2, 2643 },
	{ (Il2CppRGCTXDataType)3, 8863 },
	{ (Il2CppRGCTXDataType)2, 2703 },
	{ (Il2CppRGCTXDataType)3, 8867 },
	{ (Il2CppRGCTXDataType)3, 8872 },
	{ (Il2CppRGCTXDataType)3, 8871 },
	{ (Il2CppRGCTXDataType)2, 5057 },
	{ (Il2CppRGCTXDataType)3, 8858 },
	{ (Il2CppRGCTXDataType)3, 8857 },
	{ (Il2CppRGCTXDataType)3, 8868 },
	{ (Il2CppRGCTXDataType)2, 3230 },
	{ (Il2CppRGCTXDataType)3, 8865 },
	{ (Il2CppRGCTXDataType)3, 20852 },
	{ (Il2CppRGCTXDataType)2, 2216 },
	{ (Il2CppRGCTXDataType)3, 6613 },
	{ (Il2CppRGCTXDataType)1, 2787 },
	{ (Il2CppRGCTXDataType)2, 4995 },
	{ (Il2CppRGCTXDataType)3, 8864 },
	{ (Il2CppRGCTXDataType)1, 4995 },
	{ (Il2CppRGCTXDataType)1, 3230 },
	{ (Il2CppRGCTXDataType)2, 5057 },
	{ (Il2CppRGCTXDataType)2, 4995 },
	{ (Il2CppRGCTXDataType)2, 2899 },
	{ (Il2CppRGCTXDataType)2, 3081 },
	{ (Il2CppRGCTXDataType)3, 8874 },
	{ (Il2CppRGCTXDataType)3, 8862 },
	{ (Il2CppRGCTXDataType)3, 8860 },
	{ (Il2CppRGCTXDataType)3, 8870 },
	{ (Il2CppRGCTXDataType)3, 8866 },
	{ (Il2CppRGCTXDataType)3, 8861 },
	{ (Il2CppRGCTXDataType)3, 8869 },
	{ (Il2CppRGCTXDataType)3, 8873 },
	{ (Il2CppRGCTXDataType)2, 636 },
	{ (Il2CppRGCTXDataType)3, 6637 },
	{ (Il2CppRGCTXDataType)2, 865 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	232,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	63,
	s_rgctxIndices,
	315,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
