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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0
  struct Fgo_Assertions_Assert_StaticFields *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_HashSet_T__o *v23; // x19
  struct Fgo_Assertions_Assert_StaticFields *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4B1A89E & 1) == 0 )
  {
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_Assert_SuppressAssertKey__TypeInfo, v10, v11);
    byte_4B1A89E = 1;
  }
  static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
  static_fields->enable = 1;
  static_fields->onFailedAction = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->onFailedAction, 0LL, v2, v3, v4, v5, v6, v7);
  v13 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v13->onFailedSendReport = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v13->onFailedSendReport, 0LL, v14, v15, v16, v17, v18, v19);
  v23 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_HashSet_Assert_SuppressAssertKey__TypeInfo,
                                                     v20,
                                                     v21,
                                                     v22);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v23,
    (const MethodInfo_3456D28 *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey___ctor__);
  v24 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v24->suppressAsserts = (struct System_Collections_Generic_HashSet_Assert_SuppressAssertKey__o *)v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&v24->suppressAsserts, (int64_t)v23, v25, v26, v27, v28, v29, v30);
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
  __int64 v11; // x2
  float v12; // s1
  float v13; // s2
  float v14; // s0
  float Epsilon; // s3

  if ( (byte_4B1A88E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___, gameObject, filePath);
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, v10, v11);
    byte_4B1A88E = 1;
  }
  if ( !byte_4B109C5 )
  {
    sub_1BCA7E0(&UnityEngine_Mathf_TypeInfo, gameObject, filePath);
    byte_4B109C5 = 1;
  }
  v12 = fabsf(expected);
  v13 = fabsf(actual);
  if ( v12 <= v13 )
    v12 = v13;
  v14 = v12 * 0.000001;
  Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
  if ( (float)(v12 * 0.000001) <= (float)(Epsilon * 8.0) )
    v14 = Epsilon * 8.0;
  if ( vabds_f32(actual, expected) >= v14 )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, gameObject);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_float_(
      expected,
      actual,
      1,
      message,
      (const MethodInfo_2EF2D38 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
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
  __int64 v11; // x2

  if ( (byte_4B1A88F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___, *(_QWORD *)&actual, message);
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, v10, v11);
    byte_4B1A88F = 1;
  }
  if ( expected != actual )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&actual);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_int_(
      expected,
      actual,
      1,
      message,
      (const MethodInfo_2EF279C *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_47113160(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2

  if ( (byte_4B1A890 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___, actual, message);
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, v10, v11);
    byte_4B1A890 = 1;
  }
  if ( expected != actual )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, actual);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_long_(
      expected,
      actual,
      1,
      message,
      (const MethodInfo_2EF2968 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreEqual_47113320(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1

  if ( (byte_4B1A891 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___, actual, message);
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B1A891 = 1;
  }
  if ( expected )
    goto LABEL_10;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actual);
  if ( !UnityEngine_Object__op_Equality(actual, 0LL, 0LL) )
  {
LABEL_10:
    if ( actual )
      goto LABEL_19;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actual);
    if ( !UnityEngine_Object__op_Equality(expected, 0LL, 0LL) )
    {
LABEL_19:
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actual);
      if ( UnityEngine_Object__op_Inequality(expected, actual, 0LL) )
      {
        if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v14);
        Fgo_Assertions_Assert__GetComparisonAssertMessage_object_(
          (Il2CppObject *)expected,
          (Il2CppObject *)actual,
          1,
          message,
          (const MethodInfo_2EF2B3C *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
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
        const MethodInfo_2EF1804 *method)
{
  long double v7; // q0
  void **monitor; // x21
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x26
  _QWORD *v11; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x0
  __int64 v16; // x23
  __int64 v17; // x0
  int v18; // w8
  char *v19; // x25
  _QWORD *v20; // x22
  _QWORD *v21; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v22; // x1
  __int64 v23; // x0
  _QWORD *v24; // x19
  __int64 v25; // x27
  void **v26; // x1
  _QWORD *v27; // x19
  __int64 *v28; // x1
  __int64 v29; // x0
  __int64 v30; // x10
  _QWORD *v31; // x19
  void **v32; // x1
  _QWORD *v33; // x19
  __int64 *v34; // x1
  __int64 v35; // x0
  __int64 v36; // x10
  _QWORD *v37; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v38; // x1
  _QWORD *v39; // x19
  __int64 *v40; // x1
  __int64 v41; // x0
  __int64 methodPtr_low; // x10
  _QWORD *v43; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v44; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v45; // x1
  _QWORD *v46; // x26
  void **v47; // x1
  __int64 v48; // x0
  long double v49; // q0
  _QWORD *v50; // x9
  __int64 v51; // x26
  __int64 v52; // x8
  int v53; // w0
  __int64 v54; // x1
  int v55; // w10
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v56; // x3
  _QWORD *v57; // x25
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v58; // x1
  void **v59; // x1
  __int64 v60; // x1
  __int64 *v61; // x1
  __int64 v62; // x0
  _QWORD *v63; // x19
  __int64 *v64; // x1
  __int64 v65; // x0
  __int64 v66; // x10
  __int64 v67; // [xsp+0h] [xbp-60h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v68; // [xsp+8h] [xbp-58h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-50h]
  void *v70; // [xsp+18h] [xbp-48h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v71; // [xsp+20h] [xbp-40h] BYREF
  __int64 v72[4]; // [xsp+28h] [xbp-38h] BYREF
  char v73[12]; // [xsp+48h] [xbp-18h] BYREF
  char v74; // [xsp+54h] [xbp-Ch] BYREF
  __int64 v75; // [xsp+58h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  monitor = (void **)expected.monitor;
  klass = expected.klass;
  v75 = *(_QWORD *)(StatusReg + 40);
  v70 = expected.monitor;
  v71 = expected.klass;
  v11 = filePath[2].monitor;
  v68 = actual.klass;
  if ( !v11 )
  {
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, expected.monitor, actual.klass);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    v11 = filePath[2].monitor;
    if ( !v11 )
    {
      sub_1C1C718(filePath, v14);
      v11 = filePath[2].monitor;
    }
  }
  v15 = *v11;
  v16 = *(unsigned int *)(*v11 + 252LL);
  if ( (*(_BYTE *)(*v11 + 309LL) & 1) != 0 )
  {
    v18 = *(_DWORD *)(*v11 + 252LL);
  }
  else
  {
    v17 = sub_1C1C6BC(v7);
    v11 = filePath[2].monitor;
    v18 = *(_DWORD *)(v17 + 252);
    v15 = *v11;
  }
  v19 = (char *)&v67 - (((unsigned int)(v18 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v20 = (__int64 *)((char *)&v67 - ((v16 + 15) & 0x1FFFFFFF0LL));
  v21 = v20;
  if ( *(int *)(v15 + 40) >= 0 )
    v22 = &v71;
  else
    v22 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy(&v67, v22, v16);
  v23 = j_il2cpp_value_box_0(*v11, (char *)&v67 - ((v16 + 15) & 0x1FFFFFFF0LL));
  v24 = filePath[2].monitor;
  v25 = v23;
  if ( *(int *)(*v24 + 40LL) >= 0 )
    v26 = &v70;
  else
    v26 = monitor;
  memcpy((char *)&v67 - ((v16 + 15) & 0x1FFFFFFF0LL), v26, v16);
  if ( v25 != j_il2cpp_value_box_0(*v24, (char *)&v67 - ((v16 + 15) & 0x1FFFFFFF0LL)) )
  {
    v27 = filePath[2].monitor;
    v28 = *(int *)(*v27 + 40LL) >= 0 ? (__int64 *)&v71 : (__int64 *)klass;
    if ( (memcpy((char *)&v67 - ((v16 + 15) & 0x1FFFFFFF0LL), v28, v16),
          (v29 = j_il2cpp_value_box_0(*v27, (char *)&v67 - ((v16 + 15) & 0x1FFFFFFF0LL))) == 0)
      || (v30 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v29 + 304LL) < (unsigned int)v30)
      || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v29 + 200LL) + 8 * v30 - 8) != UnityEngine_Object_TypeInfo
      || ((v31 = filePath[2].monitor, *(int *)(*v31 + 40LL) >= 0) ? (v32 = &v70) : (v32 = monitor),
          memcpy((char *)&v67 - ((v16 + 15) & 0x1FFFFFFF0LL), v32, v16),
          (sub_1BCA9F0(*v31, (char *)&v67 - ((v16 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
    {
      v33 = filePath[2].monitor;
      v34 = (__int64 *)(*(int *)(*v33 + 40LL) >= 0 ? &v70 : monitor);
      if ( (memcpy((char *)&v67 - ((v16 + 15) & 0x1FFFFFFF0LL), v34, v16),
            (v35 = j_il2cpp_value_box_0(*v33, (char *)&v67 - ((v16 + 15) & 0x1FFFFFFF0LL))) == 0)
        || (v36 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)v35 + 304LL) < (unsigned int)v36)
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v35 + 200LL) + 8 * v36 - 8) != UnityEngine_Object_TypeInfo
        || ((v37 = filePath[2].monitor, *(int *)(*v37 + 40LL) >= 0)
          ? (v38 = &v71)
          : (v38 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v71),
            memcpy((char *)&v67 - ((v16 + 15) & 0x1FFFFFFF0LL), v38, v16),
            (sub_1BCA9F0(*v37, (char *)&v67 - ((v16 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
      {
        v39 = filePath[2].monitor;
        v40 = *(int *)(*v39 + 40LL) >= 0 ? (__int64 *)&v71 : (__int64 *)v71;
        memcpy((char *)&v67 - ((v16 + 15) & 0x1FFFFFFF0LL), v40, v16);
        v41 = j_il2cpp_value_box_0(*v39, (char *)&v67 - ((v16 + 15) & 0x1FFFFFFF0LL));
        if ( !v41 )
          goto LABEL_40;
        methodPtr_low = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 304LL) < (unsigned int)methodPtr_low
          || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * methodPtr_low - 8) != UnityEngine_Object_TypeInfo )
        {
          goto LABEL_40;
        }
        v63 = filePath[2].monitor;
        v64 = (__int64 *)(*(int *)(*v63 + 40LL) >= 0 ? &v70 : monitor);
        memcpy((char *)&v67 - ((v16 + 15) & 0x1FFFFFFF0LL), v64, v16);
        v65 = j_il2cpp_value_box_0(*v63, (char *)&v67 - ((v16 + 15) & 0x1FFFFFFF0LL));
        if ( !v65
          || (v66 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
              *(unsigned __int8 *)(*(_QWORD *)v65 + 304LL) < (unsigned int)v66)
          || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v65 + 200LL) + 8 * v66 - 8) != UnityEngine_Object_TypeInfo )
        {
LABEL_40:
          v43 = filePath[2].monitor;
          v44 = v71;
          if ( *(int *)(*v43 + 40LL) >= 0 )
            v45 = &v71;
          else
            v45 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v71;
          memcpy((char *)&v67 - ((v16 + 15) & 0x1FFFFFFF0LL), v45, v16);
          if ( (sub_1BCA9F0(*v43, (char *)&v67 - ((v16 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
          {
            v46 = filePath[2].monitor;
            if ( *(int *)(*v46 + 40LL) >= 0 )
              v47 = &v70;
            else
              v47 = monitor;
            memcpy((char *)&v67 - ((v16 + 15) & 0x1FFFFFFF0LL), v47, v16);
            v48 = j_il2cpp_value_box_0(*v46, (char *)&v67 - ((v16 + 15) & 0x1FFFFFFF0LL));
            v50 = filePath[2].monitor;
            v51 = v48;
            v52 = *v50;
            if ( (*(_BYTE *)(*v50 + 309LL) & 1) == 0 )
            {
              v53 = sub_1C1C6BC(v49);
              v50 = filePath[2].monitor;
              v44 = v71;
              LODWORD(v52) = v53;
            }
            v54 = v50[1];
            v55 = *(_DWORD *)(*v50 + 40LL);
            v72[0] = v51;
            if ( v55 >= 0 )
              v56 = &v71;
            else
              v56 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v44;
            sub_1BCB248(v52, v54, (int)v19, v56);
            if ( v73[0] )
              return;
            v44 = v71;
          }
          v57 = filePath[2].monitor;
          if ( *(int *)(*v57 + 40LL) >= 0 )
            v58 = &v71;
          else
            v58 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v44;
          memcpy((char *)&v67 - ((v16 + 15) & 0x1FFFFFFF0LL), v58, v16);
          if ( *(int *)(*v57 + 40LL) >= 0 )
            v59 = &v70;
          else
            v59 = monitor;
          memcpy((char *)&v67 - ((v16 + 15) & 0x1FFFFFFF0LL), v59, v16);
          if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v60);
            v57 = filePath[2].monitor;
          }
          v61 = (__int64 *)v57[2];
          v62 = *v61;
          if ( (*(_DWORD *)(*v57 + 40LL) & 0x80000000) == 0 )
          {
            v20 = (_QWORD *)*v20;
            v21 = (_QWORD *)*v21;
          }
          v72[0] = (__int64)v20;
          v72[1] = (__int64)v21;
          v74 = 1;
          v72[2] = (__int64)&v74;
          v72[3] = (__int64)v68;
          ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, char *))v61[2])(v62, v61, 0LL, v72, v73);
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
  __int64 v11; // x2
  float v12; // s1
  float v13; // s2
  float v14; // s0
  float Epsilon; // s3

  if ( (byte_4B1A892 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___, gameObject, filePath);
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, v10, v11);
    byte_4B1A892 = 1;
  }
  if ( !byte_4B109C5 )
  {
    sub_1BCA7E0(&UnityEngine_Mathf_TypeInfo, gameObject, filePath);
    byte_4B109C5 = 1;
  }
  v12 = fabsf(expected);
  v13 = fabsf(actual);
  if ( v12 <= v13 )
    v12 = v13;
  v14 = v12 * 0.000001;
  Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
  if ( (float)(v12 * 0.000001) <= (float)(Epsilon * 8.0) )
    v14 = Epsilon * 8.0;
  if ( vabds_f32(actual, expected) < v14 )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, gameObject);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_float_(
      expected,
      actual,
      0,
      message,
      (const MethodInfo_2EF2D38 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
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
  __int64 v11; // x2

  if ( (byte_4B1A893 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___, *(_QWORD *)&actual, message);
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, v10, v11);
    byte_4B1A893 = 1;
  }
  if ( expected == actual )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&actual);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_int_(
      expected,
      expected,
      0,
      message,
      (const MethodInfo_2EF279C *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_47114028(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2

  if ( (byte_4B1A894 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___, actual, message);
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, v10, v11);
    byte_4B1A894 = 1;
  }
  if ( expected == actual )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, actual);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_long_(
      expected,
      expected,
      0,
      message,
      (const MethodInfo_2EF2968 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual_47114188(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2

  if ( (byte_4B1A895 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___, actual, message);
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B1A895 = 1;
  }
  if ( !expected )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actual);
    if ( UnityEngine_Object__op_Equality(actual, 0LL, 0LL) )
      goto LABEL_19;
  }
  if ( !actual )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actual);
    if ( UnityEngine_Object__op_Equality(expected, 0LL, 0LL) )
      goto LABEL_19;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actual);
  if ( UnityEngine_Object__op_Equality(expected, actual, 0LL) )
  {
LABEL_19:
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, actual);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_object_(
      (Il2CppObject *)expected,
      (Il2CppObject *)actual,
      0,
      message,
      (const MethodInfo_2EF2B3C *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
  }
}


void __fastcall Fgo_Assertions_Assert__AreNotEqual___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o expected,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2EF1CDC *method)
{
  long double v7; // q0
  void **monitor; // x23
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x26
  _QWORD *v11; // x27
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x0
  unsigned int v16; // w8
  __int64 v17; // x24
  __int64 v18; // x0
  _QWORD *v19; // x21
  _QWORD *v20; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v21; // x1
  __int64 v22; // x0
  _QWORD *v23; // x19
  __int64 v24; // x27
  void **v25; // x1
  __int64 v26; // x0
  _QWORD *v27; // x19
  __int64 v28; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v29; // x1
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x10
  _QWORD *v33; // x19
  void **v34; // x1
  _QWORD *v35; // x19
  __int64 *v36; // x1
  __int64 v37; // x0
  __int64 v38; // x10
  _QWORD *v39; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v40; // x1
  _QWORD *v41; // x19
  __int64 *v42; // x1
  __int64 v43; // x0
  __int64 methodPtr_low; // x10
  _QWORD *v45; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v46; // x28
  __int64 *v47; // x1
  _QWORD *v48; // x19
  void **v49; // x1
  __int64 v50; // x0
  long double v51; // q0
  _QWORD *v52; // x9
  __int64 v53; // x26
  __int64 v54; // x8
  int v55; // w0
  __int64 v56; // x1
  __int64 *v57; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v58; // x1
  void **v59; // x1
  __int64 v60; // x1
  Fgo_Assertions_Assert_c *v61; // x0
  void **v62; // x1
  __int64 *v63; // x1
  __int64 v64; // x0
  _QWORD *v65; // x19
  __int64 *v66; // x1
  __int64 v67; // x0
  __int64 v68; // x10
  __int64 v69; // [xsp+0h] [xbp-60h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v70; // [xsp+8h] [xbp-58h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-50h]
  void *v72; // [xsp+18h] [xbp-48h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v73; // [xsp+20h] [xbp-40h] BYREF
  __int64 v74[4]; // [xsp+28h] [xbp-38h] BYREF
  char v75[12]; // [xsp+48h] [xbp-18h] BYREF
  char v76; // [xsp+54h] [xbp-Ch] BYREF
  __int64 v77; // [xsp+58h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  monitor = (void **)expected.monitor;
  klass = expected.klass;
  v77 = *(_QWORD *)(StatusReg + 40);
  v72 = expected.monitor;
  v73 = expected.klass;
  v11 = filePath[2].monitor;
  v70 = actual.klass;
  if ( !v11 )
  {
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, expected.monitor, actual.klass);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    v11 = filePath[2].monitor;
    if ( !v11 )
    {
      sub_1C1C718(filePath, v14);
      v11 = filePath[2].monitor;
    }
  }
  v15 = *v11;
  v16 = *(_DWORD *)(*v11 + 252LL);
  v17 = v16;
  if ( (*(_BYTE *)(*v11 + 309LL) & 1) == 0 )
  {
    v18 = sub_1C1C6BC(v7);
    v11 = filePath[2].monitor;
    v16 = *(_DWORD *)(v18 + 252);
    v15 = *v11;
  }
  v69 = (__int64)&v69 - ((v16 + 16 + 15LL) & 0x1FFFFFFF0LL);
  v19 = (__int64 *)((char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL));
  v20 = v19;
  if ( *(int *)(v15 + 40) >= 0 )
    v21 = &v73;
  else
    v21 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy(&v69, v21, v17);
  v22 = j_il2cpp_value_box_0(*v11, (char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL));
  v23 = filePath[2].monitor;
  v24 = v22;
  if ( *(int *)(*v23 + 40LL) >= 0 )
    v25 = &v72;
  else
    v25 = monitor;
  memcpy((char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL), v25, v17);
  v26 = j_il2cpp_value_box_0(*v23, (char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL));
  v27 = filePath[2].monitor;
  v28 = v26;
  if ( *(int *)(*v27 + 40LL) >= 0 )
    v29 = &v73;
  else
    v29 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL), v29, v17);
  v30 = *v27;
  if ( v24 == v28 )
  {
    if ( *(int *)(v30 + 40) >= 0 )
      v62 = &v72;
    else
      v62 = monitor;
    memcpy((char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL), v62, v17);
    v61 = Fgo_Assertions_Assert_TypeInfo;
    if ( Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      goto LABEL_65;
LABEL_64:
    j_il2cpp_runtime_class_init_0(v61, v60);
    v27 = filePath[2].monitor;
LABEL_65:
    v63 = (__int64 *)v27[1];
    v64 = *v63;
    if ( (*(_DWORD *)(*v27 + 40LL) & 0x80000000) == 0 )
    {
      v19 = (_QWORD *)*v19;
      v20 = (_QWORD *)*v20;
    }
    v74[2] = (__int64)&v76;
    v76 = 0;
    v74[0] = (__int64)v19;
    v74[1] = (__int64)v20;
    v74[3] = (__int64)v70;
    ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, char *))v63[2])(v64, v63, 0LL, v74, v75);
    return;
  }
  v31 = j_il2cpp_value_box_0(v30, (char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL));
  if ( !v31
    || (v32 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*(_QWORD *)v31 + 304LL) < (unsigned int)v32)
    || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v31 + 200LL) + 8 * v32 - 8) != UnityEngine_Object_TypeInfo
    || ((v33 = filePath[2].monitor, *(int *)(*v33 + 40LL) >= 0) ? (v34 = &v72) : (v34 = monitor),
        memcpy((char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL), v34, v17),
        (sub_1BCA9F0(*v33, (char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
  {
    v35 = filePath[2].monitor;
    v36 = (__int64 *)(*(int *)(*v35 + 40LL) >= 0 ? &v72 : monitor);
    if ( (memcpy((char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL), v36, v17),
          (v37 = j_il2cpp_value_box_0(*v35, (char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL))) == 0)
      || (v38 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v37 + 304LL) < (unsigned int)v38)
      || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v37 + 200LL) + 8 * v38 - 8) != UnityEngine_Object_TypeInfo
      || ((v39 = filePath[2].monitor, *(int *)(*v39 + 40LL) >= 0)
        ? (v40 = &v73)
        : (v40 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v73),
          memcpy((char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL), v40, v17),
          (sub_1BCA9F0(*v39, (char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
    {
      v41 = filePath[2].monitor;
      v42 = *(int *)(*v41 + 40LL) >= 0 ? (__int64 *)&v73 : (__int64 *)v73;
      memcpy((char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL), v42, v17);
      v43 = j_il2cpp_value_box_0(*v41, (char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL));
      if ( !v43 )
        goto LABEL_39;
      methodPtr_low = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v43 + 304LL) < (unsigned int)methodPtr_low
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v43 + 200LL) + 8 * methodPtr_low - 8) != UnityEngine_Object_TypeInfo )
      {
        goto LABEL_39;
      }
      v65 = filePath[2].monitor;
      v66 = (__int64 *)(*(int *)(*v65 + 40LL) >= 0 ? &v72 : monitor);
      memcpy((char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL), v66, v17);
      v67 = j_il2cpp_value_box_0(*v65, (char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL));
      if ( !v67
        || (v68 = LOBYTE(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr),
            *(unsigned __int8 *)(*(_QWORD *)v67 + 304LL) < (unsigned int)v68)
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v67 + 200LL) + 8 * v68 - 8) != UnityEngine_Object_TypeInfo )
      {
LABEL_39:
        v45 = filePath[2].monitor;
        v46 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v73;
        v47 = *(int *)(*v45 + 40LL) >= 0 ? (__int64 *)&v73 : (__int64 *)v73;
        memcpy((char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL), v47, v17);
        if ( (sub_1BCA9F0(*v45, (char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
        {
          v48 = filePath[2].monitor;
          if ( *(int *)(*v48 + 40LL) >= 0 )
            v49 = &v72;
          else
            v49 = monitor;
          memcpy((char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL), v49, v17);
          v50 = j_il2cpp_value_box_0(*v48, (char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL));
          v52 = filePath[2].monitor;
          v53 = v50;
          v54 = *v52;
          if ( (*(_BYTE *)(*v52 + 309LL) & 1) == 0 )
          {
            v55 = sub_1C1C6BC(v51);
            v52 = filePath[2].monitor;
            v46 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v73;
            LODWORD(v54) = v55;
          }
          v56 = v52[2];
          v57 = (__int64 *)(*(int *)(*v52 + 40LL) >= 0 ? &v73 : v46);
          v74[0] = v53;
          sub_1BCB248(v54, v56, v69, v57);
          if ( v75[0] )
          {
            v27 = filePath[2].monitor;
            if ( *(int *)(*v27 + 40LL) >= 0 )
              v58 = &v73;
            else
              v58 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v73;
            memcpy((char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL), v58, v17);
            if ( *(int *)(*v27 + 40LL) >= 0 )
              v59 = &v72;
            else
              v59 = monitor;
            memcpy((char *)&v69 - ((v17 + 15) & 0x1FFFFFFF0LL), v59, v17);
            v61 = Fgo_Assertions_Assert_TypeInfo;
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  struct System_String_o *format; // x21
  struct System_Object_array *args; // x8
  _BOOL4 v24; // w25
  bool v25; // w27
  char v26; // w29
  char v27; // w28
  char v28; // w26
  System_String_o *v29; // x23
  int32_t v30; // w22
  uint16_t Chars; // w0
  int v32; // w8
  _BOOL8 v33; // x0
  struct System_Object_array *v34; // x8
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  __int64 *v37; // x8
  __int64 *v38; // x8
  int32_t result; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v40; // [xsp+8h] [xbp-68h] BYREF
  __int16 v41[2]; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B1A89C & 1) == 0 )
  {
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, message, gameObject);
    sub_1BCA7E0(&char_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_25632/*"書式指定項目が不正です"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_25574/*"パラメータ"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_25621/*"文字列"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_25615/*"引数"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_25616/*"引数を超えたのインデックスを指しています"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v20, v21);
    byte_4B1A89C = 1;
  }
  v41[0] = 0;
  result = 0;
  v40 = 0;
  if ( !parameter )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, message);
    v37 = &StringLiteral_25574/*"パラメータ"*/;
    goto LABEL_59;
  }
  format = parameter->fields.format;
  if ( !format )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, message);
    v37 = &StringLiteral_25621/*"文字列"*/;
    goto LABEL_59;
  }
  args = parameter->fields.args;
  if ( !args || args->max_length == 1 && !args->m_Items[0] )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, message);
    v37 = &StringLiteral_25615/*"引数"*/;
LABEL_59:
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)*v37, message, (const MethodInfo *)gameObject);
    return;
  }
  if ( format->fields._stringLength < 1 )
  {
    v28 = 0;
    v27 = 0;
    v26 = 0;
    v24 = 0;
LABEL_62:
    if ( (v28 & 1) != 0 || (v27 & 1) != 0 || (v26 & 1) != 0 || v24 )
      goto LABEL_66;
    return;
  }
  LOBYTE(v24) = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0LL;
  v30 = 0;
  do
  {
    Chars = System_String__get_Chars(format, v30, 0LL);
    v41[0] = Chars;
    if ( v24 )
    {
      if ( Chars == 123 )
        goto LABEL_12;
      v29 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_20:
      if ( Chars == 44 || Chars == 125 || Chars == 58 )
      {
        v33 = System_Int32__TryParse(v29, &v40, 0LL);
        if ( !v33 )
          goto LABEL_66;
        v34 = parameter->fields.args;
        if ( !v34 )
          sub_1BCAA3C(v33, message);
        if ( v40 >= (signed int)v34->max_length )
        {
          if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, message);
          v38 = &StringLiteral_25616/*"引数を超えたのインデックスを指しています"*/;
          goto LABEL_69;
        }
        v32 = (unsigned __int16)v41[0];
        if ( v41[0] == 44 )
        {
          v29 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_28:
          v26 = 0;
          v24 = 0;
          v27 = 1;
          goto LABEL_47;
        }
LABEL_29:
        v26 = 0;
        v24 = 0;
        v28 |= v32 == 58;
        goto LABEL_47;
      }
      if ( (unsigned __int16)(Chars - 48) > 9u )
        goto LABEL_66;
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo, message);
      v35 = System_Char__ToString((uint16_t)v41, 0LL);
      v29 = System_String__Concat_62401220(v29, v35, 0LL);
      v24 = 0;
      v26 = 1;
      goto LABEL_47;
    }
    if ( (v26 & 1) != 0 )
      goto LABEL_20;
    if ( (v27 & 1) != 0 )
    {
      if ( Chars != 125 && Chars != 58 )
      {
        if ( (unsigned __int16)(Chars - 48) >= 0xAu && Chars != 45 && Chars != 32 )
          goto LABEL_66;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo, message);
        v36 = System_Char__ToString((uint16_t)v41, 0LL);
        v29 = System_String__Concat_62401220(v29, v36, 0LL);
        goto LABEL_28;
      }
      if ( !System_Int32__TryParse(v29, &result, 0LL) )
        goto LABEL_66;
      v32 = (unsigned __int16)v41[0];
      v27 = 0;
      goto LABEL_29;
    }
    if ( (v28 & 1) != 0 )
    {
      if ( Chars == 123 )
        goto LABEL_66;
      v27 = 0;
      v26 = 0;
      v24 = 0;
      v28 = Chars != 125;
    }
    else
    {
      if ( v25 )
      {
        if ( Chars != 125 )
          goto LABEL_66;
        v28 = 0;
        v27 = 0;
        v26 = 0;
        v25 = 0;
LABEL_12:
        v24 = 0;
        goto LABEL_47;
      }
      v24 = Chars == 123;
      v28 = 0;
      v27 = 0;
      v26 = 0;
      v25 = Chars == 125;
    }
LABEL_47:
    ++v30;
  }
  while ( v30 < format->fields._stringLength );
  if ( !v25 )
    goto LABEL_62;
