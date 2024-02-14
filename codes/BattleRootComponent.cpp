void __fastcall BattleRootComponent___ctor(BattleRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


System_Int32_array *__fastcall BattleRootComponent__GetClassBoardCommandSpellEffectId(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
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
  System_Collections_Generic_HashSet_int__o *v16; // x19
  void *Master_WarQuestSelectionMaster; // x0
  BalanceConfig_c *v18; // x8
  int32_t ClassBoardReleaseQuestId; // w21
  bool IsQuestClear_25410236; // w0
  Il2CppClass *klass; // x8
  _QWORD *data; // x8
  __int64 v23; // x9
  int v24; // w8
  ClassBoardCommandSpellMaster_o *v25; // x21
  unsigned int v26; // w10
  __int64 v27; // x8
  _QWORD *v28; // x22
  __int64 v29; // x25
  int v30; // w8
  unsigned int v31; // w23
  __int64 v32; // x8
  __int64 v33; // x8
  unsigned __int64 v34; // x24
  System_Int32_array *EffectIdArray; // x0
  System_Int32_array *v36; // x22
  int v37; // w20
  __int64 v38; // x0
  __int64 v40; // x0
  __int64 v41; // [xsp+8h] [xbp-A8h]
  Il2CppObject *SingleEntity; // [xsp+10h] [xbp-A0h]
  unsigned int v43; // [xsp+18h] [xbp-98h]
  int v44; // [xsp+1Ch] [xbp-94h]
  _BYTE v45[28]; // [xsp+20h] [xbp-90h] BYREF
  int v46; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_4211D0C & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&CondType_TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_BattleMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v13);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v15);
    byte_4211D0C = 1;
  }
  entitys = 0LL;
  memset(&v47, 0, sizeof(v47));
  v46 = 0;
  v16 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_HashSet_int____ctor(
    v16,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_WarQuestSelectionMaster,
                   (const MethodInfo_2669EC0 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v18 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v18->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_25410236 = CondType__IsQuestClear_25410236(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( !SingleEntity || !IsQuestClear_25410236 )
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v16,
             (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  klass = SingleEntity[1].klass;
  if ( !klass || (data = klass->_1.this_arg.data) == 0LL || (v23 = data[2]) == 0 )
LABEL_57:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  v24 = *(_DWORD *)(v23 + 24);
  if ( v24 >= 1 )
  {
    v44 = 0;
    v25 = (ClassBoardCommandSpellMaster_o *)Master_WarQuestSelectionMaster;
    v26 = 0;
    v41 = v23;
    while ( 1 )
    {
      if ( v26 >= v24 )
        goto LABEL_58;
      v27 = *(_QWORD *)(v23 + 8LL * (int)v26 + 32);
      if ( !v27 )
        goto LABEL_57;
      v43 = v26;
      Master_WarQuestSelectionMaster = SingleEntity[1].klass;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_57;
      Master_WarQuestSelectionMaster = BattleInfoData__getUserServantFromID(
                                         (BattleInfoData_o *)Master_WarQuestSelectionMaster,
                                         *(_QWORD *)(v27 + 24),
                                         0LL);
      if ( Master_WarQuestSelectionMaster )
      {
        v28 = Master_WarQuestSelectionMaster;
        Master_WarQuestSelectionMaster = (void *)BasicHelper__IsNullOrEmpty(
                                                   *((System_Collections_ICollection_o **)Master_WarQuestSelectionMaster
                                                   + 65),
                                                   0LL);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
        {
          v29 = v28[65];
          if ( !v29 )
            goto LABEL_57;
          v30 = *(_DWORD *)(v29 + 24);
          if ( v30 >= 1 )
            break;
        }
      }
LABEL_55:
      v23 = v41;
      v24 = *(_DWORD *)(v41 + 24);
      v26 = v43 + 1;
      if ( (int)(v43 + 1) >= v24 )
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v16,
                 (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    v31 = 0;
    while ( v31 < v30 )
    {
      v32 = *(_QWORD *)(v29 + 8LL * (int)v31 + 32);
      if ( !v32 || !v25 )
        goto LABEL_57;
      Master_WarQuestSelectionMaster = (void *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                                 v25,
                                                 &entitys,
                                                 *(_DWORD *)(v32 + 16),
                                                 *(_DWORD *)(v32 + 20),
                                                 0LL);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        Master_WarQuestSelectionMaster = entitys;
        if ( !entitys )
          goto LABEL_57;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v45,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
        v47 = *(System_Collections_Generic_List_Enumerator_T__o *)v45;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v47,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
        {
          if ( !v47.fields.current )
            sub_B0D97C(0LL);
          EffectIdArray = ClassBoardCommandSpellEntity__GetEffectIdArray(
                            (ClassBoardCommandSpellEntity_o *)v47.fields.current,
                            0LL);
          v36 = EffectIdArray;
          if ( !EffectIdArray )
            sub_B0D97C(0LL);
          v33 = *(_QWORD *)&EffectIdArray->max_length;
          if ( (int)v33 >= 1 )
          {
            v34 = 0LL;
            do
            {
              if ( v34 >= (unsigned int)v33 )
              {
                v38 = sub_B0D9A8(EffectIdArray);
                sub_B0D948(v38, 0LL);
              }
              if ( !v16 )
                sub_B0D97C(EffectIdArray);
              EffectIdArray = (System_Int32_array *)System_Collections_Generic_HashSet_int___Add(
                                                      v16,
                                                      v36->m_Items[v34 + 1],
                                                      (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
              LODWORD(v33) = v36->max_length;
              ++v34;
            }
            while ( (__int64)v34 < (int)v33 );
          }
        }
        *(_DWORD *)&v45[4 * v44 + 24] = 252;
        v37 = ++v46;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v47,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
        if ( v37 )
        {
          v44 = v37;
          if ( *(_DWORD *)&v45[4 * v37 + 20] == 252 )
          {
            v46 = v37 - 1;
            v44 = v37 - 1;
          }
        }
        else
        {
          v44 = 0;
        }
      }
      v30 = *(_DWORD *)(v29 + 24);
      if ( (int)++v31 >= v30 )
        goto LABEL_55;
    }
LABEL_58:
    v40 = sub_B0D9A8(Master_WarQuestSelectionMaster);
    sub_B0D948(v40, 0LL);
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v16,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Collections_Generic_List_int__o *__fastcall BattleRootComponent__GetLoadDropEffectType(
        BattleRootComponent_o *this,
        BattleEntity_o *battleEntity,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_int__o *v18; // x19
  _BOOL8 v19; // x0
  struct BattleInfoData_o *battleInfo; // x8
  System_Collections_Generic_IEnumerable_T__o *enemyDeck; // x1
  System_Collections_Generic_IEnumerable_T__o *callDeck; // x1
  System_Collections_Generic_IEnumerable_T__o *shiftDeck; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *transformDeck; // x1
  Il2CppClass *klass; // x24
  const char *namespaze; // x8
  int v27; // w25
  __int64 v28; // x9
  __int64 v29; // x26
  int v30; // w9
  __int64 v31; // x27
  __int64 v32; // x20
  int32_t v33; // w1
  _BOOL8 v34; // x0
  struct BattleInfoData_o *v35; // x8
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x20
  int max_length; // w8
  unsigned int v38; // w21
  BattleInfoData_StageCutinInfo_o *v39; // x8
  struct DropInfo_array *dropInfos; // x24
  int v41; // w8
  unsigned int v42; // w25
  DropInfo_o *v43; // x26
  int32_t effectType; // w1
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x0
  BattleEntity_o *v49; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4211D0B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__, battleEntity);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_DeckData__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DeckData__AddRange__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DeckData__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DeckData__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DeckData___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B0D8A4(&System_Collections_Generic_List_DeckData__TypeInfo, v14);
    byte_4211D0B = 1;
  }
  memset(&v51, 0, sizeof(v51));
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_DeckData__TypeInfo,
                                                                                                  battleEntity,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_DeckData___ctor__);
  v18 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v16, v17);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !battleEntity )
    return v18;
  battleInfo = battleEntity->fields.battleInfo;
  if ( !battleInfo )
    return v18;
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.enemyDeck;
  if ( enemyDeck )
  {
    if ( !v15 )
      goto LABEL_59;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
      enemyDeck,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_59;
  }
  callDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.callDeck;
  if ( callDeck )
  {
    if ( !v15 )
      goto LABEL_59;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
      callDeck,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_59;
  }
  shiftDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.shiftDeck;
  if ( shiftDeck )
  {
    if ( !v15 )
      goto LABEL_59;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
      shiftDeck,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_59;
  }
  transformDeck = (EventMissionProgressRequest_Argument_ProgressData_o *)battleInfo->fields.transformDeck;
  v49 = battleEntity;
  if ( transformDeck )
  {
    if ( !v15 )
      goto LABEL_59;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v15,
      transformDeck,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_DeckData__Add__);
  }
  else if ( !v15 )
  {
    goto LABEL_59;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v50,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v15,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
  v51 = v50;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v51,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    if ( !v34 )
      break;
    if ( !v51.fields.current )
      sub_B0D97C(v34);
    klass = v51.fields.current[1].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( (int)namespaze >= 1 )
      {
        v27 = 0;
        do
        {
          if ( v27 >= (unsigned int)namespaze )
          {
            v48 = sub_B0D9A8(v34);
            sub_B0D948(v48, 0LL);
          }
          v28 = *((_QWORD *)&klass->_1.byval_arg.data + v27);
          if ( !v28 )
            sub_B0D97C(v34);
          v29 = *(_QWORD *)(v28 + 88);
          if ( v29 )
          {
            v30 = *(_DWORD *)(v29 + 24);
            if ( v30 >= 1 )
            {
              v31 = 0LL;
              do
              {
                if ( (unsigned int)v31 >= v30 )
                {
                  v46 = sub_B0D9A8(v34);
                  sub_B0D948(v46, 0LL);
                }
                v32 = *(_QWORD *)(v29 + 32 + 8 * v31);
                if ( !v32 )
                  sub_B0D97C(v34);
                v33 = *(_DWORD *)(v32 + 48);
                if ( v33 )
                {
                  if ( !v18 )
                    sub_B0D97C(v34);
                  v34 = System_Collections_Generic_List_int___Contains(
                          v18,
                          v33,
                          (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
                  if ( !v34 )
                    System_Collections_Generic_List_int___Add(
                      v18,
                      *(_DWORD *)(v32 + 48),
                      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
                }
                v30 = *(_DWORD *)(v29 + 24);
                ++v31;
              }
              while ( (int)v31 < v30 );
              namespaze = klass->_1.namespaze;
            }
          }
          ++v27;
        }
        while ( v27 < (int)namespaze );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v51,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
  v35 = v49->fields.battleInfo;
  if ( !v35 )
LABEL_59:
    sub_B0D97C(v19);
  stageCutins = v35->fields.stageCutins;
  if ( stageCutins )
  {
    max_length = stageCutins->max_length;
    if ( max_length >= 1 )
    {
      v38 = 0;
      while ( 1 )
      {
        if ( v38 >= max_length )
          goto LABEL_60;
        v39 = stageCutins->m_Items[v38];
        if ( !v39 )
          goto LABEL_59;
        dropInfos = v39->fields.dropInfos;
        if ( !dropInfos )
          goto LABEL_59;
        v41 = dropInfos->max_length;
        if ( v41 >= 1 )
          break;
LABEL_54:
        max_length = stageCutins->max_length;
        if ( (int)++v38 >= max_length )
          return v18;
      }
      v42 = 0;
      while ( v42 < v41 )
      {
        v43 = dropInfos->m_Items[v42];
        if ( !v43 )
          goto LABEL_59;
        effectType = v43->fields.effectType;
        if ( effectType )
        {
          if ( !v18 )
            goto LABEL_59;
          v19 = System_Collections_Generic_List_int___Contains(
                  v18,
                  effectType,
                  (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( !v19 )
            System_Collections_Generic_List_int___Add(
              v18,
              v43->fields.effectType,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        }
        v41 = dropInfos->max_length;
        if ( (int)++v42 >= v41 )
          goto LABEL_54;
      }
LABEL_60:
      v47 = sub_B0D9A8(v19);
      sub_B0D948(v47, 0LL);
    }
  }
  return v18;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattleRootComponent__LoadAsset(
        BattleRootComponent_o *this,
        QuestPhaseEntity_o *ent,
        int32_t eventId,
        BattleEntity_o *battleEnt,
        const MethodInfo *method)
{
  BattleRootComponent__LoadAsset_d__12_o *v9; // x22
  __int64 v10; // x0

  if ( (byte_4211D02 & 1) == 0 )
  {
    sub_B0D8A4(&BattleRootComponent__LoadAsset_d__12_TypeInfo, ent);
    byte_4211D02 = 1;
  }
  v9 = (BattleRootComponent__LoadAsset_d__12_o *)sub_B0D974(
                                                   BattleRootComponent__LoadAsset_d__12_TypeInfo,
                                                   ent,
                                                   *(_QWORD *)&eventId);
  BattleRootComponent__LoadAsset_d__12___ctor(v9, 0, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.__4__this = this;
  sub_B0D840(&v9->fields.__4__this, this);
  v9->fields.ent = ent;
  sub_B0D840(&v9->fields.ent, ent);
  v9->fields.eventId = eventId;
  v9->fields.battleEnt = battleEnt;
  sub_B0D840(&v9->fields.battleEnt, battleEnt);
  return (System_Collections_IEnumerator_o *)v9;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattleRootComponent__LoadAssetsIndependentToMainOne(
        BattleRootComponent_o *this,
        QuestPhaseEntity_o *ent,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *v9; // x22
  __int64 v10; // x0

  if ( (byte_4211D03 & 1) == 0 )
  {
    sub_B0D8A4(&BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_TypeInfo, ent);
    byte_4211D03 = 1;
  }
  v9 = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)sub_B0D974(
                                                                        BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_TypeInfo,
                                                                        ent,
                                                                        *(_QWORD *)&eventId);
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__13___ctor(v9, 0, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.__4__this = this;
  sub_B0D840(&v9->fields.__4__this, this);
  v9->fields.ent = ent;
  sub_B0D840(&v9->fields.ent, ent);
  v9->fields.eventId = eventId;
  v9->fields.finishCallback = finishCallback;
  sub_B0D840(&v9->fields.finishCallback, finishCallback);
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall BattleRootComponent__LoadBatteBgm(
        BattleRootComponent_o *this,
        System_Collections_Generic_List_string__o *bgmList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleRootComponent___c__DisplayClass16_0_o *v12; // x22
  System_Action_o *v13; // x0
  System_Action_o **p_callback; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  struct System_Collections_Generic_List_string__o *v17; // x8
  int size; // w9
  System_String_o *v19; // x19
  System_Action_o *v20; // x20

  if ( (byte_4211D04 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, bgmList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_B0D8A4(&SoundManager_TypeInfo, v9);
    sub_B0D8A4(&Method_BattleRootComponent___c__DisplayClass16_0__LoadBatteBgm_b__0__, v10);
    sub_B0D8A4(&BattleRootComponent___c__DisplayClass16_0_TypeInfo, v11);
    byte_4211D04 = 1;
  }
  v12 = (BattleRootComponent___c__DisplayClass16_0_o *)sub_B0D974(
                                                         BattleRootComponent___c__DisplayClass16_0_TypeInfo,
                                                         bgmList,
                                                         callback);
  BattleRootComponent___c__DisplayClass16_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_12;
  v12->fields.bgmList = bgmList;
  sub_B0D840(&v12->fields, bgmList);
  v12->fields.__4__this = this;
  sub_B0D840(&v12->fields.__4__this, this);
  v12->fields.callback = callback;
  p_callback = &v12->fields.callback;
  sub_B0D840(&v12->fields.callback, callback);
  v17 = v12->fields.bgmList;
  if ( !v17 )
    goto LABEL_12;
  size = v17->fields._size;
  if ( size <= 0 )
  {
    v13 = *p_callback;
    if ( *p_callback )
    {
      System_Action__Invoke(v13, 0LL);
      return;
    }
LABEL_12:
    sub_B0D97C(v13);
  }
  v19 = v17->fields._items->m_Items[size - 1];
  v20 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v12,
    Method_BattleRootComponent___c__DisplayClass16_0__LoadBatteBgm_b__0__,
    0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__downloadAudioAssetStorage(v19, v20, 1, 0LL);
}


void __fastcall BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf || (BattlePerformance__SetDownloadEventSprite(perf, 0LL), (perf = this->fields.perf) == 0LL) )
    sub_B0D97C(perf);
  BattlePerformance__SetupCommandCardCommonPrefabs(perf, 0LL);
}


void __fastcall BattleRootComponent__ShowAssetNotFoundErrorDialog(
        BattleRootComponent_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleRootComponent__TerminalTransition(
        BattleRootComponent_o *this,
        BattleScriptRootComponent_TalkScriptInfo_o *info,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4211D09 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptManager_TypeInfo, info);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
    byte_4211D09 = 1;
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210848 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v6);
    byte_4210848 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, (Il2CppObject *)info, 1, 0LL);
}


void __fastcall BattleRootComponent__TransitionTerminalOrBattleScript(
        BattleRootComponent_o *this,
        BattleScriptRootComponent_TalkScriptInfo_o *info,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  BattleRootComponent___c__DisplayClass22_0_o *v23; // x20
  BattleScriptRootComponent_TalkScriptInfo_o *isLose; // x0
  Il2CppObject **p_info; // x21
  long double v26; // q0
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  const MethodInfo *v29; // x2
  BattleScriptRootComponent_TalkScriptInfo_o *v30; // x1
  int32_t qId; // w22
  int32_t pId; // w23
  struct BattleData_o *v33; // x8
  int64_t overwriteEndScriptQuestId; // x22
  int32_t questId; // w23
  int32_t ScriptQuestId; // w22
  __int64 v37; // x1
  __int64 v38; // x2
  QuestEntity_o *QuestEntity; // x0
  int32_t questPhase; // w24
  ScriptManager_o *v41; // x23
  int32_t winResult; // w25
  int32_t v43; // w24
  ScriptManager_o *v44; // x23
  int32_t v45; // w25
  ScriptManager_c *v46; // x0
  System_String_o *textPath; // x23
  System_String_o *ScriptAssetName; // x0
  System_String_o *v49; // x22
  int32_t v50; // w19
  int32_t v51; // w21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v52; // x22
  CommonUI_o *Instance; // x19
  System_String_o *v54; // x21
  System_String_o *v55; // x22
  __int64 v56; // x1
  __int64 v57; // x2
  NotificationDialog_ClickDelegate_o *v58; // x23
  QuestPhaseDetailEntity_o *entity; // [xsp+68h] [xbp-48h] BYREF

  if ( (byte_4211D0A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string___ctor__, info);
    sub_B0D8A4(&System_Action_string__TypeInfo, v5);
    sub_B0D8A4(&AssetManager_TypeInfo, v6);
    sub_B0D8A4(&NotificationDialog_ClickDelegate_TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestScriptReleaseMaster___, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&MyRoomStateMaterial_TypeInfo, v12);
    sub_B0D8A4(&ScriptManager_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_B0D8A4(&Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__0__, v18);
    sub_B0D8A4(&Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__1__, v19);
    sub_B0D8A4(&BattleRootComponent___c__DisplayClass22_0_TypeInfo, v20);
    sub_B0D8A4(&StringLiteral_2437/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, v21);
    sub_B0D8A4(&StringLiteral_2438/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, v22);
    byte_4211D0A = 1;
  }
  entity = 0LL;
  v23 = (BattleRootComponent___c__DisplayClass22_0_o *)sub_B0D974(
                                                         BattleRootComponent___c__DisplayClass22_0_TypeInfo,
                                                         info,
                                                         method);
  BattleRootComponent___c__DisplayClass22_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_67;
  v23->fields.__4__this = this;
  sub_B0D840(&v23->fields, this);
  v23->fields.info = info;
  p_info = (Il2CppObject **)&v23->fields.info;
  *(__n128 *)&v26 = sub_B0D840(&v23->fields.info, info);
  data = this->fields.data;
  if ( !data )
    goto LABEL_67;
  battleEvent = data->fields.battleEvent;
  if ( !battleEvent
    || (((__int64 (__fastcall *)(struct BaseBattleEvent_o *, Il2CppMethodPointer, long double))battleEvent->klass->vtable._16_GoNextScene.method)(
          battleEvent,
          battleEvent->klass->vtable._17_GetSaveData.methodPtr,
          v26) & 1) == 0 )
  {
    SkillLvMaster__ResetBaseTime(0LL);
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)*p_info;
    if ( !*p_info )
      goto LABEL_67;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)BattleScriptRootComponent_TalkScriptInfo__isLose(isLose, 0LL);
    v30 = (BattleScriptRootComponent_TalkScriptInfo_o *)*p_info;
    if ( ((unsigned __int8)isLose & 1) != 0 )
    {
      BattleRootComponent__TerminalTransition((BattleRootComponent_o *)isLose, v30, v29);
      return;
    }
    if ( !v30 )
      goto LABEL_67;
    qId = v30->fields.qId;
    v23->fields.questId = qId;
    pId = v30->fields.pId;
    v23->fields.questPhase = pId;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetCachedSelectedBranchQuestId(qId, pId, 0LL);
    v33 = this->fields.data;
    if ( !v33 )
      goto LABEL_67;
    overwriteEndScriptQuestId = v33->fields.overwriteEndScriptQuestId;
    if ( overwriteEndScriptQuestId )
    {
      if ( !*p_info )
        goto LABEL_67;
      HIDWORD((*p_info)[1].klass) = overwriteEndScriptQuestId;
      questId = v23->fields.questId;
      if ( (BYTE3(MyRoomStateMaterial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
      }
      MyRoomStateMaterial__SetPlayedBranchQuestData(questId, overwriteEndScriptQuestId, 0LL);
    }
    else
    {
      LODWORD(overwriteEndScriptQuestId) = (_DWORD)isLose;
    }
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestScriptReleaseMaster___)) == 0LL
      || (ScriptQuestId = QuestScriptReleaseMaster__GetScriptQuestId(
                            (QuestScriptReleaseMaster_o *)isLose,
                            overwriteEndScriptQuestId,
                            v23->fields.questPhase,
                            2,
                            0LL),
          (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___),
          !*p_info)
      || !isLose )
    {
LABEL_67:
      sub_B0D97C(isLose);
    }
    if ( !QuestPhaseDetailMaster__TryGetEntity(
            (QuestPhaseDetailMaster_o *)isLose,
            &entity,
            HIDWORD((*p_info)[1].klass),
            (int32_t)(*p_info)[1].monitor,
            0LL) )
      goto LABEL_54;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)entity;
    if ( !entity )
      goto LABEL_67;
    if ( !QuestPhaseDetailEntity__HasFlag(entity, 0x20000000000LL, 0LL) )
      goto LABEL_54;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose )
      goto LABEL_67;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)isLose,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !*p_info || !isLose )
      goto LABEL_67;
    QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)isLose, HIDWORD((*p_info)[1].klass), 0LL);
    if ( !QuestEntity || !QuestEntity__IsOpenByTime(QuestEntity, 0, 0LL) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = LocalizationManager__Get((System_String_o *)StringLiteral_2438/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, 0LL);
      v55 = LocalizationManager__Get((System_String_o *)StringLiteral_2437/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, 0LL);
      v58 = (NotificationDialog_ClickDelegate_o *)sub_B0D974(NotificationDialog_ClickDelegate_TypeInfo, v56, v57);
      NotificationDialog_ClickDelegate___ctor(
        v58,
        (Il2CppObject *)v23,
        Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__1__,
        0LL);
      if ( !Instance )
        goto LABEL_67;
      CommonUI__OpenNotificationDialog_17019096(
        Instance,
        v54,
        v55,
        v58,
        -1,
        0,
        0,
        0,
        0,
        1,
        0LL,
        0LL,
        0,
        0,
        0LL,
        1,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
LABEL_54:
      if ( ScriptQuestId )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !v23->fields.info )
          goto LABEL_67;
        questPhase = v23->fields.questPhase;
        v41 = (ScriptManager_o *)isLose;
        winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v23->fields.info, 0LL);
        if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScriptManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        }
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd(
                                                                 ScriptQuestId,
                                                                 questPhase,
                                                                 winResult,
                                                                 0LL);
        if ( !v41 )
          goto LABEL_67;
        if ( ScriptManager__IsExistScriptFile(v41, (System_String_o *)isLose, 0LL) )
          goto LABEL_70;
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !v23->fields.info )
          goto LABEL_67;
        v43 = v23->fields.questPhase;
        v44 = (ScriptManager_o *)isLose;
        v45 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v23->fields.info, 0LL);
        if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScriptManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        }
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd2(
                                                                 ScriptQuestId,
                                                                 v43,
                                                                 v45,
                                                                 0LL);
        if ( !v44 )
          goto LABEL_67;
        if ( ScriptManager__IsExistScriptFile(v44, (System_String_o *)isLose, 0LL) )
        {
LABEL_70:
          v46 = ScriptManager_TypeInfo;
          if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ScriptManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
            v46 = ScriptManager_TypeInfo;
          }
          textPath = v46->static_fields->textPath;
          ScriptAssetName = ScriptManager__GetScriptAssetName(ScriptQuestId, 0LL);
          v49 = System_String__Concat_43849904(textPath, ScriptAssetName, 0LL);
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          if ( AssetManager__isExistAssetStorage(v49, 0LL) )
          {
            isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( isLose )
            {
              AvalonSceneManager__transitionSceneRefresh(
                (AvalonSceneManager_o *)isLose,
                this->fields.nextscenetype,
                1,
                *p_info,
                0,
                0LL);
              return;
            }
            goto LABEL_67;
          }
        }
      }
      v50 = v23->fields.questId;
      v51 = v23->fields.questPhase;
      v52 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                   System_Action_string__TypeInfo,
                                                                                   v37,
                                                                                   v38);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v52,
        (Il2CppObject *)v23,
        Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__0__,
        (const MethodInfo_246EA3C *)Method_System_Action_string___ctor__);
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      ScriptManager__LoadBattleEndGameDemo(v50, v51, 1, (System_Action_string__o *)v52, 0, 0LL);
    }
  }
}


