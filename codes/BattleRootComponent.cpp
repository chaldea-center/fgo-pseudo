void __fastcall BattleRootComponent___ctor(BattleRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


System_Int32_array *__fastcall BattleRootComponent__GetClassBoardCommandSpellEffectId(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
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
  System_Collections_Generic_HashSet_int__o *v15; // x19
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v17; // x1
  BalanceConfig_c *v18; // x8
  int32_t ClassBoardReleaseQuestId; // w21
  bool IsQuestClear_25746984; // w0
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
  __int64 v36; // x1
  __int64 v37; // x1
  System_Int32_array *v38; // x22
  int v39; // w20
  __int64 v40; // x0
  __int64 v42; // x0
  __int64 v43; // [xsp+8h] [xbp-A8h]
  Il2CppObject *SingleEntity; // [xsp+10h] [xbp-A0h]
  unsigned int v45; // [xsp+18h] [xbp-98h]
  int v46; // [xsp+1Ch] [xbp-94h]
  _BYTE v47[28]; // [xsp+20h] [xbp-90h] BYREF
  int v48; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_4184DDD & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&CondType_TypeInfo, v2);
    sub_B2C35C(&Method_DataManager_GetMaster_BattleMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v12);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v14);
    byte_4184DDD = 1;
  }
  entitys = 0LL;
  memset(&v49, 0, sizeof(v49));
  v48 = 0;
  v15 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v15,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_WarQuestSelectionMaster,
                   (const MethodInfo_24E43BC *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
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
  IsQuestClear_25746984 = CondType__IsQuestClear_25746984(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( !SingleEntity || !IsQuestClear_25746984 )
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v15,
             (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  klass = SingleEntity[1].klass;
  if ( !klass || (data = klass->_1.this_arg.data) == 0LL || (v23 = data[2]) == 0 )
LABEL_57:
    sub_B2C434(Master_WarQuestSelectionMaster, v17);
  v24 = *(_DWORD *)(v23 + 24);
  if ( v24 >= 1 )
  {
    v46 = 0;
    v25 = (ClassBoardCommandSpellMaster_o *)Master_WarQuestSelectionMaster;
    v26 = 0;
    v43 = v23;
    while ( 1 )
    {
      if ( v26 >= v24 )
        goto LABEL_58;
      v27 = *(_QWORD *)(v23 + 8LL * (int)v26 + 32);
      if ( !v27 )
        goto LABEL_57;
      v45 = v26;
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
      v23 = v43;
      v24 = *(_DWORD *)(v43 + 24);
      v26 = v45 + 1;
      if ( (int)(v45 + 1) >= v24 )
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                 (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
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
          (System_Collections_Generic_List_Enumerator_T__o *)v47,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
        v49 = *(System_Collections_Generic_List_Enumerator_T__o *)v47;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v49,
                  (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
        {
          if ( !v49.fields.current )
            sub_B2C434(0LL, v37);
          EffectIdArray = ClassBoardCommandSpellEntity__GetEffectIdArray(
                            (ClassBoardCommandSpellEntity_o *)v49.fields.current,
                            0LL);
          v38 = EffectIdArray;
          if ( !EffectIdArray )
            sub_B2C434(0LL, v36);
          v33 = *(_QWORD *)&EffectIdArray->max_length;
          if ( (int)v33 >= 1 )
          {
            v34 = 0LL;
            do
            {
              if ( v34 >= (unsigned int)v33 )
              {
                v40 = sub_B2C460(EffectIdArray);
                sub_B2C400(v40, 0LL);
              }
              if ( !v15 )
                sub_B2C434(EffectIdArray, v36);
              EffectIdArray = (System_Int32_array *)System_Collections_Generic_HashSet_int___Add(
                                                      v15,
                                                      v38->m_Items[v34 + 1],
                                                      (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
              LODWORD(v33) = v38->max_length;
              ++v34;
            }
            while ( (__int64)v34 < (int)v33 );
          }
        }
        *(_DWORD *)&v47[4 * v46 + 24] = 252;
        v39 = ++v48;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v49,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
        if ( v39 )
        {
          v46 = v39;
          if ( *(_DWORD *)&v47[4 * v39 + 20] == 252 )
          {
            v48 = v39 - 1;
            v46 = v39 - 1;
          }
        }
        else
        {
          v46 = 0;
        }
      }
      v30 = *(_DWORD *)(v29 + 24);
      if ( (int)++v31 >= v30 )
        goto LABEL_55;
    }
LABEL_58:
    v42 = sub_B2C460(Master_WarQuestSelectionMaster);
    sub_B2C400(v42, 0LL);
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v15,
           (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  System_Collections_Generic_List_int__o *v16; // x19
  _BOOL8 v17; // x0
  struct BattleInfoData_o *battleInfo; // x8
  System_Collections_Generic_IEnumerable_T__o *enemyDeck; // x1
  Il2CppClass *klass; // x24
  const char *namespaze; // x8
  int v22; // w25
  __int64 v23; // x9
  __int64 v24; // x26
  int v25; // w9
  __int64 v26; // x27
  __int64 v27; // x20
  __int64 v28; // x1
  _BOOL8 v29; // x0
  struct BattleInfoData_o *v30; // x8
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x20
  int max_length; // w8
  unsigned int v33; // w21
  BattleInfoData_StageCutinInfo_o *v34; // x8
  struct DropInfo_array *dropInfos; // x24
  int v36; // w8
  unsigned int v37; // w25
  DropInfo_o *v38; // x26
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x0
  BattleEntity_o *v43; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4184DDC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__, battleEntity);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_DeckData__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_DeckData__AddRange__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_DeckData__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_DeckData__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_DeckData___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B2C35C(&System_Collections_Generic_List_DeckData__TypeInfo, v14);
    byte_4184DDC = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_DeckData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_DeckData___ctor__);
  v16 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !battleEntity )
    return v16;
  battleInfo = battleEntity->fields.battleInfo;
  if ( !battleInfo )
    return v16;
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.enemyDeck;
  if ( enemyDeck )
  {
    if ( !v15 )
      goto LABEL_59;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
      enemyDeck,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_59;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.callDeck;
  if ( enemyDeck )
  {
    if ( !v15 )
      goto LABEL_59;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
      enemyDeck,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_59;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.shiftDeck;
  if ( enemyDeck )
  {
    if ( !v15 )
      goto LABEL_59;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
      enemyDeck,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_59;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.transformDeck;
  v43 = battleEntity;
  if ( enemyDeck )
  {
    if ( !v15 )
      goto LABEL_59;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v15,
      (EventMissionProgressRequest_Argument_ProgressData_o *)enemyDeck,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_DeckData__Add__);
  }
  else if ( !v15 )
  {
    goto LABEL_59;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v44,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v15,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
  v45 = v44;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    if ( !v29 )
      break;
    if ( !v45.fields.current )
      sub_B2C434(v29, v28);
    klass = v45.fields.current[1].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( (int)namespaze >= 1 )
      {
        v22 = 0;
        do
        {
          if ( v22 >= (unsigned int)namespaze )
          {
            v42 = sub_B2C460(v29);
            sub_B2C400(v42, 0LL);
          }
          v23 = *((_QWORD *)&klass->_1.byval_arg.data + v22);
          if ( !v23 )
            sub_B2C434(v29, v28);
          v24 = *(_QWORD *)(v23 + 88);
          if ( v24 )
          {
            v25 = *(_DWORD *)(v24 + 24);
            if ( v25 >= 1 )
            {
              v26 = 0LL;
              do
              {
                if ( (unsigned int)v26 >= v25 )
                {
                  v40 = sub_B2C460(v29);
                  sub_B2C400(v40, 0LL);
                }
                v27 = *(_QWORD *)(v24 + 32 + 8 * v26);
                if ( !v27 )
                  sub_B2C434(v29, v28);
                v28 = *(unsigned int *)(v27 + 48);
                if ( (_DWORD)v28 )
                {
                  if ( !v16 )
                    sub_B2C434(v29, v28);
                  v29 = System_Collections_Generic_List_int___Contains(
                          v16,
                          v28,
                          (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
                  if ( !v29 )
                    System_Collections_Generic_List_int___Add(
                      v16,
                      *(_DWORD *)(v27 + 48),
                      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
                }
                v25 = *(_DWORD *)(v24 + 24);
                ++v26;
              }
              while ( (int)v26 < v25 );
              namespaze = klass->_1.namespaze;
            }
          }
          ++v22;
        }
        while ( v22 < (int)namespaze );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
  v30 = v43->fields.battleInfo;
  if ( !v30 )
LABEL_59:
    sub_B2C434(v17, enemyDeck);
  stageCutins = v30->fields.stageCutins;
  if ( stageCutins )
  {
    max_length = stageCutins->max_length;
    if ( max_length >= 1 )
    {
      v33 = 0;
      while ( 1 )
      {
        if ( v33 >= max_length )
          goto LABEL_60;
        v34 = stageCutins->m_Items[v33];
        if ( !v34 )
          goto LABEL_59;
        dropInfos = v34->fields.dropInfos;
        if ( !dropInfos )
          goto LABEL_59;
        v36 = dropInfos->max_length;
        if ( v36 >= 1 )
          break;
LABEL_54:
        max_length = stageCutins->max_length;
        if ( (int)++v33 >= max_length )
          return v16;
      }
      v37 = 0;
      while ( v37 < v36 )
      {
        v38 = dropInfos->m_Items[v37];
        if ( !v38 )
          goto LABEL_59;
        enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v38->fields.effectType;
        if ( (_DWORD)enemyDeck )
        {
          if ( !v16 )
            goto LABEL_59;
          v17 = System_Collections_Generic_List_int___Contains(
                  v16,
                  (int32_t)enemyDeck,
                  (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
          if ( !v17 )
            System_Collections_Generic_List_int___Add(
              v16,
              v38->fields.effectType,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        }
        v36 = dropInfos->max_length;
        if ( (int)++v37 >= v36 )
          goto LABEL_54;
      }
LABEL_60:
      v41 = sub_B2C460(v17);
      sub_B2C400(v41, 0LL);
    }
  }
  return v16;
}


System_Collections_IEnumerator_o *__fastcall BattleRootComponent__LoadAsset(
        BattleRootComponent_o *this,
        QuestPhaseEntity_o *ent,
        int32_t eventId,
        BattleEntity_o *battleEnt,
        const MethodInfo *method)
{
  BattleRootComponent__LoadAsset_d__12_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4184DD3 & 1) == 0 )
  {
    sub_B2C35C(&BattleRootComponent__LoadAsset_d__12_TypeInfo, ent);
    byte_4184DD3 = 1;
  }
  v9 = (BattleRootComponent__LoadAsset_d__12_o *)sub_B2C42C(BattleRootComponent__LoadAsset_d__12_TypeInfo);
  BattleRootComponent__LoadAsset_d__12___ctor(v9, 0, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.__4__this = this;
  sub_B2C2F8(&v9->fields.__4__this, this);
  v9->fields.ent = ent;
  sub_B2C2F8(&v9->fields.ent, ent);
  v9->fields.eventId = eventId;
  v9->fields.battleEnt = battleEnt;
  sub_B2C2F8(&v9->fields.battleEnt, battleEnt);
  return (System_Collections_IEnumerator_o *)v9;
}


System_Collections_IEnumerator_o *__fastcall BattleRootComponent__LoadAssetsIndependentToMainOne(
        BattleRootComponent_o *this,
        QuestPhaseEntity_o *ent,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4184DD4 & 1) == 0 )
  {
    sub_B2C35C(&BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_TypeInfo, ent);
    byte_4184DD4 = 1;
  }
  v9 = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)sub_B2C42C(BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_TypeInfo);
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__13___ctor(v9, 0, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.__4__this = this;
  sub_B2C2F8(&v9->fields.__4__this, this);
  v9->fields.ent = ent;
  sub_B2C2F8(&v9->fields.ent, ent);
  v9->fields.eventId = eventId;
  v9->fields.finishCallback = finishCallback;
  sub_B2C2F8(&v9->fields.finishCallback, finishCallback);
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
  __int64 v14; // x1
  System_Action_o **p_callback; // x20
  struct System_Collections_Generic_List_string__o *v16; // x8
  int size; // w9
  System_String_o *v18; // x19
  System_Action_o *v19; // x20

  if ( (byte_4184DD5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, bgmList);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_B2C35C(&SoundManager_TypeInfo, v9);
    sub_B2C35C(&Method_BattleRootComponent___c__DisplayClass16_0__LoadBatteBgm_b__0__, v10);
    sub_B2C35C(&BattleRootComponent___c__DisplayClass16_0_TypeInfo, v11);
    byte_4184DD5 = 1;
  }
  v12 = (BattleRootComponent___c__DisplayClass16_0_o *)sub_B2C42C(BattleRootComponent___c__DisplayClass16_0_TypeInfo);
  BattleRootComponent___c__DisplayClass16_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_12;
  v12->fields.bgmList = bgmList;
  sub_B2C2F8(&v12->fields, bgmList);
  v12->fields.__4__this = this;
  sub_B2C2F8(&v12->fields.__4__this, this);
  v12->fields.callback = callback;
  p_callback = &v12->fields.callback;
  sub_B2C2F8(&v12->fields.callback, callback);
  v16 = v12->fields.bgmList;
  if ( !v16 )
    goto LABEL_12;
  size = v16->fields._size;
  if ( size <= 0 )
  {
    v13 = *p_callback;
    if ( *p_callback )
    {
      System_Action__Invoke(v13, 0LL);
      return;
    }
LABEL_12:
    sub_B2C434(v13, v14);
  }
  v18 = v16->fields._items->m_Items[size - 1];
  v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v12,
    Method_BattleRootComponent___c__DisplayClass16_0__LoadBatteBgm_b__0__,
    0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__downloadAudioAssetStorage(v18, v19, 1, 0LL);
}


void __fastcall BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf || (BattlePerformance__SetDownloadEventSprite(perf, 0LL), (perf = this->fields.perf) == 0LL) )
    sub_B2C434(perf, method);
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
  __int64 v9; // x1

  if ( (byte_4184DDA & 1) == 0 )
  {
    sub_B2C35C(&ScriptManager_TypeInfo, info);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    byte_4184DDA = 1;
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
  if ( !byte_4183C70 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    byte_4183C70 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v9);
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
  BattleScriptRootComponent_TalkScriptInfo_o *v25; // x1
  Il2CppObject **p_info; // x21
  long double v27; // q0
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  const MethodInfo *v30; // x2
  int32_t qId; // w22
  int32_t pId; // w23
  struct BattleData_o *v33; // x8
  int64_t overwriteEndScriptQuestId; // x22
  int32_t questId; // w23
  int32_t ScriptQuestId; // w22
  QuestEntity_o *QuestEntity; // x0
  int32_t questPhase; // w24
  ScriptManager_o *v39; // x23
  int32_t winResult; // w25
  int32_t v41; // w24
  ScriptManager_o *v42; // x23
  int32_t v43; // w25
  ScriptManager_c *v44; // x0
  System_String_o *textPath; // x23
  System_String_o *ScriptAssetName; // x0
  System_String_o *v47; // x22
  int32_t v48; // w19
  int32_t v49; // w21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v50; // x22
  CommonUI_o *Instance; // x19
  System_String_o *v52; // x21
  System_String_o *v53; // x22
  NotificationDialog_ClickDelegate_o *v54; // x23
  QuestPhaseDetailEntity_o *entity; // [xsp+68h] [xbp-48h] BYREF

  if ( (byte_4184DDB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string___ctor__, info);
    sub_B2C35C(&System_Action_string__TypeInfo, v5);
    sub_B2C35C(&AssetManager_TypeInfo, v6);
    sub_B2C35C(&NotificationDialog_ClickDelegate_TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestScriptReleaseMaster___, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&MyRoomStateMaterial_TypeInfo, v12);
    sub_B2C35C(&ScriptManager_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_B2C35C(&Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__0__, v18);
    sub_B2C35C(&Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__1__, v19);
    sub_B2C35C(&BattleRootComponent___c__DisplayClass22_0_TypeInfo, v20);
    sub_B2C35C(&StringLiteral_2427/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, v21);
    sub_B2C35C(&StringLiteral_2428/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, v22);
    byte_4184DDB = 1;
  }
  entity = 0LL;
  v23 = (BattleRootComponent___c__DisplayClass22_0_o *)sub_B2C42C(BattleRootComponent___c__DisplayClass22_0_TypeInfo);
  BattleRootComponent___c__DisplayClass22_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_67;
  v23->fields.__4__this = this;
  sub_B2C2F8(&v23->fields, this);
  v23->fields.info = info;
  p_info = (Il2CppObject **)&v23->fields.info;
  *(__n128 *)&v27 = sub_B2C2F8(&v23->fields.info, info);
  data = this->fields.data;
  if ( !data )
    goto LABEL_67;
  battleEvent = data->fields.battleEvent;
  if ( !battleEvent
    || (((__int64 (__fastcall *)(struct BaseBattleEvent_o *, Il2CppMethodPointer, long double))battleEvent->klass->vtable._16_GoNextScene.method)(
          battleEvent,
          battleEvent->klass->vtable._17_GetSaveData.methodPtr,
          v27) & 1) == 0 )
  {
    SkillLvMaster__ResetBaseTime(0LL);
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)*p_info;
    if ( !*p_info )
      goto LABEL_67;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)BattleScriptRootComponent_TalkScriptInfo__isLose(isLose, 0LL);
    v25 = (BattleScriptRootComponent_TalkScriptInfo_o *)*p_info;
    if ( ((unsigned __int8)isLose & 1) != 0 )
    {
      BattleRootComponent__TerminalTransition((BattleRootComponent_o *)isLose, v25, v30);
      return;
    }
    if ( !v25 )
      goto LABEL_67;
    qId = v25->fields.qId;
    v23->fields.questId = qId;
    pId = v25->fields.pId;
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
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestScriptReleaseMaster___)) == 0LL
      || (ScriptQuestId = QuestScriptReleaseMaster__GetScriptQuestId(
                            (QuestScriptReleaseMaster_o *)isLose,
                            overwriteEndScriptQuestId,
                            v23->fields.questPhase,
                            2,
                            0LL),
          (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___),
          !*p_info)
      || !isLose )
    {
LABEL_67:
      sub_B2C434(isLose, v25);
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
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose )
      goto LABEL_67;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)isLose,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !*p_info || !isLose )
      goto LABEL_67;
    QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)isLose, HIDWORD((*p_info)[1].klass), 0LL);
    if ( !QuestEntity || !QuestEntity__IsOpenByTime(QuestEntity, 0, 0LL) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v52 = LocalizationManager__Get((System_String_o *)StringLiteral_2428/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, 0LL);
      v53 = LocalizationManager__Get((System_String_o *)StringLiteral_2427/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, 0LL);
      v54 = (NotificationDialog_ClickDelegate_o *)sub_B2C42C(NotificationDialog_ClickDelegate_TypeInfo);
      NotificationDialog_ClickDelegate___ctor(
        v54,
        (Il2CppObject *)v23,
        Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__1__,
        0LL);
      if ( !Instance )
        goto LABEL_67;
      CommonUI__OpenNotificationDialog_17973524(
        Instance,
        v52,
        v53,
        v54,
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
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !v23->fields.info )
          goto LABEL_67;
        questPhase = v23->fields.questPhase;
        v39 = (ScriptManager_o *)isLose;
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
        if ( !v39 )
          goto LABEL_67;
        if ( ScriptManager__IsExistScriptFile(v39, (System_String_o *)isLose, 0LL) )
          goto LABEL_70;
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !v23->fields.info )
          goto LABEL_67;
        v41 = v23->fields.questPhase;
        v42 = (ScriptManager_o *)isLose;
        v43 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v23->fields.info, 0LL);
        if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScriptManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        }
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd2(
                                                                 ScriptQuestId,
                                                                 v41,
                                                                 v43,
                                                                 0LL);
        if ( !v42 )
          goto LABEL_67;
        if ( ScriptManager__IsExistScriptFile(v42, (System_String_o *)isLose, 0LL) )
        {
LABEL_70:
          v44 = ScriptManager_TypeInfo;
          if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ScriptManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
            v44 = ScriptManager_TypeInfo;
          }
          textPath = v44->static_fields->textPath;
          ScriptAssetName = ScriptManager__GetScriptAssetName(ScriptQuestId, 0LL);
          v47 = System_String__Concat_44305532(textPath, ScriptAssetName, 0LL);
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          if ( AssetManager__isExistAssetStorage(v47, 0LL) )
          {
            isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
      v48 = v23->fields.questId;
      v49 = v23->fields.questPhase;
      v50 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_string__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v50,
        (Il2CppObject *)v23,
        Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__0__,
        (const MethodInfo_24BBAD8 *)Method_System_Action_string___ctor__);
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      ScriptManager__LoadBattleEndGameDemo(v48, v49, 1, (System_Action_string__o *)v50, 0, 0LL);
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
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v23; // x1
  BattleEntity_o *SingleEntity; // x20
  BattleFBXComponent_c *v25; // x8
  BattlePerformance_c *v26; // x0
  QuestPhaseEntity_o *QuestPhaseEntity; // x21
  BattleData_o *data; // x22
  __int64 v29; // x1
  int64_t createdAt; // x22
  System_Int32_array *v31; // x22
  const MethodInfo *v32; // x4
  System_Collections_IEnumerator_o *Asset; // x0
  UnityEngine_Object_o *debugButton; // x20
  ManagerConfig_c *v35; // x0

  if ( (byte_4184DD2 & 1) == 0 )
  {
    sub_B2C35C(&AssetStorageLoadWrapper_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&BattleActionData_TypeInfo, v4);
    sub_B2C35C(&BattleEffectUtility_TypeInfo, v5);
    sub_B2C35C(&BattleFBXComponent_TypeInfo, v6);
    sub_B2C35C(&BattlePerformance_TypeInfo, v7);
    sub_B2C35C(&BuffList_TypeInfo, v8);
    sub_B2C35C(&CatAndMouseGame_TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_BattleBgMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_BattleMaster___, v11);
    sub_B2C35C(&DataManager_TypeInfo, v12);
    sub_B2C35C(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v13);
    sub_B2C35C(&System_GC_TypeInfo, v14);
    sub_B2C35C(&ManagerConfig_TypeInfo, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    sub_B2C35C(&OptionManager_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v18);
    sub_B2C35C(&StringLiteral_15374/*"WINGNAME"*/, v19);
    byte_4184DD2 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15374/*"WINGNAME"*/, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  CatAndMouseGame__SixHomeBuilding(Value, 0LL);
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_43492776(0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
  {
    assetStorageLoadWrapper = (AssetStorageLoadWrapper_o *)sub_B2C42C(AssetStorageLoadWrapper_TypeInfo);
    AssetStorageLoadWrapper___ctor(assetStorageLoadWrapper, 0LL);
  }
  this->fields.assetStorageLoadWrapper = assetStorageLoadWrapper;
  sub_B2C2F8(&this->fields.assetStorageLoadWrapper, assetStorageLoadWrapper);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  SingleEntity = (BattleEntity_o *)DataMasterBase_object__object__long___GetSingleEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_WarQuestSelectionMaster,
                                     (const MethodInfo_24E43BC *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v25 = BattleFBXComponent_TypeInfo;
  if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v25 = BattleFBXComponent_TypeInfo;
  }
  v25->static_fields->EnableEvent = 1;
  v26 = BattlePerformance_TypeInfo;
  if ( (BYTE3(BattlePerformance_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformance_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
    v26 = BattlePerformance_TypeInfo;
  }
  v26->static_fields->CameraFlip = 0;
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
    if ( !byte_4184189 )
    {
      sub_B2C35C(&SkillLvMaster_TypeInfo, v29);
      byte_4184189 = 1;
    }
    SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = createdAt;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  v31 = (System_Int32_array *)*((_QWORD *)Master_WarQuestSelectionMaster + 9);
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  BattleEffectUtility__AddNotPreloadEffectId(v31, 0LL);
  Asset = BattleRootComponent__LoadAsset(this, QuestPhaseEntity, SingleEntity->fields.eventId, SingleEntity, v32);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, Asset, 0LL);
  Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  *((_DWORD *)Master_WarQuestSelectionMaster + 36) = 3;
  Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  if ( *((_BYTE *)Master_WarQuestSelectionMaster + 140) )
  {
    Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    v35 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v35 = ManagerConfig_TypeInfo;
    }
    if ( v35->static_fields->UseDebugCommand )
    {
      Master_WarQuestSelectionMaster = this->fields.debugButton;
      if ( Master_WarQuestSelectionMaster )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
        return;
      }
LABEL_70:
      sub_B2C434(Master_WarQuestSelectionMaster, v23);
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
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  struct BattleRootComponent_callBackBeginResume_o **p_callbackBeginResumeFunc; // x19
  BattleRootComponent_callBackBeginResume_o *v9; // x20
  struct BattleRootComponent_callBackBeginResume_o *callbackBeginResumeFunc; // t1

  if ( (byte_4184DD1 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, data);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4184DD1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v7 )
    sub_B2C434(Instance, v6);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  callbackBeginResumeFunc = this->fields.callbackBeginResumeFunc;
  p_callbackBeginResumeFunc = &this->fields.callbackBeginResumeFunc;
  v9 = callbackBeginResumeFunc;
  if ( callbackBeginResumeFunc )
  {
    *p_callbackBeginResumeFunc = 0LL;
    sub_B2C2F8(p_callbackBeginResumeFunc, 0LL);
    BattleRootComponent_callBackBeginResume__Invoke(v9, 0LL);
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
  __int64 v15; // x1
  WebViewManager_o *v16; // x21
  struct BattleLogic_o *logic; // x20
  struct BattleLogic_o *v18; // x8
  struct BattleLogic_LOGICTYPE_array *logiclist; // x8
  struct BattleLogic_o *v20; // x8
  struct BattleLogic_LOGICTYPE_array *v21; // x8
  AndroidBackKeyManager_c *v22; // x0
  __int64 v23; // x0

  if ( (byte_4184DD6 & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, data);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v6);
    sub_B2C35C(&BattleLogic_LOGICTYPE___TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v8);
    sub_B2C35C(&StringLiteral_20221/*"limitCount"*/, v9);
    sub_B2C35C(&StringLiteral_10966/*"QUEST_START"*/, v10);
    sub_B2C35C(&StringLiteral_21978/*"servantId"*/, v11);
    byte_4184DD6 = 1;
  }
  if ( data )
  {
    v12 = *(&System_Collections_Generic_Dictionary_string__int__TypeInfo->_2.bitflags2 + 1);
    if ( *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v12
      && (System_Collections_Generic_Dictionary_string__int__c *)data->klass->_2.typeHierarchy[v12 - 1] == System_Collections_Generic_Dictionary_string__int__TypeInfo )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_string__int___get_Item(
               (System_Collections_Generic_Dictionary_string__int__o *)data,
               (System_String_o *)StringLiteral_21978/*"servantId"*/,
               (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !Instance )
        goto LABEL_23;
      LODWORD(Instance->fields.baseWindow) = Item;
      v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_string__int___get_Item(
               (System_Collections_Generic_Dictionary_string__int__o *)data,
               (System_String_o *)StringLiteral_20221/*"limitCount"*/,
               (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !v16 )
        goto LABEL_23;
      HIDWORD(v16->fields.baseWindow) = Item;
      Item = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item )
        goto LABEL_23;
      *(_BYTE *)(Item + 44) = 1;
      Item = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item )
        goto LABEL_23;
      *(_BYTE *)(Item + 45) = 1;
      logic = this->fields.logic;
      Item = sub_B2C374(BattleLogic_LOGICTYPE___TypeInfo, 2LL);
      if ( !logic )
        goto LABEL_23;
      logic->fields.logiclist = (struct BattleLogic_LOGICTYPE_array *)Item;
      sub_B2C2F8(&logic->fields.logiclist, Item);
      v18 = this->fields.logic;
      if ( !v18 )
        goto LABEL_23;
      logiclist = v18->fields.logiclist;
      if ( !logiclist )
        goto LABEL_23;
      if ( logiclist->max_length )
      {
        logiclist->m_Items[1] = 18;
        v20 = this->fields.logic;
        if ( !v20 )
          goto LABEL_23;
        v21 = v20->fields.logiclist;
        if ( !v21 )
          goto LABEL_23;
        if ( v21->max_length > 1 )
        {
          v21->m_Items[2] = 21;
          goto LABEL_18;
        }
      }
    }
    else
    {
      Item = sub_B2C728(data);
    }
    v23 = sub_B2C460(Item);
    sub_B2C400(v23, 0LL);
  }
LABEL_18:
  SceneRootComponent__beginStartUp_17297004((SceneRootComponent_o *)this, 0LL);
  v22 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v22 = AndroidBackKeyManager_TypeInfo;
  }
  v22->static_fields->ToastEnabled = 1;
  Item = (__int64)this->fields.myFSM;
  if ( !Item )
LABEL_23:
    sub_B2C434(Item, v15);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Item, (System_String_o *)StringLiteral_10966/*"QUEST_START"*/, 0LL);
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
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2
  System_Collections_IEnumerator_o *OutGameAsset; // x1

  if ( (byte_4184DD7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&Method_BattleRootComponent_goNextScene__, v4);
    sub_B2C35C(&OptionManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__, v6);
    byte_4184DD7 = 1;
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
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
  v9 = **(_QWORD **)(v8 + 192);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AC505C(v9);
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
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
  v11 = **(_QWORD **)(v10 + 192);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AC505C(v11);
  perf = **(BattlePerformance_o ***)(v11 + 184);
  if ( !perf
    || (AtlasManager__UnloadWarBoardAtlas((AtlasManager_o *)perf, 0LL), (perf = this->fields.perf) == 0LL)
    || (BattlePerformance__ReleaseEventInfoPointGauge(perf, 0LL),
        (perf = (BattlePerformance_o *)this->fields.data) == 0LL) )
  {
LABEL_37:
    sub_B2C434(perf, method);
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
    v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_BattleRootComponent_goNextScene__, 0LL);
    OutGameAsset = BattleRootComponent__loadOutGameAsset(this, v13, v14);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, OutGameAsset, 0LL);
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
  BattleScriptRootComponent_TalkScriptInfo_o *v13; // x20
  const MethodInfo *v14; // x2

  v2 = this;
  if ( (byte_4184DD9 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    this = (BattleRootComponent_o *)sub_B2C35C(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v3);
    byte_4184DD9 = 1;
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
  v13 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_B2C42C(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
  BattleScriptRootComponent_TalkScriptInfo___ctor_20075984(v13, v11, id, questPhase, 4, win_lose, WinResult, 0, 0LL);
  this = (BattleRootComponent_o *)v2->fields.data;
  if ( !this
    || (BattleData__release((BattleData_o *)this, 0LL),
        (this = (BattleRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_10:
    sub_B2C434(this, method);
  }
  CommonUI__SetMaskFadeInitColor((CommonUI_o *)this, 1, 0LL);
  BattleRootComponent__TransitionTerminalOrBattleScript(v2, v13, v14);
}


System_Collections_IEnumerator_o *__fastcall BattleRootComponent__loadOutGameAsset(
        BattleRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BattleRootComponent__loadOutGameAsset_d__19_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4184DD8 & 1) == 0 )
  {
    sub_B2C35C(&BattleRootComponent__loadOutGameAsset_d__19_TypeInfo, callback);
    byte_4184DD8 = 1;
  }
  v5 = (BattleRootComponent__loadOutGameAsset_d__19_o *)sub_B2C42C(BattleRootComponent__loadOutGameAsset_d__19_TypeInfo);
  BattleRootComponent__loadOutGameAsset_d__19___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  v5->fields.__4__this = this;
  sub_B2C2F8(&v5->fields.__4__this, this);
  v5->fields.callback = callback;
  sub_B2C2F8(&v5->fields.callback, callback);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleRootComponent__setCallbackBeginResume(
        BattleRootComponent_o *this,
        BattleRootComponent_callBackBeginResume_o *func,
        const MethodInfo *method)
{
  this->fields.callbackBeginResumeFunc = func;
  sub_B2C2F8(&this->fields.callbackBeginResumeFunc, func);
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
  BattleRootComponent__LoadAsset_d__12_o *v2; // x27
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  struct BattleRootComponent_o *_4__this; // x26
  Il2CppObject *v24; // x22
  BattleRootComponent__LoadAsset_d__12_o **p__8__1; // x25
  UnityEngine_WaitForEndOfFrame_o *v26; // x20
  Il2CppObject **p__2__current; // x27
  bool result; // w0
  Il2CppObject **p__8__2; // x22
  System_Collections_IEnumerator_o *v30; // x0
  Il2CppObject **v31; // x27
  int v32; // w8
  QuestPhaseEntity_o *ent; // x23
  int32_t eventId; // w22
  Il2CppObject *_8__1; // x19
  System_Action_o *v36; // x24
  System_Collections_IEnumerator_o *AssetsIndependentToMainOne; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  BattleDataDefine_c *v39; // x0
  BattleRootComponent__LoadAsset_d__12_o *v40; // x19
  System_String_o *ASSET_BATTLE_COMMON; // x23
  AssetLoader_LoadEndDataHandler_o *v42; // x24
  BattleRootComponent__LoadAsset_d__12_o *v43; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x23
  struct BattleEntity_o *battleEnt; // x8
  System_Int32_array *BattleFieldMotionIds; // x0
  struct System_Int32_array **p_fieldMotionIds_5__2; // x22
  struct BattleRootComponent___c__DisplayClass12_0_o *v48; // x8
  struct System_Int32_array *v49; // x27
  __int64 v50; // x8
  unsigned __int64 v51; // x28
  Il2CppObject *v52; // x0
  BattleRootComponent__LoadAsset_d__12_o **v53; // x19
  BattleRootComponent__LoadAsset_d__12_o *v54; // x25
  AssetStorageLoadWrapper_o *v55; // x23
  AssetLoader_LoadEndDataHandler_o *v56; // x24
  System_String_o *v57; // x22
  AssetManager_o *v58; // x22
  BattleRootComponent__LoadAsset_d__12_o *v59; // x8
  struct System_Int32_array *fieldMotionIds_5__2; // x9
  struct BattleRootComponent___c__DisplayClass12_0_o **v61; // x22
  struct BattleEntity_o *v62; // x8
  Il2CppObject *v63; // x23
  System_String_o *v64; // x0
  struct BattleRootComponent___c__DisplayClass12_1_o *_8__2; // x8
  System_String_o *v66; // x23
  BattleRootComponent__LoadAsset_d__12_o **v67; // x20
  struct BattleRootComponent_o *v68; // x19
  AssetStorageLoadWrapper_o *v69; // x24
  Il2CppObject *v70; // x26
  AssetLoader_LoadEndDataHandler_o *v71; // x25
  struct BattleRootComponent___c__DisplayClass12_0_o *v72; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v74; // x8
  AssumedBattleAssetLoadManager_o *AssumedBattleAssetLoadManager_k__BackingField; // x21
  struct BattlePerformance_o *v76; // x8
  __int64 v77; // x0
  BattleRootComponent__LoadAsset_d__12_o *v78; // [xsp+0h] [xbp-60h]
  int32_t v79; // [xsp+8h] [xbp-58h] BYREF
  int v80; // [xsp+Ch] [xbp-54h] BYREF

  v2 = this;
  if ( (byte_41850A9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___, v3);
    sub_B2C35C(&BattleDataDefine_TypeInfo, v4);
    sub_B2C35C(&System_GC_TypeInfo, v5);
    sub_B2C35C(&int_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetData___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_AssetData__TypeInfo, v8);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B2C35C(&OptionManager_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v12);
    sub_B2C35C(&Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__0__, v13);
    sub_B2C35C(&Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__1__, v14);
    sub_B2C35C(&Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__2__, v15);
    sub_B2C35C(&BattleRootComponent___c__DisplayClass12_0_TypeInfo, v16);
    sub_B2C35C(&Method_BattleRootComponent___c__DisplayClass12_1__LoadAsset_b__3__, v17);
    sub_B2C35C(&BattleRootComponent___c__DisplayClass12_1_TypeInfo, v18);
    sub_B2C35C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v19);
    sub_B2C35C(&StringLiteral_2768/*"Battle/UniqueCamera/"*/, v20);
    sub_B2C35C(&StringLiteral_2760/*"Battle/Field/{0}"*/, v21);
    this = (BattleRootComponent__LoadAsset_d__12_o *)sub_B2C35C(&StringLiteral_14932/*"UniqueCameraPrefab"*/, v22);
    byte_41850A9 = 1;
  }
  v80 = 0;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v24 = (Il2CppObject *)sub_B2C42C(BattleRootComponent___c__DisplayClass12_0_TypeInfo);
      System_Object___ctor(v24, 0LL);
      p__8__1 = (BattleRootComponent__LoadAsset_d__12_o **)&v2->fields.__8__1;
      v2->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass12_0_o *)v24;
      sub_B2C2F8(&v2->fields.__8__1, v24);
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
      System_GC__Collect_43492776(0LL);
      v26 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v26, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v26;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, v26);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      this = (BattleRootComponent__LoadAsset_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_102;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__LoadAsset_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_102;
      v30 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v30;
      v31 = &v2->fields.__2__current;
      sub_B2C2F8(v31, v30);
      v32 = 2;
      goto LABEL_95;
    case 2:
      p__8__1 = (BattleRootComponent__LoadAsset_d__12_o **)&v2->fields.__8__1;
      v2->fields.__1__state = -1;
LABEL_23:
      if ( !*p__8__1 )
        goto LABEL_102;
      LOBYTE((*p__8__1)->fields.__1__state) = 1;
      ent = v2->fields.ent;
      eventId = v2->fields.eventId;
      _8__1 = (Il2CppObject *)v2->fields.__8__1;
      v36 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v36, _8__1, Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__0__, 0LL);
      if ( !_4__this )
        goto LABEL_102;
      AssetsIndependentToMainOne = BattleRootComponent__LoadAssetsIndependentToMainOne(_4__this, ent, eventId, v36, 0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_35309748(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        AssetsIndependentToMainOne,
        0LL);
      this = *p__8__1;
      if ( !*p__8__1 )
        goto LABEL_102;
      this->fields.__2__current = 0LL;
      sub_B2C2F8(&this->fields.__2__current, 0LL);
      assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
      v39 = BattleDataDefine_TypeInfo;
      if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v39 = BattleDataDefine_TypeInfo;
      }
      v40 = *p__8__1;
      ASSET_BATTLE_COMMON = v39->static_fields->ASSET_BATTLE_COMMON;
      v42 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v42,
        (Il2CppObject *)v40,
        Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__1__,
        0LL);
      if ( !assetStorageLoadWrapper )
        goto LABEL_102;
      AssetStorageLoadWrapper__LoadAssetStorage(assetStorageLoadWrapper, ASSET_BATTLE_COMMON, v42, 1, 0LL);
      v43 = *p__8__1;
      v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_AssetData__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v44,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_AssetData___ctor__);
      if ( !v43 )
        goto LABEL_102;
      v43->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass12_0_o *)v44;
      sub_B2C2F8(&v43->fields.__8__1, v44);
      battleEnt = v2->fields.battleEnt;
      if ( !battleEnt )
        goto LABEL_102;
      this = (BattleRootComponent__LoadAsset_d__12_o *)battleEnt->fields.battleInfo;
      if ( !this )
        goto LABEL_102;
      BattleFieldMotionIds = BattleInfoData__GetBattleFieldMotionIds((BattleInfoData_o *)this, v2->fields.ent, 0LL);
      p_fieldMotionIds_5__2 = &v2->fields._fieldMotionIds_5__2;
      v2->fields._fieldMotionIds_5__2 = BattleFieldMotionIds;
      sub_B2C2F8(&v2->fields._fieldMotionIds_5__2, BattleFieldMotionIds);
      v48 = v2->fields.__8__1;
      if ( !v48 )
        goto LABEL_102;
      v48->fields.loadCompCnt = 0;
      v78 = v2;
      v49 = *p_fieldMotionIds_5__2;
      if ( !*p_fieldMotionIds_5__2 )
        goto LABEL_102;
      v50 = *(_QWORD *)&v49->max_length;
      if ( (int)v50 < 1 )
        goto LABEL_46;
      v51 = 0LL;
      break;
    case 3:
      p__8__1 = (BattleRootComponent__LoadAsset_d__12_o **)&v2->fields.__8__1;
      v2->fields.__1__state = -1;
      goto LABEL_52;
    case 4:
      p__8__2 = (Il2CppObject **)&v2->fields.__8__2;
      v2->fields.__1__state = -1;
      goto LABEL_13;
    case 5:
      v61 = &v2->fields.__8__1;
      v2->fields.__1__state = -1;
      goto LABEL_87;
    case 6:
      v2->fields.__1__state = -1;
      goto LABEL_90;
    default:
      return 0;
  }
  do
  {
    if ( v51 >= (unsigned int)v50 )
    {
      v77 = sub_B2C460(this);
      sub_B2C400(v77, 0LL);
    }
    v79 = v49->m_Items[v51 + 1];
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
    this = (BattleRootComponent__LoadAsset_d__12_o *)System_String__Format(
                                                       (System_String_o *)StringLiteral_2760/*"Battle/Field/{0}"*/,
                                                       v52,
                                                       0LL);
    v53 = p__8__1;
    v54 = *p__8__1;
    if ( !v54 )
      goto LABEL_102;
    v55 = _4__this->fields.assetStorageLoadWrapper;
    v56 = (AssetLoader_LoadEndDataHandler_o *)v54->fields.ent;
    v57 = (System_String_o *)this;
    if ( !v56 )
    {
      v56 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v56,
        (Il2CppObject *)v54,
        Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__2__,
        0LL);
      v54->fields.ent = (struct QuestPhaseEntity_o *)v56;
      sub_B2C2F8(&v54->fields.ent, v56);
    }
    if ( !v55 )
      goto LABEL_102;
    this = (BattleRootComponent__LoadAsset_d__12_o *)AssetStorageLoadWrapper__LoadAssetStorage(v55, v57, v56, 1, 0LL);
    p__8__1 = v53;
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !*v53 )
        goto LABEL_102;
      ++LODWORD((*v53)->fields.__4__this);
    }
    LODWORD(v50) = v49->max_length;
    ++v51;
  }
  while ( (__int64)v51 < (int)v50 );
