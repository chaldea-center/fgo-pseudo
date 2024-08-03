void __fastcall Fgo_Assertions_Assert___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0
  struct Fgo_Assertions_Assert_StaticFields *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A00BFD & 1) == 0 )
  {
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, v1);
    byte_4A00BFD = 1;
  }
  static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
  static_fields->enable = 1;
  static_fields->onFailedAction = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->onFailedAction, 0, v2, v3);
  v5 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v5->onFailedSendReport = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->onFailedSendReport, 0, v6, v7);
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
  __int64 v10; // x1
  float v11; // s1
  float v12; // s2
  float v13; // s0
  float Epsilon; // s3

  if ( (byte_4A00BEE & 1) == 0 )
  {
    sub_1B640C8(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___, gameObject);
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4A00BEE = 1;
  }
  if ( !byte_49F7115 )
  {
    sub_1B640C8(&UnityEngine_Mathf_TypeInfo, gameObject);
    byte_49F7115 = 1;
  }
  v11 = fabsf(expected);
  v12 = fabsf(actual);
  if ( v11 <= v12 )
    v11 = v12;
  v13 = v11 * 0.000001;
  Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
  if ( (float)(v11 * 0.000001) <= (float)(Epsilon * 8.0) )
    v13 = Epsilon * 8.0;
  if ( vabds_f32(actual, expected) >= v13 )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_float_(
      expected,
      actual,
      1,
      message,
      (const MethodInfo_2E19914 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__AreEqual(
        int32_t expected,
        int32_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  __int64 v10; // x1

  if ( (byte_4A00BEF & 1) == 0 )
  {
    sub_1B640C8(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___, *(_QWORD *)&actual);
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4A00BEF = 1;
  }
  if ( expected != actual )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_int_(
      expected,
      actual,
      1,
      message,
      (const MethodInfo_2E19378 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_46273340(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  __int64 v10; // x1

  if ( (byte_4A00BF0 & 1) == 0 )
  {
    sub_1B640C8(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___, actual);
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4A00BF0 = 1;
  }
  if ( expected != actual )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_long_(
      expected,
      actual,
      1,
      message,
      (const MethodInfo_2E19544 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_46273500(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1

  if ( (byte_4A00BF1 & 1) == 0 )
  {
    sub_1B640C8(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___, actual);
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_4A00BF1 = 1;
  }
  if ( expected )
    goto LABEL_10;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(actual, 0LL, 0LL) )
  {
LABEL_10:
    if ( actual )
      goto LABEL_19;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(expected, 0LL, 0LL) )
    {
LABEL_19:
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(expected, actual, 0LL) )
      {
        if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
        Fgo_Assertions_Assert__GetComparisonAssertMessage_object_(
          (Il2CppObject *)expected,
          (Il2CppObject *)actual,
          1,
          message,
          (const MethodInfo_2E19718 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
      }
    }
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o expected,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2E183E0 *method)
{
  void **monitor; // x21
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x26
  _QWORD *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x0
  __int64 v13; // x23
  __int64 v14; // x0
  int v15; // w8
  char *v16; // x25
  _QWORD *v17; // x22
  _QWORD *v18; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v19; // x1
  __int64 v20; // x0
  _QWORD *v21; // x19
  __int64 v22; // x27
  void **v23; // x1
  _QWORD *v24; // x19
  __int64 *v25; // x1
  __int64 v26; // x0
  __int64 v27; // x10
  _QWORD *v28; // x19
  void **v29; // x1
  _QWORD *v30; // x19
  __int64 *v31; // x1
  __int64 v32; // x0
  __int64 v33; // x10
  _QWORD *v34; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v35; // x1
  _QWORD *v36; // x19
  __int64 *v37; // x1
  __int64 v38; // x0
  __int64 methodPtr_low; // x10
  _QWORD *v40; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v41; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v42; // x1
  _QWORD *v43; // x26
  void **v44; // x1
  __int64 v45; // x0
  _QWORD *v46; // x9
  __int64 v47; // x26
  __int64 v48; // x8
  int v49; // w0
  __int64 v50; // x1
  int v51; // w10
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v52; // x3
  _QWORD *v53; // x25
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v54; // x1
  void **v55; // x1
  __int64 *v56; // x1
  __int64 v57; // x0
  _QWORD *v58; // x19
  __int64 *v59; // x1
  __int64 v60; // x0
  __int64 v61; // x10
  __int64 v62; // [xsp+0h] [xbp-60h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v63; // [xsp+8h] [xbp-58h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-50h]
  void *v65; // [xsp+18h] [xbp-48h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v66; // [xsp+20h] [xbp-40h] BYREF
  __int64 v67[4]; // [xsp+28h] [xbp-38h] BYREF
  char v68[12]; // [xsp+48h] [xbp-18h] BYREF
  char v69; // [xsp+54h] [xbp-Ch] BYREF
  __int64 v70; // [xsp+58h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  monitor = (void **)expected.monitor;
  klass = expected.klass;
  v70 = *(_QWORD *)(StatusReg + 40);
  v65 = expected.monitor;
  v66 = expected.klass;
  v10 = filePath[2].monitor;
  v63 = actual.klass;
  if ( !v10 )
  {
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, expected.monitor);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    v10 = filePath[2].monitor;
    if ( !v10 )
    {
      sub_1BB6000(filePath);
      v10 = filePath[2].monitor;
    }
  }
  v12 = *v10;
  v13 = *(unsigned int *)(*v10 + 252LL);
  if ( (*(_BYTE *)(*v10 + 309LL) & 1) != 0 )
  {
    v15 = *(_DWORD *)(*v10 + 252LL);
  }
  else
  {
    v14 = sub_1BB5FA4(v12);
    v10 = filePath[2].monitor;
    v15 = *(_DWORD *)(v14 + 252);
    v12 = *v10;
  }
  v16 = (char *)&v62 - (((unsigned int)(v15 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v17 = (__int64 *)((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL));
  v18 = v17;
  if ( *(int *)(v12 + 40) >= 0 )
    v19 = &v66;
  else
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy(&v62, v19, v13);
  v20 = j_il2cpp_value_box_0(*v10, (char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL));
  v21 = filePath[2].monitor;
  v22 = v20;
  if ( *(int *)(*v21 + 40LL) >= 0 )
    v23 = &v65;
  else
    v23 = monitor;
  memcpy((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL), v23, v13);
  if ( v22 != j_il2cpp_value_box_0(*v21, (char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL)) )
  {
    v24 = filePath[2].monitor;
    v25 = *(int *)(*v24 + 40LL) >= 0 ? (__int64 *)&v66 : (__int64 *)klass;
    if ( (memcpy((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL), v25, v13),
          (v26 = j_il2cpp_value_box_0(*v24, (char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL))) == 0)
      || (v27 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v26 + 304LL) < (unsigned int)v27)
      || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * v27 - 8) != UnityEngine_Object_TypeInfo
      || ((v28 = filePath[2].monitor, *(int *)(*v28 + 40LL) >= 0) ? (v29 = &v65) : (v29 = monitor),
          memcpy((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL), v29, v13),
          (sub_1B642D8(*v28, (char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
    {
      v30 = filePath[2].monitor;
      v31 = (__int64 *)(*(int *)(*v30 + 40LL) >= 0 ? &v65 : monitor);
      if ( (memcpy((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL), v31, v13),
            (v32 = j_il2cpp_value_box_0(*v30, (char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL))) == 0)
        || (v33 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)v32 + 304LL) < (unsigned int)v33)
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v32 + 200LL) + 8 * v33 - 8) != UnityEngine_Object_TypeInfo
        || ((v34 = filePath[2].monitor, *(int *)(*v34 + 40LL) >= 0)
          ? (v35 = &v66)
          : (v35 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v66),
            memcpy((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL), v35, v13),
            (sub_1B642D8(*v34, (char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
      {
        v36 = filePath[2].monitor;
        v37 = *(int *)(*v36 + 40LL) >= 0 ? (__int64 *)&v66 : (__int64 *)v66;
        memcpy((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL), v37, v13);
        v38 = j_il2cpp_value_box_0(*v36, (char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL));
        if ( !v38 )
          goto LABEL_40;
        methodPtr_low = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)v38 + 304LL) < (unsigned int)methodPtr_low
          || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v38 + 200LL) + 8 * methodPtr_low - 8) != UnityEngine_Object_TypeInfo )
        {
          goto LABEL_40;
        }
        v58 = filePath[2].monitor;
        v59 = (__int64 *)(*(int *)(*v58 + 40LL) >= 0 ? &v65 : monitor);
        memcpy((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL), v59, v13);
        v60 = j_il2cpp_value_box_0(*v58, (char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL));
        if ( !v60
          || (v61 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
              *(unsigned __int8 *)(*(_QWORD *)v60 + 304LL) < (unsigned int)v61)
          || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v60 + 200LL) + 8 * v61 - 8) != UnityEngine_Object_TypeInfo )
        {
LABEL_40:
          v40 = filePath[2].monitor;
          v41 = v66;
          if ( *(int *)(*v40 + 40LL) >= 0 )
            v42 = &v66;
          else
            v42 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v66;
          memcpy((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL), v42, v13);
          if ( (sub_1B642D8(*v40, (char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
          {
            v43 = filePath[2].monitor;
            if ( *(int *)(*v43 + 40LL) >= 0 )
              v44 = &v65;
            else
              v44 = monitor;
            memcpy((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL), v44, v13);
            v45 = j_il2cpp_value_box_0(*v43, (char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL));
            v46 = filePath[2].monitor;
            v47 = v45;
            v48 = *v46;
            if ( (*(_BYTE *)(*v46 + 309LL) & 1) == 0 )
            {
              v49 = sub_1BB5FA4(*v46);
              v46 = filePath[2].monitor;
              v41 = v66;
              LODWORD(v48) = v49;
            }
            v50 = v46[1];
            v51 = *(_DWORD *)(*v46 + 40LL);
            v67[0] = v47;
            if ( v51 >= 0 )
              v52 = &v66;
            else
              v52 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v41;
            sub_1B64B30(v48, v50, (int)v16, v52);
            if ( v68[0] )
              return;
            v41 = v66;
          }
          v53 = filePath[2].monitor;
          if ( *(int *)(*v53 + 40LL) >= 0 )
            v54 = &v66;
          else
            v54 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v41;
          memcpy((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL), v54, v13);
          if ( *(int *)(*v53 + 40LL) >= 0 )
            v55 = &v65;
          else
            v55 = monitor;
          memcpy((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL), v55, v13);
          if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
            v53 = filePath[2].monitor;
          }
          v56 = (__int64 *)v53[2];
          v57 = *v56;
          if ( (*(_DWORD *)(*v53 + 40LL) & 0x80000000) == 0 )
          {
            v17 = (_QWORD *)*v17;
            v18 = (_QWORD *)*v18;
          }
          v67[0] = (__int64)v17;
          v67[1] = (__int64)v18;
          v69 = 1;
          v67[2] = (__int64)&v69;
          v67[3] = (__int64)v63;
          ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, char *))v56[2])(v57, v56, 0LL, v67, v68);
        }
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
  __int64 v10; // x1
  float v11; // s1
  float v12; // s2
  float v13; // s0
  float Epsilon; // s3

  if ( (byte_4A00BF2 & 1) == 0 )
  {
    sub_1B640C8(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___, gameObject);
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4A00BF2 = 1;
  }
  if ( !byte_49F7115 )
  {
    sub_1B640C8(&UnityEngine_Mathf_TypeInfo, gameObject);
    byte_49F7115 = 1;
  }
  v11 = fabsf(expected);
  v12 = fabsf(actual);
  if ( v11 <= v12 )
    v11 = v12;
  v13 = v11 * 0.000001;
  Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
  if ( (float)(v11 * 0.000001) <= (float)(Epsilon * 8.0) )
    v13 = Epsilon * 8.0;
  if ( vabds_f32(actual, expected) < v13 )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_float_(
      expected,
      actual,
      0,
      message,
      (const MethodInfo_2E19914 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__AreNotEqual(
        int32_t expected,
        int32_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  __int64 v10; // x1

  if ( (byte_4A00BF3 & 1) == 0 )
  {
    sub_1B640C8(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___, *(_QWORD *)&actual);
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4A00BF3 = 1;
  }
  if ( expected == actual )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_int_(
      expected,
      expected,
      0,
      message,
      (const MethodInfo_2E19378 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_46274208(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  __int64 v10; // x1

  if ( (byte_4A00BF4 & 1) == 0 )
  {
    sub_1B640C8(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___, actual);
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4A00BF4 = 1;
  }
  if ( expected == actual )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_long_(
      expected,
      expected,
      0,
      message,
      (const MethodInfo_2E19544 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_46274368(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1

  if ( (byte_4A00BF5 & 1) == 0 )
  {
    sub_1B640C8(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___, actual);
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_4A00BF5 = 1;
  }
  if ( !expected )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(actual, 0LL, 0LL) )
      goto LABEL_19;
  }
  if ( !actual )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(expected, 0LL, 0LL) )
      goto LABEL_19;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(expected, actual, 0LL) )
  {
LABEL_19:
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_object_(
      (Il2CppObject *)expected,
      (Il2CppObject *)actual,
      0,
      message,
      (const MethodInfo_2E19718 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o expected,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2E188B8 *method)
{
  void **monitor; // x23
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x26
  _QWORD *v10; // x27
  __int64 v11; // x1
  __int64 v12; // x0
  unsigned int v13; // w8
  __int64 v14; // x24
  __int64 v15; // x0
  _QWORD *v16; // x21
  _QWORD *v17; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v18; // x1
  __int64 v19; // x0
  _QWORD *v20; // x19
  __int64 v21; // x27
  void **v22; // x1
  __int64 v23; // x0
  _QWORD *v24; // x19
  __int64 v25; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v26; // x1
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x10
  _QWORD *v30; // x19
  void **v31; // x1
  _QWORD *v32; // x19
  __int64 *v33; // x1
  __int64 v34; // x0
  __int64 v35; // x10
  _QWORD *v36; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v37; // x1
  _QWORD *v38; // x19
  __int64 *v39; // x1
  __int64 v40; // x0
  __int64 methodPtr_low; // x10
  _QWORD *v42; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v43; // x28
  __int64 *v44; // x1
  _QWORD *v45; // x19
  void **v46; // x1
  __int64 v47; // x0
  _QWORD *v48; // x9
  __int64 v49; // x26
  __int64 v50; // x8
  int v51; // w0
  __int64 v52; // x1
  __int64 *v53; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v54; // x1
  void **v55; // x1
  Fgo_Assertions_Assert_c *v56; // x0
  void **v57; // x1
  __int64 *v58; // x1
  __int64 v59; // x0
  _QWORD *v60; // x19
  __int64 *v61; // x1
  __int64 v62; // x0
  __int64 v63; // x10
  __int64 v64; // [xsp+0h] [xbp-60h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v65; // [xsp+8h] [xbp-58h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-50h]
  void *v67; // [xsp+18h] [xbp-48h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v68; // [xsp+20h] [xbp-40h] BYREF
  __int64 v69[4]; // [xsp+28h] [xbp-38h] BYREF
  char v70[12]; // [xsp+48h] [xbp-18h] BYREF
  char v71; // [xsp+54h] [xbp-Ch] BYREF
  __int64 v72; // [xsp+58h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  monitor = (void **)expected.monitor;
  klass = expected.klass;
  v72 = *(_QWORD *)(StatusReg + 40);
  v67 = expected.monitor;
  v68 = expected.klass;
  v10 = filePath[2].monitor;
  v65 = actual.klass;
  if ( !v10 )
  {
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, expected.monitor);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    v10 = filePath[2].monitor;
    if ( !v10 )
    {
      sub_1BB6000(filePath);
      v10 = filePath[2].monitor;
    }
  }
  v12 = *v10;
  v13 = *(_DWORD *)(*v10 + 252LL);
  v14 = v13;
  if ( (*(_BYTE *)(*v10 + 309LL) & 1) == 0 )
  {
    v15 = sub_1BB5FA4(v12);
    v10 = filePath[2].monitor;
    v13 = *(_DWORD *)(v15 + 252);
    v12 = *v10;
  }
  v64 = (__int64)&v64 - ((v13 + 16 + 15LL) & 0x1FFFFFFF0LL);
  v16 = (__int64 *)((char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL));
  v17 = v16;
  if ( *(int *)(v12 + 40) >= 0 )
    v18 = &v68;
  else
    v18 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy(&v64, v18, v14);
  v19 = j_il2cpp_value_box_0(*v10, (char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL));
  v20 = filePath[2].monitor;
  v21 = v19;
  if ( *(int *)(*v20 + 40LL) >= 0 )
    v22 = &v67;
  else
    v22 = monitor;
  memcpy((char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL), v22, v14);
  v23 = j_il2cpp_value_box_0(*v20, (char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL));
  v24 = filePath[2].monitor;
  v25 = v23;
  if ( *(int *)(*v24 + 40LL) >= 0 )
    v26 = &v68;
  else
    v26 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL), v26, v14);
  v27 = *v24;
  if ( v21 == v25 )
  {
    if ( *(int *)(v27 + 40) >= 0 )
      v57 = &v67;
    else
      v57 = monitor;
    memcpy((char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL), v57, v14);
    v56 = Fgo_Assertions_Assert_TypeInfo;
    if ( Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      goto LABEL_65;
LABEL_64:
    j_il2cpp_runtime_class_init_0(v56);
    v24 = filePath[2].monitor;
LABEL_65:
    v58 = (__int64 *)v24[1];
    v59 = *v58;
    if ( (*(_DWORD *)(*v24 + 40LL) & 0x80000000) == 0 )
    {
      v16 = (_QWORD *)*v16;
      v17 = (_QWORD *)*v17;
    }
    v69[2] = (__int64)&v71;
    v71 = 0;
    v69[0] = (__int64)v16;
    v69[1] = (__int64)v17;
    v69[3] = (__int64)v65;
    ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, char *))v58[2])(v59, v58, 0LL, v69, v70);
    return;
  }
  v28 = j_il2cpp_value_box_0(v27, (char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL));
  if ( !v28
    || (v29 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*(_QWORD *)v28 + 304LL) < (unsigned int)v29)
    || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v28 + 200LL) + 8 * v29 - 8) != UnityEngine_Object_TypeInfo
    || ((v30 = filePath[2].monitor, *(int *)(*v30 + 40LL) >= 0) ? (v31 = &v67) : (v31 = monitor),
        memcpy((char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL), v31, v14),
        (sub_1B642D8(*v30, (char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
  {
    v32 = filePath[2].monitor;
    v33 = (__int64 *)(*(int *)(*v32 + 40LL) >= 0 ? &v67 : monitor);
    if ( (memcpy((char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL), v33, v14),
          (v34 = j_il2cpp_value_box_0(*v32, (char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL))) == 0)
      || (v35 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v34 + 304LL) < (unsigned int)v35)
      || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v34 + 200LL) + 8 * v35 - 8) != UnityEngine_Object_TypeInfo
      || ((v36 = filePath[2].monitor, *(int *)(*v36 + 40LL) >= 0)
        ? (v37 = &v68)
        : (v37 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v68),
          memcpy((char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL), v37, v14),
          (sub_1B642D8(*v36, (char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
    {
      v38 = filePath[2].monitor;
      v39 = *(int *)(*v38 + 40LL) >= 0 ? (__int64 *)&v68 : (__int64 *)v68;
      memcpy((char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL), v39, v14);
      v40 = j_il2cpp_value_box_0(*v38, (char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL));
      if ( !v40 )
        goto LABEL_39;
      methodPtr_low = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v40 + 304LL) < (unsigned int)methodPtr_low
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v40 + 200LL) + 8 * methodPtr_low - 8) != UnityEngine_Object_TypeInfo )
      {
        goto LABEL_39;
      }
      v60 = filePath[2].monitor;
      v61 = (__int64 *)(*(int *)(*v60 + 40LL) >= 0 ? &v67 : monitor);
      memcpy((char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL), v61, v14);
      v62 = j_il2cpp_value_box_0(*v60, (char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL));
      if ( !v62
        || (v63 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)v62 + 304LL) < (unsigned int)v63)
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v62 + 200LL) + 8 * v63 - 8) != UnityEngine_Object_TypeInfo )
      {
LABEL_39:
        v42 = filePath[2].monitor;
        v43 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v68;
        v44 = *(int *)(*v42 + 40LL) >= 0 ? (__int64 *)&v68 : (__int64 *)v68;
        memcpy((char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL), v44, v14);
        if ( (sub_1B642D8(*v42, (char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
        {
          v45 = filePath[2].monitor;
          if ( *(int *)(*v45 + 40LL) >= 0 )
            v46 = &v67;
          else
            v46 = monitor;
          memcpy((char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL), v46, v14);
          v47 = j_il2cpp_value_box_0(*v45, (char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL));
          v48 = filePath[2].monitor;
          v49 = v47;
          v50 = *v48;
          if ( (*(_BYTE *)(*v48 + 309LL) & 1) == 0 )
          {
            v51 = sub_1BB5FA4(*v48);
            v48 = filePath[2].monitor;
            v43 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v68;
            LODWORD(v50) = v51;
          }
          v52 = v48[2];
          v53 = (__int64 *)(*(int *)(*v48 + 40LL) >= 0 ? &v68 : v43);
          v69[0] = v49;
          sub_1B64B30(v50, v52, v64, v53);
          if ( v70[0] )
          {
            v24 = filePath[2].monitor;
            if ( *(int *)(*v24 + 40LL) >= 0 )
              v54 = &v68;
            else
              v54 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v68;
            memcpy((char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL), v54, v14);
            if ( *(int *)(*v24 + 40LL) >= 0 )
              v55 = &v67;
            else
              v55 = monitor;
            memcpy((char *)&v64 - ((v14 + 15) & 0x1FFFFFFF0LL), v55, v14);
            v56 = Fgo_Assertions_Assert_TypeInfo;
            if ( Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
              goto LABEL_65;
            goto LABEL_64;
          }
        }
      }
    }
  }
}


void __fastcall Fgo_Assertions_Assert__CanFormat(
        Fgo_Assertions_Assert_StringFormatParam_o *parameter,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct System_String_o *format; // x21
  struct System_Object_array *args; // x8
  _BOOL4 v17; // w25
  bool v18; // w27
  char v19; // w29
  char v20; // w28
  char v21; // w26
  System_String_o *v22; // x23
  int32_t v23; // w22
  uint16_t Chars; // w0
  int v25; // w8
  _BOOL8 v26; // x0
  struct System_Object_array *v27; // x8
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  __int64 *v30; // x8
  __int64 *v31; // x8
  int32_t result; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v33; // [xsp+8h] [xbp-68h] BYREF
  __int16 v34[2]; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A00BFB & 1) == 0 )
  {
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1B640C8(&char_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_25275/*"書式指定項目が不正です"*/, v9);
    sub_1B640C8(&StringLiteral_25217/*"パラメータ"*/, v10);
    sub_1B640C8(&StringLiteral_25264/*"文字列"*/, v11);
    sub_1B640C8(&StringLiteral_25258/*"引数"*/, v12);
    sub_1B640C8(&StringLiteral_25259/*"引数を超えたのインデックスを指しています"*/, v13);
    sub_1B640C8(&StringLiteral_1/*""*/, v14);
    byte_4A00BFB = 1;
  }
  v34[0] = 0;
  result = 0;
  v33 = 0;
  if ( !parameter )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v30 = &StringLiteral_25217/*"パラメータ"*/;
    goto LABEL_59;
  }
  format = parameter->fields.format;
  if ( !format )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v30 = &StringLiteral_25264/*"文字列"*/;
    goto LABEL_59;
  }
  args = parameter->fields.args;
  if ( !args || args->max_length == 1 && !args->m_Items[0] )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v30 = &StringLiteral_25258/*"引数"*/;
LABEL_59:
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)*v30, message, (const MethodInfo *)gameObject);
    return;
  }
  if ( format->fields._stringLength < 1 )
  {
    v21 = 0;
    v20 = 0;
    v19 = 0;
    v17 = 0;
LABEL_62:
    if ( (v21 & 1) != 0 || (v20 & 1) != 0 || (v19 & 1) != 0 || v17 )
      goto LABEL_66;
    return;
  }
  LOBYTE(v17) = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0LL;
  v23 = 0;
  do
  {
    Chars = System_String__get_Chars(format, v23, 0LL);
    v34[0] = Chars;
    if ( v17 )
    {
      if ( Chars == 123 )
        goto LABEL_12;
      v22 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_20:
      if ( Chars == 44 || Chars == 125 || Chars == 58 )
      {
        v26 = System_Int32__TryParse(v22, &v33, 0LL);
        if ( !v26 )
          goto LABEL_66;
        v27 = parameter->fields.args;
        if ( !v27 )
          sub_1B64324(v26);
        if ( v33 >= (signed int)v27->max_length )
        {
          if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
          v31 = &StringLiteral_25259/*"引数を超えたのインデックスを指しています"*/;
          goto LABEL_69;
        }
        v25 = (unsigned __int16)v34[0];
        if ( v34[0] == 44 )
        {
          v22 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_28:
          v19 = 0;
          v17 = 0;
          v20 = 1;
          goto LABEL_47;
        }
LABEL_29:
        v19 = 0;
        v17 = 0;
        v21 |= v25 == 58;
        goto LABEL_47;
      }
      if ( (unsigned __int16)(Chars - 48) > 9u )
        goto LABEL_66;
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      v28 = System_Char__ToString((uint16_t)v34, 0LL);
      v22 = System_String__Concat_61375396(v22, v28, 0LL);
      v17 = 0;
      v19 = 1;
      goto LABEL_47;
    }
    if ( (v19 & 1) != 0 )
      goto LABEL_20;
    if ( (v20 & 1) != 0 )
    {
      if ( Chars != 125 && Chars != 58 )
      {
        if ( (unsigned __int16)(Chars - 48) >= 0xAu && Chars != 45 && Chars != 32 )
          goto LABEL_66;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v29 = System_Char__ToString((uint16_t)v34, 0LL);
        v22 = System_String__Concat_61375396(v22, v29, 0LL);
        goto LABEL_28;
      }
      if ( !System_Int32__TryParse(v22, &result, 0LL) )
        goto LABEL_66;
      v25 = (unsigned __int16)v34[0];
      v20 = 0;
      goto LABEL_29;
    }
    if ( (v21 & 1) != 0 )
    {
      if ( Chars == 123 )
        goto LABEL_66;
      v20 = 0;
      v19 = 0;
      v17 = 0;
      v21 = Chars != 125;
    }
    else
    {
      if ( v18 )
      {
        if ( Chars != 125 )
          goto LABEL_66;
        v21 = 0;
        v20 = 0;
        v19 = 0;
        v18 = 0;
LABEL_12:
        v17 = 0;
        goto LABEL_47;
      }
      v17 = Chars == 123;
      v21 = 0;
      v20 = 0;
      v19 = 0;
      v18 = Chars == 125;
    }
LABEL_47:
    ++v23;
  }
  while ( v23 < format->fields._stringLength );
  if ( !v18 )
    goto LABEL_62;
LABEL_66:
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  v31 = &StringLiteral_25275/*"書式指定項目が不正です"*/;
LABEL_69:
  Fgo_Assertions_Assert__GetEffectiveAssertMessage((System_String_o *)*v31, message, (const MethodInfo *)gameObject);
}


void __fastcall Fgo_Assertions_Assert__CanParse___Il2CppFullySharedGenericType_(
        System_String_o *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2E18DD8 *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  Il2CppType *_0_T; // x21
  Il2CppObject *TypeFromHandle; // x21
  System_Type_o *v27; // x0
  System_String_o *v28; // x0
  System_String_o *v29; // x20
  intptr_t v30; // w22
  System_Type_o *v31; // x0
  intptr_t v32; // w22
  System_Type_o *v33; // x0
  intptr_t v34; // w22
  System_Type_o *v35; // x0
  intptr_t v36; // w22
  System_Type_o *v37; // x0
  intptr_t v38; // w22
  System_Type_o *v39; // x0
  intptr_t v40; // w22
  System_Type_o *v41; // x0
  intptr_t v42; // w22
  System_Type_o *v43; // x0
  intptr_t v44; // w22
  System_Type_o *v45; // x0
  intptr_t v46; // w22
  System_Type_o *v47; // x0
  intptr_t v48; // w22
  System_Type_o *v49; // x0
  double v50; // [xsp+0h] [xbp-70h] BYREF
  float v51; // [xsp+Ch] [xbp-64h] BYREF
  uint64_t v52; // [xsp+10h] [xbp-60h] BYREF
  int64_t v53; // [xsp+18h] [xbp-58h] BYREF
  uint32_t v54; // [xsp+24h] [xbp-4Ch] BYREF
  int32_t v55; // [xsp+28h] [xbp-48h] BYREF
  uint16_t v56; // [xsp+2Ch] [xbp-44h] BYREF
  int16_t v57[2]; // [xsp+30h] [xbp-40h] BYREF
  int8_t v58[4]; // [xsp+34h] [xbp-3Ch] BYREF
  uint8_t v59[4]; // [xsp+38h] [xbp-38h] BYREF
  bool result; // [xsp+3Ch] [xbp-34h] BYREF
  System_RuntimeTypeHandle_o v61; // 0:w0.4
  System_RuntimeTypeHandle_o v62; // 0:w0.4
  System_RuntimeTypeHandle_o v63; // 0:w0.4
  System_RuntimeTypeHandle_o v64; // 0:w0.4
  System_RuntimeTypeHandle_o v65; // 0:w0.4
  System_RuntimeTypeHandle_o v66; // 0:w0.4
  System_RuntimeTypeHandle_o v67; // 0:w0.4
  System_RuntimeTypeHandle_o v68; // 0:w0.4
  System_RuntimeTypeHandle_o v69; // 0:w0.4
  System_RuntimeTypeHandle_o v70; // 0:w0.4
  System_RuntimeTypeHandle_o v71; // 0:w0.4
  System_RuntimeTypeHandle_o v72; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1B640C8(&bool_var, v9);
    sub_1B640C8(&bool_TypeInfo, v10);
    sub_1B640C8(&qword_47F3B70, v11);
    sub_1B640C8(&double_var, v12);
    sub_1B640C8(&short_var, v13);
    sub_1B640C8(&int_var, v14);
    sub_1B640C8(&long_var, v15);
    sub_1B640C8(&sbyte_var, v16);
    sub_1B640C8(&float_var, v17);
    sub_1B640C8(&System_Type_TypeInfo, v18);
    sub_1B640C8(&ushort_var, v19);
    sub_1B640C8(&uint_var, v20);
    sub_1B640C8(&ulong_var, v21);
    sub_1B640C8(&StringLiteral_25246/*"型が不正です:{0}"*/, v22);
    sub_1B640C8(&StringLiteral_25264/*"文字列"*/, v23);
    sub_1B640C8(&StringLiteral_299/*" isNotBoolean"*/, v24);
    if ( !method->rgctx_data )
      sub_1BB6000(method);
  }
  result = 0;
  v59[0] = 0;
  v58[0] = 0;
  v57[0] = 0;
  v56 = 0;
  v54 = 0;
  v55 = 0;
  v52 = 0LL;
  v53 = 0LL;
  v51 = 0.0;
  v50 = 0.0;
  if ( value )
  {
    _0_T = method->rgctx_data->_0_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v61.fields.value = (int)_0_T;
    TypeFromHandle = (Il2CppObject *)System_Type__GetTypeFromHandle(v61, 0LL);
    v62.fields.value = (int)bool_var;
    v27 = System_Type__GetTypeFromHandle(v62, 0LL);
    if ( System_Type__op_Equality(v27, (System_Type_o *)TypeFromHandle, 0LL) )
    {
      if ( !bool_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(bool_TypeInfo);
      if ( !System_Boolean__TryParse(value, &result, 0LL) )
      {
        v28 = System_String__Concat_61375396(value, (System_String_o *)StringLiteral_299/*" isNotBoolean"*/, 0LL);
LABEL_12:
        v29 = v28;
        if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
        Fgo_Assertions_Assert__GetEffectiveAssertMessage(v29, message, 0LL);
      }
    }
    else
    {
      v30 = (int)qword_47F3B70;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v63.fields.value = v30;
      v31 = System_Type__GetTypeFromHandle(v63, 0LL);
      if ( System_Type__op_Equality(v31, (System_Type_o *)TypeFromHandle, 0LL) )
      {
        if ( System_Byte__TryParse(value, v59, 0LL) )
          return;
      }
      else
      {
        v32 = (int)sbyte_var;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v64.fields.value = v32;
        v33 = System_Type__GetTypeFromHandle(v64, 0LL);
        if ( System_Type__op_Equality(v33, (System_Type_o *)TypeFromHandle, 0LL) )
        {
          if ( System_SByte__TryParse(value, v58, 0LL) )
            return;
        }
        else
        {
          v34 = (int)short_var;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v65.fields.value = v34;
          v35 = System_Type__GetTypeFromHandle(v65, 0LL);
          if ( System_Type__op_Equality(v35, (System_Type_o *)TypeFromHandle, 0LL) )
          {
            if ( System_Int16__TryParse(value, v57, 0LL) )
              return;
          }
          else
          {
            v36 = (int)ushort_var;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v66.fields.value = v36;
            v37 = System_Type__GetTypeFromHandle(v66, 0LL);
            if ( System_Type__op_Equality(v37, (System_Type_o *)TypeFromHandle, 0LL) )
            {
              if ( System_UInt16__TryParse(value, &v56, 0LL) )
                return;
            }
            else
            {
              v38 = (int)int_var;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v67.fields.value = v38;
              v39 = System_Type__GetTypeFromHandle(v67, 0LL);
              if ( System_Type__op_Equality(v39, (System_Type_o *)TypeFromHandle, 0LL) )
              {
                if ( System_Int32__TryParse(value, &v55, 0LL) )
                  return;
              }
              else
              {
                v40 = (int)uint_var;
                if ( !System_Type_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
                v68.fields.value = v40;
                v41 = System_Type__GetTypeFromHandle(v68, 0LL);
                if ( System_Type__op_Equality(v41, (System_Type_o *)TypeFromHandle, 0LL) )
                {
                  if ( System_UInt32__TryParse(value, &v54, 0LL) )
                    return;
                }
                else
                {
                  v42 = (int)long_var;
                  if ( !System_Type_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
                  v69.fields.value = v42;
                  v43 = System_Type__GetTypeFromHandle(v69, 0LL);
                  if ( System_Type__op_Equality(v43, (System_Type_o *)TypeFromHandle, 0LL) )
                  {
                    if ( System_Int64__TryParse(value, &v53, 0LL) )
                      return;
                  }
                  else
                  {
                    v44 = (int)ulong_var;
                    if ( !System_Type_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
                    v70.fields.value = v44;
                    v45 = System_Type__GetTypeFromHandle(v70, 0LL);
                    if ( System_Type__op_Equality(v45, (System_Type_o *)TypeFromHandle, 0LL) )
                    {
                      if ( System_UInt64__TryParse(value, &v52, 0LL) )
                        return;
                    }
                    else
                    {
                      v46 = (int)float_var;
                      if ( !System_Type_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
                      v71.fields.value = v46;
                      v47 = System_Type__GetTypeFromHandle(v71, 0LL);
                      if ( System_Type__op_Equality(v47, (System_Type_o *)TypeFromHandle, 0LL) )
                      {
                        if ( System_Single__TryParse(value, &v51, 0LL) )
                          return;
                      }
                      else
                      {
                        v48 = (int)double_var;
                        if ( !System_Type_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
                        v72.fields.value = v48;
                        v49 = System_Type__GetTypeFromHandle(v72, 0LL);
                        if ( !System_Type__op_Equality(v49, (System_Type_o *)TypeFromHandle, 0LL) )
                        {
                          v28 = System_String__Format((System_String_o *)StringLiteral_25246/*"型が不正です:{0}"*/, TypeFromHandle, 0LL);
                          goto LABEL_12;
                        }
                        if ( System_Double__TryParse(value, &v50, 0LL) )
                          return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
      Fgo_Assertions_Assert__GetParseAssertMessage(value, message, 0LL);
    }
  }
  else
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25264/*"文字列"*/, message, 0LL);
  }
}


void __fastcall Fgo_Assertions_Assert__ConditionalExecution(
        bool conditions,
        System_Action_o *action,
        const MethodInfo *method)
{
  if ( action )
  {
    if ( conditions )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))action->fields.m_target)(
        action->fields.original_method_info,
        *(_QWORD *)&action->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o expected,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2E19AE0 *method)
{
  __int64 v5; // x21
  void **v6; // x22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  __int64 *v8; // x19
  char v9; // w20
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x8
  __int16 v16; // w9
  __int64 v17; // x24
  __int64 v18; // x0
  int v19; // w10
  char *v20; // x26
  __int64 v21; // x0
  char *v22; // x25
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v23; // x1
  _QWORD *v24; // x8
  __int64 v25; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v26; // x3
  __int64 v27; // x23
  _QWORD *v28; // x26
  void **v29; // x1
  _QWORD *v30; // x8
  __int64 v31; // x0
  void **v32; // x3
  __int64 v33; // x21
  __int64 v34; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 *v44; // x8
  __int64 v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w1
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x20
  __int64 v53; // [xsp+0h] [xbp-30h] BYREF
  System_String_o *monitor; // [xsp+8h] [xbp-28h]
  void **v55; // [xsp+10h] [xbp-20h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v56; // [xsp+18h] [xbp-18h] BYREF
  __int64 v57; // [xsp+20h] [xbp-10h]
  __int64 v58; // [xsp+28h] [xbp-8h]

  monitor = (System_String_o *)actual.monitor;
  v5 = equal;
  v6 = (void **)expected.monitor;
  klass = expected.klass;
  v58 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v55 = (void **)expected.monitor;
  v56 = expected.klass;
  v8 = *(__int64 **)(equal + 56LL);
  v9 = (char)actual.klass;
  if ( !v8 )
  {
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, expected.monitor);
    sub_1B640C8(&string___TypeInfo, v10);
    sub_1B640C8(&StringLiteral_117/*" "*/, v11);
    sub_1B640C8(&StringLiteral_22086/*"null"*/, v12);
    sub_1B640C8(&StringLiteral_19230/*"expectedEqual"*/, v13);
    sub_1B640C8(&StringLiteral_19231/*"expectedNotEqual"*/, v14);
    v8 = *(__int64 **)(v5 + 56);
    if ( !v8 )
    {
      sub_1BB6000(v5);
      v8 = *(__int64 **)(v5 + 56);
    }
  }
  v15 = *v8;
  v16 = *(_WORD *)(*v8 + 309);
  v17 = *(unsigned int *)(*v8 + 252);
  if ( (v16 & 1) != 0 )
  {
    v19 = *(_DWORD *)(*v8 + 252);
  }
  else
  {
    v18 = sub_1BB5FA4(*v8);
    v8 = *(__int64 **)(v5 + 56);
    v19 = *(_DWORD *)(v18 + 252);
    v15 = *v8;
    v16 = *(_WORD *)(*v8 + 309);
  }
  v20 = (char *)&v53 - (((unsigned int)(v19 + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( (v16 & 1) != 0 )
  {
    v21 = v15;
  }
  else
  {
    v21 = sub_1BB5FA4(v15);
    v8 = *(__int64 **)(v5 + 56);
    v15 = *v8;
  }
  v22 = (char *)&v53 - (((unsigned int)(*(_DWORD *)(v21 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( *(int *)(v15 + 40) >= 0 )
    v23 = &v56;
  else
    v23 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v53 - ((v17 + 15) & 0x1FFFFFFF0LL), v23, v17);
  if ( (sub_1B642D8(*v8, (char *)&v53 - ((v17 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
  {
    v24 = *(_QWORD **)(v5 + 56);
    v25 = *v24;
    if ( (*(_BYTE *)(*v24 + 309LL) & 1) == 0 )
    {
      LODWORD(v25) = sub_1BB5FA4(v25);
      v24 = *(_QWORD **)(v5 + 56);
      klass = v56;
    }
    if ( *(int *)(*v24 + 40LL) >= 0 )
      v26 = &v56;
    else
      v26 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    sub_1B64B30(v25, v24[1], (int)v20, v26);
    v27 = v57;
    v6 = v55;
  }
  else
  {
    v27 = StringLiteral_22086/*"null"*/;
  }
  v28 = *(_QWORD **)(v5 + 56);
  if ( *(int *)(*v28 + 40LL) >= 0 )
    v29 = (void **)&v55;
  else
    v29 = v6;
  memcpy((char *)&v53 - ((v17 + 15) & 0x1FFFFFFF0LL), v29, v17);
  if ( (sub_1B642D8(*v28, (char *)&v53 - ((v17 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
  {
    v30 = *(_QWORD **)(v5 + 56);
    v31 = *v30;
    if ( (*(_BYTE *)(*v30 + 309LL) & 1) == 0 )
    {
      LODWORD(v31) = sub_1BB5FA4(v31);
      v30 = *(_QWORD **)(v5 + 56);
      v6 = v55;
    }
    if ( *(int *)(*v30 + 40LL) >= 0 )
      v32 = (void **)&v55;
    else
      v32 = v6;
    sub_1B64B30(v31, v30[1], (int)v22, v32);
    v33 = v57;
  }
  else
  {
    v33 = StringLiteral_22086/*"null"*/;
  }
  v34 = sub_1B64170(string___TypeInfo, 5LL);
  if ( !v34 )
    sub_1B64324(0LL);
  v38 = v34;
  if ( !*(_DWORD *)(v34 + 24) )
    goto LABEL_43;
  *(_QWORD *)(v34 + 32) = v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 32), v27, v36, v37);
  if ( *(_DWORD *)(v38 + 24) <= 1u )
    goto LABEL_43;
  v41 = (int)StringLiteral_117/*" "*/;
  *(_QWORD *)(v38 + 40) = StringLiteral_117/*" "*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 40), v41, v39, v40);
  v44 = (__int64 *)&StringLiteral_19231/*"expectedNotEqual"*/;
  if ( (v9 & 1) == 0 )
    v44 = (__int64 *)&StringLiteral_19230/*"expectedEqual"*/;
  if ( *(_DWORD *)(v38 + 24) <= 2u
    || (v45 = *v44,
        *(_QWORD *)(v38 + 48) = *v44,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 48), v45, v42, v43),
        *(_DWORD *)(v38 + 24) <= 3u)
    || (v48 = (int)StringLiteral_117/*" "*/,
        *(_QWORD *)(v38 + 56) = StringLiteral_117/*" "*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 56), v48, v46, v47),
        *(_DWORD *)(v38 + 24) <= 4u) )
  {
LABEL_43:
    sub_1B6432C(v34, v35);
  }
  *(_QWORD *)(v38 + 64) = v33;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 64), v33, v49, v50);
  v51 = System_String__Concat_61388924((System_String_array *)v38, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v51, monitor, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_float_(
        float expected,
        float actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2E19914 *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *v12; // x23
  float v13; // s0
  System_String_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 *v25; // x8
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x20
  float v34; // [xsp+8h] [xbp-38h] BYREF
  float v35; // [xsp+Ch] [xbp-34h] BYREF

  v34 = actual;
  v35 = expected;
  if ( !method->rgctx_data )
  {
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1B640C8(&string___TypeInfo, v8);
    sub_1B640C8(&StringLiteral_117/*" "*/, v9);
    sub_1B640C8(&StringLiteral_19230/*"expectedEqual"*/, v10);
    sub_1B640C8(&StringLiteral_19231/*"expectedNotEqual"*/, v11);
    if ( !method->rgctx_data )
      sub_1BB6000(method);
  }
  v12 = System_Single__ToString(expected, (const MethodInfo *)&v35);
  v14 = System_Single__ToString(v13, (const MethodInfo *)&v34);
  v15 = sub_1B64170(string___TypeInfo, 5LL);
  if ( !v15 )
    sub_1B64324(0LL);
  v19 = v15;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v15 + 32) = v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)v12, v17, v18);
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_15;
  v22 = (int)StringLiteral_117/*" "*/;
  *(_QWORD *)(v19 + 40) = StringLiteral_117/*" "*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 40), v22, v20, v21);
  v25 = (__int64 *)&StringLiteral_19231/*"expectedNotEqual"*/;
  if ( !equal )
    v25 = (__int64 *)&StringLiteral_19230/*"expectedEqual"*/;
  if ( *(_DWORD *)(v19 + 24) <= 2u
    || (v26 = *v25,
        *(_QWORD *)(v19 + 48) = *v25,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 48), v26, v23, v24),
        *(_DWORD *)(v19 + 24) <= 3u)
    || (v29 = (int)StringLiteral_117/*" "*/,
        *(_QWORD *)(v19 + 56) = StringLiteral_117/*" "*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 56), v29, v27, v28),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_15:
    sub_1B6432C(v15, v16);
  }
  *(_QWORD *)(v19 + 64) = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 64), (int32_t)v14, v30, v31);
  v32 = System_String__Concat_61388924((System_String_array *)v19, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v32, message, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_int_(
        int32_t expected,
        int32_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2E19378 *method)
{
  const MethodInfo_2E19378_RGCTXs *rgctx_data; // x8
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x23
  System_String_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 *v25; // x8
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x20
  int32_t v34; // [xsp+8h] [xbp-38h] BYREF
  int32_t v35; // [xsp+Ch] [xbp-34h] BYREF

  v34 = actual;
  v35 = expected;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&actual);
    sub_1B640C8(&string___TypeInfo, v9);
    sub_1B640C8(&StringLiteral_117/*" "*/, v10);
    sub_1B640C8(&StringLiteral_19230/*"expectedEqual"*/, v11);
    sub_1B640C8(&StringLiteral_19231/*"expectedNotEqual"*/, v12);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6000(method);
      rgctx_data = method->rgctx_data;
    }
  }
  v13 = System_Int32__ToString((int32_t)&v35, (const MethodInfo *)rgctx_data[1]._0_T);
  v14 = System_Int32__ToString((int32_t)&v34, (const MethodInfo *)method->rgctx_data[1]._0_T);
  v15 = sub_1B64170(string___TypeInfo, 5LL);
  if ( !v15 )
    sub_1B64324(0LL);
  v19 = v15;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v15 + 32) = v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)v13, v17, v18);
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_15;
  v22 = (int)StringLiteral_117/*" "*/;
  *(_QWORD *)(v19 + 40) = StringLiteral_117/*" "*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 40), v22, v20, v21);
  v25 = (__int64 *)&StringLiteral_19231/*"expectedNotEqual"*/;
  if ( !equal )
    v25 = (__int64 *)&StringLiteral_19230/*"expectedEqual"*/;
  if ( *(_DWORD *)(v19 + 24) <= 2u
    || (v26 = *v25,
        *(_QWORD *)(v19 + 48) = *v25,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 48), v26, v23, v24),
        *(_DWORD *)(v19 + 24) <= 3u)
    || (v29 = (int)StringLiteral_117/*" "*/,
        *(_QWORD *)(v19 + 56) = StringLiteral_117/*" "*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 56), v29, v27, v28),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_15:
    sub_1B6432C(v15, v16);
  }
  *(_QWORD *)(v19 + 64) = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 64), (int32_t)v14, v30, v31);
  v32 = System_String__Concat_61388924((System_String_array *)v19, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v32, message, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_long_(
        int64_t expected,
        int64_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2E19544 *method)
{
  const MethodInfo_2E19544_RGCTXs *rgctx_data; // x8
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x23
  System_String_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 *v25; // x8
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x20
  int64_t v34; // [xsp+8h] [xbp-48h] BYREF
  int64_t v35; // [xsp+18h] [xbp-38h] BYREF

  v35 = expected;
  v34 = actual;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, actual);
    sub_1B640C8(&string___TypeInfo, v9);
    sub_1B640C8(&StringLiteral_117/*" "*/, v10);
    sub_1B640C8(&StringLiteral_19230/*"expectedEqual"*/, v11);
    sub_1B640C8(&StringLiteral_19231/*"expectedNotEqual"*/, v12);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6000(method);
      rgctx_data = method->rgctx_data;
    }
  }
  v13 = System_Int64__ToString((int64_t)&v35, (const MethodInfo *)rgctx_data[1]._0_T);
  v14 = System_Int64__ToString((int64_t)&v34, (const MethodInfo *)method->rgctx_data[1]._0_T);
  v15 = sub_1B64170(string___TypeInfo, 5LL);
  if ( !v15 )
    sub_1B64324(0LL);
  v19 = v15;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v15 + 32) = v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)v13, v17, v18);
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_15;
  v22 = (int)StringLiteral_117/*" "*/;
  *(_QWORD *)(v19 + 40) = StringLiteral_117/*" "*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 40), v22, v20, v21);
  v25 = (__int64 *)&StringLiteral_19231/*"expectedNotEqual"*/;
  if ( !equal )
    v25 = (__int64 *)&StringLiteral_19230/*"expectedEqual"*/;
  if ( *(_DWORD *)(v19 + 24) <= 2u
    || (v26 = *v25,
        *(_QWORD *)(v19 + 48) = *v25,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 48), v26, v23, v24),
        *(_DWORD *)(v19 + 24) <= 3u)
    || (v29 = (int)StringLiteral_117/*" "*/,
        *(_QWORD *)(v19 + 56) = StringLiteral_117/*" "*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 56), v29, v27, v28),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_15:
    sub_1B6432C(v15, v16);
  }
  *(_QWORD *)(v19 + 64) = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 64), (int32_t)v14, v30, v31);
  v32 = System_String__Concat_61388924((System_String_array *)v19, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v32, message, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_object_(
        Il2CppObject *expected,
        Il2CppObject *actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2E19718 *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x23
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 *v26; // x8
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x20

  if ( (byte_4A01EAD & 1) == 0 )
  {
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, actual);
    sub_1B640C8(&string___TypeInfo, v9);
    sub_1B640C8(&StringLiteral_117/*" "*/, v10);
    sub_1B640C8(&StringLiteral_22086/*"null"*/, v11);
    sub_1B640C8(&StringLiteral_19230/*"expectedEqual"*/, v12);
    sub_1B640C8(&StringLiteral_19231/*"expectedNotEqual"*/, v13);
    byte_4A01EAD = 1;
  }
  if ( expected )
    v14 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, bool, System_String_o *, const MethodInfo_2E19718 *))expected->klass->vtable[3].method)(
            expected,
            expected->klass->vtable[4].methodPtr,
            equal,
            message,
            method);
  else
    v14 = StringLiteral_22086/*"null"*/;
  if ( actual )
    v15 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))actual->klass->vtable[3].method)(
            actual,
            actual->klass->vtable[4].methodPtr);
  else
    v15 = StringLiteral_22086/*"null"*/;
  v16 = sub_1B64170(string___TypeInfo, 5LL);
  if ( !v16 )
    sub_1B64324(0LL);
  v20 = v16;
  if ( !*(_DWORD *)(v16 + 24) )
    goto LABEL_21;
  *(_QWORD *)(v16 + 32) = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 32), v14, v18, v19);
  if ( *(_DWORD *)(v20 + 24) <= 1u )
    goto LABEL_21;
  v23 = (int)StringLiteral_117/*" "*/;
  *(_QWORD *)(v20 + 40) = StringLiteral_117/*" "*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 40), v23, v21, v22);
  v26 = (__int64 *)(equal ? &StringLiteral_19231/*"expectedNotEqual"*/ : &StringLiteral_19230/*"expectedEqual"*/);
  if ( *(_DWORD *)(v20 + 24) <= 2u
    || (v27 = *v26,
        *(_QWORD *)(v20 + 48) = *v26,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 48), v27, v24, v25),
        *(_DWORD *)(v20 + 24) <= 3u)
    || (v30 = (int)StringLiteral_117/*" "*/,
        *(_QWORD *)(v20 + 56) = StringLiteral_117/*" "*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 56), v30, v28, v29),
        *(_DWORD *)(v20 + 24) <= 4u) )
  {
LABEL_21:
    sub_1B6432C(v16, v17);
  }
  *(_QWORD *)(v20 + 64) = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 64), v15, v31, v32);
  v33 = System_String__Concat_61388924((System_String_array *)v20, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v33, message, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetEffectiveAssertMessage(
        System_String_o *defaultMessage,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1

  if ( (byte_4A00BED & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_56/*"\n("*/, message);
    sub_1B640C8(&StringLiteral_815/*")"*/, v5);
    byte_4A00BED = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    return defaultMessage;
  else
    return System_String__Concat_61388660(
             message,
             (System_String_o *)StringLiteral_56/*"\n("*/,
             defaultMessage,
             (System_String_o *)StringLiteral_815/*")"*/,
             0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetNullAssertMessage(
        System_String_o *modelName,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_String_o *v7; // x20

  if ( (byte_4A00BF8 & 1) == 0 )
  {
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1B640C8(&StringLiteral_25175/*"が null です"*/, v5);
    byte_4A00BF8 = 1;
  }
  v7 = System_String__Concat_61375396(modelName, (System_String_o *)StringLiteral_25175/*"が null です"*/, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v7, message, v6);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetParseAssertMessage(
        System_String_o *value,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_String_o *v7; // x20

  if ( (byte_4A00BFA & 1) == 0 )
  {
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1B640C8(&StringLiteral_300/*" isNotNumbers"*/, v5);
    byte_4A00BFA = 1;
  }
  v7 = System_String__Concat_61375396(value, (System_String_o *)StringLiteral_300/*" isNotNumbers"*/, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v7, message, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__HasContainKey___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_T1__T2__o *dic,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2E19E74 *method)
{
  __int64 v7; // x21
  System_String_o *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x20
  __int64 v10; // x8
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x0
  __int64 v17; // x24
  int v18; // w8
  char *v19; // x23
  System_String_o *v20; // x25
  __int64 v21; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v22; // x1
  __int64 v23; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v24; // x1
  __int64 *v25; // x1
  __int64 v26; // x0
  __int64 v27; // x9
  __int64 v28; // x8
  __int64 v29; // x0
  __int64 *v30; // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v31; // x3
  System_String_o *v32; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v33; // [xsp+0h] [xbp-20h] BYREF
  System_String_o *v34; // [xsp+8h] [xbp-18h] BYREF
  char v35[4]; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v36; // [xsp+18h] [xbp-8h]

  v7 = *(_QWORD *)&line;
  monitor = (System_String_o *)key.monitor;
  klass = key.klass;
  v36 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v33 = key.klass;
  v10 = *(_QWORD *)(*(_QWORD *)&line + 56LL);
  if ( !v10 )
  {
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, key.klass);
    sub_1B640C8(&StringLiteral_25207/*"ディクショナリ"*/, v12);
    sub_1B640C8(&StringLiteral_833/*") の値がディクショナリに含まれていません"*/, v13);
    sub_1B640C8(&StringLiteral_20900/*"key("*/, v14);
    sub_1B640C8(&StringLiteral_25194/*"キー"*/, v15);
    v10 = *(_QWORD *)(v7 + 56);
    if ( !v10 )
    {
      sub_1BB6000(v7);
      v10 = *(_QWORD *)(v7 + 56);
    }
  }
  v16 = *(_QWORD *)(v10 + 8);
  v17 = *(unsigned int *)(v16 + 252);
  v18 = *(_DWORD *)(v16 + 252);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v18 = *(_DWORD *)(sub_1BB5FA4(v16) + 252);
  v19 = (char *)&v33 - (((unsigned int)(v18 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v20 = (System_String_o *)((char *)&v33 - ((v17 + 15) & 0x1FFFFFFF0LL));
  if ( !dic )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v30 = &StringLiteral_25207/*"ディクショナリ"*/;
    goto LABEL_25;
  }
  v21 = *(_QWORD *)(v7 + 56);
  if ( *(int *)(*(_QWORD *)(v21 + 8) + 40LL) >= 0 )
    v22 = &v33;
  else
    v22 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v33 - ((v17 + 15) & 0x1FFFFFFF0LL), v22, v17);
  if ( (sub_1B642D8(*(_QWORD *)(v21 + 8), (char *)&v33 - ((v17 + 15) & 0x1FFFFFFF0LL)) & 1) == 0 )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v30 = &StringLiteral_25194/*"キー"*/;
LABEL_25:
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)*v30, monitor, 0LL);
    return;
  }
  v23 = *(_QWORD *)(v7 + 56);
  if ( *(int *)(*(_QWORD *)(v23 + 8) + 40LL) >= 0 )
    v24 = &v33;
  else
    v24 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v33 - ((v17 + 15) & 0x1FFFFFFF0LL), v24, v17);
  v25 = *(__int64 **)(v23 + 16);
  v26 = *v25;
  if ( (*(_DWORD *)(*(_QWORD *)(v23 + 8) + 40LL) & 0x80000000) == 0 )
    v20 = (System_String_o *)v20->klass;
  v34 = v20;
  ((void (__fastcall *)(__int64, __int64 *, System_Collections_Generic_Dictionary_T1__T2__o *, System_String_o **, char *))v25[2])(
    v26,
    v25,
    dic,
    &v34,
    v35);
  if ( !v35[0] )
  {
    v27 = *(_QWORD *)(v7 + 56);
    v28 = *(_QWORD *)(v27 + 8);
    if ( (*(_BYTE *)(v28 + 309) & 1) != 0 )
    {
      v29 = *(_QWORD *)(v27 + 8);
    }
    else
    {
      LODWORD(v29) = sub_1BB5FA4(*(_QWORD *)(v27 + 8));
      v27 = *(_QWORD *)(v7 + 56);
      klass = v33;
      v28 = *(_QWORD *)(v27 + 8);
    }
    if ( *(int *)(v28 + 40) >= 0 )
      v31 = &v33;
    else
      v31 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    sub_1B64B30(v29, *(_QWORD *)(v27 + 24), (int)v19, v31);
    v32 = System_String__Concat_61386656(
            (System_String_o *)StringLiteral_20900/*"key("*/,
            v34,
            (System_String_o *)StringLiteral_833/*") の値がディクショナリに含まれていません"*/,
            0LL);
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetEffectiveAssertMessage(v32, monitor, 0LL);
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
  if ( (byte_4A00BF6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15834/*"[AssetData]\n{0}をロードできませんでした"*/, assetName);
    byte_4A00BF6 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_15834/*"[AssetData]\n{0}をロードできませんでした"*/, (Il2CppObject *)assetName, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__IsInRange(
        int32_t count,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x0
  System_String_o *v18; // x20
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v20; // [xsp+18h] [xbp-28h] BYREF
  int32_t v21; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4A00BF9 & 1) == 0 )
  {
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&int_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_20548/*"index({0}) の値が負です"*/, v11);
    sub_1B640C8(&StringLiteral_20549/*"index({0}) の値が配列の要素数({1})を超えています"*/, v12);
    byte_4A00BF9 = 1;
  }
  if ( (index & 0x80000000) != 0 )
  {
    v21 = index;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
    v15 = System_String__Format((System_String_o *)StringLiteral_20548/*"index({0}) の値が負です"*/, v17, 0LL);
  }
  else
  {
    if ( count > index )
      return;
    v20 = index;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    v19 = count;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    v15 = System_String__Format_61389768((System_String_o *)StringLiteral_20549/*"index({0}) の値が配列の要素数({1})を超えています"*/, v13, v14, 0LL);
  }
  v18 = v15;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  Fgo_Assertions_Assert__GetEffectiveAssertMessage(v18, message, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__IsInRange___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2E1A194 *method)
{
  __int64 v9; // x1

  if ( (byte_4A01EAF & 1) == 0 )
  {
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&StringLiteral_25293/*"配列"*/, v9);
    byte_4A01EAF = 1;
  }
  if ( !array )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25293/*"配列"*/, message, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__IsInRange___Il2CppFullySharedGenericType__48341264(
        System_Collections_Generic_List_T__o *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2E1A110 *method)
{
  __int64 v9; // x1

  if ( (byte_4A01EAE & 1) == 0 )
  {
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&StringLiteral_25220/*"リスト"*/, v9);
    byte_4A01EAE = 1;
  }
  if ( !array )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25220/*"リスト"*/, message, 0LL);
  }
}


