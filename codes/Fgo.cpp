void __fastcall Fgo_Assertions_Assert___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0
  struct Fgo_Assertions_Assert_StaticFields *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_HashSet_T__o *v15; // x19
  struct Fgo_Assertions_Assert_StaticFields *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_Dictionary_object__object__o *v23; // x19
  struct Fgo_Assertions_Assert_StaticFields *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4BE0CFF & 1) == 0 )
  {
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo____ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_Type__List_FieldInfo___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey___ctor__);
    sub_1C21E38(&System_Collections_Generic_HashSet_Assert_SuppressAssertKey__TypeInfo);
    byte_4BE0CFF = 1;
  }
  static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
  static_fields->enable = 1;
  static_fields->onFailedAction = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->onFailedAction, 0LL, v1, v2, v3, v4, v5, v6);
  v8 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v8->onFailedSendReport = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v8->onFailedSendReport, 0LL, v9, v10, v11, v12, v13, v14);
  v15 = (System_Collections_Generic_HashSet_T__o *)sub_1C22084(System_Collections_Generic_HashSet_Assert_SuppressAssertKey__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v15,
    (const MethodInfo_3504904 *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey___ctor__);
  v16 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v16->suppressAsserts = (struct System_Collections_Generic_HashSet_Assert_SuppressAssertKey__o *)v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->suppressAsserts, (int64_t)v15, v17, v18, v19, v20, v21, v22);
  v23 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_Type__List_FieldInfo___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v23,
    (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo____ctor__);
  v24 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v24->cachedFieldInfo = (struct System_Collections_Generic_Dictionary_Type__List_FieldInfo___o *)v23;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v24->cachedFieldInfo, (int64_t)v23, v25, v26, v27, v28, v29, v30);
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

  if ( (byte_4BE0CEE & 1) == 0 )
  {
    sub_1C21E38(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    byte_4BE0CEE = 1;
  }
  if ( !byte_4BD6BB5 )
  {
    sub_1C21E38(&UnityEngine_Mathf_TypeInfo);
    byte_4BD6BB5 = 1;
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
      (const MethodInfo_2F8FDC0 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
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
  if ( (byte_4BE0CEF & 1) == 0 )
  {
    sub_1C21E38(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    byte_4BE0CEF = 1;
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
      (const MethodInfo_2F8F824 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_47723096(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4BE0CF0 & 1) == 0 )
  {
    sub_1C21E38(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    byte_4BE0CF0 = 1;
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
      (const MethodInfo_2F8F9F0 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_47723256(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4BE0CF1 & 1) == 0 )
  {
    sub_1C21E38(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE0CF1 = 1;
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
          (const MethodInfo_2F8FBC4 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
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
        const MethodInfo_2F8E88C *method)
{
  long double v7; // q0
  void **monitor; // x21
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x26
  _QWORD *v11; // x19
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
  long double v64; // q0
  _QWORD *v65; // x9
  __int64 v66; // x26
  __int64 v67; // x8
  int v68; // w0
  __int64 v69; // x1
  int v70; // w10
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v71; // x3
  _QWORD *v72; // x25
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v73; // x1
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
  v11 = filePath[2].monitor;
  v85 = actual.klass;
  if ( !v11 )
  {
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    v11 = filePath[2].monitor;
    if ( !v11 )
    {
      sub_1C73D70(filePath);
      v11 = filePath[2].monitor;
    }
  }
  v12 = *v11;
  v13 = *(unsigned int *)(*v11 + 252LL);
  if ( (*(_BYTE *)(*v11 + 309LL) & 1) != 0 )
  {
    v15 = *(_DWORD *)(*v11 + 252LL);
  }
  else
  {
    v14 = sub_1C73D14(v7);
    v11 = filePath[2].monitor;
    v15 = *(_DWORD *)(v14 + 252);
    v12 = *v11;
  }
  v16 = (char *)&v84 - (((unsigned int)(v15 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v17 = (__int64 *)((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL));
  v18 = v17;
  if ( *(int *)(v12 + 40) >= 0 )
    v19 = &v88;
  else
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy(&v84, v19, v13);
  v23 = j_il2cpp_value_box_0(*v11, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v20, v21, v22);
  v24 = filePath[2].monitor;
  v25 = v23;
  if ( *(int *)(*v24 + 40LL) >= 0 )
    v26 = &v87;
  else
    v26 = monitor;
  memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v26, v13);
  if ( v25 != j_il2cpp_value_box_0(*v24, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v27, v28, v29) )
  {
    v30 = filePath[2].monitor;
    v31 = *(int *)(*v30 + 40LL) >= 0 ? (__int64 *)&v88 : (__int64 *)klass;
    if ( (memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v31, v13),
          (v35 = j_il2cpp_value_box_0(*v30, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v32, v33, v34)) == 0)
      || (v36 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v35 + 304LL) < (unsigned int)v36)
      || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v35 + 200LL) + 8 * v36 - 8) != UnityEngine_Object_TypeInfo
      || ((v37 = filePath[2].monitor, *(int *)(*v37 + 40LL) >= 0) ? (v38 = &v87) : (v38 = monitor),
          memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v38, v13),
          (sub_1C22048(*v37, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
    {
      v39 = filePath[2].monitor;
      v40 = (__int64 *)(*(int *)(*v39 + 40LL) >= 0 ? &v87 : monitor);
      if ( (memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v40, v13),
            (v44 = j_il2cpp_value_box_0(*v39, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v41, v42, v43)) == 0)
        || (v45 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)v44 + 304LL) < (unsigned int)v45)
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v44 + 200LL) + 8 * v45 - 8) != UnityEngine_Object_TypeInfo
        || ((v46 = filePath[2].monitor, *(int *)(*v46 + 40LL) >= 0)
          ? (v47 = &v88)
          : (v47 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v88),
            memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v47, v13),
            (sub_1C22048(*v46, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
      {
        v48 = filePath[2].monitor;
        v49 = *(int *)(*v48 + 40LL) >= 0 ? (__int64 *)&v88 : (__int64 *)v88;
        memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v49, v13);
        v53 = j_il2cpp_value_box_0(*v48, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v50, v51, v52);
        if ( !v53 )
          goto LABEL_40;
        methodPtr_low = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)v53 + 304LL) < (unsigned int)methodPtr_low
          || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v53 + 200LL) + 8 * methodPtr_low - 8) != UnityEngine_Object_TypeInfo )
        {
          goto LABEL_40;
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
LABEL_40:
          v55 = filePath[2].monitor;
          v56 = v88;
          if ( *(int *)(*v55 + 40LL) >= 0 )
            v57 = &v88;
          else
            v57 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v88;
          memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v57, v13);
          if ( (sub_1C22048(*v55, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
          {
            v58 = filePath[2].monitor;
            if ( *(int *)(*v58 + 40LL) >= 0 )
              v59 = &v87;
            else
              v59 = monitor;
            memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v59, v13);
            v63 = j_il2cpp_value_box_0(*v58, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v60, v61, v62);
            v65 = filePath[2].monitor;
            v66 = v63;
            v67 = *v65;
            if ( (*(_BYTE *)(*v65 + 309LL) & 1) == 0 )
            {
              v68 = sub_1C73D14(v64);
              v65 = filePath[2].monitor;
              v56 = v88;
              LODWORD(v67) = v68;
            }
            v69 = v65[1];
            v70 = *(_DWORD *)(*v65 + 40LL);
            v89[0] = v66;
            if ( v70 >= 0 )
              v71 = &v88;
            else
              v71 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v56;
            sub_1C228A0(v67, v69, (int)v16, v71);
            if ( v90[0] )
              return;
            v56 = v88;
          }
          v72 = filePath[2].monitor;
          if ( *(int *)(*v72 + 40LL) >= 0 )
            v73 = &v88;
          else
            v73 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v56;
          memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v73, v13);
          if ( *(int *)(*v72 + 40LL) >= 0 )
            v74 = &v87;
          else
            v74 = monitor;
          memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v74, v13);
          if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
            v72 = filePath[2].monitor;
          }
          v75 = (__int64 *)v72[2];
          v76 = *v75;
          if ( (*(_DWORD *)(*v72 + 40LL) & 0x80000000) == 0 )
          {
            v17 = (_QWORD *)*v17;
            v18 = (_QWORD *)*v18;
          }
          v89[0] = (__int64)v17;
          v89[1] = (__int64)v18;
          v91 = 1;
          v89[2] = (__int64)&v91;
          v89[3] = (__int64)v85;
          ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, char *))v75[2])(v76, v75, 0LL, v89, v90);
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

  if ( (byte_4BE0CF2 & 1) == 0 )
  {
    sub_1C21E38(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    byte_4BE0CF2 = 1;
  }
  if ( !byte_4BD6BB5 )
  {
    sub_1C21E38(&UnityEngine_Mathf_TypeInfo);
    byte_4BD6BB5 = 1;
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
      (const MethodInfo_2F8FDC0 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
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
  if ( (byte_4BE0CF3 & 1) == 0 )
  {
    sub_1C21E38(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    byte_4BE0CF3 = 1;
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
      (const MethodInfo_2F8F824 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_47723964(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4BE0CF4 & 1) == 0 )
  {
    sub_1C21E38(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    byte_4BE0CF4 = 1;
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
      (const MethodInfo_2F8F9F0 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_47724124(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4BE0CF5 & 1) == 0 )
  {
    sub_1C21E38(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE0CF5 = 1;
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
      (const MethodInfo_2F8FBC4 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o expected,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2F8ED64 *method)
{
  long double v7; // q0
  void **monitor; // x23
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x26
  _QWORD *v11; // x27
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
  long double v66; // q0
  _QWORD *v67; // x9
  __int64 v68; // x26
  __int64 v69; // x8
  int v70; // w0
  __int64 v71; // x1
  __int64 *v72; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v73; // x1
  void **v74; // x1
  Fgo_Assertions_Assert_c *v75; // x0
  void **v76; // x1
  __int64 *v77; // x1
  __int64 v78; // x0
  _QWORD *v79; // x19
  __int64 *v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  __int64 v84; // x0
  __int64 v85; // x10
  __int64 v86; // [xsp+0h] [xbp-60h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v87; // [xsp+8h] [xbp-58h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-50h]
  void *v89; // [xsp+18h] [xbp-48h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v90; // [xsp+20h] [xbp-40h] BYREF
  __int64 v91[4]; // [xsp+28h] [xbp-38h] BYREF
  char v92[12]; // [xsp+48h] [xbp-18h] BYREF
  char v93; // [xsp+54h] [xbp-Ch] BYREF
  __int64 v94; // [xsp+58h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  monitor = (void **)expected.monitor;
  klass = expected.klass;
  v94 = *(_QWORD *)(StatusReg + 40);
  v89 = expected.monitor;
  v90 = expected.klass;
  v11 = filePath[2].monitor;
  v87 = actual.klass;
  if ( !v11 )
  {
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    v11 = filePath[2].monitor;
    if ( !v11 )
    {
      sub_1C73D70(filePath);
      v11 = filePath[2].monitor;
    }
  }
  v12 = *v11;
  v13 = *(_DWORD *)(*v11 + 252LL);
  v14 = v13;
  if ( (*(_BYTE *)(*v11 + 309LL) & 1) == 0 )
  {
    v15 = sub_1C73D14(v7);
    v11 = filePath[2].monitor;
    v13 = *(_DWORD *)(v15 + 252);
    v12 = *v11;
  }
  v86 = (__int64)&v86 - ((v13 + 16 + 15LL) & 0x1FFFFFFF0LL);
  v16 = (__int64 *)((char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL));
  v17 = v16;
  if ( *(int *)(v12 + 40) >= 0 )
    v18 = &v90;
  else
    v18 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy(&v86, v18, v14);
  v22 = j_il2cpp_value_box_0(*v11, (char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v19, v20, v21);
  v23 = filePath[2].monitor;
  v24 = v22;
  if ( *(int *)(*v23 + 40LL) >= 0 )
    v25 = &v89;
  else
    v25 = monitor;
  memcpy((char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v25, v14);
  v29 = j_il2cpp_value_box_0(*v23, (char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v26, v27, v28);
  v30 = filePath[2].monitor;
  v31 = v29;
  if ( *(int *)(*v30 + 40LL) >= 0 )
    v32 = &v90;
  else
    v32 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v32, v14);
  v36 = *v30;
  if ( v24 == v31 )
  {
    if ( *(int *)(v36 + 40) >= 0 )
      v76 = &v89;
    else
      v76 = monitor;
    memcpy((char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v76, v14);
    v75 = Fgo_Assertions_Assert_TypeInfo;
    if ( Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      goto LABEL_65;
LABEL_64:
    j_il2cpp_runtime_class_init_0(v75);
    v30 = filePath[2].monitor;
LABEL_65:
    v77 = (__int64 *)v30[1];
    v78 = *v77;
    if ( (*(_DWORD *)(*v30 + 40LL) & 0x80000000) == 0 )
    {
      v16 = (_QWORD *)*v16;
      v17 = (_QWORD *)*v17;
    }
    v91[2] = (__int64)&v93;
    v93 = 0;
    v91[0] = (__int64)v16;
    v91[1] = (__int64)v17;
    v91[3] = (__int64)v87;
    ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, char *))v77[2])(v78, v77, 0LL, v91, v92);
    return;
  }
  v37 = j_il2cpp_value_box_0(v36, (char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v33, v34, v35);
  if ( !v37
    || (v38 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*(_QWORD *)v37 + 304LL) < (unsigned int)v38)
    || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v37 + 200LL) + 8 * v38 - 8) != UnityEngine_Object_TypeInfo
    || ((v39 = filePath[2].monitor, *(int *)(*v39 + 40LL) >= 0) ? (v40 = &v89) : (v40 = monitor),
        memcpy((char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v40, v14),
        (sub_1C22048(*v39, (char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
  {
    v41 = filePath[2].monitor;
    v42 = (__int64 *)(*(int *)(*v41 + 40LL) >= 0 ? &v89 : monitor);
    if ( (memcpy((char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v42, v14),
          (v46 = j_il2cpp_value_box_0(*v41, (char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v43, v44, v45)) == 0)
      || (v47 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v46 + 304LL) < (unsigned int)v47)
      || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v46 + 200LL) + 8 * v47 - 8) != UnityEngine_Object_TypeInfo
      || ((v48 = filePath[2].monitor, *(int *)(*v48 + 40LL) >= 0)
        ? (v49 = &v90)
        : (v49 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v90),
          memcpy((char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v49, v14),
          (sub_1C22048(*v48, (char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
    {
      v50 = filePath[2].monitor;
      v51 = *(int *)(*v50 + 40LL) >= 0 ? (__int64 *)&v90 : (__int64 *)v90;
      memcpy((char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v51, v14);
      v55 = j_il2cpp_value_box_0(*v50, (char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v52, v53, v54);
      if ( !v55 )
        goto LABEL_39;
      methodPtr_low = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v55 + 304LL) < (unsigned int)methodPtr_low
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v55 + 200LL) + 8 * methodPtr_low - 8) != UnityEngine_Object_TypeInfo )
      {
        goto LABEL_39;
      }
      v79 = filePath[2].monitor;
      v80 = (__int64 *)(*(int *)(*v79 + 40LL) >= 0 ? &v89 : monitor);
      memcpy((char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v80, v14);
      v84 = j_il2cpp_value_box_0(*v79, (char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v81, v82, v83);
      if ( !v84
        || (v85 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)v84 + 304LL) < (unsigned int)v85)
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v84 + 200LL) + 8 * v85 - 8) != UnityEngine_Object_TypeInfo )
      {
LABEL_39:
        v57 = filePath[2].monitor;
        v58 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v90;
        v59 = *(int *)(*v57 + 40LL) >= 0 ? (__int64 *)&v90 : (__int64 *)v90;
        memcpy((char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v59, v14);
        if ( (sub_1C22048(*v57, (char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
        {
          v60 = filePath[2].monitor;
          if ( *(int *)(*v60 + 40LL) >= 0 )
            v61 = &v89;
          else
            v61 = monitor;
          memcpy((char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v61, v14);
          v65 = j_il2cpp_value_box_0(*v60, (char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v62, v63, v64);
          v67 = filePath[2].monitor;
          v68 = v65;
          v69 = *v67;
          if ( (*(_BYTE *)(*v67 + 309LL) & 1) == 0 )
          {
            v70 = sub_1C73D14(v66);
            v67 = filePath[2].monitor;
            v58 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v90;
            LODWORD(v69) = v70;
          }
          v71 = v67[2];
          v72 = (__int64 *)(*(int *)(*v67 + 40LL) >= 0 ? &v90 : v58);
          v91[0] = v68;
          sub_1C228A0(v69, v71, v86, v72);
          if ( v92[0] )
          {
            v30 = filePath[2].monitor;
            if ( *(int *)(*v30 + 40LL) >= 0 )
              v73 = &v90;
            else
              v73 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v90;
            memcpy((char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v73, v14);
            if ( *(int *)(*v30 + 40LL) >= 0 )
              v74 = &v89;
            else
              v74 = monitor;
            memcpy((char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v74, v14);
            v75 = Fgo_Assertions_Assert_TypeInfo;
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

  if ( (byte_4BE0CFC & 1) == 0 )
  {
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&char_TypeInfo);
    sub_1C21E38(&StringLiteral_25828/*"書式指定項目が不正です"*/);
    sub_1C21E38(&StringLiteral_25770/*"パラメータ"*/);
    sub_1C21E38(&StringLiteral_25817/*"文字列"*/);
    sub_1C21E38(&StringLiteral_25811/*"引数"*/);
    sub_1C21E38(&StringLiteral_25812/*"引数を超えたのインデックスを指しています"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BE0CFC = 1;
  }
  v28[0] = 0;
  result = 0;
  v27 = 0;
  if ( !parameter )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v24 = &StringLiteral_25770/*"パラメータ"*/;
    goto LABEL_59;
  }
  format = parameter->fields.format;
  if ( !format )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v24 = &StringLiteral_25817/*"文字列"*/;
    goto LABEL_59;
  }
  args = parameter->fields.args;
  if ( !args || args->max_length == 1 && !args->m_Items[0] )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v24 = &StringLiteral_25811/*"引数"*/;
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
          sub_1C22094(v19, v20);
        if ( v27 >= (signed int)v21->max_length )
        {
          if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
          v25 = &StringLiteral_25812/*"引数を超えたのインデックスを指しています"*/;
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
      v15 = System_String__Concat_63115476(v15, v22, 0LL);
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
        v15 = System_String__Concat_63115476(v15, v23, 0LL);
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
  v25 = &StringLiteral_25828/*"書式指定項目が不正です"*/;
LABEL_69:
  Fgo_Assertions_Assert__GetEffectiveAssertMessage((System_String_o *)*v25, message, (const MethodInfo *)gameObject);
}


void __fastcall Fgo_Assertions_Assert__CanParse___Il2CppFullySharedGenericType_(
        System_String_o *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2F8F284 *method)
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
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&bool_var);
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&qword_49C4F18);
    sub_1C21E38(&double_var);
    sub_1C21E38(&short_var);
    sub_1C21E38(&int_var);
    sub_1C21E38(&long_var);
    sub_1C21E38(&sbyte_var);
    sub_1C21E38(&float_var);
    sub_1C21E38(&System_Type_TypeInfo);
    sub_1C21E38(&ushort_var);
    sub_1C21E38(&uint_var);
    sub_1C21E38(&ulong_var);
    sub_1C21E38(&StringLiteral_25799/*"型が不正です:{0}"*/);
    sub_1C21E38(&StringLiteral_25817/*"文字列"*/);
    sub_1C21E38(&StringLiteral_297/*" isNotBoolean"*/);
    if ( !method->rgctx_data )
      sub_1C73D70(method);
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
        v12 = System_String__Concat_63115476(value, (System_String_o *)StringLiteral_297/*" isNotBoolean"*/, 0LL);
LABEL_12:
        v13 = v12;
        if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
        Fgo_Assertions_Assert__GetEffectiveAssertMessage(v13, message, 0LL);
      }
    }
    else
    {
      v14 = (int)qword_49C4F18;
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
                          v12 = System_String__Format((System_String_o *)StringLiteral_25799/*"型が不正です:{0}"*/, TypeFromHandle, 0LL);
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
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25817/*"文字列"*/, message, 0LL);
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
        const MethodInfo_2F8FF8C *method)
{
  long double v5; // q0
  __int64 v6; // x21
  void **v7; // x22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  __int64 *v9; // x19
  char v10; // w20
  __int64 v11; // x8
  __int16 v12; // w9
  __int64 v13; // x24
  __int64 v14; // x0
  int v15; // w10
  char *v16; // x26
  __int64 v17; // x0
  char *v18; // x25
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v19; // x1
  long double v20; // q0
  _QWORD *v21; // x8
  __int64 v22; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v23; // x3
  int64_t v24; // x23
  _QWORD *v25; // x26
  void **v26; // x1
  long double v27; // q0
  _QWORD *v28; // x8
  __int64 v29; // x0
  void **v30; // x3
  int64_t v31; // x21
  __int64 v32; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x22
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  void *v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t *v54; // x8
  int64_t v55; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  void *v62; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  System_String_o *v69; // x20
  __int64 v71; // [xsp+0h] [xbp-30h] BYREF
  System_String_o *monitor; // [xsp+8h] [xbp-28h]
  void **v73; // [xsp+10h] [xbp-20h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v74; // [xsp+18h] [xbp-18h] BYREF
  int64_t v75; // [xsp+20h] [xbp-10h]
  __int64 v76; // [xsp+28h] [xbp-8h]

  monitor = (System_String_o *)actual.monitor;
  v6 = equal;
  v7 = (void **)expected.monitor;
  klass = expected.klass;
  v76 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v73 = (void **)expected.monitor;
  v74 = expected.klass;
  v9 = *(__int64 **)(equal + 56LL);
  v10 = (char)actual.klass;
  if ( !v9 )
  {
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_117/*" "*/);
    sub_1C21E38(&StringLiteral_22581/*"null"*/);
    sub_1C21E38(&StringLiteral_19641/*"expectedEqual"*/);
    sub_1C21E38(&StringLiteral_19642/*"expectedNotEqual"*/);
    v9 = *(__int64 **)(v6 + 56);
    if ( !v9 )
    {
      sub_1C73D70(v6);
      v9 = *(__int64 **)(v6 + 56);
    }
  }
  v11 = *v9;
  v12 = *(_WORD *)(*v9 + 309);
  v13 = *(unsigned int *)(*v9 + 252);
  if ( (v12 & 1) != 0 )
  {
    v15 = *(_DWORD *)(*v9 + 252);
  }
  else
  {
    v14 = sub_1C73D14(v5);
    v9 = *(__int64 **)(v6 + 56);
    v15 = *(_DWORD *)(v14 + 252);
    v11 = *v9;
    v12 = *(_WORD *)(*v9 + 309);
  }
  v16 = (char *)&v71 - (((unsigned int)(v15 + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( (v12 & 1) != 0 )
  {
    v17 = v11;
  }
  else
  {
    v17 = sub_1C73D14(v5);
    v9 = *(__int64 **)(v6 + 56);
    v11 = *v9;
  }
  v18 = (char *)&v71 - (((unsigned int)(*(_DWORD *)(v17 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( *(int *)(v11 + 40) >= 0 )
    v19 = &v74;
  else
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v71 - ((v13 + 15) & 0x1FFFFFFF0LL), v19, v13);
  if ( (sub_1C22048(*v9, (char *)&v71 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
  {
    v21 = *(_QWORD **)(v6 + 56);
    v22 = *v21;
    if ( (*(_BYTE *)(*v21 + 309LL) & 1) == 0 )
    {
      LODWORD(v22) = sub_1C73D14(v20);
      v21 = *(_QWORD **)(v6 + 56);
      klass = v74;
    }
    if ( *(int *)(*v21 + 40LL) >= 0 )
      v23 = &v74;
    else
      v23 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    sub_1C228A0(v22, v21[1], (int)v16, v23);
    v24 = v75;
    v7 = v73;
  }
  else
  {
    v24 = StringLiteral_22581/*"null"*/;
  }
  v25 = *(_QWORD **)(v6 + 56);
  if ( *(int *)(*v25 + 40LL) >= 0 )
    v26 = (void **)&v73;
  else
    v26 = v7;
  memcpy((char *)&v71 - ((v13 + 15) & 0x1FFFFFFF0LL), v26, v13);
  if ( (sub_1C22048(*v25, (char *)&v71 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
  {
    v28 = *(_QWORD **)(v6 + 56);
    v29 = *v28;
    if ( (*(_BYTE *)(*v28 + 309LL) & 1) == 0 )
    {
      LODWORD(v29) = sub_1C73D14(v27);
      v28 = *(_QWORD **)(v6 + 56);
      v7 = v73;
    }
    if ( *(int *)(*v28 + 40LL) >= 0 )
      v30 = (void **)&v73;
    else
      v30 = v7;
    sub_1C228A0(v29, v28[1], (int)v18, v30);
    v31 = v75;
  }
  else
  {
    v31 = StringLiteral_22581/*"null"*/;
  }
  v32 = sub_1C21EE0(string___TypeInfo, 5LL);
  if ( !v32 )
    sub_1C22094(0LL, v33);
  v40 = v32;
  if ( !*(_DWORD *)(v32 + 24) )
    goto LABEL_43;
  *(_QWORD *)(v32 + 32) = v24;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v32 + 32), v24, v34, v35, v36, v37, v38, v39);
  if ( *(_DWORD *)(v40 + 24) <= 1u )
    goto LABEL_43;
  v47 = StringLiteral_117/*" "*/;
  *(_QWORD *)(v40 + 40) = StringLiteral_117/*" "*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v40 + 40), (int64_t)v47, v41, v42, v43, v44, v45, v46);
  v54 = (int64_t *)&StringLiteral_19642/*"expectedNotEqual"*/;
  if ( (v10 & 1) == 0 )
    v54 = (int64_t *)&StringLiteral_19641/*"expectedEqual"*/;
  if ( *(_DWORD *)(v40 + 24) <= 2u
    || (v55 = *v54,
        *(_QWORD *)(v40 + 48) = *v54,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v40 + 48), v55, v48, v49, v50, v51, v52, v53),
        *(_DWORD *)(v40 + 24) <= 3u)
    || (v62 = StringLiteral_117/*" "*/,
        *(_QWORD *)(v40 + 56) = StringLiteral_117/*" "*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v40 + 56), (int64_t)v62, v56, v57, v58, v59, v60, v61),
        *(_DWORD *)(v40 + 24) <= 4u) )
  {
LABEL_43:
    sub_1C2209C(v32, v33);
  }
  *(_QWORD *)(v40 + 64) = v31;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v40 + 64), v31, v63, v64, v65, v66, v67, v68);
  v69 = System_String__Concat_63129004((System_String_array *)v40, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v69, monitor, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_float_(
        float expected,
        float actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2F8FDC0 *method)
{
  System_String_o *v8; // x23
  float v9; // s0
  System_String_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  void *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t *v33; // x8
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  void *v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_String_o *v48; // x20
  float v50; // [xsp+8h] [xbp-38h] BYREF
  float v51; // [xsp+Ch] [xbp-34h] BYREF

  v50 = actual;
  v51 = expected;
  if ( !method->rgctx_data )
  {
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_117/*" "*/);
    sub_1C21E38(&StringLiteral_19641/*"expectedEqual"*/);
    sub_1C21E38(&StringLiteral_19642/*"expectedNotEqual"*/);
    if ( !method->rgctx_data )
      sub_1C73D70(method);
  }
  v8 = System_Single__ToString(expected, (const MethodInfo *)&v51);
  v10 = System_Single__ToString(v9, (const MethodInfo *)&v50);
  v11 = sub_1C21EE0(string___TypeInfo, 5LL);
  if ( !v11 )
    sub_1C22094(0LL, v12);
  v19 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v11 + 32) = v8;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)v8, v13, v14, v15, v16, v17, v18);
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_15;
  v26 = StringLiteral_117/*" "*/;
  *(_QWORD *)(v19 + 40) = StringLiteral_117/*" "*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 40), (int64_t)v26, v20, v21, v22, v23, v24, v25);
  v33 = (int64_t *)&StringLiteral_19642/*"expectedNotEqual"*/;
  if ( !equal )
    v33 = (int64_t *)&StringLiteral_19641/*"expectedEqual"*/;
  if ( *(_DWORD *)(v19 + 24) <= 2u
    || (v34 = *v33,
        *(_QWORD *)(v19 + 48) = *v33,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 48), v34, v27, v28, v29, v30, v31, v32),
        *(_DWORD *)(v19 + 24) <= 3u)
    || (v41 = StringLiteral_117/*" "*/,
        *(_QWORD *)(v19 + 56) = StringLiteral_117/*" "*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 56), (int64_t)v41, v35, v36, v37, v38, v39, v40),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_15:
    sub_1C2209C(v11, v12);
  }
  *(_QWORD *)(v19 + 64) = v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 64), (int64_t)v10, v42, v43, v44, v45, v46, v47);
  v48 = System_String__Concat_63129004((System_String_array *)v19, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v48, message, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_int_(
        int32_t expected,
        int32_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2F8F824 *method)
{
  const MethodInfo_2F8F824_RGCTXs *rgctx_data; // x8
  System_String_o *v9; // x23
  System_String_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  void *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t *v33; // x8
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  void *v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_String_o *v48; // x20
  int32_t v50; // [xsp+8h] [xbp-38h] BYREF
  int32_t v51; // [xsp+Ch] [xbp-34h] BYREF

  v50 = actual;
  v51 = expected;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_117/*" "*/);
    sub_1C21E38(&StringLiteral_19641/*"expectedEqual"*/);
    sub_1C21E38(&StringLiteral_19642/*"expectedNotEqual"*/);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C73D70(method);
      rgctx_data = method->rgctx_data;
    }
  }
  v9 = System_Int32__ToString((int32_t)&v51, (const MethodInfo *)rgctx_data[1]._0_T);
  v10 = System_Int32__ToString((int32_t)&v50, (const MethodInfo *)method->rgctx_data[1]._0_T);
  v11 = sub_1C21EE0(string___TypeInfo, 5LL);
  if ( !v11 )
    sub_1C22094(0LL, v12);
  v19 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v11 + 32) = v9;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)v9, v13, v14, v15, v16, v17, v18);
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_15;
  v26 = StringLiteral_117/*" "*/;
  *(_QWORD *)(v19 + 40) = StringLiteral_117/*" "*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 40), (int64_t)v26, v20, v21, v22, v23, v24, v25);
  v33 = (int64_t *)&StringLiteral_19642/*"expectedNotEqual"*/;
  if ( !equal )
    v33 = (int64_t *)&StringLiteral_19641/*"expectedEqual"*/;
  if ( *(_DWORD *)(v19 + 24) <= 2u
    || (v34 = *v33,
        *(_QWORD *)(v19 + 48) = *v33,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 48), v34, v27, v28, v29, v30, v31, v32),
        *(_DWORD *)(v19 + 24) <= 3u)
    || (v41 = StringLiteral_117/*" "*/,
        *(_QWORD *)(v19 + 56) = StringLiteral_117/*" "*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 56), (int64_t)v41, v35, v36, v37, v38, v39, v40),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_15:
    sub_1C2209C(v11, v12);
  }
  *(_QWORD *)(v19 + 64) = v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 64), (int64_t)v10, v42, v43, v44, v45, v46, v47);
  v48 = System_String__Concat_63129004((System_String_array *)v19, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v48, message, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_long_(
        int64_t expected,
        int64_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2F8F9F0 *method)
{
  const MethodInfo_2F8F9F0_RGCTXs *rgctx_data; // x8
  System_String_o *v9; // x23
  System_String_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  void *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t *v33; // x8
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  void *v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_String_o *v48; // x20
  int64_t v50; // [xsp+8h] [xbp-48h] BYREF
  int64_t v51; // [xsp+18h] [xbp-38h] BYREF

  v51 = expected;
  v50 = actual;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_117/*" "*/);
    sub_1C21E38(&StringLiteral_19641/*"expectedEqual"*/);
    sub_1C21E38(&StringLiteral_19642/*"expectedNotEqual"*/);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C73D70(method);
      rgctx_data = method->rgctx_data;
    }
  }
  v9 = System_Int64__ToString((int64_t)&v51, (const MethodInfo *)rgctx_data[1]._0_T);
  v10 = System_Int64__ToString((int64_t)&v50, (const MethodInfo *)method->rgctx_data[1]._0_T);
  v11 = sub_1C21EE0(string___TypeInfo, 5LL);
  if ( !v11 )
    sub_1C22094(0LL, v12);
  v19 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v11 + 32) = v9;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)v9, v13, v14, v15, v16, v17, v18);
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_15;
  v26 = StringLiteral_117/*" "*/;
  *(_QWORD *)(v19 + 40) = StringLiteral_117/*" "*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 40), (int64_t)v26, v20, v21, v22, v23, v24, v25);
  v33 = (int64_t *)&StringLiteral_19642/*"expectedNotEqual"*/;
  if ( !equal )
    v33 = (int64_t *)&StringLiteral_19641/*"expectedEqual"*/;
  if ( *(_DWORD *)(v19 + 24) <= 2u
    || (v34 = *v33,
        *(_QWORD *)(v19 + 48) = *v33,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 48), v34, v27, v28, v29, v30, v31, v32),
        *(_DWORD *)(v19 + 24) <= 3u)
    || (v41 = StringLiteral_117/*" "*/,
        *(_QWORD *)(v19 + 56) = StringLiteral_117/*" "*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 56), (int64_t)v41, v35, v36, v37, v38, v39, v40),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_15:
    sub_1C2209C(v11, v12);
  }
  *(_QWORD *)(v19 + 64) = v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 64), (int64_t)v10, v42, v43, v44, v45, v46, v47);
  v48 = System_String__Concat_63129004((System_String_array *)v19, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v48, message, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_object_(
        Il2CppObject *expected,
        Il2CppObject *actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2F8FBC4 *method)
{
  int64_t v9; // x23
  int64_t v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  void *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t *v33; // x8
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  void *v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_String_o *v48; // x20

  if ( (byte_4BE21B5 & 1) == 0 )
  {
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_117/*" "*/);
    sub_1C21E38(&StringLiteral_22581/*"null"*/);
    sub_1C21E38(&StringLiteral_19641/*"expectedEqual"*/);
    sub_1C21E38(&StringLiteral_19642/*"expectedNotEqual"*/);
    byte_4BE21B5 = 1;
  }
  if ( expected )
    v9 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, bool, System_String_o *, const MethodInfo_2F8FBC4 *))expected->klass->vtable[3].method)(
           expected,
           expected->klass->vtable[4].methodPtr,
           equal,
           message,
           method);
  else
    v9 = StringLiteral_22581/*"null"*/;
  if ( actual )
    v10 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))actual->klass->vtable[3].method)(
            actual,
            actual->klass->vtable[4].methodPtr);
  else
    v10 = StringLiteral_22581/*"null"*/;
  v11 = sub_1C21EE0(string___TypeInfo, 5LL);
  if ( !v11 )
    sub_1C22094(0LL, v12);
  v19 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_21;
  *(_QWORD *)(v11 + 32) = v9;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 32), v9, v13, v14, v15, v16, v17, v18);
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_21;
  v26 = StringLiteral_117/*" "*/;
  *(_QWORD *)(v19 + 40) = StringLiteral_117/*" "*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 40), (int64_t)v26, v20, v21, v22, v23, v24, v25);
  v33 = (int64_t *)(equal ? &StringLiteral_19642/*"expectedNotEqual"*/ : &StringLiteral_19641/*"expectedEqual"*/);
  if ( *(_DWORD *)(v19 + 24) <= 2u
    || (v34 = *v33,
        *(_QWORD *)(v19 + 48) = *v33,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 48), v34, v27, v28, v29, v30, v31, v32),
        *(_DWORD *)(v19 + 24) <= 3u)
    || (v41 = StringLiteral_117/*" "*/,
        *(_QWORD *)(v19 + 56) = StringLiteral_117/*" "*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 56), (int64_t)v41, v35, v36, v37, v38, v39, v40),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_21:
    sub_1C2209C(v11, v12);
  }
  *(_QWORD *)(v19 + 64) = v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 64), v10, v42, v43, v44, v45, v46, v47);
  v48 = System_String__Concat_63129004((System_String_array *)v19, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v48, message, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetEffectiveAssertMessage(
        System_String_o *defaultMessage,
        System_String_o *message,
        const MethodInfo *method)
{
  if ( (byte_4BE0CED & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_57/*"\n("*/);
    sub_1C21E38(&StringLiteral_812/*")"*/);
    byte_4BE0CED = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    return defaultMessage;
  else
    return System_String__Concat_63128740(
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
  const MethodInfo *v5; // x2
  System_String_o *v6; // x20

  if ( (byte_4BE0CF9 & 1) == 0 )
  {
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&StringLiteral_25728/*"が null です"*/);
    byte_4BE0CF9 = 1;
  }
  v6 = System_String__Concat_63115476(modelName, (System_String_o *)StringLiteral_25728/*"が null です"*/, 0LL);
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

  if ( (byte_4BE0CFB & 1) == 0 )
  {
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&StringLiteral_298/*" isNotNumbers"*/);
    byte_4BE0CFB = 1;
  }
  v6 = System_String__Concat_63115476(value, (System_String_o *)StringLiteral_298/*" isNotNumbers"*/, 0LL);
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
        const MethodInfo_2F90320 *method)
{
  long double v7; // q0
  __int64 v8; // x21
  System_String_o *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x20
  __int64 v11; // x8
  __int64 v13; // x0
  __int64 v14; // x24
  int v15; // w8
  char *v16; // x23
  System_String_o *v17; // x25
  __int64 v18; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v19; // x1
  __int64 v20; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v21; // x1
  __int64 *v22; // x1
  __int64 v23; // x0
  long double v24; // q0
  __int64 v25; // x9
  __int64 v26; // x8
  __int64 v27; // x0
  __int64 *v28; // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v29; // x3
  System_String_o *v30; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v31; // [xsp+0h] [xbp-20h] BYREF
  System_String_o *v32; // [xsp+8h] [xbp-18h] BYREF
  char v33[4]; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v34; // [xsp+18h] [xbp-8h]

  v8 = *(_QWORD *)&line;
  monitor = (System_String_o *)key.monitor;
  klass = key.klass;
  v34 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v31 = key.klass;
  v11 = *(_QWORD *)(*(_QWORD *)&line + 56LL);
  if ( !v11 )
  {
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&StringLiteral_25760/*"ディクショナリ"*/);
    sub_1C21E38(&StringLiteral_830/*") の値がディクショナリに含まれていません"*/);
    sub_1C21E38(&StringLiteral_21360/*"key("*/);
    sub_1C21E38(&StringLiteral_25747/*"キー"*/);
    v11 = *(_QWORD *)(v8 + 56);
    if ( !v11 )
    {
      sub_1C73D70(v8);
      v11 = *(_QWORD *)(v8 + 56);
    }
  }
  v13 = *(_QWORD *)(v11 + 8);
  v14 = *(unsigned int *)(v13 + 252);
  v15 = *(_DWORD *)(v13 + 252);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v15 = *(_DWORD *)(sub_1C73D14(v7) + 252);
  v16 = (char *)&v31 - (((unsigned int)(v15 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v17 = (System_String_o *)((char *)&v31 - ((v14 + 15) & 0x1FFFFFFF0LL));
  if ( !dic )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v28 = &StringLiteral_25760/*"ディクショナリ"*/;
    goto LABEL_25;
  }
  v18 = *(_QWORD *)(v8 + 56);
  if ( *(int *)(*(_QWORD *)(v18 + 8) + 40LL) >= 0 )
    v19 = &v31;
  else
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v31 - ((v14 + 15) & 0x1FFFFFFF0LL), v19, v14);
  if ( (sub_1C22048(*(_QWORD *)(v18 + 8), (char *)&v31 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) == 0 )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v28 = &StringLiteral_25747/*"キー"*/;
LABEL_25:
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)*v28, monitor, 0LL);
    return;
  }
  v20 = *(_QWORD *)(v8 + 56);
  if ( *(int *)(*(_QWORD *)(v20 + 8) + 40LL) >= 0 )
    v21 = &v31;
  else
    v21 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v31 - ((v14 + 15) & 0x1FFFFFFF0LL), v21, v14);
  v22 = *(__int64 **)(v20 + 16);
  v23 = *v22;
  if ( (*(_DWORD *)(*(_QWORD *)(v20 + 8) + 40LL) & 0x80000000) == 0 )
    v17 = (System_String_o *)v17->klass;
  v32 = v17;
  ((void (__fastcall *)(__int64, __int64 *, System_Collections_Generic_Dictionary_T1__T2__o *, System_String_o **, char *))v22[2])(
    v23,
    v22,
    dic,
    &v32,
    v33);
  if ( !v33[0] )
  {
    v25 = *(_QWORD *)(v8 + 56);
    v26 = *(_QWORD *)(v25 + 8);
    if ( (*(_BYTE *)(v26 + 309) & 1) != 0 )
    {
      v27 = *(_QWORD *)(v25 + 8);
    }
    else
    {
      LODWORD(v27) = sub_1C73D14(v24);
      v25 = *(_QWORD *)(v8 + 56);
      klass = v31;
      v26 = *(_QWORD *)(v25 + 8);
    }
    if ( *(int *)(v26 + 40) >= 0 )
      v29 = &v31;
    else
      v29 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    sub_1C228A0(v27, *(_QWORD *)(v25 + 24), (int)v16, v29);
    v30 = System_String__Concat_63126736(
            (System_String_o *)StringLiteral_21360/*"key("*/,
            v32,
            (System_String_o *)StringLiteral_830/*") の値がディクショナリに含まれていません"*/,
            0LL);
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetEffectiveAssertMessage(v30, monitor, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__IsAllSerializeFieldsNotNull(
        UnityEngine_Component_o *component,
        bool checkInheritance,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Type_o *Type; // x0
  Fgo_Assertions_Assert_c *v6; // x8
  Il2CppObject *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x22
  System_Collections_Generic_List_object__o *v10; // x21
  __int64 v11; // x8
  unsigned __int64 v12; // x26
  System_Reflection_MemberInfo_o *v13; // x23
  intptr_t v14; // w24
  System_Type_o *TypeFromHandle; // x0
  intptr_t v16; // w24
  System_Type_o *v17; // x0
  intptr_t v18; // w24
  UnityEngine_Component_o *v19; // x24
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  intptr_t v26; // w24
  System_Type_o *v27; // x24
  intptr_t v28; // w24
  System_Type_o *v29; // x24
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  Fgo_Assertions_Assert_c *v34; // x0
  System_Collections_Generic_Dictionary_object__object__o *cachedFieldInfo; // x22
  Fgo_Assertions_Assert_c *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x20
  Fgo_Assertions_Assert___c_c *v40; // x8
  System_Func_T1__T2__TResult__o *_9__42_0; // x21
  Il2CppObject *v42; // x22
  struct Fgo_Assertions_Assert___c_StaticFields *static_fields; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v50; // x0
  __int64 v51; // x1
  System_Collections_Generic_IEnumerable_TResult__o *v52; // x20
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  __int64 v54; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v57; // x1
  __int64 v58; // x20
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  __int64 v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  __int64 v67; // x8
  __int64 v68; // x9
  int *v69; // x10
  __int64 v70; // x0
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+20h] [xbp-80h] BYREF
  System_RuntimeTypeHandle_o v73; // 0:w0.4
  System_RuntimeTypeHandle_o v74; // 0:w0.4
  System_RuntimeTypeHandle_o v75; // 0:w0.4
  System_RuntimeTypeHandle_o v76; // 0:w0.4
  System_RuntimeTypeHandle_o v77; // 0:w0.4

  v4 = (Il2CppObject *)component;
  if ( (byte_4BE0CFE & 1) == 0 )
  {
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___set_Item__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_Object____f__AnonymousType0_Object__int____);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_FieldInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_FieldInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_FieldInfo__get_Current__);
    sub_1C21E38(&System_Func_Object__int____f__AnonymousType0_Object__int___TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_Object__var);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_Object__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator___f__AnonymousType0_Object__int___TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_FieldInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FieldInfo__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FieldInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_FieldInfo__TypeInfo);
    sub_1C21E38(&Fgo_Assertions_Assert_NullableAttribute_var);
    sub_1C21E38(&UnityEngine_Object___var);
    sub_1C21E38(&UnityEngine_Object_var);
    sub_1C21E38(&UnityEngine_SerializeField_var);
    sub_1C21E38(&System_Type_TypeInfo);
    sub_1C21E38(&Method_Fgo_Assertions_Assert___c__IsAllSerializeFieldsNotNull_b__42_0__);
    component = (UnityEngine_Component_o *)sub_1C21E38(&Fgo_Assertions_Assert___c_TypeInfo);
    byte_4BE0CFE = 1;
  }
  memset(&v72, 0, sizeof(v72));
  if ( !v4 )
    goto LABEL_92;
  Type = System_Object__GetType(v4, 0LL);
  v6 = Fgo_Assertions_Assert_TypeInfo;
  v7 = (Il2CppObject *)Type;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v6 = Fgo_Assertions_Assert_TypeInfo;
  }
  component = (UnityEngine_Component_o *)v6->static_fields->cachedFieldInfo;
  if ( !component )
    goto LABEL_92;
  component = (UnityEngine_Component_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                           (System_Collections_Generic_Dictionary_object__object__o *)component,
                                           v7,
                                           (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___ContainsKey__);
  if ( ((unsigned __int8)component & 1) != 0 )
    goto LABEL_45;
  if ( !v7 )
    goto LABEL_92;
  v8 = checkInheritance ? 60LL : 62LL;
  v9 = ((__int64 (__fastcall *)(Il2CppObject *, __int64, Il2CppMethodPointer))v7->klass->vtable[89].method)(
         v7,
         v8,
         v7->klass->vtable[90].methodPtr);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_FieldInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_FieldInfo___ctor__);
  if ( !v9 )
    goto LABEL_92;
  v11 = *(_QWORD *)(v9 + 24);
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)v11 )
        sub_1C2209C(component, checkInheritance);
      v13 = *(System_Reflection_MemberInfo_o **)(v9 + 32 + 8 * v12);
      v14 = (int)UnityEngine_SerializeField_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v73.fields.value = v14;
      TypeFromHandle = System_Type__GetTypeFromHandle(v73, 0LL);
      component = (UnityEngine_Component_o *)System_Reflection_CustomAttributeExtensions__IsDefined(
                                               v13,
                                               TypeFromHandle,
                                               0LL);
      if ( ((unsigned __int8)component & 1) != 0 )
      {
        v16 = (int)Fgo_Assertions_Assert_NullableAttribute_var;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v74.fields.value = v16;
        v17 = System_Type__GetTypeFromHandle(v74, 0LL);
        component = (UnityEngine_Component_o *)System_Reflection_CustomAttributeExtensions__IsDefined(v13, v17, 0LL);
        if ( ((unsigned __int8)component & 1) == 0 )
        {
          v18 = (int)UnityEngine_Object_var;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v75.fields.value = v18;
          component = (UnityEngine_Component_o *)System_Type__GetTypeFromHandle(v75, 0LL);
          if ( !v13 )
            goto LABEL_92;
          v19 = component;
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, void *))v13->klass[1]._1.namespaze)(
                                                   v13,
                                                   v13->klass[1]._1.byval_arg.data);
          if ( !v19 )
            goto LABEL_92;
          component = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, UnityEngine_Component_o *, Il2CppMethodPointer))&v19->klass[1]._2.naturalAligment)(
                                                   v19,
                                                   component,
                                                   v19->klass[1].vtable._0_Equals.methodPtr);
          if ( ((unsigned __int8)component & 1) != 0 )
            goto LABEL_96;
          v26 = (int)UnityEngine_Object___var;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v76.fields.value = v26;
          v27 = System_Type__GetTypeFromHandle(v76, 0LL);
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, void *))v13->klass[1]._1.namespaze)(
                                                   v13,
                                                   v13->klass[1]._1.byval_arg.data);
          if ( !v27 )
            goto LABEL_92;
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Type_o *, UnityEngine_Component_o *, Il2CppMethodPointer))v27->klass->vtable._22_IsAssignableFrom.method)(
                                                   v27,
                                                   component,
                                                   v27->klass->vtable._23_GetType.methodPtr);
          if ( ((unsigned __int8)component & 1) != 0 )
            goto LABEL_96;
          v28 = (int)System_Collections_Generic_IEnumerable_Object__var;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v77.fields.value = v28;
          v29 = System_Type__GetTypeFromHandle(v77, 0LL);
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, void *))v13->klass[1]._1.namespaze)(
                                                   v13,
                                                   v13->klass[1]._1.byval_arg.data);
          if ( !v29 )
            goto LABEL_92;
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Type_o *, UnityEngine_Component_o *, Il2CppMethodPointer))v29->klass->vtable._22_IsAssignableFrom.method)(
                                                   v29,
                                                   component,
                                                   v29->klass->vtable._23_GetType.methodPtr);
          if ( ((unsigned __int8)component & 1) != 0 )
          {
LABEL_96:
            if ( !v10 )
              goto LABEL_92;
            items = v10->fields._items;
            v31 = Method_System_Collections_Generic_List_FieldInfo__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_92;
            size = v10->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)v13,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v33[4] = (Il2CppClass *)v13;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v13, v20, v21, v22, v23, v24, v25);
            }
          }
        }
      }
      LODWORD(v11) = *(_DWORD *)(v9 + 24);
    }
    while ( (__int64)++v12 < (int)v11 );
  }
  v34 = Fgo_Assertions_Assert_TypeInfo;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v34 = Fgo_Assertions_Assert_TypeInfo;
  }
  cachedFieldInfo = (System_Collections_Generic_Dictionary_object__object__o *)v34->static_fields->cachedFieldInfo;
  component = (UnityEngine_Component_o *)System_Object__GetType(v4, 0LL);
  if ( !cachedFieldInfo )