LABEL_46:
  this = (BattleRootComponent__LoadAsset_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v58 = (AssetManager_o *)this;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  }
  v2 = v78;
  if ( !v58 )
    goto LABEL_102;
  AssetManager__UpdateLoadParallelMax(v58, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
LABEL_52:
  v59 = *p__8__1;
  if ( !*p__8__1 )
    goto LABEL_102;
  if ( !v59->fields.__2__current )
  {
LABEL_56:
    v2->fields.__2__current = 0LL;
    v31 = &v2->fields.__2__current;
    sub_B2C2F8(v31, 0LL);
    v32 = 3;
LABEL_95:
    *((_DWORD *)v31 - 2) = v32;
    return 1;
  }
  fieldMotionIds_5__2 = v2->fields._fieldMotionIds_5__2;
  if ( !fieldMotionIds_5__2 )
    goto LABEL_102;
  if ( SLODWORD(v59->fields.__4__this) < (signed int)fieldMotionIds_5__2->max_length )
    goto LABEL_56;
  v62 = v2->fields.battleEnt;
  if ( !v62 )
    goto LABEL_102;
  this = (BattleRootComponent__LoadAsset_d__12_o *)v62->fields.battleInfo;
  if ( !this )
    goto LABEL_102;
  this = (BattleRootComponent__LoadAsset_d__12_o *)BattleInfoData__GetUniqueCameraId(
                                                     (BattleInfoData_o *)this,
                                                     v2->fields.ent,
                                                     0LL);
  v80 = (int)this;
  if ( (_DWORD)this )
  {
    v63 = (Il2CppObject *)sub_B2C42C(BattleRootComponent___c__DisplayClass12_1_TypeInfo);
    System_Object___ctor(v63, 0LL);
    v2->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass12_1_o *)v63;
    p__8__2 = (Il2CppObject **)&v2->fields.__8__2;
    sub_B2C2F8(&v2->fields.__8__2, v63);
    v64 = System_Int32__ToString((int32_t)&v80, 0LL);
    this = (BattleRootComponent__LoadAsset_d__12_o *)System_String__Concat_44305532(
                                                       (System_String_o *)StringLiteral_2768/*"Battle/UniqueCamera/"*/,
                                                       v64,
                                                       0LL);
    _8__2 = v2->fields.__8__2;
    if ( !_8__2 )
      goto LABEL_102;
    _8__2->fields.uniqueCameraData = 0LL;
    v66 = (System_String_o *)this;
    v67 = p__8__1;
    sub_B2C2F8(&_8__2->fields, 0LL);
    if ( !_4__this )
      goto LABEL_102;
    v68 = _4__this;
    v69 = _4__this->fields.assetStorageLoadWrapper;
    v70 = *p__8__2;
    v71 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v71,
      v70,
      Method_BattleRootComponent___c__DisplayClass12_1__LoadAsset_b__3__,
      0LL);
    if ( !v69 )
      goto LABEL_102;
    this = (BattleRootComponent__LoadAsset_d__12_o *)AssetStorageLoadWrapper__LoadAssetStorage(v69, v66, v71, 1, 0LL);
    v2->fields._loadSucceeded_5__3 = (unsigned __int8)this & 1;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      _4__this = v68;
    }
    else
    {
      if ( !*v67 )
        goto LABEL_102;
      this = (BattleRootComponent__LoadAsset_d__12_o *)v68->fields.perf;
      _4__this = v68;
      if ( !this )
        goto LABEL_102;
      BattlePerformance__loadStorageObjectCameraCommon(
        (BattlePerformance_o *)this,
        (AssetData_o *)(*v67)->fields.__2__current,
        0LL);
    }
