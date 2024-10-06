void __fastcall Fgo_Assertions_Assert___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0
  struct Fgo_Assertions_Assert_StaticFields *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A74635 & 1) == 0 )
  {
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, v1);
    byte_4A74635 = 1;
  }
  static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
  static_fields->enable = 1;
  static_fields->onFailedAction = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->onFailedAction, 0, v2, v3);
  v5 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v5->onFailedSendReport = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v5->onFailedSendReport, 0, v6, v7);
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

  if ( (byte_4A74626 & 1) == 0 )
  {
    sub_1B90010(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___, gameObject);
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4A74626 = 1;
  }
  if ( !byte_4A6A9C5 )
  {
    sub_1B90010(&UnityEngine_Mathf_TypeInfo, gameObject);
    byte_4A6A9C5 = 1;
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
      (const MethodInfo_2E6E688 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
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

  if ( (byte_4A74627 & 1) == 0 )
  {
    sub_1B90010(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___, *(_QWORD *)&actual);
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4A74627 = 1;
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
      (const MethodInfo_2E6E0EC *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_46608108(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  __int64 v10; // x1

  if ( (byte_4A74628 & 1) == 0 )
  {
    sub_1B90010(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___, actual);
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4A74628 = 1;
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
      (const MethodInfo_2E6E2B8 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_46608268(
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

  if ( (byte_4A74629 & 1) == 0 )
  {
    sub_1B90010(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___, actual);
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, v10);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v11);
    byte_4A74629 = 1;
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
          (const MethodInfo_2E6E48C *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
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
        const MethodInfo_2E6D154 *method)
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
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x0
  _QWORD *v24; // x19
  __int64 v25; // x27
  void **v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  _QWORD *v30; // x19
  __int64 *v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x0
  __int64 v36; // x10
  _QWORD *v37; // x19
  void **v38; // x1
  _QWORD *v39; // x19
  __int64 *v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x0
  __int64 v45; // x10
  _QWORD *v46; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v47; // x1
  _QWORD *v48; // x19
  __int64 *v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x0
  __int64 methodPtr_low; // x10
  _QWORD *v55; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v56; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v57; // x1
  _QWORD *v58; // x26
  void **v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  __int64 v63; // x0
  _QWORD *v64; // x9
  __int64 v65; // x26
  __int64 v66; // x8
  int v67; // w0
  __int64 v68; // x1
  int v69; // w10
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v70; // x3
  _QWORD *v71; // x25
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v72; // x1
  void **v73; // x1
  __int64 *v74; // x1
  __int64 v75; // x0
  _QWORD *v76; // x19
  __int64 *v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  __int64 v81; // x0
  __int64 v82; // x10
  __int64 v83; // [xsp+0h] [xbp-60h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v84; // [xsp+8h] [xbp-58h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-50h]
  void *v86; // [xsp+18h] [xbp-48h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v87; // [xsp+20h] [xbp-40h] BYREF
  __int64 v88[4]; // [xsp+28h] [xbp-38h] BYREF
  char v89[12]; // [xsp+48h] [xbp-18h] BYREF
  char v90; // [xsp+54h] [xbp-Ch] BYREF
  __int64 v91; // [xsp+58h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  monitor = (void **)expected.monitor;
  klass = expected.klass;
  v91 = *(_QWORD *)(StatusReg + 40);
  v86 = expected.monitor;
  v87 = expected.klass;
  v10 = filePath[2].monitor;
  v84 = actual.klass;
  if ( !v10 )
  {
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, expected.monitor);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v11);
    v10 = filePath[2].monitor;
    if ( !v10 )
    {
      sub_1BE1F48(filePath);
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
    v14 = sub_1BE1EEC(v12);
    v10 = filePath[2].monitor;
    v15 = *(_DWORD *)(v14 + 252);
    v12 = *v10;
  }
  v16 = (char *)&v83 - (((unsigned int)(v15 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v17 = (__int64 *)((char *)&v83 - ((v13 + 15) & 0x1FFFFFFF0LL));
  v18 = v17;
  if ( *(int *)(v12 + 40) >= 0 )
    v19 = &v87;
  else
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy(&v83, v19, v13);
  v23 = j_il2cpp_value_box_0(*v10, (char *)&v83 - ((v13 + 15) & 0x1FFFFFFF0LL), v20, v21, v22);
  v24 = filePath[2].monitor;
  v25 = v23;
  if ( *(int *)(*v24 + 40LL) >= 0 )
    v26 = &v86;
  else
    v26 = monitor;
  memcpy((char *)&v83 - ((v13 + 15) & 0x1FFFFFFF0LL), v26, v13);
  if ( v25 != j_il2cpp_value_box_0(*v24, (char *)&v83 - ((v13 + 15) & 0x1FFFFFFF0LL), v27, v28, v29) )
  {
    v30 = filePath[2].monitor;
    v31 = *(int *)(*v30 + 40LL) >= 0 ? (__int64 *)&v87 : (__int64 *)klass;
    if ( (memcpy((char *)&v83 - ((v13 + 15) & 0x1FFFFFFF0LL), v31, v13),
          (v35 = j_il2cpp_value_box_0(*v30, (char *)&v83 - ((v13 + 15) & 0x1FFFFFFF0LL), v32, v33, v34)) == 0)
      || (v36 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v35 + 304LL) < (unsigned int)v36)
      || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v35 + 200LL) + 8 * v36 - 8) != UnityEngine_Object_TypeInfo
      || ((v37 = filePath[2].monitor, *(int *)(*v37 + 40LL) >= 0) ? (v38 = &v86) : (v38 = monitor),
          memcpy((char *)&v83 - ((v13 + 15) & 0x1FFFFFFF0LL), v38, v13),
          (sub_1B90220(*v37, (char *)&v83 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
    {
      v39 = filePath[2].monitor;
      v40 = (__int64 *)(*(int *)(*v39 + 40LL) >= 0 ? &v86 : monitor);
      if ( (memcpy((char *)&v83 - ((v13 + 15) & 0x1FFFFFFF0LL), v40, v13),
            (v44 = j_il2cpp_value_box_0(*v39, (char *)&v83 - ((v13 + 15) & 0x1FFFFFFF0LL), v41, v42, v43)) == 0)
        || (v45 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)v44 + 304LL) < (unsigned int)v45)
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v44 + 200LL) + 8 * v45 - 8) != UnityEngine_Object_TypeInfo
        || ((v46 = filePath[2].monitor, *(int *)(*v46 + 40LL) >= 0)
          ? (v47 = &v87)
          : (v47 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v87),
            memcpy((char *)&v83 - ((v13 + 15) & 0x1FFFFFFF0LL), v47, v13),
            (sub_1B90220(*v46, (char *)&v83 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
      {
        v48 = filePath[2].monitor;
        v49 = *(int *)(*v48 + 40LL) >= 0 ? (__int64 *)&v87 : (__int64 *)v87;
        memcpy((char *)&v83 - ((v13 + 15) & 0x1FFFFFFF0LL), v49, v13);
        v53 = j_il2cpp_value_box_0(*v48, (char *)&v83 - ((v13 + 15) & 0x1FFFFFFF0LL), v50, v51, v52);
        if ( !v53 )
          goto LABEL_40;
        methodPtr_low = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)v53 + 304LL) < (unsigned int)methodPtr_low
          || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v53 + 200LL) + 8 * methodPtr_low - 8) != UnityEngine_Object_TypeInfo )
        {
          goto LABEL_40;
        }
        v76 = filePath[2].monitor;
        v77 = (__int64 *)(*(int *)(*v76 + 40LL) >= 0 ? &v86 : monitor);
        memcpy((char *)&v83 - ((v13 + 15) & 0x1FFFFFFF0LL), v77, v13);
        v81 = j_il2cpp_value_box_0(*v76, (char *)&v83 - ((v13 + 15) & 0x1FFFFFFF0LL), v78, v79, v80);
        if ( !v81
          || (v82 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
              *(unsigned __int8 *)(*(_QWORD *)v81 + 304LL) < (unsigned int)v82)
          || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v81 + 200LL) + 8 * v82 - 8) != UnityEngine_Object_TypeInfo )
        {
LABEL_40:
          v55 = filePath[2].monitor;
          v56 = v87;
          if ( *(int *)(*v55 + 40LL) >= 0 )
            v57 = &v87;
          else
            v57 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v87;
          memcpy((char *)&v83 - ((v13 + 15) & 0x1FFFFFFF0LL), v57, v13);
          if ( (sub_1B90220(*v55, (char *)&v83 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
          {
            v58 = filePath[2].monitor;
            if ( *(int *)(*v58 + 40LL) >= 0 )
              v59 = &v86;
            else
              v59 = monitor;
            memcpy((char *)&v83 - ((v13 + 15) & 0x1FFFFFFF0LL), v59, v13);
            v63 = j_il2cpp_value_box_0(*v58, (char *)&v83 - ((v13 + 15) & 0x1FFFFFFF0LL), v60, v61, v62);
            v64 = filePath[2].monitor;
            v65 = v63;
            v66 = *v64;
            if ( (*(_BYTE *)(*v64 + 309LL) & 1) == 0 )
            {
              v67 = sub_1BE1EEC(*v64);
              v64 = filePath[2].monitor;
              v56 = v87;
              LODWORD(v66) = v67;
            }
            v68 = v64[1];
            v69 = *(_DWORD *)(*v64 + 40LL);
            v88[0] = v65;
            if ( v69 >= 0 )
              v70 = &v87;
            else
              v70 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v56;
            sub_1B90A78(v66, v68, (int)v16, v70);
            if ( v89[0] )
              return;
            v56 = v87;
          }
          v71 = filePath[2].monitor;
          if ( *(int *)(*v71 + 40LL) >= 0 )
            v72 = &v87;
          else
            v72 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v56;
          memcpy((char *)&v83 - ((v13 + 15) & 0x1FFFFFFF0LL), v72, v13);
          if ( *(int *)(*v71 + 40LL) >= 0 )
            v73 = &v86;
          else
            v73 = monitor;
          memcpy((char *)&v83 - ((v13 + 15) & 0x1FFFFFFF0LL), v73, v13);
          if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
            v71 = filePath[2].monitor;
          }
          v74 = (__int64 *)v71[2];
          v75 = *v74;
          if ( (*(_DWORD *)(*v71 + 40LL) & 0x80000000) == 0 )
          {
            v17 = (_QWORD *)*v17;
            v18 = (_QWORD *)*v18;
          }
          v88[0] = (__int64)v17;
          v88[1] = (__int64)v18;
          v90 = 1;
          v88[2] = (__int64)&v90;
          v88[3] = (__int64)v84;
          ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, char *))v74[2])(v75, v74, 0LL, v88, v89);
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

  if ( (byte_4A7462A & 1) == 0 )
  {
    sub_1B90010(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___, gameObject);
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4A7462A = 1;
  }
  if ( !byte_4A6A9C5 )
  {
    sub_1B90010(&UnityEngine_Mathf_TypeInfo, gameObject);
    byte_4A6A9C5 = 1;
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
      (const MethodInfo_2E6E688 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
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

  if ( (byte_4A7462B & 1) == 0 )
  {
    sub_1B90010(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___, *(_QWORD *)&actual);
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4A7462B = 1;
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
      (const MethodInfo_2E6E0EC *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_46608976(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  __int64 v10; // x1

  if ( (byte_4A7462C & 1) == 0 )
  {
    sub_1B90010(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___, actual);
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4A7462C = 1;
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
      (const MethodInfo_2E6E2B8 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_46609136(
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

  if ( (byte_4A7462D & 1) == 0 )
  {
    sub_1B90010(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___, actual);
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, v10);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v11);
    byte_4A7462D = 1;
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
      (const MethodInfo_2E6E48C *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o expected,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2E6D62C *method)
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
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x0
  _QWORD *v23; // x19
  __int64 v24; // x27
  void **v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x0
  _QWORD *v30; // x19
  __int64 v31; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x10
  _QWORD *v39; // x19
  void **v40; // x1
  _QWORD *v41; // x19
  __int64 *v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  __int64 v46; // x0
  __int64 v47; // x10
  _QWORD *v48; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v49; // x1
  _QWORD *v50; // x19
  __int64 *v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  __int64 v55; // x0
  __int64 methodPtr_low; // x10
  _QWORD *v57; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v58; // x28
  __int64 *v59; // x1
  _QWORD *v60; // x19
  void **v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  __int64 v65; // x0
  _QWORD *v66; // x9
  __int64 v67; // x26
  __int64 v68; // x8
  int v69; // w0
  __int64 v70; // x1
  __int64 *v71; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v72; // x1
  void **v73; // x1
  Fgo_Assertions_Assert_c *v74; // x0
  void **v75; // x1
  __int64 *v76; // x1
  __int64 v77; // x0
  _QWORD *v78; // x19
  __int64 *v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  __int64 v83; // x0
  __int64 v84; // x10
  __int64 v85; // [xsp+0h] [xbp-60h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v86; // [xsp+8h] [xbp-58h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-50h]
  void *v88; // [xsp+18h] [xbp-48h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v89; // [xsp+20h] [xbp-40h] BYREF
  __int64 v90[4]; // [xsp+28h] [xbp-38h] BYREF
  char v91[12]; // [xsp+48h] [xbp-18h] BYREF
  char v92; // [xsp+54h] [xbp-Ch] BYREF
  __int64 v93; // [xsp+58h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  monitor = (void **)expected.monitor;
  klass = expected.klass;
  v93 = *(_QWORD *)(StatusReg + 40);
  v88 = expected.monitor;
  v89 = expected.klass;
  v10 = filePath[2].monitor;
  v86 = actual.klass;
  if ( !v10 )
  {
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, expected.monitor);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v11);
    v10 = filePath[2].monitor;
    if ( !v10 )
    {
      sub_1BE1F48(filePath);
      v10 = filePath[2].monitor;
    }
  }
  v12 = *v10;
  v13 = *(_DWORD *)(*v10 + 252LL);
  v14 = v13;
  if ( (*(_BYTE *)(*v10 + 309LL) & 1) == 0 )
  {
    v15 = sub_1BE1EEC(v12);
    v10 = filePath[2].monitor;
    v13 = *(_DWORD *)(v15 + 252);
    v12 = *v10;
  }
  v85 = (__int64)&v85 - ((v13 + 16 + 15LL) & 0x1FFFFFFF0LL);
  v16 = (__int64 *)((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL));
  v17 = v16;
  if ( *(int *)(v12 + 40) >= 0 )
    v18 = &v89;
  else
    v18 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy(&v85, v18, v14);
  v22 = j_il2cpp_value_box_0(*v10, (char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v19, v20, v21);
  v23 = filePath[2].monitor;
  v24 = v22;
  if ( *(int *)(*v23 + 40LL) >= 0 )
    v25 = &v88;
  else
    v25 = monitor;
  memcpy((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v25, v14);
  v29 = j_il2cpp_value_box_0(*v23, (char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v26, v27, v28);
  v30 = filePath[2].monitor;
  v31 = v29;
  if ( *(int *)(*v30 + 40LL) >= 0 )
    v32 = &v89;
  else
    v32 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v32, v14);
  v36 = *v30;
  if ( v24 == v31 )
  {
    if ( *(int *)(v36 + 40) >= 0 )
      v75 = &v88;
    else
      v75 = monitor;
    memcpy((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v75, v14);
    v74 = Fgo_Assertions_Assert_TypeInfo;
    if ( Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      goto LABEL_65;
LABEL_64:
    j_il2cpp_runtime_class_init_0(v74);
    v30 = filePath[2].monitor;
LABEL_65:
    v76 = (__int64 *)v30[1];
    v77 = *v76;
    if ( (*(_DWORD *)(*v30 + 40LL) & 0x80000000) == 0 )
    {
      v16 = (_QWORD *)*v16;
      v17 = (_QWORD *)*v17;
    }
    v90[2] = (__int64)&v92;
    v92 = 0;
    v90[0] = (__int64)v16;
    v90[1] = (__int64)v17;
    v90[3] = (__int64)v86;
    ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, char *))v76[2])(v77, v76, 0LL, v90, v91);
    return;
  }
  v37 = j_il2cpp_value_box_0(v36, (char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v33, v34, v35);
  if ( !v37
    || (v38 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*(_QWORD *)v37 + 304LL) < (unsigned int)v38)
    || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v37 + 200LL) + 8 * v38 - 8) != UnityEngine_Object_TypeInfo
    || ((v39 = filePath[2].monitor, *(int *)(*v39 + 40LL) >= 0) ? (v40 = &v88) : (v40 = monitor),
        memcpy((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v40, v14),
        (sub_1B90220(*v39, (char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
  {
    v41 = filePath[2].monitor;
    v42 = (__int64 *)(*(int *)(*v41 + 40LL) >= 0 ? &v88 : monitor);
    if ( (memcpy((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v42, v14),
          (v46 = j_il2cpp_value_box_0(*v41, (char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v43, v44, v45)) == 0)
      || (v47 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v46 + 304LL) < (unsigned int)v47)
      || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v46 + 200LL) + 8 * v47 - 8) != UnityEngine_Object_TypeInfo
      || ((v48 = filePath[2].monitor, *(int *)(*v48 + 40LL) >= 0)
        ? (v49 = &v89)
        : (v49 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v89),
          memcpy((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v49, v14),
          (sub_1B90220(*v48, (char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
    {
      v50 = filePath[2].monitor;
      v51 = *(int *)(*v50 + 40LL) >= 0 ? (__int64 *)&v89 : (__int64 *)v89;
      memcpy((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v51, v14);
      v55 = j_il2cpp_value_box_0(*v50, (char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v52, v53, v54);
      if ( !v55 )
        goto LABEL_39;
      methodPtr_low = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v55 + 304LL) < (unsigned int)methodPtr_low
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v55 + 200LL) + 8 * methodPtr_low - 8) != UnityEngine_Object_TypeInfo )
      {
        goto LABEL_39;
      }
      v78 = filePath[2].monitor;
      v79 = (__int64 *)(*(int *)(*v78 + 40LL) >= 0 ? &v88 : monitor);
      memcpy((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v79, v14);
      v83 = j_il2cpp_value_box_0(*v78, (char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v80, v81, v82);
      if ( !v83
        || (v84 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)v83 + 304LL) < (unsigned int)v84)
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v83 + 200LL) + 8 * v84 - 8) != UnityEngine_Object_TypeInfo )
      {
LABEL_39:
        v57 = filePath[2].monitor;
        v58 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v89;
        v59 = *(int *)(*v57 + 40LL) >= 0 ? (__int64 *)&v89 : (__int64 *)v89;
        memcpy((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v59, v14);
        if ( (sub_1B90220(*v57, (char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
        {
          v60 = filePath[2].monitor;
          if ( *(int *)(*v60 + 40LL) >= 0 )
            v61 = &v88;
          else
            v61 = monitor;
          memcpy((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v61, v14);
          v65 = j_il2cpp_value_box_0(*v60, (char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v62, v63, v64);
          v66 = filePath[2].monitor;
          v67 = v65;
          v68 = *v66;
          if ( (*(_BYTE *)(*v66 + 309LL) & 1) == 0 )
          {
            v69 = sub_1BE1EEC(*v66);
            v66 = filePath[2].monitor;
            v58 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v89;
            LODWORD(v68) = v69;
          }
          v70 = v66[2];
          v71 = (__int64 *)(*(int *)(*v66 + 40LL) >= 0 ? &v89 : v58);
          v90[0] = v67;
          sub_1B90A78(v68, v70, v85, v71);
          if ( v91[0] )
          {
            v30 = filePath[2].monitor;
            if ( *(int *)(*v30 + 40LL) >= 0 )
              v72 = &v89;
            else
              v72 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v89;
            memcpy((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v72, v14);
            if ( *(int *)(*v30 + 40LL) >= 0 )
              v73 = &v88;
            else
              v73 = monitor;
            memcpy((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v73, v14);
            v74 = Fgo_Assertions_Assert_TypeInfo;
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
  __int64 v27; // x1
  struct System_Object_array *v28; // x8
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  __int64 *v31; // x8
  __int64 *v32; // x8
  int32_t result; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v34; // [xsp+8h] [xbp-68h] BYREF
  __int16 v35[2]; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A74633 & 1) == 0 )
  {
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1B90010(&char_TypeInfo, v8);
    sub_1B90010(&StringLiteral_25417/*"書式指定項目が不正です"*/, v9);
    sub_1B90010(&StringLiteral_25359/*"パラメータ"*/, v10);
    sub_1B90010(&StringLiteral_25406/*"文字列"*/, v11);
    sub_1B90010(&StringLiteral_25400/*"引数"*/, v12);
    sub_1B90010(&StringLiteral_25401/*"引数を超えたのインデックスを指しています"*/, v13);
    sub_1B90010(&StringLiteral_1/*""*/, v14);
    byte_4A74633 = 1;
  }
  v35[0] = 0;
  result = 0;
  v34 = 0;
  if ( !parameter )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v31 = &StringLiteral_25359/*"パラメータ"*/;
    goto LABEL_59;
  }
  format = parameter->fields.format;
  if ( !format )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v31 = &StringLiteral_25406/*"文字列"*/;
    goto LABEL_59;
  }
  args = parameter->fields.args;
  if ( !args || args->max_length == 1 && !args->m_Items[0] )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v31 = &StringLiteral_25400/*"引数"*/;
LABEL_59:
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)*v31, message, (const MethodInfo *)gameObject);
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
    v35[0] = Chars;
    if ( v17 )
    {
      if ( Chars == 123 )
        goto LABEL_12;
      v22 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_20:
      if ( Chars == 44 || Chars == 125 || Chars == 58 )
      {
        v26 = System_Int32__TryParse(v22, &v34, 0LL);
        if ( !v26 )
          goto LABEL_66;
        v28 = parameter->fields.args;
        if ( !v28 )
          sub_1B9026C(v26, v27);
        if ( v34 >= (signed int)v28->max_length )
        {
          if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
          v32 = &StringLiteral_25401/*"引数を超えたのインデックスを指しています"*/;
          goto LABEL_69;
        }
        v25 = (unsigned __int16)v35[0];
        if ( v35[0] == 44 )
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
      v29 = System_Char__ToString((uint16_t)v35, 0LL);
      v22 = System_String__Concat_61787092(v22, v29, 0LL);
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
        v30 = System_Char__ToString((uint16_t)v35, 0LL);
        v22 = System_String__Concat_61787092(v22, v30, 0LL);
        goto LABEL_28;
      }
      if ( !System_Int32__TryParse(v22, &result, 0LL) )
        goto LABEL_66;
      v25 = (unsigned __int16)v35[0];
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
  v32 = &StringLiteral_25417/*"書式指定項目が不正です"*/;
LABEL_69:
  Fgo_Assertions_Assert__GetEffectiveAssertMessage((System_String_o *)*v32, message, (const MethodInfo *)gameObject);
}


void __fastcall Fgo_Assertions_Assert__CanParse___Il2CppFullySharedGenericType_(
        System_String_o *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2E6DB4C *method)
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
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1B90010(&bool_var, v9);
    sub_1B90010(&bool_TypeInfo, v10);
    sub_1B90010(&qword_4864798, v11);
    sub_1B90010(&double_var, v12);
    sub_1B90010(&short_var, v13);
    sub_1B90010(&int_var, v14);
    sub_1B90010(&long_var, v15);
    sub_1B90010(&sbyte_var, v16);
    sub_1B90010(&float_var, v17);
    sub_1B90010(&System_Type_TypeInfo, v18);
    sub_1B90010(&ushort_var, v19);
    sub_1B90010(&uint_var, v20);
    sub_1B90010(&ulong_var, v21);
    sub_1B90010(&StringLiteral_25388/*"型が不正です:{0}"*/, v22);
    sub_1B90010(&StringLiteral_25406/*"文字列"*/, v23);
    sub_1B90010(&StringLiteral_299/*" isNotBoolean"*/, v24);
    if ( !method->rgctx_data )
      sub_1BE1F48(method);
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
        v28 = System_String__Concat_61787092(value, (System_String_o *)StringLiteral_299/*" isNotBoolean"*/, 0LL);
LABEL_12:
        v29 = v28;
        if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
        Fgo_Assertions_Assert__GetEffectiveAssertMessage(v29, message, 0LL);
      }
    }
    else
    {
      v30 = (int)qword_4864798;
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
                          v28 = System_String__Format((System_String_o *)StringLiteral_25388/*"型が不正です:{0}"*/, TypeFromHandle, 0LL);
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
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25406/*"文字列"*/, message, 0LL);
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
        const MethodInfo_2E6E854 *method)
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
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, expected.monitor);
    sub_1B90010(&string___TypeInfo, v10);
    sub_1B90010(&StringLiteral_117/*" "*/, v11);
    sub_1B90010(&StringLiteral_22207/*"null"*/, v12);
    sub_1B90010(&StringLiteral_19334/*"expectedEqual"*/, v13);
    sub_1B90010(&StringLiteral_19335/*"expectedNotEqual"*/, v14);
    v8 = *(__int64 **)(v5 + 56);
    if ( !v8 )
    {
      sub_1BE1F48(v5);
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
    v18 = sub_1BE1EEC(*v8);
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
    v21 = sub_1BE1EEC(v15);
    v8 = *(__int64 **)(v5 + 56);
    v15 = *v8;
  }
  v22 = (char *)&v53 - (((unsigned int)(*(_DWORD *)(v21 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( *(int *)(v15 + 40) >= 0 )
    v23 = &v56;
  else
    v23 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v53 - ((v17 + 15) & 0x1FFFFFFF0LL), v23, v17);
  if ( (sub_1B90220(*v8, (char *)&v53 - ((v17 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
  {
    v24 = *(_QWORD **)(v5 + 56);
    v25 = *v24;
    if ( (*(_BYTE *)(*v24 + 309LL) & 1) == 0 )
    {
      LODWORD(v25) = sub_1BE1EEC(v25);
      v24 = *(_QWORD **)(v5 + 56);
      klass = v56;
    }
    if ( *(int *)(*v24 + 40LL) >= 0 )
      v26 = &v56;
    else
      v26 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    sub_1B90A78(v25, v24[1], (int)v20, v26);
    v27 = v57;
    v6 = v55;
  }
  else
  {
    v27 = StringLiteral_22207/*"null"*/;
  }
  v28 = *(_QWORD **)(v5 + 56);
  if ( *(int *)(*v28 + 40LL) >= 0 )
    v29 = (void **)&v55;
  else
    v29 = v6;
  memcpy((char *)&v53 - ((v17 + 15) & 0x1FFFFFFF0LL), v29, v17);
  if ( (sub_1B90220(*v28, (char *)&v53 - ((v17 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
  {
    v30 = *(_QWORD **)(v5 + 56);
    v31 = *v30;
    if ( (*(_BYTE *)(*v30 + 309LL) & 1) == 0 )
    {
      LODWORD(v31) = sub_1BE1EEC(v31);
      v30 = *(_QWORD **)(v5 + 56);
      v6 = v55;
    }
    if ( *(int *)(*v30 + 40LL) >= 0 )
      v32 = (void **)&v55;
    else
      v32 = v6;
    sub_1B90A78(v31, v30[1], (int)v22, v32);
    v33 = v57;
  }
  else
  {
    v33 = StringLiteral_22207/*"null"*/;
  }
  v34 = sub_1B900B8(string___TypeInfo, 5LL);
  if ( !v34 )
    sub_1B9026C(0LL, v35);
  v38 = v34;
  if ( !*(_DWORD *)(v34 + 24) )
    goto LABEL_43;
  *(_QWORD *)(v34 + 32) = v27;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v34 + 32), v27, v36, v37);
  if ( *(_DWORD *)(v38 + 24) <= 1u )
    goto LABEL_43;
  v41 = (int)StringLiteral_117/*" "*/;
  *(_QWORD *)(v38 + 40) = StringLiteral_117/*" "*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v38 + 40), v41, v39, v40);
  v44 = (__int64 *)&StringLiteral_19335/*"expectedNotEqual"*/;
  if ( (v9 & 1) == 0 )
    v44 = (__int64 *)&StringLiteral_19334/*"expectedEqual"*/;
  if ( *(_DWORD *)(v38 + 24) <= 2u
    || (v45 = *v44,
        *(_QWORD *)(v38 + 48) = *v44,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v38 + 48), v45, v42, v43),
        *(_DWORD *)(v38 + 24) <= 3u)
    || (v48 = (int)StringLiteral_117/*" "*/,
        *(_QWORD *)(v38 + 56) = StringLiteral_117/*" "*/,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v38 + 56), v48, v46, v47),
        *(_DWORD *)(v38 + 24) <= 4u) )
  {
LABEL_43:
    sub_1B90274(v34, v35);
  }
  *(_QWORD *)(v38 + 64) = v33;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v38 + 64), v33, v49, v50);
  v51 = System_String__Concat_61800620((System_String_array *)v38, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v51, monitor, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_float_(
        float expected,
        float actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2E6E688 *method)
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
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1B90010(&string___TypeInfo, v8);
    sub_1B90010(&StringLiteral_117/*" "*/, v9);
    sub_1B90010(&StringLiteral_19334/*"expectedEqual"*/, v10);
    sub_1B90010(&StringLiteral_19335/*"expectedNotEqual"*/, v11);
    if ( !method->rgctx_data )
      sub_1BE1F48(method);
  }
  v12 = System_Single__ToString(expected, (const MethodInfo *)&v35);
  v14 = System_Single__ToString(v13, (const MethodInfo *)&v34);
  v15 = sub_1B900B8(string___TypeInfo, 5LL);
  if ( !v15 )
    sub_1B9026C(0LL, v16);
  v19 = v15;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v15 + 32) = v12;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)v12, v17, v18);
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_15;
  v22 = (int)StringLiteral_117/*" "*/;
  *(_QWORD *)(v19 + 40) = StringLiteral_117/*" "*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 40), v22, v20, v21);
  v25 = (__int64 *)&StringLiteral_19335/*"expectedNotEqual"*/;
  if ( !equal )
    v25 = (__int64 *)&StringLiteral_19334/*"expectedEqual"*/;
  if ( *(_DWORD *)(v19 + 24) <= 2u
    || (v26 = *v25,
        *(_QWORD *)(v19 + 48) = *v25,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 48), v26, v23, v24),
        *(_DWORD *)(v19 + 24) <= 3u)
    || (v29 = (int)StringLiteral_117/*" "*/,
        *(_QWORD *)(v19 + 56) = StringLiteral_117/*" "*/,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 56), v29, v27, v28),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_15:
    sub_1B90274(v15, v16);
  }
  *(_QWORD *)(v19 + 64) = v14;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 64), (int32_t)v14, v30, v31);
  v32 = System_String__Concat_61800620((System_String_array *)v19, 0LL);
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
        const MethodInfo_2E6E0EC *method)
{
  const MethodInfo_2E6E0EC_RGCTXs *rgctx_data; // x8
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
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&actual);
    sub_1B90010(&string___TypeInfo, v9);
    sub_1B90010(&StringLiteral_117/*" "*/, v10);
    sub_1B90010(&StringLiteral_19334/*"expectedEqual"*/, v11);
    sub_1B90010(&StringLiteral_19335/*"expectedNotEqual"*/, v12);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BE1F48(method);
      rgctx_data = method->rgctx_data;
    }
  }
  v13 = System_Int32__ToString((int32_t)&v35, (const MethodInfo *)rgctx_data[1]._0_T);
  v14 = System_Int32__ToString((int32_t)&v34, (const MethodInfo *)method->rgctx_data[1]._0_T);
  v15 = sub_1B900B8(string___TypeInfo, 5LL);
  if ( !v15 )
    sub_1B9026C(0LL, v16);
  v19 = v15;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v15 + 32) = v13;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)v13, v17, v18);
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_15;
  v22 = (int)StringLiteral_117/*" "*/;
  *(_QWORD *)(v19 + 40) = StringLiteral_117/*" "*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 40), v22, v20, v21);
  v25 = (__int64 *)&StringLiteral_19335/*"expectedNotEqual"*/;
  if ( !equal )
    v25 = (__int64 *)&StringLiteral_19334/*"expectedEqual"*/;
  if ( *(_DWORD *)(v19 + 24) <= 2u
    || (v26 = *v25,
        *(_QWORD *)(v19 + 48) = *v25,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 48), v26, v23, v24),
        *(_DWORD *)(v19 + 24) <= 3u)
    || (v29 = (int)StringLiteral_117/*" "*/,
        *(_QWORD *)(v19 + 56) = StringLiteral_117/*" "*/,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 56), v29, v27, v28),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_15:
    sub_1B90274(v15, v16);
  }
  *(_QWORD *)(v19 + 64) = v14;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 64), (int32_t)v14, v30, v31);
  v32 = System_String__Concat_61800620((System_String_array *)v19, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v32, message, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_long_(
        int64_t expected,
        int64_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2E6E2B8 *method)
{
  const MethodInfo_2E6E2B8_RGCTXs *rgctx_data; // x8
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
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, actual);
    sub_1B90010(&string___TypeInfo, v9);
    sub_1B90010(&StringLiteral_117/*" "*/, v10);
    sub_1B90010(&StringLiteral_19334/*"expectedEqual"*/, v11);
    sub_1B90010(&StringLiteral_19335/*"expectedNotEqual"*/, v12);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BE1F48(method);
      rgctx_data = method->rgctx_data;
    }
  }
  v13 = System_Int64__ToString((int64_t)&v35, (const MethodInfo *)rgctx_data[1]._0_T);
  v14 = System_Int64__ToString((int64_t)&v34, (const MethodInfo *)method->rgctx_data[1]._0_T);
  v15 = sub_1B900B8(string___TypeInfo, 5LL);
  if ( !v15 )
    sub_1B9026C(0LL, v16);
  v19 = v15;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v15 + 32) = v13;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)v13, v17, v18);
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_15;
  v22 = (int)StringLiteral_117/*" "*/;
  *(_QWORD *)(v19 + 40) = StringLiteral_117/*" "*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 40), v22, v20, v21);
  v25 = (__int64 *)&StringLiteral_19335/*"expectedNotEqual"*/;
  if ( !equal )
    v25 = (__int64 *)&StringLiteral_19334/*"expectedEqual"*/;
  if ( *(_DWORD *)(v19 + 24) <= 2u
    || (v26 = *v25,
        *(_QWORD *)(v19 + 48) = *v25,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 48), v26, v23, v24),
        *(_DWORD *)(v19 + 24) <= 3u)
    || (v29 = (int)StringLiteral_117/*" "*/,
        *(_QWORD *)(v19 + 56) = StringLiteral_117/*" "*/,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 56), v29, v27, v28),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_15:
    sub_1B90274(v15, v16);
  }
  *(_QWORD *)(v19 + 64) = v14;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 64), (int32_t)v14, v30, v31);
  v32 = System_String__Concat_61800620((System_String_array *)v19, 0LL);
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
        const MethodInfo_2E6E48C *method)
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

  if ( (byte_4A758ED & 1) == 0 )
  {
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, actual);
    sub_1B90010(&string___TypeInfo, v9);
    sub_1B90010(&StringLiteral_117/*" "*/, v10);
    sub_1B90010(&StringLiteral_22207/*"null"*/, v11);
    sub_1B90010(&StringLiteral_19334/*"expectedEqual"*/, v12);
    sub_1B90010(&StringLiteral_19335/*"expectedNotEqual"*/, v13);
    byte_4A758ED = 1;
  }
  if ( expected )
    v14 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, bool, System_String_o *, const MethodInfo_2E6E48C *))expected->klass->vtable[3].method)(
            expected,
            expected->klass->vtable[4].methodPtr,
            equal,
            message,
            method);
  else
    v14 = StringLiteral_22207/*"null"*/;
  if ( actual )
    v15 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))actual->klass->vtable[3].method)(
            actual,
            actual->klass->vtable[4].methodPtr);
  else
    v15 = StringLiteral_22207/*"null"*/;
  v16 = sub_1B900B8(string___TypeInfo, 5LL);
  if ( !v16 )
    sub_1B9026C(0LL, v17);
  v20 = v16;
  if ( !*(_DWORD *)(v16 + 24) )
    goto LABEL_21;
  *(_QWORD *)(v16 + 32) = v14;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v16 + 32), v14, v18, v19);
  if ( *(_DWORD *)(v20 + 24) <= 1u )
    goto LABEL_21;
  v23 = (int)StringLiteral_117/*" "*/;
  *(_QWORD *)(v20 + 40) = StringLiteral_117/*" "*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v20 + 40), v23, v21, v22);
  v26 = (__int64 *)(equal ? &StringLiteral_19335/*"expectedNotEqual"*/ : &StringLiteral_19334/*"expectedEqual"*/);
  if ( *(_DWORD *)(v20 + 24) <= 2u
    || (v27 = *v26,
        *(_QWORD *)(v20 + 48) = *v26,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v20 + 48), v27, v24, v25),
        *(_DWORD *)(v20 + 24) <= 3u)
    || (v30 = (int)StringLiteral_117/*" "*/,
        *(_QWORD *)(v20 + 56) = StringLiteral_117/*" "*/,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v20 + 56), v30, v28, v29),
        *(_DWORD *)(v20 + 24) <= 4u) )
  {
LABEL_21:
    sub_1B90274(v16, v17);
  }
  *(_QWORD *)(v20 + 64) = v15;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v20 + 64), v15, v31, v32);
  v33 = System_String__Concat_61800620((System_String_array *)v20, 0LL);
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

  if ( (byte_4A74625 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_56/*"\n("*/, message);
    sub_1B90010(&StringLiteral_814/*")"*/, v5);
    byte_4A74625 = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    return defaultMessage;
  else
    return System_String__Concat_61800356(
             message,
             (System_String_o *)StringLiteral_56/*"\n("*/,
             defaultMessage,
             (System_String_o *)StringLiteral_814/*")"*/,
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

  if ( (byte_4A74630 & 1) == 0 )
  {
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1B90010(&StringLiteral_25317/*"が null です"*/, v5);
    byte_4A74630 = 1;
  }
  v7 = System_String__Concat_61787092(modelName, (System_String_o *)StringLiteral_25317/*"が null です"*/, 0LL);
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

  if ( (byte_4A74632 & 1) == 0 )
  {
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1B90010(&StringLiteral_300/*" isNotNumbers"*/, v5);
    byte_4A74632 = 1;
  }
  v7 = System_String__Concat_61787092(value, (System_String_o *)StringLiteral_300/*" isNotNumbers"*/, 0LL);
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
        const MethodInfo_2E6EBE8 *method)
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
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, key.klass);
    sub_1B90010(&StringLiteral_25349/*"ディクショナリ"*/, v12);
    sub_1B90010(&StringLiteral_832/*") の値がディクショナリに含まれていません"*/, v13);
    sub_1B90010(&StringLiteral_21011/*"key("*/, v14);
    sub_1B90010(&StringLiteral_25336/*"キー"*/, v15);
    v10 = *(_QWORD *)(v7 + 56);
    if ( !v10 )
    {
      sub_1BE1F48(v7);
      v10 = *(_QWORD *)(v7 + 56);
    }
  }
  v16 = *(_QWORD *)(v10 + 8);
  v17 = *(unsigned int *)(v16 + 252);
  v18 = *(_DWORD *)(v16 + 252);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v18 = *(_DWORD *)(sub_1BE1EEC(v16) + 252);
  v19 = (char *)&v33 - (((unsigned int)(v18 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v20 = (System_String_o *)((char *)&v33 - ((v17 + 15) & 0x1FFFFFFF0LL));
  if ( !dic )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v30 = &StringLiteral_25349/*"ディクショナリ"*/;
    goto LABEL_25;
  }
  v21 = *(_QWORD *)(v7 + 56);
  if ( *(int *)(*(_QWORD *)(v21 + 8) + 40LL) >= 0 )
    v22 = &v33;
  else
    v22 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v33 - ((v17 + 15) & 0x1FFFFFFF0LL), v22, v17);
  if ( (sub_1B90220(*(_QWORD *)(v21 + 8), (char *)&v33 - ((v17 + 15) & 0x1FFFFFFF0LL)) & 1) == 0 )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v30 = &StringLiteral_25336/*"キー"*/;
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
      LODWORD(v29) = sub_1BE1EEC(*(_QWORD *)(v27 + 8));
      v27 = *(_QWORD *)(v7 + 56);
      klass = v33;
      v28 = *(_QWORD *)(v27 + 8);
    }
    if ( *(int *)(v28 + 40) >= 0 )
      v31 = &v33;
    else
      v31 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    sub_1B90A78(v29, *(_QWORD *)(v27 + 24), (int)v19, v31);
    v32 = System_String__Concat_61798352(
            (System_String_o *)StringLiteral_21011/*"key("*/,
            v34,
            (System_String_o *)StringLiteral_832/*") の値がディクショナリに含まれていません"*/,
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
  if ( (byte_4A7462E & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_15927/*"[AssetData]\n{0}をロードできませんでした"*/, assetName);
    byte_4A7462E = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_15927/*"[AssetData]\n{0}をロードできませんでした"*/, (Il2CppObject *)assetName, 0LL);
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
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  Il2CppObject *v20; // x0
  System_String_o *v21; // x20
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v23; // [xsp+18h] [xbp-28h] BYREF
  int32_t v24; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4A74631 & 1) == 0 )
  {
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&index);
    sub_1B90010(&int_TypeInfo, v10);
    sub_1B90010(&StringLiteral_20657/*"index({0}) の値が負です"*/, v11);
    sub_1B90010(&StringLiteral_20658/*"index({0}) の値が配列の要素数({1})を超えています"*/, v12);
    byte_4A74631 = 1;
  }
  if ( (index & 0x80000000) != 0 )
  {
    v24 = index;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, message, gameObject, filePath);
    v18 = System_String__Format((System_String_o *)StringLiteral_20657/*"index({0}) の値が負です"*/, v20, 0LL);
  }
  else
  {
    if ( count > index )
      return;
    v23 = index;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, message, gameObject, filePath);
    v22 = count;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v14, v15, v16);
    v18 = System_String__Format_61801464((System_String_o *)StringLiteral_20658/*"index({0}) の値が配列の要素数({1})を超えています"*/, v13, v17, 0LL);
  }
  v21 = v18;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  Fgo_Assertions_Assert__GetEffectiveAssertMessage(v21, message, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__IsInRange___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2E6EF08 *method)
{
  __int64 v9; // x1

  if ( (byte_4A758EF & 1) == 0 )
  {
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&index);
    sub_1B90010(&StringLiteral_25435/*"配列"*/, v9);
    byte_4A758EF = 1;
  }
  if ( !array )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25435/*"配列"*/, message, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__IsInRange___Il2CppFullySharedGenericType__48688772(
        System_Collections_Generic_List_T__o *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2E6EE84 *method)
{
  __int64 v9; // x1

  if ( (byte_4A758EE & 1) == 0 )
  {
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&index);
    sub_1B90010(&StringLiteral_25362/*"リスト"*/, v9);
    byte_4A758EE = 1;
  }
  if ( !array )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25362/*"リスト"*/, message, 0LL);
  }
}


