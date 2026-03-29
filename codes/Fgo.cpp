void Fgo_Assertions_Assert___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0
  struct Fgo_Assertions_Assert_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_HashSet_T__o *v15; // x19
  struct Fgo_Assertions_Assert_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Collections_Generic_Dictionary_object__object__o *v23; // x19
  struct Fgo_Assertions_Assert_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4D34F75 & 1) == 0 )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo____ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_Type__List_FieldInfo___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey___ctor__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_Assert_SuppressAssertKey__TypeInfo);
    byte_4D34F75 = 1;
  }
  static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
  static_fields->enable = 1;
  static_fields->onFailedAction = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->onFailedAction, 0, v1, v2, v3, v4, v5, v6);
  v8 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v8->onFailedSendReport = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->onFailedSendReport, 0, v9, v10, v11, v12, v13, v14);
  v15 = (System_Collections_Generic_HashSet_T__o *)sub_1C93D20(System_Collections_Generic_HashSet_Assert_SuppressAssertKey__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v15,
    (const MethodInfo_372752C *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey___ctor__);
  v16 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v16->suppressAsserts = (struct System_Collections_Generic_HashSet_Assert_SuppressAssertKey__o *)v15;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->suppressAsserts, (int32_t)v15, v17, v18, v19, v20, v21, v22);
  v23 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_Type__List_FieldInfo___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v23,
    (const MethodInfo_352E1F8 *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo____ctor__);
  v24 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v24->cachedFieldInfo = (struct System_Collections_Generic_Dictionary_Type__List_FieldInfo___o *)v23;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v24->cachedFieldInfo, (int32_t)v23, v25, v26, v27, v28, v29, v30);
}