void __fastcall BattleRootComponent__beginInitialize(BattleRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
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
  __int64 v19; // x1
  System_String_o *Value; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  void *Master_WarQuestSelectionMaster; // x0
  BattleEntity_o *SingleEntity; // x20
  BattleFBXComponent_c *v26; // x8
  BattlePerformance_c *v27; // x0
  QuestPhaseEntity_o *QuestPhaseEntity; // x21
  BattleData_o *data; // x22
  __int64 v30; // x1
  int64_t createdAt; // x22
  System_Int32_array *v32; // x22
  const MethodInfo *v33; // x4
  System_Collections_IEnumerator_o *Asset; // x0
  UnityEngine_Object_o *debugButton; // x20
  ManagerConfig_c *v36; // x0

  if ( (byte_4211D01 & 1) == 0 )
  {
    sub_B0D8A4(&AssetStorageLoadWrapper_TypeInfo, method);
    sub_B0D8A4(&AtlasManager_TypeInfo, v3);
    sub_B0D8A4(&BattleActionData_TypeInfo, v4);
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, v5);
    sub_B0D8A4(&BattleFBXComponent_TypeInfo, v6);
    sub_B0D8A4(&BattlePerformance_TypeInfo, v7);
    sub_B0D8A4(&BuffList_TypeInfo, v8);
    sub_B0D8A4(&CatAndMouseGame_TypeInfo, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_BattleBgMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_BattleMaster___, v11);
    sub_B0D8A4(&DataManager_TypeInfo, v12);
    sub_B0D8A4(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v13);
    sub_B0D8A4(&System_GC_TypeInfo, v14);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&OptionManager_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v18);
    sub_B0D8A4(&StringLiteral_15421/*"WINGNAME"*/, v19);
    byte_4211D01 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15421/*"WINGNAME"*/, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  CatAndMouseGame__SixHomeBuilding(Value, 0LL);
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_43098652(0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
  {
    assetStorageLoadWrapper = (AssetStorageLoadWrapper_o *)sub_B0D974(AssetStorageLoadWrapper_TypeInfo, v21, v22);
    AssetStorageLoadWrapper___ctor(assetStorageLoadWrapper, 0LL);
  }
  this->fields.assetStorageLoadWrapper = assetStorageLoadWrapper;
  sub_B0D840(&this->fields.assetStorageLoadWrapper, assetStorageLoadWrapper);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  SingleEntity = (BattleEntity_o *)DataMasterBase_object__object__long___GetSingleEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_WarQuestSelectionMaster,
                                     (const MethodInfo_2669EC0 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v26 = BattleFBXComponent_TypeInfo;
  if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v26 = BattleFBXComponent_TypeInfo;
  }
  v26->static_fields->EnableEvent = 1;
  v27 = BattlePerformance_TypeInfo;
  if ( (BYTE3(BattlePerformance_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformance_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
    v27 = BattlePerformance_TypeInfo;
  }
  v27->static_fields->CameraFlip = 0;
  Master_WarQuestSelectionMaster = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    Master_WarQuestSelectionMaster = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(*((_QWORD *)Master_WarQuestSelectionMaster + 23) + 48LL) = 0;
  if ( !SingleEntity )
    goto LABEL_70;
  QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(SingleEntity, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__ReleaseFaceAtlas(0LL);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseBanner(0LL);
  AtlasManager__ReleaseCharaGraphOptionAtlas(0LL);
  AtlasManager__ReleaseEventUI(0LL);
  Master_WarQuestSelectionMaster = this->fields.data;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  BattleData__Initialize((BattleData_o *)Master_WarQuestSelectionMaster, 0LL);
  data = this->fields.data;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  BuffList__SetBattleData(data, 0LL);
  Master_WarQuestSelectionMaster = this->fields.logic;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  BattleLogic__Initialize((BattleLogic_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = this->fields.data;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  if ( !BattleData__IsWarBoard((BattleData_o *)Master_WarQuestSelectionMaster, 0LL) )
  {
    createdAt = SingleEntity->fields.createdAt;
    if ( !byte_4210EE7 )
    {
      sub_B0D8A4(&SkillLvMaster_TypeInfo, v30);
      byte_4210EE7 = 1;
    }
    SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = createdAt;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  v32 = (System_Int32_array *)*((_QWORD *)Master_WarQuestSelectionMaster + 9);
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  BattleEffectUtility__AddNotPreloadEffectId(v32, 0LL);
  Asset = BattleRootComponent__LoadAsset(this, QuestPhaseEntity, SingleEntity->fields.eventId, SingleEntity, v33);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, Asset, 0LL);
  Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  *((_DWORD *)Master_WarQuestSelectionMaster + 36) = 3;
  Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  if ( *((_BYTE *)Master_WarQuestSelectionMaster + 140) )
  {
    Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_70;
    *((_DWORD *)Master_WarQuestSelectionMaster + 36) = 4;
  }
  debugButton = (UnityEngine_Object_o *)this->fields.debugButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(debugButton, 0LL, 0LL) )
  {
    Master_WarQuestSelectionMaster = this->fields.debugButton;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    v36 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v36 = ManagerConfig_TypeInfo;
    }
    if ( v36->static_fields->UseDebugCommand )
    {
      Master_WarQuestSelectionMaster = this->fields.debugButton;
      if ( Master_WarQuestSelectionMaster )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
        return;
      }
LABEL_70:
      sub_B0D97C(Master_WarQuestSelectionMaster);
    }
  }
}


void __fastcall BattleRootComponent__beginResume(
        BattleRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  CommonUI_o *v6; // x20
  struct BattleRootComponent_callBackBeginResume_o **p_callbackBeginResumeFunc; // x19
  BattleRootComponent_callBackBeginResume_o *v8; // x20
  struct BattleRootComponent_callBackBeginResume_o *callbackBeginResumeFunc; // t1

  if ( (byte_4211D00 & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, data);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4211D00 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v6 )
    sub_B0D97C(Instance);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  callbackBeginResumeFunc = this->fields.callbackBeginResumeFunc;
  p_callbackBeginResumeFunc = &this->fields.callbackBeginResumeFunc;
  v8 = callbackBeginResumeFunc;
  if ( callbackBeginResumeFunc )
  {
    *p_callbackBeginResumeFunc = 0LL;
    sub_B0D840(p_callbackBeginResumeFunc, 0LL);
    BattleRootComponent_callBackBeginResume__Invoke(v8, 0LL);
  }
}


void __fastcall BattleRootComponent__beginStartUp(
        BattleRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x9
  WebViewManager_o *Instance; // x21
  __int64 Item; // x0
  WebViewManager_o *v15; // x21
  struct BattleLogic_o *logic; // x20
  struct BattleLogic_o *v17; // x8
  struct BattleLogic_LOGICTYPE_array *logiclist; // x8
  struct BattleLogic_o *v19; // x8
  struct BattleLogic_LOGICTYPE_array *v20; // x8
  AndroidBackKeyManager_c *v21; // x0
  __int64 v22; // x0

  if ( (byte_4211D05 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, data);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v6);
    sub_B0D8A4(&BattleLogic_LOGICTYPE___TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v8);
    sub_B0D8A4(&StringLiteral_20284/*"limitCount"*/, v9);
    sub_B0D8A4(&StringLiteral_10992/*"QUEST_START"*/, v10);
    sub_B0D8A4(&StringLiteral_22051/*"servantId"*/, v11);
    byte_4211D05 = 1;
  }
  if ( data )
  {
    v12 = *(&System_Collections_Generic_Dictionary_string__int__TypeInfo->_2.bitflags2 + 1);
    if ( *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v12
      && (System_Collections_Generic_Dictionary_string__int__c *)data->klass->_2.typeHierarchy[v12 - 1] == System_Collections_Generic_Dictionary_string__int__TypeInfo )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_string__int___get_Item(
               (System_Collections_Generic_Dictionary_string__int__o *)data,
               (System_String_o *)StringLiteral_22051/*"servantId"*/,
               (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !Instance )
        goto LABEL_23;
      LODWORD(Instance->fields.baseWindow) = Item;
      v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_string__int___get_Item(
               (System_Collections_Generic_Dictionary_string__int__o *)data,
               (System_String_o *)StringLiteral_20284/*"limitCount"*/,
               (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !v15 )
        goto LABEL_23;
      HIDWORD(v15->fields.baseWindow) = Item;
      Item = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item )
        goto LABEL_23;
      *(_BYTE *)(Item + 44) = 1;
      Item = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item )
        goto LABEL_23;
      *(_BYTE *)(Item + 45) = 1;
      logic = this->fields.logic;
      Item = sub_B0D8BC(BattleLogic_LOGICTYPE___TypeInfo, 2LL);
      if ( !logic )
        goto LABEL_23;
      logic->fields.logiclist = (struct BattleLogic_LOGICTYPE_array *)Item;
      sub_B0D840(&logic->fields.logiclist, Item);
      v17 = this->fields.logic;
      if ( !v17 )
        goto LABEL_23;
      logiclist = v17->fields.logiclist;
      if ( !logiclist )
        goto LABEL_23;
      if ( logiclist->max_length )
      {
        logiclist->m_Items[1] = 18;
        v19 = this->fields.logic;
        if ( !v19 )
          goto LABEL_23;
        v20 = v19->fields.logiclist;
        if ( !v20 )
          goto LABEL_23;
        if ( v20->max_length > 1 )
        {
          v20->m_Items[2] = 21;
          goto LABEL_18;
        }
      }
    }
    else
    {
      Item = sub_B0DC70(data);
    }
    v22 = sub_B0D9A8(Item);
    sub_B0D948(v22, 0LL);
  }
LABEL_18:
  SceneRootComponent__beginStartUp_16655688((SceneRootComponent_o *)this, 0LL);
  v21 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v21 = AndroidBackKeyManager_TypeInfo;
  }
  v21->static_fields->ToastEnabled = 1;
  Item = (__int64)this->fields.myFSM;
  if ( !Item )
