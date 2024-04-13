void __fastcall AssumedBattleAssetLoadManager___ctor(AssumedBattleAssetLoadManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EBC75 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo, v5, v6, v7);
    byte_42EBC75 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__);
  this->fields.assetSearcherList = (struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.assetSearcherList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleEntity_o *__fastcall AssumedBattleAssetLoadManager__GetBattleEntity(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *Master_WarQuestSelectionMaster; // x0
  __int64 v11; // x1

  if ( (byte_42EBC6F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_BattleMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v7, v8, v9);
    byte_42EBC6F = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v11);
  return (BattleEntity_o *)DataMasterBase_object__object__long___GetSingleEntity(
                             Master_WarQuestSelectionMaster,
                             (const MethodInfo_23FB0FC *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
}


System_Collections_Generic_List_string__o *__fastcall AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *resultParam,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v52; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v53; // x21
  System_Collections_Generic_IEnumerable_TSource__o *EffectIdHashSet; // x20
  AssumedBattleAssetLoadManager___c_c *v55; // x0
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__16_0; // x22
  Il2CppObject *v58; // x23
  struct AssumedBattleAssetLoadManager___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x3
  DataMasterBase_WarMaster__WarEntity__int__c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v68; // x20
  unsigned __int64 v69; // x10
  int *p_offset; // x11
  __int64 v71; // x0
  __int64 v72; // x1
  __int64 v73; // x3
  __int64 v74; // x20
  __int64 v75; // x8
  unsigned __int64 v76; // x10
  int *v77; // x11
  __int64 v78; // x0
  __int64 v79; // x3
  __int64 v80; // x8
  unsigned __int64 v81; // x10
  int *v82; // x11
  __int64 v83; // x0
  __int64 v84; // x0
  WarEntity_o *Entity; // x0
  __int64 v86; // x1
  System_String_o *longName; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v89; // x1
  __int64 v90; // x8
  unsigned __int64 v91; // x10
  int *v92; // x11
  __int64 v93; // x0
  System_String_o *name; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_42EBC74 & 1) == 0 )
  {
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, (_DWORD)resultParam, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EffectMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_int___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_int__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_int__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__, v44, v45, v46);
    sub_B5D5C4(&AssumedBattleAssetLoadManager___c_TypeInfo, v47, v48, v49);
    byte_42EBC74 = 1;
  }
  path = 0LL;
  name = 0LL;
  v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v50,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !resultParam )
    goto LABEL_55;
  v53 = Master_WarQuestSelectionMaster;
  EffectIdHashSet = (System_Collections_Generic_IEnumerable_TSource__o *)resultParam->fields.EffectIdHashSet;
  v55 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( (BYTE3(AssumedBattleAssetLoadManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v55 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  static_fields = v55->static_fields;
  _9__16_0 = static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    }
    v58 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__16_0,
      v58,
      Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__,
      (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
    v59 = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    v59->__9__16_0 = _9__16_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v59->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Linq_Enumerable__Where_int_(
                                                                                    EffectIdHashSet,
                                                                                    (System_Func_TSource__bool__o *)_9__16_0,
                                                                                    (const MethodInfo_1CBBC7C *)Method_System_Linq_Enumerable_Where_int___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_55:
    sub_B5D69C(Master_WarQuestSelectionMaster, v52);
  klass = Master_WarQuestSelectionMaster->klass;
  v68 = Master_WarQuestSelectionMaster;
  if ( *(_WORD *)&Master_WarQuestSelectionMaster->klass->_2.bitflags1 )
  {
    v69 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v69;
      p_offset += 4;
      if ( v69 >= *(unsigned __int16 *)&Master_WarQuestSelectionMaster->klass->_2.bitflags1 )
        goto LABEL_20;
    }
    v71 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_20:
    v71 = sub_AF54C0(Master_WarQuestSelectionMaster, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v66);
  }
  v74 = (*(__int64 (__fastcall **)(DataMasterBase_WarMaster__WarEntity__int__o *, _QWORD))v71)(
          v68,
          *(_QWORD *)(v71 + 8));
  if ( !v74 )
    sub_B5D69C(0LL, v72);
  while ( 1 )
  {
    v75 = *(_QWORD *)v74;
    if ( *(_WORD *)(*(_QWORD *)v74 + 298LL) )
    {
      v76 = 0LL;
      v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v77 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v76;
        v77 += 4;
        if ( v76 >= *(unsigned __int16 *)(*(_QWORD *)v74 + 298LL) )
          goto LABEL_27;
      }
      v78 = v75 + 16LL * *v77 + 312;
    }
    else
    {
LABEL_27:
      v78 = sub_AF54C0(v74, System_Collections_IEnumerator_TypeInfo, 0LL, v73);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v78)(v74, *(_QWORD *)(v78 + 8)) & 1) == 0 )
      break;
    v80 = *(_QWORD *)v74;
    if ( *(_WORD *)(*(_QWORD *)v74 + 298LL) )
    {
      v81 = 0LL;
      v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v82 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v81;
        v82 += 4;
        if ( v81 >= *(unsigned __int16 *)(*(_QWORD *)v74 + 298LL) )
          goto LABEL_34;
      }
      v83 = v80 + 16LL * *v82 + 312;
    }
    else
    {
LABEL_34:
      v83 = sub_AF54C0(v74, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v79);
    }
    v84 = (*(__int64 (__fastcall **)(__int64, _QWORD))v83)(v74, *(_QWORD *)(v83 + 8));
    if ( !v53 )
      sub_B5D69C(v84, (unsigned int)v84);
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v53,
               v84,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    if ( !Entity )
      sub_B5D69C(0LL, v86);
    if ( *(&Entity->fields.id + 1) == 5 )
    {
      longName = Entity->fields.longName;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      }
      BattleEffectUtility__GetBattleCommonEffectPathAndName(longName, &path, &name, 0LL);
      IsNullOrEmpty = System_String__IsNullOrEmpty(path, 0LL);
      if ( !IsNullOrEmpty )
      {
        if ( !v50 )
          sub_B5D69C(IsNullOrEmpty, v89);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v50,
          (EventMissionProgressRequest_Argument_ProgressData_o *)path,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      }
    }
  }
  v90 = *(_QWORD *)v74;
  if ( *(_WORD *)(*(_QWORD *)v74 + 298LL) )
  {
    v91 = 0LL;
    v92 = (int *)(*(_QWORD *)(v90 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v92 - 1) != System_IDisposable_TypeInfo )
    {
      ++v91;
      v92 += 4;
      if ( v91 >= *(unsigned __int16 *)(*(_QWORD *)v74 + 298LL) )
        goto LABEL_49;
    }
    v93 = v90 + 16LL * *v92 + 312;
  }
  else
  {
LABEL_49:
    v93 = sub_AF54C0(v74, System_IDisposable_TypeInfo, 0LL, v79);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v93)(v74, *(_QWORD *)(v93 + 8));
  return (System_Collections_Generic_List_string__o *)v50;
}