void __fastcall Fgo_Assertions_Assert__IsNotNull_object_(
        Il2CppObject *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2E6EF8C *method)
{
  Il2CppClass *klass; // x8
  UnityEngine_Object_c *v8; // x0
  unsigned int methodPtr_low; // w10
  __int64 v10; // x9
  Il2CppObject *v11; // x0

  if ( (byte_4A758F0 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, message);
    byte_4A758F0 = 1;
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

  if ( (byte_4A74634 & 1) == 0 )
  {
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1B90010(&StringLiteral_25324/*"アクション"*/, v8);
    byte_4A74634 = 1;
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
      (System_String_o *)StringLiteral_25324/*"アクション"*/,
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
        const MethodInfo_2E6F050 *method)
{
  Il2CppClass *klass; // x8
  UnityEngine_Object_c *v8; // x0
  unsigned int methodPtr_low; // w10
  __int64 v10; // x9
  Il2CppObject *v11; // x0

  if ( (byte_4A758F1 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, message);
    byte_4A758F1 = 1;
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
        const MethodInfo_2E6F114 *method)
{
  if ( (byte_4A758F2 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_15974/*"[SerializeField]\n{0}の参照が切れています"*/, fieldName);
    byte_4A758F2 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_15974/*"[SerializeField]\n{0}の参照が切れています"*/, (Il2CppObject *)fieldName, 0LL);
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
  __int64 v14; // x1

  if ( (byte_4A74621 & 1) == 0 )
  {
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, expected);
    sub_1B90010(&StringLiteral_25025/*"{0}\n(expected={1}, actual={2})"*/, v7);
    byte_4A74621 = 1;
  }
  v8 = System_String__Format_61801532(
         (System_String_o *)StringLiteral_25025/*"{0}\n(expected={1}, actual={2})"*/,
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
          sub_1B9026C(v13, v14);
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
  if ( (byte_4A7462F & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_15952/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/, key);
    byte_4A7462F = 1;
  }
  System_String__Format_61801464((System_String_o *)StringLiteral_15952/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/, (Il2CppObject *)name, (Il2CppObject *)key, 0LL);
}


void __fastcall Fgo_Assertions_Assert__OnFailed_46606444(
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
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  Il2CppObject *v23; // x20
  System_String_o *name; // x0
  System_String_o *v25; // x0
  Fgo_Assertions_Assert_c *v26; // x8
  System_String_o *v27; // x21
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x9
  struct System_Action_string__o *onFailedAction; // x9
  struct System_Action_string__string__string__o *onFailedSendReport; // x9
  int32_t v31; // [xsp+Ch] [xbp-54h] BYREF

  v9 = message;
  v10 = (Il2CppObject *)caption;
  if ( (byte_4A74622 & 1) == 0 )
  {
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1B90010(&int_TypeInfo, v11);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v12);
    sub_1B90010(&System_IO_Path_TypeInfo, v13);
    sub_1B90010(&StringLiteral_25065/*"{0}({1})"*/, v14);
    sub_1B90010(&StringLiteral_61/*"\nGameObject:"*/, v15);
    caption = (System_String_o *)sub_1B90010(&StringLiteral_25026/*"{0}\n{1}\n{2}"*/, v16);
    byte_4A74622 = 1;
  }
  if ( !filePath )
    goto LABEL_27;
  v17 = System_String__Replace(filePath, 0x5Cu, 0x2Fu, 0LL);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = (Il2CppObject *)System_IO_Path__GetFileName(v17, 0LL);
  v31 = line;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v19, v20, v21);
  v23 = (Il2CppObject *)System_String__Format_61801464((System_String_o *)StringLiteral_25065/*"{0}({1})"*/, FileName, v22, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  caption = (System_String_o *)UnityEngine_Object__op_Inequality(0LL, (UnityEngine_Object_o *)gameObject, 0LL);
  if ( ((unsigned __int8)caption & 1) != 0 )
  {
    if ( !gameObject )
      goto LABEL_27;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    v9 = System_String__Concat_61798352(v9, (System_String_o *)StringLiteral_61/*"\nGameObject:"*/, name, 0LL);
  }
  v25 = System_String__Format_61801532((System_String_o *)StringLiteral_25026/*"{0}\n{1}\n{2}"*/, v10, (Il2CppObject *)v9, v23, 0LL);
  v26 = Fgo_Assertions_Assert_TypeInfo;
  v27 = v25;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v26 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v26->static_fields;
  if ( static_fields->enable )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = Fgo_Assertions_Assert_TypeInfo;
      static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
    }
    onFailedAction = static_fields->onFailedAction;
    if ( onFailedAction )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        onFailedAction = Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedAction;
        if ( !onFailedAction )
          goto LABEL_27;
      }
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))onFailedAction->fields.m_target)(
        onFailedAction->fields.original_method_info,
        v27,
        *(_QWORD *)&onFailedAction->fields.extra_arg);
      v26 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = Fgo_Assertions_Assert_TypeInfo;
    }
    onFailedSendReport = v26->static_fields->onFailedSendReport;
    if ( onFailedSendReport )
    {
      if ( v26->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v26),
            (onFailedSendReport = Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedSendReport) != 0LL) )
      {
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, System_String_o *, Il2CppObject *, _QWORD))onFailedSendReport->fields.m_target)(
          onFailedSendReport->fields.original_method_info,
          v10,
          v27,
          v23,
          *(_QWORD *)&onFailedSendReport->fields.extra_arg);
        return;
      }
