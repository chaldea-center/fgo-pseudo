void __fastcall Fgo_Assertions_Assert___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0
  struct Fgo_Assertions_Assert_StaticFields *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_HashSet_T__o *v18; // x19
  struct Fgo_Assertions_Assert_StaticFields *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4BB8E46 & 1) == 0 )
  {
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, v1);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_HashSet_Assert_SuppressAssertKey__TypeInfo, v9);
    byte_4BB8E46 = 1;
  }
  static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
  static_fields->enable = 1;
  static_fields->onFailedAction = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->onFailedAction, 0LL, v2, v3, v4, v5, v6, v7);
  v11 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v11->onFailedSendReport = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v11->onFailedSendReport, 0LL, v12, v13, v14, v15, v16, v17);
  v18 = (System_Collections_Generic_HashSet_T__o *)sub_1C13F70(System_Collections_Generic_HashSet_Assert_SuppressAssertKey__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v18,
    (const MethodInfo_34E245C *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey___ctor__);
  v19 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v19->suppressAsserts = (struct System_Collections_Generic_HashSet_Assert_SuppressAssertKey__o *)v18;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v19->suppressAsserts, (int64_t)v18, v20, v21, v22, v23, v24, v25);
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

  if ( (byte_4BB8E36 & 1) == 0 )
  {
    sub_1C13D24(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___, gameObject);
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4BB8E36 = 1;
  }
  if ( !byte_4BAEDA5 )
  {
    sub_1C13D24(&UnityEngine_Mathf_TypeInfo, gameObject);
    byte_4BAEDA5 = 1;
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
      (const MethodInfo_2F6F428 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
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

  if ( (byte_4BB8E37 & 1) == 0 )
  {
    sub_1C13D24(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___, *(_QWORD *)&actual);
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4BB8E37 = 1;
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
      (const MethodInfo_2F6EE8C *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_47592340(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  __int64 v10; // x1

  if ( (byte_4BB8E38 & 1) == 0 )
  {
    sub_1C13D24(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___, actual);
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4BB8E38 = 1;
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
      (const MethodInfo_2F6F058 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_47592500(
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

  if ( (byte_4BB8E39 & 1) == 0 )
  {
    sub_1C13D24(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___, actual);
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, v10);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v11);
    byte_4BB8E39 = 1;
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
          (const MethodInfo_2F6F22C *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
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
        const MethodInfo_2F6DEF4 *method)
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
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, expected.monitor);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v12);
    v11 = filePath[2].monitor;
    if ( !v11 )
    {
      sub_1C65C5C(filePath);
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
    v15 = sub_1C65C00(v7);
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
          (sub_1C13F34(*v38, (char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
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
            (sub_1C13F34(*v47, (char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
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
          if ( (sub_1C13F34(*v56, (char *)&v85 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
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
              v69 = sub_1C65C00(v65);
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
            sub_1C1478C(v68, v70, (int)v17, v72);
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

  if ( (byte_4BB8E3A & 1) == 0 )
  {
    sub_1C13D24(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___, gameObject);
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4BB8E3A = 1;
  }
  if ( !byte_4BAEDA5 )
  {
    sub_1C13D24(&UnityEngine_Mathf_TypeInfo, gameObject);
    byte_4BAEDA5 = 1;
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
      (const MethodInfo_2F6F428 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
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

  if ( (byte_4BB8E3B & 1) == 0 )
  {
    sub_1C13D24(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___, *(_QWORD *)&actual);
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4BB8E3B = 1;
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
      (const MethodInfo_2F6EE8C *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_47593208(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  __int64 v10; // x1

  if ( (byte_4BB8E3C & 1) == 0 )
  {
    sub_1C13D24(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___, actual);
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, v10);
    byte_4BB8E3C = 1;
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
      (const MethodInfo_2F6F058 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_47593368(
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

  if ( (byte_4BB8E3D & 1) == 0 )
  {
    sub_1C13D24(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___, actual);
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, v10);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v11);
    byte_4BB8E3D = 1;
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
      (const MethodInfo_2F6F22C *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o expected,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2F6E3CC *method)
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
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, expected.monitor);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v12);
    v11 = filePath[2].monitor;
    if ( !v11 )
    {
      sub_1C65C5C(filePath);
      v11 = filePath[2].monitor;
    }
  }
  v13 = *v11;
  v14 = *(_DWORD *)(*v11 + 252LL);
  v15 = v14;
  if ( (*(_BYTE *)(*v11 + 309LL) & 1) == 0 )
  {
    v16 = sub_1C65C00(v7);
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
        (sub_1C13F34(*v40, (char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
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
          (sub_1C13F34(*v49, (char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
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
        if ( (sub_1C13F34(*v58, (char *)&v87 - ((v15 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
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
            v71 = sub_1C65C00(v67);
            v68 = filePath[2].monitor;
            v59 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v91;
            LODWORD(v70) = v71;
          }
          v72 = v68[2];
          v73 = (__int64 *)(*(int *)(*v68 + 40LL) >= 0 ? &v91 : v59);
          v92[0] = v69;
          sub_1C1478C(v70, v72, v87, v73);
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

  if ( (byte_4BB8E44 & 1) == 0 )
  {
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1C13D24(&char_TypeInfo, v8);
    sub_1C13D24(&StringLiteral_25783/*"差分チェック"*/, v9);
    sub_1C13D24(&StringLiteral_25725/*"クイック"*/, v10);
    sub_1C13D24(&StringLiteral_25772/*"全て"*/, v11);
    sub_1C13D24(&StringLiteral_25766/*"中華民國"*/, v12);
    sub_1C13D24(&StringLiteral_25767/*"中華民國曆"*/, v13);
    sub_1C13D24(&StringLiteral_1/*""*/, v14);
    byte_4BB8E44 = 1;
  }
  v35[0] = 0;
  result = 0;
  v34 = 0;
  if ( !parameter )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v31 = &StringLiteral_25725/*"クイック"*/;
    goto LABEL_59;
  }
  format = parameter->fields.format;
  if ( !format )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v31 = &StringLiteral_25772/*"全て"*/;
    goto LABEL_59;
  }
  args = parameter->fields.args;
  if ( !args || args->max_length == 1 && !args->m_Items[0] )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v31 = &StringLiteral_25766/*"中華民國"*/;
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
          sub_1C13F80(v26, v27);
        if ( v34 >= (signed int)v28->max_length )
        {
          if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
          v32 = &StringLiteral_25767/*"中華民國曆"*/;
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
      v22 = System_String__Concat_62967944(v22, v29, 0LL);
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
        v22 = System_String__Concat_62967944(v22, v30, 0LL);
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
  v32 = &StringLiteral_25783/*"差分チェック"*/;
LABEL_69:
  Fgo_Assertions_Assert__GetEffectiveAssertMessage((System_String_o *)*v32, message, (const MethodInfo *)gameObject);
}


void __fastcall Fgo_Assertions_Assert__CanParse___Il2CppFullySharedGenericType_(
        System_String_o *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2F6E8EC *method)
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
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1C13D24(&bool_var, v9);
    sub_1C13D24(&bool_TypeInfo, v10);
    sub_1C13D24(&qword_499E458, v11);
    sub_1C13D24(&double_var, v12);
    sub_1C13D24(&short_var, v13);
    sub_1C13D24(&int_var, v14);
    sub_1C13D24(&long_var, v15);
    sub_1C13D24(&sbyte_var, v16);
    sub_1C13D24(&float_var, v17);
    sub_1C13D24(&System_Type_TypeInfo, v18);
    sub_1C13D24(&ushort_var, v19);
    sub_1C13D24(&uint_var, v20);
    sub_1C13D24(&ulong_var, v21);
    sub_1C13D24(&StringLiteral_25754/*"・ "*/, v22);
    sub_1C13D24(&StringLiteral_25772/*"全て"*/, v23);
    sub_1C13D24(&StringLiteral_297/*" isNotBoolean"*/, v24);
    if ( !method->rgctx_data )
      sub_1C65C5C(method);
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
        v28 = System_String__Concat_62967944(value, (System_String_o *)StringLiteral_297/*" isNotBoolean"*/, 0LL);
LABEL_12:
        v29 = v28;
        if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
        Fgo_Assertions_Assert__GetEffectiveAssertMessage(v29, message, 0LL);
      }
    }
    else
    {
      v30 = (int)qword_499E458;
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
                          v28 = System_String__Format((System_String_o *)StringLiteral_25754/*"・ "*/, TypeFromHandle, 0LL);
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
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25772/*"全て"*/, message, 0LL);
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
        const MethodInfo_2F6F5F4 *method)
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
  int64_t v29; // x23
  _QWORD *v30; // x26
  void **v31; // x1
  long double v32; // q0
  _QWORD *v33; // x8
  __int64 v34; // x0
  void **v35; // x3
  int64_t v36; // x21
  __int64 v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x22
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  void *v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t *v59; // x8
  int64_t v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  void *v67; // x1
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  System_String_o *v74; // x20
  __int64 v76; // [xsp+0h] [xbp-30h] BYREF
  System_String_o *monitor; // [xsp+8h] [xbp-28h]
  void **v78; // [xsp+10h] [xbp-20h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v79; // [xsp+18h] [xbp-18h] BYREF
  int64_t v80; // [xsp+20h] [xbp-10h]
  __int64 v81; // [xsp+28h] [xbp-8h]

  monitor = (System_String_o *)actual.monitor;
  v6 = equal;
  v7 = (void **)expected.monitor;
  klass = expected.klass;
  v81 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v78 = (void **)expected.monitor;
  v79 = expected.klass;
  v9 = *(__int64 **)(equal + 56LL);
  v10 = (char)actual.klass;
  if ( !v9 )
  {
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, expected.monitor);
    sub_1C13D24(&string___TypeInfo, v11);
    sub_1C13D24(&StringLiteral_117/*" "*/, v12);
    sub_1C13D24(&StringLiteral_22544/*"nowrap"*/, v13);
    sub_1C13D24(&StringLiteral_19612/*"ex"*/, v14);
    sub_1C13D24(&StringLiteral_19613/*"exceedCount"*/, v15);
    v9 = *(__int64 **)(v6 + 56);
    if ( !v9 )
    {
      sub_1C65C5C(v6);
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
    v19 = sub_1C65C00(v5);
    v9 = *(__int64 **)(v6 + 56);
    v20 = *(_DWORD *)(v19 + 252);
    v16 = *v9;
    v17 = *(_WORD *)(*v9 + 309);
  }
  v21 = (char *)&v76 - (((unsigned int)(v20 + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( (v17 & 1) != 0 )
  {
    v22 = v16;
  }
  else
  {
    v22 = sub_1C65C00(v5);
    v9 = *(__int64 **)(v6 + 56);
    v16 = *v9;
  }
  v23 = (char *)&v76 - (((unsigned int)(*(_DWORD *)(v22 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( *(int *)(v16 + 40) >= 0 )
    v24 = &v79;
  else
    v24 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v76 - ((v18 + 15) & 0x1FFFFFFF0LL), v24, v18);
  if ( (sub_1C13F34(*v9, (char *)&v76 - ((v18 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
  {
    v26 = *(_QWORD **)(v6 + 56);
    v27 = *v26;
    if ( (*(_BYTE *)(*v26 + 309LL) & 1) == 0 )
    {
      LODWORD(v27) = sub_1C65C00(v25);
      v26 = *(_QWORD **)(v6 + 56);
      klass = v79;
    }
    if ( *(int *)(*v26 + 40LL) >= 0 )
      v28 = &v79;
    else
      v28 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    sub_1C1478C(v27, v26[1], (int)v21, v28);
    v29 = v80;
    v7 = v78;
  }
  else
  {
    v29 = StringLiteral_22544/*"nowrap"*/;
  }
  v30 = *(_QWORD **)(v6 + 56);
  if ( *(int *)(*v30 + 40LL) >= 0 )
    v31 = (void **)&v78;
  else
    v31 = v7;
  memcpy((char *)&v76 - ((v18 + 15) & 0x1FFFFFFF0LL), v31, v18);
  if ( (sub_1C13F34(*v30, (char *)&v76 - ((v18 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
  {
    v33 = *(_QWORD **)(v6 + 56);
    v34 = *v33;
    if ( (*(_BYTE *)(*v33 + 309LL) & 1) == 0 )
    {
      LODWORD(v34) = sub_1C65C00(v32);
      v33 = *(_QWORD **)(v6 + 56);
      v7 = v78;
    }
    if ( *(int *)(*v33 + 40LL) >= 0 )
      v35 = (void **)&v78;
    else
      v35 = v7;
    sub_1C1478C(v34, v33[1], (int)v23, v35);
    v36 = v80;
  }
  else
  {
    v36 = StringLiteral_22544/*"nowrap"*/;
  }
  v37 = sub_1C13DCC(string___TypeInfo, 5LL);
  if ( !v37 )
    sub_1C13F80(0LL, v38);
  v45 = v37;
  if ( !*(_DWORD *)(v37 + 24) )
    goto LABEL_43;
  *(_QWORD *)(v37 + 32) = v29;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v37 + 32), v29, v39, v40, v41, v42, v43, v44);
  if ( *(_DWORD *)(v45 + 24) <= 1u )
    goto LABEL_43;
  v52 = StringLiteral_117/*" "*/;
  *(_QWORD *)(v45 + 40) = StringLiteral_117/*" "*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v45 + 40), (int64_t)v52, v46, v47, v48, v49, v50, v51);
  v59 = (int64_t *)&StringLiteral_19613/*"exceedCount"*/;
  if ( (v10 & 1) == 0 )
    v59 = (int64_t *)&StringLiteral_19612/*"ex"*/;
  if ( *(_DWORD *)(v45 + 24) <= 2u
    || (v60 = *v59,
        *(_QWORD *)(v45 + 48) = *v59,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v45 + 48), v60, v53, v54, v55, v56, v57, v58),
        *(_DWORD *)(v45 + 24) <= 3u)
    || (v67 = StringLiteral_117/*" "*/,
        *(_QWORD *)(v45 + 56) = StringLiteral_117/*" "*/,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v45 + 56), (int64_t)v67, v61, v62, v63, v64, v65, v66),
        *(_DWORD *)(v45 + 24) <= 4u) )
  {
LABEL_43:
    sub_1C13F88(v37, v38);
  }
  *(_QWORD *)(v45 + 64) = v36;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v45 + 64), v36, v68, v69, v70, v71, v72, v73);
  v74 = System_String__Concat_62981472((System_String_array *)v45, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v74, monitor, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_float_(
        float expected,
        float actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2F6F428 *method)
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  void *v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t *v37; // x8
  int64_t v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  void *v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_String_o *v52; // x20
  float v54; // [xsp+8h] [xbp-38h] BYREF
  float v55; // [xsp+Ch] [xbp-34h] BYREF

  v54 = actual;
  v55 = expected;
  if ( !method->rgctx_data )
  {
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1C13D24(&string___TypeInfo, v8);
    sub_1C13D24(&StringLiteral_117/*" "*/, v9);
    sub_1C13D24(&StringLiteral_19612/*"ex"*/, v10);
    sub_1C13D24(&StringLiteral_19613/*"exceedCount"*/, v11);
    if ( !method->rgctx_data )
      sub_1C65C5C(method);
  }
  v12 = System_Single__ToString(expected, (const MethodInfo *)&v55);
  v14 = System_Single__ToString(v13, (const MethodInfo *)&v54);
  v15 = sub_1C13DCC(string___TypeInfo, 5LL);
  if ( !v15 )
    sub_1C13F80(0LL, v16);
  v23 = v15;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v15 + 32) = v12;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v15 + 32), (int64_t)v12, v17, v18, v19, v20, v21, v22);
  if ( *(_DWORD *)(v23 + 24) <= 1u )
    goto LABEL_15;
  v30 = StringLiteral_117/*" "*/;
  *(_QWORD *)(v23 + 40) = StringLiteral_117/*" "*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 40), (int64_t)v30, v24, v25, v26, v27, v28, v29);
  v37 = (int64_t *)&StringLiteral_19613/*"exceedCount"*/;
  if ( !equal )
    v37 = (int64_t *)&StringLiteral_19612/*"ex"*/;
  if ( *(_DWORD *)(v23 + 24) <= 2u
    || (v38 = *v37,
        *(_QWORD *)(v23 + 48) = *v37,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 48), v38, v31, v32, v33, v34, v35, v36),
        *(_DWORD *)(v23 + 24) <= 3u)
    || (v45 = StringLiteral_117/*" "*/,
        *(_QWORD *)(v23 + 56) = StringLiteral_117/*" "*/,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 56), (int64_t)v45, v39, v40, v41, v42, v43, v44),
        *(_DWORD *)(v23 + 24) <= 4u) )
  {
LABEL_15:
    sub_1C13F88(v15, v16);
  }
  *(_QWORD *)(v23 + 64) = v14;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 64), (int64_t)v14, v46, v47, v48, v49, v50, v51);
  v52 = System_String__Concat_62981472((System_String_array *)v23, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v52, message, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_int_(
        int32_t expected,
        int32_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2F6EE8C *method)
{
  const MethodInfo_2F6EE8C_RGCTXs *rgctx_data; // x8
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x23
  System_String_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  void *v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t *v37; // x8
  int64_t v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  void *v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_String_o *v52; // x20
  int32_t v54; // [xsp+8h] [xbp-38h] BYREF
  int32_t v55; // [xsp+Ch] [xbp-34h] BYREF

  v54 = actual;
  v55 = expected;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&actual);
    sub_1C13D24(&string___TypeInfo, v9);
    sub_1C13D24(&StringLiteral_117/*" "*/, v10);
    sub_1C13D24(&StringLiteral_19612/*"ex"*/, v11);
    sub_1C13D24(&StringLiteral_19613/*"exceedCount"*/, v12);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C65C5C(method);
      rgctx_data = method->rgctx_data;
    }
  }
  v13 = System_Int32__ToString((int32_t)&v55, (const MethodInfo *)rgctx_data[1]._0_T);
  v14 = System_Int32__ToString((int32_t)&v54, (const MethodInfo *)method->rgctx_data[1]._0_T);
  v15 = sub_1C13DCC(string___TypeInfo, 5LL);
  if ( !v15 )
    sub_1C13F80(0LL, v16);
  v23 = v15;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v15 + 32) = v13;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v15 + 32), (int64_t)v13, v17, v18, v19, v20, v21, v22);
  if ( *(_DWORD *)(v23 + 24) <= 1u )
    goto LABEL_15;
  v30 = StringLiteral_117/*" "*/;
  *(_QWORD *)(v23 + 40) = StringLiteral_117/*" "*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 40), (int64_t)v30, v24, v25, v26, v27, v28, v29);
  v37 = (int64_t *)&StringLiteral_19613/*"exceedCount"*/;
  if ( !equal )
    v37 = (int64_t *)&StringLiteral_19612/*"ex"*/;
  if ( *(_DWORD *)(v23 + 24) <= 2u
    || (v38 = *v37,
        *(_QWORD *)(v23 + 48) = *v37,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 48), v38, v31, v32, v33, v34, v35, v36),
        *(_DWORD *)(v23 + 24) <= 3u)
    || (v45 = StringLiteral_117/*" "*/,
        *(_QWORD *)(v23 + 56) = StringLiteral_117/*" "*/,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 56), (int64_t)v45, v39, v40, v41, v42, v43, v44),
        *(_DWORD *)(v23 + 24) <= 4u) )
  {
LABEL_15:
    sub_1C13F88(v15, v16);
  }
  *(_QWORD *)(v23 + 64) = v14;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 64), (int64_t)v14, v46, v47, v48, v49, v50, v51);
  v52 = System_String__Concat_62981472((System_String_array *)v23, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v52, message, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_long_(
        int64_t expected,
        int64_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2F6F058 *method)
{
  const MethodInfo_2F6F058_RGCTXs *rgctx_data; // x8
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x23
  System_String_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  void *v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t *v37; // x8
  int64_t v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  void *v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_String_o *v52; // x20
  int64_t v54; // [xsp+8h] [xbp-48h] BYREF
  int64_t v55; // [xsp+18h] [xbp-38h] BYREF

  v55 = expected;
  v54 = actual;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, actual);
    sub_1C13D24(&string___TypeInfo, v9);
    sub_1C13D24(&StringLiteral_117/*" "*/, v10);
    sub_1C13D24(&StringLiteral_19612/*"ex"*/, v11);
    sub_1C13D24(&StringLiteral_19613/*"exceedCount"*/, v12);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C65C5C(method);
      rgctx_data = method->rgctx_data;
    }
  }
  v13 = System_Int64__ToString((int64_t)&v55, (const MethodInfo *)rgctx_data[1]._0_T);
  v14 = System_Int64__ToString((int64_t)&v54, (const MethodInfo *)method->rgctx_data[1]._0_T);
  v15 = sub_1C13DCC(string___TypeInfo, 5LL);
  if ( !v15 )
    sub_1C13F80(0LL, v16);
  v23 = v15;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v15 + 32) = v13;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v15 + 32), (int64_t)v13, v17, v18, v19, v20, v21, v22);
  if ( *(_DWORD *)(v23 + 24) <= 1u )
    goto LABEL_15;
  v30 = StringLiteral_117/*" "*/;
  *(_QWORD *)(v23 + 40) = StringLiteral_117/*" "*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 40), (int64_t)v30, v24, v25, v26, v27, v28, v29);
  v37 = (int64_t *)&StringLiteral_19613/*"exceedCount"*/;
  if ( !equal )
    v37 = (int64_t *)&StringLiteral_19612/*"ex"*/;
  if ( *(_DWORD *)(v23 + 24) <= 2u
    || (v38 = *v37,
        *(_QWORD *)(v23 + 48) = *v37,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 48), v38, v31, v32, v33, v34, v35, v36),
        *(_DWORD *)(v23 + 24) <= 3u)
    || (v45 = StringLiteral_117/*" "*/,
        *(_QWORD *)(v23 + 56) = StringLiteral_117/*" "*/,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 56), (int64_t)v45, v39, v40, v41, v42, v43, v44),
        *(_DWORD *)(v23 + 24) <= 4u) )
  {
LABEL_15:
    sub_1C13F88(v15, v16);
  }
  *(_QWORD *)(v23 + 64) = v14;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 64), (int64_t)v14, v46, v47, v48, v49, v50, v51);
  v52 = System_String__Concat_62981472((System_String_array *)v23, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v52, message, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_object_(
        Il2CppObject *expected,
        Il2CppObject *actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2F6F22C *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t v14; // x23
  int64_t v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  void *v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t *v38; // x8
  int64_t v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  void *v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_String_o *v53; // x20

  if ( (byte_4BBA2FD & 1) == 0 )
  {
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, actual);
    sub_1C13D24(&string___TypeInfo, v9);
    sub_1C13D24(&StringLiteral_117/*" "*/, v10);
    sub_1C13D24(&StringLiteral_22544/*"nowrap"*/, v11);
    sub_1C13D24(&StringLiteral_19612/*"ex"*/, v12);
    sub_1C13D24(&StringLiteral_19613/*"exceedCount"*/, v13);
    byte_4BBA2FD = 1;
  }
  if ( expected )
    v14 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, bool, System_String_o *, const MethodInfo_2F6F22C *))expected->klass->vtable[3].method)(
            expected,
            expected->klass->vtable[4].methodPtr,
            equal,
            message,
            method);
  else
    v14 = StringLiteral_22544/*"nowrap"*/;
  if ( actual )
    v15 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))actual->klass->vtable[3].method)(
            actual,
            actual->klass->vtable[4].methodPtr);
  else
    v15 = StringLiteral_22544/*"nowrap"*/;
  v16 = sub_1C13DCC(string___TypeInfo, 5LL);
  if ( !v16 )
    sub_1C13F80(0LL, v17);
  v24 = v16;
  if ( !*(_DWORD *)(v16 + 24) )
    goto LABEL_21;
  *(_QWORD *)(v16 + 32) = v14;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v16 + 32), v14, v18, v19, v20, v21, v22, v23);
  if ( *(_DWORD *)(v24 + 24) <= 1u )
    goto LABEL_21;
  v31 = StringLiteral_117/*" "*/;
  *(_QWORD *)(v24 + 40) = StringLiteral_117/*" "*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v24 + 40), (int64_t)v31, v25, v26, v27, v28, v29, v30);
  v38 = (int64_t *)(equal ? &StringLiteral_19613/*"exceedCount"*/ : &StringLiteral_19612/*"ex"*/);
  if ( *(_DWORD *)(v24 + 24) <= 2u
    || (v39 = *v38,
        *(_QWORD *)(v24 + 48) = *v38,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v24 + 48), v39, v32, v33, v34, v35, v36, v37),
        *(_DWORD *)(v24 + 24) <= 3u)
    || (v46 = StringLiteral_117/*" "*/,
        *(_QWORD *)(v24 + 56) = StringLiteral_117/*" "*/,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v24 + 56), (int64_t)v46, v40, v41, v42, v43, v44, v45),
        *(_DWORD *)(v24 + 24) <= 4u) )
  {
LABEL_21:
    sub_1C13F88(v16, v17);
  }
  *(_QWORD *)(v24 + 64) = v15;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v24 + 64), v15, v47, v48, v49, v50, v51, v52);
  v53 = System_String__Concat_62981472((System_String_array *)v24, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v53, message, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetEffectiveAssertMessage(
        System_String_o *defaultMessage,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1

  if ( (byte_4BB8E35 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_57/*"\n("*/, message);
    sub_1C13D24(&StringLiteral_812/*")"*/, v5);
    byte_4BB8E35 = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    return defaultMessage;
  else
    return System_String__Concat_62981208(
             message,
             (System_String_o *)StringLiteral_57/*"\n("*/,
             defaultMessage,
             (System_String_o *)StringLiteral_812/*")"*/,
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

  if ( (byte_4BB8E41 & 1) == 0 )
  {
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1C13D24(&StringLiteral_25683/*"✀⟀"*/, v5);
    byte_4BB8E41 = 1;
  }
  v7 = System_String__Concat_62967944(modelName, (System_String_o *)StringLiteral_25683/*"✀⟀"*/, 0LL);
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

  if ( (byte_4BB8E43 & 1) == 0 )
  {
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1C13D24(&StringLiteral_298/*" isNotNumbers"*/, v5);
    byte_4BB8E43 = 1;
  }
  v7 = System_String__Concat_62967944(value, (System_String_o *)StringLiteral_298/*" isNotNumbers"*/, 0LL);
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
        const MethodInfo_2F6F988 *method)
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
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, key.klass);
    sub_1C13D24(&StringLiteral_25715/*"イベントクエストクリア【完了】クエスト"*/, v13);
    sub_1C13D24(&StringLiteral_830/*") の値がディクショナリに含まれていません"*/, v14);
    sub_1C13D24(&StringLiteral_21328/*"k_ReceiptBytesKey"*/, v15);
    sub_1C13D24(&StringLiteral_25702/*"぀゠"*/, v16);
    v11 = *(_QWORD *)(v8 + 56);
    if ( !v11 )
    {
      sub_1C65C5C(v8);
      v11 = *(_QWORD *)(v8 + 56);
    }
  }
  v17 = *(_QWORD *)(v11 + 8);
  v18 = *(unsigned int *)(v17 + 252);
  v19 = *(_DWORD *)(v17 + 252);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v19 = *(_DWORD *)(sub_1C65C00(v7) + 252);
  v20 = (char *)&v35 - (((unsigned int)(v19 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v21 = (System_String_o *)((char *)&v35 - ((v18 + 15) & 0x1FFFFFFF0LL));
  if ( !dic )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v32 = &StringLiteral_25715/*"イベントクエストクリア【完了】クエスト"*/;
    goto LABEL_25;
  }
  v22 = *(_QWORD *)(v8 + 56);
  if ( *(int *)(*(_QWORD *)(v22 + 8) + 40LL) >= 0 )
    v23 = &v35;
  else
    v23 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v35 - ((v18 + 15) & 0x1FFFFFFF0LL), v23, v18);
  if ( (sub_1C13F34(*(_QWORD *)(v22 + 8), (char *)&v35 - ((v18 + 15) & 0x1FFFFFFF0LL)) & 1) == 0 )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v32 = &StringLiteral_25702/*"぀゠"*/;
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
      LODWORD(v31) = sub_1C65C00(v28);
      v29 = *(_QWORD *)(v8 + 56);
      klass = v35;
      v30 = *(_QWORD *)(v29 + 8);
    }
    if ( *(int *)(v30 + 40) >= 0 )
      v33 = &v35;
    else
      v33 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    sub_1C1478C(v31, *(_QWORD *)(v29 + 24), (int)v20, v33);
    v34 = System_String__Concat_62979204(
            (System_String_o *)StringLiteral_21328/*"k_ReceiptBytesKey"*/,
            v36,
            (System_String_o *)StringLiteral_830/*") の値がディクショナリに含まれていません"*/,
            0LL);
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetEffectiveAssertMessage(v34, monitor, 0LL);
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
  if ( (byte_4BB8E3F & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_16151/*"[Adjust]: App Store purchase verification is only supported for iOS platform."*/, assetName);
    byte_4BB8E3F = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_16151/*"[Adjust]: App Store purchase verification is only supported for iOS platform."*/, (Il2CppObject *)assetName, 0LL);
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

  if ( (byte_4BB8E42 & 1) == 0 )
  {
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&index);
    sub_1C13D24(&int_TypeInfo, v10);
    sub_1C13D24(&StringLiteral_20971/*"includechildren"*/, v11);
    sub_1C13D24(&StringLiteral_20972/*"incomingCallDispTime"*/, v12);
    byte_4BB8E42 = 1;
  }
  if ( (index & 0x80000000) != 0 )
  {
    v24 = index;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, message, gameObject, filePath);
    v18 = System_String__Format((System_String_o *)StringLiteral_20971/*"includechildren"*/, v20, 0LL);
  }
  else
  {
    if ( count > index )
      return;
    v23 = index;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, message, gameObject, filePath);
    v22 = count;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v14, v15, v16);
    v18 = System_String__Format_62982316((System_String_o *)StringLiteral_20972/*"incomingCallDispTime"*/, v13, v17, 0LL);
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
        const MethodInfo_2F6FCA8 *method)
{
  __int64 v9; // x1

  if ( (byte_4BBA2FF & 1) == 0 )
  {
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&index);
    sub_1C13D24(&StringLiteral_25801/*"昭"*/, v9);
    byte_4BBA2FF = 1;
  }
  if ( !array )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25801/*"昭"*/, message, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__IsInRange___Il2CppFullySharedGenericType__49740836(
        System_Collections_Generic_List_T__o *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2F6FC24 *method)
{
  __int64 v9; // x1

  if ( (byte_4BBA2FE & 1) == 0 )
  {
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&index);
    sub_1C13D24(&StringLiteral_25728/*"サーバアドレスが手動で変更されたので、\nCUSTOM に変更しました"*/, v9);
    byte_4BBA2FE = 1;
  }
  if ( !array )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25728/*"サーバアドレスが手動で変更されたので、\nCUSTOM に変更しました"*/, message, 0LL);
  }
}


