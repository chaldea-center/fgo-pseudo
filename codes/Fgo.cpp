void Fgo_Assertions_Assert___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0
  struct Fgo_Assertions_Assert_StaticFields *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Generic_HashSet_T__o *v7; // x19
  struct Fgo_Assertions_Assert_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_Dictionary_object__object__o *v11; // x19
  struct Fgo_Assertions_Assert_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C2B878 & 1) == 0 )
  {
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo____ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_Type__List_FieldInfo___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey___ctor__);
    sub_1C2D490(&System_Collections_Generic_HashSet_Assert_SuppressAssertKey__TypeInfo);
    byte_4C2B878 = 1;
  }
  static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
  static_fields->enable = 1;
  static_fields->onFailedAction = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->onFailedAction, 0, v1, v2);
  v4 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v4->onFailedSendReport = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->onFailedSendReport, 0, v5, v6);
  v7 = (System_Collections_Generic_HashSet_T__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_Assert_SuppressAssertKey__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v7,
    (const MethodInfo_363C904 *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey___ctor__);
  v8 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v8->suppressAsserts = (struct System_Collections_Generic_HashSet_Assert_SuppressAssertKey__o *)v7;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->suppressAsserts, (int32_t)v7, v9, v10);
  v11 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_Type__List_FieldInfo___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v11,
    (const MethodInfo_3449978 *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo____ctor__);
  v12 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v12->cachedFieldInfo = (struct System_Collections_Generic_Dictionary_Type__List_FieldInfo___o *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&v12->cachedFieldInfo, (int32_t)v11, v13, v14);
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

  if ( (byte_4C2B867 & 1) == 0 )
  {
    sub_1C2D490(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    byte_4C2B867 = 1;
  }
  if ( !byte_4C20DA5 )
  {
    sub_1C2D490(&UnityEngine_Mathf_TypeInfo);
    byte_4C20DA5 = 1;
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
      (const MethodInfo_30ADBB8 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
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
  if ( (byte_4C2B868 & 1) == 0 )
  {
    sub_1C2D490(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    byte_4C2B868 = 1;
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
      (const MethodInfo_30AD61C *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void Fgo_Assertions_Assert__AreEqual_48930168(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4C2B869 & 1) == 0 )
  {
    sub_1C2D490(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    byte_4C2B869 = 1;
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
      (const MethodInfo_30AD7E8 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void Fgo_Assertions_Assert__AreEqual_48930328(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4C2B86A & 1) == 0 )
  {
    sub_1C2D490(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B86A = 1;
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
          (const MethodInfo_30AD9BC *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
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
        const MethodInfo_30AC684 *method)
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
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x0
  __int64 v36; // x10
  _QWORD *v37; // x19
  void **v38; // x1
  _QWORD *v39; // x19
  void **v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x0
  __int64 v45; // x10
  _QWORD *v46; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v47; // x1
  _QWORD *v48; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x0
  __int64 naturalAligment; // x10
  _QWORD *v55; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v56; // x19
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
  void **v78; // x1
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
  _QWORD v89[4]; // [xsp+28h] [xbp-38h] BYREF
  _BYTE v90[12]; // [xsp+48h] [xbp-18h] BYREF
  char v91; // [xsp+54h] [xbp-Ch] BYREF
  __int64 v92; // [xsp+58h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  monitor = (void **)expected.monitor;
  klass = expected.klass;
  v92 = *(_QWORD *)(StatusReg + 40);
  v87 = expected.monitor;
  v88 = expected.klass;
  v11 = filePath[2].monitor;
  v85 = actual.klass;
  if ( !v11 )
  {
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    v11 = filePath[2].monitor;
    if ( !v11 )
    {
      sub_1C7DC00(filePath);
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
    v14 = sub_1C7DBA4(v7);
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
    v31 = *(int *)(*v30 + 40LL) >= 0 ? &v88 : (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    if ( (memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v31, v13),
          (v35 = j_il2cpp_value_box_0(*v30, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v32, v33, v34)) == 0)
      || (v36 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*(_QWORD *)v35 + 304LL) < (unsigned int)v36)
      || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v35 + 200LL) + 8 * v36 - 8) != UnityEngine_Object_TypeInfo
      || ((v37 = filePath[2].monitor, *(int *)(*v37 + 40LL) >= 0) ? (v38 = &v87) : (v38 = monitor),
          memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v38, v13),
          (sub_1C2D6A0(*v37, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
    {
      v39 = filePath[2].monitor;
      v40 = *(int *)(*v39 + 40LL) >= 0 ? &v87 : monitor;
      if ( (memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v40, v13),
            (v44 = j_il2cpp_value_box_0(*v39, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v41, v42, v43)) == 0)
        || (v45 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
            *(unsigned __int8 *)(*(_QWORD *)v44 + 304LL) < (unsigned int)v45)
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v44 + 200LL) + 8 * v45 - 8) != UnityEngine_Object_TypeInfo
        || ((v46 = filePath[2].monitor, *(int *)(*v46 + 40LL) >= 0)
          ? (v47 = &v88)
          : (v47 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v88),
            memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v47, v13),
            (sub_1C2D6A0(*v46, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
      {
        v48 = filePath[2].monitor;
        v49 = *(int *)(*v48 + 40LL) >= 0 ? &v88 : (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v88;
        memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v49, v13);
        v53 = j_il2cpp_value_box_0(*v48, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v50, v51, v52);
        if ( !v53 )
          goto LABEL_40;
        naturalAligment = UnityEngine_Object_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)v53 + 304LL) < (unsigned int)naturalAligment
          || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v53 + 200LL) + 8 * naturalAligment - 8) != UnityEngine_Object_TypeInfo )
        {
          goto LABEL_40;
        }
        v77 = filePath[2].monitor;
        v78 = *(int *)(*v77 + 40LL) >= 0 ? &v87 : monitor;
        memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v78, v13);
        v82 = j_il2cpp_value_box_0(*v77, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v79, v80, v81);
        if ( !v82
          || (v83 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
              *(unsigned __int8 *)(*(_QWORD *)v82 + 304LL) < (unsigned int)v83)
          || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v82 + 200LL) + 8 * v83 - 8) != UnityEngine_Object_TypeInfo )
        {
LABEL_40:
          v55 = filePath[2].monitor;
          v56 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v88;
          if ( *(int *)(*v55 + 40LL) >= 0 )
            v57 = &v88;
          else
            v57 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v88;
          memcpy((char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL), v57, v13);
          if ( (sub_1C2D6A0(*v55, (char *)&v84 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
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
              v68 = sub_1C7DBA4(v64);
              v65 = filePath[2].monitor;
              v56 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v88;
              LODWORD(v67) = v68;
            }
            v69 = v65[1];
            v70 = *(_DWORD *)(*v65 + 40LL);
            v89[0] = v66;
            if ( v70 >= 0 )
              v71 = &v88;
            else
              v71 = v56;
            sub_1C2DEF8(v67, v69, (int)v16, v71);
            if ( v90[0] )
              return;
            v56 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v88;
          }
          v72 = filePath[2].monitor;
          if ( *(int *)(*v72 + 40LL) >= 0 )
            v73 = &v88;
          else
            v73 = v56;
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
          v89[0] = v17;
          v89[1] = v18;
          v91 = 1;
          v89[2] = &v91;
          v89[3] = v85;
          ((void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, _BYTE *))v75[2])(v76, v75, 0, v89, v90);
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

  if ( (byte_4C2B86B & 1) == 0 )
  {
    sub_1C2D490(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    byte_4C2B86B = 1;
  }
  if ( !byte_4C20DA5 )
  {
    sub_1C2D490(&UnityEngine_Mathf_TypeInfo);
    byte_4C20DA5 = 1;
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
      (const MethodInfo_30ADBB8 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
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
  if ( (byte_4C2B86C & 1) == 0 )
  {
    sub_1C2D490(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    byte_4C2B86C = 1;
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
      (const MethodInfo_30AD61C *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void Fgo_Assertions_Assert__AreNotEqual_48931036(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4C2B86D & 1) == 0 )
  {
    sub_1C2D490(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    byte_4C2B86D = 1;
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
      (const MethodInfo_30AD7E8 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void Fgo_Assertions_Assert__AreNotEqual_48931196(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4C2B86E & 1) == 0 )
  {
    sub_1C2D490(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B86E = 1;
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
      (const MethodInfo_30AD9BC *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
  }
}


void Fgo_Assertions_Assert__AreNotEqual___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o expected,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_30ACB5C *method)
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
  void **v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  __int64 v46; // x0
  __int64 v47; // x10
  _QWORD *v48; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v49; // x1
  _QWORD *v50; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  __int64 v55; // x0
  __int64 naturalAligment; // x10
  _QWORD *v57; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v58; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v59; // x1
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
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v72; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v73; // x1
  void **v74; // x1
  Fgo_Assertions_Assert_c *v75; // x0
  void **v76; // x1
  __int64 *v77; // x1
  __int64 v78; // x0
  _QWORD *v79; // x19
  void **v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  __int64 v84; // x0
  __int64 v85; // x10
  char *v86; // [xsp+0h] [xbp-60h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v87; // [xsp+8h] [xbp-58h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-50h]
  void *v89; // [xsp+18h] [xbp-48h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v90; // [xsp+20h] [xbp-40h] BYREF
  _QWORD v91[4]; // [xsp+28h] [xbp-38h] BYREF
  _BYTE v92[12]; // [xsp+48h] [xbp-18h] BYREF
  char v93; // [xsp+54h] [xbp-Ch] BYREF
  __int64 v94; // [xsp+58h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  monitor = (void **)expected.monitor;
  klass = expected.klass;
  v94 = *(_QWORD *)(StatusReg + 40);
  v89 = expected.monitor;
  v90 = expected.klass;
  v11 = filePath[2].monitor;
  v87 = actual.klass;
  if ( !v11 )
  {
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    v11 = filePath[2].monitor;
    if ( !v11 )
    {
      sub_1C7DC00(filePath);
      v11 = filePath[2].monitor;
    }
  }
  v12 = *v11;
  v13 = *(_DWORD *)(*v11 + 252LL);
  v14 = v13;
  if ( (*(_BYTE *)(*v11 + 309LL) & 1) == 0 )
  {
    v15 = sub_1C7DBA4(v7);
    v11 = filePath[2].monitor;
    v13 = *(_DWORD *)(v15 + 252);
    v12 = *v11;
  }
  v86 = (char *)&v86 - ((v13 + 16 + 15LL) & 0x1FFFFFFF0LL);
  v16 = (char **)((char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL));
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
    v91[2] = &v93;
    v93 = 0;
    v91[0] = v16;
    v91[1] = v17;
    v91[3] = v87;
    ((void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, _BYTE *))v77[2])(v78, v77, 0, v91, v92);
    return;
  }
  v37 = j_il2cpp_value_box_0(v36, (char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v33, v34, v35);
  if ( !v37
    || (v38 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*(_QWORD *)v37 + 304LL) < (unsigned int)v38)
    || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v37 + 200LL) + 8 * v38 - 8) != UnityEngine_Object_TypeInfo
    || ((v39 = filePath[2].monitor, *(int *)(*v39 + 40LL) >= 0) ? (v40 = &v89) : (v40 = monitor),
        memcpy((char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v40, v14),
        (sub_1C2D6A0(*v39, (char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
  {
    v41 = filePath[2].monitor;
    v42 = *(int *)(*v41 + 40LL) >= 0 ? &v89 : monitor;
    if ( (memcpy((char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v42, v14),
          (v46 = j_il2cpp_value_box_0(*v41, (char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v43, v44, v45)) == 0)
      || (v47 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*(_QWORD *)v46 + 304LL) < (unsigned int)v47)
      || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v46 + 200LL) + 8 * v47 - 8) != UnityEngine_Object_TypeInfo
      || ((v48 = filePath[2].monitor, *(int *)(*v48 + 40LL) >= 0)
        ? (v49 = &v90)
        : (v49 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v90),
          memcpy((char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v49, v14),
          (sub_1C2D6A0(*v48, (char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
    {
      v50 = filePath[2].monitor;
      v51 = *(int *)(*v50 + 40LL) >= 0 ? &v90 : (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v90;
      memcpy((char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v51, v14);
      v55 = j_il2cpp_value_box_0(*v50, (char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v52, v53, v54);
      if ( !v55 )
        goto LABEL_39;
      naturalAligment = UnityEngine_Object_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)v55 + 304LL) < (unsigned int)naturalAligment
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v55 + 200LL) + 8 * naturalAligment - 8) != UnityEngine_Object_TypeInfo )
      {
        goto LABEL_39;
      }
      v79 = filePath[2].monitor;
      v80 = *(int *)(*v79 + 40LL) >= 0 ? &v89 : monitor;
      memcpy((char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v80, v14);
      v84 = j_il2cpp_value_box_0(*v79, (char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v81, v82, v83);
      if ( !v84
        || (v85 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
            *(unsigned __int8 *)(*(_QWORD *)v84 + 304LL) < (unsigned int)v85)
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v84 + 200LL) + 8 * v85 - 8) != UnityEngine_Object_TypeInfo )
      {
LABEL_39:
        v57 = filePath[2].monitor;
        v58 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v90;
        v59 = *(int *)(*v57 + 40LL) >= 0 ? &v90 : (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v90;
        memcpy((char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL), v59, v14);
        if ( (sub_1C2D6A0(*v57, (char *)&v86 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
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
            v70 = sub_1C7DBA4(v66);
            v67 = filePath[2].monitor;
            v58 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v90;
            LODWORD(v69) = v70;
          }
          v71 = v67[2];
          v72 = *(int *)(*v67 + 40LL) >= 0 ? &v90 : v58;
          v91[0] = v68;
          sub_1C2DEF8(v69, v71, (int)v86, v72);
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

  if ( (byte_4C2B875 & 1) == 0 )
  {
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&char_TypeInfo);
    sub_1C2D490(&StringLiteral_25469/*"書式指定項目が不正です"*/);
    sub_1C2D490(&StringLiteral_25410/*"パラメータ"*/);
    sub_1C2D490(&StringLiteral_25458/*"文字列"*/);
    sub_1C2D490(&StringLiteral_25452/*"引数"*/);
    sub_1C2D490(&StringLiteral_25453/*"引数を超えたのインデックスを指しています"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2B875 = 1;
  }
  v28[0] = 0;
  result = 0;
  v27 = 0;
  if ( !parameter )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v24 = &StringLiteral_25410/*"パラメータ"*/;
    goto LABEL_59;
  }
  format = parameter->fields.format;
  if ( !format )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v24 = &StringLiteral_25458/*"文字列"*/;
    goto LABEL_59;
  }
  args = parameter->fields.args;
  if ( !args || LODWORD(args->max_length) == 1 && !args->m_Items[0] )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v24 = &StringLiteral_25452/*"引数"*/;
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
          sub_1C2D6EC(v19, v20);
        if ( v27 >= SLODWORD(v21->max_length) )
        {
          if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
          v25 = &StringLiteral_25453/*"引数を超えたのインデックスを指しています"*/;
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
      v15 = System_String__Concat_63457864(v15, v22, 0);
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
        v15 = System_String__Concat_63457864(v15, v23, 0);
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
  v25 = &StringLiteral_25469/*"書式指定項目が不正です"*/;
LABEL_69:
  Fgo_Assertions_Assert__GetEffectiveAssertMessage((System_String_o *)*v25, message, (const MethodInfo *)gameObject);
}


void Fgo_Assertions_Assert__CanParse___Il2CppFullySharedGenericType_(
        System_String_o *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_30AD07C *method)
{
  Il2CppType *_0_T; // x21
  System_RuntimeTypeHandle_o v10; // x0
  Il2CppObject *TypeFromHandle; // x21
  System_RuntimeTypeHandle_o v12; // x0
  System_Type_o *v13; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  Il2CppType *v16; // x22
  System_RuntimeTypeHandle_o v17; // x0
  System_Type_o *v18; // x0
  Il2CppType *v19; // x22
  System_RuntimeTypeHandle_o v20; // x0
  System_Type_o *v21; // x0
  Il2CppType *v22; // x22
  System_RuntimeTypeHandle_o v23; // x0
  System_Type_o *v24; // x0
  Il2CppType *v25; // x22
  System_RuntimeTypeHandle_o v26; // x0
  System_Type_o *v27; // x0
  Il2CppType *v28; // x22
  System_RuntimeTypeHandle_o v29; // x0
  System_Type_o *v30; // x0
  Il2CppType *v31; // x22
  System_RuntimeTypeHandle_o v32; // x0
  System_Type_o *v33; // x0
  Il2CppType *v34; // x22
  System_RuntimeTypeHandle_o v35; // x0
  System_Type_o *v36; // x0
  Il2CppType *v37; // x22
  System_RuntimeTypeHandle_o v38; // x0
  System_Type_o *v39; // x0
  Il2CppType *v40; // x22
  System_RuntimeTypeHandle_o v41; // x0
  System_Type_o *v42; // x0
  Il2CppType *v43; // x22
  System_RuntimeTypeHandle_o v44; // x0
  System_Type_o *v45; // x0
  double v46; // [xsp+0h] [xbp-70h] BYREF
  float v47; // [xsp+Ch] [xbp-64h] BYREF
  uint64_t v48; // [xsp+10h] [xbp-60h] BYREF
  int64_t v49; // [xsp+18h] [xbp-58h] BYREF
  uint32_t v50; // [xsp+24h] [xbp-4Ch] BYREF
  int32_t v51; // [xsp+28h] [xbp-48h] BYREF
  uint16_t v52; // [xsp+2Ch] [xbp-44h] BYREF
  int16_t v53[2]; // [xsp+30h] [xbp-40h] BYREF
  int8_t v54[4]; // [xsp+34h] [xbp-3Ch] BYREF
  uint8_t v55[4]; // [xsp+38h] [xbp-38h] BYREF
  bool result; // [xsp+3Ch] [xbp-34h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&bool_var);
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&qword_4A1DC40);
    sub_1C2D490(&double_var);
    sub_1C2D490(&short_var);
    sub_1C2D490(&int_var);
    sub_1C2D490(&long_var);
    sub_1C2D490(&sbyte_var);
    sub_1C2D490(&float_var);
    sub_1C2D490(&System_Type_TypeInfo);
    sub_1C2D490(&ushort_var);
    sub_1C2D490(&uint_var);
    sub_1C2D490(&ulong_var);
    sub_1C2D490(&StringLiteral_25440/*"型が不正です:{0}"*/);
    sub_1C2D490(&StringLiteral_25458/*"文字列"*/);
    sub_1C2D490(&StringLiteral_273/*" isNotBoolean"*/);
    if ( !method->rgctx_data )
      sub_1C7DC00(method);
  }
  result = 0;
  v55[0] = 0;
  v54[0] = 0;
  v53[0] = 0;
  v52 = 0;
  v50 = 0;
  v51 = 0;
  v48 = 0;
  v49 = 0;
  v47 = 0.0;
  v46 = 0.0;
  if ( value )
  {
    _0_T = method->rgctx_data->_0_T;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v10.fields.value = (intptr_t)_0_T;
    TypeFromHandle = (Il2CppObject *)System_Type__GetTypeFromHandle(v10, 0);
    v12.fields.value = (intptr_t)bool_var;
    v13 = System_Type__GetTypeFromHandle(v12, 0);
    if ( System_Type__op_Equality(v13, (System_Type_o *)TypeFromHandle, 0) )
    {
      if ( !bool_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(bool_TypeInfo);
      if ( !System_Boolean__TryParse(value, &result, 0) )
      {
        v14 = System_String__Concat_63457864(value, (System_String_o *)StringLiteral_273/*" isNotBoolean"*/, 0);
LABEL_12:
        v15 = v14;
        if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
        Fgo_Assertions_Assert__GetEffectiveAssertMessage(v15, message, 0);
      }
    }
    else
    {
      v16 = qword_4A1DC40;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v17.fields.value = (intptr_t)v16;
      v18 = System_Type__GetTypeFromHandle(v17, 0);
      if ( System_Type__op_Equality(v18, (System_Type_o *)TypeFromHandle, 0) )
      {
        if ( System_Byte__TryParse(value, v55, 0) )
          return;
      }
      else
      {
        v19 = sbyte_var;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v20.fields.value = (intptr_t)v19;
        v21 = System_Type__GetTypeFromHandle(v20, 0);
        if ( System_Type__op_Equality(v21, (System_Type_o *)TypeFromHandle, 0) )
        {
          if ( System_SByte__TryParse(value, v54, 0) )
            return;
        }
        else
        {
          v22 = short_var;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v23.fields.value = (intptr_t)v22;
          v24 = System_Type__GetTypeFromHandle(v23, 0);
          if ( System_Type__op_Equality(v24, (System_Type_o *)TypeFromHandle, 0) )
          {
            if ( System_Int16__TryParse(value, v53, 0) )
              return;
          }
          else
          {
            v25 = ushort_var;
            if ( !System_Type_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
            v26.fields.value = (intptr_t)v25;
            v27 = System_Type__GetTypeFromHandle(v26, 0);
            if ( System_Type__op_Equality(v27, (System_Type_o *)TypeFromHandle, 0) )
            {
              if ( System_UInt16__TryParse(value, &v52, 0) )
                return;
            }
            else
            {
              v28 = int_var;
              if ( !System_Type_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
              v29.fields.value = (intptr_t)v28;
              v30 = System_Type__GetTypeFromHandle(v29, 0);
              if ( System_Type__op_Equality(v30, (System_Type_o *)TypeFromHandle, 0) )
              {
                if ( System_Int32__TryParse(value, &v51, 0) )
                  return;
              }
              else
              {
                v31 = uint_var;
                if ( !System_Type_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
                v32.fields.value = (intptr_t)v31;
                v33 = System_Type__GetTypeFromHandle(v32, 0);
                if ( System_Type__op_Equality(v33, (System_Type_o *)TypeFromHandle, 0) )
                {
                  if ( System_UInt32__TryParse(value, &v50, 0) )
                    return;
                }
                else
                {
                  v34 = long_var;
                  if ( !System_Type_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
                  v35.fields.value = (intptr_t)v34;
                  v36 = System_Type__GetTypeFromHandle(v35, 0);
                  if ( System_Type__op_Equality(v36, (System_Type_o *)TypeFromHandle, 0) )
                  {
                    if ( System_Int64__TryParse(value, &v49, 0) )
                      return;
                  }
                  else
                  {
                    v37 = ulong_var;
                    if ( !System_Type_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
                    v38.fields.value = (intptr_t)v37;
                    v39 = System_Type__GetTypeFromHandle(v38, 0);
                    if ( System_Type__op_Equality(v39, (System_Type_o *)TypeFromHandle, 0) )
                    {
                      if ( System_UInt64__TryParse(value, &v48, 0) )
                        return;
                    }
                    else
                    {
                      v40 = float_var;
                      if ( !System_Type_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
                      v41.fields.value = (intptr_t)v40;
                      v42 = System_Type__GetTypeFromHandle(v41, 0);
                      if ( System_Type__op_Equality(v42, (System_Type_o *)TypeFromHandle, 0) )
                      {
                        if ( System_Single__TryParse(value, &v47, 0) )
                          return;
                      }
                      else
                      {
                        v43 = double_var;
                        if ( !System_Type_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
                        v44.fields.value = (intptr_t)v43;
                        v45 = System_Type__GetTypeFromHandle(v44, 0);
                        if ( !System_Type__op_Equality(v45, (System_Type_o *)TypeFromHandle, 0) )
                        {
                          v14 = System_String__Format((System_String_o *)StringLiteral_25440/*"型が不正です:{0}"*/, TypeFromHandle, 0);
                          goto LABEL_12;
                        }
                        if ( System_Double__TryParse(value, &v46, 0) )
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
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25458/*"文字列"*/, message, 0);
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
        const MethodInfo_30ADD84 *method)
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
  __int64 v34; // x2
  const MethodInfo *v35; // x3
  __int64 v36; // x22
  const MethodInfo *v37; // x3
  int32_t v38; // w1
  const MethodInfo *v39; // x3
  __int64 *v40; // x8
  __int64 v41; // x1
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  const MethodInfo *v44; // x3
  System_String_o *v45; // x20
  __int64 v47; // [xsp+0h] [xbp-30h] BYREF
  System_String_o *monitor; // [xsp+8h] [xbp-28h]
  void **v49; // [xsp+10h] [xbp-20h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v50; // [xsp+18h] [xbp-18h] BYREF
  __int64 v51; // [xsp+20h] [xbp-10h]
  __int64 v52; // [xsp+28h] [xbp-8h]

  monitor = (System_String_o *)actual.monitor;
  v6 = equal;
  v7 = (void **)expected.monitor;
  klass = expected.klass;
  v52 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v49 = (void **)expected.monitor;
  v50 = expected.klass;
  v9 = *(__int64 **)(equal + 56LL);
  v10 = (char)actual.klass;
  if ( !v9 )
  {
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_113/*" "*/);
    sub_1C2D490(&StringLiteral_22315/*"null"*/);
    sub_1C2D490(&StringLiteral_19315/*"expectedEqual"*/);
    sub_1C2D490(&StringLiteral_19316/*"expectedNotEqual"*/);
    v9 = *(__int64 **)(v6 + 56);
    if ( !v9 )
    {
      sub_1C7DC00(v6);
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
    v14 = sub_1C7DBA4(v5);
    v9 = *(__int64 **)(v6 + 56);
    v15 = *(_DWORD *)(v14 + 252);
    v11 = *v9;
    v12 = *(_WORD *)(*v9 + 309);
  }
  v16 = (char *)&v47 - (((unsigned int)(v15 + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( (v12 & 1) != 0 )
  {
    v17 = v11;
  }
  else
  {
    v17 = sub_1C7DBA4(v5);
    v9 = *(__int64 **)(v6 + 56);
    v11 = *v9;
  }
  v18 = (char *)&v47 - (((unsigned int)(*(_DWORD *)(v17 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( *(int *)(v11 + 40) >= 0 )
    v19 = &v50;
  else
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v47 - ((v13 + 15) & 0x1FFFFFFF0LL), v19, v13);
  if ( (sub_1C2D6A0(*v9, (char *)&v47 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
  {
    v21 = *(_QWORD **)(v6 + 56);
    v22 = *v21;
    if ( (*(_BYTE *)(*v21 + 309LL) & 1) == 0 )
    {
      LODWORD(v22) = sub_1C7DBA4(v20);
      v21 = *(_QWORD **)(v6 + 56);
      klass = v50;
    }
    if ( *(int *)(*v21 + 40LL) >= 0 )
      v23 = &v50;
    else
      v23 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    sub_1C2DEF8(v22, v21[1], (int)v16, v23);
    v24 = v51;
    v7 = v49;
  }
  else
  {
    v24 = StringLiteral_22315/*"null"*/;
  }
  v25 = *(_QWORD **)(v6 + 56);
  if ( *(int *)(*v25 + 40LL) >= 0 )
    v26 = (void **)&v49;
  else
    v26 = v7;
  memcpy((char *)&v47 - ((v13 + 15) & 0x1FFFFFFF0LL), v26, v13);
  if ( (sub_1C2D6A0(*v25, (char *)&v47 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
  {
    v28 = *(_QWORD **)(v6 + 56);
    v29 = *v28;
    if ( (*(_BYTE *)(*v28 + 309LL) & 1) == 0 )
    {
      LODWORD(v29) = sub_1C7DBA4(v27);
      v28 = *(_QWORD **)(v6 + 56);
      v7 = v49;
    }
    if ( *(int *)(*v28 + 40LL) >= 0 )
      v30 = (void **)&v49;
    else
      v30 = v7;
    sub_1C2DEF8(v29, v28[1], (int)v18, v30);
    v31 = v51;
  }
  else
  {
    v31 = StringLiteral_22315/*"null"*/;
  }
  v32 = sub_1C2D538(string___TypeInfo, 5);
  if ( !v32 )
    sub_1C2D6EC(0, v33);
  v36 = v32;
  if ( !*(_DWORD *)(v32 + 24) )
    goto LABEL_43;
  *(_QWORD *)(v32 + 32) = v24;
  sub_1C2D434((CGThumbnailListItem_o *)(v32 + 32), v24, v34, v35);
  if ( *(_DWORD *)(v36 + 24) <= 1u )
    goto LABEL_43;
  v38 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v36 + 40) = StringLiteral_113/*" "*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v36 + 40), v38, v34, v37);
  v40 = (__int64 *)&StringLiteral_19316/*"expectedNotEqual"*/;
  if ( (v10 & 1) == 0 )
    v40 = (__int64 *)&StringLiteral_19315/*"expectedEqual"*/;
  if ( *(_DWORD *)(v36 + 24) <= 2u
    || (v41 = *v40,
        *(_QWORD *)(v36 + 48) = *v40,
        sub_1C2D434((CGThumbnailListItem_o *)(v36 + 48), v41, v34, v39),
        *(_DWORD *)(v36 + 24) <= 3u)
    || (v43 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v36 + 56) = StringLiteral_113/*" "*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v36 + 56), v43, v34, v42),
        *(_DWORD *)(v36 + 24) <= 4u) )
  {
LABEL_43:
    sub_1C2D6F4(v32, v33, v34);
  }
  *(_QWORD *)(v36 + 64) = v31;
  sub_1C2D434((CGThumbnailListItem_o *)(v36 + 64), v31, v34, v44);
  v45 = System_String__Concat_63498380((System_String_array *)v36, 0);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v45, monitor, 0);
}


System_String_o *Fgo_Assertions_Assert__GetComparisonAssertMessage_float_(
        float expected,
        float actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_30ADBB8 *method)
{
  System_String_o *v8; // x23
  float v9; // s0
  System_String_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  __int64 v15; // x22
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  const MethodInfo *v18; // x3
  __int64 *v19; // x8
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  const MethodInfo *v23; // x3
  System_String_o *v24; // x20
  float v26; // [xsp+8h] [xbp-38h] BYREF
  float v27; // [xsp+Ch] [xbp-34h] BYREF

  v26 = actual;
  v27 = expected;
  if ( !method->rgctx_data )
  {
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_113/*" "*/);
    sub_1C2D490(&StringLiteral_19315/*"expectedEqual"*/);
    sub_1C2D490(&StringLiteral_19316/*"expectedNotEqual"*/);
    if ( !method->rgctx_data )
      sub_1C7DC00(method);
  }
  v8 = System_Single__ToString(expected, (const MethodInfo *)&v27);
  v10 = System_Single__ToString(v9, (const MethodInfo *)&v26);
  v11 = sub_1C2D538(string___TypeInfo, 5);
  if ( !v11 )
    sub_1C2D6EC(0, v12);
  v15 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v11 + 32) = v8;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 32), (int32_t)v8, v13, v14);
  if ( *(_DWORD *)(v15 + 24) <= 1u )
    goto LABEL_15;
  v17 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v15 + 40) = StringLiteral_113/*" "*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v15 + 40), v17, v13, v16);
  v19 = (__int64 *)&StringLiteral_19316/*"expectedNotEqual"*/;
  if ( !equal )
    v19 = (__int64 *)&StringLiteral_19315/*"expectedEqual"*/;
  if ( *(_DWORD *)(v15 + 24) <= 2u
    || (v20 = *v19,
        *(_QWORD *)(v15 + 48) = *v19,
        sub_1C2D434((CGThumbnailListItem_o *)(v15 + 48), v20, v13, v18),
        *(_DWORD *)(v15 + 24) <= 3u)
    || (v22 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v15 + 56) = StringLiteral_113/*" "*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v15 + 56), v22, v13, v21),
        *(_DWORD *)(v15 + 24) <= 4u) )
  {
LABEL_15:
    sub_1C2D6F4(v11, v12, v13);
  }
  *(_QWORD *)(v15 + 64) = v10;
  sub_1C2D434((CGThumbnailListItem_o *)(v15 + 64), (int32_t)v10, v13, v23);
  v24 = System_String__Concat_63498380((System_String_array *)v15, 0);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v24, message, 0);
}


System_String_o *Fgo_Assertions_Assert__GetComparisonAssertMessage_int_(
        int32_t expected,
        int32_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_30AD61C *method)
{
  const MethodInfo_30AD61C_RGCTXs *rgctx_data; // x8
  System_String_o *v9; // x23
  System_String_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  __int64 v15; // x22
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  const MethodInfo *v18; // x3
  __int64 *v19; // x8
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  const MethodInfo *v23; // x3
  System_String_o *v24; // x20
  int32_t v26; // [xsp+8h] [xbp-38h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-34h] BYREF

  v26 = actual;
  v27 = expected;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_113/*" "*/);
    sub_1C2D490(&StringLiteral_19315/*"expectedEqual"*/);
    sub_1C2D490(&StringLiteral_19316/*"expectedNotEqual"*/);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C7DC00(method);
      rgctx_data = method->rgctx_data;
    }
  }
  v9 = System_Int32__ToString((int32_t)&v27, (const MethodInfo *)rgctx_data[1]._0_T);
  v10 = System_Int32__ToString((int32_t)&v26, (const MethodInfo *)method->rgctx_data[1]._0_T);
  v11 = sub_1C2D538(string___TypeInfo, 5);
  if ( !v11 )
    sub_1C2D6EC(0, v12);
  v15 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v11 + 32) = v9;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 32), (int32_t)v9, v13, v14);
  if ( *(_DWORD *)(v15 + 24) <= 1u )
    goto LABEL_15;
  v17 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v15 + 40) = StringLiteral_113/*" "*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v15 + 40), v17, v13, v16);
  v19 = (__int64 *)&StringLiteral_19316/*"expectedNotEqual"*/;
  if ( !equal )
    v19 = (__int64 *)&StringLiteral_19315/*"expectedEqual"*/;
  if ( *(_DWORD *)(v15 + 24) <= 2u
    || (v20 = *v19,
        *(_QWORD *)(v15 + 48) = *v19,
        sub_1C2D434((CGThumbnailListItem_o *)(v15 + 48), v20, v13, v18),
        *(_DWORD *)(v15 + 24) <= 3u)
    || (v22 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v15 + 56) = StringLiteral_113/*" "*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v15 + 56), v22, v13, v21),
        *(_DWORD *)(v15 + 24) <= 4u) )
  {
LABEL_15:
    sub_1C2D6F4(v11, v12, v13);
  }
  *(_QWORD *)(v15 + 64) = v10;
  sub_1C2D434((CGThumbnailListItem_o *)(v15 + 64), (int32_t)v10, v13, v23);
  v24 = System_String__Concat_63498380((System_String_array *)v15, 0);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v24, message, 0);
}


System_String_o *Fgo_Assertions_Assert__GetComparisonAssertMessage_long_(
        int64_t expected,
        int64_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_30AD7E8 *method)
{
  const MethodInfo_30AD7E8_RGCTXs *rgctx_data; // x8
  System_String_o *v9; // x23
  System_String_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  __int64 v15; // x22
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  const MethodInfo *v18; // x3
  __int64 *v19; // x8
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  const MethodInfo *v23; // x3
  System_String_o *v24; // x20
  int64_t v26; // [xsp+8h] [xbp-48h] BYREF
  int64_t v27; // [xsp+18h] [xbp-38h] BYREF

  v27 = expected;
  v26 = actual;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_113/*" "*/);
    sub_1C2D490(&StringLiteral_19315/*"expectedEqual"*/);
    sub_1C2D490(&StringLiteral_19316/*"expectedNotEqual"*/);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C7DC00(method);
      rgctx_data = method->rgctx_data;
    }
  }
  v9 = System_Int64__ToString((int64_t)&v27, (const MethodInfo *)rgctx_data[1]._0_T);
  v10 = System_Int64__ToString((int64_t)&v26, (const MethodInfo *)method->rgctx_data[1]._0_T);
  v11 = sub_1C2D538(string___TypeInfo, 5);
  if ( !v11 )
    sub_1C2D6EC(0, v12);
  v15 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v11 + 32) = v9;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 32), (int32_t)v9, v13, v14);
  if ( *(_DWORD *)(v15 + 24) <= 1u )
    goto LABEL_15;
  v17 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v15 + 40) = StringLiteral_113/*" "*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v15 + 40), v17, v13, v16);
  v19 = (__int64 *)&StringLiteral_19316/*"expectedNotEqual"*/;
  if ( !equal )
    v19 = (__int64 *)&StringLiteral_19315/*"expectedEqual"*/;
  if ( *(_DWORD *)(v15 + 24) <= 2u
    || (v20 = *v19,
        *(_QWORD *)(v15 + 48) = *v19,
        sub_1C2D434((CGThumbnailListItem_o *)(v15 + 48), v20, v13, v18),
        *(_DWORD *)(v15 + 24) <= 3u)
    || (v22 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v15 + 56) = StringLiteral_113/*" "*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v15 + 56), v22, v13, v21),
        *(_DWORD *)(v15 + 24) <= 4u) )
  {
LABEL_15:
    sub_1C2D6F4(v11, v12, v13);
  }
  *(_QWORD *)(v15 + 64) = v10;
  sub_1C2D434((CGThumbnailListItem_o *)(v15 + 64), (int32_t)v10, v13, v23);
  v24 = System_String__Concat_63498380((System_String_array *)v15, 0);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v24, message, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *Fgo_Assertions_Assert__GetComparisonAssertMessage_object_(
        Il2CppObject *expected,
        Il2CppObject *actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_30AD9BC *method)
{
  __int64 v9; // x23
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  __int64 v15; // x22
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  const MethodInfo *v18; // x3
  __int64 *v19; // x8
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  const MethodInfo *v23; // x3
  System_String_o *v24; // x20

  if ( (byte_4C2C93C & 1) == 0 )
  {
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_113/*" "*/);
    sub_1C2D490(&StringLiteral_22315/*"null"*/);
    sub_1C2D490(&StringLiteral_19315/*"expectedEqual"*/);
    sub_1C2D490(&StringLiteral_19316/*"expectedNotEqual"*/);
    byte_4C2C93C = 1;
  }
  if ( expected )
    v9 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, bool, System_String_o *, const MethodInfo_30AD9BC *))expected->klass->vtable[3].methodPtr)(
           expected,
           expected->klass->vtable[3].method,
           equal,
           message,
           method);
  else
    v9 = StringLiteral_22315/*"null"*/;
  if ( actual )
    v10 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))actual->klass->vtable[3].methodPtr)(
            actual,
            actual->klass->vtable[3].method);
  else
    v10 = StringLiteral_22315/*"null"*/;
  v11 = sub_1C2D538(string___TypeInfo, 5);
  if ( !v11 )
    sub_1C2D6EC(0, v12);
  v15 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_21;
  *(_QWORD *)(v11 + 32) = v9;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 32), v9, v13, v14);
  if ( *(_DWORD *)(v15 + 24) <= 1u )
    goto LABEL_21;
  v17 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v15 + 40) = StringLiteral_113/*" "*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v15 + 40), v17, v13, v16);
  v19 = (__int64 *)(equal ? &StringLiteral_19316/*"expectedNotEqual"*/ : &StringLiteral_19315/*"expectedEqual"*/);
  if ( *(_DWORD *)(v15 + 24) <= 2u
    || (v20 = *v19,
        *(_QWORD *)(v15 + 48) = *v19,
        sub_1C2D434((CGThumbnailListItem_o *)(v15 + 48), v20, v13, v18),
        *(_DWORD *)(v15 + 24) <= 3u)
    || (v22 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v15 + 56) = StringLiteral_113/*" "*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v15 + 56), v22, v13, v21),
        *(_DWORD *)(v15 + 24) <= 4u) )
  {
LABEL_21:
    sub_1C2D6F4(v11, v12, v13);
  }
  *(_QWORD *)(v15 + 64) = v10;
  sub_1C2D434((CGThumbnailListItem_o *)(v15 + 64), v10, v13, v23);
  v24 = System_String__Concat_63498380((System_String_array *)v15, 0);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v24, message, 0);
}


System_String_o *Fgo_Assertions_Assert__GetEffectiveAssertMessage(
        System_String_o *defaultMessage,
        System_String_o *message,
        const MethodInfo *method)
{
  if ( (byte_4C2B866 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_56/*"\n("*/);
    sub_1C2D490(&StringLiteral_759/*")"*/);
    byte_4C2B866 = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0) )
    return defaultMessage;
  else
    return System_String__Concat_63498116(
             message,
             (System_String_o *)StringLiteral_56/*"\n("*/,
             defaultMessage,
             (System_String_o *)StringLiteral_759/*")"*/,
             0);
}


System_String_o *Fgo_Assertions_Assert__GetNullAssertMessage(
        System_String_o *modelName,
        System_String_o *message,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_String_o *v6; // x20

  if ( (byte_4C2B872 & 1) == 0 )
  {
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&StringLiteral_25364/*"が null です"*/);
    byte_4C2B872 = 1;
  }
  v6 = System_String__Concat_63457864(modelName, (System_String_o *)StringLiteral_25364/*"が null です"*/, 0);
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

  if ( (byte_4C2B874 & 1) == 0 )
  {
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&StringLiteral_274/*" isNotNumbers"*/);
    byte_4C2B874 = 1;
  }
  v6 = System_String__Concat_63457864(value, (System_String_o *)StringLiteral_274/*" isNotNumbers"*/, 0);
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
        const MethodInfo_30AE118 *method)
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
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&StringLiteral_25400/*"ディクショナリ"*/);
    sub_1C2D490(&StringLiteral_777/*") の値がディクショナリに含まれていません"*/);
    sub_1C2D490(&StringLiteral_21101/*"key("*/);
    sub_1C2D490(&StringLiteral_25384/*"キー"*/);
    v11 = *(_QWORD *)(v8 + 56);
    if ( !v11 )
    {
      sub_1C7DC00(v8);
      v11 = *(_QWORD *)(v8 + 56);
    }
  }
  v13 = *(_QWORD *)(v11 + 8);
  v14 = *(unsigned int *)(v13 + 252);
  v15 = *(_DWORD *)(v13 + 252);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v15 = *(_DWORD *)(sub_1C7DBA4(v7) + 252);
  v16 = (char *)&v31 - (((unsigned int)(v15 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v17 = (System_String_o *)((char *)&v31 - ((v14 + 15) & 0x1FFFFFFF0LL));
  if ( !dic )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v28 = &StringLiteral_25400/*"ディクショナリ"*/;
    goto LABEL_25;
  }
  v18 = *(_QWORD *)(v8 + 56);
  if ( *(int *)(*(_QWORD *)(v18 + 8) + 40LL) >= 0 )
    v19 = &v31;
  else
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v31 - ((v14 + 15) & 0x1FFFFFFF0LL), v19, v14);
  if ( (sub_1C2D6A0(*(_QWORD *)(v18 + 8), (char *)&v31 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) == 0 )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v28 = &StringLiteral_25384/*"キー"*/;
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
      LODWORD(v27) = sub_1C7DBA4(v24);
      v25 = *(_QWORD *)(v8 + 56);
      klass = v31;
      v26 = *(_QWORD *)(v25 + 8);
    }
    if ( *(int *)(v26 + 40) >= 0 )
      v29 = &v31;
    else
      v29 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    sub_1C2DEF8(v27, *(_QWORD *)(v25 + 24), (int)v16, v29);
    v30 = System_String__Concat_63496112(
            (System_String_o *)StringLiteral_21101/*"key("*/,
            v32,
            (System_String_o *)StringLiteral_777/*") の値がディクショナリに含まれていません"*/,
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
  __int64 v11; // x2
  __int64 v12; // x8
  unsigned __int64 v13; // x26
  System_Reflection_MemberInfo_o *v14; // x23
  Il2CppType *v15; // x24
  System_RuntimeTypeHandle_o v16; // x0
  System_Type_o *TypeFromHandle; // x0
  Il2CppType *v18; // x24
  System_RuntimeTypeHandle_o v19; // x0
  System_Type_o *v20; // x0
  Il2CppType *v21; // x24
  System_RuntimeTypeHandle_o v22; // x0
  UnityEngine_Component_o *v23; // x24
  const MethodInfo *v24; // x3
  Il2CppType *v25; // x24
  System_RuntimeTypeHandle_o v26; // x0
  System_Type_o *v27; // x24
  Il2CppType *v28; // x24
  System_RuntimeTypeHandle_o v29; // x0
  System_Type_o *v30; // x24
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  Fgo_Assertions_Assert_c *v35; // x0
  System_Collections_Generic_Dictionary_object__object__o *cachedFieldInfo; // x22
  Fgo_Assertions_Assert_c *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x20
  Fgo_Assertions_Assert___c_c *v41; // x8
  System_Func_T1__T2__TResult__o *_9__42_0; // x21
  Il2CppObject *v43; // x22
  struct Fgo_Assertions_Assert___c_StaticFields *static_fields; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v47; // x0
  __int64 v48; // x1
  System_Collections_Generic_IEnumerable_TResult__o *v49; // x20
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  __int64 v51; // x9
  int32_t *p_offset; // x10
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x20
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+20h] [xbp-80h] BYREF

  v4 = (Il2CppObject *)component;
  if ( (byte_4C2B877 & 1) == 0 )
  {
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___set_Item__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_Object____f__AnonymousType0_Object__int____);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FieldInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FieldInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FieldInfo__get_Current__);
    sub_1C2D490(&System_Func_Object__int____f__AnonymousType0_Object__int___TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_Object__var);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_Object__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator___f__AnonymousType0_Object__int___TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_FieldInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FieldInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FieldInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_FieldInfo__TypeInfo);
    sub_1C2D490(&Fgo_Assertions_Assert_NullableAttribute_var);
    sub_1C2D490(&UnityEngine_Object___var);
    sub_1C2D490(&UnityEngine_Object_var);
    sub_1C2D490(&UnityEngine_SerializeField_var);
    sub_1C2D490(&System_Type_TypeInfo);
    sub_1C2D490(&Method_Fgo_Assertions_Assert___c__IsAllSerializeFieldsNotNull_b__42_0__);
    component = (UnityEngine_Component_o *)sub_1C2D490(&Fgo_Assertions_Assert___c_TypeInfo);
    byte_4C2B877 = 1;
  }
  memset(&v69, 0, sizeof(v69));
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
                                           (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___ContainsKey__);
  if ( ((unsigned __int8)component & 1) != 0 )
    goto LABEL_45;
  if ( !v7 )
    goto LABEL_92;
  v8 = checkInheritance ? 60LL : 62LL;
  v9 = ((__int64 (__fastcall *)(Il2CppObject *, __int64, const MethodInfo *))v7->klass->vtable[88].methodPtr)(
         v7,
         v8,
         v7->klass->vtable[88].method);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_FieldInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_FieldInfo___ctor__);
  if ( !v9 )
    goto LABEL_92;
  v12 = *(_QWORD *)(v9 + 24);
  if ( (int)v12 >= 1 )
  {
    v13 = 0;
    do
    {
      if ( v13 >= (unsigned int)v12 )
        sub_1C2D6F4(component, checkInheritance, v11);
      v14 = *(System_Reflection_MemberInfo_o **)(v9 + 32 + 8 * v13);
      v15 = UnityEngine_SerializeField_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v16.fields.value = (intptr_t)v15;
      TypeFromHandle = System_Type__GetTypeFromHandle(v16, 0);
      component = (UnityEngine_Component_o *)System_Reflection_CustomAttributeExtensions__IsDefined(
                                               v14,
                                               TypeFromHandle,
                                               0);
      if ( ((unsigned __int8)component & 1) != 0 )
      {
        v18 = Fgo_Assertions_Assert_NullableAttribute_var;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v19.fields.value = (intptr_t)v18;
        v20 = System_Type__GetTypeFromHandle(v19, 0);
        component = (UnityEngine_Component_o *)System_Reflection_CustomAttributeExtensions__IsDefined(v14, v20, 0);
        if ( ((unsigned __int8)component & 1) == 0 )
        {
          v21 = UnityEngine_Object_var;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v22.fields.value = (intptr_t)v21;
          component = (UnityEngine_Component_o *)System_Type__GetTypeFromHandle(v22, 0);
          if ( !v14 )
            goto LABEL_92;
          v23 = component;
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, const char *))v14->klass[1]._1.name)(
                                                   v14,
                                                   v14->klass[1]._1.namespaze);
          if ( !v23 )
            goto LABEL_92;
          component = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, UnityEngine_Component_o *, _QWORD))&v23->klass[1]._2.field_count)(
                                                   v23,
                                                   component,
                                                   *(_QWORD *)&v23->klass[1]._2.interfaces_count);
          if ( ((unsigned __int8)component & 1) != 0 )
            goto LABEL_96;
          v25 = UnityEngine_Object___var;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v26.fields.value = (intptr_t)v25;
          v27 = System_Type__GetTypeFromHandle(v26, 0);
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, const char *))v14->klass[1]._1.name)(
                                                   v14,
                                                   v14->klass[1]._1.namespaze);
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
          v29.fields.value = (intptr_t)v28;
          v30 = System_Type__GetTypeFromHandle(v29, 0);
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, const char *))v14->klass[1]._1.name)(
                                                   v14,
                                                   v14->klass[1]._1.namespaze);
          if ( !v30 )
            goto LABEL_92;
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Type_o *, UnityEngine_Component_o *, const MethodInfo *))v30->klass->vtable._22_IsAssignableFrom.methodPtr)(
                                                   v30,
                                                   component,
                                                   v30->klass->vtable._22_IsAssignableFrom.method);
          if ( ((unsigned __int8)component & 1) != 0 )
          {
LABEL_96:
            if ( !v10 )
              goto LABEL_92;
            items = v10->fields._items;
            v32 = Method_System_Collections_Generic_List_FieldInfo__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_92;
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)v14,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v34 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v34[4] = (Il2CppClass *)v14;
              sub_1C2D434((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v14, v11, v24);
            }
          }
        }
      }
      LODWORD(v12) = *(_DWORD *)(v9 + 24);
    }
    while ( (__int64)++v13 < (int)v12 );
  }
  v35 = Fgo_Assertions_Assert_TypeInfo;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v35 = Fgo_Assertions_Assert_TypeInfo;
  }
  cachedFieldInfo = (System_Collections_Generic_Dictionary_object__object__o *)v35->static_fields->cachedFieldInfo;
  component = (UnityEngine_Component_o *)System_Object__GetType(v4, 0);
  if ( !cachedFieldInfo )