LABEL_27:
      sub_1B9026C(caption, message);
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

  if ( (byte_4A74623 & 1) == 0 )
  {
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, force);
    sub_1B90010(&UnityEngine_Debug_TypeInfo, v6);
    sub_1B90010(&StringLiteral_25407/*"既に表明違反時の処理が設定されています"*/, v7);
    byte_4A74623 = 1;
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
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_25407/*"既に表明違反時の処理が設定されています"*/, 0LL);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->onFailedAction, (int32_t)action, (int32_t)method, v3);
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

  if ( (byte_4A74624 & 1) == 0 )
  {
    sub_1B90010(&Fgo_Assertions_Assert_TypeInfo, force);
    sub_1B90010(&UnityEngine_Debug_TypeInfo, v6);
    sub_1B90010(&StringLiteral_25407/*"既に表明違反時の処理が設定されています"*/, v7);
    byte_4A74624 = 1;
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
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_25407/*"既に表明違反時の処理が設定されています"*/, 0LL);
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
  sub_1B8FFB4(
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)aFormat, v7, v8);
  this->fields.args = aArgs;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.args, (int32_t)aArgs, v9, v10);
}


void __fastcall Fgo_Assertions_AssertQueue___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_Queue_T__o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A7463B & 1) == 0 )
  {
    sub_1B90010(&Fgo_Assertions_AssertQueue_TypeInfo, v1);
    sub_1B90010(&Method_System_Collections_Generic_Queue_string___ctor__, v2);
    sub_1B90010(&System_Collections_Generic_Queue_string__TypeInfo, v3);
    byte_4A7463B = 1;
  }
  v4 = (System_Collections_Generic_Queue_T__o *)sub_1B9025C(System_Collections_Generic_Queue_string__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v4,
    (const MethodInfo_368241C *)Method_System_Collections_Generic_Queue_string___ctor__);
  Fgo_Assertions_AssertQueue_TypeInfo->static_fields->queue = (struct System_Collections_Generic_Queue_string__o *)v4;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)Fgo_Assertions_AssertQueue_TypeInfo->static_fields,
    (int32_t)v4,
    v5,
    v6);
  static_fields = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
  static_fields->onFailedAction = 0LL;
  static_fields = (struct Fgo_Assertions_AssertQueue_StaticFields *)((char *)static_fields + 16);
  LOBYTE(static_fields[-1].onFailedAction) = 1;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)static_fields, 0, v8, v9);
}


