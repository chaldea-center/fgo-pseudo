void __fastcall Fgo_Assertions_Assert___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0
  struct Fgo_Assertions_Assert_StaticFields *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_HashSet_T__o *v12; // x19
  struct Fgo_Assertions_Assert_StaticFields *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_Dictionary_object__object__o *v16; // x19
  struct Fgo_Assertions_Assert_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4B0659F & 1) == 0 )
  {
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, v1);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo____ctor__, v4);
    sub_1BC3008(&System_Collections_Generic_Dictionary_Type__List_FieldInfo___TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey___ctor__, v6);
    sub_1BC3008(&System_Collections_Generic_HashSet_Assert_SuppressAssertKey__TypeInfo, v7);
    byte_4B0659F = 1;
  }
  static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
  static_fields->enable = 1;
  static_fields->onFailedAction = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->onFailedAction, 0, v2, v3);
  v9 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v9->onFailedSendReport = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v9->onFailedSendReport, 0, v10, v11);
  v12 = (System_Collections_Generic_HashSet_T__o *)sub_1BC3254(System_Collections_Generic_HashSet_Assert_SuppressAssertKey__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v12,
    (const MethodInfo_355A00C *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey___ctor__);
  v13 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v13->suppressAsserts = (struct System_Collections_Generic_HashSet_Assert_SuppressAssertKey__o *)v12;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v13->suppressAsserts, (int32_t)v12, v14, v15);
  v16 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_Type__List_FieldInfo___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v16,
    (const MethodInfo_336C638 *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo____ctor__);
  v17 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v17->cachedFieldInfo = (struct System_Collections_Generic_Dictionary_Type__List_FieldInfo___o *)v16;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v17->cachedFieldInfo, (int32_t)v16, v18, v19);
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

  if ( (byte_4B0658E & 1) == 0 )
  {
    sub_1BC3008(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___, gameObject);
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4B0658E = 1;
  }
  if ( !byte_4AFBDB5 )
  {
    sub_1BC3008(&UnityEngine_Mathf_TypeInfo, gameObject);
    byte_4AFBDB5 = 1;
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
      (const MethodInfo_2FE1288 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
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

  if ( (byte_4B0658F & 1) == 0 )
  {
    sub_1BC3008(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___, *(_QWORD *)&actual);
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4B0658F = 1;
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
      (const MethodInfo_2FE0CEC *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_48126360(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  __int64 v10; // x1

  if ( (byte_4B06590 & 1) == 0 )
  {
    sub_1BC3008(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___, actual);
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4B06590 = 1;
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
      (const MethodInfo_2FE0EB8 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_48126520(
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

  if ( (byte_4B06591 & 1) == 0 )
  {
    sub_1BC3008(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___, actual);
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, v10);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v11);
    byte_4B06591 = 1;
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
          (const MethodInfo_2FE108C *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
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
        const MethodInfo_2FDFD54 *method)
{
  long double v7; // q0
  void **monitor; // x21
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x26
  _QWORD *v11; // x19
  __int64 v12; // x1
  __int64 v13; // x0
  __int64 v14; // x23
  __int64 v15; // x0
  int v16; // w8
  char *v17; // x25
  _QWORD *v18; // x22
  _QWORD *v19; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x0
  _QWORD *v25; // x19
  __int64 v26; // x27
  void **v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  _QWORD *v31; // x19
  __int64 *v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x0
  __int64 v37; // x10
  _QWORD *v38; // x19
  void **v39; // x1
  _QWORD *v40; // x19
  __int64 *v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x0
  __int64 v46; // x10
  _QWORD *v47; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v48; // x1
  _QWORD *v49; // x19
  __int64 *v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x0
  __int64 methodPtr_low; // x10
  _QWORD *v56; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v57; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v58; // x1
  _QWORD *v59; // x26
  void **v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  __int64 v64; // x0
  long double v65; // q0
  _QWORD *v66; // x9
  __int64 v67; // x26
  __int64 v68; // x8
  int v69; // w0
  __int64 v70; // x1
  int v71; // w10
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v72; // x3
  _QWORD *v73; // x25
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v74; // x1
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
  v11 = filePath[2].monitor;
  v86 = actual.klass;
  if ( !v11 )
  {
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, expected.monitor);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v12);
    v11 = filePath[2].monitor;
    if ( !v11 )
    {
      sub_1C134C8(filePath);
      v11 = filePath[2].monitor;
    }
  }
  v13 = *v11;
  v14 = *(unsigned int *)(*v11 + 252LL);
  if ( (*(_BYTE *)(*v11 + 309LL) & 1) != 0 )
  {
    v16 = *(_DWORD *)(*v11 + 252LL);
  }
  else
  {
    v15 = sub_1C1346C(v7);
    v11 = filePath[2].monitor;
    v16 = *(_DWORD *)(v15 + 252);
    v13 = *v11;
  }
  v17 = (char *)&v85 - (((unsigned int)(v16 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v18 = (__int64 *)((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL));
  v19 = v18;
  if ( *(int *)(v13 + 40) >= 0 )
    v20 = &v89;
  else
    v20 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy(&v85, v20, v14);
  v24 = j_il2cpp_value_box_0(*v11, (char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v21, v22, v23);
  v25 = filePath[2].monitor;
  v26 = v24;
  if ( *(int *)(*v25 + 40LL) >= 0 )
    v27 = &v88;
  else
    v27 = monitor;
  memcpy((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v27, v14);
  if ( v26 != j_il2cpp_value_box_0(*v25, (char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v28, v29, v30) )
  {
    v31 = filePath[2].monitor;
    v32 = *(int *)(*v31 + 40LL) >= 0 ? (__int64 *)&v89 : (__int64 *)klass;
    if ( (memcpy((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v32, v14),
          (v36 = j_il2cpp_value_box_0(*v31, (char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v33, v34, v35)) == 0)
      || (v37 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v36 + 304LL) < (unsigned int)v37)
      || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v36 + 200LL) + 8 * v37 - 8) != UnityEngine_Object_TypeInfo
      || ((v38 = filePath[2].monitor, *(int *)(*v38 + 40LL) >= 0) ? (v39 = &v88) : (v39 = monitor),
          memcpy((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v39, v14),
          (sub_1BC3218(*v38, (char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
    {
      v40 = filePath[2].monitor;
      v41 = (__int64 *)(*(int *)(*v40 + 40LL) >= 0 ? &v88 : monitor);
      if ( (memcpy((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v41, v14),
            (v45 = j_il2cpp_value_box_0(*v40, (char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v42, v43, v44)) == 0)
        || (v46 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)v45 + 304LL) < (unsigned int)v46)
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v45 + 200LL) + 8 * v46 - 8) != UnityEngine_Object_TypeInfo
        || ((v47 = filePath[2].monitor, *(int *)(*v47 + 40LL) >= 0)
          ? (v48 = &v89)
          : (v48 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v89),
            memcpy((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v48, v14),
            (sub_1BC3218(*v47, (char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
      {
        v49 = filePath[2].monitor;
        v50 = *(int *)(*v49 + 40LL) >= 0 ? (__int64 *)&v89 : (__int64 *)v89;
        memcpy((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v50, v14);
        v54 = j_il2cpp_value_box_0(*v49, (char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v51, v52, v53);
        if ( !v54 )
          goto LABEL_40;
        methodPtr_low = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)v54 + 304LL) < (unsigned int)methodPtr_low
          || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v54 + 200LL) + 8 * methodPtr_low - 8) != UnityEngine_Object_TypeInfo )
        {
          goto LABEL_40;
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
LABEL_40:
          v56 = filePath[2].monitor;
          v57 = v89;
          if ( *(int *)(*v56 + 40LL) >= 0 )
            v58 = &v89;
          else
            v58 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v89;
          memcpy((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v58, v14);
          if ( (sub_1BC3218(*v56, (char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
          {
            v59 = filePath[2].monitor;
            if ( *(int *)(*v59 + 40LL) >= 0 )
              v60 = &v88;
            else
              v60 = monitor;
            memcpy((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v60, v14);
            v64 = j_il2cpp_value_box_0(*v59, (char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v61, v62, v63);
            v66 = filePath[2].monitor;
            v67 = v64;
            v68 = *v66;
            if ( (*(_BYTE *)(*v66 + 309LL) & 1) == 0 )
            {
              v69 = sub_1C1346C(v65);
              v66 = filePath[2].monitor;
              v57 = v89;
              LODWORD(v68) = v69;
            }
            v70 = v66[1];
            v71 = *(_DWORD *)(*v66 + 40LL);
            v90[0] = v67;
            if ( v71 >= 0 )
              v72 = &v89;
            else
              v72 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v57;
            sub_1BC3A70(v68, v70, (int)v17, v72);
            if ( v91[0] )
              return;
            v57 = v89;
          }
          v73 = filePath[2].monitor;
          if ( *(int *)(*v73 + 40LL) >= 0 )
            v74 = &v89;
          else
            v74 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v57;
          memcpy((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v74, v14);
          if ( *(int *)(*v73 + 40LL) >= 0 )
            v75 = &v88;
          else
            v75 = monitor;
          memcpy((char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL), v75, v14);
          if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
            v73 = filePath[2].monitor;
          }
          v76 = (__int64 *)v73[2];
          v77 = *v76;
          if ( (*(_DWORD *)(*v73 + 40LL) & 0x80000000) == 0 )
          {
            v18 = (_QWORD *)*v18;
            v19 = (_QWORD *)*v19;
          }
          v90[0] = (__int64)v18;
          v90[1] = (__int64)v19;
          v92 = 1;
          v90[2] = (__int64)&v92;
          v90[3] = (__int64)v86;
          ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, char *))v76[2])(v77, v76, 0LL, v90, v91);
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

  if ( (byte_4B06592 & 1) == 0 )
  {
    sub_1BC3008(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___, gameObject);
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4B06592 = 1;
  }
  if ( !byte_4AFBDB5 )
  {
    sub_1BC3008(&UnityEngine_Mathf_TypeInfo, gameObject);
    byte_4AFBDB5 = 1;
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
      (const MethodInfo_2FE1288 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
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

  if ( (byte_4B06593 & 1) == 0 )
  {
    sub_1BC3008(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___, *(_QWORD *)&actual);
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4B06593 = 1;
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
      (const MethodInfo_2FE0CEC *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_48127228(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  __int64 v10; // x1

  if ( (byte_4B06594 & 1) == 0 )
  {
    sub_1BC3008(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___, actual);
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4B06594 = 1;
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
      (const MethodInfo_2FE0EB8 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_48127388(
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

  if ( (byte_4B06595 & 1) == 0 )
  {
    sub_1BC3008(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___, actual);
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, v10);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v11);
    byte_4B06595 = 1;
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
      (const MethodInfo_2FE108C *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o expected,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2FE022C *method)
{
  long double v7; // q0
  void **monitor; // x23
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x26
  _QWORD *v11; // x27
  __int64 v12; // x1
  __int64 v13; // x0
  unsigned int v14; // w8
  __int64 v15; // x24
  __int64 v16; // x0
  _QWORD *v17; // x21
  _QWORD *v18; // x20
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
  __int64 v30; // x0
  _QWORD *v31; // x19
  __int64 v32; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x10
  _QWORD *v40; // x19
  void **v41; // x1
  _QWORD *v42; // x19
  __int64 *v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  __int64 v47; // x0
  __int64 v48; // x10
  _QWORD *v49; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v50; // x1
  _QWORD *v51; // x19
  __int64 *v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  __int64 v56; // x0
  __int64 methodPtr_low; // x10
  _QWORD *v58; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v59; // x28
  __int64 *v60; // x1
  _QWORD *v61; // x19
  void **v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  __int64 v66; // x0
  long double v67; // q0
  _QWORD *v68; // x9
  __int64 v69; // x26
  __int64 v70; // x8
  int v71; // w0
  __int64 v72; // x1
  __int64 *v73; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v74; // x1
  void **v75; // x1
  Fgo_Assertions_Assert_c *v76; // x0
  void **v77; // x1
  __int64 *v78; // x1
  __int64 v79; // x0
  _QWORD *v80; // x19
  __int64 *v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  __int64 v85; // x0
  __int64 v86; // x10
  __int64 v87; // [xsp+0h] [xbp-60h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v88; // [xsp+8h] [xbp-58h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-50h]
  void *v90; // [xsp+18h] [xbp-48h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v91; // [xsp+20h] [xbp-40h] BYREF
  __int64 v92[4]; // [xsp+28h] [xbp-38h] BYREF
  char v93[12]; // [xsp+48h] [xbp-18h] BYREF
  char v94; // [xsp+54h] [xbp-Ch] BYREF
  __int64 v95; // [xsp+58h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  monitor = (void **)expected.monitor;
  klass = expected.klass;
  v95 = *(_QWORD *)(StatusReg + 40);
  v90 = expected.monitor;
  v91 = expected.klass;
  v11 = filePath[2].monitor;
  v88 = actual.klass;
  if ( !v11 )
  {
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, expected.monitor);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v12);
    v11 = filePath[2].monitor;
    if ( !v11 )
    {
      sub_1C134C8(filePath);
      v11 = filePath[2].monitor;
    }
  }
  v13 = *v11;
  v14 = *(_DWORD *)(*v11 + 252LL);
  v15 = v14;
  if ( (*(_BYTE *)(*v11 + 309LL) & 1) == 0 )
  {
    v16 = sub_1C1346C(v7);
    v11 = filePath[2].monitor;
    v14 = *(_DWORD *)(v16 + 252);
    v13 = *v11;
  }
  v87 = (__int64)&v87 - ((v14 + 16 + 15LL) & 0x1FFFFFFF0LL);
  v17 = (__int64 *)((char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL));
  v18 = v17;
  if ( *(int *)(v13 + 40) >= 0 )
    v19 = &v91;
  else
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy(&v87, v19, v15);
  v23 = j_il2cpp_value_box_0(*v11, (char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL), v20, v21, v22);
  v24 = filePath[2].monitor;
  v25 = v23;
  if ( *(int *)(*v24 + 40LL) >= 0 )
    v26 = &v90;
  else
    v26 = monitor;
  memcpy((char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL), v26, v15);
  v30 = j_il2cpp_value_box_0(*v24, (char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL), v27, v28, v29);
  v31 = filePath[2].monitor;
  v32 = v30;
  if ( *(int *)(*v31 + 40LL) >= 0 )
    v33 = &v91;
  else
    v33 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL), v33, v15);
  v37 = *v31;
  if ( v25 == v32 )
  {
    if ( *(int *)(v37 + 40) >= 0 )
      v77 = &v90;
    else
      v77 = monitor;
    memcpy((char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL), v77, v15);
    v76 = Fgo_Assertions_Assert_TypeInfo;
    if ( Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      goto LABEL_65;
LABEL_64:
    j_il2cpp_runtime_class_init_0(v76);
    v31 = filePath[2].monitor;
LABEL_65:
    v78 = (__int64 *)v31[1];
    v79 = *v78;
    if ( (*(_DWORD *)(*v31 + 40LL) & 0x80000000) == 0 )
    {
      v17 = (_QWORD *)*v17;
      v18 = (_QWORD *)*v18;
    }
    v92[2] = (__int64)&v94;
    v94 = 0;
    v92[0] = (__int64)v17;
    v92[1] = (__int64)v18;
    v92[3] = (__int64)v88;
    ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, char *))v78[2])(v79, v78, 0LL, v92, v93);
    return;
  }
  v38 = j_il2cpp_value_box_0(v37, (char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL), v34, v35, v36);
  if ( !v38
    || (v39 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*(_QWORD *)v38 + 304LL) < (unsigned int)v39)
    || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v38 + 200LL) + 8 * v39 - 8) != UnityEngine_Object_TypeInfo
    || ((v40 = filePath[2].monitor, *(int *)(*v40 + 40LL) >= 0) ? (v41 = &v90) : (v41 = monitor),
        memcpy((char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL), v41, v15),
        (sub_1BC3218(*v40, (char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
  {
    v42 = filePath[2].monitor;
    v43 = (__int64 *)(*(int *)(*v42 + 40LL) >= 0 ? &v90 : monitor);
    if ( (memcpy((char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL), v43, v15),
          (v47 = j_il2cpp_value_box_0(*v42, (char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL), v44, v45, v46)) == 0)
      || (v48 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v47 + 304LL) < (unsigned int)v48)
      || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v47 + 200LL) + 8 * v48 - 8) != UnityEngine_Object_TypeInfo
      || ((v49 = filePath[2].monitor, *(int *)(*v49 + 40LL) >= 0)
        ? (v50 = &v91)
        : (v50 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v91),
          memcpy((char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL), v50, v15),
          (sub_1BC3218(*v49, (char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
    {
      v51 = filePath[2].monitor;
      v52 = *(int *)(*v51 + 40LL) >= 0 ? (__int64 *)&v91 : (__int64 *)v91;
      memcpy((char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL), v52, v15);
      v56 = j_il2cpp_value_box_0(*v51, (char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL), v53, v54, v55);
      if ( !v56 )
        goto LABEL_39;
      methodPtr_low = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v56 + 304LL) < (unsigned int)methodPtr_low
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v56 + 200LL) + 8 * methodPtr_low - 8) != UnityEngine_Object_TypeInfo )
      {
        goto LABEL_39;
      }
      v80 = filePath[2].monitor;
      v81 = (__int64 *)(*(int *)(*v80 + 40LL) >= 0 ? &v90 : monitor);
      memcpy((char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL), v81, v15);
      v85 = j_il2cpp_value_box_0(*v80, (char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL), v82, v83, v84);
      if ( !v85
        || (v86 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)v85 + 304LL) < (unsigned int)v86)
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v85 + 200LL) + 8 * v86 - 8) != UnityEngine_Object_TypeInfo )
      {
LABEL_39:
        v58 = filePath[2].monitor;
        v59 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v91;
        v60 = *(int *)(*v58 + 40LL) >= 0 ? (__int64 *)&v91 : (__int64 *)v91;
        memcpy((char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL), v60, v15);
        if ( (sub_1BC3218(*v58, (char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
        {
          v61 = filePath[2].monitor;
          if ( *(int *)(*v61 + 40LL) >= 0 )
            v62 = &v90;
          else
            v62 = monitor;
          memcpy((char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL), v62, v15);
          v66 = j_il2cpp_value_box_0(*v61, (char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL), v63, v64, v65);
          v68 = filePath[2].monitor;
          v69 = v66;
          v70 = *v68;
          if ( (*(_BYTE *)(*v68 + 309LL) & 1) == 0 )
          {
            v71 = sub_1C1346C(v67);
            v68 = filePath[2].monitor;
            v59 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v91;
            LODWORD(v70) = v71;
          }
          v72 = v68[2];
          v73 = (__int64 *)(*(int *)(*v68 + 40LL) >= 0 ? &v91 : v59);
          v92[0] = v69;
          sub_1BC3A70(v70, v72, v87, v73);
          if ( v93[0] )
          {
            v31 = filePath[2].monitor;
            if ( *(int *)(*v31 + 40LL) >= 0 )
              v74 = &v91;
            else
              v74 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v91;
            memcpy((char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL), v74, v15);
            if ( *(int *)(*v31 + 40LL) >= 0 )
              v75 = &v90;
            else
              v75 = monitor;
            memcpy((char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL), v75, v15);
            v76 = Fgo_Assertions_Assert_TypeInfo;
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

  if ( (byte_4B0659C & 1) == 0 )
  {
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1BC3008(&char_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_25247/*"書式指定項目が不正です"*/, v9);
    sub_1BC3008(&StringLiteral_25188/*"パラメータ"*/, v10);
    sub_1BC3008(&StringLiteral_25236/*"文字列"*/, v11);
    sub_1BC3008(&StringLiteral_25230/*"引数"*/, v12);
    sub_1BC3008(&StringLiteral_25231/*"引数を超えたのインデックスを指しています"*/, v13);
    sub_1BC3008(&StringLiteral_1/*""*/, v14);
    byte_4B0659C = 1;
  }
  v35[0] = 0;
  result = 0;
  v34 = 0;
  if ( !parameter )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v31 = &StringLiteral_25188/*"パラメータ"*/;
    goto LABEL_59;
  }
  format = parameter->fields.format;
  if ( !format )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v31 = &StringLiteral_25236/*"文字列"*/;
    goto LABEL_59;
  }
  args = parameter->fields.args;
  if ( !args || args->max_length == 1 && !args->m_Items[0] )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v31 = &StringLiteral_25230/*"引数"*/;
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
          sub_1BC3264(v26, v27);
        if ( v34 >= (signed int)v28->max_length )
        {
          if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
          v32 = &StringLiteral_25231/*"引数を超えたのインデックスを指しています"*/;
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
      v22 = System_String__Concat_62348648(v22, v29, 0LL);
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
        v22 = System_String__Concat_62348648(v22, v30, 0LL);
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
  v32 = &StringLiteral_25247/*"書式指定項目が不正です"*/;
LABEL_69:
  Fgo_Assertions_Assert__GetEffectiveAssertMessage((System_String_o *)*v32, message, (const MethodInfo *)gameObject);
}


void __fastcall Fgo_Assertions_Assert__CanParse___Il2CppFullySharedGenericType_(
        System_String_o *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2FE074C *method)
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
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1BC3008(&bool_var, v9);
    sub_1BC3008(&bool_TypeInfo, v10);
    sub_1BC3008(&qword_48FD680, v11);
    sub_1BC3008(&double_var, v12);
    sub_1BC3008(&short_var, v13);
    sub_1BC3008(&int_var, v14);
    sub_1BC3008(&long_var, v15);
    sub_1BC3008(&sbyte_var, v16);
    sub_1BC3008(&float_var, v17);
    sub_1BC3008(&System_Type_TypeInfo, v18);
    sub_1BC3008(&ushort_var, v19);
    sub_1BC3008(&uint_var, v20);
    sub_1BC3008(&ulong_var, v21);
    sub_1BC3008(&StringLiteral_25218/*"型が不正です:{0}"*/, v22);
    sub_1BC3008(&StringLiteral_25236/*"文字列"*/, v23);
    sub_1BC3008(&StringLiteral_272/*" isNotBoolean"*/, v24);
    if ( !method->rgctx_data )
      sub_1C134C8(method);
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
        v28 = System_String__Concat_62348648(value, (System_String_o *)StringLiteral_272/*" isNotBoolean"*/, 0LL);
LABEL_12:
        v29 = v28;
        if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
        Fgo_Assertions_Assert__GetEffectiveAssertMessage(v29, message, 0LL);
      }
    }
    else
    {
      v30 = (int)qword_48FD680;
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
                          v28 = System_String__Format((System_String_o *)StringLiteral_25218/*"型が不正です:{0}"*/, TypeFromHandle, 0LL);
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
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25236/*"文字列"*/, message, 0LL);
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
        const MethodInfo_2FE1454 *method)
{
  long double v5; // q0
  __int64 v6; // x21
  void **v7; // x22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  __int64 *v9; // x19
  char v10; // w20
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x8
  __int16 v17; // w9
  __int64 v18; // x24
  __int64 v19; // x0
  int v20; // w10
  char *v21; // x26
  __int64 v22; // x0
  char *v23; // x25
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v24; // x1
  long double v25; // q0
  _QWORD *v26; // x8
  __int64 v27; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v28; // x3
  __int64 v29; // x23
  _QWORD *v30; // x26
  void **v31; // x1
  long double v32; // q0
  _QWORD *v33; // x8
  __int64 v34; // x0
  void **v35; // x3
  __int64 v36; // x21
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  const MethodInfo *v40; // x3
  __int64 v41; // x22
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  const MethodInfo *v44; // x3
  __int64 *v45; // x8
  __int64 v46; // x1
  const MethodInfo *v47; // x3
  int32_t v48; // w1
  const MethodInfo *v49; // x3
  System_String_o *v50; // x20
  __int64 v52; // [xsp+0h] [xbp-30h] BYREF
  System_String_o *monitor; // [xsp+8h] [xbp-28h]
  void **v54; // [xsp+10h] [xbp-20h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v55; // [xsp+18h] [xbp-18h] BYREF
  __int64 v56; // [xsp+20h] [xbp-10h]
  __int64 v57; // [xsp+28h] [xbp-8h]

  monitor = (System_String_o *)actual.monitor;
  v6 = equal;
  v7 = (void **)expected.monitor;
  klass = expected.klass;
  v57 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v54 = (void **)expected.monitor;
  v55 = expected.klass;
  v9 = *(__int64 **)(equal + 56LL);
  v10 = (char)actual.klass;
  if ( !v9 )
  {
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, expected.monitor);
    sub_1BC3008(&string___TypeInfo, v11);
    sub_1BC3008(&StringLiteral_113/*" "*/, v12);
    sub_1BC3008(&StringLiteral_22116/*"null"*/, v13);
    sub_1BC3008(&StringLiteral_19143/*"expectedEqual"*/, v14);
    sub_1BC3008(&StringLiteral_19144/*"expectedNotEqual"*/, v15);
    v9 = *(__int64 **)(v6 + 56);
    if ( !v9 )
    {
      sub_1C134C8(v6);
      v9 = *(__int64 **)(v6 + 56);
    }
  }
  v16 = *v9;
  v17 = *(_WORD *)(*v9 + 309);
  v18 = *(unsigned int *)(*v9 + 252);
  if ( (v17 & 1) != 0 )
  {
    v20 = *(_DWORD *)(*v9 + 252);
  }
  else
  {
    v19 = sub_1C1346C(v5);
    v9 = *(__int64 **)(v6 + 56);
    v20 = *(_DWORD *)(v19 + 252);
    v16 = *v9;
    v17 = *(_WORD *)(*v9 + 309);
  }
  v21 = (char *)&v52 - (((unsigned int)(v20 + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( (v17 & 1) != 0 )
  {
    v22 = v16;
  }
  else
  {
    v22 = sub_1C1346C(v5);
    v9 = *(__int64 **)(v6 + 56);
    v16 = *v9;
  }
  v23 = (char *)&v52 - (((unsigned int)(*(_DWORD *)(v22 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( *(int *)(v16 + 40) >= 0 )
    v24 = &v55;
  else
    v24 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v52 - ((v18 + 15) & 0x1FFFFFFF0LL), v24, v18);
  if ( (sub_1BC3218(*v9, (char *)&v52 - ((v18 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
  {
    v26 = *(_QWORD **)(v6 + 56);
    v27 = *v26;
    if ( (*(_BYTE *)(*v26 + 309LL) & 1) == 0 )
    {
      LODWORD(v27) = sub_1C1346C(v25);
      v26 = *(_QWORD **)(v6 + 56);
      klass = v55;
    }
    if ( *(int *)(*v26 + 40LL) >= 0 )
      v28 = &v55;
    else
      v28 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    sub_1BC3A70(v27, v26[1], (int)v21, v28);
    v29 = v56;
    v7 = v54;
  }
  else
  {
    v29 = StringLiteral_22116/*"null"*/;
  }
  v30 = *(_QWORD **)(v6 + 56);
  if ( *(int *)(*v30 + 40LL) >= 0 )
    v31 = (void **)&v54;
  else
    v31 = v7;
  memcpy((char *)&v52 - ((v18 + 15) & 0x1FFFFFFF0LL), v31, v18);
  if ( (sub_1BC3218(*v30, (char *)&v52 - ((v18 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
  {
    v33 = *(_QWORD **)(v6 + 56);
    v34 = *v33;
    if ( (*(_BYTE *)(*v33 + 309LL) & 1) == 0 )
    {
      LODWORD(v34) = sub_1C1346C(v32);
      v33 = *(_QWORD **)(v6 + 56);
      v7 = v54;
    }
    if ( *(int *)(*v33 + 40LL) >= 0 )
      v35 = (void **)&v54;
    else
      v35 = v7;
    sub_1BC3A70(v34, v33[1], (int)v23, v35);
    v36 = v56;
  }
  else
  {
    v36 = StringLiteral_22116/*"null"*/;
  }
  v37 = sub_1BC30B0(string___TypeInfo, 5LL);
  if ( !v37 )
    sub_1BC3264(0LL, v38);
  v41 = v37;
  if ( !*(_DWORD *)(v37 + 24) )
    goto LABEL_43;
  *(_QWORD *)(v37 + 32) = v29;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v37 + 32), v29, v39, v40);
  if ( *(_DWORD *)(v41 + 24) <= 1u )
    goto LABEL_43;
  v43 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v41 + 40) = StringLiteral_113/*" "*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v41 + 40), v43, v39, v42);
  v45 = (__int64 *)&StringLiteral_19144/*"expectedNotEqual"*/;
  if ( (v10 & 1) == 0 )
    v45 = (__int64 *)&StringLiteral_19143/*"expectedEqual"*/;
  if ( *(_DWORD *)(v41 + 24) <= 2u
    || (v46 = *v45,
        *(_QWORD *)(v41 + 48) = *v45,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v41 + 48), v46, v39, v44),
        *(_DWORD *)(v41 + 24) <= 3u)
    || (v48 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v41 + 56) = StringLiteral_113/*" "*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v41 + 56), v48, v39, v47),
        *(_DWORD *)(v41 + 24) <= 4u) )
  {
LABEL_43:
    sub_1BC326C(v37, v38, v39);
  }
  *(_QWORD *)(v41 + 64) = v36;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v41 + 64), v36, v39, v49);
  v50 = System_String__Concat_62389164((System_String_array *)v41, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v50, monitor, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_float_(
        float expected,
        float actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2FE1288 *method)
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
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  __int64 v19; // x22
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  const MethodInfo *v22; // x3
  __int64 *v23; // x8
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  const MethodInfo *v27; // x3
  System_String_o *v28; // x20
  float v30; // [xsp+8h] [xbp-38h] BYREF
  float v31; // [xsp+Ch] [xbp-34h] BYREF

  v30 = actual;
  v31 = expected;
  if ( !method->rgctx_data )
  {
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1BC3008(&string___TypeInfo, v8);
    sub_1BC3008(&StringLiteral_113/*" "*/, v9);
    sub_1BC3008(&StringLiteral_19143/*"expectedEqual"*/, v10);
    sub_1BC3008(&StringLiteral_19144/*"expectedNotEqual"*/, v11);
    if ( !method->rgctx_data )
      sub_1C134C8(method);
  }
  v12 = System_Single__ToString(expected, (const MethodInfo *)&v31);
  v14 = System_Single__ToString(v13, (const MethodInfo *)&v30);
  v15 = sub_1BC30B0(string___TypeInfo, 5LL);
  if ( !v15 )
    sub_1BC3264(0LL, v16);
  v19 = v15;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v15 + 32) = v12;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v15 + 32), (int32_t)v12, v17, v18);
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_15;
  v21 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v19 + 40) = StringLiteral_113/*" "*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v19 + 40), v21, v17, v20);
  v23 = (__int64 *)&StringLiteral_19144/*"expectedNotEqual"*/;
  if ( !equal )
    v23 = (__int64 *)&StringLiteral_19143/*"expectedEqual"*/;
  if ( *(_DWORD *)(v19 + 24) <= 2u
    || (v24 = *v23,
        *(_QWORD *)(v19 + 48) = *v23,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v19 + 48), v24, v17, v22),
        *(_DWORD *)(v19 + 24) <= 3u)
    || (v26 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v19 + 56) = StringLiteral_113/*" "*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v19 + 56), v26, v17, v25),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_15:
    sub_1BC326C(v15, v16, v17);
  }
  *(_QWORD *)(v19 + 64) = v14;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v19 + 64), (int32_t)v14, v17, v27);
  v28 = System_String__Concat_62389164((System_String_array *)v19, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v28, message, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_int_(
        int32_t expected,
        int32_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2FE0CEC *method)
{
  const MethodInfo_2FE0CEC_RGCTXs *rgctx_data; // x8
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x23
  System_String_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  __int64 v19; // x22
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  const MethodInfo *v22; // x3
  __int64 *v23; // x8
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  const MethodInfo *v27; // x3
  System_String_o *v28; // x20
  int32_t v30; // [xsp+8h] [xbp-38h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-34h] BYREF

  v30 = actual;
  v31 = expected;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&actual);
    sub_1BC3008(&string___TypeInfo, v9);
    sub_1BC3008(&StringLiteral_113/*" "*/, v10);
    sub_1BC3008(&StringLiteral_19143/*"expectedEqual"*/, v11);
    sub_1BC3008(&StringLiteral_19144/*"expectedNotEqual"*/, v12);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C134C8(method);
      rgctx_data = method->rgctx_data;
    }
  }
  v13 = System_Int32__ToString((int32_t)&v31, (const MethodInfo *)rgctx_data[1]._0_T);
  v14 = System_Int32__ToString((int32_t)&v30, (const MethodInfo *)method->rgctx_data[1]._0_T);
  v15 = sub_1BC30B0(string___TypeInfo, 5LL);
  if ( !v15 )
    sub_1BC3264(0LL, v16);
  v19 = v15;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v15 + 32) = v13;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v15 + 32), (int32_t)v13, v17, v18);
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_15;
  v21 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v19 + 40) = StringLiteral_113/*" "*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v19 + 40), v21, v17, v20);
  v23 = (__int64 *)&StringLiteral_19144/*"expectedNotEqual"*/;
  if ( !equal )
    v23 = (__int64 *)&StringLiteral_19143/*"expectedEqual"*/;
  if ( *(_DWORD *)(v19 + 24) <= 2u
    || (v24 = *v23,
        *(_QWORD *)(v19 + 48) = *v23,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v19 + 48), v24, v17, v22),
        *(_DWORD *)(v19 + 24) <= 3u)
    || (v26 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v19 + 56) = StringLiteral_113/*" "*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v19 + 56), v26, v17, v25),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_15:
    sub_1BC326C(v15, v16, v17);
  }
  *(_QWORD *)(v19 + 64) = v14;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v19 + 64), (int32_t)v14, v17, v27);
  v28 = System_String__Concat_62389164((System_String_array *)v19, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v28, message, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_long_(
        int64_t expected,
        int64_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2FE0EB8 *method)
{
  const MethodInfo_2FE0EB8_RGCTXs *rgctx_data; // x8
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x23
  System_String_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  __int64 v19; // x22
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  const MethodInfo *v22; // x3
  __int64 *v23; // x8
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  const MethodInfo *v27; // x3
  System_String_o *v28; // x20
  int64_t v30; // [xsp+8h] [xbp-48h] BYREF
  int64_t v31; // [xsp+18h] [xbp-38h] BYREF

  v31 = expected;
  v30 = actual;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, actual);
    sub_1BC3008(&string___TypeInfo, v9);
    sub_1BC3008(&StringLiteral_113/*" "*/, v10);
    sub_1BC3008(&StringLiteral_19143/*"expectedEqual"*/, v11);
    sub_1BC3008(&StringLiteral_19144/*"expectedNotEqual"*/, v12);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C134C8(method);
      rgctx_data = method->rgctx_data;
    }
  }
  v13 = System_Int64__ToString((int64_t)&v31, (const MethodInfo *)rgctx_data[1]._0_T);
  v14 = System_Int64__ToString((int64_t)&v30, (const MethodInfo *)method->rgctx_data[1]._0_T);
  v15 = sub_1BC30B0(string___TypeInfo, 5LL);
  if ( !v15 )
    sub_1BC3264(0LL, v16);
  v19 = v15;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v15 + 32) = v13;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v15 + 32), (int32_t)v13, v17, v18);
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_15;
  v21 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v19 + 40) = StringLiteral_113/*" "*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v19 + 40), v21, v17, v20);
  v23 = (__int64 *)&StringLiteral_19144/*"expectedNotEqual"*/;
  if ( !equal )
    v23 = (__int64 *)&StringLiteral_19143/*"expectedEqual"*/;
  if ( *(_DWORD *)(v19 + 24) <= 2u
    || (v24 = *v23,
        *(_QWORD *)(v19 + 48) = *v23,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v19 + 48), v24, v17, v22),
        *(_DWORD *)(v19 + 24) <= 3u)
    || (v26 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v19 + 56) = StringLiteral_113/*" "*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v19 + 56), v26, v17, v25),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_15:
    sub_1BC326C(v15, v16, v17);
  }
  *(_QWORD *)(v19 + 64) = v14;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v19 + 64), (int32_t)v14, v17, v27);
  v28 = System_String__Concat_62389164((System_String_array *)v19, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v28, message, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_object_(
        Il2CppObject *expected,
        Il2CppObject *actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2FE108C *method)
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
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  __int64 v20; // x22
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  const MethodInfo *v23; // x3
  __int64 *v24; // x8
  __int64 v25; // x1
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  const MethodInfo *v28; // x3
  System_String_o *v29; // x20

  if ( (byte_4B07658 & 1) == 0 )
  {
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, actual);
    sub_1BC3008(&string___TypeInfo, v9);
    sub_1BC3008(&StringLiteral_113/*" "*/, v10);
    sub_1BC3008(&StringLiteral_22116/*"null"*/, v11);
    sub_1BC3008(&StringLiteral_19143/*"expectedEqual"*/, v12);
    sub_1BC3008(&StringLiteral_19144/*"expectedNotEqual"*/, v13);
    byte_4B07658 = 1;
  }
  if ( expected )
    v14 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, bool, System_String_o *, const MethodInfo_2FE108C *))expected->klass->vtable[3].method)(
            expected,
            expected->klass->vtable[4].methodPtr,
            equal,
            message,
            method);
  else
    v14 = StringLiteral_22116/*"null"*/;
  if ( actual )
    v15 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))actual->klass->vtable[3].method)(
            actual,
            actual->klass->vtable[4].methodPtr);
  else
    v15 = StringLiteral_22116/*"null"*/;
  v16 = sub_1BC30B0(string___TypeInfo, 5LL);
  if ( !v16 )
    sub_1BC3264(0LL, v17);
  v20 = v16;
  if ( !*(_DWORD *)(v16 + 24) )
    goto LABEL_21;
  *(_QWORD *)(v16 + 32) = v14;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v16 + 32), v14, v18, v19);
  if ( *(_DWORD *)(v20 + 24) <= 1u )
    goto LABEL_21;
  v22 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v20 + 40) = StringLiteral_113/*" "*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 40), v22, v18, v21);
  v24 = (__int64 *)(equal ? &StringLiteral_19144/*"expectedNotEqual"*/ : &StringLiteral_19143/*"expectedEqual"*/);
  if ( *(_DWORD *)(v20 + 24) <= 2u
    || (v25 = *v24,
        *(_QWORD *)(v20 + 48) = *v24,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 48), v25, v18, v23),
        *(_DWORD *)(v20 + 24) <= 3u)
    || (v27 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v20 + 56) = StringLiteral_113/*" "*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 56), v27, v18, v26),
        *(_DWORD *)(v20 + 24) <= 4u) )
  {
LABEL_21:
    sub_1BC326C(v16, v17, v18);
  }
  *(_QWORD *)(v20 + 64) = v15;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 64), v15, v18, v28);
  v29 = System_String__Concat_62389164((System_String_array *)v20, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v29, message, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetEffectiveAssertMessage(
        System_String_o *defaultMessage,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1

  if ( (byte_4B0658D & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_56/*"\n("*/, message);
    sub_1BC3008(&StringLiteral_754/*")"*/, v5);
    byte_4B0658D = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    return defaultMessage;
  else
    return System_String__Concat_62388900(
             message,
             (System_String_o *)StringLiteral_56/*"\n("*/,
             defaultMessage,
             (System_String_o *)StringLiteral_754/*")"*/,
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

  if ( (byte_4B06599 & 1) == 0 )
  {
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1BC3008(&StringLiteral_25145/*"が null です"*/, v5);
    byte_4B06599 = 1;
  }
  v7 = System_String__Concat_62348648(modelName, (System_String_o *)StringLiteral_25145/*"が null です"*/, 0LL);
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

  if ( (byte_4B0659B & 1) == 0 )
  {
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1BC3008(&StringLiteral_273/*" isNotNumbers"*/, v5);
    byte_4B0659B = 1;
  }
  v7 = System_String__Concat_62348648(value, (System_String_o *)StringLiteral_273/*" isNotNumbers"*/, 0LL);
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
        const MethodInfo_2FE17E8 *method)
{
  long double v7; // q0
  __int64 v8; // x21
  System_String_o *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x20
  __int64 v11; // x8
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x0
  __int64 v18; // x24
  int v19; // w8
  char *v20; // x23
  System_String_o *v21; // x25
  __int64 v22; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v23; // x1
  __int64 v24; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v25; // x1
  __int64 *v26; // x1
  __int64 v27; // x0
  long double v28; // q0
  __int64 v29; // x9
  __int64 v30; // x8
  __int64 v31; // x0
  __int64 *v32; // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v33; // x3
  System_String_o *v34; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v35; // [xsp+0h] [xbp-20h] BYREF
  System_String_o *v36; // [xsp+8h] [xbp-18h] BYREF
  char v37[4]; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v38; // [xsp+18h] [xbp-8h]

  v8 = *(_QWORD *)&line;
  monitor = (System_String_o *)key.monitor;
  klass = key.klass;
  v38 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v35 = key.klass;
  v11 = *(_QWORD *)(*(_QWORD *)&line + 56LL);
  if ( !v11 )
  {
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, key.klass);
    sub_1BC3008(&StringLiteral_25178/*"ディクショナリ"*/, v13);
    sub_1BC3008(&StringLiteral_772/*") の値がディクショナリに含まれていません"*/, v14);
    sub_1BC3008(&StringLiteral_20908/*"key("*/, v15);
    sub_1BC3008(&StringLiteral_25165/*"キー"*/, v16);
    v11 = *(_QWORD *)(v8 + 56);
    if ( !v11 )
    {
      sub_1C134C8(v8);
      v11 = *(_QWORD *)(v8 + 56);
    }
  }
  v17 = *(_QWORD *)(v11 + 8);
  v18 = *(unsigned int *)(v17 + 252);
  v19 = *(_DWORD *)(v17 + 252);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v19 = *(_DWORD *)(sub_1C1346C(v7) + 252);
  v20 = (char *)&v35 - (((unsigned int)(v19 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v21 = (System_String_o *)((char *)&v35 - ((v18 + 15) & 0x1FFFFFFF0LL));
  if ( !dic )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v32 = &StringLiteral_25178/*"ディクショナリ"*/;
    goto LABEL_25;
  }
  v22 = *(_QWORD *)(v8 + 56);
  if ( *(int *)(*(_QWORD *)(v22 + 8) + 40LL) >= 0 )
    v23 = &v35;
  else
    v23 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v35 - ((v18 + 15) & 0x1FFFFFFF0LL), v23, v18);
  if ( (sub_1BC3218(*(_QWORD *)(v22 + 8), (char *)&v35 - ((v18 + 15) & 0x1FFFFFFF0LL)) & 1) == 0 )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v32 = &StringLiteral_25165/*"キー"*/;
LABEL_25:
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)*v32, monitor, 0LL);
    return;
  }
  v24 = *(_QWORD *)(v8 + 56);
  if ( *(int *)(*(_QWORD *)(v24 + 8) + 40LL) >= 0 )
    v25 = &v35;
  else
    v25 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v35 - ((v18 + 15) & 0x1FFFFFFF0LL), v25, v18);
  v26 = *(__int64 **)(v24 + 16);
  v27 = *v26;
  if ( (*(_DWORD *)(*(_QWORD *)(v24 + 8) + 40LL) & 0x80000000) == 0 )
    v21 = (System_String_o *)v21->klass;
  v36 = v21;
  ((void (__fastcall *)(__int64, __int64 *, System_Collections_Generic_Dictionary_T1__T2__o *, System_String_o **, char *))v26[2])(
    v27,
    v26,
    dic,
    &v36,
    v37);
  if ( !v37[0] )
  {
    v29 = *(_QWORD *)(v8 + 56);
    v30 = *(_QWORD *)(v29 + 8);
    if ( (*(_BYTE *)(v30 + 309) & 1) != 0 )
    {
      v31 = *(_QWORD *)(v29 + 8);
    }
    else
    {
      LODWORD(v31) = sub_1C1346C(v28);
      v29 = *(_QWORD *)(v8 + 56);
      klass = v35;
      v30 = *(_QWORD *)(v29 + 8);
    }
    if ( *(int *)(v30 + 40) >= 0 )
      v33 = &v35;
    else
      v33 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    sub_1BC3A70(v31, *(_QWORD *)(v29 + 24), (int)v20, v33);
    v34 = System_String__Concat_62386896(
            (System_String_o *)StringLiteral_20908/*"key("*/,
            v36,
            (System_String_o *)StringLiteral_772/*") の値がディクショナリに含まれていません"*/,
            0LL);
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetEffectiveAssertMessage(v34, monitor, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__IsAllSerializeFieldsNotNull(
        UnityEngine_Component_o *component,
        bool checkInheritance,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  System_Type_o *Type; // x0
  Fgo_Assertions_Assert_c *v31; // x8
  Il2CppObject *v32; // x20
  __int64 v33; // x1
  __int64 v34; // x22
  System_Collections_Generic_List_object__o *v35; // x21
  __int64 v36; // x2
  __int64 v37; // x8
  unsigned __int64 v38; // x26
  System_Reflection_MemberInfo_o *v39; // x23
  intptr_t v40; // w24
  System_Type_o *TypeFromHandle; // x0
  intptr_t v42; // w24
  System_Type_o *v43; // x0
  intptr_t v44; // w24
  UnityEngine_Component_o *v45; // x24
  const MethodInfo *v46; // x3
  intptr_t v47; // w24
  System_Type_o *v48; // x24
  intptr_t v49; // w24
  System_Type_o *v50; // x24
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  Fgo_Assertions_Assert_c *v55; // x0
  System_Collections_Generic_Dictionary_object__object__o *cachedFieldInfo; // x22
  Fgo_Assertions_Assert_c *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x20
  Fgo_Assertions_Assert___c_c *v61; // x8
  System_Func_T1__T2__TResult__o *_9__42_0; // x21
  Il2CppObject *v63; // x22
  struct Fgo_Assertions_Assert___c_StaticFields *static_fields; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v67; // x0
  __int64 v68; // x1
  System_Collections_Generic_IEnumerable_TResult__o *v69; // x20
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  __int64 v71; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v74; // x1
  __int64 v75; // x20
  __int64 v76; // x8
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0
  __int64 v80; // x8
  __int64 v81; // x9
  int *v82; // x10
  __int64 v83; // x0
  __int64 v84; // x8
  __int64 v85; // x9
  int *v86; // x10
  __int64 v87; // x0
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+20h] [xbp-80h] BYREF
  System_RuntimeTypeHandle_o v90; // 0:w0.4
  System_RuntimeTypeHandle_o v91; // 0:w0.4
  System_RuntimeTypeHandle_o v92; // 0:w0.4
  System_RuntimeTypeHandle_o v93; // 0:w0.4
  System_RuntimeTypeHandle_o v94; // 0:w0.4

  v4 = (Il2CppObject *)component;
  if ( (byte_4B0659E & 1) == 0 )
  {
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, checkInheritance);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___ContainsKey__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___get_Item__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___set_Item__, v7);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_Object____f__AnonymousType0_Object__int____, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_FieldInfo__Dispose__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_FieldInfo__MoveNext__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_FieldInfo__get_Current__, v11);
    sub_1BC3008(&System_Func_Object__int____f__AnonymousType0_Object__int___TypeInfo, v12);
    sub_1BC3008(&System_IDisposable_TypeInfo, v13);
    sub_1BC3008(&System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___TypeInfo, v14);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_Object__var, v15);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_Object__TypeInfo, v16);
    sub_1BC3008(&System_Collections_Generic_IEnumerator___f__AnonymousType0_Object__int___TypeInfo, v17);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_FieldInfo__Add__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_FieldInfo__GetEnumerator__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_FieldInfo___ctor__, v21);
    sub_1BC3008(&System_Collections_Generic_List_FieldInfo__TypeInfo, v22);
    sub_1BC3008(&Fgo_Assertions_Assert_NullableAttribute_var, v23);
    sub_1BC3008(&UnityEngine_Object___var, v24);
    sub_1BC3008(&UnityEngine_Object_var, v25);
    sub_1BC3008(&UnityEngine_SerializeField_var, v26);
    sub_1BC3008(&System_Type_TypeInfo, v27);
    sub_1BC3008(&Method_Fgo_Assertions_Assert___c__IsAllSerializeFieldsNotNull_b__42_0__, v28);
    component = (UnityEngine_Component_o *)sub_1BC3008(&Fgo_Assertions_Assert___c_TypeInfo, v29);
    byte_4B0659E = 1;
  }
  memset(&v89, 0, sizeof(v89));
  if ( !v4 )
    goto LABEL_92;
  Type = System_Object__GetType(v4, 0LL);
  v31 = Fgo_Assertions_Assert_TypeInfo;
  v32 = (Il2CppObject *)Type;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v31 = Fgo_Assertions_Assert_TypeInfo;
  }
  component = (UnityEngine_Component_o *)v31->static_fields->cachedFieldInfo;
  if ( !component )
    goto LABEL_92;
  component = (UnityEngine_Component_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                           (System_Collections_Generic_Dictionary_object__object__o *)component,
                                           v32,
                                           (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___ContainsKey__);
  if ( ((unsigned __int8)component & 1) != 0 )
    goto LABEL_45;
  if ( !v32 )
    goto LABEL_92;
  v33 = checkInheritance ? 60LL : 62LL;
  v34 = ((__int64 (__fastcall *)(Il2CppObject *, __int64, Il2CppMethodPointer))v32->klass->vtable[88].method)(
          v32,
          v33,
          v32->klass->vtable[89].methodPtr);
  v35 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_FieldInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_FieldInfo___ctor__);
  if ( !v34 )
    goto LABEL_92;
  v37 = *(_QWORD *)(v34 + 24);
  if ( (int)v37 >= 1 )
  {
    v38 = 0LL;
    do
    {
      if ( v38 >= (unsigned int)v37 )
        sub_1BC326C(component, checkInheritance, v36);
      v39 = *(System_Reflection_MemberInfo_o **)(v34 + 32 + 8 * v38);
      v40 = (int)UnityEngine_SerializeField_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v90.fields.value = v40;
      TypeFromHandle = System_Type__GetTypeFromHandle(v90, 0LL);
      component = (UnityEngine_Component_o *)System_Reflection_CustomAttributeExtensions__IsDefined(
                                               v39,
                                               TypeFromHandle,
                                               0LL);
      if ( ((unsigned __int8)component & 1) != 0 )
      {
        v42 = (int)Fgo_Assertions_Assert_NullableAttribute_var;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v91.fields.value = v42;
        v43 = System_Type__GetTypeFromHandle(v91, 0LL);
        component = (UnityEngine_Component_o *)System_Reflection_CustomAttributeExtensions__IsDefined(v39, v43, 0LL);
        if ( ((unsigned __int8)component & 1) == 0 )
        {
          v44 = (int)UnityEngine_Object_var;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v92.fields.value = v44;
          component = (UnityEngine_Component_o *)System_Type__GetTypeFromHandle(v92, 0LL);
          if ( !v39 )
            goto LABEL_92;
          v45 = component;
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, void *))v39->klass[1]._1.namespaze)(
                                                   v39,
                                                   v39->klass[1]._1.byval_arg.data);
          if ( !v45 )
            goto LABEL_92;
          component = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, UnityEngine_Component_o *, Il2CppMethodPointer))&v45->klass[1]._2.naturalAligment)(
                                                   v45,
                                                   component,
                                                   v45->klass[1].vtable._0_Equals.methodPtr);
          if ( ((unsigned __int8)component & 1) != 0 )
            goto LABEL_96;
          v47 = (int)UnityEngine_Object___var;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v93.fields.value = v47;
          v48 = System_Type__GetTypeFromHandle(v93, 0LL);
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, void *))v39->klass[1]._1.namespaze)(
                                                   v39,
                                                   v39->klass[1]._1.byval_arg.data);
          if ( !v48 )
            goto LABEL_92;
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Type_o *, UnityEngine_Component_o *, Il2CppMethodPointer))v48->klass->vtable._22_IsAssignableFrom.method)(
                                                   v48,
                                                   component,
                                                   v48->klass->vtable._23_GetType.methodPtr);
          if ( ((unsigned __int8)component & 1) != 0 )
            goto LABEL_96;
          v49 = (int)System_Collections_Generic_IEnumerable_Object__var;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v94.fields.value = v49;
          v50 = System_Type__GetTypeFromHandle(v94, 0LL);
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, void *))v39->klass[1]._1.namespaze)(
                                                   v39,
                                                   v39->klass[1]._1.byval_arg.data);
          if ( !v50 )
            goto LABEL_92;
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Type_o *, UnityEngine_Component_o *, Il2CppMethodPointer))v50->klass->vtable._22_IsAssignableFrom.method)(
                                                   v50,
                                                   component,
                                                   v50->klass->vtable._23_GetType.methodPtr);
          if ( ((unsigned __int8)component & 1) != 0 )
          {
LABEL_96:
            if ( !v35 )
              goto LABEL_92;
            items = v35->fields._items;
            v52 = Method_System_Collections_Generic_List_FieldInfo__Add__;
            ++v35->fields._version;
            if ( !items )
              goto LABEL_92;
            size = v35->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v35,
                (Il2CppObject *)v39,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
            }
            else
            {
              v54 = &items->obj.klass + size;
              v35->fields._size = size + 1;
              v54[4] = (Il2CppClass *)v39;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v54 + 4), (int32_t)v39, v36, v46);
            }
          }
        }
      }
      LODWORD(v37) = *(_DWORD *)(v34 + 24);
    }
    while ( (__int64)++v38 < (int)v37 );
  }
  v55 = Fgo_Assertions_Assert_TypeInfo;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v55 = Fgo_Assertions_Assert_TypeInfo;
  }
  cachedFieldInfo = (System_Collections_Generic_Dictionary_object__object__o *)v55->static_fields->cachedFieldInfo;
  component = (UnityEngine_Component_o *)System_Object__GetType(v4, 0LL);
  if ( !cachedFieldInfo )
