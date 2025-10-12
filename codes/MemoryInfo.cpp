void MemoryInfo___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct MemoryInfo_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct MemoryInfo_StaticFields *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct MemoryInfo_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C39A99 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_MemoryInfo_stackMemoryInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_MemoryInfo_stackMemoryInfo__TypeInfo);
    sub_1C32C20(&MemoryInfo_TypeInfo);
    byte_4C39A99 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_MemoryInfo_stackMemoryInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_MemoryInfo_stackMemoryInfo___ctor__);
  MemoryInfo_TypeInfo->static_fields->stackMemoryInfoList = (struct System_Collections_Generic_List_MemoryInfo_stackMemoryInfo__o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)MemoryInfo_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  static_fields = MemoryInfo_TypeInfo->static_fields;
  static_fields->activityManager = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->activityManager, 0, v5, v6);
  v7 = MemoryInfo_TypeInfo->static_fields;
  v7->pids = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v7->pids, 0, v8, v9);
  v10 = MemoryInfo_TypeInfo->static_fields;
  v10->systemService = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->systemService, 0, v11, v12);
}


void MemoryInfo___ctor(MemoryInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_AndroidJavaObject_o *MemoryInfo__GetMemoryInfo(const MethodInfo *method)
{
  long double inited; // q0
  _QWORD *v2; // x19
  __int64 v3; // x8
  __int64 v4; // x0
  __int64 v5; // x0
  System_Object_array *v6; // x20
  UnityEngine_AndroidJavaObject_o *v7; // x19
  MemoryInfo_c *v8; // x0
  UnityEngine_AndroidJavaObject_o *systemService; // x20
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x21
  __int64 v15; // x0

  if ( (byte_4C39A93 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_1C32C20(&Method_System_Array_Empty_object___);
    sub_1C32C20(&MemoryInfo_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&StringLiteral_19804/*"getMemoryInfo"*/);
    sub_1C32C20(&StringLiteral_16751/*"android.app.ActivityManager$MemoryInfo"*/);
    byte_4C39A93 = 1;
  }
  v2 = Method_System_Array_Empty_object___;
  v3 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v3 )
  {
    sub_1C83390(Method_System_Array_Empty_object___);
    v3 = v2[7];
  }
  v4 = *(_QWORD *)(v3 + 16);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C83334(inited);
  if ( !*(_DWORD *)(v4 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v4);
  v5 = *(_QWORD *)(v2[7] + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C83334(inited);
  v6 = **(System_Object_array ***)(v5 + 184);
  v7 = (UnityEngine_AndroidJavaObject_o *)sub_1C32E6C(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_70952336(v7, (System_String_o *)StringLiteral_16751/*"android.app.ActivityManager$MemoryInfo"*/, v6, 0);
  v8 = MemoryInfo_TypeInfo;
  if ( !MemoryInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MemoryInfo_TypeInfo);
    v8 = MemoryInfo_TypeInfo;
  }
  systemService = v8->static_fields->systemService;
  v10 = sub_1C32CC8(object___TypeInfo, 1);
  if ( !v10 )
    goto LABEL_19;
  v13 = v10;
  if ( v7 )
  {
    v10 = sub_1C32D5C(v7, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
    if ( !v10 )
    {
      v15 = sub_1C32EA0(0);
      sub_1C32D48(v15, 0);
    }
  }
  if ( !*(_DWORD *)(v13 + 24) )
    sub_1C32E84(v10);
  *(_QWORD *)(v13 + 32) = v7;
  sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 32), (int32_t)v7, v11, v12);
  if ( !systemService )
LABEL_19:
    sub_1C32E7C(v10);
  UnityEngine_AndroidJavaObject__Call(
    systemService,
    (System_String_o *)StringLiteral_19804/*"getMemoryInfo"*/,
    (System_Object_array *)v13,
    0);
  return v7;
}


int64_t MemoryInfo__GetMemorySize_Active(const MethodInfo *method)
{
  return 0;
}


int64_t MemoryInfo__GetMemorySize_Available(const MethodInfo *method)
{
  MemoryInfo_c *v1; // x0
  struct MemoryInfo_StaticFields *static_fields; // x8
  UnityEngine_AndroidJavaObject_o *MemoryInfo; // x0
  UnityEngine_AndroidJavaObject_o *v4; // x19
  int64_t v5; // x21
  UnityEngine_AndroidJavaObject_c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0

  if ( (byte_4C39A97 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_AndroidJavaObject_Get_long____78056136);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&MemoryInfo_TypeInfo);
    sub_1C32C20(&StringLiteral_16957/*"availMem"*/);
    byte_4C39A97 = 1;
  }
  v1 = MemoryInfo_TypeInfo;
  if ( !MemoryInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MemoryInfo_TypeInfo);
    v1 = MemoryInfo_TypeInfo;
  }
  static_fields = v1->static_fields;
  if ( !static_fields->activityManager )
    goto LABEL_25;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = MemoryInfo_TypeInfo;
    static_fields = MemoryInfo_TypeInfo->static_fields;
  }
  if ( !static_fields->systemService )
  {
LABEL_25:
    if ( !v1->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v1);
    MemoryInfo__setupNativeCall((const MethodInfo *)v1);
    v1 = MemoryInfo_TypeInfo;
  }
  if ( !v1->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v1);
  MemoryInfo = MemoryInfo__GetMemoryInfo((const MethodInfo *)v1);
  v4 = MemoryInfo;
  if ( !MemoryInfo )
    sub_1C32E7C(0);
  v5 = UnityEngine_AndroidJavaObject__Get_long_(
         MemoryInfo,
         (System_String_o *)StringLiteral_16957/*"availMem"*/,
         (const MethodInfo_302F43C *)Method_UnityEngine_AndroidJavaObject_Get_long____78056136);
  klass = v4->klass;
  v7 = *(unsigned __int16 *)&v4->klass->_2.rank;
  if ( *(_WORD *)&v4->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_19;
    }
    v9 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_19:
    v9 = sub_1C83438(v4, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v9)(v4, *(_QWORD *)(v9 + 8));
  return v5;
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
  MemoryInfo_c *v1; // x0

  if ( (byte_4C39A96 & 1) == 0 )
  {
    sub_1C32C20(&MemoryInfo_TypeInfo);
    byte_4C39A96 = 1;
  }
  v1 = MemoryInfo_TypeInfo;
  if ( !MemoryInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MemoryInfo_TypeInfo);
  return MemoryInfo__getUsedMemorySize((const MethodInfo *)v1) << 10;
}