void __fastcall Fgo_Assertions_Assert__IsNotNull_object_(
        Il2CppObject *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2F6FD2C *method)
{
  Il2CppClass *klass; // x8
  UnityEngine_Object_c *v8; // x0
  unsigned int methodPtr_low; // w10
  __int64 v10; // x9
  Il2CppObject *v11; // x0

  if ( (byte_4BBA300 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, message);
    byte_4BBA300 = 1;
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

  if ( (byte_4BB8E45 & 1) == 0 )
  {
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1C13D24(&StringLiteral_25690/*"⬀Ⰰ"*/, v8);
    byte_4BB8E45 = 1;
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
      (System_String_o *)StringLiteral_25690/*"⬀Ⰰ"*/,
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
        const MethodInfo_2F6FDF0 *method)
{
  Il2CppClass *klass; // x8
  UnityEngine_Object_c *v8; // x0
  unsigned int methodPtr_low; // w10
  __int64 v10; // x9
  Il2CppObject *v11; // x0

  if ( (byte_4BBA301 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, message);
    byte_4BBA301 = 1;
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
        const MethodInfo_2F6FEB4 *method)
{
  if ( (byte_4BBA302 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_16199/*"[FFFF00]"*/, fieldName);
    byte_4BBA302 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_16199/*"[FFFF00]"*/, (Il2CppObject *)fieldName, 0LL);
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

  if ( (byte_4BB8E3E & 1) == 0 )
  {
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, condition);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Add__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Contains__, v10);
    byte_4BB8E3E = 1;
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
             (const MethodInfo_34E2B50 *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Contains__) )
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
          (const MethodInfo_34E3660 *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Add__);
        return;
      }
    }
    sub_1C13F80(suppressAsserts, condition);
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

  if ( (byte_4BB8E31 & 1) == 0 )
  {
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, expected);
    sub_1C13D24(&StringLiteral_25385/*"{0:D8}{1:D1}6"*/, v7);
    byte_4BB8E31 = 1;
  }
  v8 = System_String__Format_62982384(
         (System_String_o *)StringLiteral_25385/*"{0:D8}{1:D1}6"*/,
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
          sub_1C13F80(v13, v14);
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
  if ( (byte_4BB8E40 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_16176/*"[CRIWARE] Internal: Duplicated CriMonoBehaviour GUID"*/, key);
    byte_4BB8E40 = 1;
  }
  System_String__Format_62982316((System_String_o *)StringLiteral_16176/*"[CRIWARE] Internal: Duplicated CriMonoBehaviour GUID"*/, (Il2CppObject *)name, (Il2CppObject *)key, 0LL);
}