LABEL_92:
    sub_1BC3264(component, checkInheritance);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    cachedFieldInfo,
    (Il2CppObject *)component,
    (Il2CppObject *)v35,
    (const MethodInfo_336CFD4 *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___set_Item__);
LABEL_45:
  v57 = Fgo_Assertions_Assert_TypeInfo;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v57 = Fgo_Assertions_Assert_TypeInfo;
  }
  component = (UnityEngine_Component_o *)v57->static_fields->cachedFieldInfo;
  if ( !component )
    goto LABEL_92;
  component = (UnityEngine_Component_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                           (System_Collections_Generic_Dictionary_object__object__o *)component,
                                           v32,
                                           (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___get_Item__);
  if ( !component )
    goto LABEL_92;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v88,
    (System_Collections_Generic_List_object__o *)component,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_FieldInfo__GetEnumerator__);
  v89 = v88;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v89,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_FieldInfo__MoveNext__) )
  {
    if ( !v89.fields._current )
      sub_1BC3264(0LL, v58);
    v59 = ((__int64 (*)(void))v89.fields._current->klass->vtable[25].method)();
    v60 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1BC3144(
                                                                 v59,
                                                                 System_Collections_Generic_IEnumerable_Object__TypeInfo);
    if ( v60 )
    {
      v61 = Fgo_Assertions_Assert___c_TypeInfo;
      if ( !Fgo_Assertions_Assert___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert___c_TypeInfo);
        v61 = Fgo_Assertions_Assert___c_TypeInfo;
      }
      _9__42_0 = (System_Func_T1__T2__TResult__o *)v61->static_fields->__9__42_0;
      if ( !_9__42_0 )
      {
        if ( !v61->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v61);
          v61 = Fgo_Assertions_Assert___c_TypeInfo;
        }
        v63 = (Il2CppObject *)v61->static_fields->__9;
        _9__42_0 = (System_Func_T1__T2__TResult__o *)sub_1BC3254(System_Func_Object__int____f__AnonymousType0_Object__int___TypeInfo);
        System_Func_object__int__object____ctor(
          _9__42_0,
          v63,
          Method_Fgo_Assertions_Assert___c__IsAllSerializeFieldsNotNull_b__42_0__,
          0LL);
        static_fields = Fgo_Assertions_Assert___c_TypeInfo->static_fields;
        static_fields->__9__42_0 = (struct System_Func_Object__int____f__AnonymousType0_Object__int___o *)_9__42_0;
        sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__42_0, (int32_t)_9__42_0, v65, v66);
      }
      v67 = System_Linq_Enumerable__Select_object__object__50554388(
              v60,
              (System_Func_TSource__int__TResult__o *)_9__42_0,
              (const MethodInfo_3036614 *)Method_System_Linq_Enumerable_Select_Object____f__AnonymousType0_Object__int____);
      v69 = v67;
      if ( !v67 )
        sub_1BC3264(0LL, v68);
      klass = v67->klass;
      v71 = *(unsigned __int16 *)(&v67->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v67->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___c **)p_offset - 1) != System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___TypeInfo )
        {
          --v71;
          p_offset += 4;
          if ( !v71 )
            goto LABEL_64;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_64:
        p_method = sub_1C13570(
                     v67,
                     System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___TypeInfo,
                     0LL);
      }
      v75 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
              v69,
              *(_QWORD *)(p_method + 8));
      if ( !v75 )
        sub_1BC3264(0LL, v74);
      while ( 1 )
      {
        v76 = *(_QWORD *)v75;
        v77 = *(unsigned __int16 *)(*(_QWORD *)v75 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v75 + 302LL) )
        {
          v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v78 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v77;
            v78 += 4;
            if ( !v77 )
              goto LABEL_71;
          }
          v79 = v76 + 16LL * *v78 + 312;
        }
        else
        {
LABEL_71:
          v79 = sub_1C13570(v75, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v79)(v75, *(_QWORD *)(v79 + 8)) & 1) == 0 )
          break;
        v80 = *(_QWORD *)v75;
        v81 = *(unsigned __int16 *)(*(_QWORD *)v75 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v75 + 302LL) )
        {
          v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator___f__AnonymousType0_Object__int___c **)v82 - 1) != System_Collections_Generic_IEnumerator___f__AnonymousType0_Object__int___TypeInfo )
          {
            --v81;
            v82 += 4;
            if ( !v81 )
              goto LABEL_78;
          }
          v83 = v80 + 16LL * *v82 + 312;
        }
        else
        {
LABEL_78:
          v83 = sub_1C13570(v75, System_Collections_Generic_IEnumerator___f__AnonymousType0_Object__int___TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v83)(v75, *(_QWORD *)(v83 + 8));
      }
      v84 = *(_QWORD *)v75;
      v85 = *(unsigned __int16 *)(*(_QWORD *)v75 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v75 + 302LL) )
      {
        v86 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v86 - 1) != System_IDisposable_TypeInfo )
        {
          --v85;
          v86 += 4;
          if ( !v85 )
            goto LABEL_85;
        }
        v87 = v84 + 16LL * *v86 + 312;
      }
      else
      {
LABEL_85:
        v87 = sub_1C13570(v75, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v87)(v75, *(_QWORD *)(v87 + 8));
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v89,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_FieldInfo__Dispose__);
}


