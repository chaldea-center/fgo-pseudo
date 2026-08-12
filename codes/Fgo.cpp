void Fgo_Assertions_Assert___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0
  struct Fgo_Assertions_Assert_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_HashSet_T__o *v15; // x19
  struct Fgo_Assertions_Assert_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_Dictionary_object__object__o *v23; // x19
  struct Fgo_Assertions_Assert_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_5974EB4 & 1) == 0 )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_Type__List_FieldInfo___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_Assert_SuppressAssertKey__TypeInfo);
    byte_5974EB4 = 1;
  }
  static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
  static_fields->enable = 1;
  static_fields->onFailedAction = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->onFailedAction, 0, v1, v2, v3, v4, v5, v6);
  v8 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v8->onFailedSendReport = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->onFailedSendReport, 0, v9, v10, v11, v12, v13, v14);
  v15 = (System_Collections_Generic_HashSet_T__o *)sub_2213CCC(System_Collections_Generic_HashSet_Assert_SuppressAssertKey__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v15,
    (const MethodInfo_42B5FC4 *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey___ctor__);
  v16 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v16->suppressAsserts = (struct System_Collections_Generic_HashSet_Assert_SuppressAssertKey__o *)v15;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->suppressAsserts, (int32_t)v15, v17, v18, v19, v20, v21, v22);
  v23 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_Type__List_FieldInfo___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v23,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo____ctor__);
  v24 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v24->cachedFieldInfo = (struct System_Collections_Generic_Dictionary_Type__List_FieldInfo___o *)v23;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->cachedFieldInfo, (int32_t)v23, v25, v26, v27, v28, v29, v30);
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
  float v10; // s0
  float v11; // s1
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v13; // s0

  if ( (byte_5974EA3 & 1) == 0 )
  {
    sub_2213A60(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    byte_5974EA3 = 1;
  }
  if ( !byte_5969AE4 )
  {
    sub_2213A60(&UnityEngine_Mathf_TypeInfo);
    byte_5969AE4 = 1;
  }
  v10 = fabsf(expected);
  v11 = fabsf(actual);
  static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
  if ( v10 <= v11 )
    v10 = v11;
  v13 = v10 * 0.000001;
  if ( v13 <= (float)(static_fields->Epsilon * 8.0) )
    v13 = static_fields->Epsilon * 8.0;
  if ( vabds_f32(actual, expected) >= v13 )
  {
    if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, gameObject);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_float_(
      expected,
      actual,
      1,
      message,
      (const MethodInfo_37D0364 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
  }
}


// local variable allocation has failed, the output may be wrong!
void Fgo_Assertions_Assert__AreEqual(
        int32_t expected,
        int32_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_5974EA4 & 1) == 0 )
  {
    sub_2213A60(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    byte_5974EA4 = 1;
  }
  if ( expected != actual )
  {
    if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&actual);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_int_(
      expected,
      actual,
      1,
      message,
      (const MethodInfo_37CFDD0 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void Fgo_Assertions_Assert__AreEqual_56099468(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_5974EA5 & 1) == 0 )
  {
    sub_2213A60(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    byte_5974EA5 = 1;
  }
  if ( expected != actual )
  {
    if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, actual);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_long_(
      expected,
      actual,
      1,
      message,
      (const MethodInfo_37CFF9C *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void Fgo_Assertions_Assert__AreEqual_56099628(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  __int64 v10; // x1

  if ( (byte_5974EA6 & 1) == 0 )
  {
    sub_2213A60(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974EA6 = 1;
  }
  if ( expected )
    goto LABEL_10;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actual);
  if ( !UnityEngine_Object__op_Equality(actual, 0, 0) )
  {
LABEL_10:
    if ( actual )
      goto LABEL_19;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actual);
    if ( !UnityEngine_Object__op_Equality(expected, 0, 0) )
    {
LABEL_19:
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actual);
      if ( UnityEngine_Object__op_Inequality(expected, actual, 0) )
      {
        if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v10);
        Fgo_Assertions_Assert__GetComparisonAssertMessage_object_(
          (Il2CppObject *)expected,
          (Il2CppObject *)actual,
          1,
          message,
          (const MethodInfo_37D0170 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
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
        const MethodInfo_37CEEF0 *method)
{
  long double v7; // q0
  void **monitor; // x21
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v10; // x22
  _QWORD *v11; // x27
  __int64 v12; // x0
  size_t v13; // x25
  __int64 v14; // x0
  int v15; // w8
  char *v16; // x26
  _QWORD *v17; // x23
  _QWORD *v18; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v19; // x1
  __int64 v20; // x27
  __int64 v21; // x28
  void **v22; // x1
  _QWORD *v23; // x27
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v24; // x1
  __int64 v25; // x0
  __int64 v26; // x10
  _QWORD *v27; // x19
  void **v28; // x1
  _QWORD *v29; // x19
  void **v30; // x1
  __int64 v31; // x0
  __int64 v32; // x10
  _QWORD *v33; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v34; // x1
  _QWORD *v35; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v36; // x1
  __int64 v37; // x0
  __int64 naturalAligment; // x10
  _QWORD *v39; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v40; // x1
  _QWORD *v41; // x19
  void **v42; // x1
  __int64 v43; // x0
  long double v44; // q0
  _QWORD *v45; // x9
  __int64 v46; // x27
  __int64 v47; // x8
  __int64 v48; // x0
  int v49; // w8
  __int64 v50; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v51; // x3
  _QWORD *v52; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v53; // x1
  void **v54; // x1
  __int64 v55; // x1
  __int64 *v56; // x1
  __int64 v57; // x0
  _QWORD *v58; // x19
  void **v59; // x1
  __int64 v60; // x0
  __int64 v61; // x10
  __int64 v62; // [xsp+0h] [xbp-60h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+8h] [xbp-58h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-50h]
  void *v65; // [xsp+18h] [xbp-48h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v66; // [xsp+20h] [xbp-40h] BYREF
  _QWORD v67[4]; // [xsp+28h] [xbp-38h] BYREF
  _BYTE v68[12]; // [xsp+48h] [xbp-18h] BYREF
  char v69; // [xsp+54h] [xbp-Ch] BYREF
  __int64 v70; // [xsp+58h] [xbp-8h]

  monitor = (void **)expected.monitor;
  klass = actual.klass;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v10 = expected.klass;
  v70 = *(_QWORD *)(StatusReg + 40);
  v11 = filePath[2].monitor;
  v65 = expected.monitor;
  v66 = expected.klass;
  if ( !v11 )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    v11 = filePath[2].monitor;
    if ( !v11 )
    {
      sub_224B964(filePath);
      v11 = filePath[2].monitor;
    }
  }
  v12 = *v11;
  v13 = *(unsigned int *)(*v11 + 252LL);
  if ( (*(_WORD *)(*v11 + 309LL) & 1) != 0 )
  {
    v15 = *(_DWORD *)(*v11 + 252LL);
  }
  else
  {
    v14 = sub_224B908(v7);
    v11 = filePath[2].monitor;
    v15 = *(_DWORD *)(v14 + 252);
    v12 = *v11;
  }
  v16 = (char *)&v62 - (((unsigned int)(v15 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v17 = (__int64 *)((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL));
  v18 = v17;
  if ( *(int *)(v12 + 40) >= 0 )
    v19 = &v66;
  else
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v10;
  memcpy(&v62, v19, v13);
  v20 = j_il2cpp_value_box_0(*v11, (char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL));
  v21 = *(_QWORD *)filePath[2].monitor;
  if ( *(int *)(v21 + 40) >= 0 )
    v22 = &v65;
  else
    v22 = monitor;
  memcpy((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL), v22, v13);
  if ( v20 != j_il2cpp_value_box_0(v21, (char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL)) )
  {
    v23 = filePath[2].monitor;
    v24 = *(int *)(*v23 + 40LL) >= 0 ? &v66 : (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v10;
    if ( (memcpy((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL), v24, v13),
          (v25 = j_il2cpp_value_box_0(*v23, (char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL))) == 0)
      || (v26 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) < (unsigned int)v26)
      || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * v26 - 8) != UnityEngine_Object_TypeInfo
      || ((v27 = filePath[2].monitor, *(int *)(*v27 + 40LL) >= 0) ? (v28 = &v65) : (v28 = monitor),
          memcpy((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL), v28, v13),
          (sub_2213C8C(*v27, (char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
    {
      v29 = filePath[2].monitor;
      v30 = *(int *)(*v29 + 40LL) >= 0 ? &v65 : monitor;
      if ( (memcpy((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL), v30, v13),
            (v31 = j_il2cpp_value_box_0(*v29, (char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL))) == 0)
        || (v32 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
            *(unsigned __int8 *)(*(_QWORD *)v31 + 304LL) < (unsigned int)v32)
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v31 + 200LL) + 8 * v32 - 8) != UnityEngine_Object_TypeInfo
        || ((v33 = filePath[2].monitor, *(int *)(*v33 + 40LL) >= 0)
          ? (v34 = &v66)
          : (v34 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v10),
            memcpy((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL), v34, v13),
            (sub_2213C8C(*v33, (char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
      {
        v35 = filePath[2].monitor;
        v36 = *(int *)(*v35 + 40LL) >= 0 ? &v66 : (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v10;
        memcpy((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL), v36, v13);
        v37 = j_il2cpp_value_box_0(*v35, (char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL));
        if ( !v37 )
          goto LABEL_40;
        naturalAligment = UnityEngine_Object_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)v37 + 304LL) < (unsigned int)naturalAligment
          || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v37 + 200LL) + 8 * naturalAligment - 8) != UnityEngine_Object_TypeInfo )
        {
          goto LABEL_40;
        }
        v58 = filePath[2].monitor;
        v59 = *(int *)(*v58 + 40LL) >= 0 ? &v65 : monitor;
        memcpy((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL), v59, v13);
        v60 = j_il2cpp_value_box_0(*v58, (char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL));
        if ( !v60
          || (v61 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
              *(unsigned __int8 *)(*(_QWORD *)v60 + 304LL) < (unsigned int)v61)
          || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v60 + 200LL) + 8 * v61 - 8) != UnityEngine_Object_TypeInfo )
        {
LABEL_40:
          v39 = filePath[2].monitor;
          if ( *(int *)(*v39 + 40LL) >= 0 )
            v40 = &v66;
          else
            v40 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v10;
          memcpy((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL), v40, v13);
          if ( (sub_2213C8C(*v39, (char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
          {
            v41 = filePath[2].monitor;
            if ( *(int *)(*v41 + 40LL) >= 0 )
              v42 = &v65;
            else
              v42 = monitor;
            memcpy((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL), v42, v13);
            v43 = j_il2cpp_value_box_0(*v41, (char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL));
            v45 = filePath[2].monitor;
            v46 = v43;
            v47 = *v45;
            if ( (*(_WORD *)(*v45 + 309LL) & 1) != 0 )
            {
              v48 = *v45;
            }
            else
            {
              LODWORD(v48) = sub_224B908(v44);
              v45 = filePath[2].monitor;
              v47 = *v45;
            }
            v49 = *(_DWORD *)(v47 + 40);
            v50 = v45[1];
            v67[0] = v46;
            if ( v49 >= 0 )
              v51 = &v66;
            else
              v51 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v10;
            sub_22146B4(v48, v50, (int)v16, v51);
            if ( v68[0] )
              return;
            v10 = v66;
          }
          v52 = filePath[2].monitor;
          if ( *(int *)(*v52 + 40LL) >= 0 )
            v53 = &v66;
          else
            v53 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v10;
          memcpy((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL), v53, v13);
          if ( *(int *)(*v52 + 40LL) >= 0 )
            v54 = &v65;
          else
            v54 = monitor;
          memcpy((char *)&v62 - ((v13 + 15) & 0x1FFFFFFF0LL), v54, v13);
          if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v55);
            v52 = filePath[2].monitor;
          }
          v56 = (__int64 *)v52[2];
          v57 = *v56;
          if ( (*(_DWORD *)(*v52 + 40LL) & 0x80000000) == 0 )
          {
            v17 = (_QWORD *)*v17;
            v18 = (_QWORD *)*v18;
          }
          v69 = 1;
          v67[0] = v17;
          v67[1] = v18;
          v67[2] = &v69;
          v67[3] = klass;
          ((void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, _BYTE *))v56[2])(v57, v56, 0, v67, v68);
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
  float v10; // s0
  float v11; // s1
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v13; // s0

  if ( (byte_5974EA7 & 1) == 0 )
  {
    sub_2213A60(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    byte_5974EA7 = 1;
  }
  if ( !byte_5969AE4 )
  {
    sub_2213A60(&UnityEngine_Mathf_TypeInfo);
    byte_5969AE4 = 1;
  }
  v10 = fabsf(expected);
  v11 = fabsf(actual);
  static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
  if ( v10 <= v11 )
    v10 = v11;
  v13 = v10 * 0.000001;
  if ( v13 <= (float)(static_fields->Epsilon * 8.0) )
    v13 = static_fields->Epsilon * 8.0;
  if ( vabds_f32(actual, expected) < v13 )
  {
    if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, gameObject);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_float_(
      expected,
      actual,
      0,
      message,
      (const MethodInfo_37D0364 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
  }
}


// local variable allocation has failed, the output may be wrong!
void Fgo_Assertions_Assert__AreNotEqual(
        int32_t expected,
        int32_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_5974EA8 & 1) == 0 )
  {
    sub_2213A60(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    byte_5974EA8 = 1;
  }
  if ( expected == actual )
  {
    if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&actual);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_int_(
      expected,
      expected,
      0,
      message,
      (const MethodInfo_37CFDD0 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void Fgo_Assertions_Assert__AreNotEqual_56100336(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_5974EA9 & 1) == 0 )
  {
    sub_2213A60(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    byte_5974EA9 = 1;
  }
  if ( expected == actual )
  {
    if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, actual);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_long_(
      expected,
      expected,
      0,
      message,
      (const MethodInfo_37CFF9C *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void Fgo_Assertions_Assert__AreNotEqual_56100496(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_5974EAA & 1) == 0 )
  {
    sub_2213A60(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974EAA = 1;
  }
  if ( !expected )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actual);
    if ( UnityEngine_Object__op_Equality(actual, 0, 0) )
      goto LABEL_19;
  }
  if ( !actual )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actual);
    if ( UnityEngine_Object__op_Equality(expected, 0, 0) )
      goto LABEL_19;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actual);
  if ( UnityEngine_Object__op_Equality(expected, actual, 0) )
  {
LABEL_19:
    if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, actual);
    Fgo_Assertions_Assert__GetComparisonAssertMessage_object_(
      (Il2CppObject *)expected,
      (Il2CppObject *)actual,
      0,
      message,
      (const MethodInfo_37D0170 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
  }
}


void Fgo_Assertions_Assert__AreNotEqual___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o expected,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_37CF3C0 *method)
{
  long double v7; // q0
  void **monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v10; // x23
  _QWORD *v11; // x27
  __int64 v12; // x0
  size_t v13; // x24
  __int64 v14; // x0
  int v15; // w8
  _QWORD *v16; // x21
  _QWORD *v17; // x25
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v18; // x1
  __int64 v19; // x27
  __int64 v20; // x28
  void **v21; // x1
  __int64 v22; // x0
  System_String_o *v23; // x8
  void **v24; // x20
  __int64 v25; // x28
  _QWORD *v26; // x19
  System_String_o *v27; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v28; // x1
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x10
  _QWORD *v32; // x19
  void **v33; // x1
  _QWORD *v34; // x19
  void **v35; // x1
  __int64 v36; // x0
  __int64 v37; // x10
  _QWORD *v38; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v39; // x1
  _QWORD *v40; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v41; // x1
  __int64 v42; // x0
  __int64 naturalAligment; // x10
  _QWORD *v44; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v45; // x1
  _QWORD *v46; // x19
  void **v47; // x1
  __int64 v48; // x0
  long double v49; // q0
  _QWORD *v50; // x9
  __int64 v51; // x27
  __int64 v52; // x8
  __int64 v53; // x0
  void **v54; // x1
  __int64 v55; // x1
  int v56; // w8
  __int64 v57; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v58; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v59; // x1
  void **v60; // x1
  __int64 *v61; // x1
  __int64 v62; // x0
  void (__fastcall *v63)(__int64, __int64 *, _QWORD, _QWORD *, _BYTE *); // x8
  _QWORD *v64; // x19
  void **v65; // x1
  __int64 v66; // x0
  __int64 v67; // x10
  char *v68; // [xsp+0h] [xbp-60h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+8h] [xbp-58h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-50h]
  void *v71; // [xsp+18h] [xbp-48h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v72; // [xsp+20h] [xbp-40h] BYREF
  _QWORD v73[4]; // [xsp+28h] [xbp-38h] BYREF
  _BYTE v74[12]; // [xsp+48h] [xbp-18h] BYREF
  char v75; // [xsp+54h] [xbp-Ch] BYREF
  __int64 v76; // [xsp+58h] [xbp-8h]

  monitor = (void **)expected.monitor;
  klass = actual.klass;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v10 = expected.klass;
  v76 = *(_QWORD *)(StatusReg + 40);
  v11 = filePath[2].monitor;
  v71 = expected.monitor;
  v72 = expected.klass;
  if ( !v11 )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    v11 = filePath[2].monitor;
    if ( !v11 )
    {
      sub_224B964(filePath);
      v11 = filePath[2].monitor;
    }
  }
  v12 = *v11;
  v13 = *(unsigned int *)(*v11 + 252LL);
  if ( (*(_WORD *)(*v11 + 309LL) & 1) != 0 )
  {
    v15 = *(_DWORD *)(*v11 + 252LL);
  }
  else
  {
    v14 = sub_224B908(v7);
    v11 = filePath[2].monitor;
    v15 = *(_DWORD *)(v14 + 252);
    v12 = *v11;
  }
  v68 = (char *)&v68 - (((unsigned int)(v15 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v16 = (char **)((char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL));
  v17 = v16;
  if ( *(int *)(v12 + 40) >= 0 )
    v18 = &v72;
  else
    v18 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v10;
  memcpy(&v68, v18, v13);
  v19 = j_il2cpp_value_box_0(*v11, (char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL));
  v20 = *(_QWORD *)filePath[2].monitor;
  if ( *(int *)(v20 + 40) >= 0 )
    v21 = &v71;
  else
    v21 = monitor;
  memcpy((char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL), v21, v13);
  v22 = j_il2cpp_value_box_0(v20, (char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL));
  v23 = filePath;
  v24 = monitor;
  v25 = v22;
  v26 = v23[2].monitor;
  v27 = v23;
  if ( *(int *)(*v26 + 40LL) >= 0 )
    v28 = &v72;
  else
    v28 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v10;
  memcpy((char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL), v28, v13);
  v29 = *v26;
  if ( v19 == v25 )
  {
    if ( *(int *)(v29 + 40) >= 0 )
      v54 = &v71;
    else
      v54 = v24;
    memcpy((char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL), v54, v13);
    if ( *(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_67;
LABEL_66:
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v55);
    v26 = v27[2].monitor;
LABEL_67:
    v61 = (__int64 *)v26[1];
    v62 = *v61;
    if ( (*(_DWORD *)(*v26 + 40LL) & 0x80000000) == 0 )
    {
      v16 = (_QWORD *)*v16;
      v17 = (_QWORD *)*v17;
    }
    v73[1] = v17;
    v73[2] = &v75;
    v75 = 0;
    v73[3] = klass;
    v63 = (void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, _BYTE *))v61[2];
    v73[0] = v16;
    v63(v62, v61, 0, v73, v74);
    return;
  }
  v30 = j_il2cpp_value_box_0(v29, (char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL));
  if ( !v30
    || (v31 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*(_QWORD *)v30 + 304LL) < (unsigned int)v31)
    || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v30 + 200LL) + 8 * v31 - 8) != UnityEngine_Object_TypeInfo
    || ((v32 = v27[2].monitor, *(int *)(*v32 + 40LL) >= 0) ? (v33 = &v71) : (v33 = v24),
        memcpy((char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL), v33, v13),
        (sub_2213C8C(*v32, (char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
  {
    v34 = v27[2].monitor;
    v35 = *(int *)(*v34 + 40LL) >= 0 ? &v71 : v24;
    if ( (memcpy((char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL), v35, v13),
          (v36 = j_il2cpp_value_box_0(*v34, (char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL))) == 0)
      || (v37 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*(_QWORD *)v36 + 304LL) < (unsigned int)v37)
      || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v36 + 200LL) + 8 * v37 - 8) != UnityEngine_Object_TypeInfo
      || ((v38 = v27[2].monitor, *(int *)(*v38 + 40LL) >= 0)
        ? (v39 = &v72)
        : (v39 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v10),
          memcpy((char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL), v39, v13),
          (sub_2213C8C(*v38, (char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
    {
      v40 = v27[2].monitor;
      v41 = *(int *)(*v40 + 40LL) >= 0 ? &v72 : (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v10;
      memcpy((char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL), v41, v13);
      v42 = j_il2cpp_value_box_0(*v40, (char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL));
      if ( !v42 )
        goto LABEL_40;
      naturalAligment = UnityEngine_Object_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)v42 + 304LL) < (unsigned int)naturalAligment
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v42 + 200LL) + 8 * naturalAligment - 8) != UnityEngine_Object_TypeInfo )
      {
        goto LABEL_40;
      }
      v64 = v27[2].monitor;
      v65 = *(int *)(*v64 + 40LL) >= 0 ? &v71 : v24;
      memcpy((char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL), v65, v13);
      v66 = j_il2cpp_value_box_0(*v64, (char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL));
      if ( !v66
        || (v67 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
            *(unsigned __int8 *)(*(_QWORD *)v66 + 304LL) < (unsigned int)v67)
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v66 + 200LL) + 8 * v67 - 8) != UnityEngine_Object_TypeInfo )
      {
LABEL_40:
        v44 = v27[2].monitor;
        v45 = *(int *)(*v44 + 40LL) >= 0 ? &v72 : (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v10;
        memcpy((char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL), v45, v13);
        if ( (sub_2213C8C(*v44, (char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
        {
          v46 = v27[2].monitor;
          v47 = *(int *)(*v46 + 40LL) >= 0 ? &v71 : v24;
          memcpy((char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL), v47, v13);
          v48 = j_il2cpp_value_box_0(*v46, (char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL));
          v50 = v27[2].monitor;
          v51 = v48;
          v52 = *v50;
          if ( (*(_WORD *)(*v50 + 309LL) & 1) != 0 )
          {
            v53 = *v50;
          }
          else
          {
            LODWORD(v53) = sub_224B908(v49);
            v50 = v27[2].monitor;
            v52 = *v50;
          }
          v56 = *(_DWORD *)(v52 + 40);
          v57 = v50[2];
          v73[0] = v51;
          v58 = v56 >= 0 ? &v72 : (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v10;
          sub_22146B4(v53, v57, (int)v68, v58);
          if ( v74[0] )
          {
            v26 = v27[2].monitor;
            if ( *(int *)(*v26 + 40LL) >= 0 )
              v59 = &v72;
            else
              v59 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v72;
            memcpy((char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL), v59, v13);
            if ( *(int *)(*v26 + 40LL) >= 0 )
              v60 = &v71;
            else
              v60 = v24;
            memcpy((char *)&v68 - ((v13 + 15) & 0x1FFFFFFF0LL), v60, v13);
            if ( *(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
              goto LABEL_67;
            goto LABEL_66;
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
  _BOOL4 v11; // w27
  int v12; // w26
  int v13; // w29
  int v14; // w28
  System_String_o *v15; // x23
  int32_t v16; // w22
  uint16_t Chars; // w0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  int v20; // w8
  _BOOL8 v21; // x0
  struct System_Object_array *v22; // x8
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  __int64 *v25; // x8
  __int64 *v26; // x8
  int32_t result; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v28; // [xsp+8h] [xbp-68h] BYREF
  _WORD v29[2]; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_5974EB1 & 1) == 0 )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&StringLiteral_26894/*"書式指定項目が不正です"*/);
    sub_2213A60(&StringLiteral_26834/*"パラメータ"*/);
    sub_2213A60(&StringLiteral_26883/*"文字列"*/);
    sub_2213A60(&StringLiteral_26877/*"引数"*/);
    sub_2213A60(&StringLiteral_26878/*"引数を超えたのインデックスを指しています"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974EB1 = 1;
  }
  v29[0] = 0;
  result = 0;
  v28 = 0;
  if ( !parameter )
  {
    if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, message);
    v26 = &StringLiteral_26834/*"パラメータ"*/;
    goto LABEL_61;
  }
  format = parameter->fields.format;
  if ( !format )
  {
    if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, message);
    v26 = &StringLiteral_26883/*"文字列"*/;
    goto LABEL_61;
  }
  args = parameter->fields.args;
  if ( !args || LODWORD(args->max_length) == 1 && !args->m_Items[0] )
  {
    if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, message);
    v26 = &StringLiteral_26877/*"引数"*/;
LABEL_61:
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)*v26, message, (const MethodInfo *)gameObject);
    return;
  }
  if ( format->fields._stringLength < 1 )
    return;
  LOBYTE(v10) = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  while ( 1 )
  {
    Chars = System_String__get_Chars(format, v16, 0);
    v29[0] = Chars;
    if ( v10 )
      break;
    if ( (v12 & 1) != 0 )
      goto LABEL_20;
    if ( (v13 & 1) != 0 )
    {
      if ( Chars == 125 || Chars == 58 )
      {
        if ( !System_Int32__TryParse(v15, &result, 0) )
          goto LABEL_49;
        v20 = v29[0];
        v13 = 0;
LABEL_29:
        v12 = 0;
        v10 = 0;
        v14 |= v20 == 58;
        goto LABEL_47;
      }
      if ( (unsigned __int16)(Chars - 48) >= 0xAu && Chars != 45 && Chars != 32 )
        goto LABEL_49;
      if ( !*(_DWORD *)(qword_5984388 + 228) )
        j_il2cpp_runtime_class_init_0(qword_5984388, v18);
      v24 = System_Char__ToString((uint16_t)v29, 0);
      v15 = System_String__Concat_75651716(v15, v24, 0);
      goto LABEL_28;
    }
    if ( (v14 & 1) != 0 )
    {
      if ( Chars == 123 )
        goto LABEL_49;
      v13 = 0;
      v12 = 0;
      v10 = 0;
      v14 = Chars != 125;
      goto LABEL_47;
    }
    if ( !v11 )
    {
      v14 = 0;
      v13 = 0;
      v12 = 0;
      v10 = Chars == 123;
      v11 = Chars == 125;
      goto LABEL_47;
    }
    if ( Chars != 125 )
      goto LABEL_49;
    v14 = 0;
    v13 = 0;
    v12 = 0;
    v11 = 0;
LABEL_12:
    v10 = 0;
LABEL_47:
    if ( ++v16 >= format->fields._stringLength )
    {
      if ( ((v11 | v14 | v13 | v12 | v10) & 1) == 0 )
        return;
LABEL_49:
      if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v18);
      v25 = &StringLiteral_26894/*"書式指定項目が不正です"*/;
      goto LABEL_65;
    }
  }
  if ( Chars == 123 )
    goto LABEL_12;
  v15 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_20:
  if ( Chars != 44 && Chars != 125 && Chars != 58 )
  {
    if ( (unsigned __int16)(Chars - 58) < 0xFFF6u )
      goto LABEL_49;
    if ( !*(_DWORD *)(qword_5984388 + 228) )
      j_il2cpp_runtime_class_init_0(qword_5984388, v18);
    v23 = System_Char__ToString((uint16_t)v29, 0);
    v15 = System_String__Concat_75651716(v15, v23, 0);
    v10 = 0;
    v12 = 1;
    goto LABEL_47;
  }
  v21 = System_Int32__TryParse(v15, &v28, 0);
  if ( !v21 )
    goto LABEL_49;
  v22 = parameter->fields.args;
  if ( !v22 )
    sub_2213CDC(v21, v18);
  if ( v28 < SLODWORD(v22->max_length) )
  {
    v20 = v29[0];
    if ( v29[0] != 44 )
      goto LABEL_29;
    v15 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_28:
    v12 = 0;
    v10 = 0;
    v13 = 1;
    goto LABEL_47;
  }
  if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v18);
  v25 = &StringLiteral_26878/*"引数を超えたのインデックスを指しています"*/;
LABEL_65:
  Fgo_Assertions_Assert__GetEffectiveAssertMessage((System_String_o *)*v25, message, v19);
}


void Fgo_Assertions_Assert__CanParse___Il2CppFullySharedGenericType_(
        System_String_o *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_37CF8E4 *method)
{
  Il2CppType *_0_T; // x21
  System_Type_o *TypeFromHandle; // x21
  System_RuntimeTypeHandle_o v11; // x0
  System_Type_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *v15; // x20
  __int64 v16; // x23
  System_RuntimeTypeHandle_o v17; // x0
  System_Type_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x23
  System_RuntimeTypeHandle_o v22; // x0
  System_Type_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x23
  System_RuntimeTypeHandle_o v26; // x0
  System_Type_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x23
  System_RuntimeTypeHandle_o v30; // x0
  System_Type_o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x23
  System_RuntimeTypeHandle_o v34; // x0
  System_Type_o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x23
  System_RuntimeTypeHandle_o v38; // x0
  System_Type_o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x23
  System_RuntimeTypeHandle_o v42; // x0
  System_Type_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x23
  System_RuntimeTypeHandle_o v46; // x0
  System_Type_o *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x23
  System_RuntimeTypeHandle_o v50; // x0
  System_Type_o *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x22
  System_RuntimeTypeHandle_o v54; // x0
  System_Type_o *v55; // x0
  __int64 v56; // x1
  System_String_o *v57; // x20
  double v58; // [xsp+0h] [xbp-70h] BYREF
  float v59; // [xsp+Ch] [xbp-64h] BYREF
  uint64_t v60; // [xsp+10h] [xbp-60h] BYREF
  int64_t v61; // [xsp+18h] [xbp-58h] BYREF
  uint32_t v62; // [xsp+24h] [xbp-4Ch] BYREF
  int32_t v63; // [xsp+28h] [xbp-48h] BYREF
  uint16_t v64; // [xsp+2Ch] [xbp-44h] BYREF
  int16_t v65[2]; // [xsp+30h] [xbp-40h] BYREF
  int8_t v66[4]; // [xsp+34h] [xbp-3Ch] BYREF
  uint8_t v67[4]; // [xsp+38h] [xbp-38h] BYREF
  bool result; // [xsp+3Ch] [xbp-34h] BYREF

  if ( !method->rgctx_data )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&StringLiteral_26865/*"型が不正です:{0}"*/);
    sub_2213A60(&StringLiteral_26883/*"文字列"*/);
    sub_2213A60(&StringLiteral_283/*" isNotBoolean"*/);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  result = 0;
  v67[0] = 0;
  v66[0] = 0;
  v65[0] = 0;
  v64 = 0;
  v62 = 0;
  v63 = 0;
  v60 = 0;
  v61 = 0;
  v59 = 0.0;
  v58 = 0.0;
  if ( value )
  {
    _0_T = method->rgctx_data->_0_T;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, message);
    TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)_0_T, 0);
    v11.fields.value = qword_5984328 + 32;
    v12 = System_Type__GetTypeFromHandle(v11, 0);
    if ( System_Type__op_Equality(v12, TypeFromHandle, 0) )
    {
      if ( !*(_DWORD *)(qword_5984328 + 228) )
        j_il2cpp_runtime_class_init_0(qword_5984328, v13);
      if ( !System_Boolean__TryParse(value, &result, 0) )
      {
        v15 = System_String__Concat_75651716(value, (System_String_o *)StringLiteral_283/*" isNotBoolean"*/, 0);
        if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v14);
        Fgo_Assertions_Assert__GetEffectiveAssertMessage(v15, message, 0);
      }
      return;
    }
    v16 = qword_5984318;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v13);
    v17.fields.value = v16 + 32;
    v18 = System_Type__GetTypeFromHandle(v17, 0);
    if ( System_Type__op_Equality(v18, TypeFromHandle, 0) )
    {
      if ( System_Byte__TryParse(value, v67, 0) )
        return;
LABEL_66:
      if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v20);
      Fgo_Assertions_Assert__GetParseAssertMessage(value, message, 0);
      return;
    }
    v21 = qword_5984330;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v19);
    v22.fields.value = v21 + 32;
    v23 = System_Type__GetTypeFromHandle(v22, 0);
    if ( System_Type__op_Equality(v23, TypeFromHandle, 0) )
    {
      if ( System_SByte__TryParse(value, v66, 0) )
        return;
      goto LABEL_66;
    }
    v25 = qword_5984338;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v24);
    v26.fields.value = v25 + 32;
    v27 = System_Type__GetTypeFromHandle(v26, 0);
    if ( System_Type__op_Equality(v27, TypeFromHandle, 0) )
    {
      if ( System_Int16__TryParse(value, v65, 0) )
        return;
      goto LABEL_66;
    }
    v29 = qword_5984340;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v28);
    v30.fields.value = v29 + 32;
    v31 = System_Type__GetTypeFromHandle(v30, 0);
    if ( System_Type__op_Equality(v31, TypeFromHandle, 0) )
    {
      if ( System_UInt16__TryParse(value, &v64, 0) )
        return;
      goto LABEL_66;
    }
    v33 = qword_5984348;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v32);
    v34.fields.value = v33 + 32;
    v35 = System_Type__GetTypeFromHandle(v34, 0);
    if ( System_Type__op_Equality(v35, TypeFromHandle, 0) )
    {
      if ( System_Int32__TryParse(value, &v63, 0) )
        return;
      goto LABEL_66;
    }
    v37 = qword_5984350;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v36);
    v38.fields.value = v37 + 32;
    v39 = System_Type__GetTypeFromHandle(v38, 0);
    if ( System_Type__op_Equality(v39, TypeFromHandle, 0) )
    {
      if ( System_UInt32__TryParse(value, &v62, 0) )
        return;
      goto LABEL_66;
    }
    v41 = qword_5984368;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v40);
    v42.fields.value = v41 + 32;
    v43 = System_Type__GetTypeFromHandle(v42, 0);
    if ( System_Type__op_Equality(v43, TypeFromHandle, 0) )
    {
      if ( System_Int64__TryParse(value, &v61, 0) )
        return;
      goto LABEL_66;
    }
    v45 = qword_5984370;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v44);
    v46.fields.value = v45 + 32;
    v47 = System_Type__GetTypeFromHandle(v46, 0);
    if ( System_Type__op_Equality(v47, TypeFromHandle, 0) )
    {
      if ( System_UInt64__TryParse(value, &v60, 0) )
        return;
      goto LABEL_66;
    }
    v49 = qword_5984378;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v48);
    v50.fields.value = v49 + 32;
    v51 = System_Type__GetTypeFromHandle(v50, 0);
    if ( System_Type__op_Equality(v51, TypeFromHandle, 0) )
    {
      if ( System_Single__TryParse(value, &v59, 0) )
        return;
      goto LABEL_66;
    }
    v53 = qword_5984380;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v52);
    v54.fields.value = v53 + 32;
    v55 = System_Type__GetTypeFromHandle(v54, 0);
    if ( System_Type__op_Equality(v55, TypeFromHandle, 0) )
    {
      if ( System_Double__TryParse(value, &v58, 0) )
        return;
      goto LABEL_66;
    }
    v57 = System_String__Format((System_String_o *)StringLiteral_26865/*"型が不正です:{0}"*/, (Il2CppObject *)TypeFromHandle, 0);
    if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v56);
    Fgo_Assertions_Assert__GetEffectiveAssertMessage(v57, message, 0);
  }
  else
  {
    if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, message);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_26883/*"文字列"*/, message, 0);
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
        const MethodInfo_37D0530 *method)
{
  long double v5; // q0
  __int64 v6; // x22
  char klass; // w20
  void **v8; // x21
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v9; // x23
  __int64 *v10; // x19
  __int64 v11; // x8
  size_t v12; // x24
  __int16 v13; // w9
  __int64 v14; // x0
  int v15; // w10
  char *v16; // x26
  __int64 v17; // x0
  char *v18; // x25
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v19; // x1
  long double v20; // q0
  _QWORD *v21; // x9
  __int64 v22; // x8
  __int64 v23; // x0
  __int64 v24; // x23
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v25; // x3
  _QWORD *v26; // x26
  void **v27; // x1
  long double v28; // q0
  _QWORD *v29; // x9
  __int64 v30; // x8
  __int64 v31; // x0
  __int64 v32; // x21
  void **v33; // x3
  __int64 v34; // x0
  __int64 v35; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 v42; // x22
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  int32_t v49; // w1
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  __int64 *v56; // x8
  __int64 v57; // x1
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  int32_t v64; // w1
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  __int64 v71; // x1
  System_String_o *v72; // x20
  __int64 v74; // [xsp+0h] [xbp-30h] BYREF
  System_String_o *monitor; // [xsp+8h] [xbp-28h]
  void *v76; // [xsp+10h] [xbp-20h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v77; // [xsp+18h] [xbp-18h] BYREF
  __int64 v78; // [xsp+20h] [xbp-10h]
  __int64 v79; // [xsp+28h] [xbp-8h]

  monitor = (System_String_o *)actual.monitor;
  v6 = equal;
  klass = (char)actual.klass;
  v8 = (void **)expected.monitor;
  v9 = expected.klass;
  v79 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v10 = *(__int64 **)(equal + 56LL);
  v76 = expected.monitor;
  v77 = expected.klass;
  if ( !v10 )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_23465/*"null"*/);
    sub_2213A60(&StringLiteral_20223/*"expectedEqual"*/);
    sub_2213A60(&StringLiteral_20224/*"expectedNotEqual"*/);
    v10 = *(__int64 **)(v6 + 56);
    if ( !v10 )
    {
      sub_224B964(v6);
      v10 = *(__int64 **)(v6 + 56);
    }
  }
  v11 = *v10;
  v12 = *(unsigned int *)(*v10 + 252);
  v13 = *(_WORD *)(*v10 + 309);
  if ( (v13 & 1) != 0 )
  {
    v15 = *(_DWORD *)(*v10 + 252);
  }
  else
  {
    v14 = sub_224B908(v5);
    v10 = *(__int64 **)(v6 + 56);
    v15 = *(_DWORD *)(v14 + 252);
    v11 = *v10;
    v13 = *(_WORD *)(*v10 + 309);
  }
  v16 = (char *)&v74 - (((unsigned int)(v15 + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( (v13 & 1) != 0 )
  {
    v17 = v11;
  }
  else
  {
    v17 = sub_224B908(v5);
    v10 = *(__int64 **)(v6 + 56);
    v11 = *v10;
  }
  v18 = (char *)&v74 - (((unsigned int)(*(_DWORD *)(v17 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( *(int *)(v11 + 40) >= 0 )
    v19 = &v77;
  else
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v9;
  memcpy((char *)&v74 - ((v12 + 15) & 0x1FFFFFFF0LL), v19, v12);
  if ( (sub_2213C8C(*v10, (char *)&v74 - ((v12 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
  {
    v21 = *(_QWORD **)(v6 + 56);
    v22 = *v21;
    if ( (*(_WORD *)(*v21 + 309LL) & 1) != 0 )
    {
      v23 = *v21;
    }
    else
    {
      LODWORD(v23) = sub_224B908(v20);
      v21 = *(_QWORD **)(v6 + 56);
      v22 = *v21;
    }
    if ( *(int *)(v22 + 40) >= 0 )
      v25 = &v77;
    else
      v25 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v9;
    sub_22146B4(v23, v21[1], (int)v16, v25);
    v24 = v78;
  }
  else
  {
    v24 = StringLiteral_23465/*"null"*/;
  }
  v26 = *(_QWORD **)(v6 + 56);
  if ( *(int *)(*v26 + 40LL) >= 0 )
    v27 = &v76;
  else
    v27 = v8;
  memcpy((char *)&v74 - ((v12 + 15) & 0x1FFFFFFF0LL), v27, v12);
  if ( (sub_2213C8C(*v26, (char *)&v74 - ((v12 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
  {
    v29 = *(_QWORD **)(v6 + 56);
    v30 = *v29;
    if ( (*(_WORD *)(*v29 + 309LL) & 1) != 0 )
    {
      v31 = *v29;
    }
    else
    {
      LODWORD(v31) = sub_224B908(v28);
      v29 = *(_QWORD **)(v6 + 56);
      v30 = *v29;
    }
    if ( *(int *)(v30 + 40) >= 0 )
      v33 = &v76;
    else
      v33 = v8;
    sub_22146B4(v31, v29[1], (int)v18, v33);
    v32 = v78;
  }
  else
  {
    v32 = StringLiteral_23465/*"null"*/;
  }
  v34 = sub_2213B20(string___TypeInfo, 5);
  if ( !v34 )
    sub_2213CDC(0, v35);
  v42 = v34;
  if ( !*(_DWORD *)(v34 + 24) )
    goto LABEL_45;
  *(_QWORD *)(v34 + 32) = v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 32), v24, v36, v37, v38, v39, v40, v41);
  if ( (*(_DWORD *)(v42 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_45;
  v49 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v42 + 40) = StringLiteral_113/*" "*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 40), v49, v43, v44, v45, v46, v47, v48);
  if ( *(_DWORD *)(v42 + 24) <= 2u )
    goto LABEL_45;
  v56 = (__int64 *)&StringLiteral_20224/*"expectedNotEqual"*/;
  if ( (klass & 1) == 0 )
    v56 = (__int64 *)&StringLiteral_20223/*"expectedEqual"*/;
  v57 = *v56;
  *(_QWORD *)(v42 + 48) = *v56;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 48), v57, v50, v51, v52, v53, v54, v55);
  if ( (*(_DWORD *)(v42 + 24) & 0xFFFFFFFC) == 0
    || (v64 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v42 + 56) = StringLiteral_113/*" "*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 56), v64, v58, v59, v60, v61, v62, v63),
        *(_DWORD *)(v42 + 24) <= 4u) )
  {
LABEL_45:
    sub_2213CE4(v34);
  }
  *(_QWORD *)(v42 + 64) = v32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 64), v32, v65, v66, v67, v68, v69, v70);
  v72 = System_String__Concat_75697120((System_String_array *)v42, 0);
  if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v71);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v72, monitor, 0);
}


System_String_o *Fgo_Assertions_Assert__GetComparisonAssertMessage_float_(
        float expected,
        float actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_37D0364 *method)
{
  const MethodInfo_37D0364_RGCTXs *rgctx_data; // x8
  System_String_o *v9; // x23
  float v10; // s0
  System_String_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x22
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  int32_t v27; // w1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 *v34; // x8
  __int64 v35; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  int32_t v42; // w1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  __int64 v49; // x1
  System_String_o *v50; // x20
  float v52; // [xsp+8h] [xbp-38h] BYREF
  float v53; // [xsp+Ch] [xbp-34h] BYREF

  rgctx_data = method->rgctx_data;
  v52 = actual;
  v53 = expected;
  if ( !rgctx_data )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_20223/*"expectedEqual"*/);
    sub_2213A60(&StringLiteral_20224/*"expectedNotEqual"*/);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  v9 = System_Single__ToString(expected, (const MethodInfo *)&v53);
  v11 = System_Single__ToString(v10, (const MethodInfo *)&v52);
  v12 = sub_2213B20(string___TypeInfo, 5);
  if ( !v12 )
    sub_2213CDC(0, v13);
  v20 = v12;
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v12 + 32) = v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 32), (int32_t)v9, v14, v15, v16, v17, v18, v19);
  if ( (*(_DWORD *)(v20 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_15;
  v27 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v20 + 40) = StringLiteral_113/*" "*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 40), v27, v21, v22, v23, v24, v25, v26);
  if ( *(_DWORD *)(v20 + 24) <= 2u )
    goto LABEL_15;
  v34 = (__int64 *)&StringLiteral_20224/*"expectedNotEqual"*/;
  if ( !equal )
    v34 = (__int64 *)&StringLiteral_20223/*"expectedEqual"*/;
  v35 = *v34;
  *(_QWORD *)(v20 + 48) = *v34;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 48), v35, v28, v29, v30, v31, v32, v33);
  if ( (*(_DWORD *)(v20 + 24) & 0xFFFFFFFC) == 0
    || (v42 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v20 + 56) = StringLiteral_113/*" "*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 56), v42, v36, v37, v38, v39, v40, v41),
        *(_DWORD *)(v20 + 24) <= 4u) )
  {
LABEL_15:
    sub_2213CE4(v12);
  }
  *(_QWORD *)(v20 + 64) = v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 64), (int32_t)v11, v43, v44, v45, v46, v47, v48);
  v50 = System_String__Concat_75697120((System_String_array *)v20, 0);
  if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v49);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v50, message, 0);
}


System_String_o *Fgo_Assertions_Assert__GetComparisonAssertMessage_int_(
        int32_t expected,
        int32_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_37CFDD0 *method)
{
  const MethodInfo_37CFDD0_RGCTXs *rgctx_data; // x8
  System_String_o *v9; // x23
  System_String_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 *v33; // x8
  __int64 v34; // x1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int32_t v41; // w1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  __int64 v48; // x1
  System_String_o *v49; // x20
  int32_t v51; // [xsp+8h] [xbp-38h] BYREF
  int32_t v52; // [xsp+Ch] [xbp-34h] BYREF

  rgctx_data = method->rgctx_data;
  v51 = actual;
  v52 = expected;
  if ( !rgctx_data )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_20223/*"expectedEqual"*/);
    sub_2213A60(&StringLiteral_20224/*"expectedNotEqual"*/);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_224B964(method);
      rgctx_data = method->rgctx_data;
    }
  }
  v9 = System_Int32__ToString((int32_t)&v52, (const MethodInfo *)rgctx_data[1]._0_T);
  v10 = System_Int32__ToString((int32_t)&v51, (const MethodInfo *)method->rgctx_data[1]._0_T);
  v11 = sub_2213B20(string___TypeInfo, 5);
  if ( !v11 )
    sub_2213CDC(0, v12);
  v19 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v11 + 32) = v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)v9, v13, v14, v15, v16, v17, v18);
  if ( (*(_DWORD *)(v19 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_15;
  v26 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v19 + 40) = StringLiteral_113/*" "*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 40), v26, v20, v21, v22, v23, v24, v25);
  if ( *(_DWORD *)(v19 + 24) <= 2u )
    goto LABEL_15;
  v33 = (__int64 *)&StringLiteral_20224/*"expectedNotEqual"*/;
  if ( !equal )
    v33 = (__int64 *)&StringLiteral_20223/*"expectedEqual"*/;
  v34 = *v33;
  *(_QWORD *)(v19 + 48) = *v33;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 48), v34, v27, v28, v29, v30, v31, v32);
  if ( (*(_DWORD *)(v19 + 24) & 0xFFFFFFFC) == 0
    || (v41 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v19 + 56) = StringLiteral_113/*" "*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 56), v41, v35, v36, v37, v38, v39, v40),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_15:
    sub_2213CE4(v11);
  }
  *(_QWORD *)(v19 + 64) = v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 64), (int32_t)v10, v42, v43, v44, v45, v46, v47);
  v49 = System_String__Concat_75697120((System_String_array *)v19, 0);
  if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v48);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v49, message, 0);
}


System_String_o *Fgo_Assertions_Assert__GetComparisonAssertMessage_long_(
        int64_t expected,
        int64_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_37CFF9C *method)
{
  const MethodInfo_37CFF9C_RGCTXs *rgctx_data; // x8
  System_String_o *v9; // x23
  System_String_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 *v33; // x8
  __int64 v34; // x1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int32_t v41; // w1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  __int64 v48; // x1
  System_String_o *v49; // x20
  int64_t v51; // [xsp+8h] [xbp-48h] BYREF
  int64_t v52; // [xsp+18h] [xbp-38h] BYREF

  v52 = expected;
  rgctx_data = method->rgctx_data;
  v51 = actual;
  if ( !rgctx_data )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_20223/*"expectedEqual"*/);
    sub_2213A60(&StringLiteral_20224/*"expectedNotEqual"*/);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_224B964(method);
      rgctx_data = method->rgctx_data;
    }
  }
  v9 = System_Int64__ToString((int64_t)&v52, (const MethodInfo *)rgctx_data[1]._0_T);
  v10 = System_Int64__ToString((int64_t)&v51, (const MethodInfo *)method->rgctx_data[1]._0_T);
  v11 = sub_2213B20(string___TypeInfo, 5);
  if ( !v11 )
    sub_2213CDC(0, v12);
  v19 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v11 + 32) = v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)v9, v13, v14, v15, v16, v17, v18);
  if ( (*(_DWORD *)(v19 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_15;
  v26 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v19 + 40) = StringLiteral_113/*" "*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 40), v26, v20, v21, v22, v23, v24, v25);
  if ( *(_DWORD *)(v19 + 24) <= 2u )
    goto LABEL_15;
  v33 = (__int64 *)&StringLiteral_20224/*"expectedNotEqual"*/;
  if ( !equal )
    v33 = (__int64 *)&StringLiteral_20223/*"expectedEqual"*/;
  v34 = *v33;
  *(_QWORD *)(v19 + 48) = *v33;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 48), v34, v27, v28, v29, v30, v31, v32);
  if ( (*(_DWORD *)(v19 + 24) & 0xFFFFFFFC) == 0
    || (v41 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v19 + 56) = StringLiteral_113/*" "*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 56), v41, v35, v36, v37, v38, v39, v40),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_15:
    sub_2213CE4(v11);
  }
  *(_QWORD *)(v19 + 64) = v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 64), (int32_t)v10, v42, v43, v44, v45, v46, v47);
  v49 = System_String__Concat_75697120((System_String_array *)v19, 0);
  if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v48);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v49, message, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *Fgo_Assertions_Assert__GetComparisonAssertMessage_object_(
        Il2CppObject *expected,
        Il2CppObject *actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_37D0170 *method)
{
  __int64 v9; // x23
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 *v33; // x8
  __int64 v34; // x1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int32_t v41; // w1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  __int64 v48; // x1
  System_String_o *v49; // x20

  if ( (byte_59760CC & 1) == 0 )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_23465/*"null"*/);
    sub_2213A60(&StringLiteral_20223/*"expectedEqual"*/);
    sub_2213A60(&StringLiteral_20224/*"expectedNotEqual"*/);
    byte_59760CC = 1;
  }
  if ( expected )
    v9 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, bool, System_String_o *, const MethodInfo_37D0170 *))expected->klass->vtable[3].methodPtr)(
           expected,
           expected->klass->vtable[3].method,
           equal,
           message,
           method);
  else
    v9 = StringLiteral_23465/*"null"*/;
  if ( actual )
    v10 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))actual->klass->vtable[3].methodPtr)(
            actual,
            actual->klass->vtable[3].method);
  else
    v10 = StringLiteral_23465/*"null"*/;
  v11 = sub_2213B20(string___TypeInfo, 5);
  if ( !v11 )
    sub_2213CDC(0, v12);
  v19 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_20;
  *(_QWORD *)(v11 + 32) = v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 32), v9, v13, v14, v15, v16, v17, v18);
  if ( (*(_DWORD *)(v19 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_20;
  v26 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v19 + 40) = StringLiteral_113/*" "*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 40), v26, v20, v21, v22, v23, v24, v25);
  if ( *(_DWORD *)(v19 + 24) <= 2u )
    goto LABEL_20;
  v33 = (__int64 *)&StringLiteral_20224/*"expectedNotEqual"*/;
  if ( !equal )
    v33 = (__int64 *)&StringLiteral_20223/*"expectedEqual"*/;
  v34 = *v33;
  *(_QWORD *)(v19 + 48) = *v33;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 48), v34, v27, v28, v29, v30, v31, v32);
  if ( (*(_DWORD *)(v19 + 24) & 0xFFFFFFFC) == 0
    || (v41 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v19 + 56) = StringLiteral_113/*" "*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 56), v41, v35, v36, v37, v38, v39, v40),
        *(_DWORD *)(v19 + 24) <= 4u) )
  {
LABEL_20:
    sub_2213CE4(v11);
  }
  *(_QWORD *)(v19 + 64) = v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 64), v10, v42, v43, v44, v45, v46, v47);
  v49 = System_String__Concat_75697120((System_String_array *)v19, 0);
  if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v48);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v49, message, 0);
}


System_String_o *Fgo_Assertions_Assert__GetEffectiveAssertMessage(
        System_String_o *defaultMessage,
        System_String_o *message,
        const MethodInfo *method)
{
  if ( (byte_5974EA2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_56/*"\n("*/);
    sub_2213A60(&StringLiteral_789/*")"*/);
    byte_5974EA2 = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0) )
    return defaultMessage;
  else
    return System_String__Concat_75696856(
             message,
             (System_String_o *)StringLiteral_56/*"\n("*/,
             defaultMessage,
             (System_String_o *)StringLiteral_789/*")"*/,
             0);
}


