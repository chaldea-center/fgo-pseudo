void MaterialBranchRouteManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  System_Collections_Generic_List_object__o *v7; // x19
  struct MaterialBranchRouteManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CC872F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
    sub_1C713B0(&MaterialBranchRouteManager_TypeInfo);
    sub_1C713B0(&StringLiteral_6676/*"Fgo_20210908"*/);
    byte_4CC872F = 1;
  }
  MaterialBranchRouteManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6676/*"Fgo_20210908"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)MaterialBranchRouteManager_TypeInfo->static_fields,
    StringLiteral_6676/*"Fgo_20210908"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  *(_WORD *)&MaterialBranchRouteManager_TypeInfo->static_fields->isModfiy = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___ctor__);
  static_fields = MaterialBranchRouteManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v7;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->infoList, (int32_t)v7, v9, v10, v11, v12, v13, v14);
}


void MaterialBranchRouteManager___ctor(MaterialBranchRouteManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MaterialBranchRouteManager__ClearSaveData(const MethodInfo *method)
{
  MaterialBranchRouteManager_c *v1; // x0
  __int64 v2; // x1
  MaterialBranchRouteManager_c *v3; // x0
  struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *infoList; // x8
  int32_t size; // w2
  int v6; // w9
  MaterialBranchRouteManager_c *v7; // x0

  if ( (byte_4CC8729 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_MaterialBranchRouteManager_MaterialBranchInfo___);
    sub_1C713B0(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Clear__);
    sub_1C713B0(&MaterialBranchRouteManager_TypeInfo);
    byte_4CC8729 = 1;
  }
  v1 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v1 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v1->static_fields->infoList,
         (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_MaterialBranchRouteManager_MaterialBranchInfo___) )
  {
    v3 = MaterialBranchRouteManager_TypeInfo;
    if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      v3 = MaterialBranchRouteManager_TypeInfo;
    }
    infoList = v3->static_fields->infoList;
    if ( !infoList )
      sub_1C71608(v3, v2);
    size = infoList->fields._size;
    v6 = infoList->fields._version + 1;
    infoList->fields._size = 0;
    infoList->fields._version = v6;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0);
  }
  v7 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v7 = MaterialBranchRouteManager_TypeInfo;
  }
  *(_WORD *)&v7->static_fields->isModfiy = 1;
}


void MaterialBranchRouteManager__DeleteSaveData(const MethodInfo *method)
{
  MaterialBranchRouteManager_c *v1; // x0
  System_String_o *FilePath; // x19

  if ( (byte_4CC8727 & 1) == 0 )
  {
    sub_1C713B0(&MaterialBranchRouteManager_TypeInfo);
    byte_4CC8727 = 1;
  }
  v1 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  FilePath = MaterialBranchRouteManager__GetFilePath((const MethodInfo *)v1);
  if ( System_IO_File__Exists(FilePath, 0) )
    System_IO_File__Delete(FilePath, 0);
}


System_String_o *MaterialBranchRouteManager__GetFilePath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4CC8726 & 1) == 0 )
  {
    sub_1C713B0(&AndroidUtil_TypeInfo);
    sub_1C713B0(&DatFileName_TypeInfo);
    sub_1C713B0(&StringLiteral_1041/*"/"*/);
    byte_4CC8726 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(35, 0);
  return System_String__Concat_64069988(DatFileSavePath, (System_String_o *)StringLiteral_1041/*"/"*/, FileName, 0);
}


void MaterialBranchRouteManager__Initialize(const MethodInfo *method)
{
  MaterialBranchRouteManager_c *v1; // x0

  if ( (byte_4CC8728 & 1) == 0 )
  {
    sub_1C713B0(&MaterialBranchRouteManager_TypeInfo);
    byte_4CC8728 = 1;
  }
  v1 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  MaterialBranchRouteManager__ReadData((const MethodInfo *)v1);
}