LABEL_92:
    sub_1C2D6EC(component, checkInheritance);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    cachedFieldInfo,
    (Il2CppObject *)component,
    (Il2CppObject *)v10,
    (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___set_Item__);
LABEL_45:
  v37 = Fgo_Assertions_Assert_TypeInfo;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v37 = Fgo_Assertions_Assert_TypeInfo;
  }
  component = (UnityEngine_Component_o *)v37->static_fields->cachedFieldInfo;
  if ( !component )
    goto LABEL_92;
  component = (UnityEngine_Component_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                           (System_Collections_Generic_Dictionary_object__object__o *)component,
                                           v7,
                                           (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___get_Item__);
  if ( !component )
    goto LABEL_92;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v68,
    (System_Collections_Generic_List_object__o *)component,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_FieldInfo__GetEnumerator__);
  v69 = v68;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v69,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_FieldInfo__MoveNext__) )
  {
    if ( !v69.fields._current )
      sub_1C2D6EC(0, v38);
    v39 = ((__int64 (*)(void))v69.fields._current->klass->vtable[25].methodPtr)();
    v40 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C2D5CC(
                                                                 v39,
                                                                 System_Collections_Generic_IEnumerable_Object__TypeInfo);
    if ( v40 )
    {
      v41 = Fgo_Assertions_Assert___c_TypeInfo;
      if ( !Fgo_Assertions_Assert___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert___c_TypeInfo);
        v41 = Fgo_Assertions_Assert___c_TypeInfo;
      }
      _9__42_0 = (System_Func_T1__T2__TResult__o *)v41->static_fields->__9__42_0;
      if ( !_9__42_0 )
      {
        if ( !v41->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v41);
          v41 = Fgo_Assertions_Assert___c_TypeInfo;
        }
        v43 = (Il2CppObject *)v41->static_fields->__9;
        _9__42_0 = (System_Func_T1__T2__TResult__o *)sub_1C2D6DC(System_Func_Object__int____f__AnonymousType0_Object__int___TypeInfo);
        System_Func_object__int__object____ctor(
          _9__42_0,
          v43,
          Method_Fgo_Assertions_Assert___c__IsAllSerializeFieldsNotNull_b__42_0__,
          0);
        static_fields = Fgo_Assertions_Assert___c_TypeInfo->static_fields;
        static_fields->__9__42_0 = (struct System_Func_Object__int____f__AnonymousType0_Object__int___o *)_9__42_0;
        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__42_0, (int32_t)_9__42_0, v45, v46);
      }
      v47 = System_Linq_Enumerable__Select_object__object__51401488(
              v40,
              (System_Func_TSource__int__TResult__o *)_9__42_0,
              (const MethodInfo_3105310 *)Method_System_Linq_Enumerable_Select_Object____f__AnonymousType0_Object__int____);
      v49 = v47;
      if ( !v47 )
        sub_1C2D6EC(0, v48);
      klass = v47->klass;
      v51 = *(unsigned __int16 *)&v47->klass->_2.rank;
      if ( *(_WORD *)&v47->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___c **)p_offset - 1) != System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___TypeInfo )
        {
          --v51;
          p_offset += 4;
          if ( !v51 )
            goto LABEL_64;
        }
        v53 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_64:
        v53 = sub_1C7DCA8(v47, System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___TypeInfo, 0);
      }
      v55 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v53)(
              v49,
              *(_QWORD *)(v53 + 8));
      if ( !v55 )
        sub_1C2D6EC(0, v54);
      while ( 1 )
      {
        v56 = *(_QWORD *)v55;
        v57 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
        {
          v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v58 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v57;
            v58 += 4;
            if ( !v57 )
              goto LABEL_71;
          }
          v59 = v56 + 16LL * *v58 + 312;
        }
        else
        {
LABEL_71:
          v59 = sub_1C7DCA8(v55, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v55, *(_QWORD *)(v59 + 8)) & 1) == 0 )
          break;
        v60 = *(_QWORD *)v55;
        v61 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
        {
          v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator___f__AnonymousType0_Object__int___c **)v62 - 1) != System_Collections_Generic_IEnumerator___f__AnonymousType0_Object__int___TypeInfo )
          {
            --v61;
            v62 += 4;
            if ( !v61 )
              goto LABEL_78;
          }
          v63 = v60 + 16LL * *v62 + 312;
        }
        else
        {
LABEL_78:
          v63 = sub_1C7DCA8(v55, System_Collections_Generic_IEnumerator___f__AnonymousType0_Object__int___TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v63)(v55, *(_QWORD *)(v63 + 8));
      }
      v64 = *(_QWORD *)v55;
      v65 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
      {
        v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
        {
          --v65;
          v66 += 4;
          if ( !v65 )
            goto LABEL_85;
        }
        v67 = v64 + 16LL * *v66 + 312;
      }
      else
      {
LABEL_85:
        v67 = sub_1C7DCA8(v55, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v67)(v55, *(_QWORD *)(v67 + 8));
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v69,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_FieldInfo__Dispose__);
}