LABEL_23:
    sub_B0D97C(Item);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Item, (System_String_o *)StringLiteral_10992/*"QUEST_START"*/, 0LL);
}


void __fastcall BattleRootComponent__endQuest(BattleRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattlePerformance_o *perf; // x0
  __int64 v8; // x20
  __int64 v9; // x20
  __int64 v10; // x20
  __int64 v11; // x20
  const MethodInfo *v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x2
  System_Collections_IEnumerator_o *OutGameAsset; // x1

  if ( (byte_4211D06 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AtlasManager_TypeInfo, v3);
    sub_B0D8A4(&Method_BattleRootComponent_goNextScene__, v4);
    sub_B0D8A4(&OptionManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__, v6);
    byte_4211D06 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_37;
  BattlePerformance__SetTimeScale(perf, 1.0, 0LL);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_37;
  BattlePerformance__procEndQuest(perf, 0LL);
  perf = (BattlePerformance_o *)this->fields.assetStorageLoadWrapper;
  if ( !perf )
    goto LABEL_37;
  AssetStorageLoadWrapper__ReleaseAll((AssetStorageLoadWrapper_o *)perf, 0LL);
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
  v9 = **(_QWORD **)(v8 + 192);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AA65A4(v9);
  perf = **(BattlePerformance_o ***)(v9 + 184);
  if ( !perf )
    goto LABEL_37;
  AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)perf, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__ReleaseFaceBattleAtlas(0LL);
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
  v11 = **(_QWORD **)(v10 + 192);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AA65A4(v11);
  perf = **(BattlePerformance_o ***)(v11 + 184);
  if ( !perf
    || (AtlasManager__UnloadWarBoardAtlas((AtlasManager_o *)perf, 0LL), (perf = this->fields.perf) == 0LL)
    || (BattlePerformance__ReleaseEventInfoPointGauge(perf, 0LL),
        (perf = (BattlePerformance_o *)this->fields.data) == 0LL) )
  {
LABEL_37:
    sub_B0D97C(perf);
  }
  if ( !BattleData__IsWarBoard((BattleData_o *)perf, 0LL) )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__ReleaseEventAtlas(0LL);
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_BattleRootComponent_goNextScene__, 0LL);
    OutGameAsset = BattleRootComponent__loadOutGameAsset(this, v14, v15);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, OutGameAsset, 0LL);
  }
  else
  {
    BattleRootComponent__goNextScene(this, v12);
  }
}


