void __fastcall AssumedBattleAssetLoadManager___ctor(AssumedBattleAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FBE2C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo, v6);
    byte_40FBE2C = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__);
  this->fields.assetSearcherList = (struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.assetSearcherList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleEntity_o *__fastcall AssumedBattleAssetLoadManager__GetBattleEntity(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_40FBE26 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_BattleMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v2);
    sub_B16FFC(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v3);
    byte_40FBE26 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  return (BattleEntity_o *)DataMasterBase_object__object__long___GetSingleEntity(
                             Master_WarQuestSelectionMaster,
                             (const MethodInfo_266F674 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
}


System_Collections_Generic_List_string__o *__fastcall AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *resultParam,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x21
  System_Collections_Generic_IEnumerable_TSource__o *EffectIdHashSet; // x20
  AssumedBattleAssetLoadManager___c_c *v29; // x0
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__16_0; // x22
  Il2CppObject *v32; // x23
  struct AssumedBattleAssetLoadManager___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x20
  unsigned __int64 v43; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v46; // x20
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  int *v53; // x11
  __int64 v54; // x0
  int32_t v55; // w1
  WarEntity_o *Entity; // x0
  System_String_o *longName; // x22
  __int64 v58; // x8
  unsigned __int64 v59; // x10
  int *v60; // x11
  __int64 v61; // x0
  System_String_o *name; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_40FBE2B & 1) == 0 )
  {
    sub_B16FFC(&BattleEffectUtility_TypeInfo, resultParam);
    sub_B16FFC(&Method_DataManager_GetMaster_EffectMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_int___, v9);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v10);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v11);
    sub_B16FFC(&System_IDisposable_TypeInfo, v12);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_int__TypeInfo, v13);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_int__TypeInfo, v14);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v17);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v18);
    sub_B16FFC(&Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__, v19);
    sub_B16FFC(&AssumedBattleAssetLoadManager___c_TypeInfo, v20);
    byte_40FBE2B = 1;
  }
  path = 0LL;
  name = 0LL;
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  resultParam,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !resultParam )
    goto LABEL_55;
  v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  EffectIdHashSet = (System_Collections_Generic_IEnumerable_TSource__o *)resultParam->fields.EffectIdHashSet;
  v29 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( (BYTE3(AssumedBattleAssetLoadManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v29 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__16_0 = static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v23, v24, v25, v26);
    System_Func_int__bool____ctor(
      _9__16_0,
      v32,
      Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__,
      (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
    v33 = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    v33->__9__16_0 = _9__16_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v33->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  v40 = System_Linq_Enumerable__Where_int_(
          EffectIdHashSet,
          (System_Func_TSource__bool__o *)_9__16_0,
          (const MethodInfo_19C8D54 *)Method_System_Linq_Enumerable_Where_int___);
  if ( !v40 )
LABEL_55:
    sub_B170D4();
  klass = v40->klass;
  v42 = v40;
  if ( *(_WORD *)&v40->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      ++v43;
      p_offset += 4;
      if ( v43 >= *(unsigned __int16 *)&v40->klass->_2.bitflags1 )
        goto LABEL_20;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_20:
    p_method = sub_AAFEF8(v40, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v46 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v42,
          *(_QWORD *)(p_method + 8));
  if ( !v46 )
    sub_B170D4();
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
          goto LABEL_27;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_27:
      v50 = sub_AAFEF8(v46, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8)) & 1) == 0 )
      break;
    v51 = *(_QWORD *)v46;
    if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
    {
      v52 = 0LL;
      v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v53 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v52;
        v53 += 4;
        if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
          goto LABEL_34;
      }
      v54 = v51 + 16LL * *v53 + 312;
    }
    else
    {
LABEL_34:
      v54 = sub_AAFEF8(v46, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v55 = (*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v46, *(_QWORD *)(v54 + 8));
    if ( !v27 )
      sub_B170D4();
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v27,
               v55,
               (const MethodInfo_266F388 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    if ( !Entity )
      sub_B170D4();
    if ( *(&Entity->fields.id + 1) == 5 )
    {
      longName = Entity->fields.longName;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      }
      BattleEffectUtility__GetBattleCommonEffectPathAndName(longName, &path, &name, 0LL);
      if ( !System_String__IsNullOrEmpty(path, 0LL) )
      {
        if ( !v21 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v21,
          (EventMissionProgressRequest_Argument_ProgressData_o *)path,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      }
    }
  }
  v58 = *(_QWORD *)v46;
  if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
  {
    v59 = 0LL;
    v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      ++v59;
      v60 += 4;
      if ( v59 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
        goto LABEL_49;
    }
    v61 = v58 + 16LL * *v60 + 312;
  }
  else
  {
LABEL_49:
    v61 = sub_AAFEF8(v46, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v61)(v46, *(_QWORD *)(v61 + 8));
  return (System_Collections_Generic_List_string__o *)v21;
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
  sub_B16F98(
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_T__o *assetSearcherList; // x19
  AssumedBattleAssetLoadManager___c_c *v11; // x0
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__10_0; // x20
  Il2CppObject *v14; // x21
  struct AssumedBattleAssetLoadManager___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40FBE27 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___, method);
    sub_B16FFC(&Method_System_Func_AssumedBattleAssetSearcherBase__bool___ctor__, v6);
    sub_B16FFC(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo, v7);
    sub_B16FFC(&Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__, v8);
    sub_B16FFC(&AssumedBattleAssetLoadManager___c_TypeInfo, v9);
    byte_40FBE27 = 1;
  }
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  v11 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( (BYTE3(AssumedBattleAssetLoadManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v11 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo,
                                                                                    method,
                                                                                    v2,
                                                                                    v3,
                                                                                    v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__10_0,
      v14,
      Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_AssumedBattleAssetSearcherBase__bool___ctor__);
    v15 = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    v15->__9__10_0 = (struct System_Func_AssumedBattleAssetSearcherBase__bool__o *)_9__10_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           assetSearcherList,
           (System_Func_T__bool__o *)_9__10_0,
           (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___);
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
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *assetSearcherList; // x0

  if ( (byte_40FBE28 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__, assetSearcher);
    byte_40FBE28 = 1;
  }
  if ( !assetSearcher )
    goto LABEL_8;
  assetSearcher->fields.manager = this;
  sub_B16F98(
    (BattleServantConfConponent_o *)&assetSearcher->fields.manager,
    (System_Int32_array **)this,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  AssumedBattleAssetLoadManager__PreloadLocal(this, assetSearcher, v10);
  if ( AssumedBattleAssetSearcherBase__HasAnyPreloadedAssetPaths(assetSearcher, v11) )
  {
    assetSearcherList = this->fields.assetSearcherList;
    if ( assetSearcherList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)assetSearcherList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)assetSearcher,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
}


void __fastcall AssumedBattleAssetLoadManager__PreloadLocal(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  AssumedBattleAssetSearcherBase_o **v22; // x20
  AssumedBattleAssetLoadManager_o *v23; // x0
  const MethodInfo *v24; // x2
  System_Collections_Generic_List_string__o *EffectPathListFromAnalyzedParam; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v30; // x23
  int size; // w8
  AssetLoader_LoadEndDataHandler_o *v32; // x21
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  BattleDataDefine_c *v34; // x0
  Il2CppObject *current; // x22
  struct AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x25
  const MethodInfo *v37; // x2
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FBE2A & 1) == 0 )
  {
    sub_B16FFC(&BattleDataDefine_TypeInfo, assetSearcher);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v11);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v12);
    sub_B16FFC(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__, v13);
    sub_B16FFC(&AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo, v14);
    byte_40FBE2A = 1;
  }
  memset(&v39, 0, sizeof(v39));
  v15 = sub_B170CC(AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo, assetSearcher, method, v3, v4);
  AssumedBattleAssetLoadManager___c__DisplayClass14_0___ctor(
    (AssumedBattleAssetLoadManager___c__DisplayClass14_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_29;
  *(_QWORD *)(v15 + 24) = assetSearcher;
  v22 = (AssumedBattleAssetSearcherBase_o **)(v15 + 24);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v15 + 24),
    (System_Int32_array **)assetSearcher,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( !*(_QWORD *)(v15 + 24) )
    sub_B170D4();
  v23 = (AssumedBattleAssetLoadManager_o *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v15 + 24) + 376LL))(
                                             *(_QWORD *)(v15 + 24),
                                             *(_QWORD *)(**(_QWORD **)(v15 + 24) + 384LL));
  EffectPathListFromAnalyzedParam = AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
                                      v23,
                                      (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)v23,
                                      v24);
  v30 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EffectPathListFromAnalyzedParam;
  if ( !EffectPathListFromAnalyzedParam )
    goto LABEL_29;
  size = EffectPathListFromAnalyzedParam->fields._size;
  *(_DWORD *)(v15 + 16) = size;
  if ( size < 1 )
    return;
  if ( !*v22 )