bool MaterialBranchRouteManager__IsMaterialSelectedRouteId(int32_t questId, int32_t routeId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  MaterialBranchRouteManager_c *v8; // x0
  System_Collections_Generic_List_T__o *infoList; // x19
  System_Func_object__bool__o *v10; // x20

  if ( (byte_4CC872A & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_MaterialBranchRouteManager_MaterialBranchInfo___);
    sub_1C713B0(&System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool__TypeInfo);
    sub_1C713B0(&MaterialBranchRouteManager_TypeInfo);
    sub_1C713B0(&Method_MaterialBranchRouteManager___c__DisplayClass9_0__IsMaterialSelectedRouteId_b__0__);
    sub_1C713B0(&MaterialBranchRouteManager___c__DisplayClass9_0_TypeInfo);
    byte_4CC872A = 1;
  }
  v5 = sub_1C715FC(MaterialBranchRouteManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_DWORD *)(v5 + 16) = questId;
  *(_DWORD *)(v5 + 20) = routeId;
  v8 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v8 = MaterialBranchRouteManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_T__o *)v8->static_fields->infoList;
  v10 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_MaterialBranchRouteManager___c__DisplayClass9_0__IsMaterialSelectedRouteId_b__0__,
    0);
  return BasicHelper__Any_object_(
           infoList,
           (System_Func_T__bool__o *)v10,
           (const MethodInfo_31341D4 *)Method_BasicHelper_Any_MaterialBranchRouteManager_MaterialBranchInfo___);
}