LABEL_66:
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, message);
  v38 = &StringLiteral_25632/*"書式指定項目が不正です"*/;
LABEL_69:
  Fgo_Assertions_Assert__GetEffectiveAssertMessage((System_String_o *)*v38, message, (const MethodInfo *)gameObject);
}


void __fastcall Fgo_Assertions_Assert__CanParse___Il2CppFullySharedGenericType_(
        System_String_o *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2EF21FC *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  Il2CppType *_0_T; // x21
  Il2CppObject *TypeFromHandle; // x21
  System_Type_o *v43; // x0
  __int64 v44; // x1
  System_String_o *v45; // x0
  __int64 v46; // x1
  System_String_o *v47; // x20
  intptr_t v48; // w22
  System_Type_o *v49; // x0
  __int64 v50; // x1
  __int64 v51; // x1
  intptr_t v52; // w22
  System_Type_o *v53; // x0
  __int64 v54; // x1
  intptr_t v55; // w22
  System_Type_o *v56; // x0
  __int64 v57; // x1
  intptr_t v58; // w22
  System_Type_o *v59; // x0
  __int64 v60; // x1
  intptr_t v61; // w22
  System_Type_o *v62; // x0
  __int64 v63; // x1
  intptr_t v64; // w22
  System_Type_o *v65; // x0
  __int64 v66; // x1
  intptr_t v67; // w22
  System_Type_o *v68; // x0
  __int64 v69; // x1
  intptr_t v70; // w22
  System_Type_o *v71; // x0
  __int64 v72; // x1
  intptr_t v73; // w22
  System_Type_o *v74; // x0
  __int64 v75; // x1
  intptr_t v76; // w22
  System_Type_o *v77; // x0
  double v78; // [xsp+0h] [xbp-70h] BYREF
  float v79; // [xsp+Ch] [xbp-64h] BYREF
  uint64_t v80; // [xsp+10h] [xbp-60h] BYREF
  int64_t v81; // [xsp+18h] [xbp-58h] BYREF
  uint32_t v82; // [xsp+24h] [xbp-4Ch] BYREF
  int32_t v83; // [xsp+28h] [xbp-48h] BYREF
  uint16_t v84; // [xsp+2Ch] [xbp-44h] BYREF
  int16_t v85[2]; // [xsp+30h] [xbp-40h] BYREF
  int8_t v86[4]; // [xsp+34h] [xbp-3Ch] BYREF
  uint8_t v87[4]; // [xsp+38h] [xbp-38h] BYREF
  bool result; // [xsp+3Ch] [xbp-34h] BYREF
  System_RuntimeTypeHandle_o v89; // 0:w0.4
  System_RuntimeTypeHandle_o v90; // 0:w0.4
  System_RuntimeTypeHandle_o v91; // 0:w0.4
  System_RuntimeTypeHandle_o v92; // 0:w0.4
  System_RuntimeTypeHandle_o v93; // 0:w0.4
  System_RuntimeTypeHandle_o v94; // 0:w0.4
  System_RuntimeTypeHandle_o v95; // 0:w0.4
  System_RuntimeTypeHandle_o v96; // 0:w0.4
  System_RuntimeTypeHandle_o v97; // 0:w0.4
  System_RuntimeTypeHandle_o v98; // 0:w0.4
  System_RuntimeTypeHandle_o v99; // 0:w0.4
  System_RuntimeTypeHandle_o v100; // 0:w0.4

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, message, gameObject);
    sub_1BCA7E0(&bool_var, v9, v10);
    sub_1BCA7E0(&bool_TypeInfo, v11, v12);
    sub_1BCA7E0(&qword_4906BA8, v13, v14);
    sub_1BCA7E0(&double_var, v15, v16);
    sub_1BCA7E0(&short_var, v17, v18);
    sub_1BCA7E0(&int_var, v19, v20);
    sub_1BCA7E0(&long_var, v21, v22);
    sub_1BCA7E0(&sbyte_var, v23, v24);
    sub_1BCA7E0(&float_var, v25, v26);
    sub_1BCA7E0(&System_Type_TypeInfo, v27, v28);
    sub_1BCA7E0(&ushort_var, v29, v30);
    sub_1BCA7E0(&uint_var, v31, v32);
    sub_1BCA7E0(&ulong_var, v33, v34);
    sub_1BCA7E0(&StringLiteral_25603/*"型が不正です:{0}"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_25621/*"文字列"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_295/*" isNotBoolean"*/, v39, v40);
    if ( !method->rgctx_data )
      sub_1C1C718(method, message);
  }
  result = 0;
  v87[0] = 0;
  v86[0] = 0;
  v85[0] = 0;
  v84 = 0;
  v82 = 0;
  v83 = 0;
  v80 = 0LL;
  v81 = 0LL;
  v79 = 0.0;
  v78 = 0.0;
  if ( value )
  {
    _0_T = method->rgctx_data->_0_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, message);
    v89.fields.value = (int)_0_T;
    TypeFromHandle = (Il2CppObject *)System_Type__GetTypeFromHandle(v89, 0LL);
    v90.fields.value = (int)bool_var;
    v43 = System_Type__GetTypeFromHandle(v90, 0LL);
    if ( System_Type__op_Equality(v43, (System_Type_o *)TypeFromHandle, 0LL) )
    {
      if ( !bool_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(bool_TypeInfo, v44);
      if ( !System_Boolean__TryParse(value, &result, 0LL) )
      {
        v45 = System_String__Concat_62401220(value, (System_String_o *)StringLiteral_295/*" isNotBoolean"*/, 0LL);
LABEL_12:
        v47 = v45;
        if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v46);
        Fgo_Assertions_Assert__GetEffectiveAssertMessage(v47, message, 0LL);
      }
    }
    else
    {
      v48 = (int)qword_4906BA8;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v44);
      v91.fields.value = v48;
      v49 = System_Type__GetTypeFromHandle(v91, 0LL);
      if ( System_Type__op_Equality(v49, (System_Type_o *)TypeFromHandle, 0LL) )
      {
        if ( System_Byte__TryParse(value, v87, 0LL) )
          return;
      }
      else
      {
        v52 = (int)sbyte_var;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v50);
        v92.fields.value = v52;
        v53 = System_Type__GetTypeFromHandle(v92, 0LL);
        if ( System_Type__op_Equality(v53, (System_Type_o *)TypeFromHandle, 0LL) )
        {
          if ( System_SByte__TryParse(value, v86, 0LL) )
            return;
        }
        else
        {
          v55 = (int)short_var;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v54);
          v93.fields.value = v55;
          v56 = System_Type__GetTypeFromHandle(v93, 0LL);
          if ( System_Type__op_Equality(v56, (System_Type_o *)TypeFromHandle, 0LL) )
          {
            if ( System_Int16__TryParse(value, v85, 0LL) )
              return;
          }
          else
          {
            v58 = (int)ushort_var;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v57);
            v94.fields.value = v58;
            v59 = System_Type__GetTypeFromHandle(v94, 0LL);
            if ( System_Type__op_Equality(v59, (System_Type_o *)TypeFromHandle, 0LL) )
            {
              if ( System_UInt16__TryParse(value, &v84, 0LL) )
                return;
            }
            else
            {
              v61 = (int)int_var;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v60);
              v95.fields.value = v61;
              v62 = System_Type__GetTypeFromHandle(v95, 0LL);
              if ( System_Type__op_Equality(v62, (System_Type_o *)TypeFromHandle, 0LL) )
              {
                if ( System_Int32__TryParse(value, &v83, 0LL) )
                  return;
              }
              else
              {
                v64 = (int)uint_var;
                if ( !System_Type_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v63);
                v96.fields.value = v64;
                v65 = System_Type__GetTypeFromHandle(v96, 0LL);
                if ( System_Type__op_Equality(v65, (System_Type_o *)TypeFromHandle, 0LL) )
                {
                  if ( System_UInt32__TryParse(value, &v82, 0LL) )
                    return;
                }
                else
                {
                  v67 = (int)long_var;
                  if ( !System_Type_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v66);
                  v97.fields.value = v67;
                  v68 = System_Type__GetTypeFromHandle(v97, 0LL);
                  if ( System_Type__op_Equality(v68, (System_Type_o *)TypeFromHandle, 0LL) )
                  {
                    if ( System_Int64__TryParse(value, &v81, 0LL) )
                      return;
                  }
                  else
                  {
                    v70 = (int)ulong_var;
                    if ( !System_Type_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v69);
                    v98.fields.value = v70;
                    v71 = System_Type__GetTypeFromHandle(v98, 0LL);
                    if ( System_Type__op_Equality(v71, (System_Type_o *)TypeFromHandle, 0LL) )
                    {
                      if ( System_UInt64__TryParse(value, &v80, 0LL) )
                        return;
                    }
                    else
                    {
                      v73 = (int)float_var;
                      if ( !System_Type_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v72);
                      v99.fields.value = v73;
                      v74 = System_Type__GetTypeFromHandle(v99, 0LL);
                      if ( System_Type__op_Equality(v74, (System_Type_o *)TypeFromHandle, 0LL) )
                      {
                        if ( System_Single__TryParse(value, &v79, 0LL) )
                          return;
                      }
                      else
                      {
                        v76 = (int)double_var;
                        if ( !System_Type_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v75);
                        v100.fields.value = v76;
                        v77 = System_Type__GetTypeFromHandle(v100, 0LL);
                        if ( !System_Type__op_Equality(v77, (System_Type_o *)TypeFromHandle, 0LL) )
                        {
                          v45 = System_String__Format((System_String_o *)StringLiteral_25603/*"型が不正です:{0}"*/, TypeFromHandle, 0LL);
                          goto LABEL_12;
                        }
                        if ( System_Double__TryParse(value, &v78, 0LL) )
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
        j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v51);
      Fgo_Assertions_Assert__GetParseAssertMessage(value, message, 0LL);
    }
  }
  else
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, message);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25621/*"文字列"*/, message, 0LL);
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
        const MethodInfo_2EF2F04 *method)
{
  long double v5; // q0
  __int64 v6; // x21
  void **v7; // x22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  __int64 *v9; // x19
  char v10; // w20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x8
  __int16 v23; // w9
  __int64 v24; // x24
  __int64 v25; // x0
  int v26; // w10
  char *v27; // x26
  __int64 v28; // x0
  char *v29; // x25
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v30; // x1
  long double v31; // q0
  _QWORD *v32; // x8
  __int64 v33; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v34; // x3
  int64_t v35; // x23
  _QWORD *v36; // x26
  void **v37; // x1
  long double v38; // q0
  _QWORD *v39; // x8
  __int64 v40; // x0
  void **v41; // x3
  int64_t v42; // x21
  __int64 v43; // x0
  __int64 v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x22
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  void *v58; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t *v65; // x8
  int64_t v66; // x1
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  void *v73; // x1
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  __int64 v80; // x1
  System_String_o *v81; // x20
  __int64 v83; // [xsp+0h] [xbp-30h] BYREF
  System_String_o *monitor; // [xsp+8h] [xbp-28h]
  void **v85; // [xsp+10h] [xbp-20h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v86; // [xsp+18h] [xbp-18h] BYREF
  int64_t v87; // [xsp+20h] [xbp-10h]
  __int64 v88; // [xsp+28h] [xbp-8h]

  monitor = (System_String_o *)actual.monitor;
  v6 = equal;
  v7 = (void **)expected.monitor;
  klass = expected.klass;
  v88 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v85 = (void **)expected.monitor;
  v86 = expected.klass;
  v9 = *(__int64 **)(equal + 56LL);
  v10 = (char)actual.klass;
  if ( !v9 )
  {
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, expected.monitor, actual.klass);
    sub_1BCA7E0(&string___TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_22414/*"null"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_19509/*"expectedEqual"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_19510/*"expectedNotEqual"*/, v19, v20);
    v9 = *(__int64 **)(v6 + 56);
    if ( !v9 )
    {
      sub_1C1C718(v6, v21);
      v9 = *(__int64 **)(v6 + 56);
    }
  }
  v22 = *v9;
  v23 = *(_WORD *)(*v9 + 309);
  v24 = *(unsigned int *)(*v9 + 252);
  if ( (v23 & 1) != 0 )
  {
    v26 = *(_DWORD *)(*v9 + 252);
  }
  else
  {
    v25 = sub_1C1C6BC(v5);
    v9 = *(__int64 **)(v6 + 56);
    v26 = *(_DWORD *)(v25 + 252);
    v22 = *v9;
    v23 = *(_WORD *)(*v9 + 309);
  }
  v27 = (char *)&v83 - (((unsigned int)(v26 + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( (v23 & 1) != 0 )
  {
    v28 = v22;
  }
  else
  {
    v28 = sub_1C1C6BC(v5);
    v9 = *(__int64 **)(v6 + 56);
    v22 = *v9;
  }
  v29 = (char *)&v83 - (((unsigned int)(*(_DWORD *)(v28 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( *(int *)(v22 + 40) >= 0 )
    v30 = &v86;
  else
    v30 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v83 - ((v24 + 15) & 0x1FFFFFFF0LL), v30, v24);
  if ( (sub_1BCA9F0(*v9, (char *)&v83 - ((v24 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
  {
    v32 = *(_QWORD **)(v6 + 56);
    v33 = *v32;
    if ( (*(_BYTE *)(*v32 + 309LL) & 1) == 0 )
    {
      LODWORD(v33) = sub_1C1C6BC(v31);
      v32 = *(_QWORD **)(v6 + 56);
      klass = v86;
    }
    if ( *(int *)(*v32 + 40LL) >= 0 )
      v34 = &v86;
    else
      v34 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    sub_1BCB248(v33, v32[1], (int)v27, v34);
    v35 = v87;
    v7 = v85;
  }
  else
  {
    v35 = StringLiteral_22414/*"null"*/;
  }
  v36 = *(_QWORD **)(v6 + 56);
  if ( *(int *)(*v36 + 40LL) >= 0 )
    v37 = (void **)&v85;
  else
    v37 = v7;
  memcpy((char *)&v83 - ((v24 + 15) & 0x1FFFFFFF0LL), v37, v24);
  if ( (sub_1BCA9F0(*v36, (char *)&v83 - ((v24 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
  {
    v39 = *(_QWORD **)(v6 + 56);
    v40 = *v39;
    if ( (*(_BYTE *)(*v39 + 309LL) & 1) == 0 )
    {
      LODWORD(v40) = sub_1C1C6BC(v38);
      v39 = *(_QWORD **)(v6 + 56);
      v7 = v85;
    }
    if ( *(int *)(*v39 + 40LL) >= 0 )
      v41 = (void **)&v85;
    else
      v41 = v7;
    sub_1BCB248(v40, v39[1], (int)v29, v41);
    v42 = v87;
  }
  else
  {
    v42 = StringLiteral_22414/*"null"*/;
  }
  v43 = sub_1BCA888(string___TypeInfo, 5LL);
  if ( !v43 )
    sub_1BCAA3C(0LL, v44);
  v51 = v43;
  if ( !*(_DWORD *)(v43 + 24) )
    goto LABEL_43;
  *(_QWORD *)(v43 + 32) = v35;
  sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 32), v35, v45, v46, v47, v48, v49, v50);
  if ( *(_DWORD *)(v51 + 24) <= 1u )
    goto LABEL_43;
  v58 = StringLiteral_116/*" "*/;
  *(_QWORD *)(v51 + 40) = StringLiteral_116/*" "*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 40), (int64_t)v58, v52, v53, v54, v55, v56, v57);
  v65 = (int64_t *)&StringLiteral_19510/*"expectedNotEqual"*/;
  if ( (v10 & 1) == 0 )
    v65 = (int64_t *)&StringLiteral_19509/*"expectedEqual"*/;
  if ( *(_DWORD *)(v51 + 24) <= 2u
    || (v66 = *v65,
        *(_QWORD *)(v51 + 48) = *v65,
        sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 48), v66, v59, v60, v61, v62, v63, v64),
        *(_DWORD *)(v51 + 24) <= 3u)
    || (v73 = StringLiteral_116/*" "*/,
        *(_QWORD *)(v51 + 56) = StringLiteral_116/*" "*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 56), (int64_t)v73, v67, v68, v69, v70, v71, v72),
        *(_DWORD *)(v51 + 24) <= 4u) )
  {
LABEL_43:
    sub_1BCAA44(v43, v44);
  }
  *(_QWORD *)(v51 + 64) = v42;
  sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 64), v42, v74, v75, v76, v77, v78, v79);
  v81 = System_String__Concat_62414748((System_String_array *)v51, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v80);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v81, monitor, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_float_(
        float expected,
        float actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2EF2D38 *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  System_String_o *v17; // x23
  float v18; // s0
  System_String_o *v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  void *v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t *v42; // x8
  int64_t v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  void *v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x1
  System_String_o *v58; // x20
  float v60; // [xsp+8h] [xbp-38h] BYREF
  float v61; // [xsp+Ch] [xbp-34h] BYREF

  v60 = actual;
  v61 = expected;
  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, message, method);
    sub_1BCA7E0(&string___TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_19509/*"expectedEqual"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_19510/*"expectedNotEqual"*/, v14, v15);
    if ( !method->rgctx_data )
      sub_1C1C718(method, v16);
  }
  v17 = System_Single__ToString(expected, (const MethodInfo *)&v61);
  v19 = System_Single__ToString(v18, (const MethodInfo *)&v60);
  v20 = sub_1BCA888(string___TypeInfo, 5LL);
  if ( !v20 )
    sub_1BCAA3C(0LL, v21);
  v28 = v20;
  if ( !*(_DWORD *)(v20 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v20 + 32) = v17;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 32), (int64_t)v17, v22, v23, v24, v25, v26, v27);
  if ( *(_DWORD *)(v28 + 24) <= 1u )
    goto LABEL_15;
  v35 = StringLiteral_116/*" "*/;
  *(_QWORD *)(v28 + 40) = StringLiteral_116/*" "*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 40), (int64_t)v35, v29, v30, v31, v32, v33, v34);
  v42 = (int64_t *)&StringLiteral_19510/*"expectedNotEqual"*/;
  if ( !equal )
    v42 = (int64_t *)&StringLiteral_19509/*"expectedEqual"*/;
  if ( *(_DWORD *)(v28 + 24) <= 2u
    || (v43 = *v42,
        *(_QWORD *)(v28 + 48) = *v42,
        sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 48), v43, v36, v37, v38, v39, v40, v41),
        *(_DWORD *)(v28 + 24) <= 3u)
    || (v50 = StringLiteral_116/*" "*/,
        *(_QWORD *)(v28 + 56) = StringLiteral_116/*" "*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 56), (int64_t)v50, v44, v45, v46, v47, v48, v49),
        *(_DWORD *)(v28 + 24) <= 4u) )
  {
LABEL_15:
    sub_1BCAA44(v20, v21);
  }
  *(_QWORD *)(v28 + 64) = v19;
  sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 64), (int64_t)v19, v51, v52, v53, v54, v55, v56);
  v58 = System_String__Concat_62414748((System_String_array *)v28, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v57);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v58, message, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_int_(
        int32_t expected,
        int32_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2EF279C *method)
{
  const MethodInfo_2EF279C_RGCTXs *rgctx_data; // x8
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  System_String_o *v18; // x23
  System_String_o *v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  void *v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t *v42; // x8
  int64_t v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  void *v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x1
  System_String_o *v58; // x20
  int32_t v60; // [xsp+8h] [xbp-38h] BYREF
  int32_t v61; // [xsp+Ch] [xbp-34h] BYREF

  v60 = actual;
  v61 = expected;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&actual, equal);
    sub_1BCA7E0(&string___TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_19509/*"expectedEqual"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_19510/*"expectedNotEqual"*/, v15, v16);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(method, v17);
      rgctx_data = method->rgctx_data;
    }
  }
  v18 = System_Int32__ToString((int32_t)&v61, (const MethodInfo *)rgctx_data[1]._0_T);
  v19 = System_Int32__ToString((int32_t)&v60, (const MethodInfo *)method->rgctx_data[1]._0_T);
  v20 = sub_1BCA888(string___TypeInfo, 5LL);
  if ( !v20 )
    sub_1BCAA3C(0LL, v21);
  v28 = v20;
  if ( !*(_DWORD *)(v20 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v20 + 32) = v18;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 32), (int64_t)v18, v22, v23, v24, v25, v26, v27);
  if ( *(_DWORD *)(v28 + 24) <= 1u )
    goto LABEL_15;
  v35 = StringLiteral_116/*" "*/;
  *(_QWORD *)(v28 + 40) = StringLiteral_116/*" "*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 40), (int64_t)v35, v29, v30, v31, v32, v33, v34);
  v42 = (int64_t *)&StringLiteral_19510/*"expectedNotEqual"*/;
  if ( !equal )
    v42 = (int64_t *)&StringLiteral_19509/*"expectedEqual"*/;
  if ( *(_DWORD *)(v28 + 24) <= 2u
    || (v43 = *v42,
        *(_QWORD *)(v28 + 48) = *v42,
        sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 48), v43, v36, v37, v38, v39, v40, v41),
        *(_DWORD *)(v28 + 24) <= 3u)
    || (v50 = StringLiteral_116/*" "*/,
        *(_QWORD *)(v28 + 56) = StringLiteral_116/*" "*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 56), (int64_t)v50, v44, v45, v46, v47, v48, v49),
        *(_DWORD *)(v28 + 24) <= 4u) )
  {
LABEL_15:
    sub_1BCAA44(v20, v21);
  }
  *(_QWORD *)(v28 + 64) = v19;
  sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 64), (int64_t)v19, v51, v52, v53, v54, v55, v56);
  v58 = System_String__Concat_62414748((System_String_array *)v28, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v57);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v58, message, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_long_(
        int64_t expected,
        int64_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2EF2968 *method)
{
  const MethodInfo_2EF2968_RGCTXs *rgctx_data; // x8
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  System_String_o *v18; // x23
  System_String_o *v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  void *v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t *v42; // x8
  int64_t v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  void *v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x1
  System_String_o *v58; // x20
  int64_t v60; // [xsp+8h] [xbp-48h] BYREF
  int64_t v61; // [xsp+18h] [xbp-38h] BYREF

  v61 = expected;
  v60 = actual;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, actual, equal);
    sub_1BCA7E0(&string___TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_19509/*"expectedEqual"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_19510/*"expectedNotEqual"*/, v15, v16);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(method, v17);
      rgctx_data = method->rgctx_data;
    }
  }
  v18 = System_Int64__ToString((int64_t)&v61, (const MethodInfo *)rgctx_data[1]._0_T);
  v19 = System_Int64__ToString((int64_t)&v60, (const MethodInfo *)method->rgctx_data[1]._0_T);
  v20 = sub_1BCA888(string___TypeInfo, 5LL);
  if ( !v20 )
    sub_1BCAA3C(0LL, v21);
  v28 = v20;
  if ( !*(_DWORD *)(v20 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v20 + 32) = v18;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 32), (int64_t)v18, v22, v23, v24, v25, v26, v27);
  if ( *(_DWORD *)(v28 + 24) <= 1u )
    goto LABEL_15;
  v35 = StringLiteral_116/*" "*/;
  *(_QWORD *)(v28 + 40) = StringLiteral_116/*" "*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 40), (int64_t)v35, v29, v30, v31, v32, v33, v34);
  v42 = (int64_t *)&StringLiteral_19510/*"expectedNotEqual"*/;
  if ( !equal )
    v42 = (int64_t *)&StringLiteral_19509/*"expectedEqual"*/;
  if ( *(_DWORD *)(v28 + 24) <= 2u
    || (v43 = *v42,
        *(_QWORD *)(v28 + 48) = *v42,
        sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 48), v43, v36, v37, v38, v39, v40, v41),
        *(_DWORD *)(v28 + 24) <= 3u)
    || (v50 = StringLiteral_116/*" "*/,
        *(_QWORD *)(v28 + 56) = StringLiteral_116/*" "*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 56), (int64_t)v50, v44, v45, v46, v47, v48, v49),
        *(_DWORD *)(v28 + 24) <= 4u) )
  {
LABEL_15:
    sub_1BCAA44(v20, v21);
  }
  *(_QWORD *)(v28 + 64) = v19;
  sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 64), (int64_t)v19, v51, v52, v53, v54, v55, v56);
  v58 = System_String__Concat_62414748((System_String_array *)v28, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v57);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v58, message, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Fgo_Assertions_Assert__GetComparisonAssertMessage_object_(
        Il2CppObject *expected,
        Il2CppObject *actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_2EF2B3C *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int64_t v19; // x23
  int64_t v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x22
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  void *v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t *v43; // x8
  int64_t v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  void *v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x1
  System_String_o *v59; // x20

  if ( (byte_4B1BC4D & 1) == 0 )
  {
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, actual, equal);
    sub_1BCA7E0(&string___TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_22414/*"null"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_19509/*"expectedEqual"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_19510/*"expectedNotEqual"*/, v17, v18);
    byte_4B1BC4D = 1;
  }
  if ( expected )
    v19 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, bool, System_String_o *, const MethodInfo_2EF2B3C *))expected->klass->vtable[3].method)(
            expected,
            expected->klass->vtable[4].methodPtr,
            equal,
            message,
            method);
  else
    v19 = StringLiteral_22414/*"null"*/;
  if ( actual )
    v20 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))actual->klass->vtable[3].method)(
            actual,
            actual->klass->vtable[4].methodPtr);
  else
    v20 = StringLiteral_22414/*"null"*/;
  v21 = sub_1BCA888(string___TypeInfo, 5LL);
  if ( !v21 )
    sub_1BCAA3C(0LL, v22);
  v29 = v21;
  if ( !*(_DWORD *)(v21 + 24) )
    goto LABEL_21;
  *(_QWORD *)(v21 + 32) = v19;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 32), v19, v23, v24, v25, v26, v27, v28);
  if ( *(_DWORD *)(v29 + 24) <= 1u )
    goto LABEL_21;
  v36 = StringLiteral_116/*" "*/;
  *(_QWORD *)(v29 + 40) = StringLiteral_116/*" "*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 40), (int64_t)v36, v30, v31, v32, v33, v34, v35);
  v43 = (int64_t *)(equal ? &StringLiteral_19510/*"expectedNotEqual"*/ : &StringLiteral_19509/*"expectedEqual"*/);
  if ( *(_DWORD *)(v29 + 24) <= 2u
    || (v44 = *v43,
        *(_QWORD *)(v29 + 48) = *v43,
        sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 48), v44, v37, v38, v39, v40, v41, v42),
        *(_DWORD *)(v29 + 24) <= 3u)
    || (v51 = StringLiteral_116/*" "*/,
        *(_QWORD *)(v29 + 56) = StringLiteral_116/*" "*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 56), (int64_t)v51, v45, v46, v47, v48, v49, v50),
        *(_DWORD *)(v29 + 24) <= 4u) )
  {
LABEL_21:
    sub_1BCAA44(v21, v22);
  }
  *(_QWORD *)(v29 + 64) = v20;
  sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 64), v20, v52, v53, v54, v55, v56, v57);
  v59 = System_String__Concat_62414748((System_String_array *)v29, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v58);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v59, message, 0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetEffectiveAssertMessage(
        System_String_o *defaultMessage,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_4B1A88D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_56/*"\n("*/, message, method);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v5, v6);
    byte_4B1A88D = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    return defaultMessage;
  else
    return System_String__Concat_62414484(
             message,
             (System_String_o *)StringLiteral_56/*"\n("*/,
             defaultMessage,
             (System_String_o *)StringLiteral_809/*")"*/,
             0LL);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetNullAssertMessage(
        System_String_o *modelName,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_String_o *v9; // x20

  if ( (byte_4B1A899 & 1) == 0 )
  {
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, message, method);
    sub_1BCA7E0(&StringLiteral_25532/*"が null です"*/, v5, v6);
    byte_4B1A899 = 1;
  }
  v9 = System_String__Concat_62401220(modelName, (System_String_o *)StringLiteral_25532/*"が null です"*/, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v7);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v9, message, v8);
}