LABEL_92:
    sub_1C22094(component, checkInheritance);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    cachedFieldInfo,
    (Il2CppObject *)component,
    (Il2CppObject *)v10,
    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___set_Item__);
LABEL_45:
  v36 = Fgo_Assertions_Assert_TypeInfo;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v36 = Fgo_Assertions_Assert_TypeInfo;
  }
  component = (UnityEngine_Component_o *)v36->static_fields->cachedFieldInfo;
  if ( !component )
    goto LABEL_92;
  component = (UnityEngine_Component_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                           (System_Collections_Generic_Dictionary_object__object__o *)component,
                                           v7,
                                           (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___get_Item__);
  if ( !component )
    goto LABEL_92;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    (System_Collections_Generic_List_object__o *)component,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_FieldInfo__GetEnumerator__);
  v72 = v71;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v72,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_FieldInfo__MoveNext__) )
  {
    if ( !v72.fields._current )
      sub_1C22094(0LL, v37);
    v38 = ((__int64 (*)(void))v72.fields._current->klass->vtable[25].method)();
    v39 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C21F74(
                                                                 v38,
                                                                 System_Collections_Generic_IEnumerable_Object__TypeInfo);
    if ( v39 )
    {
      v40 = Fgo_Assertions_Assert___c_TypeInfo;
      if ( !Fgo_Assertions_Assert___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert___c_TypeInfo);
        v40 = Fgo_Assertions_Assert___c_TypeInfo;
      }
      _9__42_0 = (System_Func_T1__T2__TResult__o *)v40->static_fields->__9__42_0;
      if ( !_9__42_0 )
      {
        if ( !v40->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v40);
          v40 = Fgo_Assertions_Assert___c_TypeInfo;
        }
        v42 = (Il2CppObject *)v40->static_fields->__9;
        _9__42_0 = (System_Func_T1__T2__TResult__o *)sub_1C22084(System_Func_Object__int____f__AnonymousType0_Object__int___TypeInfo);
        System_Func_object__int__object____ctor(
          _9__42_0,
          v42,
          Method_Fgo_Assertions_Assert___c__IsAllSerializeFieldsNotNull_b__42_0__,
          0LL);
        static_fields = Fgo_Assertions_Assert___c_TypeInfo->static_fields;
        static_fields->__9__42_0 = (struct System_Func_Object__int____f__AnonymousType0_Object__int___o *)_9__42_0;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&static_fields->__9__42_0,
          (int64_t)_9__42_0,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
      }
      v50 = System_Linq_Enumerable__Select_object__object__50206892(
              v39,
              (System_Func_TSource__int__TResult__o *)_9__42_0,
              (const MethodInfo_2FE18AC *)Method_System_Linq_Enumerable_Select_Object____f__AnonymousType0_Object__int____);
      v52 = v50;
      if ( !v50 )
        sub_1C22094(0LL, v51);
      klass = v50->klass;
      v54 = *(unsigned __int16 *)(&v50->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v50->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___c **)p_offset - 1) != System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___TypeInfo )
        {
          --v54;
          p_offset += 4;
          if ( !v54 )
            goto LABEL_64;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_64:
        p_method = sub_1C73E18(
                     v50,
                     System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___TypeInfo,
                     0LL);
      }
      v58 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
              v52,
              *(_QWORD *)(p_method + 8));
      if ( !v58 )
        sub_1C22094(0LL, v57);
      while ( 1 )
      {
        v59 = *(_QWORD *)v58;
        v60 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
        {
          v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v61 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v60;
            v61 += 4;
            if ( !v60 )
              goto LABEL_71;
          }
          v62 = v59 + 16LL * *v61 + 312;
        }
        else
        {
LABEL_71:
          v62 = sub_1C73E18(v58, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v62)(v58, *(_QWORD *)(v62 + 8)) & 1) == 0 )
          break;
        v63 = *(_QWORD *)v58;
        v64 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
        {
          v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator___f__AnonymousType0_Object__int___c **)v65 - 1) != System_Collections_Generic_IEnumerator___f__AnonymousType0_Object__int___TypeInfo )
          {
            --v64;
            v65 += 4;
            if ( !v64 )
              goto LABEL_78;
          }
          v66 = v63 + 16LL * *v65 + 312;
        }
        else
        {
LABEL_78:
          v66 = sub_1C73E18(v58, System_Collections_Generic_IEnumerator___f__AnonymousType0_Object__int___TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v66)(v58, *(_QWORD *)(v66 + 8));
      }
      v67 = *(_QWORD *)v58;
      v68 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
      {
        v69 = (int *)(*(_QWORD *)(v67 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
        {
          --v68;
          v69 += 4;
          if ( !v68 )
            goto LABEL_85;
        }
        v70 = v67 + 16LL * *v69 + 312;
      }
      else
      {
LABEL_85:
        v70 = sub_1C73E18(v58, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v70)(v58, *(_QWORD *)(v70 + 8));
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v72,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_FieldInfo__Dispose__);
}


void __fastcall Fgo_Assertions_Assert__IsAssetDataNotNull(
        Il2CppObject *assetData,
        System_String_o *assetName,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4BE0CF7 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_16176/*"[AssetData]\n{0}をロードできませんでした"*/);
    byte_4BE0CF7 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_16176/*"[AssetData]\n{0}をロードできませんでした"*/, (Il2CppObject *)assetName, 0LL);
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

  if ( (byte_4BE0CFA & 1) == 0 )
  {
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_21003/*"index({0}) の値が負です"*/);
    sub_1C21E38(&StringLiteral_21004/*"index({0}) の値が配列の要素数({1})を超えています"*/);
    byte_4BE0CFA = 1;
  }
  if ( (index & 0x80000000) != 0 )
  {
    v21 = index;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, message, gameObject, filePath);
    v15 = System_String__Format((System_String_o *)StringLiteral_21003/*"index({0}) の値が負です"*/, v17, 0LL);
  }
  else
  {
    if ( count > index )
      return;
    v20 = index;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, message, gameObject, filePath);
    v19 = count;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v11, v12, v13);
    v15 = System_String__Format_63129848((System_String_o *)StringLiteral_21004/*"index({0}) の値が配列の要素数({1})を超えています"*/, v10, v14, 0LL);
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
        const MethodInfo_2F90640 *method)
{
  if ( (byte_4BE21B7 & 1) == 0 )
  {
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&StringLiteral_25846/*"配列"*/);
    byte_4BE21B7 = 1;
  }
  if ( !array )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25846/*"配列"*/, message, 0LL);
  }
}