void __fastcall AssumedBattleAssetLoadManager__Init(
        AssumedBattleAssetLoadManager_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Perf_k__BackingField = perf;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)perf,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool __fastcall AssumedBattleAssetLoadManager__IsPreloading(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_T__o *assetSearcherList; // x19
  AssumedBattleAssetLoadManager___c_c *v18; // x0
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__10_0; // x20
  Il2CppObject *v21; // x21
  struct AssumedBattleAssetLoadManager___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42EBC70 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_AssumedBattleAssetSearcherBase__bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__, v11, v12, v13);
    sub_B5D5C4(&AssumedBattleAssetLoadManager___c_TypeInfo, v14, v15, v16);
    byte_42EBC70 = 1;
  }
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  v18 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( (BYTE3(AssumedBattleAssetLoadManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v18 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__10_0,
      v21,
      Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_AssumedBattleAssetSearcherBase__bool___ctor__);
    v22 = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    v22->__9__10_0 = (struct System_Func_AssumedBattleAssetSearcherBase__bool__o *)_9__10_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           assetSearcherList,
           (System_Func_T__bool__o *)_9__10_0,
           (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___);
}


void __fastcall AssumedBattleAssetLoadManager__Preload(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  AssumedBattleAssetLoadManager_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1

  v9 = this;
  if ( (byte_42EBC71 & 1) == 0 )
  {
    this = (AssumedBattleAssetLoadManager_o *)sub_B5D5C4(
                                                &Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__,
                                                (_DWORD)assetSearcher,
                                                (_DWORD)method,
                                                v3);
    byte_42EBC71 = 1;
  }
  if ( !assetSearcher )
    goto LABEL_8;
  assetSearcher->fields.manager = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&assetSearcher->fields.manager,
    (System_Int32_array **)v9,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  AssumedBattleAssetLoadManager__PreloadLocal(v9, assetSearcher, v10);
  if ( AssumedBattleAssetSearcherBase__HasAnyPreloadedAssetPaths(assetSearcher, v11) )
  {
    this = (AssumedBattleAssetLoadManager_o *)v9->fields.assetSearcherList;
    if ( this )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)assetSearcher,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__);
      return;
    }