System_String_o *__fastcall Fgo_Assertions_Assert__GetParseAssertMessage(
        System_String_o *value,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_String_o *v9; // x20

  if ( (byte_4B1A89B & 1) == 0 )
  {
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, message, method);
    sub_1BCA7E0(&StringLiteral_296/*" isNotNumbers"*/, v5, v6);
    byte_4B1A89B = 1;
  }
  v9 = System_String__Concat_62401220(value, (System_String_o *)StringLiteral_296/*" isNotNumbers"*/, 0LL);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v7);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v9, message, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__HasContainKey___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_T1__T2__o *dic,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2EF3298 *method)
{
  long double v7; // q0
  __int64 v8; // x21
  System_String_o *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x20
  __int64 v11; // x8
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x0
  __int64 v22; // x24
  int v23; // w8
  char *v24; // x23
  System_String_o *v25; // x25
  __int64 v26; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v27; // x1
  __int64 v28; // x1
  __int64 v29; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v30; // x1
  __int64 *v31; // x1
  __int64 v32; // x0
  long double v33; // q0
  __int64 v34; // x9
  __int64 v35; // x8
  __int64 v36; // x0
  __int64 *v37; // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v38; // x3
  __int64 v39; // x1
  System_String_o *v40; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v41; // [xsp+0h] [xbp-20h] BYREF
  System_String_o *v42; // [xsp+8h] [xbp-18h] BYREF
  char v43[4]; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v44; // [xsp+18h] [xbp-8h]

  v8 = *(_QWORD *)&line;
  monitor = (System_String_o *)key.monitor;
  klass = key.klass;
  v44 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v41 = key.klass;
  v11 = *(_QWORD *)(*(_QWORD *)&line + 56LL);
  if ( !v11 )
  {
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, key.klass, key.monitor);
    sub_1BCA7E0(&StringLiteral_25564/*"ディクショナリ"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_827/*") の値がディクショナリに含まれていません"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_21208/*"key("*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_25551/*"キー"*/, v19, v20);
    v11 = *(_QWORD *)(v8 + 56);
    if ( !v11 )
    {
      sub_1C1C718(v8, key.klass);
      v11 = *(_QWORD *)(v8 + 56);
    }
  }
  v21 = *(_QWORD *)(v11 + 8);
  v22 = *(unsigned int *)(v21 + 252);
  v23 = *(_DWORD *)(v21 + 252);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v23 = *(_DWORD *)(sub_1C1C6BC(v7) + 252);
  v24 = (char *)&v41 - (((unsigned int)(v23 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v25 = (System_String_o *)((char *)&v41 - ((v22 + 15) & 0x1FFFFFFF0LL));
  if ( !dic )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, key.klass);
    v37 = &StringLiteral_25564/*"ディクショナリ"*/;
    goto LABEL_25;
  }
  v26 = *(_QWORD *)(v8 + 56);
  if ( *(int *)(*(_QWORD *)(v26 + 8) + 40LL) >= 0 )
    v27 = &v41;
  else
    v27 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v41 - ((v22 + 15) & 0x1FFFFFFF0LL), v27, v22);
  if ( (sub_1BCA9F0(*(_QWORD *)(v26 + 8), (char *)&v41 - ((v22 + 15) & 0x1FFFFFFF0LL)) & 1) == 0 )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v28);
    v37 = &StringLiteral_25551/*"キー"*/;