void __fastcall Fgo_Assertions_Assert__IsInRange___Il2CppFullySharedGenericType__49874364(
        System_Collections_Generic_List_T__o *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2F905BC *method)
{
  if ( (byte_4BE21B6 & 1) == 0 )
  {
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&StringLiteral_25773/*"リスト"*/);
    byte_4BE21B6 = 1;
  }
  if ( !array )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25773/*"リスト"*/, message, 0LL);
  }
}


void __fastcall Fgo_Assertions_Assert__IsNotNull_object_(
        Il2CppObject *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2F906C4 *method)
{
  Il2CppClass *klass; // x8
  UnityEngine_Object_c *v8; // x0
  unsigned int methodPtr_low; // w10
  __int64 v10; // x9
  Il2CppObject *v11; // x0

  if ( (byte_4BE21B8 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE21B8 = 1;
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
  if ( (byte_4BE0CFD & 1) == 0 )
  {
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&StringLiteral_25735/*"アクション"*/);
    byte_4BE0CFD = 1;
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
      (System_String_o *)StringLiteral_25735/*"アクション"*/,
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
        const MethodInfo_2F90788 *method)
{
  Il2CppClass *klass; // x8
  UnityEngine_Object_c *v8; // x0
  unsigned int methodPtr_low; // w10
  __int64 v10; // x9
  Il2CppObject *v11; // x0

  if ( (byte_4BE21B9 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE21B9 = 1;
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
        const MethodInfo_2F9084C *method)
{
  if ( (byte_4BE21BA & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_16224/*"[SerializeField]\n{0}の参照が切れています"*/);
    byte_4BE21BA = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_16224/*"[SerializeField]\n{0}の参照が切れています"*/, (Il2CppObject *)fieldName, 0LL);
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
  Fgo_Assertions_Assert_c *v9; // x0
  System_Collections_Generic_HashSet_T__o *suppressAsserts; // x0
  Fgo_Assertions_Assert_c *v11; // x0

  if ( (byte_4BE0CF6 & 1) == 0 )
  {
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Contains__);
    byte_4BE0CF6 = 1;
  }
  if ( !condition )
  {
    v9 = Fgo_Assertions_Assert_TypeInfo;
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
      v9 = Fgo_Assertions_Assert_TypeInfo;
    }
    suppressAsserts = (System_Collections_Generic_HashSet_T__o *)v9->static_fields->suppressAsserts;
    if ( suppressAsserts )
    {
      if ( System_Collections_Generic_HashSet_Int32Enum___Contains(
             suppressAsserts,
             assertKey,
             (const MethodInfo_3504FF8 *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Contains__) )
      {
        return;
      }
      v11 = Fgo_Assertions_Assert_TypeInfo;
      if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
        v11 = Fgo_Assertions_Assert_TypeInfo;
      }
      suppressAsserts = (System_Collections_Generic_HashSet_T__o *)v11->static_fields->suppressAsserts;
      if ( suppressAsserts )
      {
        System_Collections_Generic_HashSet_Int32Enum___Add(
          suppressAsserts,
          assertKey,
          (const MethodInfo_3505B08 *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Add__);
        return;
      }
    }
    sub_1C22094(suppressAsserts, condition);
  }
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

  if ( (byte_4BE0CE9 & 1) == 0 )
  {
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&StringLiteral_25429/*"{0}\n(expected={1}, actual={2})"*/);
    byte_4BE0CE9 = 1;
  }
  v7 = System_String__Format_63129916(
         (System_String_o *)StringLiteral_25429/*"{0}\n(expected={1}, actual={2})"*/,
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
          sub_1C22094(v12, v13);
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
  if ( (byte_4BE0CF8 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_16201/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/);
    byte_4BE0CF8 = 1;
  }
  System_String__Format_63129848((System_String_o *)StringLiteral_16201/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/, (Il2CppObject *)name, (Il2CppObject *)key, 0LL);
}


void __fastcall Fgo_Assertions_Assert__OnFailed_47721432(
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
  if ( (byte_4BE0CEA & 1) == 0 )
  {
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&System_IO_Path_TypeInfo);
    sub_1C21E38(&StringLiteral_25469/*"{0}({1})"*/);
    sub_1C21E38(&StringLiteral_62/*"\nGameObject:"*/);
    caption = (System_String_o *)sub_1C21E38(&StringLiteral_25430/*"{0}\n{1}\n{2}"*/);
    byte_4BE0CEA = 1;
  }
  if ( !filePath )
    goto LABEL_27;
  v11 = System_String__Replace(filePath, 0x5Cu, 0x2Fu, 0LL);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = (Il2CppObject *)System_IO_Path__GetFileName(v11, 0LL);
  v25 = line;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v13, v14, v15);
  v17 = (Il2CppObject *)System_String__Format_63129848((System_String_o *)StringLiteral_25469/*"{0}({1})"*/, FileName, v16, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  caption = (System_String_o *)UnityEngine_Object__op_Inequality(0LL, (UnityEngine_Object_o *)gameObject, 0LL);
  if ( ((unsigned __int8)caption & 1) != 0 )
  {
    if ( !gameObject )
      goto LABEL_27;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    v9 = System_String__Concat_63126736(v9, (System_String_o *)StringLiteral_62/*"\nGameObject:"*/, name, 0LL);
  }
  v19 = System_String__Format_63129916((System_String_o *)StringLiteral_25430/*"{0}\n{1}\n{2}"*/, v10, (Il2CppObject *)v9, v17, 0LL);
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
      sub_1C22094(caption, message);
    }
  }
}


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
  Fgo_Assertions_Assert_c *v10; // x0
  Fgo_Assertions_Assert_c *v11; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_4BE0CEB & 1) == 0 )
  {
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&UnityEngine_Debug_TypeInfo);
    sub_1C21E38(&StringLiteral_25818/*"既に表明違反時の処理が設定されています"*/);
    byte_4BE0CEB = 1;
  }
  if ( !force )
  {
    v10 = Fgo_Assertions_Assert_TypeInfo;
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
      v10 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( v10->static_fields->onFailedAction )
    {
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_25818/*"既に表明違反時の処理が設定されています"*/, 0LL);
    }
  }
  v11 = Fgo_Assertions_Assert_TypeInfo;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v11 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v11->static_fields;
  static_fields->onFailedAction = action;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->onFailedAction,
    (int64_t)action,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  Fgo_Assertions_Assert_c *v10; // x0
  Fgo_Assertions_Assert_c *v11; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_4BE0CEC & 1) == 0 )
  {
    sub_1C21E38(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C21E38(&UnityEngine_Debug_TypeInfo);
    sub_1C21E38(&StringLiteral_25818/*"既に表明違反時の処理が設定されています"*/);
    byte_4BE0CEC = 1;
  }
  if ( !force )
  {
    v10 = Fgo_Assertions_Assert_TypeInfo;
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
      v10 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( v10->static_fields->onFailedSendReport )
    {
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_25818/*"既に表明違反時の処理が設定されています"*/, 0LL);
    }
  }
  v11 = Fgo_Assertions_Assert_TypeInfo;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v11 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v11->static_fields;
  static_fields->onFailedSendReport = action;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->onFailedSendReport,
    (int64_t)action,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)aFormat, v7, v8, v9, v10, v11, v12);
  this->fields.args = aArgs;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.args, (int64_t)aArgs, v13, v14, v15, v16, v17, v18);
}


