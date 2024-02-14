void __fastcall Fgo_Assertions_Assert___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_4223F4D & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_Assert_TypeInfo, v1);
    byte_4223F4D = 1;
  }
  Fgo_Assertions_Assert_TypeInfo->static_fields->enable = 1;
  static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
  static_fields->onFailedAction = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->onFailedAction, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall Fgo_Assertions_Assert__AreApproximatelyEqual(
        float expected,
        float actual,
        System_String_o *message,
        const MethodInfo *method)
{
  float v7; // s0
  System_String_o *v8; // x20
  float v9; // s0
  const MethodInfo *v10; // x3
  System_String_o *v11; // x21
  float v12; // [xsp+18h] [xbp-18h] BYREF
  float v13; // [xsp+1Ch] [xbp-14h] BYREF

  v13 = expected;
  v12 = actual;
  if ( (byte_4223F40 & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_Assert_TypeInfo, method);
    byte_4223F40 = 1;
  }
  if ( !UnityEngine_Mathf__Approximately(expected, actual, 0LL) )
  {
    v8 = System_Single__ToString(v7, (const MethodInfo *)&v13);
    v11 = System_Single__ToString(v9, (const MethodInfo *)&v12);
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__OnFailed(message, v8, v11, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__AreEqual(
        int32_t expected,
        int32_t actual,
        System_String_o *message,
        const MethodInfo *method)
{
  System_String_o *v7; // x20
  const MethodInfo *v8; // x3
  System_String_o *v9; // x21
  int32_t v10; // [xsp+8h] [xbp-28h] BYREF
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v10 = actual;
  v11 = expected;
  if ( (byte_4223F41 & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&actual);
    byte_4223F41 = 1;
  }
  if ( expected != actual )
  {
    v7 = System_Int32__ToString((int32_t)&v11, 0LL);
    v9 = System_Int32__ToString((int32_t)&v10, 0LL);
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__OnFailed(message, v7, v9, v8);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_50743056(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        const MethodInfo *method)
{
  System_String_o *v7; // x20
  const MethodInfo *v8; // x3
  System_String_o *v9; // x21
  int64_t v10; // [xsp+0h] [xbp-30h] BYREF
  int64_t v11; // [xsp+8h] [xbp-28h] BYREF

  v10 = actual;
  v11 = expected;
  if ( (byte_4223F42 & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_Assert_TypeInfo, actual);
    byte_4223F42 = 1;
  }
  if ( expected != actual )
  {
    v7 = System_Int64__ToString((int64_t)&v11, 0LL);
    v9 = System_Int64__ToString((int64_t)&v10, 0LL);
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__OnFailed(message, v7, v9, v8);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_50743236(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  _BOOL8 v9; // x0
  System_String_o *name; // x21
  const MethodInfo *v11; // x3
  System_String_o *v12; // x20

  if ( (byte_4223F43 & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_Assert_TypeInfo, actual);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_21237/*"null"*/, v8);
    byte_4223F43 = 1;
  }
  if ( expected )
    goto LABEL_16;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(actual, 0LL, 0LL) )
  {
LABEL_16:
    if ( actual )
      goto LABEL_39;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(expected, 0LL, 0LL) )
    {
LABEL_39:
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(expected, actual, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v9 = UnityEngine_Object__op_Equality(expected, 0LL, 0LL);
        if ( v9 )
        {
          name = (System_String_o *)StringLiteral_21237/*"null"*/;
        }
        else
        {
          if ( !expected )
            goto LABEL_36;
          name = UnityEngine_Object__get_name(expected, 0LL);
        }
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v9 = UnityEngine_Object__op_Equality(actual, 0LL, 0LL);
        if ( v9 )
        {
          v12 = (System_String_o *)StringLiteral_21237/*"null"*/;
LABEL_32:
          if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
          }
          Fgo_Assertions_Assert__OnFailed(message, name, v12, v11);
          return;
        }
        if ( actual )
        {
          v12 = UnityEngine_Object__get_name(actual, 0LL);
          goto LABEL_32;
        }
LABEL_36:
        sub_B0D97C(v9);
      }
    }
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_object_(
        Il2CppObject *expected,
        Il2CppObject *actual,
        System_String_o *message,
        const MethodInfo_17005DC *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x0
  __int64 v10; // x0
  UnityEngine_Object_o *v11; // x20
  UnityEngine_Object_o *v12; // x0
  System_String_o *v13; // x21
  System_String_o *v14; // x20

  if ( (byte_42142C2 & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_Assert_TypeInfo, actual);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_21237/*"null"*/, v8);
    byte_42142C2 = 1;
  }
  if ( expected != actual )
  {
    v9 = sub_B0D964(expected, UnityEngine_Object_TypeInfo);
    if ( !actual && v9
      || (v10 = sub_B0D964(actual, UnityEngine_Object_TypeInfo), !expected) && v10
      || sub_B0D964(expected, UnityEngine_Object_TypeInfo) && sub_B0D964(actual, UnityEngine_Object_TypeInfo) )
    {
      v11 = (UnityEngine_Object_o *)sub_B0D964(actual, UnityEngine_Object_TypeInfo);
      if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
      }
      v12 = (UnityEngine_Object_o *)sub_B0D964(expected, UnityEngine_Object_TypeInfo);
      Fgo_Assertions_Assert__AreEqual_50743236(v12, v11, message, 0LL);
      return;
    }
    if ( expected )
    {
      if ( (((__int64 (__fastcall *)(Il2CppObject *, Il2CppObject *, Il2CppMethodPointer))expected->klass->vtable[0].method)(
              expected,
              actual,
              expected->klass->vtable[1].methodPtr) & 1) != 0 )
        return;
      v13 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))expected->klass->vtable[3].method)(
                                 expected,
                                 expected->klass->vtable[4].methodPtr);
      if ( !actual )
        goto LABEL_20;
    }
    else
    {
      v13 = (System_String_o *)StringLiteral_21237/*"null"*/;
      if ( !actual )
      {
LABEL_20:
        v14 = (System_String_o *)StringLiteral_21237/*"null"*/;
LABEL_21:
        if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
        }
        Fgo_Assertions_Assert__OnFailed(message, v13, v14, 0LL);
        return;
      }
    }
    v14 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))actual->klass->vtable[3].method)(
                               actual,
                               actual->klass->vtable[4].methodPtr);
    goto LABEL_21;
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotApproximatelyEqual(
        float expected,
        float actual,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v7; // x1
  float v8; // s0
  System_String_o *v9; // x0
  System_String_o *v10; // x20
  float v11; // s0
  const MethodInfo *v12; // x3
  System_String_o *v13; // x21
  float v14; // [xsp+18h] [xbp-18h] BYREF
  float v15; // [xsp+1Ch] [xbp-14h] BYREF

  v15 = expected;
  v14 = actual;
  if ( (byte_4223F44 & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_Assert_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21198/*"not "*/, v7);
    byte_4223F44 = 1;
  }
  if ( UnityEngine_Mathf__Approximately(expected, actual, 0LL) )
  {
    v9 = System_Single__ToString(v8, (const MethodInfo *)&v15);
    v10 = System_String__Concat_43849904((System_String_o *)StringLiteral_21198/*"not "*/, v9, 0LL);
    v13 = System_Single__ToString(v11, (const MethodInfo *)&v14);
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__OnFailed(message, v10, v13, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__AreNotEqual(
        int32_t expected,
        int32_t actual,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *v8; // x0
  System_String_o *v9; // x20
  const MethodInfo *v10; // x3
  System_String_o *v11; // x21
  int32_t v12; // [xsp+8h] [xbp-28h] BYREF
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v12 = actual;
  v13 = expected;
  if ( (byte_4223F45 & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&actual);
    sub_B0D8A4(&StringLiteral_21198/*"not "*/, v7);
    byte_4223F45 = 1;
  }
  if ( expected == actual )
  {
    v8 = System_Int32__ToString((int32_t)&v13, 0LL);
    v9 = System_String__Concat_43849904((System_String_o *)StringLiteral_21198/*"not "*/, v8, 0LL);
    v11 = System_Int32__ToString((int32_t)&v12, 0LL);
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__OnFailed(message, v9, v11, v10);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_50744180(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *v8; // x0
  System_String_o *v9; // x20
  const MethodInfo *v10; // x3
  System_String_o *v11; // x21
  int64_t v12; // [xsp+0h] [xbp-30h] BYREF
  int64_t v13; // [xsp+8h] [xbp-28h] BYREF

  v12 = actual;
  v13 = expected;
  if ( (byte_4223F46 & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_Assert_TypeInfo, actual);
    sub_B0D8A4(&StringLiteral_21198/*"not "*/, v7);
    byte_4223F46 = 1;
  }
  if ( expected == actual )
  {
    v8 = System_Int64__ToString((int64_t)&v13, 0LL);
    v9 = System_String__Concat_43849904((System_String_o *)StringLiteral_21198/*"not "*/, v8, 0LL);
    v11 = System_Int64__ToString((int64_t)&v12, 0LL);
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__OnFailed(message, v9, v11, v10);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_50744400(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4223F47 & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_Assert_TypeInfo, actual);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4223F47 = 1;
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
    Fgo_Assertions_Assert__OnFailedAreNotEqual(expected, actual, message, v8);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_object_(
        Il2CppObject *expected,
        Il2CppObject *actual,
        System_String_o *message,
        const MethodInfo_170079C *method)
{
  __int64 v8; // x1
  __int64 v9; // x0
  __int64 v10; // x0
  UnityEngine_Object_o *v11; // x21
  UnityEngine_Object_o *v12; // x0
  const MethodInfo_170079C_RGCTXs *rgctx_data; // x8
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x1

  if ( (byte_42142C3 & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_Assert_TypeInfo, actual);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    byte_42142C3 = 1;
  }
  if ( expected == actual )
  {
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    rgctx_data = method->rgctx_data;
    v14 = expected;
    v15 = expected;
    goto LABEL_18;
  }
  v9 = sub_B0D964(expected, UnityEngine_Object_TypeInfo);
  if ( actual || !v9 )
  {
    v10 = sub_B0D964(actual, UnityEngine_Object_TypeInfo);
    if ( (expected || !v10)
      && (!sub_B0D964(expected, UnityEngine_Object_TypeInfo) || !sub_B0D964(actual, UnityEngine_Object_TypeInfo)) )
    {
      if ( !expected
        || (((__int64 (__fastcall *)(Il2CppObject *, Il2CppObject *, Il2CppMethodPointer))expected->klass->vtable[0].method)(
              expected,
              actual,
              expected->klass->vtable[1].methodPtr) & 1) == 0 )
      {
        return;
      }
      if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
      }
      rgctx_data = method->rgctx_data;
      v14 = expected;
      v15 = actual;
LABEL_18:
      ((void (__fastcall *)(Il2CppObject *, Il2CppObject *, System_String_o *))rgctx_data->_1_Fgo_Assertions_Assert_OnFailedAreNotEqual_T_->methodPointer)(
        v14,
        v15,
        message);
      return;
    }
  }
  v11 = (UnityEngine_Object_o *)sub_B0D964(actual, UnityEngine_Object_TypeInfo);
  if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  }
  v12 = (UnityEngine_Object_o *)sub_B0D964(expected, UnityEngine_Object_TypeInfo);
  Fgo_Assertions_Assert__AreNotEqual_50744400(v12, v11, message, 0LL);
}


void __fastcall Fgo_Assertions_Assert__IsAssetDataNotNull(
        Il2CppObject *assetData,
        System_String_o *assetName,
        const MethodInfo *method)
{
  if ( (byte_4223F4B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15758/*"[AssetData]\n{0}をロードできませんでした"*/, assetName);
    byte_4223F4B = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_15758/*"[AssetData]\n{0}をロードできませんでした"*/, (Il2CppObject *)assetName, 0LL);
}


void __fastcall Fgo_Assertions_Assert__IsFalse(bool condition, System_String_o *message, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  bool v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = condition;
  if ( (byte_4223F49 & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_B0D8A4(&StringLiteral_6601/*"False"*/, v5);
    byte_4223F49 = 1;
  }
  if ( condition )
  {
    v7 = System_Boolean__ToString((bool)&v8, 0LL);
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__OnFailed(message, (System_String_o *)StringLiteral_6601/*"False"*/, v7, v6);
  }
}


void __fastcall Fgo_Assertions_Assert__IsNotNull_object_(
        Il2CppObject *value,
        System_String_o *message,
        const MethodInfo_1700950 *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_c *v8; // x1
  UnityEngine_Object_o *v9; // x0

  if ( (byte_42142C4 & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_21237/*"null"*/, v6);
    sub_B0D8A4(&StringLiteral_21207/*"not null"*/, v7);
    byte_42142C4 = 1;
  }
  if ( !sub_B0D964(value, UnityEngine_Object_TypeInfo) )
  {
    if ( value )
      return;
    goto LABEL_8;
  }
  v8 = UnityEngine_Object_TypeInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object_TypeInfo;
  }
  v9 = (UnityEngine_Object_o *)sub_B0D964(value, v8);
  if ( UnityEngine_Object__op_Equality(v9, 0LL, 0LL) )
  {
LABEL_8:
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__OnFailed(
      message,
      (System_String_o *)StringLiteral_21207/*"not null"*/,
      (System_String_o *)StringLiteral_21237/*"null"*/,
      0LL);
  }
}


void __fastcall Fgo_Assertions_Assert__IsNull_object_(
        Il2CppObject *value,
        System_String_o *message,
        const MethodInfo_1700A60 *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_c *v8; // x1
  UnityEngine_Object_o *v9; // x0

  if ( (byte_42142C5 & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_21237/*"null"*/, v6);
    sub_B0D8A4(&StringLiteral_21207/*"not null"*/, v7);
    byte_42142C5 = 1;
  }
  if ( !sub_B0D964(value, UnityEngine_Object_TypeInfo) )
  {
    if ( !value )
      return;
    goto LABEL_10;
  }
  v8 = UnityEngine_Object_TypeInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object_TypeInfo;
  }
  v9 = (UnityEngine_Object_o *)sub_B0D964(value, v8);
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
LABEL_10:
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__OnFailed(
      message,
      (System_String_o *)StringLiteral_21237/*"null"*/,
      (System_String_o *)StringLiteral_21207/*"not null"*/,
      0LL);
  }
}


void __fastcall Fgo_Assertions_Assert__IsSerializeFieldNotNull_object_(
        Il2CppObject *value,
        System_String_o *fieldName,
        const MethodInfo_1700B70 *method)
{
  if ( (byte_42142C6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15802/*"[SerializeField]\n{0}の参照が切れています"*/, fieldName);
    byte_42142C6 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_15802/*"[SerializeField]\n{0}の参照が切れています"*/, (Il2CppObject *)fieldName, 0LL);
}


void __fastcall Fgo_Assertions_Assert__IsTrue(bool condition, System_String_o *message, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  System_String_o *v7; // x20
  bool v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = condition;
  if ( (byte_4223F4A & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_B0D8A4(&StringLiteral_14598/*"True"*/, v5);
    byte_4223F4A = 1;
  }
  if ( !condition )
  {
    v7 = System_Boolean__ToString((bool)&v8, 0LL);
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__OnFailed(message, (System_String_o *)StringLiteral_14598/*"True"*/, v7, v6);
  }
}


void __fastcall Fgo_Assertions_Assert__OnFailed(
        System_String_o *message,
        System_String_o *expected,
        System_String_o *actual,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *v9; // x19
  Fgo_Assertions_Assert_c *v10; // x8
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x9
  struct System_Action_string__o *onFailedAction; // x0

  if ( (byte_4223F3E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string__Invoke__, expected);
    sub_B0D8A4(&Fgo_Assertions_Assert_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_23619/*"{0}\n(expected={1}, actual={2})"*/, v8);
    byte_4223F3E = 1;
  }
  v9 = System_String__Format_43850968(
         (System_String_o *)StringLiteral_23619/*"{0}\n(expected={1}, actual={2})"*/,
         (Il2CppObject *)message,
         (Il2CppObject *)expected,
         (Il2CppObject *)actual,
         0LL);
  v10 = Fgo_Assertions_Assert_TypeInfo;
  if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v10 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v10->static_fields;
  if ( static_fields->enable )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = Fgo_Assertions_Assert_TypeInfo;
      static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
    }
    onFailedAction = static_fields->onFailedAction;
    if ( onFailedAction )
    {
      if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        onFailedAction = Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedAction;
        if ( !onFailedAction )
          sub_B0D97C(0LL);
      }
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)onFailedAction,
        (System_Uri_o *)v9,
        (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
    }
  }
}


void __fastcall Fgo_Assertions_Assert__OnFailedAreNotEqual(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  _BOOL8 v11; // x0
  System_String_o *v12; // x21
  System_String_o *name; // x0
  const MethodInfo *v14; // x3
  System_String_o *v15; // x20

  if ( (byte_4223F48 & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_Assert_TypeInfo, actual);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_21237/*"null"*/, v8);
    sub_B0D8A4(&StringLiteral_21207/*"not null"*/, v9);
    sub_B0D8A4(&StringLiteral_21198/*"not "*/, v10);
    byte_4223F48 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality(expected, 0LL, 0LL);
  if ( v11 )
  {
    v12 = (System_String_o *)StringLiteral_21207/*"not null"*/;
  }
  else
  {
    if ( !expected )
      goto LABEL_21;
    name = UnityEngine_Object__get_name(expected, 0LL);
    v12 = System_String__Concat_43849904((System_String_o *)StringLiteral_21198/*"not "*/, name, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality(actual, 0LL, 0LL);
  if ( !v11 )
  {
    if ( actual )
    {
      v15 = UnityEngine_Object__get_name(actual, 0LL);
      goto LABEL_17;
    }
LABEL_21:
    sub_B0D97C(v11);
  }
  v15 = (System_String_o *)StringLiteral_21237/*"null"*/;
LABEL_17:
  if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  }
  Fgo_Assertions_Assert__OnFailed(message, v12, v15, v14);
}


void __fastcall Fgo_Assertions_Assert__OnFailedAreNotEqual_object_(
        Il2CppObject *expected,
        Il2CppObject *actual,
        System_String_o *message,
        const MethodInfo_1700BC0 *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x0
  System_String_o *v11; // x21
  System_String_o *v12; // x20

  if ( (byte_42142C7 & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_Assert_TypeInfo, actual);
    sub_B0D8A4(&StringLiteral_21237/*"null"*/, v7);
    sub_B0D8A4(&StringLiteral_21207/*"not null"*/, v8);
    sub_B0D8A4(&StringLiteral_21198/*"not "*/, v9);
    byte_42142C7 = 1;
  }
  if ( !expected )
  {
    v11 = (System_String_o *)StringLiteral_21207/*"not null"*/;
    if ( actual )
      goto LABEL_5;
LABEL_7:
    v12 = (System_String_o *)StringLiteral_21237/*"null"*/;
    goto LABEL_8;
  }
  v10 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, System_String_o *, const MethodInfo_1700BC0 *))expected->klass->vtable[3].method)(
                             expected,
                             expected->klass->vtable[4].methodPtr,
                             message,
                             method);
  v11 = System_String__Concat_43849904((System_String_o *)StringLiteral_21198/*"not "*/, v10, 0LL);
  if ( !actual )
    goto LABEL_7;
