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

  if ( (byte_4C3BEFB & 1) == 0 )
  {
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo____ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_Type__List_FieldInfo___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey___ctor__);
    sub_1C32C20(&System_Collections_Generic_HashSet_Assert_SuppressAssertKey__TypeInfo);
    byte_4C3BEFB = 1;
  }
  static_fields = Fgo_Assertions_Assert_TypeInfo->static_fields;
  static_fields->enable = 1;
  static_fields->onFailedAction = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->onFailedAction, 0, v1, v2);
  v4 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v4->onFailedSendReport = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->onFailedSendReport, 0, v5, v6);
  v7 = (System_Collections_Generic_HashSet_T__o *)sub_1C32E6C(System_Collections_Generic_HashSet_Assert_SuppressAssertKey__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v7,
    (const MethodInfo_364B3A4 *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey___ctor__);
  v8 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v8->suppressAsserts = (struct System_Collections_Generic_HashSet_Assert_SuppressAssertKey__o *)v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->suppressAsserts, (int32_t)v7, v9, v10);
  v11 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_Type__List_FieldInfo___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v11,
    (const MethodInfo_3458418 *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo____ctor__);
  v12 = Fgo_Assertions_Assert_TypeInfo->static_fields;
  v12->cachedFieldInfo = (struct System_Collections_Generic_Dictionary_Type__List_FieldInfo___o *)v11;
  sub_1C32BC4((CGThumbnailListItem_o *)&v12->cachedFieldInfo, (int32_t)v11, v13, v14);
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

  if ( (byte_4C3BEEA & 1) == 0 )
  {
    sub_1C32C20(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    byte_4C3BEEA = 1;
  }
  if ( !byte_4C313D5 )
  {
    sub_1C32C20(&UnityEngine_Mathf_TypeInfo);
    byte_4C313D5 = 1;
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
      (const MethodInfo_30BC658 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
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
  if ( (byte_4C3BEEB & 1) == 0 )
  {
    sub_1C32C20(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    byte_4C3BEEB = 1;
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
      (const MethodInfo_30BC0BC *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void Fgo_Assertions_Assert__AreEqual_48990084(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4C3BEEC & 1) == 0 )
  {
    sub_1C32C20(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    byte_4C3BEEC = 1;
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
      (const MethodInfo_30BC288 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void Fgo_Assertions_Assert__AreEqual_48990244(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4C3BEED & 1) == 0 )
  {
    sub_1C32C20(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BEED = 1;
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
          (const MethodInfo_30BC45C *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
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
        const MethodInfo_30BB124 *method)
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
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  __int64 v26; // x0
  _QWORD *v27; // x19
  __int64 v28; // x27
  void **v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  _QWORD *v36; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  __int64 v44; // x0
  __int64 v45; // x10
  _QWORD *v46; // x19
  void **v47; // x1
  _QWORD *v48; // x19
  void **v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x5
  __int64 v54; // x6
  __int64 v55; // x7
  __int64 v56; // x0
  __int64 v57; // x10
  _QWORD *v58; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v59; // x1
  _QWORD *v60; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  __int64 v65; // x5
  __int64 v66; // x6
  __int64 v67; // x7
  __int64 v68; // x0
  __int64 naturalAligment; // x10
  _QWORD *v70; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v71; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v72; // x1
  _QWORD *v73; // x26
  void **v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  __int64 v78; // x5
  __int64 v79; // x6
  __int64 v80; // x7
  __int64 v81; // x0
  long double v82; // q0
  _QWORD *v83; // x9
  __int64 v84; // x26
  __int64 v85; // x8
  int v86; // w0
  __int64 v87; // x1
  int v88; // w10
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v89; // x3
  _QWORD *v90; // x25
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v91; // x1
  void **v92; // x1
  __int64 *v93; // x1
  __int64 v94; // x0
  _QWORD *v95; // x19
  void **v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  __int64 v100; // x5
  __int64 v101; // x6
  __int64 v102; // x7
  __int64 v103; // x0
  __int64 v104; // x10
  __int64 v105; // [xsp+0h] [xbp-60h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v106; // [xsp+8h] [xbp-58h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-50h]
  void *v108; // [xsp+18h] [xbp-48h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v109; // [xsp+20h] [xbp-40h] BYREF
  _QWORD v110[4]; // [xsp+28h] [xbp-38h] BYREF
  _BYTE v111[12]; // [xsp+48h] [xbp-18h] BYREF
  char v112; // [xsp+54h] [xbp-Ch] BYREF
  __int64 v113; // [xsp+58h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  monitor = (void **)expected.monitor;
  klass = expected.klass;
  v113 = *(_QWORD *)(StatusReg + 40);
  v108 = expected.monitor;
  v109 = expected.klass;
  v11 = filePath[2].monitor;
  v106 = actual.klass;
  if ( !v11 )
  {
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    v11 = filePath[2].monitor;
    if ( !v11 )
    {
      sub_1C83390(filePath);
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
    v14 = sub_1C83334(v7);
    v11 = filePath[2].monitor;
    v15 = *(_DWORD *)(v14 + 252);
    v12 = *v11;
  }
  v16 = (char *)&v105 - (((unsigned int)(v15 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v17 = (__int64 *)((char *)&v105 - ((v13 + 15) & 0x1FFFFFFF0LL));
  v18 = v17;
  if ( *(int *)(v12 + 40) >= 0 )
    v19 = &v109;
  else
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy(&v105, v19, v13);
  v26 = j_il2cpp_value_box_0(*v11, (char *)&v105 - ((v13 + 15) & 0x1FFFFFFF0LL), v20, v21, v22, v23, v24, v25);
  v27 = filePath[2].monitor;
  v28 = v26;
  if ( *(int *)(*v27 + 40LL) >= 0 )
    v29 = &v108;
  else
    v29 = monitor;
  memcpy((char *)&v105 - ((v13 + 15) & 0x1FFFFFFF0LL), v29, v13);
  if ( v28 != j_il2cpp_value_box_0(*v27, (char *)&v105 - ((v13 + 15) & 0x1FFFFFFF0LL), v30, v31, v32, v33, v34, v35) )
  {
    v36 = filePath[2].monitor;
    v37 = *(int *)(*v36 + 40LL) >= 0 ? &v109 : (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    if ( (memcpy((char *)&v105 - ((v13 + 15) & 0x1FFFFFFF0LL), v37, v13),
          (v44 = j_il2cpp_value_box_0(*v36, (char *)&v105 - ((v13 + 15) & 0x1FFFFFFF0LL), v38, v39, v40, v41, v42, v43)) == 0)
      || (v45 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*(_QWORD *)v44 + 304LL) < (unsigned int)v45)
      || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v44 + 200LL) + 8 * v45 - 8) != UnityEngine_Object_TypeInfo
      || ((v46 = filePath[2].monitor, *(int *)(*v46 + 40LL) >= 0) ? (v47 = &v108) : (v47 = monitor),
          memcpy((char *)&v105 - ((v13 + 15) & 0x1FFFFFFF0LL), v47, v13),
          (sub_1C32E30(*v46, (char *)&v105 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
    {
      v48 = filePath[2].monitor;
      v49 = *(int *)(*v48 + 40LL) >= 0 ? &v108 : monitor;
      if ( (memcpy((char *)&v105 - ((v13 + 15) & 0x1FFFFFFF0LL), v49, v13),
            (v56 = j_il2cpp_value_box_0(
                     *v48,
                     (char *)&v105 - ((v13 + 15) & 0x1FFFFFFF0LL),
                     v50,
                     v51,
                     v52,
                     v53,
                     v54,
                     v55)) == 0)
        || (v57 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
            *(unsigned __int8 *)(*(_QWORD *)v56 + 304LL) < (unsigned int)v57)
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v56 + 200LL) + 8 * v57 - 8) != UnityEngine_Object_TypeInfo
        || ((v58 = filePath[2].monitor, *(int *)(*v58 + 40LL) >= 0)
          ? (v59 = &v109)
          : (v59 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v109),
            memcpy((char *)&v105 - ((v13 + 15) & 0x1FFFFFFF0LL), v59, v13),
            (sub_1C32E30(*v58, (char *)&v105 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
      {
        v60 = filePath[2].monitor;
        v61 = *(int *)(*v60 + 40LL) >= 0 ? &v109 : (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v109;
        memcpy((char *)&v105 - ((v13 + 15) & 0x1FFFFFFF0LL), v61, v13);
        v68 = j_il2cpp_value_box_0(*v60, (char *)&v105 - ((v13 + 15) & 0x1FFFFFFF0LL), v62, v63, v64, v65, v66, v67);
        if ( !v68 )
          goto LABEL_40;
        naturalAligment = UnityEngine_Object_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)v68 + 304LL) < (unsigned int)naturalAligment
          || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v68 + 200LL) + 8 * naturalAligment - 8) != UnityEngine_Object_TypeInfo )
        {
          goto LABEL_40;
        }
        v95 = filePath[2].monitor;
        v96 = *(int *)(*v95 + 40LL) >= 0 ? &v108 : monitor;
        memcpy((char *)&v105 - ((v13 + 15) & 0x1FFFFFFF0LL), v96, v13);
        v103 = j_il2cpp_value_box_0(*v95, (char *)&v105 - ((v13 + 15) & 0x1FFFFFFF0LL), v97, v98, v99, v100, v101, v102);
        if ( !v103
          || (v104 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
              *(unsigned __int8 *)(*(_QWORD *)v103 + 304LL) < (unsigned int)v104)
          || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v103 + 200LL) + 8 * v104 - 8) != UnityEngine_Object_TypeInfo )
        {
LABEL_40:
          v70 = filePath[2].monitor;
          v71 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v109;
          if ( *(int *)(*v70 + 40LL) >= 0 )
            v72 = &v109;
          else
            v72 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v109;
          memcpy((char *)&v105 - ((v13 + 15) & 0x1FFFFFFF0LL), v72, v13);
          if ( (sub_1C32E30(*v70, (char *)&v105 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
          {
            v73 = filePath[2].monitor;
            if ( *(int *)(*v73 + 40LL) >= 0 )
              v74 = &v108;
            else
              v74 = monitor;
            memcpy((char *)&v105 - ((v13 + 15) & 0x1FFFFFFF0LL), v74, v13);
            v81 = j_il2cpp_value_box_0(*v73, (char *)&v105 - ((v13 + 15) & 0x1FFFFFFF0LL), v75, v76, v77, v78, v79, v80);
            v83 = filePath[2].monitor;
            v84 = v81;
            v85 = *v83;
            if ( (*(_BYTE *)(*v83 + 309LL) & 1) == 0 )
            {
              v86 = sub_1C83334(v82);
              v83 = filePath[2].monitor;
              v71 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v109;
              LODWORD(v85) = v86;
            }
            v87 = v83[1];
            v88 = *(_DWORD *)(*v83 + 40LL);
            v110[0] = v84;
            if ( v88 >= 0 )
              v89 = &v109;
            else
              v89 = v71;
            sub_1C33688(v85, v87, (int)v16, v89);
            if ( v111[0] )
              return;
            v71 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v109;
          }
          v90 = filePath[2].monitor;
          if ( *(int *)(*v90 + 40LL) >= 0 )
            v91 = &v109;
          else
            v91 = v71;
          memcpy((char *)&v105 - ((v13 + 15) & 0x1FFFFFFF0LL), v91, v13);
          if ( *(int *)(*v90 + 40LL) >= 0 )
            v92 = &v108;
          else
            v92 = monitor;
          memcpy((char *)&v105 - ((v13 + 15) & 0x1FFFFFFF0LL), v92, v13);
          if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
            v90 = filePath[2].monitor;
          }
          v93 = (__int64 *)v90[2];
          v94 = *v93;
          if ( (*(_DWORD *)(*v90 + 40LL) & 0x80000000) == 0 )
          {
            v17 = (_QWORD *)*v17;
            v18 = (_QWORD *)*v18;
          }
          v110[0] = v17;
          v110[1] = v18;
          v112 = 1;
          v110[2] = &v112;
          v110[3] = v106;
          ((void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, _BYTE *))v93[2])(v94, v93, 0, v110, v111);
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

  if ( (byte_4C3BEEE & 1) == 0 )
  {
    sub_1C32C20(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    byte_4C3BEEE = 1;
  }
  if ( !byte_4C313D5 )
  {
    sub_1C32C20(&UnityEngine_Mathf_TypeInfo);
    byte_4C313D5 = 1;
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
      (const MethodInfo_30BC658 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_float___);
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
  if ( (byte_4C3BEEF & 1) == 0 )
  {
    sub_1C32C20(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    byte_4C3BEEF = 1;
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
      (const MethodInfo_30BC0BC *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_int___);
  }
}


void Fgo_Assertions_Assert__AreNotEqual_48990952(
        int64_t expected,
        int64_t actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4C3BEF0 & 1) == 0 )
  {
    sub_1C32C20(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    byte_4C3BEF0 = 1;
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
      (const MethodInfo_30BC288 *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_long___);
  }
}


void Fgo_Assertions_Assert__AreNotEqual_48991112(
        UnityEngine_Object_o *expected,
        UnityEngine_Object_o *actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4C3BEF1 & 1) == 0 )
  {
    sub_1C32C20(&Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BEF1 = 1;
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
      (const MethodInfo_30BC45C *)Method_Fgo_Assertions_Assert_GetComparisonAssertMessage_Object___);
  }
}


void Fgo_Assertions_Assert__AreNotEqual___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o expected,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o actual,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_30BB5FC *method)
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
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  __int64 v25; // x0
  _QWORD *v26; // x19
  __int64 v27; // x27
  void **v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v33; // x6
  __int64 v34; // x7
  __int64 v35; // x0
  _QWORD *v36; // x19
  __int64 v37; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x5
  __int64 v43; // x6
  __int64 v44; // x7
  __int64 v45; // x0
  __int64 v46; // x0
  __int64 v47; // x10
  _QWORD *v48; // x19
  void **v49; // x1
  _QWORD *v50; // x19
  void **v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  __int64 v55; // x5
  __int64 v56; // x6
  __int64 v57; // x7
  __int64 v58; // x0
  __int64 v59; // x10
  _QWORD *v60; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v61; // x1
  _QWORD *v62; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  __int64 v67; // x5
  __int64 v68; // x6
  __int64 v69; // x7
  __int64 v70; // x0
  __int64 naturalAligment; // x10
  _QWORD *v72; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v73; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v74; // x1
  _QWORD *v75; // x19
  void **v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  __int64 v80; // x5
  __int64 v81; // x6
  __int64 v82; // x7
  __int64 v83; // x0
  long double v84; // q0
  _QWORD *v85; // x9
  __int64 v86; // x26
  __int64 v87; // x8
  int v88; // w0
  __int64 v89; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v90; // x3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v91; // x1
  void **v92; // x1
  Fgo_Assertions_Assert_c *v93; // x0
  void **v94; // x1
  __int64 *v95; // x1
  __int64 v96; // x0
  _QWORD *v97; // x19
  void **v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  __int64 v102; // x5
  __int64 v103; // x6
  __int64 v104; // x7
  __int64 v105; // x0
  __int64 v106; // x10
  char *v107; // [xsp+0h] [xbp-60h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v108; // [xsp+8h] [xbp-58h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-50h]
  void *v110; // [xsp+18h] [xbp-48h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v111; // [xsp+20h] [xbp-40h] BYREF
  _QWORD v112[4]; // [xsp+28h] [xbp-38h] BYREF
  _BYTE v113[12]; // [xsp+48h] [xbp-18h] BYREF
  char v114; // [xsp+54h] [xbp-Ch] BYREF
  __int64 v115; // [xsp+58h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  monitor = (void **)expected.monitor;
  klass = expected.klass;
  v115 = *(_QWORD *)(StatusReg + 40);
  v110 = expected.monitor;
  v111 = expected.klass;
  v11 = filePath[2].monitor;
  v108 = actual.klass;
  if ( !v11 )
  {
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    v11 = filePath[2].monitor;
    if ( !v11 )
    {
      sub_1C83390(filePath);
      v11 = filePath[2].monitor;
    }
  }
  v12 = *v11;
  v13 = *(_DWORD *)(*v11 + 252LL);
  v14 = v13;
  if ( (*(_BYTE *)(*v11 + 309LL) & 1) == 0 )
  {
    v15 = sub_1C83334(v7);
    v11 = filePath[2].monitor;
    v13 = *(_DWORD *)(v15 + 252);
    v12 = *v11;
  }
  v107 = (char *)&v107 - ((v13 + 16 + 15LL) & 0x1FFFFFFF0LL);
  v16 = (char **)((char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL));
  v17 = v16;
  if ( *(int *)(v12 + 40) >= 0 )
    v18 = &v111;
  else
    v18 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy(&v107, v18, v14);
  v25 = j_il2cpp_value_box_0(*v11, (char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL), v19, v20, v21, v22, v23, v24);
  v26 = filePath[2].monitor;
  v27 = v25;
  if ( *(int *)(*v26 + 40LL) >= 0 )
    v28 = &v110;
  else
    v28 = monitor;
  memcpy((char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL), v28, v14);
  v35 = j_il2cpp_value_box_0(*v26, (char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL), v29, v30, v31, v32, v33, v34);
  v36 = filePath[2].monitor;
  v37 = v35;
  if ( *(int *)(*v36 + 40LL) >= 0 )
    v38 = &v111;
  else
    v38 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL), v38, v14);
  v45 = *v36;
  if ( v27 == v37 )
  {
    if ( *(int *)(v45 + 40) >= 0 )
      v94 = &v110;
    else
      v94 = monitor;
    memcpy((char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL), v94, v14);
    v93 = Fgo_Assertions_Assert_TypeInfo;
    if ( Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      goto LABEL_65;
LABEL_64:
    j_il2cpp_runtime_class_init_0(v93);
    v36 = filePath[2].monitor;
LABEL_65:
    v95 = (__int64 *)v36[1];
    v96 = *v95;
    if ( (*(_DWORD *)(*v36 + 40LL) & 0x80000000) == 0 )
    {
      v16 = (_QWORD *)*v16;
      v17 = (_QWORD *)*v17;
    }
    v112[2] = &v114;
    v114 = 0;
    v112[0] = v16;
    v112[1] = v17;
    v112[3] = v108;
    ((void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, _BYTE *))v95[2])(v96, v95, 0, v112, v113);
    return;
  }
  v46 = j_il2cpp_value_box_0(v45, (char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL), v39, v40, v41, v42, v43, v44);
  if ( !v46
    || (v47 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
        *(unsigned __int8 *)(*(_QWORD *)v46 + 304LL) < (unsigned int)v47)
    || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v46 + 200LL) + 8 * v47 - 8) != UnityEngine_Object_TypeInfo
    || ((v48 = filePath[2].monitor, *(int *)(*v48 + 40LL) >= 0) ? (v49 = &v110) : (v49 = monitor),
        memcpy((char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL), v49, v14),
        (sub_1C32E30(*v48, (char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
  {
    v50 = filePath[2].monitor;
    v51 = *(int *)(*v50 + 40LL) >= 0 ? &v110 : monitor;
    if ( (memcpy((char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL), v51, v14),
          (v58 = j_il2cpp_value_box_0(*v50, (char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL), v52, v53, v54, v55, v56, v57)) == 0)
      || (v59 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
          *(unsigned __int8 *)(*(_QWORD *)v58 + 304LL) < (unsigned int)v59)
      || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v58 + 200LL) + 8 * v59 - 8) != UnityEngine_Object_TypeInfo
      || ((v60 = filePath[2].monitor, *(int *)(*v60 + 40LL) >= 0)
        ? (v61 = &v111)
        : (v61 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v111),
          memcpy((char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL), v61, v14),
          (sub_1C32E30(*v60, (char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0) )
    {
      v62 = filePath[2].monitor;
      v63 = *(int *)(*v62 + 40LL) >= 0 ? &v111 : (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v111;
      memcpy((char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL), v63, v14);
      v70 = j_il2cpp_value_box_0(*v62, (char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL), v64, v65, v66, v67, v68, v69);
      if ( !v70 )
        goto LABEL_39;
      naturalAligment = UnityEngine_Object_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)v70 + 304LL) < (unsigned int)naturalAligment
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v70 + 200LL) + 8 * naturalAligment - 8) != UnityEngine_Object_TypeInfo )
      {
        goto LABEL_39;
      }
      v97 = filePath[2].monitor;
      v98 = *(int *)(*v97 + 40LL) >= 0 ? &v110 : monitor;
      memcpy((char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL), v98, v14);
      v105 = j_il2cpp_value_box_0(*v97, (char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL), v99, v100, v101, v102, v103, v104);
      if ( !v105
        || (v106 = UnityEngine_Object_TypeInfo->_2.naturalAligment,
            *(unsigned __int8 *)(*(_QWORD *)v105 + 304LL) < (unsigned int)v106)
        || *(UnityEngine_Object_c **)(*(_QWORD *)(*(_QWORD *)v105 + 200LL) + 8 * v106 - 8) != UnityEngine_Object_TypeInfo )
      {
LABEL_39:
        v72 = filePath[2].monitor;
        v73 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v111;
        v74 = *(int *)(*v72 + 40LL) >= 0 ? &v111 : (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v111;
        memcpy((char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL), v74, v14);
        if ( (sub_1C32E30(*v72, (char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
        {
          v75 = filePath[2].monitor;
          if ( *(int *)(*v75 + 40LL) >= 0 )
            v76 = &v110;
          else
            v76 = monitor;
          memcpy((char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL), v76, v14);
          v83 = j_il2cpp_value_box_0(*v75, (char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL), v77, v78, v79, v80, v81, v82);
          v85 = filePath[2].monitor;
          v86 = v83;
          v87 = *v85;
          if ( (*(_BYTE *)(*v85 + 309LL) & 1) == 0 )
          {
            v88 = sub_1C83334(v84);
            v85 = filePath[2].monitor;
            v73 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v111;
            LODWORD(v87) = v88;
          }
          v89 = v85[2];
          v90 = *(int *)(*v85 + 40LL) >= 0 ? &v111 : v73;
          v112[0] = v86;
          sub_1C33688(v87, v89, (int)v107, v90);
          if ( v113[0] )
          {
            v36 = filePath[2].monitor;
            if ( *(int *)(*v36 + 40LL) >= 0 )
              v91 = &v111;
            else
              v91 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v111;
            memcpy((char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL), v91, v14);
            if ( *(int *)(*v36 + 40LL) >= 0 )
              v92 = &v110;
            else
              v92 = monitor;
            memcpy((char *)&v107 - ((v14 + 15) & 0x1FFFFFFF0LL), v92, v14);
            v93 = Fgo_Assertions_Assert_TypeInfo;
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
  struct System_Object_array *v20; // x8
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  __int64 *v23; // x8
  __int64 *v24; // x8
  int32_t result; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v26; // [xsp+8h] [xbp-68h] BYREF
  _WORD v27[2]; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C3BEF8 & 1) == 0 )
  {
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&char_TypeInfo);
    sub_1C32C20(&StringLiteral_25489/*"書式指定項目が不正です"*/);
    sub_1C32C20(&StringLiteral_25428/*"パラメータ"*/);
    sub_1C32C20(&StringLiteral_25478/*"文字列"*/);
    sub_1C32C20(&StringLiteral_25472/*"引数"*/);
    sub_1C32C20(&StringLiteral_25473/*"引数を超えたのインデックスを指しています"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3BEF8 = 1;
  }
  v27[0] = 0;
  result = 0;
  v26 = 0;
  if ( !parameter )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v23 = &StringLiteral_25428/*"パラメータ"*/;
    goto LABEL_59;
  }
  format = parameter->fields.format;
  if ( !format )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v23 = &StringLiteral_25478/*"文字列"*/;
    goto LABEL_59;
  }
  args = parameter->fields.args;
  if ( !args || LODWORD(args->max_length) == 1 && !args->m_Items[0] )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v23 = &StringLiteral_25472/*"引数"*/;
LABEL_59:
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)*v23, message, (const MethodInfo *)gameObject);
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
    v27[0] = Chars;
    if ( v10 )
    {
      if ( Chars == 123 )
        goto LABEL_12;
      v15 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_20:
      if ( Chars == 44 || Chars == 125 || Chars == 58 )
      {
        v19 = System_Int32__TryParse(v15, &v26, 0);
        if ( !v19 )
          goto LABEL_66;
        v20 = parameter->fields.args;
        if ( !v20 )
          sub_1C32E7C(v19);
        if ( v26 >= SLODWORD(v20->max_length) )
        {
          if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
          v24 = &StringLiteral_25473/*"引数を超えたのインデックスを指しています"*/;
          goto LABEL_69;
        }
        v18 = v27[0];
        if ( v27[0] == 44 )
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
      v21 = System_Char__ToString((uint16_t)v27, 0);
      v15 = System_String__Concat_63518544(v15, v21, 0);
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
        v22 = System_Char__ToString((uint16_t)v27, 0);
        v15 = System_String__Concat_63518544(v15, v22, 0);
        goto LABEL_28;
      }
      if ( !System_Int32__TryParse(v15, &result, 0) )
        goto LABEL_66;
      v18 = v27[0];
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
  v24 = &StringLiteral_25489/*"書式指定項目が不正です"*/;
LABEL_69:
  Fgo_Assertions_Assert__GetEffectiveAssertMessage((System_String_o *)*v24, message, (const MethodInfo *)gameObject);
}


void Fgo_Assertions_Assert__CanParse___Il2CppFullySharedGenericType_(
        System_String_o *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_30BBB1C *method)
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
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&bool_var);
    sub_1C32C20(&bool_TypeInfo);
    sub_1C32C20(&qword_4A2D9A8);
    sub_1C32C20(&double_var);
    sub_1C32C20(&short_var);
    sub_1C32C20(&int_var);
    sub_1C32C20(&long_var);
    sub_1C32C20(&sbyte_var);
    sub_1C32C20(&float_var);
    sub_1C32C20(&System_Type_TypeInfo);
    sub_1C32C20(&ushort_var);
    sub_1C32C20(&uint_var);
    sub_1C32C20(&ulong_var);
    sub_1C32C20(&StringLiteral_25460/*"型が不正です:{0}"*/);
    sub_1C32C20(&StringLiteral_25478/*"文字列"*/);
    sub_1C32C20(&StringLiteral_273/*" isNotBoolean"*/);
    if ( !method->rgctx_data )
      sub_1C83390(method);
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
        v14 = System_String__Concat_63518544(value, (System_String_o *)StringLiteral_273/*" isNotBoolean"*/, 0);
LABEL_12:
        v15 = v14;
        if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
        Fgo_Assertions_Assert__GetEffectiveAssertMessage(v15, message, 0);
      }
    }
    else
    {
      v16 = qword_4A2D9A8;
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
                          v14 = System_String__Format((System_String_o *)StringLiteral_25460/*"型が不正です:{0}"*/, TypeFromHandle, 0);
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
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25478/*"文字列"*/, message, 0);
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
        const MethodInfo_30BC824 *method)
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
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x22
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 *v41; // x8
  __int64 v42; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_String_o *v48; // x20
  __int64 v50; // [xsp+0h] [xbp-30h] BYREF
  System_String_o *monitor; // [xsp+8h] [xbp-28h]
  void **v52; // [xsp+10h] [xbp-20h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v53; // [xsp+18h] [xbp-18h] BYREF
  __int64 v54; // [xsp+20h] [xbp-10h]
  __int64 v55; // [xsp+28h] [xbp-8h]

  monitor = (System_String_o *)actual.monitor;
  v6 = equal;
  v7 = (void **)expected.monitor;
  klass = expected.klass;
  v55 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v52 = (void **)expected.monitor;
  v53 = expected.klass;
  v9 = *(__int64 **)(equal + 56LL);
  v10 = (char)actual.klass;
  if ( !v9 )
  {
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_113/*" "*/);
    sub_1C32C20(&StringLiteral_22332/*"null"*/);
    sub_1C32C20(&StringLiteral_19326/*"expectedEqual"*/);
    sub_1C32C20(&StringLiteral_19327/*"expectedNotEqual"*/);
    v9 = *(__int64 **)(v6 + 56);
    if ( !v9 )
    {
      sub_1C83390(v6);
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
    v14 = sub_1C83334(v5);
    v9 = *(__int64 **)(v6 + 56);
    v15 = *(_DWORD *)(v14 + 252);
    v11 = *v9;
    v12 = *(_WORD *)(*v9 + 309);
  }
  v16 = (char *)&v50 - (((unsigned int)(v15 + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( (v12 & 1) != 0 )
  {
    v17 = v11;
  }
  else
  {
    v17 = sub_1C83334(v5);
    v9 = *(__int64 **)(v6 + 56);
    v11 = *v9;
  }
  v18 = (char *)&v50 - (((unsigned int)(*(_DWORD *)(v17 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( *(int *)(v11 + 40) >= 0 )
    v19 = &v53;
  else
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v50 - ((v13 + 15) & 0x1FFFFFFF0LL), v19, v13);
  if ( (sub_1C32E30(*v9, (char *)&v50 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
  {
    v21 = *(_QWORD **)(v6 + 56);
    v22 = *v21;
    if ( (*(_BYTE *)(*v21 + 309LL) & 1) == 0 )
    {
      LODWORD(v22) = sub_1C83334(v20);
      v21 = *(_QWORD **)(v6 + 56);
      klass = v53;
    }
    if ( *(int *)(*v21 + 40LL) >= 0 )
      v23 = &v53;
    else
      v23 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    sub_1C33688(v22, v21[1], (int)v16, v23);
    v24 = v54;
    v7 = v52;
  }
  else
  {
    v24 = StringLiteral_22332/*"null"*/;
  }
  v25 = *(_QWORD **)(v6 + 56);
  if ( *(int *)(*v25 + 40LL) >= 0 )
    v26 = (void **)&v52;
  else
    v26 = v7;
  memcpy((char *)&v50 - ((v13 + 15) & 0x1FFFFFFF0LL), v26, v13);
  if ( (sub_1C32E30(*v25, (char *)&v50 - ((v13 + 15) & 0x1FFFFFFF0LL)) & 1) != 0 )
  {
    v28 = *(_QWORD **)(v6 + 56);
    v29 = *v28;
    if ( (*(_BYTE *)(*v28 + 309LL) & 1) == 0 )
    {
      LODWORD(v29) = sub_1C83334(v27);
      v28 = *(_QWORD **)(v6 + 56);
      v7 = v52;
    }
    if ( *(int *)(*v28 + 40LL) >= 0 )
      v30 = (void **)&v52;
    else
      v30 = v7;
    sub_1C33688(v29, v28[1], (int)v18, v30);
    v31 = v54;
  }
  else
  {
    v31 = StringLiteral_22332/*"null"*/;
  }
  v32 = sub_1C32CC8(string___TypeInfo, 5);
  if ( !v32 )
    sub_1C32E7C(0);
  v35 = v32;
  if ( !*(_DWORD *)(v32 + 24) )
    goto LABEL_43;
  *(_QWORD *)(v32 + 32) = v24;
  sub_1C32BC4((CGThumbnailListItem_o *)(v32 + 32), v24, v33, v34);
  if ( *(_DWORD *)(v35 + 24) <= 1u )
    goto LABEL_43;
  v38 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v35 + 40) = StringLiteral_113/*" "*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v35 + 40), v38, v36, v37);
  v41 = (__int64 *)&StringLiteral_19327/*"expectedNotEqual"*/;
  if ( (v10 & 1) == 0 )
    v41 = (__int64 *)&StringLiteral_19326/*"expectedEqual"*/;
  if ( *(_DWORD *)(v35 + 24) <= 2u
    || (v42 = *v41,
        *(_QWORD *)(v35 + 48) = *v41,
        sub_1C32BC4((CGThumbnailListItem_o *)(v35 + 48), v42, v39, v40),
        *(_DWORD *)(v35 + 24) <= 3u)
    || (v45 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v35 + 56) = StringLiteral_113/*" "*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v35 + 56), v45, v43, v44),
        *(_DWORD *)(v35 + 24) <= 4u) )
  {
LABEL_43:
    sub_1C32E84(v32);
  }
  *(_QWORD *)(v35 + 64) = v31;
  sub_1C32BC4((CGThumbnailListItem_o *)(v35 + 64), v31, v46, v47);
  v48 = System_String__Concat_63559060((System_String_array *)v35, 0);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v48, monitor, 0);
}


System_String_o *Fgo_Assertions_Assert__GetComparisonAssertMessage_float_(
        float expected,
        float actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_30BC658 *method)
{
  System_String_o *v8; // x23
  float v9; // s0
  System_String_o *v10; // x21
  __int64 v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 *v20; // x8
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_String_o *v27; // x20
  float v29; // [xsp+8h] [xbp-38h] BYREF
  float v30; // [xsp+Ch] [xbp-34h] BYREF

  v29 = actual;
  v30 = expected;
  if ( !method->rgctx_data )
  {
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_113/*" "*/);
    sub_1C32C20(&StringLiteral_19326/*"expectedEqual"*/);
    sub_1C32C20(&StringLiteral_19327/*"expectedNotEqual"*/);
    if ( !method->rgctx_data )
      sub_1C83390(method);
  }
  v8 = System_Single__ToString(expected, (const MethodInfo *)&v30);
  v10 = System_Single__ToString(v9, (const MethodInfo *)&v29);
  v11 = sub_1C32CC8(string___TypeInfo, 5);
  if ( !v11 )
    sub_1C32E7C(0);
  v14 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v11 + 32) = v8;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 32), (int32_t)v8, v12, v13);
  if ( *(_DWORD *)(v14 + 24) <= 1u )
    goto LABEL_15;
  v17 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v14 + 40) = StringLiteral_113/*" "*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 40), v17, v15, v16);
  v20 = (__int64 *)&StringLiteral_19327/*"expectedNotEqual"*/;
  if ( !equal )
    v20 = (__int64 *)&StringLiteral_19326/*"expectedEqual"*/;
  if ( *(_DWORD *)(v14 + 24) <= 2u
    || (v21 = *v20,
        *(_QWORD *)(v14 + 48) = *v20,
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 48), v21, v18, v19),
        *(_DWORD *)(v14 + 24) <= 3u)
    || (v24 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v14 + 56) = StringLiteral_113/*" "*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 56), v24, v22, v23),
        *(_DWORD *)(v14 + 24) <= 4u) )
  {
LABEL_15:
    sub_1C32E84(v11);
  }
  *(_QWORD *)(v14 + 64) = v10;
  sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 64), (int32_t)v10, v25, v26);
  v27 = System_String__Concat_63559060((System_String_array *)v14, 0);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v27, message, 0);
}


System_String_o *Fgo_Assertions_Assert__GetComparisonAssertMessage_int_(
        int32_t expected,
        int32_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_30BC0BC *method)
{
  const MethodInfo_30BC0BC_RGCTXs *rgctx_data; // x8
  System_String_o *v9; // x23
  System_String_o *v10; // x21
  __int64 v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 *v20; // x8
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_String_o *v27; // x20
  int32_t v29; // [xsp+8h] [xbp-38h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-34h] BYREF

  v29 = actual;
  v30 = expected;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_113/*" "*/);
    sub_1C32C20(&StringLiteral_19326/*"expectedEqual"*/);
    sub_1C32C20(&StringLiteral_19327/*"expectedNotEqual"*/);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C83390(method);
      rgctx_data = method->rgctx_data;
    }
  }
  v9 = System_Int32__ToString((int32_t)&v30, (const MethodInfo *)rgctx_data[1]._0_T);
  v10 = System_Int32__ToString((int32_t)&v29, (const MethodInfo *)method->rgctx_data[1]._0_T);
  v11 = sub_1C32CC8(string___TypeInfo, 5);
  if ( !v11 )
    sub_1C32E7C(0);
  v14 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v11 + 32) = v9;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 32), (int32_t)v9, v12, v13);
  if ( *(_DWORD *)(v14 + 24) <= 1u )
    goto LABEL_15;
  v17 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v14 + 40) = StringLiteral_113/*" "*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 40), v17, v15, v16);
  v20 = (__int64 *)&StringLiteral_19327/*"expectedNotEqual"*/;
  if ( !equal )
    v20 = (__int64 *)&StringLiteral_19326/*"expectedEqual"*/;
  if ( *(_DWORD *)(v14 + 24) <= 2u
    || (v21 = *v20,
        *(_QWORD *)(v14 + 48) = *v20,
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 48), v21, v18, v19),
        *(_DWORD *)(v14 + 24) <= 3u)
    || (v24 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v14 + 56) = StringLiteral_113/*" "*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 56), v24, v22, v23),
        *(_DWORD *)(v14 + 24) <= 4u) )
  {
LABEL_15:
    sub_1C32E84(v11);
  }
  *(_QWORD *)(v14 + 64) = v10;
  sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 64), (int32_t)v10, v25, v26);
  v27 = System_String__Concat_63559060((System_String_array *)v14, 0);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v27, message, 0);
}


System_String_o *Fgo_Assertions_Assert__GetComparisonAssertMessage_long_(
        int64_t expected,
        int64_t actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_30BC288 *method)
{
  const MethodInfo_30BC288_RGCTXs *rgctx_data; // x8
  System_String_o *v9; // x23
  System_String_o *v10; // x21
  __int64 v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 *v20; // x8
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_String_o *v27; // x20
  int64_t v29; // [xsp+8h] [xbp-48h] BYREF
  int64_t v30; // [xsp+18h] [xbp-38h] BYREF

  v30 = expected;
  v29 = actual;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_113/*" "*/);
    sub_1C32C20(&StringLiteral_19326/*"expectedEqual"*/);
    sub_1C32C20(&StringLiteral_19327/*"expectedNotEqual"*/);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C83390(method);
      rgctx_data = method->rgctx_data;
    }
  }
  v9 = System_Int64__ToString((int64_t)&v30, (const MethodInfo *)rgctx_data[1]._0_T);
  v10 = System_Int64__ToString((int64_t)&v29, (const MethodInfo *)method->rgctx_data[1]._0_T);
  v11 = sub_1C32CC8(string___TypeInfo, 5);
  if ( !v11 )
    sub_1C32E7C(0);
  v14 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v11 + 32) = v9;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 32), (int32_t)v9, v12, v13);
  if ( *(_DWORD *)(v14 + 24) <= 1u )
    goto LABEL_15;
  v17 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v14 + 40) = StringLiteral_113/*" "*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 40), v17, v15, v16);
  v20 = (__int64 *)&StringLiteral_19327/*"expectedNotEqual"*/;
  if ( !equal )
    v20 = (__int64 *)&StringLiteral_19326/*"expectedEqual"*/;
  if ( *(_DWORD *)(v14 + 24) <= 2u
    || (v21 = *v20,
        *(_QWORD *)(v14 + 48) = *v20,
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 48), v21, v18, v19),
        *(_DWORD *)(v14 + 24) <= 3u)
    || (v24 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v14 + 56) = StringLiteral_113/*" "*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 56), v24, v22, v23),
        *(_DWORD *)(v14 + 24) <= 4u) )
  {
LABEL_15:
    sub_1C32E84(v11);
  }
  *(_QWORD *)(v14 + 64) = v10;
  sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 64), (int32_t)v10, v25, v26);
  v27 = System_String__Concat_63559060((System_String_array *)v14, 0);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v27, message, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *Fgo_Assertions_Assert__GetComparisonAssertMessage_object_(
        Il2CppObject *expected,
        Il2CppObject *actual,
        bool equal,
        System_String_o *message,
        const MethodInfo_30BC45C *method)
{
  __int64 v9; // x23
  __int64 v10; // x21
  __int64 v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 *v20; // x8
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_String_o *v27; // x20

  if ( (byte_4C3CFBC & 1) == 0 )
  {
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_113/*" "*/);
    sub_1C32C20(&StringLiteral_22332/*"null"*/);
    sub_1C32C20(&StringLiteral_19326/*"expectedEqual"*/);
    sub_1C32C20(&StringLiteral_19327/*"expectedNotEqual"*/);
    byte_4C3CFBC = 1;
  }
  if ( expected )
    v9 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, bool, System_String_o *, const MethodInfo_30BC45C *))expected->klass->vtable[3].methodPtr)(
           expected,
           expected->klass->vtable[3].method,
           equal,
           message,
           method);
  else
    v9 = StringLiteral_22332/*"null"*/;
  if ( actual )
    v10 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))actual->klass->vtable[3].methodPtr)(
            actual,
            actual->klass->vtable[3].method);
  else
    v10 = StringLiteral_22332/*"null"*/;
  v11 = sub_1C32CC8(string___TypeInfo, 5);
  if ( !v11 )
    sub_1C32E7C(0);
  v14 = v11;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_21;
  *(_QWORD *)(v11 + 32) = v9;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 32), v9, v12, v13);
  if ( *(_DWORD *)(v14 + 24) <= 1u )
    goto LABEL_21;
  v17 = (int)StringLiteral_113/*" "*/;
  *(_QWORD *)(v14 + 40) = StringLiteral_113/*" "*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 40), v17, v15, v16);
  v20 = (__int64 *)(equal ? &StringLiteral_19327/*"expectedNotEqual"*/ : &StringLiteral_19326/*"expectedEqual"*/);
  if ( *(_DWORD *)(v14 + 24) <= 2u
    || (v21 = *v20,
        *(_QWORD *)(v14 + 48) = *v20,
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 48), v21, v18, v19),
        *(_DWORD *)(v14 + 24) <= 3u)
    || (v24 = (int)StringLiteral_113/*" "*/,
        *(_QWORD *)(v14 + 56) = StringLiteral_113/*" "*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 56), v24, v22, v23),
        *(_DWORD *)(v14 + 24) <= 4u) )
  {
LABEL_21:
    sub_1C32E84(v11);
  }
  *(_QWORD *)(v14 + 64) = v10;
  sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 64), v10, v25, v26);
  v27 = System_String__Concat_63559060((System_String_array *)v14, 0);
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  return Fgo_Assertions_Assert__GetEffectiveAssertMessage(v27, message, 0);
}


System_String_o *Fgo_Assertions_Assert__GetEffectiveAssertMessage(
        System_String_o *defaultMessage,
        System_String_o *message,
        const MethodInfo *method)
{
  if ( (byte_4C3BEE9 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_56/*"\n("*/);
    sub_1C32C20(&StringLiteral_759/*")"*/);
    byte_4C3BEE9 = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0) )
    return defaultMessage;
  else
    return System_String__Concat_63558796(
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

  if ( (byte_4C3BEF5 & 1) == 0 )
  {
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&StringLiteral_25382/*"が null です"*/);
    byte_4C3BEF5 = 1;
  }
  v6 = System_String__Concat_63518544(modelName, (System_String_o *)StringLiteral_25382/*"が null です"*/, 0);
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

  if ( (byte_4C3BEF7 & 1) == 0 )
  {
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&StringLiteral_274/*" isNotNumbers"*/);
    byte_4C3BEF7 = 1;
  }
  v6 = System_String__Concat_63518544(value, (System_String_o *)StringLiteral_274/*" isNotNumbers"*/, 0);
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
        const MethodInfo_30BCBB8 *method)
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
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&StringLiteral_25418/*"ディクショナリ"*/);
    sub_1C32C20(&StringLiteral_777/*") の値がディクショナリに含まれていません"*/);
    sub_1C32C20(&StringLiteral_21113/*"key("*/);
    sub_1C32C20(&StringLiteral_25402/*"キー"*/);
    v11 = *(_QWORD *)(v8 + 56);
    if ( !v11 )
    {
      sub_1C83390(v8);
      v11 = *(_QWORD *)(v8 + 56);
    }
  }
  v13 = *(_QWORD *)(v11 + 8);
  v14 = *(unsigned int *)(v13 + 252);
  v15 = *(_DWORD *)(v13 + 252);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v15 = *(_DWORD *)(sub_1C83334(v7) + 252);
  v16 = (char *)&v31 - (((unsigned int)(v15 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v17 = (System_String_o *)((char *)&v31 - ((v14 + 15) & 0x1FFFFFFF0LL));
  if ( !dic )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v28 = &StringLiteral_25418/*"ディクショナリ"*/;
    goto LABEL_25;
  }
  v18 = *(_QWORD *)(v8 + 56);
  if ( *(int *)(*(_QWORD *)(v18 + 8) + 40LL) >= 0 )
    v19 = &v31;
  else
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v31 - ((v14 + 15) & 0x1FFFFFFF0LL), v19, v14);
  if ( (sub_1C32E30(*(_QWORD *)(v18 + 8), (char *)&v31 - ((v14 + 15) & 0x1FFFFFFF0LL)) & 1) == 0 )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    v28 = &StringLiteral_25402/*"キー"*/;
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
      LODWORD(v27) = sub_1C83334(v24);
      v25 = *(_QWORD *)(v8 + 56);
      klass = v31;
      v26 = *(_QWORD *)(v25 + 8);
    }
    if ( *(int *)(v26 + 40) >= 0 )
      v29 = &v31;
    else
      v29 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    sub_1C33688(v27, *(_QWORD *)(v25 + 24), (int)v16, v29);
    v30 = System_String__Concat_63556792(
            (System_String_o *)StringLiteral_21113/*"key("*/,
            v32,
            (System_String_o *)StringLiteral_777/*") の値がディクショナリに含まれていません"*/,
            0);
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetEffectiveAssertMessage(v30, monitor, 0);
  }
}


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
  System_RuntimeTypeHandle_o v15; // x0
  System_Type_o *TypeFromHandle; // x0
  Il2CppType *v17; // x24
  System_RuntimeTypeHandle_o v18; // x0
  System_Type_o *v19; // x0
  Il2CppType *v20; // x24
  System_RuntimeTypeHandle_o v21; // x0
  UnityEngine_Component_o *v22; // x24
  int32_t v23; // w2
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
  __int64 v38; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x20
  Fgo_Assertions_Assert___c_c *v40; // x8
  System_Func_T1__T2__TResult__o *_9__42_0; // x21
  Il2CppObject *v42; // x22
  struct Fgo_Assertions_Assert___c_StaticFields *static_fields; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v46; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v47; // x20
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  __int64 v49; // x9
  int32_t *p_offset; // x10
  __int64 v51; // x0
  __int64 v52; // x20
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  __int64 v61; // x8
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+20h] [xbp-80h] BYREF

  v4 = (Il2CppObject *)component;
  if ( (byte_4C3BEFA & 1) == 0 )
  {
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___set_Item__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_Object____f__AnonymousType0_Object__int____);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_FieldInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_FieldInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_FieldInfo__get_Current__);
    sub_1C32C20(&System_Func_Object__int____f__AnonymousType0_Object__int___TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_Object__var);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_Object__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator___f__AnonymousType0_Object__int___TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_FieldInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FieldInfo__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FieldInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_FieldInfo__TypeInfo);
    sub_1C32C20(&Fgo_Assertions_Assert_NullableAttribute_var);
    sub_1C32C20(&UnityEngine_Object___var);
    sub_1C32C20(&UnityEngine_Object_var);
    sub_1C32C20(&UnityEngine_SerializeField_var);
    sub_1C32C20(&System_Type_TypeInfo);
    sub_1C32C20(&Method_Fgo_Assertions_Assert___c__IsAllSerializeFieldsNotNull_b__42_0__);
    component = (UnityEngine_Component_o *)sub_1C32C20(&Fgo_Assertions_Assert___c_TypeInfo);
    byte_4C3BEFA = 1;
  }
  memset(&v66, 0, sizeof(v66));
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
                                           (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___ContainsKey__);
  if ( ((unsigned __int8)component & 1) != 0 )
    goto LABEL_45;
  if ( !v7 )
    goto LABEL_92;
  v8 = checkInheritance ? 60LL : 62LL;
  v9 = ((__int64 (__fastcall *)(Il2CppObject *, __int64, const MethodInfo *))v7->klass->vtable[88].methodPtr)(
         v7,
         v8,
         v7->klass->vtable[88].method);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_FieldInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_FieldInfo___ctor__);
  if ( !v9 )
    goto LABEL_92;
  v11 = *(_QWORD *)(v9 + 24);
  if ( (int)v11 >= 1 )
  {
    v12 = 0;
    do
    {
      if ( v12 >= (unsigned int)v11 )
        sub_1C32E84(component);
      v13 = *(System_Reflection_MemberInfo_o **)(v9 + 32 + 8 * v12);
      v14 = UnityEngine_SerializeField_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v15.fields.value = (intptr_t)v14;
      TypeFromHandle = System_Type__GetTypeFromHandle(v15, 0);
      component = (UnityEngine_Component_o *)System_Reflection_CustomAttributeExtensions__IsDefined(
                                               v13,
                                               TypeFromHandle,
                                               0);
      if ( ((unsigned __int8)component & 1) != 0 )
      {
        v17 = Fgo_Assertions_Assert_NullableAttribute_var;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        v18.fields.value = (intptr_t)v17;
        v19 = System_Type__GetTypeFromHandle(v18, 0);
        component = (UnityEngine_Component_o *)System_Reflection_CustomAttributeExtensions__IsDefined(v13, v19, 0);
        if ( ((unsigned __int8)component & 1) == 0 )
        {
          v20 = UnityEngine_Object_var;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v21.fields.value = (intptr_t)v20;
          component = (UnityEngine_Component_o *)System_Type__GetTypeFromHandle(v21, 0);
          if ( !v13 )
            goto LABEL_92;
          v22 = component;
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, const char *))v13->klass[1]._1.name)(
                                                   v13,
                                                   v13->klass[1]._1.namespaze);
          if ( !v22 )
            goto LABEL_92;
          component = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(UnityEngine_Component_o *, UnityEngine_Component_o *, _QWORD))&v22->klass[1]._2.field_count)(
                                                   v22,
                                                   component,
                                                   *(_QWORD *)&v22->klass[1]._2.interfaces_count);
          if ( ((unsigned __int8)component & 1) != 0 )
            goto LABEL_96;
          v25 = UnityEngine_Object___var;
          if ( !System_Type_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
          v26.fields.value = (intptr_t)v25;
          v27 = System_Type__GetTypeFromHandle(v26, 0);
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
          v29.fields.value = (intptr_t)v28;
          v30 = System_Type__GetTypeFromHandle(v29, 0);
          component = (UnityEngine_Component_o *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, const char *))v13->klass[1]._1.name)(
                                                   v13,
                                                   v13->klass[1]._1.namespaze);
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
                (Il2CppObject *)v13,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v34 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v34[4] = (Il2CppClass *)v13;
              sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v13, v23, v24);
            }
          }
        }
      }
      LODWORD(v11) = *(_DWORD *)(v9 + 24);
    }
    while ( (__int64)++v12 < (int)v11 );
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
    sub_1C32E7C(component);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    cachedFieldInfo,
    (Il2CppObject *)component,
    (Il2CppObject *)v10,
    (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___set_Item__);
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
                                           (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_Type__List_FieldInfo___get_Item__);
  if ( !component )
    goto LABEL_92;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v65,
    (System_Collections_Generic_List_object__o *)component,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_FieldInfo__GetEnumerator__);
  v66 = v65;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_FieldInfo__MoveNext__) )
  {
    if ( !v66.fields._current )
      sub_1C32E7C(0);
    v38 = ((__int64 (*)(void))v66.fields._current->klass->vtable[25].methodPtr)();
    v39 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C32D5C(
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
        _9__42_0 = (System_Func_T1__T2__TResult__o *)sub_1C32E6C(System_Func_Object__int____f__AnonymousType0_Object__int___TypeInfo);
        System_Func_object__int__object____ctor(
          _9__42_0,
          v42,
          Method_Fgo_Assertions_Assert___c__IsAllSerializeFieldsNotNull_b__42_0__,
          0);
        static_fields = Fgo_Assertions_Assert___c_TypeInfo->static_fields;
        static_fields->__9__42_0 = (struct System_Func_Object__int____f__AnonymousType0_Object__int___o *)_9__42_0;
        sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__42_0, (int32_t)_9__42_0, v44, v45);
      }
      v46 = System_Linq_Enumerable__Select_object__object__51461552(
              v39,
              (System_Func_TSource__int__TResult__o *)_9__42_0,
              (const MethodInfo_3113DB0 *)Method_System_Linq_Enumerable_Select_Object____f__AnonymousType0_Object__int____);
      v47 = v46;
      if ( !v46 )
        sub_1C32E7C(0);
      klass = v46->klass;
      v49 = *(unsigned __int16 *)&v46->klass->_2.rank;
      if ( *(_WORD *)&v46->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___c **)p_offset - 1) != System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___TypeInfo )
        {
          --v49;
          p_offset += 4;
          if ( !v49 )
            goto LABEL_64;
        }
        v51 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_64:
        v51 = sub_1C83438(v46, System_Collections_Generic_IEnumerable___f__AnonymousType0_Object__int___TypeInfo, 0);
      }
      v52 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v51)(
              v47,
              *(_QWORD *)(v51 + 8));
      if ( !v52 )
        sub_1C32E7C(0);
      while ( 1 )
      {
        v53 = *(_QWORD *)v52;
        v54 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
        {
          v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v55 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v54;
            v55 += 4;
            if ( !v54 )
              goto LABEL_71;
          }
          v56 = v53 + 16LL * *v55 + 312;
        }
        else
        {
LABEL_71:
          v56 = sub_1C83438(v52, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v52, *(_QWORD *)(v56 + 8)) & 1) == 0 )
          break;
        v57 = *(_QWORD *)v52;
        v58 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
        {
          v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator___f__AnonymousType0_Object__int___c **)v59 - 1) != System_Collections_Generic_IEnumerator___f__AnonymousType0_Object__int___TypeInfo )
          {
            --v58;
            v59 += 4;
            if ( !v58 )
              goto LABEL_78;
          }
          v60 = v57 + 16LL * *v59 + 312;
        }
        else
        {
LABEL_78:
          v60 = sub_1C83438(v52, System_Collections_Generic_IEnumerator___f__AnonymousType0_Object__int___TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v60)(v52, *(_QWORD *)(v60 + 8));
      }
      v61 = *(_QWORD *)v52;
      v62 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
      {
        v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
        {
          --v62;
          v63 += 4;
          if ( !v62 )
            goto LABEL_85;
        }
        v64 = v61 + 16LL * *v63 + 312;
      }
      else
      {
LABEL_85:
        v64 = sub_1C83438(v52, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v64)(v52, *(_QWORD *)(v64 + 8));
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_FieldInfo__Dispose__);
}


