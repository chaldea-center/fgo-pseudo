void __fastcall AssumedBattleAssetLoadManager___ctor(AssumedBattleAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4216652 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo, v4);
    byte_4216652 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__);
  this->fields.assetSearcherList = (struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.assetSearcherList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleEntity_o *__fastcall AssumedBattleAssetLoadManager__GetBattleEntity(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_421664C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_BattleMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v2);
    sub_B0D8A4(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v3);
    byte_421664C = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
  return (BattleEntity_o *)DataMasterBase_object__object__long___GetSingleEntity(
                             Master_WarQuestSelectionMaster,
                             (const MethodInfo_2669EC0 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
}


System_Collections_Generic_List_string__o *__fastcall AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *resultParam,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x21
  System_Collections_Generic_IEnumerable_TSource__o *EffectIdHashSet; // x20
  AssumedBattleAssetLoadManager___c_c *v25; // x0
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__16_0; // x22
  Il2CppObject *v28; // x23
  struct AssumedBattleAssetLoadManager___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  DataMasterBase_WarMaster__WarEntity__int__c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v37; // x20
  unsigned __int64 v38; // x10
  int *p_offset; // x11
  __int64 v40; // x0
  __int64 v41; // x20
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  __int64 v50; // x0
  WarEntity_o *Entity; // x0
  System_String_o *longName; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  System_String_o *name; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4216651 & 1) == 0 )
  {
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, resultParam);
    sub_B0D8A4(&Method_DataManager_GetMaster_EffectMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_int___, v7);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v9);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_int__TypeInfo, v11);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_int__TypeInfo, v12);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v16);
    sub_B0D8A4(&Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__, v17);
    sub_B0D8A4(&AssumedBattleAssetLoadManager___c_TypeInfo, v18);
    byte_4216651 = 1;
  }
  path = 0LL;
  name = 0LL;
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  resultParam,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !resultParam )
    goto LABEL_55;
  v23 = Master_WarQuestSelectionMaster;
  EffectIdHashSet = (System_Collections_Generic_IEnumerable_TSource__o *)resultParam->fields.EffectIdHashSet;
  v25 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( (BYTE3(AssumedBattleAssetLoadManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v25 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__16_0 = static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v21, v22);
    System_Func_int__bool____ctor(
      _9__16_0,
      v28,
      Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__,
      (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
    v29 = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    v29->__9__16_0 = _9__16_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v29->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Linq_Enumerable__Where_int_(
                                                                                    EffectIdHashSet,
                                                                                    (System_Func_TSource__bool__o *)_9__16_0,
                                                                                    (const MethodInfo_1B5A41C *)Method_System_Linq_Enumerable_Where_int___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_55:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  klass = Master_WarQuestSelectionMaster->klass;
  v37 = Master_WarQuestSelectionMaster;
  if ( *(_WORD *)&Master_WarQuestSelectionMaster->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v38;
      p_offset += 4;
      if ( v38 >= *(unsigned __int16 *)&Master_WarQuestSelectionMaster->klass->_2.bitflags1 )
        goto LABEL_20;
    }
    v40 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_20:
    v40 = sub_AA67A0(Master_WarQuestSelectionMaster, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v41 = (*(__int64 (__fastcall **)(DataMasterBase_WarMaster__WarEntity__int__o *, _QWORD))v40)(
          v37,
          *(_QWORD *)(v40 + 8));
  if ( !v41 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v42 = *(_QWORD *)v41;
    if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
    {
      v43 = 0LL;
      v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v44 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
          goto LABEL_27;
      }
      v45 = v42 + 16LL * *v44 + 312;
    }
    else
    {
LABEL_27:
      v45 = sub_AA67A0(v41, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8)) & 1) == 0 )
      break;
    v46 = *(_QWORD *)v41;
    if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
    {
      v47 = 0LL;
      v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v48 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v47;
        v48 += 4;
        if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
          goto LABEL_34;
      }
      v49 = v46 + 16LL * *v48 + 312;
    }
    else
    {
LABEL_34:
      v49 = sub_AA67A0(v41, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v41, *(_QWORD *)(v49 + 8));
    if ( !v23 )
      sub_B0D97C(v50);
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v23,
               v50,
               (const MethodInfo_2669BD4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    if ( !Entity )
      sub_B0D97C(0LL);
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
        if ( !v19 )
          sub_B0D97C(IsNullOrEmpty);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v19,
          (EventMissionProgressRequest_Argument_ProgressData_o *)path,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
      }
    }
  }
  v54 = *(_QWORD *)v41;
  if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
  {
    v55 = 0LL;
    v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      ++v55;
      v56 += 4;
      if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
        goto LABEL_49;
    }
    v57 = v54 + 16LL * *v56 + 312;
  }
  else
  {
LABEL_49:
    v57 = sub_AA67A0(v41, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v57)(v41, *(_QWORD *)(v57 + 8));
  return (System_Collections_Generic_List_string__o *)v19;
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
  sub_B0D840(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_T__o *assetSearcherList; // x19
  AssumedBattleAssetLoadManager___c_c *v9; // x0
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__10_0; // x20
  Il2CppObject *v12; // x21
  struct AssumedBattleAssetLoadManager___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_421664D & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___, method);
    sub_B0D8A4(&Method_System_Func_AssumedBattleAssetSearcherBase__bool___ctor__, v4);
    sub_B0D8A4(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo, v5);
    sub_B0D8A4(&Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__, v6);
    sub_B0D8A4(&AssumedBattleAssetLoadManager___c_TypeInfo, v7);
    byte_421664D = 1;
  }
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  v9 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( (BYTE3(AssumedBattleAssetLoadManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v9 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo,
                                                                                    method,
                                                                                    v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__10_0,
      v12,
      Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_AssumedBattleAssetSearcherBase__bool___ctor__);
    v13 = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    v13->__9__10_0 = (struct System_Func_AssumedBattleAssetSearcherBase__bool__o *)_9__10_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v13->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           assetSearcherList,
           (System_Func_T__bool__o *)_9__10_0,
           (const MethodInfo_1707138 *)Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___);
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
  if ( (byte_421664E & 1) == 0 )
  {
    this = (AssumedBattleAssetLoadManager_o *)sub_B0D8A4(
                                                &Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__,
                                                assetSearcher);
    byte_421664E = 1;
  }
  if ( !assetSearcher )
    goto LABEL_8;
  assetSearcher->fields.manager = v9;
  sub_B0D840(
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
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__);
      return;
    }
LABEL_8:
    sub_B0D97C(this);
  }
}


