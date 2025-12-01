void MemoryInfo___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct MemoryInfo_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct MemoryInfo_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct MemoryInfo_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  if ( (byte_4CC9512 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_MemoryInfo_stackMemoryInfo___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_MemoryInfo_stackMemoryInfo__TypeInfo);
    sub_1C713B0(&MemoryInfo_TypeInfo);
    byte_4CC9512 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_MemoryInfo_stackMemoryInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_MemoryInfo_stackMemoryInfo___ctor__);
  MemoryInfo_TypeInfo->static_fields->stackMemoryInfoList = (struct System_Collections_Generic_List_MemoryInfo_stackMemoryInfo__o *)v1;
  sub_1C71354((GrandQuestFolderBoardItem_o *)MemoryInfo_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
  static_fields = MemoryInfo_TypeInfo->static_fields;
  static_fields->activityManager = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->activityManager, 0, v9, v10, v11, v12, v13, v14);
  v15 = MemoryInfo_TypeInfo->static_fields;
  v15->pids = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v15->pids, 0, v16, v17, v18, v19, v20, v21);
  v22 = MemoryInfo_TypeInfo->static_fields;
  v22->systemService = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v22->systemService, 0, v23, v24, v25, v26, v27, v28);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x21
  __int64 v20; // x0

  if ( (byte_4CC950C & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_AndroidJavaObject_TypeInfo);
    sub_1C713B0(&Method_System_Array_Empty_object___);
    sub_1C713B0(&MemoryInfo_TypeInfo);
    sub_1C713B0(&object___TypeInfo);
    sub_1C713B0(&StringLiteral_19882/*"getMemoryInfo"*/);
    sub_1C713B0(&StringLiteral_16772/*"android.app.ActivityManager$MemoryInfo"*/);
    byte_4CC950C = 1;
  }
  v2 = Method_System_Array_Empty_object___;
  v3 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v3 )
  {
    sub_1C474A0(Method_System_Array_Empty_object___);
    v3 = v2[7];
  }
  v4 = *(_QWORD *)(v3 + 16);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C47444(inited);
  if ( !*(_DWORD *)(v4 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v4);
  v5 = *(_QWORD *)(v2[7] + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C47444(inited);
  v6 = **(System_Object_array ***)(v5 + 184);
  v7 = (UnityEngine_AndroidJavaObject_o *)sub_1C715FC(UnityEngine_AndroidJavaObject_TypeInfo);
  UnityEngine_AndroidJavaObject___ctor_71451516(v7, (System_String_o *)StringLiteral_16772/*"android.app.ActivityManager$MemoryInfo"*/, v6, 0);
  v8 = MemoryInfo_TypeInfo;
  if ( !MemoryInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MemoryInfo_TypeInfo);
    v8 = MemoryInfo_TypeInfo;
  }
  systemService = v8->static_fields->systemService;
  v10 = sub_1C71458(object___TypeInfo, 1);
  if ( !v10 )
    goto LABEL_19;
  v18 = v10;
  if ( v7 )
  {
    v10 = sub_1C714EC(v7, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
    if ( !v10 )
    {
      v20 = sub_1C7162C(0);
      sub_1C714D8(v20, 0);
    }
  }
  if ( !*(_DWORD *)(v18 + 24) )
    sub_1C71610(v10);
  *(_QWORD *)(v18 + 32) = v7;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v18 + 32), (int32_t)v7, v12, v13, v14, v15, v16, v17);
  if ( !systemService )