void Fgo_Assertions_Assert__IsAssetDataNotNull(
        Il2CppObject *assetData,
        System_String_o *assetName,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  if ( (byte_4C3BEF3 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15891/*"[AssetData]\n{0}をロードできませんでした"*/);
    byte_4C3BEF3 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_15891/*"[AssetData]\n{0}をロードできませんでした"*/, (Il2CppObject *)assetName, 0);
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


// local variable allocation has failed, the output may be wrong!
void Fgo_Assertions_Assert__IsInRange(
        int32_t count,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  __int64 v7; // x7
  Il2CppObject *v11; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  const MethodInfo *v20; // x2
  Il2CppObject *v21; // x0
  System_String_o *v22; // x20
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v24; // [xsp+18h] [xbp-28h] BYREF
  int32_t v25; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4C3BEF6 & 1) == 0 )
  {
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_20760/*"index({0}) の値が負です"*/);
    sub_1C32C20(&StringLiteral_20761/*"index({0}) の値が配列の要素数({1})を超えています"*/);
    byte_4C3BEF6 = 1;
  }
  if ( index < 0 )
  {
    v25 = index;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(
                            int_TypeInfo,
                            &v25,
                            message,
                            gameObject,
                            filePath,
                            *(_QWORD *)&line,
                            method,
                            v7);
    v19 = System_String__Format((System_String_o *)StringLiteral_20760/*"index({0}) の値が負です"*/, v21, 0);
  }
  else
  {
    if ( count > index )
      return;
    v24 = index;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(
                            int_TypeInfo,
                            &v24,
                            message,
                            gameObject,
                            filePath,
                            *(_QWORD *)&line,
                            method,
                            v7);
    v23 = count;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v12, v13, v14, v15, v16, v17);
    v19 = System_String__Format_63559836((System_String_o *)StringLiteral_20761/*"index({0}) の値が配列の要素数({1})を超えています"*/, v11, v18, 0);
  }
  v22 = v19;
  if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
  Fgo_Assertions_Assert__GetEffectiveAssertMessage(v22, message, v20);
}


