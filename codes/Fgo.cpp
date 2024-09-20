void __fastcall Fgo_Assertions_Assert___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0
  struct Fgo_Assertions_Assert_StaticFields *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5F915 & 1) == 0 )
  {
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    byte_4A5F915 = 1;
  }
  static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
  static_fields->enable = 1;
  static_fields->onFailedAction = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->onFailedAction, 0, v1, v2);
  v4 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v4->onFailedSendReport = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->onFailedSendReport, 0, v5, v6);
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
  float v10; // s1
  float v11; // s2
  float v12; // s0
  float Epsilon; // s3

  if ( (byte_4A5F906 & 1) == 0 )
  {
    sub_1B885B0(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    byte_4A5F906 = 1;
  }
  if ( !byte_4A55CE5 )
  {
    sub_1B885B0(&UnityEngine_Mathf_TypeInfo);
    byte_4A55CE5 = 1;
  }
  v10 = fabsf(expected);
  v11 = fabsf(actual);
  if ( v10 <= v11 )
    v10 = v11;
  v12 = v10 * 0.000001;
  Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
  if ( (float)(v10 * 0.000001) <= (float)(Epsilon * 8.0) )
    v12 = Epsilon * 8.0;
  if ( vabds_f32(actual, expected) >= v12 )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_float_(
      expected,
      actual,
      1,
      message,
      (const MethodInfo_2E5FD74 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
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
  if ( (byte_4A5F907 & 1) == 0 )
  {
    sub_1B885B0(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    byte_4A5F907 = 1;
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
      (const MethodInfo_2E5F7D8 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_46551532(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4A5F908 & 1) == 0 )
  {
    sub_1B885B0(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    byte_4A5F908 = 1;
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
      (const MethodInfo_2E5F9A4 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_46551692(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4A5F909 & 1) == 0 )
  {
    sub_1B885B0(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F909 = 1;
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
          (const MethodInfo_2E5FB78 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
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
        const MethodInfo_2E5E840 *method)
{
  void **monitor; // x21
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x26
  _QWORD *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x23
  __int64 v13; // x0
  int v14; // w8
  char *v15; // x25
  _QWORD *v16; // x22
  _QWORD *v17; // x24
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
  _QWORD *v29; // x19
  __int64 *v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x0
  __int64 v35; // x10
  _QWORD *v36; // x19
  void **v37; // x1
  _QWORD *v38; // x19
  __int64 *v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x0
  __int64 v44; // x10
  _QWORD *v45; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v46; // x1
  _QWORD *v47; // x19
  __int64 *v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x0
  __int64 methodPtr_low; // x10
  _QWORD *v54; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v55; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v56; // x1
  _QWORD *v57; // x26
  void **v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  __int64 v62; // x0
  _QWORD *v63; // x9
  __int64 v64; // x26
  __int64 v65; // x8
  int v66; // w0
  __int64 v67; // x1
  int v68; // w10
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v69; // x3
  _QWORD *v70; // x25
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v71; // x1
  void **v72; // x1
  __int64 *v73; // x1
  __int64 v74; // x0
  _QWORD *v75; // x19
  __int64 *v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  __int64 v80; // x0
  __int64 v81; // x10
  __int64 v82; // [xsp+0h] [xbp-60h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v83; // [xsp+8h] [xbp-58h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-50h]
  void *v85; // [xsp+18h] [xbp-48h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v86; // [xsp+20h] [xbp-40h] BYREF
  __int64 v87[4]; // [xsp+28h] [xbp-38h] BYREF
  char v88[12]; // [xsp+48h] [xbp-18h] BYREF
  char v89; // [xsp+54h] [xbp-Ch] BYREF
  __int64 v90; // [xsp+58h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  monitor = (void **)expected.monitor;
  klass = expected.klass;
  v90 = *(_QWORD *)(StatusReg + 40);
  v85 = expected.monitor;
  v86 = expected.klass;
  v10 = filePath[2].monitor;
  v83 = actual.klass;
  if ( !v10 )
  {
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    v10 = filePath[2].monitor;
    if ( !v10 )
    {
      sub_1BDA4E8(filePath);
      v10 = filePath[2].monitor;
    }
  }
  v11 = *v10;
  v12 = *(unsigned int *)(*v10 + 252LL);
  if ( (*(_BYTE *)(*v10 + 309LL) & 1) != 0 )
  {
    v14 = *(_DWORD *)(*v10 + 252LL);
  }
  else
  {
    v13 = sub_1BDA48C(v11);
    v10 = filePath[2].monitor;
    v14 = *(_DWORD *)(v13 + 252);
    v11 = *v10;
  }
  v15 = (char *)&v82 - (((unsigned int)(v14 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v16 = (__int64 *)((char *)&v82 - ((v12 + 15) & 0x1FFFFFFF0LL));
  v17 = v16;
  if ( *(int *)(v11 + 40) >= 0 )
    v18 = &v86;
  else
    v18 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy(&v82, v18, v12);
  v22 = j_il2cpp_value_box_0(*v10, (char *)&v82 - ((v12 + 15) & 0x1FFFFFFF0LL), v19, v20, v21);
  v23 = filePath[2].monitor;
  v24 = v22;
  if ( *(int *)(*v23 + 40LL) >= 0 )
    v25 = &v85;
  else
    v25 = monitor;
  memcpy((char *)&v82 - ((v12 + 15) & 0x1FFFFFFF0LL), v25, v12);
  if ( v24 != j_il2cpp_value_box_0(*v23, (char *)&v82 - ((v12 + 15) & 0x1FFFFFFF0LL), v26, v27, v28) )
  {
    v29 = filePath[2].monitor;
    v30 = *(int *)(*v29 + 40LL) >= 0 ? (__int64 *)&v86 : (__int64 *)klass;
    if ( (memcpy((char *)&v82 - ((v12 + 15) & 0x1FFFFFFF0LL), v30, v12),
          (v34 = j_il2cpp_value_box_0(*v29, (char *)&v82 - ((v12 + 15) & 0x1FFFFFFF0LL), v31, v32, v33)) == 0)
      || (v35 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v34 + 304LL) < (unsigned int)v35)
      || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v34 + 200LL) + 8 * v35 - 8) != UnityEngine_Object_TypeInfo
      || ((v36 = filePath[2].monitor, *(int *)(*v36 + 40LL) >= 0) ? (v37 = &v85) : (v37 = monitor),
          memcpy((char *)&v82 - ((v12 + 15) & 0x1FFFFFFF0LL), v37, v12),
          (sub_1B887C0(*v36, (char *)&v82 - ((v12 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
    {
      v38 = filePath[2].monitor;
      v39 = (__int64 *)(*(int *)(*v38 + 40LL) >= 0 ? &v85 : monitor);
      if ( (memcpy((char *)&v82 - ((v12 + 15) & 0x1FFFFFFF0LL), v39, v12),
            (v43 = j_il2cpp_value_box_0(*v38, (char *)&v82 - ((v12 + 15) & 0x1FFFFFFF0LL), v40, v41, v42)) == 0)
        || (v44 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)v43 + 304LL) < (unsigned int)v44)
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v43 + 200LL) + 8 * v44 - 8) != UnityEngine_Object_TypeInfo
        || ((v45 = filePath[2].monitor, *(int *)(*v45 + 40LL) >= 0)
          ? (v46 = &v86)
          : (v46 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v86),
            memcpy((char *)&v82 - ((v12 + 15) & 0x1FFFFFFF0LL), v46, v12),
            (sub_1B887C0(*v45, (char *)&v82 - ((v12 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
      {
        v47 = filePath[2].monitor;
        v48 = *(int *)(*v47 + 40LL) >= 0 ? (__int64 *)&v86 : (__int64 *)v86;
        memcpy((char *)&v82 - ((v12 + 15) & 0x1FFFFFFF0LL), v48, v12);
        v52 = j_il2cpp_value_box_0(*v47, (char *)&v82 - ((v12 + 15) & 0x1FFFFFFF0LL), v49, v50, v51);
        if ( !v52 )
          goto LABEL_40;
        methodPtr_low = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)v52 + 304LL) < (unsigned int)methodPtr_low
          || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v52 + 200LL) + 8 * methodPtr_low - 8) != UnityEngine_Object_TypeInfo )
        {
          goto LABEL_40;
        }
        v75 = filePath[2].monitor;
        v76 = (__int64 *)(*(int *)(*v75 + 40LL) >= 0 ? &v85 : monitor);
        memcpy((char *)&v82 - ((v12 + 15) & 0x1FFFFFFF0LL), v76, v12);
        v80 = j_il2cpp_value_box_0(*v75, (char *)&v82 - ((v12 + 15) & 0x1FFFFFFF0LL), v77, v78, v79);
        if ( !v80
          || (v81 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
              *(unsigned __int8 *)(*(_QWORD *)v80 + 304LL) < (unsigned int)v81)
          || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v80 + 200LL) + 8 * v81 - 8) != UnityEngine_Object_TypeInfo )
        {
LABEL_40:
          v54 = filePath[2].monitor;
          v55 = v86;
          if ( *(int *)(*v54 + 40LL) >= 0 )
            v56 = &v86;
          else
            v56 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v86;
          memcpy((char *)&v82 - ((v12 + 15) & 0x1FFFFFFF0LL), v56, v12);
          if ( (sub_1B887C0(*v54, (char *)&v82 - ((v12 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
          {
            v57 = filePath[2].monitor;
            if ( *(int *)(*v57 + 40LL) >= 0 )
              v58 = &v85;
            else
              v58 = monitor;
            memcpy((char *)&v82 - ((v12 + 15) & 0x1FFFFFFF0LL), v58, v12);
            v62 = j_il2cpp_value_box_0(*v57, (char *)&v82 - ((v12 + 15) & 0x1FFFFFFF0LL), v59, v60, v61);
            v63 = filePath[2].monitor;
            v64 = v62;
            v65 = *v63;
            if ( (*(_BYTE *)(*v63 + 309LL) & 1) == 0 )
            {
              v66 = sub_1BDA48C(*v63);
              v63 = filePath[2].monitor;
              v55 = v86;
              LODWORD(v65) = v66;
            }
            v67 = v63[1];
            v68 = *(_DWORD *)(*v63 + 40LL);
            v87[0] = v64;
            if ( v68 >= 0 )
              v69 = &v86;
            else
              v69 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v55;
            sub_1B89018(v65, v67, (int)v15, v69);
            if ( v88[0] )
              return;
            v55 = v86;
          }
          v70 = filePath[2].monitor;
          if ( *(int *)(*v70 + 40LL) >= 0 )
            v71 = &v86;
          else
            v71 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v55;
          memcpy((char *)&v82 - ((v12 + 15) & 0x1FFFFFFF0LL), v71, v12);
          if ( *(int *)(*v70 + 40LL) >= 0 )
            v72 = &v85;
          else
            v72 = monitor;
          memcpy((char *)&v82 - ((v12 + 15) & 0x1FFFFFFF0LL), v72, v12);
          if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
            v70 = filePath[2].monitor;
          }
          v73 = (__int64 *)v70[2];
          v74 = *v73;
          if ( (*(_DWORD *)(*v70 + 40LL) & 0x80000000) == 0 )
          {
            v16 = (_QWORD *)*v16;
            v17 = (_QWORD *)*v17;
          }
          v87[0] = (__int64)v16;
          v87[1] = (__int64)v17;
          v89 = 1;
          v87[2] = (__int64)&v89;
          v87[3] = (__int64)v83;
          ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, char *))v73[2])(v74, v73, 0LL, v87, v88);
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
  float v10; // s1
  float v11; // s2
  float v12; // s0
  float Epsilon; // s3

  if ( (byte_4A5F90A & 1) == 0 )
  {
    sub_1B885B0(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    byte_4A5F90A = 1;
  }
  if ( !byte_4A55CE5 )
  {
    sub_1B885B0(&UnityEngine_Mathf_TypeInfo);
    byte_4A55CE5 = 1;
  }
  v10 = fabsf(expected);
  v11 = fabsf(actual);
  if ( v10 <= v11 )
    v10 = v11;
  v12 = v10 * 0.000001;
  Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
  if ( (float)(v10 * 0.000001) <= (float)(Epsilon * 8.0) )
    v12 = Epsilon * 8.0;
  if ( vabds_f32(actual, expected) < v12 )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_float_(
      expected,
      actual,
      0,
      message,
      (const MethodInfo_2E5FD74 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
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
  if ( (byte_4A5F90B & 1) == 0 )
  {
    sub_1B885B0(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    byte_4A5F90B = 1;
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
      (const MethodInfo_2E5F7D8 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_46552400(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4A5F90C & 1) == 0 )
  {
    sub_1B885B0(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    byte_4A5F90C = 1;
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
      (const MethodInfo_2E5F9A4 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_46552560(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4A5F90D & 1) == 0 )
  {
    sub_1B885B0(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F90D = 1;
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
      (const MethodInfo_2E5FB78 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o expected,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2E5ED18 *method)
{
  void **monitor; // x23
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x26
  _QWORD *v10; // x27
  __int64 v11; // x0
  unsigned int v12; // w8
  __int64 v13; // x24
  __int64 v14; // x0
  _QWORD *v15; // x21
  _QWORD *v16; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x0
  _QWORD *v22; // x19
  __int64 v23; // x27
  void **v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x0
  _QWORD *v29; // x19
  __int64 v30; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x0
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
  _QWORD *v56; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v57; // x28
  __int64 *v58; // x1
  _QWORD *v59; // x19
  void **v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  __int64 v64; // x0
  _QWORD *v65; // x9
  __int64 v66; // x26
  __int64 v67; // x8
  int v68; // w0
  __int64 v69; // x1
  __int64 *v70; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v71; // x1
  void **v72; // x1
  Fgo_Assertions_Assert_c *v73; // x0
  void **v74; // x1
  __int64 *v75; // x1
  __int64 v76; // x0
  _QWORD *v77; // x19
  __int64 *v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  __int64 v82; // x0
  __int64 v83; // x10
  __int64 v84; // [xsp+0h] [xbp-60h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v85; // [xsp+8h] [xbp-58h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-50h]
  void *v87; // [xsp+18h] [xbp-48h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v88; // [xsp+20h] [xbp-40h] BYREF
  __int64 v89[4]; // [xsp+28h] [xbp-38h] BYREF
  char v90[12]; // [xsp+48h] [xbp-18h] BYREF
  char v91; // [xsp+54h] [xbp-Ch] BYREF
  __int64 v92; // [xsp+58h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  monitor = (void **)expected.monitor;
  klass = expected.klass;
  v92 = *(_QWORD *)(StatusReg + 40);
  v87 = expected.monitor;
  v88 = expected.klass;
  v10 = filePath[2].monitor;
  v85 = actual.klass;
  if ( !v10 )
  {
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    v10 = filePath[2].monitor;
    if ( !v10 )
    {
      sub_1BDA4E8(filePath);
      v10 = filePath[2].monitor;
    }
  }
  v11 = *v10;
  v12 = *(_DWORD *)(*v10 + 252LL);
  v13 = v12;
  if ( (*(_BYTE *)(*v10 + 309LL) & 1) == 0 )
  {
    v14 = sub_1BDA48C(v11);
    v10 = filePath[2].monitor;
    v12 = *(_DWORD *)(v14 + 252);
    v11 = *v10;
  }
  v84 = (__int64)&v84 - ((v12 + 16 + 15LL) & 0x1FFFFFFF0LL);
  v15 = (__int64 *)((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL));
  v16 = v15;
  if ( *(int *)(v11 + 40) >= 0 )
    v17 = &v88;
  else
    v17 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy(&v84, v17, v13);
  v21 = j_il2cpp_value_box_0(*v10, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v18, v19, v20);
  v22 = filePath[2].monitor;
  v23 = v21;
  if ( *(int *)(*v22 + 40LL) >= 0 )
    v24 = &v87;
  else
    v24 = monitor;
  memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v24, v13);
  v28 = j_il2cpp_value_box_0(*v22, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v25, v26, v27);
  v29 = filePath[2].monitor;
  v30 = v28;
  if ( *(int *)(*v29 + 40LL) >= 0 )
    v31 = &v88;
  else
    v31 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v31, v13);
  v35 = *v29;
  if ( v23 == v30 )
  {
    if ( *(int *)(v35 + 40) >= 0 )
      v74 = &v87;
    else
      v74 = monitor;
    memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v74, v13);
    v73 = Fgo_Assertions_Assert_TypeInfo;
    if ( Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      goto LABEL_65;
LABEL_64:
    j_il2cpp_runtime_class_init_0(v73);
    v29 = filePath[2].monitor;
LABEL_65:
    v75 = (__int64 *)v29[1];
    v76 = *v75;
    if ( (*(_DWORD *)(*v29 + 40LL) & 0x80000000) == 0 )
    {
      v15 = (_QWORD *)*v15;
      v16 = (_QWORD *)*v16;
    }
    v89[2] = (__int64)&v91;
    v91 = 0;
    v89[0] = (__int64)v15;
    v89[1] = (__int64)v16;
    v89[3] = (__int64)v85;
    ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, char *))v75[2])(v76, v75, 0LL, v89, v90);
    return;
  }
  v36 = j_il2cpp_value_box_0(v35, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v32, v33, v34);
  if ( !v36
    || (v37 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*(_QWORD *)v36 + 304LL) < (unsigned int)v37)
    || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v36 + 200LL) + 8 * v37 - 8) != UnityEngine_Object_TypeInfo
    || ((v38 = filePath[2].monitor, *(int *)(*v38 + 40LL) >= 0) ? (v39 = &v87) : (v39 = monitor),
        memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v39, v13),
        (sub_1B887C0(*v38, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
  {
    v40 = filePath[2].monitor;
    v41 = (__int64 *)(*(int *)(*v40 + 40LL) >= 0 ? &v87 : monitor);
    if ( (memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v41, v13),
          (v45 = j_il2cpp_value_box_0(*v40, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v42, v43, v44)) == 0)
      || (v46 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v45 + 304LL) < (unsigned int)v46)
      || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v45 + 200LL) + 8 * v46 - 8) != UnityEngine_Object_TypeInfo
      || ((v47 = filePath[2].monitor, *(int *)(*v47 + 40LL) >= 0)
        ? (v48 = &v88)
        : (v48 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v88),
          memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v48, v13),
          (sub_1B887C0(*v47, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
    {
      v49 = filePath[2].monitor;
      v50 = *(int *)(*v49 + 40LL) >= 0 ? (__int64 *)&v88 : (__int64 *)v88;
      memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v50, v13);
      v54 = j_il2cpp_value_box_0(*v49, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v51, v52, v53);
      if ( !v54 )
        goto LABEL_39;
      methodPtr_low = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v54 + 304LL) < (unsigned int)methodPtr_low
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v54 + 200LL) + 8 * methodPtr_low - 8) != UnityEngine_Object_TypeInfo )
      {
        goto LABEL_39;
      }
      v77 = filePath[2].monitor;
      v78 = (__int64 *)(*(int *)(*v77 + 40LL) >= 0 ? &v87 : monitor);
      memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v78, v13);
      v82 = j_il2cpp_value_box_0(*v77, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v79, v80, v81);
      if ( !v82
        || (v83 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)v82 + 304LL) < (unsigned int)v83)
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v82 + 200LL) + 8 * v83 - 8) != UnityEngine_Object_TypeInfo )
      {
LABEL_39:
        v56 = filePath[2].monitor;
        v57 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v88;
        v58 = *(int *)(*v56 + 40LL) >= 0 ? (__int64 *)&v88 : (__int64 *)v88;
        memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v58, v13);
        if ( (sub_1B887C0(*v56, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
        {
          v59 = filePath[2].monitor;
          if ( *(int *)(*v59 + 40LL) >= 0 )
            v60 = &v87;
          else
            v60 = monitor;
          memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v60, v13);
          v64 = j_il2cpp_value_box_0(*v59, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v61, v62, v63);
          v65 = filePath[2].monitor;
          v66 = v64;
          v67 = *v65;
          if ( (*(_BYTE *)(*v65 + 309LL) & 1) == 0 )
          {
            v68 = sub_1BDA48C(*v65);
            v65 = filePath[2].monitor;
            v57 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v88;
            LODWORD(v67) = v68;
          }
          v69 = v65[2];
          v70 = (__int64 *)(*(int *)(*v65 + 40LL) >= 0 ? &v88 : v57);
          v89[0] = v66;
          sub_1B89018(v67, v69, v84, v70);
          if ( v90[0] )
          {
            v29 = filePath[2].monitor;
            if ( *(int *)(*v29 + 40LL) >= 0 )
              v71 = &v88;
            else
              v71 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v88;
            memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v71, v13);
            if ( *(int *)(*v29 + 40LL) >= 0 )
              v72 = &v87;
            else
              v72 = monitor;
            memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v72, v13);
            v73 = Fgo_Assertions_Assert_TypeInfo;
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
  struct System_String_o *format; // x21
  struct System_Object_array *args; // x8
  _BOOL4 v10; // w25
  bool v11; // w27
  char v12; // w29
  char v13; // w28
  char v14; // w26
  System_String_o *v15; // x23
  int32_t v16; // w22
  uint16_t Chars; // w0
  int v18; // w8
  _BOOL8 v19; // x0
  __int64 v20; // x1
  struct System_Object_array *v21; // x8
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  __int64 *v24; // x8
  __int64 *v25; // x8
  int32_t result; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v27; // [xsp+8h] [xbp-68h] BYREF
  __int16 v28[2]; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A5F913 & 1) == 0 )
  {
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    sub_1B885B0(&char_TypeInfo);
    sub_1B885B0(&StringLiteral_25377/*"書式指定項目が不正です"*/);
    sub_1B885B0(&StringLiteral_25319/*"パラメータ"*/);
    sub_1B885B0(&StringLiteral_25366/*"文字列"*/);
    sub_1B885B0(&StringLiteral_25360/*"引数"*/);
    sub_1B885B0(&StringLiteral_25361/*"引数を超えたのインデックスを指しています"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5F913 = 1;
  }
  v28[0] = 0;
  result = 0;
  v27 = 0;
  if ( !parameter )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v24 = &StringLiteral_25319/*"パラメータ"*/;
    goto LABEL_59;
  }
  format = parameter->fields.format;
  if ( !format )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v24 = &StringLiteral_25366/*"文字列"*/;
    goto LABEL_59;
  }
  args = parameter->fields.args;
  if ( !args || args->max_length == 1 && !args->m_Items[0] )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v24 = &StringLiteral_25360/*"引数"*/;
LABEL_59:
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)*v24, message, (const MethodInfo *)gameObject);
    return;
  }
  if ( format->fields._stringLength < 1 )
  {
    v14 = 0;
    v13 = 0;
    v12 = 0;
    v10 = 0;
LABEL_62:
    if ( (v14 & 1) != 0 || (v13 & 1) != 0 || (v12 & 1) != 0 || v10 )
      goto LABEL_66;
    return;
  }
  LOBYTE(v10) = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0LL;
  v16 = 0;
  do
  {
    Chars = System_String__get_Chars(format, v16, 0LL);
    v28[0] = Chars;
    if ( v10 )
    {
      if ( Chars == 123 )
        goto LABEL_12;
      v15 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_20:
      if ( Chars == 44 || Chars == 125 || Chars == 58 )
      {
        v19 = System_Int32__TryParse(v15, &v27, 0LL);
        if ( !v19 )
          goto LABEL_66;
        v21 = parameter->fields.args;
        if ( !v21 )
          sub_1B8880C(v19, v20);
        if ( v27 >= (signed int)v21->max_length )
        {
          if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
          v25 = &StringLiteral_25361/*"引数を超えたのインデックスを指しています"*/;
          goto LABEL_69;
        }
        v18 = (unsigned __int16)v28[0];
        if ( v28[0] == 44 )
        {
          v15 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_28:
          v12 = 0;
          v10 = 0;
          v13 = 1;
          goto LABEL_47;
        }
LABEL_29:
        v12 = 0;
        v10 = 0;
        v14 |= v18 == 58;
        goto LABEL_47;
      }
      if ( (unsigned __int16)(Chars - 48) > 9u )
        goto LABEL_66;
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      v22 = System_Char__ToString((uint16_t)v28, 0LL);
      v15 = System_String__Concat_61707032(v15, v22, 0LL);
      v10 = 0;
      v12 = 1;
      goto LABEL_47;
    }
    if ( (v12 & 1) != 0 )
      goto LABEL_20;
    if ( (v13 & 1) != 0 )
    {
      if ( Chars != 125 && Chars != 58 )
      {
        if ( (unsigned __int16)(Chars - 48) >= 0xAu && Chars != 45 && Chars != 32 )
          goto LABEL_66;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v23 = System_Char__ToString((uint16_t)v28, 0LL);
        v15 = System_String__Concat_61707032(v15, v23, 0LL);
        goto LABEL_28;
      }
      if ( !System_Int32__TryParse(v15, &result, 0LL) )
        goto LABEL_66;
      v18 = (unsigned __int16)v28[0];
      v13 = 0;
      goto LABEL_29;
    }
    if ( (v14 & 1) != 0 )
    {
      if ( Chars == 123 )
        goto LABEL_66;
      v13 = 0;
      v12 = 0;
      v10 = 0;
      v14 = Chars != 125;
    }
    else
    {
      if ( v11 )
      {
        if ( Chars != 125 )
          goto LABEL_66;
        v14 = 0;
        v13 = 0;
        v12 = 0;
        v11 = 0;
LABEL_12:
        v10 = 0;
        goto LABEL_47;
      }
      v10 = Chars == 123;
      v14 = 0;
      v13 = 0;
      v12 = 0;
      v11 = Chars == 125;
    }
LABEL_47:
    ++v16;
  }
  while ( v16 < format->fields._stringLength );
  if ( !v11 )
    goto LABEL_62;
LABEL_66:
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  v25 = &StringLiteral_25377/*"書式指定項目が不正です"*/;
LABEL_69:
  Fgo_Assertions_Assert__GetEffectiveAssertMessage((System_String_o *)*v25, message, (const MethodInfo *)gameObject);
}


void __fastcall Fgo_Assertions_Assert__CanParse___Il2CppFullySharedGenericType_(
        System_String_o *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2E5F238 *method)
{
  Il2CppType *_0_T; // x21
  Il2CppObject *TypeFromHandle; // x21
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
  double v34; // [xsp+0h] [xbp-70h] BYREF
  float v35; // [xsp+Ch] [xbp-64h] BYREF
  uint64_t v36; // [xsp+10h] [xbp-60h] BYREF
  int64_t v37; // [xsp+18h] [xbp-58h] BYREF
  uint32_t v38; // [xsp+24h] [xbp-4Ch] BYREF
  int32_t v39; // [xsp+28h] [xbp-48h] BYREF
  uint16_t v40; // [xsp+2Ch] [xbp-44h] BYREF
  int16_t v41[2]; // [xsp+30h] [xbp-40h] BYREF
  int8_t v42[4]; // [xsp+34h] [xbp-3Ch] BYREF
  uint8_t v43[4]; // [xsp+38h] [xbp-38h] BYREF
  bool result; // [xsp+3Ch] [xbp-34h] BYREF
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

  if ( !method->rgctx_data )
  {
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    sub_1B885B0(&bool_var);
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&qword_484FF78);
    sub_1B885B0(&double_var);
    sub_1B885B0(&short_var);
    sub_1B885B0(&int_var);
    sub_1B885B0(&long_var);
    sub_1B885B0(&sbyte_var);
    sub_1B885B0(&float_var);
    sub_1B885B0(&System_Type_TypeInfo);
    sub_1B885B0(&ushort_var);
    sub_1B885B0(&uint_var);
    sub_1B885B0(&ulong_var);
    sub_1B885B0(&StringLiteral_25348/*"型が不正です:{0}"*/);
    sub_1B885B0(&StringLiteral_25366/*"文字列"*/);
    sub_1B885B0(&StringLiteral_299/*" isNotBoolean"*/);
    if ( !method->rgctx_data )
      sub_1BDA4E8(method);
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
  if ( value )
  {
    _0_T = method->rgctx_data->_0_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v45.fields.value = (int)_0_T;
    TypeFromHandle = (Il2CppObject *)System_Type__GetTypeFromHandle(v45, 0LL);
    v46.fields.value = (int)bool_var;
    v11 = System_Type__GetTypeFromHandle(v46, 0LL);
    if ( System_Type__op_Equality(v11, (System_Type_o *)TypeFromHandle, 0LL) )
    {
      if ( !bool_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(bool_TypeInfo);
      if ( !System_Boolean__TryParse(value, &result, 0LL) )
      {
        v12 = System_String__Concat_61707032(value, (System_String_o *)StringLiteral_299/*" isNotBoolean"*/, 0LL);
LABEL_12:
        v13 = v12;
        if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
        Fgo_Assertions_Assert__GetEffectiveAssertMessage(v13, message, 0LL);
      }
    }
    else
    {
      v14 = (int)qword_484FF78;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v47.fields.value = v14;
      v15 = System_Type__GetTypeFromHandle(v47, 0LL);
      if ( System_Type__op_Equality(v15, (System_Type_o *)TypeFromHandle, 0LL) )
      {
        if ( System_Byte__TryParse(value, v43, 0LL) )
          return;
      }
      else
      {
        v16 = (int)sbyte_var;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v48.fields.value = v16;
        v17 = System_Type__GetTypeFromHandle(v48, 0LL);
        if ( System_Type__op_Equality(v17, (System_Type_o *)TypeFromHandle, 0LL) )
        {
          if ( System_SByte__TryParse(value, v42, 0LL) )
            return;
        }
        else
        {
          v18 = (int)short_var;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v49.fields.value = v18;
          v19 = System_Type__GetTypeFromHandle(v49, 0LL);
          if ( System_Type__op_Equality(v19, (System_Type_o *)TypeFromHandle, 0LL) )
          {
            if ( System_Int16__TryParse(value, v41, 0LL) )
              return;
          }
          else
          {
            v20 = (int)ushort_var;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v50.fields.value = v20;
            v21 = System_Type__GetTypeFromHandle(v50, 0LL);
            if ( System_Type__op_Equality(v21, (System_Type_o *)TypeFromHandle, 0LL) )
            {
              if ( System_UInt16__TryParse(value, &v40, 0LL) )
                return;
            }
            else
            {
              v22 = (int)int_var;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v51.fields.value = v22;
              v23 = System_Type__GetTypeFromHandle(v51, 0LL);
              if ( System_Type__op_Equality(v23, (System_Type_o *)TypeFromHandle, 0LL) )
              {
                if ( System_Int32__TryParse(value, &v39, 0LL) )
                  return;
              }
              else
              {
                v24 = (int)uint_var;
                if ( !System_Type_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
                v52.fields.value = v24;
                v25 = System_Type__GetTypeFromHandle(v52, 0LL);
                if ( System_Type__op_Equality(v25, (System_Type_o *)TypeFromHandle, 0LL) )
                {
                  if ( System_UInt32__TryParse(value, &v38, 0LL) )
                    return;
                }
                else
                {
                  v26 = (int)long_var;
                  if ( !System_Type_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
                  v53.fields.value = v26;
                  v27 = System_Type__GetTypeFromHandle(v53, 0LL);
                  if ( System_Type__op_Equality(v27, (System_Type_o *)TypeFromHandle, 0LL) )
                  {
                    if ( System_Int64__TryParse(value, &v37, 0LL) )
                      return;
                  }
                  else
                  {
                    v28 = (int)ulong_var;
                    if ( !System_Type_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
                    v54.fields.value = v28;
                    v29 = System_Type__GetTypeFromHandle(v54, 0LL);
                    if ( System_Type__op_Equality(v29, (System_Type_o *)TypeFromHandle, 0LL) )
                    {
                      if ( System_UInt64__TryParse(value, &v36, 0LL) )
                        return;
                    }
                    else
                    {
                      v30 = (int)float_var;
                      if ( !System_Type_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
                      v55.fields.value = v30;
                      v31 = System_Type__GetTypeFromHandle(v55, 0LL);
                      if ( System_Type__op_Equality(v31, (System_Type_o *)TypeFromHandle, 0LL) )
                      {
                        if ( System_Single__TryParse(value, &v35, 0LL) )
                          return;
                      }
                      else
                      {
                        v32 = (int)double_var;
                        if ( !System_Type_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
                        v56.fields.value = v32;
                        v33 = System_Type__GetTypeFromHandle(v56, 0LL);
                        if ( !System_Type__op_Equality(v33, (System_Type_o *)TypeFromHandle, 0LL) )
                        {
                          v12 = System_String__Format((System_String_o *)StringLiteral_25348/*"型が不正です:{0}"*/, TypeFromHandle, 0LL);
                          goto LABEL_12;
                        }
                        if ( System_Double__TryParse(value, &v34, 0LL) )
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
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25366/*"文字列"*/, message, 0LL);
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
        const MethodInfo_2E5FF40 *method)
{
  __int64 v5; // x21
  void **v6; // x22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  __int64 *v8; // x19
  char v9; // w20
  __int64 v10; // x8
  __int16 v11; // w9
  __int64 v12; // x24
  __int64 v13; // x0
  int v14; // w10
  char *v15; // x26
  __int64 v16; // x0
  char *v17; // x25
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v18; // x1
  _QWORD *v19; // x8
  __int64 v20; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v21; // x3
  __int64 v22; // x23
  _QWORD *v23; // x26
  void **v24; // x1
  _QWORD *v25; // x8
  __int64 v26; // x0
  void **v27; // x3
  __int64 v28; // x21
  __int64 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x22
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 *v39; // x8
  __int64 v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x20
  __int64 v48; // [xsp+0h] [xbp-30h] BYREF
  System_String_o *monitor; // [xsp+8h] [xbp-28h]
  void **v50; // [xsp+10h] [xbp-20h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v51; // [xsp+18h] [xbp-18h] BYREF
  __int64 v52; // [xsp+20h] [xbp-10h]
  __int64 v53; // [xsp+28h] [xbp-8h]

  monitor = (System_String_o *)actual.monitor;
  v5 = equal;
  v6 = (void **)expected.monitor;
  klass = expected.klass;
  v53 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v50 = (void **)expected.monitor;
  v51 = expected.klass;
  v8 = *(__int64 **)(equal + 56LL);
  v9 = (char)actual.klass;
  if ( !v8 )
  {
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_22174/*"null"*/);
    sub_1B885B0(&StringLiteral_19307/*"expectedEqual"*/);
    sub_1B885B0(&StringLiteral_19308/*"expectedNotEqual"*/);
    v8 = *(__int64 **)(v5 + 56);
    if ( !v8 )
    {
      sub_1BDA4E8(v5);
      v8 = *(__int64 **)(v5 + 56);
    }
  }
  v10 = *v8;
  v11 = *(_WORD *)(*v8 + 309);
  v12 = *(unsigned int *)(*v8 + 252);
  if ( (v11 & 1) != 0 )
  {
    v14 = *(_DWORD *)(*v8 + 252);
  }
  else
  {
    v13 = sub_1BDA48C(*v8);
    v8 = *(__int64 **)(v5 + 56);
    v14 = *(_DWORD *)(v13 + 252);
    v10 = *v8;
    v11 = *(_WORD *)(*v8 + 309);
  }
  v15 = (char *)&v48 - (((unsigned int)(v14 + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( (v11 & 1) != 0 )
  {
    v16 = v10;
  }
  else
  {
    v16 = sub_1BDA48C(v10);
    v8 = *(__int64 **)(v5 + 56);
    v10 = *v8;
  }
  v17 = (char *)&v48 - (((unsigned int)(*(_DWORD *)(v16 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( *(int *)(v10 + 40) >= 0 )
    v18 = &v51;
  else
    v18 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v48 - ((v12 + 15) & 0x1FFFFFFF0LL), v18, v12);
  if ( (sub_1B887C0(*v8, (char *)&v48 - ((v12 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
  {
    v19 = *(_QWORD **)(v5 + 56);
    v20 = *v19;
    if ( (*(_BYTE *)(*v19 + 309LL) & 1) == 0 )
    {
      LODWORD(v20) = sub_1BDA48C(v20);
      v19 = *(_QWORD **)(v5 + 56);
      klass = v51;
    }
    if ( *(int *)(*v19 + 40LL) >= 0 )
      v21 = &v51;
    else
      v21 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    sub_1B89018(v20, v19[1], (int)v15, v21);
    v22 = v52;
    v6 = v50;
  }
  else
  {
    v22 = StringLiteral_22174/*"null"*/;
  }
  v23 = *(_QWORD **)(v5 + 56);
  if ( *(int *)(*v23 + 40LL) >= 0 )
    v24 = (void **)&v50;
  else
    v24 = v6;
  memcpy((char *)&v48 - ((v12 + 15) & 0x1FFFFFFF0LL), v24, v12);
  if ( (sub_1B887C0(*v23, (char *)&v48 - ((v12 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
  {
    v25 = *(_QWORD **)(v5 + 56);
    v26 = *v25;
    if ( (*(_BYTE *)(*v25 + 309LL) & 1) == 0 )
    {
      LODWORD(v26) = sub_1BDA48C(v26);
      v25 = *(_QWORD **)(v5 + 56);
      v6 = v50;
    }
    if ( *(int *)(*v25 + 40LL) >= 0 )
      v27 = (void **)&v50;
    else
      v27 = v6;
    sub_1B89018(v26, v25[1], (int)v17, v27);
    v28 = v52;
  }
  else
  {
    v28 = StringLiteral_22174/*"null"*/;
  }
  v29 = sub_1B88658(string___TypeInfo, 5LL);
  if ( !v29 )
    sub_1B8880C(0LL, v30);
  v33 = v29;
  if ( !*(_DWORD *)(v29 + 24) )
    goto LABEL_43;
  *(_QWORD *)(v29 + 32) = v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 32), v22, v31, v32);
  if ( *(_DWORD *)(v33 + 24) <= 1u )
    goto LABEL_43;
  v36 = (int)StringLiteral_117/*" "*/;
  *(_QWORD *)(v33 + 40) = StringLiteral_117/*" "*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v33 + 40), v36, v34, v35);
  v39 = (__int64 *)&StringLiteral_19308/*"expectedNotEqual"*/;
  if ( (v9 & 1) == 0 )
    v39 = (__int64 *)&StringLiteral_19307/*"expectedEqual"*/;
  if ( *(_DWORD *)(v33 + 24) <= 2u
    || (v40 = *v39,
        *(_QWORD *)(v33 + 48) = *v39,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v33 + 48), v40, v37, v38),
        *(_DWORD *)(v33 + 24) <= 3u)
    || (v43 = (int)StringLiteral_117/*" "*/,
        *(_QWORD *)(v33 + 56) = StringLiteral_117/*" "*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v33 + 56), v43, v41, v42),
        *(_DWORD *)(v33 + 24) <= 4u) )
  {
LABEL_43:
    sub_1B88814(v29, v30);
  }
  *(_QWORD *)(v33 + 64) = v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v33 + 64), v28, v44, v45);
  v46 = System_String__Concat_61720560((System_String_array *)v33, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v46, monitor, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_float_(
        float expected,
        float actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2E5FD74 *method)
{
  System_String_o *v8; // x23
  float v9; // s0
  System_String_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 *v21; // x8
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x20
  float v30; // [xsp+8h] [xbp-38h] BYREF
  float v31; // [xsp+Ch] [xbp-34h] BYREF

  v30 = actual;
  v31 = expected;
  if ( !method->rgctx_data )
  {
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_19307/*"expectedEqual"*/);
    sub_1B885B0(&StringLiteral_19308/*"expectedNotEqual"*/);
    if ( !method->rgctx_data )
      sub_1BDA4E8(method);
  }
  v8 = System_Single__ToString(expected, (const MethodInfo *)&v31);
  v10 = System_Single__ToString(v9, (const MethodInfo *)&v30);
  v11 = sub_1B88658(string___TypeInfo, 5LL);
  if ( !v11 )
    sub_1B8880C(0LL, v12);
  v15 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v11 + 32) = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)v8, v13, v14);
  if ( *(_DWORD *)(v15 + 24) <= 1u )
    goto LABEL_15;
  v18 = (int)StringLiteral_117/*" "*/;
  *(_QWORD *)(v15 + 40) = StringLiteral_117/*" "*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 40), v18, v16, v17);
  v21 = (__int64 *)&StringLiteral_19308/*"expectedNotEqual"*/;
  if ( !equal )
    v21 = (__int64 *)&StringLiteral_19307/*"expectedEqual"*/;
  if ( *(_DWORD *)(v15 + 24) <= 2u
    || (v22 = *v21,
        *(_QWORD *)(v15 + 48) = *v21,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 48), v22, v19, v20),
        *(_DWORD *)(v15 + 24) <= 3u)
    || (v25 = (int)StringLiteral_117/*" "*/,
        *(_QWORD *)(v15 + 56) = StringLiteral_117/*" "*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 56), v25, v23, v24),
        *(_DWORD *)(v15 + 24) <= 4u) )
  {
LABEL_15:
    sub_1B88814(v11, v12);
  }
  *(_QWORD *)(v15 + 64) = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 64), (int32_t)v10, v26, v27);
  v28 = System_String__Concat_61720560((System_String_array *)v15, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v28, message, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_int_(
        int32_t expected,
        int32_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2E5F7D8 *method)
{
  const MethodInfo_2E5F7D8_RGCTXs *rgctx_data; // x8
  System_String_o *v9; // x23
  System_String_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 *v21; // x8
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x20
  int32_t v30; // [xsp+8h] [xbp-38h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-34h] BYREF

  v30 = actual;
  v31 = expected;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_19307/*"expectedEqual"*/);
    sub_1B885B0(&StringLiteral_19308/*"expectedNotEqual"*/);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BDA4E8(method);
      rgctx_data = method->rgctx_data;
    }
  }
  v9 = System_Int32__ToString((int32_t)&v31, (const MethodInfo *)rgctx_data[1]._0_T);
  v10 = System_Int32__ToString((int32_t)&v30, (const MethodInfo *)method->rgctx_data[1]._0_T);
  v11 = sub_1B88658(string___TypeInfo, 5LL);
  if ( !v11 )
    sub_1B8880C(0LL, v12);
  v15 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v11 + 32) = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)v9, v13, v14);
  if ( *(_DWORD *)(v15 + 24) <= 1u )
    goto LABEL_15;
  v18 = (int)StringLiteral_117/*" "*/;
  *(_QWORD *)(v15 + 40) = StringLiteral_117/*" "*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 40), v18, v16, v17);
  v21 = (__int64 *)&StringLiteral_19308/*"expectedNotEqual"*/;
  if ( !equal )
    v21 = (__int64 *)&StringLiteral_19307/*"expectedEqual"*/;
  if ( *(_DWORD *)(v15 + 24) <= 2u
    || (v22 = *v21,
        *(_QWORD *)(v15 + 48) = *v21,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 48), v22, v19, v20),
        *(_DWORD *)(v15 + 24) <= 3u)
    || (v25 = (int)StringLiteral_117/*" "*/,
        *(_QWORD *)(v15 + 56) = StringLiteral_117/*" "*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 56), v25, v23, v24),
        *(_DWORD *)(v15 + 24) <= 4u) )
  {
LABEL_15:
    sub_1B88814(v11, v12);
  }
  *(_QWORD *)(v15 + 64) = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 64), (int32_t)v10, v26, v27);
  v28 = System_String__Concat_61720560((System_String_array *)v15, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v28, message, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_long_(
        int64_t expected,
        int64_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2E5F9A4 *method)
{
  const MethodInfo_2E5F9A4_RGCTXs *rgctx_data; // x8
  System_String_o *v9; // x23
  System_String_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 *v21; // x8
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x20
  int64_t v30; // [xsp+8h] [xbp-48h] BYREF
  int64_t v31; // [xsp+18h] [xbp-38h] BYREF

  v31 = expected;
  v30 = actual;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_19307/*"expectedEqual"*/);
    sub_1B885B0(&StringLiteral_19308/*"expectedNotEqual"*/);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BDA4E8(method);
      rgctx_data = method->rgctx_data;
    }
  }
  v9 = System_Int64__ToString((int64_t)&v31, (const MethodInfo *)rgctx_data[1]._0_T);
  v10 = System_Int64__ToString((int64_t)&v30, (const MethodInfo *)method->rgctx_data[1]._0_T);
  v11 = sub_1B88658(string___TypeInfo, 5LL);
  if ( !v11 )
    sub_1B8880C(0LL, v12);
  v15 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v11 + 32) = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)v9, v13, v14);
  if ( *(_DWORD *)(v15 + 24) <= 1u )
    goto LABEL_15;
  v18 = (int)StringLiteral_117/*" "*/;
  *(_QWORD *)(v15 + 40) = StringLiteral_117/*" "*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 40), v18, v16, v17);
  v21 = (__int64 *)&StringLiteral_19308/*"expectedNotEqual"*/;
  if ( !equal )
    v21 = (__int64 *)&StringLiteral_19307/*"expectedEqual"*/;
  if ( *(_DWORD *)(v15 + 24) <= 2u
    || (v22 = *v21,
        *(_QWORD *)(v15 + 48) = *v21,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 48), v22, v19, v20),
        *(_DWORD *)(v15 + 24) <= 3u)
    || (v25 = (int)StringLiteral_117/*" "*/,
        *(_QWORD *)(v15 + 56) = StringLiteral_117/*" "*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 56), v25, v23, v24),
        *(_DWORD *)(v15 + 24) <= 4u) )
  {
LABEL_15:
    sub_1B88814(v11, v12);
  }
  *(_QWORD *)(v15 + 64) = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 64), (int32_t)v10, v26, v27);
  v28 = System_String__Concat_61720560((System_String_array *)v15, 0LL);
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
        const MethodInfo_2E5FB78 *method)
{
  __int64 v9; // x23
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 *v21; // x8
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x20

  if ( (byte_4A60BCD & 1) == 0 )
  {
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_22174/*"null"*/);
    sub_1B885B0(&StringLiteral_19307/*"expectedEqual"*/);
    sub_1B885B0(&StringLiteral_19308/*"expectedNotEqual"*/);
    byte_4A60BCD = 1;
  }
  if ( expected )
    v9 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, bool, System_String_o *, const MethodInfo_2E5FB78 *))expected->klass->vtable[3].method)(
           expected,
           expected->klass->vtable[4].methodPtr,
           equal,
           message,
           method);
  else
    v9 = StringLiteral_22174/*"null"*/;
  if ( actual )
    v10 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))actual->klass->vtable[3].method)(
            actual,
            actual->klass->vtable[4].methodPtr);
  else
    v10 = StringLiteral_22174/*"null"*/;
  v11 = sub_1B88658(string___TypeInfo, 5LL);
  if ( !v11 )
    sub_1B8880C(0LL, v12);
  v15 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_21;
  *(_QWORD *)(v11 + 32) = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 32), v9, v13, v14);
  if ( *(_DWORD *)(v15 + 24) <= 1u )
    goto LABEL_21;
  v18 = (int)StringLiteral_117/*" "*/;
  *(_QWORD *)(v15 + 40) = StringLiteral_117/*" "*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 40), v18, v16, v17);
  v21 = (__int64 *)(equal ? &StringLiteral_19308/*"expectedNotEqual"*/ : &StringLiteral_19307/*"expectedEqual"*/);
  if ( *(_DWORD *)(v15 + 24) <= 2u
    || (v22 = *v21,
        *(_QWORD *)(v15 + 48) = *v21,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 48), v22, v19, v20),
        *(_DWORD *)(v15 + 24) <= 3u)
    || (v25 = (int)StringLiteral_117/*" "*/,
        *(_QWORD *)(v15 + 56) = StringLiteral_117/*" "*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 56), v25, v23, v24),
        *(_DWORD *)(v15 + 24) <= 4u) )
  {
LABEL_21:
    sub_1B88814(v11, v12);
  }
  *(_QWORD *)(v15 + 64) = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 64), v10, v26, v27);
  v28 = System_String__Concat_61720560((System_String_array *)v15, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v28, message, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetEffectiveAssertMessage(
        System_String_o *defaultMessage,
        System_String_o *message,
        const MethodInfo *method)
{
  if ( (byte_4A5F905 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_56/*"\n("*/);
    sub_1B885B0(&StringLiteral_814/*")"*/);
    byte_4A5F905 = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    return defaultMessage;
  else
    return System_String__Concat_61720296(
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
  const MethodInfo *v5; // x2
  System_String_o *v6; // x20

  if ( (byte_4A5F910 & 1) == 0 )
  {
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    sub_1B885B0(&StringLiteral_25277/*"が null です"*/);
    byte_4A5F910 = 1;
  }
  v6 = System_String__Concat_61707032(modelName, (System_String_o *)StringLiteral_25277/*"が null です"*/, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v6, message, v5);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetParseAssertMessage(
        System_String_o *value,
        System_String_o *message,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_String_o *v6; // x20

  if ( (byte_4A5F912 & 1) == 0 )
  {
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    sub_1B885B0(&StringLiteral_300/*" isNotNumbers"*/);
    byte_4A5F912 = 1;
  }
  v6 = System_String__Concat_61707032(value, (System_String_o *)StringLiteral_300/*" isNotNumbers"*/, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v6, message, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__HasContainKey___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_T1__T2__o *dic,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2E602D4 *method)
{
  __int64 v7; // x21
  System_String_o *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x20
  __int64 v10; // x8
  __int64 v12; // x0
  __int64 v13; // x24
  int v14; // w8
  char *v15; // x23
  System_String_o *v16; // x25
  __int64 v17; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v18; // x1
  __int64 v19; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v20; // x1
  __int64 *v21; // x1
  __int64 v22; // x0
  __int64 v23; // x9
  __int64 v24; // x8
  __int64 v25; // x0
  __int64 *v26; // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v27; // x3
  System_String_o *v28; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v29; // [xsp+0h] [xbp-20h] BYREF
  System_String_o *v30; // [xsp+8h] [xbp-18h] BYREF
  char v31[4]; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v32; // [xsp+18h] [xbp-8h]

  v7 = *(_QWORD *)&line;
  monitor = (System_String_o *)key.monitor;
  klass = key.klass;
  v32 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v29 = key.klass;
  v10 = *(_QWORD *)(*(_QWORD *)&line + 56LL);
  if ( !v10 )
  {
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    sub_1B885B0(&StringLiteral_25309/*"ディクショナリ"*/);
    sub_1B885B0(&StringLiteral_832/*") の値がディクショナリに含まれていません"*/);
    sub_1B885B0(&StringLiteral_20982/*"key("*/);
    sub_1B885B0(&StringLiteral_25296/*"キー"*/);
    v10 = *(_QWORD *)(v7 + 56);
    if ( !v10 )
    {
      sub_1BDA4E8(v7);
      v10 = *(_QWORD *)(v7 + 56);
    }
  }
  v12 = *(_QWORD *)(v10 + 8);
  v13 = *(unsigned int *)(v12 + 252);
  v14 = *(_DWORD *)(v12 + 252);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v14 = *(_DWORD *)(sub_1BDA48C(v12) + 252);
  v15 = (char *)&v29 - (((unsigned int)(v14 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v16 = (System_String_o *)((char *)&v29 - ((v13 + 15) & 0x1FFFFFFF0LL));
  if ( !dic )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v26 = &StringLiteral_25309/*"ディクショナリ"*/;
    goto LABEL_25;
  }
  v17 = *(_QWORD *)(v7 + 56);
  if ( *(int *)(*(_QWORD *)(v17 + 8) + 40LL) >= 0 )
    v18 = &v29;
  else
    v18 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v29 - ((v13 + 15) & 0x1FFFFFFF0LL), v18, v13);
  if ( (sub_1B887C0(*(_QWORD *)(v17 + 8), (char *)&v29 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) == 0 )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v26 = &StringLiteral_25296/*"キー"*/;
LABEL_25:
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)*v26, monitor, 0LL);
    return;
  }
  v19 = *(_QWORD *)(v7 + 56);
  if ( *(int *)(*(_QWORD *)(v19 + 8) + 40LL) >= 0 )
    v20 = &v29;
  else
    v20 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v29 - ((v13 + 15) & 0x1FFFFFFF0LL), v20, v13);
  v21 = *(__int64 **)(v19 + 16);
  v22 = *v21;
  if ( (*(_DWORD *)(*(_QWORD *)(v19 + 8) + 40LL) & 0x80000000) == 0 )
    v16 = (System_String_o *)v16->klass;
  v30 = v16;
  ((void (__fastcall *)(__int64, __int64 *, System_Collections_Generic_Dictionary_T1__T2__o *, System_String_o **, char *))v21[2])(
    v22,
    v21,
    dic,
    &v30,
    v31);
  if ( !v31[0] )
  {
    v23 = *(_QWORD *)(v7 + 56);
    v24 = *(_QWORD *)(v23 + 8);
    if ( (*(_BYTE *)(v24 + 309) & 1) != 0 )
    {
      v25 = *(_QWORD *)(v23 + 8);
    }
    else
    {
      LODWORD(v25) = sub_1BDA48C(*(_QWORD *)(v23 + 8));
      v23 = *(_QWORD *)(v7 + 56);
      klass = v29;
      v24 = *(_QWORD *)(v23 + 8);
    }
    if ( *(int *)(v24 + 40) >= 0 )
      v27 = &v29;
    else
      v27 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    sub_1B89018(v25, *(_QWORD *)(v23 + 24), (int)v15, v27);
    v28 = System_String__Concat_61718292(
            (System_String_o *)StringLiteral_20982/*"key("*/,
            v30,
            (System_String_o *)StringLiteral_832/*") の値がディクショナリに含まれていません"*/,
            0LL);
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetEffectiveAssertMessage(v28, monitor, 0LL);
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
  if ( (byte_4A5F90E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15902/*"[AssetData]\n{0}をロードできませんでした"*/);
    byte_4A5F90E = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_15902/*"[AssetData]\n{0}をロードできませんでした"*/, (Il2CppObject *)assetName, 0LL);
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
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x0
  System_String_o *v18; // x20
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v20; // [xsp+18h] [xbp-28h] BYREF
  int32_t v21; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4A5F911 & 1) == 0 )
  {
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_20629/*"index({0}) の値が負です"*/);
    sub_1B885B0(&StringLiteral_20630/*"index({0}) の値が配列の要素数({1})を超えています"*/);
    byte_4A5F911 = 1;
  }
  if ( (index & 0x80000000) != 0 )
  {
    v21 = index;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, message, gameObject, filePath);
    v15 = System_String__Format((System_String_o *)StringLiteral_20629/*"index({0}) の値が負です"*/, v17, 0LL);
  }
  else
  {
    if ( count > index )
      return;
    v20 = index;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, message, gameObject, filePath);
    v19 = count;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v11, v12, v13);
    v15 = System_String__Format_61721404((System_String_o *)StringLiteral_20630/*"index({0}) の値が配列の要素数({1})を超えています"*/, v10, v14, 0LL);
  }
  v18 = v15;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  Fgo_Assertions_Assert__GetEffectiveAssertMessage(v18, message, v16);
}


void __fastcall Fgo_Assertions_Assert__IsInRange___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2E605F4 *method)
{
  if ( (byte_4A60BCF & 1) == 0 )
  {
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    sub_1B885B0(&StringLiteral_25395/*"配列"*/);
    byte_4A60BCF = 1;
  }
  if ( !array )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25395/*"配列"*/, message, 0LL);
  }
}


void __fastcall Fgo_Assertions_Assert__IsInRange___Il2CppFullySharedGenericType__48629104(
        System_Collections_Generic_List_T__o *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2E60570 *method)
{
  if ( (byte_4A60BCE & 1) == 0 )
  {
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    sub_1B885B0(&StringLiteral_25322/*"リスト"*/);
    byte_4A60BCE = 1;
  }
  if ( !array )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25322/*"リスト"*/, message, 0LL);
  }
}


