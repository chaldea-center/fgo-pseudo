void __fastcall MaterialBranchRouteManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *v17; // x19
  struct MaterialBranchRouteManager_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B1732E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo, v8, v9);
    sub_1BCA7E0(&MaterialBranchRouteManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6766/*"Fgo_20210908"*/, v12, v13);
    byte_4B1732E = 1;
  }
  MaterialBranchRouteManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6766/*"Fgo_20210908"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MaterialBranchRouteManager_TypeInfo->static_fields,
    StringLiteral_6766/*"Fgo_20210908"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  *(_WORD *)&MaterialBranchRouteManager_TypeInfo->static_fields->isModfiy = 0;
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___ctor__);
  static_fields = MaterialBranchRouteManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->infoList, (int64_t)v17, v19, v20, v21, v22, v23, v24);
}


void __fastcall MaterialBranchRouteManager___ctor(MaterialBranchRouteManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MaterialBranchRouteManager__ClearSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  MaterialBranchRouteManager_c *v7; // x0
  __int64 v8; // x1
  MaterialBranchRouteManager_c *v9; // x0
  struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *infoList; // x8
  int32_t size; // w2
  int v12; // w9
  MaterialBranchRouteManager_c *v13; // x0

  if ( (byte_4B17328 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_MaterialBranchRouteManager_MaterialBranchInfo___, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Clear__, v3, v4);
    sub_1BCA7E0(&MaterialBranchRouteManager_TypeInfo, v5, v6);
    byte_4B17328 = 1;
  }
  v7 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v1);
    v7 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v7->static_fields->infoList,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_MaterialBranchRouteManager_MaterialBranchInfo___) )
  {
    v9 = MaterialBranchRouteManager_TypeInfo;
    if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v8);
      v9 = MaterialBranchRouteManager_TypeInfo;
    }
    infoList = v9->static_fields->infoList;
    if ( !infoList )
      sub_1BCAA3C(v9, v8);
    size = infoList->fields._size;
    v12 = infoList->fields._version + 1;
    infoList->fields._size = 0;
    infoList->fields._version = v12;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0LL);
  }
  v13 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v8);
    v13 = MaterialBranchRouteManager_TypeInfo;
  }
  *(_WORD *)&v13->static_fields->isModfiy = 1;
}


void __fastcall MaterialBranchRouteManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MaterialBranchRouteManager_c *v3; // x0
  System_String_o *FilePath; // x19

  if ( (byte_4B17326 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialBranchRouteManager_TypeInfo, v1, v2);
    byte_4B17326 = 1;
  }
  v3 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v1);
  FilePath = MaterialBranchRouteManager__GetFilePath((const MethodInfo *)v3);
  if ( System_IO_File__Exists(FilePath, 0LL) )
    System_IO_File__Delete(FilePath, 0LL);
}


System_String_o *__fastcall MaterialBranchRouteManager__GetFilePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B17325 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B17325 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(35, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


void __fastcall MaterialBranchRouteManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MaterialBranchRouteManager_c *v3; // x0

  if ( (byte_4B17327 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialBranchRouteManager_TypeInfo, v1, v2);
    byte_4B17327 = 1;
  }
  v3 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v1);
  MaterialBranchRouteManager__ReadData((const MethodInfo *)v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaterialBranchRouteManager__IsMaterialSelectedRouteId(
        int32_t questId,
        int32_t routeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  MaterialBranchRouteManager_c *v19; // x0
  System_Collections_Generic_List_T__o *infoList; // x19
  System_Func_object__bool__o *v21; // x20

  if ( (byte_4B17329 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_MaterialBranchRouteManager_MaterialBranchInfo___, *(_QWORD *)&routeId, method);
    sub_1BCA7E0(&System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&MaterialBranchRouteManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_MaterialBranchRouteManager___c__DisplayClass9_0__IsMaterialSelectedRouteId_b__0__, v10, v11);
    sub_1BCA7E0(&MaterialBranchRouteManager___c__DisplayClass9_0_TypeInfo, v12, v13);
    byte_4B17329 = 1;
  }
  v14 = sub_1BCAA2C(MaterialBranchRouteManager___c__DisplayClass9_0_TypeInfo, *(_QWORD *)&routeId, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  *(_DWORD *)(v14 + 16) = questId;
  *(_DWORD *)(v14 + 20) = routeId;
  v19 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v16);
    v19 = MaterialBranchRouteManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_T__o *)v19->static_fields->infoList;
  v21 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool__TypeInfo,
                                         v16,
                                         v17,
                                         v18);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v14,
    Method_MaterialBranchRouteManager___c__DisplayClass9_0__IsMaterialSelectedRouteId_b__0__,
    0LL);
  return BasicHelper__Any_object_(
           infoList,
           (System_Func_T__bool__o *)v21,
           (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_MaterialBranchRouteManager_MaterialBranchInfo___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaterialBranchRouteManager__IsMaterialSelectedRouteIds(
        System_Collections_Generic_IList_int__o *questIds,
        System_Collections_Generic_IList_int__o *routeIds,
        int32_t count,
        int32_t checkType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_HashSet_int__o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_IList_int__c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x22
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  System_Collections_Generic_IList_int__c *v43; // x8
  int32_t v44; // w25
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x24
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x1
  const MethodInfo *v59; // x2
  int32_t v60; // w26
  _BOOL8 IsMaterialSelectedRouteId; // x0
  __int64 v62; // x1
  __int64 v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  __int64 v67; // x8
  __int64 v68; // x9
  int *v69; // x10
  __int64 v70; // x0

  if ( (byte_4B1732A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, routeIds, *(_QWORD *)&count);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__get_Count__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_int__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_int__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v19, v20);
    sub_1BCA7E0(&MaterialBranchRouteManager_TypeInfo, v21, v22);
    byte_4B1732A = 1;
  }
  v23 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       routeIds,
                                                       *(_QWORD *)&count,
                                                       *(_QWORD *)&checkType);
  System_Collections_Generic_HashSet_int____ctor(
    v23,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !questIds )
    goto LABEL_79;
  klass = questIds->klass;
  v27 = *(unsigned __int16 *)(&questIds->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&questIds->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))p_method)(
          questIds,
          *(_QWORD *)(p_method + 8));
  v32 = v30;
  while ( 1 )
  {
    if ( !v32 )
      sub_1BCAA3C(v30, v31);
    v33 = *(_QWORD *)v32;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_16;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_16:
      v36 = sub_1C1C7C0(v32, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 )
      break;
    v37 = *(_QWORD *)v32;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v39 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_23;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_23:
      v40 = sub_1C1C7C0(v32, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v32, *(_QWORD *)(v40 + 8));
    if ( !routeIds )
      sub_1BCAA3C(v41, v42);
    v43 = routeIds->klass;
    v44 = v41;
    v45 = *(unsigned __int16 *)(&routeIds->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&routeIds->klass->_2.bitflags2 + 3) )
    {
      v46 = &v43->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v46 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_30;
      }
      v47 = (__int64)&v43->vtable[*v46].method;
    }
    else
    {
LABEL_30:
      v47 = sub_1C1C7C0(routeIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
    }
    v49 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v47)(
            routeIds,
            *(_QWORD *)(v47 + 8));
    if ( !v49 )
      sub_1BCAA3C(0LL, v48);
    while ( 1 )
    {
      v50 = *(_QWORD *)v49;
      v51 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
      {
        v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v52 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v51;
          v52 += 4;
          if ( !v51 )
            goto LABEL_37;
        }
        v53 = v50 + 16LL * *v52 + 312;
      }
      else
      {
LABEL_37:
        v53 = sub_1C1C7C0(v49, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v49, *(_QWORD *)(v53 + 8)) & 1) == 0 )
        break;
      v54 = *(_QWORD *)v49;
      v55 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
      {
        v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v56 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          --v55;
          v56 += 4;
          if ( !v55 )
            goto LABEL_44;
        }
        v57 = v54 + 16LL * *v56 + 312;
      }
      else
      {
LABEL_44:
        v57 = sub_1C1C7C0(v49, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
      }
      v60 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v49, *(_QWORD *)(v57 + 8));
      if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v58);
      IsMaterialSelectedRouteId = MaterialBranchRouteManager__IsMaterialSelectedRouteId(v44, v60, v59);
      if ( IsMaterialSelectedRouteId )
      {
        if ( !v23 )
          sub_1BCAA3C(IsMaterialSelectedRouteId, v62);
        System_Collections_Generic_HashSet_int___Add(
          v23,
          v60,
          (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
    v63 = *(_QWORD *)v49;
    v64 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
      {
        --v64;
        v65 += 4;
        if ( !v64 )
          goto LABEL_55;
      }
      v66 = v63 + 16LL * *v65 + 312;
    }
    else
    {
LABEL_55:
      v66 = sub_1C1C7C0(v49, System_IDisposable_TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v66)(v49, *(_QWORD *)(v66 + 8));
  }
  v67 = *(_QWORD *)v32;
  v68 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
  {
    v69 = (int *)(*(_QWORD *)(v67 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
    {
      --v68;
      v69 += 4;
      if ( !v68 )
        goto LABEL_64;
    }
    v70 = v67 + 16LL * *v69 + 312;
  }
  else
  {
LABEL_64:
    v70 = sub_1C1C7C0(v32, System_IDisposable_TypeInfo, 0LL);
  }
  v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v70)(v32, *(_QWORD *)(v70 + 8));
  if ( !checkType )
  {
    if ( v23 )
      return v23->fields._count == count;
    goto LABEL_79;
  }
  if ( checkType == 1 )
  {
    if ( v23 )
      return v23->fields._count >= count;
LABEL_79:
    sub_1BCAA3C(v24, v25);
  }
  if ( checkType != 2 )
    return 0;
  if ( !v23 )
    goto LABEL_79;
  return v23->fields._count <= count;
}


bool __fastcall MaterialBranchRouteManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ManagerConfig_c *v13; // x0
  MaterialBranchRouteManager_c *v15; // x0
  System_String_o *FilePath; // x19
  __int64 v17; // x1
  MaterialBranchRouteManager_c *v18; // x0
  System_IO_Stream_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_IO_BinaryReader_o *v23; // x19
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  System_String_o *v27; // x20
  MaterialBranchRouteManager_c *v28; // x0
  int v29; // w21
  __int64 v30; // x1
  char v31; // w20
  MaterialBranchRouteManager_c *v32; // x0
  int v33; // w20
  int v34; // w22
  int v35; // w23
  int v36; // w24
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  int64_t v40; // x21
  __int64 v41; // x0
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  MaterialBranchRouteManager_c *v49; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v56; // x9
  int32_t *p_offset; // x10
  __int64 v58; // x0

  if ( (byte_4B1732C & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__, v5, v6);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo, v9, v10);
    sub_1BCA7E0(&MaterialBranchRouteManager_TypeInfo, v11, v12);
    byte_4B1732C = 1;
  }
  v13 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v13 = ManagerConfig_TypeInfo;
  }
  if ( v13->static_fields->UseMock )
    return 1;
  v15 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v1);
  FilePath = MaterialBranchRouteManager__GetFilePath((const MethodInfo *)v15);
  if ( !System_IO_File__Exists(FilePath, 0LL) )
    return 0;
  v18 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v17);
  MaterialBranchRouteManager__ClearSaveData((const MethodInfo *)v18);
  MaterialBranchRouteManager_TypeInfo->static_fields->isModfiy = 0;
  v19 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0LL);
  v23 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v20, v21, v22);
  System_IO_BinaryReader___ctor(v23, v19, 0LL);
  if ( !v23 )
    sub_1BCAA3C(v24, v25);
  v27 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._22_ReadString.method)(
                             v23,
                             v23->klass->vtable._23_ReadChars.methodPtr);
  v28 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v26);
    v28 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v28->static_fields->SAVE_DATA_VERSION, v27, 0LL) )
  {
    v29 = 5;
  }
  else
  {
    v31 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._9_ReadBoolean.method)(
            v23,
            v23->klass->vtable._10_ReadByte.methodPtr);
    v32 = MaterialBranchRouteManager_TypeInfo;
    if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v30);
      v32 = MaterialBranchRouteManager_TypeInfo;
    }
    v32->static_fields->isContinueDevice = v31 & 1;
    v33 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._15_ReadInt32.method)(
            v23,
            v23->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v33 >= 1 )
    {
      do
      {
        v34 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._15_ReadInt32.method)(
                v23,
                v23->klass->vtable._16_ReadUInt32.methodPtr);
        v35 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._15_ReadInt32.method)(
                v23,
                v23->klass->vtable._16_ReadUInt32.methodPtr);
        v36 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._15_ReadInt32.method)(
                v23,
                v23->klass->vtable._16_ReadUInt32.methodPtr);
        v40 = sub_1BCAA2C(MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo, v37, v38, v39);
        System_Object___ctor((Il2CppObject *)v40, 0LL);
        if ( !v40 )
          sub_1BCAA3C(v41, v42);
        *(_DWORD *)(v40 + 16) = v34;
        *(_DWORD *)(v40 + 20) = v35;
        *(_DWORD *)(v40 + 24) = v36;
        v49 = MaterialBranchRouteManager_TypeInfo;
        if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v42);
          v49 = MaterialBranchRouteManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v49->static_fields->infoList;
        if ( !infoList )
          sub_1BCAA3C(0LL, v42);
        items = infoList->fields._items;
        v52 = Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1BCAA3C(infoList, v42);
        size = infoList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v40,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v54[4] = (Il2CppClass *)v40;
          sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 4), v40, v43, v44, v45, v46, v47, v48);
        }
        --v33;
      }
      while ( v33 );
    }
    v29 = 8;
  }
  klass = v23->klass;
  v56 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v56;
      p_offset += 4;
      if ( !v56 )
        goto LABEL_34;
    }
    v58 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_34:
    v58 = sub_1C1C7C0(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v58)(v23, *(_QWORD *)(v58 + 8));
  return (v29 | 8) == 8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialBranchRouteManager__SetRouteId(
        int32_t questId,
        int32_t phase,
        int32_t index,
        ScriptManager_MenuRouteInfo_array *routeInfos,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x19
  System_Collections_Generic_List_object__o *All; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  ScriptManager_MenuRouteInfo_o *v34; // x8
  int32_t route; // w24
  MaterialBranchRouteManager_c *v36; // x0
  System_Collections_Generic_List_object__o *infoList; // x21
  System_Predicate_object__o *v38; // x22
  Il2CppObject *current; // x25
  _BOOL8 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x8
  __int64 v43; // x10
  ScriptManager_MenuRouteInfo_o *v44; // x11
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  MaterialBranchRouteManager_c *v48; // x0
  int64_t v49; // x20
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // d0
  MaterialBranchRouteManager_c *v57; // x0
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x8
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B1732B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__Dispose__,
      *(_QWORD *)&phase,
      *(_QWORD *)&index);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__, v13, v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__FindAll__,
      v15,
      v16);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__GetEnumerator__,
      v17,
      v18);
    sub_1BCA7E0(&MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo, v19, v20);
    sub_1BCA7E0(&MaterialBranchRouteManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_MaterialBranchRouteManager___c__DisplayClass11_0__SetRouteId_b__0__, v25, v26);
    sub_1BCA7E0(&MaterialBranchRouteManager___c__DisplayClass11_0_TypeInfo, v27, v28);
    byte_4B1732B = 1;
  }
  memset(&v63, 0, sizeof(v63));
  v29 = sub_1BCAA2C(
          MaterialBranchRouteManager___c__DisplayClass11_0_TypeInfo,
          *(_QWORD *)&phase,
          *(_QWORD *)&index,
          routeInfos);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_40;
  *(_DWORD *)(v29 + 16) = questId;
  *(_DWORD *)(v29 + 20) = phase;
  if ( !routeInfos )
    goto LABEL_40;
  if ( routeInfos->max_length <= index )
    sub_1BCAA44(All, v31);
  v34 = routeInfos->m_Items[index];
  if ( !v34 )
    goto LABEL_40;
  route = v34->fields.route;
  if ( !route )
    return;
  v36 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v31);
    v36 = MaterialBranchRouteManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v36->static_fields->infoList;
  v38 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo,
                                        v31,
                                        v32,
                                        v33);
  System_Predicate_object____ctor(
    v38,
    (Il2CppObject *)v29,
    Method_MaterialBranchRouteManager___c__DisplayClass11_0__SetRouteId_b__0__,
    0LL);
  if ( !infoList )
    goto LABEL_40;
  All = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___FindAll(
                                                       infoList,
                                                       (System_Predicate_T__o *)v38,
                                                       (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__FindAll__);
  if ( !All )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v62,
    All,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__GetEnumerator__);
  current = 0LL;
  v63 = v62;
LABEL_13:
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v63,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__MoveNext__);
    if ( !v40 )
      break;
    v42 = *(_QWORD *)&routeInfos->max_length;
    if ( (int)v42 >= 1 )
    {
      v43 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v43 >= (unsigned int)v42 )
          sub_1BCAA44(v40, v41);
        v44 = routeInfos->m_Items[v43];
        if ( !v44 )
          sub_1BCAA3C(v40, v41);
        if ( !v63.fields._current )
          sub_1BCAA3C(v40, v41);
        if ( v44->fields.route == LODWORD(v63.fields._current[1].monitor) )
          break;
        if ( (int)++v43 >= (int)v42 )
          goto LABEL_13;
      }
      current = v63.fields._current;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v63,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__Dispose__);
  if ( !current )
  {
    v49 = sub_1BCAA2C(MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo, v45, v46, v47);
    System_Object___ctor((Il2CppObject *)v49, 0LL);
    if ( v49 )
    {
      v56 = *(_QWORD *)(v29 + 16);
      *(_DWORD *)(v49 + 24) = route;
      *(_QWORD *)(v49 + 16) = v56;
      v57 = MaterialBranchRouteManager_TypeInfo;
      if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v31);
        v57 = MaterialBranchRouteManager_TypeInfo;
      }
      All = (System_Collections_Generic_List_object__o *)v57->static_fields->infoList;
      if ( All )
      {
        items = All->fields._items;
        v59 = Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__;
        ++All->fields._version;
        if ( items )
        {
          size = All->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              All,
              (Il2CppObject *)v49,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
          }
          else
          {
            v61 = &items->obj.klass + size;
            All->fields._size = size + 1;
            v61[4] = (Il2CppClass *)v49;
            sub_1BCA784((PartyOrganizationUtility_o *)(v61 + 4), v49, v50, v51, v52, v53, v54, v55);
          }
          goto LABEL_34;
        }
      }
    }
LABEL_40:
    sub_1BCAA3C(All, v31);
  }
  LODWORD(current[1].monitor) = route;
  v48 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v45);
LABEL_34:
    v48 = MaterialBranchRouteManager_TypeInfo;
  }
  v48->static_fields->isModfiy = 1;
}


bool __fastcall MaterialBranchRouteManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  MaterialBranchRouteManager_c *v13; // x0
  ManagerConfig_c *v14; // x0
  const MethodInfo *v16; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_IO_BinaryWriter_o *v22; // x19
  __int64 v23; // x1
  MaterialBranchRouteManager_c *v24; // x0
  struct MaterialBranchRouteManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *infoList; // x9
  int size; // w20
  __int64 v28; // x1
  int32_t i; // w21
  MaterialBranchRouteManager_c *v30; // x0
  System_Collections_Generic_List_object__o *v31; // x0
  Il2CppObject *Item; // x0
  __int64 v33; // x1
  Il2CppObject *v34; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 v38; // x0

  if ( (byte_4B1732D & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Count__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Item__,
      v7,
      v8);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v9, v10);
    sub_1BCA7E0(&MaterialBranchRouteManager_TypeInfo, v11, v12);
    byte_4B1732D = 1;
  }
  v13 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v1);
    v13 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( !v13->static_fields->isModfiy )
    return 0;
  v14 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v14 = ManagerConfig_TypeInfo;
  }
  if ( v14->static_fields->UseMock )
    return 0;
  v16 = (const MethodInfo *)MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v1);
    v16 = (const MethodInfo *)MaterialBranchRouteManager_TypeInfo;
  }
  *((_BYTE *)v16[2].virtualMethodPointer + 8) = 0;
  FilePath = MaterialBranchRouteManager__GetFilePath(v16);
  v18 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0LL);
  v22 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v19, v20, v21);
  System_IO_BinaryWriter___ctor_62639712(v22, v18, 0LL);
  v24 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v23);
    v24 = MaterialBranchRouteManager_TypeInfo;
  }
  static_fields = v24->static_fields;
  infoList = static_fields->infoList;
  if ( !infoList )
    sub_1BCAA3C(v24, v23);
  if ( !v22 )
    sub_1BCAA3C(v24, v23);
  size = infoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v22->klass->vtable._22_Write.method)(
    v22,
    static_fields->SAVE_DATA_VERSION,
    v22->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v22->klass->vtable._8_Write.method)(
    v22,
    MaterialBranchRouteManager_TypeInfo->static_fields->isContinueDevice,
    v22->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
    v22,
    (unsigned int)size,
    v22->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v30 = MaterialBranchRouteManager_TypeInfo;
      if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v28);
        v30 = MaterialBranchRouteManager_TypeInfo;
      }
      v31 = (System_Collections_Generic_List_object__o *)v30->static_fields->infoList;
      if ( !v31 )
        sub_1BCAA3C(0LL, v28);
      Item = System_Collections_Generic_List_object___get_Item(
               v31,
               i,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Item__);
      v34 = Item;
      if ( !Item )
        sub_1BCAA3C(0LL, v33);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
        v22,
        LODWORD(Item[1].klass),
        v22->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
        v22,
        HIDWORD(v34[1].klass),
        v22->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
        v22,
        LODWORD(v34[1].monitor),
        v22->klass->vtable._18_Write.methodPtr);
    }
  }
  klass = v22->klass;
  v36 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      p_offset += 4;
      if ( !v36 )
        goto LABEL_27;
    }
    v38 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_27:
    v38 = sub_1C1C7C0(v22, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v38)(v22, *(_QWORD *)(v38 + 8));
  return 1;
}


void __fastcall MaterialBranchRouteManager_MaterialBranchInfo___ctor(
        MaterialBranchRouteManager_MaterialBranchInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MaterialBranchRouteManager___c__DisplayClass11_0___ctor(
        MaterialBranchRouteManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MaterialBranchRouteManager___c__DisplayClass11_0___SetRouteId_b__0(
        MaterialBranchRouteManager___c__DisplayClass11_0_o *this,
        MaterialBranchRouteManager_MaterialBranchInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.questId == this->fields.questId && x->fields.phase == this->fields.phase;
}


void __fastcall MaterialBranchRouteManager___c__DisplayClass9_0___ctor(
        MaterialBranchRouteManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MaterialBranchRouteManager___c__DisplayClass9_0___IsMaterialSelectedRouteId_b__0(
        MaterialBranchRouteManager___c__DisplayClass9_0_o *this,
        MaterialBranchRouteManager_MaterialBranchInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.questId == this->fields.questId && x->fields.routeId == this->fields.routeId;
}