LABEL_8:
    sub_B5D69C(this, assetSearcher);
  }
}


void __fastcall AssumedBattleAssetLoadManager__PreloadLocal(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
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
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  __int64 v69; // x20
  System_Collections_Generic_List_TSource__o *v70; // x0
  __int64 v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  AssumedBattleAssetSearcherBase_o **v78; // x21
  __int64 v79; // x1
  __int64 v80; // x22
  const MethodInfo *v81; // x2
  System_Collections_Generic_List_string__o *EffectPathListFromAnalyzedParam; // x0
  __int64 v83; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v84; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x24
  AssumedBattleAssetLoadManager___c_c *v86; // x0
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__14_1; // x25
  Il2CppObject *v89; // x26
  struct AssumedBattleAssetLoadManager___c_StaticFields *v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v97; // x24
  System_Func_int__BattleActionData_SideEffectData__o *v98; // x25
  System_Collections_Generic_IEnumerable_T__o *v99; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v100; // x22
  int v101; // w8
  AssetLoader_LoadEndDataHandler_o *v102; // x25
  AssetLoader_LoadEndDataHandler_o **v103; // x24
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  _BOOL8 v110; // x0
  __int64 v111; // x1
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  BattleDataDefine_c *v113; // x0
  Il2CppObject *current; // x23
  struct AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x27
  AssetLoader_LoadEndDataHandler_o *v116; // x25
  __int64 v117; // x1
  const MethodInfo *v118; // x2
  System_Action_o **v119; // x22
  _BOOL8 v120; // x0
  __int64 v121; // x1
  struct BattlePerformance_o *v122; // x8
  Il2CppObject *v123; // x23
  System_Action_o *v124; // x24
  struct AssetStorageLoadWrapper_o *v125; // x28
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  SoundLoadWrapper_o *soundManagerWrapper; // x0
  __int64 v133; // x1
  const MethodInfo *v134; // x2
  int v135; // w19
  System_Collections_Generic_List_Enumerator_T__o v136; // [xsp+0h] [xbp-A0h] BYREF
  int v137[4]; // [xsp+18h] [xbp-88h]
  int v138; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v139; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42EBC73 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)assetSearcher, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleDataDefine_AddUniqueCameraPath__, v6, v7, v8);
    sub_B5D5C4(&BattleDataDefine_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_int__string___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_string___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_int___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Func_int__string___ctor__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Func_int__string__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__AddRange__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v48, v49, v50);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_AssumedBattleAssetLoadManager___c__PreloadLocal_b__14_1__, v54, v55, v56);
    sub_B5D5C4(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__, v57, v58, v59);
    sub_B5D5C4(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__2__, v60, v61, v62);
    sub_B5D5C4(&AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo, v63, v64, v65);
    sub_B5D5C4(&AssumedBattleAssetLoadManager___c_TypeInfo, v66, v67, v68);
    byte_42EBC73 = 1;
  }
  memset(&v139, 0, sizeof(v139));
  v138 = 0;
  v69 = sub_B5D694(AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo);
  AssumedBattleAssetLoadManager___c__DisplayClass14_0___ctor(
    (AssumedBattleAssetLoadManager___c__DisplayClass14_0_o *)v69,
    0LL);
  if ( !v69 )
    goto LABEL_56;
  *(_QWORD *)(v69 + 24) = assetSearcher;
  v78 = (AssumedBattleAssetSearcherBase_o **)(v69 + 24);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v69 + 24),
    (System_Int32_array **)assetSearcher,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  if ( !*(_QWORD *)(v69 + 24) )
    sub_B5D69C(0LL, v79);
  v80 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v69 + 24) + 376LL))(
          *(_QWORD *)(v69 + 24),
          *(_QWORD *)(**(_QWORD **)(v69 + 24) + 384LL));
  EffectPathListFromAnalyzedParam = AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
                                      (AssumedBattleAssetLoadManager_o *)v80,
                                      (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)v80,
                                      v81);
  if ( !v80 )
    sub_B5D69C(EffectPathListFromAnalyzedParam, v83);
  v84 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)EffectPathListFromAnalyzedParam;
  v85 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v80 + 32);
  v86 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( (BYTE3(AssumedBattleAssetLoadManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v86 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  static_fields = v86->static_fields;
  _9__14_1 = static_fields->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( (BYTE3(v86->vtable._0_Equals.methodPtr) & 4) != 0 && !v86->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v86);
      static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    }
    v89 = (Il2CppObject *)static_fields->__9;
    _9__14_1 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__14_1,
      v89,
      Method_AssumedBattleAssetLoadManager___c__PreloadLocal_b__14_1__,
      (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
    v90 = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    v90->__9__14_1 = _9__14_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v90->__9__14_1,
      (System_Int32_array **)_9__14_1,
      v91,
      v92,
      v93,
      v94,
      v95,
      v96);
  }
  v97 = System_Linq_Enumerable__Where_int_(
          v85,
          (System_Func_TSource__bool__o *)_9__14_1,
          (const MethodInfo_1CBBC7C *)Method_System_Linq_Enumerable_Where_int___);
  v98 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__string__TypeInfo);
  System_Func_int__BattleActionData_SideEffectData____ctor(
    v98,
    0LL,
    Method_BattleDataDefine_AddUniqueCameraPath__,
    (const MethodInfo_2C29938 *)Method_System_Func_int__string___ctor__);
  v99 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                         v97,
                                                         (System_Func_TSource__TResult__o *)v98,
                                                         (const MethodInfo_1CB1D40 *)Method_System_Linq_Enumerable_Select_int__string___);
  if ( !v84 )
    sub_B5D69C(v99, v99);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    v84,
    v99,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_string__AddRange__);
  v70 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v80 + 24),
          (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_string___);
  v100 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v70;
  if ( !v70 )
    goto LABEL_56;
  v101 = v70->fields._size + v84->fields._size;
  *(_DWORD *)(v69 + 16) = v101;
  if ( v101 < 1 )
    return;
  if ( !*v78 )