void __fastcall Fgo_Assertions_Assert__IsNotNull_object_(
        Il2CppObject *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2E60678 *method)
{
  Il2CppClass *klass; // x8
  UnityEngine_Object_c *v8; // x0
  unsigned int methodPtr_low; // w10
  __int64 v10; // x9
  Il2CppObject *v11; // x0

  if ( (byte_4A60BD0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A60BD0 = 1;
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
  if ( (byte_4A5F914 & 1) == 0 )
  {
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    sub_1B885B0(&StringLiteral_25284/*"アクション"*/);
    byte_4A5F914 = 1;
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
      (System_String_o *)StringLiteral_25284/*"アクション"*/,
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
        const MethodInfo_2E6073C *method)
{
  Il2CppClass *klass; // x8
  UnityEngine_Object_c *v8; // x0
  unsigned int methodPtr_low; // w10
  __int64 v10; // x9
  Il2CppObject *v11; // x0

  if ( (byte_4A60BD1 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A60BD1 = 1;
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
        const MethodInfo_2E60800 *method)
{
  if ( (byte_4A60BD2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15949/*"[SerializeField]\n{0}の参照が切れています"*/);
    byte_4A60BD2 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_15949/*"[SerializeField]\n{0}の参照が切れています"*/, (Il2CppObject *)fieldName, 0LL);
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
  System_String_o *v7; // x0
  Fgo_Assertions_Assert_c *v8; // x8
  System_String_o *v9; // x19
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x9
  struct System_Action_string__o *onFailedAction; // x9
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4A5F901 & 1) == 0 )
  {
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    sub_1B885B0(&StringLiteral_24985/*"{0}\n(expected={1}, actual={2})"*/);
    byte_4A5F901 = 1;
  }
  v7 = System_String__Format_61721472(
         (System_String_o *)StringLiteral_24985/*"{0}\n(expected={1}, actual={2})"*/,
         (Il2CppObject *)message,
         (Il2CppObject *)expected,
         (Il2CppObject *)actual,
         0LL);
  v8 = Fgo_Assertions_Assert_TypeInfo;
  v9 = v7;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v8 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( static_fields->enable )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = Fgo_Assertions_Assert_TypeInfo;
      static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
    }
    onFailedAction = static_fields->onFailedAction;
    if ( onFailedAction )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        onFailedAction = Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedAction;
        if ( !onFailedAction )
          sub_1B8880C(v12, v13);
      }
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))onFailedAction->fields.m_target)(
        onFailedAction->fields.original_method_info,
        v9,
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
  if ( (byte_4A5F90F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15927/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/);
    byte_4A5F90F = 1;
  }
  System_String__Format_61721404((System_String_o *)StringLiteral_15927/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/, (Il2CppObject *)name, (Il2CppObject *)key, 0LL);
}