void Fgo_Assertions_Assert__AreApproximatelyEqual(
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

  if ( (byte_4D34F64 & 1) == 0 )
  {
    sub_1C93AD4(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    byte_4D34F64 = 1;
  }
  if ( !byte_4D2A13D )
  {
    sub_1C93AD4(&UnityEngine_Mathf_TypeInfo);
    byte_4D2A13D = 1;
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
      (const MethodInfo_3183994 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
  }
}


void Fgo_Assertions_Assert__AreEqual(
        int32_t expected,
        int32_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4D34F65 & 1) == 0 )
  {
    sub_1C93AD4(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    byte_4D34F65 = 1;
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
      (const MethodInfo_31833F8 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void Fgo_Assertions_Assert__AreEqual_49756328(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4D34F66 & 1) == 0 )
  {
    sub_1C93AD4(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    byte_4D34F66 = 1;
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
      (const MethodInfo_31835C4 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void Fgo_Assertions_Assert__AreEqual_49756488(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4D34F67 & 1) == 0 )
  {
    sub_1C93AD4(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34F67 = 1;
  }
  if ( expected )
    goto LABEL_10;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(actual, 0, 0) )
  {
LABEL_10:
    if ( actual )
      goto LABEL_19;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(expected, 0, 0) )
    {
LABEL_19:
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(expected, actual, 0) )
      {
        if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
        Fgo_Assertions_Assert__GetComparisonAssertMessage_object_(
          (Il2CppObject *)expected,
          (Il2CppObject *)actual,
          1,
          message,
          (const MethodInfo_3183798 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
      }
    }
  }
}


void Fgo_Assertions_Assert__AreEqual___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o expected,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_3182460 *method)
{
  long double v7; // q0
  void **monitor; // x21
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x26
  _QWORD *v11; // x19
  __int64 v12; // x0
  size_t v13; // x23
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
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v25; // x1
  __int64 v26; // x0
  __int64 v27; // x10
  _QWORD *v28; // x19
  void **v29; // x1
  _QWORD *v30; // x19
  void **v31; // x1
  __int64 v32; // x0
  __int64 v33; // x10
  _QWORD *v34; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v35; // x1
  _QWORD *v36; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v37; // x1
  __int64 v38; // x0
  __int64 naturalAligment; // x10
  _QWORD *v40; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v41; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v42; // x1
  _QWORD *v43; // x26
  void **v44; // x1
  __int64 v45; // x0
  long double v46; // q0
  _QWORD *v47; // x9
  __int64 v48; // x26
  __int64 v49; // x8
  int v50; // w0
  __int64 v51; // x1
  int v52; // w10
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v53; // x3
  _QWORD *v54; // x25
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v55; // x1
  void **v56; // x1
  __int64 *v57; // x1
  __int64 v58; // x0
  _QWORD *v59; // x19
  void **v60; // x1
  __int64 v61; // x0
  __int64 v62; // x10
  __int64 v63; // [xsp+0h] [xbp-60h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v64; // [xsp+8h] [xbp-58h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-50h]
  void *v66; // [xsp+18h] [xbp-48h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v67; // [xsp+20h] [xbp-40h] BYREF
  _QWORD v68[4]; // [xsp+28h] [xbp-38h] BYREF
  _BYTE v69[12]; // [xsp+48h] [xbp-18h] BYREF
  char v70; // [xsp+54h] [xbp-Ch] BYREF
  __int64 v71; // [xsp+58h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  monitor = (void **)expected.monitor;
  klass = expected.klass;
  v71 = *(_QWORD *)(StatusReg + 40);
  v66 = expected.monitor;
  v67 = expected.klass;
  v11 = filePath[2].monitor;
  v64 = actual.klass;
  if ( !v11 )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    v11 = filePath[2].monitor;
    if ( !v11 )
    {
      sub_1C69BC4(filePath);
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
    v14 = sub_1C69B68(v7);
    v11 = filePath[2].monitor;
    v15 = *(_DWORD *)(v14 + 252);
    v12 = *v11;
  }
  v16 = (char *)&v63 - (((unsigned int)(v15 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v17 = (__int64 *)((char *)&v63 - ((v13 + 15) & 0x1FFFFFFF0LL));
  v18 = v17;
  if ( *(int *)(v12 + 40) >= 0 )
    v19 = &v67;
  else
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy(&v63, v19, v13);
  v20 = j_il2cpp_value_box_0(*v11, (char *)&v63 - ((v13 + 15) & 0x1FFFFFFF0LL));
  v21 = filePath[2].monitor;
  v22 = v20;
  if ( *(int *)(*v21 + 40LL) >= 0 )
    v23 = &v66;
  else
    v23 = monitor;
  memcpy((char *)&v63 - ((v13 + 15) & 0x1FFFFFFF0LL), v23, v13);
  if ( v22 != j_il2cpp_value_box_0(*v21, (char *)&v63 - ((v13 + 15) & 0x1FFFFFFF0LL)) )
  {
    v24 = filePath[2].monitor;
    v25 = *(int *)(*v24 + 40LL) >= 0 ? &v67 : (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    if ( (memcpy((char *)&v63 - ((v13 + 15) & 0x1FFFFFFF0LL), v25, v13),
          (v26 = j_il2cpp_value_box_0(*v24, (char *)&v63 - ((v13 + 15) & 0x1FFFFFFF0LL))) == 0)
      || (v27 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*(_QWORD *)v26 + 304LL) < (unsigned int)v27)
      || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * v27 - 8) != UnityEngine_Object_TypeInfo
      || ((v28 = filePath[2].monitor, *(int *)(*v28 + 40LL) >= 0) ? (v29 = &v66) : (v29 = monitor),
          memcpy((char *)&v63 - ((v13 + 15) & 0x1FFFFFFF0LL), v29, v13),
          (sub_1C93CE4(*v28, (char *)&v63 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
    {
      v30 = filePath[2].monitor;
      v31 = *(int *)(*v30 + 40LL) >= 0 ? &v66 : monitor;
      if ( (memcpy((char *)&v63 - ((v13 + 15) & 0x1FFFFFFF0LL), v31, v13),
            (v32 = j_il2cpp_value_box_0(*v30, (char *)&v63 - ((v13 + 15) & 0x1FFFFFFF0LL))) == 0)
        || (v33 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
            *(unsigned __int8 *)(*(_QWORD *)v32 + 304LL) < (unsigned int)v33)
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v32 + 200LL) + 8 * v33 - 8) != UnityEngine_Object_TypeInfo
        || ((v34 = filePath[2].monitor, *(int *)(*v34 + 40LL) >= 0)
          ? (v35 = &v67)
          : (v35 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v67),
            memcpy((char *)&v63 - ((v13 + 15) & 0x1FFFFFFF0LL), v35, v13),
            (sub_1C93CE4(*v34, (char *)&v63 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
      {
        v36 = filePath[2].monitor;
        v37 = *(int *)(*v36 + 40LL) >= 0 ? &v67 : (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v67;
        memcpy((char *)&v63 - ((v13 + 15) & 0x1FFFFFFF0LL), v37, v13);
        v38 = j_il2cpp_value_box_0(*v36, (char *)&v63 - ((v13 + 15) & 0x1FFFFFFF0LL));
        if ( !v38 )
          goto LABEL_40;
        naturalAligment = UnityEngine_Object_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)v38 + 304LL) < (unsigned int)naturalAligment
          || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v38 + 200LL) + 8 * naturalAligment - 8) != UnityEngine_Object_TypeInfo )
        {
          goto LABEL_40;
        }
        v59 = filePath[2].monitor;
        v60 = *(int *)(*v59 + 40LL) >= 0 ? &v66 : monitor;
        memcpy((char *)&v63 - ((v13 + 15) & 0x1FFFFFFF0LL), v60, v13);
        v61 = j_il2cpp_value_box_0(*v59, (char *)&v63 - ((v13 + 15) & 0x1FFFFFFF0LL));
        if ( !v61
          || (v62 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
              *(unsigned __int8 *)(*(_QWORD *)v61 + 304LL) < (unsigned int)v62)
          || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v61 + 200LL) + 8 * v62 - 8) != UnityEngine_Object_TypeInfo )
        {
LABEL_40:
          v40 = filePath[2].monitor;
          v41 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v67;
          if ( *(int *)(*v40 + 40LL) >= 0 )
            v42 = &v67;
          else
            v42 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v67;
          memcpy((char *)&v63 - ((v13 + 15) & 0x1FFFFFFF0LL), v42, v13);
          if ( (sub_1C93CE4(*v40, (char *)&v63 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
          {
            v43 = filePath[2].monitor;
            if ( *(int *)(*v43 + 40LL) >= 0 )
              v44 = &v66;
            else
              v44 = monitor;
            memcpy((char *)&v63 - ((v13 + 15) & 0x1FFFFFFF0LL), v44, v13);
            v45 = j_il2cpp_value_box_0(*v43, (char *)&v63 - ((v13 + 15) & 0x1FFFFFFF0LL));
            v47 = filePath[2].monitor;
            v48 = v45;
            v49 = *v47;
            if ( (*(_BYTE *)(*v47 + 309LL) & 1) == 0 )
            {
              v50 = sub_1C69B68(v46);
              v47 = filePath[2].monitor;
              v41 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v67;
              LODWORD(v49) = v50;
            }
            v51 = v47[1];
            v52 = *(_DWORD *)(*v47 + 40LL);
            v68[0] = v48;
            if ( v52 >= 0 )
              v53 = &v67;
            else
              v53 = v41;
            sub_1C94610(v49, v51, (int)v16, v53);
            if ( v69[0] )
              return;
            v41 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v67;
          }
          v54 = filePath[2].monitor;
          if ( *(int *)(*v54 + 40LL) >= 0 )
            v55 = &v67;
          else
            v55 = v41;
          memcpy((char *)&v63 - ((v13 + 15) & 0x1FFFFFFF0LL), v55, v13);
          if ( *(int *)(*v54 + 40LL) >= 0 )
            v56 = &v66;
          else
            v56 = monitor;
          memcpy((char *)&v63 - ((v13 + 15) & 0x1FFFFFFF0LL), v56, v13);
          if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
            v54 = filePath[2].monitor;
          }
          v57 = (__int64 *)v54[2];
          v58 = *v57;
          if ( (*(_DWORD *)(*v54 + 40LL) & 0x80000000) == 0 )
          {
            v17 = (_QWORD *)*v17;
            v18 = (_QWORD *)*v18;
          }
          v68[0] = v17;
          v68[1] = v18;
          v70 = 1;
          v68[2] = &v70;
          v68[3] = v64;
          ((void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, _BYTE *))v57[2])(v58, v57, 0, v68, v69);
        }
      }
    }
  }
}


void Fgo_Assertions_Assert__AreNotApproximatelyEqual(
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

  if ( (byte_4D34F68 & 1) == 0 )
  {
    sub_1C93AD4(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    byte_4D34F68 = 1;
  }
  if ( !byte_4D2A13D )
  {
    sub_1C93AD4(&UnityEngine_Mathf_TypeInfo);
    byte_4D2A13D = 1;
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
      (const MethodInfo_3183994 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
  }
}


void Fgo_Assertions_Assert__AreNotEqual(
        int32_t expected,
        int32_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4D34F69 & 1) == 0 )
  {
    sub_1C93AD4(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    byte_4D34F69 = 1;
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
      (const MethodInfo_31833F8 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void Fgo_Assertions_Assert__AreNotEqual_49757196(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4D34F6A & 1) == 0 )
  {
    sub_1C93AD4(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    byte_4D34F6A = 1;
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
      (const MethodInfo_31835C4 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void Fgo_Assertions_Assert__AreNotEqual_49757356(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4D34F6B & 1) == 0 )
  {
    sub_1C93AD4(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34F6B = 1;
  }
  if ( !expected )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(actual, 0, 0) )
      goto LABEL_19;
  }
  if ( !actual )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(expected, 0, 0) )
      goto LABEL_19;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(expected, actual, 0) )
  {
LABEL_19:
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_object_(
      (Il2CppObject *)expected,
      (Il2CppObject *)actual,
      0,
      message,
      (const MethodInfo_3183798 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
  }
}


void Fgo_Assertions_Assert__AreNotEqual___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o expected,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_3182938 *method)
{
  long double v7; // q0
  void **monitor; // x23
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x26
  _QWORD *v11; // x27
  __int64 v12; // x0
  unsigned int v13; // w8
  size_t v14; // x24
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
  void **v33; // x1
  __int64 v34; // x0
  __int64 v35; // x10
  _QWORD *v36; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v37; // x1
  _QWORD *v38; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v39; // x1
  __int64 v40; // x0
  __int64 naturalAligment; // x10
  _QWORD *v42; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v43; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v44; // x1
  _QWORD *v45; // x19
  void **v46; // x1
  __int64 v47; // x0
  long double v48; // q0
  _QWORD *v49; // x9
  __int64 v50; // x26
  __int64 v51; // x8
  int v52; // w0
  __int64 v53; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v54; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v55; // x1
  void **v56; // x1
  Fgo_Assertions_Assert_c *v57; // x0
  void **v58; // x1
  __int64 *v59; // x1
  __int64 v60; // x0
  _QWORD *v61; // x19
  void **v62; // x1
  __int64 v63; // x0
  __int64 v64; // x10
  char *v65; // [xsp+0h] [xbp-60h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v66; // [xsp+8h] [xbp-58h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-50h]
  void *v68; // [xsp+18h] [xbp-48h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v69; // [xsp+20h] [xbp-40h] BYREF
  _QWORD v70[4]; // [xsp+28h] [xbp-38h] BYREF
  _BYTE v71[12]; // [xsp+48h] [xbp-18h] BYREF
  char v72; // [xsp+54h] [xbp-Ch] BYREF
  __int64 v73; // [xsp+58h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  monitor = (void **)expected.monitor;
  klass = expected.klass;
  v73 = *(_QWORD *)(StatusReg + 40);
  v68 = expected.monitor;
  v69 = expected.klass;
  v11 = filePath[2].monitor;
  v66 = actual.klass;
  if ( !v11 )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    v11 = filePath[2].monitor;
    if ( !v11 )
    {
      sub_1C69BC4(filePath);
      v11 = filePath[2].monitor;
    }
  }
  v12 = *v11;
  v13 = *(_DWORD *)(*v11 + 252LL);
  v14 = v13;
  if ( (*(_BYTE *)(*v11 + 309LL) & 1) == 0 )
  {
    v15 = sub_1C69B68(v7);
    v11 = filePath[2].monitor;
    v13 = *(_DWORD *)(v15 + 252);
    v12 = *v11;
  }
  v65 = (char *)&v65 - ((v13 + 16 + 15LL) & 0x1FFFFFFF0LL);
  v16 = (char **)((char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL));
  v17 = v16;
  if ( *(int *)(v12 + 40) >= 0 )
    v18 = &v69;
  else
    v18 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy(&v65, v18, v14);
  v19 = j_il2cpp_value_box_0(*v11, (char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL));
  v20 = filePath[2].monitor;
  v21 = v19;
  if ( *(int *)(*v20 + 40LL) >= 0 )
    v22 = &v68;
  else
    v22 = monitor;
  memcpy((char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL), v22, v14);
  v23 = j_il2cpp_value_box_0(*v20, (char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL));
  v24 = filePath[2].monitor;
  v25 = v23;
  if ( *(int *)(*v24 + 40LL) >= 0 )
    v26 = &v69;
  else
    v26 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL), v26, v14);
  v27 = *v24;
  if ( v21 == v25 )
  {
    if ( *(int *)(v27 + 40) >= 0 )
      v58 = &v68;
    else
      v58 = monitor;
    memcpy((char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL), v58, v14);
    v57 = Fgo_Assertions_Assert_TypeInfo;
    if ( Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      goto LABEL_65;
LABEL_64:
    j_il2cpp_runtime_class_init_0(v57);
    v24 = filePath[2].monitor;
LABEL_65:
    v59 = (__int64 *)v24[1];
    v60 = *v59;
    if ( (*(_DWORD *)(*v24 + 40LL) & 0x80000000) == 0 )
    {
      v16 = (_QWORD *)*v16;
      v17 = (_QWORD *)*v17;
    }
    v70[2] = &v72;
    v72 = 0;
    v70[0] = v16;
    v70[1] = v17;
    v70[3] = v66;
    ((void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, _BYTE *))v59[2])(v60, v59, 0, v70, v71);
    return;
  }
  v28 = j_il2cpp_value_box_0(v27, (char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL));
  if ( !v28
    || (v29 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*(_QWORD *)v28 + 304LL) < (unsigned int)v29)
    || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v28 + 200LL) + 8 * v29 - 8) != UnityEngine_Object_TypeInfo
    || ((v30 = filePath[2].monitor, *(int *)(*v30 + 40LL) >= 0) ? (v31 = &v68) : (v31 = monitor),
        memcpy((char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL), v31, v14),
        (sub_1C93CE4(*v30, (char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
  {
    v32 = filePath[2].monitor;
    v33 = *(int *)(*v32 + 40LL) >= 0 ? &v68 : monitor;
    if ( (memcpy((char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL), v33, v14),
          (v34 = j_il2cpp_value_box_0(*v32, (char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL))) == 0)
      || (v35 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*(_QWORD *)v34 + 304LL) < (unsigned int)v35)
      || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v34 + 200LL) + 8 * v35 - 8) != UnityEngine_Object_TypeInfo
      || ((v36 = filePath[2].monitor, *(int *)(*v36 + 40LL) >= 0)
        ? (v37 = &v69)
        : (v37 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v69),
          memcpy((char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL), v37, v14),
          (sub_1C93CE4(*v36, (char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
    {
      v38 = filePath[2].monitor;
      v39 = *(int *)(*v38 + 40LL) >= 0 ? &v69 : (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v69;
      memcpy((char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL), v39, v14);
      v40 = j_il2cpp_value_box_0(*v38, (char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL));
      if ( !v40 )
        goto LABEL_39;
      naturalAligment = UnityEngine_Object_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)v40 + 304LL) < (unsigned int)naturalAligment
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v40 + 200LL) + 8 * naturalAligment - 8) != UnityEngine_Object_TypeInfo )
      {
        goto LABEL_39;
      }
      v61 = filePath[2].monitor;
      v62 = *(int *)(*v61 + 40LL) >= 0 ? &v68 : monitor;
      memcpy((char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL), v62, v14);
      v63 = j_il2cpp_value_box_0(*v61, (char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL));
      if ( !v63
        || (v64 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
            *(unsigned __int8 *)(*(_QWORD *)v63 + 304LL) < (unsigned int)v64)
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v63 + 200LL) + 8 * v64 - 8) != UnityEngine_Object_TypeInfo )
      {
LABEL_39:
        v42 = filePath[2].monitor;
        v43 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v69;
        v44 = *(int *)(*v42 + 40LL) >= 0 ? &v69 : (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v69;
        memcpy((char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL), v44, v14);
        if ( (sub_1C93CE4(*v42, (char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
        {
          v45 = filePath[2].monitor;
          if ( *(int *)(*v45 + 40LL) >= 0 )
            v46 = &v68;
          else
            v46 = monitor;
          memcpy((char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL), v46, v14);
          v47 = j_il2cpp_value_box_0(*v45, (char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL));
          v49 = filePath[2].monitor;
          v50 = v47;
          v51 = *v49;
          if ( (*(_BYTE *)(*v49 + 309LL) & 1) == 0 )
          {
            v52 = sub_1C69B68(v48);
            v49 = filePath[2].monitor;
            v43 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v69;
            LODWORD(v51) = v52;
          }
          v53 = v49[2];
          v54 = *(int *)(*v49 + 40LL) >= 0 ? &v69 : v43;
          v70[0] = v50;
          sub_1C94610(v51, v53, (int)v65, v54);
          if ( v71[0] )
          {
            v24 = filePath[2].monitor;
            if ( *(int *)(*v24 + 40LL) >= 0 )
              v55 = &v69;
            else
              v55 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v69;
            memcpy((char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL), v55, v14);
            if ( *(int *)(*v24 + 40LL) >= 0 )
              v56 = &v68;
            else
              v56 = monitor;
            memcpy((char *)&v65 - ((v14 + 15) & 0x1FFFFFFF0LL), v56, v14);
            v57 = Fgo_Assertions_Assert_TypeInfo;
            if ( Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
              goto LABEL_65;
            goto LABEL_64;
          }
        }
      }
    }
  }
}


void Fgo_Assertions_Assert__CanFormat(
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
  _WORD v28[2]; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4D34F72 & 1) == 0 )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&char_TypeInfo);
    sub_1C93AD4(&StringLiteral_25819/*"書式指定項目が不正です"*/);
    sub_1C93AD4(&StringLiteral_25759/*"パラメータ"*/);
    sub_1C93AD4(&StringLiteral_25808/*"文字列"*/);
    sub_1C93AD4(&StringLiteral_25802/*"引数"*/);
    sub_1C93AD4(&StringLiteral_25803/*"引数を超えたのインデックスを指しています"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D34F72 = 1;
  }
  v28[0] = 0;
  result = 0;
  v27 = 0;
  if ( !parameter )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v24 = &StringLiteral_25759/*"パラメータ"*/;
    goto LABEL_59;
  }
  format = parameter->fields.format;
  if ( !format )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v24 = &StringLiteral_25808/*"文字列"*/;
    goto LABEL_59;
  }
  args = parameter->fields.args;
  if ( !args || LODWORD(args->max_length) == 1 && !args->m_Items[0] )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v24 = &StringLiteral_25802/*"引数"*/;
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
  v15 = 0;
  v16 = 0;
  do
  {
    Chars = System_String__get_Chars(format, v16, 0);
    v28[0] = Chars;
    if ( v10 )
    {
      if ( Chars == 123 )
        goto LABEL_12;
      v15 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_20:
      if ( Chars == 44 || Chars == 125 || Chars == 58 )
      {
        v19 = System_Int32__TryParse(v15, &v27, 0);
        if ( !v19 )
          goto LABEL_66;
        v21 = parameter->fields.args;
        if ( !v21 )
          sub_1C93D2C(v19, v20);
        if ( v27 >= SLODWORD(v21->max_length) )
        {
          if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
          v25 = &StringLiteral_25803/*"引数を超えたのインデックスを指しています"*/;
          goto LABEL_69;
        }
        v18 = v28[0];
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
      v22 = System_Char__ToString((uint16_t)v28, 0);
      v15 = System_String__Concat_64425724(v15, v22, 0);
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
        v23 = System_Char__ToString((uint16_t)v28, 0);
        v15 = System_String__Concat_64425724(v15, v23, 0);
        goto LABEL_28;
      }
      if ( !System_Int32__TryParse(v15, &result, 0) )
        goto LABEL_66;
      v18 = v28[0];
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
  v25 = &StringLiteral_25819/*"書式指定項目が不正です"*/;
LABEL_69:
  Fgo_Assertions_Assert__GetEffectiveAssertMessage((System_String_o *)*v25, message, (const MethodInfo *)gameObject);
}


void Fgo_Assertions_Assert__CanParse___Il2CppFullySharedGenericType_(
        System_String_o *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_3182E58 *method)
{
  Il2CppType *_0_T; // x21
  Il2CppObject *TypeFromHandle; // x21
  System_Type_o *v11; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x20
  Il2CppType *v14; // x22
  System_Type_o *v15; // x0
  Il2CppType *v16; // x22
  System_Type_o *v17; // x0
  Il2CppType *v18; // x22
  System_Type_o *v19; // x0
  Il2CppType *v20; // x22
  System_Type_o *v21; // x0
  Il2CppType *v22; // x22
  System_Type_o *v23; // x0
  Il2CppType *v24; // x22
  System_Type_o *v25; // x0
  Il2CppType *v26; // x22
  System_Type_o *v27; // x0
  Il2CppType *v28; // x22
  System_Type_o *v29; // x0
  Il2CppType *v30; // x22
  System_Type_o *v31; // x0
  Il2CppType *v32; // x22
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

  if ( !method->rgctx_data )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&bool_var);
    sub_1C93AD4(&bool_TypeInfo);
    sub_1C93AD4(&qword_4B200E0);
    sub_1C93AD4(&double_var);
    sub_1C93AD4(&short_var);
    sub_1C93AD4(&int_var);
    sub_1C93AD4(&long_var);
    sub_1C93AD4(&sbyte_var);
    sub_1C93AD4(&float_var);
    sub_1C93AD4(&System_Type_TypeInfo);
    sub_1C93AD4(&ushort_var);
    sub_1C93AD4(&uint_var);
    sub_1C93AD4(&ulong_var);
    sub_1C93AD4(&StringLiteral_25790/*"型が不正です:{0}"*/);
    sub_1C93AD4(&StringLiteral_25808/*"文字列"*/);
    sub_1C93AD4(&StringLiteral_274/*" isNotBoolean"*/);
    if ( !method->rgctx_data )
      sub_1C69BC4(method);
  }
  result = 0;
  v43[0] = 0;
  v42[0] = 0;
  v41[0] = 0;
  v40 = 0;
  v38 = 0;
  v39 = 0;
  v36 = 0;
  v37 = 0;
  v35 = 0.0;
  v34 = 0.0;
  if ( value )
  {
    _0_T = method->rgctx_data->_0_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    TypeFromHandle = (Il2CppObject *)System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)_0_T, 0);
    v11 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)bool_var, 0);
    if ( System_Type__op_Equality(v11, (System_Type_o *)TypeFromHandle, 0) )
    {
      if ( !bool_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(bool_TypeInfo);
      if ( !System_Boolean__TryParse(value, &result, 0) )
      {
        v12 = System_String__Concat_64425724(value, (System_String_o *)StringLiteral_274/*" isNotBoolean"*/, 0);
LABEL_12:
        v13 = v12;
        if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
        Fgo_Assertions_Assert__GetEffectiveAssertMessage(v13, message, 0);
      }
    }
    else
    {
      v14 = qword_4B200E0;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v15 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v14, 0);
      if ( System_Type__op_Equality(v15, (System_Type_o *)TypeFromHandle, 0) )
      {
        if ( System_Byte__TryParse(value, v43, 0) )
          return;
      }
      else
      {
        v16 = sbyte_var;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v17 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v16, 0);
        if ( System_Type__op_Equality(v17, (System_Type_o *)TypeFromHandle, 0) )
        {
          if ( System_SByte__TryParse(value, v42, 0) )
            return;
        }
        else
        {
          v18 = short_var;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v19 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v18, 0);
          if ( System_Type__op_Equality(v19, (System_Type_o *)TypeFromHandle, 0) )
          {
            if ( System_Int16__TryParse(value, v41, 0) )
              return;
          }
          else
          {
            v20 = ushort_var;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v21 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v20, 0);
            if ( System_Type__op_Equality(v21, (System_Type_o *)TypeFromHandle, 0) )
            {
              if ( System_UInt16__TryParse(value, &v40, 0) )
                return;
            }
            else
            {
              v22 = int_var;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v23 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v22, 0);
              if ( System_Type__op_Equality(v23, (System_Type_o *)TypeFromHandle, 0) )
              {
                if ( System_Int32__TryParse(value, &v39, 0) )
                  return;
              }
              else
              {
                v24 = uint_var;
                if ( !System_Type_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
                v25 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v24, 0);
                if ( System_Type__op_Equality(v25, (System_Type_o *)TypeFromHandle, 0) )
                {
                  if ( System_UInt32__TryParse(value, &v38, 0) )
                    return;
                }
                else
                {
                  v26 = long_var;
                  if ( !System_Type_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
                  v27 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v26, 0);
                  if ( System_Type__op_Equality(v27, (System_Type_o *)TypeFromHandle, 0) )
                  {
                    if ( System_Int64__TryParse(value, &v37, 0) )
                      return;
                  }
                  else
                  {
                    v28 = ulong_var;
                    if ( !System_Type_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
                    v29 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v28, 0);
                    if ( System_Type__op_Equality(v29, (System_Type_o *)TypeFromHandle, 0) )
                    {
                      if ( System_UInt64__TryParse(value, &v36, 0) )
                        return;
                    }
                    else
                    {
                      v30 = float_var;
                      if ( !System_Type_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
                      v31 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v30, 0);
                      if ( System_Type__op_Equality(v31, (System_Type_o *)TypeFromHandle, 0) )
                      {
                        if ( System_Single__TryParse(value, &v35, 0) )
                          return;
                      }
                      else
                      {
                        v32 = double_var;
                        if ( !System_Type_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
                        v33 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v32, 0);
                        if ( !System_Type__op_Equality(v33, (System_Type_o *)TypeFromHandle, 0) )
                        {
                          v12 = System_String__Format((System_String_o *)StringLiteral_25790/*"型が不正です:{0}"*/, TypeFromHandle, 0);
                          goto LABEL_12;
                        }
                        if ( System_Double__TryParse(value, &v34, 0) )
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
      Fgo_Assertions_Assert__GetParseAssertMessage(value, message, 0);
    }
  }
  else
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25808/*"文字列"*/, message, 0);
  }
}


void Fgo_Assertions_Assert__ConditionalExecution(bool conditions, System_Action_o *action, const MethodInfo *method)
{
  if ( action )
  {
    if ( conditions )
      ((void (__fastcall *)(intptr_t, intptr_t))action->fields.invoke_impl)(
        action->fields.method_code,
        action->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *Fgo_Assertions_Assert__GetComparisonAssertMessage___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o expected,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_3183B60 *method)
{
  long double v5; // q0
  __int64 v6; // x21
  void **v7; // x22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  __int64 *v9; // x19
  char v10; // w20
  __int64 v11; // x8
  __int16 v12; // w9
  size_t v13; // x24
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
  __int64 v24; // x23
  _QWORD *v25; // x26
  void **v26; // x1
  long double v27; // q0
  _QWORD *v28; // x8
  __int64 v29; // x0
  void **v30; // x3
  __int64 v31; // x21
  __int64 v32; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  __int64 v40; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  __int64 *v54; // x8
  __int64 v55; // x1
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  int32_t v62; // w1
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  System_String_o *v69; // x20
  __int64 v71; // [xsp+0h] [xbp-30h] BYREF
  System_String_o *monitor; // [xsp+8h] [xbp-28h]
  void **v73; // [xsp+10h] [xbp-20h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v74; // [xsp+18h] [xbp-18h] BYREF
  __int64 v75; // [xsp+20h] [xbp-10h]
  __int64 v76; // [xsp+28h] [xbp-8h]

  monitor = (System_String_o *)actual.monitor;
  v6 = equal;
  v7 = (void **)expected.monitor;
  klass = expected.klass;
  v76 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v73 = (void **)expected.monitor;
  v74 = expected.klass;
  v9 = *(__int64 **)(equal + 56LL);
  v10 = (char)actual.klass;
  if ( !v9 )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    sub_1C93AD4(&StringLiteral_22605/*"null"*/);
    sub_1C93AD4(&StringLiteral_19523/*"expectedEqual"*/);
    sub_1C93AD4(&StringLiteral_19524/*"expectedNotEqual"*/);
    v9 = *(__int64 **)(v6 + 56);
    if ( !v9 )
    {
      sub_1C69BC4(v6);
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
    v14 = sub_1C69B68(v5);
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
    v17 = sub_1C69B68(v5);
    v9 = *(__int64 **)(v6 + 56);
    v11 = *v9;
  }
  v18 = (char *)&v71 - (((unsigned int)(*(_DWORD *)(v17 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( *(int *)(v11 + 40) >= 0 )
    v19 = &v74;
  else
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v71 - ((v13 + 15) & 0x1FFFFFFF0LL), v19, v13);
  if ( (sub_1C93CE4(*v9, (char *)&v71 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
  {
    v21 = *(_QWORD **)(v6 + 56);
    v22 = *v21;
    if ( (*(_BYTE *)(*v21 + 309LL) & 1) == 0 )
    {
      LODWORD(v22) = sub_1C69B68(v20);
      v21 = *(_QWORD **)(v6 + 56);
      klass = v74;
    }
    if ( *(int *)(*v21 + 40LL) >= 0 )
      v23 = &v74;
    else
      v23 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    sub_1C94610(v22, v21[1], (int)v16, v23);
    v24 = v75;
    v7 = v73;
  }
  else
  {
    v24 = StringLiteral_22605/*"null"*/;
  }
  v25 = *(_QWORD **)(v6 + 56);
  if ( *(int *)(*v25 + 40LL) >= 0 )
    v26 = (void **)&v73;
  else
    v26 = v7;
  memcpy((char *)&v71 - ((v13 + 15) & 0x1FFFFFFF0LL), v26, v13);
  if ( (sub_1C93CE4(*v25, (char *)&v71 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
  {
    v28 = *(_QWORD **)(v6 + 56);
    v29 = *v28;
    if ( (*(_BYTE *)(*v28 + 309LL) & 1) == 0 )
    {
      LODWORD(v29) = sub_1C69B68(v27);
      v28 = *(_QWORD **)(v6 + 56);
      v7 = v73;
    }
    if ( *(int *)(*v28 + 40LL) >= 0 )
      v30 = (void **)&v73;
    else
      v30 = v7;
    sub_1C94610(v29, v28[1], (int)v18, v30);
    v31 = v75;
  }
  else
  {
    v31 = StringLiteral_22605/*"null"*/;
  }
  v32 = sub_1C93B7C(string___TypeInfo, 5);
  if ( !v32 )
    sub_1C93D2C(0, v33);
  v40 = v32;
  if ( !*(_DWORD *)(v32 + 24) )
    goto LABEL_43;
  *(_QWORD *)(v32 + 32) = v24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v32 + 32), v24, v34, v35, v36, v37, v38, v39);
  if ( *(_DWORD *)(v40 + 24) <= 1u )
    goto LABEL_43;
  v47 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v40 + 40) = StringLiteral_113/*" "*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v40 + 40), v47, v41, v42, v43, v44, v45, v46);
  v54 = (__int64 *)&StringLiteral_19524/*"expectedNotEqual"*/;
  if ( (v10 & 1) == 0 )
    v54 = (__int64 *)&StringLiteral_19523/*"expectedEqual"*/;
  if ( *(_DWORD *)(v40 + 24) <= 2u
    || (v55 = *v54,
        *(_QWORD *)(v40 + 48) = *v54,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v40 + 48), v55, v48, v49, v50, v51, v52, v53),
        *(_DWORD *)(v40 + 24) <= 3u)
    || (v62 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v40 + 56) = StringLiteral_113/*" "*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v40 + 56), v62, v56, v57, v58, v59, v60, v61),
        *(_DWORD *)(v40 + 24) <= 4u) )
  {
LABEL_43:
    sub_1C93D34(v32);
  }
  *(_QWORD *)(v40 + 64) = v31;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v40 + 64), v31, v63, v64, v65, v66, v67, v68);
  v69 = System_String__Concat_64466256((System_String_array *)v40, 0);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v69, monitor, 0);
}


System_String_o *Fgo_Assertions_Assert__GetComparisonAssertMessage_float_(
        float expected,
        float actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_3183994 *method)
{
  System_String_o *v8; // x23
  float v9; // s0
  System_String_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  __int64 *v33; // x8
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  System_String_o *v48; // x20
  float v50; // [xsp+8h] [xbp-38h] BYREF
  float v51; // [xsp+Ch] [xbp-34h] BYREF

  v50 = actual;
  v51 = expected;
  if ( !method->rgctx_data )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    sub_1C93AD4(&StringLiteral_19523/*"expectedEqual"*/);
    sub_1C93AD4(&StringLiteral_19524/*"expectedNotEqual"*/);
    if ( !method->rgctx_data )
      sub_1C69BC4(method);
  }
  v8 = System_Single__ToString(expected, (const MethodInfo *)&v51);
  v10 = System_Single__ToString(v9, (const MethodInfo *)&v50);
  v11 = sub_1C93B7C(string___TypeInfo, 5);
  if ( !v11 )
    sub_1C93D2C(0, v12);
  v19 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v11 + 32) = v8;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)v8, v13, v14, v15, v16, v17, v18);
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_15;
  v26 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v19 + 40) = StringLiteral_113/*" "*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 40), v26, v20, v21, v22, v23, v24, v25);
  v33 = (__int64 *)&StringLiteral_19524/*"expectedNotEqual"*/;
  if ( !equal )
    v33 = (__int64 *)&StringLiteral_19523/*"expectedEqual"*/;
  if ( *(_DWORD *)(v19 + 24) <= 2u
    || (v34 = *v33,
        *(_QWORD *)(v19 + 48) = *v33,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 48), v34, v27, v28, v29, v30, v31, v32),
        *(_DWORD *)(v19 + 24) <= 3u)
    || (v41 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v19 + 56) = StringLiteral_113/*" "*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 56), v41, v35, v36, v37, v38, v39, v40),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_15:
    sub_1C93D34(v11);
  }
  *(_QWORD *)(v19 + 64) = v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 64), (int32_t)v10, v42, v43, v44, v45, v46, v47);
  v48 = System_String__Concat_64466256((System_String_array *)v19, 0);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v48, message, 0);
}


System_String_o *Fgo_Assertions_Assert__GetComparisonAssertMessage_int_(
        int32_t expected,
        int32_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_31833F8 *method)
{
  const MethodInfo_31833F8_RGCTXs *rgctx_data; // x8
  System_String_o *v9; // x23
  System_String_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  __int64 *v33; // x8
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  System_String_o *v48; // x20
  int32_t v50; // [xsp+8h] [xbp-38h] BYREF
  int32_t v51; // [xsp+Ch] [xbp-34h] BYREF

  v50 = actual;
  v51 = expected;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    sub_1C93AD4(&StringLiteral_19523/*"expectedEqual"*/);
    sub_1C93AD4(&StringLiteral_19524/*"expectedNotEqual"*/);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C69BC4(method);
      rgctx_data = method->rgctx_data;
    }
  }
  v9 = System_Int32__ToString((int32_t)&v51, (const MethodInfo *)rgctx_data[1]._0_T);
  v10 = System_Int32__ToString((int32_t)&v50, (const MethodInfo *)method->rgctx_data[1]._0_T);
  v11 = sub_1C93B7C(string___TypeInfo, 5);
  if ( !v11 )
    sub_1C93D2C(0, v12);
  v19 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v11 + 32) = v9;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)v9, v13, v14, v15, v16, v17, v18);
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_15;
  v26 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v19 + 40) = StringLiteral_113/*" "*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 40), v26, v20, v21, v22, v23, v24, v25);
  v33 = (__int64 *)&StringLiteral_19524/*"expectedNotEqual"*/;
  if ( !equal )
    v33 = (__int64 *)&StringLiteral_19523/*"expectedEqual"*/;
  if ( *(_DWORD *)(v19 + 24) <= 2u
    || (v34 = *v33,
        *(_QWORD *)(v19 + 48) = *v33,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 48), v34, v27, v28, v29, v30, v31, v32),
        *(_DWORD *)(v19 + 24) <= 3u)
    || (v41 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v19 + 56) = StringLiteral_113/*" "*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 56), v41, v35, v36, v37, v38, v39, v40),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_15:
    sub_1C93D34(v11);
  }
  *(_QWORD *)(v19 + 64) = v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 64), (int32_t)v10, v42, v43, v44, v45, v46, v47);
  v48 = System_String__Concat_64466256((System_String_array *)v19, 0);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v48, message, 0);
}


System_String_o *Fgo_Assertions_Assert__GetComparisonAssertMessage_long_(
        int64_t expected,
        int64_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_31835C4 *method)
{
  const MethodInfo_31835C4_RGCTXs *rgctx_data; // x8
  System_String_o *v9; // x23
  System_String_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  __int64 *v33; // x8
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  System_String_o *v48; // x20
  int64_t v50; // [xsp+8h] [xbp-48h] BYREF
  int64_t v51; // [xsp+18h] [xbp-38h] BYREF

  v51 = expected;
  v50 = actual;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    sub_1C93AD4(&StringLiteral_19523/*"expectedEqual"*/);
    sub_1C93AD4(&StringLiteral_19524/*"expectedNotEqual"*/);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C69BC4(method);
      rgctx_data = method->rgctx_data;
    }
  }
  v9 = System_Int64__ToString((int64_t)&v51, (const MethodInfo *)rgctx_data[1]._0_T);
  v10 = System_Int64__ToString((int64_t)&v50, (const MethodInfo *)method->rgctx_data[1]._0_T);
  v11 = sub_1C93B7C(string___TypeInfo, 5);
  if ( !v11 )
    sub_1C93D2C(0, v12);
  v19 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v11 + 32) = v9;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)v9, v13, v14, v15, v16, v17, v18);
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_15;
  v26 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v19 + 40) = StringLiteral_113/*" "*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 40), v26, v20, v21, v22, v23, v24, v25);
  v33 = (__int64 *)&StringLiteral_19524/*"expectedNotEqual"*/;
  if ( !equal )
    v33 = (__int64 *)&StringLiteral_19523/*"expectedEqual"*/;
  if ( *(_DWORD *)(v19 + 24) <= 2u
    || (v34 = *v33,
        *(_QWORD *)(v19 + 48) = *v33,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 48), v34, v27, v28, v29, v30, v31, v32),
        *(_DWORD *)(v19 + 24) <= 3u)
    || (v41 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v19 + 56) = StringLiteral_113/*" "*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 56), v41, v35, v36, v37, v38, v39, v40),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_15:
    sub_1C93D34(v11);
  }
  *(_QWORD *)(v19 + 64) = v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 64), (int32_t)v10, v42, v43, v44, v45, v46, v47);
  v48 = System_String__Concat_64466256((System_String_array *)v19, 0);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v48, message, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *Fgo_Assertions_Assert__GetComparisonAssertMessage_object_(
        Il2CppObject *expected,
        Il2CppObject *actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_3183798 *method)
{
  __int64 v9; // x23
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  __int64 *v33; // x8
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  System_String_o *v48; // x20

  if ( (byte_4D3619C & 1) == 0 )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    sub_1C93AD4(&StringLiteral_22605/*"null"*/);
    sub_1C93AD4(&StringLiteral_19523/*"expectedEqual"*/);
    sub_1C93AD4(&StringLiteral_19524/*"expectedNotEqual"*/);
    byte_4D3619C = 1;
  }
  if ( expected )
    v9 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, bool, System_String_o *, const MethodInfo_3183798 *))expected->klass->vtable[3].methodPtr)(
           expected,
           expected->klass->vtable[3].method,
           equal,
           message,
           method);
  else
    v9 = StringLiteral_22605/*"null"*/;
  if ( actual )
    v10 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))actual->klass->vtable[3].methodPtr)(
            actual,
            actual->klass->vtable[3].method);
  else
    v10 = StringLiteral_22605/*"null"*/;
  v11 = sub_1C93B7C(string___TypeInfo, 5);
  if ( !v11 )
    sub_1C93D2C(0, v12);
  v19 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_21;
  *(_QWORD *)(v11 + 32) = v9;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 32), v9, v13, v14, v15, v16, v17, v18);
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_21;
  v26 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v19 + 40) = StringLiteral_113/*" "*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 40), v26, v20, v21, v22, v23, v24, v25);
  v33 = (__int64 *)(equal ? &StringLiteral_19524/*"expectedNotEqual"*/ : &StringLiteral_19523/*"expectedEqual"*/);
  if ( *(_DWORD *)(v19 + 24) <= 2u
    || (v34 = *v33,
        *(_QWORD *)(v19 + 48) = *v33,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 48), v34, v27, v28, v29, v30, v31, v32),
        *(_DWORD *)(v19 + 24) <= 3u)
    || (v41 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v19 + 56) = StringLiteral_113/*" "*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 56), v41, v35, v36, v37, v38, v39, v40),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_21:
    sub_1C93D34(v11);
  }
  *(_QWORD *)(v19 + 64) = v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 64), v10, v42, v43, v44, v45, v46, v47);
  v48 = System_String__Concat_64466256((System_String_array *)v19, 0);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v48, message, 0);
}


System_String_o *Fgo_Assertions_Assert__GetEffectiveAssertMessage(
        System_String_o *defaultMessage,
        System_String_o *message,
        const MethodInfo *method)
{
  if ( (byte_4D34F63 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_56/*"\n("*/);
    sub_1C93AD4(&StringLiteral_757/*")"*/);
    byte_4D34F63 = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0) )
    return defaultMessage;
  else
    return System_String__Concat_64465992(
             message,
             (System_String_o *)StringLiteral_56/*"\n("*/,
             defaultMessage,
             (System_String_o *)StringLiteral_757/*")"*/,
             0);
}


