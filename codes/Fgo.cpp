void __fastcall Fgo_Assertions_Assert___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0
  struct Fgo_Assertions_Assert_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4361088 & 1) == 0 )
  {
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    byte_4361088 = 1;
  }
  Fgo_Assertions_Assert_TypeInfo->static_fields->enable = 1;
  static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
  static_fields->onFailedAction = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&static_fields->onFailedAction, 0LL, v1, v2, v3, v4, v5, v6);
  v8 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v8->onFailedSendReport = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&v8->onFailedSendReport, 0LL, v9, v10, v11, v12, v13, v14);
}


void __fastcall Fgo_Assertions_Assert__AreApproximatelyEqual(
        float expected,
        float actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_436107B & 1) == 0 )
  {
    sub_B70694(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    byte_436107B = 1;
  }
  if ( !UnityEngine_Mathf__Approximately(expected, actual, 0LL) )
  {
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__GetComparisonAssertMessage_float_(
      expected,
      actual,
      1,
      message,
      (const MethodInfo_1BD5F70 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual(
        int32_t expected,
        int32_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_436107C & 1) == 0 )
  {
    sub_B70694(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    byte_436107C = 1;
  }
  if ( expected != actual )
  {
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__GetComparisonAssertMessage_int_(
      expected,
      actual,
      1,
      message,
      (const MethodInfo_1BD5810 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_51651308(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_436107D & 1) == 0 )
  {
    sub_B70694(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    byte_436107D = 1;
  }
  if ( expected != actual )
  {
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__GetComparisonAssertMessage_long_(
      expected,
      actual,
      1,
      message,
      (const MethodInfo_1BD5A74 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_51651480(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_436107E & 1) == 0 )
  {
    sub_B70694(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_436107E = 1;
  }
  if ( expected )
    goto LABEL_12;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(actual, 0LL, 0LL) )
  {
LABEL_12:
    if ( actual )
      goto LABEL_23;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(expected, 0LL, 0LL) )
    {
LABEL_23:
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(expected, actual, 0LL) )
      {
        if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
        }
        Fgo_Assertions_Assert__GetComparisonAssertMessage_Object_(
          expected,
          actual,
          1,
          message,
          (const MethodInfo_1BD5CE0 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
      }
    }
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_object_(
        Il2CppObject *expected,
        Il2CppObject *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_1BD4F3C *method)
{
  __int64 v11; // x0
  __int64 v12; // x0
  long double v13; // q0

  if ( (byte_4353F52 & 1) == 0 )
  {
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353F52 = 1;
  }
  if ( expected != actual )
  {
    v11 = sub_B70754(expected, UnityEngine_Object_TypeInfo);
    if ( actual || !v11 )
    {
      v12 = sub_B70754(actual, UnityEngine_Object_TypeInfo);
      if ( (expected || !v12)
        && (!sub_B70754(expected, UnityEngine_Object_TypeInfo) || !sub_B70754(actual, UnityEngine_Object_TypeInfo))
        && (!expected
         || (((__int64 (__fastcall *)(Il2CppObject *, Il2CppObject *, Il2CppMethodPointer))expected->klass->vtable[0].method)(
               expected,
               actual,
               expected->klass->vtable[1].methodPtr) & 1) == 0) )
      {
        if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
        {
          *(__n128 *)&v13 = j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
        }
        ((void (__fastcall *)(Il2CppObject *, Il2CppObject *, __int64, System_String_o *, long double))method->rgctx_data->_1_Fgo_Assertions_Assert_GetComparisonAssertMessage_T_->methodPointer)(
          expected,
          actual,
          1LL,
          message,
          v13);
      }
    }
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotApproximatelyEqual(
        float expected,
        float actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_436107F & 1) == 0 )
  {
    sub_B70694(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    byte_436107F = 1;
  }
  if ( UnityEngine_Mathf__Approximately(expected, actual, 0LL) )
  {
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__GetComparisonAssertMessage_float_(
      expected,
      actual,
      0,
      message,
      (const MethodInfo_1BD5F70 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual(
        int32_t expected,
        int32_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4361080 & 1) == 0 )
  {
    sub_B70694(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    byte_4361080 = 1;
  }
  if ( expected == actual )
  {
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__GetComparisonAssertMessage_int_(
      expected,
      expected,
      0,
      message,
      (const MethodInfo_1BD5810 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_51652176(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4361081 & 1) == 0 )
  {
    sub_B70694(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    byte_4361081 = 1;
  }
  if ( expected == actual )
  {
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__GetComparisonAssertMessage_long_(
      expected,
      expected,
      0,
      message,
      (const MethodInfo_1BD5A74 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_51652348(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4361082 & 1) == 0 )
  {
    sub_B70694(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4361082 = 1;
  }
  if ( !expected )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(actual, 0LL, 0LL) )
      goto LABEL_17;
  }
  if ( !actual )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(expected, 0LL, 0LL) )
      goto LABEL_17;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(expected, actual, 0LL) )
  {
LABEL_17:
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__GetComparisonAssertMessage_Object_(
      expected,
      actual,
      0,
      message,
      (const MethodInfo_1BD5CE0 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_object_(
        Il2CppObject *expected,
        Il2CppObject *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_1BD5064 *method)
{
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  const MethodInfo_1BD5064_RGCTXs *rgctx_data; // x8
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x1

  if ( (byte_4353F53 & 1) == 0 )
  {
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353F53 = 1;
  }
  if ( expected == actual )
  {
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    rgctx_data = method->rgctx_data;
    v15 = expected;
    v16 = expected;
    goto LABEL_16;
  }
  v11 = sub_B70754(expected, UnityEngine_Object_TypeInfo);
  if ( actual || !v11 )
  {
    v12 = sub_B70754(actual, UnityEngine_Object_TypeInfo);
    if ( expected || !v12 )
    {
      if ( sub_B70754(expected, UnityEngine_Object_TypeInfo) )
      {
        v13 = sub_B70754(actual, UnityEngine_Object_TypeInfo);
        if ( !expected || v13 )
          return;
      }
      else if ( !expected )
      {
        return;
      }
      if ( (((__int64 (__fastcall *)(Il2CppObject *, Il2CppObject *, Il2CppMethodPointer))expected->klass->vtable[0].method)(
              expected,
              actual,
              expected->klass->vtable[1].methodPtr) & 1) == 0 )
        return;
      if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
      }
      rgctx_data = method->rgctx_data;
      v15 = expected;
      v16 = actual;
LABEL_16:
      ((void (__fastcall *)(Il2CppObject *, Il2CppObject *, _QWORD, System_String_o *))rgctx_data->_1_Fgo_Assertions_Assert_GetComparisonAssertMessage_T_->methodPointer)(
        v15,
        v16,
        0LL,
        message);
    }
  }
}


void __fastcall Fgo_Assertions_Assert__CanParse_object_(
        System_String_o *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_1BD51C4 *method)
{
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x21
  System_Type_o *v11; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x20
  intptr_t v14; // w22
  System_Type_o *v15; // x0
  intptr_t v16; // w22
  System_Type_o *v17; // x0
  intptr_t v18; // w22
  System_Type_o *v19; // x0
  intptr_t v20; // w22
  System_Type_o *v21; // x0
  intptr_t v22; // w22
  System_Type_o *v23; // x0
  intptr_t v24; // w22
  System_Type_o *v25; // x0
  intptr_t v26; // w22
  System_Type_o *v27; // x0
  intptr_t v28; // w22
  System_Type_o *v29; // x0
  intptr_t v30; // w22
  System_Type_o *v31; // x0
  intptr_t v32; // w22
  System_Type_o *v33; // x0
  double v34; // [xsp+8h] [xbp-68h] BYREF
  float v35; // [xsp+14h] [xbp-5Ch] BYREF
  uint64_t v36; // [xsp+18h] [xbp-58h] BYREF
  int64_t v37; // [xsp+20h] [xbp-50h] BYREF
  uint32_t v38; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v39; // [xsp+30h] [xbp-40h] BYREF
  uint16_t v40; // [xsp+34h] [xbp-3Ch] BYREF
  int16_t v41[2]; // [xsp+38h] [xbp-38h] BYREF
  int8_t v42[4]; // [xsp+3Ch] [xbp-34h] BYREF
  uint8_t v43[4]; // [xsp+48h] [xbp-28h] BYREF
  bool result; // [xsp+4Ch] [xbp-24h] BYREF
  System_RuntimeTypeHandle_o v45; // 0:w0.4
  System_RuntimeTypeHandle_o v46; // 0:w0.4
  System_RuntimeTypeHandle_o v47; // 0:w0.4
  System_RuntimeTypeHandle_o v48; // 0:w0.4
  System_RuntimeTypeHandle_o v49; // 0:w0.4
  System_RuntimeTypeHandle_o v50; // 0:w0.4
  System_RuntimeTypeHandle_o v51; // 0:w0.4
  System_RuntimeTypeHandle_o v52; // 0:w0.4
  System_RuntimeTypeHandle_o v53; // 0:w0.4
  System_RuntimeTypeHandle_o v54; // 0:w0.4
  System_RuntimeTypeHandle_o v55; // 0:w0.4
  System_RuntimeTypeHandle_o v56; // 0:w0.4

  if ( (byte_4353F54 & 1) == 0 )
  {
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    sub_B70694(&bool_var);
    sub_B70694(&bool_TypeInfo);
    sub_B70694(&qword_41BF1D8);
    sub_B70694(&double_var);
    sub_B70694(&double_TypeInfo);
    sub_B70694(&short_var);
    sub_B70694(&int_var);
    sub_B70694(&long_var);
    sub_B70694(&sbyte_var);
    sub_B70694(&float_var);
    sub_B70694(&System_Type_TypeInfo);
    sub_B70694(&ushort_var);
    sub_B70694(&uint_var);
    sub_B70694(&ulong_var);
    sub_B70694(&StringLiteral_24253/*"型が不正です:{0}"*/);
    sub_B70694(&StringLiteral_24267/*"文字列"*/);
    sub_B70694(&StringLiteral_241/*" isNotBoolean"*/);
    byte_4353F54 = 1;
  }
  result = 0;
  v43[0] = 0;
  v42[0] = 0;
  v41[0] = 0;
  v40 = 0;
  v38 = 0;
  v39 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v35 = 0.0;
  v34 = 0.0;
  if ( !value )
  {
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_24267/*"文字列"*/, message, 0LL);
    return;
  }
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v45.fields.value = (int)_0_T;
  TypeFromHandle = System_Type__GetTypeFromHandle(v45, 0LL);
  v46.fields.value = (int)bool_var;
  v11 = System_Type__GetTypeFromHandle(v46, 0LL);
  if ( System_Type__op_Equality(v11, TypeFromHandle, 0LL) )
  {
    if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    if ( !System_Boolean__TryParse(value, &result, 0LL) )
    {
      v12 = System_String__Concat_44758168(value, (System_String_o *)StringLiteral_241/*" isNotBoolean"*/, 0LL);
LABEL_13:
      v13 = v12;
      if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
      }
      Fgo_Assertions_Assert__GetEffectiveAssertMessage(v13, message, 0LL);
      return;
    }
    return;
  }
  v14 = (int)qword_41BF1D8;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v47.fields.value = v14;
  v15 = System_Type__GetTypeFromHandle(v47, 0LL);
  if ( System_Type__op_Equality(v15, TypeFromHandle, 0LL) )
  {
    if ( System_Byte__TryParse(value, v43, 0LL) )
      return;
LABEL_83:
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__GetParseAssertMessage(value, message, 0LL);
    return;
  }
  v16 = (int)sbyte_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v48.fields.value = v16;
  v17 = System_Type__GetTypeFromHandle(v48, 0LL);
  if ( System_Type__op_Equality(v17, TypeFromHandle, 0LL) )
  {
    if ( System_SByte__TryParse(value, v42, 0LL) )
      return;
    goto LABEL_83;
  }
  v18 = (int)short_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v49.fields.value = v18;
  v19 = System_Type__GetTypeFromHandle(v49, 0LL);
  if ( System_Type__op_Equality(v19, TypeFromHandle, 0LL) )
  {
    if ( System_Int16__TryParse(value, v41, 0LL) )
      return;
    goto LABEL_83;
  }
  v20 = (int)ushort_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v50.fields.value = v20;
  v21 = System_Type__GetTypeFromHandle(v50, 0LL);
  if ( System_Type__op_Equality(v21, TypeFromHandle, 0LL) )
  {
    if ( System_UInt16__TryParse(value, &v40, 0LL) )
      return;
    goto LABEL_83;
  }
  v22 = (int)int_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v51.fields.value = v22;
  v23 = System_Type__GetTypeFromHandle(v51, 0LL);
  if ( System_Type__op_Equality(v23, TypeFromHandle, 0LL) )
  {
    if ( System_Int32__TryParse(value, &v39, 0LL) )
      return;
    goto LABEL_83;
  }
  v24 = (int)uint_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v52.fields.value = v24;
  v25 = System_Type__GetTypeFromHandle(v52, 0LL);
  if ( System_Type__op_Equality(v25, TypeFromHandle, 0LL) )
  {
    if ( System_UInt32__TryParse(value, &v38, 0LL) )
      return;
    goto LABEL_83;
  }
  v26 = (int)long_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v53.fields.value = v26;
  v27 = System_Type__GetTypeFromHandle(v53, 0LL);
  if ( System_Type__op_Equality(v27, TypeFromHandle, 0LL) )
  {
    if ( System_Int64__TryParse(value, &v37, 0LL) )
      return;
    goto LABEL_83;
  }
  v28 = (int)ulong_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v54.fields.value = v28;
  v29 = System_Type__GetTypeFromHandle(v54, 0LL);
  if ( System_Type__op_Equality(v29, TypeFromHandle, 0LL) )
  {
    if ( System_UInt64__TryParse(value, &v36, 0LL) )
      return;
    goto LABEL_83;
  }
  v30 = (int)float_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v55.fields.value = v30;
  v31 = System_Type__GetTypeFromHandle(v55, 0LL);
  if ( System_Type__op_Equality(v31, TypeFromHandle, 0LL) )
  {
    if ( System_Single__TryParse(value, &v35, 0LL) )
      return;
    goto LABEL_83;
  }
  v32 = (int)double_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v56.fields.value = v32;
  v33 = System_Type__GetTypeFromHandle(v56, 0LL);
  if ( !System_Type__op_Equality(v33, TypeFromHandle, 0LL) )
  {
    v12 = System_String__Format((System_String_o *)StringLiteral_24253/*"型が不正です:{0}"*/, (Il2CppObject *)TypeFromHandle, 0LL);
    goto LABEL_13;
  }
  if ( (BYTE3(double_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !double_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(double_TypeInfo);
  if ( !System_Double__TryParse(value, &v34, 0LL) )
    goto LABEL_83;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_Object_(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_1BD5CE0 *method)
{
  System_Int32_array **v9; // x23
  System_Int32_array **v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array ***v33; // x8
  System_Int32_array **v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_o *v48; // x20
  __int64 v50; // x0
  __int64 v51; // x0

  if ( (byte_4353F57 & 1) == 0 )
  {
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_82/*" "*/);
    sub_B70694(&StringLiteral_21509/*"null"*/);
    sub_B70694(&StringLiteral_18913/*"expectedEqual"*/);
    sub_B70694(&StringLiteral_18914/*"expectedNotEqual"*/);
    byte_4353F57 = 1;
  }
  if ( expected )
  {
    v9 = (System_Int32_array **)((__int64 (__fastcall *)(UnityEngine_Object_o *, void *, bool, System_String_o *, const MethodInfo_1BD5CE0 *))expected->klass->vtable._3_ToString.method)(
                                  expected,
                                  expected->klass[1]._1.image,
                                  equal,
                                  message,
                                  method);
    if ( actual )
    {
LABEL_5:
      v10 = (System_Int32_array **)((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))actual->klass->vtable._3_ToString.method)(
                                     actual,
                                     actual->klass[1]._1.image);
      goto LABEL_8;
    }
  }
  else
  {
    v9 = (System_Int32_array **)StringLiteral_21509/*"null"*/;
    if ( actual )
      goto LABEL_5;
  }
  v10 = (System_Int32_array **)StringLiteral_21509/*"null"*/;
LABEL_8:
  v11 = sub_B706AC(string___TypeInfo, 5LL);
  if ( !v11 )
    sub_B7076C(0LL, v12);
  v19 = (System_String_array *)v11;
  if ( v9 )
  {
    v11 = sub_B70754(v9, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
    if ( !v11 )
      goto LABEL_35;
  }
  if ( !v19->max_length )
    goto LABEL_34;
  v19->m_Items[0] = (System_String_o *)v9;
  sub_B70630((BattleServantConfConponent_o *)v19->m_Items, v9, v13, v14, v15, v16, v17, v18);
  v11 = StringLiteral_82/*" "*/;
  if ( StringLiteral_82/*" "*/ )
  {
    v11 = sub_B70754(StringLiteral_82/*" "*/, v19->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_35;
    v26 = (System_Int32_array **)StringLiteral_82/*" "*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( v19->max_length <= 1 )
    goto LABEL_34;
  v19->m_Items[1] = (System_String_o *)v26;
  sub_B70630((BattleServantConfConponent_o *)&v19->m_Items[1], v26, v20, v21, v22, v23, v24, v25);
  v33 = (System_Int32_array ***)&StringLiteral_18914/*"expectedNotEqual"*/;
  if ( !equal )
    v33 = (System_Int32_array ***)&StringLiteral_18913/*"expectedEqual"*/;
  v34 = *v33;
  if ( *v33 )
  {
    v11 = sub_B70754(v34, v19->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_35;
  }
  if ( v19->max_length <= 2 )
    goto LABEL_34;
  v19->m_Items[2] = (System_String_o *)v34;
  sub_B70630((BattleServantConfConponent_o *)&v19->m_Items[2], v34, v27, v28, v29, v30, v31, v32);
  v11 = StringLiteral_82/*" "*/;
  if ( StringLiteral_82/*" "*/ )
  {
    v11 = sub_B70754(StringLiteral_82/*" "*/, v19->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_35;
    v41 = (System_Int32_array **)StringLiteral_82/*" "*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v19->max_length <= 3 )
    goto LABEL_34;
  v19->m_Items[3] = (System_String_o *)v41;
  sub_B70630((BattleServantConfConponent_o *)&v19->m_Items[3], v41, v35, v36, v37, v38, v39, v40);
  if ( v10 )
  {
    v11 = sub_B70754(v10, v19->obj.klass->_1.element_class);
    if ( !v11 )
    {
LABEL_35:
      v51 = sub_B7078C(v11);
      sub_B70738(v51, 0LL);
    }
  }
  if ( v19->max_length <= 4 )
  {
LABEL_34:
    v50 = sub_B70798(v11);
    sub_B70738(v50, 0LL);
  }
  v19->m_Items[4] = (System_String_o *)v10;
  sub_B70630((BattleServantConfConponent_o *)&v19->m_Items[4], v10, v42, v43, v44, v45, v46, v47);
  v48 = System_String__Concat_44838292(v19, 0LL);
  if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  }
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v48, message, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_float_(
        float expected,
        float actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_1BD5F70 *method)
{
  System_Int32_array **v7; // x23
  float v8; // s0
  System_Int32_array **v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array ***v32; // x8
  System_Int32_array **v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_o *v47; // x20
  __int64 v49; // x0
  __int64 v50; // x0
  float v51; // [xsp+8h] [xbp-28h] BYREF
  float v52; // [xsp+Ch] [xbp-24h] BYREF

  v51 = actual;
  v52 = expected;
  if ( (byte_4353F58 & 1) == 0 )
  {
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_82/*" "*/);
    sub_B70694(&StringLiteral_21509/*"null"*/);
    sub_B70694(&StringLiteral_18913/*"expectedEqual"*/);
    sub_B70694(&StringLiteral_18914/*"expectedNotEqual"*/);
    byte_4353F58 = 1;
  }
  v7 = (System_Int32_array **)System_Single__ToString(expected, (const MethodInfo *)&v52);
  v9 = (System_Int32_array **)System_Single__ToString(v8, (const MethodInfo *)&v51);
  v10 = sub_B706AC(string___TypeInfo, 5LL);
  if ( !v10 )
    sub_B7076C(0LL, v11);
  v18 = (System_String_array *)v10;
  if ( v7 )
  {
    v10 = sub_B70754(v7, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
    if ( !v10 )
      goto LABEL_30;
  }
  if ( !v18->max_length )
    goto LABEL_29;
  v18->m_Items[0] = (System_String_o *)v7;
  sub_B70630((BattleServantConfConponent_o *)v18->m_Items, v7, v12, v13, v14, v15, v16, v17);
  v10 = StringLiteral_82/*" "*/;
  if ( StringLiteral_82/*" "*/ )
  {
    v10 = sub_B70754(StringLiteral_82/*" "*/, v18->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_30;
    v25 = (System_Int32_array **)StringLiteral_82/*" "*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v18->max_length <= 1 )
    goto LABEL_29;
  v18->m_Items[1] = (System_String_o *)v25;
  sub_B70630((BattleServantConfConponent_o *)&v18->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
  v32 = (System_Int32_array ***)&StringLiteral_18914/*"expectedNotEqual"*/;
  if ( !equal )
    v32 = (System_Int32_array ***)&StringLiteral_18913/*"expectedEqual"*/;
  v33 = *v32;
  if ( *v32 )
  {
    v10 = sub_B70754(v33, v18->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_30;
  }
  if ( v18->max_length <= 2 )
    goto LABEL_29;
  v18->m_Items[2] = (System_String_o *)v33;
  sub_B70630((BattleServantConfConponent_o *)&v18->m_Items[2], v33, v26, v27, v28, v29, v30, v31);
  v10 = StringLiteral_82/*" "*/;
  if ( StringLiteral_82/*" "*/ )
  {
    v10 = sub_B70754(StringLiteral_82/*" "*/, v18->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_30;
    v40 = (System_Int32_array **)StringLiteral_82/*" "*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( v18->max_length <= 3 )
    goto LABEL_29;
  v18->m_Items[3] = (System_String_o *)v40;
  sub_B70630((BattleServantConfConponent_o *)&v18->m_Items[3], v40, v34, v35, v36, v37, v38, v39);
  if ( v9 )
  {
    v10 = sub_B70754(v9, v18->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_30:
      v50 = sub_B7078C(v10);
      sub_B70738(v50, 0LL);
    }
  }
  if ( v18->max_length <= 4 )
  {
LABEL_29:
    v49 = sub_B70798(v10);
    sub_B70738(v49, 0LL);
  }
  v18->m_Items[4] = (System_String_o *)v9;
  sub_B70630((BattleServantConfConponent_o *)&v18->m_Items[4], v9, v41, v42, v43, v44, v45, v46);
  v47 = System_String__Concat_44838292(v18, 0LL);
  if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  }
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v47, message, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_int_(
        int32_t expected,
        int32_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_1BD5810 *method)
{
  System_Int32_array **v7; // x23
  System_Int32_array **v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array ***v31; // x8
  System_Int32_array **v32; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_o *v46; // x20
  __int64 v48; // x0
  __int64 v49; // x0
  int32_t v50; // [xsp+8h] [xbp-28h] BYREF
  int32_t v51; // [xsp+Ch] [xbp-24h] BYREF

  v50 = actual;
  v51 = expected;
  if ( (byte_4353F55 & 1) == 0 )
  {
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_82/*" "*/);
    sub_B70694(&StringLiteral_21509/*"null"*/);
    sub_B70694(&StringLiteral_18913/*"expectedEqual"*/);
    sub_B70694(&StringLiteral_18914/*"expectedNotEqual"*/);
    byte_4353F55 = 1;
  }
  v7 = (System_Int32_array **)System_Int32__ToString((int32_t)&v51, 0LL);
  v8 = (System_Int32_array **)System_Int32__ToString((int32_t)&v50, 0LL);
  v9 = sub_B706AC(string___TypeInfo, 5LL);
  if ( !v9 )
    sub_B7076C(0LL, v10);
  v17 = (System_String_array *)v9;
  if ( v7 )
  {
    v9 = sub_B70754(v7, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
    if ( !v9 )
      goto LABEL_30;
  }
  if ( !v17->max_length )
    goto LABEL_29;
  v17->m_Items[0] = (System_String_o *)v7;
  sub_B70630((BattleServantConfConponent_o *)v17->m_Items, v7, v11, v12, v13, v14, v15, v16);
  v9 = StringLiteral_82/*" "*/;
  if ( StringLiteral_82/*" "*/ )
  {
    v9 = sub_B70754(StringLiteral_82/*" "*/, v17->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_30;
    v24 = (System_Int32_array **)StringLiteral_82/*" "*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v17->max_length <= 1 )
    goto LABEL_29;
  v17->m_Items[1] = (System_String_o *)v24;
  sub_B70630((BattleServantConfConponent_o *)&v17->m_Items[1], v24, v18, v19, v20, v21, v22, v23);
  v31 = (System_Int32_array ***)&StringLiteral_18914/*"expectedNotEqual"*/;
  if ( !equal )
    v31 = (System_Int32_array ***)&StringLiteral_18913/*"expectedEqual"*/;
  v32 = *v31;
  if ( *v31 )
  {
    v9 = sub_B70754(v32, v17->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_30;
  }
  if ( v17->max_length <= 2 )
    goto LABEL_29;
  v17->m_Items[2] = (System_String_o *)v32;
  sub_B70630((BattleServantConfConponent_o *)&v17->m_Items[2], v32, v25, v26, v27, v28, v29, v30);
  v9 = StringLiteral_82/*" "*/;
  if ( StringLiteral_82/*" "*/ )
  {
    v9 = sub_B70754(StringLiteral_82/*" "*/, v17->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_30;
    v39 = (System_Int32_array **)StringLiteral_82/*" "*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v17->max_length <= 3 )
    goto LABEL_29;
  v17->m_Items[3] = (System_String_o *)v39;
  sub_B70630((BattleServantConfConponent_o *)&v17->m_Items[3], v39, v33, v34, v35, v36, v37, v38);
  if ( v8 )
  {
    v9 = sub_B70754(v8, v17->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_30:
      v49 = sub_B7078C(v9);
      sub_B70738(v49, 0LL);
    }
  }
  if ( v17->max_length <= 4 )
  {
LABEL_29:
    v48 = sub_B70798(v9);
    sub_B70738(v48, 0LL);
  }
  v17->m_Items[4] = (System_String_o *)v8;
  sub_B70630((BattleServantConfConponent_o *)&v17->m_Items[4], v8, v40, v41, v42, v43, v44, v45);
  v46 = System_String__Concat_44838292(v17, 0LL);
  if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  }
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v46, message, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_long_(
        int64_t expected,
        int64_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_1BD5A74 *method)
{
  System_Int32_array **v7; // x23
  System_Int32_array **v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array ***v31; // x8
  System_Int32_array **v32; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_o *v46; // x20
  __int64 v48; // x0
  __int64 v49; // x0
  int64_t v50; // [xsp+8h] [xbp-38h] BYREF
  int64_t v51; // [xsp+18h] [xbp-28h] BYREF

  v51 = expected;
  v50 = actual;
  if ( (byte_4353F56 & 1) == 0 )
  {
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_82/*" "*/);
    sub_B70694(&StringLiteral_21509/*"null"*/);
    sub_B70694(&StringLiteral_18913/*"expectedEqual"*/);
    sub_B70694(&StringLiteral_18914/*"expectedNotEqual"*/);
    byte_4353F56 = 1;
  }
  v7 = (System_Int32_array **)System_Int64__ToString((int64_t)&v51, 0LL);
  v8 = (System_Int32_array **)System_Int64__ToString((int64_t)&v50, 0LL);
  v9 = sub_B706AC(string___TypeInfo, 5LL);
  if ( !v9 )
    sub_B7076C(0LL, v10);
  v17 = (System_String_array *)v9;
  if ( v7 )
  {
    v9 = sub_B70754(v7, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
    if ( !v9 )
      goto LABEL_30;
  }
  if ( !v17->max_length )
    goto LABEL_29;
  v17->m_Items[0] = (System_String_o *)v7;
  sub_B70630((BattleServantConfConponent_o *)v17->m_Items, v7, v11, v12, v13, v14, v15, v16);
  v9 = StringLiteral_82/*" "*/;
  if ( StringLiteral_82/*" "*/ )
  {
    v9 = sub_B70754(StringLiteral_82/*" "*/, v17->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_30;
    v24 = (System_Int32_array **)StringLiteral_82/*" "*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v17->max_length <= 1 )
    goto LABEL_29;
  v17->m_Items[1] = (System_String_o *)v24;
  sub_B70630((BattleServantConfConponent_o *)&v17->m_Items[1], v24, v18, v19, v20, v21, v22, v23);
  v31 = (System_Int32_array ***)&StringLiteral_18914/*"expectedNotEqual"*/;
  if ( !equal )
    v31 = (System_Int32_array ***)&StringLiteral_18913/*"expectedEqual"*/;
  v32 = *v31;
  if ( *v31 )
  {
    v9 = sub_B70754(v32, v17->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_30;
  }
  if ( v17->max_length <= 2 )
    goto LABEL_29;
  v17->m_Items[2] = (System_String_o *)v32;
  sub_B70630((BattleServantConfConponent_o *)&v17->m_Items[2], v32, v25, v26, v27, v28, v29, v30);
  v9 = StringLiteral_82/*" "*/;
  if ( StringLiteral_82/*" "*/ )
  {
    v9 = sub_B70754(StringLiteral_82/*" "*/, v17->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_30;
    v39 = (System_Int32_array **)StringLiteral_82/*" "*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v17->max_length <= 3 )
    goto LABEL_29;
  v17->m_Items[3] = (System_String_o *)v39;
  sub_B70630((BattleServantConfConponent_o *)&v17->m_Items[3], v39, v33, v34, v35, v36, v37, v38);
  if ( v8 )
  {
    v9 = sub_B70754(v8, v17->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_30:
      v49 = sub_B7078C(v9);
      sub_B70738(v49, 0LL);
    }
  }
  if ( v17->max_length <= 4 )
  {
LABEL_29:
    v48 = sub_B70798(v9);
    sub_B70738(v48, 0LL);
  }
  v17->m_Items[4] = (System_String_o *)v8;
  sub_B70630((BattleServantConfConponent_o *)&v17->m_Items[4], v8, v40, v41, v42, v43, v44, v45);
  v46 = System_String__Concat_44838292(v17, 0LL);
  if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  }
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v46, message, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetEffectiveAssertMessage(
        System_String_o *defaultMessage,
        System_String_o *message,
        const MethodInfo *method)
{
  if ( (byte_436107A & 1) == 0 )
  {
    sub_B70694(&StringLiteral_37/*"\n("*/);
    sub_B70694(&StringLiteral_663/*")"*/);
    byte_436107A = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    return defaultMessage;
  else
    return System_String__Concat_44761580(
             message,
             (System_String_o *)StringLiteral_37/*"\n("*/,
             defaultMessage,
             (System_String_o *)StringLiteral_663/*")"*/,
             0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetNullAssertMessage(
        System_String_o *modelName,
        System_String_o *message,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_String_o *v6; // x20

  if ( (byte_4361085 & 1) == 0 )
  {
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    sub_B70694(&StringLiteral_24187/*"が null です"*/);
    byte_4361085 = 1;
  }
  v6 = System_String__Concat_44758168(modelName, (System_String_o *)StringLiteral_24187/*"が null です"*/, 0LL);
  if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  }
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v6, message, v5);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetParseAssertMessage(
        System_String_o *value,
        System_String_o *message,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_String_o *v6; // x20

  if ( (byte_4361087 & 1) == 0 )
  {
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    sub_B70694(&StringLiteral_242/*" isNotNumbers"*/);
    byte_4361087 = 1;
  }
  v6 = System_String__Concat_44758168(value, (System_String_o *)StringLiteral_242/*" isNotNumbers"*/, 0LL);
  if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  }
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v6, message, v5);
}


void __fastcall Fgo_Assertions_Assert__HasContainKey_object__object_(
        System_Collections_Generic_Dictionary_T1__T2__o *dic,
        Il2CppObject *key,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_1BD61D4 *method)
{
  __int64 *v11; // x8
  System_String_o *v12; // x0
  System_String_o *v13; // x20

  if ( (byte_4353F59 & 1) == 0 )
  {
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    sub_B70694(&StringLiteral_24218/*"ディクショナリ"*/);
    sub_B70694(&StringLiteral_678/*") の値がディクショナリに含まれていません"*/);
    sub_B70694(&StringLiteral_20440/*"key("*/);
    sub_B70694(&StringLiteral_24205/*"キー"*/);
    byte_4353F59 = 1;
  }
  if ( !dic )
  {
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    v11 = &StringLiteral_24218/*"ディクショナリ"*/;
    goto LABEL_15;
  }
  if ( !key )
  {
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    v11 = &StringLiteral_24205/*"キー"*/;
LABEL_15:
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)*v11, message, 0LL);
    return;
  }
  if ( (((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_T1__T2__o *, Il2CppObject *))method->rgctx_data->_1_System_Collections_Generic_Dictionary_T1__T2__ContainsKey->methodPointer)(
          dic,
          key) & 1) == 0 )
  {
    v12 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))key->klass->vtable[3].method)(
                               key,
                               key->klass->vtable[4].methodPtr);
    v13 = System_String__Concat_44760452(
            (System_String_o *)StringLiteral_20440/*"key("*/,
            v12,
            (System_String_o *)StringLiteral_678/*") の値がディクショナリに含まれていません"*/,
            0LL);
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__GetEffectiveAssertMessage(v13, message, 0LL);
  }
}


void __fastcall Fgo_Assertions_Assert__IsAssetDataNotNull(
        Il2CppObject *assetData,
        System_String_o *assetName,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4361083 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_15932/*"[AssetData]\n{0}をロードできませんでした"*/);
    byte_4361083 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_15932/*"[AssetData]\n{0}をロードできませんでした"*/, (Il2CppObject *)assetName, 0LL);
}


void __fastcall Fgo_Assertions_Assert__IsFalse(
        bool condition,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  ;
}


void __fastcall Fgo_Assertions_Assert__IsInRange(
        int32_t count,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  Il2CppObject *v10; // x21
  __int64 v11; // x2
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // x2
  Il2CppObject *v15; // x0
  System_String_o *v16; // x20
  int32_t v17; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v18; // [xsp+8h] [xbp-28h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4361086 & 1) == 0 )
  {
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_20095/*"index({0}) の値が負です"*/);
    sub_B70694(&StringLiteral_20096/*"index({0}) の値が配列の要素数({1})を超えています"*/);
    byte_4361086 = 1;
  }
  if ( (index & 0x80000000) != 0 )
  {
    v19 = index;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, message);
    v13 = System_String__Format((System_String_o *)StringLiteral_20095/*"index({0}) の値が負です"*/, v15, 0LL);
  }
  else
  {
    if ( count > index )
      return;
    v18 = index;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, message);
    v17 = count;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v11);
    v13 = System_String__Format_44753704((System_String_o *)StringLiteral_20096/*"index({0}) の値が配列の要素数({1})を超えています"*/, v10, v12, 0LL);
  }
  v16 = v13;
  if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  }
  Fgo_Assertions_Assert__GetEffectiveAssertMessage(v16, message, v14);
}


void __fastcall Fgo_Assertions_Assert__IsInRange_object_(
        System_Object_array *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_1BD6410 *method)
{
  if ( (byte_4353F5B & 1) == 0 )
  {
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    sub_B70694(&StringLiteral_24294/*"配列"*/);
    byte_4353F5B = 1;
  }
  if ( !array )
  {
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_24294/*"配列"*/, message, 0LL);
  }
}


void __fastcall Fgo_Assertions_Assert__IsInRange_object__29188980(
        System_Collections_Generic_List_T__o *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_1BD6374 *method)
{
  if ( (byte_4353F5A & 1) == 0 )
  {
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    sub_B70694(&StringLiteral_24230/*"リスト"*/);
    byte_4353F5A = 1;
  }
  if ( !array )
  {
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_24230/*"リスト"*/, message, 0LL);
  }
}


void __fastcall Fgo_Assertions_Assert__IsNotNull_object_(
        Il2CppObject *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_1BD64AC *method)
{
  UnityEngine_Object_c *v7; // x1
  UnityEngine_Object_o *v8; // x0

  if ( (byte_4353F5C & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353F5C = 1;
  }
  if ( sub_B70754(value, UnityEngine_Object_TypeInfo) )
  {
    v7 = UnityEngine_Object_TypeInfo;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = UnityEngine_Object_TypeInfo;
    }
    v8 = (UnityEngine_Object_o *)sub_B70754(value, v7);
    UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
  }
}


void __fastcall Fgo_Assertions_Assert__IsNull_object_(
        Il2CppObject *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_1BD653C *method)
{
  UnityEngine_Object_c *v7; // x1
  UnityEngine_Object_o *v8; // x0

  if ( (byte_4353F5D & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353F5D = 1;
  }
  if ( sub_B70754(value, UnityEngine_Object_TypeInfo) )
  {
    v7 = UnityEngine_Object_TypeInfo;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = UnityEngine_Object_TypeInfo;
    }
    v8 = (UnityEngine_Object_o *)sub_B70754(value, v7);
    UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  }
}


void __fastcall Fgo_Assertions_Assert__IsSerializeFieldNotNull_object_(
        Il2CppObject *value,
        System_String_o *fieldName,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_1BD65CC *method)
{
  if ( (byte_4353F5E & 1) == 0 )
  {
    sub_B70694(&StringLiteral_15976/*"[SerializeField]\n{0}の参照が切れています"*/);
    byte_4353F5E = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_15976/*"[SerializeField]\n{0}の参照が切れています"*/, (Il2CppObject *)fieldName, 0LL);
}


void __fastcall Fgo_Assertions_Assert__IsTrue(
        bool condition,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  ;
}


void __fastcall Fgo_Assertions_Assert__OnFailed(
        System_String_o *message,
        System_String_o *expected,
        System_String_o *actual,
        const MethodInfo *method)
{
  System_String_o *v7; // x19
  Fgo_Assertions_Assert_c *v8; // x8
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x9
  struct System_Action_string__o *onFailedAction; // x0
  __int64 v11; // x1

  if ( (byte_4361076 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_string__Invoke__);
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    sub_B70694(&StringLiteral_23924/*"{0}\n(expected={1}, actual={2})"*/);
    byte_4361076 = 1;
  }
  v7 = System_String__Format_44759232(
         (System_String_o *)StringLiteral_23924/*"{0}\n(expected={1}, actual={2})"*/,
         (Il2CppObject *)message,
         (Il2CppObject *)expected,
         (Il2CppObject *)actual,
         0LL);
  v8 = Fgo_Assertions_Assert_TypeInfo;
  if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v8 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( static_fields->enable )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = Fgo_Assertions_Assert_TypeInfo;
      static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
    }
    onFailedAction = static_fields->onFailedAction;
    if ( onFailedAction )
    {
      if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        onFailedAction = Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedAction;
        if ( !onFailedAction )
          sub_B7076C(0LL, v11);
      }
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)onFailedAction,
        (System_Uri_o *)v7,
        (const MethodInfo_264C15C *)Method_System_Action_string__Invoke__);
    }
  }
}


void __fastcall Fgo_Assertions_Assert__OnFailedDataEntityExists(
        System_String_o *name,
        System_String_o *key,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4361084 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_15957/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/);
    byte_4361084 = 1;
  }
  System_String__Format_44753704((System_String_o *)StringLiteral_15957/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/, (Il2CppObject *)name, (Il2CppObject *)key, 0LL);
}


void __fastcall Fgo_Assertions_Assert__OnFailed_51649556(
        System_String_o *caption,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  System_String_o *v9; // x21
  Il2CppObject *v10; // x19
  System_String_o *v11; // x23
  Il2CppObject *FileName; // x23
  __int64 v13; // x2
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x20
  System_String_o *name; // x0
  System_String_o *v17; // x21
  Fgo_Assertions_Assert_c *v18; // x8
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x9
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  v9 = message;
  v10 = (Il2CppObject *)caption;
  if ( (byte_4361077 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_string__Invoke__);
    sub_B70694(&Method_System_Action_string__string__string__Invoke__);
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&System_IO_Path_TypeInfo);
    sub_B70694(&StringLiteral_23965/*"{0}({1})"*/);
    sub_B70694(&StringLiteral_43/*"\nGameObject:"*/);
    caption = (System_String_o *)sub_B70694(&StringLiteral_23925/*"{0}\n{1}\n{2}"*/);
    byte_4361077 = 1;
  }
  if ( !filePath )
    goto LABEL_34;
  v11 = System_String__Replace(filePath, 0x5Cu, 0x2Fu, 0LL);
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  FileName = (Il2CppObject *)System_IO_Path__GetFileName(v11, 0LL);
  v20 = line;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v13);
  v15 = (Il2CppObject *)System_String__Format_44753704((System_String_o *)StringLiteral_23965/*"{0}({1})"*/, FileName, v14, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  caption = (System_String_o *)UnityEngine_Object__op_Inequality(0LL, (UnityEngine_Object_o *)gameObject, 0LL);
  if ( ((unsigned __int8)caption & 1) != 0 )
  {
    if ( !gameObject )
      goto LABEL_34;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    v9 = System_String__Concat_44760452(v9, (System_String_o *)StringLiteral_43/*"\nGameObject:"*/, name, 0LL);
  }
  v17 = System_String__Format_44759232((System_String_o *)StringLiteral_23925/*"{0}\n{1}\n{2}"*/, v10, (Il2CppObject *)v9, v15, 0LL);
  v18 = Fgo_Assertions_Assert_TypeInfo;
  if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v18 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v18->static_fields;
  if ( static_fields->enable )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = Fgo_Assertions_Assert_TypeInfo;
      static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
    }
    caption = (System_String_o *)static_fields->onFailedAction;
    if ( caption )
    {
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        caption = (System_String_o *)Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedAction;
        if ( !caption )
          goto LABEL_34;
      }
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)caption,
        (System_Uri_o *)v17,
        (const MethodInfo_264C15C *)Method_System_Action_string__Invoke__);
      v18 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = Fgo_Assertions_Assert_TypeInfo;
    }
    caption = (System_String_o *)v18->static_fields->onFailedSendReport;
    if ( caption )
    {
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) == 0
        || v18->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v18),
            (caption = (System_String_o *)Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedSendReport) != 0LL) )
      {
        System_Action_string__string__string___Invoke(
          (System_Action_string__string__string__o *)caption,
          (System_String_o *)v10,
          v17,
          (System_String_o *)v15,
          (const MethodInfo_265CDDC *)Method_System_Action_string__string__string__Invoke__);
        return;
      }
LABEL_34:
      sub_B7076C(caption, message);
    }
  }
}


void __fastcall Fgo_Assertions_Assert__SetOnFailedAction(
        System_Action_string__o *action,
        bool force,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  Fgo_Assertions_Assert_c *v10; // x0
  Fgo_Assertions_Assert_c *v11; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_4361078 & 1) == 0 )
  {
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    sub_B70694(&UnityEngine_Debug_TypeInfo);
    sub_B70694(&StringLiteral_24268/*"既に表明違反時の処理が設定されています"*/);
    byte_4361078 = 1;
  }
  if ( !force )
  {
    v10 = Fgo_Assertions_Assert_TypeInfo;
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
      v10 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( v10->static_fields->onFailedAction )
    {
      if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_24268/*"既に表明違反時の処理が設定されています"*/, 0LL);
    }
  }
  v11 = Fgo_Assertions_Assert_TypeInfo;
  if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v11 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v11->static_fields;
  static_fields->onFailedAction = action;
  sub_B70630(
    (BattleServantConfConponent_o *)&static_fields->onFailedAction,
    (System_Int32_array **)action,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall Fgo_Assertions_Assert__SetOnFailedSendReport(
        System_Action_string__string__string__o *action,
        bool force,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  Fgo_Assertions_Assert_c *v10; // x0
  Fgo_Assertions_Assert_c *v11; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_4361079 & 1) == 0 )
  {
    sub_B70694(&Fgo_Assertions_Assert_TypeInfo);
    sub_B70694(&UnityEngine_Debug_TypeInfo);
    sub_B70694(&StringLiteral_24268/*"既に表明違反時の処理が設定されています"*/);
    byte_4361079 = 1;
  }
  if ( !force )
  {
    v10 = Fgo_Assertions_Assert_TypeInfo;
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
      v10 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( v10->static_fields->onFailedSendReport )
    {
      if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_24268/*"既に表明違反時の処理が設定されています"*/, 0LL);
    }
  }
  v11 = Fgo_Assertions_Assert_TypeInfo;
  if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v11 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v11->static_fields;
  static_fields->onFailedSendReport = action;
  sub_B70630(
    (BattleServantConfConponent_o *)&static_fields->onFailedSendReport,
    (System_Int32_array **)action,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall Fgo_Assertions_AssertQueue___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  Fgo_Assertions_AssertQueue_c *v9; // x8
  struct Fgo_Assertions_AssertQueue_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_436108E & 1) == 0 )
  {
    sub_B70694(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Queue_string___ctor__);
    sub_B70694(&System_Collections_Generic_Queue_string__TypeInfo);
    byte_436108E = 1;
  }
  v1 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B70764(System_Collections_Generic_Queue_string__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v1,
    (const MethodInfo_2EF5E80 *)Method_System_Collections_Generic_Queue_string___ctor__);
  static_fields = (BattleServantConfConponent_o *)Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
  v9 = Fgo_Assertions_AssertQueue_TypeInfo;
  Fgo_Assertions_AssertQueue_TypeInfo->static_fields->isReady = 1;
  v10 = v9->static_fields;
  v10->onFailedAction = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&v10->onFailedAction, 0LL, v11, v12, v13, v14, v15, v16);
}


