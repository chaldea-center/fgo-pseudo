void __fastcall AssumedBattleAssetLoadManager___ctor(AssumedBattleAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_41897E8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo, v3);
    byte_41897E8 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_AssumedBattleAssetSearcherBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase___ctor__);
  this->fields.assetSearcherList = (struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.assetSearcherList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleEntity_o *__fastcall AssumedBattleAssetLoadManager__GetBattleEntity(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1

  if ( (byte_41897E2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_BattleMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v2);
    sub_B2C35C(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v3);
    byte_41897E2 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v5);
  return (BattleEntity_o *)DataMasterBase_object__object__long___GetSingleEntity(
                             Master_WarQuestSelectionMaster,
                             (const MethodInfo_24E43BC *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
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
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x21
  System_Collections_Generic_IEnumerable_TSource__o *EffectIdHashSet; // x20
  AssumedBattleAssetLoadManager___c_c *v24; // x0
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__16_0; // x22
  Il2CppObject *v27; // x23
  struct AssumedBattleAssetLoadManager___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x3
  DataMasterBase_WarMaster__WarEntity__int__c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v37; // x20
  unsigned __int64 v38; // x10
  int *p_offset; // x11
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x3
  __int64 v43; // x20
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0
  __int64 v48; // x3
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  int *v51; // x11
  __int64 v52; // x0
  __int64 v53; // x0
  WarEntity_o *Entity; // x0
  __int64 v55; // x1
  System_String_o *longName; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v58; // x1
  __int64 v59; // x8
  unsigned __int64 v60; // x10
  int *v61; // x11
  __int64 v62; // x0
  System_String_o *name; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_41897E7 & 1) == 0 )
  {
    sub_B2C35C(&BattleEffectUtility_TypeInfo, resultParam);
    sub_B2C35C(&Method_DataManager_GetMaster_EffectMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_int___, v7);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v8);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v9);
    sub_B2C35C(&System_IDisposable_TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_int__TypeInfo, v11);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_int__TypeInfo, v12);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v15);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v16);
    sub_B2C35C(&Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__, v17);
    sub_B2C35C(&AssumedBattleAssetLoadManager___c_TypeInfo, v18);
    byte_41897E7 = 1;
  }
  path = 0LL;
  name = 0LL;
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !resultParam )
    goto LABEL_55;
  v22 = Master_WarQuestSelectionMaster;
  EffectIdHashSet = (System_Collections_Generic_IEnumerable_TSource__o *)resultParam->fields.EffectIdHashSet;
  v24 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( (BYTE3(AssumedBattleAssetLoadManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v24 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__16_0 = static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__16_0,
      v27,
      Method_AssumedBattleAssetLoadManager___c__GetEffectPathListFromAnalyzedParam_b__16_0__,
      (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
    v28 = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    v28->__9__16_0 = _9__16_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v28->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Linq_Enumerable__Where_int_(
                                                                                    EffectIdHashSet,
                                                                                    (System_Func_TSource__bool__o *)_9__16_0,
                                                                                    (const MethodInfo_1A9F150 *)Method_System_Linq_Enumerable_Where_int___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_55:
    sub_B2C434(Master_WarQuestSelectionMaster, v21);
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
    v40 = sub_AC5258(Master_WarQuestSelectionMaster, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v35);
  }
  v43 = (*(__int64 (__fastcall **)(DataMasterBase_WarMaster__WarEntity__int__o *, _QWORD))v40)(
          v37,
          *(_QWORD *)(v40 + 8));
  if ( !v43 )
    sub_B2C434(0LL, v41);
  while ( 1 )
  {
    v44 = *(_QWORD *)v43;
    if ( *(_WORD *)(*(_QWORD *)v43 + 298LL) )
    {
      v45 = 0LL;
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v46 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v45;
        v46 += 4;
        if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v43 + 298LL) )
          goto LABEL_27;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_27:
      v47 = sub_AC5258(v43, System_Collections_IEnumerator_TypeInfo, 0LL, v42);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8)) & 1) == 0 )
      break;
    v49 = *(_QWORD *)v43;
    if ( *(_WORD *)(*(_QWORD *)v43 + 298LL) )
    {
      v50 = 0LL;
      v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v51 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        ++v50;
        v51 += 4;
        if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)v43 + 298LL) )
          goto LABEL_34;
      }
      v52 = v49 + 16LL * *v51 + 312;
    }
    else
    {
LABEL_34:
      v52 = sub_AC5258(v43, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v48);
    }
    v53 = (*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v43, *(_QWORD *)(v52 + 8));
    if ( !v22 )
      sub_B2C434(v53, (unsigned int)v53);
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v22,
               v53,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    if ( !Entity )
      sub_B2C434(0LL, v55);
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
          sub_B2C434(IsNullOrEmpty, v58);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v19,
          (EventMissionProgressRequest_Argument_ProgressData_o *)path,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      }
    }
  }
  v59 = *(_QWORD *)v43;
  if ( *(_WORD *)(*(_QWORD *)v43 + 298LL) )
  {
    v60 = 0LL;
    v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
    {
      ++v60;
      v61 += 4;
      if ( v60 >= *(unsigned __int16 *)(*(_QWORD *)v43 + 298LL) )
        goto LABEL_49;
    }
    v62 = v59 + 16LL * *v61 + 312;
  }
  else
  {
LABEL_49:
    v62 = sub_AC5258(v43, System_IDisposable_TypeInfo, 0LL, v48);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v62)(v43, *(_QWORD *)(v62 + 8));
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
  sub_B2C2F8(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *assetSearcherList; // x19
  AssumedBattleAssetLoadManager___c_c *v8; // x0
  struct AssumedBattleAssetLoadManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__10_0; // x20
  Il2CppObject *v11; // x21
  struct AssumedBattleAssetLoadManager___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_41897E3 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___, method);
    sub_B2C35C(&Method_System_Func_AssumedBattleAssetSearcherBase__bool___ctor__, v3);
    sub_B2C35C(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo, v4);
    sub_B2C35C(&Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__, v5);
    sub_B2C35C(&AssumedBattleAssetLoadManager___c_TypeInfo, v6);
    byte_41897E3 = 1;
  }
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  v8 = AssumedBattleAssetLoadManager___c_TypeInfo;
  if ( (BYTE3(AssumedBattleAssetLoadManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedBattleAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedBattleAssetLoadManager___c_TypeInfo);
    v8 = AssumedBattleAssetLoadManager___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__10_0,
      v11,
      Method_AssumedBattleAssetLoadManager___c__IsPreloading_b__10_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_AssumedBattleAssetSearcherBase__bool___ctor__);
    v12 = AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
    v12->__9__10_0 = (struct System_Func_AssumedBattleAssetSearcherBase__bool__o *)_9__10_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           assetSearcherList,
           (System_Func_T__bool__o *)_9__10_0,
           (const MethodInfo_17266AC *)Method_BasicHelper_Any_AssumedBattleAssetSearcherBase___);
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
  if ( (byte_41897E4 & 1) == 0 )
  {
    this = (AssumedBattleAssetLoadManager_o *)sub_B2C35C(
                                                &Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__,
                                                assetSearcher);
    byte_41897E4 = 1;
  }
  if ( !assetSearcher )
    goto LABEL_8;
  assetSearcher->fields.manager = v9;
  sub_B2C2F8(
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
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Add__);
      return;
    }