LABEL_5:
  v12 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))actual->klass->vtable[3].method)(
                             actual,
                             actual->klass->vtable[4].methodPtr);
LABEL_8:
  if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  }
  Fgo_Assertions_Assert__OnFailed(message, v11, v12, 0LL);
}


void __fastcall Fgo_Assertions_Assert__OnFailedDataEntityExists(
        System_String_o *name,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_String_o *v9; // x19

  if ( (byte_4223F4C & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_Assert_TypeInfo, key);
    sub_B0D8A4(&StringLiteral_21237/*"null"*/, v5);
    sub_B0D8A4(&StringLiteral_21207/*"not null"*/, v6);
    sub_B0D8A4(&StringLiteral_15783/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/, v7);
    byte_4223F4C = 1;
  }
  v9 = System_String__Format_43845440(
         (System_String_o *)StringLiteral_15783/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/,
         (Il2CppObject *)name,
         (Il2CppObject *)key,
         0LL);
  if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  }
  Fgo_Assertions_Assert__OnFailed(
    v9,
    (System_String_o *)StringLiteral_21207/*"not null"*/,
    (System_String_o *)StringLiteral_21237/*"null"*/,
    v8);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v10; // x1
  __int64 v11; // x1
  Fgo_Assertions_Assert_c *v12; // x0
  Fgo_Assertions_Assert_c *v13; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_4223F3F & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_Assert_TypeInfo, force);
    sub_B0D8A4(&UnityEngine_Debug_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_23951/*"既に表明違反時の処理が設定されています"*/, v11);
    byte_4223F3F = 1;
  }
  if ( !force )
  {
    v12 = Fgo_Assertions_Assert_TypeInfo;
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
      v12 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( v12->static_fields->onFailedAction )
    {
      if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_23951/*"既に表明違反時の処理が設定されています"*/, 0LL);
    }
  }
  v13 = Fgo_Assertions_Assert_TypeInfo;
  if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v13 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v13->static_fields;
  static_fields->onFailedAction = action;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->onFailedAction,
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  Fgo_Assertions_AssertQueue_c *v13; // x8
  struct Fgo_Assertions_AssertQueue_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4223F53 & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_AssertQueue_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_string___ctor__, v3);
    sub_B0D8A4(&System_Collections_Generic_Queue_string__TypeInfo, v4);
    byte_4223F53 = 1;
  }
  v5 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B0D974(
                                                                       System_Collections_Generic_Queue_string__TypeInfo,
                                                                       v1,
                                                                       v2);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v5,
    (const MethodInfo_2B02AD0 *)Method_System_Collections_Generic_Queue_string___ctor__);
  static_fields = (BattleServantConfConponent_o *)Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B0D840(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
  v13 = Fgo_Assertions_AssertQueue_TypeInfo;
  Fgo_Assertions_AssertQueue_TypeInfo->static_fields->isReady = 1;
  v14 = v13->static_fields;
  v14->onFailedAction = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v14->onFailedAction, 0LL, v15, v16, v17, v18, v19, v20);
}