void __fastcall Fgo_Assertions_Assert__OnFailed_46549868(
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
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x20
  System_String_o *name; // x0
  System_String_o *v19; // x0
  Fgo_Assertions_Assert_c *v20; // x8
  System_String_o *v21; // x21
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x9
  struct System_Action_string__o *onFailedAction; // x9
  struct System_Action_string__string__string__o *onFailedSendReport; // x9
  int32_t v25; // [xsp+Ch] [xbp-54h] BYREF

  v9 = message;
  v10 = (Il2CppObject *)caption;
  if ( (byte_4A5F902 & 1) == 0 )
  {
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_IO_Path_TypeInfo);
    sub_1B885B0(&StringLiteral_25025/*"{0}({1})"*/);
    sub_1B885B0(&StringLiteral_61/*"\nGameObject:"*/);
    caption = (System_String_o *)sub_1B885B0(&StringLiteral_24986/*"{0}\n{1}\n{2}"*/);
    byte_4A5F902 = 1;
  }
  if ( !filePath )
    goto LABEL_27;
  v11 = System_String__Replace(filePath, 0x5Cu, 0x2Fu, 0LL);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = (Il2CppObject *)System_IO_Path__GetFileName(v11, 0LL);
  v25 = line;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v13, v14, v15);
  v17 = (Il2CppObject *)System_String__Format_61721404((System_String_o *)StringLiteral_25025/*"{0}({1})"*/, FileName, v16, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  caption = (System_String_o *)UnityEngine_Object__op_Inequality(0LL, (UnityEngine_Object_o *)gameObject, 0LL);
  if ( ((unsigned __int8)caption & 1) != 0 )
  {
    if ( !gameObject )
      goto LABEL_27;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    v9 = System_String__Concat_61718292(v9, (System_String_o *)StringLiteral_61/*"\nGameObject:"*/, name, 0LL);
  }
  v19 = System_String__Format_61721472((System_String_o *)StringLiteral_24986/*"{0}\n{1}\n{2}"*/, v10, (Il2CppObject *)v9, v17, 0LL);
  v20 = Fgo_Assertions_Assert_TypeInfo;
  v21 = v19;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v20 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v20->static_fields;
  if ( static_fields->enable )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = Fgo_Assertions_Assert_TypeInfo;
      static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
    }
    onFailedAction = static_fields->onFailedAction;
    if ( onFailedAction )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        onFailedAction = Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedAction;
        if ( !onFailedAction )
          goto LABEL_27;
      }
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))onFailedAction->fields.m_target)(
        onFailedAction->fields.original_method_info,
        v21,
        *(_QWORD *)&onFailedAction->fields.extra_arg);
      v20 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = Fgo_Assertions_Assert_TypeInfo;
    }
    onFailedSendReport = v20->static_fields->onFailedSendReport;
    if ( onFailedSendReport )
    {
      if ( v20->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v20),
            (onFailedSendReport = Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedSendReport) != 0LL) )
      {
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, System_String_o *, Il2CppObject *, _QWORD))onFailedSendReport->fields.m_target)(
          onFailedSendReport->fields.original_method_info,
          v10,
          v21,
          v17,
          *(_QWORD *)&onFailedSendReport->fields.extra_arg);
        return;
      }
