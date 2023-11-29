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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  struct MaterialBranchRouteManager_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40FCB44 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo, v8);
    sub_B16FFC(&MaterialBranchRouteManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6601, v10);
    byte_40FCB44 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MaterialBranchRouteManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6601;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6601;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = MaterialBranchRouteManager_TypeInfo;
  MaterialBranchRouteManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___ctor__);
  v19 = MaterialBranchRouteManager_TypeInfo->static_fields;
  v19->infoList = (struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v18;
  sub_B16F98((BattleServantConfConponent_o *)&v19->infoList, (System_Int32_array **)v18, v20, v21, v22, v23, v24, v25);
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
  MaterialBranchRouteManager_c *v5; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *infoList; // x0
  MaterialBranchRouteManager_c *v7; // x0

  if ( (byte_40FCB3E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_MaterialBranchRouteManager_MaterialBranchInfo___, v1);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Clear__, v2);
    sub_B16FFC(&MaterialBranchRouteManager_TypeInfo, v3);
    byte_40FCB3E = 1;
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
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_MaterialBranchRouteManager_MaterialBranchInfo___) )
  {
    v5 = MaterialBranchRouteManager_TypeInfo;
    if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      v5 = MaterialBranchRouteManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v5->static_fields->infoList;
    if ( !infoList )
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      infoList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Clear__);
  }
  v7 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v7 = MaterialBranchRouteManager_TypeInfo;
  }
  v7->static_fields->isContinueDevice = 0;
  v7->static_fields->isModfiy = 1;
}


