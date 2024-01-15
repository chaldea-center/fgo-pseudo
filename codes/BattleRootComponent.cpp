void __fastcall BattleRootComponent___ctor(BattleRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


System_Int32_array *__fastcall BattleRootComponent__GetClassBoardCommandSpellEffectId(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_HashSet_int__o *v18; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_WarQuestSelectionMaster; // x0
  BalanceConfig_c *v20; // x8
  int32_t ClassBoardReleaseQuestId; // w21
  bool IsQuestClear_25438860; // w0
  void *UserServantFromID; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppClass *klass; // x8
  _QWORD *data; // x8
  __int64 v28; // x9
  int v29; // w8
  ClassBoardCommandSpellMaster_o *v30; // x21
  unsigned int v31; // w10
  __int64 v32; // x8
  BattleInfoData_o *v33; // x0
  _QWORD *v34; // x22
  __int64 v35; // x25
  int v36; // w8
  unsigned int v37; // w23
  __int64 v38; // x8
  __int64 v39; // x8
  unsigned __int64 v40; // x24
  System_Int32_array *EffectIdArray; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  System_Int32_array *v44; // x22
  int v45; // w20
  __int64 v47; // [xsp+8h] [xbp-A8h]
  Il2CppObject *SingleEntity; // [xsp+10h] [xbp-A0h]
  unsigned int v49; // [xsp+18h] [xbp-98h]
  int v50; // [xsp+1Ch] [xbp-94h]
  _BYTE v51[28]; // [xsp+20h] [xbp-90h] BYREF
  int v52; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_40F74F3 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&CondType_TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_BattleMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v15);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v17);
    byte_40F74F3 = 1;
  }
  entitys = 0LL;
  memset(&v53, 0, sizeof(v53));
  v52 = 0;
  v18 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3,
                                                       v4);
  System_Collections_Generic_HashSet_int____ctor(
    v18,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   Master_WarQuestSelectionMaster,
                   (const MethodInfo_266F674 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v20 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v20->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_25438860 = CondType__IsQuestClear_25438860(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( !SingleEntity || !IsQuestClear_25438860 )
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v18,
             (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  UserServantFromID = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  klass = SingleEntity[1].klass;
  if ( !klass || (data = klass->_1.this_arg.data) == 0LL || (v28 = data[2]) == 0 )
LABEL_57:
    sub_B170D4();
  v29 = *(_DWORD *)(v28 + 24);
  if ( v29 >= 1 )
  {
    v50 = 0;
    v30 = (ClassBoardCommandSpellMaster_o *)UserServantFromID;
    v31 = 0;
    v47 = v28;
    while ( 1 )
    {
      if ( v31 >= v29 )
        goto LABEL_58;
      v32 = *(_QWORD *)(v28 + 8LL * (int)v31 + 32);
      if ( !v32 )
        goto LABEL_57;
      v49 = v31;
      v33 = (BattleInfoData_o *)SingleEntity[1].klass;
      if ( !v33 )
        goto LABEL_57;
      UserServantFromID = BattleInfoData__getUserServantFromID(v33, *(_QWORD *)(v32 + 24), 0LL);
      if ( UserServantFromID )
      {
        v34 = UserServantFromID;
        UserServantFromID = (void *)BasicHelper__IsNullOrEmpty(
                                      *((System_Collections_ICollection_o **)UserServantFromID + 65),
                                      0LL);
        if ( ((unsigned __int8)UserServantFromID & 1) == 0 )
        {
          v35 = v34[65];
          if ( !v35 )
            goto LABEL_57;
          v36 = *(_DWORD *)(v35 + 24);
          if ( v36 >= 1 )
            break;
        }
      }
LABEL_55:
      v28 = v47;
      v29 = *(_DWORD *)(v47 + 24);
      v31 = v49 + 1;
      if ( (int)(v49 + 1) >= v29 )
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                 (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    v37 = 0;
    while ( v37 < v36 )
    {
      v38 = *(_QWORD *)(v35 + 8LL * (int)v37 + 32);
      if ( !v38 || !v30 )
        goto LABEL_57;
      UserServantFromID = (void *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                    v30,
                                    &entitys,
                                    *(_DWORD *)(v38 + 16),
                                    *(_DWORD *)(v38 + 20),
                                    0LL);
      if ( ((unsigned __int8)UserServantFromID & 1) != 0 )
      {
        if ( !entitys )
          goto LABEL_57;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v51,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
        v53 = *(System_Collections_Generic_List_Enumerator_T__o *)v51;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v53,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
        {
          if ( !v53.fields.current )
            sub_B170D4();
          EffectIdArray = ClassBoardCommandSpellEntity__GetEffectIdArray(
                            (ClassBoardCommandSpellEntity_o *)v53.fields.current,
                            0LL);
          v44 = EffectIdArray;
          if ( !EffectIdArray )
            sub_B170D4();
          v39 = *(_QWORD *)&EffectIdArray->max_length;
          if ( (int)v39 >= 1 )
          {
            v40 = 0LL;
            do
            {
              if ( v40 >= (unsigned int)v39 )
              {
                sub_B17100(EffectIdArray, v42, v43);
                sub_B170A0();
              }
              if ( !v18 )
                sub_B170D4();
              EffectIdArray = (System_Int32_array *)System_Collections_Generic_HashSet_int___Add(
                                                      v18,
                                                      v44->m_Items[v40 + 1],
                                                      (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
              LODWORD(v39) = v44->max_length;
              ++v40;
            }
            while ( (__int64)v40 < (int)v39 );
          }
        }
        *(_DWORD *)&v51[4 * v50 + 24] = 252;
        v45 = ++v52;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v53,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
        if ( v45 )
        {
          v50 = v45;
          if ( *(_DWORD *)&v51[4 * v45 + 20] == 252 )
          {
            v52 = v45 - 1;
            v50 = v45 - 1;
          }
        }
        else
        {
          v50 = 0;
        }
      }
      v36 = *(_DWORD *)(v35 + 24);
      if ( (int)++v37 >= v36 )
        goto LABEL_55;
    }
LABEL_58:
    sub_B17100(UserServantFromID, v24, v25);
    sub_B170A0();
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v18,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Collections_Generic_List_int__o *__fastcall BattleRootComponent__GetLoadDropEffectType(
        BattleRootComponent_o *this,
        BattleEntity_o *battleEntity,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_int__o *v22; // x19
  struct BattleInfoData_o *battleInfo; // x8
  System_Collections_Generic_IEnumerable_T__o *enemyDeck; // x1
  System_Collections_Generic_IEnumerable_T__o *callDeck; // x1
  System_Collections_Generic_IEnumerable_T__o *shiftDeck; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *transformDeck; // x1
  Il2CppClass *klass; // x23
  const char *namespaze; // x8
  int v30; // w24
  __int64 v31; // x9
  __int64 v32; // x25
  int v33; // w9
  __int64 v34; // x26
  __int64 v35; // x28
  __int64 v36; // x1
  _BOOL8 v37; // x0
  __int64 v38; // x2
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F74F2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__, battleEntity);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_DeckData__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_DeckData__AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_DeckData__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_DeckData__GetEnumerator__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_DeckData___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B16FFC(&System_Collections_Generic_List_DeckData__TypeInfo, v16);
    byte_40F74F2 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_DeckData__TypeInfo,
                                                                                                  battleEntity,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_DeckData___ctor__);
  v22 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v18,
                                                    v19,
                                                    v20,
                                                    v21);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( battleEntity )
  {
    battleInfo = battleEntity->fields.battleInfo;
    if ( battleInfo )
    {
      enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.enemyDeck;
      if ( !enemyDeck
        || v17
        && (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
              enemyDeck,
              (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_DeckData__AddRange__),
            (battleInfo = battleEntity->fields.battleInfo) != 0LL) )
      {
        callDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.callDeck;
        if ( !callDeck
          || v17
          && (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
                (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
                callDeck,
                (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_DeckData__AddRange__),
              (battleInfo = battleEntity->fields.battleInfo) != 0LL) )
        {
          shiftDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.shiftDeck;
          if ( !shiftDeck
            || v17
            && (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
                  (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
                  shiftDeck,
                  (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_DeckData__AddRange__),
                (battleInfo = battleEntity->fields.battleInfo) != 0LL) )
          {
            transformDeck = (EventMissionProgressRequest_Argument_ProgressData_o *)battleInfo->fields.transformDeck;
            if ( transformDeck )
            {
              if ( v17 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v17,
                  transformDeck,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_DeckData__Add__);
                goto LABEL_18;
              }
            }
            else if ( v17 )
            {
LABEL_18:
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                &v40,
                (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v17,
                (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
              v41 = v40;
              while ( 1 )
              {
                v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                        &v41,
                        (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
                if ( !v37 )
                  break;
                if ( !v41.fields.current )
                  sub_B170D4();
                klass = v41.fields.current[1].klass;
                if ( klass )
                {
                  namespaze = klass->_1.namespaze;
                  if ( (int)namespaze >= 1 )
                  {
                    v30 = 0;
                    do
                    {
                      if ( v30 >= (unsigned int)namespaze )
                      {
                        sub_B17100(v37, v36, v38);
                        sub_B170A0();
                      }
                      v31 = *((_QWORD *)&klass->_1.byval_arg.data + v30);
                      if ( !v31 )
                        sub_B170D4();
                      v32 = *(_QWORD *)(v31 + 88);
                      if ( v32 )
                      {
                        v33 = *(_DWORD *)(v32 + 24);
                        if ( v33 >= 1 )
                        {
                          v34 = 0LL;
                          do
                          {
                            if ( (unsigned int)v34 >= v33 )
                            {
                              sub_B17100(v37, v36, v38);
                              sub_B170A0();
                            }
                            v35 = *(_QWORD *)(v32 + 32 + 8 * v34);
                            if ( !v35 )
                              sub_B170D4();
                            v36 = *(unsigned int *)(v35 + 48);
                            if ( (_DWORD)v36 )
                            {
                              if ( !v22 )
                                sub_B170D4();
                              v37 = System_Collections_Generic_List_int___Contains(
                                      v22,
                                      v36,
                                      (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
                              if ( !v37 )
                                System_Collections_Generic_List_int___Add(
                                  v22,
                                  *(_DWORD *)(v35 + 48),
                                  (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
                            }
                            v33 = *(_DWORD *)(v32 + 24);
                            ++v34;
                          }
                          while ( (int)v34 < v33 );
                          namespaze = klass->_1.namespaze;
                        }
                      }
                      ++v30;
                    }
                    while ( v30 < (int)namespaze );
                  }
                }
              }
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v41,
                (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
              return v22;
            }
          }
        }
      }
      sub_B170D4();
    }
  }
  return v22;
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

  if ( (byte_40F74E9 & 1) == 0 )
  {
    sub_B16FFC(&BattleRootComponent__LoadAsset_d__12_TypeInfo, ent);
    byte_40F74E9 = 1;
  }
  v9 = (BattleRootComponent__LoadAsset_d__12_o *)sub_B170CC(
                                                   BattleRootComponent__LoadAsset_d__12_TypeInfo,
                                                   ent,
                                                   *(_QWORD *)&eventId,
                                                   battleEnt,
                                                   method);
  BattleRootComponent__LoadAsset_d__12___ctor(v9, 0, 0LL);
  if ( !v9 )
    sub_B170D4();
  v9->fields.__4__this = this;
  sub_B16F98(&v9->fields.__4__this, this);
  v9->fields.ent = ent;
  sub_B16F98(&v9->fields.ent, ent);
  v9->fields.eventId = eventId;
  v9->fields.battleEnt = battleEnt;
  sub_B16F98(&v9->fields.battleEnt, battleEnt);
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

  if ( (byte_40F74EA & 1) == 0 )
  {
    sub_B16FFC(&BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_TypeInfo, ent);
    byte_40F74EA = 1;
  }
  v9 = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_o *)sub_B170CC(
                                                                        BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_TypeInfo,
                                                                        ent,
                                                                        *(_QWORD *)&eventId,
                                                                        finishCallback,
                                                                        method);
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__13___ctor(v9, 0, 0LL);
  if ( !v9 )
    sub_B170D4();
  v9->fields.__4__this = this;
  sub_B16F98(&v9->fields.__4__this, this);
  v9->fields.ent = ent;
  sub_B16F98(&v9->fields.ent, ent);
  v9->fields.eventId = eventId;
  v9->fields.finishCallback = finishCallback;
  sub_B16F98(&v9->fields.finishCallback, finishCallback);
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall BattleRootComponent__LoadBatteBgm(
        BattleRootComponent_o *this,
        System_Collections_Generic_List_string__o *bgmList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BattleRootComponent___c__DisplayClass16_0_o *v13; // x22
  System_Action_o **p_callback; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  struct System_Collections_Generic_List_string__o *v19; // x8
  int size; // w9
  System_String_o *v21; // x19
  System_Action_o *v22; // x20

  if ( (byte_40F74EB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, bgmList);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    sub_B16FFC(&Method_BattleRootComponent___c__DisplayClass16_0__LoadBatteBgm_b__0__, v11);
    sub_B16FFC(&BattleRootComponent___c__DisplayClass16_0_TypeInfo, v12);
    byte_40F74EB = 1;
  }
  v13 = (BattleRootComponent___c__DisplayClass16_0_o *)sub_B170CC(
                                                         BattleRootComponent___c__DisplayClass16_0_TypeInfo,
                                                         bgmList,
                                                         callback,
                                                         method,
                                                         v4);
  BattleRootComponent___c__DisplayClass16_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_12;
  v13->fields.bgmList = bgmList;
  sub_B16F98(&v13->fields, bgmList);
  v13->fields.__4__this = this;
  sub_B16F98(&v13->fields.__4__this, this);
  v13->fields.callback = callback;
  p_callback = &v13->fields.callback;
  sub_B16F98(&v13->fields.callback, callback);
  v19 = v13->fields.bgmList;
  if ( !v19 )
    goto LABEL_12;
  size = v19->fields._size;
  if ( size <= 0 )
  {
    if ( *p_callback )
    {
      System_Action__Invoke(*p_callback, 0LL);
      return;
    }
LABEL_12:
    sub_B170D4();
  }
  v21 = v19->fields._items->m_Items[size - 1];
  v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v13,
    Method_BattleRootComponent___c__DisplayClass16_0__LoadBatteBgm_b__0__,
    0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__downloadAudioAssetStorage(v21, v22, 1, 0LL);
}


void __fastcall BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  BattlePerformance_o *v4; // x0

  perf = this->fields.perf;
  if ( !perf || (BattlePerformance__SetDownloadEventSprite(perf, 0LL), (v4 = this->fields.perf) == 0LL) )
    sub_B170D4();
  BattlePerformance__SetupCommandCardCommonPrefabs(v4, 0LL);
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

  if ( (byte_40F74F0 & 1) == 0 )
  {
    sub_B16FFC(&ScriptManager_TypeInfo, info);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    byte_40F74F0 = 1;
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
  if ( !byte_40F604D )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v6);
    byte_40F604D = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, (Il2CppObject *)info, 1, 0LL);
}


void __fastcall BattleRootComponent__TransitionTerminalOrBattleScript(
        BattleRootComponent_o *this,
        BattleScriptRootComponent_TalkScriptInfo_o *info,
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
  BattleRootComponent___c__DisplayClass22_0_o *v25; // x20
  BattleScriptRootComponent_TalkScriptInfo_o **p_info; // x21
  long double v27; // q0
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  _BOOL8 isLose; // x0
  const MethodInfo *v31; // x2
  BattleScriptRootComponent_TalkScriptInfo_o *v32; // x1
  int32_t qId; // w22
  int32_t pId; // w23
  int32_t CachedSelectedBranchQuestId; // w0
  struct BattleData_o *v36; // x8
  int64_t overwriteEndScriptQuestId; // x22
  int32_t questId; // w23
  WebViewManager_o *Instance; // x0
  QuestScriptReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t ScriptQuestId; // w22
  WebViewManager_o *v42; // x0
  QuestPhaseDetailMaster_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  WebViewManager_o *v48; // x0
  QuestMaster_o *v49; // x0
  QuestEntity_o *QuestEntity; // x0
  WebViewManager_o *v51; // x0
  int32_t questPhase; // w24
  ScriptManager_o *v53; // x23
  int32_t winResult; // w25
  System_String_o *ScriptName_BattleEnd; // x0
  WebViewManager_o *v56; // x0
  int32_t v57; // w24
  ScriptManager_o *v58; // x23
  int32_t v59; // w25
  System_String_o *ScriptName_BattleEnd2; // x0
  ScriptManager_c *v61; // x0
  System_String_o *textPath; // x23
  System_String_o *ScriptAssetName; // x0
  System_String_o *v64; // x22
  AvalonSceneManager_o *v65; // x0
  int32_t v66; // w19
  int32_t v67; // w21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v68; // x22
  CommonUI_o *v69; // x19
  System_String_o *v70; // x21
  System_String_o *v71; // x22
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  NotificationDialog_ClickDelegate_o *v76; // x23
  QuestPhaseDetailEntity_o *entity; // [xsp+68h] [xbp-48h] BYREF

  if ( (byte_40F74F1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string___ctor__, info);
    sub_B16FFC(&System_Action_string__TypeInfo, v7);
    sub_B16FFC(&AssetManager_TypeInfo, v8);
    sub_B16FFC(&NotificationDialog_ClickDelegate_TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestScriptReleaseMaster___, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&MyRoomStateMaterial_TypeInfo, v14);
    sub_B16FFC(&ScriptManager_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_B16FFC(&Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__0__, v20);
    sub_B16FFC(&Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__1__, v21);
    sub_B16FFC(&BattleRootComponent___c__DisplayClass22_0_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_2418/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, v23);
    sub_B16FFC(&StringLiteral_2419/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, v24);
    byte_40F74F1 = 1;
  }
  entity = 0LL;
  v25 = (BattleRootComponent___c__DisplayClass22_0_o *)sub_B170CC(
                                                         BattleRootComponent___c__DisplayClass22_0_TypeInfo,
                                                         info,
                                                         method,
                                                         v3,
                                                         v4);
  BattleRootComponent___c__DisplayClass22_0___ctor(v25, 0LL);
  if ( !v25 )
    goto LABEL_67;
  v25->fields.__4__this = this;
  sub_B16F98(&v25->fields, this);
  v25->fields.info = info;
  p_info = &v25->fields.info;
  *(__n128 *)&v27 = sub_B16F98(&v25->fields.info, info);
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
    if ( !*p_info )
      goto LABEL_67;
    isLose = BattleScriptRootComponent_TalkScriptInfo__isLose(*p_info, 0LL);
    v32 = *p_info;
    if ( isLose )
    {
      BattleRootComponent__TerminalTransition((BattleRootComponent_o *)isLose, v32, v31);
      return;
    }
    if ( !v32 )
      goto LABEL_67;
    qId = v32->fields.qId;
    v25->fields.questId = qId;
    pId = v32->fields.pId;
    v25->fields.questPhase = pId;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    CachedSelectedBranchQuestId = ScriptManager__GetCachedSelectedBranchQuestId(qId, pId, 0LL);
    v36 = this->fields.data;
    if ( !v36 )
      goto LABEL_67;
    overwriteEndScriptQuestId = v36->fields.overwriteEndScriptQuestId;
    if ( overwriteEndScriptQuestId )
    {
      if ( !*p_info )
        goto LABEL_67;
      (*p_info)->fields.qId = overwriteEndScriptQuestId;
      questId = v25->fields.questId;
      if ( (BYTE3(MyRoomStateMaterial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
      }
      MyRoomStateMaterial__SetPlayedBranchQuestData(questId, overwriteEndScriptQuestId, 0LL);
    }
    else
    {
      LODWORD(overwriteEndScriptQuestId) = CachedSelectedBranchQuestId;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (QuestScriptReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Instance,
                                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestScriptReleaseMaster___)) == 0LL
      || (ScriptQuestId = QuestScriptReleaseMaster__GetScriptQuestId(
                            MasterData_WarQuestSelectionMaster,
                            overwriteEndScriptQuestId,
                            v25->fields.questPhase,
                            2,
                            0LL),
          (v42 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (v43 = (QuestPhaseDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)v42,
                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___),
          !*p_info)
      || !v43 )
    {
LABEL_67:
      sub_B170D4();
    }
    if ( !QuestPhaseDetailMaster__TryGetEntity(v43, &entity, (*p_info)->fields.qId, (*p_info)->fields.pId, 0LL) )
      goto LABEL_54;
    if ( !entity )
      goto LABEL_67;
    if ( !QuestPhaseDetailEntity__HasFlag(entity, 0x20000000000LL, 0LL) )
      goto LABEL_54;
    v48 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v48 )
      goto LABEL_67;
    v49 = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)v48,
                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !*p_info || !v49 )
      goto LABEL_67;
    QuestEntity = QuestMaster__getQuestEntity(v49, (*p_info)->fields.qId, 0LL);
    if ( !QuestEntity || !QuestEntity__IsOpenByTime(QuestEntity, 0, 0LL) )
    {
      v69 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v70 = LocalizationManager__Get((System_String_o *)StringLiteral_2419/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, 0LL);
      v71 = LocalizationManager__Get((System_String_o *)StringLiteral_2418/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, 0LL);
      v76 = (NotificationDialog_ClickDelegate_o *)sub_B170CC(
                                                    NotificationDialog_ClickDelegate_TypeInfo,
                                                    v72,
                                                    v73,
                                                    v74,
                                                    v75);
      NotificationDialog_ClickDelegate___ctor(
        v76,
        (Il2CppObject *)v25,
        Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__1__,
        0LL);
      if ( !v69 )
        goto LABEL_67;
      CommonUI__OpenNotificationDialog_18239760(
        v69,
        v70,
        v71,
        v76,
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
        v51 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !v25->fields.info )
          goto LABEL_67;
        questPhase = v25->fields.questPhase;
        v53 = (ScriptManager_o *)v51;
        winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v25->fields.info, 0LL);
        if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScriptManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        }
        ScriptName_BattleEnd = ScriptManager__GetScriptName_BattleEnd(ScriptQuestId, questPhase, winResult, 0LL);
        if ( !v53 )
          goto LABEL_67;
        if ( ScriptManager__IsExistScriptFile(v53, ScriptName_BattleEnd, 0LL) )
          goto LABEL_70;
        v56 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !v25->fields.info )
          goto LABEL_67;
        v57 = v25->fields.questPhase;
        v58 = (ScriptManager_o *)v56;
        v59 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v25->fields.info, 0LL);
        if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScriptManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        }
        ScriptName_BattleEnd2 = ScriptManager__GetScriptName_BattleEnd2(ScriptQuestId, v57, v59, 0LL);
        if ( !v58 )
          goto LABEL_67;
        if ( ScriptManager__IsExistScriptFile(v58, ScriptName_BattleEnd2, 0LL) )
        {
LABEL_70:
          v61 = ScriptManager_TypeInfo;
          if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ScriptManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
            v61 = ScriptManager_TypeInfo;
          }
          textPath = v61->static_fields->textPath;
          ScriptAssetName = ScriptManager__GetScriptAssetName(ScriptQuestId, 0LL);
          v64 = System_String__Concat_43743732(textPath, ScriptAssetName, 0LL);
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          if ( AssetManager__isExistAssetStorage(v64, 0LL) )
          {
            v65 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( v65 )
            {
              AvalonSceneManager__transitionSceneRefresh(
                v65,
                this->fields.nextscenetype,
                1,
                (Il2CppObject *)*p_info,
                0,
                0LL);
              return;
            }
            goto LABEL_67;
          }
        }
      }
      v66 = v25->fields.questId;
      v67 = v25->fields.questPhase;
      v68 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                   System_Action_string__TypeInfo,
                                                                                   v44,
                                                                                   v45,
                                                                                   v46,
                                                                                   v47);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v68,
        (Il2CppObject *)v25,
        Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__0__,
        (const MethodInfo_24B7310 *)Method_System_Action_string___ctor__);
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      ScriptManager__LoadBattleEndGameDemo(v66, v67, 1, (System_Action_string__o *)v68, 0, 0LL);
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
  __int64 v23; // x3
  __int64 v24; // x4
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *Master_WarQuestSelectionMaster; // x0
  BattleEntity_o *SingleEntity; // x20
  BattleFBXComponent_c *v28; // x8
  BattlePerformance_c *v29; // x0
  BattleActionData_c *v30; // x0
  QuestPhaseEntity_o *QuestPhaseEntity; // x21
  BattleData_o *data; // x0
  BattleData_o *v33; // x22
  BattleLogic_o *logic; // x0
  BattleData_o *v35; // x0
  __int64 v36; // x1
  int64_t createdAt; // x22
  WarQuestSelectionMaster_o *v38; // x0
  System_Int32_array *klass; // x22
  const MethodInfo *v40; // x4
  System_Collections_IEnumerator_o *Asset; // x0
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v43; // x0
  WebViewManager_o *v44; // x0
  UnityEngine_Object_o *debugButton; // x20
  UnityEngine_GameObject_o *v46; // x0
  ManagerConfig_c *v47; // x0
  UnityEngine_GameObject_o *v48; // x0

  if ( (byte_40F74E8 & 1) == 0 )
  {
    sub_B16FFC(&AssetStorageLoadWrapper_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v3);
    sub_B16FFC(&BattleActionData_TypeInfo, v4);
    sub_B16FFC(&BattleEffectUtility_TypeInfo, v5);
    sub_B16FFC(&BattleFBXComponent_TypeInfo, v6);
    sub_B16FFC(&BattlePerformance_TypeInfo, v7);
    sub_B16FFC(&BuffList_TypeInfo, v8);
    sub_B16FFC(&CatAndMouseGame_TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_BattleBgMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_BattleMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v13);
    sub_B16FFC(&System_GC_TypeInfo, v14);
    sub_B16FFC(&ManagerConfig_TypeInfo, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&OptionManager_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v18);
    sub_B16FFC(&StringLiteral_15312/*"WINGNAME"*/, v19);
    byte_40F74E8 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15312/*"WINGNAME"*/, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  CatAndMouseGame__SixHomeBuilding(Value, 0LL);
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_42843716(0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
  {
    assetStorageLoadWrapper = (AssetStorageLoadWrapper_o *)sub_B170CC(
                                                             AssetStorageLoadWrapper_TypeInfo,
                                                             v21,
                                                             v22,
                                                             v23,
                                                             v24);
    AssetStorageLoadWrapper___ctor(assetStorageLoadWrapper, 0LL);
  }
  this->fields.assetStorageLoadWrapper = assetStorageLoadWrapper;
  sub_B16F98(&this->fields.assetStorageLoadWrapper, assetStorageLoadWrapper);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  SingleEntity = (BattleEntity_o *)DataMasterBase_object__object__long___GetSingleEntity(
                                     Master_WarQuestSelectionMaster,
                                     (const MethodInfo_266F674 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v28 = BattleFBXComponent_TypeInfo;
  if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v28 = BattleFBXComponent_TypeInfo;
  }
  v28->static_fields->EnableEvent = 1;
  v29 = BattlePerformance_TypeInfo;
  if ( (BYTE3(BattlePerformance_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformance_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
    v29 = BattlePerformance_TypeInfo;
  }
  v29->static_fields->CameraFlip = 0;
  v30 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v30 = BattleActionData_TypeInfo;
  }
  v30->static_fields->addActionOrder = 0;
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
  data = this->fields.data;
  if ( !data )
    goto LABEL_70;
  BattleData__Initialize(data, 0LL);
  v33 = this->fields.data;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  BuffList__SetBattleData(v33, 0LL);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_70;
  BattleLogic__Initialize(logic, 0LL);
  v35 = this->fields.data;
  if ( !v35 )
    goto LABEL_70;
  if ( !BattleData__IsWarBoard(v35, 0LL) )
  {
    createdAt = SingleEntity->fields.createdAt;
    if ( !byte_40F6536 )
    {
      sub_B16FFC(&SkillLvMaster_TypeInfo, v36);
      byte_40F6536 = 1;
    }
    SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = createdAt;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v38 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !v38 )
    goto LABEL_70;
  klass = (System_Int32_array *)v38[1].klass;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  BattleEffectUtility__AddNotPreloadEffectId(klass, 0LL);
  Asset = BattleRootComponent__LoadAsset(this, QuestPhaseEntity, SingleEntity->fields.eventId, SingleEntity, v40);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, Asset, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  LODWORD(Instance[1].fields.webViewBase) = 3;
  v43 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !v43 )
    goto LABEL_70;
  if ( BYTE4(v43[1].fields.baseWindow) )
  {
    v44 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !v44 )
      goto LABEL_70;
    LODWORD(v44[1].fields.webViewBase) = 4;
  }
  debugButton = (UnityEngine_Object_o *)this->fields.debugButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(debugButton, 0LL, 0LL) )
  {
    v46 = this->fields.debugButton;
    if ( !v46 )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive(v46, 0, 0LL);
    v47 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v47 = ManagerConfig_TypeInfo;
    }
    if ( v47->static_fields->UseDebugCommand )
    {
      v48 = this->fields.debugButton;
      if ( v48 )
      {
        UnityEngine_GameObject__SetActive(v48, 1, 0LL);
        return;
      }
LABEL_70:
      sub_B170D4();
    }
  }
}


void __fastcall BattleRootComponent__beginResume(
        BattleRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  CommonUI_o *Instance; // x20
  struct BattleRootComponent_callBackBeginResume_o **p_callbackBeginResumeFunc; // x19
  BattleRootComponent_callBackBeginResume_o *v7; // x20
  struct BattleRootComponent_callBackBeginResume_o *callbackBeginResumeFunc; // t1

  if ( (byte_40F74E7 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, data);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_40F74E7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadein(Instance, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  callbackBeginResumeFunc = this->fields.callbackBeginResumeFunc;
  p_callbackBeginResumeFunc = &this->fields.callbackBeginResumeFunc;
  v7 = callbackBeginResumeFunc;
  if ( callbackBeginResumeFunc )
  {
    *p_callbackBeginResumeFunc = 0LL;
    sub_B16F98(p_callbackBeginResumeFunc, 0LL);
    BattleRootComponent_callBackBeginResume__Invoke(v7, 0LL);
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
  int32_t Item; // w0
  WebViewManager_o *v15; // x21
  int32_t v16; // w0
  WebViewManager_o *v17; // x0
  WebViewManager_o *v18; // x0
  __int64 v19; // x2
  struct BattleLogic_o *logic; // x20
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  struct BattleLogic_o *v25; // x8
  struct BattleLogic_LOGICTYPE_array *logiclist; // x8
  struct BattleLogic_o *v27; // x8
  struct BattleLogic_LOGICTYPE_array *v28; // x8
  AndroidBackKeyManager_c *v29; // x0
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40F74EC & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, data);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v6);
    sub_B16FFC(&BattleLogic_LOGICTYPE___TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v8);
    sub_B16FFC(&StringLiteral_20138/*"limitCount"*/, v9);
    sub_B16FFC(&StringLiteral_10930/*"QUEST_START"*/, v10);
    sub_B16FFC(&StringLiteral_21886/*"servantId"*/, v11);
    byte_40F74EC = 1;
  }
  if ( data )
  {
    v12 = *(&System_Collections_Generic_Dictionary_string__int__TypeInfo->_2.bitflags2 + 1);
    if ( *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v12
      && (System_Collections_Generic_Dictionary_string__int__c *)data->klass->_2.typeHierarchy[v12 - 1] == System_Collections_Generic_Dictionary_string__int__TypeInfo )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_string__int___get_Item(
               (System_Collections_Generic_Dictionary_string__int__o *)data,
               (System_String_o *)StringLiteral_21886/*"servantId"*/,
               (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !Instance )
        goto LABEL_23;
      LODWORD(Instance->fields.baseWindow) = Item;
      v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      v16 = System_Collections_Generic_Dictionary_string__int___get_Item(
              (System_Collections_Generic_Dictionary_string__int__o *)data,
              (System_String_o *)StringLiteral_20138/*"limitCount"*/,
              (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !v15 )
        goto LABEL_23;
      HIDWORD(v15->fields.baseWindow) = v16;
      v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !v17 )
        goto LABEL_23;
      BYTE4(v17->fields.webViewBase) = 1;
      v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !v18 )
        goto LABEL_23;
      BYTE5(v18->fields.webViewBase) = 1;
      logic = this->fields.logic;
      v21 = sub_B17014(BattleLogic_LOGICTYPE___TypeInfo, 2LL, v19);
      if ( !logic )
        goto LABEL_23;
      logic->fields.logiclist = (struct BattleLogic_LOGICTYPE_array *)v21;
      sub_B16F98(&logic->fields.logiclist, v21);
      v25 = this->fields.logic;
      if ( !v25 )
        goto LABEL_23;
      logiclist = v25->fields.logiclist;
      if ( !logiclist )
        goto LABEL_23;
      if ( logiclist->max_length )
      {
        logiclist->m_Items[1] = 18;
        v27 = this->fields.logic;
        if ( !v27 )
          goto LABEL_23;
        v28 = v27->fields.logiclist;
        if ( !v28 )
          goto LABEL_23;
        if ( v28->max_length > 1 )
        {
          v28->m_Items[2] = 21;
          goto LABEL_18;
        }
      }
    }
    else
    {
      v22 = sub_B173C8(data);
    }
    sub_B17100(v22, v23, v24);
    sub_B170A0();
  }
LABEL_18:
  SceneRootComponent__beginStartUp_29752064((SceneRootComponent_o *)this, 0LL);
  v29 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v29 = AndroidBackKeyManager_TypeInfo;
  }
  v29->static_fields->ToastEnabled = 1;
  myFSM = this->fields.myFSM;
  if ( !myFSM )
LABEL_23:
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_10930/*"QUEST_START"*/, 0LL);
}


void __fastcall BattleRootComponent__endQuest(BattleRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattlePerformance_o *perf; // x0
  BattlePerformance_o *v8; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0
  __int64 v10; // x20
  __int64 v11; // x20
  AtlasManager_o *v12; // x0
  __int64 v13; // x20
  __int64 v14; // x20
  AtlasManager_o *v15; // x0
  BattlePerformance_o *v16; // x0
  BattleData_o *data; // x0
  const MethodInfo *v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Action_o *v22; // x20
  const MethodInfo *v23; // x2
  System_Collections_IEnumerator_o *OutGameAsset; // x1

  if ( (byte_40F74ED & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v3);
    sub_B16FFC(&Method_BattleRootComponent_goNextScene__, v4);
    sub_B16FFC(&OptionManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__, v6);
    byte_40F74ED = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_37;
  BattlePerformance__SetTimeScale(perf, 1.0, 0LL);
  v8 = this->fields.perf;
  if ( !v8 )
    goto LABEL_37;
  BattlePerformance__procEndQuest(v8, 0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    goto LABEL_37;
  AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0LL);
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
  v11 = **(_QWORD **)(v10 + 192);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AAFCFC(v11);
  v12 = **(AtlasManager_o ***)(v11 + 184);
  if ( !v12 )
    goto LABEL_37;
  AtlasManager__UnloadBuffIconAtlas(v12, 0LL);
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
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
  v14 = **(_QWORD **)(v13 + 192);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AAFCFC(v14);
  v15 = **(AtlasManager_o ***)(v14 + 184);
  if ( !v15
    || (AtlasManager__UnloadWarBoardAtlas(v15, 0LL), (v16 = this->fields.perf) == 0LL)
    || (BattlePerformance__ReleaseEventInfoPointGauge(v16, 0LL), (data = this->fields.data) == 0LL) )
  {
LABEL_37:
    sub_B170D4();
  }
  if ( !BattleData__IsWarBoard(data, 0LL) )
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
    v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_BattleRootComponent_goNextScene__, 0LL);
    OutGameAsset = BattleRootComponent__loadOutGameAsset(this, v22, v23);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, OutGameAsset, 0LL);
  }
  else
  {
    BattleRootComponent__goNextScene(this, v18);
  }
}