LABEL_19:
    sub_1C71608(v10, v11);
  UnityEngine_AndroidJavaObject__Call(
    systemService,
    (System_String_o *)StringLiteral_19882/*"getMemoryInfo"*/,
    (System_Object_array *)v18,
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

  if ( (byte_4CC9510 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_AndroidJavaObject_Get_long____78633712);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&MemoryInfo_TypeInfo);
    sub_1C713B0(&StringLiteral_16979/*"availMem"*/);
    byte_4CC9510 = 1;
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
    sub_1C71608(0, v4);
  v6 = UnityEngine_AndroidJavaObject__Get_long_(
         MemoryInfo,
         (System_String_o *)StringLiteral_16979/*"availMem"*/,
         (const MethodInfo_309B464 *)Method_UnityEngine_AndroidJavaObject_Get_long____78633712);
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
    v10 = sub_1C47738(v5, System_IDisposable_TypeInfo, 0);
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

  if ( (byte_4CC950F & 1) == 0 )
  {
    sub_1C713B0(&MemoryInfo_TypeInfo);
    byte_4CC950F = 1;
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4CC9511 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_MemoryInfo_stackMemoryInfo__Add__);
    sub_1C713B0(&MemoryInfo_TypeInfo);
    sub_1C713B0(&MemoryInfo_stackMemoryInfo_TypeInfo);
    byte_4CC9511 = 1;
  }
  v3 = MemoryInfo_TypeInfo;
  if ( !MemoryInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MemoryInfo_TypeInfo);
    v3 = MemoryInfo_TypeInfo;
  }
  stackMemoryInfoList = (System_Collections_Generic_List_object__o *)v3->static_fields->stackMemoryInfoList;
  UsedMemorySizeMB = MemoryInfo__getUsedMemorySizeMB((const MethodInfo *)v3);
  v6 = (MemoryInfo_stackMemoryInfo_o *)sub_1C715FC(MemoryInfo_stackMemoryInfo_TypeInfo);
  MemoryInfo_stackMemoryInfo___ctor(v6, name, UsedMemorySizeMB, v7);
  if ( !stackMemoryInfoList
    || (items = stackMemoryInfoList->fields._items,
        v17 = Method_System_Collections_Generic_List_MemoryInfo_stackMemoryInfo__Add__,
        ++stackMemoryInfoList->fields._version,
        !items) )
  {
    sub_1C71608(v8, v9);
  }
  size = stackMemoryInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      stackMemoryInfoList,
      (Il2CppObject *)v6,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    stackMemoryInfoList->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v6;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x20
  struct System_Int32_array *pids; // x21
  long double inited; // q0
  __int64 v15; // x8
  __int64 v16; // x19
  int v17; // w23
  int v18; // w24
  int64_t v19; // x20
  _QWORD *v20; // x22
  UnityEngine_AndroidJavaObject_o *v21; // x21
  __int64 v22; // x8
  __int64 v23; // x0
  __int64 v25; // x0

  if ( (byte_4CC950D & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject_____);
    sub_1C713B0(&Method_UnityEngine_AndroidJavaObject_Call_int____78633536);
    sub_1C713B0(&Method_System_Array_Empty_object___);
    sub_1C713B0(&MemoryInfo_TypeInfo);
    sub_1C713B0(&object___TypeInfo);
    sub_1C713B0(&StringLiteral_19927/*"getTotalPss"*/);
    sub_1C713B0(&StringLiteral_19906/*"getProcessMemoryInfo"*/);
    byte_4CC950D = 1;
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
  v4 = sub_1C71458(object___TypeInfo, 1);
  if ( !v4 )
    goto LABEL_36;
  v12 = v4;
  pids = MemoryInfo_TypeInfo->static_fields->pids;
  if ( pids )
  {
    v4 = sub_1C714EC(pids, *(_QWORD *)(*(_QWORD *)v4 + 64LL));
    if ( !v4 )
    {
      v25 = sub_1C7162C(0);
      sub_1C714D8(v25, 0);
    }
  }
  if ( !*(_DWORD *)(v12 + 24) )
LABEL_33:
    sub_1C71610(v4);
  *(_QWORD *)(v12 + 32) = pids;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v12 + 32), (int32_t)pids, v6, v7, v8, v9, v10, v11);
  if ( !activityManager
    || (v4 = (__int64)UnityEngine_AndroidJavaObject__Call_object_(
                        activityManager,
                        (System_String_o *)StringLiteral_19906/*"getProcessMemoryInfo"*/,
                        (System_Object_array *)v12,
                        (const MethodInfo_30995EC *)Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject_____)) == 0 )
  {
LABEL_36:
    sub_1C71608(v4, v5);
  }
  v15 = *(_QWORD *)(v4 + 24);
  v16 = v4;
  v17 = v15 - 1;
  if ( (int)v15 >= 1 )
  {
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      v20 = Method_System_Array_Empty_object___;
      v21 = *(UnityEngine_AndroidJavaObject_o **)(v16 + 8LL * v18 + 32);
      v22 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v22 )
      {
        sub_1C474A0(Method_System_Array_Empty_object___);
        v22 = v20[7];
      }
      v23 = *(_QWORD *)(v22 + 16);
      if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
        v23 = sub_1C47444(inited);
      if ( !*(_DWORD *)(v23 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v23);
      v4 = *(_QWORD *)(v20[7] + 16LL);
      if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
        v4 = sub_1C47444(inited);
      if ( !v21 )
        goto LABEL_36;
      v4 = UnityEngine_AndroidJavaObject__Call_int_(
             v21,
             (System_String_o *)StringLiteral_19927/*"getTotalPss"*/,
             **(System_Object_array ***)(v4 + 184),
             (const MethodInfo_30994AC *)Method_UnityEngine_AndroidJavaObject_Call_int____78633536);
      v19 += (int)v4;
      if ( v17 == v18 )
        return v19;
      if ( (unsigned int)++v18 >= *(_DWORD *)(v16 + 24) )
        goto LABEL_33;
    }
  }
  return 0;
}