void Fgo_Assertions_Assert__IsInRange___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_30BCED8 *method)
{
  if ( (byte_4C3CFBE & 1) == 0 )
  {
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&StringLiteral_25508/*"配列"*/);
    byte_4C3CFBE = 1;
  }
  if ( !array )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25508/*"配列"*/, message, 0);
  }
}


void Fgo_Assertions_Assert__IsInRange___Il2CppFullySharedGenericType__51105364(
        System_Collections_Generic_List_T__o *array,
        int32_t index,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_30BCE54 *method)
{
  if ( (byte_4C3CFBD & 1) == 0 )
  {
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&StringLiteral_25432/*"リスト"*/);
    byte_4C3CFBD = 1;
  }
  if ( !array )
  {
    if ( !Fgo_Assertions_Assert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Fgo_Assertions_Assert_TypeInfo);
    Fgo_Assertions_Assert__GetNullAssertMessage((System_String_o *)StringLiteral_25432/*"リスト"*/, message, 0);
  }
}


void Fgo_Assertions_Assert__IsNotNull_object_(
        Il2CppObject *value,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo_30BCF5C *method)
{
  Il2CppClass *klass; // x8
  UnityEngine_Object_c *v8; // x0
  unsigned int naturalAligment; // w10
  __int64 v10; // x9
  Il2CppObject *v11; // x0

  if ( (byte_4C3CFBF & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3CFBF = 1;
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
  if ( (byte_4C3BEF9 & 1) == 0 )
  {
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&StringLiteral_25389/*"アクション"*/);
    byte_4C3BEF9 = 1;
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
      (System_String_o *)StringLiteral_25389/*"アクション"*/,
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
        const MethodInfo_30BD020 *method)
{
  Il2CppClass *klass; // x8
  UnityEngine_Object_c *v8; // x0
  unsigned int naturalAligment; // w10
  __int64 v10; // x9
  Il2CppObject *v11; // x0

  if ( (byte_4C3CFC0 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3CFC0 = 1;
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
        const MethodInfo_30BD0E4 *method)
{
  if ( (byte_4C3CFC1 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15938/*"[SerializeField]\n{0}の参照が切れています"*/);
    byte_4C3CFC1 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_15938/*"[SerializeField]\n{0}の参照が切れています"*/, (Il2CppObject *)fieldName, 0);
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

  if ( (byte_4C3BEF2 & 1) == 0 )
  {
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Contains__);
    byte_4C3BEF2 = 1;
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
             (const MethodInfo_364BA98 *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Contains__) )
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
          (const MethodInfo_364C5A8 *)Method_System_Collections_Generic_HashSet_Assert_SuppressAssertKey__Add__);
        return;
      }
    }
    sub_1C32E7C(suppressAsserts);
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

  if ( (byte_4C3BEE5 & 1) == 0 )
  {
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&StringLiteral_25098/*"{0}\n(expected={1}, actual={2})"*/);
    byte_4C3BEE5 = 1;
  }
  v7 = System_String__Format_63559904(
         (System_String_o *)StringLiteral_25098/*"{0}\n(expected={1}, actual={2})"*/,
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
          sub_1C32E7C(v12);
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
  if ( (byte_4C3BEF4 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15915/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/);
    byte_4C3BEF4 = 1;
  }
  System_String__Format_63559836((System_String_o *)StringLiteral_15915/*"[DataEntity]\nデータ名={0}、キー名={1}が存在しません"*/, (Il2CppObject *)name, (Il2CppObject *)key, 0);
}