LABEL_27:
      sub_1B8880C(caption, message);
    }
  }
}


void __fastcall Fgo_Assertions_Assert__SetOnFailedAction(
        System_Action_string__o *action,
        bool force,
        const MethodInfo *method)
{
  int32_t v3; // w3
  Fgo_Assertions_Assert_c *v6; // x0
  Fgo_Assertions_Assert_c *v7; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_4A5F903 & 1) == 0 )
  {
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    sub_1B885B0(&UnityEngine_Debug_TypeInfo);
    sub_1B885B0(&StringLiteral_25367/*"既に表明違反時の処理が設定されています"*/);
    byte_4A5F903 = 1;
  }
  if ( !force )
  {
    v6 = Fgo_Assertions_Assert_TypeInfo;
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
      v6 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( v6->static_fields->onFailedAction )
    {
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_25367/*"既に表明違反時の処理が設定されています"*/, 0LL);
    }
  }
  v7 = Fgo_Assertions_Assert_TypeInfo;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v7 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->onFailedAction = action;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->onFailedAction, (int32_t)action, (int32_t)method, v3);
}


void __fastcall Fgo_Assertions_Assert__SetOnFailedSendReport(
        System_Action_string__string__string__o *action,
        bool force,
        const MethodInfo *method)
{
  int32_t v3; // w3
  Fgo_Assertions_Assert_c *v6; // x0
  Fgo_Assertions_Assert_c *v7; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_4A5F904 & 1) == 0 )
  {
    sub_1B885B0(&Fgo_Assertions_Assert_TypeInfo);
    sub_1B885B0(&UnityEngine_Debug_TypeInfo);
    sub_1B885B0(&StringLiteral_25367/*"既に表明違反時の処理が設定されています"*/);
    byte_4A5F904 = 1;
  }
  if ( !force )
  {
    v6 = Fgo_Assertions_Assert_TypeInfo;
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
      v6 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( v6->static_fields->onFailedSendReport )
    {
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_25367/*"既に表明違反時の処理が設定されています"*/, 0LL);
    }
  }
  v7 = Fgo_Assertions_Assert_TypeInfo;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v7 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->onFailedSendReport = action;
  sub_1B88554(
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)aFormat, v7, v8);
  this->fields.args = aArgs;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.args, (int32_t)aArgs, v9, v10);
}