System_String_o *Fgo_Assertions_Assert__GetNullAssertMessage(
        System_String_o *modelName,
        System_String_o *message,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_String_o *v6; // x20

  if ( (byte_4D34F6F & 1) == 0 )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&StringLiteral_25713/*"が null です"*/);
    byte_4D34F6F = 1;
  }
  v6 = System_String__Concat_64425724(modelName, (System_String_o *)StringLiteral_25713/*"が null です"*/, 0);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v6, message, v5);
}


System_String_o *Fgo_Assertions_Assert__GetParseAssertMessage(
        System_String_o *value,
        System_String_o *message,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_String_o *v6; // x20

  if ( (byte_4D34F71 & 1) == 0 )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&StringLiteral_275/*" isNotNumbers"*/);
    byte_4D34F71 = 1;
  }
  v6 = System_String__Concat_64425724(value, (System_String_o *)StringLiteral_275/*" isNotNumbers"*/, 0);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v6, message, v5);
}


// local variable allocation has failed, the output may be wrong!
void Fgo_Assertions_Assert__HasContainKey___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_T1__T2__o *dic,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_3183EF4 *method)
{
  long double v7; // q0
  __int64 v8; // x21
  System_String_o *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x20
  __int64 v11; // x8
  __int64 v13; // x0
  size_t v14; // x24
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
  _BYTE v33[4]; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v34; // [xsp+18h] [xbp-8h]

  v8 = *(_QWORD *)&line;
  monitor = (System_String_o *)key.monitor;
  klass = key.klass;
  v34 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v31 = key.klass;
  v11 = *(_QWORD *)(*(_QWORD *)&line + 56LL);
  if ( !v11 )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&StringLiteral_25749/*"ディクショナリ"*/);
    sub_1C93AD4(&StringLiteral_775/*") の値がディクショナリに含まれていません"*/);
    sub_1C93AD4(&StringLiteral_21374/*"key("*/);
    sub_1C93AD4(&StringLiteral_25733/*"キー"*/);
    v11 = *(_QWORD *)(v8 + 56);
    if ( !v11 )
    {
      sub_1C69BC4(v8);
      v11 = *(_QWORD *)(v8 + 56);
    }
  }
  v13 = *(_QWORD *)(v11 + 8);
  v14 = *(unsigned int *)(v13 + 252);
  v15 = *(_DWORD *)(v13 + 252);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v15 = *(_DWORD *)(sub_1C69B68(v7) + 252);
  v16 = (char *)&v31 - (((unsigned int)(v15 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v17 = (System_String_o *)((char *)&v31 - ((v14 + 15) & 0x1FFFFFFF0LL));
  if ( !dic )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v28 = &StringLiteral_25749/*"ディクショナリ"*/;
    goto LABEL_25;
  }
  v18 = *(_QWORD *)(v8 + 56);
  if ( *(int *)(*(_QWORD *)(v18 + 8) + 40LL) >= 0 )
    v19 = &v31;
  else
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v31 - ((v14 + 15) & 0x1FFFFFFF0LL), v19, v14);
  if ( (sub_1C93CE4(*(_QWORD *)(v18 + 8), (char *)&v31 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) == 0 )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v28 = &StringLiteral_25733/*"キー"*/;
LABEL_25:
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)*v28, monitor, 0);
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
  ((void (__fastcall *)(__int64, __int64 *, System_Collections_Generic_Dictionary_T1__T2__o *, System_String_o **, _BYTE *))v22[2])(
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
      LODWORD(v27) = sub_1C69B68(v24);
      v25 = *(_QWORD *)(v8 + 56);
      klass = v31;
      v26 = *(_QWORD *)(v25 + 8);
    }
    if ( *(int *)(v26 + 40) >= 0 )
      v29 = &v31;
    else
      v29 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    sub_1C94610(v27, *(_QWORD *)(v25 + 24), (int)v16, v29);
    v30 = System_String__Concat_64463988(
            (System_String_o *)StringLiteral_21374/*"key("*/,
            v32,
            (System_String_o *)StringLiteral_775/*") の値がディクショナリに含まれていません"*/,
            0);
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetEffectiveAssertMessage(v30, monitor, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void Fgo_Assertions_Assert__IsAllSerializeFieldsNotNull(
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
  Il2CppType *v14; // x24
  System_Type_o *TypeFromHandle; // x0
  Il2CppType *v16; // x24
  System_Type_o *v17; // x0
  Il2CppType *v18; // x24
  UnityEngine_Component_o *v19; // x24
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  Il2CppType *v26; // x24
  System_Type_o *v27; // x24
  Il2CppType *v28; // x24
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
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v50; // x0
  __int64 v51; // x1
  System_Collections_Generic_IEnumerable_TResult__o *v52; // x20
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  __int64 v54; // x9
  int32_t *p_offset; // x10
  __int64 v56; // x0
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

  v4 = (Il2CppObject *)component;
  if ( (byte_4D34F74 & 1) == 0 )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___set_Item__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_Object____f__AnonymousType0_Object__int____);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_FieldInfo__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_FieldInfo__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_FieldInfo__get_Current__);
    sub_1C93AD4(&System_Func_Object__int____f__AnonymousType0_Object__int___TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_Object__var);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_Object__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator___f__AnonymousType0_Object__int___TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FieldInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FieldInfo__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_FieldInfo___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_FieldInfo__TypeInfo);
    sub_1C93AD4(&Fgo_Assertions_Assert_NullableAttribute_var);
    sub_1C93AD4(&UnityEngine_Object___var);
    sub_1C93AD4(&UnityEngine_Object_var);
    sub_1C93AD4(&UnityEngine_SerializeField_var);
    sub_1C93AD4(&System_Type_TypeInfo);
    sub_1C93AD4(&Method_Fgo_Assertions_Assert___c__IsAllSerializeFieldsNotNull_b__42_0__);
    component = (UnityEngine_Component_o *)sub_1C93AD4(&Fgo_Assertions_Assert___c_TypeInfo);
    byte_4D34F74 = 1;
  }
  memset(&v72, 0, sizeof(v72));
  if ( !v4 )
    goto LABEL_92;
  Type = System_Object__GetType(v4, 0);
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
                                           (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___ContainsKey__);
  if ( ((unsigned __int8)component & 1) != 0 )
    goto LABEL_45;
  if ( !v7 )
    goto LABEL_92;
  v8 = checkInheritance ? 60LL : 62LL;
  v9 = ((__int64 (__fastcall *)(Il2CppObject *, __int64, const MethodInfo *))v7->klass->vtable[88].methodPtr)(
         v7,
         v8,
         v7->klass->vtable[88].method);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_FieldInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_FieldInfo___ctor__);
  if ( !v9 )
    goto LABEL_92;
  v11 = *(_QWORD *)(v9 + 24);
  if ( (int)v11 >= 1 )
  {
    v12 = 0;
    do
    {
      if ( v12 >= (unsigned int)v11 )
        sub_1C93D34(component);
      v13 = *(System_Reflection_MemberInfo_o **)(v9 + 32 + 8 * v12);
      v14 = UnityEngine_SerializeField_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v14, 0);
      component = (UnityEngine_Component_o *)System_Reflection_CustomAttributeExtensions__IsDefined(
                                               v13,
                                               TypeFromHandle,
                                               0);
      if ( ((unsigned __int8)component & 1) != 0 )
      {
        v16 = Fgo_Assertions_Assert_NullableAttribute_var;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v17 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v16, 0);
        component = (UnityEngine_Component_o *)System_Reflection_CustomAttributeExtensions__IsDefined(v13, v17, 0);
        if ( ((unsigned __int8)component & 1) == 0 )
        {
          v18 = UnityEngine_Object_var;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          component = (UnityEngine_Component_o *)System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v18, 0);
          if ( !v13 )
            goto LABEL_92;
          v19 = component;
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, const char *))v13->klass[1]._1.name)(
                                                   v13,
                                                   v13->klass[1]._1.namespaze);
          if ( !v19 )
            goto LABEL_92;
          component = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, UnityEngine_Component_o *, _QWORD))&v19->klass[1]._2.field_count)(
                                                   v19,
                                                   component,
                                                   *(_QWORD *)&v19->klass[1]._2.interfaces_count);
          if ( ((unsigned __int8)component & 1) != 0 )
            goto LABEL_96;
          v26 = UnityEngine_Object___var;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v27 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v26, 0);
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, const char *))v13->klass[1]._1.name)(
                                                   v13,
                                                   v13->klass[1]._1.namespaze);
          if ( !v27 )
            goto LABEL_92;
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Type_o *, UnityEngine_Component_o *, const MethodInfo *))v27->klass->vtable._22_IsAssignableFrom.methodPtr)(
                                                   v27,
                                                   component,
                                                   v27->klass->vtable._22_IsAssignableFrom.method);
          if ( ((unsigned __int8)component & 1) != 0 )
            goto LABEL_96;
          v28 = System_Collections_Generic_IEnumerable_Object__var;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v29 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v28, 0);
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, const char *))v13->klass[1]._1.name)(
                                                   v13,
                                                   v13->klass[1]._1.namespaze);
          if ( !v29 )
            goto LABEL_92;
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Type_o *, UnityEngine_Component_o *, const MethodInfo *))v29->klass->vtable._22_IsAssignableFrom.methodPtr)(
                                                   v29,
                                                   component,
                                                   v29->klass->vtable._22_IsAssignableFrom.method);
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
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)v13,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v33[4] = (Il2CppClass *)v13;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v13, v20, v21, v22, v23, v24, v25);
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
  component = (UnityEngine_Component_o *)System_Object__GetType(v4, 0);
  if ( !cachedFieldInfo )