void __fastcall MaterialBranchRouteManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialBranchRouteManager_c *v2; // x0
  System_String_o *FilePath; // x19

  if ( (byte_40FCB3C & 1) == 0 )
  {
    sub_B16FFC(&MaterialBranchRouteManager_TypeInfo, v1);
    byte_40FCB3C = 1;
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

  if ( (byte_40FCB3B & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, v1);
    sub_B16FFC(&DatFileName_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_871, v3);
    byte_40FCB3B = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(35, 0LL);
  return System_String__Concat_43746016(DatFileSavePath, (System_String_o *)StringLiteral_871, FileName, 0LL);
}


void __fastcall MaterialBranchRouteManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialBranchRouteManager_c *v2; // x0

  if ( (byte_40FCB3D & 1) == 0 )
  {
    sub_B16FFC(&MaterialBranchRouteManager_TypeInfo, v1);
    byte_40FCB3D = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  MaterialBranchRouteManager___c__DisplayClass9_0_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  MaterialBranchRouteManager_c *v17; // x0
  System_Collections_Generic_List_T__o *infoList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x20

  if ( (byte_40FCB3F & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_MaterialBranchRouteManager_MaterialBranchInfo___, *(_QWORD *)&routeId);
    sub_B16FFC(&Method_System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool___ctor__, v7);
    sub_B16FFC(&System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool__TypeInfo, v8);
    sub_B16FFC(&MaterialBranchRouteManager_TypeInfo, v9);
    sub_B16FFC(&Method_MaterialBranchRouteManager___c__DisplayClass9_0__IsMaterialSelectedRouteId_b__0__, v10);
    sub_B16FFC(&MaterialBranchRouteManager___c__DisplayClass9_0_TypeInfo, v11);
    byte_40FCB3F = 1;
  }
  v12 = (MaterialBranchRouteManager___c__DisplayClass9_0_o *)sub_B170CC(
                                                               MaterialBranchRouteManager___c__DisplayClass9_0_TypeInfo,
                                                               *(_QWORD *)&routeId,
                                                               method,
                                                               v3,
                                                               v4);
  MaterialBranchRouteManager___c__DisplayClass9_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.questId = questId;
  v12->fields.routeId = routeId;
  v17 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v17 = MaterialBranchRouteManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_T__o *)v17->static_fields->infoList;
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool__TypeInfo,
                                                                             v13,
                                                                             v14,
                                                                             v15,
                                                                             v16);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)v12,
    Method_MaterialBranchRouteManager___c__DisplayClass9_0__IsMaterialSelectedRouteId_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           infoList,
           (System_Func_T__bool__o *)v19,
           (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_MaterialBranchRouteManager_MaterialBranchInfo___);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_HashSet_int__o *v15; // x21
  System_Collections_Generic_IList_int__c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v20; // x22
  int v21; // w23
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  int *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  int32_t v30; // w0
  System_Collections_Generic_IList_int__c *v31; // x8
  int32_t v32; // w25
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  __int64 v36; // x24
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  const MethodInfo *v45; // x2
  int32_t v46; // w26
  int v47; // w26
  __int64 v48; // x8
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0
  int v52; // w20
  __int64 v53; // x8
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0
  _DWORD v60[2]; // [xsp+20h] [xbp-60h]
  int v61; // [xsp+28h] [xbp-58h]

  if ( (byte_40FCB40 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, routeIds);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v7);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__get_Count__, v8);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v9);
    sub_B16FFC(&System_IDisposable_TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_int__TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_int__TypeInfo, v12);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B16FFC(&MaterialBranchRouteManager_TypeInfo, v14);
    byte_40FCB40 = 1;
  }
  v61 = 0;
  v15 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       routeIds,
                                                       *(_QWORD *)&count,
                                                       *(_QWORD *)&checkType,
                                                       method);
  System_Collections_Generic_HashSet_int____ctor(
    v15,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  if ( !questIds )
    goto LABEL_87;
  klass = questIds->klass;
  if ( *(_WORD *)&questIds->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v17;
      p_offset += 4;
      if ( v17 >= *(unsigned __int16 *)&questIds->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))p_method)(
          questIds,
          *(_QWORD *)(p_method + 8));
  if ( !v20 )
    sub_B170D4();
  v21 = 0;
  while ( 1 )
  {
    v22 = *(_QWORD *)v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v23 = 0LL;
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_16;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_16:
      v25 = sub_AAFEF8(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v20, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      break;
    v26 = *(_QWORD *)v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v27 = 0LL;
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v28 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_23;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_23:
      v29 = sub_AAFEF8(v20, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v20, *(_QWORD *)(v29 + 8));
    if ( !routeIds )
      sub_B170D4();
    v31 = routeIds->klass;
    v32 = v30;
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
      v35 = sub_AAFEF8(routeIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
    }
    v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v35)(
            routeIds,
            *(_QWORD *)(v35 + 8));
    if ( !v36 )
      sub_B170D4();
    while ( 1 )
    {
      v37 = *(_QWORD *)v36;
      if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
      {
        v38 = 0LL;
        v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v38;
          v39 += 4;
          if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
            goto LABEL_37;
        }
        v40 = v37 + 16LL * *v39 + 312;
      }
      else
      {
LABEL_37:
        v40 = sub_AAFEF8(v36, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8)) & 1) == 0 )
        break;
      v41 = *(_QWORD *)v36;
      if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
      {
        v42 = 0LL;
        v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v43 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          ++v42;
          v43 += 4;
          if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
            goto LABEL_44;
        }
        v44 = v41 + 16LL * *v43 + 312;
      }
      else
      {
LABEL_44:
        v44 = sub_AAFEF8(v36, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
      }
      v46 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v36, *(_QWORD *)(v44 + 8));
      if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      }
      if ( MaterialBranchRouteManager__IsMaterialSelectedRouteId(v32, v46, v45) )
      {
        if ( !v15 )
          sub_B170D4();
        System_Collections_Generic_HashSet_int___Add(
          v15,
          v46,
          (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
    v60[v21] = 78;
    v47 = ++v61;
    v48 = *(_QWORD *)v36;
    if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
    {
      v49 = 0LL;
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
      {
        ++v49;
        v50 += 4;
        if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
          goto LABEL_57;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_57:
      v51 = sub_AAFEF8(v36, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v51)(v36, *(_QWORD *)(v51 + 8));
    v21 = 0;
    if ( v47 )
    {
      v21 = v47;
      if ( v60[v47 - 1] == 78 )
      {
        v61 = v47 - 1;
        v21 = v47 - 1;
      }
    }
  }
  v60[v21] = 98;
  v52 = ++v61;
  v53 = *(_QWORD *)v20;
  if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
  {
    v54 = 0LL;
    v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      ++v54;
      v55 += 4;
      if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
        goto LABEL_70;
    }
    v56 = v53 + 16LL * *v55 + 312;
  }
  else
  {
LABEL_70:
    v56 = sub_AAFEF8(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v56)(v20, *(_QWORD *)(v56 + 8));
  if ( v52 && v60[v52 - 1] == 98 )
    v61 = v52 - 1;
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
      sub_B170D4();
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_IO_BinaryReader_o *v18; // x19
  System_String_o *v19; // x20
  MaterialBranchRouteManager_c *v20; // x0
  char v21; // w20
  MaterialBranchRouteManager_c *v22; // x0
  int v23; // w20
  int i; // w26
  int32_t v25; // w22
  int32_t v26; // w23
  int32_t v27; // w24
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  MaterialBranchRouteManager_MaterialBranchInfo_o *v32; // x21
  MaterialBranchRouteManager_c *v33; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 v38; // x0
  int v39; // [xsp+8h] [xbp-68h]

  if ( (byte_40FCB42 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__, v3);
    sub_B16FFC(&ManagerConfig_TypeInfo, v4);
    sub_B16FFC(&MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo, v5);
    sub_B16FFC(&MaterialBranchRouteManager_TypeInfo, v6);
    byte_40FCB42 = 1;
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
  v18 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v14, v15, v16, v17);
  System_IO_BinaryReader___ctor(v18, v13, 0LL);
  if ( !v18 )
    sub_B170D4();
  v19 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                             v18,
                             v18->klass->vtable._23_ReadChars.methodPtr);
  v20 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v20 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v20->static_fields->SAVE_DATA_VERSION, v19, 0LL) )
  {
    v39 = 200;
  }
  else
  {
    v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._9_ReadBoolean.method)(
            v18,
            v18->klass->vtable._10_ReadByte.methodPtr);
    v22 = MaterialBranchRouteManager_TypeInfo;
    if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      v22 = MaterialBranchRouteManager_TypeInfo;
    }
    v22->static_fields->isContinueDevice = v21 & 1;
    v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
            v18,
            v18->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v23 >= 1 )
    {
      for ( i = 0; i < v23; ++i )
      {
        v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
                v18,
                v18->klass->vtable._16_ReadUInt32.methodPtr);
        v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
                v18,
                v18->klass->vtable._16_ReadUInt32.methodPtr);
        v27 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
                v18,
                v18->klass->vtable._16_ReadUInt32.methodPtr);
        v32 = (MaterialBranchRouteManager_MaterialBranchInfo_o *)sub_B170CC(
                                                                   MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo,
                                                                   v28,
                                                                   v29,
                                                                   v30,
                                                                   v31);
        MaterialBranchRouteManager_MaterialBranchInfo___ctor(v32, 0LL);
        if ( !v32 )
          sub_B170D4();
        v32->fields.questId = v25;
        v32->fields.phase = v26;
        v32->fields.routeId = v27;
        v33 = MaterialBranchRouteManager_TypeInfo;
        if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
          v33 = MaterialBranchRouteManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v33->static_fields->infoList;
        if ( !infoList )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          infoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__);
      }
    }
    v39 = 189;
  }
  klass = v18->klass;
  if ( *(_WORD *)&v18->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v36;
      p_offset += 4;
      if ( v36 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v38 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_38:
    v38 = sub_AAFEF8(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v38)(v18, *(_QWORD *)(v38 + 8));
  return v39 == 189;
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
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  ScriptManager_MenuRouteInfo_o *v26; // x8
  int32_t route; // w24
  MaterialBranchRouteManager_c *v28; // x0
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *infoList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v30; // x22
  System_Collections_Generic_List_T__o *All; // x0
  Il2CppObject *current; // x21
  __int64 v33; // x8
  __int64 v34; // x10
  ScriptManager_MenuRouteInfo_o *v35; // x11
  _BOOL8 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  MaterialBranchRouteManager_c *v43; // x0
  MaterialBranchRouteManager_MaterialBranchInfo_o *v44; // x20
  MaterialBranchRouteManager_c *v45; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x0
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FCB41 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__Dispose__,
      *(_QWORD *)&phase);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__MoveNext__,
      v9);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__get_Current__,
      v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__FindAll__, v12);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__GetEnumerator__,
      v13);
    sub_B16FFC(&MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo, v14);
    sub_B16FFC(&MaterialBranchRouteManager_TypeInfo, v15);
    sub_B16FFC(&Method_System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo___ctor__, v16);
    sub_B16FFC(&System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo, v17);
    sub_B16FFC(&Method_MaterialBranchRouteManager___c__DisplayClass11_0__SetRouteId_b__0__, v18);
    sub_B16FFC(&MaterialBranchRouteManager___c__DisplayClass11_0_TypeInfo, v19);
    byte_40FCB41 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v20 = (MaterialBranchRouteManager___c__DisplayClass11_0_o *)sub_B170CC(
                                                                MaterialBranchRouteManager___c__DisplayClass11_0_TypeInfo,
                                                                *(_QWORD *)&phase,
                                                                *(_QWORD *)&index,
                                                                routeInfos,
                                                                method);
  MaterialBranchRouteManager___c__DisplayClass11_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_40;
  v20->fields.questId = questId;
  v20->fields.phase = phase;
  if ( !routeInfos )
    goto LABEL_40;
  if ( routeInfos->max_length <= index )
  {
    sub_B17100(v21, v22, v23);
    sub_B170A0();
  }
  v26 = routeInfos->m_Items[index];
  if ( !v26 )
    goto LABEL_40;
  route = v26->fields.route;
  if ( !route )
    return;
  v28 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v28 = MaterialBranchRouteManager_TypeInfo;
  }
  infoList = v28->static_fields->infoList;
  v30 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo,
                                                                   v22,
                                                                   v23,
                                                                   v24,
                                                                   v25);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v30,
    (Il2CppObject *)v20,
    Method_MaterialBranchRouteManager___c__DisplayClass11_0__SetRouteId_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo___ctor__);
  if ( !infoList )
    goto LABEL_40;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          infoList,
          (System_Predicate_T__o *)v30,
          (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__FindAll__);
  if ( !All )
    goto LABEL_40;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v47,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)All,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__GetEnumerator__);
  current = 0LL;
  v48 = v47;