void __fastcall BattleRootComponent__goNextScene(BattleRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleData_o *data; // x9
  struct BattleEntity_o *battle_ent; // x8
  struct QuestEntity_o *quest_ent; // x20
  int32_t questPhase; // w21
  int32_t WarId; // w0
  struct BattleData_o *v9; // x8
  int32_t id; // w23
  int32_t win_lose; // w24
  int32_t v12; // w22
  int32_t WinResult; // w25
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  BattleScriptRootComponent_TalkScriptInfo_o *v18; // x20
  BattleData_o *v19; // x0
  CommonUI_o *Instance; // x0
  const MethodInfo *v21; // x2

  if ( (byte_40F74EF & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B16FFC(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v3);
    byte_40F74EF = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_10;
  battle_ent = data->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_10;
  quest_ent = data->fields.quest_ent;
  if ( !quest_ent )
    goto LABEL_10;
  questPhase = battle_ent->fields.questPhase;
  WarId = QuestEntity__GetWarId(data->fields.quest_ent, 0LL);
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_10;
  id = quest_ent->fields.id;
  win_lose = v9->fields.win_lose;
  v12 = WarId;
  WinResult = BattleData__getWinResult(this->fields.data, 0LL);
  v18 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_B170CC(
                                                        BattleScriptRootComponent_TalkScriptInfo_TypeInfo,
                                                        v14,
                                                        v15,
                                                        v16,
                                                        v17);
  BattleScriptRootComponent_TalkScriptInfo___ctor_19546188(v18, v12, id, questPhase, 4, win_lose, WinResult, 0, 0LL);
  v19 = this->fields.data;
  if ( !v19
    || (BattleData__release(v19, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  CommonUI__SetMaskFadeInitColor(Instance, 1, 0LL);
  BattleRootComponent__TransitionTerminalOrBattleScript(this, v18, v21);
}


System_Collections_IEnumerator_o *__fastcall BattleRootComponent__loadOutGameAsset(
        BattleRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleRootComponent__loadOutGameAsset_d__19_o *v7; // x21

  if ( (byte_40F74EE & 1) == 0 )
  {
    sub_B16FFC(&BattleRootComponent__loadOutGameAsset_d__19_TypeInfo, callback);
    byte_40F74EE = 1;
  }
  v7 = (BattleRootComponent__loadOutGameAsset_d__19_o *)sub_B170CC(
                                                          BattleRootComponent__loadOutGameAsset_d__19_TypeInfo,
                                                          callback,
                                                          method,
                                                          v3,
                                                          v4);
  BattleRootComponent__loadOutGameAsset_d__19___ctor(v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  v7->fields.__4__this = this;
  sub_B16F98(&v7->fields.__4__this, this);
  v7->fields.callback = callback;
  sub_B16F98(&v7->fields.callback, callback);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BattleRootComponent__setCallbackBeginResume(
        BattleRootComponent_o *this,
        BattleRootComponent_callBackBeginResume_o *func,
        const MethodInfo *method)
{
  this->fields.callbackBeginResumeFunc = func;
  sub_B16F98(&this->fields.callbackBeginResumeFunc, func);
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  struct BattleRootComponent_o *_4__this; // x26
  Il2CppObject *v27; // x22
  struct BattleRootComponent___c__DisplayClass12_0_o **p__8__1; // x25
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  UnityEngine_WaitForEndOfFrame_o *v33; // x20
  Il2CppObject **p__2__current; // x27
  bool result; // w0
  struct BattleRootComponent___c__DisplayClass12_1_o **p__8__2; // x22
  AssetData_o *uniqueCameraData; // x1
  BattlePerformance_o *v38; // x0
  AssetManager_o *Instance; // x0
  AssetManager_o *v40; // x0
  Il2CppObject *v41; // x0
  Il2CppObject **v42; // x27
  int v43; // w8
  QuestPhaseEntity_o *ent; // x23
  int32_t eventId; // w22
  Il2CppObject *_8__1; // x19
  System_Action_o *v47; // x24
  System_Collections_IEnumerator_o *AssetsIndependentToMainOne; // x0
  struct BattleRootComponent___c__DisplayClass12_0_o *v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  BattleDataDefine_c *v55; // x0
  Il2CppObject *v56; // x19
  System_String_o *ASSET_BATTLE_COMMON; // x23
  AssetLoader_LoadEndDataHandler_o *v58; // x24
  struct BattleRootComponent___c__DisplayClass12_0_o *v59; // x22
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // x23
  struct BattleEntity_o *battleEnt; // x8
  BattleInfoData_o *battleInfo; // x0
  struct System_Int32_array *BattleFieldMotionIds; // x0
  struct System_Int32_array **p_fieldMotionIds_5__2; // x22
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  __int64 v70; // x1
  __int64 v71; // x2
  struct BattleRootComponent___c__DisplayClass12_0_o *v72; // x8
  struct System_Int32_array *v73; // x27
  __int64 v74; // x8
  unsigned __int64 v75; // x28
  Il2CppObject *v76; // x0
  System_String_o *v77; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  struct BattleRootComponent___c__DisplayClass12_0_o **v82; // x19
  Il2CppObject *v83; // x25
  AssetStorageLoadWrapper_o *v84; // x23
  AssetLoader_LoadEndDataHandler_o *klass; // x24
  System_String_o *v86; // x22
  AssetManager_o *v87; // x22
  struct BattleRootComponent___c__DisplayClass12_0_o *v88; // x8
  struct System_Int32_array *fieldMotionIds_5__2; // x9
  struct BattleRootComponent___c__DisplayClass12_0_o **v90; // x22
  struct BattleEntity_o *v91; // x8
  BattleInfoData_o *v92; // x0
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  Il2CppObject *v97; // x23
  System_String_o *v98; // x0
  System_String_o *v99; // x0
  struct BattleRootComponent___c__DisplayClass12_1_o *_8__2; // x8
  System_String_o *v101; // x23
  struct BattleRootComponent___c__DisplayClass12_0_o **v102; // x20
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  struct BattleRootComponent_o *v107; // x19
  AssetStorageLoadWrapper_o *v108; // x24
  Il2CppObject *v109; // x26
  AssetLoader_LoadEndDataHandler_o *v110; // x25
  bool v111; // w0
  BattlePerformance_o *v112; // x0
  BattlePerformance_o *v113; // x0
  struct BattleRootComponent___c__DisplayClass12_0_o *v114; // x8
  BattlePerformance_o *v115; // x0
  BattlePerformance_o *v116; // x0
  BattlePerformance_o *v117; // x0
  BattleData_o *data; // x0
  struct BattlePerformance_o *v119; // x8
  AssumedBattleAssetLoadManager_o *AssumedBattleAssetLoadManager_k__BackingField; // x0
  struct BattlePerformance_o *v121; // x8
  AssumedBattleAssetLoadManager_o *v122; // x21
  AssumedBattleAssetSearcherBase_o *v123; // x0
  struct BattlePerformance_o *v124; // x8
  AssumedBattleAssetLoadManager_o *v125; // x0
  AvalonSceneManager_o *v126; // x0
  BattlePerformance_o *perf; // x0
  BattleRootComponent__LoadAsset_d__12_o *v128; // [xsp+0h] [xbp-60h]
  int32_t v129; // [xsp+8h] [xbp-58h] BYREF
  int32_t UniqueCameraId; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40F719F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___, v6);
    sub_B16FFC(&BattleDataDefine_TypeInfo, v7);
    sub_B16FFC(&System_GC_TypeInfo, v8);
    sub_B16FFC(&int_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetData___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_AssetData__TypeInfo, v11);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v12);
    sub_B16FFC(&OptionManager_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v15);
    sub_B16FFC(&Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__0__, v16);
    sub_B16FFC(&Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__1__, v17);
    sub_B16FFC(&Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__2__, v18);
    sub_B16FFC(&BattleRootComponent___c__DisplayClass12_0_TypeInfo, v19);
    sub_B16FFC(&Method_BattleRootComponent___c__DisplayClass12_1__LoadAsset_b__3__, v20);
    sub_B16FFC(&BattleRootComponent___c__DisplayClass12_1_TypeInfo, v21);
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_2756/*"Battle/UniqueCamera/"*/, v23);
    sub_B16FFC(&StringLiteral_2748/*"Battle/Field/{0}"*/, v24);
    sub_B16FFC(&StringLiteral_14872/*"UniqueCameraPrefab"*/, v25);
    byte_40F719F = 1;
  }
  UniqueCameraId = 0;
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      v27 = (Il2CppObject *)sub_B170CC(BattleRootComponent___c__DisplayClass12_0_TypeInfo, method, v2, v3, v4);
      System_Object___ctor(v27, 0LL);
      p__8__1 = &this->fields.__8__1;
      this->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass12_0_o *)v27;
      sub_B16F98(&this->fields.__8__1, v27);
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( !OptionManager__isSavedMemoryMode(0LL) )
        goto LABEL_23;
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_42843716(0LL);
      v33 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, v29, v30, v31, v32);
      UnityEngine_WaitForEndOfFrame___ctor(v33, 0LL);
      this->fields.__2__current = (Il2CppObject *)v33;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(p__2__current, v33);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    case 1:
      this->fields.__1__state = -1;
      Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !Instance )
        goto LABEL_102;
      AssetManager__RequestUnloadUnusedAssets(Instance, 0LL, 0LL);
      v40 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !v40 )
        goto LABEL_102;
      v41 = (Il2CppObject *)AssetManager__WaitForExecutionUnloadUnuseAssets(v40, 0LL);
      this->fields.__2__current = v41;
      v42 = &this->fields.__2__current;
      sub_B16F98(v42, v41);
      v43 = 2;
      goto LABEL_95;
    case 2:
      p__8__1 = &this->fields.__8__1;
      this->fields.__1__state = -1;