LABEL_25:
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)*v37, monitor, 0LL);
    return;
  }
  v29 = *(_QWORD *)(v8 + 56);
  if ( *(int *)(*(_QWORD *)(v29 + 8) + 40LL) >= 0 )
    v30 = &v41;
  else
    v30 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v41 - ((v22 + 15) & 0x1FFFFFFF0LL), v30, v22);
  v31 = *(__int64 **)(v29 + 16);
  v32 = *v31;
  if ( (*(_DWORD *)(*(_QWORD *)(v29 + 8) + 40LL) & 0x80000000) == 0 )
    v25 = (System_String_o *)v25->klass;
  v42 = v25;
  ((void (__fastcall *)(__int64, __int64 *, System_Collections_Generic_Dictionary_T1__T2__o *, System_String_o **, char *))v31[2])(
    v32,
    v31,
    dic,
    &v42,
    v43);
  if ( !v43[0] )
  {
    v34 = *(_QWORD *)(v8 + 56);
    v35 = *(_QWORD *)(v34 + 8);
    if ( (*(_BYTE *)(v35 + 309) & 1) != 0 )
    {
      v36 = *(_QWORD *)(v34 + 8);
    }
    else
    {
      LODWORD(v36) = sub_1C1C6BC(v33);
      v34 = *(_QWORD *)(v8 + 56);
      klass = v41;
      v35 = *(_QWORD *)(v34 + 8);
    }
    if ( *(int *)(v35 + 40) >= 0 )
      v38 = &v41;
    else
      v38 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    sub_1BCB248(v36, *(_QWORD *)(v34 + 24), (int)v24, v38);
    v40 = System_String__Concat_62412480(
            (System_String_o *)StringLiteral_21208/*"key("*/,
            v42,
            (System_String_o *)StringLiteral_827/*") の値がディクショナリに含まれていません"*/,
            0LL);
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v39);
    Fgo_Assertions_Assert__GetEffectiveAssertMessage(v40, monitor, 0LL);
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
  if ( (byte_4B1A897 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16068/*"[AssetData]\n{0}をロードできませんでした"*/, assetName, gameObject);
    byte_4B1A897 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_16068/*"[AssetData]\n{0}をロードできませんでした"*/, (Il2CppObject *)assetName, 0LL);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  Il2CppObject *v21; // x0
  System_String_o *v22; // x20
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v24; // [xsp+18h] [xbp-28h] BYREF
  int32_t v25; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4B1A89A & 1) == 0 )
  {
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&index, message);
    sub_1BCA7E0(&int_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_20853/*"index({0}) の値が負です"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_20854/*"index({0}) の値が配列の要素数({1})を超えています"*/, v14, v15);
    byte_4B1A89A = 1;
  }
  if ( (index & 0x80000000) != 0 )
  {
    v25 = index;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
    v18 = System_String__Format((System_String_o *)StringLiteral_20853/*"index({0}) の値が負です"*/, v21, 0LL);
  }
  else
  {
    if ( count > index )
      return;
    v24 = index;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    v23 = count;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v18 = System_String__Format_62415592((System_String_o *)StringLiteral_20854/*"index({0}) の値が配列の要素数({1})を超えています"*/, v16, v17, 0LL);
  }
  v22 = v18;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v19);
  Fgo_Assertions_Assert__GetEffectiveAssertMessage(v22, message, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__IsInRange___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2EF35B8 *method)
{
  __int64 v9; // x1
  __int64 v10; // x2

  if ( (byte_4B1BC4F & 1) == 0 )
  {
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&index, message);
    sub_1BCA7E0(&StringLiteral_25650/*"配列"*/, v9, v10);
    byte_4B1BC4F = 1;
  }
  if ( !array )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&index);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25650/*"配列"*/, message, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Fgo_Assertions_Assert__IsInRange___Il2CppFullySharedGenericType__49231156(
        System_Collections_Generic_List_T__o *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2EF3534 *method)
{
  __int64 v9; // x1
  __int64 v10; // x2

  if ( (byte_4B1BC4E & 1) == 0 )
  {
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&index, message);
    sub_1BCA7E0(&StringLiteral_25577/*"リスト"*/, v9, v10);
    byte_4B1BC4E = 1;
  }
  if ( !array )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&index);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25577/*"リスト"*/, message, 0LL);
  }
}