void Fgo_Assertions_Assert__OnFailed_48988420(
        System_String_o *caption,
        System_String_o *message,
        UnityEngine_GameObject_o *gameObject,
        System_String_o *filePath,
        int32_t line,
        const MethodInfo *method)
{
  Il2CppObject *v10; // x19
  System_String_o *v11; // x23
  Il2CppObject *FileName; // x23
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
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

  v10 = (Il2CppObject *)caption;
  if ( (byte_4C3BEE6 & 1) == 0 )
  {
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&System_IO_Path_TypeInfo);
    sub_1C32C20(&StringLiteral_25136/*"{0}({1})"*/);
    sub_1C32C20(&StringLiteral_61/*"\nGameObject:"*/);
    caption = (System_String_o *)sub_1C32C20(&StringLiteral_25099/*"{0}\n{1}\n{2}"*/);
    byte_4C3BEE6 = 1;
  }
  if ( !filePath )
    goto LABEL_27;
  v11 = System_String__Replace(filePath, 0x5Cu, 0x2Fu, 0);
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileName = (Il2CppObject *)System_IO_Path__GetFileName(v11, 0);
  v28 = line;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v13, v14, v15, v16, v17, v18);
  v20 = (Il2CppObject *)System_String__Format_63559836((System_String_o *)StringLiteral_25136/*"{0}({1})"*/, FileName, v19, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  caption = (System_String_o *)UnityEngine_Object__op_Inequality(0, (UnityEngine_Object_o *)gameObject, 0);
  if ( ((unsigned __int8)caption & 1) != 0 )
  {
    if ( !gameObject )
      goto LABEL_27;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)gameObject, 0);
    message = System_String__Concat_63556792(message, (System_String_o *)StringLiteral_61/*"\nGameObject:"*/, name, 0);
  }
  v22 = System_String__Format_63559904((System_String_o *)StringLiteral_25099/*"{0}\n{1}\n{2}"*/, v10, (Il2CppObject *)message, v20, 0);
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
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))onFailedAction->fields.invoke_impl)(
        onFailedAction->fields.method_code,
        v24,
        onFailedAction->fields.method);
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
            (onFailedSendReport = Fgo_Assertions_Assert_TypeInfo->static_fields->onFailedSendReport) != 0) )
      {
        ((void (__fastcall *)(intptr_t, Il2CppObject *, System_String_o *, Il2CppObject *, intptr_t))onFailedSendReport->fields.invoke_impl)(
          onFailedSendReport->fields.method_code,
          v10,
          v24,
          v20,
          onFailedSendReport->fields.method);
        return;
      }