void __fastcall Fgo_Assertions_Assert__IsNotNull_object_(
        Il2CppObject *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2E1A218 *method)
{
  Il2CppClass *klass; // x8
  UnityEngine_Object_c *v8; // x0
  unsigned int methodPtr_low; // w10
  __int64 v10; // x9
  Il2CppObject *v11; // x0

  if ( (byte_4A01EB0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, message);
    byte_4A01EB0 = 1;
  }
  if ( value )
  {
    klass = value->klass;
    v8 = UnityEngine_Object_TypeInfo;
    methodPtr_low = LOBYTE(value->klass->vtable[0].methodPtr);
    v10 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr);
    if ( methodPtr_low >= (unsigned int)v10
      && (UnityEngine_Object_c *)klass->_2.typeHierarchy[v10 - 1] == UnityEngine_Object_TypeInfo )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        klass = value->klass;
        v8 = UnityEngine_Object_TypeInfo;
        methodPtr_low = LOBYTE(value->klass->vtable[0].methodPtr);
        LODWORD(v10) = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr);
      }
      if ( methodPtr_low >= (unsigned int)v10 )
      {
        if ( (UnityEngine_Object_c *)klass->_2.typeHierarchy[(unsigned int)v10 - 1] == v8 )
          v11 = value;
        else
          v11 = 0LL;
      }
      else
      {
        v11 = 0LL;
      }
      UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v11, 0LL, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