LABEL_23:
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v48,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__MoveNext__);
    if ( !v36 )
      break;
    v33 = *(_QWORD *)&routeInfos->max_length;
    if ( (int)v33 >= 1 )
    {
      v34 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v34 >= (unsigned int)v33 )
        {
          sub_B17100(v36, v37, v38);
          sub_B170A0();
        }
        v35 = routeInfos->m_Items[v34];
        if ( !v35 )
          sub_B170D4();
        if ( !v48.fields.current )
          sub_B170D4();
        if ( v35->fields.route == LODWORD(v48.fields.current[1].monitor) )
          break;
        if ( (int)++v34 >= (int)v33 )
          goto LABEL_23;
      }
      current = v48.fields.current;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v48,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__Dispose__);
  if ( !current )
  {
    v44 = (MaterialBranchRouteManager_MaterialBranchInfo_o *)sub_B170CC(
                                                               MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo,
                                                               v39,
                                                               v40,
                                                               v41,
                                                               v42);
    MaterialBranchRouteManager_MaterialBranchInfo___ctor(v44, 0LL);
    if ( v44 )
    {
      v44->fields.questId = v20->fields.questId;
      v44->fields.phase = v20->fields.phase;
      v44->fields.routeId = route;
      v45 = MaterialBranchRouteManager_TypeInfo;
      if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
        v45 = MaterialBranchRouteManager_TypeInfo;
      }
      v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v45->static_fields->infoList;
      if ( v46 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v46,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__);
        goto LABEL_34;
      }
    }