LABEL_56:
    sub_B5D69C(v70, v71);
  (*v78)->fields._LoadStatus_k__BackingField = 1;
  *(_DWORD *)(v69 + 20) = 0;
  v102 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v102,
    (Il2CppObject *)v69,
    Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__,
    0LL);
  v103 = (AssetLoader_LoadEndDataHandler_o **)(v69 + 32);
  *(_QWORD *)(v69 + 32) = v102;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v69 + 32),
    (System_Int32_array **)v102,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v136,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v84,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v139 = v136;
  while ( 1 )
  {
    v110 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v139,
             (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v110 )
      break;
    Perf_k__BackingField = this->fields._Perf_k__BackingField;
    if ( !Perf_k__BackingField )
      sub_B5D69C(v110, v111);
    v113 = BattleDataDefine_TypeInfo;
    current = v139.fields.current;
    assetStorageLoadWrapper_k__BackingField = Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
    v116 = *v103;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v113 = BattleDataDefine_TypeInfo;
    }
    if ( !assetStorageLoadWrapper_k__BackingField )
      sub_B5D69C(v113, v111);
    if ( !assetStorageLoadWrapper_k__BackingField->fields.assetManagerWrapper )
      sub_B5D69C(v113, v111);
    if ( AssetLoadWrapper__LoadAssetStorage(
           assetStorageLoadWrapper_k__BackingField->fields.assetManagerWrapper,
           (System_String_o *)current,
           v116,
           v113->static_fields->ASSET_PARALLEL_LOAD_MAX,
           0LL) )
    {
      if ( !*v78 )
        sub_B5D69C(0LL, v117);
      AssumedBattleAssetSearcherBase__AppendPreloadedAssetPath(*v78, (System_String_o *)current, v118);
    }
    else
    {
      if ( !*v103 )
        sub_B5D69C(0LL, v117);
      AssetLoader_LoadEndDataHandler__Invoke(*v103, 0LL, 0LL);
    }
  }
  v137[0] = 321;
  v138 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v139,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v138 = 0;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v136,
    v100,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v139 = v136;
  v119 = (System_Action_o **)(v69 + 40);
  while ( 1 )
  {
    v120 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v139,
             (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v120 )
      break;
    v122 = this->fields._Perf_k__BackingField;
    if ( !v122 )
      sub_B5D69C(v120, v121);
    v123 = v139.fields.current;
    v124 = *v119;
    v125 = v122->fields._assetStorageLoadWrapper_k__BackingField;
    if ( !*v119 )
    {
      v124 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v124,
        (Il2CppObject *)v69,
        Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__2__,
        0LL);
      *v119 = v124;
      sub_B5D560(
        (BattleServantConfConponent_o *)(v69 + 40),
        (System_Int32_array **)v124,
        v126,
        v127,
        v128,
        v129,
        v130,
        v131);
    }
    if ( !v125 )
      sub_B5D69C(v120, v121);
    soundManagerWrapper = v125->fields.soundManagerWrapper;
    if ( !soundManagerWrapper )
      sub_B5D69C(0LL, v121);
    SoundLoadWrapper__LoadAudioAssetStorage(soundManagerWrapper, (System_String_o *)v123, v124, 1, 0LL);
    if ( !*v78 )
      sub_B5D69C(0LL, v133);
    AssumedBattleAssetSearcherBase__AppendPreloadedAudioAssetPath(*v78, (System_String_o *)v123, v134);
  }
  v137[0] = 425;
  v135 = ++v138;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v139,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( v135 && v137[v135 - 1] == 425 )
    v138 = v135 - 1;
}