// positive sp value has been detected, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__IsNotThrowAction(
        System_Action_o *action,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  __int64 v8; // x1

  if ( (byte_4A00BFC & 1) == 0 )
  {
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1B640C8(&StringLiteral_25182/*"アクション"*/, v8);
    byte_4A00BFC = 1;
  }
  if ( action )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, UnityEngine_GameObject_o *, System_String_o *, _QWORD, const MethodInfo *))action->fields.m_target)(
      action->fields.original_method_info,
      *(_QWORD *)&action->fields.extra_arg,
      gameObject,
      filePath,
      *(_QWORD *)&line,
      method);
  }
  else
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetNullAssertMessage(
      (System_String_o *)StringLiteral_25182/*"アクション"*/,
      message,
      (const MethodInfo *)gameObject);
  }
}


void __fastcall Fgo_Assertions_Assert__IsNull_object_(
        Il2CppObject *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2E1A2DC *method)
{
  Il2CppClass *klass; // x8
  UnityEngine_Object_c *v8; // x0
  unsigned int methodPtr_low; // w10
  __int64 v10; // x9
  Il2CppObject *v11; // x0

  if ( (byte_4A01EB1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, message);
    byte_4A01EB1 = 1;
  }
  if ( value )
  {
    klass = value->klass;
    v8 = UnityEngine_Object_TypeInfo;
    methodPtr_low = LOBYTE(value->klass->vtable[0].methodPtr);
    v10 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr);
    if ( methodPtr_low >= (unsigned int)v10
      && (UnityEngine_Object_c *)klass->_2.typeHierarchy[v10 - 1] == UnityEngine_Object_TypeInfo )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        klass = value->klass;
        v8 = UnityEngine_Object_TypeInfo;
        methodPtr_low = LOBYTE(value->klass->vtable[0].methodPtr);
        LODWORD(v10) = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr);
      }
      if ( methodPtr_low >= (unsigned int)v10 )
      {
        if ( (UnityEngine_Object_c *)klass->_2.typeHierarchy[(unsigned int)v10 - 1] == v8 )
          v11 = value;
        else
          v11 = 0LL;
      }
      else
      {
        v11 = 0LL;
      }
      UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
    }
  }
}