System_String_o *Fgo_Assertions_Assert__GetNullAssertMessage(
        System_String_o *modelName,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_String_o *v7; // x20

  if ( (byte_5974EAE & 1) == 0 )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&StringLiteral_26788/*"が null です"*/);
    byte_5974EAE = 1;
  }
  v7 = System_String__Concat_75651716(modelName, (System_String_o *)StringLiteral_26788/*"が null です"*/, 0);
  if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v5);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v7, message, v6);
}


System_String_o *Fgo_Assertions_Assert__GetParseAssertMessage(
        System_String_o *value,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_String_o *v7; // x20

  if ( (byte_5974EB0 & 1) == 0 )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&StringLiteral_284/*" isNotNumbers"*/);
    byte_5974EB0 = 1;
  }
  v7 = System_String__Concat_75651716(value, (System_String_o *)StringLiteral_284/*" isNotNumbers"*/, 0);
  if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v5);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v7, message, v6);
}


// local variable allocation has failed, the output may be wrong!
void Fgo_Assertions_Assert__HasContainKey___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Collections_Generic_Dictionary_T1__T2__o *dic,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_37D0900 *method)
{
  long double v7; // q0
  __int64 v8; // x21
  System_String_o *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x20
  __int64 v12; // x8
  __int64 v13; // x0
  size_t v14; // x24
  int v15; // w8
  char *v16; // x23
  System_String_o *v17; // x25
  __int64 v18; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v19; // x1
  __int64 v20; // x1
  __int64 v21; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v22; // x1
  __int64 *v23; // x1
  __int64 v24; // x0
  void (__fastcall *v25)(__int64, __int64 *, System_Collections_Generic_Dictionary_T1__T2__o *, System_String_o **, _BYTE *); // x8
  long double v26; // q0
  __int64 v27; // x9
  __int64 v28; // x8
  __int64 v29; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v30; // x3
  __int64 v31; // x1
  System_String_o *v32; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v33; // [xsp+0h] [xbp-20h] BYREF
  _BYTE v34[4]; // [xsp+Ch] [xbp-14h] BYREF
  System_String_o *v35[2]; // [xsp+10h] [xbp-10h] BYREF

  v8 = *(_QWORD *)&line;
  monitor = (System_String_o *)key.monitor;
  klass = key.klass;
  v35[1] = *(System_String_o **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v12 = *(_QWORD *)(*(_QWORD *)&line + 56LL);
  v33 = key.klass;
  if ( !v12 )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&StringLiteral_26824/*"ディクショナリ"*/);
    sub_2213A60(&StringLiteral_807/*") の値がディクショナリに含まれていません"*/);
    sub_2213A60(&StringLiteral_22176/*"key("*/);
    sub_2213A60(&StringLiteral_26808/*"キー"*/);
    v12 = *(_QWORD *)(v8 + 56);
    if ( !v12 )
    {
      sub_224B964(v8);
      v12 = *(_QWORD *)(v8 + 56);
    }
  }
  v13 = *(_QWORD *)(v12 + 8);
  v14 = *(unsigned int *)(v13 + 252);
  v15 = *(_DWORD *)(v13 + 252);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v15 = *(_DWORD *)(sub_224B908(v7) + 252);
  v16 = &v34[-(((unsigned int)(v15 + 16) + 15LL) & 0x1FFFFFFF0LL) - 4];
  v17 = (System_String_o *)&v34[-((v14 + 15) & 0x1FFFFFFF0LL) - 4];
  if ( dic )
  {
    v18 = *(_QWORD *)(*(_QWORD *)(v8 + 56) + 8LL);
    if ( *(int *)(v18 + 40) >= 0 )
      v19 = &v33;
    else
      v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    memcpy(&v34[-((v14 + 15) & 0x1FFFFFFF0LL) - 4], v19, v14);
    if ( (sub_2213C8C(v18, &v34[-((v14 + 15) & 0x1FFFFFFF0LL) - 4]) & 1) != 0 )
    {
      v21 = *(_QWORD *)(v8 + 56);
      if ( *(int *)(*(_QWORD *)(v21 + 8) + 40LL) >= 0 )
        v22 = &v33;
      else
        v22 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
      memcpy(&v34[-((v14 + 15) & 0x1FFFFFFF0LL) - 4], v22, v14);
      v23 = *(__int64 **)(v21 + 16);
      v24 = *v23;
      if ( (*(_DWORD *)(*(_QWORD *)(v21 + 8) + 40LL) & 0x80000000) == 0 )
        v17 = (System_String_o *)v17->klass;
      v25 = (void (__fastcall *)(__int64, __int64 *, System_Collections_Generic_Dictionary_T1__T2__o *, System_String_o **, _BYTE *))v23[2];
      v35[0] = v17;
      v25(v24, v23, dic, v35, v34);
      if ( !v34[0] )
      {
        v27 = *(_QWORD *)(v8 + 56);
        v28 = *(_QWORD *)(v27 + 8);
        if ( (*(_WORD *)(v28 + 309) & 1) != 0 )
        {
          v29 = *(_QWORD *)(v27 + 8);
        }
        else
        {
          LODWORD(v29) = sub_224B908(v26);
          v27 = *(_QWORD *)(v8 + 56);
          v28 = *(_QWORD *)(v27 + 8);
        }
        if ( *(int *)(v28 + 40) >= 0 )
          v30 = &v33;
        else
          v30 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
        sub_22146B4(v29, *(_QWORD *)(v27 + 24), (int)v16, v30);
        v32 = System_String__Concat_75694928(
                (System_String_o *)StringLiteral_22176/*"key("*/,
                v35[0],
                (System_String_o *)StringLiteral_807/*") の値がディクショナリに含まれていません"*/,
                0);
        if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v31);
        Fgo_Assertions_Assert__GetEffectiveAssertMessage(v32, monitor, 0);
      }
    }
    else
    {
      if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v20);
      Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_26808/*"キー"*/, monitor, 0);
    }
  }
  else
  {
    if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, key.klass);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_26824/*"ディクショナリ"*/, monitor, 0);
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
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
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
  const MethodInfo_38914EC **v37; // x22
  System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___c **v38; // x23
  __int64 v39; // x1
  __int64 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x20
  Fgo_Assertions_Assert___c_c *v43; // x0
  struct Fgo_Assertions_Assert___c_StaticFields *static_fields; // x8
  System_Func_T1__T2__TResult__o *_9__42_0; // x21
  System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___c **v46; // x29
  const MethodInfo_38914EC **v47; // x23
  Il2CppObject *v48; // x22
  struct Fgo_Assertions_Assert___c_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v56; // x0
  __int64 v57; // x1
  System_Collections_Generic_IEnumerable_TResult__o *v58; // x20
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___c *v60; // x1
  __int64 v61; // x9
  int32_t *p_offset; // x10
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 v65; // x1
  __int64 v66; // x20
  __int64 v67; // x8
  __int64 v68; // x9
  int *v69; // x10
  __int64 v70; // x0
  __int64 v71; // x0
  __int64 v72; // x1
  __int64 v73; // x20
  __int64 v74; // x8
  __int64 v75; // x9
  int *v76; // x10
  __int64 v77; // x0
  __int64 v78; // x21
  __int64 v79; // x8
  __int64 v80; // x9
  int *v81; // x10
  __int64 v82; // x0
  struct System_Collections_Generic_List_T__o *list; // x19
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+10h] [xbp-A0h] BYREF
  __int64 v85; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+30h] [xbp-80h] BYREF

  v4 = (Il2CppObject *)component;
  if ( (byte_5974EB3 & 1) == 0 )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___set_Item__);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_Object____f__AnonymousType0_Object__int____);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FieldInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FieldInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FieldInfo__get_Current__);
    sub_2213A60(&System_Func_Object__int____f__AnonymousType0_Object__int___TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_Object__var);
    sub_2213A60(&System_Collections_Generic_IEnumerable_Object__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator___f__AnonymousType0_Object__int___TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_FieldInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_FieldInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_FieldInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_FieldInfo__TypeInfo);
    sub_2213A60(&Fgo_Assertions_Assert_NullableAttribute_var);
    sub_2213A60(&UnityEngine_Object___var);
    sub_2213A60(&UnityEngine_Object_var);
    sub_2213A60(&UnityEngine_SerializeField_var);
    sub_2213A60(&Method_Fgo_Assertions_Assert___c__IsAllSerializeFieldsNotNull_b__42_0__);
    component = (UnityEngine_Component_o *)sub_2213A60(&Fgo_Assertions_Assert___c_TypeInfo);
    byte_5974EB3 = 1;
  }
  memset(&v86, 0, sizeof(v86));
  v85 = 0;
  if ( !v4 )
    goto LABEL_97;
  Type = System_Object__GetType(v4, 0);
  v6 = Fgo_Assertions_Assert_TypeInfo;
  v7 = (Il2CppObject *)Type;
  if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, checkInheritance);
    v6 = Fgo_Assertions_Assert_TypeInfo;
  }
  component = (UnityEngine_Component_o *)v6->static_fields->cachedFieldInfo;
  if ( !component )
    goto LABEL_97;
  component = (UnityEngine_Component_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                           (System_Collections_Generic_Dictionary_object__object__o *)component,
                                           v7,
                                           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___ContainsKey__);
  if ( ((unsigned __int8)component & 1) != 0 )
    goto LABEL_45;
  if ( !v7 )
    goto LABEL_97;
  v8 = checkInheritance ? 60LL : 62LL;
  v9 = ((__int64 (__fastcall *)(Il2CppObject *, __int64, const MethodInfo *))v7->klass->vtable[88].methodPtr)(
         v7,
         v8,
         v7->klass->vtable[88].method);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_FieldInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_FieldInfo___ctor__);
  if ( !v9 )
    goto LABEL_97;
  v11 = *(_QWORD *)(v9 + 24);
  if ( (int)v11 >= 1 )
  {
    v12 = 0;
    do
    {
      if ( v12 >= (unsigned int)v11 )
        sub_2213CE4(component);
      v13 = *(System_Reflection_MemberInfo_o **)(v9 + 32 + 8 * v12);
      v14 = UnityEngine_SerializeField_var;
      if ( !*(_DWORD *)(qword_59843E0 + 228) )
        j_il2cpp_runtime_class_init_0(qword_59843E0, checkInheritance);
      TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v14, 0);
      component = (UnityEngine_Component_o *)System_Reflection_CustomAttributeExtensions__IsDefined(
                                               v13,
                                               TypeFromHandle,
                                               0);
      if ( ((unsigned __int8)component & 1) != 0 )
      {
        v16 = Fgo_Assertions_Assert_NullableAttribute_var;
        if ( !*(_DWORD *)(qword_59843E0 + 228) )
          j_il2cpp_runtime_class_init_0(qword_59843E0, checkInheritance);
        v17 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v16, 0);
        component = (UnityEngine_Component_o *)System_Reflection_CustomAttributeExtensions__IsDefined(v13, v17, 0);
        if ( ((unsigned __int8)component & 1) == 0 )
        {
          v18 = UnityEngine_Object_var;
          if ( !*(_DWORD *)(qword_59843E0 + 228) )
            j_il2cpp_runtime_class_init_0(qword_59843E0, checkInheritance);
          component = (UnityEngine_Component_o *)System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v18, 0);
          if ( !v13 )
            goto LABEL_97;
          v19 = component;
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, const char *))v13->klass[1]._1.name)(
                                                   v13,
                                                   v13->klass[1]._1.namespaze);
          if ( !v19 )
            goto LABEL_97;
          component = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, UnityEngine_Component_o *, _QWORD))&v19->klass[1]._2.field_count)(
                                                   v19,
                                                   component,
                                                   *(_QWORD *)&v19->klass[1]._2.interfaces_count);
          if ( ((unsigned __int8)component & 1) != 0 )
            goto LABEL_102;
          v26 = UnityEngine_Object___var;
          if ( !*(_DWORD *)(qword_59843E0 + 228) )
            j_il2cpp_runtime_class_init_0(qword_59843E0, checkInheritance);
          v27 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v26, 0);
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, const char *))v13->klass[1]._1.name)(
                                                   v13,
                                                   v13->klass[1]._1.namespaze);
          if ( !v27 )
            goto LABEL_97;
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Type_o *, UnityEngine_Component_o *, const MethodInfo *))v27->klass->vtable._22_IsAssignableFrom.methodPtr)(
                                                   v27,
                                                   component,
                                                   v27->klass->vtable._22_IsAssignableFrom.method);
          if ( ((unsigned __int8)component & 1) != 0 )
            goto LABEL_102;
          v28 = System_Collections_Generic_IEnumerable_Object__var;
          if ( !*(_DWORD *)(qword_59843E0 + 228) )
            j_il2cpp_runtime_class_init_0(qword_59843E0, checkInheritance);
          v29 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v28, 0);
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, const char *))v13->klass[1]._1.name)(
                                                   v13,
                                                   v13->klass[1]._1.namespaze);
          if ( !v29 )
            goto LABEL_97;
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Type_o *, UnityEngine_Component_o *, const MethodInfo *))v29->klass->vtable._22_IsAssignableFrom.methodPtr)(
                                                   v29,
                                                   component,
                                                   v29->klass->vtable._22_IsAssignableFrom.method);
          if ( ((unsigned __int8)component & 1) != 0 )
          {
LABEL_102:
            if ( !v10 )
              goto LABEL_97;
            items = v10->fields._items;
            v31 = Method_System_Collections_Generic_List_FieldInfo__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_97;
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)v13,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v33[4] = (Il2CppClass *)v13;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v13, v20, v21, v22, v23, v24, v25);
            }
          }
        }
      }
      LODWORD(v11) = *(_DWORD *)(v9 + 24);
    }
    while ( (__int64)++v12 < (int)v11 );
  }
  v34 = Fgo_Assertions_Assert_TypeInfo;
  if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, checkInheritance);
    v34 = Fgo_Assertions_Assert_TypeInfo;
  }
  cachedFieldInfo = (System_Collections_Generic_Dictionary_object__object__o *)v34->static_fields->cachedFieldInfo;
  component = (UnityEngine_Component_o *)System_Object__GetType(v4, 0);
  if ( !cachedFieldInfo )