void Fgo_Assertions_Assert__IsAssetDataNotNull(
        Il2CppObject *assetData,
        System_String_o *assetName,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4C2B870 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15890/*"[AssetData]\n{0}をロードできませんでした"*/);
    byte_4C2B870 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_15890/*"[AssetData]\n{0}をロードできませんでした"*/, (Il2CppObject *)assetName, 0);
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

  if ( (byte_4C2B873 & 1) == 0 )
  {
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_20748/*"index({0}) の値が負です"*/);
    sub_1C2D490(&StringLiteral_20749/*"index({0}) の値が配列の要素数({1})を超えています"*/);
    byte_4C2B873 = 1;
  }
  if ( index < 0 )
  {
    v21 = index;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, message, gameObject, filePath);
    v15 = System_String__Format((System_String_o *)StringLiteral_20748/*"index({0}) の値が負です"*/, v17, 0);
  }
  else
  {
    if ( count > index )
      return;
    v20 = index;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, message, gameObject, filePath);
    v19 = count;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v11, v12, v13);
    v15 = System_String__Format_63499156((System_String_o *)StringLiteral_20749/*"index({0}) の値が配列の要素数({1})を超えています"*/, v10, v14, 0);
  }
  v18 = v15;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  Fgo_Assertions_Assert__GetEffectiveAssertMessage(v18, message, v16);
}