LABEL_92:
    sub_1C93D2C(component, checkInheritance);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    cachedFieldInfo,
    (Il2CppObject *)component,
    (Il2CppObject *)v10,
    (const MethodInfo_352EB94 *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___set_Item__);
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
                                           (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___get_Item__);
  if ( !component )
    goto LABEL_92;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    (System_Collections_Generic_List_object__o *)component,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_FieldInfo__GetEnumerator__);
  v72 = v71;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v72,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_FieldInfo__MoveNext__) )
  {
    if ( !v72.fields._current )
      sub_1C93D2C(0, v37);
    v38 = ((__int64 (*)(void))v72.fields._current->klass->vtable[25].methodPtr)();
    v39 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C93C10(
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
        _9__42_0 = (System_Func_T1__T2__TResult__o *)sub_1C93D20(System_Func_Object__int____f__AnonymousType0_Object__int___TypeInfo);
        System_Func_object__int__object____ctor(
          _9__42_0,
          v42,
          Method_Fgo_Assertions_Assert___c__IsAllSerializeFieldsNotNull_b__42_0__,
          0);
        static_fields = Fgo_Assertions_Assert___c_TypeInfo->static_fields;
        static_fields->__9__42_0 = (struct System_Func_Object__int____f__AnonymousType0_Object__int___o *)_9__42_0;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__42_0,
          (int32_t)_9__42_0,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
      }
      v50 = System_Linq_Enumerable__Select_object__object__52276788(
              v39,
              (System_Func_TSource__int__TResult__o *)_9__42_0,
              (const MethodInfo_31DAE34 *)Method_System_Linq_Enumerable_Select_Object____f__AnonymousType0_Object__int____);
      v52 = v50;
      if ( !v50 )
        sub_1C93D2C(0, v51);
      klass = v50->klass;
      v54 = *(unsigned __int16 *)&v50->klass->_2.rank;
      if ( *(_WORD *)&v50->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___c **)p_offset - 1) != System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___TypeInfo )
        {
          --v54;
          p_offset += 4;
          if ( !v54 )
            goto LABEL_64;
        }
        v56 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_64:
        v56 = sub_1C69E5C(v50, System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___TypeInfo, 0);
      }
      v58 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v56)(
              v52,
              *(_QWORD *)(v56 + 8));
      if ( !v58 )
        sub_1C93D2C(0, v57);
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
          v62 = sub_1C69E5C(v58, System_Collections_IEnumerator_TypeInfo, 0);
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
          v66 = sub_1C69E5C(v58, System_Collections_Generic_IEnumerator___f__AnonymousType0_Object__int___TypeInfo, 0);
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
        v70 = sub_1C69E5C(v58, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v70)(v58, *(_QWORD *)(v70 + 8));
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v72,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_FieldInfo__Dispose__);
}