LABEL_97:
    sub_2213CDC(component, checkInheritance);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    cachedFieldInfo,
    (Il2CppObject *)component,
    (Il2CppObject *)v10,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___set_Item__);
LABEL_45:
  v36 = Fgo_Assertions_Assert_TypeInfo;
  if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, checkInheritance);
    v36 = Fgo_Assertions_Assert_TypeInfo;
  }
  component = (UnityEngine_Component_o *)v36->static_fields->cachedFieldInfo;
  if ( !component )
    goto LABEL_97;
  component = (UnityEngine_Component_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                           (System_Collections_Generic_Dictionary_object__object__o *)component,
                                           v7,
                                           (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___get_Item__);
  if ( !component )
    goto LABEL_97;
  v37 = (const MethodInfo_38914EC **)&Method_System_Linq_Enumerable_Select_Object____f__AnonymousType0_Object__int____;
  v38 = &System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___TypeInfo;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v84,
    (System_Collections_Generic_List_object__o *)component,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_FieldInfo__GetEnumerator__);
  v86 = v84;
  v84.fields._list = 0;
  *(_QWORD *)&v84.fields._index = &v86;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v86,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_FieldInfo__MoveNext__) )
  {
    if ( !v86.fields._current )
      sub_2213CDC(0, v39);
    v40 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppObject *))v86.fields._current->klass->vtable[25].methodPtr)(
            v86.fields._current,
            v4);
    v42 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_2213BB4(
                                                                 v40,
                                                                 System_Collections_Generic_IEnumerable_Object__TypeInfo);
    if ( v42 )
    {
      v43 = Fgo_Assertions_Assert___c_TypeInfo;
      if ( !*(&Fgo_Assertions_Assert___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert___c_TypeInfo, v41);
        v43 = Fgo_Assertions_Assert___c_TypeInfo;
      }
      static_fields = v43->static_fields;
      _9__42_0 = (System_Func_T1__T2__TResult__o *)static_fields->__9__42_0;
      if ( !_9__42_0 )
      {
        if ( !*(&v43->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v43, v41);
          static_fields = Fgo_Assertions_Assert___c_TypeInfo->static_fields;
        }
        v46 = v38;
        v47 = v37;
        v48 = (Il2CppObject *)static_fields->__9;
        _9__42_0 = (System_Func_T1__T2__TResult__o *)sub_2213CCC(System_Func_Object__int____f__AnonymousType0_Object__int___TypeInfo);
        System_Func_object__int__object____ctor(
          _9__42_0,
          v48,
          Method_Fgo_Assertions_Assert___c__IsAllSerializeFieldsNotNull_b__42_0__,
          0);
        v49 = Fgo_Assertions_Assert___c_TypeInfo->static_fields;
        v49->__9__42_0 = (struct System_Func_Object__int____f__AnonymousType0_Object__int___o *)_9__42_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v49->__9__42_0,
          (int32_t)_9__42_0,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55);
        v37 = v47;
        v38 = v46;
      }
      v56 = System_Linq_Enumerable__Select_object__object__59315436(
              v42,
              (System_Func_TSource__int__TResult__o *)_9__42_0,
              *v37);
      v58 = v56;
      if ( !v56 )
        sub_2213CDC(0, v57);
      klass = v56->klass;
      v60 = *v38;
      v61 = *(unsigned __int16 *)&v56->klass->_2.rank;
      if ( *(_WORD *)&v56->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___c **)p_offset - 1) != v60 )
        {
          --v61;
          p_offset += 4;
          if ( !v61 )
            goto LABEL_64;
        }
        v63 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_64:
        v63 = sub_224BC3C(v56, v60, 0);
      }
      v64 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v63)(
              v58,
              *(_QWORD *)(v63 + 8));
      v66 = v64;
      v85 = v64;
      if ( !v64 )