void Fgo_Assertions_Assert__IsInRange___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_30AE438 *method)
{
  if ( (byte_4C2C93E & 1) == 0 )
  {
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&StringLiteral_25488/*"配列"*/);
    byte_4C2C93E = 1;
  }
  if ( !array )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25488/*"配列"*/, message, 0);
  }
}


void Fgo_Assertions_Assert__IsInRange___Il2CppFullySharedGenericType__51045300(
        System_Collections_Generic_List_T__o *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_30AE3B4 *method)
{
  if ( (byte_4C2C93D & 1) == 0 )
  {
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&StringLiteral_25414/*"リスト"*/);
    byte_4C2C93D = 1;
  }
  if ( !array )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25414/*"リスト"*/, message, 0);
  }
}


void Fgo_Assertions_Assert__IsNotNull_object_(
        Il2CppObject *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_30AE4BC *method)
{
  Il2CppClass *klass; // x8
  UnityEngine_Object_c *v8; // x0
  unsigned int naturalAligment; // w10
  __int64 v10; // x9
  Il2CppObject *v11; // x0

  if ( (byte_4C2C93F & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2C93F = 1;
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
  if ( (byte_4C2B876 & 1) == 0 )
  {
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&StringLiteral_25371/*"アクション"*/);
    byte_4C2B876 = 1;
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
      (System_String_o *)StringLiteral_25371/*"アクション"*/,
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
        const MethodInfo_30AE580 *method)
{
  Il2CppClass *klass; // x8
  UnityEngine_Object_c *v8; // x0
  unsigned int naturalAligment; // w10
  __int64 v10; // x9
  Il2CppObject *v11; // x0

  if ( (byte_4C2C940 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2C940 = 1;
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
        const MethodInfo_30AE644 *method)
{
  if ( (byte_4C2C941 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15937/*"[SerializeField]\n{0}の参照が切れています"*/);
    byte_4C2C941 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_15937/*"[SerializeField]\n{0}の参照が切れています"*/, (Il2CppObject *)fieldName, 0);
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

  if ( (byte_4C2B86F & 1) == 0 )
  {
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Contains__);
    byte_4C2B86F = 1;
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
             (const MethodInfo_363CFF8 *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Contains__) )
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
          (const MethodInfo_363DB08 *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Add__);
        return;
      }
    }
    sub_1C2D6EC(suppressAsserts, condition);
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

  if ( (byte_4C2B862 & 1) == 0 )
  {
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&StringLiteral_25080/*"{0}\n(expected={1}, actual={2})"*/);
    byte_4C2B862 = 1;
  }
  v7 = System_String__Format_63499224(
         (System_String_o *)StringLiteral_25080/*"{0}\n(expected={1}, actual={2})"*/,
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
          sub_1C2D6EC(v12, v13);
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
  if ( (byte_4C2B871 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15914/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/);
    byte_4C2B871 = 1;
  }
  System_String__Format_63499156((System_String_o *)StringLiteral_15914/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/, (Il2CppObject *)name, (Il2CppObject *)key, 0);
}


void Fgo_Assertions_Assert__OnFailed_48928504(
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
  if ( (byte_4C2B863 & 1) == 0 )
  {
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&System_IO_Path_TypeInfo);
    sub_1C2D490(&StringLiteral_25118/*"{0}({1})"*/);
    sub_1C2D490(&StringLiteral_61/*"\nGameObject:"*/);
    caption = (System_String_o *)sub_1C2D490(&StringLiteral_25081/*"{0}\n{1}\n{2}"*/);
    byte_4C2B863 = 1;
  }
  if ( !filePath )
    goto LABEL_27;
  v11 = System_String__Replace(filePath, 0x5Cu, 0x2Fu, 0);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = (Il2CppObject *)System_IO_Path__GetFileName(v11, 0);
  v25 = line;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v13, v14, v15);
  v17 = (Il2CppObject *)System_String__Format_63499156((System_String_o *)StringLiteral_25118/*"{0}({1})"*/, FileName, v16, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  caption = (System_String_o *)UnityEngine_Object__op_Inequality(0, (UnityEngine_Object_o *)gameObject, 0);
  if ( ((unsigned __int8)caption & 1) != 0 )
  {
    if ( !gameObject )
      goto LABEL_27;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
    v9 = System_String__Concat_63496112(v9, (System_String_o *)StringLiteral_61/*"\nGameObject:"*/, name, 0);
  }
  v19 = System_String__Format_63499224((System_String_o *)StringLiteral_25081/*"{0}\n{1}\n{2}"*/, v10, (Il2CppObject *)v9, v17, 0);
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
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))onFailedAction->fields.invoke_impl)(
        onFailedAction->fields.method_code,
        v21,
        onFailedAction->fields.method);
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
            (onFailedSendReport = Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedSendReport) != 0) )
      {
        ((void (__fastcall *)(intptr_t, Il2CppObject *, System_String_o *, Il2CppObject *, intptr_t))onFailedSendReport->fields.invoke_impl)(
          onFailedSendReport->fields.method_code,
          v10,
          v21,
          v17,
          onFailedSendReport->fields.method);
        return;
      }