void __fastcall Fgo_Assertions_Assert__IsNotNull_object_(
        Il2CppObject *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_2EF363C *method)
{
  Il2CppClass *klass; // x8
  UnityEngine_Object_c *v8; // x0
  unsigned int methodPtr_low; // w10
  __int64 v10; // x9
  Il2CppObject *v11; // x0

  if ( (byte_4B1BC50 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, message, gameObject);
    byte_4B1BC50 = 1;
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message);
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
  __int64 v9; // x2

  if ( (byte_4B1A89D & 1) == 0 )
  {
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, message, gameObject);
    sub_1BCA7E0(&StringLiteral_25539/*"アクション"*/, v8, v9);
    byte_4B1A89D = 1;
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
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, message);
    Fgo_Assertions_Assert__GetNullAssertMessage(
      (System_String_o *)StringLiteral_25539/*"アクション"*/,
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
        const MethodInfo_2EF3700 *method)
{
  Il2CppClass *klass; // x8
  UnityEngine_Object_c *v8; // x0
  unsigned int methodPtr_low; // w10
  __int64 v10; // x9
  Il2CppObject *v11; // x0

  if ( (byte_4B1BC51 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, message, gameObject);
    byte_4B1BC51 = 1;
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message);
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
        const MethodInfo_2EF37C4 *method)
{
  if ( (byte_4B1BC52 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16116/*"[SerializeField]\n{0}の参照が切れています"*/, fieldName, gameObject);
    byte_4B1BC52 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_16116/*"[SerializeField]\n{0}の参照が切れています"*/, (Il2CppObject *)fieldName, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Fgo_Assertions_Assert_c *v13; // x0
  System_Collections_Generic_HashSet_T__o *suppressAsserts; // x0
  Fgo_Assertions_Assert_c *v15; // x0

  if ( (byte_4B1A896 & 1) == 0 )
  {
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, condition, message);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Contains__, v11, v12);
    byte_4B1A896 = 1;
  }
  if ( !condition )
  {
    v13 = Fgo_Assertions_Assert_TypeInfo;
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, condition);
      v13 = Fgo_Assertions_Assert_TypeInfo;
    }
    suppressAsserts = (System_Collections_Generic_HashSet_T__o *)v13->static_fields->suppressAsserts;
    if ( suppressAsserts )
    {
      if ( System_Collections_Generic_HashSet_Int32Enum___Contains(
             suppressAsserts,
             assertKey,
             (const MethodInfo_345741C *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Contains__) )
      {
        return;
      }
      v15 = Fgo_Assertions_Assert_TypeInfo;
      if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, condition);
        v15 = Fgo_Assertions_Assert_TypeInfo;
      }
      suppressAsserts = (System_Collections_Generic_HashSet_T__o *)v15->static_fields->suppressAsserts;
      if ( suppressAsserts )
      {
        System_Collections_Generic_HashSet_Int32Enum___Add(
          suppressAsserts,
          assertKey,
          (const MethodInfo_3457F2C *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Add__);
        return;
      }
    }
    sub_1BCAA3C(suppressAsserts, condition);
  }
}