void __fastcall Fgo_Assertions_AssertQueue__Clear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Fgo_Assertions_AssertQueue_c *v3; // x0
  System_Collections_Generic_Queue_T__o *queue; // x0

  if ( (byte_4A7463A & 1) == 0 )
  {
    sub_1B90010(&Fgo_Assertions_AssertQueue_TypeInfo, v1);
    sub_1B90010(&Method_System_Collections_Generic_Queue_string__Clear__, v2);
    byte_4A7463A = 1;
  }
  v3 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v3 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  queue = (System_Collections_Generic_Queue_T__o *)v3->static_fields->queue;
  if ( !queue )
    sub_1B9026C(0LL, v1);
  System_Collections_Generic_Queue_object___Clear(
    queue,
    (const MethodInfo_36826A4 *)Method_System_Collections_Generic_Queue_string__Clear__);
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

  if ( (byte_4A74639 & 1) == 0 )
  {
    sub_1B90010(&Fgo_Assertions_AssertQueue_TypeInfo, v1);
    sub_1B90010(&Method_System_Collections_Generic_Queue_string__Dequeue__, v2);
    sub_1B90010(&Method_System_Collections_Generic_Queue_string__get_Count__, v3);
    byte_4A74639 = 1;
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
               (const MethodInfo_3682B74 *)Method_System_Collections_Generic_Queue_string__Dequeue__);
        Fgo_Assertions_AssertQueue__OnFailed((System_String_o *)v7, v8);
        return;
      }