bool MaterialBranchRouteManager__IsMaterialSelectedRouteIds(
        System_Collections_Generic_IList_int__o *questIds,
        System_Collections_Generic_IList_int__o *routeIds,
        int32_t count,
        int32_t checkType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IList_int__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x22
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_IList_int__c *v27; // x8
  int32_t v28; // w25
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x24
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  const MethodInfo *v42; // x2
  int32_t v43; // w26
  _BOOL8 IsMaterialSelectedRouteId; // x0
  __int64 v45; // x1
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  int32_t v54; // w21

  if ( (byte_4CC872B & 1) == 0 )
  {
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C713B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&MaterialBranchRouteManager_TypeInfo);
    byte_4CC872B = 1;
  }
  v7 = (System_Collections_Generic_HashSet_int__o *)sub_1C715FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v7,
    (const MethodInfo_36C0D60 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !questIds )
    goto LABEL_72;
  klass = questIds->klass;
  v11 = *(unsigned __int16 *)&questIds->klass->_2.rank;
  if ( *(_WORD *)&questIds->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_8;
    }
    v13 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v13 = sub_1C47738(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v13)(
          questIds,
          *(_QWORD *)(v13 + 8));
  v16 = v14;
  while ( 1 )
  {
    if ( !v16 )
      sub_1C71608(v14, v15);
    v17 = *(_QWORD *)v16;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_16:
      v20 = sub_1C47738(v16, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
      break;
    v21 = *(_QWORD *)v16;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v23 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_23;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_23:
      v24 = sub_1C47738(v16, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v16, *(_QWORD *)(v24 + 8));
    if ( !routeIds )
      sub_1C71608(v25, v26);
    v27 = routeIds->klass;
    v28 = v25;
    v29 = *(unsigned __int16 *)&routeIds->klass->_2.rank;
    if ( *(_WORD *)&routeIds->klass->_2.rank )
    {
      v30 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v30 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_30;
      }
      v31 = (__int64)&v27->vtable[*v30];
    }
    else
    {
LABEL_30:
      v31 = sub_1C47738(routeIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
    }
    v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v31)(
            routeIds,
            *(_QWORD *)(v31 + 8));
    if ( !v33 )
      sub_1C71608(0, v32);
    while ( 1 )
    {
      v34 = *(_QWORD *)v33;
      v35 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
      {
        v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v35;
          v36 += 4;
          if ( !v35 )
            goto LABEL_37;
        }
        v37 = v34 + 16LL * *v36 + 312;
      }
      else
      {
LABEL_37:
        v37 = sub_1C47738(v33, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
        break;
      v38 = *(_QWORD *)v33;
      v39 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
      {
        v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v40 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          --v39;
          v40 += 4;
          if ( !v39 )
            goto LABEL_44;
        }
        v41 = v38 + 16LL * *v40 + 312;
      }
      else
      {
LABEL_44:
        v41 = sub_1C47738(v33, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
      }
      v43 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v33, *(_QWORD *)(v41 + 8));
      if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      IsMaterialSelectedRouteId = MaterialBranchRouteManager__IsMaterialSelectedRouteId(v28, v43, v42);
      if ( IsMaterialSelectedRouteId )
      {
        if ( !v7 )
          sub_1C71608(IsMaterialSelectedRouteId, v45);
        System_Collections_Generic_HashSet_int___Add(
          v7,
          v43,
          (const MethodInfo_36C1F64 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
    v46 = *(_QWORD *)v33;
    v47 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_55;
      }
      v49 = v46 + 16LL * *v48 + 312;
    }
    else
    {
LABEL_55:
      v49 = sub_1C47738(v33, System_IDisposable_TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v33, *(_QWORD *)(v49 + 8));
  }
  v50 = *(_QWORD *)v16;
  v51 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
  {
    v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      --v51;
      v52 += 4;
      if ( !v51 )
        goto LABEL_64;
    }
    v53 = v50 + 16LL * *v52 + 312;
  }
  else
  {
LABEL_64:
    v53 = sub_1C47738(v16, System_IDisposable_TypeInfo, 0);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v16, *(_QWORD *)(v53 + 8));
  if ( !v7 )
LABEL_72:
    sub_1C71608(v8, v9);
  v54 = v7->fields._count;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetCompareCheckType(checkType, count, v54, 0);
}


bool MaterialBranchRouteManager__ReadData(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  MaterialBranchRouteManager_c *v3; // x0
  System_String_o *FilePath; // x19
  MaterialBranchRouteManager_c *v5; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryReader_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  MaterialBranchRouteManager_c *v11; // x0
  int v12; // w21
  char v13; // w20
  MaterialBranchRouteManager_c *v14; // x0
  int v15; // w20
  int v16; // w22
  int v17; // w23
  int v18; // w24
  __int64 v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  MaterialBranchRouteManager_c *v28; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v35; // x9
  int32_t *p_offset; // x10
  __int64 v37; // x0

  if ( (byte_4CC872D & 1) == 0 )
  {
    sub_1C713B0(&System_IO_BinaryReader_TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__);
    sub_1C713B0(&ManagerConfig_TypeInfo);
    sub_1C713B0(&MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
    sub_1C713B0(&MaterialBranchRouteManager_TypeInfo);
    byte_4CC872D = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseMock )
    return 1;
  v3 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  FilePath = MaterialBranchRouteManager__GetFilePath((const MethodInfo *)v3);
  if ( !System_IO_File__Exists(FilePath, 0) )
    return 0;
  v5 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  MaterialBranchRouteManager__ClearSaveData((const MethodInfo *)v5);
  MaterialBranchRouteManager_TypeInfo->static_fields->isModfiy = 0;
  v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0);
  v7 = (System_IO_BinaryReader_o *)sub_1C715FC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v7, v6, 0);
  if ( !v7 )
    sub_1C71608(v8, v9);
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                             v7,
                             v7->klass->vtable._22_ReadString.method);
  v11 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v11 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v11->static_fields->SAVE_DATA_VERSION, v10, 0) )
  {
    v12 = 5;
  }
  else
  {
    v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._9_ReadBoolean.methodPtr)(
            v7,
            v7->klass->vtable._9_ReadBoolean.method);
    v14 = MaterialBranchRouteManager_TypeInfo;
    if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      v14 = MaterialBranchRouteManager_TypeInfo;
    }
    v14->static_fields->isContinueDevice = v13 & 1;
    v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
            v7,
            v7->klass->vtable._15_ReadInt32.method);
    if ( v15 >= 1 )
    {
      do
      {
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        v19 = sub_1C715FC(MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v19, 0);
        if ( !v19 )
          sub_1C71608(v20, v21);
        *(_DWORD *)(v19 + 16) = v16;
        *(_DWORD *)(v19 + 20) = v17;
        *(_DWORD *)(v19 + 24) = v18;
        v28 = MaterialBranchRouteManager_TypeInfo;
        if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
          v28 = MaterialBranchRouteManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v28->static_fields->infoList;
        if ( !infoList )
          sub_1C71608(0, v21);
        items = infoList->fields._items;
        v31 = Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1C71608(infoList, v21);
        size = infoList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v19,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v19;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v33 + 4), v19, v22, v23, v24, v25, v26, v27);
        }
        --v15;
      }
      while ( v15 );
    }
    v12 = 8;
  }
  klass = v7->klass;
  v35 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      p_offset += 4;
      if ( !v35 )
        goto LABEL_34;
    }
    v37 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_34:
    v37 = sub_1C47738(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v37)(v7, *(_QWORD *)(v37 + 8));
  return (v12 | 8) == 8;
}