void __fastcall Fgo_Assertions_Assert__OnFailed(
        System_String_o *message,
        System_String_o *expected,
        System_String_o *actual,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *v9; // x0
  __int64 v10; // x1
  Fgo_Assertions_Assert_c *v11; // x8
  System_String_o *v12; // x19
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x9
  struct System_Action_string__o *onFailedAction; // x9
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B1A889 & 1) == 0 )
  {
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, expected, actual);
    sub_1BCA7E0(&StringLiteral_25240/*"{0}\n(expected={1}, actual={2})"*/, v7, v8);
    byte_4B1A889 = 1;
  }
  v9 = System_String__Format_62415660(
         (System_String_o *)StringLiteral_25240/*"{0}\n(expected={1}, actual={2})"*/,
         (Il2CppObject *)message,
         (Il2CppObject *)expected,
         (Il2CppObject *)actual,
         0LL);
  v11 = Fgo_Assertions_Assert_TypeInfo;
  v12 = v9;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v10);
    v11 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v11->static_fields;
  if ( static_fields->enable )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, v10);
      v11 = Fgo_Assertions_Assert_TypeInfo;
      static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
    }
    onFailedAction = static_fields->onFailedAction;
    if ( onFailedAction )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11, v10);
        onFailedAction = Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedAction;
        if ( !onFailedAction )
          sub_1BCAA3C(v15, v16);
      }
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))onFailedAction->fields.m_target)(
        onFailedAction->fields.original_method_info,
        v12,
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
  if ( (byte_4B1A898 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16093/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/, key, gameObject);
    byte_4B1A898 = 1;
  }
  System_String__Format_62415592((System_String_o *)StringLiteral_16093/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/, (Il2CppObject *)name, (Il2CppObject *)key, 0LL);
}


