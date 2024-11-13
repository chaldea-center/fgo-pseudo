void __fastcall AnimationList___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  intptr_t v23; // w19
  __int64 v24; // x1
  System_Type_o *TypeFromHandle; // x19
  System_Array_o *Values; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  AnimationList___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x19
  Il2CppObject *v33; // x20
  System_Func_T__TResult__o *v34; // x21
  Il2CppObject *v35; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Func_T__TResult__o *v39; // x22
  struct System_Collections_Generic_Dictionary_string__int__o *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_RuntimeTypeHandle_o v47; // 0:w0.4

  if ( (byte_4B150B0 & 1) == 0 )
  {
    sub_1BCA7E0(&AnimationList_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_Enum_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Cast_AnimationList_NAME___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToDictionary_AnimationList_NAME__string__int___, v7, v8);
    sub_1BCA7E0(&System_Func_AnimationList_NAME__int__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Func_AnimationList_NAME__string__TypeInfo, v11, v12);
    sub_1BCA7E0(&AnimationList_NAME_var, v13, v14);
    sub_1BCA7E0(&System_Type_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_AnimationList___c___cctor_b__2_0__, v17, v18);
    sub_1BCA7E0(&Method_AnimationList___c___cctor_b__2_1__, v19, v20);
    sub_1BCA7E0(&AnimationList___c_TypeInfo, v21, v22);
    byte_4B150B0 = 1;
  }
  v23 = (int)AnimationList_NAME_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v1);
  v47.fields.value = v23;
  TypeFromHandle = System_Type__GetTypeFromHandle(v47, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, v24);
  Values = System_Enum__GetValues(TypeFromHandle, 0LL);
  v27 = System_Linq_Enumerable__Cast_Int32Enum_(
          (System_Collections_IEnumerable_o *)Values,
          (const MethodInfo_2F20EF4 *)Method_System_Linq_Enumerable_Cast_AnimationList_NAME___);
  v31 = AnimationList___c_TypeInfo;
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)v27;
  if ( !AnimationList___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AnimationList___c_TypeInfo, v28);
    v31 = AnimationList___c_TypeInfo;
  }
  v33 = (Il2CppObject *)v31->static_fields->__9;
  v34 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_AnimationList_NAME__string__TypeInfo, v28, v29, v30);
  System_Func_Int32Enum__object____ctor(v34, v33, Method_AnimationList___c___cctor_b__2_0__, 0LL);
  v35 = (Il2CppObject *)AnimationList___c_TypeInfo->static_fields->__9;
  v39 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_AnimationList_NAME__int__TypeInfo, v36, v37, v38);
  System_Func_Int32Enum__int____ctor(v39, v35, Method_AnimationList___c___cctor_b__2_1__, 0LL);
  v40 = (struct System_Collections_Generic_Dictionary_string__int__o *)System_Linq_Enumerable__ToDictionary_Int32Enum__object__int_(
                                                                         v32,
                                                                         (System_Func_TSource__TKey__o *)v34,
                                                                         (System_Func_TSource__TElement__o *)v39,
                                                                         (const MethodInfo_2F4C038 *)Method_System_Linq_Enumerable_ToDictionary_AnimationList_NAME__string__int___);
  AnimationList_TypeInfo->static_fields->_dictionary = v40;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)AnimationList_TypeInfo->static_fields,
    (int64_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
}


void __fastcall AnimationList___ctor(AnimationList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall AnimationList__getIndex(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  AnimationList_c *v6; // x0
  System_Collections_Generic_Dictionary_object__int__o *dictionary; // x0
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4B150B1 & 1) == 0 )
  {
    sub_1BCA7E0(&AnimationList_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__, v4, v5);
    byte_4B150B1 = 1;
  }
  value = 0;
  if ( !name )
    return -1;
  v6 = AnimationList_TypeInfo;
  if ( !AnimationList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo, method);
    v6 = AnimationList_TypeInfo;
  }
  dictionary = (System_Collections_Generic_Dictionary_object__int__o *)v6->static_fields->_dictionary;
  if ( !dictionary )
    sub_1BCAA3C(0LL, method);
  if ( System_Collections_Generic_Dictionary_object__int___TryGetValue(
         dictionary,
         (Il2CppObject *)name,
         &value,
         (const MethodInfo_325DCD4 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__) )
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B150B2 & 1) == 0 )
  {
    sub_1BCA7E0(&AnimationList___c_TypeInfo, v1, v2);
    byte_4B150B2 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(AnimationList___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  AnimationList___c_TypeInfo->static_fields->__9 = (struct AnimationList___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)AnimationList___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B150B3 & 1) == 0 )
  {
    sub_1BCA7E0(&AnimationList_NAME_TypeInfo, *(_QWORD *)&x, method);
    byte_4B150B3 = 1;
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