LABEL_23:
      if ( !*p__8__1 )
        goto LABEL_102;
      (*p__8__1)->fields.isAssetsLoading = 1;
      ent = this->fields.ent;
      eventId = this->fields.eventId;
      _8__1 = (Il2CppObject *)this->fields.__8__1;
      v47 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
      System_Action___ctor(v47, _8__1, Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__0__, 0LL);
      if ( !_4__this )
        goto LABEL_102;
      AssetsIndependentToMainOne = BattleRootComponent__LoadAssetsIndependentToMainOne(_4__this, ent, eventId, v47, 0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_34804316(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        AssetsIndependentToMainOne,
        0LL);
      v49 = *p__8__1;
      if ( !*p__8__1 )
        goto LABEL_102;
      v49->fields.commonData = 0LL;
      sub_B16F98(&v49->fields.commonData, 0LL);
      assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
      v55 = BattleDataDefine_TypeInfo;
      if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v55 = BattleDataDefine_TypeInfo;
      }
      v56 = (Il2CppObject *)*p__8__1;
      ASSET_BATTLE_COMMON = v55->static_fields->ASSET_BATTLE_COMMON;
      v58 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v50, v51, v52, v53);
      AssetLoader_LoadEndDataHandler___ctor(
        v58,
        v56,
        Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__1__,
        0LL);
      if ( !assetStorageLoadWrapper )
        goto LABEL_102;
      AssetStorageLoadWrapper__LoadAssetStorage(assetStorageLoadWrapper, ASSET_BATTLE_COMMON, v58, 1, 0LL);
      v59 = *p__8__1;
      v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_AssetData__TypeInfo, v60, v61, v62, v63);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v64,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_AssetData___ctor__);
      if ( !v59 )
        goto LABEL_102;
      v59->fields.motionDataList = (struct System_Collections_Generic_List_AssetData__o *)v64;
      sub_B16F98(&v59->fields.motionDataList, v64);
      battleEnt = this->fields.battleEnt;
      if ( !battleEnt )
        goto LABEL_102;
      battleInfo = battleEnt->fields.battleInfo;
      if ( !battleInfo )
        goto LABEL_102;
      BattleFieldMotionIds = BattleInfoData__GetBattleFieldMotionIds(battleInfo, this->fields.ent, 0LL);
      p_fieldMotionIds_5__2 = &this->fields._fieldMotionIds_5__2;
      this->fields._fieldMotionIds_5__2 = BattleFieldMotionIds;
      sub_B16F98(&this->fields._fieldMotionIds_5__2, BattleFieldMotionIds);
      v72 = this->fields.__8__1;
      if ( !v72 )
        goto LABEL_102;
      v72->fields.loadCompCnt = 0;
      v128 = this;
      v73 = *p_fieldMotionIds_5__2;
      if ( !*p_fieldMotionIds_5__2 )
        goto LABEL_102;
      v74 = *(_QWORD *)&v73->max_length;
      if ( (int)v74 < 1 )
        goto LABEL_46;
      v75 = 0LL;
      break;
    case 3:
      p__8__1 = &this->fields.__8__1;
      this->fields.__1__state = -1;
      goto LABEL_52;
    case 4:
      p__8__2 = &this->fields.__8__2;
      this->fields.__1__state = -1;
      goto LABEL_13;
    case 5:
      v90 = &this->fields.__8__1;
      this->fields.__1__state = -1;
      goto LABEL_87;
    case 6:
      this->fields.__1__state = -1;
      goto LABEL_90;
    default:
      return 0;
  }
  do
  {
    if ( v75 >= (unsigned int)v74 )
    {
      sub_B17100(Wrapper__LoadAssetStorage, v70, v71);
      sub_B170A0();
    }
    v129 = v73->m_Items[v75 + 1];
    v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v129);
    v77 = System_String__Format((System_String_o *)StringLiteral_2748/*"Battle/Field/{0}"*/, v76, 0LL);
    v82 = p__8__1;
    v83 = (Il2CppObject *)*p__8__1;
    if ( !v83 )
      goto LABEL_102;
    v84 = _4__this->fields.assetStorageLoadWrapper;
    klass = (AssetLoader_LoadEndDataHandler_o *)v83[3].klass;
    v86 = v77;
    if ( !klass )
    {
      klass = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(
                                                    AssetLoader_LoadEndDataHandler_TypeInfo,
                                                    v78,
                                                    v79,
                                                    v80,
                                                    v81);
      AssetLoader_LoadEndDataHandler___ctor(
        klass,
        v83,
        Method_BattleRootComponent___c__DisplayClass12_0__LoadAsset_b__2__,
        0LL);
      v83[3].klass = (Il2CppClass *)klass;
      sub_B16F98(&v83[3], klass);
    }
    if ( !v84 )
      goto LABEL_102;
    Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(v84, v86, klass, 1, 0LL);
    p__8__1 = v82;
    if ( !Wrapper__LoadAssetStorage )
    {
      if ( !*v82 )
        goto LABEL_102;
      ++(*v82)->fields.loadCompCnt;
    }
    LODWORD(v74) = v73->max_length;
    ++v75;
  }
  while ( (__int64)v75 < (int)v74 );