void __fastcall AssumedBattleAssetLoadManager__PreloadLocal(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x22
  System_Collections_Generic_List_string__o *EffectPathListFromAnalyzedParam; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  AssumedBattleAssetSearcherBase_o **v21; // x20
  AssumedBattleAssetLoadManager_o *v22; // x0
  const MethodInfo *v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v26; // x23
  int size; // w8
  AssetLoader_LoadEndDataHandler_o *v28; // x21
  _BOOL8 v29; // x0
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  BattleDataDefine_c *v31; // x0
  Il2CppObject *current; // x22
  struct AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x25
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  const MethodInfo *v35; // x2
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4216650 & 1) == 0 )
  {
    sub_B0D8A4(&BattleDataDefine_TypeInfo, assetSearcher);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v9);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v10);
    sub_B0D8A4(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__, v11);
    sub_B0D8A4(&AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo, v12);
    byte_4216650 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v13 = sub_B0D974(AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo, assetSearcher, method);
  AssumedBattleAssetLoadManager___c__DisplayClass14_0___ctor(
    (AssumedBattleAssetLoadManager___c__DisplayClass14_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_29;
  *(_QWORD *)(v13 + 24) = assetSearcher;
  v21 = (AssumedBattleAssetSearcherBase_o **)(v13 + 24);
  sub_B0D840(
    (BattleServantConfConponent_o *)(v13 + 24),
    (System_Int32_array **)assetSearcher,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( !*(_QWORD *)(v13 + 24) )
    sub_B0D97C(0LL);
  v22 = (AssumedBattleAssetLoadManager_o *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v13 + 24) + 376LL))(
                                             *(_QWORD *)(v13 + 24),
                                             *(_QWORD *)(**(_QWORD **)(v13 + 24) + 384LL));
  EffectPathListFromAnalyzedParam = AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
                                      v22,
                                      (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)v22,
                                      v23);
  v26 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EffectPathListFromAnalyzedParam;
  if ( !EffectPathListFromAnalyzedParam )
    goto LABEL_29;
  size = EffectPathListFromAnalyzedParam->fields._size;
  *(_DWORD *)(v13 + 16) = size;
  if ( size < 1 )
    return;
  if ( !*v21 )