void __fastcall BattleRootComponent__goNextScene(BattleRootComponent_o *this, const MethodInfo *method)
{
  BattleRootComponent_o *v2; // x19
  __int64 v3; // x1
  struct BattleData_o *data; // x9
  struct BattleEntity_o *battle_ent; // x8
  struct QuestEntity_o *quest_ent; // x20
  int32_t questPhase; // w21
  struct BattleData_o *v8; // x8
  int32_t id; // w23
  int32_t win_lose; // w24
  int32_t v11; // w22
  int32_t WinResult; // w25
  __int64 v13; // x1
  __int64 v14; // x2
  BattleScriptRootComponent_TalkScriptInfo_o *v15; // x20
  const MethodInfo *v16; // x2

  v2 = this;
  if ( (byte_4211D08 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    this = (BattleRootComponent_o *)sub_B0D8A4(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v3);
    byte_4211D08 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_10;
  battle_ent = data->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_10;
  quest_ent = data->fields.quest_ent;
  if ( !quest_ent )
    goto LABEL_10;
  questPhase = battle_ent->fields.questPhase;
  this = (BattleRootComponent_o *)QuestEntity__GetWarId(data->fields.quest_ent, 0LL);
  v8 = v2->fields.data;
  if ( !v8 )
    goto LABEL_10;
  id = quest_ent->fields.id;
  win_lose = v8->fields.win_lose;
  v11 = (int)this;
  WinResult = BattleData__getWinResult(v2->fields.data, 0LL);
  v15 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_B0D974(
                                                        BattleScriptRootComponent_TalkScriptInfo_TypeInfo,
                                                        v13,
                                                        v14);
  BattleScriptRootComponent_TalkScriptInfo___ctor_19677412(v15, v11, id, questPhase, 4, win_lose, WinResult, 0, 0LL);
  this = (BattleRootComponent_o *)v2->fields.data;
  if ( !this
    || (BattleData__release((BattleData_o *)this, 0LL),
        (this = (BattleRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_10:
    sub_B0D97C(this);
  }
  CommonUI__SetMaskFadeInitColor((CommonUI_o *)this, 1, 0LL);
  BattleRootComponent__TransitionTerminalOrBattleScript(v2, v15, v16);
}


System_Collections_IEnumerator_o *__fastcall BattleRootComponent__loadOutGameAsset(
        BattleRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BattleRootComponent__loadOutGameAsset_d__19_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_4211D07 & 1) == 0 )
  {
    sub_B0D8A4(&BattleRootComponent__loadOutGameAsset_d__19_TypeInfo, callback);
    byte_4211D07 = 1;
  }
  v5 = (BattleRootComponent__loadOutGameAsset_d__19_o *)sub_B0D974(
                                                          BattleRootComponent__loadOutGameAsset_d__19_TypeInfo,
                                                          callback,
                                                          method);
  BattleRootComponent__loadOutGameAsset_d__19___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  v5->fields.__4__this = this;
  sub_B0D840(&v5->fields.__4__this, this);
  v5->fields.callback = callback;
  sub_B0D840(&v5->fields.callback, callback);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleRootComponent__setCallbackBeginResume(
        BattleRootComponent_o *this,
        BattleRootComponent_callBackBeginResume_o *func,
        const MethodInfo *method)
{
  this->fields.callbackBeginResumeFunc = func;
  sub_B0D840(&this->fields.callbackBeginResumeFunc, func);
}


void __fastcall BattleRootComponent__LoadAsset_d__12___ctor(
        BattleRootComponent__LoadAsset_d__12_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleRootComponent__LoadAsset_d__12__MoveNext(
        BattleRootComponent__LoadAsset_d__12_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleRootComponent__LoadAsset_d__12_o *v3; // x27
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  struct BattleRootComponent_o *_4__this; // x26
  Il2CppObject *v25; // x22
  BattleRootComponent__LoadAsset_d__12_o **p__8__1; // x25
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_WaitForEndOfFrame_o *v29; // x20
  Il2CppObject **p__2__current; // x27
  bool result; // w0
  Il2CppObject **p__8__2; // x22
  AssetData_o *klass; // x1
  System_Collections_IEnumerator_o *v34; // x0
  Il2CppObject **v35; // x27
  int v36; // w8
  QuestPhaseEntity_o *ent; // x23
  int32_t eventId; // w22
  Il2CppObject *_8__1; // x19
  System_Action_o *v40; // x24
  System_Collections_IEnumerator_o *AssetsIndependentToMainOne; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  BattleDataDefine_c *v45; // x0
  BattleRootComponent__LoadAsset_d__12_o *v46; // x19
  System_String_o *ASSET_BATTLE_COMMON; // x23
  AssetLoader_LoadEndDataHandler_o *v48; // x24
  BattleRootComponent__LoadAsset_d__12_o *v49; // x22
  __int64 v50; // x1
  __int64 v51; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x23
  struct BattleEntity_o *battleEnt; // x8
  System_Int32_array *BattleFieldMotionIds; // x0
  struct System_Int32_array **p_fieldMotionIds_5__2; // x22
  struct BattleRootComponent___c__DisplayClass12_0_o *v56; // x8
  struct System_Int32_array *v57; // x27
  __int64 v58; // x8
  unsigned __int64 v59; // x28
  Il2CppObject *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  BattleRootComponent__LoadAsset_d__12_o **v63; // x19
  BattleRootComponent__LoadAsset_d__12_o *v64; // x25
  AssetStorageLoadWrapper_o *v65; // x23
  AssetLoader_LoadEndDataHandler_o *v66; // x24
  System_String_o *v67; // x22
  AssetManager_o *v68; // x22
  BattleRootComponent__LoadAsset_d__12_o *v69; // x8
  struct System_Int32_array *fieldMotionIds_5__2; // x9
  struct BattleRootComponent___c__DisplayClass12_0_o **v71; // x22
  struct BattleEntity_o *v72; // x8
  __int64 v73; // x1
  __int64 v74; // x2
  Il2CppObject *v75; // x23
  System_String_o *v76; // x0
  struct BattleRootComponent___c__DisplayClass12_1_o *_8__2; // x8
  System_String_o *v78; // x23
  BattleRootComponent__LoadAsset_d__12_o **v79; // x20
  __int64 v80; // x1
  __int64 v81; // x2
  struct BattleRootComponent_o *v82; // x19
  AssetStorageLoadWrapper_o *v83; // x24
  Il2CppObject *v84; // x26
  AssetLoader_LoadEndDataHandler_o *v85; // x25
  struct BattleRootComponent___c__DisplayClass12_0_o *v86; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v88; // x8
  AssumedBattleAssetLoadManager_o *AssumedBattleAssetLoadManager_k__BackingField; // x21
  struct BattlePerformance_o *v90; // x8
  __int64 v91; // x0
  BattleRootComponent__LoadAsset_d__12_o *v92; // [xsp+0h] [xbp-60h]
  int32_t v93; // [xsp+8h] [xbp-58h] BYREF
  int v94; // [xsp+Ch] [xbp-54h] BYREF

  v3 = this;
  if ( (byte_4211ED5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___, v4);
    sub_B0D8A4(&BattleDataDefine_TypeInfo, v5);
    sub_B0D8A4(&System_GC_TypeInfo, v6);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AssetData___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_AssetData__TypeInfo, v9);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v10);
    sub_B0D8A4(&OptionManager_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v13);
    sub_B0D8A4(&Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__0__, v14);
    sub_B0D8A4(&Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__1__, v15);
    sub_B0D8A4(&Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__2__, v16);
    sub_B0D8A4(&BattleRootComponent___c__DisplayClass12_0_TypeInfo, v17);
    sub_B0D8A4(&Method_BattleRootComponent___c__DisplayClass12_1__LoadAsset_b__3__, v18);
    sub_B0D8A4(&BattleRootComponent___c__DisplayClass12_1_TypeInfo, v19);
    sub_B0D8A4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v20);
    sub_B0D8A4(&StringLiteral_2779/*"Battle/UniqueCamera/"*/, v21);
    sub_B0D8A4(&StringLiteral_2771/*"Battle/Field/{0}"*/, v22);
    this = (BattleRootComponent__LoadAsset_d__12_o *)sub_B0D8A4(&StringLiteral_14978/*"UniqueCameraPrefab"*/, v23);
    byte_4211ED5 = 1;
  }
  v94 = 0;
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      v25 = (Il2CppObject *)sub_B0D974(BattleRootComponent___c__DisplayClass12_0_TypeInfo, method, v2);
      System_Object___ctor(v25, 0LL);
      p__8__1 = (BattleRootComponent__LoadAsset_d__12_o **)&v3->fields.__8__1;
      v3->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass12_0_o *)v25;
      sub_B0D840(&v3->fields.__8__1, v25);
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      this = (BattleRootComponent__LoadAsset_d__12_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_23;
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_43098652(0LL);
      v29 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v27, v28);
      UnityEngine_WaitForEndOfFrame___ctor(v29, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v29;
      p__2__current = &v3->fields.__2__current;
      sub_B0D840(p__2__current, v29);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    case 1:
      v3->fields.__1__state = -1;
      this = (BattleRootComponent__LoadAsset_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_102;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__LoadAsset_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_102;
      v34 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v34;
      v35 = &v3->fields.__2__current;
      sub_B0D840(v35, v34);
      v36 = 2;
      goto LABEL_95;
    case 2:
      p__8__1 = (BattleRootComponent__LoadAsset_d__12_o **)&v3->fields.__8__1;
      v3->fields.__1__state = -1;
LABEL_23:
      if ( !*p__8__1 )
        goto LABEL_102;
      LOBYTE((*p__8__1)->fields.__1__state) = 1;
      ent = v3->fields.ent;
      eventId = v3->fields.eventId;
      _8__1 = (Il2CppObject *)v3->fields.__8__1;
      v40 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
      System_Action___ctor(v40, _8__1, Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__0__, 0LL);
      if ( !_4__this )
        goto LABEL_102;
      AssetsIndependentToMainOne = BattleRootComponent__LoadAssetsIndependentToMainOne(_4__this, ent, eventId, v40, 0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_34930128(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        AssetsIndependentToMainOne,
        0LL);
      this = *p__8__1;
      if ( !*p__8__1 )
        goto LABEL_102;
      this->fields.__2__current = 0LL;
      sub_B0D840(&this->fields.__2__current, 0LL);
      assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
      v45 = BattleDataDefine_TypeInfo;
      if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v45 = BattleDataDefine_TypeInfo;
      }
      v46 = *p__8__1;
      ASSET_BATTLE_COMMON = v45->static_fields->ASSET_BATTLE_COMMON;
      v48 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v42, v43);
      AssetLoader_LoadEndDataHandler___ctor(
        v48,
        (Il2CppObject *)v46,
        Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__1__,
        0LL);
      if ( !assetStorageLoadWrapper )
        goto LABEL_102;
      AssetStorageLoadWrapper__LoadAssetStorage(assetStorageLoadWrapper, ASSET_BATTLE_COMMON, v48, 1, 0LL);
      v49 = *p__8__1;
      v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_AssetData__TypeInfo, v50, v51);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v52,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_AssetData___ctor__);
      if ( !v49 )
        goto LABEL_102;
      v49->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass12_0_o *)v52;
      sub_B0D840(&v49->fields.__8__1, v52);
      battleEnt = v3->fields.battleEnt;
      if ( !battleEnt )
        goto LABEL_102;
      this = (BattleRootComponent__LoadAsset_d__12_o *)battleEnt->fields.battleInfo;
      if ( !this )
        goto LABEL_102;
      BattleFieldMotionIds = BattleInfoData__GetBattleFieldMotionIds((BattleInfoData_o *)this, v3->fields.ent, 0LL);
      p_fieldMotionIds_5__2 = &v3->fields._fieldMotionIds_5__2;
      v3->fields._fieldMotionIds_5__2 = BattleFieldMotionIds;
      sub_B0D840(&v3->fields._fieldMotionIds_5__2, BattleFieldMotionIds);
      v56 = v3->fields.__8__1;
      if ( !v56 )
        goto LABEL_102;
      v56->fields.loadCompCnt = 0;
      v92 = v3;
      v57 = *p_fieldMotionIds_5__2;
      if ( !*p_fieldMotionIds_5__2 )
        goto LABEL_102;
      v58 = *(_QWORD *)&v57->max_length;
      if ( (int)v58 < 1 )
        goto LABEL_46;
      v59 = 0LL;
      break;
    case 3:
      p__8__1 = (BattleRootComponent__LoadAsset_d__12_o **)&v3->fields.__8__1;
      v3->fields.__1__state = -1;
      goto LABEL_52;
    case 4:
      p__8__2 = (Il2CppObject **)&v3->fields.__8__2;
      v3->fields.__1__state = -1;
      goto LABEL_13;
    case 5:
      v71 = &v3->fields.__8__1;
      v3->fields.__1__state = -1;
      goto LABEL_87;
    case 6:
      v3->fields.__1__state = -1;
      goto LABEL_90;
    default:
      return 0;
  }
  do
  {
    if ( v59 >= (unsigned int)v58 )
    {
      v91 = sub_B0D9A8(this);
      sub_B0D948(v91, 0LL);
    }
    v93 = v57->m_Items[v59 + 1];
    v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93);
    this = (BattleRootComponent__LoadAsset_d__12_o *)System_String__Format(
                                                       (System_String_o *)StringLiteral_2771/*"Battle/Field/{0}"*/,
                                                       v60,
                                                       0LL);
    v63 = p__8__1;
    v64 = *p__8__1;
    if ( !v64 )
      goto LABEL_102;
    v65 = _4__this->fields.assetStorageLoadWrapper;
    v66 = (AssetLoader_LoadEndDataHandler_o *)v64->fields.ent;
    v67 = (System_String_o *)this;
    if ( !v66 )
    {
      v66 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v61, v62);
      AssetLoader_LoadEndDataHandler___ctor(
        v66,
        (Il2CppObject *)v64,
        Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__2__,
        0LL);
      v64->fields.ent = (struct QuestPhaseEntity_o *)v66;
      sub_B0D840(&v64->fields.ent, v66);
    }
    if ( !v65 )
      goto LABEL_102;
    this = (BattleRootComponent__LoadAsset_d__12_o *)AssetStorageLoadWrapper__LoadAssetStorage(v65, v67, v66, 1, 0LL);
    p__8__1 = v63;
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !*v63 )
        goto LABEL_102;
      ++LODWORD((*v63)->fields.__4__this);
    }
    LODWORD(v58) = v57->max_length;
    ++v59;
  }
  while ( (__int64)v59 < (int)v58 );
