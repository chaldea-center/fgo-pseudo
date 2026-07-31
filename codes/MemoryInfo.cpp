void MemoryInfo___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct MemoryInfo_StaticFields *static_fields; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct MemoryInfo_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct MemoryInfo_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_593A7D1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_MemoryInfo_stackMemoryInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_MemoryInfo_stackMemoryInfo__TypeInfo);
    sub_21FFC50(&MemoryInfo_TypeInfo);
    byte_593A7D1 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_MemoryInfo_stackMemoryInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_MemoryInfo_stackMemoryInfo___ctor__);
  MemoryInfo_TypeInfo->static_fields->stackMemoryInfoList = (struct System_Collections_Generic_List_MemoryInfo_stackMemoryInfo__o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)MemoryInfo_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  static_fields = MemoryInfo_TypeInfo->static_fields;
  static_fields->activityManager = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->activityManager, 0, v9, v10, v11, v12, v13, v14);
  v15 = MemoryInfo_TypeInfo->static_fields;
  v15->pids = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v15->pids, 0, v16, v17, v18, v19, v20, v21);
  v22 = MemoryInfo_TypeInfo->static_fields;
  v22->systemService = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v22->systemService, 0, v23, v24, v25, v26, v27, v28);
}


void MemoryInfo___ctor(MemoryInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_AndroidJavaObject_o *MemoryInfo__GetMemoryInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  long double v2; // q0
  _QWORD *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x0
  __int64 v6; // x0
  System_Object_array *v7; // x20
  UnityEngine_AndroidJavaObject_o *v8; // x19
  __int64 v9; // x1
  MemoryInfo_c *v10; // x0
  UnityEngine_AndroidJavaObject_o *systemService; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x21
  __int64 v21; // x1
  __int64 v23; // x0

  if ( (byte_593A7CB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&MemoryInfo_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_20696/*"getMemoryInfo"*/);
    sub_21FFC50(&StringLiteral_17426/*"android.app.ActivityManager$MemoryInfo"*/);
    byte_593A7CB = 1;
  }
  v3 = Method_System_Array_Empty_object___;
  v4 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v4 )
  {
    sub_2237B54(Method_System_Array_Empty_object___);
    v4 = v3[7];
  }
  v5 = *(_QWORD *)(v4 + 16);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_2237AF8(v2);
  if ( !*(_DWORD *)(v5 + 228) )
    *(__n128 *)&v2 = j_il2cpp_runtime_class_init_0(v5, v1);
  v6 = *(_QWORD *)(v3[7] + 16LL);
  if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
    v6 = sub_2237AF8(v2);
  v7 = **(System_Object_array ***)(v6 + 184);
  v8 = (UnityEngine_AndroidJavaObject_o *)sub_21FFEBC(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_82839756(v8, (System_String_o *)StringLiteral_17426/*"android.app.ActivityManager$MemoryInfo"*/, v7, 0);
  v10 = MemoryInfo_TypeInfo;
  if ( !*(&MemoryInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MemoryInfo_TypeInfo, v9);
    v10 = MemoryInfo_TypeInfo;
  }
  systemService = v10->static_fields->systemService;
  v12 = sub_21FFD10(object___TypeInfo, 1);
  if ( !v12 )
    goto LABEL_19;
  v20 = v12;
  if ( v8 )
  {
    v12 = sub_21FFDA4(v8, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
    if ( !v12 )
    {
      v23 = sub_21FFEF0(0, v21);
      sub_21FFD90(v23, 0);
    }
  }
  if ( !*(_DWORD *)(v20 + 24) )
    sub_21FFED4(v12);
  *(_QWORD *)(v20 + 32) = v8;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 32), (int32_t)v8, v14, v15, v16, v17, v18, v19);
  if ( !systemService )
LABEL_19:
    sub_21FFECC(v12, v13);
  UnityEngine_AndroidJavaObject__Call(
    systemService,
    (System_String_o *)StringLiteral_20696/*"getMemoryInfo"*/,
    (System_Object_array *)v20,
    0);
  return v8;
}


int64_t MemoryInfo__GetMemorySize_Active(const MethodInfo *method)
{
  return 0;
}