void __fastcall Fgo_Assertions_AssertQueue__Clear(const MethodInfo *method)
{
  __int64 v1; // x1
  Fgo_Assertions_AssertQueue_c *v2; // x0
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *queue; // x0

  if ( (byte_436108D & 1) == 0 )
  {
    sub_B70694(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Queue_string__Clear__);
    byte_436108D = 1;
  }
  v2 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( (BYTE3(Fgo_Assertions_AssertQueue_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v2 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  queue = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v2->static_fields->queue;
  if ( !queue )
    sub_B7076C(0LL, v1);
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    queue,
    (const MethodInfo_2EF6114 *)Method_System_Collections_Generic_Queue_string__Clear__);
}


void __fastcall Fgo_Assertions_AssertQueue__Dequeue(const MethodInfo *method)
{
  __int64 v1; // x1
  Fgo_Assertions_AssertQueue_c *v2; // x0
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x9
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *queue; // x8
  System_String_o *ProxyData___Dequeue; // x0
  const MethodInfo *v6; // x1

  if ( (byte_436108C & 1) == 0 )
  {
    sub_B70694(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Queue_string__Dequeue__);
    sub_B70694(&Method_System_Collections_Generic_Queue_string__get_Count__);
    byte_436108C = 1;
  }
  v2 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( (BYTE3(Fgo_Assertions_AssertQueue_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v2 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  static_fields = v2->static_fields;
  queue = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)static_fields->queue;
  if ( !static_fields->queue )
    goto LABEL_16;
  if ( queue->fields._size )
  {
    if ( (WORD1(v2->vtable._0_Equals.methodPtr) & 0x400) == 0
      || v2->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v2),
          (queue = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)Fgo_Assertions_AssertQueue_TypeInfo->static_fields->queue) != 0LL) )
    {
      ProxyData___Dequeue = (System_String_o *)System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                                                 queue,
                                                 (const MethodInfo_2EF668C *)Method_System_Collections_Generic_Queue_string__Dequeue__);
      Fgo_Assertions_AssertQueue__OnFailed(ProxyData___Dequeue, v6);
      return;
    }
LABEL_16:
    sub_B7076C(v2, v1);
  }
  if ( (WORD1(v2->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    static_fields = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
  }
  static_fields->isReady = 1;
}


void __fastcall Fgo_Assertions_AssertQueue__Enqueue(System_String_o *message, const MethodInfo *method)
{
  Fgo_Assertions_AssertQueue_c *v3; // x0
  __int16 v4; // w8
  int v5; // w8
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x10
  bool *p_isReady; // x9

  if ( (byte_436108B & 1) == 0 )
  {
    sub_B70694(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Queue_string__Enqueue__);
    byte_436108B = 1;
  }
  v3 = Fgo_Assertions_AssertQueue_TypeInfo;
  v4 = WORD1(Fgo_Assertions_AssertQueue_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v4 & 0x400) != 0 )
  {
    if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
      v3 = Fgo_Assertions_AssertQueue_TypeInfo;
      v4 = WORD1(Fgo_Assertions_AssertQueue_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v5 = v4 & 0x400;
  }
  else
  {
    v5 = 0;
  }
  static_fields = v3->static_fields;
  p_isReady = &static_fields->isReady;
  if ( static_fields->isReady )
  {
    if ( v5 )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        p_isReady = &Fgo_Assertions_AssertQueue_TypeInfo->static_fields->isReady;
      }
    }
    *p_isReady = 0;
    Fgo_Assertions_AssertQueue__OnFailed(message, method);
  }
  else
  {
    if ( v5 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
    }
    if ( !static_fields->queue )
      sub_B7076C(0LL, method);
    System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
      (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)static_fields->queue,
      (Mono_Net_CFNetwork_GetProxyData_o *)message,
      (const MethodInfo_2EF6474 *)Method_System_Collections_Generic_Queue_string__Enqueue__);
  }
}


