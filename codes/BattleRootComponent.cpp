void __fastcall BattleRootComponent___ctor(BattleRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


System_Int32_array *__fastcall BattleRootComponent__GetClassBoardCommandSpellEffectId(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v2; // x19
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  BalanceConfig_c *v5; // x8
  int32_t ClassBoardReleaseQuestId; // w21
  bool IsQuestClear_25987760; // w0
  Il2CppClass *klass; // x8
  _QWORD *data; // x8
  __int64 v10; // x9
  int v11; // w8
  ClassBoardCommandSpellMaster_o *v12; // x21
  unsigned int v13; // w10
  __int64 v14; // x8
  _QWORD *v15; // x22
  __int64 v16; // x25
  int v17; // w8
  unsigned int v18; // w23
  __int64 v19; // x8
  __int64 v20; // x8
  unsigned __int64 v21; // x24
  System_Int32_array *EffectIdArray; // x0
  __int64 v23; // x1
  __int64 v24; // x1
  System_Int32_array *v25; // x22
  int v26; // w20
  __int64 v27; // x0
  __int64 v29; // x0
  __int64 v30; // [xsp+8h] [xbp-A8h]
  Il2CppObject *SingleEntity; // [xsp+10h] [xbp-A0h]
  unsigned int v32; // [xsp+18h] [xbp-98h]
  int v33; // [xsp+1Ch] [xbp-94h]
  _BYTE v34[28]; // [xsp+20h] [xbp-90h] BYREF
  int v35; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_42AD5A4 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_BattleMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    byte_42AD5A4 = 1;
  }
  entitys = 0LL;
  memset(&v36, 0, sizeof(v36));
  v35 = 0;
  v2 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v2,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_WarQuestSelectionMaster,
                   (const MethodInfo_23E25C4 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v5->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_25987760 = CondType__IsQuestClear_25987760(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( !SingleEntity || !IsQuestClear_25987760 )
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v2,
             (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  klass = SingleEntity[1].klass;
  if ( !klass || (data = klass->_1.this_arg.data) == 0LL || (v10 = data[2]) == 0 )
LABEL_57:
    sub_B52A5C(Master_WarQuestSelectionMaster, v4);
  v11 = *(_DWORD *)(v10 + 24);
  if ( v11 >= 1 )
  {
    v33 = 0;
    v12 = (ClassBoardCommandSpellMaster_o *)Master_WarQuestSelectionMaster;
    v13 = 0;
    v30 = v10;
    while ( 1 )
    {
      if ( v13 >= v11 )
        goto LABEL_58;
      v14 = *(_QWORD *)(v10 + 8LL * (int)v13 + 32);
      if ( !v14 )
        goto LABEL_57;
      v32 = v13;
      Master_WarQuestSelectionMaster = SingleEntity[1].klass;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_57;
      Master_WarQuestSelectionMaster = BattleInfoData__getUserServantFromID(
                                         (BattleInfoData_o *)Master_WarQuestSelectionMaster,
                                         *(_QWORD *)(v14 + 24),
                                         0LL);
      if ( Master_WarQuestSelectionMaster )
      {
        v15 = Master_WarQuestSelectionMaster;
        Master_WarQuestSelectionMaster = (void *)BasicHelper__IsNullOrEmpty(
                                                   *((System_Collections_ICollection_o **)Master_WarQuestSelectionMaster
                                                   + 65),
                                                   0LL);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
        {
          v16 = v15[65];
          if ( !v16 )
            goto LABEL_57;
          v17 = *(_DWORD *)(v16 + 24);
          if ( v17 >= 1 )
            break;
        }
      }
LABEL_55:
      v10 = v30;
      v11 = *(_DWORD *)(v30 + 24);
      v13 = v32 + 1;
      if ( (int)(v32 + 1) >= v11 )
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v2,
                 (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    v18 = 0;
    while ( v18 < v17 )
    {
      v19 = *(_QWORD *)(v16 + 8LL * (int)v18 + 32);
      if ( !v19 || !v12 )
        goto LABEL_57;
      Master_WarQuestSelectionMaster = (void *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                                 v12,
                                                 &entitys,
                                                 *(_DWORD *)(v19 + 16),
                                                 *(_DWORD *)(v19 + 20),
                                                 0LL);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        Master_WarQuestSelectionMaster = entitys;
        if ( !entitys )
          goto LABEL_57;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v34,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
          (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
        v36 = *(System_Collections_Generic_List_Enumerator_T__o *)v34;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v36,
                  (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
        {
          if ( !v36.fields.current )
            sub_B52A5C(0LL, v24);
          EffectIdArray = ClassBoardCommandSpellEntity__GetEffectIdArray(
                            (ClassBoardCommandSpellEntity_o *)v36.fields.current,
                            0LL);
          v25 = EffectIdArray;
          if ( !EffectIdArray )
            sub_B52A5C(0LL, v23);
          v20 = *(_QWORD *)&EffectIdArray->max_length;
          if ( (int)v20 >= 1 )
          {
            v21 = 0LL;
            do
            {
              if ( v21 >= (unsigned int)v20 )
              {
                v27 = sub_B52A88(EffectIdArray);
                sub_B52A28(v27, 0LL);
              }
              if ( !v2 )
                sub_B52A5C(EffectIdArray, v23);
              EffectIdArray = (System_Int32_array *)System_Collections_Generic_HashSet_int___Add(
                                                      v2,
                                                      v25->m_Items[v21 + 1],
                                                      (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
              LODWORD(v20) = v25->max_length;
              ++v21;
            }
            while ( (__int64)v21 < (int)v20 );
          }
        }
        *(_DWORD *)&v34[4 * v33 + 24] = 252;
        v26 = ++v35;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v36,
          (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
        if ( v26 )
        {
          v33 = v26;
          if ( *(_DWORD *)&v34[4 * v26 + 20] == 252 )
          {
            v35 = v26 - 1;
            v33 = v26 - 1;
          }
        }
        else
        {
          v33 = 0;
        }
      }
      v17 = *(_DWORD *)(v16 + 24);
      if ( (int)++v18 >= v17 )
        goto LABEL_55;
    }
LABEL_58:
    v29 = sub_B52A88(Master_WarQuestSelectionMaster);
    sub_B52A28(v29, 0LL);
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v2,
           (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Collections_Generic_List_int__o *__fastcall BattleRootComponent__GetLoadDropEffectType(
        BattleRootComponent_o *this,
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x21
  System_Collections_Generic_List_int__o *v5; // x19
  _BOOL8 v6; // x0
  struct BattleInfoData_o *battleInfo; // x8
  System_Collections_Generic_IEnumerable_T__o *enemyDeck; // x1
  Il2CppClass *klass; // x24
  const char *namespaze; // x8
  int v11; // w25
  __int64 v12; // x9
  __int64 v13; // x26
  int v14; // w9
  __int64 v15; // x27
  __int64 v16; // x20
  __int64 v17; // x1
  _BOOL8 v18; // x0
  struct BattleInfoData_o *v19; // x8
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x20
  int max_length; // w8
  unsigned int v22; // w21
  BattleInfoData_StageCutinInfo_o *v23; // x8
  struct DropInfo_array *dropInfos; // x24
  int v25; // w8
  unsigned int v26; // w25
  DropInfo_o *v27; // x26
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x0
  BattleEntity_o *v32; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42AD5A3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_DeckData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_DeckData__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_DeckData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_DeckData___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_DeckData__TypeInfo);
    byte_42AD5A3 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_DeckData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_DeckData___ctor__);
  v5 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !battleEntity )
    return v5;
  battleInfo = battleEntity->fields.battleInfo;
  if ( !battleInfo )
    return v5;
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.enemyDeck;
  if ( enemyDeck )
  {
    if ( !v4 )
      goto LABEL_59;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
      enemyDeck,
      (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_59;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.callDeck;
  if ( enemyDeck )
  {
    if ( !v4 )
      goto LABEL_59;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
      enemyDeck,
      (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_59;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.shiftDeck;
  if ( enemyDeck )
  {
    if ( !v4 )
      goto LABEL_59;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
      enemyDeck,
      (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_59;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.transformDeck;
  v32 = battleEntity;
  if ( enemyDeck )
  {
    if ( !v4 )
      goto LABEL_59;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v4,
      (EventMissionProgressRequest_Argument_ProgressData_o *)enemyDeck,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_DeckData__Add__);
  }
  else if ( !v4 )
  {
    goto LABEL_59;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
  v34 = v33;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v34,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    if ( !v18 )
      break;
    if ( !v34.fields.current )
      sub_B52A5C(v18, v17);
    klass = v34.fields.current[1].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( (int)namespaze >= 1 )
      {
        v11 = 0;
        do
        {
          if ( v11 >= (unsigned int)namespaze )
          {
            v31 = sub_B52A88(v18);
            sub_B52A28(v31, 0LL);
          }
          v12 = *((_QWORD *)&klass->_1.byval_arg.data + v11);
          if ( !v12 )
            sub_B52A5C(v18, v17);
          v13 = *(_QWORD *)(v12 + 88);
          if ( v13 )
          {
            v14 = *(_DWORD *)(v13 + 24);
            if ( v14 >= 1 )
            {
              v15 = 0LL;
              do
              {
                if ( (unsigned int)v15 >= v14 )
                {
                  v29 = sub_B52A88(v18);
                  sub_B52A28(v29, 0LL);
                }
                v16 = *(_QWORD *)(v13 + 32 + 8 * v15);
                if ( !v16 )
                  sub_B52A5C(v18, v17);
                v17 = *(unsigned int *)(v16 + 48);
                if ( (_DWORD)v17 )
                {
                  if ( !v5 )
                    sub_B52A5C(v18, v17);
                  v18 = System_Collections_Generic_List_int___Contains(
                          v5,
                          v17,
                          (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
                  if ( !v18 )
                    System_Collections_Generic_List_int___Add(
                      v5,
                      *(_DWORD *)(v16 + 48),
                      (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
                }
                v14 = *(_DWORD *)(v13 + 24);
                ++v15;
              }
              while ( (int)v15 < v14 );
              namespaze = klass->_1.namespaze;
            }
          }
          ++v11;
        }
        while ( v11 < (int)namespaze );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v34,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
  v19 = v32->fields.battleInfo;
  if ( !v19 )
LABEL_59:
    sub_B52A5C(v6, enemyDeck);
  stageCutins = v19->fields.stageCutins;
  if ( stageCutins )
  {
    max_length = stageCutins->max_length;
    if ( max_length >= 1 )
    {
      v22 = 0;
      while ( 1 )
      {
        if ( v22 >= max_length )
          goto LABEL_60;
        v23 = stageCutins->m_Items[v22];
        if ( !v23 )
          goto LABEL_59;
        dropInfos = v23->fields.dropInfos;
        if ( !dropInfos )
          goto LABEL_59;
        v25 = dropInfos->max_length;
        if ( v25 >= 1 )
          break;
LABEL_54:
        max_length = stageCutins->max_length;
        if ( (int)++v22 >= max_length )
          return v5;
      }
      v26 = 0;
      while ( v26 < v25 )
      {
        v27 = dropInfos->m_Items[v26];
        if ( !v27 )
          goto LABEL_59;
        enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v27->fields.effectType;
        if ( (_DWORD)enemyDeck )
        {
          if ( !v5 )
            goto LABEL_59;
          v6 = System_Collections_Generic_List_int___Contains(
                 v5,
                 (int32_t)enemyDeck,
                 (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( !v6 )
            System_Collections_Generic_List_int___Add(
              v5,
              v27->fields.effectType,
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        }
        v25 = dropInfos->max_length;
        if ( (int)++v26 >= v25 )
          goto LABEL_54;
      }
LABEL_60:
      v30 = sub_B52A88(v6);
      sub_B52A28(v30, 0LL);
    }
  }
  return v5;
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

  if ( (byte_42AD59A & 1) == 0 )
  {
    sub_B52984(&BattleRootComponent__LoadAsset_d__12_TypeInfo);
    byte_42AD59A = 1;
  }
  v9 = (BattleRootComponent__LoadAsset_d__12_o *)sub_B52A54(BattleRootComponent__LoadAsset_d__12_TypeInfo);
  BattleRootComponent__LoadAsset_d__12___ctor(v9, 0, 0LL);
  if ( !v9 )
    sub_B52A5C(v10, v11);
  v9->fields.__4__this = this;
  sub_B52920(&v9->fields.__4__this);
  v9->fields.ent = ent;
  sub_B52920(&v9->fields.ent);
  v9->fields.eventId = eventId;
  v9->fields.battleEnt = battleEnt;
  sub_B52920(&v9->fields.battleEnt);
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

  if ( (byte_42AD59B & 1) == 0 )
  {
    sub_B52984(&BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_TypeInfo);
    byte_42AD59B = 1;
  }
  v9 = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)sub_B52A54(BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_TypeInfo);
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__13___ctor(v9, 0, 0LL);
  if ( !v9 )
    sub_B52A5C(v10, v11);
  v9->fields.__4__this = this;
  sub_B52920(&v9->fields.__4__this);
  v9->fields.ent = ent;
  sub_B52920(&v9->fields.ent);
  v9->fields.eventId = eventId;
  v9->fields.finishCallback = finishCallback;
  sub_B52920(&v9->fields.finishCallback);
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall BattleRootComponent__LoadBatteBgm(
        BattleRootComponent_o *this,
        System_Collections_Generic_List_string__o *bgmList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BattleRootComponent___c__DisplayClass16_0_o *v7; // x22
  System_Action_o *v8; // x0
  __int64 v9; // x1
  System_Action_o **p_callback; // x20
  struct System_Collections_Generic_List_string__o *v11; // x8
  int size; // w9
  System_String_o *v13; // x19
  System_Action_o *v14; // x20

  if ( (byte_42AD59C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_BattleRootComponent___c__DisplayClass16_0__LoadBatteBgm_b__0__);
    sub_B52984(&BattleRootComponent___c__DisplayClass16_0_TypeInfo);
    byte_42AD59C = 1;
  }
  v7 = (BattleRootComponent___c__DisplayClass16_0_o *)sub_B52A54(BattleRootComponent___c__DisplayClass16_0_TypeInfo);
  BattleRootComponent___c__DisplayClass16_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_12;
  v7->fields.bgmList = bgmList;
  sub_B52920(&v7->fields);
  v7->fields.__4__this = this;
  sub_B52920(&v7->fields.__4__this);
  v7->fields.callback = callback;
  p_callback = &v7->fields.callback;
  sub_B52920(&v7->fields.callback);
  v11 = v7->fields.bgmList;
  if ( !v11 )
    goto LABEL_12;
  size = v11->fields._size;
  if ( size <= 0 )
  {
    v8 = *p_callback;
    if ( *p_callback )
    {
      System_Action__Invoke(v8, 0LL);
      return;
    }
LABEL_12:
    sub_B52A5C(v8, v9);
  }
  v13 = v11->fields._items->m_Items[size - 1];
  v14 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_BattleRootComponent___c__DisplayClass16_0__LoadBatteBgm_b__0__,
    0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__downloadAudioAssetStorage(v13, v14, 1, 0LL);
}


void __fastcall BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf || (BattlePerformance__SetDownloadEventSprite(perf, 0LL), (perf = this->fields.perf) == 0LL) )
    sub_B52A5C(perf, method);
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
  TerminalPramsManager_c *v4; // x0
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42AD5A1 & 1) == 0 )
  {
    sub_B52984(&ScriptManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD5A1 = 1;
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
  if ( !byte_42AC2AB )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2AB = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v6);
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, (Il2CppObject *)info, 1, 0LL);
}


void __fastcall BattleRootComponent__TransitionTerminalOrBattleScript(
        BattleRootComponent_o *this,
        BattleScriptRootComponent_TalkScriptInfo_o *info,
        const MethodInfo *method)
{
  BattleRootComponent___c__DisplayClass22_0_o *v5; // x20
  BattleScriptRootComponent_TalkScriptInfo_o *isLose; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *v7; // x1
  Il2CppObject **p_info; // x21
  long double v9; // q0
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  const MethodInfo *v12; // x2
  int32_t qId; // w22
  int32_t pId; // w23
  struct BattleData_o *v15; // x8
  int64_t overwriteEndScriptQuestId; // x22
  int32_t questId; // w23
  int32_t ScriptQuestId; // w22
  QuestEntity_o *QuestEntity; // x0
  int32_t questPhase; // w24
  ScriptManager_o *v21; // x23
  int32_t winResult; // w25
  int32_t v23; // w24
  ScriptManager_o *v24; // x23
  int32_t v25; // w25
  ScriptManager_c *v26; // x0
  System_String_o *textPath; // x23
  System_String_o *ScriptAssetName; // x0
  System_String_o *v29; // x22
  int32_t v30; // w19
  int32_t v31; // w21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v32; // x22
  CommonUI_o *Instance; // x19
  System_String_o *v34; // x21
  System_String_o *v35; // x22
  NotificationDialog_ClickDelegate_o *v36; // x23
  QuestPhaseDetailEntity_o *entity; // [xsp+68h] [xbp-48h] BYREF

  if ( (byte_42AD5A2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_string___ctor__);
    sub_B52984(&System_Action_string__TypeInfo);
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestScriptReleaseMaster___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&MyRoomStateMaterial_TypeInfo);
    sub_B52984(&ScriptManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__0__);
    sub_B52984(&Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__1__);
    sub_B52984(&BattleRootComponent___c__DisplayClass22_0_TypeInfo);
    sub_B52984(&StringLiteral_2458/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/);
    sub_B52984(&StringLiteral_2459/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/);
    byte_42AD5A2 = 1;
  }
  entity = 0LL;
  v5 = (BattleRootComponent___c__DisplayClass22_0_o *)sub_B52A54(BattleRootComponent___c__DisplayClass22_0_TypeInfo);
  BattleRootComponent___c__DisplayClass22_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_67;
  v5->fields.__4__this = this;
  sub_B52920(&v5->fields);
  v5->fields.info = info;
  p_info = (Il2CppObject **)&v5->fields.info;
  *(__n128 *)&v9 = sub_B52920(&v5->fields.info);
  data = this->fields.data;
  if ( !data )
    goto LABEL_67;
  battleEvent = data->fields.battleEvent;
  if ( !battleEvent
    || (((__int64 (__fastcall *)(struct BaseBattleEvent_o *, Il2CppMethodPointer, long double))battleEvent->klass->vtable._16_GoNextScene.method)(
          battleEvent,
          battleEvent->klass->vtable._17_GetSaveData.methodPtr,
          v9) & 1) == 0 )
  {
    SkillLvMaster__ResetBaseTime(0LL);
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)*p_info;
    if ( !*p_info )
      goto LABEL_67;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)BattleScriptRootComponent_TalkScriptInfo__isLose(isLose, 0LL);
    v7 = (BattleScriptRootComponent_TalkScriptInfo_o *)*p_info;
    if ( ((unsigned __int8)isLose & 1) != 0 )
    {
      BattleRootComponent__TerminalTransition((BattleRootComponent_o *)isLose, v7, v12);
      return;
    }
    if ( !v7 )
      goto LABEL_67;
    qId = v7->fields.qId;
    v5->fields.questId = qId;
    pId = v7->fields.pId;
    v5->fields.questPhase = pId;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetCachedSelectedBranchQuestId(qId, pId, 0LL);
    v15 = this->fields.data;
    if ( !v15 )
      goto LABEL_67;
    overwriteEndScriptQuestId = v15->fields.overwriteEndScriptQuestId;
    if ( overwriteEndScriptQuestId )
    {
      if ( !*p_info )
        goto LABEL_67;
      HIDWORD((*p_info)[1].klass) = overwriteEndScriptQuestId;
      questId = v5->fields.questId;
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
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestScriptReleaseMaster___)) == 0LL
      || (ScriptQuestId = QuestScriptReleaseMaster__GetScriptQuestId(
                            (QuestScriptReleaseMaster_o *)isLose,
                            overwriteEndScriptQuestId,
                            v5->fields.questPhase,
                            2,
                            0LL),
          (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___),
          !*p_info)
      || !isLose )
    {
LABEL_67:
      sub_B52A5C(isLose, v7);
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
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose )
      goto LABEL_67;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)isLose,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !*p_info || !isLose )
      goto LABEL_67;
    QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)isLose, HIDWORD((*p_info)[1].klass), 0LL);
    if ( !QuestEntity || !QuestEntity__IsOpenByTime(QuestEntity, 0, 0LL) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v34 = LocalizationManager__Get((System_String_o *)StringLiteral_2459/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, 0LL);
      v35 = LocalizationManager__Get((System_String_o *)StringLiteral_2458/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, 0LL);
      v36 = (NotificationDialog_ClickDelegate_o *)sub_B52A54(NotificationDialog_ClickDelegate_TypeInfo);
      NotificationDialog_ClickDelegate___ctor(
        v36,
        (Il2CppObject *)v5,
        Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__1__,
        0LL);
      if ( !Instance )
        goto LABEL_67;
      CommonUI__OpenNotificationDialog_18160348(
        Instance,
        v34,
        v35,
        v36,
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
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !v5->fields.info )
          goto LABEL_67;
        questPhase = v5->fields.questPhase;
        v21 = (ScriptManager_o *)isLose;
        winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v5->fields.info, 0LL);
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
        if ( !v21 )
          goto LABEL_67;
        if ( ScriptManager__IsExistScriptFile(v21, (System_String_o *)isLose, 0LL) )
          goto LABEL_70;
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !v5->fields.info )
          goto LABEL_67;
        v23 = v5->fields.questPhase;
        v24 = (ScriptManager_o *)isLose;
        v25 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v5->fields.info, 0LL);
        if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScriptManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        }
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd2(
                                                                 ScriptQuestId,
                                                                 v23,
                                                                 v25,
                                                                 0LL);
        if ( !v24 )
          goto LABEL_67;
        if ( ScriptManager__IsExistScriptFile(v24, (System_String_o *)isLose, 0LL) )
        {
LABEL_70:
          v26 = ScriptManager_TypeInfo;
          if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ScriptManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
            v26 = ScriptManager_TypeInfo;
          }
          textPath = v26->static_fields->textPath;
          ScriptAssetName = ScriptManager__GetScriptAssetName(ScriptQuestId, 0LL);
          v29 = System_String__Concat_44568316(textPath, ScriptAssetName, 0LL);
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          if ( AssetManager__isExistAssetStorage(v29, 0LL) )
          {
            isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
      v30 = v5->fields.questId;
      v31 = v5->fields.questPhase;
      v32 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_string__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v32,
        (Il2CppObject *)v5,
        Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__0__,
        (const MethodInfo_2627780 *)Method_System_Action_string___ctor__);
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      ScriptManager__LoadBattleEndGameDemo(v30, v31, 1, (System_Action_string__o *)v32, 0, 0LL);
    }
  }
}


void __fastcall BattleRootComponent__beginInitialize(BattleRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *Value; // x20
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  BattleEntity_o *SingleEntity; // x20
  BattleFBXComponent_c *v8; // x8
  BattlePerformance_c *v9; // x0
  QuestPhaseEntity_o *QuestPhaseEntity; // x21
  BattleData_o *data; // x22
  int64_t createdAt; // x22
  System_Int32_array *v13; // x22
  const MethodInfo *v14; // x4
  System_Collections_IEnumerator_o *Asset; // x0
  UnityEngine_Object_o *debugButton; // x20
  ManagerConfig_c *v17; // x0

  if ( (byte_42AD599 & 1) == 0 )
  {
    sub_B52984(&AssetStorageLoadWrapper_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&BattleActionData_TypeInfo);
    sub_B52984(&BattleEffectUtility_TypeInfo);
    sub_B52984(&BattleFBXComponent_TypeInfo);
    sub_B52984(&BattlePerformance_TypeInfo);
    sub_B52984(&BuffList_TypeInfo);
    sub_B52984(&CatAndMouseGame_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_BattleBgMaster___);
    sub_B52984(&Method_DataManager_GetMaster_BattleMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_B52984(&System_GC_TypeInfo);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B52984(&StringLiteral_15479/*"WINGNAME"*/);
    byte_42AD599 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15479/*"WINGNAME"*/, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  CatAndMouseGame__SixHomeBuilding(Value, 0LL);
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_44029184(0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
  {
    assetStorageLoadWrapper = (AssetStorageLoadWrapper_o *)sub_B52A54(AssetStorageLoadWrapper_TypeInfo);
    AssetStorageLoadWrapper___ctor(assetStorageLoadWrapper, 0LL);
  }
  this->fields.assetStorageLoadWrapper = assetStorageLoadWrapper;
  sub_B52920(&this->fields.assetStorageLoadWrapper);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  SingleEntity = (BattleEntity_o *)DataMasterBase_object__object__long___GetSingleEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_WarQuestSelectionMaster,
                                     (const MethodInfo_23E25C4 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v8 = BattleFBXComponent_TypeInfo;
  if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v8 = BattleFBXComponent_TypeInfo;
  }
  v8->static_fields->EnableEvent = 1;
  v9 = BattlePerformance_TypeInfo;
  if ( (BYTE3(BattlePerformance_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformance_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
    v9 = BattlePerformance_TypeInfo;
  }
  v9->static_fields->CameraFlip = 0;
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
    if ( !byte_42AC952 )
    {
      sub_B52984(&SkillLvMaster_TypeInfo);
      byte_42AC952 = 1;
    }
    SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = createdAt;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  v13 = (System_Int32_array *)*((_QWORD *)Master_WarQuestSelectionMaster + 9);
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  BattleEffectUtility__AddNotPreloadEffectId(v13, 0LL);
  Asset = BattleRootComponent__LoadAsset(this, QuestPhaseEntity, SingleEntity->fields.eventId, SingleEntity, v14);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, Asset, 0LL);
  Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  *((_DWORD *)Master_WarQuestSelectionMaster + 36) = 3;
  Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  if ( *((_BYTE *)Master_WarQuestSelectionMaster + 140) )
  {
    Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    v17 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v17 = ManagerConfig_TypeInfo;
    }
    if ( v17->static_fields->UseDebugCommand )
    {
      Master_WarQuestSelectionMaster = this->fields.debugButton;
      if ( Master_WarQuestSelectionMaster )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
        return;
      }
LABEL_70:
      sub_B52A5C(Master_WarQuestSelectionMaster, v6);
    }
  }
}


void __fastcall BattleRootComponent__beginResume(
        BattleRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20
  struct BattleRootComponent_callBackBeginResume_o **p_callbackBeginResumeFunc; // x19
  BattleRootComponent_callBackBeginResume_o *v8; // x20
  struct BattleRootComponent_callBackBeginResume_o *callbackBeginResumeFunc; // t1

  if ( (byte_42AD598 & 1) == 0 )
  {
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD598 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v6 )
    sub_B52A5C(Instance, v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  callbackBeginResumeFunc = this->fields.callbackBeginResumeFunc;
  p_callbackBeginResumeFunc = &this->fields.callbackBeginResumeFunc;
  v8 = callbackBeginResumeFunc;
  if ( callbackBeginResumeFunc )
  {
    *p_callbackBeginResumeFunc = 0LL;
    sub_B52920(p_callbackBeginResumeFunc);
    BattleRootComponent_callBackBeginResume__Invoke(v8, 0LL);
  }
}


void __fastcall BattleRootComponent__beginStartUp(
        BattleRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x9
  WebViewManager_o *Instance; // x21
  __int64 Item; // x0
  __int64 v8; // x1
  WebViewManager_o *v9; // x21
  struct BattleLogic_o *logic; // x20
  struct BattleLogic_o *v11; // x8
  struct BattleLogic_LOGICTYPE_array *logiclist; // x8
  struct BattleLogic_o *v13; // x8
  struct BattleLogic_LOGICTYPE_array *v14; // x8
  AndroidBackKeyManager_c *v15; // x0
  __int64 v16; // x0

  if ( (byte_42AD59D & 1) == 0 )
  {
    sub_B52984(&AndroidBackKeyManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_B52984(&BattleLogic_LOGICTYPE___TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_B52984(&StringLiteral_20374/*"limitCount"*/);
    sub_B52984(&StringLiteral_11052/*"QUEST_START"*/);
    sub_B52984(&StringLiteral_22163/*"servantId"*/);
    byte_42AD59D = 1;
  }
  if ( data )
  {
    v5 = *(&System_Collections_Generic_Dictionary_string__int__TypeInfo->_2.bitflags2 + 1);
    if ( *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (System_Collections_Generic_Dictionary_string__int__c *)data->klass->_2.typeHierarchy[v5 - 1] == System_Collections_Generic_Dictionary_string__int__TypeInfo )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_string__int___get_Item(
               (System_Collections_Generic_Dictionary_string__int__o *)data,
               (System_String_o *)StringLiteral_22163/*"servantId"*/,
               (const MethodInfo_2F0FFC4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !Instance )
        goto LABEL_23;
      LODWORD(Instance->fields.baseWindow) = Item;
      v9 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_string__int___get_Item(
               (System_Collections_Generic_Dictionary_string__int__o *)data,
               (System_String_o *)StringLiteral_20374/*"limitCount"*/,
               (const MethodInfo_2F0FFC4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !v9 )
        goto LABEL_23;
      HIDWORD(v9->fields.baseWindow) = Item;
      Item = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item )
        goto LABEL_23;
      *(_BYTE *)(Item + 44) = 1;
      Item = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item )
        goto LABEL_23;
      *(_BYTE *)(Item + 45) = 1;
      logic = this->fields.logic;
      Item = sub_B5299C(BattleLogic_LOGICTYPE___TypeInfo, 2LL);
      if ( !logic )
        goto LABEL_23;
      logic->fields.logiclist = (struct BattleLogic_LOGICTYPE_array *)Item;
      sub_B52920(&logic->fields.logiclist);
      v11 = this->fields.logic;
      if ( !v11 )
        goto LABEL_23;
      logiclist = v11->fields.logiclist;
      if ( !logiclist )
        goto LABEL_23;
      if ( logiclist->max_length )
      {
        logiclist->m_Items[1] = 18;
        v13 = this->fields.logic;
        if ( !v13 )
          goto LABEL_23;
        v14 = v13->fields.logiclist;
        if ( !v14 )
          goto LABEL_23;
        if ( v14->max_length > 1 )
        {
          v14->m_Items[2] = 21;
          goto LABEL_18;
        }
      }
    }
    else
    {
      Item = sub_B52D50(data);
    }
    v16 = sub_B52A88(Item);
    sub_B52A28(v16, 0LL);
  }
LABEL_18:
  SceneRootComponent__beginStartUp_17470260((SceneRootComponent_o *)this, 0LL);
  v15 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v15 = AndroidBackKeyManager_TypeInfo;
  }
  v15->static_fields->ToastEnabled = 1;
  Item = (__int64)this->fields.myFSM;
  if ( !Item )
LABEL_23:
    sub_B52A5C(Item, v8);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Item, (System_String_o *)StringLiteral_11052/*"QUEST_START"*/, 0LL);
}


void __fastcall BattleRootComponent__endQuest(BattleRootComponent_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  __int64 v4; // x20
  __int64 v5; // x20
  __int64 v6; // x20
  __int64 v7; // x20
  const MethodInfo *v8; // x1
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x2
  System_Collections_IEnumerator_o *OutGameAsset; // x1

  if ( (byte_42AD59E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_BattleRootComponent_goNextScene__);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__);
    byte_42AD59E = 1;
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
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
  v5 = **(_QWORD **)(v4 + 192);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AEB684(v5);
  perf = **(BattlePerformance_o ***)(v5 + 184);
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
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AEB684(v7);
  perf = **(BattlePerformance_o ***)(v7 + 184);
  if ( !perf
    || (AtlasManager__UnloadWarBoardAtlas((AtlasManager_o *)perf, 0LL), (perf = this->fields.perf) == 0LL)
    || (BattlePerformance__ReleaseEventInfoPointGauge(perf, 0LL),
        (perf = (BattlePerformance_o *)this->fields.data) == 0LL) )
  {
LABEL_37:
    sub_B52A5C(perf, method);
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
    v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleRootComponent_goNextScene__, 0LL);
    OutGameAsset = BattleRootComponent__loadOutGameAsset(this, v9, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, OutGameAsset, 0LL);
  }
  else
  {
    BattleRootComponent__goNextScene(this, v8);
  }
}


void __fastcall BattleRootComponent__goNextScene(BattleRootComponent_o *this, const MethodInfo *method)
{
  BattleRootComponent_o *v2; // x19
  struct BattleData_o *data; // x9
  struct BattleEntity_o *battle_ent; // x8
  struct QuestEntity_o *quest_ent; // x20
  int32_t questPhase; // w21
  struct BattleData_o *v7; // x8
  int32_t id; // w23
  int32_t win_lose; // w24
  int32_t v10; // w22
  int32_t WinResult; // w25
  BattleScriptRootComponent_TalkScriptInfo_o *v12; // x20
  const MethodInfo *v13; // x2

  v2 = this;
  if ( (byte_42AD5A0 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (BattleRootComponent_o *)sub_B52984(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    byte_42AD5A0 = 1;
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
  v7 = v2->fields.data;
  if ( !v7 )
    goto LABEL_10;
  id = quest_ent->fields.id;
  win_lose = v7->fields.win_lose;
  v10 = (int)this;
  WinResult = BattleData__getWinResult(v2->fields.data, 0LL);
  v12 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_B52A54(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
  BattleScriptRootComponent_TalkScriptInfo___ctor_20442968(v12, v10, id, questPhase, 4, win_lose, WinResult, 0, 0LL);
  this = (BattleRootComponent_o *)v2->fields.data;
  if ( !this
    || (BattleData__release((BattleData_o *)this, 0LL),
        (this = (BattleRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_10:
    sub_B52A5C(this, method);
  }
  CommonUI__SetMaskFadeInitColor((CommonUI_o *)this, 1, 0LL);
  BattleRootComponent__TransitionTerminalOrBattleScript(v2, v12, v13);
}


System_Collections_IEnumerator_o *__fastcall BattleRootComponent__loadOutGameAsset(
        BattleRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BattleRootComponent__loadOutGameAsset_d__19_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42AD59F & 1) == 0 )
  {
    sub_B52984(&BattleRootComponent__loadOutGameAsset_d__19_TypeInfo);
    byte_42AD59F = 1;
  }
  v5 = (BattleRootComponent__loadOutGameAsset_d__19_o *)sub_B52A54(BattleRootComponent__loadOutGameAsset_d__19_TypeInfo);
  BattleRootComponent__loadOutGameAsset_d__19___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.__4__this = this;
  sub_B52920(&v5->fields.__4__this);
  v5->fields.callback = callback;
  sub_B52920(&v5->fields.callback);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleRootComponent__setCallbackBeginResume(
        BattleRootComponent_o *this,
        BattleRootComponent_callBackBeginResume_o *func,
        const MethodInfo *method)
{
  this->fields.callbackBeginResumeFunc = func;
  sub_B52920(&this->fields.callbackBeginResumeFunc);
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
  struct BattleRootComponent_o *_4__this; // x26
  Il2CppObject *v4; // x22
  BattleRootComponent__LoadAsset_d__12_o **p__8__1; // x25
  UnityEngine_WaitForEndOfFrame_o *v6; // x20
  Il2CppObject **p__2__current; // x27
  bool result; // w0
  Il2CppObject **p__8__2; // x22
  Il2CppObject **v10; // x27
  int v11; // w8
  QuestPhaseEntity_o *ent; // x23
  int32_t eventId; // w22
  Il2CppObject *_8__1; // x19
  System_Action_o *v15; // x24
  System_Collections_IEnumerator_o *AssetsIndependentToMainOne; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  BattleDataDefine_c *v18; // x0
  BattleRootComponent__LoadAsset_d__12_o *v19; // x19
  System_String_o *ASSET_BATTLE_COMMON; // x23
  AssetLoader_LoadEndDataHandler_o *v21; // x24
  BattleRootComponent__LoadAsset_d__12_o *v22; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x23
  struct BattleEntity_o *battleEnt; // x8
  struct System_Int32_array **p_fieldMotionIds_5__2; // x22
  struct BattleRootComponent___c__DisplayClass12_0_o *v26; // x8
  struct System_Int32_array *v27; // x27
  __int64 v28; // x8
  unsigned __int64 v29; // x28
  Il2CppObject *v30; // x0
  BattleRootComponent__LoadAsset_d__12_o **v31; // x19
  BattleRootComponent__LoadAsset_d__12_o *v32; // x25
  AssetStorageLoadWrapper_o *v33; // x23
  AssetLoader_LoadEndDataHandler_o *v34; // x24
  System_String_o *v35; // x22
  AssetManager_o *v36; // x22
  BattleRootComponent__LoadAsset_d__12_o *v37; // x8
  struct System_Int32_array *fieldMotionIds_5__2; // x9
  struct BattleRootComponent___c__DisplayClass12_0_o **v39; // x22
  struct BattleEntity_o *v40; // x8
  Il2CppObject *v41; // x23
  System_String_o *v42; // x0
  struct BattleRootComponent___c__DisplayClass12_1_o *_8__2; // x8
  System_String_o *v44; // x23
  BattleRootComponent__LoadAsset_d__12_o **v45; // x20
  struct BattleRootComponent_o *v46; // x19
  AssetStorageLoadWrapper_o *v47; // x24
  Il2CppObject *v48; // x26
  AssetLoader_LoadEndDataHandler_o *v49; // x25
  struct BattleRootComponent___c__DisplayClass12_0_o *v50; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v52; // x8
  AssumedBattleAssetLoadManager_o *AssumedBattleAssetLoadManager_k__BackingField; // x21
  struct BattlePerformance_o *v54; // x8
  __int64 v55; // x0
  BattleRootComponent__LoadAsset_d__12_o *v56; // [xsp+0h] [xbp-60h]
  int32_t v57; // [xsp+8h] [xbp-58h] BYREF
  int v58; // [xsp+Ch] [xbp-54h] BYREF

  v2 = this;
  if ( (byte_42AD83E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
    sub_B52984(&BattleDataDefine_TypeInfo);
    sub_B52984(&System_GC_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_B52984(&System_Collections_Generic_List_AssetData__TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_B52984(&Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__0__);
    sub_B52984(&Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__1__);
    sub_B52984(&Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__2__);
    sub_B52984(&BattleRootComponent___c__DisplayClass12_0_TypeInfo);
    sub_B52984(&Method_BattleRootComponent___c__DisplayClass12_1__LoadAsset_b__3__);
    sub_B52984(&BattleRootComponent___c__DisplayClass12_1_TypeInfo);
    sub_B52984(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_B52984(&StringLiteral_2799/*"Battle/UniqueCamera/"*/);
    sub_B52984(&StringLiteral_2791/*"Battle/Field/{0}"*/);
    this = (BattleRootComponent__LoadAsset_d__12_o *)sub_B52984(&StringLiteral_15031/*"UniqueCameraPrefab"*/);
    byte_42AD83E = 1;
  }
  v58 = 0;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v4 = (Il2CppObject *)sub_B52A54(BattleRootComponent___c__DisplayClass12_0_TypeInfo);
      System_Object___ctor(v4, 0LL);
      p__8__1 = (BattleRootComponent__LoadAsset_d__12_o **)&v2->fields.__8__1;
      v2->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass12_0_o *)v4;
      sub_B52920(&v2->fields.__8__1);
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
      System_GC__Collect_44029184(0LL);
      v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = &v2->fields.__2__current;
      sub_B52920(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      this = (BattleRootComponent__LoadAsset_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_102;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__LoadAsset_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_102;
      v2->fields.__2__current = (Il2CppObject *)AssetManager__WaitForExecutionUnloadUnuseAssets(
                                                  (AssetManager_o *)this,
                                                  0LL);
      v10 = &v2->fields.__2__current;
      sub_B52920(v10);
      v11 = 2;
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
      v15 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v15, _8__1, Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__0__, 0LL);
      if ( !_4__this )
        goto LABEL_102;
      AssetsIndependentToMainOne = BattleRootComponent__LoadAssetsIndependentToMainOne(_4__this, ent, eventId, v15, 0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_35611808(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        AssetsIndependentToMainOne,
        0LL);
      this = *p__8__1;
      if ( !*p__8__1 )
        goto LABEL_102;
      this->fields.__2__current = 0LL;
      sub_B52920(&this->fields.__2__current);
      assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
      v18 = BattleDataDefine_TypeInfo;
      if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v18 = BattleDataDefine_TypeInfo;
      }
      v19 = *p__8__1;
      ASSET_BATTLE_COMMON = v18->static_fields->ASSET_BATTLE_COMMON;
      v21 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v21,
        (Il2CppObject *)v19,
        Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__1__,
        0LL);
      if ( !assetStorageLoadWrapper )
        goto LABEL_102;
      AssetStorageLoadWrapper__LoadAssetStorage(assetStorageLoadWrapper, ASSET_BATTLE_COMMON, v21, 1, 0LL);
      v22 = *p__8__1;
      v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_AssetData__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v23,
        (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_AssetData___ctor__);
      if ( !v22 )
        goto LABEL_102;
      v22->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass12_0_o *)v23;
      sub_B52920(&v22->fields.__8__1);
      battleEnt = v2->fields.battleEnt;
      if ( !battleEnt )
        goto LABEL_102;
      this = (BattleRootComponent__LoadAsset_d__12_o *)battleEnt->fields.battleInfo;
      if ( !this )
        goto LABEL_102;
      p_fieldMotionIds_5__2 = &v2->fields._fieldMotionIds_5__2;
      v2->fields._fieldMotionIds_5__2 = BattleInfoData__GetBattleFieldMotionIds(
                                          (BattleInfoData_o *)this,
                                          v2->fields.ent,
                                          0LL);
      sub_B52920(&v2->fields._fieldMotionIds_5__2);
      v26 = v2->fields.__8__1;
      if ( !v26 )
        goto LABEL_102;
      v26->fields.loadCompCnt = 0;
      v56 = v2;
      v27 = *p_fieldMotionIds_5__2;
      if ( !*p_fieldMotionIds_5__2 )
        goto LABEL_102;
      v28 = *(_QWORD *)&v27->max_length;
      if ( (int)v28 < 1 )
        goto LABEL_46;
      v29 = 0LL;
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
      v39 = &v2->fields.__8__1;
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
    if ( v29 >= (unsigned int)v28 )
    {
      v55 = sub_B52A88(this);
      sub_B52A28(v55, 0LL);
    }
    v57 = v27->m_Items[v29 + 1];
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
    this = (BattleRootComponent__LoadAsset_d__12_o *)System_String__Format(
                                                       (System_String_o *)StringLiteral_2791/*"Battle/Field/{0}"*/,
                                                       v30,
                                                       0LL);
    v31 = p__8__1;
    v32 = *p__8__1;
    if ( !v32 )
      goto LABEL_102;
    v33 = _4__this->fields.assetStorageLoadWrapper;
    v34 = (AssetLoader_LoadEndDataHandler_o *)v32->fields.ent;
    v35 = (System_String_o *)this;
    if ( !v34 )
    {
      v34 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v34,
        (Il2CppObject *)v32,
        Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__2__,
        0LL);
      v32->fields.ent = (struct QuestPhaseEntity_o *)v34;
      sub_B52920(&v32->fields.ent);
    }
    if ( !v33 )
      goto LABEL_102;
    this = (BattleRootComponent__LoadAsset_d__12_o *)AssetStorageLoadWrapper__LoadAssetStorage(v33, v35, v34, 1, 0LL);
    p__8__1 = v31;
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !*v31 )
        goto LABEL_102;
      ++LODWORD((*v31)->fields.__4__this);
    }
    LODWORD(v28) = v27->max_length;
    ++v29;
  }
  while ( (__int64)v29 < (int)v28 );
LABEL_46:
  this = (BattleRootComponent__LoadAsset_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v36 = (AssetManager_o *)this;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  }
  v2 = v56;
  if ( !v36 )
    goto LABEL_102;
  AssetManager__UpdateLoadParallelMax(v36, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
LABEL_52:
  v37 = *p__8__1;
  if ( !*p__8__1 )
    goto LABEL_102;
  if ( !v37->fields.__2__current )
  {
LABEL_56:
    v2->fields.__2__current = 0LL;
    v10 = &v2->fields.__2__current;
    sub_B52920(v10);
    v11 = 3;
LABEL_95:
    *((_DWORD *)v10 - 2) = v11;
    return 1;
  }
  fieldMotionIds_5__2 = v2->fields._fieldMotionIds_5__2;
  if ( !fieldMotionIds_5__2 )
    goto LABEL_102;
  if ( SLODWORD(v37->fields.__4__this) < (signed int)fieldMotionIds_5__2->max_length )
    goto LABEL_56;
  v40 = v2->fields.battleEnt;
  if ( !v40 )
    goto LABEL_102;
  this = (BattleRootComponent__LoadAsset_d__12_o *)v40->fields.battleInfo;
  if ( !this )
    goto LABEL_102;
  this = (BattleRootComponent__LoadAsset_d__12_o *)BattleInfoData__GetUniqueCameraId(
                                                     (BattleInfoData_o *)this,
                                                     v2->fields.ent,
                                                     0LL);
  v58 = (int)this;
  if ( (_DWORD)this )
  {
    v41 = (Il2CppObject *)sub_B52A54(BattleRootComponent___c__DisplayClass12_1_TypeInfo);
    System_Object___ctor(v41, 0LL);
    v2->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass12_1_o *)v41;
    p__8__2 = (Il2CppObject **)&v2->fields.__8__2;
    sub_B52920(&v2->fields.__8__2);
    v42 = System_Int32__ToString((int32_t)&v58, 0LL);
    this = (BattleRootComponent__LoadAsset_d__12_o *)System_String__Concat_44568316(
                                                       (System_String_o *)StringLiteral_2799/*"Battle/UniqueCamera/"*/,
                                                       v42,
                                                       0LL);
    _8__2 = v2->fields.__8__2;
    if ( !_8__2 )
      goto LABEL_102;
    _8__2->fields.uniqueCameraData = 0LL;
    v44 = (System_String_o *)this;
    v45 = p__8__1;
    sub_B52920(&_8__2->fields);
    if ( !_4__this )
      goto LABEL_102;
    v46 = _4__this;
    v47 = _4__this->fields.assetStorageLoadWrapper;
    v48 = *p__8__2;
    v49 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v49,
      v48,
      Method_BattleRootComponent___c__DisplayClass12_1__LoadAsset_b__3__,
      0LL);
    if ( !v47 )
      goto LABEL_102;
    this = (BattleRootComponent__LoadAsset_d__12_o *)AssetStorageLoadWrapper__LoadAssetStorage(v47, v44, v49, 1, 0LL);
    v2->fields._loadSucceeded_5__3 = (unsigned __int8)this & 1;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      _4__this = v46;
    }
    else
    {
      if ( !*v45 )
        goto LABEL_102;
      this = (BattleRootComponent__LoadAsset_d__12_o *)v46->fields.perf;
      _4__this = v46;
      if ( !this )
        goto LABEL_102;
      BattlePerformance__loadStorageObjectCameraCommon(
        (BattlePerformance_o *)this,
        (AssetData_o *)(*v45)->fields.__2__current,
        0LL);
    }
LABEL_13:
    if ( !*p__8__2 )
      goto LABEL_102;
    method = (const MethodInfo *)(*p__8__2)[1].klass;
    if ( !method )
    {
      v2->fields.__2__current = 0LL;
      v10 = &v2->fields.__2__current;
      sub_B52920(v10);
      v11 = 4;
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
        (System_String_o *)StringLiteral_15031/*"UniqueCameraPrefab"*/,
        0LL);
      *p__8__2 = 0LL;
      sub_B52920(p__8__2);
    }
    else
    {
      *p__8__2 = 0LL;
      sub_B52920(p__8__2);
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
  v39 = &v2->fields.__8__1;
  v50 = v2->fields.__8__1;
  if ( !v50 )
    goto LABEL_102;
  if ( !this )
    goto LABEL_102;
  BattlePerformance__loadStorageObjectCommonMotion((BattlePerformance_o *)this, v50->fields.commonData, 0LL);
  if ( !*v39 )
    goto LABEL_102;
  this = (BattleRootComponent__LoadAsset_d__12_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_102;
  BattlePerformance__SetEffectControlObjectFromCommonAsset((BattlePerformance_o *)this, (*v39)->fields.commonData, 0LL);
  if ( !*v39 )
    goto LABEL_102;
  this = (BattleRootComponent__LoadAsset_d__12_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_102;
  BattlePerformance__loadFieldMotion(
    (BattlePerformance_o *)this,
    (*v39)->fields.commonData,
    (*v39)->fields.motionDataList,
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
    (const MethodInfo_1A3BD90 *)Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
  v52 = _4__this->fields.perf;
  if ( !v52 )
    goto LABEL_102;
  AssumedBattleAssetLoadManager_k__BackingField = v52->fields._AssumedBattleAssetLoadManager_k__BackingField;
  this = (BattleRootComponent__LoadAsset_d__12_o *)AssumedBattleAssetSearcherBeforeBattle__Create(0LL);
  if ( !AssumedBattleAssetLoadManager_k__BackingField )
    goto LABEL_102;
  AssumedBattleAssetLoadManager__Preload(
    AssumedBattleAssetLoadManager_k__BackingField,
    (AssumedBattleAssetSearcherBase_o *)this,
    0LL);
LABEL_87:
  if ( !*v39 )
    goto LABEL_102;
  if ( (*v39)->fields.isAssetsLoading )
  {
    v2->fields.__2__current = 0LL;
    v10 = &v2->fields.__2__current;
    sub_B52920(v10);
    v11 = 5;
    goto LABEL_95;
  }
LABEL_90:
  if ( !_4__this )
    goto LABEL_102;
  v54 = _4__this->fields.perf;
  if ( !v54 )
    goto LABEL_102;
  this = (BattleRootComponent__LoadAsset_d__12_o *)v54->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_102;
  if ( AssumedBattleAssetLoadManager__IsPreloading((AssumedBattleAssetLoadManager_o *)this, 0LL) )
  {
    v2->fields.__2__current = 0LL;
    v10 = &v2->fields.__2__current;
    sub_B52920(v10);
    v11 = 6;
    goto LABEL_95;
  }
  BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(_4__this, 0LL);
  this = (BattleRootComponent__LoadAsset_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_102:
    sub_B52A5C(this, method);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_BattleRootComponent__LoadAsset_d__12_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  int32_t _1__state; // w8
  BattleRootComponent_o *_4__this; // x26
  bool result; // w0
  Il2CppObject *v6; // x22
  Il2CppObject **v7; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v8; // x8
  int32_t BattleEffectId; // w22
  System_String_o *v10; // x0
  AssetStorageLoadWrapper_o *v11; // x23
  Il2CppObject *v12; // x25
  System_String_o *v13; // x22
  AssetLoader_LoadEndDataHandler_o *v14; // x24
  ConstantMaster_o *Master_WarQuestSelectionMaster; // x22
  System_Collections_Generic_IEnumerable_T__o *v16; // x23
  System_Collections_Generic_List_int__o *v17; // x21
  int32_t Value; // w0
  System_Collections_Generic_IEnumerable_T__o *ClassBoardCommandSpellEffectId; // x0
  System_Int32_array *v20; // x21
  AssetManager_o *v21; // x20
  Il2CppObject **v22; // x19
  Il2CppObject *SingleEntity; // x21
  System_Collections_Generic_HashSet_int__o *v24; // x23
  int32_t v25; // w22
  Il2CppObject **p__8__1; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x22
  _BOOL8 v28; // x0
  __int64 v29; // x1
  _BOOL8 v30; // x0
  __int64 v31; // x1
  Il2CppObject *v32; // x26
  System_String_o *age; // x23
  System_Action_o *monitor; // x24
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  Il2CppObject *v36; // x24
  System_Action_o *v37; // x23
  Il2CppObject *v38; // x1
  System_String_o *v39; // x0
  __int64 v40; // x1
  Il2CppObject *_8__1; // x25
  AssetStorageLoadWrapper_o *v42; // x22
  AssetLoader_LoadEndDataHandler_o *klass; // x23
  System_String_o *v44; // x21
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  __int64 v46; // x1
  int v47; // w20
  __int64 v48; // x21
  __int64 v49; // x21
  Il2CppObject *v50; // x23
  AtlasManager_o *v51; // x21
  System_Action_o *v52; // x22
  Il2CppObject *v53; // x22
  System_Action_o *v54; // x21
  Il2CppObject *v55; // x22
  BattlePerformance_o *perf; // x20
  System_Action_o *v57; // x21
  Il2CppObject *v58; // x20
  System_Action_o *v59; // x21
  __int64 v60; // x20
  __int64 v61; // x20
  __int64 v62; // x20
  __int64 v63; // x20
  Il2CppObject *v64; // x22
  AtlasManager_o *v65; // x20
  System_Action_o *v66; // x21
  AssetManager_o *v67; // x20
  Il2CppObject **p__2__current; // x19
  BattleRootComponent_o *v69; // [xsp+8h] [xbp-C8h]
  struct BattleRootComponent___c__DisplayClass13_0_o **v70; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_HashSet_Enumerator_T__o v71; // [xsp+18h] [xbp-B8h] BYREF
  int v72[2]; // [xsp+30h] [xbp-A0h]
  int v73; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_HashSet_Enumerator_T__o v74; // [xsp+40h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-78h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v76; // [xsp+60h] [xbp-70h] BYREF
  int32_t v77; // [xsp+7Ch] [xbp-54h] BYREF

  v2 = this;
  if ( (byte_42AD83F & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&BattleDataDefine_TypeInfo);
    sub_B52984(&BattleEffectUtility_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_BattleMaster___);
    sub_B52984(&Method_DataManager_GetMaster_BgmMaster___);
    sub_B52984(&Method_DataManager_GetMaster_BuffMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_B52984(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor___68512808);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&ServantAssetLoadManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__0__);
    sub_B52984(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__1__);
    sub_B52984(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__2__);
    sub_B52984(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__3__);
    sub_B52984(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__4__);
    sub_B52984(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__5__);
    sub_B52984(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__6__);
    sub_B52984(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__7__);
    sub_B52984(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__8__);
    sub_B52984(&BattleRootComponent___c__DisplayClass13_0_TypeInfo);
    sub_B52984(&StringLiteral_2472/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/);
    sub_B52984(&StringLiteral_2467/*"BATTLE_EFFECT_ID_3003001"*/);
    sub_B52984(&StringLiteral_2789/*"Battle/DropEffect/{0}"*/);
    sub_B52984(&StringLiteral_2790/*"Battle/Effect/"*/);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)sub_B52984(&StringLiteral_2784/*"Battle"*/);
    byte_42AD83F = 1;
  }
  v77 = 0;
  memset(&v76, 0, sizeof(v76));
  entity = 0LL;
  memset(&v74, 0, sizeof(v74));
  v73 = 0;
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
      sub_B52920(p__2__current);
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
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !this )
      goto LABEL_48;
    SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     (const MethodInfo_23E25C4 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    v24 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v24,
      (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    if ( !SingleEntity )
      goto LABEL_48;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)SingleEntity[1].klass;
    if ( !this )
      goto LABEL_48;
    v25 = 0;
    while ( v25 < BattleInfoData__getLastWave((BattleInfoData_o *)this, 0LL) + 1 )
    {
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v25,
                                                                              0LL);
      if ( this )
      {
        if ( !v24 )
          goto LABEL_48;
        System_Collections_Generic_HashSet_int___Add(
          v24,
          (int32_t)this->fields.__8__1,
          (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v25,
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
            if ( !v24 )
              goto LABEL_48;
            System_Collections_Generic_HashSet_int___Add(
              v24,
              HIDWORD(this->fields.ent),
              (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)SingleEntity[1].klass;
          ++v25;
          if ( this )
            continue;
        }
      }
      goto LABEL_48;
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v69 = _4__this;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !v24 )
      goto LABEL_48;
    v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v71,
      v24,
      (const MethodInfo_24DA150 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
    v76 = v71;
    while ( 1 )
    {
      v28 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &v76,
              (const MethodInfo_200F134 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v28 )
        break;
      if ( !v27 )
        sub_B52A5C(v28, v29);
      v30 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v27,
              &entity,
              (int32_t)v76.fields._current,
              (const MethodInfo_23E2334 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( v30 )
      {
        ++v2->fields._loadCntMax_5__2;
        if ( !entity )
          sub_B52A5C(v30, v31);
        v32 = *p__8__1;
        if ( !*p__8__1 )
          sub_B52A5C(v30, v31);
        age = entity->fields.age;
        monitor = (System_Action_o *)v32[1].monitor;
        if ( !monitor )
        {
          monitor = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            monitor,
            v32,
            Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__7__,
            0LL);
          v32[1].monitor = monitor;
          sub_B52920(&v32[1].monitor);
        }
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__downloadAudioAssetStorage(age, monitor, 1, 0LL);
      }
    }
    v72[0] = 575;
    v73 = 1;
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v76,
      (const MethodInfo_200F130 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    v73 = 0;
    ++v2->fields._loadCntMax_5__2;
    if ( !v69 )
      goto LABEL_48;
    assetStorageLoadWrapper = v69->fields.assetStorageLoadWrapper;
    v36 = *p__8__1;
    v37 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v37,
      v36,
      Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__1__,
      0LL);
    if ( !assetStorageLoadWrapper )
      goto LABEL_48;
    AssetStorageLoadWrapper__LoadAudioAssetStorage(
      assetStorageLoadWrapper,
      (System_String_o *)StringLiteral_2784/*"Battle"*/,
      v37,
      1,
      0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)BattleRootComponent__GetLoadDropEffectType(
                                                                            v69,
                                                                            (BattleEntity_o *)SingleEntity,
                                                                            0LL);
    if ( !this )
      goto LABEL_48;
    if ( SLODWORD(this->fields.__2__current) >= 1 )
    {
      v70 = &v2->fields.__8__1;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v71,
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_3057DF4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v74 = v71;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                (System_Collections_Generic_List_Enumerator_int__o *)&v74,
                (const MethodInfo_200F3F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        LODWORD(v71.fields._set) = v74.fields._current;
        v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
        v39 = System_String__Format((System_String_o *)StringLiteral_2789/*"Battle/DropEffect/{0}"*/, v38, 0LL);
        _8__1 = (Il2CppObject *)v2->fields.__8__1;
        ++v2->fields._loadCntMax_5__2;
        if ( !_8__1 )
          sub_B52A5C(v39, v40);
        v42 = v69->fields.assetStorageLoadWrapper;
        klass = (AssetLoader_LoadEndDataHandler_o *)_8__1[2].klass;
        v44 = v39;
        if ( !klass )
        {
          klass = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            klass,
            _8__1,
            Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__8__,
            0LL);
          _8__1[2].klass = (Il2CppClass *)klass;
          sub_B52920(&_8__1[2]);
        }
        if ( !v42 )
          sub_B52A5C(v39, v40);
        Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(v42, v44, klass, 1, 0LL);
        if ( !Wrapper__LoadAssetStorage )
        {
          if ( !*v70 )
            sub_B52A5C(Wrapper__LoadAssetStorage, v46);
          ++(*v70)->fields.loadCnt;
        }
      }
      v72[0] = 830;
      v47 = ++v73;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v74,
        (const MethodInfo_200F3EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
      if ( v47 && v72[v47 - 1] == 830 )
        v73 = v47 - 1;
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)v69->fields.data;
    if ( !this )
      goto LABEL_48;
    if ( BattleData__IsWarBoard((BattleData_o *)this, 0LL) )
    {
      ++v2->fields._loadCntMax_5__2;
      v48 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v48 + 306) & 1) == 0 )
        sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
      v49 = **(_QWORD **)(v48 + 192);
      if ( (*(_BYTE *)(v49 + 306) & 1) == 0 )
        sub_AEB684(v49);
      v50 = *p__8__1;
      v51 = **(AtlasManager_o ***)(v49 + 184);
      v52 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v52,
        v50,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__2__,
        0LL);
      if ( !v51 )
        goto LABEL_48;
      AtlasManager__LoadWarBoardAtlas(v51, v52, 0LL);
    }
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( OptionManager__isSavedMemoryMode(0LL) )
    {
      v53 = (Il2CppObject *)v2->fields.__8__1;
      ++v2->fields._loadCntMax_5__2;
      v54 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v54,
        v53,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__3__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadFaceBattleAtlas(v54, 0LL);
    }
    v55 = (Il2CppObject *)v2->fields.__8__1;
    ++v2->fields._loadCntMax_5__2;
    perf = v69->fields.perf;
    v57 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v57,
      v55,
      Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__4__,
      0LL);
    if ( !perf )
      goto LABEL_48;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)BattlePerformance__LoadEventInfoPointGauge(
                                                                            perf,
                                                                            v57,
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
    v58 = (Il2CppObject *)v2->fields.__8__1;
    ++v2->fields._loadCntMax_5__2;
    v59 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v59,
      v58,
      Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__5__,
      0LL);
    AtlasManager__LoadEventAtlas(v59, 1, 0LL);
    v60 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v60 + 306) & 1) == 0 )
      sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
    v61 = **(_QWORD **)(v60 + 192);
    if ( (*(_BYTE *)(v61 + 306) & 1) == 0 )
      sub_AEB684(v61);
    this = **(BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o ***)(v61 + 184);
    if ( !this )
      goto LABEL_48;
    AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)this, 0LL);
    ++v2->fields._loadCntMax_5__2;
    v62 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v62 + 306) & 1) == 0 )
      sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
    v63 = **(_QWORD **)(v62 + 192);
    if ( (*(_BYTE *)(v63 + 306) & 1) == 0 )
      sub_AEB684(v63);
    v64 = *p__8__1;
    v65 = **(AtlasManager_o ***)(v63 + 184);
    v66 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v66,
      v64,
      Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__6__,
      0LL);
    if ( !v65 )
      goto LABEL_48;
    AtlasManager__LoadBuffIconAtlas(v65, v66, 0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v67 = (AssetManager_o *)this;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    }
    if ( !v67 )
LABEL_48:
      sub_B52A5C(this, method);
    AssetManager__UpdateLoadParallelMax(v67, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
    goto LABEL_120;
  }
  result = 0;
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v6 = (Il2CppObject *)sub_B52A54(BattleRootComponent___c__DisplayClass13_0_TypeInfo);
    System_Object___ctor(v6, 0LL);
    v7 = (Il2CppObject **)&v2->fields.__8__1;
    v2->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass13_0_o *)v6;
    sub_B52920(&v2->fields.__8__1);
    v8 = v2->fields.__8__1;
    if ( v8 )
    {
      v8->fields.loadCnt = 0;
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
        v77 = BattleEffectUtility__setBattleEffectId(BattleEffectId, 0LL);
        v10 = System_Int32__ToString((int32_t)&v77, 0LL);
        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)System_String__Concat_44568316(
                                                                                (System_String_o *)StringLiteral_2790/*"Battle/Effect/"*/,
                                                                                v10,
                                                                                0LL);
        ++v2->fields._loadCntMax_5__2;
        if ( _4__this )
        {
          v11 = _4__this->fields.assetStorageLoadWrapper;
          v12 = *v7;
          v13 = (System_String_o *)this;
          v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            v14,
            v12,
            Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__0__,
            0LL);
          if ( v11 )
          {
            this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                                                    v11,
                                                                                    v13,
                                                                                    v14,
                                                                                    1,
                                                                                    0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !*v7 )
                goto LABEL_48;
              ++LODWORD((*v7)[1].klass);
            }
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (ConstantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ConstantMaster___);
            this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_BuffMaster___);
            if ( this )
            {
              v16 = *(System_Collections_Generic_IEnumerable_T__o **)&this->fields._loadCntMax_5__2;
              v17 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_50685004(
                v17,
                v16,
                (const MethodInfo_305644C *)Method_System_Collections_Generic_List_int___ctor___68512808);
              if ( Master_WarQuestSelectionMaster )
              {
                this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)ConstantMaster__GetValue(
                                                                                        Master_WarQuestSelectionMaster,
                                                                                        (System_String_o *)StringLiteral_2472/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/,
                                                                                        0LL);
                if ( v17 )
                {
                  System_Collections_Generic_List_int___Add(
                    v17,
                    (int32_t)this,
                    (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
                  Value = ConstantMaster__GetValue(
                            Master_WarQuestSelectionMaster,
                            (System_String_o *)StringLiteral_2467/*"BATTLE_EFFECT_ID_3003001"*/,
                            0LL);
                  System_Collections_Generic_List_int___Add(
                    v17,
                    Value,
                    (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
                  ClassBoardCommandSpellEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleRootComponent__GetClassBoardCommandSpellEffectId(
                                                                                                    _4__this,
                                                                                                    0LL);
                  System_Collections_Generic_List_int___AddRange(
                    v17,
                    ClassBoardCommandSpellEffectId,
                    (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
                  v20 = System_Collections_Generic_List_int___ToArray(
                          v17,
                          (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
                  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                  }
                  this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)ServantAssetLoadManager__preloadBattleCommonEffect(
                                                                                          v20,
                                                                                          0LL);
                  if ( _4__this->fields.data )
                  {
                    BattleData__addLoadedCommonEffectPath(_4__this->fields.data, (System_String_array *)this, 0LL);
                    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
                    v21 = (AssetManager_o *)this;
                    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                    }
                    if ( v21 )
                    {
                      AssetManager__UpdateLoadParallelMax(
                        v21,
                        BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                        0LL);
                      v2->fields.__2__current = 0LL;
                      v22 = &v2->fields.__2__current;
                      sub_B52920(v22);
                      result = 1;
                      *((_DWORD *)v22 - 2) = 1;
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  sub_B52920(&this->fields.commonData);
}


void __fastcall BattleRootComponent___c__DisplayClass12_0___LoadAsset_b__2(
        BattleRootComponent___c__DisplayClass12_0_o *this,
        AssetData_o *motionData,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_AssetData__o *motionDataList; // x0

  if ( (byte_42AD839 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_AssetData__Add__);
    byte_42AD839 = 1;
  }
  motionDataList = this->fields.motionDataList;
  if ( !motionDataList )
    sub_B52A5C(0LL, motionData);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)motionDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)motionData,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_AssetData__Add__);
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
  sub_B52920(&this->fields);
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
  System_Collections_Generic_List_XWeaponTrail_Element__o *bgmList; // x0

  if ( (byte_42AD83A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_42AD83A = 1;
  }
  bgmList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.bgmList;
  if ( !bgmList
    || (System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          bgmList,
          bgmList->fields._size - 1,
          (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_string__RemoveAt__),
        (bgmList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.__4__this) == 0LL) )
  {
    sub_B52A5C(bgmList, method);
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
  struct System_Action_string__o *_9__2; // x22
  int32_t questId; // w20
  int32_t questPhase; // w21
  AvalonSceneManager_o *Instance; // x0
  __int64 v9; // x1
  struct BattleRootComponent_o *_4__this; // x8

  if ( (byte_42AD83C & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_string___ctor__);
    sub_B52984(&System_Action_string__TypeInfo);
    sub_B52984(&ScriptManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__2__);
    byte_42AD83C = 1;
  }
  if ( System_String__IsNullOrEmpty(demo1, 0LL) )
  {
    _9__2 = this->fields.__9__2;
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    if ( !_9__2 )
    {
      _9__2 = (struct System_Action_string__o *)sub_B52A54(System_Action_string__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__2,
        (Il2CppObject *)this,
        Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__2__,
        (const MethodInfo_2627780 *)Method_System_Action_string___ctor__);
      this->fields.__9__2 = _9__2;
      sub_B52920(&this->fields.__9__2);
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
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    _4__this = this->fields.__4__this;
    if ( !_4__this || !Instance )
      sub_B52A5C(Instance, v9);
    AvalonSceneManager__transitionSceneRefresh(
      Instance,
      _4__this->fields.nextscenetype,
      1,
      (Il2CppObject *)this->fields.info,
      0,
      0LL);
  }
}


void __fastcall BattleRootComponent___c__DisplayClass22_0___TransitionTerminalOrBattleScript_b__1(
        BattleRootComponent___c__DisplayClass22_0_o *this,
        bool isDeside,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42AD83B & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD83B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B52A5C(Instance, v5);
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

  if ( (byte_42AD83D & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42AD83D = 1;
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
    sub_B52A5C(_4__this, v5);
  }
  _4__this = (BattleRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  struct BattleRootComponent_o *_4__this; // x21
  Il2CppObject *v4; // x20
  UnityEngine_WaitForEndOfFrame_o *v5; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  Il2CppObject **p__8__2; // x20
  Il2CppObject **v9; // x19
  int v10; // w8
  Il2CppObject *v11; // x21
  Il2CppObject **p__8__1; // x20
  Il2CppObject *v13; // x22
  System_Action_o *v14; // x21
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x22
  System_Action_o *v17; // x21
  UnityEngine_WaitForEndOfFrame_o *v18; // x20
  Il2CppObject **p__8__3; // x22
  struct BattleRootComponent___c__DisplayClass19_0_o *_8__3; // x8
  Il2CppObject *v21; // x21
  System_Action_o *v22; // x20
  UnityEngine_WaitForEndOfFrame_o *v23; // x20
  Il2CppObject *v24; // x21
  System_Action_o *v25; // x20
  UnityEngine_WaitForEndOfFrame_o *v26; // x20
  Il2CppObject *v27; // x21
  System_Action_o *v28; // x20
  UnityEngine_WaitForEndOfFrame_o *v29; // x20
  int v30; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_42AD840 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&System_GC_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_B52984(&Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__0__);
    sub_B52984(&Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__1__);
    sub_B52984(&Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__2__);
    sub_B52984(&BattleRootComponent___c__DisplayClass19_0_TypeInfo);
    sub_B52984(&Method_BattleRootComponent___c__DisplayClass19_1__loadOutGameAsset_b__3__);
    sub_B52984(&BattleRootComponent___c__DisplayClass19_1_TypeInfo);
    sub_B52984(&Method_BattleRootComponent___c__DisplayClass19_2__loadOutGameAsset_b__4__);
    sub_B52984(&BattleRootComponent___c__DisplayClass19_2_TypeInfo);
    this = (BattleRootComponent__loadOutGameAsset_d__19_o *)sub_B52984(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_42AD840 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v4 = (Il2CppObject *)sub_B52A54(BattleRootComponent___c__DisplayClass19_0_TypeInfo);
      System_Object___ctor(v4, 0LL);
      v2->fields.__8__3 = (struct BattleRootComponent___c__DisplayClass19_0_o *)v4;
      sub_B52920(&v2->fields.__8__3);
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
      System_GC__Collect_44029184(0LL);
      v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v5, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v5;
      p__2__current = &v2->fields.__2__current;
      sub_B52920(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      this = (BattleRootComponent__loadOutGameAsset_d__19_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_106;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__loadOutGameAsset_d__19_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_106;
      v2->fields.__2__current = (Il2CppObject *)AssetManager__WaitForExecutionUnloadUnuseAssets(
                                                  (AssetManager_o *)this,
                                                  0LL);
      v9 = &v2->fields.__2__current;
      sub_B52920(v9);
      v10 = 2;
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
      v11 = (Il2CppObject *)sub_B52A54(BattleRootComponent___c__DisplayClass19_1_TypeInfo);
      System_Object___ctor(v11, 0LL);
      v2->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass19_1_o *)v11;
      p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
      sub_B52920(&v2->fields.__8__1);
      if ( !v2->fields.__8__1 )
        goto LABEL_106;
      v2->fields.__8__1->fields.isEventAtlasLoaded = 0;
      v13 = *p__8__1;
      v14 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v14, v13, Method_BattleRootComponent___c__DisplayClass19_1__loadOutGameAsset_b__3__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadEventAtlas(v14, 1, 0LL);
LABEL_27:
      if ( !*p__8__1 )
        goto LABEL_106;
      if ( !LOBYTE((*p__8__1)[1].klass) )
      {
        v30 = 0;
        v2->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
        v9 = &v2->fields.__2__current;
        sub_B52920(v9);
        v10 = 3;
        goto LABEL_104;
      }
      *p__8__1 = 0LL;
      sub_B52920(p__8__1);
LABEL_30:
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      this = (BattleRootComponent__loadOutGameAsset_d__19_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v15 = (Il2CppObject *)sub_B52A54(BattleRootComponent___c__DisplayClass19_2_TypeInfo);
        System_Object___ctor(v15, 0LL);
        v2->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass19_2_o *)v15;
        p__8__2 = (Il2CppObject **)&v2->fields.__8__2;
        sub_B52920(&v2->fields.__8__2);
        if ( v2->fields.__8__2 )
        {
          v2->fields.__8__2->fields.isFaceAtlasLoaded = 0;
          v16 = *p__8__2;
          v17 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(v17, v16, Method_BattleRootComponent___c__DisplayClass19_2__loadOutGameAsset_b__4__, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__LoadFaceAtlas(v17, 1, 0LL);
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
              System_GC__Collect_44029184(0LL);
              v18 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v18, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v18;
              v9 = &v2->fields.__2__current;
              sub_B52920(v9);
              v10 = 5;
            }
            else
            {
              v30 = 0;
              v2->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
              v9 = &v2->fields.__2__current;
              sub_B52920(v9);
              v10 = 4;
            }
            goto LABEL_104;
          }
        }
LABEL_106:
        sub_B52A5C(this, method);
      }
LABEL_48:
      p__8__3 = (Il2CppObject **)&v2->fields.__8__3;
      _8__3 = v2->fields.__8__3;
      if ( !_8__3 )
        goto LABEL_106;
      _8__3->fields.isCharaGraphOptionAtlasLoaded = 0;
      v21 = *p__8__3;
      v22 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v22, v21, Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__0__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadCharaGraphOptionAtlas(v22, 1, 0LL);
LABEL_54:
      if ( !*p__8__3 )
        goto LABEL_106;
      if ( !LOBYTE((*p__8__3)[1].klass) )
      {
        v30 = 0;
        v2->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
        v9 = &v2->fields.__2__current;
        sub_B52920(v9);
        v10 = 6;
LABEL_104:
        *((_DWORD *)v9 - 2) = v10;
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
        System_GC__Collect_44029184(0LL);
        v23 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v23, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v23;
        v9 = &v2->fields.__2__current;
        sub_B52920(v9);
        v10 = 7;
        goto LABEL_104;
      }
LABEL_64:
      if ( !*p__8__3 )
        goto LABEL_106;
      BYTE1((*p__8__3)[1].klass) = 0;
      v24 = *p__8__3;
      v25 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v25, v24, Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__1__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadBanner(v25, 1, 0LL);
LABEL_71:
      if ( !*p__8__3 )
        goto LABEL_106;
      if ( !BYTE1((*p__8__3)[1].klass) )
      {
        v30 = 0;
        v2->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
        v9 = &v2->fields.__2__current;
        sub_B52920(v9);
        v10 = 8;
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
        System_GC__Collect_44029184(0LL);
        v26 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v26, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v26;
        v9 = &v2->fields.__2__current;
        sub_B52920(v9);
        v10 = 9;
        goto LABEL_104;
      }
LABEL_81:
      if ( !*p__8__3 )
        goto LABEL_106;
      BYTE2((*p__8__3)[1].klass) = 0;
      v27 = *p__8__3;
      v28 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v28, v27, Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__2__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadEventUI(v28, 1, 0LL);
LABEL_88:
      if ( !*p__8__3 )
        goto LABEL_106;
      if ( !BYTE2((*p__8__3)[1].klass) )
      {
        v30 = 0;
        v2->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
        v9 = &v2->fields.__2__current;
        sub_B52920(v9);
        v10 = 10;
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
        System_GC__Collect_44029184(0LL);
        v29 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v29, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v29;
        v9 = &v2->fields.__2__current;
        sub_B52920(v9);
        v10 = 11;
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
      sub_B52920(&v2->fields.__8__2);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_BattleRootComponent__loadOutGameAsset_d__19_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall BattleRootComponent_callBackBeginResume__BeginInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B52928(this, &v5, callback, object);
}


void __fastcall BattleRootComponent_callBackBeginResume__EndInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v19->fields.extra_arg, method, v2, v3);
      if ( (sub_B529B4(v21) & 1) == 0 )
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
      v23 = sub_B529AC(v21);
      v24 = sub_B52DB0(v21);
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
            v17 = sub_AEB880(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD))sub_B52A34(v16, v21);
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
            v15 = sub_AEB880(v20, class_0, v9, v11);
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