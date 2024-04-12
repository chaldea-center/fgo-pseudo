void __fastcall MaterialBranchRouteManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  MaterialBranchRouteManager_c *v9; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  struct MaterialBranchRouteManager_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42B001E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
    sub_B52984(&MaterialBranchRouteManager_TypeInfo);
    sub_B52984(&StringLiteral_6668/*"Fgo_20210908"*/);
    byte_42B001E = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MaterialBranchRouteManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6668/*"Fgo_20210908"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6668/*"Fgo_20210908"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = MaterialBranchRouteManager_TypeInfo;
  MaterialBranchRouteManager_TypeInfo->static_fields->isModfiy = 0;
  v9->static_fields->isContinueDevice = 0;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___ctor__);
  v11 = MaterialBranchRouteManager_TypeInfo->static_fields;
  v11->infoList = (struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v10;
  sub_B52920((BattleServantConfConponent_o *)&v11->infoList, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
}


void __fastcall MaterialBranchRouteManager___ctor(MaterialBranchRouteManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MaterialBranchRouteManager__ClearSaveData(const MethodInfo *method)
{
  MaterialBranchRouteManager_c *v1; // x0
  __int64 v2; // x1
  MaterialBranchRouteManager_c *v3; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *infoList; // x0
  MaterialBranchRouteManager_c *v5; // x0

  if ( (byte_42B0018 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Any_MaterialBranchRouteManager_MaterialBranchInfo___);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Clear__);
    sub_B52984(&MaterialBranchRouteManager_TypeInfo);
    byte_42B0018 = 1;
  }
  v1 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v1 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v1->static_fields->infoList,
         (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_MaterialBranchRouteManager_MaterialBranchInfo___) )
  {
    v3 = MaterialBranchRouteManager_TypeInfo;
    if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      v3 = MaterialBranchRouteManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v3->static_fields->infoList;
    if ( !infoList )
      sub_B52A5C(0LL, v2);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      infoList,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Clear__);
  }
  v5 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v5 = MaterialBranchRouteManager_TypeInfo;
  }
  v5->static_fields->isContinueDevice = 0;
  v5->static_fields->isModfiy = 1;
}


void __fastcall MaterialBranchRouteManager__DeleteSaveData(const MethodInfo *method)
{
  MaterialBranchRouteManager_c *v1; // x0
  System_String_o *FilePath; // x19

  if ( (byte_42B0016 & 1) == 0 )
  {
    sub_B52984(&MaterialBranchRouteManager_TypeInfo);
    byte_42B0016 = 1;
  }
  v1 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  }
  FilePath = MaterialBranchRouteManager__GetFilePath((const MethodInfo *)v1);
  if ( System_IO_File__Exists(FilePath, 0LL) )
    System_IO_File__Delete(FilePath, 0LL);
}


System_String_o *__fastcall MaterialBranchRouteManager__GetFilePath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42B0015 & 1) == 0 )
  {
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42B0015 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(35, 0LL);
  return System_String__Concat_44570600(DatFileSavePath, (System_String_o *)StringLiteral_886/*"/"*/, FileName, 0LL);
}


void __fastcall MaterialBranchRouteManager__Initialize(const MethodInfo *method)
{
  MaterialBranchRouteManager_c *v1; // x0

  if ( (byte_42B0017 & 1) == 0 )
  {
    sub_B52984(&MaterialBranchRouteManager_TypeInfo);
    byte_42B0017 = 1;
  }
  v1 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  }
  MaterialBranchRouteManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall MaterialBranchRouteManager__IsMaterialSelectedRouteId(
        int32_t questId,
        int32_t routeId,
        const MethodInfo *method)
{
  MaterialBranchRouteManager___c__DisplayClass9_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  MaterialBranchRouteManager_c *v8; // x0
  System_Collections_Generic_List_T__o *infoList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v10; // x20

  if ( (byte_42B0019 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_MaterialBranchRouteManager_MaterialBranchInfo___);
    sub_B52984(&Method_System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool___ctor__);
    sub_B52984(&System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool__TypeInfo);
    sub_B52984(&MaterialBranchRouteManager_TypeInfo);
    sub_B52984(&Method_MaterialBranchRouteManager___c__DisplayClass9_0__IsMaterialSelectedRouteId_b__0__);
    sub_B52984(&MaterialBranchRouteManager___c__DisplayClass9_0_TypeInfo);
    byte_42B0019 = 1;
  }
  v5 = (MaterialBranchRouteManager___c__DisplayClass9_0_o *)sub_B52A54(MaterialBranchRouteManager___c__DisplayClass9_0_TypeInfo);
  MaterialBranchRouteManager___c__DisplayClass9_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.questId = questId;
  v5->fields.routeId = routeId;
  v8 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v8 = MaterialBranchRouteManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_T__o *)v8->static_fields->infoList;
  v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_MaterialBranchRouteManager___c__DisplayClass9_0__IsMaterialSelectedRouteId_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           infoList,
           (System_Func_T__bool__o *)v10,
           (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_MaterialBranchRouteManager_MaterialBranchInfo___);
}