LABEL_27:
      sub_1C2D6EC(caption, message);
    }
  }
}


void Fgo_Assertions_Assert__SetOnFailedAction(System_Action_string__o *action, bool force, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Fgo_Assertions_Assert_c *v6; // x0
  Fgo_Assertions_Assert_c *v7; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_4C2B864 & 1) == 0 )
  {
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&UnityEngine_Debug_TypeInfo);
    sub_1C2D490(&StringLiteral_25459/*"既に表明違反時の処理が設定されています"*/);
    byte_4C2B864 = 1;
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
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_25459/*"既に表明違反時の処理が設定されています"*/, 0);
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
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->onFailedAction, (int32_t)action, (int32_t)method, v3);
}


void Fgo_Assertions_Assert__SetOnFailedSendReport(
        System_Action_string__string__string__o *action,
        bool force,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Fgo_Assertions_Assert_c *v6; // x0
  Fgo_Assertions_Assert_c *v7; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_4C2B865 & 1) == 0 )
  {
    sub_1C2D490(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C2D490(&UnityEngine_Debug_TypeInfo);
    sub_1C2D490(&StringLiteral_25459/*"既に表明違反時の処理が設定されています"*/);
    byte_4C2B865 = 1;
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
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_25459/*"既に表明違反時の処理が設定されています"*/, 0);
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
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->onFailedSendReport, (int32_t)action, (int32_t)method, v3);
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
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.format = aFormat;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)aFormat, v7, v8);
  this->fields.args = aArgs;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.args, (int32_t)aArgs, v9, v10);
}