LABEL_13:
    if ( !*p__8__2 )
      goto LABEL_102;
    method = (const MethodInfo *)(*p__8__2)[1].klass;
    if ( !method )
    {
      v2->fields.__2__current = 0LL;
      v31 = &v2->fields.__2__current;
      sub_B2C2F8(v31, 0LL);
      v32 = 4;
      goto LABEL_95;
    }
    if ( v2->fields._loadSucceeded_5__3 )
    {
      if ( !_4__this )
        goto LABEL_102;
      this = (BattleRootComponent__LoadAsset_d__12_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_102;
      BattlePerformance__loadStorageObjectCamera(
        (BattlePerformance_o *)this,
        (AssetData_o *)method,
        (System_String_o *)StringLiteral_14932/*"UniqueCameraPrefab"*/,
        0LL);
      *p__8__2 = 0LL;
      sub_B2C2F8(p__8__2, 0LL);
    }
    else
    {
      *p__8__2 = 0LL;
      sub_B2C2F8(p__8__2, 0LL);
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
  v61 = &v2->fields.__8__1;
  v72 = v2->fields.__8__1;
  if ( !v72 )
    goto LABEL_102;
  if ( !this )
    goto LABEL_102;
  BattlePerformance__loadStorageObjectCommonMotion((BattlePerformance_o *)this, v72->fields.commonData, 0LL);
  if ( !*v61 )
    goto LABEL_102;
  this = (BattleRootComponent__LoadAsset_d__12_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_102;
  BattlePerformance__SetEffectControlSpecialInvincibleObject(
    (BattlePerformance_o *)this,
    (*v61)->fields.commonData,
    0LL);
  if ( !*v61 )
    goto LABEL_102;
  this = (BattleRootComponent__LoadAsset_d__12_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_102;
  BattlePerformance__loadFieldMotion(
    (BattlePerformance_o *)this,
    (*v61)->fields.commonData,
    (*v61)->fields.motionDataList,
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
    (const MethodInfo_17207D0 *)Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
  v74 = _4__this->fields.perf;
  if ( !v74 )
    goto LABEL_102;
  AssumedBattleAssetLoadManager_k__BackingField = v74->fields._AssumedBattleAssetLoadManager_k__BackingField;
  this = (BattleRootComponent__LoadAsset_d__12_o *)AssumedBattleAssetSearcherBeforeBattle__Create(0LL);
  if ( !AssumedBattleAssetLoadManager_k__BackingField )
    goto LABEL_102;
  AssumedBattleAssetLoadManager__Preload(
    AssumedBattleAssetLoadManager_k__BackingField,
    (AssumedBattleAssetSearcherBase_o *)this,
    0LL);
LABEL_87:
  if ( !*v61 )
    goto LABEL_102;
  if ( (*v61)->fields.isAssetsLoading )
  {
    v2->fields.__2__current = 0LL;
    v31 = &v2->fields.__2__current;
    sub_B2C2F8(v31, 0LL);
    v32 = 5;
    goto LABEL_95;
  }
LABEL_90:
  if ( !_4__this )
    goto LABEL_102;
  v76 = _4__this->fields.perf;
  if ( !v76 )
    goto LABEL_102;
  this = (BattleRootComponent__LoadAsset_d__12_o *)v76->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_102;
  if ( AssumedBattleAssetLoadManager__IsPreloading((AssumedBattleAssetLoadManager_o *)this, 0LL) )
  {
    v2->fields.__2__current = 0LL;
    v31 = &v2->fields.__2__current;
    sub_B2C2F8(v31, 0LL);
    v32 = 6;
    goto LABEL_95;
  }
  BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(_4__this, 0LL);
  this = (BattleRootComponent__LoadAsset_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_102:
    sub_B2C434(this, method);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleRootComponent__LoadAsset_d__12_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *v2; // x19
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
  int32_t _1__state; // w8
  BattleRootComponent_o *_4__this; // x26
  bool result; // w0
  Il2CppObject *v55; // x22
  Il2CppObject **v56; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v57; // x8
  int32_t BattleEffectId; // w22
  System_String_o *v59; // x0
  AssetStorageLoadWrapper_o *v60; // x23
  Il2CppObject *v61; // x25
  System_String_o *v62; // x22
  AssetLoader_LoadEndDataHandler_o *v63; // x24
  ConstantMaster_o *Master_WarQuestSelectionMaster; // x22
  System_Collections_Generic_IEnumerable_T__o *v65; // x23
  System_Collections_Generic_List_int__o *v66; // x21
  int32_t Value; // w0
  System_Collections_Generic_IEnumerable_T__o *ClassBoardCommandSpellEffectId; // x0
  System_Int32_array *v69; // x21
  AssetManager_o *v70; // x20
  Il2CppObject **v71; // x19
  Il2CppObject *SingleEntity; // x21
  System_Collections_Generic_HashSet_int__o *v73; // x23
  int32_t v74; // w22
  Il2CppObject **p__8__1; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v76; // x22
  _BOOL8 v77; // x0
  __int64 v78; // x1
  _BOOL8 v79; // x0
  __int64 v80; // x1
  Il2CppObject *v81; // x26
  System_String_o *age; // x23
  System_Action_o *monitor; // x24
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  Il2CppObject *v85; // x24
  System_Action_o *v86; // x23
  Il2CppObject *v87; // x1
  System_String_o *v88; // x0
  __int64 v89; // x1
  Il2CppObject *_8__1; // x25
  AssetStorageLoadWrapper_o *v91; // x22
  AssetLoader_LoadEndDataHandler_o *klass; // x23
  System_String_o *v93; // x21
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  __int64 v95; // x1
  int v96; // w20
  __int64 v97; // x21
  __int64 v98; // x21
  Il2CppObject *v99; // x23
  AtlasManager_o *v100; // x21
  System_Action_o *v101; // x22
  Il2CppObject *v102; // x22
  System_Action_o *v103; // x21
  Il2CppObject *v104; // x22
  BattlePerformance_o *perf; // x20
  System_Action_o *v106; // x21
  Il2CppObject *v107; // x20
  System_Action_o *v108; // x21
  __int64 v109; // x20
  __int64 v110; // x20
  __int64 v111; // x20
  __int64 v112; // x20
  Il2CppObject *v113; // x22
  AtlasManager_o *v114; // x20
  System_Action_o *v115; // x21
  AssetManager_o *v116; // x20
  Il2CppObject **p__2__current; // x19
  BattleRootComponent_o *v118; // [xsp+8h] [xbp-C8h]
  struct BattleRootComponent___c__DisplayClass13_0_o **v119; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_HashSet_Enumerator_T__o v120; // [xsp+18h] [xbp-B8h] BYREF
  int v121[2]; // [xsp+30h] [xbp-A0h]
  int v122; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_HashSet_Enumerator_T__o v123; // [xsp+40h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-78h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v125; // [xsp+60h] [xbp-70h] BYREF
  int32_t v126; // [xsp+7Ch] [xbp-54h] BYREF

  v2 = this;
  if ( (byte_41850AA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&BattleDataDefine_TypeInfo, v4);
    sub_B2C35C(&BattleEffectUtility_TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_BattleMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMaster_BgmMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_BuffMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_ConstantMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v11);
    sub_B2C35C(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v21);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v22);
    sub_B2C35C(&int_TypeInfo, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v28);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v29);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v30);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v31);
    sub_B2C35C(&OptionManager_TypeInfo, v32);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v33);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__, v34);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v35);
    sub_B2C35C(&SoundManager_TypeInfo, v36);
    sub_B2C35C(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__0__, v37);
    sub_B2C35C(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__1__, v38);
    sub_B2C35C(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__2__, v39);
    sub_B2C35C(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__3__, v40);
    sub_B2C35C(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__4__, v41);
    sub_B2C35C(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__5__, v42);
    sub_B2C35C(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__6__, v43);
    sub_B2C35C(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__7__, v44);
    sub_B2C35C(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__8__, v45);
    sub_B2C35C(&BattleRootComponent___c__DisplayClass13_0_TypeInfo, v46);
    sub_B2C35C(&StringLiteral_2440/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/, v47);
    sub_B2C35C(&StringLiteral_2435/*"BATTLE_EFFECT_ID_3003001"*/, v48);
    sub_B2C35C(&StringLiteral_2758/*"Battle/DropEffect/{0}"*/, v49);
    sub_B2C35C(&StringLiteral_2759/*"Battle/Effect/"*/, v50);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)sub_B2C35C(&StringLiteral_2752/*"Battle"*/, v51);
    byte_41850AA = 1;
  }
  v126 = 0;
  memset(&v125, 0, sizeof(v125));
  entity = 0LL;
  memset(&v123, 0, sizeof(v123));
  v122 = 0;
  _1__state = v2->fields.__1__state;
  if ( _1__state == 2 )
  {
    p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
    v2->fields.__1__state = -1;
LABEL_120:
    if ( !*p__8__1 )
      goto LABEL_48;
    if ( SLODWORD((*p__8__1)[1].klass) >= v2->fields._loadCntMax_5__2 )
    {
      ActionExtensions__Call(v2->fields.finishCallback, 0LL);
      return 0;
    }
    else
    {
      v2->fields.__2__current = 0LL;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, 0LL);
      *((_DWORD *)p__2__current - 2) = 2;
      return 1;
    }
  }
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !this )
      goto LABEL_48;
    SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     (const MethodInfo_24E43BC *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    v73 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v73,
      (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
    if ( !SingleEntity )
      goto LABEL_48;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)SingleEntity[1].klass;
    if ( !this )
      goto LABEL_48;
    v74 = 0;
    while ( v74 < BattleInfoData__getLastWave((BattleInfoData_o *)this, 0LL) + 1 )
    {
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v74,
                                                                              0LL);
      if ( this )
      {
        if ( !v73 )
          goto LABEL_48;
        System_Collections_Generic_HashSet_int___Add(
          v73,
          (int32_t)this->fields.__8__1,
          (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v74,
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
            if ( !v73 )
              goto LABEL_48;
            System_Collections_Generic_HashSet_int___Add(
              v73,
              HIDWORD(this->fields.ent),
              (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)SingleEntity[1].klass;
          ++v74;
          if ( this )
            continue;
        }
      }
      goto LABEL_48;
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v118 = _4__this;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !v73 )
      goto LABEL_48;
    v76 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v120,
      v73,
      (const MethodInfo_2D85B88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
    v125 = v120;
    while ( 1 )
    {
      v77 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &v125,
              (const MethodInfo_20E7C04 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v77 )
        break;
      if ( !v76 )
        sub_B2C434(v77, v78);
      v79 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v76,
              &entity,
              (int32_t)v125.fields._current,
              (const MethodInfo_24E412C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( v79 )
      {
        ++v2->fields._loadCntMax_5__2;
        if ( !entity )
          sub_B2C434(v79, v80);
        v81 = *p__8__1;
        if ( !*p__8__1 )
          sub_B2C434(v79, v80);
        age = entity->fields.age;
        monitor = (System_Action_o *)v81[1].monitor;
        if ( !monitor )
        {
          monitor = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            monitor,
            v81,
            Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__7__,
            0LL);
          v81[1].monitor = monitor;
          sub_B2C2F8(&v81[1].monitor, monitor);
        }
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__downloadAudioAssetStorage(age, monitor, 1, 0LL);
      }
    }
    v121[0] = 575;
    v122 = 1;
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v125,
      (const MethodInfo_20E7C00 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    v122 = 0;
    ++v2->fields._loadCntMax_5__2;
    if ( !v118 )
      goto LABEL_48;
    assetStorageLoadWrapper = v118->fields.assetStorageLoadWrapper;
    v85 = *p__8__1;
    v86 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v86,
      v85,
      Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__1__,
      0LL);
    if ( !assetStorageLoadWrapper )
      goto LABEL_48;
    AssetStorageLoadWrapper__LoadAudioAssetStorage(
      assetStorageLoadWrapper,
      (System_String_o *)StringLiteral_2752/*"Battle"*/,
      v86,
      1,
      0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)BattleRootComponent__GetLoadDropEffectType(
                                                                            v118,
                                                                            (BattleEntity_o *)SingleEntity,
                                                                            0LL);
    if ( !this )
      goto LABEL_48;
    if ( SLODWORD(this->fields.__2__current) >= 1 )
    {
      v119 = &v2->fields.__8__1;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v120,
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v123 = v120;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                (System_Collections_Generic_List_Enumerator_int__o *)&v123,
                (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        LODWORD(v120.fields._set) = v123.fields._current;
        v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v120);
        v88 = System_String__Format((System_String_o *)StringLiteral_2758/*"Battle/DropEffect/{0}"*/, v87, 0LL);
        _8__1 = (Il2CppObject *)v2->fields.__8__1;
        ++v2->fields._loadCntMax_5__2;
        if ( !_8__1 )
          sub_B2C434(v88, v89);
        v91 = v118->fields.assetStorageLoadWrapper;
        klass = (AssetLoader_LoadEndDataHandler_o *)_8__1[2].klass;
        v93 = v88;
        if ( !klass )
        {
          klass = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            klass,
            _8__1,
            Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__8__,
            0LL);
          _8__1[2].klass = (Il2CppClass *)klass;
          sub_B2C2F8(&_8__1[2], klass);
        }
        if ( !v91 )
          sub_B2C434(v88, v89);
        Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(v91, v93, klass, 1, 0LL);
        if ( !Wrapper__LoadAssetStorage )
        {
          if ( !*v119 )
            sub_B2C434(Wrapper__LoadAssetStorage, v95);
          ++(*v119)->fields.loadCnt;
        }
      }
      v121[0] = 830;
      v96 = ++v122;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v123,
        (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
      if ( v96 && v121[v96 - 1] == 830 )
        v122 = v96 - 1;
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)v118->fields.data;
    if ( !this )
      goto LABEL_48;
    if ( BattleData__IsWarBoard((BattleData_o *)this, 0LL) )
    {
      ++v2->fields._loadCntMax_5__2;
      v97 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v97 + 306) & 1) == 0 )
        sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
      v98 = **(_QWORD **)(v97 + 192);
      if ( (*(_BYTE *)(v98 + 306) & 1) == 0 )
        sub_AC505C(v98);
      v99 = *p__8__1;
      v100 = **(AtlasManager_o ***)(v98 + 184);
      v101 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v101,
        v99,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__2__,
        0LL);
      if ( !v100 )
        goto LABEL_48;
      AtlasManager__LoadWarBoardAtlas(v100, v101, 0LL);
    }
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( OptionManager__isSavedMemoryMode(0LL) )
    {
      v102 = (Il2CppObject *)v2->fields.__8__1;
      ++v2->fields._loadCntMax_5__2;
      v103 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v103,
        v102,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__3__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadFaceBattleAtlas(v103, 0LL);
    }
    v104 = (Il2CppObject *)v2->fields.__8__1;
    ++v2->fields._loadCntMax_5__2;
    perf = v118->fields.perf;
    v106 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v106,
      v104,
      Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__4__,
      0LL);
    if ( !perf )
      goto LABEL_48;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)BattlePerformance__LoadEventInfoPointGauge(
                                                                            perf,
                                                                            v106,
                                                                            v2->fields.eventId,
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
    v107 = (Il2CppObject *)v2->fields.__8__1;
    ++v2->fields._loadCntMax_5__2;
    v108 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v108,
      v107,
      Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__5__,
      0LL);
    AtlasManager__LoadEventAtlas(v108, 1, 0LL);
    v109 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v109 + 306) & 1) == 0 )
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
    v110 = **(_QWORD **)(v109 + 192);
    if ( (*(_BYTE *)(v110 + 306) & 1) == 0 )
      sub_AC505C(v110);
    this = **(BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o ***)(v110 + 184);
    if ( !this )
      goto LABEL_48;
    AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)this, 0LL);
    ++v2->fields._loadCntMax_5__2;
    v111 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v111 + 306) & 1) == 0 )
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
    v112 = **(_QWORD **)(v111 + 192);
    if ( (*(_BYTE *)(v112 + 306) & 1) == 0 )
      sub_AC505C(v112);
    v113 = *p__8__1;
    v114 = **(AtlasManager_o ***)(v112 + 184);
    v115 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v115,
      v113,
      Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__6__,
      0LL);
    if ( !v114 )
      goto LABEL_48;
    AtlasManager__LoadBuffIconAtlas(v114, v115, 0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v116 = (AssetManager_o *)this;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    }
    if ( !v116 )
