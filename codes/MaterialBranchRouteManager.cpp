void MaterialBranchRouteManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__c *v8; // x0
  System_Collections_Generic_List_object__o *v9; // x19
  struct MaterialBranchRouteManager_StaticFields *static_fields; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5939AF6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
    sub_21FFC50(&MaterialBranchRouteManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6953/*"Fgo_20210908"*/);
    byte_5939AF6 = 1;
  }
  v7 = StringLiteral_6953/*"Fgo_20210908"*/;
  MaterialBranchRouteManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6953/*"Fgo_20210908"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)MaterialBranchRouteManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo;
  *(_WORD *)&MaterialBranchRouteManager_TypeInfo->static_fields->isModfiy = 0;
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___ctor__);
  static_fields = MaterialBranchRouteManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->infoList, (int32_t)v9, v11, v12, v13, v14, v15, v16);
}


void MaterialBranchRouteManager___ctor(MaterialBranchRouteManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MaterialBranchRouteManager__ClearSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialBranchRouteManager_c *v2; // x0
  __int64 v3; // x1
  bool v4; // w8
  MaterialBranchRouteManager_c *v5; // x0
  struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *infoList; // x8
  int32_t size; // w2
  int v8; // w9

  if ( (byte_5939AF0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_MaterialBranchRouteManager_MaterialBranchInfo___);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Clear__);
    sub_21FFC50(&MaterialBranchRouteManager_TypeInfo);
    byte_5939AF0 = 1;
  }
  v2 = MaterialBranchRouteManager_TypeInfo;
  if ( !*(&MaterialBranchRouteManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v1);
    v2 = MaterialBranchRouteManager_TypeInfo;
  }
  v4 = System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v2->static_fields->infoList,
         (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_MaterialBranchRouteManager_MaterialBranchInfo___);
  v5 = MaterialBranchRouteManager_TypeInfo;
  if ( v4 )
  {
    if ( !*(&MaterialBranchRouteManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v3);
      v5 = MaterialBranchRouteManager_TypeInfo;
    }
    infoList = v5->static_fields->infoList;
    if ( !infoList )
      sub_21FFECC(v5, v3);
    size = infoList->fields._size;
    v8 = infoList->fields._version + 1;
    infoList->fields._size = 0;
    infoList->fields._version = v8;
    if ( size >= 1 )
    {
      System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0);
      v5 = MaterialBranchRouteManager_TypeInfo;
    }
  }
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, v3);
    v5 = MaterialBranchRouteManager_TypeInfo;
  }
  *(_WORD *)&v5->static_fields->isModfiy = 1;
}


void MaterialBranchRouteManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialBranchRouteManager_c *v2; // x0
  System_String_o *FilePath; // x19

  if ( (byte_5939AEE & 1) == 0 )
  {
    sub_21FFC50(&MaterialBranchRouteManager_TypeInfo);
    byte_5939AEE = 1;
  }
  v2 = MaterialBranchRouteManager_TypeInfo;
  if ( !*(&MaterialBranchRouteManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v1);
  FilePath = MaterialBranchRouteManager__GetFilePath((const MethodInfo *)v2);
  if ( System_IO_File__Exists(FilePath, 0) )
    System_IO_File__Delete(FilePath, 0);
}


System_String_o *MaterialBranchRouteManager__GetFilePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_5939AED & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_5939AED = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(35, 0);
  return System_String__Concat_75481624(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


void MaterialBranchRouteManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialBranchRouteManager_c *v2; // x0

  if ( (byte_5939AEF & 1) == 0 )
  {
    sub_21FFC50(&MaterialBranchRouteManager_TypeInfo);
    byte_5939AEF = 1;
  }
  v2 = MaterialBranchRouteManager_TypeInfo;
  if ( !*(&MaterialBranchRouteManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v1);
  MaterialBranchRouteManager__ReadData((const MethodInfo *)v2);
}


bool MaterialBranchRouteManager__IsMaterialSelectedRouteId(int32_t questId, int32_t routeId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  MaterialBranchRouteManager_c *v8; // x0
  int v9; // w8
  System_Collections_Generic_List_T__o *infoList; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_5939AF1 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_MaterialBranchRouteManager_MaterialBranchInfo___);
    sub_21FFC50(&System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool__TypeInfo);
    sub_21FFC50(&MaterialBranchRouteManager_TypeInfo);
    sub_21FFC50(&Method_MaterialBranchRouteManager___c__DisplayClass9_0__IsMaterialSelectedRouteId_b__0__);
    sub_21FFC50(&MaterialBranchRouteManager___c__DisplayClass9_0_TypeInfo);
    byte_5939AF1 = 1;
  }
  v5 = sub_21FFEBC(MaterialBranchRouteManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  v8 = MaterialBranchRouteManager_TypeInfo;
  v9 = *(&MaterialBranchRouteManager_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v5 + 16) = questId;
  *(_DWORD *)(v5 + 20) = routeId;
  if ( !v9 )
  {
    j_il2cpp_runtime_class_init_0(v8, v7);
    v8 = MaterialBranchRouteManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_T__o *)v8->static_fields->infoList;
  v11 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_MaterialBranchRouteManager___c__DisplayClass9_0__IsMaterialSelectedRouteId_b__0__,
    0);
  return BasicHelper__Any_object_(
           infoList,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_MaterialBranchRouteManager_MaterialBranchInfo___);
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
  __int64 i; // x23
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_IList_int__c *v28; // x8
  int32_t v29; // w23
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x24
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x1
  const MethodInfo *v47; // x2
  int32_t v48; // w24
  _BOOL8 IsMaterialSelectedRouteId; // x0
  __int64 v50; // x1
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  int32_t v59; // w21
  __int64 v63; // [xsp+30h] [xbp-70h]
  __int64 v64; // [xsp+38h] [xbp-68h]

  if ( (byte_5939AF2 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&MaterialBranchRouteManager_TypeInfo);
    byte_5939AF2 = 1;
  }
  v7 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v7,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !questIds )
    goto LABEL_81;
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
    v13 = sub_2237E2C(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v13)(
          questIds,
          *(_QWORD *)(v13 + 8));
  v64 = v14;
  if ( !v14 )
    sub_21FFECC(v14, v15);
  for ( i = v14; ; i = v64 )
  {
    v17 = *(_QWORD *)i;
    v18 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
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
      v20 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(i, *(_QWORD *)(v20 + 8));
    if ( (v21 & 1) == 0 )
      break;
    if ( !v64 )
      sub_21FFECC(v21, v9);
    v22 = *(_QWORD *)v64;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v64 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v64 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v24 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_24;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_24:
      v25 = sub_2237E2C(v64, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v64, *(_QWORD *)(v25 + 8));
    if ( !routeIds )
      sub_21FFECC(v26, v27);
    v28 = routeIds->klass;
    v29 = v26;
    v30 = *(unsigned __int16 *)&routeIds->klass->_2.rank;
    if ( *(_WORD *)&routeIds->klass->_2.rank )
    {
      v31 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v31 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_31;
      }
      v32 = (__int64)&v28->vtable[*v31];
    }
    else
    {
LABEL_31:
      v32 = sub_2237E2C(routeIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
    }
    v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v32)(
            routeIds,
            *(_QWORD *)(v32 + 8));
    v35 = v33;
    v63 = v33;
    if ( !v33 )
      sub_21FFECC(0, v34);
    while ( 1 )
    {
      v36 = *(_QWORD *)v35;
      v37 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
      {
        v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v37;
          v38 += 4;
          if ( !v37 )
            goto LABEL_38;
        }
        v39 = v36 + 16LL * *v38 + 312;
      }
      else
      {
LABEL_38:
        v39 = sub_2237E2C(v35, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v40 = (*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8));
      if ( (v40 & 1) == 0 )
        break;
      if ( !v63 )
        sub_21FFECC(v40, v41);
      v42 = *(_QWORD *)v63;
      v43 = *(unsigned __int16 *)(*(_QWORD *)v63 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v63 + 302LL) )
      {
        v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v44 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          --v43;
          v44 += 4;
          if ( !v43 )
            goto LABEL_46;
        }
        v45 = v42 + 16LL * *v44 + 312;
      }
      else
      {
LABEL_46:
        v45 = sub_2237E2C(v63, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
      }
      v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v63, *(_QWORD *)(v45 + 8));
      if ( !*(&MaterialBranchRouteManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v46);
      IsMaterialSelectedRouteId = MaterialBranchRouteManager__IsMaterialSelectedRouteId(v29, v48, v47);
      if ( IsMaterialSelectedRouteId )
      {
        if ( !v7 )
          sub_21FFECC(IsMaterialSelectedRouteId, v50);
        System_Collections_Generic_HashSet_int___Add(
          v7,
          v48,
          (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v35 = v63;
    }
    if ( v63 )
    {
      v51 = *(_QWORD *)v63;
      v52 = *(unsigned __int16 *)(*(_QWORD *)v63 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v63 + 302LL) )
      {
        v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
        {
          --v52;
          v53 += 4;
          if ( !v52 )
            goto LABEL_60;
        }
        v54 = v51 + 16LL * *v53 + 312;
      }
      else
      {
LABEL_60:
        v54 = sub_2237E2C(v63, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v54)(v63, *(_QWORD *)(v54 + 8));
    }
  }
  if ( v64 )
  {
    v55 = *(_QWORD *)v64;
    v56 = *(unsigned __int16 *)(*(_QWORD *)v64 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v64 + 302LL) )
    {
      v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
      {
        --v56;
        v57 += 4;
        if ( !v56 )
          goto LABEL_71;
      }
      v58 = v55 + 16LL * *v57 + 312;
    }
    else
    {
LABEL_71:
      v58 = sub_2237E2C(v64, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v58)(v64, *(_QWORD *)(v58 + 8));
  }
  v8 = 0;
  if ( !v7 )
LABEL_81:
    sub_21FFECC(v8, v9);
  v59 = v7->fields._count;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9);
  return CondType__GetCompareCheckType(checkType, count, v59, 0);
}


bool MaterialBranchRouteManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagerConfig_c *v2; // x0
  bool v3; // w20
  MaterialBranchRouteManager_c *v4; // x0
  System_String_o *FilePath; // x19
  __int64 v6; // x1
  MaterialBranchRouteManager_c *v7; // x0
  System_IO_Stream_o *v8; // x20
  System_IO_BinaryReader_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x19
  MaterialBranchRouteManager_c *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  char v17; // w19
  MaterialBranchRouteManager_c *v18; // x0
  int v19; // w19
  int v20; // w21
  int v21; // w22
  int v22; // w23
  __int64 v23; // x20
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  MaterialBranchRouteManager_c *v32; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v39; // x9
  int *p_offset; // x10
  __int64 v41; // x0
  System_IO_BinaryReader_o *v43; // [xsp+28h] [xbp-48h]

  if ( (byte_5939AF4 & 1) == 0 )
  {
    sub_21FFC50(&System_IO_BinaryReader_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
    sub_21FFC50(&MaterialBranchRouteManager_TypeInfo);
    byte_5939AF4 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 1;
  v4 = MaterialBranchRouteManager_TypeInfo;
  if ( !*(&MaterialBranchRouteManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v1);
  FilePath = MaterialBranchRouteManager__GetFilePath((const MethodInfo *)v4);
  if ( !System_IO_File__Exists(FilePath, 0) )
    return 0;
  v7 = MaterialBranchRouteManager_TypeInfo;
  if ( !*(&MaterialBranchRouteManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v6);
  MaterialBranchRouteManager__ClearSaveData((const MethodInfo *)v7);
  MaterialBranchRouteManager_TypeInfo->static_fields->isModfiy = 0;
  v8 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0);
  v9 = (System_IO_BinaryReader_o *)sub_21FFEBC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v9, v8, 0);
  v43 = v9;
  if ( !v9 )
    sub_21FFECC(v10, v11);
  v13 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v9->klass->vtable._22_ReadString.methodPtr)(
                             v9,
                             v9->klass->vtable._22_ReadString.method);
  v14 = MaterialBranchRouteManager_TypeInfo;
  if ( !*(&MaterialBranchRouteManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v12);
    v14 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v14->static_fields->SAVE_DATA_VERSION, v13, 0) )
  {
    v3 = 0;
  }
  else
  {
    if ( !v43 )
      sub_21FFECC(0, v15);
    v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v43->klass->vtable._9_ReadBoolean.methodPtr)(
            v43,
            v43->klass->vtable._9_ReadBoolean.method);
    v18 = MaterialBranchRouteManager_TypeInfo;
    if ( !*(&MaterialBranchRouteManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v16);
      v18 = MaterialBranchRouteManager_TypeInfo;
    }
    v18->static_fields->isContinueDevice = v17 & 1;
    v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v43->klass->vtable._15_ReadInt32.methodPtr)(
            v43,
            v43->klass->vtable._15_ReadInt32.method);
    if ( v19 >= 1 )
    {
      do
      {
        v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v43->klass->vtable._15_ReadInt32.methodPtr)(
                v43,
                v43->klass->vtable._15_ReadInt32.method);
        v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v43->klass->vtable._15_ReadInt32.methodPtr)(
                v43,
                v43->klass->vtable._15_ReadInt32.method);
        v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v43->klass->vtable._15_ReadInt32.methodPtr)(
                v43,
                v43->klass->vtable._15_ReadInt32.method);
        v23 = sub_21FFEBC(MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v23, 0);
        if ( !v23 )
          sub_21FFECC(v24, v25);
        v32 = MaterialBranchRouteManager_TypeInfo;
        *(_DWORD *)(v23 + 16) = v20;
        *(_DWORD *)(v23 + 20) = v21;
        *(_DWORD *)(v23 + 24) = v22;
        if ( !*(&v32->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v32, v25);
          v32 = MaterialBranchRouteManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v32->static_fields->infoList;
        if ( !infoList
          || (items = infoList->fields._items,
              v35 = Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__,
              ++infoList->fields._version,
              !items) )
        {
          sub_21FFECC(infoList, v25);
        }
        size = infoList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v23,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v37[4] = (Il2CppClass *)v23;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v37 + 4), v23, v26, v27, v28, v29, v30, v31);
        }
        --v19;
      }
      while ( v19 );
    }
    v3 = 1;
  }
  if ( v43 )
  {
    klass = v43->klass;
    v39 = *(unsigned __int16 *)&v43->klass->_2.rank;
    if ( *(_WORD *)&v43->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v39;
        p_offset += 4;
        if ( !v39 )
          goto LABEL_37;
      }
      v41 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_37:
      v41 = sub_2237E2C(v43, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v41)(v43, *(_QWORD *)(v41 + 8));
  }
  return v3;
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
  Il2CppObject *current; // x21
  _BOOL8 v18; // x0
  __int64 v19; // x1
  il2cpp_array_size_t max_length; // x8
  ScriptManager_MenuRouteInfo_o **m_Items; // x10
  __int64 v22; // x1
  MaterialBranchRouteManager_c *v23; // x0
  __int64 v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // d0
  MaterialBranchRouteManager_c *v32; // x0
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x8
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5939AF3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__FindAll__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__GetEnumerator__);
    sub_21FFC50(&MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
    sub_21FFC50(&MaterialBranchRouteManager_TypeInfo);
    sub_21FFC50(&System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
    sub_21FFC50(&Method_MaterialBranchRouteManager___c__DisplayClass11_0__SetRouteId_b__0__);
    sub_21FFC50(&MaterialBranchRouteManager___c__DisplayClass11_0_TypeInfo);
    byte_5939AF3 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v9 = sub_21FFEBC(MaterialBranchRouteManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_38;
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = phase;
  if ( !routeInfos )
    goto LABEL_38;
  if ( LODWORD(routeInfos->max_length) <= index )
    sub_21FFED4(All);
  v12 = routeInfos->m_Items[index];
  if ( !v12 )
    goto LABEL_38;
  route = v12->fields.route;
  if ( !route )
    return;
  v14 = MaterialBranchRouteManager_TypeInfo;
  if ( !*(&MaterialBranchRouteManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v11);
    v14 = MaterialBranchRouteManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v14->static_fields->infoList;
  v16 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)v9,
    Method_MaterialBranchRouteManager___c__DisplayClass11_0__SetRouteId_b__0__,
    0);
  if ( !infoList )
    goto LABEL_38;
  All = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___FindAll(
                                                       infoList,
                                                       (System_Predicate_T__o *)v16,
                                                       (const MethodInfo_4450234 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__FindAll__);
  if ( !All )
    goto LABEL_38;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    All,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__GetEnumerator__);
  current = 0;
  v38 = v37;
  v37.fields._list = 0;
  *(_QWORD *)&v37.fields._index = &v38;
LABEL_13:
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__MoveNext__);
    if ( !v18 )
      break;
    max_length = routeInfos->max_length;
    if ( (int)max_length >= 1 )
    {
      m_Items = routeInfos->m_Items;
      while ( 1 )
      {
        if ( !*m_Items )
          sub_21FFECC(v18, v19);
        if ( !v38.fields._current )
          sub_21FFECC(v18, v19);
        if ( (*m_Items)->fields.route == LODWORD(v38.fields._current[1].monitor) )
          break;
        LODWORD(max_length) = max_length - 1;
        ++m_Items;
        if ( !(_DWORD)max_length )
          goto LABEL_13;
      }
      current = v38.fields._current;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__Dispose__);
  if ( !current )
  {
    v24 = sub_21FFEBC(MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v24, 0);
    if ( v24 )
    {
      v31 = *(_QWORD *)(v9 + 16);
      v32 = MaterialBranchRouteManager_TypeInfo;
      *(_DWORD *)(v24 + 24) = route;
      *(_QWORD *)(v24 + 16) = v31;
      if ( !*(&v32->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v32, v11);
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
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &items->obj.klass + size;
            All->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v24;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v36 + 4), v24, v25, v26, v27, v28, v29, v30);
          }
          goto LABEL_33;
        }
      }
    }
LABEL_38:
    sub_21FFECC(All, v11);
  }
  v23 = MaterialBranchRouteManager_TypeInfo;
  *(_DWORD *)((char *)off_18 + (_QWORD)current) = route;
  if ( !*(&v23->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v23, v22);
LABEL_33:
    v23 = MaterialBranchRouteManager_TypeInfo;
  }
  v23->static_fields->isModfiy = 1;
}


bool MaterialBranchRouteManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialBranchRouteManager_c *v2; // x0
  ManagerConfig_c *v3; // x0
  const MethodInfo *v5; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryWriter_o *v8; // x19
  __int64 v9; // x1
  MaterialBranchRouteManager_c *v10; // x0
  struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *infoList; // x9
  int size; // w19
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t i; // w20
  MaterialBranchRouteManager_c *v16; // x0
  System_Collections_Generic_List_object__o *v17; // x0
  __int64 v18; // x1
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v20; // x9
  int *p_offset; // x10
  __int64 v22; // x0
  System_IO_BinaryWriter_o *v23; // [xsp+28h] [xbp-38h]

  if ( (byte_5939AF5 & 1) == 0 )
  {
    sub_21FFC50(&System_IO_BinaryWriter_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Item__);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&MaterialBranchRouteManager_TypeInfo);
    byte_5939AF5 = 1;
  }
  v2 = MaterialBranchRouteManager_TypeInfo;
  if ( !*(&MaterialBranchRouteManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v1);
    v2 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( !v2->static_fields->isModfiy )
    return 0;
  v3 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 0;
  v5 = (const MethodInfo *)MaterialBranchRouteManager_TypeInfo;
  if ( !*(&MaterialBranchRouteManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v1);
    v5 = (const MethodInfo *)MaterialBranchRouteManager_TypeInfo;
  }
  *((_BYTE *)v5[2].virtualMethodPointer + 8) = 0;
  FilePath = MaterialBranchRouteManager__GetFilePath(v5);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0);
  v8 = (System_IO_BinaryWriter_o *)sub_21FFEBC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_76739708(v8, v7, 0);
  v10 = MaterialBranchRouteManager_TypeInfo;
  v23 = v8;
  if ( !*(&MaterialBranchRouteManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v9);
    v10 = MaterialBranchRouteManager_TypeInfo;
  }
  infoList = v10->static_fields->infoList;
  if ( !infoList )
    sub_21FFECC(v10, v9);
  if ( !v8 )
    sub_21FFECC(0, v9);
  size = infoList->fields._size;
  v23->klass->vtable._22_Write.methodPtr();
  v23->klass->vtable._8_Write.methodPtr();
  if ( !v23 )
    sub_21FFECC(0, v13);
  v23->klass->vtable._17_Write.methodPtr();
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v16 = MaterialBranchRouteManager_TypeInfo;
      if ( !*(&MaterialBranchRouteManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v14);
        v16 = MaterialBranchRouteManager_TypeInfo;
      }
      v17 = (System_Collections_Generic_List_object__o *)v16->static_fields->infoList;
      if ( !v17 )
        sub_21FFECC(0, v14);
      if ( !System_Collections_Generic_List_object___get_Item(
              v17,
              i,
              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Item__) )
        sub_21FFECC(0, v18);
      v23->klass->vtable._17_Write.methodPtr();
      v23->klass->vtable._17_Write.methodPtr();
      v23->klass->vtable._17_Write.methodPtr();
    }
  }
  klass = v23->klass;
  v20 = *(unsigned __int16 *)&v23->klass->_2.rank;
  if ( *(_WORD *)&v23->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_28;
    }
    v22 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_28:
    v22 = sub_2237E2C(v23, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v22)(v23, *(_QWORD *)(v22 + 8));
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
  return x->fields.questId == this->fields.questId && x->fields.routeId == this->fields.routeId;
}