LABEL_82:
        sub_2213CDC(v64, v65);
      while ( 1 )
      {
        v67 = *(_QWORD *)v66;
        v68 = *(unsigned __int16 *)(*(_QWORD *)v66 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v66 + 302LL) )
        {
          v69 = (int *)(*(_QWORD *)(v67 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v69 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v68;
            v69 += 4;
            if ( !v68 )
              goto LABEL_71;
          }
          v70 = v67 + 16LL * *v69 + 312;
        }
        else
        {
LABEL_71:
          v70 = sub_224BC3C(v66, System_Collections_IEnumerator_TypeInfo, 0);
        }
        v71 = (*(__int64 (__fastcall **)(__int64, _QWORD))v70)(v66, *(_QWORD *)(v70 + 8));
        if ( (v71 & 1) == 0 )
          break;
        v73 = v85;
        if ( !v85 )
          sub_2213CDC(v71, v72);
        v74 = *(_QWORD *)v85;
        v75 = *(unsigned __int16 *)(*(_QWORD *)v85 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v85 + 302LL) )
        {
          v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator___f__AnonymousType0_Object__int___c **)v76 - 1) != System_Collections_Generic_IEnumerator___f__AnonymousType0_Object__int___TypeInfo )
          {
            --v75;
            v76 += 4;
            if ( !v75 )
              goto LABEL_79;
          }
          v77 = v74 + 16LL * *v76 + 312;
        }
        else
        {
LABEL_79:
          v77 = sub_224BC3C(v85, System_Collections_Generic_IEnumerator___f__AnonymousType0_Object__int___TypeInfo, 0);
        }
        v64 = (*(__int64 (__fastcall **)(__int64, _QWORD))v77)(v73, *(_QWORD *)(v77 + 8));
        v66 = v85;
        if ( !v85 )
          goto LABEL_82;
      }
      v78 = v85;
      if ( v85 )
      {
        v79 = *(_QWORD *)v85;
        v80 = *(unsigned __int16 *)(*(_QWORD *)v85 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v85 + 302LL) )
        {
          v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v81 - 1) != System_IDisposable_TypeInfo )
          {
            --v80;
            v81 += 4;
            if ( !v80 )
              goto LABEL_88;
          }
          v82 = v79 + 16LL * *v81 + 312;
        }
        else
        {
LABEL_88:
          v82 = sub_224BC3C(v85, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v82)(v78, *(_QWORD *)(v82 + 8));
      }
    }
  }
  list = v84.fields._list;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    *(System_Collections_Generic_List_Enumerator_object__o **)&v84.fields._index,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_FieldInfo__Dispose__);
  if ( list )
    sub_2213CD4(list);
}