void Fgo_Assertions_Assert__IsAssetDataNotNull(
        Il2CppObject *assetData,
        System_String_o *assetName,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4D34F6D & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15990/*"[AssetData]\n{0}をロードできませんでした"*/);
    byte_4D34F6D = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_15990/*"[AssetData]\n{0}をロードできませんでした"*/, (Il2CppObject *)assetName, 0);
}


void Fgo_Assertions_Assert__IsFalse(
        bool condition,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  ;
}


void Fgo_Assertions_Assert__IsInRange(
        int32_t count,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  Il2CppObject *v10; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x2
  Il2CppObject *v14; // x0
  System_String_o *v15; // x20
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v17; // [xsp+18h] [xbp-28h] BYREF
  int32_t v18; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4D34F70 & 1) == 0 )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&StringLiteral_20997/*"index({0}) の値が負です"*/);
    sub_1C93AD4(&StringLiteral_20998/*"index({0}) の値が配列の要素数({1})を超えています"*/);
    byte_4D34F70 = 1;
  }
  if ( index < 0 )
  {
    v18 = index;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    v12 = System_String__Format((System_String_o *)StringLiteral_20997/*"index({0}) の値が負です"*/, v14, 0);
  }
  else
  {
    if ( count > index )
      return;
    v17 = index;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    v16 = count;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    v12 = System_String__Format_64467032((System_String_o *)StringLiteral_20998/*"index({0}) の値が配列の要素数({1})を超えています"*/, v10, v11, 0);
  }
  v15 = v12;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  Fgo_Assertions_Assert__GetEffectiveAssertMessage(v15, message, v13);
}


