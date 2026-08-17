void AnimationList___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppType *v3; // x19
  System_RuntimeTypeHandle_o v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  System_Type_o *TypeFromHandle; // x19
  System_Array_o *Values; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  AnimationList___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  Il2CppObject *v14; // x20
  System_Func_T__TResult__o *v15; // x21
  Il2CppObject *v16; // x20
  System_Func_T__TResult__o *v17; // x22
  struct System_Collections_Generic_Dictionary_string__int__o *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_596F55E & 1) == 0 )
  {
    sub_2213A60(&AnimationList_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Cast_AnimationList_NAME___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToDictionary_AnimationList_NAME__string__int___);
    sub_2213A60(&System_Func_AnimationList_NAME__int__TypeInfo);
    sub_2213A60(&System_Func_AnimationList_NAME__string__TypeInfo);
    sub_2213A60(&AnimationList_NAME_var);
    sub_2213A60(&Method_AnimationList___c___cctor_b__2_0__);
    sub_2213A60(&Method_AnimationList___c___cctor_b__2_1__);
    sub_2213A60(&AnimationList___c_TypeInfo);
    byte_596F55E = 1;
  }
  v3 = AnimationList_NAME_var;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v1, v2);
  v4.fields.value = (intptr_t)v3;
  TypeFromHandle = System_Type__GetTypeFromHandle(v4, 0);
  if ( !*(_DWORD *)(qword_5984398 + 228) )
    j_il2cpp_runtime_class_init_0(qword_5984398, v5, v6);
  Values = System_Enum__GetValues(TypeFromHandle, 0);
  v9 = System_Linq_Enumerable__Cast_Int32Enum_(
         (System_Collections_IEnumerable_o *)Values,
         (const MethodInfo_3868A20 *)Method_System_Linq_Enumerable_Cast_AnimationList_NAME___);
  v12 = AnimationList___c_TypeInfo;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)v9;
  if ( !*(&AnimationList___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AnimationList___c_TypeInfo, v10, v11);
    v12 = AnimationList___c_TypeInfo;
  }
  v14 = (Il2CppObject *)v12->static_fields->__9;
  v15 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_AnimationList_NAME__string__TypeInfo);
  System_Func_Int32Enum__object____ctor(v15, v14, Method_AnimationList___c___cctor_b__2_0__, 0);
  v16 = (Il2CppObject *)AnimationList___c_TypeInfo->static_fields->__9;
  v17 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_AnimationList_NAME__int__TypeInfo);
  System_Func_Int32Enum__int____ctor(v17, v16, Method_AnimationList___c___cctor_b__2_1__, 0);
  v18 = (struct System_Collections_Generic_Dictionary_string__int__o *)System_Linq_Enumerable__ToDictionary_Int32Enum__object__int_(
                                                                         v13,
                                                                         (System_Func_TSource__TKey__o *)v15,
                                                                         (System_Func_TSource__TElement__o *)v17,
                                                                         (const MethodInfo_389C3D0 *)Method_System_Linq_Enumerable_ToDictionary_AnimationList_NAME__string__int___);
  AnimationList_TypeInfo->static_fields->_dictionary = v18;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)AnimationList_TypeInfo->static_fields,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


void AnimationList___ctor(AnimationList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t AnimationList__getIndex(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  AnimationList_c *v4; // x0
  System_Collections_Generic_Dictionary_object__int__o *dictionary; // x0
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_596F55F & 1) == 0 )
  {
    sub_2213A60(&AnimationList_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    byte_596F55F = 1;
  }
  value = 0;
  if ( !name )
    return -1;
  v4 = AnimationList_TypeInfo;
  if ( !*(&AnimationList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo, method, v2);
    v4 = AnimationList_TypeInfo;
  }
  dictionary = (System_Collections_Generic_Dictionary_object__int__o *)v4->static_fields->_dictionary;
  if ( !dictionary )
    sub_2213CDC(0, method);
  if ( System_Collections_Generic_Dictionary_object__int___TryGetValue(
         dictionary,
         (Il2CppObject *)name,
         &value,
         (const MethodInfo_3FF5BC4 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__) )
  {
    return value;
  }
  else
  {
    return -1;
  }
}


void AnimationList___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596F560 & 1) == 0 )
  {
    sub_2213A60(&AnimationList___c_TypeInfo);
    byte_596F560 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(AnimationList___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AnimationList___c_TypeInfo->static_fields->__9 = (struct AnimationList___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)AnimationList___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AnimationList___c___ctor(AnimationList___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *AnimationList___c____cctor_b__2_0(AnimationList___c_o *this, int32_t x, const MethodInfo *method)
{
  System_Enum_o v5; // [xsp+8h] [xbp-38h] BYREF
  int32_t v6; // [xsp+18h] [xbp-28h]

  if ( (byte_596F561 & 1) == 0 )
  {
    sub_2213A60(&AnimationList_NAME_TypeInfo);
    byte_596F561 = 1;
  }
  v6 = x;
  v5.klass = (System_Enum_c *)AnimationList_NAME_TypeInfo;
  v5.monitor = (void *)-1LL;
  return System_Enum__ToString(&v5, 0);
}


int32_t AnimationList___c____cctor_b__2_1(AnimationList___c_o *this, int32_t x, const MethodInfo *method)
{
  return x;
}