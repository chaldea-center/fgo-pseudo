void __fastcall AssumedBattleAssetLoadManager___ctor(AssumedBattleAssetLoadManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_435522C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__);
    sub_B70694(&System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo);
    byte_435522C = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__);
  this->fields.assetSearcherList = (struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.assetSearcherList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleEntity_o *__fastcall AssumedBattleAssetLoadManager__GetBattleEntity(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_WarQuestSelectionMaster; // x0
  __int64 v3; // x1

  if ( (byte_4355226 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_BattleMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    byte_4355226 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7076C(0LL, v3);
  return (BattleEntity_o *)DataMasterBase_object__object__long___GetSingleEntity(
                             Master_WarQuestSelectionMaster,
                             (const MethodInfo_21C072C *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
}


System_Collections_Generic_List_string__o *__fastcall AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *resultParam,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v7; // x21
  System_Collections_Generic_IEnumerable_TSource__o *EffectIdHashSet; // x20
  AssumedBattleAssetLoadManager___c_c *v9; // x0
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__16_0; // x22
  Il2CppObject *v12; // x23
  struct AssumedBattleAssetLoadManager___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  DataMasterBase_WarMaster__WarEntity__int__c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x20
  unsigned __int64 v22; // x10
  int *p_offset; // x11
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x20
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  __int64 v35; // x0
  WarEntity_o *Entity; // x0
  __int64 v37; // x1
  System_String_o *longName; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v40; // x1
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  System_String_o *name; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_435522B & 1) == 0 )
  {
    sub_B70694(&BattleEffectUtility_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_EffectMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_Where_int___);
    sub_B70694(&Method_System_Func_int__bool___ctor__);
    sub_B70694(&System_Func_int__bool__TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__);
    sub_B70694(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_435522B = 1;
  }
  path = 0LL;
  name = 0LL;
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !resultParam )
    goto LABEL_55;
  v7 = Master_WarQuestSelectionMaster;
  EffectIdHashSet = (System_Collections_Generic_IEnumerable_TSource__o *)resultParam->fields.EffectIdHashSet;
  v9 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( (BYTE3(AssumedBattleAssetLoadManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v9 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__16_0 = static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__16_0,
      v12,
      Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__,
      (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
    v13 = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    v13->__9__16_0 = _9__16_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v13->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Linq_Enumerable__Where_int_(
                                                                                    EffectIdHashSet,
                                                                                    (System_Func_TSource__bool__o *)_9__16_0,
                                                                                    (const MethodInfo_1CCCBB0 *)Method_System_Linq_Enumerable_Where_int___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_55:
    sub_B7076C(Master_WarQuestSelectionMaster, v6);
  klass = Master_WarQuestSelectionMaster->klass;
  v21 = Master_WarQuestSelectionMaster;
  if ( *(_WORD *)&Master_WarQuestSelectionMaster->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v22;
      p_offset += 4;
      if ( v22 >= *(unsigned __int16 *)&Master_WarQuestSelectionMaster->klass->_2.bitflags1 )
        goto LABEL_20;
    }
    v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_20:
    v24 = sub_B08590(Master_WarQuestSelectionMaster, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v26 = (*(__int64 (__fastcall **)(DataMasterBase_WarMaster__WarEntity__int__o *, _QWORD))v24)(
          v21,
          *(_QWORD *)(v24 + 8));
  if ( !v26 )
    sub_B7076C(0LL, v25);
  while ( 1 )
  {
    v27 = *(_QWORD *)v26;
    if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
    {
      v28 = 0LL;
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
          goto LABEL_27;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_27:
      v30 = sub_B08590(v26, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      break;
    v31 = *(_QWORD *)v26;
    if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
    {
      v32 = 0LL;
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v33 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
          goto LABEL_34;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_34:
      v34 = sub_B08590(v26, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
    if ( !v7 )
      sub_B7076C(v35, (unsigned int)v35);
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v7,
               v35,
               (const MethodInfo_21C0440 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    if ( !Entity )
      sub_B7076C(0LL, v37);
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
        if ( !v4 )
          sub_B7076C(IsNullOrEmpty, v40);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v4,
          (EventMissionProgressRequest_Argument_ProgressData_o *)path,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
      }
    }
  }
  v41 = *(_QWORD *)v26;
  if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
  {
    v42 = 0LL;
    v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      ++v42;
      v43 += 4;
      if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
        goto LABEL_49;
    }
    v44 = v41 + 16LL * *v43 + 312;
  }
  else
  {
LABEL_49:
    v44 = sub_B08590(v26, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v44)(v26, *(_QWORD *)(v44 + 8));
  return (System_Collections_Generic_List_string__o *)v4;
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
  sub_B70630(
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
  System_Collections_Generic_List_T__o *assetSearcherList; // x19
  AssumedBattleAssetLoadManager___c_c *v4; // x0
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__10_0; // x20
  Il2CppObject *v7; // x21
  struct AssumedBattleAssetLoadManager___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4355227 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___);
    sub_B70694(&Method_System_Func_AssumedBattleAssetSearcherBase__bool___ctor__);
    sub_B70694(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    sub_B70694(&Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__);
    sub_B70694(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_4355227 = 1;
  }
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  v4 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( (BYTE3(AssumedBattleAssetLoadManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v4 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__10_0,
      v7,
      Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__,
      (const MethodInfo_29AC578 *)Method_System_Func_AssumedBattleAssetSearcherBase__bool___ctor__);
    v8 = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    v8->__9__10_0 = (struct System_Func_AssumedBattleAssetSearcherBase__bool__o *)_9__10_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           assetSearcherList,
           (System_Func_T__bool__o *)_9__10_0,
           (const MethodInfo_1BDCA88 *)Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___);
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
  if ( (byte_4355228 & 1) == 0 )
  {
    this = (AssumedBattleAssetLoadManager_o *)sub_B70694(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__);
    byte_4355228 = 1;
  }
  if ( !assetSearcher )
    goto LABEL_8;
  assetSearcher->fields.manager = v9;
  sub_B70630(
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
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__);
      return;
    }
LABEL_8:
    sub_B7076C(this, assetSearcher);
  }
}


void __fastcall AssumedBattleAssetLoadManager__PreloadLocal(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_List_TSource__o *v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  AssumedBattleAssetSearcherBase_o **v14; // x21
  __int64 v15; // x1
  __int64 v16; // x22
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_string__o *EffectPathListFromAnalyzedParam; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v20; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x24
  AssumedBattleAssetLoadManager___c_c *v22; // x0
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__14_1; // x25
  Il2CppObject *v25; // x26
  struct AssumedBattleAssetLoadManager___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x24
  System_Func_int__BattleActionData_SideEffectData__o *v34; // x25
  System_Collections_Generic_IEnumerable_T__o *v35; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v36; // x22
  int v37; // w8
  AssetLoader_LoadEndDataHandler_o *v38; // x25
  AssetLoader_LoadEndDataHandler_o **v39; // x24
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  _BOOL8 v46; // x0
  __int64 v47; // x1
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  BattleDataDefine_c *v49; // x0
  Il2CppObject *current; // x23
  struct AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x27
  AssetLoader_LoadEndDataHandler_o *v52; // x25
  __int64 v53; // x1
  const MethodInfo *v54; // x2
  System_Action_o **v55; // x22
  _BOOL8 v56; // x0
  __int64 v57; // x1
  struct BattlePerformance_o *v58; // x8
  Il2CppObject *v59; // x23
  System_Action_o *v60; // x24
  struct AssetStorageLoadWrapper_o *v61; // x28
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  SoundLoadWrapper_o *soundManagerWrapper; // x0
  __int64 v69; // x1
  const MethodInfo *v70; // x2
  int v71; // w19
  System_Collections_Generic_List_Enumerator_T__o v72; // [xsp+0h] [xbp-A0h] BYREF
  int v73[4]; // [xsp+18h] [xbp-88h]
  int v74; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_435522A & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_BattleDataDefine_AddUniqueCameraPath__);
    sub_B70694(&BattleDataDefine_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_string___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_int___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B70694(&Method_System_Func_int__string___ctor__);
    sub_B70694(&Method_System_Func_int__bool___ctor__);
    sub_B70694(&System_Func_int__string__TypeInfo);
    sub_B70694(&System_Func_int__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&Method_AssumedBattleAssetLoadManager___c__PreloadLocal_b__14_1__);
    sub_B70694(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__);
    sub_B70694(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__2__);
    sub_B70694(&AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo);
    sub_B70694(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_435522A = 1;
  }
  memset(&v75, 0, sizeof(v75));
  v74 = 0;
  v5 = sub_B70764(AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo);
  AssumedBattleAssetLoadManager___c__DisplayClass14_0___ctor(
    (AssumedBattleAssetLoadManager___c__DisplayClass14_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_56;
  *(_QWORD *)(v5 + 24) = assetSearcher;
  v14 = (AssumedBattleAssetSearcherBase_o **)(v5 + 24);
  sub_B70630(
    (BattleServantConfConponent_o *)(v5 + 24),
    (System_Int32_array **)assetSearcher,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  if ( !*(_QWORD *)(v5 + 24) )
    sub_B7076C(0LL, v15);
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 24) + 376LL))(
          *(_QWORD *)(v5 + 24),
          *(_QWORD *)(**(_QWORD **)(v5 + 24) + 384LL));
  EffectPathListFromAnalyzedParam = AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
                                      (AssumedBattleAssetLoadManager_o *)v16,
                                      (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)v16,
                                      v17);
  if ( !v16 )
    sub_B7076C(EffectPathListFromAnalyzedParam, v19);
  v20 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)EffectPathListFromAnalyzedParam;
  v21 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v16 + 32);
  v22 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( (BYTE3(AssumedBattleAssetLoadManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v22 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__14_1 = static_fields->__9__14_1;
  if ( !_9__14_1 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__14_1 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__14_1,
      v25,
      Method_AssumedBattleAssetLoadManager___c__PreloadLocal_b__14_1__,
      (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
    v26 = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    v26->__9__14_1 = _9__14_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v26->__9__14_1,
      (System_Int32_array **)_9__14_1,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v33 = System_Linq_Enumerable__Where_int_(
          v21,
          (System_Func_TSource__bool__o *)_9__14_1,
          (const MethodInfo_1CCCBB0 *)Method_System_Linq_Enumerable_Where_int___);
  v34 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B70764(System_Func_int__string__TypeInfo);
  System_Func_int__BattleActionData_SideEffectData____ctor(
    v34,
    0LL,
    Method_BattleDataDefine_AddUniqueCameraPath__,
    (const MethodInfo_29A71E0 *)Method_System_Func_int__string___ctor__);
  v35 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                         v33,
                                                         (System_Func_TSource__TResult__o *)v34,
                                                         (const MethodInfo_1CC29A4 *)Method_System_Linq_Enumerable_Select_int__string___);
  if ( !v20 )
    sub_B7076C(v35, v35);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    v20,
    v35,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_string__AddRange__);
  v6 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
         *(System_Collections_Generic_IEnumerable_TSource__o **)(v16 + 24),
         (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_string___);
  v36 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v6;
  if ( !v6 )
    goto LABEL_56;
  v37 = v6->fields._size + v20->fields._size;
  *(_DWORD *)(v5 + 16) = v37;
  if ( v37 < 1 )
    return;
  if ( !*v14 )
LABEL_56:
    sub_B7076C(v6, v7);
  (*v14)->fields._LoadStatus_k__BackingField = 1;
  *(_DWORD *)(v5 + 20) = 0;
  v38 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v38,
    (Il2CppObject *)v5,
    Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__,
    0LL);
  v39 = (AssetLoader_LoadEndDataHandler_o **)(v5 + 32);
  *(_QWORD *)(v5 + 32) = v38;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)v38, v40, v41, v42, v43, v44, v45);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v72,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v20,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v75 = v72;
  while ( 1 )
  {
    v46 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v75,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v46 )
      break;
    Perf_k__BackingField = this->fields._Perf_k__BackingField;
    if ( !Perf_k__BackingField )
      sub_B7076C(v46, v47);
    v49 = BattleDataDefine_TypeInfo;
    current = v75.fields.current;
    assetStorageLoadWrapper_k__BackingField = Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
    v52 = *v39;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v49 = BattleDataDefine_TypeInfo;
    }
    if ( !assetStorageLoadWrapper_k__BackingField )
      sub_B7076C(v49, v47);
    if ( !assetStorageLoadWrapper_k__BackingField->fields.assetManagerWrapper )
      sub_B7076C(v49, v47);
    if ( AssetLoadWrapper__LoadAssetStorage(
           assetStorageLoadWrapper_k__BackingField->fields.assetManagerWrapper,
           (System_String_o *)current,
           v52,
           v49->static_fields->ASSET_PARALLEL_LOAD_MAX,
           0LL) )
    {
      if ( !*v14 )
        sub_B7076C(0LL, v53);
      AssumedBattleAssetSearcherBase__AppendPreloadedAssetPath(*v14, (System_String_o *)current, v54);
    }
    else
    {
      if ( !*v39 )
        sub_B7076C(0LL, v53);
      AssetLoader_LoadEndDataHandler__Invoke(*v39, 0LL, 0LL);
    }
  }
  v73[0] = 321;
  v74 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v75,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v74 = 0;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v72,
    v36,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v75 = v72;
  v55 = (System_Action_o **)(v5 + 40);
  while ( 1 )
  {
    v56 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v75,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v56 )
      break;
    v58 = this->fields._Perf_k__BackingField;
    if ( !v58 )
      sub_B7076C(v56, v57);
    v59 = v75.fields.current;
    v60 = *v55;
    v61 = v58->fields._assetStorageLoadWrapper_k__BackingField;
    if ( !*v55 )
    {
      v60 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v60,
        (Il2CppObject *)v5,
        Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__2__,
        0LL);
      *v55 = v60;
      sub_B70630((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)v60, v62, v63, v64, v65, v66, v67);
    }
    if ( !v61 )
      sub_B7076C(v56, v57);
    soundManagerWrapper = v61->fields.soundManagerWrapper;
    if ( !soundManagerWrapper )
      sub_B7076C(0LL, v57);
    SoundLoadWrapper__LoadAudioAssetStorage(soundManagerWrapper, (System_String_o *)v59, v60, 1, 0LL);
    if ( !*v14 )
      sub_B7076C(0LL, v69);
    AssumedBattleAssetSearcherBase__AppendPreloadedAudioAssetPath(*v14, (System_String_o *)v59, v70);
  }
  v73[0] = 425;
  v71 = ++v74;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v75,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  if ( v71 && v73[v71 - 1] == 425 )
    v74 = v71 - 1;
}


void __fastcall AssumedBattleAssetLoadManager__ReleaseAll(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *assetSearcherList; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v4; // x21
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *v5; // x0
  __int64 v6; // x1

  if ( (byte_4355229 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_AssumedBattleAssetSearcherBase___ctor__);
    sub_B70694(&System_Action_AssumedBattleAssetSearcherBase__TypeInfo);
    sub_B70694(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__);
    sub_B70694(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__);
    byte_4355229 = 1;
  }
  assetSearcherList = this->fields.assetSearcherList;
  v4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_AssumedBattleAssetSearcherBase__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v4,
    (Il2CppObject *)this,
    Method_AssumedBattleAssetLoadManager_ReleaseLocal__,
    (const MethodInfo_264C148 *)Method_System_Action_AssumedBattleAssetSearcherBase___ctor__);
  if ( !assetSearcherList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)assetSearcherList,
          (System_Action_T__o *)v4,
          (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__),
        (v5 = this->fields.assetSearcherList) == 0LL) )
  {
    sub_B7076C(v5, v6);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v5,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Clear__);
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
    v15 = sub_B70798(this);
    sub_B70738(v15, 0LL);
  }
LABEL_10:
  this = (AssumedBattleAssetLoadManager_o *)AssumedBattleAssetSearcherBase__GetPreloadedAudioAssetPathsAsArray(
                                              assetSearcher,
                                              (const MethodInfo *)assetSearcher);
  if ( !this )
LABEL_19:
    sub_B7076C(this, assetSearcher);
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
        const MethodInfo_1BD6BAC *method)
{
  __int64 v4; // x21
  Il2CppClass *_1_System_Action_T; // x22
  __int64 v6; // x22
  System_Collections_Generic_List_T__o *assetSearcherList; // x20
  Il2CppClass *_4_AssumedBattleAssetLoadManager___c__12_T; // x21
  __int16 v9; // w8
  Il2CppClass *v10; // x21
  Il2CppClass *v11; // x21
  Il2CppClass *v12; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v13; // x21
  Il2CppClass *v14; // x21
  __int16 v15; // w8
  Il2CppClass *v16; // x21
  Il2CppClass *v17; // x21
  Il2CppClass *v18; // x21
  Il2CppObject *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  Il2CppClass *v26; // x19
  char *static_fields; // x0

  if ( (byte_4353F60 & 1) == 0 )
  {
    sub_B70694(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__);
    sub_B70694(&Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___);
    sub_B70694(&Method_System_Func_AssumedBattleAssetSearcherBase__bool___ctor__);
    sub_B70694(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    byte_4353F60 = 1;
  }
  v4 = ((__int64 (__fastcall *)(struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *))method->rgctx_data->_0_System_Linq_Enumerable_OfType_T_->methodPointer)(this->fields.assetSearcherList);
  _1_System_Action_T = method->rgctx_data->_1_System_Action_T_;
  if ( (BYTE2(_1_System_Action_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_1_System_Action_T_);
  v6 = sub_B70764(_1_System_Action_T);
  ((void (__fastcall *)(__int64, AssumedBattleAssetLoadManager_o *, __int64))method->rgctx_data->_2_System_Action_T___ctor->methodPointer)(
    v6,
    this,
    Method_AssumedBattleAssetLoadManager_ReleaseLocal__);
  ((void (__fastcall *)(__int64, __int64))method->rgctx_data->_3_BasicHelper_ForEach_T_->methodPointer)(v4, v6);
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  _4_AssumedBattleAssetLoadManager___c__12_T = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
  v9 = WORD1(_4_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr);
  if ( (v9 & 1) == 0 )
  {
    sub_B08394(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
    v9 = WORD1(_4_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr);
  }
  if ( (v9 & 0x400) != 0 )
  {
    v10 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE2(v10->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
    if ( !v10->_2.cctor_finished )
    {
      v11 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
      if ( (BYTE2(v11->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
      j_il2cpp_runtime_class_init_0(v11);
    }
  }
  v12 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE2(v12->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)*((_QWORD *)v12->static_fields + 1);
  if ( !v13 )
  {
    v14 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
    v15 = WORD1(v14->vtable[0].methodPtr);
    if ( (v15 & 1) == 0 )
    {
      sub_B08394(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
      v15 = WORD1(v14->vtable[0].methodPtr);
    }
    if ( (v15 & 0x400) != 0 )
    {
      v16 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
      if ( (BYTE2(v16->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
      if ( !v16->_2.cctor_finished )
      {
        v17 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
        if ( (BYTE2(v17->vtable[0].methodPtr) & 1) == 0 )
          sub_B08394(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
        j_il2cpp_runtime_class_init_0(v17);
      }
    }
    v18 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE2(v18->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
    v19 = *(Il2CppObject **)v18->static_fields;
    v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v13,
      v19,
      (intptr_t)method->rgctx_data->_5_AssumedBattleAssetLoadManager___c__12_T___Release_b__12_0,
      (const MethodInfo_29AC578 *)Method_System_Func_AssumedBattleAssetSearcherBase__bool___ctor__);
    v26 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE2(v26->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(v26);
    static_fields = (char *)v26->static_fields;
    *((_QWORD *)static_fields + 1) = v13;
    sub_B70630(
      (BattleServantConfConponent_o *)(static_fields + 8),
      (System_Int32_array **)v13,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  BasicHelper__RemoveElements_MapControl_SpotInfo_(
    assetSearcherList,
    (System_Func_T__bool__o *)v13,
    (const MethodInfo_1BDF498 *)Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___);
}


AssetStorageLoadWrapper_o *__fastcall AssumedBattleAssetLoadManager__get_AssetStorageLoadWrapper(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *Perf_k__BackingField; // x8

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    sub_B7076C(this, method);
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
  sub_B70630(
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
  System_Collections_Generic_HashSet_int__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_HashSet_int__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_43509CC & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_HashSet_int___ctor___69140912);
    sub_B70694(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_B70694(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_B70694(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_43509CC = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_B70764(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_2EADE74 *)Method_System_Collections_Generic_HashSet_int___ctor___69140912);
  this->fields.EffectIdHashSet = v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v10,
    (const MethodInfo_2EB4850 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.AudioAssetNameHashSet = (struct System_Collections_Generic_HashSet_string__o *)v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.AudioAssetNameHashSet,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_HashSet_int__o *)sub_B70764(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v17,
    (const MethodInfo_2EADE74 *)Method_System_Collections_Generic_HashSet_int___ctor___69140912);
  this->fields.cameraIdHashSet = v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.cameraIdHashSet,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssumedBattleAssetLoadManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_43509CB & 1) == 0 )
  {
    sub_B70694(&AssumedBattleAssetLoadManager___c_TypeInfo);
    byte_43509CB = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(AssumedBattleAssetLoadManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7076C(this, 0LL);
  return x->fields._LoadStatus_k__BackingField == 1;
}


bool __fastcall AssumedBattleAssetLoadManager___c___PreloadLocal_b__14_1(
        AssumedBattleAssetLoadManager___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x > 0;
}


void __fastcall AssumedBattleAssetLoadManager___c__12_object____cctor(const MethodInfo_1F34650 *method)
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
    sub_B08394(method->klass);
  _0_AssumedBattleAssetLoadManager___c__12_T = klass->rgctx_data->_0_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE2(_0_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(_0_AssumedBattleAssetLoadManager___c__12_T);
  v4 = sub_B70764(_0_AssumedBattleAssetLoadManager___c__12_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_B08394(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_AssumedBattleAssetLoadManager___c__12_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_B08394(v8);
  methodPointer(v6, v8->rgctx_data->_1_AssumedBattleAssetLoadManager___c__12_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_B08394(v16);
  _2_AssumedBattleAssetLoadManager___c__12_T = v16->rgctx_data->_2_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE2(_2_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(_2_AssumedBattleAssetLoadManager___c__12_T);
  static_fields = (BattleServantConfConponent_o *)_2_AssumedBattleAssetLoadManager___c__12_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B70630(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall AssumedBattleAssetLoadManager___c__12_object____ctor(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        const MethodInfo_1F3472C *method)
{
  if ( !this )
    sub_B7076C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssumedBattleAssetLoadManager___c__12_object____Release_b__12_0(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        AssumedBattleAssetSearcherBase_o *x,
        const MethodInfo_1F34744 *method)
{
  Il2CppClass *_3_T; // x19

  _3_T = method->klass->rgctx_data->_3_T;
  if ( (BYTE2(_3_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->klass->rgctx_data->_3_T);
  return sub_B70754(x, _3_T) != 0;
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
      sub_B7076C(this, _);
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
    sub_B7076C(0LL, method);
  AssetLoader_LoadEndDataHandler__Invoke(onLoadFinished, 0LL, v2);
}