void Fgo_Assertions_Assert__IsAssetDataNotNull(
        Il2CppObject *assetData,
        System_String_o *assetName,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_5974EAC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16514/*"[AssetData]\n{0}をロードできませんでした"*/);
    byte_5974EAC = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_16514/*"[AssetData]\n{0}をロードできませんでした"*/, (Il2CppObject *)assetName, 0);
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
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  Il2CppObject *v15; // x0
  System_String_o *v16; // x20
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v18; // [xsp+18h] [xbp-28h] BYREF
  int32_t v19; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_5974EAF & 1) == 0 )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&StringLiteral_21766/*"index({0}) の値が負です"*/);
    sub_2213A60(&StringLiteral_21767/*"index({0}) の値が配列の要素数({1})を超えています"*/);
    byte_5974EAF = 1;
  }
  if ( index < 0 )
  {
    v19 = index;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v19);
    v12 = System_String__Format((System_String_o *)StringLiteral_21766/*"index({0}) の値が負です"*/, v15, 0);
  }
  else
  {
    if ( count > index )
      return;
    v18 = index;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v18);
    v17 = count;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v17);
    v12 = System_String__Format_75697880((System_String_o *)StringLiteral_21767/*"index({0}) の値が配列の要素数({1})を超えています"*/, v10, v11, 0);
  }
  v16 = v12;
  if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v13);
  Fgo_Assertions_Assert__GetEffectiveAssertMessage(v16, message, v14);
}