void Fgo_Assertions_Assert___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2B879 & 1) == 0 )
  {
    sub_1C2D490(&Fgo_Assertions_Assert___c_TypeInfo);
    byte_4C2B879 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(Fgo_Assertions_Assert___c_TypeInfo);
  System_Object___ctor(v1, 0);
  Fgo_Assertions_Assert___c_TypeInfo->static_fields->__9 = (struct Fgo_Assertions_Assert___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)Fgo_Assertions_Assert___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C2B87A & 1) == 0 )
  {
    sub_1C2D490(&Method___f__AnonymousType0_Object__int___ctor__);
    sub_1C2D490(&_f__AnonymousType0_Object__int__TypeInfo);
    byte_4C2B87A = 1;
  }
  v6 = (__f__AnonymousType0__obj_j__TPar___index_j__TPar__o *)sub_1C2D6DC(_f__AnonymousType0_Object__int__TypeInfo);
  _f__AnonymousType0_object__int____ctor(
    v6,
    (Il2CppObject *)obj,
    index,
    (const MethodInfo_32A9890 *)Method___f__AnonymousType0_Object__int___ctor__);
  return (__f__AnonymousType0_Object__int__o *)v6;
}


void Fgo_Assertions_AssertQueue___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C2B880 & 1) == 0 )
  {
    sub_1C2D490(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Queue_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_Queue_string__TypeInfo);
    byte_4C2B880 = 1;
  }
  v1 = (System_Collections_Generic_Queue_T__o *)sub_1C2D6DC(System_Collections_Generic_Queue_string__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v1,
    (const MethodInfo_39307A0 *)Method_System_Collections_Generic_Queue_string___ctor__);
  Fgo_Assertions_AssertQueue_TypeInfo->static_fields->queue = (struct System_Collections_Generic_Queue_string__o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)Fgo_Assertions_AssertQueue_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  static_fields = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
  static_fields->onFailedAction = 0;
  static_fields = (struct Fgo_Assertions_AssertQueue_StaticFields *)((char *)static_fields + 16);
  LOBYTE(static_fields[-1].onFailedAction) = 1;
  sub_1C2D434((CGThumbnailListItem_o *)static_fields, 0, v5, v6);
}