LABEL_46:
  this = (BattleRootComponent__LoadAsset_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v68 = (AssetManager_o *)this;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  }
  v3 = v92;
  if ( !v68 )
    goto LABEL_102;
  AssetManager__UpdateLoadParallelMax(v68, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
LABEL_52:
  v69 = *p__8__1;
  if ( !*p__8__1 )
    goto LABEL_102;
  if ( !v69->fields.__2__current )
  {
LABEL_56:
    v3->fields.__2__current = 0LL;
    v35 = &v3->fields.__2__current;
    sub_B0D840(v35, 0LL);
    v36 = 3;
LABEL_95:
    *((_DWORD *)v35 - 2) = v36;
    return 1;
  }
  fieldMotionIds_5__2 = v3->fields._fieldMotionIds_5__2;
  if ( !fieldMotionIds_5__2 )
    goto LABEL_102;
  if ( SLODWORD(v69->fields.__4__this) < (signed int)fieldMotionIds_5__2->max_length )
    goto LABEL_56;
  v72 = v3->fields.battleEnt;
  if ( !v72 )
    goto LABEL_102;
  this = (BattleRootComponent__LoadAsset_d__12_o *)v72->fields.battleInfo;
  if ( !this )
    goto LABEL_102;
  this = (BattleRootComponent__LoadAsset_d__12_o *)BattleInfoData__GetUniqueCameraId(
                                                     (BattleInfoData_o *)this,
                                                     v3->fields.ent,
                                                     0LL);
  v94 = (int)this;
  if ( (_DWORD)this )
  {
    v75 = (Il2CppObject *)sub_B0D974(BattleRootComponent___c__DisplayClass12_1_TypeInfo, v73, v74);
    System_Object___ctor(v75, 0LL);
    v3->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass12_1_o *)v75;
    p__8__2 = (Il2CppObject **)&v3->fields.__8__2;
    sub_B0D840(&v3->fields.__8__2, v75);
    v76 = System_Int32__ToString((int32_t)&v94, 0LL);
    this = (BattleRootComponent__LoadAsset_d__12_o *)System_String__Concat_43849904(
                                                       (System_String_o *)StringLiteral_2779/*"Battle/UniqueCamera/"*/,
                                                       v76,
                                                       0LL);
    _8__2 = v3->fields.__8__2;
    if ( !_8__2 )
      goto LABEL_102;
    _8__2->fields.uniqueCameraData = 0LL;
    v78 = (System_String_o *)this;
    v79 = p__8__1;
    sub_B0D840(&_8__2->fields, 0LL);
    if ( !_4__this )
      goto LABEL_102;
    v82 = _4__this;
    v83 = _4__this->fields.assetStorageLoadWrapper;
    v84 = *p__8__2;
    v85 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v80, v81);
    AssetLoader_LoadEndDataHandler___ctor(
      v85,
      v84,
      Method_BattleRootComponent___c__DisplayClass12_1__LoadAsset_b__3__,
      0LL);
    if ( !v83 )
      goto LABEL_102;
    this = (BattleRootComponent__LoadAsset_d__12_o *)AssetStorageLoadWrapper__LoadAssetStorage(v83, v78, v85, 1, 0LL);
    v3->fields._loadSucceeded_5__3 = (unsigned __int8)this & 1;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      _4__this = v82;
    }
    else
    {
      if ( !*v79 )
        goto LABEL_102;
      this = (BattleRootComponent__LoadAsset_d__12_o *)v82->fields.perf;
      _4__this = v82;
      if ( !this )
        goto LABEL_102;
      BattlePerformance__loadStorageObjectCameraCommon(
        (BattlePerformance_o *)this,
        (AssetData_o *)(*v79)->fields.__2__current,
        0LL);
    }