void __fastcall Fgo_Assertions_Assert__OnFailed_47590676(
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
  if ( (byte_4BB8E32 & 1) == 0 )
  {
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, message);
    sub_1C13D24(&int_TypeInfo, v11);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v12);
    sub_1C13D24(&System_IO_Path_TypeInfo, v13);
    sub_1C13D24(&StringLiteral_25425/*"{0} has been disposed. Do not call Render on disposed a RenderPipeline."*/, v14);
    sub_1C13D24(&StringLiteral_62/*"\nGameObject:"*/, v15);
    caption = (System_String_o *)sub_1C13D24(&StringLiteral_25386/*"{0:D8}{1:D1}7"*/, v16);
    byte_4BB8E32 = 1;
  }
  if ( !filePath )
    goto LABEL_27;
  v17 = System_String__Replace(filePath, 0x5Cu, 0x2Fu, 0LL);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = (Il2CppObject *)System_IO_Path__GetFileName(v17, 0LL);
  v31 = line;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v19, v20, v21);
  v23 = (Il2CppObject *)System_String__Format_62982316((System_String_o *)StringLiteral_25425/*"{0} has been disposed. Do not call Render on disposed a RenderPipeline."*/, FileName, v22, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  caption = (System_String_o *)UnityEngine_Object__op_Inequality(0LL, (UnityEngine_Object_o *)gameObject, 0LL);
  if ( ((unsigned __int8)caption & 1) != 0 )
  {
    if ( !gameObject )
      goto LABEL_27;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    v9 = System_String__Concat_62979204(v9, (System_String_o *)StringLiteral_62/*"\nGameObject:"*/, name, 0LL);
  }
  v25 = System_String__Format_62982384((System_String_o *)StringLiteral_25386/*"{0:D8}{1:D1}7"*/, v10, (Il2CppObject *)v9, v23, 0LL);
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
      sub_1C13F80(caption, message);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  Fgo_Assertions_Assert_c *v12; // x0
  Fgo_Assertions_Assert_c *v13; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_4BB8E33 & 1) == 0 )
  {
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, force);
    sub_1C13D24(&UnityEngine_Debug_TypeInfo, v10);
    sub_1C13D24(&StringLiteral_25773/*"全ての通知"*/, v11);
    byte_4BB8E33 = 1;
  }
  if ( !force )
  {
    v12 = Fgo_Assertions_Assert_TypeInfo;
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
      v12 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( v12->static_fields->onFailedAction )
    {
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_25773/*"全ての通知"*/, 0LL);
    }
  }
  v13 = Fgo_Assertions_Assert_TypeInfo;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v13 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v13->static_fields;
  static_fields->onFailedAction = action;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&static_fields->onFailedAction,
    (int64_t)action,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__SetOnFailedSendReport(
        System_Action_string__string__string__o *action,
        bool force,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  Fgo_Assertions_Assert_c *v12; // x0
  Fgo_Assertions_Assert_c *v13; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_4BB8E34 & 1) == 0 )
  {
    sub_1C13D24(&Fgo_Assertions_Assert_TypeInfo, force);
    sub_1C13D24(&UnityEngine_Debug_TypeInfo, v10);
    sub_1C13D24(&StringLiteral_25773/*"全ての通知"*/, v11);
    byte_4BB8E34 = 1;
  }
  if ( !force )
  {
    v12 = Fgo_Assertions_Assert_TypeInfo;
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
      v12 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( v12->static_fields->onFailedSendReport )
    {
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_25773/*"全ての通知"*/, 0LL);
    }
  }
  v13 = Fgo_Assertions_Assert_TypeInfo;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v13 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v13->static_fields;
  static_fields->onFailedSendReport = action;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&static_fields->onFailedSendReport,
    (int64_t)action,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall Fgo_Assertions_Assert_StringFormatParam___ctor(
        Fgo_Assertions_Assert_StringFormatParam_o *this,
        System_String_o *aFormat,
        System_Object_array *aArgs,
        const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.format = aFormat;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)aFormat, v7, v8, v9, v10, v11, v12);
  this->fields.args = aArgs;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.args, (int64_t)aArgs, v13, v14, v15, v16, v17, v18);
}