// local variable allocation has failed, the output may be wrong!
void Fgo_Assertions_Assert__IsInRange___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_37D0C5C *method)
{
  if ( (byte_59760CE & 1) == 0 )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&StringLiteral_26913/*"配列"*/);
    byte_59760CE = 1;
  }
  if ( !array )
  {
    if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&index);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_26913/*"配列"*/, message, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void Fgo_Assertions_Assert__IsInRange___Il2CppFullySharedGenericType__58526680(
        System_Collections_Generic_List_T__o *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_37D0BD8 *method)
{
  if ( (byte_59760CD & 1) == 0 )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&StringLiteral_26837/*"リスト"*/);
    byte_59760CD = 1;
  }
  if ( !array )
  {
    if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, *(_QWORD *)&index);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_26837/*"リスト"*/, message, 0);
  }
}


void Fgo_Assertions_Assert__IsNotNull_object_(
        Il2CppObject *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_37D0CE0 *method)
{
  Il2CppClass *klass; // x8
  UnityEngine_Object_c *v8; // x0
  unsigned int naturalAligment; // w10
  __int64 v10; // x9
  Il2CppObject *v11; // x0

  if ( (byte_59760CF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59760CF = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message);
        v8 = UnityEngine_Object_TypeInfo;
        klass = value->klass;
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
  if ( (byte_5974EB2 & 1) == 0 )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&StringLiteral_26795/*"アクション"*/);
    byte_5974EB2 = 1;
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
    if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, message);
    Fgo_Assertions_Assert__GetNullAssertMessage(
      (System_String_o *)StringLiteral_26795/*"アクション"*/,
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
        const MethodInfo_37D0DA4 *method)
{
  Il2CppClass *klass; // x8
  UnityEngine_Object_c *v8; // x0
  unsigned int naturalAligment; // w10
  __int64 v10; // x9
  Il2CppObject *v11; // x0

  if ( (byte_59760D0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59760D0 = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message);
        v8 = UnityEngine_Object_TypeInfo;
        klass = value->klass;
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
        const MethodInfo_37D0E68 *method)
{
  if ( (byte_59760D1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16562/*"[SerializeField]\n{0}の参照が切れています"*/);
    byte_59760D1 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_16562/*"[SerializeField]\n{0}の参照が切れています"*/, (Il2CppObject *)fieldName, 0);
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

  if ( (byte_5974EAB & 1) == 0 )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Contains__);
    byte_5974EAB = 1;
  }
  if ( !condition )
  {
    v9 = Fgo_Assertions_Assert_TypeInfo;
    if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, condition);
      v9 = Fgo_Assertions_Assert_TypeInfo;
    }
    suppressAsserts = (System_Collections_Generic_HashSet_T__o *)v9->static_fields->suppressAsserts;
    if ( suppressAsserts )
    {
      if ( System_Collections_Generic_HashSet_Int32Enum___Contains(
             suppressAsserts,
             assertKey,
             (const MethodInfo_42B66C8 *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Contains__) )
      {
        return;
      }
      v11 = Fgo_Assertions_Assert_TypeInfo;
      if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, condition);
        v11 = Fgo_Assertions_Assert_TypeInfo;
      }
      suppressAsserts = (System_Collections_Generic_HashSet_T__o *)v11->static_fields->suppressAsserts;
      if ( suppressAsserts )
      {
        System_Collections_Generic_HashSet_Int32Enum___Add(
          suppressAsserts,
          assertKey,
          (const MethodInfo_42B7204 *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Add__);
        return;
      }
    }
    sub_2213CDC(suppressAsserts, condition);
  }
}