void __fastcall Fgo_Assertions_Assert__IsSerializeFieldNotNull_object_(
        Il2CppObject *value,
        System_String_o *fieldName,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2E1A3A0 *method)
{
  if ( (byte_4A01EB2 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15881/*"[SerializeField]\n{0}の参照が切れています"*/, fieldName);
    byte_4A01EB2 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_15881/*"[SerializeField]\n{0}の参照が切れています"*/, (Il2CppObject *)fieldName, 0LL);
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
  __int64 v7; // x1
  System_String_o *v8; // x0
  Fgo_Assertions_Assert_c *v9; // x8
  System_String_o *v10; // x19
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x9
  struct System_Action_string__o *onFailedAction; // x9
  __int64 v13; // x0

  if ( (byte_4A00BE9 & 1) == 0 )
  {
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, expected);
    sub_1B640C8(&StringLiteral_24885/*"{0}\n(expected={1}, actual={2})"*/, v7);
    byte_4A00BE9 = 1;
  }
  v8 = System_String__Format_61389836(
         (System_String_o *)StringLiteral_24885/*"{0}\n(expected={1}, actual={2})"*/,
         (Il2CppObject *)message,
         (Il2CppObject *)expected,
         (Il2CppObject *)actual,
         0LL);
  v9 = Fgo_Assertions_Assert_TypeInfo;
  v10 = v8;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v9 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v9->static_fields;
  if ( static_fields->enable )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = Fgo_Assertions_Assert_TypeInfo;
      static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
    }
    onFailedAction = static_fields->onFailedAction;
    if ( onFailedAction )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        onFailedAction = Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedAction;
        if ( !onFailedAction )
          sub_1B64324(v13);
      }
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))onFailedAction->fields.m_target)(
        onFailedAction->fields.original_method_info,
        v10,
        *(_QWORD *)&onFailedAction->fields.extra_arg);
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
  if ( (byte_4A00BF7 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15859/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/, key);
    byte_4A00BF7 = 1;
  }
  System_String__Format_61389768((System_String_o *)StringLiteral_15859/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/, (Il2CppObject *)name, (Il2CppObject *)key, 0LL);
}


