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
  __int64 v12; // x1
  __int64 v13; // x1
  intptr_t v14; // w19
  System_Type_o *TypeFromHandle; // x19
  System_Array_o *Values; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  AnimationList___c_c *v20; // x8
  Il2CppObject *v21; // x20
  System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v22; // x21
  Il2CppObject *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  System_Func_CompensateArgForShowAll_EffectType__int__o *v26; // x22
  System_Int32_array **v27; // x0
  BattleServantConfConponent_o *static_fields; // x8
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_RuntimeTypeHandle_o v35; // 0:w0.4

  if ( (byte_421739B & 1) == 0 )
  {
    sub_B0D8A4(&AnimationList_TypeInfo, v1);
    sub_B0D8A4(&System_Enum_TypeInfo, v2);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Cast_AnimationList_NAME___, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToDictionary_AnimationList_NAME__string__int___, v4);
    sub_B0D8A4(&Method_System_Func_AnimationList_NAME__string___ctor__, v5);
    sub_B0D8A4(&Method_System_Func_AnimationList_NAME__int___ctor__, v6);
    sub_B0D8A4(&System_Func_AnimationList_NAME__string__TypeInfo, v7);
    sub_B0D8A4(&System_Func_AnimationList_NAME__int__TypeInfo, v8);
    sub_B0D8A4(&AnimationList_NAME_var, v9);
    sub_B0D8A4(&System_Type_TypeInfo, v10);
    sub_B0D8A4(&Method_AnimationList___c___cctor_b__2_0__, v11);
    sub_B0D8A4(&Method_AnimationList___c___cctor_b__2_1__, v12);
    sub_B0D8A4(&AnimationList___c_TypeInfo, v13);
    byte_421739B = 1;
  }
  v14 = (int)AnimationList_NAME_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v35.fields.value = v14;
  TypeFromHandle = System_Type__GetTypeFromHandle(v35, 0LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0LL);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_BuffList_TYPE_(
                                                               (System_Collections_IEnumerable_o *)Values,
                                                               (const MethodInfo_171B544 *)Method_System_Linq_Enumerable_Cast_AnimationList_NAME___);
  v20 = AnimationList___c_TypeInfo;
  if ( (BYTE3(AnimationList___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AnimationList___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AnimationList___c_TypeInfo);
    v20 = AnimationList___c_TypeInfo;
  }
  v21 = (Il2CppObject *)v20->static_fields->__9;
  v22 = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)sub_B0D974(
                                                                                System_Func_AnimationList_NAME__string__TypeInfo,
                                                                                v17,
                                                                                v18);
  System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort____ctor(
    v22,
    v21,
    Method_AnimationList___c___cctor_b__2_0__,
    (const MethodInfo_2615B28 *)Method_System_Func_AnimationList_NAME__string___ctor__);
  v23 = (Il2CppObject *)AnimationList___c_TypeInfo->static_fields->__9;
  v26 = (System_Func_CompensateArgForShowAll_EffectType__int__o *)sub_B0D974(
                                                                    System_Func_AnimationList_NAME__int__TypeInfo,
                                                                    v24,
                                                                    v25);
  System_Func_CompensateArgForShowAll_EffectType__int____ctor(
    v26,
    v23,
    Method_AnimationList___c___cctor_b__2_1__,
    (const MethodInfo_26154E0 *)Method_System_Func_AnimationList_NAME__int___ctor__);
  v27 = (System_Int32_array **)System_Linq_Enumerable__ToDictionary_AnimationList_NAME__string__int_(
                                 v19,
                                 (System_Func_TSource__TKey__o *)v22,
                                 (System_Func_TSource__TElement__o *)v26,
                                 (const MethodInfo_1B56628 *)Method_System_Linq_Enumerable_ToDictionary_AnimationList_NAME__string__int___);
  static_fields = (BattleServantConfConponent_o *)AnimationList_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v27;
  sub_B0D840(static_fields, v27, v29, v30, v31, v32, v33, v34);
}


void __fastcall AnimationList___ctor(AnimationList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall AnimationList__getIndex(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  AnimationList_c *v4; // x0
  System_Collections_Generic_Dictionary_UIPanel__int__o *dictionary; // x0
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_421739C & 1) == 0 )
  {
    sub_B0D8A4(&AnimationList_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__, v3);
    byte_421739C = 1;
  }
  value = 0;
  if ( !name )
    return -1;
  v4 = AnimationList_TypeInfo;
  if ( (BYTE3(AnimationList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AnimationList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo);
    v4 = AnimationList_TypeInfo;
  }
  dictionary = (System_Collections_Generic_Dictionary_UIPanel__int__o *)v4->static_fields->_dictionary;
  if ( !dictionary )
    sub_B0D97C(0LL);
  if ( System_Collections_Generic_Dictionary_UIPanel__int___TryGetValue(
         dictionary,
         (UIPanel_o *)name,
         &value,
         (const MethodInfo_2E44FC0 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__) )
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
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_421395E & 1) == 0 )
  {
    sub_B0D8A4(&AnimationList___c_TypeInfo, v1);
    byte_421395E = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(AnimationList___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)AnimationList___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
  __int64 v3; // x0
  __int64 v4; // x19
  System_String_o *v5; // x20
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = x;
  if ( (byte_421395F & 1) == 0 )
  {
    sub_B0D8A4(&AnimationList_NAME_TypeInfo, *(_QWORD *)&x);
    byte_421395F = 1;
  }
  v3 = j_il2cpp_value_box_0(AnimationList_NAME_TypeInfo, &v7);
  if ( !v3 )
    sub_B0D97C(0LL);
  v4 = v3;
  v5 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 360LL))(
                            v3,
                            *(_QWORD *)(*(_QWORD *)v3 + 368LL));
  j_il2cpp_object_unbox_0(v4);
  return v5;
}


int32_t __fastcall AnimationList___c____cctor_b__2_1(AnimationList___c_o *this, int32_t x, const MethodInfo *method)
{
  return x;
}