bool __fastcall MaterialBranchRouteManager__IsMaterialSelectedRouteIds(
        System_Collections_Generic_IList_int__o *questIds,
        System_Collections_Generic_IList_int__o *routeIds,
        int32_t count,
        int32_t checkType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x3
  System_Collections_Generic_IList_int__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  __int64 v17; // x22
  int v18; // w23
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x3
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x3
  System_Collections_Generic_IList_int__c *v31; // x8
  int32_t v32; // w25
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x3
  __int64 v38; // x24
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0
  __int64 v43; // x3
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0
  const MethodInfo *v48; // x2
  int32_t v49; // w26
  _BOOL8 IsMaterialSelectedRouteId; // x0
  __int64 v51; // x1
  int v52; // w26
  __int64 v53; // x8
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0
  int v57; // w20
  __int64 v58; // x8
  unsigned __int64 v59; // x10
  int *v60; // x11
  __int64 v61; // x0
  _DWORD v65[2]; // [xsp+20h] [xbp-60h]
  int v66; // [xsp+28h] [xbp-58h]

  if ( (byte_42B001A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&MaterialBranchRouteManager_TypeInfo);
    byte_42B001A = 1;
  }
  v66 = 0;
  v7 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v7,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  if ( !questIds )
    goto LABEL_87;
  klass = questIds->klass;
  if ( *(_WORD *)&questIds->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v12;
      p_offset += 4;
      if ( v12 >= *(unsigned __int16 *)&questIds->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v10);
  }
  v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))p_method)(
          questIds,
          *(_QWORD *)(p_method + 8));
  if ( !v17 )
    sub_B52A5C(0LL, v15);
  v18 = 0;
  while ( 1 )
  {
    v19 = *(_QWORD *)v17;
    if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
    {
      v20 = 0LL;
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
          goto LABEL_16;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_16:
      v22 = sub_AEB880(v17, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v17, *(_QWORD *)(v22 + 8)) & 1) == 0 )
      break;
    v24 = *(_QWORD *)v17;
    if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
    {
      v25 = 0LL;
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v26 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
          goto LABEL_23;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_23:
      v27 = sub_AEB880(v17, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v23);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v17, *(_QWORD *)(v27 + 8));
    if ( !routeIds )
      sub_B52A5C(v28, v29);
    v31 = routeIds->klass;
    v32 = v28;
    if ( *(_WORD *)&routeIds->klass->_2.bitflags1 )
    {
      v33 = 0LL;
      v34 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v34 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)&routeIds->klass->_2.bitflags1 )
          goto LABEL_30;
      }
      v35 = (__int64)&v31->vtable[*v34].method;
    }
    else
    {
LABEL_30:
      v35 = sub_AEB880(routeIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v30);
    }
    v38 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v35)(
            routeIds,
            *(_QWORD *)(v35 + 8));
    if ( !v38 )
      sub_B52A5C(0LL, v36);
    while ( 1 )
    {
      v39 = *(_QWORD *)v38;
      if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
      {
        v40 = 0LL;
        v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v40;
          v41 += 4;
          if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
            goto LABEL_37;
        }
        v42 = v39 + 16LL * *v41 + 312;
      }
      else
      {
LABEL_37:
        v42 = sub_AEB880(v38, System_Collections_IEnumerator_TypeInfo, 0LL, v37);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v38, *(_QWORD *)(v42 + 8)) & 1) == 0 )
        break;
      v44 = *(_QWORD *)v38;
      if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
      {
        v45 = 0LL;
        v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v46 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          ++v45;
          v46 += 4;
          if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
            goto LABEL_44;
        }
        v47 = v44 + 16LL * *v46 + 312;
      }
      else
      {
LABEL_44:
        v47 = sub_AEB880(v38, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v43);
      }
      v49 = (*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v38, *(_QWORD *)(v47 + 8));
      if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      }
      IsMaterialSelectedRouteId = MaterialBranchRouteManager__IsMaterialSelectedRouteId(v32, v49, v48);
      if ( IsMaterialSelectedRouteId )
      {
        if ( !v7 )
          sub_B52A5C(IsMaterialSelectedRouteId, v51);
        System_Collections_Generic_HashSet_int___Add(
          v7,
          v49,
          (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
    v65[v18] = 78;
    v52 = ++v66;
    v53 = *(_QWORD *)v38;
    if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
    {
      v54 = 0LL;
      v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
      {
        ++v54;
        v55 += 4;
        if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
          goto LABEL_57;
      }
      v56 = v53 + 16LL * *v55 + 312;
    }
    else
    {
LABEL_57:
      v56 = sub_AEB880(v38, System_IDisposable_TypeInfo, 0LL, v43);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v56)(v38, *(_QWORD *)(v56 + 8));
    v18 = 0;
    if ( v52 )
    {
      v18 = v52;
      if ( v65[v52 - 1] == 78 )
      {
        v66 = v52 - 1;
        v18 = v52 - 1;
      }
    }
  }
  v65[v18] = 98;
  v57 = ++v66;
  v58 = *(_QWORD *)v17;
  if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
  {
    v59 = 0LL;
    v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      ++v59;
      v60 += 4;
      if ( v59 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
        goto LABEL_70;
    }
    v61 = v58 + 16LL * *v60 + 312;
  }
  else
  {
LABEL_70:
    v61 = sub_AEB880(v17, System_IDisposable_TypeInfo, 0LL, v23);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v17, *(_QWORD *)(v61 + 8));
  if ( v57 && v65[v57 - 1] == 98 )
    v66 = v57 - 1;
  switch ( checkType )
  {
    case 2:
      if ( !v7 )
        goto LABEL_87;
      return v7->fields._count <= count;
    case 1:
      if ( !v7 )
        goto LABEL_87;
      return v7->fields._count >= count;
    case 0:
      if ( v7 )
        return v7->fields._count == count;
LABEL_87:
      sub_B52A5C(v8, v9);
    default:
      return 0;
  }
}


bool __fastcall MaterialBranchRouteManager__ReadData(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  MaterialBranchRouteManager_c *v4; // x0
  System_String_o *FilePath; // x19
  MaterialBranchRouteManager_c *v6; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryReader_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  MaterialBranchRouteManager_c *v12; // x0
  __int64 v13; // x3
  char v14; // w20
  MaterialBranchRouteManager_c *v15; // x0
  int v16; // w20
  int i; // w26
  int32_t v18; // w22
  int32_t v19; // w23
  int32_t v20; // w24
  MaterialBranchRouteManager_MaterialBranchInfo_o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  MaterialBranchRouteManager_c *v24; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 v29; // x0
  int v30; // [xsp+8h] [xbp-68h]

  if ( (byte_42B001C & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryReader_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
    sub_B52984(&MaterialBranchRouteManager_TypeInfo);
    byte_42B001C = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseMock )
    return 1;
  v4 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  }
  FilePath = MaterialBranchRouteManager__GetFilePath((const MethodInfo *)v4);
  if ( !System_IO_File__Exists(FilePath, 0LL) )
    return 0;
  v6 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  }
  MaterialBranchRouteManager__ClearSaveData((const MethodInfo *)v6);
  MaterialBranchRouteManager_TypeInfo->static_fields->isModfiy = 0;
  v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0LL);
  v8 = (System_IO_BinaryReader_o *)sub_B52A54(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v8, v7, 0LL);
  if ( !v8 )
    sub_B52A5C(v9, v10);
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                             v8,
                             v8->klass->vtable._23_ReadChars.methodPtr);
  v12 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v12 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0LL) )
  {
    v30 = 200;
  }
  else
  {
    v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._9_ReadBoolean.method)(
            v8,
            v8->klass->vtable._10_ReadByte.methodPtr);
    v15 = MaterialBranchRouteManager_TypeInfo;
    if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      v15 = MaterialBranchRouteManager_TypeInfo;
    }
    v15->static_fields->isContinueDevice = v14 & 1;
    v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
            v8,
            v8->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v16 >= 1 )
    {
      for ( i = 0; i < v16; ++i )
      {
        v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        v21 = (MaterialBranchRouteManager_MaterialBranchInfo_o *)sub_B52A54(MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
        MaterialBranchRouteManager_MaterialBranchInfo___ctor(v21, 0LL);
        if ( !v21 )
          sub_B52A5C(v22, v23);
        v21->fields.questId = v18;
        v21->fields.phase = v19;
        v21->fields.routeId = v20;
        v24 = MaterialBranchRouteManager_TypeInfo;
        if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
          v24 = MaterialBranchRouteManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v24->static_fields->infoList;
        if ( !infoList )
          sub_B52A5C(0LL, v23);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          infoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__);
      }
    }
    v30 = 189;
  }
  klass = v8->klass;
  if ( *(_WORD *)&v8->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      p_offset += 4;
      if ( v27 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_38:
    v29 = sub_AEB880(v8, System_IDisposable_TypeInfo, 0LL, v13);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v29)(v8, *(_QWORD *)(v29 + 8));
  return v30 == 189;
}