void Fgo_Assertions_Assert__IsInRange___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_3184214 *method)
{
  if ( (byte_4D3619E & 1) == 0 )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&StringLiteral_25838/*"配列"*/);
    byte_4D3619E = 1;
  }
  if ( !array )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25838/*"配列"*/, message, 0);
  }
}


void Fgo_Assertions_Assert__IsInRange___Il2CppFullySharedGenericType__51921296(
        System_Collections_Generic_List_T__o *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_3184190 *method)
{
  if ( (byte_4D3619D & 1) == 0 )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&StringLiteral_25762/*"リスト"*/);
    byte_4D3619D = 1;
  }
  if ( !array )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25762/*"リスト"*/, message, 0);
  }
}


void Fgo_Assertions_Assert__IsNotNull_object_(
        Il2CppObject *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_3184298 *method)
{
  Il2CppClass *klass; // x8
  UnityEngine_Object_c *v8; // x0
  unsigned int naturalAligment; // w10
  __int64 v10; // x9
  Il2CppObject *v11; // x0

  if ( (byte_4D3619F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3619F = 1;
  }
  if ( value )
  {
    klass = value->klass;
    v8 = UnityEngine_Object_TypeInfo;
    naturalAligment = value->klass->_2.naturalAligment;
    v10 = UnityEngine_Object_TypeInfo->_2.naturalAligment;
    if ( naturalAligment >= (unsigned int)v10
      && (UnityEngine_Object_c *)klass->_2.typeHierarchy[v10 - 1] == UnityEngine_Object_TypeInfo )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        klass = value->klass;
        v8 = UnityEngine_Object_TypeInfo;
        naturalAligment = value->klass->_2.naturalAligment;
        LODWORD(v10) = UnityEngine_Object_TypeInfo->_2.naturalAligment;
      }
      if ( naturalAligment >= (unsigned int)v10 )
      {
        if ( (UnityEngine_Object_c *)klass->_2.typeHierarchy[(unsigned int)v10 - 1] == v8 )
          v11 = value;
        else
          v11 = 0;
      }
      else
      {
        v11 = 0;
      }
      UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v11, 0, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
// positive sp value has been detected, the output may be wrong!
void Fgo_Assertions_Assert__IsNotThrowAction(
        System_Action_o *action,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4D34F73 & 1) == 0 )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&StringLiteral_25720/*"アクション"*/);
    byte_4D34F73 = 1;
  }
  if ( action )
  {
    ((void (__fastcall *)(intptr_t, intptr_t, UnityEngine_GameObject_o *, System_String_o *, _QWORD, const MethodInfo *))action->fields.invoke_impl)(
      action->fields.method_code,
      action->fields.method,
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
      (System_String_o *)StringLiteral_25720/*"アクション"*/,
      message,
      (const MethodInfo *)gameObject);
  }
}