void __fastcall Fgo_Assertions_Assert__OnFailed_46271676(
        System_String_o *caption,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  System_String_o *v9; // x21
  Il2CppObject *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_o *v17; // x23
  Il2CppObject *FileName; // x23
  Il2CppObject *v19; // x0
  Il2CppObject *v20; // x20
  System_String_o *name; // x0
  System_String_o *v22; // x0
  Fgo_Assertions_Assert_c *v23; // x8
  System_String_o *v24; // x21
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x9
  struct System_Action_string__o *onFailedAction; // x9
  struct System_Action_string__string__string__o *onFailedSendReport; // x9
  int32_t v28; // [xsp+Ch] [xbp-54h] BYREF

  v9 = message;
  v10 = (Il2CppObject *)caption;
  if ( (byte_4A00BEA & 1) == 0 )
  {
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1B640C8(&int_TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&System_IO_Path_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_24925/*"{0}({1})"*/, v14);
    sub_1B640C8(&StringLiteral_61/*"\nGameObject:"*/, v15);
    caption = (System_String_o *)sub_1B640C8(&StringLiteral_24886/*"{0}\n{1}\n{2}"*/, v16);
    byte_4A00BEA = 1;
  }
  if ( !filePath )
    goto LABEL_27;
  v17 = System_String__Replace(filePath, 0x5Cu, 0x2Fu, 0LL);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = (Il2CppObject *)System_IO_Path__GetFileName(v17, 0LL);
  v28 = line;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  v20 = (Il2CppObject *)System_String__Format_61389768((System_String_o *)StringLiteral_24925/*"{0}({1})"*/, FileName, v19, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  caption = (System_String_o *)UnityEngine_Object__op_Inequality(0LL, (UnityEngine_Object_o *)gameObject, 0LL);
  if ( ((unsigned __int8)caption & 1) != 0 )
  {
    if ( !gameObject )
      goto LABEL_27;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    v9 = System_String__Concat_61386656(v9, (System_String_o *)StringLiteral_61/*"\nGameObject:"*/, name, 0LL);
  }
  v22 = System_String__Format_61389836((System_String_o *)StringLiteral_24886/*"{0}\n{1}\n{2}"*/, v10, (Il2CppObject *)v9, v20, 0LL);
  v23 = Fgo_Assertions_Assert_TypeInfo;
  v24 = v22;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v23 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v23->static_fields;
  if ( static_fields->enable )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = Fgo_Assertions_Assert_TypeInfo;
      static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
    }
    onFailedAction = static_fields->onFailedAction;
    if ( onFailedAction )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        onFailedAction = Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedAction;
        if ( !onFailedAction )
          goto LABEL_27;
      }
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))onFailedAction->fields.m_target)(
        onFailedAction->fields.original_method_info,
        v24,
        *(_QWORD *)&onFailedAction->fields.extra_arg);
      v23 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = Fgo_Assertions_Assert_TypeInfo;
    }
    onFailedSendReport = v23->static_fields->onFailedSendReport;
    if ( onFailedSendReport )
    {
      if ( v23->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v23),
            (onFailedSendReport = Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedSendReport) != 0LL) )
      {
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, System_String_o *, Il2CppObject *, _QWORD))onFailedSendReport->fields.m_target)(
          onFailedSendReport->fields.original_method_info,
          v10,
          v24,
          v20,
          *(_QWORD *)&onFailedSendReport->fields.extra_arg);
        return;
      }