void Fgo_Assertions_Assert__OnFailed(
        System_String_o *message,
        System_String_o *expected,
        System_String_o *actual,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  __int64 v8; // x1
  Fgo_Assertions_Assert_c *v9; // x8
  System_String_o *v10; // x19
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x9
  struct System_Action_string__o *onFailedAction; // x9
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_5974E9E & 1) == 0 )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&StringLiteral_26486/*"{0}\n(expected={1}, actual={2})"*/);
    byte_5974E9E = 1;
  }
  v7 = System_String__Format_75697948(
         (System_String_o *)StringLiteral_26486/*"{0}\n(expected={1}, actual={2})"*/,
         (Il2CppObject *)message,
         (Il2CppObject *)expected,
         (Il2CppObject *)actual,
         0);
  v9 = Fgo_Assertions_Assert_TypeInfo;
  v10 = v7;
  if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v8);
    v9 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v9->static_fields;
  if ( static_fields->enable )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v8);
      v9 = Fgo_Assertions_Assert_TypeInfo;
      static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
    }
    onFailedAction = static_fields->onFailedAction;
    if ( onFailedAction )
    {
      if ( !*(&v9->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v9, v8);
        onFailedAction = Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedAction;
        if ( !onFailedAction )
          sub_2213CDC(v13, v14);
      }
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))onFailedAction->fields.invoke_impl)(
        onFailedAction->fields.method_code,
        v10,
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
  if ( (byte_5974EAD & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16539/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/);
    byte_5974EAD = 1;
  }
  System_String__Format_75697880((System_String_o *)StringLiteral_16539/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/, (Il2CppObject *)name, (Il2CppObject *)key, 0);
}