void __fastcall Fgo_Assertions_AssertQueue__Clear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Fgo_Assertions_AssertQueue_c *v3; // x0
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *queue; // x0

  if ( (byte_4223F52 & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_AssertQueue_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_string__Clear__, v2);
    byte_4223F52 = 1;
  }
  v3 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( (BYTE3(Fgo_Assertions_AssertQueue_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v3 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  queue = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v3->static_fields->queue;
  if ( !queue )
    sub_B0D97C(0LL);
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    queue,
    (const MethodInfo_2B02D64 *)Method_System_Collections_Generic_Queue_string__Clear__);
}


void __fastcall Fgo_Assertions_AssertQueue__Dequeue(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  Fgo_Assertions_AssertQueue_c *v4; // x0
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x9
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *queue; // x8
  System_String_o *ProxyData___Dequeue; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4223F51 & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_AssertQueue_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_string__Dequeue__, v2);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_string__get_Count__, v3);
    byte_4223F51 = 1;
  }
  v4 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( (BYTE3(Fgo_Assertions_AssertQueue_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v4 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  static_fields = v4->static_fields;
  queue = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)static_fields->queue;
  if ( !static_fields->queue )
    goto LABEL_16;
  if ( queue->fields._size )
  {
    if ( (WORD1(v4->vtable._0_Equals.methodPtr) & 0x400) == 0
      || v4->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v4),
          (queue = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)Fgo_Assertions_AssertQueue_TypeInfo->static_fields->queue) != 0LL) )
    {
      ProxyData___Dequeue = (System_String_o *)System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                                                 queue,
                                                 (const MethodInfo_2B032DC *)Method_System_Collections_Generic_Queue_string__Dequeue__);
      Fgo_Assertions_AssertQueue__OnFailed(ProxyData___Dequeue, v8);
      return;
    }