int64_t MemoryInfo__GetMemorySize_Wire(const MethodInfo *method)
{
  return 0;
}


void MemoryInfo__RegistCurrentMemory(System_String_o *name, const MethodInfo *method)
{
  MemoryInfo_c *v3; // x0
  System_Collections_Generic_List_object__o *stackMemoryInfoList; // x20
  float UsedMemorySizeMB; // s8
  MemoryInfo_stackMemoryInfo_o *v6; // x21
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C39A98 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_MemoryInfo_stackMemoryInfo__Add__);
    sub_1C32C20(&MemoryInfo_TypeInfo);
    sub_1C32C20(&MemoryInfo_stackMemoryInfo_TypeInfo);
    byte_4C39A98 = 1;
  }
  v3 = MemoryInfo_TypeInfo;
  if ( !MemoryInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MemoryInfo_TypeInfo);
    v3 = MemoryInfo_TypeInfo;
  }
  stackMemoryInfoList = (System_Collections_Generic_List_object__o *)v3->static_fields->stackMemoryInfoList;
  UsedMemorySizeMB = MemoryInfo__getUsedMemorySizeMB((const MethodInfo *)v3);
  v6 = (MemoryInfo_stackMemoryInfo_o *)sub_1C32E6C(MemoryInfo_stackMemoryInfo_TypeInfo);
  MemoryInfo_stackMemoryInfo___ctor(v6, name, UsedMemorySizeMB, v7);
  if ( !stackMemoryInfoList
    || (items = stackMemoryInfoList->fields._items,
        v12 = Method_System_Collections_Generic_List_MemoryInfo_stackMemoryInfo__Add__,
        ++stackMemoryInfoList->fields._version,
        !items) )
  {
    sub_1C32E7C(v8);
  }
  size = stackMemoryInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      stackMemoryInfoList,
      (Il2CppObject *)v6,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    stackMemoryInfoList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v6;
    sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v6, v9, v10);
  }
}


