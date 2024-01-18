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
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  AnimationList___c_c *v18; // x8
  Il2CppObject *v19; // x20
  System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *v20; // x21
  Il2CppObject *v21; // x20
  System_Func_CompensateArgForShowAll_EffectType__int__o *v22; // x22
  System_Int32_array **v23; // x0
  BattleServantConfConponent_o *static_fields; // x8
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_RuntimeTypeHandle_o v31; // 0:w0.4

  if ( (byte_418A673 & 1) == 0 )
  {
    sub_B2C35C(&AnimationList_TypeInfo, v1);
    sub_B2C35C(&System_Enum_TypeInfo, v2);
    sub_B2C35C(&Method_System_Linq_Enumerable_Cast_AnimationList_NAME___, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToDictionary_AnimationList_NAME__string__int___, v4);
    sub_B2C35C(&Method_System_Func_AnimationList_NAME__string___ctor__, v5);
    sub_B2C35C(&Method_System_Func_AnimationList_NAME__int___ctor__, v6);
    sub_B2C35C(&System_Func_AnimationList_NAME__string__TypeInfo, v7);
    sub_B2C35C(&System_Func_AnimationList_NAME__int__TypeInfo, v8);
    sub_B2C35C(&AnimationList_NAME_var, v9);
    sub_B2C35C(&System_Type_TypeInfo, v10);
    sub_B2C35C(&Method_AnimationList___c___cctor_b__2_0__, v11);
    sub_B2C35C(&Method_AnimationList___c___cctor_b__2_1__, v12);
    sub_B2C35C(&AnimationList___c_TypeInfo, v13);
    byte_418A673 = 1;
  }
  v14 = (int)AnimationList_NAME_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v31.fields.value = v14;
  TypeFromHandle = System_Type__GetTypeFromHandle(v31, 0LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0LL);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_BuffList_TYPE_(
                                                               (System_Collections_IEnumerable_o *)Values,
                                                               (const MethodInfo_173A654 *)Method_System_Linq_Enumerable_Cast_AnimationList_NAME___);
  v18 = AnimationList___c_TypeInfo;
  if ( (BYTE3(AnimationList___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AnimationList___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AnimationList___c_TypeInfo);
    v18 = AnimationList___c_TypeInfo;
  }
  v19 = (Il2CppObject *)v18->static_fields->__9;
  v20 = (System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *)sub_B2C42C(System_Func_AnimationList_NAME__string__TypeInfo);
  System_Func_BuffList_TYPE__List_BattleBuffData_BuffData_____ctor(
    v20,
    v19,
    Method_AnimationList___c___cctor_b__2_0__,
    (const MethodInfo_270ED74 *)Method_System_Func_AnimationList_NAME__string___ctor__);
  v21 = (Il2CppObject *)AnimationList___c_TypeInfo->static_fields->__9;
  v22 = (System_Func_CompensateArgForShowAll_EffectType__int__o *)sub_B2C42C(System_Func_AnimationList_NAME__int__TypeInfo);
  System_Func_CompensateArgForShowAll_EffectType__int____ctor(
    v22,
    v21,
    Method_AnimationList___c___cctor_b__2_1__,
    (const MethodInfo_270E72C *)Method_System_Func_AnimationList_NAME__int___ctor__);
  v23 = (System_Int32_array **)System_Linq_Enumerable__ToDictionary_AnimationList_NAME__string__int_(
                                 v17,
                                 (System_Func_TSource__TKey__o *)v20,
                                 (System_Func_TSource__TElement__o *)v22,
                                 (const MethodInfo_1A9B35C *)Method_System_Linq_Enumerable_ToDictionary_AnimationList_NAME__string__int___);
  static_fields = (BattleServantConfConponent_o *)AnimationList_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v23;
  sub_B2C2F8(static_fields, v23, v25, v26, v27, v28, v29, v30);
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

  if ( (byte_418A674 & 1) == 0 )
  {
    sub_B2C35C(&AnimationList_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__, v3);
    byte_418A674 = 1;
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
    sub_B2C434(0LL, method);
  if ( System_Collections_Generic_Dictionary_UIPanel__int___TryGetValue(
         dictionary,
         (UIPanel_o *)name,
         &value,
         (const MethodInfo_2DAC018 *)Method_System_Collections_Generic_Dictionary_string__int__TryGetValue__) )
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186BA8 & 1) == 0 )
  {
    sub_B2C35C(&AnimationList___c_TypeInfo, v1);
    byte_4186BA8 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(AnimationList___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)AnimationList___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
  __int64 v4; // x1
  __int64 v5; // x19
  System_String_o *v6; // x20
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = x;
  if ( (byte_4186BA9 & 1) == 0 )
  {
    sub_B2C35C(&AnimationList_NAME_TypeInfo, *(_QWORD *)&x);
    byte_4186BA9 = 1;
  }
  v3 = j_il2cpp_value_box_0(AnimationList_NAME_TypeInfo, &v8);
  if ( !v3 )
    sub_B2C434(0LL, v4);
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