void __fastcall Fgo_Assertions_Assert__IsAssetDataNotNull(
        Il2CppObject *assetData,
        System_String_o *assetName,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4B06597 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_15747/*"[AssetData]\n{0}をロードできませんでした"*/, assetName);
    byte_4B06597 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_15747/*"[AssetData]\n{0}をロードできませんでした"*/, (Il2CppObject *)assetName, 0LL);
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

  if ( (byte_4B0659A & 1) == 0 )
  {
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&int_TypeInfo, v10);
    sub_1BC3008(&StringLiteral_20560/*"index({0}) の値が負です"*/, v11);
    sub_1BC3008(&StringLiteral_20561/*"index({0}) の値が配列の要素数({1})を超えています"*/, v12);
    byte_4B0659A = 1;
  }
  if ( (index & 0x80000000) != 0 )
  {
    v24 = index;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, message, gameObject, filePath);
    v18 = System_String__Format((System_String_o *)StringLiteral_20560/*"index({0}) の値が負です"*/, v20, 0LL);
  }
  else
  {
    if ( count > index )
      return;
    v23 = index;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, message, gameObject, filePath);
    v22 = count;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v14, v15, v16);
    v18 = System_String__Format_62389940((System_String_o *)StringLiteral_20561/*"index({0}) の値が配列の要素数({1})を超えています"*/, v13, v17, 0LL);
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
        const MethodInfo_2FE1B08 *method)
{
  __int64 v9; // x1

  if ( (byte_4B0765A & 1) == 0 )
  {
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&StringLiteral_25266/*"配列"*/, v9);
    byte_4B0765A = 1;
  }
  if ( !array )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25266/*"配列"*/, message, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__IsInRange___Il2CppFullySharedGenericType__50207364(
        System_Collections_Generic_List_T__o *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2FE1A84 *method)
{
  __int64 v9; // x1

  if ( (byte_4B07659 & 1) == 0 )
  {
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&StringLiteral_25192/*"リスト"*/, v9);
    byte_4B07659 = 1;
  }
  if ( !array )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25192/*"リスト"*/, message, 0LL);
  }
}