LABEL_29:
    sub_B0D97C(EffectPathListFromAnalyzedParam);
  (*v21)->fields._LoadStatus_k__BackingField = 1;
  *(_DWORD *)(v13 + 20) = 0;
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v24, v25);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)v13,
    Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__,
    0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    v26,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v29 )
      break;
    Perf_k__BackingField = this->fields._Perf_k__BackingField;
    if ( !Perf_k__BackingField )
      sub_B0D97C(v29);
    v31 = BattleDataDefine_TypeInfo;
    current = v37.fields.current;
    assetStorageLoadWrapper_k__BackingField = Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v31 = BattleDataDefine_TypeInfo;
    }
    if ( !assetStorageLoadWrapper_k__BackingField )
      sub_B0D97C(v31);
    if ( !assetStorageLoadWrapper_k__BackingField->fields.assetManagerWrapper )
      sub_B0D97C(v31);
    Wrapper__LoadAssetStorage = AssetLoadWrapper__LoadAssetStorage(
                                  assetStorageLoadWrapper_k__BackingField->fields.assetManagerWrapper,
                                  (System_String_o *)current,
                                  v28,
                                  v31->static_fields->ASSET_PARALLEL_LOAD_MAX,
                                  0LL);
    if ( Wrapper__LoadAssetStorage )
    {
      if ( !*v21 )
        sub_B0D97C(0LL);
      AssumedBattleAssetSearcherBase__AppendPreloadedAssetPath(*v21, (System_String_o *)current, v35);
    }
    else
    {
      if ( !v28 )
        sub_B0D97C(Wrapper__LoadAssetStorage);
      AssetLoader_LoadEndDataHandler__Invoke(v28, 0LL, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall AssumedBattleAssetLoadManager__ReleaseAll(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *assetSearcherList; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v9; // x21
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *v10; // x0

  if ( (byte_421664F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_AssumedBattleAssetSearcherBase___ctor__, method);
    sub_B0D8A4(&System_Action_AssumedBattleAssetSearcherBase__TypeInfo, v4);
    sub_B0D8A4(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Clear__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__, v7);
    byte_421664F = 1;
  }
  assetSearcherList = this->fields.assetSearcherList;
  v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                              System_Action_AssumedBattleAssetSearcherBase__TypeInfo,
                                                                              method,
                                                                              v2);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v9,
    (Il2CppObject *)this,
    Method_AssumedBattleAssetLoadManager_ReleaseLocal__,
    (const MethodInfo_246EA3C *)Method_System_Action_AssumedBattleAssetSearcherBase___ctor__);
  if ( !assetSearcherList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)assetSearcherList,
          (System_Action_T__o *)v9,
          (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__),
        (v10 = this->fields.assetSearcherList) == 0LL) )
  {
    sub_B0D97C(v10);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Clear__);
}


void __fastcall AssumedBattleAssetLoadManager__ReleaseLocal(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
        const MethodInfo *method)
{
  AssumedBattleAssetLoadManager_o *v3; // x19
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *assetSearcherList; // x8
  AssumedBattleAssetLoadManager_o *v5; // x20
  unsigned __int64 v6; // x21
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  struct AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x8
  __int64 v9; // x0

  if ( !assetSearcher )
    goto LABEL_11;
  v3 = this;
  this = (AssumedBattleAssetLoadManager_o *)AssumedBattleAssetSearcherBase__GetPreloadedAssetPathsAsArray(
                                              assetSearcher,
                                              (const MethodInfo *)assetSearcher);
  if ( !this )
    goto LABEL_11;
  assetSearcherList = this->fields.assetSearcherList;
  v5 = this;
  if ( (int)assetSearcherList >= 1 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)assetSearcherList )
      {
        v9 = sub_B0D9A8(this);
        sub_B0D948(v9, 0LL);
      }
      Perf_k__BackingField = v3->fields._Perf_k__BackingField;
      if ( !Perf_k__BackingField )
        break;
      assetStorageLoadWrapper_k__BackingField = Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
      if ( !assetStorageLoadWrapper_k__BackingField )
        break;
      this = (AssumedBattleAssetLoadManager_o *)assetStorageLoadWrapper_k__BackingField->fields.assetManagerWrapper;
      if ( !this )
        break;
      AssetLoadWrapper__ReleaseAssetStorage((AssetLoadWrapper_o *)this, *((System_String_o **)&v5[1].klass + v6), 0LL);
      LODWORD(assetSearcherList) = v5->fields.assetSearcherList;
      if ( (__int64)++v6 >= (int)assetSearcherList )
        return;
    }