void __fastcall Fgo_Assertions_AssertQueue___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_Queue_T__o *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BB8E4C & 1) == 0 )
  {
    sub_1C13D24(&Fgo_Assertions_AssertQueue_TypeInfo, v1);
    sub_1C13D24(&Method_System_Collections_Generic_Queue_string___ctor__, v2);
    sub_1C13D24(&System_Collections_Generic_Queue_string__TypeInfo, v3);
    byte_4BB8E4C = 1;
  }
  v4 = (System_Collections_Generic_Queue_T__o *)sub_1C13F70(System_Collections_Generic_Queue_string__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v4,
    (const MethodInfo_379E8F0 *)Method_System_Collections_Generic_Queue_string___ctor__);
  Fgo_Assertions_AssertQueue_TypeInfo->static_fields->queue = (struct System_Collections_Generic_Queue_string__o *)v4;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)Fgo_Assertions_AssertQueue_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  static_fields = (PartyOrganizationUtility_o *)Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
  static_fields->fields.restrictionDialogHistoryList = 0LL;
  static_fields = (PartyOrganizationUtility_o *)((char *)static_fields + 16);
  static_fields[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  sub_1C13CC8(static_fields, 0LL, v12, v13, v14, v15, v16, v17);
}


void __fastcall Fgo_Assertions_AssertQueue__Clear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Fgo_Assertions_AssertQueue_c *v3; // x0
  System_Collections_Generic_Queue_T__o *queue; // x0

  if ( (byte_4BB8E4B & 1) == 0 )
  {
    sub_1C13D24(&Fgo_Assertions_AssertQueue_TypeInfo, v1);
    sub_1C13D24(&Method_System_Collections_Generic_Queue_string__Clear__, v2);
    byte_4BB8E4B = 1;
  }
  v3 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v3 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  queue = (System_Collections_Generic_Queue_T__o *)v3->static_fields->queue;
  if ( !queue )
    sub_1C13F80(0LL, v1);
  System_Collections_Generic_Queue_object___Clear(
    queue,
    (const MethodInfo_379EB78 *)Method_System_Collections_Generic_Queue_string__Clear__);
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

  if ( (byte_4BB8E4A & 1) == 0 )
  {
    sub_1C13D24(&Fgo_Assertions_AssertQueue_TypeInfo, v1);
    sub_1C13D24(&Method_System_Collections_Generic_Queue_string__Dequeue__, v2);
    sub_1C13D24(&Method_System_Collections_Generic_Queue_string__get_Count__, v3);
    byte_4BB8E4A = 1;
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
               (const MethodInfo_379F048 *)Method_System_Collections_Generic_Queue_string__Dequeue__);
        Fgo_Assertions_AssertQueue__OnFailed((System_String_o *)v7, v8);
        return;
      }