void __fastcall Fgo_Assertions_Assert__IsNotNull_object_(
        Il2CppObject *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2FE1B8C *method)
{
  Il2CppClass *klass; // x8
  UnityEngine_Object_c *v8; // x0
  unsigned int methodPtr_low; // w10
  __int64 v10; // x9
  Il2CppObject *v11; // x0

  if ( (byte_4B0765B & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, message);
    byte_4B0765B = 1;
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

  if ( (byte_4B0659D & 1) == 0 )
  {
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1BC3008(&StringLiteral_25152/*"アクション"*/, v8);
    byte_4B0659D = 1;
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
      (System_String_o *)StringLiteral_25152/*"アクション"*/,
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
        const MethodInfo_2FE1C50 *method)
{
  Il2CppClass *klass; // x8
  UnityEngine_Object_c *v8; // x0
  unsigned int methodPtr_low; // w10
  __int64 v10; // x9
  Il2CppObject *v11; // x0

  if ( (byte_4B0765C & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, message);
    byte_4B0765C = 1;
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
        const MethodInfo_2FE1D14 *method)
{
  if ( (byte_4B0765D & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_15794/*"[SerializeField]\n{0}の参照が切れています"*/, fieldName);
    byte_4B0765D = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_15794/*"[SerializeField]\n{0}の参照が切れています"*/, (Il2CppObject *)fieldName, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__IsTrueOnce(
        int32_t assertKey,
        bool condition,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  Fgo_Assertions_Assert_c *v11; // x0
  System_Collections_Generic_HashSet_T__o *suppressAsserts; // x0
  Fgo_Assertions_Assert_c *v13; // x0

  if ( (byte_4B06596 & 1) == 0 )
  {
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, condition);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Contains__, v10);
    byte_4B06596 = 1;
  }
  if ( !condition )
  {
    v11 = Fgo_Assertions_Assert_TypeInfo;
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
      v11 = Fgo_Assertions_Assert_TypeInfo;
    }
    suppressAsserts = (System_Collections_Generic_HashSet_T__o *)v11->static_fields->suppressAsserts;
    if ( suppressAsserts )
    {
      if ( System_Collections_Generic_HashSet_Int32Enum___Contains(
             suppressAsserts,
             assertKey,
             (const MethodInfo_355A700 *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Contains__) )
      {
        return;
      }
      v13 = Fgo_Assertions_Assert_TypeInfo;
      if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
        v13 = Fgo_Assertions_Assert_TypeInfo;
      }
      suppressAsserts = (System_Collections_Generic_HashSet_T__o *)v13->static_fields->suppressAsserts;
      if ( suppressAsserts )
      {
        System_Collections_Generic_HashSet_Int32Enum___Add(
          suppressAsserts,
          assertKey,
          (const MethodInfo_355B210 *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Add__);
        return;
      }
    }
    sub_1BC3264(suppressAsserts, condition);
  }
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

  if ( (byte_4B06589 & 1) == 0 )
  {
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, expected);
    sub_1BC3008(&StringLiteral_24862/*"{0}\n(expected={1}, actual={2})"*/, v7);
    byte_4B06589 = 1;
  }
  v8 = System_String__Format_62390008(
         (System_String_o *)StringLiteral_24862/*"{0}\n(expected={1}, actual={2})"*/,
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
          sub_1BC3264(v13, v14);
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
  if ( (byte_4B06598 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_15771/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/, key);
    byte_4B06598 = 1;
  }
  System_String__Format_62389940((System_String_o *)StringLiteral_15771/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/, (Il2CppObject *)name, (Il2CppObject *)key, 0LL);
}


void __fastcall Fgo_Assertions_Assert__OnFailed_48124696(
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
  if ( (byte_4B0658A & 1) == 0 )
  {
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1BC3008(&int_TypeInfo, v11);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v12);
    sub_1BC3008(&System_IO_Path_TypeInfo, v13);
    sub_1BC3008(&StringLiteral_24900/*"{0}({1})"*/, v14);
    sub_1BC3008(&StringLiteral_61/*"\nGameObject:"*/, v15);
    caption = (System_String_o *)sub_1BC3008(&StringLiteral_24863/*"{0}\n{1}\n{2}"*/, v16);
    byte_4B0658A = 1;
  }
  if ( !filePath )
    goto LABEL_27;
  v17 = System_String__Replace(filePath, 0x5Cu, 0x2Fu, 0LL);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = (Il2CppObject *)System_IO_Path__GetFileName(v17, 0LL);
  v31 = line;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v19, v20, v21);
  v23 = (Il2CppObject *)System_String__Format_62389940((System_String_o *)StringLiteral_24900/*"{0}({1})"*/, FileName, v22, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  caption = (System_String_o *)UnityEngine_Object__op_Inequality(0LL, (UnityEngine_Object_o *)gameObject, 0LL);
  if ( ((unsigned __int8)caption & 1) != 0 )
  {
    if ( !gameObject )
      goto LABEL_27;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    v9 = System_String__Concat_62386896(v9, (System_String_o *)StringLiteral_61/*"\nGameObject:"*/, name, 0LL);
  }
  v25 = System_String__Format_62390008((System_String_o *)StringLiteral_24863/*"{0}\n{1}\n{2}"*/, v10, (Il2CppObject *)v9, v23, 0LL);
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
      sub_1BC3264(caption, message);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__SetOnFailedAction(
        System_Action_string__o *action,
        bool force,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  Fgo_Assertions_Assert_c *v8; // x0
  Fgo_Assertions_Assert_c *v9; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_4B0658B & 1) == 0 )
  {
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, force);
    sub_1BC3008(&UnityEngine_Debug_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_25237/*"既に表明違反時の処理が設定されています"*/, v7);
    byte_4B0658B = 1;
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
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_25237/*"既に表明違反時の処理が設定されています"*/, 0LL);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->onFailedAction, (int32_t)action, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__SetOnFailedSendReport(
        System_Action_string__string__string__o *action,
        bool force,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  Fgo_Assertions_Assert_c *v8; // x0
  Fgo_Assertions_Assert_c *v9; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_4B0658C & 1) == 0 )
  {
    sub_1BC3008(&Fgo_Assertions_Assert_TypeInfo, force);
    sub_1BC3008(&UnityEngine_Debug_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_25237/*"既に表明違反時の処理が設定されています"*/, v7);
    byte_4B0658C = 1;
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
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_25237/*"既に表明違反時の処理が設定されています"*/, 0LL);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->onFailedSendReport, (int32_t)action, (int32_t)method, v3);
}


