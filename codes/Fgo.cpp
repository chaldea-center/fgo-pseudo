void __fastcall Fgo_Assertions_Assert___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0
  struct Fgo_Assertions_Assert_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42F7AC4 & 1) == 0 )
  {
    sub_B5D5C4(&Fgo_Assertions_Assert_TypeInfo, v1, (_DWORD)v2, v3);
    byte_42F7AC4 = 1;
  }
  Fgo_Assertions_Assert_TypeInfo->static_fields->enable = 1;
  static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
  static_fields->onFailedAction = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->onFailedAction, 0LL, v2, v3, v4, v5, v6, v7);
  v9 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v9->onFailedSendReport = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v9->onFailedSendReport, 0LL, v10, v11, v12, v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__AreApproximatelyEqual(
        float expected,
        float actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  bool v13; // w0

  if ( (byte_42F7ABA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_Fgo_Assertions_Assert_ComparisonMessage_float___,
      (_DWORD)gameObject,
      (_DWORD)filePath,
      *(_QWORD *)&line);
    sub_B5D5C4(&Fgo_Assertions_Assert_TypeInfo, v10, v11, v12);
    byte_42F7ABA = 1;
  }
  v13 = UnityEngine_Mathf__Approximately(expected, actual, 0LL);
  if ( !message && !v13 )
  {
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__ComparisonMessage_float_(
      expected,
      actual,
      1,
      (const MethodInfo_1AD0360 *)Method_Fgo_Assertions_Assert_ComparisonMessage_float___);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3

  if ( (byte_42F7ABB & 1) == 0 )
  {
    sub_B5D5C4(&Method_Fgo_Assertions_Assert_ComparisonMessage_int___, actual, (_DWORD)message, gameObject);
    sub_B5D5C4(&Fgo_Assertions_Assert_TypeInfo, v10, v11, v12);
    byte_42F7ABB = 1;
  }
  if ( expected != actual && !message )
  {
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__ComparisonMessage_int_(
      expected,
      actual,
      1,
      (const MethodInfo_1AD00E8 *)Method_Fgo_Assertions_Assert_ComparisonMessage_int___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_51362188(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3

  if ( (byte_42F7ABC & 1) == 0 )
  {
    sub_B5D5C4(&Method_Fgo_Assertions_Assert_ComparisonMessage_long___, actual, (_DWORD)message, gameObject);
    sub_B5D5C4(&Fgo_Assertions_Assert_TypeInfo, v10, v11, v12);
    byte_42F7ABC = 1;
  }
  if ( expected != actual && !message )
  {
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__ComparisonMessage_long_(
      expected,
      actual,
      1,
      (const MethodInfo_1AD01AC *)Method_Fgo_Assertions_Assert_ComparisonMessage_long___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_51362360(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  bool v16; // w0

  if ( (byte_42F7ABD & 1) == 0 )
  {
    sub_B5D5C4(&Method_Fgo_Assertions_Assert_ComparisonMessage_Object___, (_DWORD)actual, (_DWORD)message, gameObject);
    sub_B5D5C4(&Fgo_Assertions_Assert_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    byte_42F7ABD = 1;
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
      goto LABEL_24;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(expected, 0LL, 0LL) )
    {
LABEL_24:
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v16 = UnityEngine_Object__op_Inequality(expected, actual, 0LL);
      if ( !message && v16 )
      {
        if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
        }
        Fgo_Assertions_Assert__ComparisonMessage_Object_(
          expected,
          actual,
          1,
          (const MethodInfo_1AD0270 *)Method_Fgo_Assertions_Assert_ComparisonMessage_Object___);
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
        const MethodInfo_1ACFE58 *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x0
  __int64 v15; // x0
  long double v16; // q0
  char v17; // w0

  if ( (byte_42EA22C & 1) == 0 )
  {
    sub_B5D5C4(&Fgo_Assertions_Assert_TypeInfo, (_DWORD)actual, (_DWORD)message, gameObject);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42EA22C = 1;
  }
  if ( expected != actual )
  {
    v14 = sub_B5D684(expected, UnityEngine_Object_TypeInfo);
    if ( actual || !v14 )
    {
      v15 = sub_B5D684(actual, UnityEngine_Object_TypeInfo);
      if ( (expected || !v15)
        && (!sub_B5D684(expected, UnityEngine_Object_TypeInfo) || !sub_B5D684(actual, UnityEngine_Object_TypeInfo)) )
      {
        if ( expected )
        {
          v17 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppObject *, Il2CppMethodPointer))expected->klass->vtable[0].method)(
                  expected,
                  actual,
                  expected->klass->vtable[1].methodPtr);
          if ( message || (v17 & 1) != 0 )
            return;
        }
        else if ( message )
        {
          return;
        }
        if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
        {
          *(__n128 *)&v16 = j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
        }
        ((void (__fastcall *)(Il2CppObject *, Il2CppObject *, __int64, long double))method->rgctx_data->_1_Fgo_Assertions_Assert_ComparisonMessage_T_->methodPointer)(
          expected,
          actual,
          1LL,
          v16);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__AreNotApproximatelyEqual(
        float expected,
        float actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  bool v13; // w0

  if ( (byte_42F7ABE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_Fgo_Assertions_Assert_ComparisonMessage_float___,
      (_DWORD)gameObject,
      (_DWORD)filePath,
      *(_QWORD *)&line);
    sub_B5D5C4(&Fgo_Assertions_Assert_TypeInfo, v10, v11, v12);
    byte_42F7ABE = 1;
  }
  v13 = UnityEngine_Mathf__Approximately(expected, actual, 0LL);
  if ( !message && v13 )
  {
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__ComparisonMessage_float_(
      expected,
      actual,
      0,
      (const MethodInfo_1AD0360 *)Method_Fgo_Assertions_Assert_ComparisonMessage_float___);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3

  if ( (byte_42F7ABF & 1) == 0 )
  {
    sub_B5D5C4(&Method_Fgo_Assertions_Assert_ComparisonMessage_int___, actual, (_DWORD)message, gameObject);
    sub_B5D5C4(&Fgo_Assertions_Assert_TypeInfo, v10, v11, v12);
    byte_42F7ABF = 1;
  }
  if ( expected == actual && !message )
  {
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__ComparisonMessage_int_(
      expected,
      expected,
      0,
      (const MethodInfo_1AD00E8 *)Method_Fgo_Assertions_Assert_ComparisonMessage_int___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_51363056(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3

  if ( (byte_42F7AC0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_Fgo_Assertions_Assert_ComparisonMessage_long___, actual, (_DWORD)message, gameObject);
    sub_B5D5C4(&Fgo_Assertions_Assert_TypeInfo, v10, v11, v12);
    byte_42F7AC0 = 1;
  }
  if ( expected == actual && !message )
  {
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__ComparisonMessage_long_(
      expected,
      expected,
      0,
      (const MethodInfo_1AD01AC *)Method_Fgo_Assertions_Assert_ComparisonMessage_long___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_51363228(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  bool v16; // w0

  if ( (byte_42F7AC1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_Fgo_Assertions_Assert_ComparisonMessage_Object___, (_DWORD)actual, (_DWORD)message, gameObject);
    sub_B5D5C4(&Fgo_Assertions_Assert_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    byte_42F7AC1 = 1;
  }
  if ( !expected )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(actual, 0LL, 0LL) )
      goto LABEL_13;
  }
  if ( !actual )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(expected, 0LL, 0LL) )
    {
LABEL_13:
      if ( message )
        return;
      goto LABEL_20;
    }
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = UnityEngine_Object__op_Equality(expected, actual, 0LL);
  if ( !message && v16 )
  {
LABEL_20:
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    Fgo_Assertions_Assert__ComparisonMessage_Object_(
      expected,
      actual,
      0,
      (const MethodInfo_1AD0270 *)Method_Fgo_Assertions_Assert_ComparisonMessage_Object___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_object_(
        Il2CppObject *expected,
        Il2CppObject *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_1ACFF84 *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  const MethodInfo_1ACFF84_RGCTXs *rgctx_data; // x8
  Il2CppObject *v18; // x0
  Il2CppObject *v19; // x1
  char v20; // w0

  if ( (byte_42EA22D & 1) == 0 )
  {
    sub_B5D5C4(&Fgo_Assertions_Assert_TypeInfo, (_DWORD)actual, (_DWORD)message, gameObject);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42EA22D = 1;
  }
  if ( expected == actual )
  {
    if ( message )
      return;
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    }
    rgctx_data = method->rgctx_data;
    v18 = expected;
    v19 = expected;
    goto LABEL_25;
  }
  v14 = sub_B5D684(expected, UnityEngine_Object_TypeInfo);
  if ( actual || !v14 )
  {
    v15 = sub_B5D684(actual, UnityEngine_Object_TypeInfo);
    if ( expected || !v15 )
    {
      if ( sub_B5D684(expected, UnityEngine_Object_TypeInfo) )
      {
        v16 = sub_B5D684(actual, UnityEngine_Object_TypeInfo);
        if ( !expected || v16 )
          return;
      }
      else if ( !expected )
      {
        return;
      }
      v20 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppObject *, Il2CppMethodPointer))expected->klass->vtable[0].method)(
              expected,
              actual,
              expected->klass->vtable[1].methodPtr);
      if ( message || (v20 & 1) == 0 )
        return;
      if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
      }
      rgctx_data = method->rgctx_data;
      v18 = expected;
      v19 = actual;
LABEL_25:
      ((void (__fastcall *)(Il2CppObject *, Il2CppObject *, _QWORD))rgctx_data->_1_Fgo_Assertions_Assert_ComparisonMessage_T_->methodPointer)(
        v18,
        v19,
        0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Fgo_Assertions_Assert__ComparisonMessage_Object_(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        bool equal,
        const MethodInfo_1AD0270 *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x3
  Il2CppObject **v18; // x8

  if ( (byte_42EA230 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21446/*"null"*/, (_DWORD)actual, equal, method);
    sub_B5D5C4(&StringLiteral_18863/*"expectedEqual"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_18864/*"expectedNotEqual"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_23888/*"{0} {1} {2}"*/, v13, v14, v15);
    byte_42EA230 = 1;
  }
  if ( expected )
  {
    v16 = (Il2CppObject *)((__int64 (__fastcall *)(UnityEngine_Object_o *, void *, bool, const MethodInfo_1AD0270 *))expected->klass->vtable._3_ToString.method)(
                            expected,
                            expected->klass[1]._1.image,
                            equal,
                            method);
    if ( actual )
    {
LABEL_5:
      v17 = (Il2CppObject *)((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))actual->klass->vtable._3_ToString.method)(
                              actual,
                              actual->klass[1]._1.image);
      goto LABEL_8;
    }
  }
  else
  {
    v16 = (Il2CppObject *)StringLiteral_21446/*"null"*/;
    if ( actual )
      goto LABEL_5;
  }
  v17 = (Il2CppObject *)StringLiteral_21446/*"null"*/;
LABEL_8:
  if ( equal )
    v18 = (Il2CppObject **)&StringLiteral_18864/*"expectedNotEqual"*/;
  else
    v18 = (Il2CppObject **)&StringLiteral_18863/*"expectedEqual"*/;
  return System_String__Format_44578852((System_String_o *)StringLiteral_23888/*"{0} {1} {2}"*/, v16, *v18, v17, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__ComparisonMessage_float_(
        float expected,
        float actual,
        bool equal,
        const MethodInfo_1AD0360 *method)
{
  int v4; // w2
  __int64 v5; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  Il2CppObject *v16; // x20
  float v17; // s0
  Il2CppObject *v18; // x0
  Il2CppObject **v19; // x9
  float v21; // [xsp+8h] [xbp-18h] BYREF
  float v22; // [xsp+Ch] [xbp-14h] BYREF

  v21 = actual;
  v22 = expected;
  if ( (byte_42EA231 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21446/*"null"*/, (_DWORD)method, v4, v5);
    sub_B5D5C4(&StringLiteral_18863/*"expectedEqual"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_18864/*"expectedNotEqual"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_23888/*"{0} {1} {2}"*/, v13, v14, v15);
    byte_42EA231 = 1;
  }
  v16 = (Il2CppObject *)System_Single__ToString(expected, (const MethodInfo *)&v22);
  v18 = (Il2CppObject *)System_Single__ToString(v17, (const MethodInfo *)&v21);
  v19 = (Il2CppObject **)&StringLiteral_18864/*"expectedNotEqual"*/;
  if ( !equal )
    v19 = (Il2CppObject **)&StringLiteral_18863/*"expectedEqual"*/;
  return System_String__Format_44578852((System_String_o *)StringLiteral_23888/*"{0} {1} {2}"*/, v16, *v19, v18, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__ComparisonMessage_int_(
        int32_t expected,
        int32_t actual,
        bool equal,
        const MethodInfo_1AD00E8 *method)
{
  int v5; // w1
  char v6; // w2
  __int64 v7; // x3
  int v8; // w1
  char v9; // w2
  __int64 v10; // x3
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  Il2CppObject *v14; // x20
  Il2CppObject *v15; // x0
  Il2CppObject **v16; // x9
  int32_t v18; // [xsp+8h] [xbp-18h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-14h] BYREF

  v18 = actual;
  v19 = expected;
  if ( (byte_42EA22E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21446/*"null"*/, actual, equal, method);
    sub_B5D5C4(&StringLiteral_18863/*"expectedEqual"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_18864/*"expectedNotEqual"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_23888/*"{0} {1} {2}"*/, v11, v12, v13);
    byte_42EA22E = 1;
  }
  v14 = (Il2CppObject *)System_Int32__ToString((int32_t)&v19, 0LL);
  v15 = (Il2CppObject *)System_Int32__ToString((int32_t)&v18, 0LL);
  v16 = (Il2CppObject **)&StringLiteral_18864/*"expectedNotEqual"*/;
  if ( !equal )
    v16 = (Il2CppObject **)&StringLiteral_18863/*"expectedEqual"*/;
  return System_String__Format_44578852((System_String_o *)StringLiteral_23888/*"{0} {1} {2}"*/, v14, *v16, v15, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__ComparisonMessage_long_(
        int64_t expected,
        int64_t actual,
        bool equal,
        const MethodInfo_1AD01AC *method)
{
  int v5; // w1
  char v6; // w2
  __int64 v7; // x3
  int v8; // w1
  char v9; // w2
  __int64 v10; // x3
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  Il2CppObject *v14; // x20
  Il2CppObject *v15; // x0
  Il2CppObject **v16; // x9
  int64_t v18; // [xsp+0h] [xbp-20h] BYREF
  int64_t v19; // [xsp+8h] [xbp-18h] BYREF

  v18 = actual;
  v19 = expected;
  if ( (byte_42EA22F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21446/*"null"*/, actual, equal, method);
    sub_B5D5C4(&StringLiteral_18863/*"expectedEqual"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_18864/*"expectedNotEqual"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_23888/*"{0} {1} {2}"*/, v11, v12, v13);
    byte_42EA22F = 1;
  }
  v14 = (Il2CppObject *)System_Int64__ToString((int64_t)&v19, 0LL);
  v15 = (Il2CppObject *)System_Int64__ToString((int64_t)&v18, 0LL);
  v16 = (Il2CppObject **)&StringLiteral_18864/*"expectedNotEqual"*/;
  if ( !equal )
    v16 = (Il2CppObject **)&StringLiteral_18863/*"expectedEqual"*/;
  return System_String__Format_44578852((System_String_o *)StringLiteral_23888/*"{0} {1} {2}"*/, v14, *v16, v15, 0LL);
}


void __fastcall Fgo_Assertions_Assert__HasContainKey_object__object_(
        System_Collections_Generic_Dictionary_T1__T2__o *dic,
        Il2CppObject *key,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_1AD0424 *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x0

  if ( (byte_42EA232 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_24144/*"ディクショナリが null です"*/, (_DWORD)key, (_DWORD)message, gameObject);
    sub_B5D5C4(&StringLiteral_20380/*"key({0}) の値がディクショナリに含まれていません"*/, v11, v12, v13);
    byte_42EA232 = 1;
  }
  if ( dic )
  {
    v14 = ((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_T1__T2__o *, Il2CppObject *))method->rgctx_data->_0_System_Collections_Generic_Dictionary_T1__T2__ContainsKey->methodPointer)(
            dic,
            key);
    if ( !message && (v14 & 1) == 0 )
    {
      if ( !key )
        sub_B5D69C(v14, v15);
      v16 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))key->klass->vtable[3].method)(
                              key,
                              key->klass->vtable[4].methodPtr);
      System_String__Format((System_String_o *)StringLiteral_20380/*"key({0}) の値がディクショナリに含まれていません"*/, v16, 0LL);
    }
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
  if ( (byte_42F7AC2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15901/*"[AssetData]\n{0}をロードできませんでした"*/, (_DWORD)assetName, (_DWORD)gameObject, filePath);
    byte_42F7AC2 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_15901/*"[AssetData]\n{0}をロードできませんでした"*/, (Il2CppObject *)assetName, 0LL);
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


void __fastcall Fgo_Assertions_Assert__IsInRange_object_(
        System_Object_array *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_1AD063C *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  Il2CppObject *v19; // x19
  Il2CppObject *v20; // x0
  Il2CppObject *v21; // x0
  int v22; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v23; // [xsp+8h] [xbp-28h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EA234 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, index, (_DWORD)message, gameObject);
    sub_B5D5C4(&StringLiteral_20036/*"index({0}) の値が負です"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_20037/*"index({0}) の値が配列の要素数({1})を超えています"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_24217/*"配列が null です"*/, v16, v17, v18);
    byte_42EA234 = 1;
  }
  if ( array )
  {
    if ( (index & 0x80000000) != 0 )
    {
      if ( !message )
      {
        v24 = index;
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
        System_String__Format((System_String_o *)StringLiteral_20036/*"index({0}) の値が負です"*/, v21, 0LL);
      }
    }
    else if ( !message && (signed int)array->max_length <= index )
    {
      v23 = index;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
      v22 = *(_QWORD *)&array->max_length;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
      System_String__Format_44573324((System_String_o *)StringLiteral_20037/*"index({0}) の値が配列の要素数({1})を超えています"*/, v19, v20, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__IsInRange_object__28116208(
        System_Collections_Generic_List_T__o *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_1AD04F0 *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int32_t v20; // w0
  __int64 v21; // x0
  const MethodInfo_1AD04F0_RGCTXs *rgctx_data; // x8
  Il2CppObject *v23; // x19
  Il2CppObject *v24; // x0
  Il2CppObject *v25; // x0
  int v26; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v27; // [xsp+18h] [xbp-28h] BYREF
  int32_t v28; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42EA233 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, index, (_DWORD)message, gameObject);
    sub_B5D5C4(&StringLiteral_20036/*"index({0}) の値が負です"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_20037/*"index({0}) の値が配列の要素数({1})を超えています"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_24217/*"配列が null です"*/, v17, v18, v19);
    byte_42EA233 = 1;
  }
  if ( array )
  {
    if ( (index & 0x80000000) != 0 )
    {
      if ( !message )
      {
        v28 = index;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
        System_String__Format((System_String_o *)StringLiteral_20036/*"index({0}) の値が負です"*/, v25, 0LL);
      }
    }
    else
    {
      v20 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, MethodInfo *, System_String_o *, UnityEngine_GameObject_o *, System_String_o *, _QWORD))method->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)(
              array,
              method->rgctx_data->_0_System_Collections_Generic_List_T__get_Count,
              message,
              gameObject,
              filePath,
              *(_QWORD *)&line);
      if ( !message && v20 <= index )
      {
        v27 = index;
        v21 = j_il2cpp_value_box_0(int_TypeInfo, &v27);
        rgctx_data = method->rgctx_data;
        v23 = (Il2CppObject *)v21;
        v26 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)(array);
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
        System_String__Format_44573324((System_String_o *)StringLiteral_20037/*"index({0}) の値が配列の要素数({1})を超えています"*/, v23, v24, 0LL);
      }
    }
  }
}


void __fastcall Fgo_Assertions_Assert__IsNotNull_object_(
        Il2CppObject *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_1AD0758 *method)
{
  UnityEngine_Object_c *v7; // x1
  UnityEngine_Object_o *v8; // x0

  if ( (byte_42EA235 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)message, (_DWORD)gameObject, filePath);
    byte_42EA235 = 1;
  }
  if ( sub_B5D684(value, UnityEngine_Object_TypeInfo) )
  {
    v7 = UnityEngine_Object_TypeInfo;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = UnityEngine_Object_TypeInfo;
    }
    v8 = (UnityEngine_Object_o *)sub_B5D684(value, v7);
    UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
  }
}


void __fastcall Fgo_Assertions_Assert__IsNull_object_(
        Il2CppObject *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_1AD07E8 *method)
{
  UnityEngine_Object_c *v7; // x1
  UnityEngine_Object_o *v8; // x0

  if ( (byte_42EA236 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)message, (_DWORD)gameObject, filePath);
    byte_42EA236 = 1;
  }
  if ( sub_B5D684(value, UnityEngine_Object_TypeInfo) )
  {
    v7 = UnityEngine_Object_TypeInfo;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = UnityEngine_Object_TypeInfo;
    }
    v8 = (UnityEngine_Object_o *)sub_B5D684(value, v7);
    UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  }
}


void __fastcall Fgo_Assertions_Assert__IsSerializeFieldNotNull_object_(
        Il2CppObject *value,
        System_String_o *fieldName,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_1AD0878 *method)
{
  if ( (byte_42EA237 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15945/*"[SerializeField]\n{0}の参照が切れています"*/, (_DWORD)fieldName, (_DWORD)gameObject, filePath);
    byte_42EA237 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_15945/*"[SerializeField]\n{0}の参照が切れています"*/, (Il2CppObject *)fieldName, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_String_o *v13; // x19
  Fgo_Assertions_Assert_c *v14; // x8
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x9
  struct System_Action_string__o *onFailedAction; // x0
  __int64 v17; // x1

  if ( (byte_42F7AB6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__Invoke__, (_DWORD)expected, (_DWORD)actual, method);
    sub_B5D5C4(&Fgo_Assertions_Assert_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_23852/*"{0}\n(expected={1}, actual={2})"*/, v10, v11, v12);
    byte_42F7AB6 = 1;
  }
  v13 = System_String__Format_44578852(
          (System_String_o *)StringLiteral_23852/*"{0}\n(expected={1}, actual={2})"*/,
          (Il2CppObject *)message,
          (Il2CppObject *)expected,
          (Il2CppObject *)actual,
          0LL);
  v14 = Fgo_Assertions_Assert_TypeInfo;
  if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v14 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v14->static_fields;
  if ( static_fields->enable )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = Fgo_Assertions_Assert_TypeInfo;
      static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
    }
    onFailedAction = static_fields->onFailedAction;
    if ( onFailedAction )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        onFailedAction = Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedAction;
        if ( !onFailedAction )
          sub_B5D69C(0LL, v17);
      }
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)onFailedAction,
        (System_Uri_o *)v13,
        (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
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
  if ( (byte_42F7AC3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15926/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/, (_DWORD)key, (_DWORD)gameObject, filePath);
    byte_42F7AC3 = 1;
  }
  System_String__Format_44573324((System_String_o *)StringLiteral_15926/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/, (Il2CppObject *)name, (Il2CppObject *)key, 0LL);
}


void __fastcall Fgo_Assertions_Assert__OnFailed_51360592(
        System_String_o *caption,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  System_String_o *v9; // x21
  Il2CppObject *v10; // x19
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_String_o *v35; // x23
  Il2CppObject *FileName; // x23
  Il2CppObject *v37; // x0
  Il2CppObject *v38; // x20
  System_String_o *name; // x0
  System_String_o *v40; // x21
  Fgo_Assertions_Assert_c *v41; // x8
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x9
  int32_t v43; // [xsp+Ch] [xbp-34h] BYREF

  v9 = message;
  v10 = (Il2CppObject *)caption;
  if ( (byte_42F7AB7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__Invoke__, (_DWORD)message, (_DWORD)gameObject, filePath);
    sub_B5D5C4(&Method_System_Action_string__string__string__Invoke__, v11, v12, v13);
    sub_B5D5C4(&Fgo_Assertions_Assert_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&int_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_IO_Path_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_23893/*"{0}({1})"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_42/*"\nGameObject:"*/, v29, v30, v31);
    caption = (System_String_o *)sub_B5D5C4(&StringLiteral_23853/*"{0}\n{1}\n{2}"*/, v32, v33, v34);
    byte_42F7AB7 = 1;
  }
  if ( !filePath )
    goto LABEL_34;
  v35 = System_String__Replace(filePath, 0x5Cu, 0x2Fu, 0LL);
  if ( (BYTE3(System_IO_Path_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_IO_Path_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  }
  FileName = (Il2CppObject *)System_IO_Path__GetFileName(v35, 0LL);
  v43 = line;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
  v38 = (Il2CppObject *)System_String__Format_44573324((System_String_o *)StringLiteral_23893/*"{0}({1})"*/, FileName, v37, 0LL);
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
    v9 = System_String__Concat_44580072(v9, (System_String_o *)StringLiteral_42/*"\nGameObject:"*/, name, 0LL);
  }
  v40 = System_String__Format_44578852((System_String_o *)StringLiteral_23853/*"{0}\n{1}\n{2}"*/, v10, (Il2CppObject *)v9, v38, 0LL);
  v41 = Fgo_Assertions_Assert_TypeInfo;
  if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v41 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v41->static_fields;
  if ( static_fields->enable )
  {
    if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = Fgo_Assertions_Assert_TypeInfo;
      static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
    }
    caption = (System_String_o *)static_fields->onFailedAction;
    if ( caption )
    {
      if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        caption = (System_String_o *)Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedAction;
        if ( !caption )
          goto LABEL_34;
      }
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)caption,
        (System_Uri_o *)v40,
        (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
      v41 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = Fgo_Assertions_Assert_TypeInfo;
    }
    caption = (System_String_o *)v41->static_fields->onFailedSendReport;
    if ( caption )
    {
      if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) == 0
        || v41->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v41),
            (caption = (System_String_o *)Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedSendReport) != 0LL) )
      {
        System_Action_string__string__string___Invoke(
          (System_Action_string__string__string__o *)caption,
          (System_String_o *)v10,
          v40,
          (System_String_o *)v38,
          (const MethodInfo_259BFB4 *)Method_System_Action_string__string__string__Invoke__);
        return;
      }
LABEL_34:
      sub_B5D69C(caption, message);
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
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  char v13; // w1
  int v14; // w2
  __int64 v15; // x3
  Fgo_Assertions_Assert_c *v16; // x0
  Fgo_Assertions_Assert_c *v17; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_42F7AB8 & 1) == 0 )
  {
    sub_B5D5C4(&Fgo_Assertions_Assert_TypeInfo, force, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Debug_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_24191/*"既に表明違反時の処理が設定されています"*/, v13, v14, v15);
    byte_42F7AB8 = 1;
  }
  if ( !force )
  {
    v16 = Fgo_Assertions_Assert_TypeInfo;
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
      v16 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( v16->static_fields->onFailedAction )
    {
      if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_24191/*"既に表明違反時の処理が設定されています"*/, 0LL);
    }
  }
  v17 = Fgo_Assertions_Assert_TypeInfo;
  if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v17 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v17->static_fields;
  static_fields->onFailedAction = action;
  sub_B5D560(
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
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  char v13; // w1
  int v14; // w2
  __int64 v15; // x3
  Fgo_Assertions_Assert_c *v16; // x0
  Fgo_Assertions_Assert_c *v17; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_42F7AB9 & 1) == 0 )
  {
    sub_B5D5C4(&Fgo_Assertions_Assert_TypeInfo, force, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Debug_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_24191/*"既に表明違反時の処理が設定されています"*/, v13, v14, v15);
    byte_42F7AB9 = 1;
  }
  if ( !force )
  {
    v16 = Fgo_Assertions_Assert_TypeInfo;
    if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
      v16 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( v16->static_fields->onFailedSendReport )
    {
      if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_24191/*"既に表明違反時の処理が設定されています"*/, 0LL);
    }
  }
  v17 = Fgo_Assertions_Assert_TypeInfo;
  if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v17 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v17->static_fields;
  static_fields->onFailedSendReport = action;
  sub_B5D560(
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v10; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  Fgo_Assertions_AssertQueue_c *v18; // x8
  struct Fgo_Assertions_AssertQueue_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42F7ACA & 1) == 0 )
  {
    sub_B5D5C4(&Fgo_Assertions_AssertQueue_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_string___ctor__, v4, v5, v6);
    sub_B5D5C4(&System_Collections_Generic_Queue_string__TypeInfo, v7, v8, v9);
    byte_42F7ACA = 1;
  }
  v10 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B5D694(System_Collections_Generic_Queue_string__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v10,
    (const MethodInfo_2B9DEAC *)Method_System_Collections_Generic_Queue_string___ctor__);
  static_fields = (BattleServantConfConponent_o *)Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B5D560(static_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
  v18 = Fgo_Assertions_AssertQueue_TypeInfo;
  Fgo_Assertions_AssertQueue_TypeInfo->static_fields->isReady = 1;
  v19 = v18->static_fields;
  v19->onFailedAction = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v19->onFailedAction, 0LL, v20, v21, v22, v23, v24, v25);
}


void __fastcall Fgo_Assertions_AssertQueue__Clear(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  Fgo_Assertions_AssertQueue_c *v7; // x0
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *queue; // x0

  if ( (byte_42F7AC9 & 1) == 0 )
  {
    sub_B5D5C4(&Fgo_Assertions_AssertQueue_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_string__Clear__, v4, v5, v6);
    byte_42F7AC9 = 1;
  }
  v7 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( (BYTE3(Fgo_Assertions_AssertQueue_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v7 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  queue = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v7->static_fields->queue;
  if ( !queue )
    sub_B5D69C(0LL, v1);
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    queue,
    (const MethodInfo_2B9E140 *)Method_System_Collections_Generic_Queue_string__Clear__);
}


void __fastcall Fgo_Assertions_AssertQueue__Dequeue(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  Fgo_Assertions_AssertQueue_c *v10; // x0
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x9
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *queue; // x8
  System_String_o *ProxyData___Dequeue; // x0
  const MethodInfo *v14; // x1

  if ( (byte_42F7AC8 & 1) == 0 )
  {
    sub_B5D5C4(&Fgo_Assertions_AssertQueue_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_string__Dequeue__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_string__get_Count__, v7, v8, v9);
    byte_42F7AC8 = 1;
  }
  v10 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( (BYTE3(Fgo_Assertions_AssertQueue_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v10 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  static_fields = v10->static_fields;
  queue = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)static_fields->queue;
  if ( !static_fields->queue )
    goto LABEL_16;
  if ( queue->fields._size )
  {
    if ( (WORD1(v10->vtable._0_Equals.methodPtr) & 0x400) == 0
      || v10->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v10),
          (queue = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)Fgo_Assertions_AssertQueue_TypeInfo->static_fields->queue) != 0LL) )
    {
      ProxyData___Dequeue = (System_String_o *)System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                                                 queue,
                                                 (const MethodInfo_2B9E6B8 *)Method_System_Collections_Generic_Queue_string__Dequeue__);
      Fgo_Assertions_AssertQueue__OnFailed(ProxyData___Dequeue, v14);
      return;
    }
LABEL_16:
    sub_B5D69C(v10, v1);
  }
  if ( (WORD1(v10->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    static_fields = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
  }
  static_fields->isReady = 1;
}


void __fastcall Fgo_Assertions_AssertQueue__Enqueue(System_String_o *message, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Fgo_Assertions_AssertQueue_c *v8; // x0
  __int16 v9; // w8
  int v10; // w8
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x10
  bool *p_isReady; // x9

  if ( (byte_42F7AC7 & 1) == 0 )
  {
    sub_B5D5C4(&Fgo_Assertions_AssertQueue_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_string__Enqueue__, v5, v6, v7);
    byte_42F7AC7 = 1;
  }
  v8 = Fgo_Assertions_AssertQueue_TypeInfo;
  v9 = WORD1(Fgo_Assertions_AssertQueue_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v9 & 0x400) != 0 )
  {
    if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
      v8 = Fgo_Assertions_AssertQueue_TypeInfo;
      v9 = WORD1(Fgo_Assertions_AssertQueue_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v10 = v9 & 0x400;
  }
  else
  {
    v10 = 0;
  }
  static_fields = v8->static_fields;
  p_isReady = &static_fields->isReady;
  if ( static_fields->isReady )
  {
    if ( v10 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        p_isReady = &Fgo_Assertions_AssertQueue_TypeInfo->static_fields->isReady;
      }
    }
    *p_isReady = 0;
    Fgo_Assertions_AssertQueue__OnFailed(message, method);
  }
  else
  {
    if ( v10 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
    }
    if ( !static_fields->queue )
      sub_B5D69C(0LL, method);
    System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
      (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)static_fields->queue,
      (Mono_Net_CFNetwork_GetProxyData_o *)message,
      (const MethodInfo_2B9E4A0 *)Method_System_Collections_Generic_Queue_string__Enqueue__);
  }
}


void __fastcall Fgo_Assertions_AssertQueue__OnFailed(System_String_o *message, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  Fgo_Assertions_AssertQueue_c *v14; // x0
  struct System_Action_string__o *onFailedAction; // x8
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_42F7AC5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Fgo_Assertions_AssertQueue_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Debug_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_24207/*"表明違反時処理が設定されていません"*/, v11, v12, v13);
    byte_42F7AC5 = 1;
  }
  v14 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( (BYTE3(Fgo_Assertions_AssertQueue_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v14 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  onFailedAction = v14->static_fields->onFailedAction;
  if ( onFailedAction )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      onFailedAction = Fgo_Assertions_AssertQueue_TypeInfo->static_fields->onFailedAction;
      if ( !onFailedAction )
        sub_B5D69C(v16, v17);
    }
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)onFailedAction,
      (System_Uri_o *)message,
      (const MethodInfo_258B334 *)Method_System_Action_string__Invoke__);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_24207/*"表明違反時処理が設定されていません"*/, 0LL);
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

  if ( (byte_42F7AC6 & 1) == 0 )
  {
    sub_B5D5C4(&Fgo_Assertions_AssertQueue_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42F7AC6 = 1;
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&static_fields->onFailedAction,
    (System_Int32_array **)action,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}