void __fastcall Fgo_Assertions_Assert___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BE0D00 & 1) == 0 )
  {
    sub_1C21E38(&Fgo_Assertions_Assert___c_TypeInfo);
    byte_4BE0D00 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(Fgo_Assertions_Assert___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  Fgo_Assertions_Assert___c_TypeInfo->static_fields->__9 = (struct Fgo_Assertions_Assert___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)Fgo_Assertions_Assert___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __f__AnonymousType0__obj_j__TPar___index_j__TPar__o *v6; // x21

  if ( (byte_4BE0D01 & 1) == 0 )
  {
    sub_1C21E38(&Method___f__AnonymousType0_Object__int___ctor__);
    sub_1C21E38(&_f__AnonymousType0_Object__int__TypeInfo);
    byte_4BE0D01 = 1;
  }
  v6 = (__f__AnonymousType0__obj_j__TPar___index_j__TPar__o *)sub_1C22084(_f__AnonymousType0_Object__int__TypeInfo);
  _f__AnonymousType0_object__int____ctor(
    v6,
    (Il2CppObject *)obj,
    index,
    (const MethodInfo_31816CC *)Method___f__AnonymousType0_Object__int___ctor__);
  return (__f__AnonymousType0_Object__int__o *)v6;
}


void __fastcall Fgo_Assertions_AssertQueue___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BE0D07 & 1) == 0 )
  {
    sub_1C21E38(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_Queue_string__TypeInfo);
    byte_4BE0D07 = 1;
  }
  v1 = (System_Collections_Generic_Queue_T__o *)sub_1C22084(System_Collections_Generic_Queue_string__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v1,
    (const MethodInfo_37C0E20 *)Method_System_Collections_Generic_Queue_string___ctor__);
  Fgo_Assertions_AssertQueue_TypeInfo->static_fields->queue = (struct System_Collections_Generic_Queue_string__o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)Fgo_Assertions_AssertQueue_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  static_fields = (PartyOrganizationUtility_o *)Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
  static_fields->fields.restrictionDialogHistoryList = 0LL;
  static_fields = (PartyOrganizationUtility_o *)((char *)static_fields + 16);
  static_fields[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  sub_1C21DDC(static_fields, 0LL, v9, v10, v11, v12, v13, v14);
}