void __fastcall AssumedBattleAssetLoadManager__ReleaseAll(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *assetSearcherList; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v18; // x21
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *v19; // x0
  __int64 v20; // x1

  if ( (byte_42EBC72 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_AssumedBattleAssetSearcherBase___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_AssumedBattleAssetSearcherBase__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__, v14, v15, v16);
    byte_42EBC72 = 1;
  }
  assetSearcherList = this->fields.assetSearcherList;
  v18 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_AssumedBattleAssetSearcherBase__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v18,
    (Il2CppObject *)this,
    Method_AssumedBattleAssetLoadManager_ReleaseLocal__,
    (const MethodInfo_258B320 *)Method_System_Action_AssumedBattleAssetSearcherBase___ctor__);
  if ( !assetSearcherList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)assetSearcherList,
          (System_Action_T__o *)v18,
          (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__),
        (v19 = this->fields.assetSearcherList) == 0LL) )
  {
    sub_B5D69C(v19, v20);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v19,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Clear__);
}


void __fastcall AssumedBattleAssetLoadManager__ReleaseLocal(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
        const MethodInfo *method)
{
  AssumedBattleAssetLoadManager_o *v3; // x19
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *assetSearcherList; // x8
  AssumedBattleAssetLoadManager_o *v6; // x21
  unsigned __int64 v7; // x22
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  struct AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x8
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *v10; // x8
  AssumedBattleAssetLoadManager_o *v11; // x20
  unsigned __int64 v12; // x21
  struct BattlePerformance_o *v13; // x8
  struct AssetStorageLoadWrapper_o *v14; // x8
  __int64 v15; // x0

  if ( !assetSearcher )
    goto LABEL_19;
  v3 = this;
  this = (AssumedBattleAssetLoadManager_o *)AssumedBattleAssetSearcherBase__GetPreloadedAssetPathsAsArray(
                                              assetSearcher,
                                              (const MethodInfo *)assetSearcher);
  if ( !this )
    goto LABEL_19;
  assetSearcherList = this->fields.assetSearcherList;
  v6 = this;
  if ( (int)assetSearcherList >= 1 )
  {
    v7 = 0LL;
    while ( v7 < (unsigned int)assetSearcherList )
    {
      Perf_k__BackingField = v3->fields._Perf_k__BackingField;
      if ( !Perf_k__BackingField )
        goto LABEL_19;
      assetStorageLoadWrapper_k__BackingField = Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
      if ( !assetStorageLoadWrapper_k__BackingField )
        goto LABEL_19;
      this = (AssumedBattleAssetLoadManager_o *)assetStorageLoadWrapper_k__BackingField->fields.assetManagerWrapper;
      if ( !this )
        goto LABEL_19;
      AssetLoadWrapper__ReleaseAssetStorage((AssetLoadWrapper_o *)this, *((System_String_o **)&v6[1].klass + v7), 0LL);
      LODWORD(assetSearcherList) = v6->fields.assetSearcherList;
      if ( (__int64)++v7 >= (int)assetSearcherList )
        goto LABEL_10;
    }
LABEL_20:
    v15 = sub_B5D6C8(this);
    sub_B5D668(v15, 0LL);
  }
LABEL_10:
  this = (AssumedBattleAssetLoadManager_o *)AssumedBattleAssetSearcherBase__GetPreloadedAudioAssetPathsAsArray(
                                              assetSearcher,
                                              (const MethodInfo *)assetSearcher);
  if ( !this )
LABEL_19:
    sub_B5D69C(this, assetSearcher);
  v10 = this->fields.assetSearcherList;
  v11 = this;
  if ( (int)v10 >= 1 )
  {
    v12 = 0LL;
    while ( v12 < (unsigned int)v10 )
    {
      v13 = v3->fields._Perf_k__BackingField;
      if ( !v13 )
        goto LABEL_19;
      v14 = v13->fields._assetStorageLoadWrapper_k__BackingField;
      if ( !v14 )
        goto LABEL_19;
      this = (AssumedBattleAssetLoadManager_o *)v14->fields.soundManagerWrapper;
      if ( !this )
        goto LABEL_19;
      SoundLoadWrapper__ReleaseAudioAssetStorage(
        (SoundLoadWrapper_o *)this,
        *((System_String_o **)&v11[1].klass + v12),
        0LL);
      LODWORD(v10) = v11->fields.assetSearcherList;
      if ( (__int64)++v12 >= (int)v10 )
        return;
    }
    goto LABEL_20;
  }
}