void __fastcall Fgo_Assertions_Assert_NullableAttribute___ctor(
        Fgo_Assertions_Assert_NullableAttribute_o *this,
        const MethodInfo *method)
{
  System_Attribute___ctor((System_Attribute_o *)this, 0LL);
}


void __fastcall Fgo_Assertions_Assert_StringFormatParam___ctor(
        Fgo_Assertions_Assert_StringFormatParam_o *this,
        System_String_o *aFormat,
        System_Object_array *aArgs,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.format = aFormat;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)aFormat, v7, v8);
  this->fields.args = aArgs;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.args, (int32_t)aArgs, v9, v10);
}


void __fastcall Fgo_Assertions_Assert___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B065A0 & 1) == 0 )
  {
    sub_1BC3008(&Fgo_Assertions_Assert___c_TypeInfo, v1);
    byte_4B065A0 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(Fgo_Assertions_Assert___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  Fgo_Assertions_Assert___c_TypeInfo->static_fields->__9 = (struct Fgo_Assertions_Assert___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)Fgo_Assertions_Assert___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall Fgo_Assertions_Assert___c___ctor(Fgo_Assertions_Assert___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


__f__AnonymousType0_Object__int__o *__fastcall Fgo_Assertions_Assert___c___IsAllSerializeFieldsNotNull_b__42_0(
        Fgo_Assertions_Assert___c_o *this,
        UnityEngine_Object_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __f__AnonymousType0__obj_j__TPar___index_j__TPar__o *v7; // x21

  if ( (byte_4B065A1 & 1) == 0 )
  {
    sub_1BC3008(&Method___f__AnonymousType0_Object__int___ctor__, obj);
    sub_1BC3008(&_f__AnonymousType0_Object__int__TypeInfo, v6);
    byte_4B065A1 = 1;
  }
  v7 = (__f__AnonymousType0__obj_j__TPar___index_j__TPar__o *)sub_1BC3254(_f__AnonymousType0_Object__int__TypeInfo);
  _f__AnonymousType0_object__int____ctor(
    v7,
    (Il2CppObject *)obj,
    index,
    (const MethodInfo_31D6770 *)Method___f__AnonymousType0_Object__int___ctor__);
  return (__f__AnonymousType0_Object__int__o *)v7;
}


void __fastcall Fgo_Assertions_AssertQueue___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_Queue_T__o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B065A7 & 1) == 0 )
  {
    sub_1BC3008(&Fgo_Assertions_AssertQueue_TypeInfo, v1);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_string___ctor__, v2);
    sub_1BC3008(&System_Collections_Generic_Queue_string__TypeInfo, v3);
    byte_4B065A7 = 1;
  }
  v4 = (System_Collections_Generic_Queue_T__o *)sub_1BC3254(System_Collections_Generic_Queue_string__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v4,
    (const MethodInfo_38154B0 *)Method_System_Collections_Generic_Queue_string___ctor__);
  Fgo_Assertions_AssertQueue_TypeInfo->static_fields->queue = (struct System_Collections_Generic_Queue_string__o *)v4;
  sub_1BC2FAC((CGThumbnailListItem_o *)Fgo_Assertions_AssertQueue_TypeInfo->static_fields, (int32_t)v4, v5, v6);
  static_fields = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
  static_fields->onFailedAction = 0LL;
  static_fields = (struct Fgo_Assertions_AssertQueue_StaticFields *)((char *)static_fields + 16);
  LOBYTE(static_fields[-1].onFailedAction) = 1;
  sub_1BC2FAC((CGThumbnailListItem_o *)static_fields, 0, v8, v9);
}