LABEL_12:
      sub_1B9026C(queue, v1);
    }
  }
  syncRoot->isReady = 1;
}


void __fastcall Fgo_Assertions_AssertQueue__Enqueue(System_String_o *message, const MethodInfo *method)
{
  __int64 v3; // x1
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x8
  _BOOL4 isReady; // w21

  if ( (byte_4A74638 & 1) == 0 )
  {
    sub_1B90010(&Fgo_Assertions_AssertQueue_TypeInfo, method);
    sub_1B90010(&Method_System_Collections_Generic_Queue_string__Enqueue__, v3);
    byte_4A74638 = 1;
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
    sub_1B9026C(0LL, method);
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)static_fields->queue,
    (Il2CppObject *)message,
    (const MethodInfo_36829E4 *)Method_System_Collections_Generic_Queue_string__Enqueue__);
}


void __fastcall Fgo_Assertions_AssertQueue__OnFailed(System_String_o *message, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Fgo_Assertions_AssertQueue_c *v5; // x0
  struct System_Action_string__o *onFailedAction; // x8
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A74636 & 1) == 0 )
  {
    sub_1B90010(&Fgo_Assertions_AssertQueue_TypeInfo, method);
    sub_1B90010(&UnityEngine_Debug_TypeInfo, v3);
    sub_1B90010(&StringLiteral_25425/*"表明違反時処理が設定されていません"*/, v4);
    byte_4A74636 = 1;
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
        sub_1B9026C(v7, v8);
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
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_25425/*"表明違反時処理が設定されていません"*/, 0LL);
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

  if ( (byte_4A74637 & 1) == 0 )
  {
    sub_1B90010(&Fgo_Assertions_AssertQueue_TypeInfo, method);
    byte_4A74637 = 1;
  }
  v5 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v5 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->onFailedAction = action;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->onFailedAction, (int32_t)action, v2, v3);
}