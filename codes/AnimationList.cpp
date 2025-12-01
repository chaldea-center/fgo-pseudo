void AnimationList___cctor(const MethodInfo *method)
{
  Il2CppType *v1; // x19
  System_RuntimeTypeHandle_o v2; // x0
  System_Type_o *TypeFromHandle; // x19
  System_Array_o *Values; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v5; // x0
  AnimationList___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  Il2CppObject *v8; // x20
  System_Func_T__TResult__o *v9; // x21
  Il2CppObject *v10; // x20
  System_Func_T__TResult__o *v11; // x22
  struct System_Collections_Generic_Dictionary_string__int__o *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4CC618D & 1) == 0 )
  {
    sub_1C713B0(&AnimationList_TypeInfo);
    sub_1C713B0(&System_Enum_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Cast_AnimationList_NAME___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToDictionary_AnimationList_NAME__string__int___);
    sub_1C713B0(&System_Func_AnimationList_NAME__int__TypeInfo);
    sub_1C713B0(&System_Func_AnimationList_NAME__string__TypeInfo);
    sub_1C713B0(&AnimationList_NAME_var);
    sub_1C713B0(&System_Type_TypeInfo);
    sub_1C713B0(&Method_AnimationList___c___cctor_b__2_0__);
    sub_1C713B0(&Method_AnimationList___c___cctor_b__2_1__);
    sub_1C713B0(&AnimationList___c_TypeInfo);
    byte_4CC618D = 1;
  }
  v1 = AnimationList_NAME_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v2.fields.value = (intptr_t)v1;
  TypeFromHandle = System_Type__GetTypeFromHandle(v2, 0);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0);
  v5 = System_Linq_Enumerable__Cast_Int32Enum_(
         (System_Collections_IEnumerable_o *)Values,
         (const MethodInfo_3159834 *)Method_System_Linq_Enumerable_Cast_AnimationList_NAME___);
  v6 = AnimationList___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  if ( !AnimationList___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AnimationList___c_TypeInfo);
    v6 = AnimationList___c_TypeInfo;
  }
  v8 = (Il2CppObject *)v6->static_fields->__9;
  v9 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_AnimationList_NAME__string__TypeInfo);
  System_Func_Int32Enum__object____ctor(v9, v8, Method_AnimationList___c___cctor_b__2_0__, 0);
  v10 = (Il2CppObject *)AnimationList___c_TypeInfo->static_fields->__9;
  v11 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_AnimationList_NAME__int__TypeInfo);
  System_Func_Int32Enum__int____ctor(v11, v10, Method_AnimationList___c___cctor_b__2_1__, 0);
  v12 = (struct System_Collections_Generic_Dictionary_string__int__o *)System_Linq_Enumerable__ToDictionary_Int32Enum__object__int_(
                                                                         v7,
                                                                         (System_Func_TSource__TKey__o *)v9,
                                                                         (System_Func_TSource__TElement__o *)v11,
                                                                         (const MethodInfo_318B808 *)Method_System_Linq_Enumerable_ToDictionary_AnimationList_NAME__string__int___);
  AnimationList_TypeInfo->static_fields->_dictionary = v12;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)AnimationList_TypeInfo->static_fields,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void AnimationList___ctor(AnimationList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t AnimationList__getIndex(System_String_o *name, const MethodInfo *method)
{
  AnimationList_c *v3; // x0
  System_Collections_Generic_Dictionary_object__int__o *dictionary; // x0
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4CC618E & 1) == 0 )
  {
    sub_1C713B0(&AnimationList_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    byte_4CC618E = 1;
  }
  value = 0;
  if ( !name )
    return -1;
  v3 = AnimationList_TypeInfo;
  if ( !AnimationList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo);
    v3 = AnimationList_TypeInfo;
  }
  dictionary = (System_Collections_Generic_Dictionary_object__int__o *)v3->static_fields->_dictionary;
  if ( !dictionary )
    sub_1C71608(0, method);
  if ( System_Collections_Generic_Dictionary_object__int___TryGetValue(
         dictionary,
         (Il2CppObject *)name,
         &value,
         (const MethodInfo_34C416C *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__) )
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC618F & 1) == 0 )
  {
    sub_1C713B0(&AnimationList___c_TypeInfo);
    byte_4CC618F = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(AnimationList___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AnimationList___c_TypeInfo->static_fields->__9 = (struct AnimationList___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)AnimationList___c_TypeInfo->static_fields,
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

  if ( (byte_4CC6190 & 1) == 0 )
  {
    sub_1C713B0(&AnimationList_NAME_TypeInfo);
    byte_4CC6190 = 1;
  }
  v5.klass = (System_Enum_c *)AnimationList_NAME_TypeInfo;
  v5.monitor = (void *)-1LL;
  v6 = x;
  return System_Enum__ToString(&v5, 0);
}


int32_t AnimationList___c____cctor_b__2_1(AnimationList___c_o *this, int32_t x, const MethodInfo *method)
{
  return x;
}