void Fgo_Assertions_Assert__IsNull_object_(
        Il2CppObject *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_318435C *method)
{
  Il2CppClass *klass; // x8
  UnityEngine_Object_c *v8; // x0
  unsigned int naturalAligment; // w10
  __int64 v10; // x9
  Il2CppObject *v11; // x0

  if ( (byte_4D361A0 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D361A0 = 1;
  }
  if ( value )
  {
    klass = value->klass;
    v8 = UnityEngine_Object_TypeInfo;
    naturalAligment = value->klass->_2.naturalAligment;
    v10 = UnityEngine_Object_TypeInfo->_2.naturalAligment;
    if ( naturalAligment >= (unsigned int)v10
      && (UnityEngine_Object_c *)klass->_2.typeHierarchy[v10 - 1] == UnityEngine_Object_TypeInfo )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        klass = value->klass;
        v8 = UnityEngine_Object_TypeInfo;
        naturalAligment = value->klass->_2.naturalAligment;
        LODWORD(v10) = UnityEngine_Object_TypeInfo->_2.naturalAligment;
      }
      if ( naturalAligment >= (unsigned int)v10 )
      {
        if ( (UnityEngine_Object_c *)klass->_2.typeHierarchy[(unsigned int)v10 - 1] == v8 )
          v11 = value;
        else
          v11 = 0;
      }
      else
      {
        v11 = 0;
      }
      UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
    }
  }
}


void Fgo_Assertions_Assert__IsSerializeFieldNotNull_object_(
        Il2CppObject *value,
        System_String_o *fieldName,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_3184420 *method)
{
  if ( (byte_4D361A1 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16038/*"[SerializeField]\n{0}の参照が切れています"*/);
    byte_4D361A1 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_16038/*"[SerializeField]\n{0}の参照が切れています"*/, (Il2CppObject *)fieldName, 0);
}


void Fgo_Assertions_Assert__IsTrue(
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
void Fgo_Assertions_Assert__IsTrueOnce(
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

  if ( (byte_4D34F6C & 1) == 0 )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Contains__);
    byte_4D34F6C = 1;
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
             (const MethodInfo_3727C20 *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Contains__) )
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
          (const MethodInfo_3728730 *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Add__);
        return;
      }
    }
    sub_1C93D2C(suppressAsserts, condition);
  }
}


void Fgo_Assertions_Assert__OnFailed(
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

  if ( (byte_4D34F5F & 1) == 0 )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&StringLiteral_25428/*"{0}\n(expected={1}, actual={2})"*/);
    byte_4D34F5F = 1;
  }
  v7 = System_String__Format_64467100(
         (System_String_o *)StringLiteral_25428/*"{0}\n(expected={1}, actual={2})"*/,
         (Il2CppObject *)message,
         (Il2CppObject *)expected,
         (Il2CppObject *)actual,
         0);
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
          sub_1C93D2C(v12, v13);
      }
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))onFailedAction->fields.invoke_impl)(
        onFailedAction->fields.method_code,
        v9,
        onFailedAction->fields.method);
    }
  }
}


void Fgo_Assertions_Assert__OnFailedDataEntityExists(
        System_String_o *name,
        System_String_o *key,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4D34F6E & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16015/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/);
    byte_4D34F6E = 1;
  }
  System_String__Format_64467032((System_String_o *)StringLiteral_16015/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/, (Il2CppObject *)name, (Il2CppObject *)key, 0);
}


