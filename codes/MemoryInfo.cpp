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

  if ( (byte_4C58E5F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_MemoryInfo_stackMemoryInfo___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_MemoryInfo_stackMemoryInfo__TypeInfo);
    sub_1C3E564(&MemoryInfo_TypeInfo);
    byte_4C58E5F = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_MemoryInfo_stackMemoryInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_MemoryInfo_stackMemoryInfo___ctor__);
  MemoryInfo_TypeInfo->static_fields->stackMemoryInfoList = (struct System_Collections_Generic_List_MemoryInfo_stackMemoryInfo__o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)MemoryInfo_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  static_fields = MemoryInfo_TypeInfo->static_fields;
  static_fields->activityManager = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->activityManager, 0, v5, v6);
  v7 = MemoryInfo_TypeInfo->static_fields;
  v7->pids = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v7->pids, 0, v8, v9);
  v10 = MemoryInfo_TypeInfo->static_fields;
  v10->systemService = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->systemService, 0, v11, v12);
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
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x21
  __int64 v16; // x0

  if ( (byte_4C58E59 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_1C3E564(&Method_System_Array_Empty_object___);
    sub_1C3E564(&MemoryInfo_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&StringLiteral_19825/*"getMemoryInfo"*/);
    sub_1C3E564(&StringLiteral_16768/*"android.app.ActivityManager$MemoryInfo"*/);
    byte_4C58E59 = 1;
  }
  v2 = Method_System_Array_Empty_object___;
  v3 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v3 )
  {
    sub_1C8ECD4(Method_System_Array_Empty_object___);
    v3 = v2[7];
  }
  v4 = *(_QWORD *)(v3 + 16);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C8EC78(inited);
  if ( !*(_DWORD *)(v4 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v4);
  v5 = *(_QWORD *)(v2[7] + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C8EC78(inited);
  v6 = **(System_Object_array ***)(v5 + 184);
  v7 = (UnityEngine_AndroidJavaObject_o *)sub_1C3E7B0(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_71070260(v7, (System_String_o *)StringLiteral_16768/*"android.app.ActivityManager$MemoryInfo"*/, v6, 0);
  v8 = MemoryInfo_TypeInfo;
  if ( !MemoryInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MemoryInfo_TypeInfo);
    v8 = MemoryInfo_TypeInfo;
  }
  systemService = v8->static_fields->systemService;
  v10 = sub_1C3E60C(object___TypeInfo, 1);
  if ( !v10 )
    goto LABEL_19;
  v14 = v10;
  if ( v7 )
  {
    v10 = sub_1C3E6A0(v7, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
    if ( !v10 )
    {
      v16 = sub_1C3E7E4(0);
      sub_1C3E68C(v16, 0);
    }
  }
  if ( !*(_DWORD *)(v14 + 24) )
    sub_1C3E7C8(v10, v11);
  *(_QWORD *)(v14 + 32) = v7;
  sub_1C3E508((CGThumbnailListItem_o *)(v14 + 32), (int32_t)v7, v12, v13);
  if ( !systemService )
LABEL_19:
    sub_1C3E7C0(v10, v11);
  UnityEngine_AndroidJavaObject__Call(
    systemService,
    (System_String_o *)StringLiteral_19825/*"getMemoryInfo"*/,
    (System_Object_array *)v14,
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
  __int64 v4; // x1
  UnityEngine_AndroidJavaObject_o *v5; // x19
  int64_t v6; // x21
  UnityEngine_AndroidJavaObject_c *klass; // x8
  __int64 v8; // x9
  int *p_offset; // x10
  __int64 v10; // x0

  if ( (byte_4C58E5D & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_AndroidJavaObject_Get_long____78181888);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&MemoryInfo_TypeInfo);
    sub_1C3E564(&StringLiteral_16975/*"availMem"*/);
    byte_4C58E5D = 1;
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
  v5 = MemoryInfo;
  if ( !MemoryInfo )
    sub_1C3E7C0(0, v4);
  v6 = UnityEngine_AndroidJavaObject__Get_long_(
         MemoryInfo,
         (System_String_o *)StringLiteral_16975/*"availMem"*/,
         (const MethodInfo_304BABC *)Method_UnityEngine_AndroidJavaObject_Get_long____78181888);
  klass = v5->klass;
  v8 = *(unsigned __int16 *)&v5->klass->_2.rank;
  if ( *(_WORD *)&v5->klass->_2.rank )
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
    v10 = sub_1C8ED7C(v5, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaObject_o *, _QWORD))v10)(v5, *(_QWORD *)(v10 + 8));
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
  MemoryInfo_c *v1; // x0

  if ( (byte_4C58E5C & 1) == 0 )
  {
    sub_1C3E564(&MemoryInfo_TypeInfo);
    byte_4C58E5C = 1;
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
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C58E5E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_MemoryInfo_stackMemoryInfo__Add__);
    sub_1C3E564(&MemoryInfo_TypeInfo);
    sub_1C3E564(&MemoryInfo_stackMemoryInfo_TypeInfo);
    byte_4C58E5E = 1;
  }
  v3 = MemoryInfo_TypeInfo;
  if ( !MemoryInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MemoryInfo_TypeInfo);
    v3 = MemoryInfo_TypeInfo;
  }
  stackMemoryInfoList = (System_Collections_Generic_List_object__o *)v3->static_fields->stackMemoryInfoList;
  UsedMemorySizeMB = MemoryInfo__getUsedMemorySizeMB((const MethodInfo *)v3);
  v6 = (MemoryInfo_stackMemoryInfo_o *)sub_1C3E7B0(MemoryInfo_stackMemoryInfo_TypeInfo);
  MemoryInfo_stackMemoryInfo___ctor(v6, name, UsedMemorySizeMB, v7);
  if ( !stackMemoryInfoList
    || (items = stackMemoryInfoList->fields._items,
        v13 = Method_System_Collections_Generic_List_MemoryInfo_stackMemoryInfo__Add__,
        ++stackMemoryInfoList->fields._version,
        !items) )
  {
    sub_1C3E7C0(v8, v9);
  }
  size = stackMemoryInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      stackMemoryInfoList,
      (Il2CppObject *)v6,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    stackMemoryInfoList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v6;
    sub_1C3E508((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v6, v10, v11);
  }
}


