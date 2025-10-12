void MaterialBranchRouteManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_Collections_Generic_List_object__o *v3; // x19
  struct MaterialBranchRouteManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C38CD6 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
    sub_1C32C20(&MaterialBranchRouteManager_TypeInfo);
    sub_1C32C20(&StringLiteral_6681/*"Fgo_20210908"*/);
    byte_4C38CD6 = 1;
  }
  MaterialBranchRouteManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6681/*"Fgo_20210908"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)MaterialBranchRouteManager_TypeInfo->static_fields, StringLiteral_6681/*"Fgo_20210908"*/, v1, v2);
  *(_WORD *)&MaterialBranchRouteManager_TypeInfo->static_fields->isModfiy = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___ctor__);
  static_fields = MaterialBranchRouteManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->infoList, (int32_t)v3, v5, v6);
}


void MaterialBranchRouteManager___ctor(MaterialBranchRouteManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MaterialBranchRouteManager__ClearSaveData(const MethodInfo *method)
{
  MaterialBranchRouteManager_c *v1; // x0
  MaterialBranchRouteManager_c *v2; // x0
  struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *infoList; // x8
  int32_t size; // w2
  int v5; // w9
  MaterialBranchRouteManager_c *v6; // x0

  if ( (byte_4C38CD0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_MaterialBranchRouteManager_MaterialBranchInfo___);
    sub_1C32C20(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Clear__);
    sub_1C32C20(&MaterialBranchRouteManager_TypeInfo);
    byte_4C38CD0 = 1;
  }
  v1 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v1 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v1->static_fields->infoList,
         (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_MaterialBranchRouteManager_MaterialBranchInfo___) )
  {
    v2 = MaterialBranchRouteManager_TypeInfo;
    if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      v2 = MaterialBranchRouteManager_TypeInfo;
    }
    infoList = v2->static_fields->infoList;
    if ( !infoList )
      sub_1C32E7C(v2);
    size = infoList->fields._size;
    v5 = infoList->fields._version + 1;
    infoList->fields._size = 0;
    infoList->fields._version = v5;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0);
  }
  v6 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v6 = MaterialBranchRouteManager_TypeInfo;
  }
  *(_WORD *)&v6->static_fields->isModfiy = 1;
}