void __fastcall MaterialBranchRouteManager__SetRouteId(
        int32_t questId,
        int32_t phase,
        int32_t index,
        ScriptManager_MenuRouteInfo_array *routeInfos,
        const MethodInfo *method)
{
  MaterialBranchRouteManager___c__DisplayClass11_0_o *v9; // x19
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v11; // x1
  ScriptManager_MenuRouteInfo_o *v12; // x8
  int32_t route; // w24
  MaterialBranchRouteManager_c *v14; // x0
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *infoList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v16; // x22
  Il2CppObject *current; // x21
  __int64 v18; // x8
  __int64 v19; // x10
  ScriptManager_MenuRouteInfo_o *v20; // x11
  _BOOL8 v21; // x0
  __int64 v22; // x1
  MaterialBranchRouteManager_c *v23; // x0
  MaterialBranchRouteManager_MaterialBranchInfo_o *v24; // x20
  MaterialBranchRouteManager_c *v25; // x0
  __int64 v26; // x0
  __int64 v27; // x0
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42B001B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__FindAll__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__GetEnumerator__);
    sub_B52984(&MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
    sub_B52984(&MaterialBranchRouteManager_TypeInfo);
    sub_B52984(&Method_System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo___ctor__);
    sub_B52984(&System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
    sub_B52984(&Method_MaterialBranchRouteManager___c__DisplayClass11_0__SetRouteId_b__0__);
    sub_B52984(&MaterialBranchRouteManager___c__DisplayClass11_0_TypeInfo);
    byte_42B001B = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v9 = (MaterialBranchRouteManager___c__DisplayClass11_0_o *)sub_B52A54(MaterialBranchRouteManager___c__DisplayClass11_0_TypeInfo);
  MaterialBranchRouteManager___c__DisplayClass11_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_40;
  v9->fields.questId = questId;
  v9->fields.phase = phase;
  if ( !routeInfos )
    goto LABEL_40;
  if ( routeInfos->max_length <= index )
  {
    v27 = sub_B52A88(All);
    sub_B52A28(v27, 0LL);
  }
  v12 = routeInfos->m_Items[index];
  if ( !v12 )
    goto LABEL_40;
  route = v12->fields.route;
  if ( !route )
    return;
  v14 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v14 = MaterialBranchRouteManager_TypeInfo;
  }
  infoList = v14->static_fields->infoList;
  v16 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v16,
    (Il2CppObject *)v9,
    Method_MaterialBranchRouteManager___c__DisplayClass11_0__SetRouteId_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo___ctor__);
  if ( !infoList )
    goto LABEL_40;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          infoList,
          (System_Predicate_T__o *)v16,
          (const MethodInfo_2FF1F8C *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__FindAll__);
  if ( !All )
    goto LABEL_40;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)All,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__GetEnumerator__);
  current = 0LL;
  v29 = v28;
