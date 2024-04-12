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

  if ( (byte_42BF114 & 1) == 0 )
  {
    sub_B52984(&Fgo_Assertions_Assert_TypeInfo);
    byte_42BF114 = 1;
  }
  Fgo_Assertions_Assert_TypeInfo->static_fields->enable = 1;
  static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
  static_fields->onFailedAction = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&static_fields->onFailedAction, 0LL, v1, v2, v3, v4, v5, v6);
  v8 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v8->onFailedSendReport = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&v8->onFailedSendReport, 0LL, v9, v10, v11, v12, v13, v14);
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
  bool v10; // w0

  if ( (byte_42BF10A & 1) == 0 )
  {
    sub_B52984(&Method_Fgo_Assertions_Assert_ComparisonMessage_float___);
    sub_B52984(&Fgo_Assertions_Assert_TypeInfo);
    byte_42BF10A = 1;
  }
  v10 = UnityEngine_Mathf__Approximately(expected, actual, 0LL);
  if ( !message && !v10 )
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
      (const MethodInfo_1A3B298 *)Method_Fgo_Assertions_Assert_ComparisonMessage_float___);
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
  if ( (byte_42BF10B & 1) == 0 )
  {
    sub_B52984(&Method_Fgo_Assertions_Assert_ComparisonMessage_int___);
    sub_B52984(&Fgo_Assertions_Assert_TypeInfo);
    byte_42BF10B = 1;
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
      (const MethodInfo_1A3B020 *)Method_Fgo_Assertions_Assert_ComparisonMessage_int___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_51201336(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_42BF10C & 1) == 0 )
  {
    sub_B52984(&Method_Fgo_Assertions_Assert_ComparisonMessage_long___);
    sub_B52984(&Fgo_Assertions_Assert_TypeInfo);
    byte_42BF10C = 1;
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
      (const MethodInfo_1A3B0E4 *)Method_Fgo_Assertions_Assert_ComparisonMessage_long___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_51201508(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  bool v10; // w0

  if ( (byte_42BF10D & 1) == 0 )
  {
    sub_B52984(&Method_Fgo_Assertions_Assert_ComparisonMessage_Object___);
    sub_B52984(&Fgo_Assertions_Assert_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42BF10D = 1;
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
      v10 = UnityEngine_Object__op_Inequality(expected, actual, 0LL);
      if ( !message && v10 )
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
          (const MethodInfo_1A3B1A8 *)Method_Fgo_Assertions_Assert_ComparisonMessage_Object___);
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
        const MethodInfo_1A3AD90 *method)
{
  __int64 v11; // x0
  __int64 v12; // x0
  long double v13; // q0
  char v14; // w0

  if ( (byte_42B1572 & 1) == 0 )
  {
    sub_B52984(&Fgo_Assertions_Assert_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1572 = 1;
  }
  if ( expected != actual )
  {
    v11 = sub_B52A44(expected, UnityEngine_Object_TypeInfo);
    if ( actual || !v11 )
    {
      v12 = sub_B52A44(actual, UnityEngine_Object_TypeInfo);
      if ( (expected || !v12)
        && (!sub_B52A44(expected, UnityEngine_Object_TypeInfo) || !sub_B52A44(actual, UnityEngine_Object_TypeInfo)) )
      {
        if ( expected )
        {
          v14 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppObject *, Il2CppMethodPointer))expected->klass->vtable[0].method)(
                  expected,
                  actual,
                  expected->klass->vtable[1].methodPtr);
          if ( message || (v14 & 1) != 0 )
            return;
        }
        else if ( message )
        {
          return;
        }
        if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
        {
          *(__n128 *)&v13 = j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
        }
        ((void (__fastcall *)(Il2CppObject *, Il2CppObject *, __int64, long double))method->rgctx_data->_1_Fgo_Assertions_Assert_ComparisonMessage_T_->methodPointer)(
          expected,
          actual,
          1LL,
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
  bool v10; // w0

  if ( (byte_42BF10E & 1) == 0 )
  {
    sub_B52984(&Method_Fgo_Assertions_Assert_ComparisonMessage_float___);
    sub_B52984(&Fgo_Assertions_Assert_TypeInfo);
    byte_42BF10E = 1;
  }
  v10 = UnityEngine_Mathf__Approximately(expected, actual, 0LL);
  if ( !message && v10 )
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
      (const MethodInfo_1A3B298 *)Method_Fgo_Assertions_Assert_ComparisonMessage_float___);
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
  if ( (byte_42BF10F & 1) == 0 )
  {
    sub_B52984(&Method_Fgo_Assertions_Assert_ComparisonMessage_int___);
    sub_B52984(&Fgo_Assertions_Assert_TypeInfo);
    byte_42BF10F = 1;
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
      (const MethodInfo_1A3B020 *)Method_Fgo_Assertions_Assert_ComparisonMessage_int___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_51202204(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_42BF110 & 1) == 0 )
  {
    sub_B52984(&Method_Fgo_Assertions_Assert_ComparisonMessage_long___);
    sub_B52984(&Fgo_Assertions_Assert_TypeInfo);
    byte_42BF110 = 1;
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
      (const MethodInfo_1A3B0E4 *)Method_Fgo_Assertions_Assert_ComparisonMessage_long___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_51202376(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  bool v10; // w0

  if ( (byte_42BF111 & 1) == 0 )
  {
    sub_B52984(&Method_Fgo_Assertions_Assert_ComparisonMessage_Object___);
    sub_B52984(&Fgo_Assertions_Assert_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42BF111 = 1;
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
  v10 = UnityEngine_Object__op_Equality(expected, actual, 0LL);
  if ( !message && v10 )
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
      (const MethodInfo_1A3B1A8 *)Method_Fgo_Assertions_Assert_ComparisonMessage_Object___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_object_(
        Il2CppObject *expected,
        Il2CppObject *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_1A3AEBC *method)
{
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  const MethodInfo_1A3AEBC_RGCTXs *rgctx_data; // x8
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x1
  char v17; // w0

  if ( (byte_42B1573 & 1) == 0 )
  {
    sub_B52984(&Fgo_Assertions_Assert_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1573 = 1;
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
    v15 = expected;
    v16 = expected;
    goto LABEL_25;
  }
  v11 = sub_B52A44(expected, UnityEngine_Object_TypeInfo);
  if ( actual || !v11 )
  {
    v12 = sub_B52A44(actual, UnityEngine_Object_TypeInfo);
    if ( expected || !v12 )
    {
      if ( sub_B52A44(expected, UnityEngine_Object_TypeInfo) )
      {
        v13 = sub_B52A44(actual, UnityEngine_Object_TypeInfo);
        if ( !expected || v13 )
          return;
      }
      else if ( !expected )
      {
        return;
      }
      v17 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppObject *, Il2CppMethodPointer))expected->klass->vtable[0].method)(
              expected,
              actual,
              expected->klass->vtable[1].methodPtr);
      if ( message || (v17 & 1) == 0 )
        return;
      if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
      }
      rgctx_data = method->rgctx_data;
      v15 = expected;
      v16 = actual;
LABEL_25:
      ((void (__fastcall *)(Il2CppObject *, Il2CppObject *, _QWORD))rgctx_data->_1_Fgo_Assertions_Assert_ComparisonMessage_T_->methodPointer)(
        v15,
        v16,
        0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Fgo_Assertions_Assert__ComparisonMessage_Object_(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        bool equal,
        const MethodInfo_1A3B1A8 *method)
{
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x3
  Il2CppObject **v9; // x8

  if ( (byte_42B1576 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21338/*"null"*/);
    sub_B52984(&StringLiteral_18768/*"expectedEqual"*/);
    sub_B52984(&StringLiteral_18769/*"expectedNotEqual"*/);
    sub_B52984(&StringLiteral_23770/*"{0} {1} {2}"*/);
    byte_42B1576 = 1;
  }
  if ( expected )
  {
    v7 = (Il2CppObject *)((__int64 (__fastcall *)(UnityEngine_Object_o *, void *, bool, const MethodInfo_1A3B1A8 *))expected->klass->vtable._3_ToString.method)(
                           expected,
                           expected->klass[1]._1.image,
                           equal,
                           method);
    if ( actual )
    {
LABEL_5:
      v8 = (Il2CppObject *)((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))actual->klass->vtable._3_ToString.method)(
                             actual,
                             actual->klass[1]._1.image);
      goto LABEL_8;
    }
  }
  else
  {
    v7 = (Il2CppObject *)StringLiteral_21338/*"null"*/;
    if ( actual )
      goto LABEL_5;
  }
  v8 = (Il2CppObject *)StringLiteral_21338/*"null"*/;
LABEL_8:
  if ( equal )
    v9 = (Il2CppObject **)&StringLiteral_18769/*"expectedNotEqual"*/;
  else
    v9 = (Il2CppObject **)&StringLiteral_18768/*"expectedEqual"*/;
  return System_String__Format_44569380((System_String_o *)StringLiteral_23770/*"{0} {1} {2}"*/, v7, *v9, v8, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__ComparisonMessage_float_(
        float expected,
        float actual,
        bool equal,
        const MethodInfo_1A3B298 *method)
{
  Il2CppObject *v5; // x20
  float v6; // s0
  Il2CppObject *v7; // x0
  Il2CppObject **v8; // x9
  float v10; // [xsp+8h] [xbp-18h] BYREF
  float v11; // [xsp+Ch] [xbp-14h] BYREF

  v10 = actual;
  v11 = expected;
  if ( (byte_42B1577 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21338/*"null"*/);
    sub_B52984(&StringLiteral_18768/*"expectedEqual"*/);
    sub_B52984(&StringLiteral_18769/*"expectedNotEqual"*/);
    sub_B52984(&StringLiteral_23770/*"{0} {1} {2}"*/);
    byte_42B1577 = 1;
  }
  v5 = (Il2CppObject *)System_Single__ToString(expected, (const MethodInfo *)&v11);
  v7 = (Il2CppObject *)System_Single__ToString(v6, (const MethodInfo *)&v10);
  v8 = (Il2CppObject **)&StringLiteral_18769/*"expectedNotEqual"*/;
  if ( !equal )
    v8 = (Il2CppObject **)&StringLiteral_18768/*"expectedEqual"*/;
  return System_String__Format_44569380((System_String_o *)StringLiteral_23770/*"{0} {1} {2}"*/, v5, *v8, v7, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__ComparisonMessage_int_(
        int32_t expected,
        int32_t actual,
        bool equal,
        const MethodInfo_1A3B020 *method)
{
  Il2CppObject *v5; // x20
  Il2CppObject *v6; // x0
  Il2CppObject **v7; // x9
  int32_t v9; // [xsp+8h] [xbp-18h] BYREF
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v9 = actual;
  v10 = expected;
  if ( (byte_42B1574 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21338/*"null"*/);
    sub_B52984(&StringLiteral_18768/*"expectedEqual"*/);
    sub_B52984(&StringLiteral_18769/*"expectedNotEqual"*/);
    sub_B52984(&StringLiteral_23770/*"{0} {1} {2}"*/);
    byte_42B1574 = 1;
  }
  v5 = (Il2CppObject *)System_Int32__ToString((int32_t)&v10, 0LL);
  v6 = (Il2CppObject *)System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = (Il2CppObject **)&StringLiteral_18769/*"expectedNotEqual"*/;
  if ( !equal )
    v7 = (Il2CppObject **)&StringLiteral_18768/*"expectedEqual"*/;
  return System_String__Format_44569380((System_String_o *)StringLiteral_23770/*"{0} {1} {2}"*/, v5, *v7, v6, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__ComparisonMessage_long_(
        int64_t expected,
        int64_t actual,
        bool equal,
        const MethodInfo_1A3B0E4 *method)
{
  Il2CppObject *v5; // x20
  Il2CppObject *v6; // x0
  Il2CppObject **v7; // x9
  int64_t v9; // [xsp+0h] [xbp-20h] BYREF
  int64_t v10; // [xsp+8h] [xbp-18h] BYREF

  v9 = actual;
  v10 = expected;
  if ( (byte_42B1575 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21338/*"null"*/);
    sub_B52984(&StringLiteral_18768/*"expectedEqual"*/);
    sub_B52984(&StringLiteral_18769/*"expectedNotEqual"*/);
    sub_B52984(&StringLiteral_23770/*"{0} {1} {2}"*/);
    byte_42B1575 = 1;
  }
  v5 = (Il2CppObject *)System_Int64__ToString((int64_t)&v10, 0LL);
  v6 = (Il2CppObject *)System_Int64__ToString((int64_t)&v9, 0LL);
  v7 = (Il2CppObject **)&StringLiteral_18769/*"expectedNotEqual"*/;
  if ( !equal )
    v7 = (Il2CppObject **)&StringLiteral_18768/*"expectedEqual"*/;
  return System_String__Format_44569380((System_String_o *)StringLiteral_23770/*"{0} {1} {2}"*/, v5, *v7, v6, 0LL);
}


void __fastcall Fgo_Assertions_Assert__HasContainKey_object__object_(
        System_Collections_Generic_Dictionary_T1__T2__o *dic,
        Il2CppObject *key,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_1A3B35C *method)
{
  __int64 v11; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x0

  if ( (byte_42B1578 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_24026/*"ディクショナリが null です"*/);
    sub_B52984(&StringLiteral_20277/*"key({0}) の値がディクショナリに含まれていません"*/);
    byte_42B1578 = 1;
  }
  if ( dic )
  {
    v11 = ((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_T1__T2__o *, Il2CppObject *))method->rgctx_data->_0_System_Collections_Generic_Dictionary_T1__T2__ContainsKey->methodPointer)(
            dic,
            key);
    if ( !message && (v11 & 1) == 0 )
    {
      if ( !key )
        sub_B52A5C(v11, v12);
      v13 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))key->klass->vtable[3].method)(
                              key,
                              key->klass->vtable[4].methodPtr);
      System_String__Format((System_String_o *)StringLiteral_20277/*"key({0}) の値がディクショナリに含まれていません"*/, v13, 0LL);
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
  if ( (byte_42BF112 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15816/*"[AssetData]\n{0}をロードできませんでした"*/);
    byte_42BF112 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_15816/*"[AssetData]\n{0}をロードできませんでした"*/, (Il2CppObject *)assetName, 0LL);
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
        const MethodInfo_1A3B574 *method)
{
  Il2CppObject *v10; // x19
  Il2CppObject *v11; // x0
  Il2CppObject *v12; // x0
  int v13; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v14; // [xsp+8h] [xbp-28h] BYREF
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B157A & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_19934/*"index({0}) の値が負です"*/);
    sub_B52984(&StringLiteral_19935/*"index({0}) の値が配列の要素数({1})を超えています"*/);
    sub_B52984(&StringLiteral_24097/*"配列が null です"*/);
    byte_42B157A = 1;
  }
  if ( array )
  {
    if ( (index & 0x80000000) != 0 )
    {
      if ( !message )
      {
        v15 = index;
        v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
        System_String__Format((System_String_o *)StringLiteral_19934/*"index({0}) の値が負です"*/, v12, 0LL);
      }
    }
    else if ( !message && (signed int)array->max_length <= index )
    {
      v14 = index;
      v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
      v13 = *(_QWORD *)&array->max_length;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
      System_String__Format_44563852((System_String_o *)StringLiteral_19935/*"index({0}) の値が配列の要素数({1})を超えています"*/, v10, v11, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__IsInRange_object__27505704(
        System_Collections_Generic_List_T__o *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_1A3B428 *method)
{
  int32_t v11; // w0
  __int64 v12; // x0
  const MethodInfo_1A3B428_RGCTXs *rgctx_data; // x8
  Il2CppObject *v14; // x19
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x0
  int v17; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v18; // [xsp+18h] [xbp-28h] BYREF
  int32_t v19; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42B1579 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_19934/*"index({0}) の値が負です"*/);
    sub_B52984(&StringLiteral_19935/*"index({0}) の値が配列の要素数({1})を超えています"*/);
    sub_B52984(&StringLiteral_24097/*"配列が null です"*/);
    byte_42B1579 = 1;
  }
  if ( array )
  {
    if ( (index & 0x80000000) != 0 )
    {
      if ( !message )
      {
        v19 = index;
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
        System_String__Format((System_String_o *)StringLiteral_19934/*"index({0}) の値が負です"*/, v16, 0LL);
      }
    }
    else
    {
      v11 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, MethodInfo *, System_String_o *, UnityEngine_GameObject_o *, System_String_o *, _QWORD))method->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)(
              array,
              method->rgctx_data->_0_System_Collections_Generic_List_T__get_Count,
              message,
              gameObject,
              filePath,
              *(_QWORD *)&line);
      if ( !message && v11 <= index )
      {
        v18 = index;
        v12 = j_il2cpp_value_box_0(int_TypeInfo, &v18);
        rgctx_data = method->rgctx_data;
        v14 = (Il2CppObject *)v12;
        v17 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)(array);
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
        System_String__Format_44563852((System_String_o *)StringLiteral_19935/*"index({0}) の値が配列の要素数({1})を超えています"*/, v14, v15, 0LL);
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
        const MethodInfo_1A3B690 *method)
{
  UnityEngine_Object_c *v7; // x1
  UnityEngine_Object_o *v8; // x0

  if ( (byte_42B157B & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B157B = 1;
  }
  if ( sub_B52A44(value, UnityEngine_Object_TypeInfo) )
  {
    v7 = UnityEngine_Object_TypeInfo;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = UnityEngine_Object_TypeInfo;
    }
    v8 = (UnityEngine_Object_o *)sub_B52A44(value, v7);
    UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
  }
}


void __fastcall Fgo_Assertions_Assert__IsNull_object_(
        Il2CppObject *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_1A3B720 *method)
{
  UnityEngine_Object_c *v7; // x1
  UnityEngine_Object_o *v8; // x0

  if ( (byte_42B157C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B157C = 1;
  }
  if ( sub_B52A44(value, UnityEngine_Object_TypeInfo) )
  {
    v7 = UnityEngine_Object_TypeInfo;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = UnityEngine_Object_TypeInfo;
    }
    v8 = (UnityEngine_Object_o *)sub_B52A44(value, v7);
    UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  }
}


void __fastcall Fgo_Assertions_Assert__IsSerializeFieldNotNull_object_(
        Il2CppObject *value,
        System_String_o *fieldName,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_1A3B7B0 *method)
{
  if ( (byte_42B157D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15860/*"[SerializeField]\n{0}の参照が切れています"*/);
    byte_42B157D = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_15860/*"[SerializeField]\n{0}の参照が切れています"*/, (Il2CppObject *)fieldName, 0LL);
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

  if ( (byte_42BF106 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_string__Invoke__);
    sub_B52984(&Fgo_Assertions_Assert_TypeInfo);
    sub_B52984(&StringLiteral_23734/*"{0}\n(expected={1}, actual={2})"*/);
    byte_42BF106 = 1;
  }
  v7 = System_String__Format_44569380(
         (System_String_o *)StringLiteral_23734/*"{0}\n(expected={1}, actual={2})"*/,
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
          sub_B52A5C(0LL, v11);
      }
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)onFailedAction,
        (System_Uri_o *)v7,
        (const MethodInfo_2627794 *)Method_System_Action_string__Invoke__);
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
  if ( (byte_42BF113 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15841/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/);
    byte_42BF113 = 1;
  }
  System_String__Format_44563852((System_String_o *)StringLiteral_15841/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/, (Il2CppObject *)name, (Il2CppObject *)key, 0LL);
}


void __fastcall Fgo_Assertions_Assert__OnFailed_51199740(
        System_String_o *caption,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  System_String_o *v9; // x20
  Il2CppObject *v10; // x19
  System_String_o *v11; // x23
  Il2CppObject *FileName; // x23
  Il2CppObject *v13; // x0
  Il2CppObject *v14; // x21
  System_String_o *name; // x0
  System_String_o *v16; // x22
  Fgo_Assertions_Assert_c *v17; // x8
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x9
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  v9 = message;
  v10 = (Il2CppObject *)caption;
  if ( (byte_42BF107 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_string__Invoke__);
    sub_B52984(&Method_System_Action_string__string__string__Invoke__);
    sub_B52984(&Fgo_Assertions_Assert_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&System_IO_Path_TypeInfo);
    sub_B52984(&StringLiteral_23775/*"{0}({1})"*/);
    sub_B52984(&StringLiteral_42/*"\nGameObject:"*/);
    caption = (System_String_o *)sub_B52984(&StringLiteral_23735/*"{0}\n{1}\n{2}"*/);
    byte_42BF107 = 1;
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
  v19 = line;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v14 = (Il2CppObject *)System_String__Format_44563852((System_String_o *)StringLiteral_23775/*"{0}({1})"*/, FileName, v13, 0LL);
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
    v9 = System_String__Concat_44570600(v9, (System_String_o *)StringLiteral_42/*"\nGameObject:"*/, name, 0LL);
  }
  v16 = System_String__Format_44569380((System_String_o *)StringLiteral_23735/*"{0}\n{1}\n{2}"*/, v10, (Il2CppObject *)v9, v14, 0LL);
  v17 = Fgo_Assertions_Assert_TypeInfo;
  if ( (BYTE3(Fgo_Assertions_Assert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v17 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v17->static_fields;
  if ( static_fields->enable )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = Fgo_Assertions_Assert_TypeInfo;
      static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
    }
    caption = (System_String_o *)static_fields->onFailedAction;
    if ( caption )
    {
      if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        caption = (System_String_o *)Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedAction;
        if ( !caption )
          goto LABEL_34;
      }
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)caption,
        (System_Uri_o *)v16,
        (const MethodInfo_2627794 *)Method_System_Action_string__Invoke__);
      v17 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = Fgo_Assertions_Assert_TypeInfo;
    }
    caption = (System_String_o *)v17->static_fields->onFailedSendReport;
    if ( caption )
    {
      if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) == 0
        || v17->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v17),
            (caption = (System_String_o *)Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedSendReport) != 0LL) )
      {
        System_Action_string__string__string___Invoke(
          (System_Action_string__string__string__o *)caption,
          (System_String_o *)v10,
          v9,
          (System_String_o *)v14,
          (const MethodInfo_2638414 *)Method_System_Action_string__string__string__Invoke__);
        return;
      }
LABEL_34:
      sub_B52A5C(caption, message);
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

  if ( (byte_42BF108 & 1) == 0 )
  {
    sub_B52984(&Fgo_Assertions_Assert_TypeInfo);
    sub_B52984(&UnityEngine_Debug_TypeInfo);
    sub_B52984(&StringLiteral_24071/*"既に表明違反時の処理が設定されています"*/);
    byte_42BF108 = 1;
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
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_24071/*"既に表明違反時の処理が設定されています"*/, 0LL);
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
  sub_B52920(
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

  if ( (byte_42BF109 & 1) == 0 )
  {
    sub_B52984(&Fgo_Assertions_Assert_TypeInfo);
    sub_B52984(&UnityEngine_Debug_TypeInfo);
    sub_B52984(&StringLiteral_24071/*"既に表明違反時の処理が設定されています"*/);
    byte_42BF109 = 1;
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
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_24071/*"既に表明違反時の処理が設定されています"*/, 0LL);
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
  sub_B52920(
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

  if ( (byte_42BF11A & 1) == 0 )
  {
    sub_B52984(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Queue_string___ctor__);
    sub_B52984(&System_Collections_Generic_Queue_string__TypeInfo);
    byte_42BF11A = 1;
  }
  v1 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B52A54(System_Collections_Generic_Queue_string__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v1,
    (const MethodInfo_28DDA5C *)Method_System_Collections_Generic_Queue_string___ctor__);
  static_fields = (BattleServantConfConponent_o *)Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
  v9 = Fgo_Assertions_AssertQueue_TypeInfo;
  Fgo_Assertions_AssertQueue_TypeInfo->static_fields->isReady = 1;
  v10 = v9->static_fields;
  v10->onFailedAction = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&v10->onFailedAction, 0LL, v11, v12, v13, v14, v15, v16);
}


void __fastcall Fgo_Assertions_AssertQueue__Clear(const MethodInfo *method)
{
  __int64 v1; // x1
  Fgo_Assertions_AssertQueue_c *v2; // x0
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *queue; // x0

  if ( (byte_42BF119 & 1) == 0 )
  {
    sub_B52984(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Queue_string__Clear__);
    byte_42BF119 = 1;
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
    sub_B52A5C(0LL, v1);
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    queue,
    (const MethodInfo_28DDCF0 *)Method_System_Collections_Generic_Queue_string__Clear__);
}


void __fastcall Fgo_Assertions_AssertQueue__Dequeue(const MethodInfo *method)
{
  __int64 v1; // x1
  Fgo_Assertions_AssertQueue_c *v2; // x0
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x9
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *queue; // x8
  System_String_o *ProxyData___Dequeue; // x0
  const MethodInfo *v6; // x1

  if ( (byte_42BF118 & 1) == 0 )
  {
    sub_B52984(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Queue_string__Dequeue__);
    sub_B52984(&Method_System_Collections_Generic_Queue_string__get_Count__);
    byte_42BF118 = 1;
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
                                                 (const MethodInfo_28DE268 *)Method_System_Collections_Generic_Queue_string__Dequeue__);
      Fgo_Assertions_AssertQueue__OnFailed(ProxyData___Dequeue, v6);
      return;
    }
LABEL_16:
    sub_B52A5C(v2, v1);
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

  if ( (byte_42BF117 & 1) == 0 )
  {
    sub_B52984(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Queue_string__Enqueue__);
    byte_42BF117 = 1;
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
      sub_B52A5C(0LL, method);
    System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
      (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)static_fields->queue,
      (Mono_Net_CFNetwork_GetProxyData_o *)message,
      (const MethodInfo_28DE050 *)Method_System_Collections_Generic_Queue_string__Enqueue__);
  }
}


void __fastcall Fgo_Assertions_AssertQueue__OnFailed(System_String_o *message, const MethodInfo *method)
{
  Fgo_Assertions_AssertQueue_c *v3; // x0
  struct System_Action_string__o *onFailedAction; // x8
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_42BF115 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_string__Invoke__);
    sub_B52984(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_B52984(&UnityEngine_Debug_TypeInfo);
    sub_B52984(&StringLiteral_24087/*"表明違反時処理が設定されていません"*/);
    byte_42BF115 = 1;
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
        sub_B52A5C(v5, v6);
    }
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)onFailedAction,
      (System_Uri_o *)message,
      (const MethodInfo_2627794 *)Method_System_Action_string__Invoke__);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_24087/*"表明違反時処理が設定されていません"*/, 0LL);
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

  if ( (byte_42BF116 & 1) == 0 )
  {
    sub_B52984(&Fgo_Assertions_AssertQueue_TypeInfo);
    byte_42BF116 = 1;
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
  sub_B52920(
    (BattleServantConfConponent_o *)&static_fields->onFailedAction,
    (System_Int32_array **)action,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}