LABEL_46:
  v87 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  }
  this = v128;
  if ( !v87 )
    goto LABEL_102;
  AssetManager__UpdateLoadParallelMax(v87, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
LABEL_52:
  v88 = *p__8__1;
  if ( !*p__8__1 )
    goto LABEL_102;
  if ( !v88->fields.commonData )
  {
LABEL_56:
    this->fields.__2__current = 0LL;
    v42 = &this->fields.__2__current;
    sub_B16F98(v42, 0LL);
    v43 = 3;
LABEL_95:
    *((_DWORD *)v42 - 2) = v43;
    return 1;
  }
  fieldMotionIds_5__2 = this->fields._fieldMotionIds_5__2;
  if ( !fieldMotionIds_5__2 )
    goto LABEL_102;
  if ( v88->fields.loadCompCnt < (signed int)fieldMotionIds_5__2->max_length )
    goto LABEL_56;
  v91 = this->fields.battleEnt;
  if ( !v91 )
    goto LABEL_102;
  v92 = v91->fields.battleInfo;
  if ( !v92 )
    goto LABEL_102;
  UniqueCameraId = BattleInfoData__GetUniqueCameraId(v92, this->fields.ent, 0LL);
  if ( UniqueCameraId )
  {
    v97 = (Il2CppObject *)sub_B170CC(BattleRootComponent___c__DisplayClass12_1_TypeInfo, v93, v94, v95, v96);
    System_Object___ctor(v97, 0LL);
    this->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass12_1_o *)v97;
    p__8__2 = &this->fields.__8__2;
    sub_B16F98(&this->fields.__8__2, v97);
    v98 = System_Int32__ToString((int32_t)&UniqueCameraId, 0LL);
    v99 = System_String__Concat_43743732((System_String_o *)StringLiteral_2756/*"Battle/UniqueCamera/"*/, v98, 0LL);
    _8__2 = this->fields.__8__2;
    if ( !_8__2 )
      goto LABEL_102;
    _8__2->fields.uniqueCameraData = 0LL;
    v101 = v99;
    v102 = p__8__1;
    sub_B16F98(&_8__2->fields, 0LL);
    if ( !_4__this )
      goto LABEL_102;
    v107 = _4__this;
    v108 = _4__this->fields.assetStorageLoadWrapper;
    v109 = (Il2CppObject *)*p__8__2;
    v110 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(
                                                 AssetLoader_LoadEndDataHandler_TypeInfo,
                                                 v103,
                                                 v104,
                                                 v105,
                                                 v106);
    AssetLoader_LoadEndDataHandler___ctor(
      v110,
      v109,
      Method_BattleRootComponent___c__DisplayClass12_1__LoadAsset_b__3__,
      0LL);
    if ( !v108 )
      goto LABEL_102;
    v111 = AssetStorageLoadWrapper__LoadAssetStorage(v108, v101, v110, 1, 0LL);
    this->fields._loadSucceeded_5__3 = v111;
    if ( v111 )
    {
      _4__this = v107;
    }
    else
    {
      if ( !*v102 )
        goto LABEL_102;
      perf = v107->fields.perf;
      _4__this = v107;
      if ( !perf )
        goto LABEL_102;
      BattlePerformance__loadStorageObjectCameraCommon(perf, (*v102)->fields.commonData, 0LL);
    }
LABEL_13:
    if ( !*p__8__2 )
      goto LABEL_102;
    uniqueCameraData = (*p__8__2)->fields.uniqueCameraData;
    if ( !uniqueCameraData )
    {
      this->fields.__2__current = 0LL;
      v42 = &this->fields.__2__current;
      sub_B16F98(v42, 0LL);
      v43 = 4;
      goto LABEL_95;
    }
    if ( this->fields._loadSucceeded_5__3 )
    {
      if ( !_4__this )
        goto LABEL_102;
      v38 = _4__this->fields.perf;
      if ( !v38 )
        goto LABEL_102;
      BattlePerformance__loadStorageObjectCamera(v38, uniqueCameraData, (System_String_o *)StringLiteral_14872/*"UniqueCameraPrefab"*/, 0LL);
      *p__8__2 = 0LL;
      sub_B16F98(p__8__2, 0LL);
    }
    else
    {
      *p__8__2 = 0LL;
      sub_B16F98(p__8__2, 0LL);
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
    v112 = _4__this->fields.perf;
    if ( !v112 )
      goto LABEL_102;
    BattlePerformance__loadStorageObjectCameraCommon(v112, (*p__8__1)->fields.commonData, 0LL);
  }
  v113 = _4__this->fields.perf;
  v90 = &this->fields.__8__1;
  v114 = this->fields.__8__1;
  if ( !v114 )
    goto LABEL_102;
  if ( !v113 )
    goto LABEL_102;
  BattlePerformance__loadStorageObjectCommonMotion(v113, v114->fields.commonData, 0LL);
  if ( !*v90 )
    goto LABEL_102;
  v115 = _4__this->fields.perf;
  if ( !v115 )
    goto LABEL_102;
  BattlePerformance__SetEffectControlSpecialInvincibleObject(v115, (*v90)->fields.commonData, 0LL);
  if ( !*v90 )
    goto LABEL_102;
  v116 = _4__this->fields.perf;
  if ( !v116 )
    goto LABEL_102;
  BattlePerformance__loadFieldMotion(v116, (*v90)->fields.commonData, (*v90)->fields.motionDataList, 0LL);
  v117 = _4__this->fields.perf;
  if ( !v117 )
    goto LABEL_102;
  BattlePerformance__Initialize(v117, 0LL);
  data = _4__this->fields.data;
  if ( !data )
    goto LABEL_102;
  BattleData__loadFsmGameObject(data, 0LL);
  v119 = _4__this->fields.perf;
  if ( !v119 )
    goto LABEL_102;
  AssumedBattleAssetLoadManager_k__BackingField = v119->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !AssumedBattleAssetLoadManager_k__BackingField )
    goto LABEL_102;
  AssumedBattleAssetLoadManager__Release_object_(
    AssumedBattleAssetLoadManager_k__BackingField,
    (const MethodInfo_18B00EC *)Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
  v121 = _4__this->fields.perf;
  if ( !v121 )
    goto LABEL_102;
  v122 = v121->fields._AssumedBattleAssetLoadManager_k__BackingField;
  v123 = (AssumedBattleAssetSearcherBase_o *)AssumedBattleAssetSearcherBeforeBattle__Create(0LL);
  if ( !v122 )
    goto LABEL_102;
  AssumedBattleAssetLoadManager__Preload(v122, v123, 0LL);
LABEL_87:
  if ( !*v90 )
    goto LABEL_102;
  if ( (*v90)->fields.isAssetsLoading )
  {
    this->fields.__2__current = 0LL;
    v42 = &this->fields.__2__current;
    sub_B16F98(v42, 0LL);
    v43 = 5;
    goto LABEL_95;
  }
LABEL_90:
  if ( !_4__this )
    goto LABEL_102;
  v124 = _4__this->fields.perf;
  if ( !v124 )
    goto LABEL_102;
  v125 = v124->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !v125 )
    goto LABEL_102;
  if ( AssumedBattleAssetLoadManager__IsPreloading(v125, 0LL) )
  {
    this->fields.__2__current = 0LL;
    v42 = &this->fields.__2__current;
    sub_B16F98(v42, 0LL);
    v43 = 6;
    goto LABEL_95;
  }
  BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(_4__this, 0LL);
  v126 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v126 )