LABEL_40:
    sub_B170D4();
  }
  LODWORD(current[1].monitor) = route;
  v43 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
    || MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    goto LABEL_35;
  }
  j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
LABEL_34:
  v43 = MaterialBranchRouteManager_TypeInfo;
LABEL_35:
  v43->static_fields->isModfiy = 1;
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_IO_BinaryWriter_o *v17; // x19
  MaterialBranchRouteManager_c *v18; // x0
  struct MaterialBranchRouteManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *infoList; // x9
  int size; // w20
  __int64 v22; // x22
  MaterialBranchRouteManager_c *v23; // x0
  struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *v24; // x23
  unsigned int *v25; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 v29; // x0

  if ( (byte_40FCB43 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Item__, v4);
    sub_B16FFC(&ManagerConfig_TypeInfo, v5);
    sub_B16FFC(&MaterialBranchRouteManager_TypeInfo, v6);
    byte_40FCB43 = 1;
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
      v17 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v13, v14, v15, v16);
      System_IO_BinaryWriter___ctor_39195976(v17, v12, 0LL);
      v18 = MaterialBranchRouteManager_TypeInfo;
      if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
        v18 = MaterialBranchRouteManager_TypeInfo;
      }
      static_fields = v18->static_fields;
      infoList = static_fields->infoList;
      if ( !infoList )
        sub_B170D4();
      if ( !v17 )
        sub_B170D4();
      size = infoList->fields._size;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v17->klass->vtable._22_Write.method)(
        v17,
        static_fields->SAVE_DATA_VERSION,
        v17->klass[1]._1.image);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v17->klass->vtable._8_Write.method)(
        v17,
        MaterialBranchRouteManager_TypeInfo->static_fields->isContinueDevice,
        v17->klass->vtable._9_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v17->klass->vtable._17_Write.method)(
        v17,
        (unsigned int)size,
        v17->klass->vtable._18_Write.methodPtr);
      if ( size >= 1 )
      {
        v22 = 0LL;
        do
        {
          v23 = MaterialBranchRouteManager_TypeInfo;
          if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
            v23 = MaterialBranchRouteManager_TypeInfo;
          }
          v24 = v23->static_fields->infoList;
          if ( !v24 )
            sub_B170D4();
          if ( v24->fields._size <= (unsigned int)v22 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v25 = (unsigned int *)v24->fields._items->m_Items[v22];
          if ( !v25 )
            sub_B170D4();
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v17->klass->vtable._17_Write.method)(
            v17,
            v25[4],
            v17->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v17->klass->vtable._17_Write.method)(
            v17,
            v25[5],
            v17->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v17->klass->vtable._17_Write.method)(
            v17,
            v25[6],
            v17->klass->vtable._18_Write.methodPtr);
          ++v22;
        }
        while ( (int)v22 < size );
      }
      klass = v17->klass;
      if ( *(_WORD *)&v17->klass->_2.bitflags1 )
      {
        v27 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v27;
          p_offset += 4;
          if ( v27 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
            goto LABEL_34;
        }
        v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_34:
        v29 = sub_AAFEF8(v17, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v29)(v17, *(_QWORD *)(v29 + 8));
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
    sub_B170D4();
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
    sub_B170D4();
  return x->fields.questId == this->fields.questId && x->fields.routeId == this->fields.routeId;
}