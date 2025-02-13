void __fastcall AnimationList___cctor(const MethodInfo *method)
{
  intptr_t v1; // w19
  System_Type_o *TypeFromHandle; // x19
  System_Array_o *Values; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v4; // x0
  AnimationList___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  Il2CppObject *v7; // x20
  System_Func_T__TResult__o *v8; // x21
  Il2CppObject *v9; // x20
  System_Func_T__TResult__o *v10; // x22
  struct System_Collections_Generic_Dictionary_string__int__o *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_RuntimeTypeHandle_o v18; // 0:w0.4

  if ( (byte_4BDB3DC & 1) == 0 )
  {
    sub_1C21E38(&AnimationList_TypeInfo);
    sub_1C21E38(&System_Enum_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Cast_AnimationList_NAME___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToDictionary_AnimationList_NAME__string__int___);
    sub_1C21E38(&System_Func_AnimationList_NAME__int__TypeInfo);
    sub_1C21E38(&System_Func_AnimationList_NAME__string__TypeInfo);
    sub_1C21E38(&AnimationList_NAME_var);
    sub_1C21E38(&System_Type_TypeInfo);
    sub_1C21E38(&Method_AnimationList___c___cctor_b__2_0__);
    sub_1C21E38(&Method_AnimationList___c___cctor_b__2_1__);
    sub_1C21E38(&AnimationList___c_TypeInfo);
    byte_4BDB3DC = 1;
  }
  v1 = (int)AnimationList_NAME_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v18.fields.value = v1;
  TypeFromHandle = System_Type__GetTypeFromHandle(v18, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0LL);
  v4 = System_Linq_Enumerable__Cast_Int32Enum_(
         (System_Collections_IEnumerable_o *)Values,
         (const MethodInfo_2FBDD78 *)Method_System_Linq_Enumerable_Cast_AnimationList_NAME___);
  v5 = AnimationList___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)v4;
  if ( !AnimationList___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AnimationList___c_TypeInfo);
    v5 = AnimationList___c_TypeInfo;
  }
  v7 = (Il2CppObject *)v5->static_fields->__9;
  v8 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_AnimationList_NAME__string__TypeInfo);
  System_Func_Int32Enum__object____ctor(v8, v7, Method_AnimationList___c___cctor_b__2_0__, 0LL);
  v9 = (Il2CppObject *)AnimationList___c_TypeInfo->static_fields->__9;
  v10 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_AnimationList_NAME__int__TypeInfo);
  System_Func_Int32Enum__int____ctor(v10, v9, Method_AnimationList___c___cctor_b__2_1__, 0LL);
  v11 = (struct System_Collections_Generic_Dictionary_string__int__o *)System_Linq_Enumerable__ToDictionary_Int32Enum__object__int_(
                                                                         v6,
                                                                         (System_Func_TSource__TKey__o *)v8,
                                                                         (System_Func_TSource__TElement__o *)v10,
                                                                         (const MethodInfo_2FE9E9C *)Method_System_Linq_Enumerable_ToDictionary_AnimationList_NAME__string__int___);
  AnimationList_TypeInfo->static_fields->_dictionary = v11;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)AnimationList_TypeInfo->static_fields,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall AnimationList___ctor(AnimationList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall AnimationList__getIndex(System_String_o *name, const MethodInfo *method)
{
  AnimationList_c *v3; // x0
  System_Collections_Generic_Dictionary_object__int__o *dictionary; // x0
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4BDB3DD & 1) == 0 )
  {
    sub_1C21E38(&AnimationList_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    byte_4BDB3DD = 1;
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
    sub_1C22094(0LL, method);
  if ( System_Collections_Generic_Dictionary_object__int___TryGetValue(
         dictionary,
         (Il2CppObject *)name,
         &value,
         (const MethodInfo_330EF54 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__) )
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDB3DE & 1) == 0 )
  {
    sub_1C21E38(&AnimationList___c_TypeInfo);
    byte_4BDB3DE = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(AnimationList___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  AnimationList___c_TypeInfo->static_fields->__9 = (struct AnimationList___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)AnimationList___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall AnimationList___c___ctor(AnimationList___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall AnimationList___c____cctor_b__2_0(
        AnimationList___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Enum_o v5; // [xsp+8h] [xbp-38h] BYREF
  int32_t v6; // [xsp+18h] [xbp-28h]

  if ( (byte_4BDB3DF & 1) == 0 )
  {
    sub_1C21E38(&AnimationList_NAME_TypeInfo);
    byte_4BDB3DF = 1;
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