LABEL_27:
      sub_1B64324(caption);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__SetOnFailedAction(
        System_Action_string__o *action,
        bool force,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  Fgo_Assertions_Assert_c *v8; // x0
  Fgo_Assertions_Assert_c *v9; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_4A00BEB & 1) == 0 )
  {
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, force);
    sub_1B640C8(&UnityEngine_Debug_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_25265/*"既に表明違反時の処理が設定されています"*/, v7);
    byte_4A00BEB = 1;
  }
  if ( !force )
  {
    v8 = Fgo_Assertions_Assert_TypeInfo;
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
      v8 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( v8->static_fields->onFailedAction )
    {
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_25265/*"既に表明違反時の処理が設定されています"*/, 0LL);
    }
  }
  v9 = Fgo_Assertions_Assert_TypeInfo;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v9 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->onFailedAction = action;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->onFailedAction, (int32_t)action, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__SetOnFailedSendReport(
        System_Action_string__string__string__o *action,
        bool force,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  Fgo_Assertions_Assert_c *v8; // x0
  Fgo_Assertions_Assert_c *v9; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_4A00BEC & 1) == 0 )
  {
    sub_1B640C8(&Fgo_Assertions_Assert_TypeInfo, force);
    sub_1B640C8(&UnityEngine_Debug_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_25265/*"既に表明違反時の処理が設定されています"*/, v7);
    byte_4A00BEC = 1;
  }
  if ( !force )
  {
    v8 = Fgo_Assertions_Assert_TypeInfo;
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
      v8 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( v8->static_fields->onFailedSendReport )
    {
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_25265/*"既に表明違反時の処理が設定されています"*/, 0LL);
    }
  }
  v9 = Fgo_Assertions_Assert_TypeInfo;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v9 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->onFailedSendReport = action;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&static_fields->onFailedSendReport,
    (int32_t)action,
    (int32_t)method,
    v3);
}