void MaterialBranchRouteManager__DeleteSaveData(const MethodInfo *method)
{
  MaterialBranchRouteManager_c *v1; // x0
  System_String_o *FilePath; // x19

  if ( (byte_4C38CCE & 1) == 0 )
  {
    sub_1C32C20(&MaterialBranchRouteManager_TypeInfo);
    byte_4C38CCE = 1;
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

  if ( (byte_4C38CCD & 1) == 0 )
  {
    sub_1C32C20(&AndroidUtil_TypeInfo);
    sub_1C32C20(&DatFileName_TypeInfo);
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    byte_4C38CCD = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(35, 0);
  return System_String__Concat_63556792(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


void MaterialBranchRouteManager__Initialize(const MethodInfo *method)
{
  MaterialBranchRouteManager_c *v1; // x0

  if ( (byte_4C38CCF & 1) == 0 )
  {
    sub_1C32C20(&MaterialBranchRouteManager_TypeInfo);
    byte_4C38CCF = 1;
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
  MaterialBranchRouteManager_c *v7; // x0
  System_Collections_Generic_List_T__o *infoList; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4C38CD1 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_MaterialBranchRouteManager_MaterialBranchInfo___);
    sub_1C32C20(&System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool__TypeInfo);
    sub_1C32C20(&MaterialBranchRouteManager_TypeInfo);
    sub_1C32C20(&Method_MaterialBranchRouteManager___c__DisplayClass9_0__IsMaterialSelectedRouteId_b__0__);
    sub_1C32C20(&MaterialBranchRouteManager___c__DisplayClass9_0_TypeInfo);
    byte_4C38CD1 = 1;
  }
  v5 = sub_1C32E6C(MaterialBranchRouteManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_DWORD *)(v5 + 16) = questId;
  *(_DWORD *)(v5 + 20) = routeId;
  v7 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v7 = MaterialBranchRouteManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_T__o *)v7->static_fields->infoList;
  v9 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_MaterialBranchRouteManager___c__DisplayClass9_0__IsMaterialSelectedRouteId_b__0__,
    0);
  return BasicHelper__Any_object_(
           infoList,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_30C6790 *)Method_BasicHelper_Any_MaterialBranchRouteManager_MaterialBranchInfo___);
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
  System_Collections_Generic_IList_int__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x22
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  System_Collections_Generic_IList_int__c *v24; // x8
  int32_t v25; // w25
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x24
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  const MethodInfo *v38; // x2
  int32_t v39; // w26
  _BOOL8 IsMaterialSelectedRouteId; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  int32_t v49; // w21

  if ( (byte_4C38CD2 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C32C20(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&MaterialBranchRouteManager_TypeInfo);
    byte_4C38CD2 = 1;
  }
  v7 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v7,
    (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !questIds )
    goto LABEL_72;
  klass = questIds->klass;
  v10 = *(unsigned __int16 *)&questIds->klass->_2.rank;
  if ( *(_WORD *)&questIds->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v10;
      p_offset += 4;
      if ( !v10 )
        goto LABEL_8;
    }
    v12 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v12 = sub_1C83438(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v12)(
          questIds,
          *(_QWORD *)(v12 + 8));
  v14 = v13;
  while ( 1 )
  {
    if ( !v14 )
      sub_1C32E7C(v13);
    v15 = *(_QWORD *)v14;
    v16 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
    {
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_16:
      v18 = sub_1C83438(v14, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
      break;
    v19 = *(_QWORD *)v14;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v21 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_23;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_23:
      v22 = sub_1C83438(v14, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
    if ( !routeIds )
      sub_1C32E7C(v23);
    v24 = routeIds->klass;
    v25 = v23;
    v26 = *(unsigned __int16 *)&routeIds->klass->_2.rank;
    if ( *(_WORD *)&routeIds->klass->_2.rank )
    {
      v27 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v27 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_30;
      }
      v28 = (__int64)&v24->vtable[*v27];
    }
    else
    {
LABEL_30:
      v28 = sub_1C83438(routeIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
    }
    v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v28)(
            routeIds,
            *(_QWORD *)(v28 + 8));
    if ( !v29 )
      sub_1C32E7C(0);
    while ( 1 )
    {
      v30 = *(_QWORD *)v29;
      v31 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
      {
        v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v32 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v31;
          v32 += 4;
          if ( !v31 )
            goto LABEL_37;
        }
        v33 = v30 + 16LL * *v32 + 312;
      }
      else
      {
LABEL_37:
        v33 = sub_1C83438(v29, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8)) & 1) == 0 )
        break;
      v34 = *(_QWORD *)v29;
      v35 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
      {
        v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v36 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          --v35;
          v36 += 4;
          if ( !v35 )
            goto LABEL_44;
        }
        v37 = v34 + 16LL * *v36 + 312;
      }
      else
      {
LABEL_44:
        v37 = sub_1C83438(v29, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
      }
      v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v29, *(_QWORD *)(v37 + 8));
      if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      IsMaterialSelectedRouteId = MaterialBranchRouteManager__IsMaterialSelectedRouteId(v25, v39, v38);
      if ( IsMaterialSelectedRouteId )
      {
        if ( !v7 )
          sub_1C32E7C(IsMaterialSelectedRouteId);
        System_Collections_Generic_HashSet_int___Add(
          v7,
          v39,
          (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
    v41 = *(_QWORD *)v29;
    v42 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_55;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_55:
      v44 = sub_1C83438(v29, System_IDisposable_TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v29, *(_QWORD *)(v44 + 8));
  }
  v45 = *(_QWORD *)v14;
  v46 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
  {
    v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_64;
    }
    v48 = v45 + 16LL * *v47 + 312;
  }
  else
  {
LABEL_64:
    v48 = sub_1C83438(v14, System_IDisposable_TypeInfo, 0);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v14, *(_QWORD *)(v48 + 8));
  if ( !v7 )
LABEL_72:
    sub_1C32E7C(v8);
  v49 = v7->fields._count;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetCompareCheckType(checkType, count, v49, 0);
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
  System_String_o *v9; // x20
  MaterialBranchRouteManager_c *v10; // x0
  int v11; // w21
  char v12; // w20
  MaterialBranchRouteManager_c *v13; // x0
  int v14; // w20
  int v15; // w22
  int v16; // w23
  int v17; // w24
  __int64 v18; // x21
  __int64 v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  MaterialBranchRouteManager_c *v22; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0

  if ( (byte_4C38CD4 & 1) == 0 )
  {
    sub_1C32C20(&System_IO_BinaryReader_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    sub_1C32C20(&MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
    sub_1C32C20(&MaterialBranchRouteManager_TypeInfo);
    byte_4C38CD4 = 1;
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
  v7 = (System_IO_BinaryReader_o *)sub_1C32E6C(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v7, v6, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                            v7,
                            v7->klass->vtable._22_ReadString.method);
  v10 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v10 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v10->static_fields->SAVE_DATA_VERSION, v9, 0) )
  {
    v11 = 5;
  }
  else
  {
    v12 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._9_ReadBoolean.methodPtr)(
            v7,
            v7->klass->vtable._9_ReadBoolean.method);
    v13 = MaterialBranchRouteManager_TypeInfo;
    if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      v13 = MaterialBranchRouteManager_TypeInfo;
    }
    v13->static_fields->isContinueDevice = v12 & 1;
    v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
            v7,
            v7->klass->vtable._15_ReadInt32.method);
    if ( v14 >= 1 )
    {
      do
      {
        v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        v18 = sub_1C32E6C(MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v18, 0);
        if ( !v18 )
          sub_1C32E7C(v19);
        *(_DWORD *)(v18 + 16) = v15;
        *(_DWORD *)(v18 + 20) = v16;
        *(_DWORD *)(v18 + 24) = v17;
        v22 = MaterialBranchRouteManager_TypeInfo;
        if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
          v22 = MaterialBranchRouteManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v22->static_fields->infoList;
        if ( !infoList )
          sub_1C32E7C(0);
        items = infoList->fields._items;
        v25 = Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1C32E7C(infoList);
        size = infoList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v18,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v18;
          sub_1C32BC4((CGThumbnailListItem_o *)(v27 + 4), v18, v20, v21);
        }
        --v14;
      }
      while ( v14 );
    }
    v11 = 8;
  }
  klass = v7->klass;
  v29 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_34;
    }
    v31 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_34:
    v31 = sub_1C83438(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v31)(v7, *(_QWORD *)(v31 + 8));
  return (v11 | 8) == 8;
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
  ScriptManager_MenuRouteInfo_o *v11; // x8
  int32_t route; // w24
  MaterialBranchRouteManager_c *v13; // x0
  System_Collections_Generic_List_object__o *infoList; // x21
  System_Predicate_object__o *v15; // x22
  Il2CppObject *current; // x25
  _BOOL8 v17; // x0
  il2cpp_array_size_t max_length; // x8
  __int64 v19; // x10
  ScriptManager_MenuRouteInfo_o *v20; // x11
  MaterialBranchRouteManager_c *v21; // x0
  __int64 v22; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // d0
  MaterialBranchRouteManager_c *v26; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C38CD3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__FindAll__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__GetEnumerator__);
    sub_1C32C20(&MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
    sub_1C32C20(&MaterialBranchRouteManager_TypeInfo);
    sub_1C32C20(&System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
    sub_1C32C20(&Method_MaterialBranchRouteManager___c__DisplayClass11_0__SetRouteId_b__0__);
    sub_1C32C20(&MaterialBranchRouteManager___c__DisplayClass11_0_TypeInfo);
    byte_4C38CD3 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v9 = sub_1C32E6C(MaterialBranchRouteManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_40;
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = phase;
  if ( !routeInfos )
    goto LABEL_40;
  if ( LODWORD(routeInfos->max_length) <= index )
    sub_1C32E84(All);
  v11 = routeInfos->m_Items[index];
  if ( !v11 )
    goto LABEL_40;
  route = v11->fields.route;
  if ( !route )
    return;
  v13 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v13 = MaterialBranchRouteManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v13->static_fields->infoList;
  v15 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_MaterialBranchRouteManager___c__DisplayClass11_0__SetRouteId_b__0__,
    0);
  if ( !infoList )
    goto LABEL_40;
  All = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___FindAll(
                                                       infoList,
                                                       (System_Predicate_T__o *)v15,
                                                       (const MethodInfo_3798ECC *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__FindAll__);
  if ( !All )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    All,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__GetEnumerator__);
  current = 0;
  v32 = v31;
LABEL_13:
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__MoveNext__);
    if ( !v17 )
      break;
    max_length = routeInfos->max_length;
    if ( (int)max_length >= 1 )
    {
      v19 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v19 >= (unsigned int)max_length )
          sub_1C32E84(v17);
        v20 = routeInfos->m_Items[v19];
        if ( !v20 )
          sub_1C32E7C(v17);
        if ( !v32.fields._current )
          sub_1C32E7C(v17);
        if ( v20->fields.route == LODWORD(v32.fields._current[1].monitor) )
          break;
        if ( (int)++v19 >= (int)max_length )
          goto LABEL_13;
      }
      current = v32.fields._current;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__Dispose__);
  if ( !current )
  {
    v22 = sub_1C32E6C(MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v22, 0);
    if ( v22 )
    {
      v25 = *(_QWORD *)(v9 + 16);
      *(_DWORD *)(v22 + 24) = route;
      *(_QWORD *)(v22 + 16) = v25;
      v26 = MaterialBranchRouteManager_TypeInfo;
      if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
        v26 = MaterialBranchRouteManager_TypeInfo;
      }
      All = (System_Collections_Generic_List_object__o *)v26->static_fields->infoList;
      if ( All )
      {
        items = All->fields._items;
        v28 = Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__;
        ++All->fields._version;
        if ( items )
        {
          size = All->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              All,
              (Il2CppObject *)v22,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            All->fields._size = size + 1;
            v30[4] = (Il2CppClass *)v22;
            sub_1C32BC4((CGThumbnailListItem_o *)(v30 + 4), v22, v23, v24);
          }
          goto LABEL_34;
        }
      }
    }
