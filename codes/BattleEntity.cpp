void __fastcall BattleEntity___ctor(BattleEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AED2F & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_long___ctor__);
    byte_42AED2F = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23E21DC *)Method_DataEntityBase_long___ctor__);
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
  int32_t SelectableQuestPhase; // w20
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42AED2B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AED2B = 1;
  }
  SelectableQuestPhase = BattleEntity__GetSelectableQuestPhase(this, qPhaseEnt, (const MethodInfo *)qPhaseEnt);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v9);
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    (WarEntity_o **)qEnt,
    SelectableQuestPhase,
    (const MethodInfo_23E2334 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
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
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  QuestPhaseMaster_o *v7; // x21
  int32_t SelectedQuestId; // w22

  if ( (byte_42AED2D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AED2D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_11;
  v7 = (QuestPhaseMaster_o *)Instance;
  if ( !QuestPhaseMaster__TryGetEntity(
          (QuestPhaseMaster_o *)Instance,
          questPhaseEnt,
          this->fields.questId,
          this->fields.questPhase,
          0LL) )
    return this->fields.questId;
  Instance = (DataManager_o *)*questPhaseEnt;
  if ( !*questPhaseEnt )
LABEL_11:
    sub_B52A5C(Instance, v6);
  SelectedQuestId = QuestPhaseEntity__GetSelectedQuestId(
                      (QuestPhaseEntity_o *)Instance,
                      this->fields.questId,
                      this->fields.questSelect,
                      0LL);
  if ( this->fields.questId != SelectedQuestId )
    QuestPhaseMaster__TryGetEntity(v7, questPhaseEnt, SelectedQuestId, this->fields.questPhase, 0LL);
  return SelectedQuestId;
}


StageEntity_o *__fastcall BattleEntity__GetStageEntityAtWave(
        BattleEntity_o *this,
        int32_t waveCnt,
        const MethodInfo *method)
{
  StageEntity_o *result; // x0
  StageEntity_o **p_mStageEnt; // x19
  struct QuestPhaseEntity_o *mQuestPhaseEnt; // x8
  DataManager_o *SelectableQuestPhase; // x0
  __int64 v9; // x1
  int32_t phase; // w20
  int32_t questId; // w22
  int32_t mCachedStageWave; // w23
  int32_t v13; // w23
  StageEntity_o **v14; // x1
  StageMaster_o *v15; // x21
  ReprintStageMaster_o *v16; // x24
  int32_t remapQuestId; // w2
  int32_t remapPhase; // w3
  int32_t remapWave; // w4
  StageMaster_o *v20; // x0
  StageEntity_o **v21; // x1
  ReprintStageEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AED2C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ReprintStageMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_StageMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AED2C = 1;
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
      SelectableQuestPhase = (DataManager_o *)BattleEntity__GetSelectableQuestPhase(
                                                this,
                                                &this->fields.mQuestPhaseEnt,
                                                method);
      mQuestPhaseEnt = this->fields.mQuestPhaseEnt;
      if ( !mQuestPhaseEnt )
        goto LABEL_21;
    }
    questId = mQuestPhaseEnt->fields.questId;
    phase = mQuestPhaseEnt->fields.phase;
    mCachedStageWave = this->fields.mCachedStageWave;
    SelectableQuestPhase = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelectableQuestPhase )
      goto LABEL_21;
    SelectableQuestPhase = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              SelectableQuestPhase,
                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_StageMaster___);
    if ( !SelectableQuestPhase )
      goto LABEL_21;
    v13 = mCachedStageWave + 1;
    v14 = &this->fields.mStageEnt;
    v15 = (StageMaster_o *)SelectableQuestPhase;
    StageMaster__TryGetEntity((StageMaster_o *)SelectableQuestPhase, v14, questId, phase, v13, 0LL);
    if ( !*p_mStageEnt )
    {
      SelectableQuestPhase = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelectableQuestPhase )
        goto LABEL_21;
      SelectableQuestPhase = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                SelectableQuestPhase,
                                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ReprintStageMaster___);
      entity = 0LL;
      if ( !SelectableQuestPhase )
        goto LABEL_21;
      v16 = (ReprintStageMaster_o *)SelectableQuestPhase;
      SelectableQuestPhase = (DataManager_o *)ReprintStageMaster__TryGetEntity(
                                                (ReprintStageMaster_o *)SelectableQuestPhase,
                                                &entity,
                                                questId,
                                                phase,
                                                v13,
                                                0LL);
      if ( ((unsigned __int8)SelectableQuestPhase & 1) != 0 )
      {
        if ( entity )
        {
          remapQuestId = entity->fields.remapQuestId;
          remapPhase = entity->fields.remapPhase;
          remapWave = entity->fields.remapWave;
          v20 = v15;
          v21 = p_mStageEnt;
LABEL_18:
          StageMaster__TryGetEntity(v20, v21, remapQuestId, remapPhase, remapWave, 0LL);
          return *p_mStageEnt;
        }
        goto LABEL_21;
      }
      SelectableQuestPhase = (DataManager_o *)ReprintStageMaster__TryGetEntity(v16, &entity, questId, 0, 0, 0LL);
      if ( ((unsigned __int8)SelectableQuestPhase & 1) != 0 )
      {
        if ( entity )
        {
          remapQuestId = entity->fields.remapQuestId;
          v20 = v15;
          v21 = p_mStageEnt;
          remapPhase = phase;
          remapWave = v13;
          goto LABEL_18;
        }
LABEL_21:
        sub_B52A5C(SelectableQuestPhase, v9);
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
  BattleEntity___c__DisplayClass31_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct CommandCodeInfo_array *userCommandCode; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_42AED2E & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Find_CommandCodeInfo___);
    sub_B52984(&Method_System_Predicate_CommandCodeInfo___ctor__);
    sub_B52984(&System_Predicate_CommandCodeInfo__TypeInfo);
    sub_B52984(&Method_BattleEntity___c__DisplayClass31_0__getUserCommandCode_b__0__);
    sub_B52984(&BattleEntity___c__DisplayClass31_0_TypeInfo);
    byte_42AED2E = 1;
  }
  v5 = (BattleEntity___c__DisplayClass31_0_o *)sub_B52A54(BattleEntity___c__DisplayClass31_0_TypeInfo);
  BattleEntity___c__DisplayClass31_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.userCommandCodeId = userCommandCodeId;
  userCommandCode = this->fields.userCommandCode;
  if ( !userCommandCode )
    return 0LL;
  v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_CommandCodeInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleEntity___c__DisplayClass31_0__getUserCommandCode_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_CommandCodeInfo___ctor__);
  return (CommandCodeInfo_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)userCommandCode,
                                (System_Predicate_T__o *)v9,
                                (const MethodInfo_201A850 *)Method_System_Array_Find_CommandCodeInfo___);
}


bool __fastcall BattleEntity__isDefeatCount(BattleEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AED2A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AED2A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.eventId,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0LL )
  {
    sub_B52A5C(Instance, v4);
  }
  return EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)Instance, 0LL);
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
    sub_B52A5C(this, 0LL);
  return x->fields.id == this->fields.userCommandCodeId;
}