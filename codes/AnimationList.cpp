void __fastcall AnimationList___cctor(const MethodInfo *method)
{
  intptr_t v1; // w19
  System_Type_o *TypeFromHandle; // x19
  System_Array_o *Values; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x19
  AnimationList___c_c *v5; // x8
  Il2CppObject *v6; // x20
  System_Func_Voice_BATTLE__BattlePerformance_VoiceParam__o *v7; // x21
  Il2CppObject *v8; // x20
  System_Func_CompensateArgForShowAll_EffectType__int__o *v9; // x22
  System_Int32_array **v10; // x0
  BattleServantConfConponent_o *static_fields; // x8
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_RuntimeTypeHandle_o v18; // 0:w0.4

  if ( (byte_438A4F1 & 1) == 0 )
  {
    sub_B775C4(&AnimationList_TypeInfo);
    sub_B775C4(&System_Enum_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Cast_AnimationList_NAME___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToDictionary_AnimationList_NAME__string__int___);
    sub_B775C4(&Method_System_Func_AnimationList_NAME__string___ctor__);
    sub_B775C4(&Method_System_Func_AnimationList_NAME__int___ctor__);
    sub_B775C4(&System_Func_AnimationList_NAME__string__TypeInfo);
    sub_B775C4(&System_Func_AnimationList_NAME__int__TypeInfo);
    sub_B775C4(&AnimationList_NAME_var);
    sub_B775C4(&System_Type_TypeInfo);
    sub_B775C4(&Method_AnimationList___c___cctor_b__2_0__);
    sub_B775C4(&Method_AnimationList___c___cctor_b__2_1__);
    sub_B775C4(&AnimationList___c_TypeInfo);
    byte_438A4F1 = 1;
  }
  v1 = (int)AnimationList_NAME_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v18.fields.value = v1;
  TypeFromHandle = System_Type__GetTypeFromHandle(v18, 0LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0LL);
  v4 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_QuestGroupType_Type_(
                                                              (System_Collections_IEnumerable_o *)Values,
                                                              (const MethodInfo_1D1F9F4 *)Method_System_Linq_Enumerable_Cast_AnimationList_NAME___);
  v5 = AnimationList___c_TypeInfo;
  if ( (BYTE3(AnimationList___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AnimationList___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AnimationList___c_TypeInfo);
    v5 = AnimationList___c_TypeInfo;
  }
  v6 = (Il2CppObject *)v5->static_fields->__9;
  v7 = (System_Func_Voice_BATTLE__BattlePerformance_VoiceParam__o *)sub_B77694(System_Func_AnimationList_NAME__string__TypeInfo);
  System_Func_Voice_BATTLE__BattlePerformance_VoiceParam____ctor(
    v7,
    v6,
    Method_AnimationList___c___cctor_b__2_0__,
    (const MethodInfo_29E5DEC *)Method_System_Func_AnimationList_NAME__string___ctor__);
  v8 = (Il2CppObject *)AnimationList___c_TypeInfo->static_fields->__9;
  v9 = (System_Func_CompensateArgForShowAll_EffectType__int__o *)sub_B77694(System_Func_AnimationList_NAME__int__TypeInfo);
  System_Func_CompensateArgForShowAll_EffectType__int____ctor(
    v9,
    v8,
    Method_AnimationList___c___cctor_b__2_1__,
    (const MethodInfo_29E5480 *)Method_System_Func_AnimationList_NAME__int___ctor__);
  v10 = (System_Int32_array **)System_Linq_Enumerable__ToDictionary_AnimationList_NAME__string__int_(
                                 v4,
                                 (System_Func_TSource__TKey__o *)v7,
                                 (System_Func_TSource__TElement__o *)v9,
                                 (const MethodInfo_1D3D978 *)Method_System_Linq_Enumerable_ToDictionary_AnimationList_NAME__string__int___);
  static_fields = (BattleServantConfConponent_o *)AnimationList_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B77560(static_fields, v10, v12, v13, v14, v15, v16, v17);
}


void __fastcall AnimationList___ctor(AnimationList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall AnimationList__getIndex(System_String_o *name, const MethodInfo *method)
{
  AnimationList_c *v3; // x0
  System_Collections_Generic_Dictionary_UIPanel__int__o *dictionary; // x0
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438A4F2 & 1) == 0 )
  {
    sub_B775C4(&AnimationList_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__);
    byte_438A4F2 = 1;
  }
  value = 0;
  if ( !name )
    return -1;
  v3 = AnimationList_TypeInfo;
  if ( (BYTE3(AnimationList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AnimationList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo);
    v3 = AnimationList_TypeInfo;
  }
  dictionary = (System_Collections_Generic_Dictionary_UIPanel__int__o *)v3->static_fields->_dictionary;
  if ( !dictionary )
    sub_B7769C(0LL, method);
  if ( System_Collections_Generic_Dictionary_UIPanel__int___TryGetValue(
         dictionary,
         (UIPanel_o *)name,
         &value,
         (const MethodInfo_2FDF37C *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__) )
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4389F32 & 1) == 0 )
  {
    sub_B775C4(&AnimationList___c_TypeInfo);
    byte_4389F32 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(AnimationList___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)AnimationList___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x19
  System_String_o *v6; // x20
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = x;
  if ( (byte_4389F33 & 1) == 0 )
  {
    sub_B775C4(&AnimationList_NAME_TypeInfo);
    byte_4389F33 = 1;
  }
  v3 = j_il2cpp_value_box_0(AnimationList_NAME_TypeInfo, &v8, method);
  if ( !v3 )
    sub_B7769C(0LL, v4);
  v5 = v3;
  v6 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 360LL))(
                            v3,
                            *(_QWORD *)(*(_QWORD *)v3 + 368LL));
  j_il2cpp_object_unbox_0(v5);
  return v6;
}


int32_t __fastcall AnimationList___c____cctor_b__2_1(AnimationList___c_o *this, int32_t x, const MethodInfo *method)
{
  return x;
}