LABEL_29:
    sub_B170D4();
  (*v22)->fields._LoadStatus_k__BackingField = 1;
  *(_DWORD *)(v15 + 20) = 0;
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v26, v27, v28, v29);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)v15,
    Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__,
    0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v38,
    v30,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v39 = v38;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v39,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    Perf_k__BackingField = this->fields._Perf_k__BackingField;
    if ( !Perf_k__BackingField )
      sub_B170D4();
    v34 = BattleDataDefine_TypeInfo;
    current = v39.fields.current;
    assetStorageLoadWrapper_k__BackingField = Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v34 = BattleDataDefine_TypeInfo;
    }
    if ( !assetStorageLoadWrapper_k__BackingField )
      sub_B170D4();
    if ( !assetStorageLoadWrapper_k__BackingField->fields.assetManagerWrapper )
      sub_B170D4();
    if ( AssetLoadWrapper__LoadAssetStorage(
           assetStorageLoadWrapper_k__BackingField->fields.assetManagerWrapper,
           (System_String_o *)current,
           v32,
           v34->static_fields->ASSET_PARALLEL_LOAD_MAX,
           0LL) )
    {
      if ( !*v22 )
        sub_B170D4();
      AssumedBattleAssetSearcherBase__AppendPreloadedAssetPath(*v22, (System_String_o *)current, v37);
    }
    else
    {
      if ( !v32 )
        sub_B170D4();
      AssetLoader_LoadEndDataHandler__Invoke(v32, 0LL, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v39,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall AssumedBattleAssetLoadManager__ReleaseAll(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *assetSearcherList; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v11; // x21
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *v12; // x0

  if ( (byte_40FBE29 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_AssumedBattleAssetSearcherBase___ctor__, method);
    sub_B16FFC(&System_Action_AssumedBattleAssetSearcherBase__TypeInfo, v6);
    sub_B16FFC(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Clear__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__, v9);
    byte_40FBE29 = 1;
  }
  assetSearcherList = this->fields.assetSearcherList;
  v11 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_AssumedBattleAssetSearcherBase__TypeInfo,
                                                                               method,
                                                                               v2,
                                                                               v3,
                                                                               v4);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v11,
    (Il2CppObject *)this,
    Method_AssumedBattleAssetLoadManager_ReleaseLocal__,
    (const MethodInfo_24B7310 *)Method_System_Action_AssumedBattleAssetSearcherBase___ctor__);
  if ( !assetSearcherList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)assetSearcherList,
          (System_Action_T__o *)v11,
          (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__),
        (v12 = this->fields.assetSearcherList) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v12,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Clear__);
}


