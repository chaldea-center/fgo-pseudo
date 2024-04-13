void __fastcall BattleEntity___ctor(BattleEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E786E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_long___ctor__, (_DWORD)method, v2, v3);
    byte_42E786E = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23FAD14 *)Method_DataEntityBase_long___ctor__);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int32_t SelectableQuestPhase; // w20
  DataManager_o *Instance; // x0
  __int64 v15; // x1

  if ( (byte_42E786A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, (_DWORD)qEnt, (_DWORD)qPhaseEnt, method);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E786A = 1;
  }
  SelectableQuestPhase = BattleEntity__GetSelectableQuestPhase(this, qPhaseEnt, (const MethodInfo *)qPhaseEnt);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v15);
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
    (WarEntity_o **)qEnt,
    SelectableQuestPhase,
    (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  QuestPhaseMaster_o *v11; // x21
  int32_t SelectedQuestId; // w22

  if ( (byte_42E786C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, (_DWORD)questPhaseEnt, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E786C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_11;
  v11 = (QuestPhaseMaster_o *)Instance;
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
    sub_B5D69C(Instance, v10);
  SelectedQuestId = QuestPhaseEntity__GetSelectedQuestId(
                      (QuestPhaseEntity_o *)Instance,
                      this->fields.questId,
                      this->fields.questSelect,
                      0LL);
  if ( this->fields.questId != SelectedQuestId )
    QuestPhaseMaster__TryGetEntity(v11, questPhaseEnt, SelectedQuestId, this->fields.questPhase, 0LL);
  return SelectedQuestId;
}


StageEntity_o *__fastcall BattleEntity__GetStageEntityAtWave(
        BattleEntity_o *this,
        int32_t waveCnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  StageEntity_o *result; // x0
  StageEntity_o **p_mStageEnt; // x19
  struct QuestPhaseEntity_o *mQuestPhaseEnt; // x8
  DataManager_o *SelectableQuestPhase; // x0
  __int64 v16; // x1
  int32_t phase; // w20
  int32_t questId; // w22
  int32_t mCachedStageWave; // w23
  int32_t v20; // w23
  StageEntity_o **v21; // x1
  StageMaster_o *v22; // x21
  ReprintStageMaster_o *v23; // x24
  int32_t remapQuestId; // w2
  int32_t remapPhase; // w3
  int32_t remapWave; // w4
  StageMaster_o *v27; // x0
  StageEntity_o **v28; // x1
  ReprintStageEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E786B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ReprintStageMaster___, waveCnt, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_StageMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E786B = 1;
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
    SelectableQuestPhase = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelectableQuestPhase )
      goto LABEL_21;
    SelectableQuestPhase = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              SelectableQuestPhase,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_StageMaster___);
    if ( !SelectableQuestPhase )
      goto LABEL_21;
    v20 = mCachedStageWave + 1;
    v21 = &this->fields.mStageEnt;
    v22 = (StageMaster_o *)SelectableQuestPhase;
    StageMaster__TryGetEntity((StageMaster_o *)SelectableQuestPhase, v21, questId, phase, v20, 0LL);
    if ( !*p_mStageEnt )
    {
      SelectableQuestPhase = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelectableQuestPhase )
        goto LABEL_21;
      SelectableQuestPhase = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                SelectableQuestPhase,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ReprintStageMaster___);
      entity = 0LL;
      if ( !SelectableQuestPhase )
        goto LABEL_21;
      v23 = (ReprintStageMaster_o *)SelectableQuestPhase;
      SelectableQuestPhase = (DataManager_o *)ReprintStageMaster__TryGetEntity(
                                                (ReprintStageMaster_o *)SelectableQuestPhase,
                                                &entity,
                                                questId,
                                                phase,
                                                v20,
                                                0LL);
      if ( ((unsigned __int8)SelectableQuestPhase & 1) != 0 )
      {
        if ( entity )
        {
          remapQuestId = entity->fields.remapQuestId;
          remapPhase = entity->fields.remapPhase;
          remapWave = entity->fields.remapWave;
          v27 = v22;
          v28 = p_mStageEnt;
LABEL_18:
          StageMaster__TryGetEntity(v27, v28, remapQuestId, remapPhase, remapWave, 0LL);
          return *p_mStageEnt;
        }
        goto LABEL_21;
      }
      SelectableQuestPhase = (DataManager_o *)ReprintStageMaster__TryGetEntity(v23, &entity, questId, 0, 0, 0LL);
      if ( ((unsigned __int8)SelectableQuestPhase & 1) != 0 )
      {
        if ( entity )
        {
          remapQuestId = entity->fields.remapQuestId;
          v27 = v22;
          v28 = p_mStageEnt;
          remapPhase = phase;
          remapWave = v20;
          goto LABEL_18;
        }
LABEL_21:
        sub_B5D69C(SelectableQuestPhase, v16);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  BattleEntity___c__DisplayClass31_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct CommandCodeInfo_array *userCommandCode; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x20

  if ( (byte_42E786D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Find_CommandCodeInfo___, userCommandCodeId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Predicate_CommandCodeInfo___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_CommandCodeInfo__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BattleEntity___c__DisplayClass31_0__getUserCommandCode_b__0__, v12, v13, v14);
    sub_B5D5C4(&BattleEntity___c__DisplayClass31_0_TypeInfo, v15, v16, v17);
    byte_42E786D = 1;
  }
  v18 = (BattleEntity___c__DisplayClass31_0_o *)sub_B5D694(BattleEntity___c__DisplayClass31_0_TypeInfo);
  BattleEntity___c__DisplayClass31_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.userCommandCodeId = userCommandCodeId;
  userCommandCode = this->fields.userCommandCode;
  if ( !userCommandCode )
    return 0LL;
  v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_CommandCodeInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_BattleEntity___c__DisplayClass31_0__getUserCommandCode_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_CommandCodeInfo___ctor__);
  return (CommandCodeInfo_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)userCommandCode,
                                (System_Predicate_T__o *)v22,
                                (const MethodInfo_1FC03F4 *)Method_System_Array_Find_CommandCodeInfo___);
}


bool __fastcall BattleEntity__isDefeatCount(BattleEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1

  if ( (byte_42E7869 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E7869 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.eventId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
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
    sub_B5D69C(this, 0LL);
  return x->fields.id == this->fields.userCommandCodeId;
}