void __fastcall Fgo_Assertions_Assert_StringFormatParam___ctor(
        Fgo_Assertions_Assert_StringFormatParam_o *this,
        System_String_o *aFormat,
        System_Object_array *aArgs,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.format = aFormat;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)aFormat, v7, v8);
  this->fields.args = aArgs;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.args, (int32_t)aArgs, v9, v10);
}


void __fastcall Fgo_Assertions_AssertQueue___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Queue_T__o *v5; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A00C03 & 1) == 0 )
  {
    sub_1B640C8(&Fgo_Assertions_AssertQueue_TypeInfo, v1);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_string___ctor__, v3);
    sub_1B640C8(&System_Collections_Generic_Queue_string__TypeInfo, v4);
    byte_4A00C03 = 1;
  }
  v5 = (System_Collections_Generic_Queue_T__o *)sub_1B64314(System_Collections_Generic_Queue_string__TypeInfo, v1, v2);
  System_Collections_Generic_Queue_object____ctor(
    v5,
    (const MethodInfo_362251C *)Method_System_Collections_Generic_Queue_string___ctor__);
  Fgo_Assertions_AssertQueue_TypeInfo->static_fields->queue = (struct System_Collections_Generic_Queue_string__o *)v5;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)Fgo_Assertions_AssertQueue_TypeInfo->static_fields,
    (int32_t)v5,
    v6,
    v7);
  static_fields = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
  static_fields->onFailedAction = 0LL;
  static_fields = (struct Fgo_Assertions_AssertQueue_StaticFields *)((char *)static_fields + 16);
  LOBYTE(static_fields[-1].onFailedAction) = 1;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)static_fields, 0, v9, v10);
}


