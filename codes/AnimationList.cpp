void __fastcall AnimationList___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  intptr_t v12; // w19
  System_Type_o *TypeFromHandle; // x19
  System_Array_o *Values; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v15; // x0
  AnimationList___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  Il2CppObject *v18; // x20
  System_Func_T__TResult__o *v19; // x21
  Il2CppObject *v20; // x20
  System_Func_T__TResult__o *v21; // x22
  struct System_Collections_Generic_Dictionary_string__int__o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_RuntimeTypeHandle_o v25; // 0:w0.4

  if ( (byte_49FD41A & 1) == 0 )
  {
    sub_1B64870(&AnimationList_TypeInfo, v1);
    sub_1B64870(&System_Enum_TypeInfo, v2);
    sub_1B64870(&Method_System_Linq_Enumerable_Cast_AnimationList_NAME___, v3);
    sub_1B64870(&Method_System_Linq_Enumerable_ToDictionary_AnimationList_NAME__string__int___, v4);
    sub_1B64870(&System_Func_AnimationList_NAME__int__TypeInfo, v5);
    sub_1B64870(&System_Func_AnimationList_NAME__string__TypeInfo, v6);
    sub_1B64870(&AnimationList_NAME_var, v7);
    sub_1B64870(&System_Type_TypeInfo, v8);
    sub_1B64870(&Method_AnimationList___c___cctor_b__2_0__, v9);
    sub_1B64870(&Method_AnimationList___c___cctor_b__2_1__, v10);
    sub_1B64870(&AnimationList___c_TypeInfo, v11);
    byte_49FD41A = 1;
  }
  v12 = (int)AnimationList_NAME_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v25.fields.value = v12;
  TypeFromHandle = System_Type__GetTypeFromHandle(v25, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0LL);
  v15 = System_Linq_Enumerable__Cast_Int32Enum_(
          (System_Collections_IEnumerable_o *)Values,
          (const MethodInfo_2E4B420 *)Method_System_Linq_Enumerable_Cast_AnimationList_NAME___);
  v16 = AnimationList___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v15;
  if ( !AnimationList___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AnimationList___c_TypeInfo);
    v16 = AnimationList___c_TypeInfo;
  }
  v18 = (Il2CppObject *)v16->static_fields->__9;
  v19 = (System_Func_T__TResult__o *)sub_1B64ABC(System_Func_AnimationList_NAME__string__TypeInfo);
  System_Func_Int32Enum__object____ctor(v19, v18, Method_AnimationList___c___cctor_b__2_0__, 0LL);
  v20 = (Il2CppObject *)AnimationList___c_TypeInfo->static_fields->__9;
  v21 = (System_Func_T__TResult__o *)sub_1B64ABC(System_Func_AnimationList_NAME__int__TypeInfo);
  System_Func_Int32Enum__int____ctor(v21, v20, Method_AnimationList___c___cctor_b__2_1__, 0LL);
  v22 = (struct System_Collections_Generic_Dictionary_string__int__o *)System_Linq_Enumerable__ToDictionary_Int32Enum__object__int_(
                                                                         v17,
                                                                         (System_Func_TSource__TKey__o *)v19,
                                                                         (System_Func_TSource__TElement__o *)v21,
                                                                         (const MethodInfo_2E73C7C *)Method_System_Linq_Enumerable_ToDictionary_AnimationList_NAME__string__int___);
  AnimationList_TypeInfo->static_fields->_dictionary = v22;
  sub_1B64814((ServantStatusBattleListViewItem_o *)AnimationList_TypeInfo->static_fields, (int32_t)v22, v23, v24);
}


void __fastcall AnimationList___ctor(AnimationList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall AnimationList__getIndex(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  AnimationList_c *v4; // x0
  System_Collections_Generic_Dictionary_object__int__o *dictionary; // x0
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_49FD41B & 1) == 0 )
  {
    sub_1B64870(&AnimationList_TypeInfo, method);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__, v3);
    byte_49FD41B = 1;
  }
  value = 0;
  if ( !name )
    return -1;
  v4 = AnimationList_TypeInfo;
  if ( !AnimationList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo);
    v4 = AnimationList_TypeInfo;
  }
  dictionary = (System_Collections_Generic_Dictionary_object__int__o *)v4->static_fields->_dictionary;
  if ( !dictionary )
    sub_1B64ACC(0LL, method);
  if ( System_Collections_Generic_Dictionary_object__int___TryGetValue(
         dictionary,
         (Il2CppObject *)name,
         &value,
         (const MethodInfo_3174148 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__) )
  {
    return value;
  }
  else
  {
    return -1;
  }
}


void __fastcall AnimationList___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FD41C & 1) == 0 )
  {
    sub_1B64870(&AnimationList___c_TypeInfo, v1);
    byte_49FD41C = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(AnimationList___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AnimationList___c_TypeInfo->static_fields->__9 = (struct AnimationList___c_o *)v2;
  sub_1B64814((ServantStatusBattleListViewItem_o *)AnimationList___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall AnimationList___c___ctor(AnimationList___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall AnimationList___c____cctor_b__2_0(
        AnimationList___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Enum_o v5; // [xsp+8h] [xbp-38h] BYREF
  int32_t v6; // [xsp+18h] [xbp-28h]

  if ( (byte_49FD41D & 1) == 0 )
  {
    sub_1B64870(&AnimationList_NAME_TypeInfo, *(_QWORD *)&x);
    byte_49FD41D = 1;
  }
  v5.klass = (System_Enum_c *)AnimationList_NAME_TypeInfo;
  v5.monitor = (void *)-1LL;
  v6 = x;
  return System_Enum__ToString(&v5, 0LL);
}


int32_t __fastcall AnimationList___c____cctor_b__2_1(AnimationList___c_o *this, int32_t x, const MethodInfo *method)
{
  return x;
}