void Fgo_Assertions_AssertQueue__Clear(const MethodInfo *method)
{
  __int64 v1; // x1
  Fgo_Assertions_AssertQueue_c *v2; // x0
  System_Collections_Generic_Queue_T__o *queue; // x0

  if ( (byte_4C2B87F & 1) == 0 )
  {
    sub_1C2D490(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Queue_string__Clear__);
    byte_4C2B87F = 1;
  }
  v2 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v2 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  queue = (System_Collections_Generic_Queue_T__o *)v2->static_fields->queue;
  if ( !queue )
    sub_1C2D6EC(0, v1);
  System_Collections_Generic_Queue_object___Clear(
    queue,
    (const MethodInfo_3930A28 *)Method_System_Collections_Generic_Queue_string__Clear__);
}


void Fgo_Assertions_AssertQueue__Dequeue(const MethodInfo *method)
{
  __int64 v1; // x1
  System_Collections_Generic_Queue_T__o *queue; // x0
  struct Fgo_Assertions_AssertQueue_StaticFields *syncRoot; // x8
  int32_t size; // w20
  Il2CppObject *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C2B87E & 1) == 0 )
  {
    sub_1C2D490(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Queue_string__Dequeue__);
    sub_1C2D490(&Method_System_Collections_Generic_Queue_string__get_Count__);
    byte_4C2B87E = 1;
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
               (const MethodInfo_3930EF8 *)Method_System_Collections_Generic_Queue_string__Dequeue__);
        Fgo_Assertions_AssertQueue__OnFailed((System_String_o *)v5, v6);
        return;
      }