int64_t MemoryInfo__getUsedMemorySize(const MethodInfo *method)
{
  MemoryInfo_c *v1; // x0
  struct MemoryInfo_StaticFields *static_fields; // x8
  UnityEngine_AndroidJavaObject_o *activityManager; // x19
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x20
  struct System_Int32_array *pids; // x21
  long double inited; // q0
  __int64 v10; // x8
  __int64 v11; // x19
  int v12; // w23
  int v13; // w24
  int64_t v14; // x20
  _QWORD *v15; // x22
  UnityEngine_AndroidJavaObject_o *v16; // x21
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 v20; // x0

  if ( (byte_4C39A94 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject_____);
    sub_1C32C20(&Method_UnityEngine_AndroidJavaObject_Call_int____78055960);
    sub_1C32C20(&Method_System_Array_Empty_object___);
    sub_1C32C20(&MemoryInfo_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&StringLiteral_19849/*"getTotalPss"*/);
    sub_1C32C20(&StringLiteral_19828/*"getProcessMemoryInfo"*/);
    byte_4C39A94 = 1;
  }
  v1 = MemoryInfo_TypeInfo;
  if ( !MemoryInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MemoryInfo_TypeInfo);
    v1 = MemoryInfo_TypeInfo;
  }
  static_fields = v1->static_fields;
  if ( !static_fields->activityManager )
    goto LABEL_40;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = MemoryInfo_TypeInfo;
    static_fields = MemoryInfo_TypeInfo->static_fields;
  }
  if ( !static_fields->pids )
  {
LABEL_40:
    if ( !v1->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v1);
    MemoryInfo__setupNativeCall((const MethodInfo *)v1);
    v1 = MemoryInfo_TypeInfo;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = MemoryInfo_TypeInfo;
  }
  activityManager = v1->static_fields->activityManager;
  v4 = sub_1C32CC8(object___TypeInfo, 1);
  if ( !v4 )
    goto LABEL_36;
  v7 = v4;
  pids = MemoryInfo_TypeInfo->static_fields->pids;
  if ( pids )
  {
    v4 = sub_1C32D5C(pids, *(_QWORD *)(*(_QWORD *)v4 + 64LL));
    if ( !v4 )
    {
      v20 = sub_1C32EA0(0);
      sub_1C32D48(v20, 0);
    }
  }
  if ( !*(_DWORD *)(v7 + 24) )
LABEL_33:
    sub_1C32E84(v4);
  *(_QWORD *)(v7 + 32) = pids;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 32), (int32_t)pids, v5, v6);
  if ( !activityManager
    || (v4 = (__int64)UnityEngine_AndroidJavaObject__Call_object_(
                        activityManager,
                        (System_String_o *)StringLiteral_19828/*"getProcessMemoryInfo"*/,
                        (System_Object_array *)v7,
                        (const MethodInfo_302D5C4 *)Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject_____)) == 0 )
  {
LABEL_36:
    sub_1C32E7C(v4);
  }
  v10 = *(_QWORD *)(v4 + 24);
  v11 = v4;
  v12 = v10 - 1;
  if ( (int)v10 >= 1 )
  {
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      v15 = Method_System_Array_Empty_object___;
      v16 = *(UnityEngine_AndroidJavaObject_o **)(v11 + 8LL * v13 + 32);
      v17 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v17 )
      {
        sub_1C83390(Method_System_Array_Empty_object___);
        v17 = v15[7];
      }
      v18 = *(_QWORD *)(v17 + 16);
      if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
        v18 = sub_1C83334(inited);
      if ( !*(_DWORD *)(v18 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v18);
      v4 = *(_QWORD *)(v15[7] + 16LL);
      if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
        v4 = sub_1C83334(inited);
      if ( !v16 )
        goto LABEL_36;
      v4 = UnityEngine_AndroidJavaObject__Call_int_(
             v16,
             (System_String_o *)StringLiteral_19849/*"getTotalPss"*/,
             **(System_Object_array ***)(v4 + 184),
             (const MethodInfo_302D484 *)Method_UnityEngine_AndroidJavaObject_Call_int____78055960);
      v14 += (int)v4;
      if ( v12 == v13 )
        return v14;
      if ( (unsigned int)++v13 >= *(_DWORD *)(v11 + 24) )
        goto LABEL_33;
    }
  }
  return 0;
}


float MemoryInfo__getUsedMemorySizeMB(const MethodInfo *method)
{
  MemoryInfo_c *v1; // x0

  if ( (byte_4C39A95 & 1) == 0 )
  {
    sub_1C32C20(&MemoryInfo_TypeInfo);
    byte_4C39A95 = 1;
  }
  v1 = MemoryInfo_TypeInfo;
  if ( !MemoryInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MemoryInfo_TypeInfo);
  return (float)MemoryInfo__getUsedMemorySize((const MethodInfo *)v1) * 0.00097656;
}