int64_t MemoryInfo__getUsedMemorySize(const MethodInfo *method)
{
  MemoryInfo_c *v1; // x0
  struct MemoryInfo_StaticFields *static_fields; // x8
  UnityEngine_AndroidJavaObject_o *activityManager; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x20
  struct System_Int32_array *pids; // x21
  long double inited; // q0
  __int64 v11; // x8
  __int64 v12; // x19
  int v13; // w23
  int v14; // w24
  int64_t v15; // x20
  _QWORD *v16; // x22
  UnityEngine_AndroidJavaObject_o *v17; // x21
  __int64 v18; // x8
  __int64 v19; // x0
  __int64 v21; // x0

  if ( (byte_4C58E5A & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject_____);
    sub_1C3E564(&Method_UnityEngine_AndroidJavaObject_Call_int____78181712);
    sub_1C3E564(&Method_System_Array_Empty_object___);
    sub_1C3E564(&MemoryInfo_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&StringLiteral_19870/*"getTotalPss"*/);
    sub_1C3E564(&StringLiteral_19849/*"getProcessMemoryInfo"*/);
    byte_4C58E5A = 1;
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
  v4 = sub_1C3E60C(object___TypeInfo, 1);
  if ( !v4 )
    goto LABEL_36;
  v8 = v4;
  pids = MemoryInfo_TypeInfo->static_fields->pids;
  if ( pids )
  {
    v4 = sub_1C3E6A0(pids, *(_QWORD *)(*(_QWORD *)v4 + 64LL));
    if ( !v4 )
    {
      v21 = sub_1C3E7E4(0);
      sub_1C3E68C(v21, 0);
    }
  }
  if ( !*(_DWORD *)(v8 + 24) )
LABEL_33:
    sub_1C3E7C8(v4, v5);
  *(_QWORD *)(v8 + 32) = pids;
  sub_1C3E508((CGThumbnailListItem_o *)(v8 + 32), (int32_t)pids, v6, v7);
  if ( !activityManager
    || (v4 = (__int64)UnityEngine_AndroidJavaObject__Call_object_(
                        activityManager,
                        (System_String_o *)StringLiteral_19849/*"getProcessMemoryInfo"*/,
                        (System_Object_array *)v8,
                        (const MethodInfo_3049C44 *)Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject_____)) == 0 )
  {
LABEL_36:
    sub_1C3E7C0(v4, v5);
  }
  v11 = *(_QWORD *)(v4 + 24);
  v12 = v4;
  v13 = v11 - 1;
  if ( (int)v11 >= 1 )
  {
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      v16 = Method_System_Array_Empty_object___;
      v17 = *(UnityEngine_AndroidJavaObject_o **)(v12 + 8LL * v14 + 32);
      v18 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v18 )
      {
        sub_1C8ECD4(Method_System_Array_Empty_object___);
        v18 = v16[7];
      }
      v19 = *(_QWORD *)(v18 + 16);
      if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
        v19 = sub_1C8EC78(inited);
      if ( !*(_DWORD *)(v19 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v19);
      v4 = *(_QWORD *)(v16[7] + 16LL);
      if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
        v4 = sub_1C8EC78(inited);
      if ( !v17 )
        goto LABEL_36;
      v4 = UnityEngine_AndroidJavaObject__Call_int_(
             v17,
             (System_String_o *)StringLiteral_19870/*"getTotalPss"*/,
             **(System_Object_array ***)(v4 + 184),
             (const MethodInfo_3049B04 *)Method_UnityEngine_AndroidJavaObject_Call_int____78181712);
      v15 += (int)v4;
      if ( v13 == v14 )
        return v15;
      if ( (unsigned int)++v14 >= *(_DWORD *)(v12 + 24) )
        goto LABEL_33;
    }
  }
  return 0;
}