int64_t MemoryInfo__GetMemorySize_Available(const MethodInfo *method)
{
  __int64 v1; // x1
  MemoryInfo_c *v2; // x0
  struct MemoryInfo_StaticFields *static_fields; // x8
  UnityEngine_AndroidJavaObject_o *MemoryInfo; // x0
  __int64 v5; // x1
  int64_t v6; // x20
  UnityEngine_AndroidJavaObject_c *klass; // x8
  __int64 v8; // x9
  int *p_offset; // x10
  __int64 v10; // x0
  UnityEngine_AndroidJavaObject_o *v12; // [xsp+18h] [xbp-28h]

  if ( (byte_593A7CF & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Get_long____91478744);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&MemoryInfo_TypeInfo);
    sub_21FFC50(&StringLiteral_17639/*"availMem"*/);
    byte_593A7CF = 1;
  }
  v2 = MemoryInfo_TypeInfo;
  if ( !*(&MemoryInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MemoryInfo_TypeInfo, v1);
    v2 = MemoryInfo_TypeInfo;
  }
  static_fields = v2->static_fields;
  if ( !static_fields->activityManager )
    goto LABEL_25;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = MemoryInfo_TypeInfo;
    static_fields = MemoryInfo_TypeInfo->static_fields;
  }
  if ( !static_fields->systemService )
  {
LABEL_25:
    if ( !*(&v2->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v2, v1);
    MemoryInfo__setupNativeCall((const MethodInfo *)v2);
    v2 = MemoryInfo_TypeInfo;
  }
  if ( !*(&v2->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v2, v1);
  MemoryInfo = MemoryInfo__GetMemoryInfo((const MethodInfo *)v2);
  v12 = MemoryInfo;
  if ( !MemoryInfo )
    sub_21FFECC(0, v5);
  v6 = UnityEngine_AndroidJavaObject__Get_long_(
         MemoryInfo,
         (System_String_o *)StringLiteral_17639/*"availMem"*/,
         (const MethodInfo_36D7518 *)Method_UnityEngine_AndroidJavaObject_Get_long____91478744);
  klass = v12->klass;
  v8 = *(unsigned __int16 *)&v12->klass->_2.rank;
  if ( *(_WORD *)&v12->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_19;
    }
    v10 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_19:
    v10 = sub_2237E2C(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v10)(v12, *(_QWORD *)(v10 + 8));
  return v6;
}


int64_t MemoryInfo__GetMemorySize_Free(const MethodInfo *method)
{
  return 0;
}


int64_t MemoryInfo__GetMemorySize_Inactive(const MethodInfo *method)
{
  return 0;
}


int64_t MemoryInfo__GetMemorySize_PhysFootprint(const MethodInfo *method)
{
  return 0;
}


int64_t MemoryInfo__GetMemorySize_Purgeable(const MethodInfo *method)
{
  return 0;
}


int64_t MemoryInfo__GetMemorySize_Resident(const MethodInfo *method)
{
  __int64 v1; // x1
  MemoryInfo_c *v2; // x0

  if ( (byte_593A7CE & 1) == 0 )
  {
    sub_21FFC50(&MemoryInfo_TypeInfo);
    byte_593A7CE = 1;
  }
  v2 = MemoryInfo_TypeInfo;
  if ( !*(&MemoryInfo_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MemoryInfo_TypeInfo, v1);
  return MemoryInfo__getUsedMemorySize((const MethodInfo *)v2) << 10;
}


int64_t MemoryInfo__GetMemorySize_Wire(const MethodInfo *method)
{
  return 0;
}


void MemoryInfo__RegistCurrentMemory(System_String_o *name, const MethodInfo *method)
{
  MemoryInfo_c *v3; // x0
  System_Collections_Generic_List_object__o *stackMemoryInfoList; // x19
  float UsedMemorySizeMB; // s8
  MemoryInfo_stackMemoryInfo_o *v6; // x21
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_593A7D0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_MemoryInfo_stackMemoryInfo__Add__);
    sub_21FFC50(&MemoryInfo_TypeInfo);
    sub_21FFC50(&MemoryInfo_stackMemoryInfo_TypeInfo);
    byte_593A7D0 = 1;
  }
  v3 = MemoryInfo_TypeInfo;
  if ( !*(&MemoryInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MemoryInfo_TypeInfo, method);
    v3 = MemoryInfo_TypeInfo;
  }
  stackMemoryInfoList = (System_Collections_Generic_List_object__o *)v3->static_fields->stackMemoryInfoList;
  UsedMemorySizeMB = MemoryInfo__getUsedMemorySizeMB((const MethodInfo *)v3);
  v6 = (MemoryInfo_stackMemoryInfo_o *)sub_21FFEBC(MemoryInfo_stackMemoryInfo_TypeInfo);
  MemoryInfo_stackMemoryInfo___ctor(v6, name, UsedMemorySizeMB, v7);
  if ( !stackMemoryInfoList
    || (items = stackMemoryInfoList->fields._items,
        v17 = Method_System_Collections_Generic_List_MemoryInfo_stackMemoryInfo__Add__,
        ++stackMemoryInfoList->fields._version,
        !items) )
  {
    sub_21FFECC(v8, v9);
  }
  size = stackMemoryInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      stackMemoryInfoList,
      (Il2CppObject *)v6,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    stackMemoryInfoList->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v6;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
  }
}