LABEL_13:
    if ( !*p__8__2 )
      goto LABEL_102;
    klass = (AssetData_o *)(*p__8__2)[1].klass;
    if ( !klass )
    {
      v3->fields.__2__current = 0LL;
      v35 = &v3->fields.__2__current;
      sub_B0D840(v35, 0LL);
      v36 = 4;
      goto LABEL_95;
    }
    if ( v3->fields._loadSucceeded_5__3 )
    {
      if ( !_4__this )
        goto LABEL_102;
      this = (BattleRootComponent__LoadAsset_d__12_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_102;
      BattlePerformance__loadStorageObjectCamera(
        (BattlePerformance_o *)this,
        klass,
        (System_String_o *)StringLiteral_14978/*"UniqueCameraPrefab"*/,
        0LL);
      *p__8__2 = 0LL;
      sub_B0D840(p__8__2, 0LL);
    }
    else
    {
      *p__8__2 = 0LL;
      sub_B0D840(p__8__2, 0LL);
      if ( !_4__this )
        goto LABEL_102;
    }
  }
  else
  {
    if ( !_4__this )
      goto LABEL_102;
    if ( !*p__8__1 )
      goto LABEL_102;
    this = (BattleRootComponent__LoadAsset_d__12_o *)_4__this->fields.perf;
    if ( !this )
      goto LABEL_102;
    BattlePerformance__loadStorageObjectCameraCommon(
      (BattlePerformance_o *)this,
      (AssetData_o *)(*p__8__1)->fields.__2__current,
      0LL);
  }
  this = (BattleRootComponent__LoadAsset_d__12_o *)_4__this->fields.perf;
  v71 = &v3->fields.__8__1;
  v86 = v3->fields.__8__1;
  if ( !v86 )
    goto LABEL_102;
  if ( !this )
    goto LABEL_102;
  BattlePerformance__loadStorageObjectCommonMotion((BattlePerformance_o *)this, v86->fields.commonData, 0LL);
  if ( !*v71 )
    goto LABEL_102;
  this = (BattleRootComponent__LoadAsset_d__12_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_102;
  BattlePerformance__SetEffectControlObjectFromCommonAsset((BattlePerformance_o *)this, (*v71)->fields.commonData, 0LL);
  if ( !*v71 )
    goto LABEL_102;
  this = (BattleRootComponent__LoadAsset_d__12_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_102;
  BattlePerformance__loadFieldMotion(
    (BattlePerformance_o *)this,
    (*v71)->fields.commonData,
    (*v71)->fields.motionDataList,
    0LL);
  this = (BattleRootComponent__LoadAsset_d__12_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_102;
  BattlePerformance__Initialize((BattlePerformance_o *)this, 0LL);
  this = (BattleRootComponent__LoadAsset_d__12_o *)_4__this->fields.data;
  if ( !this )
    goto LABEL_102;
  BattleData__loadFsmGameObject((BattleData_o *)this, 0LL);
  perf = _4__this->fields.perf;
  if ( !perf )
    goto LABEL_102;
  this = (BattleRootComponent__LoadAsset_d__12_o *)perf->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_102;
  AssumedBattleAssetLoadManager__Release_object_(
    (AssumedBattleAssetLoadManager_o *)this,
    (const MethodInfo_170125C *)Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
  v88 = _4__this->fields.perf;
  if ( !v88 )
    goto LABEL_102;
  AssumedBattleAssetLoadManager_k__BackingField = v88->fields._AssumedBattleAssetLoadManager_k__BackingField;
  this = (BattleRootComponent__LoadAsset_d__12_o *)AssumedBattleAssetSearcherBeforeBattle__Create(0LL);
  if ( !AssumedBattleAssetLoadManager_k__BackingField )
    goto LABEL_102;
  AssumedBattleAssetLoadManager__Preload(
    AssumedBattleAssetLoadManager_k__BackingField,
    (AssumedBattleAssetSearcherBase_o *)this,
    0LL);
LABEL_87:
  if ( !*v71 )
    goto LABEL_102;
  if ( (*v71)->fields.isAssetsLoading )
  {
    v3->fields.__2__current = 0LL;
    v35 = &v3->fields.__2__current;
    sub_B0D840(v35, 0LL);
    v36 = 5;
    goto LABEL_95;
  }
LABEL_90:
  if ( !_4__this )
    goto LABEL_102;
  v90 = _4__this->fields.perf;
  if ( !v90 )
    goto LABEL_102;
  this = (BattleRootComponent__LoadAsset_d__12_o *)v90->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_102;
  if ( AssumedBattleAssetLoadManager__IsPreloading((AssumedBattleAssetLoadManager_o *)this, 0LL) )
  {
    v3->fields.__2__current = 0LL;
    v35 = &v3->fields.__2__current;
    sub_B0D840(v35, 0LL);
    v36 = 6;
    goto LABEL_95;
  }
  BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(_4__this, 0LL);
  this = (BattleRootComponent__LoadAsset_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_102:
    sub_B0D97C(this);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)this, (SceneRootComponent_o *)_4__this, 0LL);
  return 0;
}


Il2CppObject *__fastcall BattleRootComponent__LoadAsset_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleRootComponent__LoadAsset_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleRootComponent__LoadAsset_d__12__System_Collections_IEnumerator_Reset(
        BattleRootComponent__LoadAsset_d__12_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleRootComponent__LoadAsset_d__12_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall BattleRootComponent__LoadAsset_d__12__System_Collections_IEnumerator_get_Current(
        BattleRootComponent__LoadAsset_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleRootComponent__LoadAsset_d__12__System_IDisposable_Dispose(
        BattleRootComponent__LoadAsset_d__12_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleRootComponent__LoadAssetsIndependentToMainOne_d__13___ctor(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleRootComponent__LoadAssetsIndependentToMainOne_d__13__MoveNext(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *v3; // x19
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  int32_t _1__state; // w8
  BattleRootComponent_o *_4__this; // x26
  bool result; // w0
  Il2CppObject *v56; // x22
  Il2CppObject **v57; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v58; // x8
  int32_t BattleEffectId; // w22
  System_String_o *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  AssetStorageLoadWrapper_o *v63; // x23
  Il2CppObject *v64; // x25
  System_String_o *v65; // x22
  AssetLoader_LoadEndDataHandler_o *v66; // x24
  ConstantMaster_o *Master_WarQuestSelectionMaster; // x22
  __int64 v68; // x1
  __int64 v69; // x2
  System_Collections_Generic_IEnumerable_T__o *v70; // x23
  System_Collections_Generic_List_int__o *v71; // x21
  int32_t Value; // w0
  System_Collections_Generic_IEnumerable_T__o *ClassBoardCommandSpellEffectId; // x0
  System_Int32_array *v74; // x21
  AssetManager_o *v75; // x20
  Il2CppObject **v76; // x19
  Il2CppObject *SingleEntity; // x21
  __int64 v78; // x1
  __int64 v79; // x2
  System_Collections_Generic_HashSet_int__o *v80; // x23
  int32_t v81; // w22
  Il2CppObject **p__8__1; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v83; // x22
  _BOOL8 v84; // x0
  _BOOL8 v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  Il2CppObject *v88; // x26
  System_String_o *age; // x23
  System_Action_o *monitor; // x24
  __int64 v91; // x1
  __int64 v92; // x2
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  Il2CppObject *v94; // x24
  System_Action_o *v95; // x23
  Il2CppObject *v96; // x1
  System_String_o *v97; // x0
  __int64 v98; // x1
  __int64 v99; // x2
  Il2CppObject *_8__1; // x25
  AssetStorageLoadWrapper_o *v101; // x22
  AssetLoader_LoadEndDataHandler_o *klass; // x23
  System_String_o *v103; // x21
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  int v105; // w20
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x21
  __int64 v109; // x21
  Il2CppObject *v110; // x23
  AtlasManager_o *v111; // x21
  System_Action_o *v112; // x22
  __int64 v113; // x1
  __int64 v114; // x2
  Il2CppObject *v115; // x22
  System_Action_o *v116; // x21
  Il2CppObject *v117; // x22
  BattlePerformance_o *perf; // x20
  System_Action_o *v119; // x21
  Il2CppObject *v120; // x20
  __int64 v121; // x1
  __int64 v122; // x2
  System_Action_o *v123; // x21
  __int64 v124; // x20
  __int64 v125; // x20
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x20
  __int64 v129; // x20
  Il2CppObject *v130; // x22
  AtlasManager_o *v131; // x20
  System_Action_o *v132; // x21
  AssetManager_o *v133; // x20
  Il2CppObject **p__2__current; // x19
  BattleRootComponent_o *v135; // [xsp+8h] [xbp-C8h]
  struct BattleRootComponent___c__DisplayClass13_0_o **v136; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_HashSet_Enumerator_T__o v137; // [xsp+18h] [xbp-B8h] BYREF
  int v138[2]; // [xsp+30h] [xbp-A0h]
  int v139; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_HashSet_Enumerator_T__o v140; // [xsp+40h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-78h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v142; // [xsp+60h] [xbp-70h] BYREF
  int32_t v143; // [xsp+7Ch] [xbp-54h] BYREF

  v3 = this;
  if ( (byte_4211ED6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AtlasManager_TypeInfo, v4);
    sub_B0D8A4(&BattleDataDefine_TypeInfo, v5);
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_BattleMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_BgmMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMaster_BuffMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_ConstantMaster___, v10);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v12);
    sub_B0D8A4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v22);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v23);
    sub_B0D8A4(&int_TypeInfo, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v30);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v31);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v32);
    sub_B0D8A4(&OptionManager_TypeInfo, v33);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v34);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__, v35);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v36);
    sub_B0D8A4(&SoundManager_TypeInfo, v37);
    sub_B0D8A4(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__0__, v38);
    sub_B0D8A4(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__1__, v39);
    sub_B0D8A4(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__2__, v40);
    sub_B0D8A4(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__3__, v41);
    sub_B0D8A4(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__4__, v42);
    sub_B0D8A4(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__5__, v43);
    sub_B0D8A4(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__6__, v44);
    sub_B0D8A4(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__7__, v45);
    sub_B0D8A4(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__8__, v46);
    sub_B0D8A4(&BattleRootComponent___c__DisplayClass13_0_TypeInfo, v47);
    sub_B0D8A4(&StringLiteral_2451/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/, v48);
    sub_B0D8A4(&StringLiteral_2446/*"BATTLE_EFFECT_ID_3003001"*/, v49);
    sub_B0D8A4(&StringLiteral_2769/*"Battle/DropEffect/{0}"*/, v50);
    sub_B0D8A4(&StringLiteral_2770/*"Battle/Effect/"*/, v51);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)sub_B0D8A4(&StringLiteral_2763/*"Battle"*/, v52);
    byte_4211ED6 = 1;
  }
  v143 = 0;
  memset(&v142, 0, sizeof(v142));
  entity = 0LL;
  memset(&v140, 0, sizeof(v140));
  v139 = 0;
  _1__state = v3->fields.__1__state;
  if ( _1__state == 2 )
  {
    p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
    v3->fields.__1__state = -1;
LABEL_120:
    if ( !*p__8__1 )
      goto LABEL_48;
    if ( SLODWORD((*p__8__1)[1].klass) >= v3->fields._loadCntMax_5__2 )
    {
      ActionExtensions__Call(v3->fields.finishCallback, 0LL);
      return 0;
    }
    else
    {
      v3->fields.__2__current = 0LL;
      p__2__current = &v3->fields.__2__current;
      sub_B0D840(p__2__current, 0LL);
      *((_DWORD *)p__2__current - 2) = 2;
      return 1;
    }
  }
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !this )
      goto LABEL_48;
    SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     (const MethodInfo_2669EC0 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    v80 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                         System_Collections_Generic_HashSet_int__TypeInfo,
                                                         v78,
                                                         v79);
    System_Collections_Generic_HashSet_int____ctor(
      v80,
      (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
    if ( !SingleEntity )
      goto LABEL_48;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)SingleEntity[1].klass;
    if ( !this )
      goto LABEL_48;
    v81 = 0;
    while ( v81 < BattleInfoData__getLastWave((BattleInfoData_o *)this, 0LL) + 1 )
    {
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v81,
                                                                              0LL);
      if ( this )
      {
        if ( !v80 )
          goto LABEL_48;
        System_Collections_Generic_HashSet_int___Add(
          v80,
          (int32_t)this->fields.__8__1,
          (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v81,
                                                                              0LL);
      if ( this )
      {
        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)StageEntity__GetBossIdAndChangeBgmId(
                                                                                (StageEntity_o *)this,
                                                                                0LL);
        if ( this )
        {
          if ( SLODWORD(this->fields.__2__current) >= 2 )
          {
            if ( !v80 )
              goto LABEL_48;
            System_Collections_Generic_HashSet_int___Add(
              v80,
              HIDWORD(this->fields.ent),
              (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)SingleEntity[1].klass;
          ++v81;
          if ( this )
            continue;
        }
      }
      goto LABEL_48;
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v135 = _4__this;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !v80 )
      goto LABEL_48;
    v83 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v137,
      v80,
      (const MethodInfo_2C75B04 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
    v142 = v137;
    while ( 1 )
    {
      v84 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &v142,
              (const MethodInfo_210FD28 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v84 )
        break;
      if ( !v83 )
        sub_B0D97C(v84);
      v85 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v83,
              &entity,
              (int32_t)v142.fields._current,
              (const MethodInfo_2669C30 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( v85 )
      {
        ++v3->fields._loadCntMax_5__2;
        if ( !entity )
          sub_B0D97C(v85);
        v88 = *p__8__1;
        if ( !*p__8__1 )
          sub_B0D97C(v85);
        age = entity->fields.age;
        monitor = (System_Action_o *)v88[1].monitor;
        if ( !monitor )
        {
          monitor = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v86, v87);
          System_Action___ctor(
            monitor,
            v88,
            Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__7__,
            0LL);
          v88[1].monitor = monitor;
          sub_B0D840(&v88[1].monitor, monitor);
        }
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__downloadAudioAssetStorage(age, monitor, 1, 0LL);
      }
    }
    v138[0] = 575;
    v139 = 1;
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v142,
      (const MethodInfo_210FD24 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    v139 = 0;
    ++v3->fields._loadCntMax_5__2;
    if ( !v135 )
      goto LABEL_48;
    assetStorageLoadWrapper = v135->fields.assetStorageLoadWrapper;
    v94 = *p__8__1;
    v95 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v91, v92);
    System_Action___ctor(
      v95,
      v94,
      Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__1__,
      0LL);
    if ( !assetStorageLoadWrapper )
      goto LABEL_48;
    AssetStorageLoadWrapper__LoadAudioAssetStorage(
      assetStorageLoadWrapper,
      (System_String_o *)StringLiteral_2763/*"Battle"*/,
      v95,
      1,
      0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)BattleRootComponent__GetLoadDropEffectType(
                                                                            v135,
                                                                            (BattleEntity_o *)SingleEntity,
                                                                            0LL);
    if ( !this )
      goto LABEL_48;
    if ( SLODWORD(this->fields.__2__current) >= 1 )
    {
      v136 = &v3->fields.__8__1;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v137,
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v140 = v137;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                (System_Collections_Generic_List_Enumerator_int__o *)&v140,
                (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        LODWORD(v137.fields._set) = v140.fields._current;
        v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v137);
        v97 = System_String__Format((System_String_o *)StringLiteral_2769/*"Battle/DropEffect/{0}"*/, v96, 0LL);
        _8__1 = (Il2CppObject *)v3->fields.__8__1;
        ++v3->fields._loadCntMax_5__2;
        if ( !_8__1 )
          sub_B0D97C(v97);
        v101 = v135->fields.assetStorageLoadWrapper;
        klass = (AssetLoader_LoadEndDataHandler_o *)_8__1[2].klass;
        v103 = v97;
        if ( !klass )
        {
          klass = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v98, v99);
          AssetLoader_LoadEndDataHandler___ctor(
            klass,
            _8__1,
            Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__8__,
            0LL);
          _8__1[2].klass = (Il2CppClass *)klass;
          sub_B0D840(&_8__1[2], klass);
        }
        if ( !v101 )
          sub_B0D97C(v97);
        Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(v101, v103, klass, 1, 0LL);
        if ( !Wrapper__LoadAssetStorage )
        {
          if ( !*v136 )
            sub_B0D97C(Wrapper__LoadAssetStorage);
          ++(*v136)->fields.loadCnt;
        }
      }
      v138[0] = 830;
      v105 = ++v139;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v140,
        (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
      if ( v105 && v138[v105 - 1] == 830 )
        v139 = v105 - 1;
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)v135->fields.data;
    if ( !this )
      goto LABEL_48;
    if ( BattleData__IsWarBoard((BattleData_o *)this, 0LL) )
    {
      ++v3->fields._loadCntMax_5__2;
      v108 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v108 + 306) & 1) == 0 )
        sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
      v109 = **(_QWORD **)(v108 + 192);
      if ( (*(_BYTE *)(v109 + 306) & 1) == 0 )
        sub_AA65A4(v109);
      v110 = *p__8__1;
      v111 = **(AtlasManager_o ***)(v109 + 184);
      v112 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v106, v107);
      System_Action___ctor(
        v112,
        v110,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__2__,
        0LL);
      if ( !v111 )
        goto LABEL_48;
      AtlasManager__LoadWarBoardAtlas(v111, v112, 0LL);
    }
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( OptionManager__isSavedMemoryMode(0LL) )
    {
      v115 = (Il2CppObject *)v3->fields.__8__1;
      ++v3->fields._loadCntMax_5__2;
      v116 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v113, v114);
      System_Action___ctor(
        v116,
        v115,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__3__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadFaceBattleAtlas(v116, 0LL);
    }
    v117 = (Il2CppObject *)v3->fields.__8__1;
    ++v3->fields._loadCntMax_5__2;
    perf = v135->fields.perf;
    v119 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v113, v114);
    System_Action___ctor(
      v119,
      v117,
      Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__4__,
      0LL);
    if ( !perf )
      goto LABEL_48;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)BattlePerformance__LoadEventInfoPointGauge(
                                                                            perf,
                                                                            v119,
                                                                            v3->fields.eventId,
                                                                            0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !*p__8__1 )
        goto LABEL_48;
      ++LODWORD((*p__8__1)[1].klass);
    }
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__ReleaseEventAtlas(0LL);
    v120 = (Il2CppObject *)v3->fields.__8__1;
    ++v3->fields._loadCntMax_5__2;
    v123 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v121, v122);
    System_Action___ctor(
      v123,
      v120,
      Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__5__,
      0LL);
    AtlasManager__LoadEventAtlas(v123, 1, 0LL);
    v124 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v124 + 306) & 1) == 0 )
      sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
    v125 = **(_QWORD **)(v124 + 192);
    if ( (*(_BYTE *)(v125 + 306) & 1) == 0 )
      sub_AA65A4(v125);
    this = **(BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o ***)(v125 + 184);
    if ( !this )
      goto LABEL_48;
    AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)this, 0LL);
    ++v3->fields._loadCntMax_5__2;
    v128 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v128 + 306) & 1) == 0 )
      sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
    v129 = **(_QWORD **)(v128 + 192);
    if ( (*(_BYTE *)(v129 + 306) & 1) == 0 )
      sub_AA65A4(v129);
    v130 = *p__8__1;
    v131 = **(AtlasManager_o ***)(v129 + 184);
    v132 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v126, v127);
    System_Action___ctor(
      v132,
      v130,
      Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__6__,
      0LL);
    if ( !v131 )
      goto LABEL_48;
    AtlasManager__LoadBuffIconAtlas(v131, v132, 0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v133 = (AssetManager_o *)this;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    }
    if ( !v133 )