LABEL_102:
    sub_B170D4();
  AvalonSceneManager__endInitialize(v126, (SceneRootComponent_o *)_4__this, 0LL);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleRootComponent__LoadAsset_d__12_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v53; // x1
  __int64 v54; // x1
  int32_t _1__state; // w8
  struct BattleRootComponent_o *_4__this; // x26
  bool result; // w0
  Il2CppObject *v58; // x22
  struct BattleRootComponent___c__DisplayClass13_0_o **v59; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v60; // x8
  QuestPhaseEntity_o *ent; // x0
  int32_t BattleEffectId; // w22
  System_String_o *v63; // x0
  System_String_o *v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  AssetStorageLoadWrapper_o *v69; // x23
  Il2CppObject *v70; // x25
  System_String_o *v71; // x22
  AssetLoader_LoadEndDataHandler_o *v72; // x24
  ConstantMaster_o *v73; // x22
  WarQuestSelectionMaster_o *v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  System_Collections_Generic_IEnumerable_T__o *v79; // x23
  System_Collections_Generic_List_int__o *v80; // x21
  int32_t Value; // w0
  int32_t v82; // w0
  System_Collections_Generic_IEnumerable_T__o *ClassBoardCommandSpellEffectId; // x0
  System_Int32_array *v84; // x21
  System_String_array *Manager__preloadBattleCommonEffect; // x0
  AssetManager_o *v86; // x20
  Il2CppObject **v87; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_WarQuestSelectionMaster; // x0
  BattleEntity_o *SingleEntity; // x21
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  System_Collections_Generic_HashSet_int__o *v94; // x23
  BattleInfoData_o *battleInfo; // x0
  int32_t v96; // w22
  StageEntity_o *StageEntityAtWave; // x0
  StageEntity_o *v98; // x0
  System_Int32_array *v99; // x0
  struct BattleRootComponent___c__DisplayClass13_0_o **p__8__1; // x25
  WarQuestSelectionMaster_o *v101; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v102; // x22
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  Il2CppObject *v107; // x26
  System_String_o *age; // x23
  System_Action_o *monitor; // x24
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  Il2CppObject *v115; // x24
  System_Action_o *v116; // x23
  System_Collections_Generic_List_int__o *LoadDropEffectType; // x0
  Il2CppObject *v118; // x1
  System_String_o *v119; // x0
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x3
  __int64 v123; // x4
  Il2CppObject *_8__1; // x25
  AssetStorageLoadWrapper_o *v125; // x22
  AssetLoader_LoadEndDataHandler_o *klass; // x23
  System_String_o *v127; // x21
  int v128; // w20
  BattleData_o *data; // x0
  __int64 v130; // x1
  __int64 v131; // x2
  __int64 v132; // x3
  __int64 v133; // x4
  __int64 v134; // x21
  __int64 v135; // x21
  Il2CppObject *v136; // x23
  AtlasManager_o *v137; // x21
  System_Action_o *v138; // x22
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x3
  __int64 v142; // x4
  Il2CppObject *v143; // x22
  System_Action_o *v144; // x21
  Il2CppObject *v145; // x22
  BattlePerformance_o *perf; // x20
  System_Action_o *v147; // x21
  Il2CppObject *v148; // x20
  __int64 v149; // x1
  __int64 v150; // x2
  __int64 v151; // x3
  __int64 v152; // x4
  System_Action_o *v153; // x21
  __int64 v154; // x20
  __int64 v155; // x20
  AtlasManager_o *v156; // x0
  __int64 v157; // x1
  __int64 v158; // x2
  __int64 v159; // x3
  __int64 v160; // x4
  __int64 v161; // x20
  __int64 v162; // x20
  Il2CppObject *v163; // x22
  AtlasManager_o *v164; // x20
  System_Action_o *v165; // x21
  AssetManager_o *Instance; // x20
  Il2CppObject **p__2__current; // x19
  BattleRootComponent_o *v168; // [xsp+8h] [xbp-C8h]
  struct BattleRootComponent___c__DisplayClass13_0_o **v169; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_HashSet_Enumerator_T__o v170; // [xsp+18h] [xbp-B8h] BYREF
  int v171[2]; // [xsp+30h] [xbp-A0h]
  int v172; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_HashSet_Enumerator_T__o v173; // [xsp+40h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-78h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v175; // [xsp+60h] [xbp-70h] BYREF
  int32_t v176; // [xsp+7Ch] [xbp-54h] BYREF

  if ( (byte_40F71A0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v6);
    sub_B16FFC(&BattleDataDefine_TypeInfo, v7);
    sub_B16FFC(&BattleEffectUtility_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_BattleMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_BgmMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_BuffMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_ConstantMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v14);
    sub_B16FFC(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v24);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v25);
    sub_B16FFC(&int_TypeInfo, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v31);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v32);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v33);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v34);
    sub_B16FFC(&OptionManager_TypeInfo, v35);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v36);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__, v37);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v38);
    sub_B16FFC(&SoundManager_TypeInfo, v39);
    sub_B16FFC(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__0__, v40);
    sub_B16FFC(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__1__, v41);
    sub_B16FFC(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__2__, v42);
    sub_B16FFC(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__3__, v43);
    sub_B16FFC(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__4__, v44);
    sub_B16FFC(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__5__, v45);
    sub_B16FFC(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__6__, v46);
    sub_B16FFC(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__7__, v47);
    sub_B16FFC(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__8__, v48);
    sub_B16FFC(&BattleRootComponent___c__DisplayClass13_0_TypeInfo, v49);
    sub_B16FFC(&StringLiteral_2431/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/, v50);
    sub_B16FFC(&StringLiteral_2426/*"BATTLE_EFFECT_ID_3003001"*/, v51);
    sub_B16FFC(&StringLiteral_2746/*"Battle/DropEffect/{0}"*/, v52);
    sub_B16FFC(&StringLiteral_2747/*"Battle/Effect/"*/, v53);
    sub_B16FFC(&StringLiteral_2740/*"Battle"*/, v54);
    byte_40F71A0 = 1;
  }
  v176 = 0;
  memset(&v175, 0, sizeof(v175));
  entity = 0LL;
  memset(&v173, 0, sizeof(v173));
  v172 = 0;
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    p__8__1 = &this->fields.__8__1;
    this->fields.__1__state = -1;