void __fastcall Fgo_Assertions_AssertQueue___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5F91B & 1) == 0 )
  {
    sub_1B885B0(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_Queue_string__TypeInfo);
    byte_4A5F91B = 1;
  }
  v1 = (System_Collections_Generic_Queue_T__o *)sub_1B887FC(System_Collections_Generic_Queue_string__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v1,
    (const MethodInfo_366F2A4 *)Method_System_Collections_Generic_Queue_string___ctor__);
  Fgo_Assertions_AssertQueue_TypeInfo->static_fields->queue = (struct System_Collections_Generic_Queue_string__o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)Fgo_Assertions_AssertQueue_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
  static_fields = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
  static_fields->onFailedAction = 0LL;
  static_fields = (struct Fgo_Assertions_AssertQueue_StaticFields *)((char *)static_fields + 16);
  LOBYTE(static_fields[-1].onFailedAction) = 1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)static_fields, 0, v5, v6);
}


void __fastcall Fgo_Assertions_AssertQueue__Clear(const MethodInfo *method)
{
  __int64 v1; // x1
  Fgo_Assertions_AssertQueue_c *v2; // x0
  System_Collections_Generic_Queue_T__o *queue; // x0

  if ( (byte_4A5F91A & 1) == 0 )
  {
    sub_1B885B0(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_string__Clear__);
    byte_4A5F91A = 1;
  }
  v2 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v2 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  queue = (System_Collections_Generic_Queue_T__o *)v2->static_fields->queue;
  if ( !queue )
    sub_1B8880C(0LL, v1);
  System_Collections_Generic_Queue_object___Clear(
    queue,
    (const MethodInfo_366F52C *)Method_System_Collections_Generic_Queue_string__Clear__);
}