LABEL_48:
      sub_B2C434(this, method);
    AssetManager__UpdateLoadParallelMax(v116, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
    goto LABEL_120;
  }
  result = 0;
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v55 = (Il2CppObject *)sub_B2C42C(BattleRootComponent___c__DisplayClass13_0_TypeInfo);
    System_Object___ctor(v55, 0LL);
    v56 = (Il2CppObject **)&v2->fields.__8__1;
    v2->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass13_0_o *)v55;
    sub_B2C2F8(&v2->fields.__8__1, v55);
    v57 = v2->fields.__8__1;
    if ( v57 )
    {
      v57->fields.loadCnt = 0;
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)v2->fields.ent;
      v2->fields._loadCntMax_5__2 = 0;
      if ( this )
      {
        BattleEffectId = QuestPhaseEntity__getBattleEffectId((QuestPhaseEntity_o *)this, 0, 0LL);
        if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        }
        v126 = BattleEffectUtility__setBattleEffectId(BattleEffectId, 0LL);
        v59 = System_Int32__ToString((int32_t)&v126, 0LL);
        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)System_String__Concat_44305532(
                                                                                (System_String_o *)StringLiteral_2759/*"Battle/Effect/"*/,
                                                                                v59,
                                                                                0LL);
        ++v2->fields._loadCntMax_5__2;
        if ( _4__this )
        {
          v60 = _4__this->fields.assetStorageLoadWrapper;
          v61 = *v56;
          v62 = (System_String_o *)this;
          v63 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            v63,
            v61,
            Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__0__,
            0LL);
          if ( v60 )
          {
            this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                                                    v60,
                                                                                    v62,
                                                                                    v63,
                                                                                    1,
                                                                                    0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !*v56 )
                goto LABEL_48;
              ++LODWORD((*v56)[1].klass);
            }
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (ConstantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ConstantMaster___);
            this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BuffMaster___);
            if ( this )
            {
              v65 = *(System_Collections_Generic_IEnumerable_T__o **)&this->fields._loadCntMax_5__2;
              v66 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_49702036(
                v66,
                v65,
                (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
              if ( Master_WarQuestSelectionMaster )
              {
                this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)ConstantMaster__GetValue(
                                                                                        Master_WarQuestSelectionMaster,
                                                                                        (System_String_o *)StringLiteral_2440/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/,
                                                                                        0LL);
                if ( v66 )
                {
                  System_Collections_Generic_List_int___Add(
                    v66,
                    (int32_t)this,
                    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
                  Value = ConstantMaster__GetValue(
                            Master_WarQuestSelectionMaster,
                            (System_String_o *)StringLiteral_2435/*"BATTLE_EFFECT_ID_3003001"*/,
                            0LL);
                  System_Collections_Generic_List_int___Add(
                    v66,
                    Value,
                    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
                  ClassBoardCommandSpellEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleRootComponent__GetClassBoardCommandSpellEffectId(
                                                                                                    _4__this,
                                                                                                    0LL);
                  System_Collections_Generic_List_int___AddRange(
                    v66,
                    ClassBoardCommandSpellEffectId,
                    (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
                  v69 = System_Collections_Generic_List_int___ToArray(
                          v66,
                          (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
                  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                  }
                  this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)ServantAssetLoadManager__preloadBattleCommonEffect(
                                                                                          v69,
                                                                                          0LL);
                  if ( _4__this->fields.data )
                  {
                    BattleData__addLoadedCommonEffectPath(_4__this->fields.data, (System_String_array *)this, 0LL);
                    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
                    v70 = (AssetManager_o *)this;
                    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                    }
                    if ( v70 )
                    {
                      AssetManager__UpdateLoadParallelMax(
                        v70,
                        BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                        0LL);
                      v2->fields.__2__current = 0LL;
                      v71 = &v2->fields.__2__current;
                      sub_B2C2F8(v71, 0LL);
                      result = 1;
                      *((_DWORD *)v71 - 2) = 1;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  sub_B2C2F8(&this->fields.commonData, common);
}


void __fastcall BattleRootComponent___c__DisplayClass12_0___LoadAsset_b__2(
        BattleRootComponent___c__DisplayClass12_0_o *this,
        AssetData_o *motionData,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_AssetData__o *motionDataList; // x0

  if ( (byte_41850A4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetData__Add__, motionData);
    byte_41850A4 = 1;
  }
  motionDataList = this->fields.motionDataList;
  if ( !motionDataList )
    sub_B2C434(0LL, motionData);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)motionDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)motionData,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_AssetData__Add__);
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
  sub_B2C2F8(&this->fields, cameraData);
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

  if ( (byte_41850A5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__RemoveAt__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v3);
    byte_41850A5 = 1;
  }
  bgmList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.bgmList;
  if ( !bgmList
    || (System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          bgmList,
          bgmList->fields._size - 1,
          (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_string__RemoveAt__),
        (bgmList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.__4__this) == 0LL) )
  {
    sub_B2C434(bgmList, method);
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
  struct System_Action_string__o *_9__2; // x22
  int32_t questId; // w20
  int32_t questPhase; // w21
  AvalonSceneManager_o *Instance; // x0
  __int64 v13; // x1
  struct BattleRootComponent_o *_4__this; // x8

  if ( (byte_41850A7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string___ctor__, demo1);
    sub_B2C35C(&System_Action_string__TypeInfo, v5);
    sub_B2C35C(&ScriptManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B2C35C(&Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__2__, v8);
    byte_41850A7 = 1;
  }
  if ( System_String__IsNullOrEmpty(demo1, 0LL) )
  {
    _9__2 = this->fields.__9__2;
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    if ( !_9__2 )
    {
      _9__2 = (struct System_Action_string__o *)sub_B2C42C(System_Action_string__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__2,
        (Il2CppObject *)this,
        Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__2__,
        (const MethodInfo_24BBAD8 *)Method_System_Action_string___ctor__);
      this->fields.__9__2 = _9__2;
      sub_B2C2F8(&this->fields.__9__2, _9__2);
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
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    _4__this = this->fields.__4__this;
    if ( !_4__this || !Instance )
      sub_B2C434(Instance, v13);
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
  __int64 v5; // x1

  if ( (byte_41850A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDeside);
    byte_41850A6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B2C434(Instance, v5);
  }
  BattleRootComponent__TerminalTransition((BattleRootComponent_o *)Instance, this->fields.info, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass22_0___TransitionTerminalOrBattleScript_b__2(
        BattleRootComponent___c__DisplayClass22_0_o *this,
        System_String_o *demo2,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleRootComponent_o *_4__this; // x0
  struct BattleRootComponent_o *v7; // x8

  if ( (byte_41850A8 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, demo2);
    byte_41850A8 = 1;
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
    sub_B2C434(_4__this, v5);
  }
  _4__this = (BattleRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  v7 = this->fields.__4__this;
  if ( !v7 || !_4__this )
    goto LABEL_9;
  AvalonSceneManager__transitionSceneRefresh(
    (AvalonSceneManager_o *)_4__this,
    v7->fields.nextscenetype,
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
  BattleRootComponent__loadOutGameAsset_d__19_o *v2; // x19
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
  struct BattleRootComponent_o *_4__this; // x21
  Il2CppObject *v18; // x20
  UnityEngine_WaitForEndOfFrame_o *v19; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  Il2CppObject **p__8__2; // x20
  System_Collections_IEnumerator_o *v23; // x0
  Il2CppObject **v24; // x19
  int v25; // w8
  Il2CppObject *v26; // x21
  Il2CppObject **p__8__1; // x20
  Il2CppObject *v28; // x22
  System_Action_o *v29; // x21
  Il2CppObject *v30; // x21
  Il2CppObject *v31; // x22
  System_Action_o *v32; // x21
  UnityEngine_WaitForEndOfFrame_o *v33; // x20
  Il2CppObject **p__8__3; // x22
  struct BattleRootComponent___c__DisplayClass19_0_o *_8__3; // x8
  Il2CppObject *v36; // x21
  System_Action_o *v37; // x20
  UnityEngine_WaitForEndOfFrame_o *v38; // x20
  Il2CppObject *v39; // x21
  System_Action_o *v40; // x20
  __int64 v41; // x0
  UnityEngine_WaitForEndOfFrame_o *v42; // x20
  Il2CppObject *v43; // x21
  System_Action_o *v44; // x20
  __int64 v45; // x0
  UnityEngine_WaitForEndOfFrame_o *v46; // x20
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x0
  int v50; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_41850AB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&System_GC_TypeInfo, v4);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&OptionManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    sub_B2C35C(&Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__0__, v8);
    sub_B2C35C(&Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__1__, v9);
    sub_B2C35C(&Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__2__, v10);
    sub_B2C35C(&BattleRootComponent___c__DisplayClass19_0_TypeInfo, v11);
    sub_B2C35C(&Method_BattleRootComponent___c__DisplayClass19_1__loadOutGameAsset_b__3__, v12);
    sub_B2C35C(&BattleRootComponent___c__DisplayClass19_1_TypeInfo, v13);
    sub_B2C35C(&Method_BattleRootComponent___c__DisplayClass19_2__loadOutGameAsset_b__4__, v14);
    sub_B2C35C(&BattleRootComponent___c__DisplayClass19_2_TypeInfo, v15);
    this = (BattleRootComponent__loadOutGameAsset_d__19_o *)sub_B2C35C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v16);
    byte_41850AB = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v18 = (Il2CppObject *)sub_B2C42C(BattleRootComponent___c__DisplayClass19_0_TypeInfo);
      System_Object___ctor(v18, 0LL);
      v2->fields.__8__3 = (struct BattleRootComponent___c__DisplayClass19_0_o *)v18;
      sub_B2C2F8(&v2->fields.__8__3, v18);
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
      System_GC__Collect_43492776(0LL);
      v19 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v19, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v19;
      p__2__current = &v2->fields.__2__current;
      sub_B2C2F8(p__2__current, v19);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      this = (BattleRootComponent__loadOutGameAsset_d__19_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_106;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__loadOutGameAsset_d__19_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_106;
      v23 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v23;
      v24 = &v2->fields.__2__current;
      sub_B2C2F8(v24, v23);
      v25 = 2;
      goto LABEL_104;
    case 2:
      v2->fields.__1__state = -1;
LABEL_18:
      if ( !_4__this )
        goto LABEL_106;
      this = (BattleRootComponent__loadOutGameAsset_d__19_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_106;
      if ( BattlePerformance__isActiveEventInfoGauge((BattlePerformance_o *)this, 0LL) )
        goto LABEL_30;
      v26 = (Il2CppObject *)sub_B2C42C(BattleRootComponent___c__DisplayClass19_1_TypeInfo);
      System_Object___ctor(v26, 0LL);
      v2->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass19_1_o *)v26;
      p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
      sub_B2C2F8(&v2->fields.__8__1, v26);
      if ( !v2->fields.__8__1 )
        goto LABEL_106;
      v2->fields.__8__1->fields.isEventAtlasLoaded = 0;
      v28 = *p__8__1;
      v29 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v29, v28, Method_BattleRootComponent___c__DisplayClass19_1__loadOutGameAsset_b__3__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadEventAtlas(v29, 1, 0LL);
LABEL_27:
      if ( !*p__8__1 )
        goto LABEL_106;
      if ( !LOBYTE((*p__8__1)[1].klass) )
      {
        v50 = 0;
        v49 = j_il2cpp_value_box_0(int_TypeInfo, &v50);
        v2->fields.__2__current = (Il2CppObject *)v49;
        v24 = &v2->fields.__2__current;
        sub_B2C2F8(v24, v49);
        v25 = 3;
        goto LABEL_104;
      }
      *p__8__1 = 0LL;
      sub_B2C2F8(p__8__1, 0LL);
LABEL_30:
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      this = (BattleRootComponent__loadOutGameAsset_d__19_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v30 = (Il2CppObject *)sub_B2C42C(BattleRootComponent___c__DisplayClass19_2_TypeInfo);
        System_Object___ctor(v30, 0LL);
        v2->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass19_2_o *)v30;
        p__8__2 = (Il2CppObject **)&v2->fields.__8__2;
        sub_B2C2F8(&v2->fields.__8__2, v30);
        if ( v2->fields.__8__2 )
        {
          v2->fields.__8__2->fields.isFaceAtlasLoaded = 0;
          v31 = *p__8__2;
          v32 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(v32, v31, Method_BattleRootComponent___c__DisplayClass19_2__loadOutGameAsset_b__4__, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__LoadFaceAtlas(v32, 1, 0LL);
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
              System_GC__Collect_43492776(0LL);
              v33 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v33, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v33;
              v24 = &v2->fields.__2__current;
              sub_B2C2F8(v24, v33);
              v25 = 5;
            }
            else
            {
              v50 = 0;
              v48 = j_il2cpp_value_box_0(int_TypeInfo, &v50);
              v2->fields.__2__current = (Il2CppObject *)v48;
              v24 = &v2->fields.__2__current;
              sub_B2C2F8(v24, v48);
              v25 = 4;
            }
            goto LABEL_104;
          }
        }
LABEL_106:
        sub_B2C434(this, method);
      }
LABEL_48:
      p__8__3 = (Il2CppObject **)&v2->fields.__8__3;
      _8__3 = v2->fields.__8__3;
      if ( !_8__3 )
        goto LABEL_106;
      _8__3->fields.isCharaGraphOptionAtlasLoaded = 0;
      v36 = *p__8__3;
      v37 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v37, v36, Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__0__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadCharaGraphOptionAtlas(v37, 1, 0LL);
LABEL_54:
      if ( !*p__8__3 )
        goto LABEL_106;
      if ( !LOBYTE((*p__8__3)[1].klass) )
      {
        v50 = 0;
        v41 = j_il2cpp_value_box_0(int_TypeInfo, &v50);
        v2->fields.__2__current = (Il2CppObject *)v41;
        v24 = &v2->fields.__2__current;
        sub_B2C2F8(v24, v41);
        v25 = 6;
LABEL_104:
        *((_DWORD *)v24 - 2) = v25;
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
        System_GC__Collect_43492776(0LL);
        v38 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v38, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v38;
        v24 = &v2->fields.__2__current;
        sub_B2C2F8(v24, v38);
        v25 = 7;
        goto LABEL_104;
      }
LABEL_64:
      if ( !*p__8__3 )
        goto LABEL_106;
      BYTE1((*p__8__3)[1].klass) = 0;
      v39 = *p__8__3;
      v40 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v40, v39, Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__1__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadBanner(v40, 1, 0LL);
LABEL_71:
      if ( !*p__8__3 )
        goto LABEL_106;
      if ( !BYTE1((*p__8__3)[1].klass) )
      {
        v50 = 0;
        v45 = j_il2cpp_value_box_0(int_TypeInfo, &v50);
        v2->fields.__2__current = (Il2CppObject *)v45;
        v24 = &v2->fields.__2__current;
        sub_B2C2F8(v24, v45);
        v25 = 8;
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
        System_GC__Collect_43492776(0LL);
        v42 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v42, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v42;
        v24 = &v2->fields.__2__current;
        sub_B2C2F8(v24, v42);
        v25 = 9;
        goto LABEL_104;
      }
LABEL_81:
      if ( !*p__8__3 )
        goto LABEL_106;
      BYTE2((*p__8__3)[1].klass) = 0;
      v43 = *p__8__3;
      v44 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v44, v43, Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__2__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadEventUI(v44, 1, 0LL);
LABEL_88:
      if ( !*p__8__3 )
        goto LABEL_106;
      if ( !BYTE2((*p__8__3)[1].klass) )
      {
        v50 = 0;
        v47 = j_il2cpp_value_box_0(int_TypeInfo, &v50);
        v2->fields.__2__current = (Il2CppObject *)v47;
        v24 = &v2->fields.__2__current;
        sub_B2C2F8(v24, v47);
        v25 = 10;
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
        System_GC__Collect_43492776(0LL);
        v46 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v46, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v46;
        v24 = &v2->fields.__2__current;
        sub_B2C2F8(v24, v46);
        v25 = 11;
        goto LABEL_104;
      }
LABEL_98:
      this = (BattleRootComponent__loadOutGameAsset_d__19_o *)v2->fields.callback;
      if ( !this )
        goto LABEL_106;
      System_Action__Invoke((System_Action_o *)this, 0LL);
      return 0;
    case 3:
      p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
      v2->fields.__1__state = -1;
      goto LABEL_27;
    case 4:
      p__8__2 = (Il2CppObject **)&v2->fields.__8__2;
      v2->fields.__1__state = -1;
      goto LABEL_39;
    case 5:
      v2->fields.__8__2 = 0LL;
      v2->fields.__1__state = -1;
      sub_B2C2F8(&v2->fields.__8__2, 0LL);
      goto LABEL_48;
    case 6:
      p__8__3 = (Il2CppObject **)&v2->fields.__8__3;
      v2->fields.__1__state = -1;
      goto LABEL_54;
    case 7:
      p__8__3 = (Il2CppObject **)&v2->fields.__8__3;
      v2->fields.__1__state = -1;
      goto LABEL_64;
    case 8:
      p__8__3 = (Il2CppObject **)&v2->fields.__8__3;
      v2->fields.__1__state = -1;
      goto LABEL_71;
    case 9:
      p__8__3 = (Il2CppObject **)&v2->fields.__8__3;
      v2->fields.__1__state = -1;
      goto LABEL_81;
    case 0xA:
      p__8__3 = (Il2CppObject **)&v2->fields.__8__3;
      v2->fields.__1__state = -1;
      goto LABEL_88;
    case 0xB:
      v2->fields.__1__state = -1;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleRootComponent__loadOutGameAsset_d__19_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  sub_B2C2F8(p_method, object);
}


System_IAsyncResult_o *__fastcall BattleRootComponent_callBackBeginResume__BeginInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, &v5, callback, object);
}


void __fastcall BattleRootComponent_callBackBeginResume__EndInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD); // x0
  BattleRootComponent_callBackBeginResume_o *v19; // x8
  __int64 *v20; // x20
  __int64 v21; // x21
  void (__fastcall *v22)(__int64); // x22
  char v23; // w22
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  BattleRootComponent_callBackBeginResume_o *v31; // [xsp+8h] [xbp-38h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(__int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v19->fields.extra_arg, method, v2, v3);
      if ( (sub_B2C38C(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) )
        goto LABEL_35;
      v22(v21);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B2C384(v21);
      v24 = sub_B2C788(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_34;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v17 = sub_AC5258(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD))sub_B2C40C(v16, v21);
        (*v18)(v20, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AC5258(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v15)(v20, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v22)(v20, v21);
    goto LABEL_36;
  }
}