void __fastcall Fgo_Assertions_Assert__OnFailed_47111496(
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  System_String_o *v24; // x23
  Il2CppObject *FileName; // x23
  Il2CppObject *v26; // x0
  __int64 v27; // x1
  Il2CppObject *v28; // x20
  System_String_o *name; // x0
  System_String_o *v30; // x0
  __int64 v31; // x1
  Fgo_Assertions_Assert_c *v32; // x8
  System_String_o *v33; // x21
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x9
  struct System_Action_string__o *onFailedAction; // x9
  struct System_Action_string__string__string__o *onFailedSendReport; // x9
  int32_t v37; // [xsp+Ch] [xbp-54h] BYREF

  v9 = message;
  v10 = (Il2CppObject *)caption;
  if ( (byte_4B1A88A & 1) == 0 )
  {
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, message, gameObject);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_IO_Path_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_25280/*"{0}({1})"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_61/*"\nGameObject:"*/, v19, v20);
    caption = (System_String_o *)sub_1BCA7E0(&StringLiteral_25241/*"{0}\n{1}\n{2}"*/, v21, v22);
    byte_4B1A88A = 1;
  }
  if ( !filePath )
    goto LABEL_27;
  v24 = System_String__Replace(filePath, 0x5Cu, 0x2Fu, 0LL);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, v23);
  FileName = (Il2CppObject *)System_IO_Path__GetFileName(v24, 0LL);
  v37 = line;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  v28 = (Il2CppObject *)System_String__Format_62415592((System_String_o *)StringLiteral_25280/*"{0}({1})"*/, FileName, v26, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  caption = (System_String_o *)UnityEngine_Object__op_Inequality(0LL, (UnityEngine_Object_o *)gameObject, 0LL);
  if ( ((unsigned __int8)caption & 1) != 0 )
  {
    if ( !gameObject )
      goto LABEL_27;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0LL);
    v9 = System_String__Concat_62412480(v9, (System_String_o *)StringLiteral_61/*"\nGameObject:"*/, name, 0LL);
  }
  v30 = System_String__Format_62415660((System_String_o *)StringLiteral_25241/*"{0}\n{1}\n{2}"*/, v10, (Il2CppObject *)v9, v28, 0LL);
  v32 = Fgo_Assertions_Assert_TypeInfo;
  v33 = v30;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v31);
    v32 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v32->static_fields;
  if ( static_fields->enable )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32, v31);
      v32 = Fgo_Assertions_Assert_TypeInfo;
      static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
    }
    onFailedAction = static_fields->onFailedAction;
    if ( onFailedAction )
    {
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32, v31);
        onFailedAction = Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedAction;
        if ( !onFailedAction )
          goto LABEL_27;
      }
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))onFailedAction->fields.m_target)(
        onFailedAction->fields.original_method_info,
        v33,
        *(_QWORD *)&onFailedAction->fields.extra_arg);
      v32 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32, v31);
      v32 = Fgo_Assertions_Assert_TypeInfo;
    }
    onFailedSendReport = v32->static_fields->onFailedSendReport;
    if ( onFailedSendReport )
    {
      if ( v32->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v32, v31),
            (onFailedSendReport = Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedSendReport) != 0LL) )
      {
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, System_String_o *, Il2CppObject *, _QWORD))onFailedSendReport->fields.m_target)(
          onFailedSendReport->fields.original_method_info,
          v10,
          v33,
          v28,
          *(_QWORD *)&onFailedSendReport->fields.extra_arg);
        return;
      }