float MemoryInfo__getUsedMemorySizeMB(const MethodInfo *method)
{
  MemoryInfo_c *v1; // x0

  if ( (byte_4CC950E & 1) == 0 )
  {
    sub_1C713B0(&MemoryInfo_TypeInfo);
    byte_4CC950E = 1;
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  Il2CppObject *v26; // x22
  MemoryInfo_c *v27; // x0
  struct MemoryInfo_StaticFields *static_fields; // x0
  __int64 v29; // x22
  System_Diagnostics_Process_o *CurrentProcess; // x0
  __int64 v31; // x1
  __int64 Id; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct MemoryInfo_StaticFields *v40; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  System_Object_array *v48; // x22
  __int64 v49; // x0
  __int64 v50; // x1
  Il2CppObject *v51; // x1
  struct MemoryInfo_StaticFields *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  UnityEngine_AndroidJavaClass_c *klass; // x8
  __int64 v60; // x9
  int32_t *p_offset; // x10
  __int64 v62; // x0
  Il2CppClass *v63; // x8
  __int64 v64; // x9
  int32_t *v65; // x10
  __int64 v66; // x0
  UnityEngine_AndroidJavaClass_c *v67; // x8
  __int64 v68; // x9
  int32_t *v69; // x10
  __int64 v70; // x0
  __int64 v71; // x0
  __int64 v72; // x0

  if ( (byte_4CC950B & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject____78633480);
    sub_1C713B0(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    sub_1C713B0(&Method_UnityEngine_AndroidJavaObject_GetStatic_string___);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&MemoryInfo_TypeInfo);
    sub_1C713B0(&object___TypeInfo);
    sub_1C713B0(&StringLiteral_1910/*"ACTIVITY_SERVICE"*/);
    sub_1C713B0(&StringLiteral_18151/*"com.unity3d.player.UnityPlayer"*/);
    sub_1C713B0(&StringLiteral_16776/*"android.content.Context"*/);
    sub_1C713B0(&StringLiteral_16665/*"activity"*/);
    sub_1C713B0(&StringLiteral_19923/*"getSystemService"*/);
    sub_1C713B0(&StringLiteral_18445/*"currentActivity"*/);
    byte_4CC950B = 1;
  }
  v1 = (UnityEngine_AndroidJavaClass_o *)sub_1C715FC(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v1, (System_String_o *)StringLiteral_18151/*"com.unity3d.player.UnityPlayer"*/, 0);
  if ( !v1 )
    sub_1C71608(v2, v3);
  Static_object = UnityEngine_AndroidJavaObject__GetStatic_object_(
                    (UnityEngine_AndroidJavaObject_o *)v1,
                    (System_String_o *)StringLiteral_18445/*"currentActivity"*/,
                    (const MethodInfo_309B774 *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v5 = (UnityEngine_AndroidJavaClass_o *)sub_1C715FC(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v5, (System_String_o *)StringLiteral_16776/*"android.content.Context"*/, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  v8 = UnityEngine_AndroidJavaObject__GetStatic_object_(
         (UnityEngine_AndroidJavaObject_o *)v5,
         (System_String_o *)StringLiteral_1910/*"ACTIVITY_SERVICE"*/,
         (const MethodInfo_309B774 *)Method_UnityEngine_AndroidJavaObject_GetStatic_string___);
  v9 = sub_1C71458(object___TypeInfo, 1);
  v17 = v9;
  if ( !v9 )
    sub_1C71608(0, v10);
  if ( v8 )
  {
    v9 = sub_1C714EC(v8, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
    if ( !v9 )
    {
      v71 = sub_1C7162C(0);
      sub_1C714D8(v71, 0);
    }
  }
  if ( !*(_DWORD *)(v17 + 24) )
    sub_1C71610(v9);
  *(_QWORD *)(v17 + 32) = v8;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v17 + 32), (int32_t)v8, v11, v12, v13, v14, v15, v16);
  if ( !Static_object )
    sub_1C71608(v18, v19);
  v26 = UnityEngine_AndroidJavaObject__Call_object_(
          (UnityEngine_AndroidJavaObject_o *)Static_object,
          (System_String_o *)StringLiteral_19923/*"getSystemService"*/,
          (System_Object_array *)v17,
          (const MethodInfo_30995EC *)Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject____78633480);
  v27 = MemoryInfo_TypeInfo;
  if ( !MemoryInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MemoryInfo_TypeInfo);
    v27 = MemoryInfo_TypeInfo;
  }
  static_fields = v27->static_fields;
  static_fields->activityManager = (struct UnityEngine_AndroidJavaObject_o *)v26;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&static_fields->activityManager,
    (int32_t)v26,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v29 = sub_1C71458(int___TypeInfo, 1);
  CurrentProcess = System_Diagnostics_Process__GetCurrentProcess(0);
  if ( !CurrentProcess )
    sub_1C71608(0, v31);
  Id = System_Diagnostics_Process__get_Id(CurrentProcess, 0);
  if ( !v29 )
    sub_1C71608(Id, v33);
  if ( !*(_DWORD *)(v29 + 24) )
    sub_1C71610(Id);
  *(_DWORD *)(v29 + 32) = Id;
  v40 = MemoryInfo_TypeInfo->static_fields;
  v40->pids = (struct System_Int32_array *)v29;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v40->pids, v29, v34, v35, v36, v37, v38, v39);
  v48 = (System_Object_array *)sub_1C71458(object___TypeInfo, 1);
  if ( !v48 )
    sub_1C71608(0, v41);
  v49 = StringLiteral_16665/*"activity"*/;
  if ( StringLiteral_16665/*"activity"*/ )
  {
    v49 = sub_1C714EC(StringLiteral_16665/*"activity"*/, v48->obj.klass->_1.element_class);
    if ( !v49 )
    {
      v72 = sub_1C7162C(0);
      sub_1C714D8(v72, 0);
    }
    v50 = StringLiteral_16665/*"activity"*/;
  }
  else
  {
    v50 = 0;
  }
  if ( !LODWORD(v48->max_length) )
    sub_1C71610(v49);
  v48->m_Items[0] = (Il2CppObject *)v50;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v48->m_Items, v50, v42, v43, v44, v45, v46, v47);
  v51 = UnityEngine_AndroidJavaObject__Call_object_(
          (UnityEngine_AndroidJavaObject_o *)Static_object,
          (System_String_o *)StringLiteral_19923/*"getSystemService"*/,
          v48,
          (const MethodInfo_30995EC *)Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject____78633480);
  v52 = MemoryInfo_TypeInfo->static_fields;
  v52->systemService = (struct UnityEngine_AndroidJavaObject_o *)v51;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v52->systemService, (int32_t)v51, v53, v54, v55, v56, v57, v58);
  klass = v5->klass;
  v60 = *(unsigned __int16 *)&v5->klass->_2.rank;
  if ( *(_WORD *)&v5->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v60;
      p_offset += 4;
      if ( !v60 )
        goto LABEL_25;
    }
    v62 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_25:
    v62 = sub_1C47738(v5, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v62)(v5, *(_QWORD *)(v62 + 8));
  v63 = Static_object->klass;
  v64 = *(unsigned __int16 *)&Static_object->klass->_2.rank;
  if ( *(_WORD *)&Static_object->klass->_2.rank )
  {
    v65 = &v63->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
    {
      --v64;
      v65 += 4;
      if ( !v64 )
        goto LABEL_31;
    }
    v66 = (__int64)&v63->vtable[*v65];
  }
  else
  {
LABEL_31:
    v66 = sub_1C47738(Static_object, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(Il2CppObject *, _QWORD))v66)(Static_object, *(_QWORD *)(v66 + 8));
  v67 = v1->klass;
  v68 = *(unsigned __int16 *)&v1->klass->_2.rank;
  if ( *(_WORD *)&v1->klass->_2.rank )
  {
    v69 = &v67->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
    {
      --v68;
      v69 += 4;
      if ( !v68 )
        goto LABEL_37;
    }
    v70 = (__int64)&v67->vtable + 16 * *v69;
  }
  else
  {
LABEL_37:
    v70 = sub_1C47738(v1, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v70)(v1, *(_QWORD *)(v70 + 8));
}


void MemoryInfo_stackMemoryInfo___ctor(
        MemoryInfo_stackMemoryInfo_o *this,
        System_String_o *k,
        float v,
        const MethodInfo *method)
{
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4CC9513 & 1) == 0 )
  {
    sub_1C713B0(&string_TypeInfo);
    byte_4CC9513 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.key = static_fields->Empty;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)Empty, (int32_t)method, v4, v5, v6, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.key = k;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)k, v14, v15, v16, v17, v18, v19);
  this->fields.usedMemory = v;
}


System_String_o *MemoryInfo_stackMemoryInfo__ToString(MemoryInfo_stackMemoryInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *key; // x20
  Il2CppObject *v4; // x0
  float usedMemory; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CC9514 & 1) == 0 )
  {
    sub_1C713B0(&float_TypeInfo);
    sub_1C713B0(&StringLiteral_25319/*"{0}={1}"*/);
    byte_4CC9514 = 1;
  }
  key = (Il2CppObject *)this->fields.key;
  usedMemory = this->fields.usedMemory;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &usedMemory);
  return System_String__Format_64073032((System_String_o *)StringLiteral_25319/*"{0}={1}"*/, key, v4, 0);
}