void __fastcall Fgo_Assertions_AssertQueue__Clear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Fgo_Assertions_AssertQueue_c *v3; // x0
  System_Collections_Generic_Queue_T__o *queue; // x0

  if ( (byte_4B065A6 & 1) == 0 )
  {
    sub_1BC3008(&Fgo_Assertions_AssertQueue_TypeInfo, v1);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_string__Clear__, v2);
    byte_4B065A6 = 1;
  }
  v3 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v3 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  queue = (System_Collections_Generic_Queue_T__o *)v3->static_fields->queue;
  if ( !queue )
    sub_1BC3264(0LL, v1);
  System_Collections_Generic_Queue_object___Clear(
    queue,
    (const MethodInfo_3815738 *)Method_System_Collections_Generic_Queue_string__Clear__);
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

  if ( (byte_4B065A5 & 1) == 0 )
  {
    sub_1BC3008(&Fgo_Assertions_AssertQueue_TypeInfo, v1);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_string__Dequeue__, v2);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_string__get_Count__, v3);
    byte_4B065A5 = 1;
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
               (const MethodInfo_3815C08 *)Method_System_Collections_Generic_Queue_string__Dequeue__);
        Fgo_Assertions_AssertQueue__OnFailed((System_String_o *)v7, v8);
        return;
      }