void __fastcall AssumedBattleAssetLoadManager__ReleaseLocal(
        AssumedBattleAssetLoadManager_o *this,
        AssumedBattleAssetSearcherBase_o *assetSearcher,
        const MethodInfo *method)
{
  System_String_array *PreloadedAssetPathsAsArray; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x8
  System_String_array *v8; // x20
  unsigned __int64 v9; // x21
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  struct AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x8
  AssetLoadWrapper_o *assetManagerWrapper; // x0

  if ( !assetSearcher )
    goto LABEL_11;
  PreloadedAssetPathsAsArray = AssumedBattleAssetSearcherBase__GetPreloadedAssetPathsAsArray(
                                 assetSearcher,
                                 (const MethodInfo *)assetSearcher);
  if ( !PreloadedAssetPathsAsArray )
    goto LABEL_11;
  v7 = *(_QWORD *)&PreloadedAssetPathsAsArray->max_length;
  v8 = PreloadedAssetPathsAsArray;
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v7 )
      {
        sub_B17100(PreloadedAssetPathsAsArray, v5, v6);
        sub_B170A0();
      }
      Perf_k__BackingField = this->fields._Perf_k__BackingField;
      if ( !Perf_k__BackingField )
        break;
      assetStorageLoadWrapper_k__BackingField = Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
      if ( !assetStorageLoadWrapper_k__BackingField )
        break;
      assetManagerWrapper = assetStorageLoadWrapper_k__BackingField->fields.assetManagerWrapper;
      if ( !assetManagerWrapper )
        break;
      AssetLoadWrapper__ReleaseAssetStorage(assetManagerWrapper, v8->m_Items[v9], 0LL);
      LODWORD(v7) = v8->max_length;
      if ( (__int64)++v9 >= (int)v7 )
        return;
    }