void __fastcall Fgo_Assertions_AssertQueue__Clear(const MethodInfo *method)
{
  __int64 v1; // x1
  Fgo_Assertions_AssertQueue_c *v2; // x0
  System_Collections_Generic_Queue_T__o *queue; // x0

  if ( (byte_4BE0D06 & 1) == 0 )
  {
    sub_1C21E38(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_string__Clear__);
    byte_4BE0D06 = 1;
  }
  v2 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v2 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  queue = (System_Collections_Generic_Queue_T__o *)v2->static_fields->queue;
  if ( !queue )
    sub_1C22094(0LL, v1);
  System_Collections_Generic_Queue_object___Clear(
    queue,
    (const MethodInfo_37C10A8 *)Method_System_Collections_Generic_Queue_string__Clear__);
}


void __fastcall Fgo_Assertions_AssertQueue__Dequeue(const MethodInfo *method)
{
  __int64 v1; // x1
  System_Collections_Generic_Queue_T__o *queue; // x0
  struct Fgo_Assertions_AssertQueue_StaticFields *syncRoot; // x8
  int32_t size; // w20
  Il2CppObject *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4BE0D05 & 1) == 0 )
  {
    sub_1C21E38(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_string__Dequeue__);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_string__get_Count__);
    byte_4BE0D05 = 1;
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
               (const MethodInfo_37C1578 *)Method_System_Collections_Generic_Queue_string__Dequeue__);
        Fgo_Assertions_AssertQueue__OnFailed((System_String_o *)v5, v6);
        return;
      }