float MemoryInfo__getUsedMemorySizeMB(const MethodInfo *method)
{
  MemoryInfo_c *v1; // x0

  if ( (byte_4C58E5B & 1) == 0 )
  {
    sub_1C3E564(&MemoryInfo_TypeInfo);
    byte_4C58E5B = 1;
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
  __int64 v3; // x1
  Il2CppObject *Static_object; // x20
  UnityEngine_AndroidJavaClass_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x22
  MemoryInfo_c *v19; // x0
  struct MemoryInfo_StaticFields *static_fields; // x0
  __int64 v21; // x22
  System_Diagnostics_Process_o *CurrentProcess; // x0
  __int64 v23; // x1
  __int64 Id; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct MemoryInfo_StaticFields *v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Object_array *v32; // x22
  __int64 v33; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x1
  struct MemoryInfo_StaticFields *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  UnityEngine_AndroidJavaClass_c *klass; // x8
  __int64 v40; // x9
  int32_t *p_offset; // x10
  __int64 v42; // x0
  Il2CppClass *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  UnityEngine_AndroidJavaClass_c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x0

  if ( (byte_4C58E58 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject____78181656);
    sub_1C3E564(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    sub_1C3E564(&Method_UnityEngine_AndroidJavaObject_GetStatic_string___);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&MemoryInfo_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&StringLiteral_1915/*"ACTIVITY_SERVICE"*/);
    sub_1C3E564(&StringLiteral_18136/*"com.unity3d.player.UnityPlayer"*/);
    sub_1C3E564(&StringLiteral_16772/*"android.content.Context"*/);
    sub_1C3E564(&StringLiteral_16672/*"activity"*/);
    sub_1C3E564(&StringLiteral_19866/*"getSystemService"*/);
    sub_1C3E564(&StringLiteral_18421/*"currentActivity"*/);
    byte_4C58E58 = 1;
  }
  v1 = (UnityEngine_AndroidJavaClass_o *)sub_1C3E7B0(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v1, (System_String_o *)StringLiteral_18136/*"com.unity3d.player.UnityPlayer"*/, 0);
  if ( !v1 )
    sub_1C3E7C0(v2, v3);
  Static_object = UnityEngine_AndroidJavaObject__GetStatic_object_(
                    (UnityEngine_AndroidJavaObject_o *)v1,
                    (System_String_o *)StringLiteral_18421/*"currentActivity"*/,
                    (const MethodInfo_304BDCC *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v5 = (UnityEngine_AndroidJavaClass_o *)sub_1C3E7B0(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v5, (System_String_o *)StringLiteral_16772/*"android.content.Context"*/, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  v8 = UnityEngine_AndroidJavaObject__GetStatic_object_(
         (UnityEngine_AndroidJavaObject_o *)v5,
         (System_String_o *)StringLiteral_1915/*"ACTIVITY_SERVICE"*/,
         (const MethodInfo_304BDCC *)Method_UnityEngine_AndroidJavaObject_GetStatic_string___);
  v9 = sub_1C3E60C(object___TypeInfo, 1);
  v13 = v9;
  if ( !v9 )
    sub_1C3E7C0(0, v10);
  if ( v8 )
  {
    v9 = sub_1C3E6A0(v8, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
    if ( !v9 )
    {
      v51 = sub_1C3E7E4(0);
      sub_1C3E68C(v51, 0);
    }
  }
  if ( !*(_DWORD *)(v13 + 24) )
    sub_1C3E7C8(v9, v10);
  *(_QWORD *)(v13 + 32) = v8;
  sub_1C3E508((CGThumbnailListItem_o *)(v13 + 32), (int32_t)v8, v11, v12);
  if ( !Static_object )
    sub_1C3E7C0(v14, v15);
  v18 = UnityEngine_AndroidJavaObject__Call_object_(
          (UnityEngine_AndroidJavaObject_o *)Static_object,
          (System_String_o *)StringLiteral_19866/*"getSystemService"*/,
          (System_Object_array *)v13,
          (const MethodInfo_3049C44 *)Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject____78181656);
  v19 = MemoryInfo_TypeInfo;
  if ( !MemoryInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MemoryInfo_TypeInfo);
    v19 = MemoryInfo_TypeInfo;
  }
  static_fields = v19->static_fields;
  static_fields->activityManager = (struct UnityEngine_AndroidJavaObject_o *)v18;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->activityManager, (int32_t)v18, v16, v17);
  v21 = sub_1C3E60C(int___TypeInfo, 1);
  CurrentProcess = System_Diagnostics_Process__GetCurrentProcess(0);
  if ( !CurrentProcess )
    sub_1C3E7C0(0, v23);
  Id = System_Diagnostics_Process__get_Id(CurrentProcess, 0);
  if ( !v21 )
    sub_1C3E7C0(Id, v25);
  if ( !*(_DWORD *)(v21 + 24) )
    sub_1C3E7C8(Id, v25);
  *(_DWORD *)(v21 + 32) = Id;
  v28 = MemoryInfo_TypeInfo->static_fields;
  v28->pids = (struct System_Int32_array *)v21;
  sub_1C3E508((CGThumbnailListItem_o *)&v28->pids, v21, v26, v27);
  v32 = (System_Object_array *)sub_1C3E60C(object___TypeInfo, 1);
  if ( !v32 )
    sub_1C3E7C0(0, v29);
  v33 = StringLiteral_16672/*"activity"*/;
  if ( StringLiteral_16672/*"activity"*/ )
  {
    v33 = sub_1C3E6A0(StringLiteral_16672/*"activity"*/, v32->obj.klass->_1.element_class);
    if ( !v33 )
    {
      v52 = sub_1C3E7E4(0);
      sub_1C3E68C(v52, 0);
    }
    v34 = StringLiteral_16672/*"activity"*/;
  }
  else
  {
    v34 = 0;
  }
  if ( !LODWORD(v32->max_length) )
    sub_1C3E7C8(v33, v34);
  v32->m_Items[0] = (Il2CppObject *)v34;
  sub_1C3E508((CGThumbnailListItem_o *)v32->m_Items, v34, v30, v31);
  v35 = UnityEngine_AndroidJavaObject__Call_object_(
          (UnityEngine_AndroidJavaObject_o *)Static_object,
          (System_String_o *)StringLiteral_19866/*"getSystemService"*/,
          v32,
          (const MethodInfo_3049C44 *)Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject____78181656);
  v36 = MemoryInfo_TypeInfo->static_fields;
  v36->systemService = (struct UnityEngine_AndroidJavaObject_o *)v35;
  sub_1C3E508((CGThumbnailListItem_o *)&v36->systemService, (int32_t)v35, v37, v38);
  klass = v5->klass;
  v40 = *(unsigned __int16 *)&v5->klass->_2.rank;
  if ( *(_WORD *)&v5->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      p_offset += 4;
      if ( !v40 )
        goto LABEL_25;
    }
    v42 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_25:
    v42 = sub_1C8ED7C(v5, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v42)(v5, *(_QWORD *)(v42 + 8));
  v43 = Static_object->klass;
  v44 = *(unsigned __int16 *)&Static_object->klass->_2.rank;
  if ( *(_WORD *)&Static_object->klass->_2.rank )
  {
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_31;
    }
    v46 = (__int64)&v43->vtable[*v45];
  }
  else
  {
LABEL_31:
    v46 = sub_1C8ED7C(Static_object, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(Il2CppObject *, _QWORD))v46)(Static_object, *(_QWORD *)(v46 + 8));
  v47 = v1->klass;
  v48 = *(unsigned __int16 *)&v1->klass->_2.rank;
  if ( *(_WORD *)&v1->klass->_2.rank )
  {
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_37;
    }
    v50 = (__int64)&v47->vtable + 16 * *v49;
  }
  else
  {
LABEL_37:
    v50 = sub_1C8ED7C(v1, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v50)(v1, *(_QWORD *)(v50 + 8));
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

  if ( (byte_4C58E60 & 1) == 0 )
  {
    sub_1C3E564(&string_TypeInfo);
    byte_4C58E60 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.key = static_fields->Empty;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)Empty, (int32_t)method, v4);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.key = k;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)k, v10, v11);
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

  if ( (byte_4C58E61 & 1) == 0 )
  {
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&StringLiteral_25209/*"{0}={1}"*/);
    byte_4C58E61 = 1;
  }
  key = (Il2CppObject *)this->fields.key;
  usedMemory = this->fields.usedMemory;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &usedMemory, v2, v3, v4, v5, v6, v7);
  return System_String__Format_63677760((System_String_o *)StringLiteral_25209/*"{0}={1}"*/, key, v10, 0);
}