LABEL_11:
    sub_B170D4();
  }
}


void __fastcall AssumedBattleAssetLoadManager__Release_object_(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo_18B00EC *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x21
  Il2CppClass *_1_System_Action_T; // x22
  __int64 v13; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
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

  if ( (byte_40FA602 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__, method);
    sub_B16FFC(&Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___, v4);
    sub_B16FFC(&Method_System_Func_AssumedBattleAssetSearcherBase__bool___ctor__, v5);
    sub_B16FFC(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo, v6);
    byte_40FA602 = 1;
  }
  v11 = ((__int64 (__fastcall *)(struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *))method->rgctx_data->_0_System_Linq_Enumerable_OfType_T_->methodPointer)(this->fields.assetSearcherList);
  _1_System_Action_T = method->rgctx_data->_1_System_Action_T_;
  if ( (BYTE2(_1_System_Action_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_1_System_Action_T_);
  v13 = sub_B170CC(_1_System_Action_T, v7, v8, v9, v10);
  ((void (__fastcall *)(__int64, AssumedBattleAssetLoadManager_o *, __int64))method->rgctx_data->_2_System_Action_T___ctor->methodPointer)(
    v13,
    this,
    Method_AssumedBattleAssetLoadManager_ReleaseLocal__);
  ((void (__fastcall *)(__int64, __int64))method->rgctx_data->_3_BasicHelper_ForEach_T_->methodPointer)(v11, v13);
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  _4_AssumedBattleAssetLoadManager___c__12_T = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
  v20 = WORD1(_4_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr);
  if ( (v20 & 1) == 0 )
  {
    sub_AAFCFC(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
    v20 = WORD1(_4_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr);
  }
  if ( (v20 & 0x400) != 0 )
  {
    v21 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE2(v21->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
    if ( !v21->_2.cctor_finished )
    {
      v22 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
      if ( (BYTE2(v22->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
      j_il2cpp_runtime_class_init_0(v22);
    }
  }
  v23 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE2(v23->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
  v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)*((_QWORD *)v23->static_fields + 1);
  if ( !v24 )
  {
    v25 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
    v26 = WORD1(v25->vtable[0].methodPtr);
    if ( (v26 & 1) == 0 )
    {
      sub_AAFCFC(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
      v26 = WORD1(v25->vtable[0].methodPtr);
    }
    if ( (v26 & 0x400) != 0 )
    {
      v27 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
      if ( (BYTE2(v27->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
      if ( !v27->_2.cctor_finished )
      {
        v28 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
        if ( (BYTE2(v28->vtable[0].methodPtr) & 1) == 0 )
          sub_AAFCFC(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
        j_il2cpp_runtime_class_init_0(v28);
      }
    }
    v29 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE2(v29->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
    v30 = *(Il2CppObject **)v29->static_fields;
    v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo,
                                                                               v14,
                                                                               v15,
                                                                               v16,
                                                                               v17);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v24,
      v30,
      (intptr_t)method->rgctx_data->_5_AssumedBattleAssetLoadManager___c__12_T___Release_b__12_0,
      (const MethodInfo_2B6AB40 *)Method_System_Func_AssumedBattleAssetSearcherBase__bool___ctor__);
    v37 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE2(v37->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(v37);
    static_fields = (char *)v37->static_fields;
    *((_QWORD *)static_fields + 1) = v24;
    sub_B16F98(
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
    (const MethodInfo_18B8934 *)Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___);
}


AssetStorageLoadWrapper_o *__fastcall AssumedBattleAssetLoadManager__get_AssetStorageLoadWrapper(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *Perf_k__BackingField; // x8

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    sub_B170D4();
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
  sub_B16F98(
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_HashSet_int__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F9137 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, method);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    byte_40F9137 = 1;
  }
  v7 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  System_Collections_Generic_HashSet_int____ctor(
    v7,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  this->fields.EffectIdHashSet = v7;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssumedBattleAssetLoadManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F9136 & 1) == 0 )
  {
    sub_B16FFC(&AssumedBattleAssetLoadManager___c_TypeInfo, v1);
    byte_40F9136 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(AssumedBattleAssetLoadManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return x->fields._LoadStatus_k__BackingField == 1;
}


void __fastcall AssumedBattleAssetLoadManager___c__12_object____cctor(const MethodInfo_1F86784 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  AssumedBattleAssetLoadManager___c__12_T__c *klass; // x20
  Il2CppClass *_0_AssumedBattleAssetLoadManager___c__12_T; // x20
  __int64 v8; // x0
  AssumedBattleAssetLoadManager___c__12_T__c *v9; // x22
  System_Int32_array **v10; // x20
  __int16 v11; // w8
  AssumedBattleAssetLoadManager___c__12_T__c *v12; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  AssumedBattleAssetLoadManager___c__12_T__c *v20; // x19
  Il2CppClass *_2_AssumedBattleAssetLoadManager___c__12_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass);
  _0_AssumedBattleAssetLoadManager___c__12_T = klass->rgctx_data->_0_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE2(_0_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_0_AssumedBattleAssetLoadManager___c__12_T);
  v8 = sub_B170CC(_0_AssumedBattleAssetLoadManager___c__12_T, v1, v2, v3, v4);
  v9 = method->klass;
  v10 = (System_Int32_array **)v8;
  v11 = WORD1(v9->vtable._0_Equals.methodPtr);
  v12 = v9;
  if ( (v11 & 1) == 0 )
  {
    sub_AAFCFC(method->klass);
    v12 = method->klass;
    v11 = WORD1(v12->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v9->rgctx_data->_1_AssumedBattleAssetLoadManager___c__12_T___ctor->methodPointer;
  if ( (v11 & 1) == 0 )
    sub_AAFCFC(v12);
  methodPointer(v10, v12->rgctx_data->_1_AssumedBattleAssetLoadManager___c__12_T___ctor);
  v20 = method->klass;
  if ( (BYTE2(v20->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AAFCFC(v20);
  _2_AssumedBattleAssetLoadManager___c__12_T = v20->rgctx_data->_2_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE2(_2_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_2_AssumedBattleAssetLoadManager___c__12_T);
  static_fields = (BattleServantConfConponent_o *)_2_AssumedBattleAssetLoadManager___c__12_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B16F98(static_fields, v10, v14, v15, v16, v17, v18, v19);
}


void __fastcall AssumedBattleAssetLoadManager___c__12_object____ctor(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        const MethodInfo_1F86860 *method)
{
  if ( !this )
    sub_B170D4();
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssumedBattleAssetLoadManager___c__12_object____Release_b__12_0(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        AssumedBattleAssetSearcherBase_o *x,
        const MethodInfo_1F86878 *method)
{
  Il2CppClass *_3_T; // x19

  _3_T = method->klass->rgctx_data->_3_T;
  if ( (BYTE2(_3_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass->rgctx_data->_3_T);
  return sub_B170BC(x, _3_T) != 0;
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
      sub_B170D4();
    assetSearcher->fields._LoadStatus_k__BackingField = 2;
  }
}