void MaterialBranchRouteManager__SetRouteId(
        int32_t questId,
        int32_t phase,
        int32_t index,
        ScriptManager_MenuRouteInfo_array *routeInfos,
        const MethodInfo *method)
{
  __int64 v9; // x19
  System_Collections_Generic_List_object__o *All; // x0
  __int64 v11; // x1
  ScriptManager_MenuRouteInfo_o *v12; // x8
  int32_t route; // w24
  MaterialBranchRouteManager_c *v14; // x0
  System_Collections_Generic_List_object__o *infoList; // x21
  System_Predicate_object__o *v16; // x22
  Il2CppObject *current; // x25
  _BOOL8 v18; // x0
  __int64 v19; // x1
  il2cpp_array_size_t max_length; // x8
  __int64 v21; // x10
  ScriptManager_MenuRouteInfo_o *v22; // x11
  MaterialBranchRouteManager_c *v23; // x0
  __int64 v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  __int64 v31; // d0
  MaterialBranchRouteManager_c *v32; // x0
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x8
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CC872C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__FindAll__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__GetEnumerator__);
    sub_1C713B0(&MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
    sub_1C713B0(&MaterialBranchRouteManager_TypeInfo);
    sub_1C713B0(&System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
    sub_1C713B0(&Method_MaterialBranchRouteManager___c__DisplayClass11_0__SetRouteId_b__0__);
    sub_1C713B0(&MaterialBranchRouteManager___c__DisplayClass11_0_TypeInfo);
    byte_4CC872C = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v9 = sub_1C715FC(MaterialBranchRouteManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_40;
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = phase;
  if ( !routeInfos )
    goto LABEL_40;
  if ( LODWORD(routeInfos->max_length) <= index )
    sub_1C71610(All);
  v12 = routeInfos->m_Items[index];
  if ( !v12 )
    goto LABEL_40;
  route = v12->fields.route;
  if ( !route )
    return;
  v14 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v14 = MaterialBranchRouteManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v14->static_fields->infoList;
  v16 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)v9,
    Method_MaterialBranchRouteManager___c__DisplayClass11_0__SetRouteId_b__0__,
    0);
  if ( !infoList )
    goto LABEL_40;
  All = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___FindAll(
                                                       infoList,
                                                       (System_Predicate_T__o *)v16,
                                                       (const MethodInfo_3810E28 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__FindAll__);
  if ( !All )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    All,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__GetEnumerator__);
  current = 0;
  v38 = v37;
LABEL_13:
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__MoveNext__);
    if ( !v18 )
      break;
    max_length = routeInfos->max_length;
    if ( (int)max_length >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v21 >= (unsigned int)max_length )
          sub_1C71610(v18);
        v22 = routeInfos->m_Items[v21];
        if ( !v22 )
          sub_1C71608(v18, v19);
        if ( !v38.fields._current )
          sub_1C71608(v18, v19);
        if ( v22->fields.route == LODWORD(v38.fields._current[1].monitor) )
          break;
        if ( (int)++v21 >= (int)max_length )
          goto LABEL_13;
      }
      current = v38.fields._current;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__Dispose__);
  if ( !current )
  {
    v24 = sub_1C715FC(MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v24, 0);
    if ( v24 )
    {
      v31 = *(_QWORD *)(v9 + 16);
      *(_DWORD *)(v24 + 24) = route;
      *(_QWORD *)(v24 + 16) = v31;
      v32 = MaterialBranchRouteManager_TypeInfo;
      if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
        v32 = MaterialBranchRouteManager_TypeInfo;
      }
      All = (System_Collections_Generic_List_object__o *)v32->static_fields->infoList;
      if ( All )
      {
        items = All->fields._items;
        v34 = Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__;
        ++All->fields._version;
        if ( items )
        {
          size = All->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              All,
              (Il2CppObject *)v24,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &items->obj.klass + size;
            All->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v24;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v36 + 4), v24, v25, v26, v27, v28, v29, v30);
          }
          goto LABEL_34;
        }
      }
    }