LABEL_120:
    if ( !*p__8__1 )
      goto LABEL_48;
    if ( (*p__8__1)->fields.loadCnt >= this->fields._loadCntMax_5__2 )
    {
      ActionExtensions__Call(this->fields.finishCallback, 0LL);
      return 0;
    }
    else
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(p__2__current, 0LL);
      *((_DWORD *)p__2__current - 2) = 2;
      return 1;
    }
  }
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_48;
    SingleEntity = (BattleEntity_o *)DataMasterBase_object__object__long___GetSingleEntity(
                                       Master_WarQuestSelectionMaster,
                                       (const MethodInfo_266F674 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    v94 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                         System_Collections_Generic_HashSet_int__TypeInfo,
                                                         v90,
                                                         v91,
                                                         v92,
                                                         v93);
    System_Collections_Generic_HashSet_int____ctor(
      v94,
      (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
    if ( !SingleEntity )
      goto LABEL_48;
    battleInfo = SingleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_48;
    v96 = 0;
    while ( v96 < BattleInfoData__getLastWave(battleInfo, 0LL) + 1 )
    {
      StageEntityAtWave = BattleEntity__GetStageEntityAtWave(SingleEntity, v96, 0LL);
      if ( StageEntityAtWave )
      {
        if ( !v94 )
          goto LABEL_48;
        System_Collections_Generic_HashSet_int___Add(
          v94,
          StageEntityAtWave->fields.bgmId,
          (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v98 = BattleEntity__GetStageEntityAtWave(SingleEntity, v96, 0LL);
      if ( v98 )
      {
        v99 = StageEntity__GetBossIdAndChangeBgmId(v98, 0LL);
        if ( v99 )
        {
          if ( (int)v99->max_length >= 2 )
          {
            if ( !v94 )
              goto LABEL_48;
            System_Collections_Generic_HashSet_int___Add(
              v94,
              v99->m_Items[2],
              (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          battleInfo = SingleEntity->fields.battleInfo;
          ++v96;
          if ( battleInfo )
            continue;
        }
      }
      goto LABEL_48;
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v168 = _4__this;
    v101 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !v94 )
      goto LABEL_48;
    v102 = (DataMasterBase_WarMaster__WarEntity__int__o *)v101;
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v170,
      v94,
      (const MethodInfo_21D8A88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    p__8__1 = &this->fields.__8__1;
    v175 = v170;
    while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &v175,
              (const MethodInfo_207182C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
    {
      if ( !v102 )
        sub_B170D4();
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             v102,
             &entity,
             (int32_t)v175.fields._current,
             (const MethodInfo_266F3E4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
      {
        ++this->fields._loadCntMax_5__2;
        if ( !entity )
          sub_B170D4();
        v107 = (Il2CppObject *)*p__8__1;
        if ( !*p__8__1 )
          sub_B170D4();
        age = entity->fields.age;
        monitor = (System_Action_o *)v107[1].monitor;
        if ( !monitor )
        {
          monitor = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v103, v104, v105, v106);
          System_Action___ctor(
            monitor,
            v107,
            Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__7__,
            0LL);
          v107[1].monitor = monitor;
          sub_B16F98(&v107[1].monitor, monitor);
        }
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__downloadAudioAssetStorage(age, monitor, 1, 0LL);
      }
    }
    v171[0] = 575;
    v172 = 1;
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v175,
      (const MethodInfo_2071828 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    v172 = 0;
    ++this->fields._loadCntMax_5__2;
    if ( !v168 )
      goto LABEL_48;
    assetStorageLoadWrapper = v168->fields.assetStorageLoadWrapper;
    v115 = (Il2CppObject *)*p__8__1;
    v116 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v110, v111, v112, v113);
    System_Action___ctor(
      v116,
      v115,
      Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__1__,
      0LL);
    if ( !assetStorageLoadWrapper )
      goto LABEL_48;
    AssetStorageLoadWrapper__LoadAudioAssetStorage(
      assetStorageLoadWrapper,
      (System_String_o *)StringLiteral_2740/*"Battle"*/,
      v116,
      1,
      0LL);
    LoadDropEffectType = BattleRootComponent__GetLoadDropEffectType(v168, SingleEntity, 0LL);
    if ( !LoadDropEffectType )
      goto LABEL_48;
    if ( LoadDropEffectType->fields._size >= 1 )
    {
      v169 = &this->fields.__8__1;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v170,
        LoadDropEffectType,
        (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v173 = v170;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                (System_Collections_Generic_List_Enumerator_int__o *)&v173,
                (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        LODWORD(v170.fields._set) = v173.fields._current;
        v118 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v170);
        v119 = System_String__Format((System_String_o *)StringLiteral_2746/*"Battle/DropEffect/{0}"*/, v118, 0LL);
        _8__1 = (Il2CppObject *)this->fields.__8__1;
        ++this->fields._loadCntMax_5__2;
        if ( !_8__1 )
          sub_B170D4();
        v125 = v168->fields.assetStorageLoadWrapper;
        klass = (AssetLoader_LoadEndDataHandler_o *)_8__1[2].klass;
        v127 = v119;
        if ( !klass )
        {
          klass = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(
                                                        AssetLoader_LoadEndDataHandler_TypeInfo,
                                                        v120,
                                                        v121,
                                                        v122,
                                                        v123);
          AssetLoader_LoadEndDataHandler___ctor(
            klass,
            _8__1,
            Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__8__,
            0LL);
          _8__1[2].klass = (Il2CppClass *)klass;
          sub_B16F98(&_8__1[2], klass);
        }
        if ( !v125 )
          sub_B170D4();
        if ( !AssetStorageLoadWrapper__LoadAssetStorage(v125, v127, klass, 1, 0LL) )
        {
          if ( !*v169 )
            sub_B170D4();
          ++(*v169)->fields.loadCnt;
        }
      }
      v171[0] = 830;
      v128 = ++v172;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v173,
        (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      p__8__1 = &this->fields.__8__1;
      if ( v128 && v171[v128 - 1] == 830 )
        v172 = v128 - 1;
    }
    data = v168->fields.data;
    if ( !data )
      goto LABEL_48;
    if ( BattleData__IsWarBoard(data, 0LL) )
    {
      ++this->fields._loadCntMax_5__2;
      v134 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v134 + 306) & 1) == 0 )
        sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
      v135 = **(_QWORD **)(v134 + 192);
      if ( (*(_BYTE *)(v135 + 306) & 1) == 0 )
        sub_AAFCFC(v135);
      v136 = (Il2CppObject *)*p__8__1;
      v137 = **(AtlasManager_o ***)(v135 + 184);
      v138 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v130, v131, v132, v133);
      System_Action___ctor(
        v138,
        v136,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__2__,
        0LL);
      if ( !v137 )
        goto LABEL_48;
      AtlasManager__LoadWarBoardAtlas(v137, v138, 0LL);
    }
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( OptionManager__isSavedMemoryMode(0LL) )
    {
      v143 = (Il2CppObject *)this->fields.__8__1;
      ++this->fields._loadCntMax_5__2;
      v144 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v139, v140, v141, v142);
      System_Action___ctor(
        v144,
        v143,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__3__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadFaceBattleAtlas(v144, 0LL);
    }
    v145 = (Il2CppObject *)this->fields.__8__1;
    ++this->fields._loadCntMax_5__2;
    perf = v168->fields.perf;
    v147 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v139, v140, v141, v142);
    System_Action___ctor(
      v147,
      v145,
      Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__4__,
      0LL);
    if ( !perf )
      goto LABEL_48;
    if ( !BattlePerformance__LoadEventInfoPointGauge(perf, v147, this->fields.eventId, 0LL) )
    {
      if ( !*p__8__1 )
        goto LABEL_48;
      ++(*p__8__1)->fields.loadCnt;
    }
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__ReleaseEventAtlas(0LL);
    v148 = (Il2CppObject *)this->fields.__8__1;
    ++this->fields._loadCntMax_5__2;
    v153 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v149, v150, v151, v152);
    System_Action___ctor(
      v153,
      v148,
      Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__5__,
      0LL);
    AtlasManager__LoadEventAtlas(v153, 1, 0LL);
    v154 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v154 + 306) & 1) == 0 )
      sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
    v155 = **(_QWORD **)(v154 + 192);
    if ( (*(_BYTE *)(v155 + 306) & 1) == 0 )
      sub_AAFCFC(v155);
    v156 = **(AtlasManager_o ***)(v155 + 184);
    if ( !v156 )
      goto LABEL_48;
    AtlasManager__UnloadBuffIconAtlas(v156, 0LL);
    ++this->fields._loadCntMax_5__2;
    v161 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v161 + 306) & 1) == 0 )
      sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
    v162 = **(_QWORD **)(v161 + 192);
    if ( (*(_BYTE *)(v162 + 306) & 1) == 0 )
      sub_AAFCFC(v162);
    v163 = (Il2CppObject *)*p__8__1;
    v164 = **(AtlasManager_o ***)(v162 + 184);
    v165 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v157, v158, v159, v160);
    System_Action___ctor(
      v165,
      v163,
      Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__6__,
      0LL);
    if ( !v164 )
      goto LABEL_48;
    AtlasManager__LoadBuffIconAtlas(v164, v165, 0LL);
    Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    }
    if ( !Instance )