LABEL_27:
      sub_1C32E7C(caption);
    }
  }
}


void Fgo_Assertions_Assert__SetOnFailedAction(System_Action_string__o *action, bool force, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Fgo_Assertions_Assert_c *v6; // x0
  Fgo_Assertions_Assert_c *v7; // x0
  struct Fgo_Assertions_Assert_StaticFields *static_fields; // x0

  if ( (byte_4C3BEE7 & 1) == 0 )
  {
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&UnityEngine_Debug_TypeInfo);
    sub_1C32C20(&StringLiteral_25479/*"既に表明違反時の処理が設定されています"*/);
    byte_4C3BEE7 = 1;
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
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_25479/*"既に表明違反時の処理が設定されています"*/, 0);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->onFailedAction, (int32_t)action, (int32_t)method, v3);
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

  if ( (byte_4C3BEE8 & 1) == 0 )
  {
    sub_1C32C20(&Fgo_Assertions_Assert_TypeInfo);
    sub_1C32C20(&UnityEngine_Debug_TypeInfo);
    sub_1C32C20(&StringLiteral_25479/*"既に表明違反時の処理が設定されています"*/);
    byte_4C3BEE8 = 1;
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
      UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_25479/*"既に表明違反時の処理が設定されています"*/, 0);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->onFailedSendReport, (int32_t)action, (int32_t)method, v3);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)aFormat, v7, v8);
  this->fields.args = aArgs;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.args, (int32_t)aArgs, v9, v10);
}


