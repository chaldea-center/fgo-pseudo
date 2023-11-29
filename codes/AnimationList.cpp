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
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  AnimationList___c_c *v22; // x8
  Il2CppObject *v23; // x20
  System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *v24; // x21
  Il2CppObject *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Func_CompensateArgForShowAll_EffectType__int__o *v30; // x22
  System_Int32_array **v31; // x0
  BattleServantConfConponent_o *static_fields; // x8
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_RuntimeTypeHandle_o v39; // 0:w0.4

  if ( (byte_40FC9AC & 1) == 0 )
  {
    sub_B16FFC(&AnimationList_TypeInfo, v1);
    sub_B16FFC(&System_Enum_TypeInfo, v2);
    sub_B16FFC(&Method_System_Linq_Enumerable_Cast_AnimationList_NAME___, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToDictionary_AnimationList_NAME__string__int___, v4);
    sub_B16FFC(&Method_System_Func_AnimationList_NAME__string___ctor__, v5);
    sub_B16FFC(&Method_System_Func_AnimationList_NAME__int___ctor__, v6);
    sub_B16FFC(&System_Func_AnimationList_NAME__string__TypeInfo, v7);
    sub_B16FFC(&System_Func_AnimationList_NAME__int__TypeInfo, v8);
    sub_B16FFC(&AnimationList_NAME_var, v9);
    sub_B16FFC(&System_Type_TypeInfo, v10);
    sub_B16FFC(&Method_AnimationList___c___cctor_b__2_0__, v11);
    sub_B16FFC(&Method_AnimationList___c___cctor_b__2_1__, v12);
    sub_B16FFC(&AnimationList___c_TypeInfo, v13);
    byte_40FC9AC = 1;
  }
  v14 = (int)AnimationList_NAME_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v39.fields.value = v14;
  TypeFromHandle = System_Type__GetTypeFromHandle(v39, 0LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0LL);
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_BuffList_TYPE_(
                                                               (System_Collections_IEnumerable_o *)Values,
                                                               (const MethodInfo_18C9EEC *)Method_System_Linq_Enumerable_Cast_AnimationList_NAME___);
  v22 = AnimationList___c_TypeInfo;
  if ( (BYTE3(AnimationList___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AnimationList___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AnimationList___c_TypeInfo);
    v22 = AnimationList___c_TypeInfo;
  }
  v23 = (Il2CppObject *)v22->static_fields->__9;
  v24 = (System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *)sub_B170CC(
                                                                         System_Func_AnimationList_NAME__string__TypeInfo,
                                                                         v17,
                                                                         v18,
                                                                         v19,
                                                                         v20);
  System_Func_BuffList_TYPE__List_BattleBuffData_BuffData_____ctor(
    v24,
    v23,
    Method_AnimationList___c___cctor_b__2_0__,
    (const MethodInfo_2B67CB0 *)Method_System_Func_AnimationList_NAME__string___ctor__);
  v25 = (Il2CppObject *)AnimationList___c_TypeInfo->static_fields->__9;
  v30 = (System_Func_CompensateArgForShowAll_EffectType__int__o *)sub_B170CC(
                                                                    System_Func_AnimationList_NAME__int__TypeInfo,
                                                                    v26,
                                                                    v27,
                                                                    v28,
                                                                    v29);
  System_Func_CompensateArgForShowAll_EffectType__int____ctor(
    v30,
    v25,
    Method_AnimationList___c___cctor_b__2_1__,
    (const MethodInfo_2B67668 *)Method_System_Func_AnimationList_NAME__int___ctor__);
  v31 = (System_Int32_array **)System_Linq_Enumerable__ToDictionary_AnimationList_NAME__string__int_(
                                 v21,
                                 (System_Func_TSource__TKey__o *)v24,
                                 (System_Func_TSource__TElement__o *)v30,
                                 (const MethodInfo_19C4F60 *)Method_System_Linq_Enumerable_ToDictionary_AnimationList_NAME__string__int___);
  static_fields = (BattleServantConfConponent_o *)AnimationList_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v31;
  sub_B16F98(static_fields, v31, v33, v34, v35, v36, v37, v38);
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

  if ( (byte_40FC9AD & 1) == 0 )
  {
    sub_B16FFC(&AnimationList_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__, v3);
    byte_40FC9AD = 1;
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
    sub_B170D4();
  if ( System_Collections_Generic_Dictionary_UIPanel__int___TryGetValue(
         dictionary,
         (UIPanel_o *)name,
         &value,
         (const MethodInfo_2D9DF70 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__) )
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
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F911E & 1) == 0 )
  {
    sub_B16FFC(&AnimationList___c_TypeInfo, v1);
    byte_40F911E = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(AnimationList___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)AnimationList___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  if ( (byte_40F911F & 1) == 0 )
  {
    sub_B16FFC(&AnimationList_NAME_TypeInfo, *(_QWORD *)&x);
    byte_40F911F = 1;
  }
  v3 = j_il2cpp_value_box_0(AnimationList_NAME_TypeInfo, &v7);
  if ( !v3 )
    sub_B170D4();
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