LABEL_48:
      sub_B170D4();
    AssetManager__UpdateLoadParallelMax(
      Instance,
      BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
      0LL);
    goto LABEL_120;
  }
  result = 0;
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v58 = (Il2CppObject *)sub_B170CC(BattleRootComponent___c__DisplayClass13_0_TypeInfo, method, v2, v3, v4);
    System_Object___ctor(v58, 0LL);
    v59 = &this->fields.__8__1;
    this->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass13_0_o *)v58;
    sub_B16F98(&this->fields.__8__1, v58);
    v60 = this->fields.__8__1;
    if ( v60 )
    {
      v60->fields.loadCnt = 0;
      ent = this->fields.ent;
      this->fields._loadCntMax_5__2 = 0;
      if ( ent )
      {
        BattleEffectId = QuestPhaseEntity__getBattleEffectId(ent, 0, 0LL);
        if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        }
        v176 = BattleEffectUtility__setBattleEffectId(BattleEffectId, 0LL);
        v63 = System_Int32__ToString((int32_t)&v176, 0LL);
        v64 = System_String__Concat_43743732((System_String_o *)StringLiteral_2747/*"Battle/Effect/"*/, v63, 0LL);
        ++this->fields._loadCntMax_5__2;
        if ( _4__this )
        {
          v69 = _4__this->fields.assetStorageLoadWrapper;
          v70 = (Il2CppObject *)*v59;
          v71 = v64;
          v72 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(
                                                      AssetLoader_LoadEndDataHandler_TypeInfo,
                                                      v65,
                                                      v66,
                                                      v67,
                                                      v68);
          AssetLoader_LoadEndDataHandler___ctor(
            v72,
            v70,
            Method_BattleRootComponent___c__DisplayClass13_0__LoadAssetsIndependentToMainOne_b__0__,
            0LL);
          if ( v69 )
          {
            if ( !AssetStorageLoadWrapper__LoadAssetStorage(v69, v71, v72, 1, 0LL) )
            {
              if ( !*v59 )
                goto LABEL_48;
              ++(*v59)->fields.loadCnt;
            }
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            v73 = (ConstantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ConstantMaster___);
            v74 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BuffMaster___);
            if ( v74 )
            {
              v79 = (System_Collections_Generic_IEnumerable_T__o *)v74[1].klass;
              v80 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                                System_Collections_Generic_List_int__TypeInfo,
                                                                v75,
                                                                v76,
                                                                v77,
                                                                v78);
              System_Collections_Generic_List_int____ctor_49346956(
                v80,
                v79,
                (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
              if ( v73 )
              {
                Value = ConstantMaster__GetValue(v73, (System_String_o *)StringLiteral_2431/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/, 0LL);
                if ( v80 )
                {
                  System_Collections_Generic_List_int___Add(
                    v80,
                    Value,
                    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
                  v82 = ConstantMaster__GetValue(v73, (System_String_o *)StringLiteral_2426/*"BATTLE_EFFECT_ID_3003001"*/, 0LL);
                  System_Collections_Generic_List_int___Add(
                    v80,
                    v82,
                    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
                  ClassBoardCommandSpellEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleRootComponent__GetClassBoardCommandSpellEffectId(
                                                                                                    _4__this,
                                                                                                    0LL);
                  System_Collections_Generic_List_int___AddRange(
                    v80,
                    ClassBoardCommandSpellEffectId,
                    (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
                  v84 = System_Collections_Generic_List_int___ToArray(
                          v80,
                          (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
                  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                  }
                  Manager__preloadBattleCommonEffect = ServantAssetLoadManager__preloadBattleCommonEffect(v84, 0LL);
                  if ( _4__this->fields.data )
                  {
                    BattleData__addLoadedCommonEffectPath(
                      _4__this->fields.data,
                      Manager__preloadBattleCommonEffect,
                      0LL);
                    v86 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
                    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                    }
                    if ( v86 )
                    {
                      AssetManager__UpdateLoadParallelMax(
                        v86,
                        BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                        0LL);
                      this->fields.__2__current = 0LL;
                      v87 = &this->fields.__2__current;
                      sub_B16F98(v87, 0LL);
                      result = 1;
                      *((_DWORD *)v87 - 2) = 1;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_BattleRootComponent__LoadAssetsIndependentToMainOne_d__13_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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
  sub_B16F98(&this->fields.commonData, common);
}


void __fastcall BattleRootComponent___c__DisplayClass12_0___LoadAsset_b__2(
        BattleRootComponent___c__DisplayClass12_0_o *this,
        AssetData_o *motionData,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_AssetData__o *motionDataList; // x0

  if ( (byte_40F719A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetData__Add__, motionData);
    byte_40F719A = 1;
  }
  motionDataList = this->fields.motionDataList;
  if ( !motionDataList )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)motionDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)motionData,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_AssetData__Add__);
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
  sub_B16F98(&this->fields, cameraData);
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
  BattleRootComponent_o *_4__this; // x0

  if ( (byte_40F719B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__RemoveAt__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v3);
    byte_40F719B = 1;
  }
  bgmList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.bgmList;
  if ( !bgmList
    || (System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          bgmList,
          bgmList->fields._size - 1,
          (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_string__RemoveAt__),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  BattleRootComponent__LoadBatteBgm(_4__this, this->fields.bgmList, this->fields.callback, 0LL);
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
  __int64 v11; // x3
  __int64 v12; // x4
  struct System_Action_string__o *_9__2; // x22
  int32_t questId; // w20
  int32_t questPhase; // w21
  AvalonSceneManager_o *Instance; // x0
  struct BattleRootComponent_o *_4__this; // x8

  if ( (byte_40F719D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string___ctor__, demo1);
    sub_B16FFC(&System_Action_string__TypeInfo, v5);
    sub_B16FFC(&ScriptManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B16FFC(&Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__2__, v8);
    byte_40F719D = 1;
  }
  if ( System_String__IsNullOrEmpty(demo1, 0LL) )
  {
    _9__2 = this->fields.__9__2;
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    if ( !_9__2 )
    {
      _9__2 = (struct System_Action_string__o *)sub_B170CC(System_Action_string__TypeInfo, v9, v10, v11, v12);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__2,
        (Il2CppObject *)this,
        Method_BattleRootComponent___c__DisplayClass22_0__TransitionTerminalOrBattleScript_b__2__,
        (const MethodInfo_24B7310 *)Method_System_Action_string___ctor__);
      this->fields.__9__2 = _9__2;
      sub_B16F98(&this->fields.__9__2, _9__2);
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
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    _4__this = this->fields.__4__this;
    if ( !_4__this || !Instance )
      sub_B170D4();
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
  BattleRootComponent_o *_4__this; // x0

  if ( (byte_40F719C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDeside);
    byte_40F719C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B170D4();
  BattleRootComponent__TerminalTransition(_4__this, this->fields.info, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass22_0___TransitionTerminalOrBattleScript_b__2(
        BattleRootComponent___c__DisplayClass22_0_o *this,
        System_String_o *demo2,
        const MethodInfo *method)
{
  BattleRootComponent_o *_4__this; // x0
  AvalonSceneManager_o *Instance; // x0
  struct BattleRootComponent_o *v7; // x8

  if ( (byte_40F719E & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, demo2);
    byte_40F719E = 1;
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
    sub_B170D4();
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  v7 = this->fields.__4__this;
  if ( !v7 || !Instance )
    goto LABEL_9;
  AvalonSceneManager__transitionSceneRefresh(
    Instance,
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
  __int64 v2; // x2
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
  struct BattleRootComponent_o *_4__this; // x21
  Il2CppObject *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  UnityEngine_WaitForEndOfFrame_o *v26; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattleRootComponent___c__DisplayClass19_2_o **p__8__2; // x20
  AssetManager_o *Instance; // x0
  AssetManager_o *v31; // x0
  Il2CppObject *v32; // x0
  Il2CppObject **v33; // x19
  int v34; // w8
  BattlePerformance_o *perf; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x21
  struct BattleRootComponent___c__DisplayClass19_1_o **p__8__1; // x20
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x22
  System_Action_o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  Il2CppObject *v52; // x21
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x22
  System_Action_o *v58; // x21
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  UnityEngine_WaitForEndOfFrame_o *v63; // x20
  struct BattleRootComponent___c__DisplayClass19_0_o **p__8__3; // x22
  struct BattleRootComponent___c__DisplayClass19_0_o *_8__3; // x8
  Il2CppObject *v66; // x21
  System_Action_o *v67; // x20
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  UnityEngine_WaitForEndOfFrame_o *v72; // x20
  Il2CppObject *v73; // x21
  System_Action_o *v74; // x20
  Il2CppObject *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  UnityEngine_WaitForEndOfFrame_o *v80; // x20
  Il2CppObject *v81; // x21
  System_Action_o *v82; // x20
  Il2CppObject *v83; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  UnityEngine_WaitForEndOfFrame_o *v88; // x20
  System_Action_o *callback; // x0
  Il2CppObject *v90; // x0
  Il2CppObject *v91; // x0
  Il2CppObject *v92; // x0
  int v93; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F71A1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v6);
    sub_B16FFC(&System_GC_TypeInfo, v7);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&OptionManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v10);
    sub_B16FFC(&Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__0__, v11);
    sub_B16FFC(&Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__1__, v12);
    sub_B16FFC(&Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__2__, v13);
    sub_B16FFC(&BattleRootComponent___c__DisplayClass19_0_TypeInfo, v14);
    sub_B16FFC(&Method_BattleRootComponent___c__DisplayClass19_1__loadOutGameAsset_b__3__, v15);
    sub_B16FFC(&BattleRootComponent___c__DisplayClass19_1_TypeInfo, v16);
    sub_B16FFC(&Method_BattleRootComponent___c__DisplayClass19_2__loadOutGameAsset_b__4__, v17);
    sub_B16FFC(&BattleRootComponent___c__DisplayClass19_2_TypeInfo, v18);
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v19);
    byte_40F71A1 = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      v21 = (Il2CppObject *)sub_B170CC(BattleRootComponent___c__DisplayClass19_0_TypeInfo, method, v2, v3, v4);
      System_Object___ctor(v21, 0LL);
      this->fields.__8__3 = (struct BattleRootComponent___c__DisplayClass19_0_o *)v21;
      sub_B16F98(&this->fields.__8__3, v21);
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( !OptionManager__isSavedMemoryMode(0LL) )
        goto LABEL_18;
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_42843716(0LL);
      v26 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, v22, v23, v24, v25);
      UnityEngine_WaitForEndOfFrame___ctor(v26, 0LL);
      this->fields.__2__current = (Il2CppObject *)v26;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(p__2__current, v26);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    case 1:
      this->fields.__1__state = -1;
      Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !Instance )
        goto LABEL_106;
      AssetManager__RequestUnloadUnusedAssets(Instance, 0LL, 0LL);
      v31 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !v31 )
        goto LABEL_106;
      v32 = (Il2CppObject *)AssetManager__WaitForExecutionUnloadUnuseAssets(v31, 0LL);
      this->fields.__2__current = v32;
      v33 = &this->fields.__2__current;
      sub_B16F98(v33, v32);
      v34 = 2;
      goto LABEL_104;
    case 2:
      this->fields.__1__state = -1;
LABEL_18:
      if ( !_4__this )
        goto LABEL_106;
      perf = _4__this->fields.perf;
      if ( !perf )
        goto LABEL_106;
      if ( BattlePerformance__isActiveEventInfoGauge(perf, 0LL) )
        goto LABEL_30;
      v40 = (Il2CppObject *)sub_B170CC(BattleRootComponent___c__DisplayClass19_1_TypeInfo, v36, v37, v38, v39);
      System_Object___ctor(v40, 0LL);
      this->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass19_1_o *)v40;
      p__8__1 = &this->fields.__8__1;
      sub_B16F98(&this->fields.__8__1, v40);
      if ( !this->fields.__8__1 )
        goto LABEL_106;
      this->fields.__8__1->fields.isEventAtlasLoaded = 0;
      v46 = (Il2CppObject *)*p__8__1;
      v47 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v42, v43, v44, v45);
      System_Action___ctor(v47, v46, Method_BattleRootComponent___c__DisplayClass19_1__loadOutGameAsset_b__3__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadEventAtlas(v47, 1, 0LL);
LABEL_27:
      if ( !*p__8__1 )
        goto LABEL_106;
      if ( !(*p__8__1)->fields.isEventAtlasLoaded )
      {
        v93 = 0;
        v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93);
        this->fields.__2__current = v92;
        v33 = &this->fields.__2__current;
        sub_B16F98(v33, v92);
        v34 = 3;
        goto LABEL_104;
      }
      *p__8__1 = 0LL;
      sub_B16F98(p__8__1, 0LL);
LABEL_30:
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__isSavedMemoryMode(0LL) )
      {
        v52 = (Il2CppObject *)sub_B170CC(BattleRootComponent___c__DisplayClass19_2_TypeInfo, v48, v49, v50, v51);
        System_Object___ctor(v52, 0LL);
        this->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass19_2_o *)v52;
        p__8__2 = &this->fields.__8__2;
        sub_B16F98(&this->fields.__8__2, v52);
        if ( this->fields.__8__2 )
        {
          this->fields.__8__2->fields.isFaceAtlasLoaded = 0;
          v57 = (Il2CppObject *)*p__8__2;
          v58 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v53, v54, v55, v56);
          System_Action___ctor(v58, v57, Method_BattleRootComponent___c__DisplayClass19_2__loadOutGameAsset_b__4__, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__LoadFaceAtlas(v58, 1, 0LL);
LABEL_39:
          if ( *p__8__2 )
          {
            if ( (*p__8__2)->fields.isFaceAtlasLoaded )
            {
              if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_GC_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              }
              System_GC__Collect_42843716(0LL);
              v63 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                         UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                         v59,
                                                         v60,
                                                         v61,
                                                         v62);
              UnityEngine_WaitForEndOfFrame___ctor(v63, 0LL);
              this->fields.__2__current = (Il2CppObject *)v63;
              v33 = &this->fields.__2__current;
              sub_B16F98(v33, v63);
              v34 = 5;
            }
            else
            {
              v93 = 0;
              v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93);
              this->fields.__2__current = v91;
              v33 = &this->fields.__2__current;
              sub_B16F98(v33, v91);
              v34 = 4;
            }
            goto LABEL_104;
          }
        }
LABEL_106:
        sub_B170D4();
      }
LABEL_48:
      p__8__3 = &this->fields.__8__3;
      _8__3 = this->fields.__8__3;
      if ( !_8__3 )
        goto LABEL_106;
      _8__3->fields.isCharaGraphOptionAtlasLoaded = 0;
      v66 = (Il2CppObject *)*p__8__3;
      v67 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v48, v49, v50, v51);
      System_Action___ctor(v67, v66, Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__0__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadCharaGraphOptionAtlas(v67, 1, 0LL);
LABEL_54:
      if ( !*p__8__3 )
        goto LABEL_106;
      if ( !(*p__8__3)->fields.isCharaGraphOptionAtlasLoaded )
      {
        v93 = 0;
        v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93);
        this->fields.__2__current = v75;
        v33 = &this->fields.__2__current;
        sub_B16F98(v33, v75);
        v34 = 6;
LABEL_104:
        *((_DWORD *)v33 - 2) = v34;
        return 1;
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
        System_GC__Collect_42843716(0LL);
        v72 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, v68, v69, v70, v71);
        UnityEngine_WaitForEndOfFrame___ctor(v72, 0LL);
        this->fields.__2__current = (Il2CppObject *)v72;
        v33 = &this->fields.__2__current;
        sub_B16F98(v33, v72);
        v34 = 7;
        goto LABEL_104;
      }
LABEL_64:
      if ( !*p__8__3 )
        goto LABEL_106;
      (*p__8__3)->fields.isBannerAtlasLoaded = 0;
      v73 = (Il2CppObject *)*p__8__3;
      v74 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
      System_Action___ctor(v74, v73, Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__1__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadBanner(v74, 1, 0LL);
LABEL_71:
      if ( !*p__8__3 )
        goto LABEL_106;
      if ( !(*p__8__3)->fields.isBannerAtlasLoaded )
      {
        v93 = 0;
        v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93);
        this->fields.__2__current = v83;
        v33 = &this->fields.__2__current;
        sub_B16F98(v33, v83);
        v34 = 8;
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
        System_GC__Collect_42843716(0LL);
        v80 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, v76, v77, v78, v79);
        UnityEngine_WaitForEndOfFrame___ctor(v80, 0LL);
        this->fields.__2__current = (Il2CppObject *)v80;
        v33 = &this->fields.__2__current;
        sub_B16F98(v33, v80);
        v34 = 9;
        goto LABEL_104;
      }
LABEL_81:
      if ( !*p__8__3 )
        goto LABEL_106;
      (*p__8__3)->fields.isEventUIAtlasLoaded = 0;
      v81 = (Il2CppObject *)*p__8__3;
      v82 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
      System_Action___ctor(v82, v81, Method_BattleRootComponent___c__DisplayClass19_0__loadOutGameAsset_b__2__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadEventUI(v82, 1, 0LL);
LABEL_88:
      if ( !*p__8__3 )
        goto LABEL_106;
      if ( !(*p__8__3)->fields.isEventUIAtlasLoaded )
      {
        v93 = 0;
        v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93);
        this->fields.__2__current = v90;
        v33 = &this->fields.__2__current;
        sub_B16F98(v33, v90);
        v34 = 10;
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
        System_GC__Collect_42843716(0LL);
        v88 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, v84, v85, v86, v87);
        UnityEngine_WaitForEndOfFrame___ctor(v88, 0LL);
        this->fields.__2__current = (Il2CppObject *)v88;
        v33 = &this->fields.__2__current;
        sub_B16F98(v33, v88);
        v34 = 11;
        goto LABEL_104;
      }
LABEL_98:
      callback = this->fields.callback;
      if ( !callback )
        goto LABEL_106;
      System_Action__Invoke(callback, 0LL);
      return 0;
    case 3:
      p__8__1 = &this->fields.__8__1;
      this->fields.__1__state = -1;
      goto LABEL_27;
    case 4:
      p__8__2 = &this->fields.__8__2;
      this->fields.__1__state = -1;
      goto LABEL_39;
    case 5:
      this->fields.__8__2 = 0LL;
      this->fields.__1__state = -1;
      sub_B16F98(&this->fields.__8__2, 0LL);
      goto LABEL_48;
    case 6:
      p__8__3 = &this->fields.__8__3;
      this->fields.__1__state = -1;
      goto LABEL_54;
    case 7:
      p__8__3 = &this->fields.__8__3;
      this->fields.__1__state = -1;
      goto LABEL_64;
    case 8:
      p__8__3 = &this->fields.__8__3;
      this->fields.__1__state = -1;
      goto LABEL_71;
    case 9:
      p__8__3 = &this->fields.__8__3;
      this->fields.__1__state = -1;
      goto LABEL_81;
    case 0xA:
      p__8__3 = &this->fields.__8__3;
      this->fields.__1__state = -1;
      goto LABEL_88;
    case 0xB:
      this->fields.__1__state = -1;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleRootComponent__loadOutGameAsset_d__19_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  sub_B16F98(p_method, object);
}