LABEL_16:
    sub_B0D97C(v4);
  }
  if ( (WORD1(v4->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    static_fields = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
  }
  static_fields->isReady = 1;
}


void __fastcall Fgo_Assertions_AssertQueue__Enqueue(System_String_o *message, const MethodInfo *method)
{
  __int64 v3; // x1
  Fgo_Assertions_AssertQueue_c *v4; // x0
  __int16 v5; // w8
  int v6; // w8
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x10
  bool *p_isReady; // x9

  if ( (byte_4223F50 & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_AssertQueue_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_string__Enqueue__, v3);
    byte_4223F50 = 1;
  }
  v4 = Fgo_Assertions_AssertQueue_TypeInfo;
  v5 = WORD1(Fgo_Assertions_AssertQueue_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v5 & 0x400) != 0 )
  {
    if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
      v4 = Fgo_Assertions_AssertQueue_TypeInfo;
      v5 = WORD1(Fgo_Assertions_AssertQueue_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v6 = v5 & 0x400;
  }
  else
  {
    v6 = 0;
  }
  static_fields = v4->static_fields;
  p_isReady = &static_fields->isReady;
  if ( static_fields->isReady )
  {
    if ( v6 )
    {
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        p_isReady = &Fgo_Assertions_AssertQueue_TypeInfo->static_fields->isReady;
      }
    }
    *p_isReady = 0;
    Fgo_Assertions_AssertQueue__OnFailed(message, method);
  }
  else
  {
    if ( v6 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
    }
    if ( !static_fields->queue )
      sub_B0D97C(0LL);
    System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
      (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)static_fields->queue,
      (Mono_Net_CFNetwork_GetProxyData_o *)message,
      (const MethodInfo_2B030C4 *)Method_System_Collections_Generic_Queue_string__Enqueue__);
  }
}