LABEL_8:
    sub_B2C434(this, assetSearcher);
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
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  AssumedBattleAssetSearcherBase_o **v22; // x20
  __int64 v23; // x1
  AssumedBattleAssetLoadManager_o *v24; // x0
  const MethodInfo *v25; // x2
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v26; // x23
  int size; // w8
  AssetLoader_LoadEndDataHandler_o *v28; // x21
  _BOOL8 v29; // x0
  __int64 v30; // x1
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  BattleDataDefine_c *v32; // x0
  Il2CppObject *current; // x22
  struct AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x25
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_41897E6 & 1) == 0 )
  {
    sub_B2C35C(&BattleDataDefine_TypeInfo, assetSearcher);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v9);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v10);
    sub_B2C35C(&Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__, v11);
    sub_B2C35C(&AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo, v12);
    byte_41897E6 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  v13 = sub_B2C42C(AssumedBattleAssetLoadManager___c__DisplayClass14_0_TypeInfo);
  AssumedBattleAssetLoadManager___c__DisplayClass14_0___ctor(
    (AssumedBattleAssetLoadManager___c__DisplayClass14_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_29;
  *(_QWORD *)(v13 + 24) = assetSearcher;
  v22 = (AssumedBattleAssetSearcherBase_o **)(v13 + 24);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v13 + 24),
    (System_Int32_array **)assetSearcher,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( !*(_QWORD *)(v13 + 24) )
    sub_B2C434(0LL, v23);
  v24 = (AssumedBattleAssetLoadManager_o *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v13 + 24) + 376LL))(
                                             *(_QWORD *)(v13 + 24),
                                             *(_QWORD *)(**(_QWORD **)(v13 + 24) + 384LL));
  EffectPathListFromAnalyzedParam = AssumedBattleAssetLoadManager__GetEffectPathListFromAnalyzedParam(
                                      v24,
                                      (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)v24,
                                      v25);
  v26 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EffectPathListFromAnalyzedParam;
  if ( !EffectPathListFromAnalyzedParam )
    goto LABEL_29;
  size = EffectPathListFromAnalyzedParam->fields._size;
  *(_DWORD *)(v13 + 16) = size;
  if ( size < 1 )
    return;
  if ( !*v22 )