LABEL_27:
      sub_1BCAA3C(caption, message);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Fgo_Assertions_Assert_c *v14; // x0
  Fgo_Assertions_Assert_c *v15; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_4B1A88B & 1) == 0 )
  {
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, force, method);
    sub_1BCA7E0(&UnityEngine_Debug_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_25622/*"既に表明違反時の処理が設定されています"*/, v12, v13);
    byte_4B1A88B = 1;
  }
  if ( !force )
  {
    v14 = Fgo_Assertions_Assert_TypeInfo;
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, force);
      v14 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( v14->static_fields->onFailedAction )
    {
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, force);
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_25622/*"既に表明違反時の処理が設定されています"*/, 0LL);
    }
  }
  v15 = Fgo_Assertions_Assert_TypeInfo;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, force);
    v15 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v15->static_fields;
  static_fields->onFailedAction = action;
  sub_1BCA784(
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Fgo_Assertions_Assert_c *v14; // x0
  Fgo_Assertions_Assert_c *v15; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_4B1A88C & 1) == 0 )
  {
    sub_1BCA7E0(&Fgo_Assertions_Assert_TypeInfo, force, method);
    sub_1BCA7E0(&UnityEngine_Debug_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_25622/*"既に表明違反時の処理が設定されています"*/, v12, v13);
    byte_4B1A88C = 1;
  }
  if ( !force )
  {
    v14 = Fgo_Assertions_Assert_TypeInfo;
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, force);
      v14 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( v14->static_fields->onFailedSendReport )
    {
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, force);
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_25622/*"既に表明違反時の処理が設定されています"*/, 0LL);
    }
  }
  v15 = Fgo_Assertions_Assert_TypeInfo;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, force);
    v15 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v15->static_fields;
  static_fields->onFailedSendReport = action;
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)aFormat, v7, v8, v9, v10, v11, v12);
  this->fields.args = aArgs;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.args, (int64_t)aArgs, v13, v14, v15, v16, v17, v18);
}


void __fastcall Fgo_Assertions_AssertQueue___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_Queue_T__o *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  PartyOrganizationUtility_o *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B1A8A4 & 1) == 0 )
  {
    sub_1BCA7E0(&Fgo_Assertions_AssertQueue_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_string___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_Queue_string__TypeInfo, v6, v7);
    byte_4B1A8A4 = 1;
  }
  v8 = (System_Collections_Generic_Queue_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_Queue_string__TypeInfo,
                                                  v1,
                                                  v2,
                                                  v3);
  System_Collections_Generic_Queue_object____ctor(
    v8,
    (const MethodInfo_3713DF0 *)Method_System_Collections_Generic_Queue_string___ctor__);
  Fgo_Assertions_AssertQueue_TypeInfo->static_fields->queue = (struct System_Collections_Generic_Queue_string__o *)v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)Fgo_Assertions_AssertQueue_TypeInfo->static_fields,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  static_fields = (PartyOrganizationUtility_o *)Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
  static_fields->fields.restrictionDialogHistoryList = 0LL;
  static_fields = (PartyOrganizationUtility_o *)((char *)static_fields + 16);
  static_fields[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  sub_1BCA784(static_fields, 0LL, v16, v17, v18, v19, v20, v21);
}


void __fastcall Fgo_Assertions_AssertQueue__Clear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Fgo_Assertions_AssertQueue_c *v5; // x0
  System_Collections_Generic_Queue_T__o *queue; // x0

  if ( (byte_4B1A8A3 & 1) == 0 )
  {
    sub_1BCA7E0(&Fgo_Assertions_AssertQueue_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_string__Clear__, v3, v4);
    byte_4B1A8A3 = 1;
  }
  v5 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo, v1);
    v5 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  queue = (System_Collections_Generic_Queue_T__o *)v5->static_fields->queue;
  if ( !queue )
    sub_1BCAA3C(0LL, v1);
  System_Collections_Generic_Queue_object___Clear(
    queue,
    (const MethodInfo_3714078 *)Method_System_Collections_Generic_Queue_string__Clear__);
}


void __fastcall Fgo_Assertions_AssertQueue__Dequeue(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Queue_T__o *queue; // x0
  struct Fgo_Assertions_AssertQueue_StaticFields *syncRoot; // x8
  int32_t size; // w20
  Il2CppObject *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B1A8A2 & 1) == 0 )
  {
    sub_1BCA7E0(&Fgo_Assertions_AssertQueue_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_string__Dequeue__, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_string__get_Count__, v5, v6);
    byte_4B1A8A2 = 1;
  }
  queue = (System_Collections_Generic_Queue_T__o *)Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo, v1);
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
    j_il2cpp_runtime_class_init_0(queue, v1);
    syncRoot = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
    if ( size )
    {
LABEL_8:
      queue = (System_Collections_Generic_Queue_T__o *)syncRoot->queue;
      if ( syncRoot->queue )
      {
        v10 = System_Collections_Generic_Queue_object___Dequeue(
                queue,
                (const MethodInfo_3714548 *)Method_System_Collections_Generic_Queue_string__Dequeue__);
        Fgo_Assertions_AssertQueue__OnFailed((System_String_o *)v10, v11);
        return;
      }
LABEL_12:
      sub_1BCAA3C(queue, v1);
    }
  }
  syncRoot->isReady = 1;
}


void __fastcall Fgo_Assertions_AssertQueue__Enqueue(System_String_o *message, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x8
  _BOOL4 isReady; // w21

  if ( (byte_4B1A8A1 & 1) == 0 )
  {
    sub_1BCA7E0(&Fgo_Assertions_AssertQueue_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_string__Enqueue__, v4, v5);
    byte_4B1A8A1 = 1;
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
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo, method);
    static_fields = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
    isReady = static_fields->isReady;
    if ( Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
    {
      if ( static_fields->isReady )
        goto LABEL_5;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo, method);
      static_fields = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
      if ( isReady )
        goto LABEL_5;
    }
  }
  if ( !static_fields->queue )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)static_fields->queue,
    (Il2CppObject *)message,
    (const MethodInfo_37143B8 *)Method_System_Collections_Generic_Queue_string__Enqueue__);
}


void __fastcall Fgo_Assertions_AssertQueue__OnFailed(System_String_o *message, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Fgo_Assertions_AssertQueue_c *v8; // x0
  struct System_Action_string__o *onFailedAction; // x8
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B1A89F & 1) == 0 )
  {
    sub_1BCA7E0(&Fgo_Assertions_AssertQueue_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Debug_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_25640/*"表明違反時処理が設定されていません"*/, v6, v7);
    byte_4B1A89F = 1;
  }
  v8 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo, method);
    v8 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  onFailedAction = v8->static_fields->onFailedAction;
  if ( onFailedAction )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8, method);
      onFailedAction = Fgo_Assertions_AssertQueue_TypeInfo->static_fields->onFailedAction;
      if ( !onFailedAction )
        sub_1BCAA3C(v10, v11);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))onFailedAction->fields.m_target)(
      onFailedAction->fields.original_method_info,
      message,
      *(_QWORD *)&onFailedAction->fields.extra_arg);
  }
  else
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, method);
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_25640/*"表明違反時処理が設定されていません"*/, 0LL);
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

  if ( (byte_4B1A8A0 & 1) == 0 )
  {
    sub_1BCA7E0(&Fgo_Assertions_AssertQueue_TypeInfo, method, v2);
    byte_4B1A8A0 = 1;
  }
  v9 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo, method);
    v9 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->onFailedAction = action;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->onFailedAction, (int64_t)action, v2, v3, v4, v5, v6, v7);
}