int64_t MemoryInfo__getUsedMemorySize(const MethodInfo *method)
{
  __int64 v1; // x1
  MemoryInfo_c *v2; // x0
  struct MemoryInfo_StaticFields *static_fields; // x8
  UnityEngine_AndroidJavaObject_o *activityManager; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x20
  struct System_Int32_array *pids; // x21
  __int64 v15; // x1
  long double v16; // q0
  __int64 v17; // x23
  __int64 v18; // x19
  __int64 v19; // x24
  int64_t v20; // x20
  _QWORD *v21; // x22
  UnityEngine_AndroidJavaObject_o *v22; // x21
  __int64 v23; // x8
  __int64 v24; // x0
  __int64 v26; // x0

  if ( (byte_593A7CC & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject_____);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Call_int____91478568);
    sub_21FFC50(&Method_System_Array_Empty_object___);
    sub_21FFC50(&MemoryInfo_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_20741/*"getTotalPss"*/);
    sub_21FFC50(&StringLiteral_20720/*"getProcessMemoryInfo"*/);
    byte_593A7CC = 1;
  }
  v2 = MemoryInfo_TypeInfo;
  if ( !*(&MemoryInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MemoryInfo_TypeInfo, v1);
    v2 = MemoryInfo_TypeInfo;
  }
  static_fields = v2->static_fields;
  if ( !static_fields->activityManager )
    goto LABEL_41;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = MemoryInfo_TypeInfo;
    static_fields = MemoryInfo_TypeInfo->static_fields;
  }
  if ( !static_fields->pids )
  {
LABEL_41:
    if ( !*(&v2->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v2, v1);
    MemoryInfo__setupNativeCall((const MethodInfo *)v2);
    v2 = MemoryInfo_TypeInfo;
  }
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = MemoryInfo_TypeInfo;
  }
  activityManager = v2->static_fields->activityManager;
  v5 = sub_21FFD10(object___TypeInfo, 1);
  if ( !v5 )
    goto LABEL_36;
  v13 = v5;
  pids = MemoryInfo_TypeInfo->static_fields->pids;
  if ( pids )
  {
    v5 = sub_21FFDA4(pids, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !v5 )
    {
      v26 = sub_21FFEF0(0, v15);
      sub_21FFD90(v26, 0);
    }
  }
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_37;
  *(_QWORD *)(v13 + 32) = pids;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)pids, v7, v8, v9, v10, v11, v12);
  if ( !activityManager
    || (v5 = (__int64)UnityEngine_AndroidJavaObject__Call_object_(
                        activityManager,
                        (System_String_o *)StringLiteral_20720/*"getProcessMemoryInfo"*/,
                        (System_Object_array *)v13,
                        (const MethodInfo_36D5738 *)Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject_____)) == 0 )
  {
LABEL_36:
    sub_21FFECC(v5, v6);
  }
  v17 = *(_QWORD *)(v5 + 24);
  v18 = v5;
  if ( (int)v17 >= 1 )
  {
    v19 = 0;
    v20 = 0;
    while ( (unsigned int)v19 < *(_DWORD *)(v18 + 24) )
    {
      v21 = Method_System_Array_Empty_object___;
      v22 = *(UnityEngine_AndroidJavaObject_o **)(v18 + 32 + 8 * v19);
      v23 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v23 )
      {
        sub_2237B54(Method_System_Array_Empty_object___);
        v23 = v21[7];
      }
      v24 = *(_QWORD *)(v23 + 16);
      if ( (*(_WORD *)(v24 + 309) & 1) == 0 )
        v24 = sub_2237AF8(v16);
      if ( !*(_DWORD *)(v24 + 228) )
        *(__n128 *)&v16 = j_il2cpp_runtime_class_init_0(v24, v6);
      v5 = *(_QWORD *)(v21[7] + 16LL);
      if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
        v5 = sub_2237AF8(v16);
      if ( !v22 )
        goto LABEL_36;
      v5 = UnityEngine_AndroidJavaObject__Call_int_(
             v22,
             (System_String_o *)StringLiteral_20741/*"getTotalPss"*/,
             **(System_Object_array ***)(v5 + 184),
             (const MethodInfo_36D55F8 *)Method_UnityEngine_AndroidJavaObject_Call_int____91478568);
      ++v19;
      v20 += (int)v5;
      if ( (_DWORD)v17 == (_DWORD)v19 )
        return v20;
    }