LABEL_12:
      sub_1C13F80(queue, v1);
    }
  }
  syncRoot->isReady = 1;
}


void __fastcall Fgo_Assertions_AssertQueue__Enqueue(System_String_o *message, const MethodInfo *method)
{
  __int64 v3; // x1
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x8
  _BOOL4 isReady; // w21

  if ( (byte_4BB8E49 & 1) == 0 )
  {
    sub_1C13D24(&Fgo_Assertions_AssertQueue_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_Queue_string__Enqueue__, v3);
    byte_4BB8E49 = 1;
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
    sub_1C13F80(0LL, method);
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)static_fields->queue,
    (Il2CppObject *)message,
    (const MethodInfo_379EEB8 *)Method_System_Collections_Generic_Queue_string__Enqueue__);
}


void __fastcall Fgo_Assertions_AssertQueue__OnFailed(System_String_o *message, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Fgo_Assertions_AssertQueue_c *v5; // x0
  struct System_Action_string__o *onFailedAction; // x8
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BB8E47 & 1) == 0 )
  {
    sub_1C13D24(&Fgo_Assertions_AssertQueue_TypeInfo, method);
    sub_1C13D24(&UnityEngine_Debug_TypeInfo, v3);
    sub_1C13D24(&StringLiteral_25791/*"所持"*/, v4);
    byte_4BB8E47 = 1;
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
        sub_1C13F80(v7, v8);
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
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_25791/*"所持"*/, 0LL);
  }
}


void __fastcall Fgo_Assertions_AssertQueue__SetOnFailedAction(
        System_Action_string__o *action,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  Fgo_Assertions_AssertQueue_c *v9; // x0
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x0

  if ( (byte_4BB8E48 & 1) == 0 )
  {
    sub_1C13D24(&Fgo_Assertions_AssertQueue_TypeInfo, method);
    byte_4BB8E48 = 1;
  }
  v9 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v9 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->onFailedAction = action;
  sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->onFailedAction, (int64_t)action, v2, v3, v4, v5, v6, v7);
}