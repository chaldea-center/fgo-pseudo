void __fastcall BattleRootComponent___ctor(BattleRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


System_Int32_array *__fastcall BattleRootComponent__GetAllFieldMotionIds(
        BattleRootComponent_o *this,
        BattleEntity_o *battleEnt,
        QuestPhaseEntity_o *questPhaseEnt,
        System_Int32_array **baseMotionIds,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v8; // x21
  System_Collections_Generic_List_int__o *v9; // x20
  int myFSM; // w8
  BattleRootComponent_o *v11; // x21
  unsigned int v12; // w23
  System_Int32_array *v13; // x26
  __int64 v14; // x8
  unsigned __int64 v15; // x27
  int32_t v16; // w22
  int32_t v17; // w21
  StageEntity_o *v18; // x22
  BattleRootComponent_o *v19; // x23
  _QWORD **v20; // x24
  __int64 v21; // x23
  __int16 v22; // w8
  __int64 v23; // x23
  __int64 v24; // x23
  __int64 v25; // x23
  struct PlayMakerFSM_o *v26; // x8
  unsigned __int64 v27; // x28
  int32_t v28; // w24
  __int64 v30; // x0
  System_Int32_array *fieldMotionIds; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4388213 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Empty_int___);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor__);
    this = (BattleRootComponent_o *)sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4388213 = 1;
  }
  fieldMotionIds = 0LL;
  if ( !battleEnt )
    goto LABEL_52;
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_52;
  *baseMotionIds = BattleInfoData__GetBaseBattleFieldMotionIds((BattleInfoData_o *)this, questPhaseEnt, 0LL);
  sub_B77560(baseMotionIds);
  v8 = (System_Collections_Generic_IEnumerable_T__o *)*baseMotionIds;
  v9 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_51270276(
    v9,
    v8,
    (const MethodInfo_30E5284 *)Method_System_Collections_Generic_List_int___ctor__);
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_52;
  this = (BattleRootComponent_o *)BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray((BattleInfoData_o *)this, 0LL);
  if ( !this )
    goto LABEL_52;
  myFSM = (int)this->fields.myFSM;
  v11 = this;
  if ( myFSM >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= myFSM )
        goto LABEL_53;
      this = (BattleRootComponent_o *)*((_QWORD *)&v11->fields.uiRoot + (int)v12);
      if ( !this )
        goto LABEL_52;
      this = (BattleRootComponent_o *)BattleDeckServantData__TryGetAddFieldMotionIds(
                                        (BattleDeckServantData_o *)this,
                                        &fieldMotionIds,
                                        0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v13 = fieldMotionIds;
        if ( !fieldMotionIds )
          goto LABEL_52;
        v14 = *(_QWORD *)&fieldMotionIds->max_length;
        if ( (int)v14 >= 1 )
          break;
      }