LABEL_37:
    sub_21FFED4(v5);
  }
  return 0;
}


float MemoryInfo__getUsedMemorySizeMB(const MethodInfo *method)
{
  __int64 v1; // x1
  MemoryInfo_c *v2; // x0

  if ( (byte_593A7CD & 1) == 0 )
  {
    sub_21FFC50(&MemoryInfo_TypeInfo);
    byte_593A7CD = 1;
  }
  v2 = MemoryInfo_TypeInfo;
  if ( !*(&MemoryInfo_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MemoryInfo_TypeInfo, v1);
  return vcvts_n_f32_s64(MemoryInfo__getUsedMemorySize((const MethodInfo *)v2), 0xAu);
}


void MemoryInfo__setupNativeCall(const MethodInfo *method)
{
  UnityEngine_AndroidJavaClass_o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  UnityEngine_AndroidJavaClass_o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x20
  __int64 v17; // x1
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  Il2CppObject *v25; // x19
  MemoryInfo_c *v26; // x0
  struct MemoryInfo_StaticFields *static_fields; // x0
  __int64 v28; // x19
  System_Diagnostics_Process_o *CurrentProcess; // x0
  __int64 v30; // x1
  __int64 Id; // x0
  __int64 v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  MemoryInfo_c *v39; // x8
  struct MemoryInfo_StaticFields *v40; // x8
  __int64 v41; // x0
  __int64 v42; // x1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_Object_array *v49; // x20
  __int64 v50; // x0
  __int64 v51; // x1
  int32_t v52; // w1
  Il2CppObject *v53; // x1
  struct MemoryInfo_StaticFields *v54; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  UnityEngine_AndroidJavaClass_c *klass; // x8
  __int64 v62; // x9
  int *p_offset; // x10
  __int64 v64; // x0
  Il2CppClass *v65; // x8
  __int64 v66; // x9
  int32_t *v67; // x10
  __int64 v68; // x0
  UnityEngine_AndroidJavaClass_c *v69; // x8
  __int64 v70; // x9
  int *v71; // x10
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 v74; // x0
  UnityEngine_AndroidJavaClass_o *v75; // [xsp+38h] [xbp-58h]
  Il2CppObject *Static_object; // [xsp+40h] [xbp-50h]
  UnityEngine_AndroidJavaClass_o *v77; // [xsp+48h] [xbp-48h]

  if ( (byte_593A7CA & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject____91478512);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_GetStatic_string___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&MemoryInfo_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_1996/*"ACTIVITY_SERVICE"*/);
    sub_21FFC50(&StringLiteral_18888/*"com.unity3d.player.UnityPlayer"*/);
    sub_21FFC50(&StringLiteral_17430/*"android.content.Context"*/);
    sub_21FFC50(&StringLiteral_17303/*"activity"*/);
    sub_21FFC50(&StringLiteral_20737/*"getSystemService"*/);
    sub_21FFC50(&StringLiteral_19193/*"currentActivity"*/);
    byte_593A7CA = 1;
  }
  v1 = (UnityEngine_AndroidJavaClass_o *)sub_21FFEBC(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v1, (System_String_o *)StringLiteral_18888/*"com.unity3d.player.UnityPlayer"*/, 0);
  v77 = v1;
  if ( !v1 )
    sub_21FFECC(v2, v3);
  Static_object = UnityEngine_AndroidJavaObject__GetStatic_object_(
                    (UnityEngine_AndroidJavaObject_o *)v1,
                    (System_String_o *)StringLiteral_19193/*"currentActivity"*/,
                    (const MethodInfo_36D7798 *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v4 = (UnityEngine_AndroidJavaClass_o *)sub_21FFEBC(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v4, (System_String_o *)StringLiteral_17430/*"android.content.Context"*/, 0);
  v75 = v4;
  if ( !v4 )
    sub_21FFECC(v5, v6);
  v7 = UnityEngine_AndroidJavaObject__GetStatic_object_(
         (UnityEngine_AndroidJavaObject_o *)v4,
         (System_String_o *)StringLiteral_1996/*"ACTIVITY_SERVICE"*/,
         (const MethodInfo_36D7798 *)Method_UnityEngine_AndroidJavaObject_GetStatic_string___);
  v8 = sub_21FFD10(object___TypeInfo, 1);
  v16 = v8;
  if ( !v8 )
    goto LABEL_42;
  if ( v7 )
  {
    v8 = sub_21FFDA4(v7, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
    if ( !v8 )
    {
      v73 = sub_21FFEF0(0, v17);
      sub_21FFD90(v73, 0);
    }
  }
  if ( !*(_DWORD *)(v16 + 24) )
    sub_21FFED4(v8);
  *(_QWORD *)(v16 + 32) = v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v16 + 32), (int32_t)v7, v10, v11, v12, v13, v14, v15);
  if ( !Static_object )
LABEL_42:
    sub_21FFECC(v8, v9);
  v25 = UnityEngine_AndroidJavaObject__Call_object_(
          (UnityEngine_AndroidJavaObject_o *)Static_object,
          (System_String_o *)StringLiteral_20737/*"getSystemService"*/,
          (System_Object_array *)v16,
          (const MethodInfo_36D5738 *)Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject____91478512);
  v26 = MemoryInfo_TypeInfo;
  if ( !*(&MemoryInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MemoryInfo_TypeInfo, v18);
    v26 = MemoryInfo_TypeInfo;
  }
  static_fields = v26->static_fields;
  static_fields->activityManager = (struct UnityEngine_AndroidJavaObject_o *)v25;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->activityManager,
    (int32_t)v25,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v28 = sub_21FFD10(int___TypeInfo, 1);
  CurrentProcess = System_Diagnostics_Process__GetCurrentProcess(0);
  if ( !CurrentProcess )
    sub_21FFECC(0, v30);
  Id = System_Diagnostics_Process__get_Id(CurrentProcess, 0);
  if ( !v28 )
    sub_21FFECC(Id, v32);
  if ( !*(_DWORD *)(v28 + 24) )
    sub_21FFED4(Id);
  v39 = MemoryInfo_TypeInfo;
  *(_DWORD *)(v28 + 32) = Id;
  v40 = v39->static_fields;
  v40->pids = (struct System_Int32_array *)v28;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v40->pids, v28, v33, v34, v35, v36, v37, v38);
  v41 = sub_21FFD10(object___TypeInfo, 1);
  v49 = (System_Object_array *)v41;
  if ( !v41 )
    sub_21FFECC(0, v42);
  v50 = StringLiteral_17303/*"activity"*/;
  if ( StringLiteral_17303/*"activity"*/ )
  {
    v50 = sub_21FFDA4(StringLiteral_17303/*"activity"*/, v49->obj.klass->_1.element_class);
    if ( !v50 )
    {
      v74 = sub_21FFEF0(0, v51);
      sub_21FFD90(v74, 0);
    }
  }
  if ( !LODWORD(v49->max_length) )
    sub_21FFED4(v50);
  v52 = StringLiteral_17303/*"activity"*/;
  v49->m_Items[0] = (Il2CppObject *)StringLiteral_17303/*"activity"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v49->m_Items, v52, v43, v44, v45, v46, v47, v48);
  v53 = UnityEngine_AndroidJavaObject__Call_object_(
          (UnityEngine_AndroidJavaObject_o *)Static_object,
          (System_String_o *)StringLiteral_20737/*"getSystemService"*/,
          v49,
          (const MethodInfo_36D5738 *)Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject____91478512);
  v54 = MemoryInfo_TypeInfo->static_fields;
  v54->systemService = (struct UnityEngine_AndroidJavaObject_o *)v53;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v54->systemService, (int32_t)v53, v55, v56, v57, v58, v59, v60);
  if ( v75 )
  {
    klass = v75->klass;
    v62 = *(unsigned __int16 *)&v75->klass->_2.rank;
    if ( *(_WORD *)&v75->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v62;
        p_offset += 4;
        if ( !v62 )
          goto LABEL_24;
      }
      v64 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_24:
      v64 = sub_2237E2C(v75, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v64)(v75, *(_QWORD *)(v64 + 8));
  }
  v65 = Static_object->klass;
  v66 = *(unsigned __int16 *)&Static_object->klass->_2.rank;
  if ( *(_WORD *)&Static_object->klass->_2.rank )
  {
    v67 = &v65->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      --v66;
      v67 += 4;
      if ( !v66 )
        goto LABEL_31;
    }
    v68 = (__int64)&v65->vtable[*v67];
  }
  else
  {
LABEL_31:
    v68 = sub_2237E2C(Static_object, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(Il2CppObject *, _QWORD))v68)(Static_object, *(_QWORD *)(v68 + 8));
  if ( v77 )
  {
    v69 = v77->klass;
    v70 = *(unsigned __int16 *)&v77->klass->_2.rank;
    if ( *(_WORD *)&v77->klass->_2.rank )
    {
      v71 = &v69->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
      {
        --v70;
        v71 += 4;
        if ( !v70 )
          goto LABEL_38;
      }
      v72 = (__int64)&v69->vtable + 16 * *v71;
    }
    else
    {
LABEL_38:
      v72 = sub_2237E2C(v77, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v72)(v77, *(_QWORD *)(v72 + 8));
  }
}