LABEL_40:
    sub_1C32E7C(All);
  }
  *(_DWORD *)((char *)&off_18 + (_QWORD)current) = route;
  v21 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
LABEL_34:
    v21 = MaterialBranchRouteManager_TypeInfo;
  }
  v21->static_fields->isModfiy = 1;
}


bool MaterialBranchRouteManager__WriteData(const MethodInfo *method)
{
  MaterialBranchRouteManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  const MethodInfo *v4; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryWriter_o *v7; // x19
  MaterialBranchRouteManager_c *v8; // x0
  struct MaterialBranchRouteManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *infoList; // x9
  int size; // w20
  int32_t i; // w21
  MaterialBranchRouteManager_c *v13; // x0
  System_Collections_Generic_List_object__o *v14; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v16; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0

  if ( (byte_4C38CD5 & 1) == 0 )
  {
    sub_1C32C20(&System_IO_BinaryWriter_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Item__);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    sub_1C32C20(&MaterialBranchRouteManager_TypeInfo);
    byte_4C38CD5 = 1;
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
  v7 = (System_IO_BinaryWriter_o *)sub_1C32E6C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64429848(v7, v6, 0);
  v8 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v8 = MaterialBranchRouteManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  infoList = static_fields->infoList;
  if ( !infoList )
    sub_1C32E7C(v8);
  if ( !v7 )
    sub_1C32E7C(v8);
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
      v13 = MaterialBranchRouteManager_TypeInfo;
      if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
        v13 = MaterialBranchRouteManager_TypeInfo;
      }
      v14 = (System_Collections_Generic_List_object__o *)v13->static_fields->infoList;
      if ( !v14 )
        sub_1C32E7C(0);
      Item = System_Collections_Generic_List_object___get_Item(
               v14,
               i,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Item__);
      v16 = Item;
      if ( !Item )
        sub_1C32E7C(0);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        LODWORD(Item[1].klass),
        v7->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        HIDWORD(v16[1].klass),
        v7->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        LODWORD(v16[1].monitor),
        v7->klass->vtable._17_Write.method);
    }
  }
  klass = v7->klass;
  v18 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_27;
    }
    v20 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_27:
    v20 = sub_1C83438(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v20)(v7, *(_QWORD *)(v20 + 8));
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return x->fields.questId == this->fields.questId && x->fields.routeId == this->fields.routeId;
}