void __fastcall BattleEntity___ctor(BattleEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F8D18 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_long___ctor__, method);
    byte_40F8D18 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_266F28C *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall BattleEntity__CreatePrimaryKey(BattleEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


void __fastcall BattleEntity__GetQuestInvolvedEntitys(
        BattleEntity_o *this,
        QuestEntity_o **qEnt,
        QuestPhaseEntity_o **qPhaseEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t SelectableQuestPhase; // w20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40F8D14 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, qEnt);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F8D14 = 1;
  }
  SelectableQuestPhase = BattleEntity__GetSelectableQuestPhase(this, qPhaseEnt, (const MethodInfo *)qPhaseEnt);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    (WarEntity_o **)qEnt,
    SelectableQuestPhase,
    (const MethodInfo_266F3E4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
}


QuestPhaseEntity_o *__fastcall BattleEntity__GetQuestPhaseEntity(BattleEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestPhaseEntity_o *result; // x0
  QuestPhaseEntity_o **p_mQuestPhaseEnt; // x1

  p_mQuestPhaseEnt = &this->fields.mQuestPhaseEnt;
  result = this->fields.mQuestPhaseEnt;
  if ( !result )
  {
    BattleEntity__GetSelectableQuestPhase(this, p_mQuestPhaseEnt, v2);
    return this->fields.mQuestPhaseEnt;
  }
  return result;
}


int32_t __fastcall BattleEntity__GetSelectableQuestPhase(
        BattleEntity_o *this,
        QuestPhaseEntity_o **questPhaseEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  QuestPhaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  QuestPhaseMaster_o *v8; // x21
  int32_t SelectedQuestId; // w22

  if ( (byte_40F8D16 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, questPhaseEnt);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F8D16 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_11;
  v8 = MasterData_WarQuestSelectionMaster;
  if ( !QuestPhaseMaster__TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          questPhaseEnt,
          this->fields.questId,
          this->fields.questPhase,
          0LL) )
    return this->fields.questId;
  if ( !*questPhaseEnt )
LABEL_11:
    sub_B170D4();
  SelectedQuestId = QuestPhaseEntity__GetSelectedQuestId(
                      *questPhaseEnt,
                      this->fields.questId,
                      this->fields.questSelect,
                      0LL);
  if ( this->fields.questId != SelectedQuestId )
    QuestPhaseMaster__TryGetEntity(v8, questPhaseEnt, SelectedQuestId, this->fields.questPhase, 0LL);
  return SelectedQuestId;
}


// local variable allocation has failed, the output may be wrong!
StageEntity_o *__fastcall BattleEntity__GetStageEntityAtWave(
        BattleEntity_o *this,
        int32_t waveCnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  StageEntity_o *result; // x0
  StageEntity_o **p_mStageEnt; // x19
  struct QuestPhaseEntity_o *mQuestPhaseEnt; // x8
  int32_t phase; // w20
  int32_t questId; // w22
  int32_t mCachedStageWave; // w23
  WebViewManager_o *Instance; // x0
  StageMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t v15; // w23
  StageEntity_o **v16; // x1
  StageMaster_o *v17; // x21
  WebViewManager_o *v18; // x0
  ReprintStageMaster_o *v19; // x0
  ReprintStageMaster_o *v20; // x24
  int32_t remapQuestId; // w2
  int32_t remapPhase; // w3
  int32_t remapWave; // w4
  StageMaster_o *v24; // x0
  StageEntity_o **v25; // x1
  ReprintStageEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F8D15 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ReprintStageMaster___, *(_QWORD *)&waveCnt);
    sub_B16FFC(&Method_DataManager_GetMasterData_StageMaster___, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F8D15 = 1;
  }
  entity = 0LL;
  p_mStageEnt = &this->fields.mStageEnt;
  result = this->fields.mStageEnt;
  if ( !result || this->fields.mCachedStageWave != waveCnt )
  {
    mQuestPhaseEnt = this->fields.mQuestPhaseEnt;
    this->fields.mCachedStageWave = waveCnt;
    if ( !mQuestPhaseEnt )
    {
      BattleEntity__GetSelectableQuestPhase(this, &this->fields.mQuestPhaseEnt, method);
      mQuestPhaseEnt = this->fields.mQuestPhaseEnt;
      if ( !mQuestPhaseEnt )
        goto LABEL_21;
    }
    questId = mQuestPhaseEnt->fields.questId;
    phase = mQuestPhaseEnt->fields.phase;
    mCachedStageWave = this->fields.mCachedStageWave;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    MasterData_WarQuestSelectionMaster = (StageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_StageMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_21;
    v15 = mCachedStageWave + 1;
    v16 = &this->fields.mStageEnt;
    v17 = MasterData_WarQuestSelectionMaster;
    StageMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, v16, questId, phase, v15, 0LL);
    if ( !*p_mStageEnt )
    {
      v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v18 )
        goto LABEL_21;
      v19 = (ReprintStageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v18,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ReprintStageMaster___);
      entity = 0LL;
      if ( !v19 )
        goto LABEL_21;
      v20 = v19;
      if ( ReprintStageMaster__TryGetEntity(v19, &entity, questId, phase, v15, 0LL) )
      {
        if ( entity )
        {
          remapQuestId = entity->fields.remapQuestId;
          remapPhase = entity->fields.remapPhase;
          remapWave = entity->fields.remapWave;
          v24 = v17;
          v25 = p_mStageEnt;
LABEL_18:
          StageMaster__TryGetEntity(v24, v25, remapQuestId, remapPhase, remapWave, 0LL);
          return *p_mStageEnt;
        }
        goto LABEL_21;
      }
      if ( ReprintStageMaster__TryGetEntity(v20, &entity, questId, 0, 0, 0LL) )
      {
        if ( entity )
        {
          remapQuestId = entity->fields.remapQuestId;
          v24 = v17;
          v25 = p_mStageEnt;
          remapPhase = phase;
          remapWave = v15;
          goto LABEL_18;
        }
LABEL_21:
        sub_B170D4();
      }
    }
    return *p_mStageEnt;
  }
  return result;
}