void Fgo_Assertions_Assert___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3BEFC & 1) == 0 )
  {
    sub_1C32C20(&Fgo_Assertions_Assert___c_TypeInfo);
    byte_4C3BEFC = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(Fgo_Assertions_Assert___c_TypeInfo);
  System_Object___ctor(v1, 0);
  Fgo_Assertions_Assert___c_TypeInfo->static_fields->__9 = (struct Fgo_Assertions_Assert___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)Fgo_Assertions_Assert___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C3BEFD & 1) == 0 )
  {
    sub_1C32C20(&Method___f__AnonymousType0_Object__int___ctor__);
    sub_1C32C20(&_f__AnonymousType0_Object__int__TypeInfo);
    byte_4C3BEFD = 1;
  }
  v6 = (__f__AnonymousType0__obj_j__TPar___index_j__TPar__o *)sub_1C32E6C(_f__AnonymousType0_Object__int__TypeInfo);
  _f__AnonymousType0_object__int____ctor(
    v6,
    (Il2CppObject *)obj,
    index,
    (const MethodInfo_32B8330 *)Method___f__AnonymousType0_Object__int___ctor__);
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

  if ( (byte_4C3BF03 & 1) == 0 )
  {
    sub_1C32C20(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Queue_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_Queue_string__TypeInfo);
    byte_4C3BF03 = 1;
  }
  v1 = (System_Collections_Generic_Queue_T__o *)sub_1C32E6C(System_Collections_Generic_Queue_string__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v1,
    (const MethodInfo_393F3D8 *)Method_System_Collections_Generic_Queue_string___ctor__);
  Fgo_Assertions_AssertQueue_TypeInfo->static_fields->queue = (struct System_Collections_Generic_Queue_string__o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)Fgo_Assertions_AssertQueue_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  static_fields = Fgo_Assertions_AssertQueue_TypeInfo->static_fields;
  static_fields->onFailedAction = 0;
  static_fields = (struct Fgo_Assertions_AssertQueue_StaticFields *)((char *)static_fields + 16);
  LOBYTE(static_fields[-1].onFailedAction) = 1;
  sub_1C32BC4((CGThumbnailListItem_o *)static_fields, 0, v5, v6);
}