LABEL_11:
    sub_B0D97C(this);
  }
}


void __fastcall AssumedBattleAssetLoadManager__Release_object_(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo_170125C *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x21
  Il2CppClass *_1_System_Action_T; // x22
  __int64 v11; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_T__o *assetSearcherList; // x20
  Il2CppClass *_4_AssumedBattleAssetLoadManager___c__12_T; // x21
  __int16 v16; // w8
  Il2CppClass *v17; // x21
  Il2CppClass *v18; // x21
  Il2CppClass *v19; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x21
  Il2CppClass *v21; // x21
  __int16 v22; // w8
  Il2CppClass *v23; // x21
  Il2CppClass *v24; // x21
  Il2CppClass *v25; // x21
  Il2CppObject *v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  Il2CppClass *v33; // x19
  char *static_fields; // x0

  if ( (byte_42142C9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__, method);
    sub_B0D8A4(&Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___, v4);
    sub_B0D8A4(&Method_System_Func_AssumedBattleAssetSearcherBase__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo, v6);
    byte_42142C9 = 1;
  }
  v9 = ((__int64 (__fastcall *)(struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *))method->rgctx_data->_0_System_Linq_Enumerable_OfType_T_->methodPointer)(this->fields.assetSearcherList);
  _1_System_Action_T = method->rgctx_data->_1_System_Action_T_;
  if ( (BYTE2(_1_System_Action_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(method->rgctx_data->_1_System_Action_T_);
  v11 = sub_B0D974(_1_System_Action_T, v7, v8);
  ((void (__fastcall *)(__int64, AssumedBattleAssetLoadManager_o *, __int64))method->rgctx_data->_2_System_Action_T___ctor->methodPointer)(
    v11,
    this,
    Method_AssumedBattleAssetLoadManager_ReleaseLocal__);
  ((void (__fastcall *)(__int64, __int64))method->rgctx_data->_3_BasicHelper_ForEach_T_->methodPointer)(v9, v11);
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  _4_AssumedBattleAssetLoadManager___c__12_T = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
  v16 = WORD1(_4_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr);
  if ( (v16 & 1) == 0 )
  {
    sub_AA65A4(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
    v16 = WORD1(_4_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr);
  }
  if ( (v16 & 0x400) != 0 )
  {
    v17 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE2(v17->vtable[0].methodPtr) & 1) == 0 )
      sub_AA65A4(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
    if ( !v17->_2.cctor_finished )
    {
      v18 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
      if ( (BYTE2(v18->vtable[0].methodPtr) & 1) == 0 )
        sub_AA65A4(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
      j_il2cpp_runtime_class_init_0(v18);
    }
  }
  v19 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE2(v19->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
  v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)*((_QWORD *)v19->static_fields + 1);
  if ( !v20 )
  {
    v21 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
    v22 = WORD1(v21->vtable[0].methodPtr);
    if ( (v22 & 1) == 0 )
    {
      sub_AA65A4(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
      v22 = WORD1(v21->vtable[0].methodPtr);
    }
    if ( (v22 & 0x400) != 0 )
    {
      v23 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
      if ( (BYTE2(v23->vtable[0].methodPtr) & 1) == 0 )
        sub_AA65A4(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
      if ( !v23->_2.cctor_finished )
      {
        v24 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
        if ( (BYTE2(v24->vtable[0].methodPtr) & 1) == 0 )
          sub_AA65A4(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
        j_il2cpp_runtime_class_init_0(v24);
      }
    }
    v25 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE2(v25->vtable[0].methodPtr) & 1) == 0 )
      sub_AA65A4(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
    v26 = *(Il2CppObject **)v25->static_fields;
    v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo,
                                                                               v12,
                                                                               v13);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v20,
      v26,
      (intptr_t)method->rgctx_data->_5_AssumedBattleAssetLoadManager___c__12_T___Release_b__12_0,
      (const MethodInfo_26189B8 *)Method_System_Func_AssumedBattleAssetSearcherBase__bool___ctor__);
    v33 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE2(v33->vtable[0].methodPtr) & 1) == 0 )
      sub_AA65A4(v33);
    static_fields = (char *)v33->static_fields;
    *((_QWORD *)static_fields + 1) = v20;
    sub_B0D840(
      (BattleServantConfConponent_o *)(static_fields + 8),
      (System_Int32_array **)v20,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  BasicHelper__RemoveElements_MapControl_SpotInfo_(
    assetSearcherList,
    (System_Func_T__bool__o *)v20,
    (const MethodInfo_1709B48 *)Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___);
}


AssetStorageLoadWrapper_o *__fastcall AssumedBattleAssetLoadManager__get_AssetStorageLoadWrapper(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *Perf_k__BackingField; // x8

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    sub_B0D97C(this);
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
  sub_B0D840(
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
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_HashSet_int__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4213977 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, method);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v4);
    byte_4213977 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  this->fields.EffectIdHashSet = v5;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssumedBattleAssetLoadManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213976 & 1) == 0 )
  {
    sub_B0D8A4(&AssumedBattleAssetLoadManager___c_TypeInfo, v1);
    byte_4213976 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(AssumedBattleAssetLoadManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
  return x->fields._LoadStatus_k__BackingField == 1;
}


void __fastcall AssumedBattleAssetLoadManager___c__12_object____cctor(const MethodInfo_1F0CE94 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AssumedBattleAssetLoadManager___c__12_T__c *klass; // x20
  Il2CppClass *_0_AssumedBattleAssetLoadManager___c__12_T; // x20
  __int64 v6; // x0
  AssumedBattleAssetLoadManager___c__12_T__c *v7; // x22
  System_Int32_array **v8; // x20
  __int16 v9; // w8
  AssumedBattleAssetLoadManager___c__12_T__c *v10; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  AssumedBattleAssetLoadManager___c__12_T__c *v18; // x19
  Il2CppClass *_2_AssumedBattleAssetLoadManager___c__12_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AA65A4(method->klass);
  _0_AssumedBattleAssetLoadManager___c__12_T = klass->rgctx_data->_0_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE2(_0_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(_0_AssumedBattleAssetLoadManager___c__12_T);
  v6 = sub_B0D974(_0_AssumedBattleAssetLoadManager___c__12_T, v1, v2);
  v7 = method->klass;
  v8 = (System_Int32_array **)v6;
  v9 = WORD1(v7->vtable._0_Equals.methodPtr);
  v10 = v7;
  if ( (v9 & 1) == 0 )
  {
    sub_AA65A4(method->klass);
    v10 = method->klass;
    v9 = WORD1(v10->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v7->rgctx_data->_1_AssumedBattleAssetLoadManager___c__12_T___ctor->methodPointer;
  if ( (v9 & 1) == 0 )
    sub_AA65A4(v10);
  methodPointer(v8, v10->rgctx_data->_1_AssumedBattleAssetLoadManager___c__12_T___ctor);
  v18 = method->klass;
  if ( (BYTE2(v18->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AA65A4(v18);
  _2_AssumedBattleAssetLoadManager___c__12_T = v18->rgctx_data->_2_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE2(_2_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(_2_AssumedBattleAssetLoadManager___c__12_T);
  static_fields = (BattleServantConfConponent_o *)_2_AssumedBattleAssetLoadManager___c__12_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v8;
  sub_B0D840(static_fields, v8, v12, v13, v14, v15, v16, v17);
}


void __fastcall AssumedBattleAssetLoadManager___c__12_object____ctor(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        const MethodInfo_1F0CF70 *method)
{
  if ( !this )
    sub_B0D97C(0LL);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssumedBattleAssetLoadManager___c__12_object____Release_b__12_0(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        AssumedBattleAssetSearcherBase_o *x,
        const MethodInfo_1F0CF88 *method)
{
  Il2CppClass *_3_T; // x19

  _3_T = method->klass->rgctx_data->_3_T;
  if ( (BYTE2(_3_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(method->klass->rgctx_data->_3_T);
  return sub_B0D964(x, _3_T) != 0;
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
      sub_B0D97C(this);
    assetSearcher->fields._LoadStatus_k__BackingField = 2;
  }
}