void Fgo_Assertions_Assert__OnFailed_56097804(
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
  System_String_o *v12; // x23
  Il2CppObject *FileName; // x23
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x20
  System_String_o *name; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1
  Fgo_Assertions_Assert_c *v20; // x8
  System_String_o *v21; // x21
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x9
  struct System_Action_string__o *onFailedAction; // x9
  struct System_Action_string__string__string__o *onFailedSendReport; // x9
  int32_t v25; // [xsp+Ch] [xbp-44h] BYREF

  v9 = message;
  v10 = (Il2CppObject *)caption;
  if ( (byte_5974E9F & 1) == 0 )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_IO_Path_TypeInfo);
    sub_2213A60(&StringLiteral_26532/*"{0}({1})"*/);
    sub_2213A60(&StringLiteral_61/*"\nGameObject:"*/);
    caption = (System_String_o *)sub_2213A60(&StringLiteral_26487/*"{0}\n{1}\n{2}"*/);
    byte_5974E9F = 1;
  }
  if ( !filePath )
    goto LABEL_27;
  v12 = System_String__Replace(filePath, 0x5Cu, 0x2Fu, 0);
  if ( !*(&System_IO_Path_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, v11);
  FileName = (Il2CppObject *)System_IO_Path__GetFileName(v12, 0);
  v25 = line;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v25);
  v16 = (Il2CppObject *)System_String__Format_75697880((System_String_o *)StringLiteral_26532/*"{0}({1})"*/, FileName, v14, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  caption = (System_String_o *)UnityEngine_Object__op_Inequality(0, (UnityEngine_Object_o *)gameObject, 0);
  if ( ((unsigned __int8)caption & 1) != 0 )
  {
    if ( !gameObject )
      goto LABEL_27;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
    v9 = System_String__Concat_75694928(v9, (System_String_o *)StringLiteral_61/*"\nGameObject:"*/, name, 0);
  }
  v18 = System_String__Format_75697948((System_String_o *)StringLiteral_26487/*"{0}\n{1}\n{2}"*/, v10, (Il2CppObject *)v9, v16, 0);
  v20 = Fgo_Assertions_Assert_TypeInfo;
  v21 = v18;
  if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, v19);
    v20 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v20->static_fields;
  if ( static_fields->enable )
  {
    if ( !*(&v20->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v20, v19);
      v20 = Fgo_Assertions_Assert_TypeInfo;
      static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
    }
    onFailedAction = static_fields->onFailedAction;
    if ( onFailedAction )
    {
      if ( !*(&v20->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v20, v19);
        onFailedAction = Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedAction;
        if ( !onFailedAction )
          goto LABEL_27;
      }
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))onFailedAction->fields.invoke_impl)(
        onFailedAction->fields.method_code,
        v21,
        onFailedAction->fields.method);
      v20 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( !*(&v20->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v20, v19);
      v20 = Fgo_Assertions_Assert_TypeInfo;
    }
    onFailedSendReport = v20->static_fields->onFailedSendReport;
    if ( onFailedSendReport )
    {
      if ( *(&v20->_2.cctor_finished + 1)
        || (j_il2cpp_runtime_class_init_0(v20, v19),
            (onFailedSendReport = Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedSendReport) != 0) )
      {
        ((void (__fastcall *)(intptr_t, Il2CppObject *, System_String_o *, Il2CppObject *, intptr_t))onFailedSendReport->fields.invoke_impl)(
          onFailedSendReport->fields.method_code,
          v10,
          v21,
          v16,
          onFailedSendReport->fields.method);
        return;
      }
LABEL_27:
      sub_2213CDC(caption, message);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void Fgo_Assertions_Assert__SetOnFailedAction(System_Action_string__o *action, bool force, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Fgo_Assertions_Assert_c *v10; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_5974EA0 & 1) == 0 )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&StringLiteral_26884/*"既に表明違反時の処理が設定されています"*/);
    byte_5974EA0 = 1;
  }
  v10 = Fgo_Assertions_Assert_TypeInfo;
  if ( !force )
  {
    if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, force);
      v10 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( v10->static_fields->onFailedAction )
    {
      if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, force);
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_26884/*"既に表明違反時の処理が設定されています"*/, 0);
      v10 = Fgo_Assertions_Assert_TypeInfo;
    }
  }
  if ( !*(&v10->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v10, force);
    v10 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->onFailedAction = action;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->onFailedAction,
    (int32_t)action,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void Fgo_Assertions_Assert__SetOnFailedSendReport(
        System_Action_string__string__string__o *action,
        bool force,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Fgo_Assertions_Assert_c *v10; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_5974EA1 & 1) == 0 )
  {
    sub_2213A60(&Fgo_Assertions_Assert_TypeInfo);
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&StringLiteral_26884/*"既に表明違反時の処理が設定されています"*/);
    byte_5974EA1 = 1;
  }
  v10 = Fgo_Assertions_Assert_TypeInfo;
  if ( !force )
  {
    if ( !*(&Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo, force);
      v10 = Fgo_Assertions_Assert_TypeInfo;
    }
    if ( v10->static_fields->onFailedSendReport )
    {
      if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, force);
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_26884/*"既に表明違反時の処理が設定されています"*/, 0);
      v10 = Fgo_Assertions_Assert_TypeInfo;
    }
  }
  if ( !*(&v10->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v10, force);
    v10 = Fgo_Assertions_Assert_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->onFailedSendReport = action;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->onFailedSendReport,
    (int32_t)action,
    (System_String_o *)method,
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.format = aFormat;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)aFormat, v7, v8, v9, v10, v11, v12);
  this->fields.args = aArgs;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.args, (int32_t)aArgs, v13, v14, v15, v16, v17, v18);
}


void Fgo_Assertions_Assert___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974EB5 & 1) == 0 )
  {
    sub_2213A60(&Fgo_Assertions_Assert___c_TypeInfo);
    byte_5974EB5 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(Fgo_Assertions_Assert___c_TypeInfo);
  System_Object___ctor(v1, 0);
  Fgo_Assertions_Assert___c_TypeInfo->static_fields->__9 = (struct Fgo_Assertions_Assert___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)Fgo_Assertions_Assert___c_TypeInfo->static_fields,
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

  if ( (byte_5974EB6 & 1) == 0 )
  {
    sub_2213A60(&Method___f__AnonymousType0_Object__int___ctor__);
    sub_2213A60(&_f__AnonymousType0_Object__int__TypeInfo);
    byte_5974EB6 = 1;
  }
  v6 = (__f__AnonymousType0__obj_j__TPar___index_j__TPar__o *)sub_2213CCC(_f__AnonymousType0_Object__int__TypeInfo);
  _f__AnonymousType0_object__int____ctor(
    v6,
    (Il2CppObject *)obj,
    index,
    (const MethodInfo_3B0CA74 *)Method___f__AnonymousType0_Object__int___ctor__);
  return (__f__AnonymousType0_Object__int__o *)v6;
}


void Fgo_Assertions_AssertQueue___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5974EBC & 1) == 0 )
  {
    sub_2213A60(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Queue_string___ctor__);
    sub_2213A60(&System_Collections_Generic_Queue_string__TypeInfo);
    byte_5974EBC = 1;
  }
  v1 = (System_Collections_Generic_Queue_T__o *)sub_2213CCC(System_Collections_Generic_Queue_string__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v1,
    (const MethodInfo_46D37D8 *)Method_System_Collections_Generic_Queue_string___ctor__);
  Fgo_Assertions_AssertQueue_TypeInfo->static_fields->queue = (struct System_Collections_Generic_Queue_string__o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)Fgo_Assertions_AssertQueue_TypeInfo->static_fields,
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
  sub_2213A04((MissionNaviTransitionBoardItem_o *)static_fields, 0, v9, v10, v11, v12, v13, v14);
}


void Fgo_Assertions_AssertQueue__Clear(const MethodInfo *method)
{
  __int64 v1; // x1
  Fgo_Assertions_AssertQueue_c *v2; // x0
  System_Collections_Generic_Queue_T__o *queue; // x0

  if ( (byte_5974EBB & 1) == 0 )
  {
    sub_2213A60(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Queue_string__Clear__);
    byte_5974EBB = 1;
  }
  v2 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !*(&Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo, v1);
    v2 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  queue = (System_Collections_Generic_Queue_T__o *)v2->static_fields->queue;
  if ( !queue )
    sub_2213CDC(0, v1);
  System_Collections_Generic_Queue_object___Clear(
    queue,
    (const MethodInfo_46D3A6C *)Method_System_Collections_Generic_Queue_string__Clear__);
}


void Fgo_Assertions_AssertQueue__Dequeue(const MethodInfo *method)
{
  __int64 v1; // x1
  Fgo_Assertions_AssertQueue_c *v2; // x0
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x9
  System_Collections_Generic_Queue_T__o *queue; // x8
  int v5; // w10
  Il2CppObject *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_5974EBA & 1) == 0 )
  {
    sub_2213A60(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Queue_string__Dequeue__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_string__get_Count__);
    byte_5974EBA = 1;
  }
  v2 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !*(&Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo, v1);
    v2 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  static_fields = v2->static_fields;
  queue = (System_Collections_Generic_Queue_T__o *)static_fields->queue;
  if ( !static_fields->queue )
    goto LABEL_13;
  v5 = *(&v2->_2.cctor_finished + 1);
  if ( queue->fields._size )
  {
    if ( v5
      || (j_il2cpp_runtime_class_init_0(v2, v1),
          (queue = (System_Collections_Generic_Queue_T__o *)Fgo_Assertions_AssertQueue_TypeInfo->static_fields->queue) != 0) )
    {
      v6 = System_Collections_Generic_Queue_object___Dequeue(
             queue,
             (const MethodInfo_46D3F34 *)Method_System_Collections_Generic_Queue_string__Dequeue__);
      Fgo_Assertions_AssertQueue__OnFailed((System_String_o *)v6, v7);
      return;
    }
LABEL_13:
    sub_2213CDC(v2, v1);
  }
  if ( !v5 )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    static_fields = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
  }
  static_fields->isReady = 1;
}


void Fgo_Assertions_AssertQueue__Enqueue(System_String_o *message, const MethodInfo *method)
{
  Fgo_Assertions_AssertQueue_c *v3; // x0
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x8
  int v5; // w9

  if ( (byte_5974EB9 & 1) == 0 )
  {
    sub_2213A60(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Queue_string__Enqueue__);
    byte_5974EB9 = 1;
  }
  v3 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !*(&Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo, method);
    v3 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  static_fields = v3->static_fields;
  v5 = *(&v3->_2.cctor_finished + 1);
  if ( static_fields->isReady )
  {
    if ( !v5 )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
    }
    static_fields->isReady = 0;
    Fgo_Assertions_AssertQueue__OnFailed(message, method);
  }
  else
  {
    if ( !v5 )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
    }
    if ( !static_fields->queue )
      sub_2213CDC(0, method);
    System_Collections_Generic_Queue_object___Enqueue(
      (System_Collections_Generic_Queue_T__o *)static_fields->queue,
      (Il2CppObject *)message,
      (const MethodInfo_46D3DA4 *)Method_System_Collections_Generic_Queue_string__Enqueue__);
  }
}


void Fgo_Assertions_AssertQueue__OnFailed(System_String_o *message, const MethodInfo *method)
{
  Fgo_Assertions_AssertQueue_c *v3; // x0
  struct System_Action_string__o *onFailedAction; // x8
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_5974EB7 & 1) == 0 )
  {
    sub_2213A60(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&StringLiteral_26903/*"表明違反時処理が設定されていません"*/);
    byte_5974EB7 = 1;
  }
  v3 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !*(&Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo, method);
    v3 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  onFailedAction = v3->static_fields->onFailedAction;
  if ( onFailedAction )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      onFailedAction = Fgo_Assertions_AssertQueue_TypeInfo->static_fields->onFailedAction;
      if ( !onFailedAction )
        sub_2213CDC(v5, v6);
    }
    ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))onFailedAction->fields.invoke_impl)(
      onFailedAction->fields.method_code,
      message,
      onFailedAction->fields.method);
  }
  else
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, method);
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_26903/*"表明違反時処理が設定されていません"*/, 0);
  }
}


void Fgo_Assertions_AssertQueue__SetOnFailedAction(System_Action_string__o *action, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Fgo_Assertions_AssertQueue_c *v9; // x0
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x0

  if ( (byte_5974EB8 & 1) == 0 )
  {
    sub_2213A60(&Fgo_Assertions_AssertQueue_TypeInfo);
    byte_5974EB8 = 1;
  }
  v9 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !*(&Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo, method);
    v9 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->onFailedAction = action;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->onFailedAction,
    (int32_t)action,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}