void __fastcall Fgo_Assertions_AssertQueue__Clear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Fgo_Assertions_AssertQueue_c *v3; // x0
  System_Collections_Generic_Queue_T__o *queue; // x0

  if ( (byte_4A00C02 & 1) == 0 )
  {
    sub_1B640C8(&Fgo_Assertions_AssertQueue_TypeInfo, v1);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_string__Clear__, v2);
    byte_4A00C02 = 1;
  }
  v3 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v3 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  queue = (System_Collections_Generic_Queue_T__o *)v3->static_fields->queue;
  if ( !queue )
    sub_1B64324(0LL);
  System_Collections_Generic_Queue_object___Clear(
    queue,
    (const MethodInfo_36227A4 *)Method_System_Collections_Generic_Queue_string__Clear__);
}


void __fastcall Fgo_Assertions_AssertQueue__Dequeue(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_Queue_T__o *queue; // x0
  struct Fgo_Assertions_AssertQueue_StaticFields *syncRoot; // x8
  int32_t size; // w20
  Il2CppObject *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4A00C01 & 1) == 0 )
  {
    sub_1B640C8(&Fgo_Assertions_AssertQueue_TypeInfo, v1);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_string__Dequeue__, v2);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_string__get_Count__, v3);
    byte_4A00C01 = 1;
  }
  queue = (System_Collections_Generic_Queue_T__o *)Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    queue = (System_Collections_Generic_Queue_T__o *)Fgo_Assertions_AssertQueue_TypeInfo;
  }
  syncRoot = (struct Fgo_Assertions_AssertQueue_StaticFields *)queue[3].fields._syncRoot;
  if ( !syncRoot->queue )
    goto LABEL_12;
  size = syncRoot->queue->fields._size;
  if ( queue[4].fields._size )
  {
    if ( size )
      goto LABEL_8;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(queue);
    syncRoot = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
    if ( size )
    {
LABEL_8:
      queue = (System_Collections_Generic_Queue_T__o *)syncRoot->queue;
      if ( syncRoot->queue )
      {
        v7 = System_Collections_Generic_Queue_object___Dequeue(
               queue,
               (const MethodInfo_3622C74 *)Method_System_Collections_Generic_Queue_string__Dequeue__);
        Fgo_Assertions_AssertQueue__OnFailed((System_String_o *)v7, v8);
        return;
      }
LABEL_12:
      sub_1B64324(queue);
    }
  }
  syncRoot->isReady = 1;
}


void __fastcall Fgo_Assertions_AssertQueue__Enqueue(System_String_o *message, const MethodInfo *method)
{
  __int64 v3; // x1
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x8
  _BOOL4 isReady; // w21

  if ( (byte_4A00C00 & 1) == 0 )
  {
    sub_1B640C8(&Fgo_Assertions_AssertQueue_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_string__Enqueue__, v3);
    byte_4A00C00 = 1;
  }
  if ( Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    static_fields = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
    if ( static_fields->isReady )
    {
LABEL_5:
      static_fields->isReady = 0;
      Fgo_Assertions_AssertQueue__OnFailed(message, method);
      return;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    static_fields = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
    isReady = static_fields->isReady;
    if ( Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
    {
      if ( static_fields->isReady )
        goto LABEL_5;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
      static_fields = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
      if ( isReady )
        goto LABEL_5;
    }
  }
  if ( !static_fields->queue )
    sub_1B64324(0LL);
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)static_fields->queue,
    (Il2CppObject *)message,
    (const MethodInfo_3622AE4 *)Method_System_Collections_Generic_Queue_string__Enqueue__);
}


void __fastcall Fgo_Assertions_AssertQueue__OnFailed(System_String_o *message, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Fgo_Assertions_AssertQueue_c *v5; // x0
  struct System_Action_string__o *onFailedAction; // x8
  __int64 v7; // x0

  if ( (byte_4A00BFE & 1) == 0 )
  {
    sub_1B640C8(&Fgo_Assertions_AssertQueue_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Debug_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_25283/*"表明違反時処理が設定されていません"*/, v4);
    byte_4A00BFE = 1;
  }
  v5 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v5 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  onFailedAction = v5->static_fields->onFailedAction;
  if ( onFailedAction )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      onFailedAction = Fgo_Assertions_AssertQueue_TypeInfo->static_fields->onFailedAction;
      if ( !onFailedAction )
        sub_1B64324(v7);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))onFailedAction->fields.m_target)(
      onFailedAction->fields.original_method_info,
      message,
      *(_QWORD *)&onFailedAction->fields.extra_arg);
  }
  else
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_25283/*"表明違反時処理が設定されていません"*/, 0LL);
  }
}


void __fastcall Fgo_Assertions_AssertQueue__SetOnFailedAction(
        System_Action_string__o *action,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  Fgo_Assertions_AssertQueue_c *v5; // x0
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x0

  if ( (byte_4A00BFF & 1) == 0 )
  {
    sub_1B640C8(&Fgo_Assertions_AssertQueue_TypeInfo, method);
    byte_4A00BFF = 1;
  }
  v5 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v5 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->onFailedAction = action;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->onFailedAction, (int32_t)action, v2, v3);
}