LABEL_40:
    sub_1C71608(All, v11);
  }
  *(_DWORD *)((char *)&off_18 + (_QWORD)current) = route;
  v23 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
LABEL_34:
    v23 = MaterialBranchRouteManager_TypeInfo;
  }
  v23->static_fields->isModfiy = 1;
}


bool MaterialBranchRouteManager__WriteData(const MethodInfo *method)
{
  MaterialBranchRouteManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  const MethodInfo *v4; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryWriter_o *v7; // x19
  __int64 v8; // x1
  MaterialBranchRouteManager_c *v9; // x0
  struct MaterialBranchRouteManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *infoList; // x9
  int size; // w20
  __int64 v13; // x1
  int32_t i; // w21
  MaterialBranchRouteManager_c *v15; // x0
  System_Collections_Generic_List_object__o *v16; // x0
  Il2CppObject *Item; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0

  if ( (byte_4CC872E & 1) == 0 )
  {
    sub_1C713B0(&System_IO_BinaryWriter_TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Item__);
    sub_1C713B0(&ManagerConfig_TypeInfo);
    sub_1C713B0(&MaterialBranchRouteManager_TypeInfo);
    byte_4CC872E = 1;
  }
  v1 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v1 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( !v1->static_fields->isModfiy )
    return 0;
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 0;
  v4 = (const MethodInfo *)MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v4 = (const MethodInfo *)MaterialBranchRouteManager_TypeInfo;
  }
  *((_BYTE *)v4[2].virtualMethodPointer + 8) = 0;
  FilePath = MaterialBranchRouteManager__GetFilePath(v4);
  v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0);
  v7 = (System_IO_BinaryWriter_o *)sub_1C715FC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64941052(v7, v6, 0);
  v9 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v9 = MaterialBranchRouteManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  infoList = static_fields->infoList;
  if ( !infoList )
    sub_1C71608(v9, v8);
  if ( !v7 )
    sub_1C71608(v9, v8);
  size = infoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))v7->klass->vtable._22_Write.methodPtr)(
    v7,
    static_fields->SAVE_DATA_VERSION,
    v7->klass->vtable._22_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, const MethodInfo *))v7->klass->vtable._8_Write.methodPtr)(
    v7,
    MaterialBranchRouteManager_TypeInfo->static_fields->isContinueDevice,
    v7->klass->vtable._8_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
    v7,
    (unsigned int)size,
    v7->klass->vtable._17_Write.method);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v15 = MaterialBranchRouteManager_TypeInfo;
      if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
        v15 = MaterialBranchRouteManager_TypeInfo;
      }
      v16 = (System_Collections_Generic_List_object__o *)v15->static_fields->infoList;
      if ( !v16 )
        sub_1C71608(0, v13);
      Item = System_Collections_Generic_List_object___get_Item(
               v16,
               i,
               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Item__);
      v19 = Item;
      if ( !Item )
        sub_1C71608(0, v18);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        LODWORD(Item[1].klass),
        v7->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        HIDWORD(v19[1].klass),
        v7->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        LODWORD(v19[1].monitor),
        v7->klass->vtable._17_Write.method);
    }
  }
  klass = v7->klass;
  v21 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_27;
    }
    v23 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_27:
    v23 = sub_1C47738(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v23)(v7, *(_QWORD *)(v23 + 8));
  return 1;
}


void MaterialBranchRouteManager_MaterialBranchInfo___ctor(
        MaterialBranchRouteManager_MaterialBranchInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MaterialBranchRouteManager___c__DisplayClass11_0___ctor(
        MaterialBranchRouteManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MaterialBranchRouteManager___c__DisplayClass11_0___SetRouteId_b__0(
        MaterialBranchRouteManager___c__DisplayClass11_0_o *this,
        MaterialBranchRouteManager_MaterialBranchInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.questId == this->fields.questId && x->fields.phase == this->fields.phase;
}


void MaterialBranchRouteManager___c__DisplayClass9_0___ctor(
        MaterialBranchRouteManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MaterialBranchRouteManager___c__DisplayClass9_0___IsMaterialSelectedRouteId_b__0(
        MaterialBranchRouteManager___c__DisplayClass9_0_o *this,
        MaterialBranchRouteManager_MaterialBranchInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.questId == this->fields.questId && x->fields.routeId == this->fields.routeId;
}