void MemoryInfo__setupNativeCall(const MethodInfo *method)
{
  UnityEngine_AndroidJavaClass_o *v1; // x19
  __int64 v2; // x0
  Il2CppObject *Static_object; // x20
  UnityEngine_AndroidJavaClass_o *v4; // x21
  __int64 v5; // x0
  Il2CppObject *v6; // x23
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x22
  __int64 v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x22
  MemoryInfo_c *v15; // x0
  struct MemoryInfo_StaticFields *static_fields; // x0
  __int64 v17; // x22
  System_Diagnostics_Process_o *CurrentProcess; // x0
  __int64 Id; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct MemoryInfo_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Object_array *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  Il2CppObject *v28; // x1
  struct MemoryInfo_StaticFields *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  UnityEngine_AndroidJavaClass_c *klass; // x8
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 v35; // x0
  Il2CppClass *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  UnityEngine_AndroidJavaClass_c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x0

  if ( (byte_4C39A92 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject____78055904);
    sub_1C32C20(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    sub_1C32C20(&Method_UnityEngine_AndroidJavaObject_GetStatic_string___);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&MemoryInfo_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&StringLiteral_1916/*"ACTIVITY_SERVICE"*/);
    sub_1C32C20(&StringLiteral_18117/*"com.unity3d.player.UnityPlayer"*/);
    sub_1C32C20(&StringLiteral_16755/*"android.content.Context"*/);
    sub_1C32C20(&StringLiteral_16660/*"activity"*/);
    sub_1C32C20(&StringLiteral_19845/*"getSystemService"*/);
    sub_1C32C20(&StringLiteral_18401/*"currentActivity"*/);
    byte_4C39A92 = 1;
  }
  v1 = (UnityEngine_AndroidJavaClass_o *)sub_1C32E6C(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v1, (System_String_o *)StringLiteral_18117/*"com.unity3d.player.UnityPlayer"*/, 0);
  if ( !v1 )
    sub_1C32E7C(v2);
  Static_object = UnityEngine_AndroidJavaObject__GetStatic_object_(
                    (UnityEngine_AndroidJavaObject_o *)v1,
                    (System_String_o *)StringLiteral_18401/*"currentActivity"*/,
                    (const MethodInfo_302F74C *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v4 = (UnityEngine_AndroidJavaClass_o *)sub_1C32E6C(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v4, (System_String_o *)StringLiteral_16755/*"android.content.Context"*/, 0);
  if ( !v4 )
    sub_1C32E7C(v5);
  v6 = UnityEngine_AndroidJavaObject__GetStatic_object_(
         (UnityEngine_AndroidJavaObject_o *)v4,
         (System_String_o *)StringLiteral_1916/*"ACTIVITY_SERVICE"*/,
         (const MethodInfo_302F74C *)Method_UnityEngine_AndroidJavaObject_GetStatic_string___);
  v7 = sub_1C32CC8(object___TypeInfo, 1);
  v10 = v7;
  if ( !v7 )
    sub_1C32E7C(0);
  if ( v6 )
  {
    v7 = sub_1C32D5C(v6, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
    if ( !v7 )
    {
      v44 = sub_1C32EA0(0);
      sub_1C32D48(v44, 0);
    }
  }
  if ( !*(_DWORD *)(v10 + 24) )
    sub_1C32E84(v7);
  *(_QWORD *)(v10 + 32) = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 32), (int32_t)v6, v8, v9);
  if ( !Static_object )
    sub_1C32E7C(v11);
  v14 = UnityEngine_AndroidJavaObject__Call_object_(
          (UnityEngine_AndroidJavaObject_o *)Static_object,
          (System_String_o *)StringLiteral_19845/*"getSystemService"*/,
          (System_Object_array *)v10,
          (const MethodInfo_302D5C4 *)Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject____78055904);
  v15 = MemoryInfo_TypeInfo;
  if ( !MemoryInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MemoryInfo_TypeInfo);
    v15 = MemoryInfo_TypeInfo;
  }
  static_fields = v15->static_fields;
  static_fields->activityManager = (struct UnityEngine_AndroidJavaObject_o *)v14;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->activityManager, (int32_t)v14, v12, v13);
  v17 = sub_1C32CC8(int___TypeInfo, 1);
  CurrentProcess = System_Diagnostics_Process__GetCurrentProcess(0);
  if ( !CurrentProcess )
    sub_1C32E7C(0);
  Id = System_Diagnostics_Process__get_Id(CurrentProcess, 0);
  if ( !v17 )
    sub_1C32E7C(Id);
  if ( !*(_DWORD *)(v17 + 24) )
    sub_1C32E84(Id);
  *(_DWORD *)(v17 + 32) = Id;
  v22 = MemoryInfo_TypeInfo->static_fields;
  v22->pids = (struct System_Int32_array *)v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&v22->pids, v17, v20, v21);
  v25 = (System_Object_array *)sub_1C32CC8(object___TypeInfo, 1);
  if ( !v25 )
    sub_1C32E7C(0);
  v26 = StringLiteral_16660/*"activity"*/;
  if ( StringLiteral_16660/*"activity"*/ )
  {
    v26 = sub_1C32D5C(StringLiteral_16660/*"activity"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
    {
      v45 = sub_1C32EA0(0);
      sub_1C32D48(v45, 0);
    }
    v27 = StringLiteral_16660/*"activity"*/;
  }
  else
  {
    v27 = 0;
  }
  if ( !LODWORD(v25->max_length) )
    sub_1C32E84(v26);
  v25->m_Items[0] = (Il2CppObject *)v27;
  sub_1C32BC4((CGThumbnailListItem_o *)v25->m_Items, v27, v23, v24);
  v28 = UnityEngine_AndroidJavaObject__Call_object_(
          (UnityEngine_AndroidJavaObject_o *)Static_object,
          (System_String_o *)StringLiteral_19845/*"getSystemService"*/,
          v25,
          (const MethodInfo_302D5C4 *)Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject____78055904);
  v29 = MemoryInfo_TypeInfo->static_fields;
  v29->systemService = (struct UnityEngine_AndroidJavaObject_o *)v28;
  sub_1C32BC4((CGThumbnailListItem_o *)&v29->systemService, (int32_t)v28, v30, v31);
  klass = v4->klass;
  v33 = *(unsigned __int16 *)&v4->klass->_2.rank;
  if ( *(_WORD *)&v4->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      p_offset += 4;
      if ( !v33 )
        goto LABEL_25;
    }
    v35 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_25:
    v35 = sub_1C83438(v4, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v35)(v4, *(_QWORD *)(v35 + 8));
  v36 = Static_object->klass;
  v37 = *(unsigned __int16 *)&Static_object->klass->_2.rank;
  if ( *(_WORD *)&Static_object->klass->_2.rank )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_31;
    }
    v39 = (__int64)&v36->vtable[*v38];
  }
  else
  {
LABEL_31:
    v39 = sub_1C83438(Static_object, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(Il2CppObject *, _QWORD))v39)(Static_object, *(_QWORD *)(v39 + 8));
  v40 = v1->klass;
  v41 = *(unsigned __int16 *)&v1->klass->_2.rank;
  if ( *(_WORD *)&v1->klass->_2.rank )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_37;
    }
    v43 = (__int64)&v40->vtable + 16 * *v42;
  }
  else
  {
LABEL_37:
    v43 = sub_1C83438(v1, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v43)(v1, *(_QWORD *)(v43 + 8));
}


void MemoryInfo_stackMemoryInfo___ctor(
        MemoryInfo_stackMemoryInfo_o *this,
        System_String_o *k,
        float v,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C39A9A & 1) == 0 )
  {
    sub_1C32C20(&string_TypeInfo);
    byte_4C39A9A = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.key = static_fields->Empty;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)Empty, (int32_t)method, v4);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.key = k;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)k, v10, v11);
  this->fields.usedMemory = v;
}


System_String_o *MemoryInfo_stackMemoryInfo__ToString(MemoryInfo_stackMemoryInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *key; // x20
  Il2CppObject *v10; // x0
  float usedMemory; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C39A9B & 1) == 0 )
  {
    sub_1C32C20(&float_TypeInfo);
    sub_1C32C20(&StringLiteral_25184/*"{0}={1}"*/);
    byte_4C39A9B = 1;
  }
  key = (Il2CppObject *)this->fields.key;
  usedMemory = this->fields.usedMemory;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &usedMemory, v2, v3, v4, v5, v6, v7);
  return System_String__Format_63559836((System_String_o *)StringLiteral_25184/*"{0}={1}"*/, key, v10, 0);
}