LABEL_12:
      sub_1C22094(queue, v1);
    }
  }
  syncRoot->isReady = 1;
}


void __fastcall Fgo_Assertions_AssertQueue__Enqueue(System_String_o *message, const MethodInfo *method)
{
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x8
  _BOOL4 isReady; // w21

  if ( (byte_4BE0D04 & 1) == 0 )
  {
    sub_1C21E38(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_string__Enqueue__);
    byte_4BE0D04 = 1;
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
    sub_1C22094(0LL, method);
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)static_fields->queue,
    (Il2CppObject *)message,
    (const MethodInfo_37C13E8 *)Method_System_Collections_Generic_Queue_string__Enqueue__);
}


void __fastcall Fgo_Assertions_AssertQueue__OnFailed(System_String_o *message, const MethodInfo *method)
{
  Fgo_Assertions_AssertQueue_c *v3; // x0
  struct System_Action_string__o *onFailedAction; // x8
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BE0D02 & 1) == 0 )
  {
    sub_1C21E38(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1C21E38(&UnityEngine_Debug_TypeInfo);
    sub_1C21E38(&StringLiteral_25836/*"表明違反時処理が設定されていません"*/);
    byte_4BE0D02 = 1;
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
        sub_1C22094(v5, v6);
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
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_25836/*"表明違反時処理が設定されていません"*/, 0LL);
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

  if ( (byte_4BE0D03 & 1) == 0 )
  {
    sub_1C21E38(&Fgo_Assertions_AssertQueue_TypeInfo);
    byte_4BE0D03 = 1;
  }
  v9 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v9 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->onFailedAction = action;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->onFailedAction, (int64_t)action, v2, v3, v4, v5, v6, v7);
}