LABEL_12:
      sub_1C2D6EC(queue, v1);
    }
  }
  syncRoot->isReady = 1;
}


void Fgo_Assertions_AssertQueue__Enqueue(System_String_o *message, const MethodInfo *method)
{
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x8
  _BOOL4 isReady; // w21

  if ( (byte_4C2B87D & 1) == 0 )
  {
    sub_1C2D490(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Queue_string__Enqueue__);
    byte_4C2B87D = 1;
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
    sub_1C2D6EC(0, method);
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)static_fields->queue,
    (Il2CppObject *)message,
    (const MethodInfo_3930D68 *)Method_System_Collections_Generic_Queue_string__Enqueue__);
}


void Fgo_Assertions_AssertQueue__OnFailed(System_String_o *message, const MethodInfo *method)
{
  Fgo_Assertions_AssertQueue_c *v3; // x0
  struct System_Action_string__o *onFailedAction; // x8
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C2B87B & 1) == 0 )
  {
    sub_1C2D490(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1C2D490(&UnityEngine_Debug_TypeInfo);
    sub_1C2D490(&StringLiteral_25478/*"表明違反時処理が設定されていません"*/);
    byte_4C2B87B = 1;
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
        sub_1C2D6EC(v5, v6);
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
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_25478/*"表明違反時処理が設定されていません"*/, 0);
  }
}


void Fgo_Assertions_AssertQueue__SetOnFailedAction(System_Action_string__o *action, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  Fgo_Assertions_AssertQueue_c *v5; // x0
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x0

  if ( (byte_4C2B87C & 1) == 0 )
  {
    sub_1C2D490(&Fgo_Assertions_AssertQueue_TypeInfo);
    byte_4C2B87C = 1;
  }
  v5 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v5 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->onFailedAction = action;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->onFailedAction, (int32_t)action, v2, v3);
}