LABEL_12:
      sub_1BC3264(queue, v1);
    }
  }
  syncRoot->isReady = 1;
}


void __fastcall Fgo_Assertions_AssertQueue__Enqueue(System_String_o *message, const MethodInfo *method)
{
  __int64 v3; // x1
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x8
  _BOOL4 isReady; // w21

  if ( (byte_4B065A4 & 1) == 0 )
  {
    sub_1BC3008(&Fgo_Assertions_AssertQueue_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_string__Enqueue__, v3);
    byte_4B065A4 = 1;
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
    sub_1BC3264(0LL, method);
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)static_fields->queue,
    (Il2CppObject *)message,
    (const MethodInfo_3815A78 *)Method_System_Collections_Generic_Queue_string__Enqueue__);
}


void __fastcall Fgo_Assertions_AssertQueue__OnFailed(System_String_o *message, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Fgo_Assertions_AssertQueue_c *v5; // x0
  struct System_Action_string__o *onFailedAction; // x8
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B065A2 & 1) == 0 )
  {
    sub_1BC3008(&Fgo_Assertions_AssertQueue_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Debug_TypeInfo, v3);
    sub_1BC3008(&StringLiteral_25256/*"表明違反時処理が設定されていません"*/, v4);
    byte_4B065A2 = 1;
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
        sub_1BC3264(v7, v8);
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
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_25256/*"表明違反時処理が設定されていません"*/, 0LL);
  }
}


void __fastcall Fgo_Assertions_AssertQueue__SetOnFailedAction(
        System_Action_string__o *action,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  Fgo_Assertions_AssertQueue_c *v5; // x0
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x0

  if ( (byte_4B065A3 & 1) == 0 )
  {
    sub_1BC3008(&Fgo_Assertions_AssertQueue_TypeInfo, method);
    byte_4B065A3 = 1;
  }
  v5 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v5 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->onFailedAction = action;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->onFailedAction, (int32_t)action, v2, v3);
}