void MemoryInfo_stackMemoryInfo___ctor(
        MemoryInfo_stackMemoryInfo_o *this,
        System_String_o *k,
        float v,
        const MethodInfo *method)
{
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_String_o **v12; // x8
  struct System_String_o *v13; // x1
  MissionNaviTransitionBoardItem_o *p_fields; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  v12 = *(struct System_String_o ***)(qword_594C0B8 + 184);
  v13 = *v12;
  this->fields.key = *v12;
  p_fields = (MissionNaviTransitionBoardItem_o *)&this->fields;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)v13,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  System_Object___ctor((Il2CppObject *)this, 0);
  p_fields->klass = (MissionNaviTransitionBoardItem_c *)k;
  sub_21FFBF4(p_fields, (int32_t)k, v15, v16, v17, v18, v19, v20);
  this->fields.usedMemory = v;
}


System_String_o *MemoryInfo_stackMemoryInfo__ToString(MemoryInfo_stackMemoryInfo_o *this, const MethodInfo *method)
{
  float usedMemory; // s0
  Il2CppObject *key; // x19
  Il2CppObject *v5; // x0
  float v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593A7D2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26534/*"{0}={1}"*/);
    byte_593A7D2 = 1;
  }
  usedMemory = this->fields.usedMemory;
  key = (Il2CppObject *)this->fields.key;
  v7 = usedMemory;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C0A0, &v7);
  return System_String__Format_75484576((System_String_o *)StringLiteral_26534/*"{0}={1}"*/, key, v5, 0);
}