LABEL_20:
      myFSM = (int)v11->fields.myFSM;
      if ( (int)++v12 >= myFSM )
        goto LABEL_21;
    }
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v14 )
        goto LABEL_53;
      if ( !v9 )
        break;
      v16 = v13->m_Items[v15 + 1];
      this = (BattleRootComponent_o *)System_Collections_Generic_List_int___Contains(
                                        v9,
                                        v16,
                                        (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
        System_Collections_Generic_List_int___Add(
          v9,
          v16,
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(v14) = v13->max_length;
      if ( (__int64)++v15 >= (int)v14 )
        goto LABEL_20;
    }
LABEL_52:
    sub_B7769C(this, battleEnt);
  }
LABEL_21:
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_52;
  v17 = 0;
  v18 = 0LL;
  while ( 1 )
  {
    this = (BattleRootComponent_o *)BattleInfoData__getLastWave((BattleInfoData_o *)this, 0LL);
    if ( v17 >= (int)this + 1 )
      break;
    this = (BattleRootComponent_o *)BattleEntity__GetStageEntityAtWave(battleEnt, v17, 0LL);
    if ( this )
      v18 = (StageEntity_o *)this;
    if ( !this )
      goto LABEL_56;
    if ( !v18 )
      goto LABEL_52;
    this = (BattleRootComponent_o *)StageEntity__GetWaveFieldMotionIds(v18, 0LL, 0LL);
    v19 = this;
    if ( !this )
    {
LABEL_56:
      v20 = (_QWORD **)Method_System_Array_Empty_int___;
      v21 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v22 = *(_WORD *)(v21 + 306);
      if ( (v22 & 1) == 0 )
      {
        this = (BattleRootComponent_o *)sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v22 = *(_WORD *)(v21 + 306);
      }
      if ( (v22 & 0x400) != 0 )
      {
        v23 = *v20[6];
        if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
          this = (BattleRootComponent_o *)sub_B0F2C4(*v20[6]);
        if ( !*(_DWORD *)(v23 + 224) )
        {
          v24 = *v20[6];
          if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
            sub_B0F2C4(*v20[6]);
          j_il2cpp_runtime_class_init_0(v24);
        }
      }
      v25 = *v20[6];
      if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
        this = (BattleRootComponent_o *)sub_B0F2C4(*v20[6]);
      v19 = **(BattleRootComponent_o ***)(v25 + 184);
      if ( !v19 )
        goto LABEL_52;
    }
    v26 = v19->fields.myFSM;
    if ( (int)v26 >= 1 )
    {
      v27 = 0LL;
      while ( v27 < (unsigned int)v26 )
      {
        if ( !v9 )
          goto LABEL_52;
        v28 = *((_DWORD *)&v19->fields.uiRoot + v27);
        this = (BattleRootComponent_o *)System_Collections_Generic_List_int___Contains(
                                          v9,
                                          v28,
                                          (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v9,
            v28,
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
        LODWORD(v26) = v19->fields.myFSM;
        if ( (__int64)++v27 >= (int)v26 )
          goto LABEL_48;
      }
LABEL_53:
      v30 = sub_B776C8(this);
      sub_B77668(v30, 0LL);
    }
LABEL_48:
    this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
    ++v17;
    if ( !this )
      goto LABEL_52;
  }
  if ( !v9 )
    goto LABEL_52;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  bool IsQuestClear_24699280; // w0
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

  if ( (byte_438821E & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_BattleMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int___ctor___69373296);
    sub_B775C4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    byte_438821E = 1;
  }
  entitys = 0LL;
  memset(&v36, 0, sizeof(v36));
  v35 = 0;
  v2 = (System_Collections_Generic_HashSet_int__o *)sub_B77694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v2,
    (const MethodInfo_2EDBA84 *)Method_System_Collections_Generic_HashSet_int___ctor___69373296);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_WarQuestSelectionMaster,
                   (const MethodInfo_21FBB80 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
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
  IsQuestClear_24699280 = CondType__IsQuestClear_24699280(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( !SingleEntity || !IsQuestClear_24699280 )
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v2,
             (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  klass = SingleEntity[1].klass;
  if ( !klass || (data = klass->_1.this_arg.data) == 0LL || (v10 = data[2]) == 0 )
LABEL_57:
    sub_B7769C(Master_WarQuestSelectionMaster, v4);
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
                 (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
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
          (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
        v36 = *(System_Collections_Generic_List_Enumerator_T__o *)v34;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v36,
                  (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
        {
          if ( !v36.fields.current )
            sub_B7769C(0LL, v24);
          EffectIdArray = ClassBoardCommandSpellEntity__GetEffectIdArray(
                            (ClassBoardCommandSpellEntity_o *)v36.fields.current,
                            0LL);
          v25 = EffectIdArray;
          if ( !EffectIdArray )
            sub_B7769C(0LL, v23);
          v20 = *(_QWORD *)&EffectIdArray->max_length;
          if ( (int)v20 >= 1 )
          {
            v21 = 0LL;
            do
            {
              if ( v21 >= (unsigned int)v20 )
              {
                v27 = sub_B776C8(EffectIdArray);
                sub_B77668(v27, 0LL);
              }
              if ( !v2 )
                sub_B7769C(EffectIdArray, v23);
              EffectIdArray = (System_Int32_array *)System_Collections_Generic_HashSet_int___Add(
                                                      v2,
                                                      v25->m_Items[v21 + 1],
                                                      (const MethodInfo_2EDCC60 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
          (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
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
    v29 = sub_B776C8(Master_WarQuestSelectionMaster);
    sub_B77668(v29, 0LL);
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v2,
           (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_438821D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_DeckData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_DeckData__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_DeckData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_DeckData___ctor__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_DeckData__TypeInfo);
    byte_438821D = 1;
  }
  memset(&v34, 0, sizeof(v34));
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_DeckData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_DeckData___ctor__);
  v5 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
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
      (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
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
      (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
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
      (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
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
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_DeckData__Add__);
  }
  else if ( !v4 )
  {
    goto LABEL_59;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
  v34 = v33;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v34,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    if ( !v18 )
      break;
    if ( !v34.fields.current )
      sub_B7769C(v18, v17);
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
            v31 = sub_B776C8(v18);
            sub_B77668(v31, 0LL);
          }
          v12 = *((_QWORD *)&klass->_1.byval_arg.data + v11);
          if ( !v12 )
            sub_B7769C(v18, v17);
          v13 = *(_QWORD *)(v12 + 104);
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
                  v29 = sub_B776C8(v18);
                  sub_B77668(v29, 0LL);
                }
                v16 = *(_QWORD *)(v13 + 32 + 8 * v15);
                if ( !v16 )
                  sub_B7769C(v18, v17);
                v17 = *(unsigned int *)(v16 + 48);
                if ( (_DWORD)v17 )
                {
                  if ( !v5 )
                    sub_B7769C(v18, v17);
                  v18 = System_Collections_Generic_List_int___Contains(
                          v5,
                          v17,
                          (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__);
                  if ( !v18 )
                    System_Collections_Generic_List_int___Add(
                      v5,
                      *(_DWORD *)(v16 + 48),
                      (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
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
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
  v19 = v32->fields.battleInfo;
  if ( !v19 )
LABEL_59:
    sub_B7769C(v6, enemyDeck);
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
                 (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__);
          if ( !v6 )
            System_Collections_Generic_List_int___Add(
              v5,
              v27->fields.effectType,
              (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
        }
        v25 = dropInfos->max_length;
        if ( (int)++v26 >= v25 )
          goto LABEL_54;
      }
LABEL_60:
      v30 = sub_B776C8(v6);
      sub_B77668(v30, 0LL);
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
  BattleRootComponent__LoadAsset_d__13_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4388214 & 1) == 0 )
  {
    sub_B775C4(&BattleRootComponent__LoadAsset_d__13_TypeInfo);
    byte_4388214 = 1;
  }
  v9 = (BattleRootComponent__LoadAsset_d__13_o *)sub_B77694(BattleRootComponent__LoadAsset_d__13_TypeInfo);
  BattleRootComponent__LoadAsset_d__13___ctor(v9, 0, 0LL);
  if ( !v9 )
    sub_B7769C(v10, v11);
  v9->fields.__4__this = this;
  sub_B77560(&v9->fields.__4__this);
  v9->fields.ent = ent;
  sub_B77560(&v9->fields.ent);
  v9->fields.eventId = eventId;
  v9->fields.battleEnt = battleEnt;
  sub_B77560(&v9->fields.battleEnt);
  return (System_Collections_IEnumerator_o *)v9;
}


System_Collections_IEnumerator_o *__fastcall BattleRootComponent__LoadAssetsIndependentToMainOne(
        BattleRootComponent_o *this,
        QuestPhaseEntity_o *ent,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4388215 & 1) == 0 )
  {
    sub_B775C4(&BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo);
    byte_4388215 = 1;
  }
  v9 = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)sub_B77694(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo);
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14___ctor(v9, 0, 0LL);
  if ( !v9 )
    sub_B7769C(v10, v11);
  v9->fields.__4__this = this;
  sub_B77560(&v9->fields.__4__this);
  v9->fields.ent = ent;
  sub_B77560(&v9->fields.ent);
  v9->fields.eventId = eventId;
  v9->fields.finishCallback = finishCallback;
  sub_B77560(&v9->fields.finishCallback);
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall BattleRootComponent__LoadBatteBgm(
        BattleRootComponent_o *this,
        System_Collections_Generic_List_string__o *bgmList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BattleRootComponent___c__DisplayClass17_0_o *v7; // x22
  System_Action_o *v8; // x0
  __int64 v9; // x1
  System_Action_o **p_callback; // x20
  struct System_Collections_Generic_List_string__o *v11; // x8
  int size; // w9
  System_String_o *v13; // x19
  System_Action_o *v14; // x20

  if ( (byte_4388216 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__);
    sub_B775C4(&BattleRootComponent___c__DisplayClass17_0_TypeInfo);
    byte_4388216 = 1;
  }
  v7 = (BattleRootComponent___c__DisplayClass17_0_o *)sub_B77694(BattleRootComponent___c__DisplayClass17_0_TypeInfo);
  BattleRootComponent___c__DisplayClass17_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_12;
  v7->fields.bgmList = bgmList;
  sub_B77560(&v7->fields);
  v7->fields.__4__this = this;
  sub_B77560(&v7->fields.__4__this);
  v7->fields.callback = callback;
  p_callback = &v7->fields.callback;
  sub_B77560(&v7->fields.callback);
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
    sub_B7769C(v8, v9);
  }
  v13 = v11->fields._items->m_Items[size - 1];
  v14 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__,
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
    sub_B7769C(perf, method);
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

  if ( (byte_438821B & 1) == 0 )
  {
    sub_B775C4(&ScriptManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438821B = 1;
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
  if ( !byte_438746E )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438746E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v6);
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, (Il2CppObject *)info, 1, 0LL);
}


void __fastcall BattleRootComponent__TransitionPartyOrganization(BattleRootComponent_o *this, const MethodInfo *method)
{
  BattleRootComponent_o *v2; // x19
  struct BattleData_o *data; // x8
  struct QuestEntity_o *quest_ent; // x21
  struct BattleData_o *v5; // x8
  struct BattleEntity_o *battle_ent; // x8
  int32_t questPhase; // w22
  int32_t id; // w21
  int32_t v9; // w20
  BattleSetupInfo_o *v10; // x23
  struct BattleData_o *v11; // x8
  Il2CppObject *v12; // x19
  int32_t selectedInterruptionWave; // w8
  TerminalPramsManager_c *v14; // x0

  v2 = this;
  if ( (byte_438821F & 1) == 0 )
  {
    sub_B775C4(&BattleSetupInfo_TypeInfo);
    sub_B775C4(&ScriptManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (BattleRootComponent_o *)sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438821F = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_23;
  quest_ent = data->fields.quest_ent;
  if ( !quest_ent )
    goto LABEL_23;
  this = (BattleRootComponent_o *)QuestEntity__GetWarId(data->fields.quest_ent, 0LL);
  v5 = v2->fields.data;
  if ( !v5 )
    goto LABEL_23;
  battle_ent = v5->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_23;
  questPhase = battle_ent->fields.questPhase;
  id = quest_ent->fields.id;
  v9 = (int)this;
  v10 = (BattleSetupInfo_o *)sub_B77694(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_23;
  this = (BattleRootComponent_o *)BattleSetupInfo__ConvertBattleSetupInfo(v10, v9, id, questPhase, 0, 0, 0, 0LL);
  v11 = v2->fields.data;
  if ( !v11 )
    goto LABEL_23;
  v12 = (Il2CppObject *)this;
  if ( !this )
    goto LABEL_23;
  selectedInterruptionWave = v11->fields.selectedInterruptionWave;
  LOBYTE(this[1].fields.depth) = 1;
  this[1].fields.kind = selectedInterruptionWave;
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
  if ( !byte_438746E )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438746E = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_IsAutoResume_k__BackingField = 1;
  this = (BattleRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_23:
    sub_B7769C(this, method);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)this, 35, 1, v12, 1, 0LL);
}


void __fastcall BattleRootComponent__TransitionTerminalOrBattleScript(
        BattleRootComponent_o *this,
        BattleScriptRootComponent_TalkScriptInfo_o *info,
        const MethodInfo *method)
{
  BattleRootComponent___c__DisplayClass23_0_o *v5; // x20
  BattleScriptRootComponent_TalkScriptInfo_o *isLose; // x0
  const MethodInfo *v7; // x1
  BattleScriptRootComponent_TalkScriptInfo_o **p_info; // x21
  long double v9; // q0
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  const MethodInfo *v12; // x2
  struct BattleData_o *v13; // x8
  BattleScriptRootComponent_TalkScriptInfo_o *v14; // x8
  int32_t qId; // w22
  int32_t pId; // w23
  struct BattleData_o *v17; // x8
  int64_t overwriteEndScriptQuestId; // x22
  int32_t questId; // w23
  int32_t ScriptQuestId; // w22
  QuestEntity_o *QuestEntity; // x0
  int32_t questPhase; // w24
  ScriptManager_o *v23; // x23
  int32_t winResult; // w25
  int32_t v25; // w24
  ScriptManager_o *v26; // x23
  int32_t v27; // w25
  ScriptManager_c *v28; // x0
  System_String_o *textPath; // x23
  System_String_o *ScriptAssetName; // x0
  System_String_o *v31; // x22
  int32_t v32; // w19
  int32_t v33; // w21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v34; // x22
  CommonUI_o *Instance; // x19
  System_String_o *v36; // x21
  System_String_o *v37; // x22
  NotificationDialog_ClickDelegate_o *v38; // x23
  QuestPhaseDetailEntity_o *entity; // [xsp+68h] [xbp-48h] BYREF

  if ( (byte_438821C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_string___ctor__);
    sub_B775C4(&System_Action_string__TypeInfo);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestScriptReleaseMaster___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&MyRoomStateMaterial_TypeInfo);
    sub_B775C4(&ScriptManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__);
    sub_B775C4(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__);
    sub_B775C4(&BattleRootComponent___c__DisplayClass23_0_TypeInfo);
    sub_B775C4(&StringLiteral_2520/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/);
    sub_B775C4(&StringLiteral_2521/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/);
    byte_438821C = 1;
  }
  entity = 0LL;
  v5 = (BattleRootComponent___c__DisplayClass23_0_o *)sub_B77694(BattleRootComponent___c__DisplayClass23_0_TypeInfo);
  BattleRootComponent___c__DisplayClass23_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_72;
  v5->fields.__4__this = this;
  sub_B77560(&v5->fields);
  v5->fields.info = info;
  p_info = &v5->fields.info;
  *(__n128 *)&v9 = sub_B77560(&v5->fields.info);
  data = this->fields.data;
  if ( !data )
    goto LABEL_72;
  battleEvent = data->fields.battleEvent;
  if ( !battleEvent
    || (((__int64 (__fastcall *)(struct BaseBattleEvent_o *, Il2CppMethodPointer, long double))battleEvent->klass->vtable._16_GoNextScene.method)(
          battleEvent,
          battleEvent->klass->vtable._17_GetSaveData.methodPtr,
          v9) & 1) == 0 )
  {
    SkillLvMaster__ResetBaseTime(0LL);
    isLose = *p_info;
    if ( !*p_info )
      goto LABEL_72;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)BattleScriptRootComponent_TalkScriptInfo__isLose(isLose, 0LL);
    if ( ((unsigned __int8)isLose & 1) != 0 )
    {
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)this->fields.data;
      if ( isLose )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)BattleData__IsResultInterruption(
                                                                 (BattleData_o *)isLose,
                                                                 0LL);
        if ( ((unsigned __int8)isLose & 1) == 0 )
        {
LABEL_25:
          BattleRootComponent__TerminalTransition((BattleRootComponent_o *)isLose, *p_info, v12);
          return;
        }
        v13 = this->fields.data;
        if ( v13 )
        {
          if ( (v13->fields.selectedInterruptionWave & 0x80000000) == 0 )
          {
            BattleRootComponent__TransitionPartyOrganization(this, v7);
            return;
          }
          goto LABEL_25;
        }
      }
      goto LABEL_72;
    }
    v14 = *p_info;
    if ( !*p_info )
      goto LABEL_72;
    qId = v14->fields.qId;
    v5->fields.questId = qId;
    pId = v14->fields.pId;
    v5->fields.questPhase = pId;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetCachedSelectedBranchQuestId(qId, pId, 0LL);
    v17 = this->fields.data;
    if ( !v17 )
      goto LABEL_72;
    overwriteEndScriptQuestId = v17->fields.overwriteEndScriptQuestId;
    if ( overwriteEndScriptQuestId )
    {
      if ( !*p_info )
        goto LABEL_72;
      (*p_info)->fields.qId = overwriteEndScriptQuestId;
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
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestScriptReleaseMaster___)) == 0LL
      || (ScriptQuestId = QuestScriptReleaseMaster__GetScriptQuestId(
                            (QuestScriptReleaseMaster_o *)isLose,
                            overwriteEndScriptQuestId,
                            v5->fields.questPhase,
                            2,
                            0LL),
          (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___),
          !*p_info)
      || !isLose )
    {
LABEL_72:
      sub_B7769C(isLose, v7);
    }
    if ( !QuestPhaseDetailMaster__TryGetEntity(
            (QuestPhaseDetailMaster_o *)isLose,
            &entity,
            (*p_info)->fields.qId,
            (*p_info)->fields.pId,
            0LL) )
      goto LABEL_59;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)entity;
    if ( !entity )
      goto LABEL_72;
    if ( !QuestPhaseDetailEntity__HasFlag(entity, 0x20000000000LL, 0LL) )
      goto LABEL_59;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose )
      goto LABEL_72;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)isLose,
                                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !*p_info || !isLose )
      goto LABEL_72;
    QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)isLose, (*p_info)->fields.qId, 0LL);
    if ( !QuestEntity || !QuestEntity__IsOpenByTime(QuestEntity, 0, 0LL) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_2521/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, 0LL);
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_2520/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, 0LL);
      v38 = (NotificationDialog_ClickDelegate_o *)sub_B77694(NotificationDialog_ClickDelegate_TypeInfo);
      NotificationDialog_ClickDelegate___ctor(
        v38,
        (Il2CppObject *)v5,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__,
        0LL);
      if ( !Instance )
        goto LABEL_72;
      CommonUI__OpenNotificationDialog_18058264(
        Instance,
        v36,
        v37,
        v38,
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
      if ( !ScriptQuestId )
        goto LABEL_62;
LABEL_59:
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !v5->fields.info )
        goto LABEL_72;
      questPhase = v5->fields.questPhase;
      v23 = (ScriptManager_o *)isLose;
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
      if ( !v23 )
        goto LABEL_72;
      if ( !ScriptManager__IsExistScriptFile(v23, (System_String_o *)isLose, 0LL) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !v5->fields.info )
          goto LABEL_72;
        v25 = v5->fields.questPhase;
        v26 = (ScriptManager_o *)isLose;
        v27 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v5->fields.info, 0LL);
        if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScriptManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        }
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd2(
                                                                 ScriptQuestId,
                                                                 v25,
                                                                 v27,
                                                                 0LL);
        if ( !v26 )
          goto LABEL_72;
        if ( !ScriptManager__IsExistScriptFile(v26, (System_String_o *)isLose, 0LL) )
          goto LABEL_62;
      }
      v28 = ScriptManager_TypeInfo;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v28 = ScriptManager_TypeInfo;
      }
      textPath = v28->static_fields->textPath;
      ScriptAssetName = ScriptManager__GetScriptAssetName(ScriptQuestId, 0LL);
      v31 = System_String__Concat_44901936(textPath, ScriptAssetName, 0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__isExistAssetStorage(v31, 0LL) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !isLose )
          goto LABEL_72;
        AvalonSceneManager__transitionSceneRefresh(
          (AvalonSceneManager_o *)isLose,
          this->fields.nextscenetype,
          1,
          (Il2CppObject *)*p_info,
          0,
          0LL);
      }
      else
      {
LABEL_62:
        v32 = v5->fields.questId;
        v33 = v5->fields.questPhase;
        v34 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_string__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v34,
          (Il2CppObject *)v5,
          Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__,
          (const MethodInfo_26A0868 *)Method_System_Action_string___ctor__);
        if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScriptManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        }
        ScriptManager__LoadBattleEndGameDemo(v32, v33, 1, (System_Action_string__o *)v34, 0, 0LL);
      }
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

  if ( (byte_4388212 & 1) == 0 )
  {
    sub_B775C4(&AssetStorageLoadWrapper_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&BattleActionData_TypeInfo);
    sub_B775C4(&BattleEffectUtility_TypeInfo);
    sub_B775C4(&BattleFBXComponent_TypeInfo);
    sub_B775C4(&BattlePerformance_TypeInfo);
    sub_B775C4(&BuffList_TypeInfo);
    sub_B775C4(&CatAndMouseGame_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_BattleBgMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_BattleMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_B775C4(&System_GC_TypeInfo);
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&OptionManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B775C4(&StringLiteral_15665/*"WINGNAME"*/);
    byte_4388212 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15665/*"WINGNAME"*/, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  CatAndMouseGame__SixHomeBuilding(Value, 0LL);
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_44383624(0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
  {
    assetStorageLoadWrapper = (AssetStorageLoadWrapper_o *)sub_B77694(AssetStorageLoadWrapper_TypeInfo);
    AssetStorageLoadWrapper___ctor(assetStorageLoadWrapper, 0LL);
  }
  this->fields.assetStorageLoadWrapper = assetStorageLoadWrapper;
  sub_B77560(&this->fields.assetStorageLoadWrapper);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  SingleEntity = (BattleEntity_o *)DataMasterBase_object__object__long___GetSingleEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_WarQuestSelectionMaster,
                                     (const MethodInfo_21FBB80 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
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
    if ( !byte_4387CFA )
    {
      sub_B775C4(&SkillLvMaster_TypeInfo);
      byte_4387CFA = 1;
    }
    SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = createdAt;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_BattleBgMaster___);
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
  UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, Asset, 0LL);
  Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  *((_DWORD *)Master_WarQuestSelectionMaster + 36) = 3;
  Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  if ( *((_BYTE *)Master_WarQuestSelectionMaster + 140) )
  {
    Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
      sub_B7769C(Master_WarQuestSelectionMaster, v6);
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

  if ( (byte_4388211 & 1) == 0 )
  {
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4388211 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v6 )
    sub_B7769C(Instance, v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  callbackBeginResumeFunc = this->fields.callbackBeginResumeFunc;
  p_callbackBeginResumeFunc = &this->fields.callbackBeginResumeFunc;
  v8 = callbackBeginResumeFunc;
  if ( callbackBeginResumeFunc )
  {
    *p_callbackBeginResumeFunc = 0LL;
    sub_B77560(p_callbackBeginResumeFunc);
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

  if ( (byte_4388217 & 1) == 0 )
  {
    sub_B775C4(&AndroidBackKeyManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_B775C4(&BattleLogic_LOGICTYPE___TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_B775C4(&StringLiteral_20632/*"limitCount"*/);
    sub_B775C4(&StringLiteral_11178/*"QUEST_START"*/);
    sub_B775C4(&StringLiteral_22446/*"servantId"*/);
    byte_4388217 = 1;
  }
  if ( data )
  {
    v5 = *(&System_Collections_Generic_Dictionary_string__int__TypeInfo->_2.bitflags2 + 1);
    if ( *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (System_Collections_Generic_Dictionary_string__int__c *)data->klass->_2.typeHierarchy[v5 - 1] == System_Collections_Generic_Dictionary_string__int__TypeInfo )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_string__int___get_Item(
               (System_Collections_Generic_Dictionary_string__int__o *)data,
               (System_String_o *)StringLiteral_22446/*"servantId"*/,
               (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !Instance )
        goto LABEL_23;
      LODWORD(Instance->fields.baseWindow) = Item;
      v9 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_string__int___get_Item(
               (System_Collections_Generic_Dictionary_string__int__o *)data,
               (System_String_o *)StringLiteral_20632/*"limitCount"*/,
               (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !v9 )
        goto LABEL_23;
      HIDWORD(v9->fields.baseWindow) = Item;
      Item = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item )
        goto LABEL_23;
      *(_BYTE *)(Item + 44) = 1;
      Item = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item )
        goto LABEL_23;
      *(_BYTE *)(Item + 45) = 1;
      logic = this->fields.logic;
      Item = sub_B775DC(BattleLogic_LOGICTYPE___TypeInfo, 2LL);
      if ( !logic )
        goto LABEL_23;
      logic->fields.logiclist = (struct BattleLogic_LOGICTYPE_array *)Item;
      sub_B77560(&logic->fields.logiclist);
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
      Item = sub_B77990(data);
    }
    v16 = sub_B776C8(Item);
    sub_B77668(v16, 0LL);
  }
LABEL_18:
  SceneRootComponent__beginStartUp_17679036((SceneRootComponent_o *)this, 0LL);
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
    sub_B7769C(Item, v8);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Item, (System_String_o *)StringLiteral_11178/*"QUEST_START"*/, 0LL);
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

  if ( (byte_4388218 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_BattleRootComponent_goNextScene__);
    sub_B775C4(&OptionManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__);
    byte_4388218 = 1;
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
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
  v5 = **(_QWORD **)(v4 + 192);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_B0F2C4(v5);
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
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_B0F2C4(v7);
  perf = **(BattlePerformance_o ***)(v7 + 184);
  if ( !perf
    || (AtlasManager__UnloadWarBoardAtlas((AtlasManager_o *)perf, 0LL), (perf = this->fields.perf) == 0LL)
    || (BattlePerformance__ReleaseEventInfoPointGauge(perf, 0LL),
        (perf = (BattlePerformance_o *)this->fields.data) == 0LL) )
  {
LABEL_37:
    sub_B7769C(perf, method);
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
    v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleRootComponent_goNextScene__, 0LL);
    OutGameAsset = BattleRootComponent__loadOutGameAsset(this, v9, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, OutGameAsset, 0LL);
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
  if ( (byte_438821A & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (BattleRootComponent_o *)sub_B775C4(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    byte_438821A = 1;
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
  v12 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_B77694(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
  BattleScriptRootComponent_TalkScriptInfo___ctor_21113320(v12, v10, id, questPhase, 4, win_lose, WinResult, 0, 0LL);
  this = (BattleRootComponent_o *)v2->fields.data;
  if ( !this
    || (BattleData__release((BattleData_o *)this, 0LL),
        (this = (BattleRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_10:
    sub_B7769C(this, method);
  }
  CommonUI__SetMaskFadeInitColor((CommonUI_o *)this, 1, 0LL);
  BattleRootComponent__TransitionTerminalOrBattleScript(v2, v12, v13);
}


System_Collections_IEnumerator_o *__fastcall BattleRootComponent__loadOutGameAsset(
        BattleRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BattleRootComponent__loadOutGameAsset_d__20_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4388219 & 1) == 0 )
  {
    sub_B775C4(&BattleRootComponent__loadOutGameAsset_d__20_TypeInfo);
    byte_4388219 = 1;
  }
  v5 = (BattleRootComponent__loadOutGameAsset_d__20_o *)sub_B77694(BattleRootComponent__loadOutGameAsset_d__20_TypeInfo);
  BattleRootComponent__loadOutGameAsset_d__20___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  v5->fields.__4__this = this;
  sub_B77560(&v5->fields.__4__this);
  v5->fields.callback = callback;
  sub_B77560(&v5->fields.callback);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleRootComponent__setCallbackBeginResume(
        BattleRootComponent_o *this,
        BattleRootComponent_callBackBeginResume_o *func,
        const MethodInfo *method)
{
  this->fields.callbackBeginResumeFunc = func;
  sub_B77560(&this->fields.callbackBeginResumeFunc);
}


void __fastcall BattleRootComponent__LoadAsset_d__13___ctor(
        BattleRootComponent__LoadAsset_d__13_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleRootComponent__LoadAsset_d__13__MoveNext(
        BattleRootComponent__LoadAsset_d__13_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleRootComponent__LoadAsset_d__13_o *v8; // x27
  struct BattleRootComponent_o *_4__this; // x26
  Il2CppObject *v10; // x22
  BattleRootComponent__LoadAsset_d__13_o **p__8__1; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_WaitForEndOfFrame_o *v18; // x20
  BattleServantConfConponent_o *p__2__current; // x27
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  bool result; // w0
  QuestPhaseEntity_o *ent; // x23
  int32_t eventId; // w22
  Il2CppObject *_8__1; // x25
  System_Action_o *v30; // x24
  System_Collections_IEnumerator_o *AssetsIndependentToMainOne; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  BattleDataDefine_c *v39; // x0
  BattleRootComponent__LoadAsset_d__13_o *v40; // x25
  System_String_o *ASSET_BATTLE_COMMON; // x23
  AssetLoader_LoadEndDataHandler_o *v42; // x24
  BattleRootComponent__LoadAsset_d__13_o *v43; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x23
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **AllFieldMotionIds; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct BattleRootComponent___c__DisplayClass13_0_o *v58; // x8
  struct System_Int32_array *fieldMotionIds_5__2; // x28
  __int64 v60; // x8
  unsigned __int64 v61; // x27
  int32_t v62; // w22
  BattleRootComponent__LoadAsset_d__13_o *v63; // x25
  AssetStorageLoadWrapper_o *v64; // x23
  AssetLoader_LoadEndDataHandler_o *v65; // x24
  System_String_o *v66; // x22
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  AssetManager_o *v73; // x22
  BattleServantConfConponent_o *p__8__2; // x22
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x0
  BattleServantConfConponent_o *v82; // x27
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  int v89; // w8
  BattleRootComponent__LoadAsset_d__13_o *v90; // x8
  struct System_Int32_array *v91; // x9
  struct BattleRootComponent___c__DisplayClass13_0_o **v92; // x22
  struct BattleEntity_o *battleEnt; // x8
  Il2CppObject *v94; // x23
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_String_o *v101; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  struct BattleRootComponent___c__DisplayClass13_1_o *_8__2; // x8
  System_String_o *v109; // x23
  struct BattleRootComponent_o *v110; // x19
  AssetStorageLoadWrapper_o *v111; // x24
  Il2CppObject *klass; // x26
  AssetLoader_LoadEndDataHandler_o *v113; // x25
  struct BattleRootComponent___c__DisplayClass13_0_o *v114; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v116; // x8
  struct BattlePerformance_o *v117; // x8
  AssumedBattleAssetLoadManager_o *AssumedBattleAssetLoadManager_k__BackingField; // x21
  struct BattlePerformance_o *v119; // x8
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  __int64 v126; // x0
  BattleRootComponent__LoadAsset_d__13_o *v127; // [xsp+0h] [xbp-60h]
  int v128; // [xsp+Ch] [xbp-54h] BYREF

  v8 = this;
  if ( (byte_4388E1D & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
    sub_B775C4(&BattleDataDefine_TypeInfo);
    sub_B775C4(&System_GC_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_B775C4(&System_Collections_Generic_List_AssetData__TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&OptionManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_B775C4(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__);
    sub_B775C4(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__);
    sub_B775C4(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__2__);
    sub_B775C4(&BattleRootComponent___c__DisplayClass13_0_TypeInfo);
    sub_B775C4(&Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__3__);
    sub_B775C4(&BattleRootComponent___c__DisplayClass13_1_TypeInfo);
    sub_B775C4(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_B775C4(&StringLiteral_2877/*"Battle/UniqueCamera/"*/);
    this = (BattleRootComponent__LoadAsset_d__13_o *)sub_B775C4(&StringLiteral_15188/*"UniqueCameraPrefab"*/);
    byte_4388E1D = 1;
  }
  v128 = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (Il2CppObject *)sub_B77694(BattleRootComponent___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor(v10, 0LL);
      p__8__1 = (BattleRootComponent__LoadAsset_d__13_o **)&v8->fields.__8__1;
      v8->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass13_0_o *)v10;
      sub_B77560(
        (BattleServantConfConponent_o *)&v8->fields.__8__1,
        (System_Int32_array **)v10,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      this = (BattleRootComponent__LoadAsset_d__13_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_13;
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_44383624(0LL);
      v18 = (UnityEngine_WaitForEndOfFrame_o *)sub_B77694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v18, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v18;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B77560(p__2__current, (System_Int32_array **)v18, v20, v21, v22, v23, v24, v25);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    case 1:
      v8->fields.__1__state = -1;
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_105;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_105;
      v81 = (System_Int32_array **)AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v81;
      v82 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B77560(v82, v81, v83, v84, v85, v86, v87, v88);
      v89 = 2;
      goto LABEL_98;
    case 2:
      p__8__1 = (BattleRootComponent__LoadAsset_d__13_o **)&v8->fields.__8__1;
      v8->fields.__1__state = -1;
LABEL_13:
      if ( !*p__8__1 )
        goto LABEL_105;
      LOBYTE((*p__8__1)->fields.__1__state) = 1;
      ent = v8->fields.ent;
      eventId = v8->fields.eventId;
      _8__1 = (Il2CppObject *)v8->fields.__8__1;
      v30 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v30, _8__1, Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__, 0LL);
      if ( !_4__this )
        goto LABEL_105;
      AssetsIndependentToMainOne = BattleRootComponent__LoadAssetsIndependentToMainOne(_4__this, ent, eventId, v30, 0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_36304832(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        AssetsIndependentToMainOne,
        0LL);
      this = *p__8__1;
      if ( !*p__8__1 )
        goto LABEL_105;
      this->fields.__2__current = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v32, v33, v34, v35, v36, v37);
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
      v42 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v42,
        (Il2CppObject *)v40,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__,
        0LL);
      if ( !assetStorageLoadWrapper )
        goto LABEL_105;
      AssetStorageLoadWrapper__LoadAssetStorage(assetStorageLoadWrapper, ASSET_BATTLE_COMMON, v42, 1, 0LL);
      v43 = *p__8__1;
      v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_AssetData__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v44,
        (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_AssetData___ctor__);
      if ( !v43 )
        goto LABEL_105;
      v43->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass13_0_o *)v44;
      sub_B77560(
        (BattleServantConfConponent_o *)&v43->fields.__8__1,
        (System_Int32_array **)v44,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      AllFieldMotionIds = (System_Int32_array **)BattleRootComponent__GetAllFieldMotionIds(
                                                   _4__this,
                                                   v8->fields.battleEnt,
                                                   v8->fields.ent,
                                                   &v8->fields._baseMotionIds_5__3,
                                                   0LL);
      v8->fields._fieldMotionIds_5__2 = (struct System_Int32_array *)AllFieldMotionIds;
      sub_B77560(
        (BattleServantConfConponent_o *)&v8->fields._fieldMotionIds_5__2,
        AllFieldMotionIds,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      v58 = v8->fields.__8__1;
      if ( !v58 )
        goto LABEL_105;
      v58->fields.loadCompCnt = 0;
      fieldMotionIds_5__2 = v8->fields._fieldMotionIds_5__2;
      v127 = v8;
      if ( !fieldMotionIds_5__2 )
        goto LABEL_105;
      v60 = *(_QWORD *)&fieldMotionIds_5__2->max_length;
      if ( (int)v60 < 1 )
        goto LABEL_37;
      v61 = 0LL;
      break;
    case 3:
      p__8__1 = (BattleRootComponent__LoadAsset_d__13_o **)&v8->fields.__8__1;
      v8->fields.__1__state = -1;
      goto LABEL_53;
    case 4:
      p__8__2 = (BattleServantConfConponent_o *)&v8->fields.__8__2;
      v8->fields.__1__state = -1;
      goto LABEL_43;
    case 5:
      v92 = &v8->fields.__8__1;
      v8->fields.__1__state = -1;
      goto LABEL_90;
    case 6:
      v8->fields.__1__state = -1;
      goto LABEL_93;
    default:
      return 0;
  }
  do
  {
    if ( v61 >= (unsigned int)v60 )
    {
      v126 = sub_B776C8(this);
      sub_B77668(v126, 0LL);
    }
    v62 = fieldMotionIds_5__2->m_Items[v61 + 1];
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    }
    this = (BattleRootComponent__LoadAsset_d__13_o *)BattleDataDefine__FieldMotionPath(v62, 0LL);
    v63 = *p__8__1;
    if ( !*p__8__1 )
      goto LABEL_105;
    v64 = _4__this->fields.assetStorageLoadWrapper;
    v65 = (AssetLoader_LoadEndDataHandler_o *)v63->fields.ent;
    v66 = (System_String_o *)this;
    if ( !v65 )
    {
      v65 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v65,
        (Il2CppObject *)v63,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__2__,
        0LL);
      v63->fields.ent = (struct QuestPhaseEntity_o *)v65;
      sub_B77560(
        (BattleServantConfConponent_o *)&v63->fields.ent,
        (System_Int32_array **)v65,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
    }
    if ( !v64 )
      goto LABEL_105;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(v64, v66, v65, 1, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !*p__8__1 )
        goto LABEL_105;
      ++LODWORD((*p__8__1)->fields.__4__this);
    }
    LODWORD(v60) = fieldMotionIds_5__2->max_length;
    ++v61;
  }
  while ( (__int64)v61 < (int)v60 );
LABEL_37:
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v73 = (AssetManager_o *)this;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  }
  v8 = v127;
  if ( !v73 )
    goto LABEL_105;
  AssetManager__UpdateLoadParallelMax(v73, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
LABEL_53:
  v90 = *p__8__1;
  if ( !*p__8__1 )
    goto LABEL_105;
  if ( !v90->fields.__2__current )
  {
LABEL_57:
    v8->fields.__2__current = 0LL;
    v82 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
    sub_B77560(v82, 0LL, v2, v3, v4, v5, v6, v7);
    v89 = 3;
LABEL_98:
    *(_DWORD *)&v82[-1].fields.isOpenAfter = v89;
    return 1;
  }
  v91 = v8->fields._fieldMotionIds_5__2;
  if ( !v91 )
    goto LABEL_105;
  if ( SLODWORD(v90->fields.__4__this) < (signed int)v91->max_length )
    goto LABEL_57;
  battleEnt = v8->fields.battleEnt;
  if ( !battleEnt )
    goto LABEL_105;
  this = (BattleRootComponent__LoadAsset_d__13_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_105;
  this = (BattleRootComponent__LoadAsset_d__13_o *)BattleInfoData__GetUniqueCameraId(
                                                     (BattleInfoData_o *)this,
                                                     v8->fields.ent,
                                                     0LL);
  v128 = (int)this;
  if ( (_DWORD)this )
  {
    v94 = (Il2CppObject *)sub_B77694(BattleRootComponent___c__DisplayClass13_1_TypeInfo);
    System_Object___ctor(v94, 0LL);
    v8->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass13_1_o *)v94;
    p__8__2 = (BattleServantConfConponent_o *)&v8->fields.__8__2;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->fields.__8__2,
      (System_Int32_array **)v94,
      v95,
      v96,
      v97,
      v98,
      v99,
      v100);
    v101 = System_Int32__ToString((int32_t)&v128, 0LL);
    this = (BattleRootComponent__LoadAsset_d__13_o *)System_String__Concat_44901936(
                                                       (System_String_o *)StringLiteral_2877/*"Battle/UniqueCamera/"*/,
                                                       v101,
                                                       0LL);
    _8__2 = v8->fields.__8__2;
    if ( !_8__2 )
      goto LABEL_105;
    _8__2->fields.uniqueCameraData = 0LL;
    v109 = (System_String_o *)this;
    sub_B77560((BattleServantConfConponent_o *)&_8__2->fields, 0LL, v102, v103, v104, v105, v106, v107);
    if ( !_4__this )
      goto LABEL_105;
    v110 = _4__this;
    v111 = _4__this->fields.assetStorageLoadWrapper;
    klass = (Il2CppObject *)p__8__2->klass;
    v113 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v113,
      klass,
      Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__3__,
      0LL);
    if ( !v111 )
      goto LABEL_105;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(v111, v109, v113, 1, 0LL);
    v8->fields._loadSucceeded_5__4 = (unsigned __int8)this & 1;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      _4__this = v110;
    }
    else
    {
      if ( !*p__8__1 )
        goto LABEL_105;
      this = (BattleRootComponent__LoadAsset_d__13_o *)v110->fields.perf;
      _4__this = v110;
      if ( !this )
        goto LABEL_105;
      BattlePerformance__loadStorageObjectCameraCommon(
        (BattlePerformance_o *)this,
        (AssetData_o *)(*p__8__1)->fields.__2__current,
        0LL);
    }
LABEL_43:
    if ( !p__8__2->klass )
      goto LABEL_105;
    method = (const MethodInfo *)p__8__2->klass->_1.name;
    if ( !method )
    {
      v8->fields.__2__current = 0LL;
      v82 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B77560(v82, 0LL, v2, v3, v4, v5, v6, v7);
      v89 = 4;
      goto LABEL_98;
    }
    if ( v8->fields._loadSucceeded_5__4 )
    {
      if ( !_4__this )
        goto LABEL_105;
      this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_105;
      BattlePerformance__loadStorageObjectCamera(
        (BattlePerformance_o *)this,
        (AssetData_o *)method,
        (System_String_o *)StringLiteral_15188/*"UniqueCameraPrefab"*/,
        0LL);
      p__8__2->klass = 0LL;
      sub_B77560(p__8__2, 0LL, v75, v76, v77, v78, v79, v80);
    }
    else
    {
      p__8__2->klass = 0LL;
      sub_B77560(p__8__2, 0LL, v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_105;
    }
  }
  else
  {
    if ( !_4__this )
      goto LABEL_105;
    if ( !*p__8__1 )
      goto LABEL_105;
    this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
    if ( !this )
      goto LABEL_105;
    BattlePerformance__loadStorageObjectCameraCommon(
      (BattlePerformance_o *)this,
      (AssetData_o *)(*p__8__1)->fields.__2__current,
      0LL);
  }
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  v92 = &v8->fields.__8__1;
  v114 = v8->fields.__8__1;
  if ( !v114 )
    goto LABEL_105;
  if ( !this )
    goto LABEL_105;
  BattlePerformance__loadStorageObjectCommonMotion((BattlePerformance_o *)this, v114->fields.commonData, 0LL);
  if ( !*v92 )
    goto LABEL_105;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_105;
  BattlePerformance__SetEffectControlObjectFromCommonAsset((BattlePerformance_o *)this, (*v92)->fields.commonData, 0LL);
  if ( !*v92 )
    goto LABEL_105;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_105;
  BattlePerformance__loadFieldMotion(
    (BattlePerformance_o *)this,
    (*v92)->fields.commonData,
    (*v92)->fields.motionDataList,
    0LL);
  perf = _4__this->fields.perf;
  if ( !perf )
    goto LABEL_105;
  this = (BattleRootComponent__LoadAsset_d__13_o *)perf->fields._fmManager_k__BackingField;
  if ( !this )
    goto LABEL_105;
  FieldMotionManager__SetBaseFieldMotionIds((FieldMotionManager_o *)this, v8->fields._baseMotionIds_5__3, 0LL);
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_105;
  BattlePerformance__Initialize((BattlePerformance_o *)this, 0LL);
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.data;
  if ( !this )
    goto LABEL_105;
  BattleData__loadFsmGameObject((BattleData_o *)this, 0LL);
  v116 = _4__this->fields.perf;
  if ( !v116 )
    goto LABEL_105;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v116->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_105;
  AssumedBattleAssetLoadManager__Release_object_(
    (AssumedBattleAssetLoadManager_o *)this,
    (const MethodInfo_1C60268 *)Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
  v117 = _4__this->fields.perf;
  if ( !v117 )
    goto LABEL_105;
  AssumedBattleAssetLoadManager_k__BackingField = v117->fields._AssumedBattleAssetLoadManager_k__BackingField;
  this = (BattleRootComponent__LoadAsset_d__13_o *)AssumedBattleAssetSearcherBeforeBattle__Create(0LL);
  if ( !AssumedBattleAssetLoadManager_k__BackingField )
    goto LABEL_105;
  AssumedBattleAssetLoadManager__Preload(
    AssumedBattleAssetLoadManager_k__BackingField,
    (AssumedBattleAssetSearcherBase_o *)this,
    0LL);
LABEL_90:
  if ( !*v92 )
    goto LABEL_105;
  if ( (*v92)->fields.isAssetsLoading )
  {
    v8->fields.__2__current = 0LL;
    v82 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
    sub_B77560(v82, 0LL, v2, v3, v4, v5, v6, v7);
    v89 = 5;
    goto LABEL_98;
  }
LABEL_93:
  if ( !_4__this )
    goto LABEL_105;
  v119 = _4__this->fields.perf;
  if ( !v119 )
    goto LABEL_105;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v119->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_105;
  if ( AssumedBattleAssetLoadManager__IsPreloading((AssumedBattleAssetLoadManager_o *)this, 0LL) )
  {
    v8->fields.__2__current = 0LL;
    v82 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
    sub_B77560(v82, 0LL, v120, v121, v122, v123, v124, v125);
    v89 = 6;
    goto LABEL_98;
  }
  BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(_4__this, 0LL);
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_105:
    sub_B7769C(this, method);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)this, (SceneRootComponent_o *)_4__this, 0LL);
  return 0;
}


Il2CppObject *__fastcall BattleRootComponent__LoadAsset_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleRootComponent__LoadAsset_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleRootComponent__LoadAsset_d__13__System_Collections_IEnumerator_Reset(
        BattleRootComponent__LoadAsset_d__13_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattleRootComponent__LoadAsset_d__13_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BattleRootComponent__LoadAsset_d__13__System_Collections_IEnumerator_get_Current(
        BattleRootComponent__LoadAsset_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleRootComponent__LoadAsset_d__13__System_IDisposable_Dispose(
        BattleRootComponent__LoadAsset_d__13_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleRootComponent__LoadAssetsIndependentToMainOne_d__14___ctor(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleRootComponent__LoadAssetsIndependentToMainOne_d__14__MoveNext(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v8; // x19
  int32_t _1__state; // w8
  BattleRootComponent_o *_4__this; // x26
  bool result; // w0
  Il2CppObject *v12; // x22
  Il2CppObject **v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct BattleRootComponent___c__DisplayClass14_0_o *v20; // x8
  int32_t BattleEffectId; // w22
  System_String_o *v22; // x0
  AssetStorageLoadWrapper_o *v23; // x23
  Il2CppObject *v24; // x25
  System_String_o *v25; // x22
  AssetLoader_LoadEndDataHandler_o *v26; // x24
  ConstantMaster_o *Master_WarQuestSelectionMaster; // x22
  System_Collections_Generic_IEnumerable_T__o *v28; // x23
  System_Collections_Generic_List_int__o *v29; // x21
  int32_t Value; // w0
  System_Collections_Generic_IEnumerable_T__o *ClassBoardCommandSpellEffectId; // x0
  System_Int32_array *v32; // x21
  AssetManager_o *v33; // x20
  BattleServantConfConponent_o *v34; // x19
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  Il2CppObject *SingleEntity; // x21
  System_Collections_Generic_HashSet_int__o *v42; // x23
  int32_t v43; // w22
  Il2CppObject **p__8__1; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v45; // x22
  _BOOL8 v46; // x0
  __int64 v47; // x1
  _BOOL8 v48; // x0
  __int64 v49; // x1
  Il2CppObject *v50; // x26
  System_String_o *age; // x23
  System_Action_o *monitor; // x24
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  Il2CppObject *v60; // x24
  System_Action_o *v61; // x23
  Il2CppObject *v62; // x1
  System_String_o *v63; // x0
  __int64 v64; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *_8__1; // x25
  AssetStorageLoadWrapper_o *v66; // x22
  AssetLoader_LoadEndDataHandler_o *_9__8; // x23
  System_String_o *v68; // x21
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  int v78; // w20
  __int64 v79; // x21
  __int64 v80; // x21
  Il2CppObject *v81; // x23
  AtlasManager_o *v82; // x21
  System_Action_o *v83; // x22
  Il2CppObject *v84; // x22
  System_Action_o *v85; // x21
  Il2CppObject *v86; // x22
  BattlePerformance_o *perf; // x20
  System_Action_o *v88; // x21
  Il2CppObject *v89; // x20
  System_Action_o *v90; // x21
  __int64 v91; // x20
  __int64 v92; // x20
  __int64 v93; // x20
  __int64 v94; // x20
  Il2CppObject *v95; // x22
  AtlasManager_o *v96; // x20
  System_Action_o *v97; // x21
  AssetManager_o *v98; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  BattleRootComponent_o *v100; // [xsp+8h] [xbp-C8h]
  struct BattleRootComponent___c__DisplayClass14_0_o **v101; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_HashSet_Enumerator_T__o v102; // [xsp+18h] [xbp-B8h] BYREF
  int v103[2]; // [xsp+30h] [xbp-A0h]
  int v104; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_HashSet_Enumerator_T__o v105; // [xsp+40h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-78h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v107; // [xsp+60h] [xbp-70h] BYREF
  int32_t v108; // [xsp+7Ch] [xbp-54h] BYREF

  v8 = this;
  if ( (byte_4388E1E & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&BattleDataDefine_TypeInfo);
    sub_B775C4(&BattleEffectUtility_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_BattleMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_BgmMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_BuffMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_B775C4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int___ctor___69373296);
    sub_B775C4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&OptionManager_TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__);
    sub_B775C4(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__);
    sub_B775C4(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__);
    sub_B775C4(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__);
    sub_B775C4(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__);
    sub_B775C4(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__);
    sub_B775C4(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__);
    sub_B775C4(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__);
    sub_B775C4(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__);
    sub_B775C4(&BattleRootComponent___c__DisplayClass14_0_TypeInfo);
    sub_B775C4(&StringLiteral_2534/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/);
    sub_B775C4(&StringLiteral_2529/*"BATTLE_EFFECT_ID_3003001"*/);
    sub_B775C4(&StringLiteral_2866/*"Battle/DropEffect/{0}"*/);
    sub_B775C4(&StringLiteral_2867/*"Battle/Effect/"*/);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)sub_B775C4(&StringLiteral_2860/*"Battle"*/);
    byte_4388E1E = 1;
  }
  v108 = 0;
  memset(&v107, 0, sizeof(v107));
  entity = 0LL;
  memset(&v105, 0, sizeof(v105));
  v104 = 0;
  _1__state = v8->fields.__1__state;
  if ( _1__state == 2 )
  {
    p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
    v8->fields.__1__state = -1;
LABEL_120:
    if ( !*p__8__1 )
      goto LABEL_48;
    if ( SLODWORD((*p__8__1)[1].klass) >= v8->fields._loadCntMax_5__2 )
    {
      ActionExtensions__Call(v8->fields.finishCallback, 0LL);
      return 0;
    }
    else
    {
      v8->fields.__2__current = 0LL;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B77560(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 2;
      return 1;
    }
  }
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !this )
      goto LABEL_48;
    SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     (const MethodInfo_21FBB80 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    v42 = (System_Collections_Generic_HashSet_int__o *)sub_B77694(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v42,
      (const MethodInfo_2EDBA84 *)Method_System_Collections_Generic_HashSet_int___ctor___69373296);
    if ( !SingleEntity )
      goto LABEL_48;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
    if ( !this )
      goto LABEL_48;
    v43 = 0;
    while ( v43 < BattleInfoData__getLastWave((BattleInfoData_o *)this, 0LL) + 1 )
    {
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v43,
                                                                              0LL);
      if ( this )
      {
        if ( !v42 )
          goto LABEL_48;
        System_Collections_Generic_HashSet_int___Add(
          v42,
          (int32_t)this->fields.__8__1,
          (const MethodInfo_2EDCC60 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v43,
                                                                              0LL);
      if ( this )
      {
        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)StageEntity__GetBossIdAndChangeBgmId(
                                                                                (StageEntity_o *)this,
                                                                                0LL);
        if ( this )
        {
          if ( SLODWORD(this->fields.__2__current) >= 2 )
          {
            if ( !v42 )
              goto LABEL_48;
            System_Collections_Generic_HashSet_int___Add(
              v42,
              HIDWORD(this->fields.ent),
              (const MethodInfo_2EDCC60 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
          ++v43;
          if ( this )
            continue;
        }
      }
      goto LABEL_48;
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v100 = _4__this;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !v42 )
      goto LABEL_48;
    v45 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v102,
      v42,
      (const MethodInfo_2EDC58C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
    v107 = v102;
    while ( 1 )
    {
      v46 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &v107,
              (const MethodInfo_2259EF8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v46 )
        break;
      if ( !v45 )
        sub_B7769C(v46, v47);
      v48 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v45,
              &entity,
              (int32_t)v107.fields._current,
              (const MethodInfo_21FB8F0 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( v48 )
      {
        ++v8->fields._loadCntMax_5__2;
        if ( !entity )
          sub_B7769C(v48, v49);
        v50 = *p__8__1;
        if ( !*p__8__1 )
          sub_B7769C(v48, v49);
        age = entity->fields.age;
        monitor = (System_Action_o *)v50[1].monitor;
        if ( !monitor )
        {
          monitor = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
          System_Action___ctor(
            monitor,
            v50,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__,
            0LL);
          v50[1].monitor = monitor;
          sub_B77560(
            (BattleServantConfConponent_o *)&v50[1].monitor,
            (System_Int32_array **)monitor,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58);
        }
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__downloadAudioAssetStorage(age, monitor, 1, 0LL);
      }
    }
    v103[0] = 575;
    v104 = 1;
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v107,
      (const MethodInfo_2259EF4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    v104 = 0;
    ++v8->fields._loadCntMax_5__2;
    if ( !v100 )
      goto LABEL_48;
    assetStorageLoadWrapper = v100->fields.assetStorageLoadWrapper;
    v60 = *p__8__1;
    v61 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v61,
      v60,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__,
      0LL);
    if ( !assetStorageLoadWrapper )
      goto LABEL_48;
    AssetStorageLoadWrapper__LoadAudioAssetStorage(
      assetStorageLoadWrapper,
      (System_String_o *)StringLiteral_2860/*"Battle"*/,
      v61,
      1,
      0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleRootComponent__GetLoadDropEffectType(
                                                                            v100,
                                                                            (BattleEntity_o *)SingleEntity,
                                                                            0LL);
    if ( !this )
      goto LABEL_48;
    if ( SLODWORD(this->fields.__2__current) >= 1 )
    {
      v101 = &v8->fields.__8__1;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v102,
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_30E6C2C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v105 = v102;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                (System_Collections_Generic_List_Enumerator_int__o *)&v105,
                (const MethodInfo_225A1B4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        LODWORD(v102.fields._set) = v105.fields._current;
        v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102, v77);
        v63 = System_String__Format((System_String_o *)StringLiteral_2866/*"Battle/DropEffect/{0}"*/, v62, 0LL);
        _8__1 = v8->fields.__8__1;
        ++v8->fields._loadCntMax_5__2;
        if ( !_8__1 )
          sub_B7769C(v63, v64);
        v66 = v100->fields.assetStorageLoadWrapper;
        _9__8 = _8__1->fields.__9__8;
        v68 = v63;
        if ( !_9__8 )
        {
          _9__8 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            _9__8,
            (Il2CppObject *)_8__1,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__,
            0LL);
          _8__1->fields.__9__8 = _9__8;
          sub_B77560(
            (BattleServantConfConponent_o *)&_8__1->fields.__9__8,
            (System_Int32_array **)_9__8,
            v69,
            v70,
            v71,
            v72,
            v73,
            v74);
        }
        if ( !v66 )
          sub_B7769C(v63, v64);
        Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(v66, v68, _9__8, 1, 0LL);
        if ( !Wrapper__LoadAssetStorage )
        {
          if ( !*v101 )
            sub_B7769C(Wrapper__LoadAssetStorage, v76);
          ++(*v101)->fields.loadCnt;
        }
      }
      v103[0] = 830;
      v78 = ++v104;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v105,
        (const MethodInfo_225A1B0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
      if ( v78 && v103[v78 - 1] == 830 )
        v104 = v78 - 1;
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)v100->fields.data;
    if ( !this )
      goto LABEL_48;
    if ( BattleData__IsWarBoard((BattleData_o *)this, 0LL) )
    {
      ++v8->fields._loadCntMax_5__2;
      v79 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v79 + 306) & 1) == 0 )
        sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
      v80 = **(_QWORD **)(v79 + 192);
      if ( (*(_BYTE *)(v80 + 306) & 1) == 0 )
        sub_B0F2C4(v80);
      v81 = *p__8__1;
      v82 = **(AtlasManager_o ***)(v80 + 184);
      v83 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        v83,
        v81,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__,
        0LL);
      if ( !v82 )
        goto LABEL_48;
      AtlasManager__LoadWarBoardAtlas(v82, v83, 0LL);
    }
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( OptionManager__isSavedMemoryMode(0LL) )
    {
      v84 = (Il2CppObject *)v8->fields.__8__1;
      ++v8->fields._loadCntMax_5__2;
      v85 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        v85,
        v84,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadFaceBattleAtlas(v85, 0LL);
    }
    v86 = (Il2CppObject *)v8->fields.__8__1;
    ++v8->fields._loadCntMax_5__2;
    perf = v100->fields.perf;
    v88 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v88,
      v86,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__,
      0LL);
    if ( !perf )
      goto LABEL_48;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattlePerformance__LoadEventInfoPointGauge(
                                                                            perf,
                                                                            v88,
                                                                            v8->fields.eventId,
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
    v89 = (Il2CppObject *)v8->fields.__8__1;
    ++v8->fields._loadCntMax_5__2;
    v90 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v90,
      v89,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__,
      0LL);
    AtlasManager__LoadEventAtlas(v90, 1, 0LL);
    v91 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v91 + 306) & 1) == 0 )
      sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
    v92 = **(_QWORD **)(v91 + 192);
    if ( (*(_BYTE *)(v92 + 306) & 1) == 0 )
      sub_B0F2C4(v92);
    this = **(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o ***)(v92 + 184);
    if ( !this )
      goto LABEL_48;
    AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)this, 0LL);
    ++v8->fields._loadCntMax_5__2;
    v93 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v93 + 306) & 1) == 0 )
      sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
    v94 = **(_QWORD **)(v93 + 192);
    if ( (*(_BYTE *)(v94 + 306) & 1) == 0 )
      sub_B0F2C4(v94);
    v95 = *p__8__1;
    v96 = **(AtlasManager_o ***)(v94 + 184);
    v97 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v97,
      v95,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__,
      0LL);
    if ( !v96 )
      goto LABEL_48;
    AtlasManager__LoadBuffIconAtlas(v96, v97, 0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v98 = (AssetManager_o *)this;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    }
    if ( !v98 )
LABEL_48:
      sub_B7769C(this, method);
    AssetManager__UpdateLoadParallelMax(v98, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
    goto LABEL_120;
  }
  result = 0;
  if ( !_1__state )
  {
    v8->fields.__1__state = -1;
    v12 = (Il2CppObject *)sub_B77694(BattleRootComponent___c__DisplayClass14_0_TypeInfo);
    System_Object___ctor(v12, 0LL);
    v13 = (Il2CppObject **)&v8->fields.__8__1;
    v8->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass14_0_o *)v12;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->fields.__8__1,
      (System_Int32_array **)v12,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v20 = v8->fields.__8__1;
    if ( v20 )
    {
      v20->fields.loadCnt = 0;
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)v8->fields.ent;
      v8->fields._loadCntMax_5__2 = 0;
      if ( this )
      {
        BattleEffectId = QuestPhaseEntity__getBattleEffectId((QuestPhaseEntity_o *)this, 0, 0LL);
        if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        }
        v108 = BattleEffectUtility__setBattleEffectId(BattleEffectId, 0LL);
        v22 = System_Int32__ToString((int32_t)&v108, 0LL);
        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)System_String__Concat_44901936(
                                                                                (System_String_o *)StringLiteral_2867/*"Battle/Effect/"*/,
                                                                                v22,
                                                                                0LL);
        ++v8->fields._loadCntMax_5__2;
        if ( _4__this )
        {
          v23 = _4__this->fields.assetStorageLoadWrapper;
          v24 = *v13;
          v25 = (System_String_o *)this;
          v26 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            v26,
            v24,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__,
            0LL);
          if ( v23 )
          {
            this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                                                    v23,
                                                                                    v25,
                                                                                    v26,
                                                                                    1,
                                                                                    0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !*v13 )
                goto LABEL_48;
              ++LODWORD((*v13)[1].klass);
            }
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (ConstantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ConstantMaster___);
            this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_BuffMaster___);
            if ( this )
            {
              v28 = *(System_Collections_Generic_IEnumerable_T__o **)&this->fields._loadCntMax_5__2;
              v29 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_51270276(
                v29,
                v28,
                (const MethodInfo_30E5284 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( Master_WarQuestSelectionMaster )
              {
                this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                        Master_WarQuestSelectionMaster,
                                                                                        (System_String_o *)StringLiteral_2534/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/,
                                                                                        0LL);
                if ( v29 )
                {
                  System_Collections_Generic_List_int___Add(
                    v29,
                    (int32_t)this,
                    (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
                  Value = ConstantMaster__GetValue(
                            Master_WarQuestSelectionMaster,
                            (System_String_o *)StringLiteral_2529/*"BATTLE_EFFECT_ID_3003001"*/,
                            0LL);
                  System_Collections_Generic_List_int___Add(
                    v29,
                    Value,
                    (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
                  ClassBoardCommandSpellEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleRootComponent__GetClassBoardCommandSpellEffectId(
                                                                                                    _4__this,
                                                                                                    0LL);
                  System_Collections_Generic_List_int___AddRange(
                    v29,
                    ClassBoardCommandSpellEffectId,
                    (const MethodInfo_30E603C *)Method_System_Collections_Generic_List_int__AddRange__);
                  v32 = System_Collections_Generic_List_int___ToArray(
                          v29,
                          (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
                  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                  }
                  this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ServantAssetLoadManager__preloadBattleCommonEffect(
                                                                                          v32,
                                                                                          0LL);
                  if ( _4__this->fields.data )
                  {
                    BattleData__addLoadedCommonEffectPath(_4__this->fields.data, (System_String_array *)this, 0LL);
                    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
                    v33 = (AssetManager_o *)this;
                    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                    }
                    if ( v33 )
                    {
                      AssetManager__UpdateLoadParallelMax(
                        v33,
                        BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                        0LL);
                      v8->fields.__2__current = 0LL;
                      v34 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
                      sub_B77560(v34, 0LL, v35, v36, v37, v38, v39, v40);
                      result = 1;
                      *(_DWORD *)&v34[-1].fields.isOpenAfter = 1;
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


Il2CppObject *__fastcall BattleRootComponent__LoadAssetsIndependentToMainOne_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleRootComponent__LoadAssetsIndependentToMainOne_d__14__System_Collections_IEnumerator_Reset(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BattleRootComponent__LoadAssetsIndependentToMainOne_d__14__System_Collections_IEnumerator_get_Current(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleRootComponent__LoadAssetsIndependentToMainOne_d__14__System_IDisposable_Dispose(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___ctor(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___LoadAsset_b__0(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  this->fields.isAssetsLoading = 0;
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___LoadAsset_b__1(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        AssetData_o *common,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.commonData = common;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.commonData,
    (System_Int32_array **)common,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___LoadAsset_b__2(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        AssetData_o *motionData,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_AssetData__o *motionDataList; // x0

  if ( (byte_4388E18 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_AssetData__Add__);
    byte_4388E18 = 1;
  }
  motionDataList = this->fields.motionDataList;
  if ( !motionDataList )
    sub_B7769C(0LL, motionData);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)motionDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)motionData,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_AssetData__Add__);
  ++this->fields.loadCompCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass13_1___ctor(
        BattleRootComponent___c__DisplayClass13_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass13_1___LoadAsset_b__3(
        BattleRootComponent___c__DisplayClass13_1_o *this,
        AssetData_o *cameraData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.uniqueCameraData = cameraData;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)cameraData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___ctor(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__0(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        AssetData_o *effectData,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__1(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__2(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__3(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__4(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__5(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__6(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__7(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__8(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass17_0___ctor(
        BattleRootComponent___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass17_0___LoadBatteBgm_b__0(
        BattleRootComponent___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_XWeaponTrail_Element__o *bgmList; // x0

  if ( (byte_4388E19 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4388E19 = 1;
  }
  bgmList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.bgmList;
  if ( !bgmList
    || (System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          bgmList,
          bgmList->fields._size - 1,
          (const MethodInfo_3054F88 *)Method_System_Collections_Generic_List_string__RemoveAt__),
        (bgmList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.__4__this) == 0LL) )
  {
    sub_B7769C(bgmList, method);
  }
  BattleRootComponent__LoadBatteBgm((BattleRootComponent_o *)bgmList, this->fields.bgmList, this->fields.callback, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass20_0___ctor(
        BattleRootComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass20_0___loadOutGameAsset_b__0(
        BattleRootComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  this->fields.isCharaGraphOptionAtlasLoaded = 1;
}


void __fastcall BattleRootComponent___c__DisplayClass20_0___loadOutGameAsset_b__1(
        BattleRootComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  this->fields.isBannerAtlasLoaded = 1;
}


void __fastcall BattleRootComponent___c__DisplayClass20_0___loadOutGameAsset_b__2(
        BattleRootComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  this->fields.isEventUIAtlasLoaded = 1;
}


void __fastcall BattleRootComponent___c__DisplayClass20_1___ctor(
        BattleRootComponent___c__DisplayClass20_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass20_1___loadOutGameAsset_b__3(
        BattleRootComponent___c__DisplayClass20_1_o *this,
        const MethodInfo *method)
{
  this->fields.isEventAtlasLoaded = 1;
}


void __fastcall BattleRootComponent___c__DisplayClass20_2___ctor(
        BattleRootComponent___c__DisplayClass20_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass20_2___loadOutGameAsset_b__4(
        BattleRootComponent___c__DisplayClass20_2_o *this,
        const MethodInfo *method)
{
  this->fields.isFaceAtlasLoaded = 1;
}


void __fastcall BattleRootComponent___c__DisplayClass23_0___ctor(
        BattleRootComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass23_0___TransitionTerminalOrBattleScript_b__0(
        BattleRootComponent___c__DisplayClass23_0_o *this,
        System_String_o *demo1,
        const MethodInfo *method)
{
  struct System_Action_string__o *_9__2; // x22
  int32_t questId; // w20
  int32_t questPhase; // w21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  AvalonSceneManager_o *Instance; // x0
  __int64 v15; // x1
  struct BattleRootComponent_o *_4__this; // x8

  if ( (byte_4388E1B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_string___ctor__);
    sub_B775C4(&System_Action_string__TypeInfo);
    sub_B775C4(&ScriptManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B775C4(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__);
    byte_4388E1B = 1;
  }
  if ( System_String__IsNullOrEmpty(demo1, 0LL) )
  {
    _9__2 = this->fields.__9__2;
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    if ( !_9__2 )
    {
      _9__2 = (struct System_Action_string__o *)sub_B77694(System_Action_string__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__2,
        (Il2CppObject *)this,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__,
        (const MethodInfo_26A0868 *)Method_System_Action_string___ctor__);
      this->fields.__9__2 = _9__2;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.__9__2,
        (System_Int32_array **)_9__2,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
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
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    _4__this = this->fields.__4__this;
    if ( !_4__this || !Instance )
      sub_B7769C(Instance, v15);
    AvalonSceneManager__transitionSceneRefresh(
      Instance,
      _4__this->fields.nextscenetype,
      1,
      (Il2CppObject *)this->fields.info,
      0,
      0LL);
  }
}


void __fastcall BattleRootComponent___c__DisplayClass23_0___TransitionTerminalOrBattleScript_b__1(
        BattleRootComponent___c__DisplayClass23_0_o *this,
        bool isDeside,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4388E1A & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4388E1A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B7769C(Instance, v5);
  }
  BattleRootComponent__TerminalTransition((BattleRootComponent_o *)Instance, this->fields.info, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass23_0___TransitionTerminalOrBattleScript_b__2(
        BattleRootComponent___c__DisplayClass23_0_o *this,
        System_String_o *demo2,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleRootComponent_o *_4__this; // x0
  struct BattleRootComponent_o *v7; // x8

  if ( (byte_4388E1C & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4388E1C = 1;
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
    sub_B7769C(_4__this, v5);
  }
  _4__this = (BattleRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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


void __fastcall BattleRootComponent__loadOutGameAsset_d__20___ctor(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleRootComponent__loadOutGameAsset_d__20__MoveNext(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleRootComponent__loadOutGameAsset_d__20_o *v8; // x19
  struct BattleRootComponent_o *_4__this; // x21
  Il2CppObject *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_WaitForEndOfFrame_o *v17; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  bool result; // w0
  Il2CppObject **p__8__2; // x20
  System_Int32_array **v27; // x0
  BattleServantConfConponent_o *v28; // x19
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int v35; // w8
  Il2CppObject *v36; // x21
  BattleServantConfConponent_o *p__8__1; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  Il2CppObject *klass; // x22
  System_Action_o *v45; // x21
  Il2CppObject *v46; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  Il2CppObject *v53; // x22
  System_Action_o *v54; // x21
  UnityEngine_WaitForEndOfFrame_o *v55; // x20
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  Il2CppObject **p__8__3; // x22
  struct BattleRootComponent___c__DisplayClass20_0_o *_8__3; // x8
  Il2CppObject *v64; // x21
  System_Action_o *v65; // x20
  UnityEngine_WaitForEndOfFrame_o *v66; // x20
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  Il2CppObject *v73; // x21
  System_Action_o *v74; // x20
  System_Int32_array **v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  UnityEngine_WaitForEndOfFrame_o *v82; // x20
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  Il2CppObject *v89; // x21
  System_Action_o *v90; // x20
  System_Int32_array **v91; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  UnityEngine_WaitForEndOfFrame_o *v98; // x20
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x0
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Int32_array **v112; // x0
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Int32_array **v119; // x0
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  int v126; // [xsp+Ch] [xbp-24h] BYREF

  v8 = this;
  if ( (byte_4388E1F & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&System_GC_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&OptionManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_B775C4(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__);
    sub_B775C4(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__);
    sub_B775C4(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__);
    sub_B775C4(&BattleRootComponent___c__DisplayClass20_0_TypeInfo);
    sub_B775C4(&Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__);
    sub_B775C4(&BattleRootComponent___c__DisplayClass20_1_TypeInfo);
    sub_B775C4(&Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__);
    sub_B775C4(&BattleRootComponent___c__DisplayClass20_2_TypeInfo);
    this = (BattleRootComponent__loadOutGameAsset_d__20_o *)sub_B775C4(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4388E1F = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (Il2CppObject *)sub_B77694(BattleRootComponent___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor(v10, 0LL);
      v8->fields.__8__3 = (struct BattleRootComponent___c__DisplayClass20_0_o *)v10;
      sub_B77560(
        (BattleServantConfConponent_o *)&v8->fields.__8__3,
        (System_Int32_array **)v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_18;
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_44383624(0LL);
      v17 = (UnityEngine_WaitForEndOfFrame_o *)sub_B77694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v17, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v17;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B77560(p__2__current, (System_Int32_array **)v17, v19, v20, v21, v22, v23, v24);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    case 1:
      v8->fields.__1__state = -1;
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_106;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_106;
      v27 = (System_Int32_array **)AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v27;
      v28 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B77560(v28, v27, v29, v30, v31, v32, v33, v34);
      v35 = 2;
      goto LABEL_104;
    case 2:
      v8->fields.__1__state = -1;
LABEL_18:
      if ( !_4__this )
        goto LABEL_106;
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_106;
      if ( BattlePerformance__isActiveEventInfoGauge((BattlePerformance_o *)this, 0LL) )
        goto LABEL_30;
      v36 = (Il2CppObject *)sub_B77694(BattleRootComponent___c__DisplayClass20_1_TypeInfo);
      System_Object___ctor(v36, 0LL);
      v8->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass20_1_o *)v36;
      p__8__1 = (BattleServantConfConponent_o *)&v8->fields.__8__1;
      sub_B77560(
        (BattleServantConfConponent_o *)&v8->fields.__8__1,
        (System_Int32_array **)v36,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      if ( !v8->fields.__8__1 )
        goto LABEL_106;
      v8->fields.__8__1->fields.isEventAtlasLoaded = 0;
      klass = (Il2CppObject *)p__8__1->klass;
      v45 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v45, klass, Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadEventAtlas(v45, 1, 0LL);
LABEL_27:
      if ( !p__8__1->klass )
        goto LABEL_106;
      if ( !LOBYTE(p__8__1->klass->_1.name) )
      {
        v126 = 0;
        v119 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v126, v2);
        v8->fields.__2__current = (Il2CppObject *)v119;
        v28 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B77560(v28, v119, v120, v121, v122, v123, v124, v125);
        v35 = 3;
        goto LABEL_104;
      }
      p__8__1->klass = 0LL;
      sub_B77560(p__8__1, 0LL, v2, v3, v4, v5, v6, v7);
LABEL_30:
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v46 = (Il2CppObject *)sub_B77694(BattleRootComponent___c__DisplayClass20_2_TypeInfo);
        System_Object___ctor(v46, 0LL);
        v8->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass20_2_o *)v46;
        p__8__2 = (Il2CppObject **)&v8->fields.__8__2;
        sub_B77560(
          (BattleServantConfConponent_o *)&v8->fields.__8__2,
          (System_Int32_array **)v46,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
        if ( v8->fields.__8__2 )
        {
          v8->fields.__8__2->fields.isFaceAtlasLoaded = 0;
          v53 = *p__8__2;
          v54 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
          System_Action___ctor(v54, v53, Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__LoadFaceAtlas(v54, 1, 0LL);
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
              System_GC__Collect_44383624(0LL);
              v55 = (UnityEngine_WaitForEndOfFrame_o *)sub_B77694(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v55, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v55;
              v28 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
              sub_B77560(v28, (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
              v35 = 5;
            }
            else
            {
              v126 = 0;
              v112 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v126, v2);
              v8->fields.__2__current = (Il2CppObject *)v112;
              v28 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
              sub_B77560(v28, v112, v113, v114, v115, v116, v117, v118);
              v35 = 4;
            }
            goto LABEL_104;
          }
        }
LABEL_106:
        sub_B7769C(this, method);
      }
LABEL_48:
      p__8__3 = (Il2CppObject **)&v8->fields.__8__3;
      _8__3 = v8->fields.__8__3;
      if ( !_8__3 )
        goto LABEL_106;
      _8__3->fields.isCharaGraphOptionAtlasLoaded = 0;
      v64 = *p__8__3;
      v65 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v65, v64, Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadCharaGraphOptionAtlas(v65, 1, 0LL);
LABEL_54:
      if ( !*p__8__3 )
        goto LABEL_106;
      if ( !LOBYTE((*p__8__3)[1].klass) )
      {
        v126 = 0;
        v75 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v126, v2);
        v8->fields.__2__current = (Il2CppObject *)v75;
        v28 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B77560(v28, v75, v76, v77, v78, v79, v80, v81);
        v35 = 6;
LABEL_104:
        *(_DWORD *)&v28[-1].fields.isOpenAfter = v35;
        return 1;
      }
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_44383624(0LL);
        v66 = (UnityEngine_WaitForEndOfFrame_o *)sub_B77694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v66, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v66;
        v28 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B77560(v28, (System_Int32_array **)v66, v67, v68, v69, v70, v71, v72);
        v35 = 7;
        goto LABEL_104;
      }
LABEL_64:
      if ( !*p__8__3 )
        goto LABEL_106;
      BYTE1((*p__8__3)[1].klass) = 0;
      v73 = *p__8__3;
      v74 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v74, v73, Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadBanner(v74, 1, 0LL);
LABEL_71:
      if ( !*p__8__3 )
        goto LABEL_106;
      if ( !BYTE1((*p__8__3)[1].klass) )
      {
        v126 = 0;
        v91 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v126, v2);
        v8->fields.__2__current = (Il2CppObject *)v91;
        v28 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B77560(v28, v91, v92, v93, v94, v95, v96, v97);
        v35 = 8;
        goto LABEL_104;
      }
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_44383624(0LL);
        v82 = (UnityEngine_WaitForEndOfFrame_o *)sub_B77694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v82, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v82;
        v28 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B77560(v28, (System_Int32_array **)v82, v83, v84, v85, v86, v87, v88);
        v35 = 9;
        goto LABEL_104;
      }
LABEL_81:
      if ( !*p__8__3 )
        goto LABEL_106;
      BYTE2((*p__8__3)[1].klass) = 0;
      v89 = *p__8__3;
      v90 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v90, v89, Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadEventUI(v90, 1, 0LL);
LABEL_88:
      if ( !*p__8__3 )
        goto LABEL_106;
      if ( !BYTE2((*p__8__3)[1].klass) )
      {
        v126 = 0;
        v105 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v126, v2);
        v8->fields.__2__current = (Il2CppObject *)v105;
        v28 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B77560(v28, v105, v106, v107, v108, v109, v110, v111);
        v35 = 10;
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
        System_GC__Collect_44383624(0LL);
        v98 = (UnityEngine_WaitForEndOfFrame_o *)sub_B77694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v98, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v98;
        v28 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B77560(v28, (System_Int32_array **)v98, v99, v100, v101, v102, v103, v104);
        v35 = 11;
        goto LABEL_104;
      }
LABEL_98:
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)v8->fields.callback;
      if ( !this )
        goto LABEL_106;
      System_Action__Invoke((System_Action_o *)this, 0LL);
      return 0;
    case 3:
      p__8__1 = (BattleServantConfConponent_o *)&v8->fields.__8__1;
      v8->fields.__1__state = -1;
      goto LABEL_27;
    case 4:
      p__8__2 = (Il2CppObject **)&v8->fields.__8__2;
      v8->fields.__1__state = -1;
      goto LABEL_39;
    case 5:
      v8->fields.__8__2 = 0LL;
      v8->fields.__1__state = -1;
      sub_B77560((BattleServantConfConponent_o *)&v8->fields.__8__2, 0LL, v2, v3, v4, v5, v6, v7);
      goto LABEL_48;
    case 6:
      p__8__3 = (Il2CppObject **)&v8->fields.__8__3;
      v8->fields.__1__state = -1;
      goto LABEL_54;
    case 7:
      p__8__3 = (Il2CppObject **)&v8->fields.__8__3;
      v8->fields.__1__state = -1;
      goto LABEL_64;
    case 8:
      p__8__3 = (Il2CppObject **)&v8->fields.__8__3;
      v8->fields.__1__state = -1;
      goto LABEL_71;
    case 9:
      p__8__3 = (Il2CppObject **)&v8->fields.__8__3;
      v8->fields.__1__state = -1;
      goto LABEL_81;
    case 0xA:
      p__8__3 = (Il2CppObject **)&v8->fields.__8__3;
      v8->fields.__1__state = -1;
      goto LABEL_88;
    case 0xB:
      v8->fields.__1__state = -1;
      goto LABEL_98;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleRootComponent__loadOutGameAsset_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleRootComponent__loadOutGameAsset_d__20__System_Collections_IEnumerator_Reset(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattleRootComponent__loadOutGameAsset_d__20_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BattleRootComponent__loadOutGameAsset_d__20__System_Collections_IEnumerator_get_Current(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleRootComponent__loadOutGameAsset_d__20__System_IDisposable_Dispose(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall BattleRootComponent_callBackBeginResume__BeginInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B77568(this, &v5, callback, object);
}


void __fastcall BattleRootComponent_callBackBeginResume__EndInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


void __fastcall BattleRootComponent_callBackBeginResume__Invoke(
        BattleRootComponent_callBackBeginResume_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x8
  __int64 v4; // x23
  BattleRootComponent_callBackBeginResume_o **v5; // x24
  __int64 v6; // x25
  unsigned int v7; // w22
  __int64 class_0; // x0
  __int64 v9; // x8
  unsigned __int64 v10; // x10
  _DWORD *v11; // x11
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  void (__fastcall **v15)(__int64 *, _QWORD); // x0
  BattleRootComponent_callBackBeginResume_o *v16; // x8
  __int64 *v17; // x20
  __int64 v18; // x21
  void (__fastcall *v19)(__int64); // x22
  char v20; // w22
  char v21; // w0
  __int64 v22; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  unsigned __int64 v25; // x10
  _DWORD *v26; // x11
  BattleRootComponent_callBackBeginResume_o *v27; // [xsp+8h] [xbp-38h] BYREF

  v27 = this;
  v2 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v2 )
  {
    v5 = &v27;
    v4 = 1LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(v2 + 24);
  if ( v4 )
  {
    v5 = (BattleRootComponent_callBackBeginResume_o **)(v2 + 32);
LABEL_5:
    v6 = 0LL;
    while ( 1 )
    {
      v16 = v5[v6];
      v17 = *(__int64 **)&v16->fields.method;
      v18 = *(_QWORD *)&v16->fields.extra_arg;
      v19 = *(void (__fastcall **)(__int64))&v16->fields.method_ptr;
      if ( *(__int16 *)(v18 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v16->fields.extra_arg, method);
      if ( (sub_B775F4(v18) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v18 + 74) )
        goto LABEL_35;
      v19(v18);
LABEL_36:
      if ( ++v6 == v4 )
        return;
    }
    if ( v17 && *(__int16 *)(v18 + 72) != -1 && (*(_BYTE *)(*v17 + 277) & 1) == 0 && this->fields.m_target )
    {
      v20 = sub_B775EC(v18);
      v21 = sub_B779F0(v18);
      if ( (v20 & 1) != 0 )
      {
        if ( (v21 & 1) != 0 )
        {
          v22 = *v17;
          v23 = *(_QWORD *)(v18 + 24);
          v24 = *(unsigned __int16 *)(v18 + 72);
          if ( *(_WORD *)(*v17 + 298) )
          {
            v25 = 0LL;
            v26 = (_DWORD *)(*(_QWORD *)(v22 + 176) + 8LL);
            while ( *((_QWORD *)v26 - 1) != v23 )
            {
              ++v25;
              v26 += 4;
              if ( v25 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_34;
            }
            v14 = v22 + 16LL * (*v26 + (int)v24) + 312;
          }
          else
          {
LABEL_34:
            v14 = sub_B0F4C0(v17, v23, v24);
          }
          v13 = *(_QWORD *)(v14 + 8);
        }
        else
        {
          v13 = *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320);
        }
        v15 = (void (__fastcall **)(__int64 *, _QWORD))sub_B77674(v13, v18);
        (*v15)(v17, v15);
      }
      else
      {
        v7 = *(unsigned __int16 *)(v18 + 72);
        if ( (v21 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v18);
          v9 = *v17;
          if ( *(_WORD *)(*v17 + 298) )
          {
            v10 = 0LL;
            v11 = (_DWORD *)(*(_QWORD *)(v9 + 176) + 8LL);
            while ( *((_QWORD *)v11 - 1) != class_0 )
            {
              ++v10;
              v11 += 4;
              if ( v10 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_11;
            }
            v12 = v9 + 16LL * (int)(*v11 + v7) + 312;
          }
          else
          {
LABEL_11:
            v12 = sub_B0F4C0(v17, class_0, v7);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v12)(v17, *(_QWORD *)(v12 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 312))(
            v17,
            *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v19)(v17, v18);
    goto LABEL_36;
  }
}