LABEL_23:
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__MoveNext__);
    if ( !v21 )
      break;
    v18 = *(_QWORD *)&routeInfos->max_length;
    if ( (int)v18 >= 1 )
    {
      v19 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v19 >= (unsigned int)v18 )
        {
          v26 = sub_B52A88(v21);
          sub_B52A28(v26, 0LL);
        }
        v20 = routeInfos->m_Items[v19];
        if ( !v20 )
          sub_B52A5C(v21, v22);
        if ( !v29.fields.current )
          sub_B52A5C(v21, v22);
        if ( v20->fields.route == LODWORD(v29.fields.current[1].monitor) )
          break;
        if ( (int)++v19 >= (int)v18 )
          goto LABEL_23;
      }
      current = v29.fields.current;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__Dispose__);
  if ( !current )
  {
    v24 = (MaterialBranchRouteManager_MaterialBranchInfo_o *)sub_B52A54(MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
    MaterialBranchRouteManager_MaterialBranchInfo___ctor(v24, 0LL);
    if ( v24 )
    {
      v24->fields.questId = v9->fields.questId;
      v24->fields.phase = v9->fields.phase;
      v24->fields.routeId = route;
      v25 = MaterialBranchRouteManager_TypeInfo;
      if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
        v25 = MaterialBranchRouteManager_TypeInfo;
      }
      All = (System_Collections_Generic_List_T__o *)v25->static_fields->infoList;
      if ( All )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)All,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__);
        goto LABEL_34;
      }
    }