void Fgo_Assertions_AssertQueue__Clear(const MethodInfo *method)
{
  Fgo_Assertions_AssertQueue_c *v1; // x0
  System_Collections_Generic_Queue_T__o *queue; // x0

  if ( (byte_4C3BF02 & 1) == 0 )
  {
    sub_1C32C20(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Queue_string__Clear__);
    byte_4C3BF02 = 1;
  }
  v1 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v1 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  queue = (System_Collections_Generic_Queue_T__o *)v1->static_fields->queue;
  if ( !queue )
    sub_1C32E7C(0);
  System_Collections_Generic_Queue_object___Clear(
    queue,
    (const MethodInfo_393F660 *)Method_System_Collections_Generic_Queue_string__Clear__);
}


void Fgo_Assertions_AssertQueue__Dequeue(const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *queue; // x0
  struct Fgo_Assertions_AssertQueue_StaticFields *syncRoot; // x8
  int32_t size; // w20
  Il2CppObject *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C3BF01 & 1) == 0 )
  {
    sub_1C32C20(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Queue_string__Dequeue__);
    sub_1C32C20(&Method_System_Collections_Generic_Queue_string__get_Count__);
    byte_4C3BF01 = 1;
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
        v4 = System_Collections_Generic_Queue_object___Dequeue(
               queue,
               (const MethodInfo_393FB30 *)Method_System_Collections_Generic_Queue_string__Dequeue__);
        Fgo_Assertions_AssertQueue__OnFailed((System_String_o *)v4, v5);
        return;
      }