void __fastcall Fgo_Assertions_AssertQueue__Dequeue(const MethodInfo *method)
{
  __int64 v1; // x1
  System_Collections_Generic_Queue_T__o *queue; // x0
  struct Fgo_Assertions_AssertQueue_StaticFields *syncRoot; // x8
  int32_t size; // w20
  Il2CppObject *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4A5F919 & 1) == 0 )
  {
    sub_1B885B0(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_string__Dequeue__);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_string__get_Count__);
    byte_4A5F919 = 1;
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
        v5 = System_Collections_Generic_Queue_object___Dequeue(
               queue,
               (const MethodInfo_366F9FC *)Method_System_Collections_Generic_Queue_string__Dequeue__);
        Fgo_Assertions_AssertQueue__OnFailed((System_String_o *)v5, v6);
        return;
      }
LABEL_12:
      sub_1B8880C(queue, v1);
    }
  }
  syncRoot->isReady = 1;
}


void __fastcall Fgo_Assertions_AssertQueue__Enqueue(System_String_o *message, const MethodInfo *method)
{
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x8
  _BOOL4 isReady; // w21

  if ( (byte_4A5F918 & 1) == 0 )
  {
    sub_1B885B0(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_string__Enqueue__);
    byte_4A5F918 = 1;
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
    sub_1B8880C(0LL, method);
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)static_fields->queue,
    (Il2CppObject *)message,
    (const MethodInfo_366F86C *)Method_System_Collections_Generic_Queue_string__Enqueue__);
}


void __fastcall Fgo_Assertions_AssertQueue__OnFailed(System_String_o *message, const MethodInfo *method)
{
  Fgo_Assertions_AssertQueue_c *v3; // x0
  struct System_Action_string__o *onFailedAction; // x8
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5F916 & 1) == 0 )
  {
    sub_1B885B0(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1B885B0(&UnityEngine_Debug_TypeInfo);
    sub_1B885B0(&StringLiteral_25385/*"表明違反時処理が設定されていません"*/);
    byte_4A5F916 = 1;
  }
  v3 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v3 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  onFailedAction = v3->static_fields->onFailedAction;
  if ( onFailedAction )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      onFailedAction = Fgo_Assertions_AssertQueue_TypeInfo->static_fields->onFailedAction;
      if ( !onFailedAction )
        sub_1B8880C(v5, v6);
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
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_25385/*"表明違反時処理が設定されていません"*/, 0LL);
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

  if ( (byte_4A5F917 & 1) == 0 )
  {
    sub_1B885B0(&Fgo_Assertions_AssertQueue_TypeInfo);
    byte_4A5F917 = 1;
  }
  v5 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v5 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->onFailedAction = action;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->onFailedAction, (int32_t)action, v2, v3);
}