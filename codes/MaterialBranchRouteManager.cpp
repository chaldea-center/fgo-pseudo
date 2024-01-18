void __fastcall MaterialBranchRouteManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  MaterialBranchRouteManager_c *v13; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct MaterialBranchRouteManager_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4189CDF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___ctor__, v1);
    sub_B2C35C(&System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo, v8);
    sub_B2C35C(&MaterialBranchRouteManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_6625/*"Fgo_20210908"*/, v10);
    byte_4189CDF = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MaterialBranchRouteManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6625/*"Fgo_20210908"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6625/*"Fgo_20210908"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = MaterialBranchRouteManager_TypeInfo;
  MaterialBranchRouteManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___ctor__);
  v15 = MaterialBranchRouteManager_TypeInfo->static_fields;
  v15->infoList = (struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v14;
  sub_B2C2F8((BattleServantConfConponent_o *)&v15->infoList, (System_Int32_array **)v14, v16, v17, v18, v19, v20, v21);
}


void __fastcall MaterialBranchRouteManager___ctor(MaterialBranchRouteManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MaterialBranchRouteManager__ClearSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  MaterialBranchRouteManager_c *v4; // x0
  __int64 v5; // x1
  MaterialBranchRouteManager_c *v6; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *infoList; // x0
  MaterialBranchRouteManager_c *v8; // x0

  if ( (byte_4189CD9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_MaterialBranchRouteManager_MaterialBranchInfo___, v1);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Clear__, v2);
    sub_B2C35C(&MaterialBranchRouteManager_TypeInfo, v3);
    byte_4189CD9 = 1;
  }
  v4 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v4 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v4->static_fields->infoList,
         (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_MaterialBranchRouteManager_MaterialBranchInfo___) )
  {
    v6 = MaterialBranchRouteManager_TypeInfo;
    if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      v6 = MaterialBranchRouteManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v6->static_fields->infoList;
    if ( !infoList )
      sub_B2C434(0LL, v5);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      infoList,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Clear__);
  }
  v8 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v8 = MaterialBranchRouteManager_TypeInfo;
  }
  v8->static_fields->isContinueDevice = 0;
  v8->static_fields->isModfiy = 1;
}


void __fastcall MaterialBranchRouteManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialBranchRouteManager_c *v2; // x0
  System_String_o *FilePath; // x19

  if ( (byte_4189CD7 & 1) == 0 )
  {
    sub_B2C35C(&MaterialBranchRouteManager_TypeInfo, v1);
    byte_4189CD7 = 1;
  }
  v2 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  }
  FilePath = MaterialBranchRouteManager__GetFilePath((const MethodInfo *)v2);
  if ( System_IO_File__Exists(FilePath, 0LL) )
    System_IO_File__Delete(FilePath, 0LL);
}


System_String_o *__fastcall MaterialBranchRouteManager__GetFilePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4189CD6 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_4189CD6 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(35, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


void __fastcall MaterialBranchRouteManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialBranchRouteManager_c *v2; // x0

  if ( (byte_4189CD8 & 1) == 0 )
  {
    sub_B2C35C(&MaterialBranchRouteManager_TypeInfo, v1);
    byte_4189CD8 = 1;
  }
  v2 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  }
  MaterialBranchRouteManager__ReadData((const MethodInfo *)v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaterialBranchRouteManager__IsMaterialSelectedRouteId(
        int32_t questId,
        int32_t routeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  MaterialBranchRouteManager___c__DisplayClass9_0_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  MaterialBranchRouteManager_c *v13; // x0
  System_Collections_Generic_List_T__o *infoList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x20

  if ( (byte_4189CDA & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_MaterialBranchRouteManager_MaterialBranchInfo___, *(_QWORD *)&routeId);
    sub_B2C35C(&Method_System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool___ctor__, v5);
    sub_B2C35C(&System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool__TypeInfo, v6);
    sub_B2C35C(&MaterialBranchRouteManager_TypeInfo, v7);
    sub_B2C35C(&Method_MaterialBranchRouteManager___c__DisplayClass9_0__IsMaterialSelectedRouteId_b__0__, v8);
    sub_B2C35C(&MaterialBranchRouteManager___c__DisplayClass9_0_TypeInfo, v9);
    byte_4189CDA = 1;
  }
  v10 = (MaterialBranchRouteManager___c__DisplayClass9_0_o *)sub_B2C42C(MaterialBranchRouteManager___c__DisplayClass9_0_TypeInfo);
  MaterialBranchRouteManager___c__DisplayClass9_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  v10->fields.questId = questId;
  v10->fields.routeId = routeId;
  v13 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v13 = MaterialBranchRouteManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_T__o *)v13->static_fields->infoList;
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v10,
    Method_MaterialBranchRouteManager___c__DisplayClass9_0__IsMaterialSelectedRouteId_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           infoList,
           (System_Func_T__bool__o *)v15,
           (const MethodInfo_17266AC *)Method_BasicHelper_Any_MaterialBranchRouteManager_MaterialBranchInfo___);
}


bool __fastcall MaterialBranchRouteManager__IsMaterialSelectedRouteIds(
        System_Collections_Generic_IList_int__o *questIds,
        System_Collections_Generic_IList_int__o *routeIds,
        int32_t count,
        int32_t checkType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_HashSet_int__o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x3
  System_Collections_Generic_IList_int__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x1
  __int64 v24; // x3
  __int64 v25; // x22
  int v26; // w23
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x3
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x3
  System_Collections_Generic_IList_int__c *v39; // x8
  int32_t v40; // w25
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x3
  __int64 v46; // x24
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x3
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0
  const MethodInfo *v56; // x2
  int32_t v57; // w26
  _BOOL8 IsMaterialSelectedRouteId; // x0
  __int64 v59; // x1
  int v60; // w26
  __int64 v61; // x8
  unsigned __int64 v62; // x10
  int *v63; // x11
  __int64 v64; // x0
  int v65; // w20
  __int64 v66; // x8
  unsigned __int64 v67; // x10
  int *v68; // x11
  __int64 v69; // x0
  _DWORD v73[2]; // [xsp+20h] [xbp-60h]
  int v74; // [xsp+28h] [xbp-58h]

  if ( (byte_4189CDB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, routeIds);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v7);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__get_Count__, v8);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v9);
    sub_B2C35C(&System_IDisposable_TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_int__TypeInfo, v11);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_int__TypeInfo, v12);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B2C35C(&MaterialBranchRouteManager_TypeInfo, v14);
    byte_4189CDB = 1;
  }
  v74 = 0;
  v15 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v15,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  if ( !questIds )
    goto LABEL_87;
  klass = questIds->klass;
  if ( *(_WORD *)&questIds->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v20;
      p_offset += 4;
      if ( v20 >= *(unsigned __int16 *)&questIds->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v18);
  }
  v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))p_method)(
          questIds,
          *(_QWORD *)(p_method + 8));
  if ( !v25 )
    sub_B2C434(0LL, v23);
  v26 = 0;
  while ( 1 )
  {
    v27 = *(_QWORD *)v25;
    if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
    {
      v28 = 0LL;
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
          goto LABEL_16;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_16:
      v30 = sub_AC5258(v25, System_Collections_IEnumerator_TypeInfo, 0LL, v24);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v25, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      break;
    v32 = *(_QWORD *)v25;
    if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
    {
      v33 = 0LL;
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v34 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
          goto LABEL_23;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_23:
      v35 = sub_AC5258(v25, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v31);
    }
    v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v25, *(_QWORD *)(v35 + 8));
    if ( !routeIds )
      sub_B2C434(v36, v37);
    v39 = routeIds->klass;
    v40 = v36;
    if ( *(_WORD *)&routeIds->klass->_2.bitflags1 )
    {
      v41 = 0LL;
      v42 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v42 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)&routeIds->klass->_2.bitflags1 )
          goto LABEL_30;
      }
      v43 = (__int64)&v39->vtable[*v42].method;
    }
    else
    {
LABEL_30:
      v43 = sub_AC5258(routeIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v38);
    }
    v46 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v43)(
            routeIds,
            *(_QWORD *)(v43 + 8));
    if ( !v46 )
      sub_B2C434(0LL, v44);
    while ( 1 )
    {
      v47 = *(_QWORD *)v46;
      if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
      {
        v48 = 0LL;
        v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v48;
          v49 += 4;
          if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
            goto LABEL_37;
        }
        v50 = v47 + 16LL * *v49 + 312;
      }
      else
      {
LABEL_37:
        v50 = sub_AC5258(v46, System_Collections_IEnumerator_TypeInfo, 0LL, v45);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8)) & 1) == 0 )
        break;
      v52 = *(_QWORD *)v46;
      if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
      {
        v53 = 0LL;
        v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v54 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          ++v53;
          v54 += 4;
          if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
            goto LABEL_44;
        }
        v55 = v52 + 16LL * *v54 + 312;
      }
      else
      {
LABEL_44:
        v55 = sub_AC5258(v46, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v51);
      }
      v57 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v46, *(_QWORD *)(v55 + 8));
      if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      }
      IsMaterialSelectedRouteId = MaterialBranchRouteManager__IsMaterialSelectedRouteId(v40, v57, v56);
      if ( IsMaterialSelectedRouteId )
      {
        if ( !v15 )
          sub_B2C434(IsMaterialSelectedRouteId, v59);
        System_Collections_Generic_HashSet_int___Add(
          v15,
          v57,
          (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
    v73[v26] = 78;
    v60 = ++v74;
    v61 = *(_QWORD *)v46;
    if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
    {
      v62 = 0LL;
      v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
      {
        ++v62;
        v63 += 4;
        if ( v62 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
          goto LABEL_57;
      }
      v64 = v61 + 16LL * *v63 + 312;
    }
    else
    {
LABEL_57:
      v64 = sub_AC5258(v46, System_IDisposable_TypeInfo, 0LL, v51);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v64)(v46, *(_QWORD *)(v64 + 8));
    v26 = 0;
    if ( v60 )
    {
      v26 = v60;
      if ( v73[v60 - 1] == 78 )
      {
        v74 = v60 - 1;
        v26 = v60 - 1;
      }
    }
  }
  v73[v26] = 98;
  v65 = ++v74;
  v66 = *(_QWORD *)v25;
  if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
  {
    v67 = 0LL;
    v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      ++v67;
      v68 += 4;
      if ( v67 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
        goto LABEL_70;
    }
    v69 = v66 + 16LL * *v68 + 312;
  }
  else
  {
LABEL_70:
    v69 = sub_AC5258(v25, System_IDisposable_TypeInfo, 0LL, v31);
  }
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v25, *(_QWORD *)(v69 + 8));
  if ( v65 && v73[v65 - 1] == 98 )
    v74 = v65 - 1;
  switch ( checkType )
  {
    case 2:
      if ( !v15 )
        goto LABEL_87;
      return v15->fields._count <= count;
    case 1:
      if ( !v15 )
        goto LABEL_87;
      return v15->fields._count >= count;
    case 0:
      if ( v15 )
        return v15->fields._count == count;
LABEL_87:
      sub_B2C434(v16, v17);
    default:
      return 0;
  }
}


bool __fastcall MaterialBranchRouteManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ManagerConfig_c *v7; // x0
  MaterialBranchRouteManager_c *v10; // x0
  System_String_o *FilePath; // x19
  MaterialBranchRouteManager_c *v12; // x0
  System_IO_Stream_o *v13; // x20
  System_IO_BinaryReader_o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x20
  MaterialBranchRouteManager_c *v18; // x0
  __int64 v19; // x3
  char v20; // w20
  MaterialBranchRouteManager_c *v21; // x0
  int v22; // w20
  int i; // w26
  int32_t v24; // w22
  int32_t v25; // w23
  int32_t v26; // w24
  MaterialBranchRouteManager_MaterialBranchInfo_o *v27; // x21
  __int64 v28; // x0
  __int64 v29; // x1
  MaterialBranchRouteManager_c *v30; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 v35; // x0
  int v36; // [xsp+8h] [xbp-68h]

  if ( (byte_4189CDD & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__, v3);
    sub_B2C35C(&ManagerConfig_TypeInfo, v4);
    sub_B2C35C(&MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo, v5);
    sub_B2C35C(&MaterialBranchRouteManager_TypeInfo, v6);
    byte_4189CDD = 1;
  }
  v7 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( v7->static_fields->UseMock )
    return 1;
  v10 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  }
  FilePath = MaterialBranchRouteManager__GetFilePath((const MethodInfo *)v10);
  if ( !System_IO_File__Exists(FilePath, 0LL) )
    return 0;
  v12 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  }
  MaterialBranchRouteManager__ClearSaveData((const MethodInfo *)v12);
  MaterialBranchRouteManager_TypeInfo->static_fields->isModfiy = 0;
  v13 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0LL);
  v14 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v14, v13, 0LL);
  if ( !v14 )
    sub_B2C434(v15, v16);
  v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                             v14,
                             v14->klass->vtable._23_ReadChars.methodPtr);
  v18 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v18 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v18->static_fields->SAVE_DATA_VERSION, v17, 0LL) )
  {
    v36 = 200;
  }
  else
  {
    v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._9_ReadBoolean.method)(
            v14,
            v14->klass->vtable._10_ReadByte.methodPtr);
    v21 = MaterialBranchRouteManager_TypeInfo;
    if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      v21 = MaterialBranchRouteManager_TypeInfo;
    }
    v21->static_fields->isContinueDevice = v20 & 1;
    v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
            v14,
            v14->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v22 >= 1 )
    {
      for ( i = 0; i < v22; ++i )
      {
        v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                v14,
                v14->klass->vtable._16_ReadUInt32.methodPtr);
        v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                v14,
                v14->klass->vtable._16_ReadUInt32.methodPtr);
        v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                v14,
                v14->klass->vtable._16_ReadUInt32.methodPtr);
        v27 = (MaterialBranchRouteManager_MaterialBranchInfo_o *)sub_B2C42C(MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
        MaterialBranchRouteManager_MaterialBranchInfo___ctor(v27, 0LL);
        if ( !v27 )
          sub_B2C434(v28, v29);
        v27->fields.questId = v24;
        v27->fields.phase = v25;
        v27->fields.routeId = v26;
        v30 = MaterialBranchRouteManager_TypeInfo;
        if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
          v30 = MaterialBranchRouteManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v30->static_fields->infoList;
        if ( !infoList )
          sub_B2C434(0LL, v29);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          infoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__);
      }
    }
    v36 = 189;
  }
  klass = v14->klass;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      p_offset += 4;
      if ( v33 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v35 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_38:
    v35 = sub_AC5258(v14, System_IDisposable_TypeInfo, 0LL, v19);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v35)(v14, *(_QWORD *)(v35 + 8));
  return v36 == 189;
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  MaterialBranchRouteManager___c__DisplayClass11_0_o *v20; // x19
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v22; // x1
  ScriptManager_MenuRouteInfo_o *v23; // x8
  int32_t route; // w24
  MaterialBranchRouteManager_c *v25; // x0
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *infoList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v27; // x22
  Il2CppObject *current; // x21
  __int64 v29; // x8
  __int64 v30; // x10
  ScriptManager_MenuRouteInfo_o *v31; // x11
  _BOOL8 v32; // x0
  __int64 v33; // x1
  MaterialBranchRouteManager_c *v34; // x0
  MaterialBranchRouteManager_MaterialBranchInfo_o *v35; // x20
  MaterialBranchRouteManager_c *v36; // x0
  __int64 v37; // x0
  __int64 v38; // x0
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4189CDC & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__Dispose__,
      *(_QWORD *)&phase);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__MoveNext__,
      v9);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__get_Current__,
      v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__FindAll__, v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__GetEnumerator__,
      v13);
    sub_B2C35C(&MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo, v14);
    sub_B2C35C(&MaterialBranchRouteManager_TypeInfo, v15);
    sub_B2C35C(&Method_System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo___ctor__, v16);
    sub_B2C35C(&System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo, v17);
    sub_B2C35C(&Method_MaterialBranchRouteManager___c__DisplayClass11_0__SetRouteId_b__0__, v18);
    sub_B2C35C(&MaterialBranchRouteManager___c__DisplayClass11_0_TypeInfo, v19);
    byte_4189CDC = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v20 = (MaterialBranchRouteManager___c__DisplayClass11_0_o *)sub_B2C42C(MaterialBranchRouteManager___c__DisplayClass11_0_TypeInfo);
  MaterialBranchRouteManager___c__DisplayClass11_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_40;
  v20->fields.questId = questId;
  v20->fields.phase = phase;
  if ( !routeInfos )
    goto LABEL_40;
  if ( routeInfos->max_length <= index )
  {
    v38 = sub_B2C460(All);
    sub_B2C400(v38, 0LL);
  }
  v23 = routeInfos->m_Items[index];
  if ( !v23 )
    goto LABEL_40;
  route = v23->fields.route;
  if ( !route )
    return;
  v25 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v25 = MaterialBranchRouteManager_TypeInfo;
  }
  infoList = v25->static_fields->infoList;
  v27 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v27,
    (Il2CppObject *)v20,
    Method_MaterialBranchRouteManager___c__DisplayClass11_0__SetRouteId_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo___ctor__);
  if ( !infoList )
    goto LABEL_40;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          infoList,
          (System_Predicate_T__o *)v27,
          (const MethodInfo_2EF4DE8 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__FindAll__);
  if ( !All )
    goto LABEL_40;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)All,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__GetEnumerator__);
  current = 0LL;
  v40 = v39;
LABEL_23:
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__MoveNext__);
    if ( !v32 )
      break;
    v29 = *(_QWORD *)&routeInfos->max_length;
    if ( (int)v29 >= 1 )
    {
      v30 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v30 >= (unsigned int)v29 )
        {
          v37 = sub_B2C460(v32);
          sub_B2C400(v37, 0LL);
        }
        v31 = routeInfos->m_Items[v30];
        if ( !v31 )
          sub_B2C434(v32, v33);
        if ( !v40.fields.current )
          sub_B2C434(v32, v33);
        if ( v31->fields.route == LODWORD(v40.fields.current[1].monitor) )
          break;
        if ( (int)++v30 >= (int)v29 )
          goto LABEL_23;
      }
      current = v40.fields.current;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__Dispose__);
  if ( !current )
  {
    v35 = (MaterialBranchRouteManager_MaterialBranchInfo_o *)sub_B2C42C(MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
    MaterialBranchRouteManager_MaterialBranchInfo___ctor(v35, 0LL);
    if ( v35 )
    {
      v35->fields.questId = v20->fields.questId;
      v35->fields.phase = v20->fields.phase;
      v35->fields.routeId = route;
      v36 = MaterialBranchRouteManager_TypeInfo;
      if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
        v36 = MaterialBranchRouteManager_TypeInfo;
      }
      All = (System_Collections_Generic_List_T__o *)v36->static_fields->infoList;
      if ( All )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)All,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__);
        goto LABEL_34;
      }
    }
LABEL_40:
    sub_B2C434(All, v22);
  }
  LODWORD(current[1].monitor) = route;
  v34 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
    || MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    goto LABEL_35;
  }
  j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
LABEL_34:
  v34 = MaterialBranchRouteManager_TypeInfo;
LABEL_35:
  v34->static_fields->isModfiy = 1;
}


bool __fastcall MaterialBranchRouteManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MaterialBranchRouteManager_c *v7; // x0
  bool isModfiy; // w8
  ManagerConfig_c *v9; // x0
  const MethodInfo *v10; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v12; // x20
  System_IO_BinaryWriter_o *v13; // x19
  __int64 v14; // x1
  MaterialBranchRouteManager_c *v15; // x0
  struct MaterialBranchRouteManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *infoList; // x9
  int size; // w20
  __int64 v19; // x1
  __int64 v20; // x3
  __int64 v21; // x22
  MaterialBranchRouteManager_c *v22; // x0
  struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *v23; // x23
  unsigned int *v24; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 v28; // x0

  if ( (byte_4189CDE & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Item__, v4);
    sub_B2C35C(&ManagerConfig_TypeInfo, v5);
    sub_B2C35C(&MaterialBranchRouteManager_TypeInfo, v6);
    byte_4189CDE = 1;
  }
  v7 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v7 = MaterialBranchRouteManager_TypeInfo;
  }
  isModfiy = v7->static_fields->isModfiy;
  if ( isModfiy )
  {
    v9 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v9 = ManagerConfig_TypeInfo;
    }
    if ( v9->static_fields->UseMock )
    {
      return 0;
    }
    else
    {
      v10 = (const MethodInfo *)MaterialBranchRouteManager_TypeInfo;
      if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
        v10 = (const MethodInfo *)MaterialBranchRouteManager_TypeInfo;
      }
      LOBYTE(v10[2].klass->_1.gc_desc) = 0;
      FilePath = MaterialBranchRouteManager__GetFilePath(v10);
      v12 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0LL);
      v13 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_39287252(v13, v12, 0LL);
      v15 = MaterialBranchRouteManager_TypeInfo;
      if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
        v15 = MaterialBranchRouteManager_TypeInfo;
      }
      static_fields = v15->static_fields;
      infoList = static_fields->infoList;
      if ( !infoList )
        sub_B2C434(v15, v14);
      if ( !v13 )
        sub_B2C434(v15, v14);
      size = infoList->fields._size;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v13->klass->vtable._22_Write.method)(
        v13,
        static_fields->SAVE_DATA_VERSION,
        v13->klass[1]._1.image);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v13->klass->vtable._8_Write.method)(
        v13,
        MaterialBranchRouteManager_TypeInfo->static_fields->isContinueDevice,
        v13->klass->vtable._9_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
        v13,
        (unsigned int)size,
        v13->klass->vtable._18_Write.methodPtr);
      if ( size >= 1 )
      {
        v21 = 0LL;
        do
        {
          v22 = MaterialBranchRouteManager_TypeInfo;
          if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
            v22 = MaterialBranchRouteManager_TypeInfo;
          }
          v23 = v22->static_fields->infoList;
          if ( !v23 )
            sub_B2C434(v22, v19);
          if ( v23->fields._size <= (unsigned int)v21 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v24 = (unsigned int *)v23->fields._items->m_Items[v21];
          if ( !v24 )
            sub_B2C434(v22, v19);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
            v13,
            v24[4],
            v13->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
            v13,
            v24[5],
            v13->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
            v13,
            v24[6],
            v13->klass->vtable._18_Write.methodPtr);
          ++v21;
        }
        while ( (int)v21 < size );
      }
      klass = v13->klass;
      if ( *(_WORD *)&v13->klass->_2.bitflags1 )
      {
        v26 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v26;
          p_offset += 4;
          if ( v26 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
            goto LABEL_34;
        }
        v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_34:
        v28 = sub_AC5258(v13, System_IDisposable_TypeInfo, 0LL, v20);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v28)(v13, *(_QWORD *)(v28 + 8));
      return 1;
    }
  }
  return isModfiy;
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return x->fields.questId == this->fields.questId && x->fields.routeId == this->fields.routeId;
}