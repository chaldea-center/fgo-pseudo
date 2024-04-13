void __fastcall MaterialBranchRouteManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  MaterialBranchRouteManager_c *v19; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  struct MaterialBranchRouteManager_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42E8A0C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___ctor__,
      v1,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&MaterialBranchRouteManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6704/*"Fgo_20210908"*/, v14, v15, v16);
    byte_42E8A0C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MaterialBranchRouteManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_6704/*"Fgo_20210908"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6704/*"Fgo_20210908"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = MaterialBranchRouteManager_TypeInfo;
  MaterialBranchRouteManager_TypeInfo->static_fields->isModfiy = 0;
  v19->static_fields->isContinueDevice = 0;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___ctor__);
  v21 = MaterialBranchRouteManager_TypeInfo->static_fields;
  v21->infoList = (struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v20;
  sub_B5D560((BattleServantConfConponent_o *)&v21->infoList, (System_Int32_array **)v20, v22, v23, v24, v25, v26, v27);
}


void __fastcall MaterialBranchRouteManager___ctor(MaterialBranchRouteManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MaterialBranchRouteManager__ClearSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  MaterialBranchRouteManager_c *v10; // x0
  __int64 v11; // x1
  MaterialBranchRouteManager_c *v12; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *infoList; // x0
  MaterialBranchRouteManager_c *v14; // x0

  if ( (byte_42E8A06 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_MaterialBranchRouteManager_MaterialBranchInfo___, v1, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Clear__,
      v4,
      v5,
      v6);
    sub_B5D5C4(&MaterialBranchRouteManager_TypeInfo, v7, v8, v9);
    byte_42E8A06 = 1;
  }
  v10 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v10 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v10->static_fields->infoList,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_MaterialBranchRouteManager_MaterialBranchInfo___) )
  {
    v12 = MaterialBranchRouteManager_TypeInfo;
    if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      v12 = MaterialBranchRouteManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v12->static_fields->infoList;
    if ( !infoList )
      sub_B5D69C(0LL, v11);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      infoList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Clear__);
  }
  v14 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v14 = MaterialBranchRouteManager_TypeInfo;
  }
  v14->static_fields->isContinueDevice = 0;
  v14->static_fields->isModfiy = 1;
}


void __fastcall MaterialBranchRouteManager__DeleteSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  MaterialBranchRouteManager_c *v4; // x0
  System_String_o *FilePath; // x19

  if ( (byte_42E8A04 & 1) == 0 )
  {
    sub_B5D5C4(&MaterialBranchRouteManager_TypeInfo, v1, v2, v3);
    byte_42E8A04 = 1;
  }
  v4 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  }
  FilePath = MaterialBranchRouteManager__GetFilePath((const MethodInfo *)v4);
  if ( System_IO_File__Exists(FilePath, 0LL) )
    System_IO_File__Delete(FilePath, 0LL);
}


System_String_o *__fastcall MaterialBranchRouteManager__GetFilePath(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42E8A03 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&DatFileName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42E8A03 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(35, 0LL);
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName, 0LL);
}


void __fastcall MaterialBranchRouteManager__Initialize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  MaterialBranchRouteManager_c *v4; // x0

  if ( (byte_42E8A05 & 1) == 0 )
  {
    sub_B5D5C4(&MaterialBranchRouteManager_TypeInfo, v1, v2, v3);
    byte_42E8A05 = 1;
  }
  v4 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  }
  MaterialBranchRouteManager__ReadData((const MethodInfo *)v4);
}


bool __fastcall MaterialBranchRouteManager__IsMaterialSelectedRouteId(
        int32_t questId,
        int32_t routeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  MaterialBranchRouteManager___c__DisplayClass9_0_o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  MaterialBranchRouteManager_c *v24; // x0
  System_Collections_Generic_List_T__o *infoList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x20

  if ( (byte_42E8A07 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_MaterialBranchRouteManager_MaterialBranchInfo___, routeId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&MaterialBranchRouteManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_MaterialBranchRouteManager___c__DisplayClass9_0__IsMaterialSelectedRouteId_b__0__, v15, v16, v17);
    sub_B5D5C4(&MaterialBranchRouteManager___c__DisplayClass9_0_TypeInfo, v18, v19, v20);
    byte_42E8A07 = 1;
  }
  v21 = (MaterialBranchRouteManager___c__DisplayClass9_0_o *)sub_B5D694(MaterialBranchRouteManager___c__DisplayClass9_0_TypeInfo);
  MaterialBranchRouteManager___c__DisplayClass9_0___ctor(v21, 0LL);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  v21->fields.questId = questId;
  v21->fields.routeId = routeId;
  v24 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v24 = MaterialBranchRouteManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_T__o *)v24->static_fields->infoList;
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v26,
    (Il2CppObject *)v21,
    Method_MaterialBranchRouteManager___c__DisplayClass9_0__IsMaterialSelectedRouteId_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           infoList,
           (System_Func_T__bool__o *)v26,
           (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_MaterialBranchRouteManager_MaterialBranchInfo___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaterialBranchRouteManager__IsMaterialSelectedRouteIds(
        System_Collections_Generic_IList_int__o *questIds,
        System_Collections_Generic_IList_int__o *routeIds,
        int32_t count,
        int32_t checkType,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  System_Collections_Generic_HashSet_int__o *v31; // x21
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x3
  System_Collections_Generic_IList_int__c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v39; // x1
  __int64 v40; // x3
  __int64 v41; // x22
  int v42; // w23
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  __int64 v47; // x3
  __int64 v48; // x8
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x3
  System_Collections_Generic_IList_int__c *v55; // x8
  int32_t v56; // w25
  unsigned __int64 v57; // x10
  int32_t *v58; // x11
  __int64 v59; // x0
  __int64 v60; // x1
  __int64 v61; // x3
  __int64 v62; // x24
  __int64 v63; // x8
  unsigned __int64 v64; // x10
  int *v65; // x11
  __int64 v66; // x0
  __int64 v67; // x3
  __int64 v68; // x8
  unsigned __int64 v69; // x10
  int *v70; // x11
  __int64 v71; // x0
  const MethodInfo *v72; // x2
  int32_t v73; // w26
  _BOOL8 IsMaterialSelectedRouteId; // x0
  __int64 v75; // x1
  int v76; // w26
  __int64 v77; // x8
  unsigned __int64 v78; // x10
  int *v79; // x11
  __int64 v80; // x0
  int v81; // w20
  __int64 v82; // x8
  unsigned __int64 v83; // x10
  int *v84; // x11
  __int64 v85; // x0
  _DWORD v89[2]; // [xsp+20h] [xbp-60h]
  int v90; // [xsp+28h] [xbp-58h]

  if ( (byte_42E8A08 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, (_DWORD)routeIds, count, *(_QWORD *)&checkType);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_int__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_int__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&MaterialBranchRouteManager_TypeInfo, v28, v29, v30);
    byte_42E8A08 = 1;
  }
  v90 = 0;
  v31 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v31,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  if ( !questIds )
    goto LABEL_87;
  klass = questIds->klass;
  if ( *(_WORD *)&questIds->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v36;
      p_offset += 4;
      if ( v36 >= *(unsigned __int16 *)&questIds->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v34);
  }
  v41 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))p_method)(
          questIds,
          *(_QWORD *)(p_method + 8));
  if ( !v41 )
    sub_B5D69C(0LL, v39);
  v42 = 0;
  while ( 1 )
  {
    v43 = *(_QWORD *)v41;
    if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
    {
      v44 = 0LL;
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v44;
        v45 += 4;
        if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
          goto LABEL_16;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_16:
      v46 = sub_AF54C0(v41, System_Collections_IEnumerator_TypeInfo, 0LL, v40);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v41, *(_QWORD *)(v46 + 8)) & 1) == 0 )
      break;
    v48 = *(_QWORD *)v41;
    if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
    {
      v49 = 0LL;
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v50 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v49;
        v50 += 4;
        if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
          goto LABEL_23;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_23:
      v51 = sub_AF54C0(v41, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v47);
    }
    v52 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v41, *(_QWORD *)(v51 + 8));
    if ( !routeIds )
      sub_B5D69C(v52, v53);
    v55 = routeIds->klass;
    v56 = v52;
    if ( *(_WORD *)&routeIds->klass->_2.bitflags1 )
    {
      v57 = 0LL;
      v58 = &v55->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v58 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        ++v57;
        v58 += 4;
        if ( v57 >= *(unsigned __int16 *)&routeIds->klass->_2.bitflags1 )
          goto LABEL_30;
      }
      v59 = (__int64)&v55->vtable[*v58].method;
    }
    else
    {
LABEL_30:
      v59 = sub_AF54C0(routeIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v54);
    }
    v62 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v59)(
            routeIds,
            *(_QWORD *)(v59 + 8));
    if ( !v62 )
      sub_B5D69C(0LL, v60);
    while ( 1 )
    {
      v63 = *(_QWORD *)v62;
      if ( *(_WORD *)(*(_QWORD *)v62 + 298LL) )
      {
        v64 = 0LL;
        v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v65 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v64;
          v65 += 4;
          if ( v64 >= *(unsigned __int16 *)(*(_QWORD *)v62 + 298LL) )
            goto LABEL_37;
        }
        v66 = v63 + 16LL * *v65 + 312;
      }
      else
      {
LABEL_37:
        v66 = sub_AF54C0(v62, System_Collections_IEnumerator_TypeInfo, 0LL, v61);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v66)(v62, *(_QWORD *)(v66 + 8)) & 1) == 0 )
        break;
      v68 = *(_QWORD *)v62;
      if ( *(_WORD *)(*(_QWORD *)v62 + 298LL) )
      {
        v69 = 0LL;
        v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v70 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          ++v69;
          v70 += 4;
          if ( v69 >= *(unsigned __int16 *)(*(_QWORD *)v62 + 298LL) )
            goto LABEL_44;
        }
        v71 = v68 + 16LL * *v70 + 312;
      }
      else
      {
LABEL_44:
        v71 = sub_AF54C0(v62, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v67);
      }
      v73 = (*(__int64 (__fastcall **)(__int64, _QWORD))v71)(v62, *(_QWORD *)(v71 + 8));
      if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      }
      IsMaterialSelectedRouteId = MaterialBranchRouteManager__IsMaterialSelectedRouteId(v56, v73, v72);
      if ( IsMaterialSelectedRouteId )
      {
        if ( !v31 )
          sub_B5D69C(IsMaterialSelectedRouteId, v75);
        System_Collections_Generic_HashSet_int___Add(
          v31,
          v73,
          (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
    v89[v42] = 78;
    v76 = ++v90;
    v77 = *(_QWORD *)v62;
    if ( *(_WORD *)(*(_QWORD *)v62 + 298LL) )
    {
      v78 = 0LL;
      v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
      {
        ++v78;
        v79 += 4;
        if ( v78 >= *(unsigned __int16 *)(*(_QWORD *)v62 + 298LL) )
          goto LABEL_57;
      }
      v80 = v77 + 16LL * *v79 + 312;
    }
    else
    {
LABEL_57:
      v80 = sub_AF54C0(v62, System_IDisposable_TypeInfo, 0LL, v67);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v80)(v62, *(_QWORD *)(v80 + 8));
    v42 = 0;
    if ( v76 )
    {
      v42 = v76;
      if ( v89[v76 - 1] == 78 )
      {
        v90 = v76 - 1;
        v42 = v76 - 1;
      }
    }
  }
  v89[v42] = 98;
  v81 = ++v90;
  v82 = *(_QWORD *)v41;
  if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
  {
    v83 = 0LL;
    v84 = (int *)(*(_QWORD *)(v82 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v84 - 1) != System_IDisposable_TypeInfo )
    {
      ++v83;
      v84 += 4;
      if ( v83 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
        goto LABEL_70;
    }
    v85 = v82 + 16LL * *v84 + 312;
  }
  else
  {
LABEL_70:
    v85 = sub_AF54C0(v41, System_IDisposable_TypeInfo, 0LL, v47);
  }
  v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v85)(v41, *(_QWORD *)(v85 + 8));
  if ( v81 && v89[v81 - 1] == 98 )
    v90 = v81 - 1;
  switch ( checkType )
  {
    case 2:
      if ( !v31 )
        goto LABEL_87;
      return v31->fields._count <= count;
    case 1:
      if ( !v31 )
        goto LABEL_87;
      return v31->fields._count >= count;
    case 0:
      if ( v31 )
        return v31->fields._count == count;
LABEL_87:
      sub_B5D69C(v32, v33);
    default:
      return 0;
  }
}


bool __fastcall MaterialBranchRouteManager__ReadData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  ManagerConfig_c *v19; // x0
  MaterialBranchRouteManager_c *v22; // x0
  System_String_o *FilePath; // x19
  MaterialBranchRouteManager_c *v24; // x0
  System_IO_Stream_o *v25; // x20
  System_IO_BinaryReader_o *v26; // x19
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x20
  MaterialBranchRouteManager_c *v30; // x0
  __int64 v31; // x3
  char v32; // w20
  MaterialBranchRouteManager_c *v33; // x0
  int v34; // w20
  int i; // w26
  int32_t v36; // w22
  int32_t v37; // w23
  int32_t v38; // w24
  MaterialBranchRouteManager_MaterialBranchInfo_o *v39; // x21
  __int64 v40; // x0
  __int64 v41; // x1
  MaterialBranchRouteManager_c *v42; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  __int64 v47; // x0
  int v48; // [xsp+8h] [xbp-68h]

  if ( (byte_42E8A0A & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__, v7, v8, v9);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&MaterialBranchRouteManager_TypeInfo, v16, v17, v18);
    byte_42E8A0A = 1;
  }
  v19 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v19 = ManagerConfig_TypeInfo;
  }
  if ( v19->static_fields->UseMock )
    return 1;
  v22 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  }
  FilePath = MaterialBranchRouteManager__GetFilePath((const MethodInfo *)v22);
  if ( !System_IO_File__Exists(FilePath, 0LL) )
    return 0;
  v24 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  }
  MaterialBranchRouteManager__ClearSaveData((const MethodInfo *)v24);
  MaterialBranchRouteManager_TypeInfo->static_fields->isModfiy = 0;
  v25 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0LL);
  v26 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v26, v25, 0LL);
  if ( !v26 )
    sub_B5D69C(v27, v28);
  v29 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._22_ReadString.method)(
                             v26,
                             v26->klass->vtable._23_ReadChars.methodPtr);
  v30 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v30 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v30->static_fields->SAVE_DATA_VERSION, v29, 0LL) )
  {
    v48 = 200;
  }
  else
  {
    v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._9_ReadBoolean.method)(
            v26,
            v26->klass->vtable._10_ReadByte.methodPtr);
    v33 = MaterialBranchRouteManager_TypeInfo;
    if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      v33 = MaterialBranchRouteManager_TypeInfo;
    }
    v33->static_fields->isContinueDevice = v32 & 1;
    v34 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._15_ReadInt32.method)(
            v26,
            v26->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v34 >= 1 )
    {
      for ( i = 0; i < v34; ++i )
      {
        v36 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._15_ReadInt32.method)(
                v26,
                v26->klass->vtable._16_ReadUInt32.methodPtr);
        v37 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._15_ReadInt32.method)(
                v26,
                v26->klass->vtable._16_ReadUInt32.methodPtr);
        v38 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._15_ReadInt32.method)(
                v26,
                v26->klass->vtable._16_ReadUInt32.methodPtr);
        v39 = (MaterialBranchRouteManager_MaterialBranchInfo_o *)sub_B5D694(MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
        MaterialBranchRouteManager_MaterialBranchInfo___ctor(v39, 0LL);
        if ( !v39 )
          sub_B5D69C(v40, v41);
        v39->fields.questId = v36;
        v39->fields.phase = v37;
        v39->fields.routeId = v38;
        v42 = MaterialBranchRouteManager_TypeInfo;
        if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
          v42 = MaterialBranchRouteManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v42->static_fields->infoList;
        if ( !infoList )
          sub_B5D69C(0LL, v41);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          infoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__);
      }
    }
    v48 = 189;
  }
  klass = v26->klass;
  if ( *(_WORD *)&v26->klass->_2.bitflags1 )
  {
    v45 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v45;
      p_offset += 4;
      if ( v45 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v47 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_38:
    v47 = sub_AF54C0(v26, System_IDisposable_TypeInfo, 0LL, v31);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v47)(v26, *(_QWORD *)(v47 + 8));
  return v48 == 189;
}


void __fastcall MaterialBranchRouteManager__SetRouteId(
        int32_t questId,
        int32_t phase,
        int32_t index,
        ScriptManager_MenuRouteInfo_array *routeInfos,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  MaterialBranchRouteManager___c__DisplayClass11_0_o *v42; // x19
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v44; // x1
  ScriptManager_MenuRouteInfo_o *v45; // x8
  int32_t route; // w24
  MaterialBranchRouteManager_c *v47; // x0
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *infoList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v49; // x22
  Il2CppObject *current; // x21
  __int64 v51; // x8
  __int64 v52; // x10
  ScriptManager_MenuRouteInfo_o *v53; // x11
  _BOOL8 v54; // x0
  __int64 v55; // x1
  MaterialBranchRouteManager_c *v56; // x0
  MaterialBranchRouteManager_MaterialBranchInfo_o *v57; // x20
  MaterialBranchRouteManager_c *v58; // x0
  __int64 v59; // x0
  __int64 v60; // x0
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E8A09 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__Dispose__,
      phase,
      index,
      routeInfos);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__,
      v15,
      v16,
      v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__FindAll__,
      v18,
      v19,
      v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__GetEnumerator__,
      v21,
      v22,
      v23);
    sub_B5D5C4(&MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&MaterialBranchRouteManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_MaterialBranchRouteManager___c__DisplayClass11_0__SetRouteId_b__0__, v36, v37, v38);
    sub_B5D5C4(&MaterialBranchRouteManager___c__DisplayClass11_0_TypeInfo, v39, v40, v41);
    byte_42E8A09 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  v42 = (MaterialBranchRouteManager___c__DisplayClass11_0_o *)sub_B5D694(MaterialBranchRouteManager___c__DisplayClass11_0_TypeInfo);
  MaterialBranchRouteManager___c__DisplayClass11_0___ctor(v42, 0LL);
  if ( !v42 )
    goto LABEL_40;
  v42->fields.questId = questId;
  v42->fields.phase = phase;
  if ( !routeInfos )
    goto LABEL_40;
  if ( routeInfos->max_length <= index )
  {
    v60 = sub_B5D6C8(All);
    sub_B5D668(v60, 0LL);
  }
  v45 = routeInfos->m_Items[index];
  if ( !v45 )
    goto LABEL_40;
  route = v45->fields.route;
  if ( !route )
    return;
  v47 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v47 = MaterialBranchRouteManager_TypeInfo;
  }
  infoList = v47->static_fields->infoList;
  v49 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v49,
    (Il2CppObject *)v42,
    Method_MaterialBranchRouteManager___c__DisplayClass11_0__SetRouteId_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo___ctor__);
  if ( !infoList )
    goto LABEL_40;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          infoList,
          (System_Predicate_T__o *)v49,
          (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__FindAll__);
  if ( !All )
    goto LABEL_40;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v61,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)All,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__GetEnumerator__);
  current = 0LL;
  v62 = v61;
LABEL_23:
  while ( 1 )
  {
    v54 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v62,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__MoveNext__);
    if ( !v54 )
      break;
    v51 = *(_QWORD *)&routeInfos->max_length;
    if ( (int)v51 >= 1 )
    {
      v52 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v52 >= (unsigned int)v51 )
        {
          v59 = sub_B5D6C8(v54);
          sub_B5D668(v59, 0LL);
        }
        v53 = routeInfos->m_Items[v52];
        if ( !v53 )
          sub_B5D69C(v54, v55);
        if ( !v62.fields.current )
          sub_B5D69C(v54, v55);
        if ( v53->fields.route == LODWORD(v62.fields.current[1].monitor) )
          break;
        if ( (int)++v52 >= (int)v51 )
          goto LABEL_23;
      }
      current = v62.fields.current;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v62,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__Dispose__);
  if ( !current )
  {
    v57 = (MaterialBranchRouteManager_MaterialBranchInfo_o *)sub_B5D694(MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
    MaterialBranchRouteManager_MaterialBranchInfo___ctor(v57, 0LL);
    if ( v57 )
    {
      v57->fields.questId = v42->fields.questId;
      v57->fields.phase = v42->fields.phase;
      v57->fields.routeId = route;
      v58 = MaterialBranchRouteManager_TypeInfo;
      if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
        v58 = MaterialBranchRouteManager_TypeInfo;
      }
      All = (System_Collections_Generic_List_T__o *)v58->static_fields->infoList;
      if ( All )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)All,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__);
        goto LABEL_34;
      }
    }
LABEL_40:
    sub_B5D69C(All, v44);
  }
  LODWORD(current[1].monitor) = route;
  v56 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
    || MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    goto LABEL_35;
  }
  j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
LABEL_34:
  v56 = MaterialBranchRouteManager_TypeInfo;
LABEL_35:
  v56->static_fields->isModfiy = 1;
}


bool __fastcall MaterialBranchRouteManager__WriteData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  MaterialBranchRouteManager_c *v19; // x0
  bool isModfiy; // w8
  ManagerConfig_c *v21; // x0
  const MethodInfo *v22; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v24; // x20
  System_IO_BinaryWriter_o *v25; // x19
  __int64 v26; // x1
  MaterialBranchRouteManager_c *v27; // x0
  struct MaterialBranchRouteManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *infoList; // x9
  int size; // w20
  __int64 v31; // x1
  __int64 v32; // x3
  __int64 v33; // x22
  MaterialBranchRouteManager_c *v34; // x0
  struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *v35; // x23
  unsigned int *v36; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 v40; // x0

  if ( (byte_42E8A0B & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryWriter_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Count__,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Item__,
      v10,
      v11,
      v12);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&MaterialBranchRouteManager_TypeInfo, v16, v17, v18);
    byte_42E8A0B = 1;
  }
  v19 = MaterialBranchRouteManager_TypeInfo;
  if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v19 = MaterialBranchRouteManager_TypeInfo;
  }
  isModfiy = v19->static_fields->isModfiy;
  if ( isModfiy )
  {
    v21 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v21 = ManagerConfig_TypeInfo;
    }
    if ( v21->static_fields->UseMock )
    {
      return 0;
    }
    else
    {
      v22 = (const MethodInfo *)MaterialBranchRouteManager_TypeInfo;
      if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
        v22 = (const MethodInfo *)MaterialBranchRouteManager_TypeInfo;
      }
      LOBYTE(v22[2].klass->_1.gc_desc) = 0;
      FilePath = MaterialBranchRouteManager__GetFilePath(v22);
      v24 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0LL);
      v25 = (System_IO_BinaryWriter_o *)sub_B5D694(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_40360312(v25, v24, 0LL);
      v27 = MaterialBranchRouteManager_TypeInfo;
      if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
        v27 = MaterialBranchRouteManager_TypeInfo;
      }
      static_fields = v27->static_fields;
      infoList = static_fields->infoList;
      if ( !infoList )
        sub_B5D69C(v27, v26);
      if ( !v25 )
        sub_B5D69C(v27, v26);
      size = infoList->fields._size;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v25->klass->vtable._22_Write.method)(
        v25,
        static_fields->SAVE_DATA_VERSION,
        v25->klass[1]._1.image);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v25->klass->vtable._8_Write.method)(
        v25,
        MaterialBranchRouteManager_TypeInfo->static_fields->isContinueDevice,
        v25->klass->vtable._9_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v25->klass->vtable._17_Write.method)(
        v25,
        (unsigned int)size,
        v25->klass->vtable._18_Write.methodPtr);
      if ( size >= 1 )
      {
        v33 = 0LL;
        do
        {
          v34 = MaterialBranchRouteManager_TypeInfo;
          if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
            v34 = MaterialBranchRouteManager_TypeInfo;
          }
          v35 = v34->static_fields->infoList;
          if ( !v35 )
            sub_B5D69C(v34, v31);
          if ( v35->fields._size <= (unsigned int)v33 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v36 = (unsigned int *)v35->fields._items->m_Items[v33];
          if ( !v36 )
            sub_B5D69C(v34, v31);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v25->klass->vtable._17_Write.method)(
            v25,
            v36[4],
            v25->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v25->klass->vtable._17_Write.method)(
            v25,
            v36[5],
            v25->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v25->klass->vtable._17_Write.method)(
            v25,
            v36[6],
            v25->klass->vtable._18_Write.methodPtr);
          ++v33;
        }
        while ( (int)v33 < size );
      }
      klass = v25->klass;
      if ( *(_WORD *)&v25->klass->_2.bitflags1 )
      {
        v38 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v38;
          p_offset += 4;
          if ( v38 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
            goto LABEL_34;
        }
        v40 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_34:
        v40 = sub_AF54C0(v25, System_IDisposable_TypeInfo, 0LL, v32);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v40)(v25, *(_QWORD *)(v40 + 8));
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return x->fields.questId == this->fields.questId && x->fields.routeId == this->fields.routeId;
}