System_IAsyncResult_o *__fastcall BattleRootComponent_callBackBeginResume__BeginInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B16FA0(this, &v5, callback, object);
}


void __fastcall BattleRootComponent_callBackBeginResume__EndInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


void __fastcall BattleRootComponent_callBackBeginResume__Invoke(
        BattleRootComponent_callBackBeginResume_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  BattleRootComponent_callBackBeginResume_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x8
  unsigned __int64 v11; // x10
  _DWORD *v12; // x11
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  void (__fastcall **v16)(__int64 *, _QWORD); // x0
  BattleRootComponent_callBackBeginResume_o *v17; // x8
  __int64 *v18; // x20
  __int64 v19; // x21
  void (__fastcall *v20)(__int64); // x22
  char v21; // w22
  char v22; // w0
  __int64 v23; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  unsigned __int64 v26; // x10
  _DWORD *v27; // x11
  BattleRootComponent_callBackBeginResume_o *v28; // [xsp+8h] [xbp-38h] BYREF

  v28 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v28;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (BattleRootComponent_callBackBeginResume_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v17 = v6[v7];
      v18 = *(__int64 **)&v17->fields.method;
      v19 = *(_QWORD *)&v17->fields.extra_arg;
      v20 = *(void (__fastcall **)(__int64))&v17->fields.method_ptr;
      if ( *(__int16 *)(v19 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v17->fields.extra_arg, method, v2);
      if ( (sub_B1702C(v19) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v19 + 74) )
        goto LABEL_35;
      v20(v19);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v18 && *(__int16 *)(v19 + 72) != -1 && (*(_BYTE *)(*v18 + 277) & 1) == 0 && this->fields.m_target )
    {
      v21 = sub_B17024(v19);
      v22 = sub_B17428(v19);
      if ( (v21 & 1) != 0 )
      {
        if ( (v22 & 1) != 0 )
        {
          v23 = *v18;
          v24 = *(_QWORD *)(v19 + 24);
          v25 = *(unsigned __int16 *)(v19 + 72);
          if ( *(_WORD *)(*v18 + 298) )
          {
            v26 = 0LL;
            v27 = (_DWORD *)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *((_QWORD *)v27 - 1) != v24 )
            {
              ++v26;
              v27 += 4;
              if ( v26 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_34;
            }
            v15 = v23 + 16LL * (*v27 + (int)v25) + 312;
          }
          else
          {
LABEL_34:
            v15 = sub_AAFEF8(v18, v24, v25);
          }
          v14 = *(_QWORD *)(v15 + 8);
        }
        else
        {
          v14 = *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320);
        }
        v16 = (void (__fastcall **)(__int64 *, _QWORD))sub_B170AC(v14, v19);
        (*v16)(v18, v16);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v19 + 72);
        if ( (v22 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v19);
          v10 = *v18;
          if ( *(_WORD *)(*v18 + 298) )
          {
            v11 = 0LL;
            v12 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v12 - 1) != class_0 )
            {
              ++v11;
              v12 += 4;
              if ( v11 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_11;
            }
            v13 = v10 + 16LL * (int)(*v12 + v8) + 312;
          }
          else
          {
LABEL_11:
            v13 = sub_AAFEF8(v18, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v13)(v18, *(_QWORD *)(v13 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 312))(
            v18,
            *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v20)(v18, v19);
    goto LABEL_36;
  }
}