void __fastcall AssumedBattleAssetLoadManager__Release_object_(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo_1AD0E58 *method)
{
  int v2; // w2
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
  __int64 v15; // x21
  Il2CppClass *_1_System_Action_T; // x22
  __int64 v17; // x22
  System_Collections_Generic_List_T__o *assetSearcherList; // x20
  Il2CppClass *_4_AssumedBattleAssetLoadManager___c__12_T; // x21
  __int16 v20; // w8
  Il2CppClass *v21; // x21
  Il2CppClass *v22; // x21
  Il2CppClass *v23; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x21
  Il2CppClass *v25; // x21
  __int16 v26; // w8
  Il2CppClass *v27; // x21
  Il2CppClass *v28; // x21
  Il2CppClass *v29; // x21
  Il2CppObject *v30; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  Il2CppClass *v37; // x19
  char *static_fields; // x0

  if ( (byte_42EA239 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_AssumedBattleAssetSearcherBase__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo, v12, v13, v14);
    byte_42EA239 = 1;
  }
  v15 = ((__int64 (__fastcall *)(struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *))method->rgctx_data->_0_System_Linq_Enumerable_OfType_T_->methodPointer)(this->fields.assetSearcherList);
  _1_System_Action_T = method->rgctx_data->_1_System_Action_T_;
  if ( (BYTE2(_1_System_Action_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(method->rgctx_data->_1_System_Action_T_);
  v17 = sub_B5D694(_1_System_Action_T);
  ((void (__fastcall *)(__int64, AssumedBattleAssetLoadManager_o *, __int64))method->rgctx_data->_2_System_Action_T___ctor->methodPointer)(
    v17,
    this,
    Method_AssumedBattleAssetLoadManager_ReleaseLocal__);
  ((void (__fastcall *)(__int64, __int64))method->rgctx_data->_3_BasicHelper_ForEach_T_->methodPointer)(v15, v17);
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  _4_AssumedBattleAssetLoadManager___c__12_T = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
  v20 = WORD1(_4_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr);
  if ( (v20 & 1) == 0 )
  {
    sub_AF52C4(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
    v20 = WORD1(_4_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr);
  }
  if ( (v20 & 0x400) != 0 )
  {
    v21 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE2(v21->vtable[0].methodPtr) & 1) == 0 )
      sub_AF52C4(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
    if ( !v21->_2.cctor_finished )
    {
      v22 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
      if ( (BYTE2(v22->vtable[0].methodPtr) & 1) == 0 )
        sub_AF52C4(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
      j_il2cpp_runtime_class_init_0(v22);
    }
  }
  v23 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE2(v23->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
  v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)*((_QWORD *)v23->static_fields + 1);
  if ( !v24 )
  {
    v25 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
    v26 = WORD1(v25->vtable[0].methodPtr);
    if ( (v26 & 1) == 0 )
    {
      sub_AF52C4(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
      v26 = WORD1(v25->vtable[0].methodPtr);
    }
    if ( (v26 & 0x400) != 0 )
    {
      v27 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
      if ( (BYTE2(v27->vtable[0].methodPtr) & 1) == 0 )
        sub_AF52C4(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
      if ( !v27->_2.cctor_finished )
      {
        v28 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
        if ( (BYTE2(v28->vtable[0].methodPtr) & 1) == 0 )
          sub_AF52C4(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
        j_il2cpp_runtime_class_init_0(v28);
      }
    }
    v29 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE2(v29->vtable[0].methodPtr) & 1) == 0 )
      sub_AF52C4(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
    v30 = *(Il2CppObject **)v29->static_fields;
    v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v24,
      v30,
      (intptr_t)method->rgctx_data->_5_AssumedBattleAssetLoadManager___c__12_T___Release_b__12_0,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_AssumedBattleAssetSearcherBase__bool___ctor__);
    v37 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE2(v37->vtable[0].methodPtr) & 1) == 0 )
      sub_AF52C4(v37);
    static_fields = (char *)v37->static_fields;
    *((_QWORD *)static_fields + 1) = v24;
    sub_B5D560(
      (BattleServantConfConponent_o *)(static_fields + 8),
      (System_Int32_array **)v24,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  BasicHelper__RemoveElements_MapControl_SpotInfo_(
    assetSearcherList,
    (System_Func_T__bool__o *)v24,
    (const MethodInfo_1AD9744 *)Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___);
}


AssetStorageLoadWrapper_o *__fastcall AssumedBattleAssetLoadManager__get_AssetStorageLoadWrapper(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *Perf_k__BackingField; // x8

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    sub_B5D69C(this, method);
  return Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
}


BattlePerformance_o *__fastcall AssumedBattleAssetLoadManager__get_Perf(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  return this->fields._Perf_k__BackingField;
}


void __fastcall AssumedBattleAssetLoadManager__set_Perf(
        AssumedBattleAssetLoadManager_o *this,
        BattlePerformance_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Perf_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_HashSet_int__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_HashSet_int__o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42E752D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_string___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_HashSet_string__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v11, v12, v13);
    byte_42E752D = 1;
  }
  v14 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v14,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  this->fields.EffectIdHashSet = v14;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v21,
    (const MethodInfo_2505E54 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.AudioAssetNameHashSet = (struct System_Collections_Generic_HashSet_string__o *)v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.AudioAssetNameHashSet,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v28,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  this->fields.cameraIdHashSet = v28;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cameraIdHashSet,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssumedBattleAssetLoadManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E752C & 1) == 0 )
  {
    sub_B5D5C4(&AssumedBattleAssetLoadManager___c_TypeInfo, v1, v2, v3);
    byte_42E752C = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(AssumedBattleAssetLoadManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall AssumedBattleAssetLoadManager___c___ctor(
        AssumedBattleAssetLoadManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssumedBattleAssetLoadManager___c___GetEffectPathListFromAnalyzedParam_b__16_0(
        AssumedBattleAssetLoadManager___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x > 0;
}


bool __fastcall AssumedBattleAssetLoadManager___c___IsPreloading_b__10_0(
        AssumedBattleAssetLoadManager___c_o *this,
        AssumedBattleAssetSearcherBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields._LoadStatus_k__BackingField == 1;
}


bool __fastcall AssumedBattleAssetLoadManager___c___PreloadLocal_b__14_1(
        AssumedBattleAssetLoadManager___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x > 0;
}


void __fastcall AssumedBattleAssetLoadManager___c__12_object____cctor(const MethodInfo_1F4B474 *method)
{
  AssumedBattleAssetLoadManager___c__12_T__c *klass; // x20
  Il2CppClass *_0_AssumedBattleAssetLoadManager___c__12_T; // x20
  __int64 v4; // x0
  AssumedBattleAssetLoadManager___c__12_T__c *v5; // x22
  System_Int32_array **v6; // x20
  __int16 v7; // w8
  AssumedBattleAssetLoadManager___c__12_T__c *v8; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  AssumedBattleAssetLoadManager___c__12_T__c *v16; // x19
  Il2CppClass *_2_AssumedBattleAssetLoadManager___c__12_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AF52C4(method->klass);
  _0_AssumedBattleAssetLoadManager___c__12_T = klass->rgctx_data->_0_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE2(_0_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(_0_AssumedBattleAssetLoadManager___c__12_T);
  v4 = sub_B5D694(_0_AssumedBattleAssetLoadManager___c__12_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_AF52C4(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_AssumedBattleAssetLoadManager___c__12_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_AF52C4(v8);
  methodPointer(v6, v8->rgctx_data->_1_AssumedBattleAssetLoadManager___c__12_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AF52C4(v16);
  _2_AssumedBattleAssetLoadManager___c__12_T = v16->rgctx_data->_2_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE2(_2_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(_2_AssumedBattleAssetLoadManager___c__12_T);
  static_fields = (BattleServantConfConponent_o *)_2_AssumedBattleAssetLoadManager___c__12_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B5D560(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall AssumedBattleAssetLoadManager___c__12_object____ctor(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        const MethodInfo_1F4B550 *method)
{
  if ( !this )
    sub_B5D69C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssumedBattleAssetLoadManager___c__12_object____Release_b__12_0(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        AssumedBattleAssetSearcherBase_o *x,
        const MethodInfo_1F4B568 *method)
{
  Il2CppClass *_3_T; // x19

  _3_T = method->klass->rgctx_data->_3_T;
  if ( (BYTE2(_3_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(method->klass->rgctx_data->_3_T);
  return sub_B5D684(x, _3_T) != 0;
}


void __fastcall AssumedBattleAssetLoadManager___c__DisplayClass14_0___ctor(
        AssumedBattleAssetLoadManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssumedBattleAssetLoadManager___c__DisplayClass14_0___PreloadLocal_b__0(
        AssumedBattleAssetLoadManager___c__DisplayClass14_0_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  int32_t loadCountMax; // w9
  int32_t v4; // w8
  struct AssumedBattleAssetSearcherBase_o *assetSearcher; // x8

  loadCountMax = this->fields.loadCountMax;
  v4 = this->fields.loadCount + 1;
  this->fields.loadCount = v4;
  if ( loadCountMax <= v4 )
  {
    assetSearcher = this->fields.assetSearcher;
    if ( !assetSearcher )
      sub_B5D69C(this, _);
    assetSearcher->fields._LoadStatus_k__BackingField = 2;
  }
}


void __fastcall AssumedBattleAssetLoadManager___c__DisplayClass14_0___PreloadLocal_b__2(
        AssumedBattleAssetLoadManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  AssetLoader_LoadEndDataHandler_o *onLoadFinished; // x0

  onLoadFinished = this->fields.onLoadFinished;
  if ( !onLoadFinished )
    sub_B5D69C(0LL, method);
  AssetLoader_LoadEndDataHandler__Invoke(onLoadFinished, 0LL, v2);
}