void Fgo_Assertions_Assert__OnFailed_49754664(
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
  Il2CppObject *v13; // x0
  Il2CppObject *v14; // x20
  System_String_o *name; // x0
  System_String_o *v16; // x0
  Fgo_Assertions_Assert_c *v17; // x8
  System_String_o *v18; // x21
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x9
  struct System_Action_string__o *onFailedAction; // x9
  struct System_Action_string__string__string__o *onFailedSendReport; // x9
  int32_t v22; // [xsp+Ch] [xbp-54h] BYREF

  v9 = message;
  v10 = (Il2CppObject *)caption;
  if ( (byte_4D34F60 & 1) == 0 )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&System_IO_Path_TypeInfo);
    sub_1C93AD4(&StringLiteral_25466/*"{0}({1})"*/);
    sub_1C93AD4(&StringLiteral_61/*"\nGameObject:"*/);
    caption = (System_String_o *)sub_1C93AD4(&StringLiteral_25429/*"{0}\n{1}\n{2}"*/);
    byte_4D34F60 = 1;
  }
  if ( !filePath )
    goto LABEL_27;
  v11 = System_String__Replace(filePath, 0x5Cu, 0x2Fu, 0);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = (Il2CppObject *)System_IO_Path__GetFileName(v11, 0);
  v22 = line;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v14 = (Il2CppObject *)System_String__Format_64467032((System_String_o *)StringLiteral_25466/*"{0}({1})"*/, FileName, v13, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  caption = (System_String_o *)UnityEngine_Object__op_Inequality(0, (UnityEngine_Object_o *)gameObject, 0);
  if ( ((unsigned __int8)caption & 1) != 0 )
  {
    if ( !gameObject )
      goto LABEL_27;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
    v9 = System_String__Concat_64463988(v9, (System_String_o *)StringLiteral_61/*"\nGameObject:"*/, name, 0);
  }
  v16 = System_String__Format_64467100((System_String_o *)StringLiteral_25429/*"{0}\n{1}\n{2}"*/, v10, (Il2CppObject *)v9, v14, 0);
  v17 = Fgo_Assertions_Assert_TypeInfo;
  v18 = v16;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v17 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v17->static_fields;
  if ( static_fields->enable )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = Fgo_Assertions_Assert_TypeInfo;
      static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
    }
    onFailedAction = static_fields->onFailedAction;
    if ( onFailedAction )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        onFailedAction = Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedAction;
        if ( !onFailedAction )
          goto LABEL_27;
      }
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))onFailedAction->fields.invoke_impl)(
        onFailedAction->fields.method_code,
        v18,
        onFailedAction->fields.method);
      v17 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = Fgo_Assertions_Assert_TypeInfo;
    }
    onFailedSendReport = v17->static_fields->onFailedSendReport;
    if ( onFailedSendReport )
    {
      if ( v17->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v17),
            (onFailedSendReport = Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedSendReport) != 0) )
      {
        ((void (__fastcall *)(intptr_t, Il2CppObject *, System_String_o *, Il2CppObject *, intptr_t))onFailedSendReport->fields.invoke_impl)(
          onFailedSendReport->fields.method_code,
          v10,
          v18,
          v14,
          onFailedSendReport->fields.method);
        return;
      }
LABEL_27:
      sub_1C93D2C(caption, message);
    }
  }
}


void Fgo_Assertions_Assert__SetOnFailedAction(System_Action_string__o *action, bool force, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Fgo_Assertions_Assert_c *v10; // x0
  Fgo_Assertions_Assert_c *v11; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_4D34F61 & 1) == 0 )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&StringLiteral_25809/*"既に表明違反時の処理が設定されています"*/);
    byte_4D34F61 = 1;
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
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_25809/*"既に表明違反時の処理が設定されています"*/, 0);
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->onFailedAction,
    (int32_t)action,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void Fgo_Assertions_Assert__SetOnFailedSendReport(
        System_Action_string__string__string__o *action,
        bool force,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Fgo_Assertions_Assert_c *v10; // x0
  Fgo_Assertions_Assert_c *v11; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_4D34F62 & 1) == 0 )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&StringLiteral_25809/*"既に表明違反時の処理が設定されています"*/);
    byte_4D34F62 = 1;
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
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_25809/*"既に表明違反時の処理が設定されています"*/, 0);
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->onFailedSendReport,
    (int32_t)action,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void Fgo_Assertions_Assert_NullableAttribute___ctor(
        Fgo_Assertions_Assert_NullableAttribute_o *this,
        const MethodInfo *method)
{
  System_Attribute___ctor((System_Attribute_o *)this, 0);
}


void Fgo_Assertions_Assert_StringFormatParam___ctor(
        Fgo_Assertions_Assert_StringFormatParam_o *this,
        System_String_o *aFormat,
        System_Object_array *aArgs,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.format = aFormat;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)aFormat, v7, v8, v9, v10, v11, v12);
  this->fields.args = aArgs;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.args, (int32_t)aArgs, v13, v14, v15, v16, v17, v18);
}


void Fgo_Assertions_Assert___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D34F76 & 1) == 0 )
  {
    sub_1C93AD4(&Fgo_Assertions_Assert___c_TypeInfo);
    byte_4D34F76 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(Fgo_Assertions_Assert___c_TypeInfo);
  System_Object___ctor(v1, 0);
  Fgo_Assertions_Assert___c_TypeInfo->static_fields->__9 = (struct Fgo_Assertions_Assert___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)Fgo_Assertions_Assert___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void Fgo_Assertions_Assert___c___ctor(Fgo_Assertions_Assert___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


__f__AnonymousType0_Object__int__o *Fgo_Assertions_Assert___c___IsAllSerializeFieldsNotNull_b__42_0(
        Fgo_Assertions_Assert___c_o *this,
        UnityEngine_Object_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  __f__AnonymousType0__obj_j__TPar___index_j__TPar__o *v6; // x21

  if ( (byte_4D34F77 & 1) == 0 )
  {
    sub_1C93AD4(&Method___f__AnonymousType0_Object__int___ctor__);
    sub_1C93AD4(&_f__AnonymousType0_Object__int__TypeInfo);
    byte_4D34F77 = 1;
  }
  v6 = (__f__AnonymousType0__obj_j__TPar___index_j__TPar__o *)sub_1C93D20(_f__AnonymousType0_Object__int__TypeInfo);
  _f__AnonymousType0_object__int____ctor(
    v6,
    (Il2CppObject *)obj,
    index,
    (const MethodInfo_338054C *)Method___f__AnonymousType0_Object__int___ctor__);
  return (__f__AnonymousType0_Object__int__o *)v6;
}


void Fgo_Assertions_AssertQueue___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D34F7D & 1) == 0 )
  {
    sub_1C93AD4(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Queue_string__TypeInfo);
    byte_4D34F7D = 1;
  }
  v1 = (System_Collections_Generic_Queue_T__o *)sub_1C93D20(System_Collections_Generic_Queue_string__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v1,
    (const MethodInfo_3A217C4 *)Method_System_Collections_Generic_Queue_string___ctor__);
  Fgo_Assertions_AssertQueue_TypeInfo->static_fields->queue = (struct System_Collections_Generic_Queue_string__o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)Fgo_Assertions_AssertQueue_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  static_fields = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
  static_fields->onFailedAction = 0;
  static_fields = (struct Fgo_Assertions_AssertQueue_StaticFields *)((char *)static_fields + 16);
  LOBYTE(static_fields[-1].onFailedAction) = 1;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)static_fields, 0, v9, v10, v11, v12, v13, v14);
}


void Fgo_Assertions_AssertQueue__Clear(const MethodInfo *method)
{
  __int64 v1; // x1
  Fgo_Assertions_AssertQueue_c *v2; // x0
  System_Collections_Generic_Queue_T__o *queue; // x0

  if ( (byte_4D34F7C & 1) == 0 )
  {
    sub_1C93AD4(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_string__Clear__);
    byte_4D34F7C = 1;
  }
  v2 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v2 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  queue = (System_Collections_Generic_Queue_T__o *)v2->static_fields->queue;
  if ( !queue )
    sub_1C93D2C(0, v1);
  System_Collections_Generic_Queue_object___Clear(
    queue,
    (const MethodInfo_3A21A4C *)Method_System_Collections_Generic_Queue_string__Clear__);
}


void Fgo_Assertions_AssertQueue__Dequeue(const MethodInfo *method)
{
  __int64 v1; // x1
  System_Collections_Generic_Queue_T__o *queue; // x0
  struct Fgo_Assertions_AssertQueue_StaticFields *syncRoot; // x8
  int32_t size; // w20
  Il2CppObject *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4D34F7B & 1) == 0 )
  {
    sub_1C93AD4(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_string__Dequeue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_string__get_Count__);
    byte_4D34F7B = 1;
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
               (const MethodInfo_3A21F1C *)Method_System_Collections_Generic_Queue_string__Dequeue__);
        Fgo_Assertions_AssertQueue__OnFailed((System_String_o *)v5, v6);
        return;
      }
LABEL_12:
      sub_1C93D2C(queue, v1);
    }
  }
  syncRoot->isReady = 1;
}


void Fgo_Assertions_AssertQueue__Enqueue(System_String_o *message, const MethodInfo *method)
{
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x8
  _BOOL4 isReady; // w21

  if ( (byte_4D34F7A & 1) == 0 )
  {
    sub_1C93AD4(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_string__Enqueue__);
    byte_4D34F7A = 1;
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
    sub_1C93D2C(0, method);
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)static_fields->queue,
    (Il2CppObject *)message,
    (const MethodInfo_3A21D8C *)Method_System_Collections_Generic_Queue_string__Enqueue__);
}


void Fgo_Assertions_AssertQueue__OnFailed(System_String_o *message, const MethodInfo *method)
{
  Fgo_Assertions_AssertQueue_c *v3; // x0
  struct System_Action_string__o *onFailedAction; // x8
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D34F78 & 1) == 0 )
  {
    sub_1C93AD4(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&StringLiteral_25828/*"表明違反時処理が設定されていません"*/);
    byte_4D34F78 = 1;
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
        sub_1C93D2C(v5, v6);
    }
    ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))onFailedAction->fields.invoke_impl)(
      onFailedAction->fields.method_code,
      message,
      onFailedAction->fields.method);
  }
  else
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_25828/*"表明違反時処理が設定されていません"*/, 0);
  }
}


void Fgo_Assertions_AssertQueue__SetOnFailedAction(System_Action_string__o *action, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Fgo_Assertions_AssertQueue_c *v9; // x0
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x0

  if ( (byte_4D34F79 & 1) == 0 )
  {
    sub_1C93AD4(&Fgo_Assertions_AssertQueue_TypeInfo);
    byte_4D34F79 = 1;
  }
  v9 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v9 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->onFailedAction = action;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->onFailedAction, (int32_t)action, v2, v3, v4, v5, v6, v7);
}