LABEL_48:
      sub_B0D97C(this);
    AssetManager__UpdateLoadParallelMax(v133, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
    goto LABEL_120;
  }
  result = 0;
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    v56 = (Il2CppObject *)sub_B0D974(BattleRootComponent___c__DisplayClass13_0_TypeInfo, method, v2);
    System_Object___ctor(v56, 0LL);
    v57 = (Il2CppObject **)&v3->fields.__8__1;
    v3->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass13_0_o *)v56;
    sub_B0D840(&v3->fields.__8__1, v56);
    v58 = v3->fields.__8__1;
    if ( v58 )
    {
      v58->fields.loadCnt = 0;
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)v3->fields.ent;
      v3->fields._loadCntMax_5__2 = 0;
      if ( this )
      {
        BattleEffectId = QuestPhaseEntity__getBattleEffectId((QuestPhaseEntity_o *)this, 0, 0LL);
        if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        }
        v143 = BattleEffectUtility__setBattleEffectId(BattleEffectId, 0LL);
        v60 = System_Int32__ToString((int32_t)&v143, 0LL);
        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)System_String__Concat_43849904(
                                                                                (System_String_o *)StringLiteral_2770/*"Battle/Effect/"*/,
                                                                                v60,
                                                                                0LL);
        ++v3->fields._loadCntMax_5__2;
        if ( _4__this )
        {
          v63 = _4__this->fields.assetStorageLoadWrapper;
          v64 = *v57;
          v65 = (System_String_o *)this;
          v66 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v61, v62);
          AssetLoader_LoadEndDataHandler___ctor(
            v66,
            v64,
            Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__0__,
            0LL);
          if ( v63 )
          {
            this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                                                    v63,
                                                                                    v65,
                                                                                    v66,
                                                                                    1,
                                                                                    0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !*v57 )
                goto LABEL_48;
              ++LODWORD((*v57)[1].klass);
            }
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (ConstantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ConstantMaster___);
            this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BuffMaster___);
            if ( this )
            {
              v70 = *(System_Collections_Generic_IEnumerable_T__o **)&this->fields._loadCntMax_5__2;
              v71 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                                System_Collections_Generic_List_int__TypeInfo,
                                                                v68,
                                                                v69);
              System_Collections_Generic_List_int____ctor_50000796(
                v71,
                v70,
                (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
              if ( Master_WarQuestSelectionMaster )
              {
                this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)ConstantMaster__GetValue(
                                                                                        Master_WarQuestSelectionMaster,
                                                                                        (System_String_o *)StringLiteral_2451/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/,
                                                                                        0LL);
                if ( v71 )
                {
                  System_Collections_Generic_List_int___Add(
                    v71,
                    (int32_t)this,
                    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
                  Value = ConstantMaster__GetValue(
                            Master_WarQuestSelectionMaster,
                            (System_String_o *)StringLiteral_2446/*"BATTLE_EFFECT_ID_3003001"*/,
                            0LL);
                  System_Collections_Generic_List_int___Add(
                    v71,
                    Value,
                    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
                  ClassBoardCommandSpellEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleRootComponent__GetClassBoardCommandSpellEffectId(
                                                                                                    _4__this,
                                                                                                    0LL);
                  System_Collections_Generic_List_int___AddRange(
                    v71,
                    ClassBoardCommandSpellEffectId,
                    (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
                  v74 = System_Collections_Generic_List_int___ToArray(
                          v71,
                          (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
                  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                  }
                  this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)ServantAssetLoadManager__preloadBattleCommonEffect(
                                                                                          v74,
                                                                                          0LL);
                  if ( _4__this->fields.data )
                  {
                    BattleData__addLoadedCommonEffectPath(_4__this->fields.data, (System_String_array *)this, 0LL);
                    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
                    v75 = (AssetManager_o *)this;
                    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                    }
                    if ( v75 )
                    {
                      AssetManager__UpdateLoadParallelMax(
                        v75,
                        BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                        0LL);
                      v3->fields.__2__current = 0LL;
                      v76 = &v3->fields.__2__current;
                      sub_B0D840(v76, 0LL);
                      result = 1;
                      *((_DWORD *)v76 - 2) = 1;
                      return result;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_48;
  }
  return result;
}


Il2CppObject *__fastcall BattleRootComponent__LoadAssetsIndependentToMainOne_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleRootComponent__LoadAssetsIndependentToMainOne_d__13__System_Collections_IEnumerator_Reset(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall BattleRootComponent__LoadAssetsIndependentToMainOne_d__13__System_Collections_IEnumerator_get_Current(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleRootComponent__LoadAssetsIndependentToMainOne_d__13__System_IDisposable_Dispose(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleRootComponent___c__DisplayClass12_0___ctor(
        BattleRootComponent___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass12_0___LoadAsset_b__0(
        BattleRootComponent___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  this->fields.isAssetsLoading = 0;
}


void __fastcall BattleRootComponent___c__DisplayClass12_0___LoadAsset_b__1(
        BattleRootComponent___c__DisplayClass12_0_o *this,
        AssetData_o *common,
        const MethodInfo *method)
{
  this->fields.commonData = common;
  sub_B0D840(&this->fields.commonData, common);
}


void __fastcall BattleRootComponent___c__DisplayClass12_0___LoadAsset_b__2(
        BattleRootComponent___c__DisplayClass12_0_o *this,
        AssetData_o *motionData,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_AssetData__o *motionDataList; // x0

  if ( (byte_4211ED0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_AssetData__Add__, motionData);
    byte_4211ED0 = 1;
  }
  motionDataList = this->fields.motionDataList;
  if ( !motionDataList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)motionDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)motionData,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_AssetData__Add__);
  ++this->fields.loadCompCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass12_1___ctor(
        BattleRootComponent___c__DisplayClass12_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass12_1___LoadAsset_b__3(
        BattleRootComponent___c__DisplayClass12_1_o *this,
        AssetData_o *cameraData,
        const MethodInfo *method)
{
  this->fields.uniqueCameraData = cameraData;
  sub_B0D840(&this->fields, cameraData);
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___ctor(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___LoadAssetsIndependentToMainOne_b__0(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        AssetData_o *effectData,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___LoadAssetsIndependentToMainOne_b__1(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___LoadAssetsIndependentToMainOne_b__2(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___LoadAssetsIndependentToMainOne_b__3(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___LoadAssetsIndependentToMainOne_b__4(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___LoadAssetsIndependentToMainOne_b__5(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___LoadAssetsIndependentToMainOne_b__6(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___LoadAssetsIndependentToMainOne_b__7(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___LoadAssetsIndependentToMainOne_b__8(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass16_0___ctor(
        BattleRootComponent___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass16_0___LoadBatteBgm_b__0(
        BattleRootComponent___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *bgmList; // x0

  if ( (byte_4211ED1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__RemoveAt__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v3);
    byte_4211ED1 = 1;
  }
  bgmList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.bgmList;
  if ( !bgmList
    || (System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          bgmList,
          bgmList->fields._size - 1,
          (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_string__RemoveAt__),
        (bgmList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.__4__this) == 0LL) )
  {
    sub_B0D97C(bgmList);
  }
  BattleRootComponent__LoadBatteBgm((BattleRootComponent_o *)bgmList, this->fields.bgmList, this->fields.callback, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass19_0___ctor(
        BattleRootComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass19_0___loadOutGameAsset_b__0(
        BattleRootComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  this->fields.isCharaGraphOptionAtlasLoaded = 1;
}


void __fastcall BattleRootComponent___c__DisplayClass19_0___loadOutGameAsset_b__1(
        BattleRootComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  this->fields.isBannerAtlasLoaded = 1;
}


void __fastcall BattleRootComponent___c__DisplayClass19_0___loadOutGameAsset_b__2(
        BattleRootComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  this->fields.isEventUIAtlasLoaded = 1;
}


void __fastcall BattleRootComponent___c__DisplayClass19_1___ctor(
        BattleRootComponent___c__DisplayClass19_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass19_1___loadOutGameAsset_b__3(
        BattleRootComponent___c__DisplayClass19_1_o *this,
        const MethodInfo *method)
{
  this->fields.isEventAtlasLoaded = 1;
}


void __fastcall BattleRootComponent___c__DisplayClass19_2___ctor(
        BattleRootComponent___c__DisplayClass19_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass19_2___loadOutGameAsset_b__4(
        BattleRootComponent___c__DisplayClass19_2_o *this,
        const MethodInfo *method)
{
  this->fields.isFaceAtlasLoaded = 1;
}


void __fastcall BattleRootComponent___c__DisplayClass22_0___ctor(
        BattleRootComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass22_0___TransitionTerminalOrBattleScript_b__0(
        BattleRootComponent___c__DisplayClass22_0_o *this,
        System_String_o *demo1,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Action_string__o *_9__2; // x22
  int32_t questId; // w20
  int32_t questPhase; // w21
  AvalonSceneManager_o *Instance; // x0
  struct BattleRootComponent_o *_4__this; // x8

  if ( (byte_4211ED3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string___ctor__, demo1);
    sub_B0D8A4(&System_Action_string__TypeInfo, v5);
    sub_B0D8A4(&ScriptManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B0D8A4(&Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__2__, v8);
    byte_4211ED3 = 1;
  }
  if ( System_String__IsNullOrEmpty(demo1, 0LL) )
  {
    _9__2 = this->fields.__9__2;
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    if ( !_9__2 )
    {
      _9__2 = (struct System_Action_string__o *)sub_B0D974(System_Action_string__TypeInfo, v9, v10);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__2,
        (Il2CppObject *)this,
        Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__2__,
        (const MethodInfo_246EA3C *)Method_System_Action_string___ctor__);
      this->fields.__9__2 = _9__2;
      sub_B0D840(&this->fields.__9__2, _9__2);
    }
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__LoadBattleEndGameDemo(questId, questPhase, 0, _9__2, 0, 0LL);
  }
  else
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    _4__this = this->fields.__4__this;
    if ( !_4__this || !Instance )
      sub_B0D97C(Instance);
    AvalonSceneManager__transitionSceneRefresh(
      Instance,
      _4__this->fields.nextscenetype,
      1,
      (Il2CppObject *)this->fields.info,
      0,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleRootComponent___c__DisplayClass22_0___TransitionTerminalOrBattleScript_b__1(
        BattleRootComponent___c__DisplayClass22_0_o *this,
        bool isDeside,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4211ED2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDeside);
    byte_4211ED2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  BattleRootComponent__TerminalTransition((BattleRootComponent_o *)Instance, this->fields.info, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass22_0___TransitionTerminalOrBattleScript_b__2(
        BattleRootComponent___c__DisplayClass22_0_o *this,
        System_String_o *demo2,
        const MethodInfo *method)
{
  BattleRootComponent_o *_4__this; // x0
  struct BattleRootComponent_o *v6; // x8

  if ( (byte_4211ED4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, demo2);
    byte_4211ED4 = 1;
  }
  if ( System_String__IsNullOrEmpty(demo2, 0LL) )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      BattleRootComponent__TerminalTransition(_4__this, this->fields.info, 0LL);
      return;
    }
LABEL_9:
    sub_B0D97C(_4__this);
  }
  _4__this = (BattleRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  v6 = this->fields.__4__this;
  if ( !v6 || !_4__this )
    goto LABEL_9;
  AvalonSceneManager__transitionSceneRefresh(
    (AvalonSceneManager_o *)_4__this,
    v6->fields.nextscenetype,
    1,
    (Il2CppObject *)this->fields.info,
    0,
    0LL);
}


void __fastcall BattleRootComponent__loadOutGameAsset_d__19___ctor(
        BattleRootComponent__loadOutGameAsset_d__19_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleRootComponent__loadOutGameAsset_d__19__MoveNext(
        BattleRootComponent__loadOutGameAsset_d__19_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleRootComponent__loadOutGameAsset_d__19_o *v3; // x19
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
  struct BattleRootComponent_o *_4__this; // x21
  Il2CppObject *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_WaitForEndOfFrame_o *v22; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  Il2CppObject **p__8__2; // x20
  System_Collections_IEnumerator_o *v26; // x0
  Il2CppObject **v27; // x19
  int v28; // w8
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *v31; // x21
  Il2CppObject **p__8__1; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  Il2CppObject *v35; // x22
  System_Action_o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  Il2CppObject *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  Il2CppObject *v42; // x22
  System_Action_o *v43; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  UnityEngine_WaitForEndOfFrame_o *v46; // x20
  Il2CppObject **p__8__3; // x22
  struct BattleRootComponent___c__DisplayClass19_0_o *_8__3; // x8
  Il2CppObject *v49; // x21
  System_Action_o *v50; // x20
  __int64 v51; // x1
  __int64 v52; // x2
  UnityEngine_WaitForEndOfFrame_o *v53; // x20
  Il2CppObject *v54; // x21
  System_Action_o *v55; // x20
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  UnityEngine_WaitForEndOfFrame_o *v59; // x20
  Il2CppObject *v60; // x21
  System_Action_o *v61; // x20
  __int64 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  UnityEngine_WaitForEndOfFrame_o *v65; // x20
  __int64 v66; // x0
  __int64 v67; // x0
  __int64 v68; // x0
  int v69; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_4211ED7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AtlasManager_TypeInfo, v4);
    sub_B0D8A4(&System_GC_TypeInfo, v5);
    sub_B0D8A4(&int_TypeInfo, v6);
    sub_B0D8A4(&OptionManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v8);
    sub_B0D8A4(&Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__0__, v9);
    sub_B0D8A4(&Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__1__, v10);
    sub_B0D8A4(&Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__2__, v11);
    sub_B0D8A4(&BattleRootComponent___c__DisplayClass19_0_TypeInfo, v12);
    sub_B0D8A4(&Method_BattleRootComponent___c__DisplayClass19_1__loadOutGameAsset_b__3__, v13);
    sub_B0D8A4(&BattleRootComponent___c__DisplayClass19_1_TypeInfo, v14);
    sub_B0D8A4(&Method_BattleRootComponent___c__DisplayClass19_2__loadOutGameAsset_b__4__, v15);
    sub_B0D8A4(&BattleRootComponent___c__DisplayClass19_2_TypeInfo, v16);
    this = (BattleRootComponent__loadOutGameAsset_d__19_o *)sub_B0D8A4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v17);
    byte_4211ED7 = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      v19 = (Il2CppObject *)sub_B0D974(BattleRootComponent___c__DisplayClass19_0_TypeInfo, method, v2);
      System_Object___ctor(v19, 0LL);
      v3->fields.__8__3 = (struct BattleRootComponent___c__DisplayClass19_0_o *)v19;
      sub_B0D840(&v3->fields.__8__3, v19);
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      this = (BattleRootComponent__loadOutGameAsset_d__19_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_18;
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_43098652(0LL);
      v22 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v20, v21);
      UnityEngine_WaitForEndOfFrame___ctor(v22, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v22;
      p__2__current = &v3->fields.__2__current;
      sub_B0D840(p__2__current, v22);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    case 1:
      v3->fields.__1__state = -1;
      this = (BattleRootComponent__loadOutGameAsset_d__19_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_106;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__loadOutGameAsset_d__19_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_106;
      v26 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v26;
      v27 = &v3->fields.__2__current;
      sub_B0D840(v27, v26);
      v28 = 2;
      goto LABEL_104;
    case 2:
      v3->fields.__1__state = -1;
LABEL_18:
      if ( !_4__this )
        goto LABEL_106;
      this = (BattleRootComponent__loadOutGameAsset_d__19_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_106;
      if ( BattlePerformance__isActiveEventInfoGauge((BattlePerformance_o *)this, 0LL) )
        goto LABEL_30;
      v31 = (Il2CppObject *)sub_B0D974(BattleRootComponent___c__DisplayClass19_1_TypeInfo, v29, v30);
      System_Object___ctor(v31, 0LL);
      v3->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass19_1_o *)v31;
      p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
      sub_B0D840(&v3->fields.__8__1, v31);
      if ( !v3->fields.__8__1 )
        goto LABEL_106;
      v3->fields.__8__1->fields.isEventAtlasLoaded = 0;
      v35 = *p__8__1;
      v36 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v33, v34);
      System_Action___ctor(v36, v35, Method_BattleRootComponent___c__DisplayClass19_1__loadOutGameAsset_b__3__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadEventAtlas(v36, 1, 0LL);
LABEL_27:
      if ( !*p__8__1 )
        goto LABEL_106;
      if ( !LOBYTE((*p__8__1)[1].klass) )
      {
        v69 = 0;
        v68 = j_il2cpp_value_box_0(int_TypeInfo, &v69);
        v3->fields.__2__current = (Il2CppObject *)v68;
        v27 = &v3->fields.__2__current;
        sub_B0D840(v27, v68);
        v28 = 3;
        goto LABEL_104;
      }
      *p__8__1 = 0LL;
      sub_B0D840(p__8__1, 0LL);
LABEL_30:
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      this = (BattleRootComponent__loadOutGameAsset_d__19_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v39 = (Il2CppObject *)sub_B0D974(BattleRootComponent___c__DisplayClass19_2_TypeInfo, v37, v38);
        System_Object___ctor(v39, 0LL);
        v3->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass19_2_o *)v39;
        p__8__2 = (Il2CppObject **)&v3->fields.__8__2;
        sub_B0D840(&v3->fields.__8__2, v39);
        if ( v3->fields.__8__2 )
        {
          v3->fields.__8__2->fields.isFaceAtlasLoaded = 0;
          v42 = *p__8__2;
          v43 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v40, v41);
          System_Action___ctor(v43, v42, Method_BattleRootComponent___c__DisplayClass19_2__loadOutGameAsset_b__4__, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__LoadFaceAtlas(v43, 1, 0LL);
LABEL_39:
          if ( *p__8__2 )
          {
            if ( LOBYTE((*p__8__2)[1].klass) )
            {
              if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_GC_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              }
              System_GC__Collect_43098652(0LL);
              v46 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v44, v45);
              UnityEngine_WaitForEndOfFrame___ctor(v46, 0LL);
              v3->fields.__2__current = (Il2CppObject *)v46;
              v27 = &v3->fields.__2__current;
              sub_B0D840(v27, v46);
              v28 = 5;
            }
            else
            {
              v69 = 0;
              v67 = j_il2cpp_value_box_0(int_TypeInfo, &v69);
              v3->fields.__2__current = (Il2CppObject *)v67;
              v27 = &v3->fields.__2__current;
              sub_B0D840(v27, v67);
              v28 = 4;
            }
            goto LABEL_104;
          }
        }
LABEL_106:
        sub_B0D97C(this);
      }
LABEL_48:
      p__8__3 = (Il2CppObject **)&v3->fields.__8__3;
      _8__3 = v3->fields.__8__3;
      if ( !_8__3 )
        goto LABEL_106;
      _8__3->fields.isCharaGraphOptionAtlasLoaded = 0;
      v49 = *p__8__3;
      v50 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v37, v38);
      System_Action___ctor(v50, v49, Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__0__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadCharaGraphOptionAtlas(v50, 1, 0LL);
LABEL_54:
      if ( !*p__8__3 )
        goto LABEL_106;
      if ( !LOBYTE((*p__8__3)[1].klass) )
      {
        v69 = 0;
        v56 = j_il2cpp_value_box_0(int_TypeInfo, &v69);
        v3->fields.__2__current = (Il2CppObject *)v56;
        v27 = &v3->fields.__2__current;
        sub_B0D840(v27, v56);
        v28 = 6;
LABEL_104:
        *((_DWORD *)v27 - 2) = v28;
        return 1;
      }
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      this = (BattleRootComponent__loadOutGameAsset_d__19_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_43098652(0LL);
        v53 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v51, v52);
        UnityEngine_WaitForEndOfFrame___ctor(v53, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v53;
        v27 = &v3->fields.__2__current;
        sub_B0D840(v27, v53);
        v28 = 7;
        goto LABEL_104;
      }
LABEL_64:
      if ( !*p__8__3 )
        goto LABEL_106;
      BYTE1((*p__8__3)[1].klass) = 0;
      v54 = *p__8__3;
      v55 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
      System_Action___ctor(v55, v54, Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__1__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadBanner(v55, 1, 0LL);
LABEL_71:
      if ( !*p__8__3 )
        goto LABEL_106;
      if ( !BYTE1((*p__8__3)[1].klass) )
      {
        v69 = 0;
        v62 = j_il2cpp_value_box_0(int_TypeInfo, &v69);
        v3->fields.__2__current = (Il2CppObject *)v62;
        v27 = &v3->fields.__2__current;
        sub_B0D840(v27, v62);
        v28 = 8;
        goto LABEL_104;
      }
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      this = (BattleRootComponent__loadOutGameAsset_d__19_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_43098652(0LL);
        v59 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v57, v58);
        UnityEngine_WaitForEndOfFrame___ctor(v59, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v59;
        v27 = &v3->fields.__2__current;
        sub_B0D840(v27, v59);
        v28 = 9;
        goto LABEL_104;
      }
LABEL_81:
      if ( !*p__8__3 )
        goto LABEL_106;
      BYTE2((*p__8__3)[1].klass) = 0;
      v60 = *p__8__3;
      v61 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
      System_Action___ctor(v61, v60, Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__2__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadEventUI(v61, 1, 0LL);
LABEL_88:
      if ( !*p__8__3 )
        goto LABEL_106;
      if ( !BYTE2((*p__8__3)[1].klass) )
      {
        v69 = 0;
        v66 = j_il2cpp_value_box_0(int_TypeInfo, &v69);
        v3->fields.__2__current = (Il2CppObject *)v66;
        v27 = &v3->fields.__2__current;
        sub_B0D840(v27, v66);
        v28 = 10;
        goto LABEL_104;
      }
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__isSavedMemoryMode(0LL) )
      {
        if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_43098652(0LL);
        v65 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v63, v64);
        UnityEngine_WaitForEndOfFrame___ctor(v65, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v65;
        v27 = &v3->fields.__2__current;
        sub_B0D840(v27, v65);
        v28 = 11;
        goto LABEL_104;
      }
LABEL_98:
      this = (BattleRootComponent__loadOutGameAsset_d__19_o *)v3->fields.callback;
      if ( !this )
        goto LABEL_106;
      System_Action__Invoke((System_Action_o *)this, 0LL);
      return 0;
    case 3:
      p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
      v3->fields.__1__state = -1;
      goto LABEL_27;
    case 4:
      p__8__2 = (Il2CppObject **)&v3->fields.__8__2;
      v3->fields.__1__state = -1;
      goto LABEL_39;
    case 5:
      v3->fields.__8__2 = 0LL;
      v3->fields.__1__state = -1;
      sub_B0D840(&v3->fields.__8__2, 0LL);
      goto LABEL_48;
    case 6:
      p__8__3 = (Il2CppObject **)&v3->fields.__8__3;
      v3->fields.__1__state = -1;
      goto LABEL_54;
    case 7:
      p__8__3 = (Il2CppObject **)&v3->fields.__8__3;
      v3->fields.__1__state = -1;
      goto LABEL_64;
    case 8:
      p__8__3 = (Il2CppObject **)&v3->fields.__8__3;
      v3->fields.__1__state = -1;
      goto LABEL_71;
    case 9:
      p__8__3 = (Il2CppObject **)&v3->fields.__8__3;
      v3->fields.__1__state = -1;
      goto LABEL_81;
    case 0xA:
      p__8__3 = (Il2CppObject **)&v3->fields.__8__3;
      v3->fields.__1__state = -1;
      goto LABEL_88;
    case 0xB:
      v3->fields.__1__state = -1;
      goto LABEL_98;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleRootComponent__loadOutGameAsset_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleRootComponent__loadOutGameAsset_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleRootComponent__loadOutGameAsset_d__19__System_Collections_IEnumerator_Reset(
        BattleRootComponent__loadOutGameAsset_d__19_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleRootComponent__loadOutGameAsset_d__19_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall BattleRootComponent__loadOutGameAsset_d__19__System_Collections_IEnumerator_get_Current(
        BattleRootComponent__loadOutGameAsset_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleRootComponent__loadOutGameAsset_d__19__System_IDisposable_Dispose(
        BattleRootComponent__loadOutGameAsset_d__19_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleRootComponent_callBackBeginResume___ctor(
        BattleRootComponent_callBackBeginResume_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
}


System_IAsyncResult_o *__fastcall BattleRootComponent_callBackBeginResume__BeginInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B0D848(this, &v5, callback, object);
}


void __fastcall BattleRootComponent_callBackBeginResume__EndInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


void __fastcall BattleRootComponent_callBackBeginResume__Invoke(
        BattleRootComponent_callBackBeginResume_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x23
  BattleRootComponent_callBackBeginResume_o **v7; // x24
  __int64 v8; // x25
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD); // x0
  BattleRootComponent_callBackBeginResume_o *v18; // x8
  __int64 *v19; // x20
  __int64 v20; // x21
  void (__fastcall *v21)(__int64); // x22
  char v22; // w22
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  BattleRootComponent_callBackBeginResume_o *v29; // [xsp+8h] [xbp-38h] BYREF

  v29 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (BattleRootComponent_callBackBeginResume_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v18->fields.extra_arg, method, v2, v3);
      if ( (sub_B0D8D4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B0D8CC(v20);
      v23 = sub_B0DCD0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AA67A0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B0D954(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AA67A0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v14)(v19, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v21)(v19, v20);
    goto LABEL_36;
  }
}