void __fastcall Fgo_Assertions_AssertQueue__OnFailed(System_String_o *message, const MethodInfo *method)
{
  Fgo_Assertions_AssertQueue_c *v3; // x0
  struct System_Action_string__o *onFailedAction; // x8
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4361089 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_string__Invoke__);
    sub_B70694(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_B70694(&UnityEngine_Debug_TypeInfo);
    sub_B70694(&StringLiteral_24284/*"表明違反時処理が設定されていません"*/);
    byte_4361089 = 1;
  }
  v3 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( (BYTE3(Fgo_Assertions_AssertQueue_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v3 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  onFailedAction = v3->static_fields->onFailedAction;
  if ( onFailedAction )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      onFailedAction = Fgo_Assertions_AssertQueue_TypeInfo->static_fields->onFailedAction;
      if ( !onFailedAction )
        sub_B7076C(v5, v6);
    }
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)onFailedAction,
      (System_Uri_o *)message,
      (const MethodInfo_264C15C *)Method_System_Action_string__Invoke__);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_24284/*"表明違反時処理が設定されていません"*/, 0LL);
  }
}


void __fastcall Fgo_Assertions_AssertQueue__SetOnFailedAction(
        System_Action_string__o *action,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  Fgo_Assertions_AssertQueue_c *v9; // x0
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x0

  if ( (byte_436108A & 1) == 0 )
  {
    sub_B70694(&Fgo_Assertions_AssertQueue_TypeInfo);
    byte_436108A = 1;
  }
  v9 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( (BYTE3(Fgo_Assertions_AssertQueue_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v9 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->onFailedAction = action;
  sub_B70630(
    (BattleServantConfConponent_o *)&static_fields->onFailedAction,
    (System_Int32_array **)action,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}