LABEL_40:
    sub_B52A5C(All, v11);
  }
  LODWORD(current[1].monitor) = route;
  v23 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
    || MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    goto LABEL_35;
  }
  j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
LABEL_34:
  v23 = MaterialBranchRouteManager_TypeInfo;
LABEL_35:
  v23->static_fields->isModfiy = 1;
}


bool __fastcall MaterialBranchRouteManager__WriteData(const MethodInfo *method)
{
  MaterialBranchRouteManager_c *v1; // x0
  bool isModfiy; // w8
  ManagerConfig_c *v3; // x0
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
  __int64 v14; // x3
  __int64 v15; // x22
  MaterialBranchRouteManager_c *v16; // x0
  struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *v17; // x23
  unsigned int *v18; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 v22; // x0

  if ( (byte_42B001D & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryWriter_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Item__);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&MaterialBranchRouteManager_TypeInfo);
    byte_42B001D = 1;
  }
  v1 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v1 = MaterialBranchRouteManager_TypeInfo;
  }
  isModfiy = v1->static_fields->isModfiy;
  if ( isModfiy )
  {
    v3 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v3 = ManagerConfig_TypeInfo;
    }
    if ( v3->static_fields->UseMock )
    {
      return 0;
    }
    else
    {
      v4 = (const MethodInfo *)MaterialBranchRouteManager_TypeInfo;
      if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
        v4 = (const MethodInfo *)MaterialBranchRouteManager_TypeInfo;
      }
      LOBYTE(v4[2].klass->_1.gc_desc) = 0;
      FilePath = MaterialBranchRouteManager__GetFilePath(v4);
      v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0LL);
      v7 = (System_IO_BinaryWriter_o *)sub_B52A54(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_40252128(v7, v6, 0LL);
      v9 = MaterialBranchRouteManager_TypeInfo;
      if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
        v9 = MaterialBranchRouteManager_TypeInfo;
      }
      static_fields = v9->static_fields;
      infoList = static_fields->infoList;
      if ( !infoList )
        sub_B52A5C(v9, v8);
      if ( !v7 )
        sub_B52A5C(v9, v8);
      size = infoList->fields._size;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v7->klass->vtable._22_Write.method)(
        v7,
        static_fields->SAVE_DATA_VERSION,
        v7->klass[1]._1.image);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v7->klass->vtable._8_Write.method)(
        v7,
        MaterialBranchRouteManager_TypeInfo->static_fields->isContinueDevice,
        v7->klass->vtable._9_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._17_Write.method)(
        v7,
        (unsigned int)size,
        v7->klass->vtable._18_Write.methodPtr);
      if ( size >= 1 )
      {
        v15 = 0LL;
        do
        {
          v16 = MaterialBranchRouteManager_TypeInfo;
          if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
            v16 = MaterialBranchRouteManager_TypeInfo;
          }
          v17 = v16->static_fields->infoList;
          if ( !v17 )
            sub_B52A5C(v16, v13);
          if ( v17->fields._size <= (unsigned int)v15 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v18 = (unsigned int *)v17->fields._items->m_Items[v15];
          if ( !v18 )
            sub_B52A5C(v16, v13);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._17_Write.method)(
            v7,
            v18[4],
            v7->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._17_Write.method)(
            v7,
            v18[5],
            v7->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._17_Write.method)(
            v7,
            v18[6],
            v7->klass->vtable._18_Write.methodPtr);
          ++v15;
        }
        while ( (int)v15 < size );
      }
      klass = v7->klass;
      if ( *(_WORD *)&v7->klass->_2.bitflags1 )
      {
        v20 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v20;
          p_offset += 4;
          if ( v20 >= *(unsigned __int16 *)&v7->klass->_2.bitflags1 )
            goto LABEL_34;
        }
        v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_34:
        v22 = sub_AEB880(v7, System_IDisposable_TypeInfo, 0LL, v14);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v22)(v7, *(_QWORD *)(v22 + 8));
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
  return x->fields.questId == this->fields.questId && x->fields.routeId == this->fields.routeId;
}