void __fastcall Fgo_Assertions_AssertQueue__OnFailed(System_String_o *message, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Fgo_Assertions_AssertQueue_c *v6; // x0
  struct System_Action_string__o *onFailedAction; // x8
  __int64 v8; // x0

  if ( (byte_4223F4E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string__Invoke__, method);
    sub_B0D8A4(&Fgo_Assertions_AssertQueue_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Debug_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_23967/*"表明違反時処理が設定されていません"*/, v5);
    byte_4223F4E = 1;
  }
  v6 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( (BYTE3(Fgo_Assertions_AssertQueue_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v6 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  onFailedAction = v6->static_fields->onFailedAction;
  if ( onFailedAction )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      onFailedAction = Fgo_Assertions_AssertQueue_TypeInfo->static_fields->onFailedAction;
      if ( !onFailedAction )
        sub_B0D97C(v8);
    }
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)onFailedAction,
      (System_Uri_o *)message,
      (const MethodInfo_246EA50 *)Method_System_Action_string__Invoke__);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_23967/*"表明違反時処理が設定されていません"*/, 0LL);
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

  if ( (byte_4223F4F & 1) == 0 )
  {
    sub_B0D8A4(&Fgo_Assertions_AssertQueue_TypeInfo, method);
    byte_4223F4F = 1;
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->onFailedAction,
    (System_Int32_array **)action,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}