LABEL_29:
    sub_B2C434(EffectPathListFromAnalyzedParam, v15);
  (*v22)->fields._LoadStatus_k__BackingField = 1;
  *(_DWORD *)(v13 + 20) = 0;
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)v13,
    Method_AssumedBattleAssetLoadManager___c__DisplayClass14_0__PreloadLocal_b__0__,
    0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v38,
    v26,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v39 = v38;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v39,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    if ( !v29 )
      break;
    Perf_k__BackingField = this->fields._Perf_k__BackingField;
    if ( !Perf_k__BackingField )
      sub_B2C434(v29, v30);
    v32 = BattleDataDefine_TypeInfo;
    current = v39.fields.current;
    assetStorageLoadWrapper_k__BackingField = Perf_k__BackingField->fields._assetStorageLoadWrapper_k__BackingField;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v32 = BattleDataDefine_TypeInfo;
    }
    if ( !assetStorageLoadWrapper_k__BackingField )
      sub_B2C434(v32, v30);
    if ( !assetStorageLoadWrapper_k__BackingField->fields.assetManagerWrapper )
      sub_B2C434(v32, v30);
    Wrapper__LoadAssetStorage = AssetLoadWrapper__LoadAssetStorage(
                                  assetStorageLoadWrapper_k__BackingField->fields.assetManagerWrapper,
                                  (System_String_o *)current,
                                  v28,
                                  v32->static_fields->ASSET_PARALLEL_LOAD_MAX,
                                  0LL);
    if ( Wrapper__LoadAssetStorage )
    {
      if ( !*v22 )
        sub_B2C434(0LL, v36);
      AssumedBattleAssetSearcherBase__AppendPreloadedAssetPath(*v22, (System_String_o *)current, v37);
    }
    else
    {
      if ( !v28 )
        sub_B2C434(Wrapper__LoadAssetStorage, v36);
      AssetLoader_LoadEndDataHandler__Invoke(v28, 0LL, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v39,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall AssumedBattleAssetLoadManager__ReleaseAll(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *assetSearcherList; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v8; // x21
  struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *v9; // x0
  __int64 v10; // x1

  if ( (byte_41897E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_AssumedBattleAssetSearcherBase___ctor__, method);
    sub_B2C35C(&System_Action_AssumedBattleAssetSearcherBase__TypeInfo, v3);
    sub_B2C35C(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__, v6);
    byte_41897E5 = 1;
  }
  assetSearcherList = this->fields.assetSearcherList;
  v8 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_AssumedBattleAssetSearcherBase__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v8,
    (Il2CppObject *)this,
    Method_AssumedBattleAssetLoadManager_ReleaseLocal__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_AssumedBattleAssetSearcherBase___ctor__);
  if ( !assetSearcherList
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)assetSearcherList,
          (System_Action_T__o *)v8,
          (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__ForEach__),
        (v9 = this->fields.assetSearcherList) == 0LL) )
  {
    sub_B2C434(v9, v10);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v9,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_AssumedBattleAssetSearcherBase__Clear__);
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
        v9 = sub_B2C460(this);
        sub_B2C400(v9, 0LL);
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
    sub_B2C434(this, assetSearcher);
  }
}


