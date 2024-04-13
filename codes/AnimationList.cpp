void __fastcall AnimationList___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  intptr_t v40; // w19
  System_Type_o *TypeFromHandle; // x19
  System_Array_o *Values; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x19
  AnimationList___c_c *v44; // x8
  Il2CppObject *v45; // x20
  System_Func_Voice_BATTLE__BattlePerformance_VoiceParam__o *v46; // x21
  Il2CppObject *v47; // x20
  System_Func_CompensateArgForShowAll_EffectType__int__o *v48; // x22
  System_Int32_array **v49; // x0
  BattleServantConfConponent_o *static_fields; // x8
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_RuntimeTypeHandle_o v57; // 0:w0.4

  if ( (byte_42EB731 & 1) == 0 )
  {
    sub_B5D5C4(&AnimationList_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_Enum_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Cast_AnimationList_NAME___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToDictionary_AnimationList_NAME__string__int___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Func_AnimationList_NAME__string___ctor__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Func_AnimationList_NAME__int___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Func_AnimationList_NAME__string__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_Func_AnimationList_NAME__int__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&AnimationList_NAME_var, v25, v26, v27);
    sub_B5D5C4(&System_Type_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_AnimationList___c___cctor_b__2_0__, v31, v32, v33);
    sub_B5D5C4(&Method_AnimationList___c___cctor_b__2_1__, v34, v35, v36);
    sub_B5D5C4(&AnimationList___c_TypeInfo, v37, v38, v39);
    byte_42EB731 = 1;
  }
  v40 = (int)AnimationList_NAME_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v57.fields.value = v40;
  TypeFromHandle = System_Type__GetTypeFromHandle(v57, 0LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0LL);
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_QuestGroupType_Type_(
                                                               (System_Collections_IEnumerable_o *)Values,
                                                               (const MethodInfo_1C9AC88 *)Method_System_Linq_Enumerable_Cast_AnimationList_NAME___);
  v44 = AnimationList___c_TypeInfo;
  if ( (BYTE3(AnimationList___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AnimationList___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AnimationList___c_TypeInfo);
    v44 = AnimationList___c_TypeInfo;
  }
  v45 = (Il2CppObject *)v44->static_fields->__9;
  v46 = (System_Func_Voice_BATTLE__BattlePerformance_VoiceParam__o *)sub_B5D694(System_Func_AnimationList_NAME__string__TypeInfo);
  System_Func_Voice_BATTLE__BattlePerformance_VoiceParam____ctor(
    v46,
    v45,
    Method_AnimationList___c___cctor_b__2_0__,
    (const MethodInfo_2C2B7F8 *)Method_System_Func_AnimationList_NAME__string___ctor__);
  v47 = (Il2CppObject *)AnimationList___c_TypeInfo->static_fields->__9;
  v48 = (System_Func_CompensateArgForShowAll_EffectType__int__o *)sub_B5D694(System_Func_AnimationList_NAME__int__TypeInfo);
  System_Func_CompensateArgForShowAll_EffectType__int____ctor(
    v48,
    v47,
    Method_AnimationList___c___cctor_b__2_1__,
    (const MethodInfo_2C2AE8C *)Method_System_Func_AnimationList_NAME__int___ctor__);
  v49 = (System_Int32_array **)System_Linq_Enumerable__ToDictionary_AnimationList_NAME__string__int_(
                                 v43,
                                 (System_Func_TSource__TKey__o *)v46,
                                 (System_Func_TSource__TElement__o *)v48,
                                 (const MethodInfo_1CB7BF4 *)Method_System_Linq_Enumerable_ToDictionary_AnimationList_NAME__string__int___);
  static_fields = (BattleServantConfConponent_o *)AnimationList_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v49;
  sub_B5D560(static_fields, v49, v51, v52, v53, v54, v55, v56);
}


void __fastcall AnimationList___ctor(AnimationList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall AnimationList__getIndex(System_String_o *name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  AnimationList_c *v8; // x0
  System_Collections_Generic_Dictionary_UIPanel__int__o *dictionary; // x0
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EB732 & 1) == 0 )
  {
    sub_B5D5C4(&AnimationList_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__, v5, v6, v7);
    byte_42EB732 = 1;
  }
  value = 0;
  if ( !name )
    return -1;
  v8 = AnimationList_TypeInfo;
  if ( (BYTE3(AnimationList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AnimationList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo);
    v8 = AnimationList_TypeInfo;
  }
  dictionary = (System_Collections_Generic_Dictionary_UIPanel__int__o *)v8->static_fields->_dictionary;
  if ( !dictionary )
    sub_B5D69C(0LL, method);
  if ( System_Collections_Generic_Dictionary_UIPanel__int___TryGetValue(
         dictionary,
         (UIPanel_o *)name,
         &value,
         (const MethodInfo_2F1D1F8 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__) )
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7514 & 1) == 0 )
  {
    sub_B5D5C4(&AnimationList___c_TypeInfo, v1, v2, v3);
    byte_42E7514 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(AnimationList___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)AnimationList___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x3
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x19
  System_String_o *v7; // x20
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = x;
  if ( (byte_42E7515 & 1) == 0 )
  {
    sub_B5D5C4(&AnimationList_NAME_TypeInfo, x, (_DWORD)method, v3);
    byte_42E7515 = 1;
  }
  v4 = j_il2cpp_value_box_0(AnimationList_NAME_TypeInfo, &v9);
  if ( !v4 )
    sub_B5D69C(0LL, v5);
  v6 = v4;
  v7 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                            v4,
                            *(_QWORD *)(*(_QWORD *)v4 + 368LL));
  j_il2cpp_object_unbox_0(v6);
  return v7;
}


int32_t __fastcall AnimationList___c____cctor_b__2_1(AnimationList___c_o *this, int32_t x, const MethodInfo *method)
{
  return x;
}