LABEL_12:
      sub_1C32E7C(queue);
    }
  }
  syncRoot->isReady = 1;
}


void Fgo_Assertions_AssertQueue__Enqueue(System_String_o *message, const MethodInfo *method)
{
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x8
  _BOOL4 isReady; // w21

  if ( (byte_4C3BF00 & 1) == 0 )
  {
    sub_1C32C20(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Queue_string__Enqueue__);
    byte_4C3BF00 = 1;
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
    sub_1C32E7C(0);
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)static_fields->queue,
    (Il2CppObject *)message,
    (const MethodInfo_393F9A0 *)Method_System_Collections_Generic_Queue_string__Enqueue__);
}


void Fgo_Assertions_AssertQueue__OnFailed(System_String_o *message, const MethodInfo *method)
{
  Fgo_Assertions_AssertQueue_c *v3; // x0
  struct System_Action_string__o *onFailedAction; // x8
  __int64 v5; // x0

  if ( (byte_4C3BEFE & 1) == 0 )
  {
    sub_1C32C20(&Fgo_Assertions_AssertQueue_TypeInfo);
    sub_1C32C20(&UnityEngine_Debug_TypeInfo);
    sub_1C32C20(&StringLiteral_25498/*"表明違反時処理が設定されていません"*/);
    byte_4C3BEFE = 1;
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
        sub_1C32E7C(v5);
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
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_25498/*"表明違反時処理が設定されていません"*/, 0);
  }
}


void Fgo_Assertions_AssertQueue__SetOnFailedAction(System_Action_string__o *action, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  Fgo_Assertions_AssertQueue_c *v5; // x0
  struct Fgo_Assertions_AssertQueue_StaticFields *static_fields; // x0

  if ( (byte_4C3BEFF & 1) == 0 )
  {
    sub_1C32C20(&Fgo_Assertions_AssertQueue_TypeInfo);
    byte_4C3BEFF = 1;
  }
  v5 = Fgo_Assertions_AssertQueue_TypeInfo;
  if ( !Fgo_Assertions_AssertQueue_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Fgo_Assertions_AssertQueue_TypeInfo);
    v5 = Fgo_Assertions_AssertQueue_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->onFailedAction = action;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->onFailedAction, (int32_t)action, v2, v3);
}