void __fastcall AssumedBattleAssetLoadManager__Release_object_(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo_17207D0 *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  Il2CppClass *_1_System_Action_T; // x22
  __int64 v9; // x22
  System_Collections_Generic_List_T__o *assetSearcherList; // x20
  Il2CppClass *_4_AssumedBattleAssetLoadManager___c__12_T; // x21
  __int16 v12; // w8
  Il2CppClass *v13; // x21
  Il2CppClass *v14; // x21
  Il2CppClass *v15; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x21
  Il2CppClass *v17; // x21
  __int16 v18; // w8
  Il2CppClass *v19; // x21
  Il2CppClass *v20; // x21
  Il2CppClass *v21; // x21
  Il2CppObject *v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  Il2CppClass *v29; // x19
  char *static_fields; // x0

  if ( (byte_4187210 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssumedBattleAssetLoadManager_ReleaseLocal__, method);
    sub_B2C35C(&Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___, v4);
    sub_B2C35C(&Method_System_Func_AssumedBattleAssetSearcherBase__bool___ctor__, v5);
    sub_B2C35C(&System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo, v6);
    byte_4187210 = 1;
  }
  v7 = ((__int64 (__fastcall *)(struct System_Collections_Generic_List_AssumedBattleAssetSearcherBase__o *))method->rgctx_data->_0_System_Linq_Enumerable_OfType_T_->methodPointer)(this->fields.assetSearcherList);
  _1_System_Action_T = method->rgctx_data->_1_System_Action_T_;
  if ( (BYTE2(_1_System_Action_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->rgctx_data->_1_System_Action_T_);
  v9 = sub_B2C42C(_1_System_Action_T);
  ((void (__fastcall *)(__int64, AssumedBattleAssetLoadManager_o *, __int64))method->rgctx_data->_2_System_Action_T___ctor->methodPointer)(
    v9,
    this,
    Method_AssumedBattleAssetLoadManager_ReleaseLocal__);
  ((void (__fastcall *)(__int64, __int64))method->rgctx_data->_3_BasicHelper_ForEach_T_->methodPointer)(v7, v9);
  assetSearcherList = (System_Collections_Generic_List_T__o *)this->fields.assetSearcherList;
  _4_AssumedBattleAssetLoadManager___c__12_T = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
  v12 = WORD1(_4_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr);
  if ( (v12 & 1) == 0 )
  {
    sub_AC505C(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
    v12 = WORD1(_4_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr);
  }
  if ( (v12 & 0x400) != 0 )
  {
    v13 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE2(v13->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
    if ( !v13->_2.cctor_finished )
    {
      v14 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
      if ( (BYTE2(v14->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
      j_il2cpp_runtime_class_init_0(v14);
    }
  }
  v15 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE2(v15->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)*((_QWORD *)v15->static_fields + 1);
  if ( !v16 )
  {
    v17 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
    v18 = WORD1(v17->vtable[0].methodPtr);
    if ( (v18 & 1) == 0 )
    {
      sub_AC505C(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
      v18 = WORD1(v17->vtable[0].methodPtr);
    }
    if ( (v18 & 0x400) != 0 )
    {
      v19 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
      if ( (BYTE2(v19->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
      if ( !v19->_2.cctor_finished )
      {
        v20 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
        if ( (BYTE2(v20->vtable[0].methodPtr) & 1) == 0 )
          sub_AC505C(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
        j_il2cpp_runtime_class_init_0(v20);
      }
    }
    v21 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE2(v21->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_);
    v22 = *(Il2CppObject **)v21->static_fields;
    v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_AssumedBattleAssetSearcherBase__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v16,
      v22,
      (intptr_t)method->rgctx_data->_5_AssumedBattleAssetLoadManager___c__12_T___Release_b__12_0,
      (const MethodInfo_2711C04 *)Method_System_Func_AssumedBattleAssetSearcherBase__bool___ctor__);
    v29 = method->rgctx_data->_4_AssumedBattleAssetLoadManager___c__12_T_;
    if ( (BYTE2(v29->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(v29);
    static_fields = (char *)v29->static_fields;
    *((_QWORD *)static_fields + 1) = v16;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(static_fields + 8),
      (System_Int32_array **)v16,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  BasicHelper__RemoveElements_MapControl_SpotInfo_(
    assetSearcherList,
    (System_Func_T__bool__o *)v16,
    (const MethodInfo_172909C *)Method_BasicHelper_RemoveElements_AssumedBattleAssetSearcherBase___);
}


AssetStorageLoadWrapper_o *__fastcall AssumedBattleAssetLoadManager__get_AssetStorageLoadWrapper(
        AssumedBattleAssetLoadManager_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *Perf_k__BackingField; // x8

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    sub_B2C434(this, method);
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
  sub_B2C2F8(
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
  __int64 v3; // x1
  System_Collections_Generic_HashSet_int__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4186BC1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, method);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v3);
    byte_4186BC1 = 1;
  }
  v4 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v4,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  this->fields.EffectIdHashSet = v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssumedBattleAssetLoadManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186BC0 & 1) == 0 )
  {
    sub_B2C35C(&AssumedBattleAssetLoadManager___c_TypeInfo, v1);
    byte_4186BC0 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(AssumedBattleAssetLoadManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)AssumedBattleAssetLoadManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, 0LL);
  return x->fields._LoadStatus_k__BackingField == 1;
}


void __fastcall AssumedBattleAssetLoadManager___c__12_object____cctor(const MethodInfo_1F81EF0 *method)
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
    sub_AC505C(method->klass);
  _0_AssumedBattleAssetLoadManager___c__12_T = klass->rgctx_data->_0_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE2(_0_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(_0_AssumedBattleAssetLoadManager___c__12_T);
  v4 = sub_B2C42C(_0_AssumedBattleAssetLoadManager___c__12_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_AC505C(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_AssumedBattleAssetLoadManager___c__12_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_AC505C(v8);
  methodPointer(v6, v8->rgctx_data->_1_AssumedBattleAssetLoadManager___c__12_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AC505C(v16);
  _2_AssumedBattleAssetLoadManager___c__12_T = v16->rgctx_data->_2_AssumedBattleAssetLoadManager___c__12_T_;
  if ( (BYTE2(_2_AssumedBattleAssetLoadManager___c__12_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(_2_AssumedBattleAssetLoadManager___c__12_T);
  static_fields = (BattleServantConfConponent_o *)_2_AssumedBattleAssetLoadManager___c__12_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B2C2F8(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall AssumedBattleAssetLoadManager___c__12_object____ctor(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        const MethodInfo_1F81FCC *method)
{
  if ( !this )
    sub_B2C434(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssumedBattleAssetLoadManager___c__12_object____Release_b__12_0(
        AssumedBattleAssetLoadManager___c__12_T__o *this,
        AssumedBattleAssetSearcherBase_o *x,
        const MethodInfo_1F81FE4 *method)
{
  Il2CppClass *_3_T; // x19

  _3_T = method->klass->rgctx_data->_3_T;
  if ( (BYTE2(_3_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->klass->rgctx_data->_3_T);
  return sub_B2C41C(x, _3_T) != 0;
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
      sub_B2C434(this, _);
    assetSearcher->fields._LoadStatus_k__BackingField = 2;
  }
}