CommandCodeInfo_o *__fastcall BattleEntity__getUserCommandCode(
        BattleEntity_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleEntity___c__DisplayClass31_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct CommandCodeInfo_array *userCommandCode; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_40F8D17 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Find_CommandCodeInfo___, userCommandCodeId);
    sub_B16FFC(&Method_System_Predicate_CommandCodeInfo___ctor__, v7);
    sub_B16FFC(&System_Predicate_CommandCodeInfo__TypeInfo, v8);
    sub_B16FFC(&Method_BattleEntity___c__DisplayClass31_0__getUserCommandCode_b__0__, v9);
    sub_B16FFC(&BattleEntity___c__DisplayClass31_0_TypeInfo, v10);
    byte_40F8D17 = 1;
  }
  v11 = (BattleEntity___c__DisplayClass31_0_o *)sub_B170CC(
                                                  BattleEntity___c__DisplayClass31_0_TypeInfo,
                                                  userCommandCodeId,
                                                  method,
                                                  v3,
                                                  v4);
  BattleEntity___c__DisplayClass31_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.userCommandCodeId = userCommandCodeId;
  userCommandCode = this->fields.userCommandCode;
  if ( !userCommandCode )
    return 0LL;
  v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_CommandCodeInfo__TypeInfo,
                                                                   v12,
                                                                   v13,
                                                                   v14,
                                                                   v15);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_BattleEntity___c__DisplayClass31_0__getUserCommandCode_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_CommandCodeInfo___ctor__);
  return (CommandCodeInfo_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)userCommandCode,
                                (System_Predicate_T__o *)v17,
                                (const MethodInfo_20441E8 *)Method_System_Array_Find_CommandCodeInfo___);
}


bool __fastcall BattleEntity__isDefeatCount(BattleEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  EventDetailEntity_o *Entity; // x0

  if ( (byte_40F8D13 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F8D13 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          MasterData_WarQuestSelectionMaster,
                                          this->fields.eventId,
                                          (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  return EventDetailEntity__isRaidDefeatCount(Entity, 0LL);
}


bool __fastcall BattleEntity__isVerifyActionLog(BattleEntity_o *this, const MethodInfo *method)
{
  return this->fields.verifyMode != 0;
}


void __fastcall BattleEntity___c__DisplayClass31_0___ctor(
        BattleEntity___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleEntity___c__DisplayClass31_0___getUserCommandCode_b__0(
        BattleEntity___c__DisplayClass31_0_o *this,
        CommandCodeInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.id == this->fields.userCommandCodeId;
}