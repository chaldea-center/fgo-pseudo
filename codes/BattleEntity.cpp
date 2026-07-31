void BattleEntity___ctor(BattleEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59382A6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_long___ctor__);
    byte_59382A6 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3EDADB8 *)Method_DataEntityBase_long___ctor__);
}


int64_t BattleEntity__CreatePrimaryKey(BattleEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


void BattleEntity__GetQuestInvolvedEntitys(
        BattleEntity_o *this,
        QuestEntity_o **qEnt,
        QuestPhaseEntity_o **qPhaseEnt,
        const MethodInfo *method)
{
  int32_t SelectableQuestPhase; // w20
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_59382A2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59382A2 = 1;
  }
  SelectableQuestPhase = BattleEntity__GetSelectableQuestPhase(this, qPhaseEnt, (const MethodInfo *)qPhaseEnt);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v9);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    (Il2CppObject **)qEnt,
    SelectableQuestPhase,
    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
}


QuestPhaseEntity_o *BattleEntity__GetQuestPhaseEntity(BattleEntity_o *this, const MethodInfo *method)
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


int32_t BattleEntity__GetSelectableQuestPhase(
        BattleEntity_o *this,
        QuestPhaseEntity_o **questPhaseEnt,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  QuestPhaseMaster_o *v7; // x21
  int32_t SelectedQuestId; // w22

  if ( (byte_59382A4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59382A4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_11;
  v7 = (QuestPhaseMaster_o *)Instance;
  if ( !QuestPhaseMaster__TryGetEntity(
          (QuestPhaseMaster_o *)Instance,
          questPhaseEnt,
          this->fields.questId,
          this->fields.questPhase,
          0) )
    return this->fields.questId;
  Instance = (DataManager_o *)*questPhaseEnt;
  if ( !*questPhaseEnt )
LABEL_11:
    sub_21FFECC(Instance, v6);
  SelectedQuestId = QuestPhaseEntity__GetSelectedQuestId(
                      (QuestPhaseEntity_o *)Instance,
                      this->fields.questId,
                      this->fields.questSelect,
                      0);
  if ( this->fields.questId != SelectedQuestId )
    QuestPhaseMaster__TryGetEntity(v7, questPhaseEnt, SelectedQuestId, this->fields.questPhase, 0);
  return SelectedQuestId;
}


StageEntity_o *BattleEntity__GetStageEntityAtWave(BattleEntity_o *this, int32_t waveCnt, const MethodInfo *method)
{
  StageEntity_o *result; // x0
  StageEntity_o **p_mStageEnt; // x19
  struct QuestPhaseEntity_o *mQuestPhaseEnt; // x8
  Il2CppObject *SelectableQuestPhase; // x0
  __int64 v9; // x1
  int32_t phase; // w21
  int32_t questId; // w23
  StageMaster_o *v12; // x22
  ReprintStageMaster_o *v13; // x24
  int32_t remapQuestId; // w2
  int32_t remapPhase; // w3
  int remapWave; // w4
  StageMaster_o *v17; // x0
  StageEntity_o **v18; // x1
  ReprintStageEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59382A3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ReprintStageMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_StageMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59382A3 = 1;
  }
  entity = 0;
  p_mStageEnt = &this->fields.mStageEnt;
  result = this->fields.mStageEnt;
  if ( !result || this->fields.mCachedStageWave != waveCnt )
  {
    mQuestPhaseEnt = this->fields.mQuestPhaseEnt;
    this->fields.mCachedStageWave = waveCnt;
    if ( !mQuestPhaseEnt )
    {
      SelectableQuestPhase = (Il2CppObject *)BattleEntity__GetSelectableQuestPhase(
                                               this,
                                               &this->fields.mQuestPhaseEnt,
                                               method);
      mQuestPhaseEnt = this->fields.mQuestPhaseEnt;
      if ( !mQuestPhaseEnt )
        goto LABEL_22;
      waveCnt = this->fields.mCachedStageWave;
    }
    questId = mQuestPhaseEnt->fields.questId;
    phase = mQuestPhaseEnt->fields.phase;
    SelectableQuestPhase = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( SelectableQuestPhase )
    {
      SelectableQuestPhase = DataManager__GetMasterData_object_(
                               (DataManager_o *)SelectableQuestPhase,
                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_StageMaster___);
      if ( SelectableQuestPhase )
      {
        v12 = (StageMaster_o *)SelectableQuestPhase;
        StageMaster__TryGetEntity((StageMaster_o *)SelectableQuestPhase, p_mStageEnt, questId, phase, waveCnt + 1, 0);
        if ( *p_mStageEnt )
          return *p_mStageEnt;
        SelectableQuestPhase = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SelectableQuestPhase )
          goto LABEL_22;
        SelectableQuestPhase = DataManager__GetMasterData_object_(
                                 (DataManager_o *)SelectableQuestPhase,
                                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ReprintStageMaster___);
        entity = 0;
        if ( !SelectableQuestPhase )
          goto LABEL_22;
        v13 = (ReprintStageMaster_o *)SelectableQuestPhase;
        SelectableQuestPhase = (Il2CppObject *)ReprintStageMaster__TryGetEntity(
                                                 (ReprintStageMaster_o *)SelectableQuestPhase,
                                                 &entity,
                                                 questId,
                                                 phase,
                                                 waveCnt + 1,
                                                 0);
        if ( ((unsigned __int8)SelectableQuestPhase & 1) != 0 )
        {
          if ( entity )
          {
            remapQuestId = entity->fields.remapQuestId;
            remapPhase = entity->fields.remapPhase;
            remapWave = entity->fields.remapWave;
            v17 = v12;
            v18 = p_mStageEnt;
LABEL_19:
            StageMaster__TryGetEntity(v17, v18, remapQuestId, remapPhase, remapWave, 0);
            return *p_mStageEnt;
          }
          goto LABEL_22;
        }
        SelectableQuestPhase = (Il2CppObject *)ReprintStageMaster__TryGetEntity(v13, &entity, questId, 0, 0, 0);
        if ( ((unsigned __int8)SelectableQuestPhase & 1) == 0 )
          return *p_mStageEnt;
        if ( entity )
        {
          remapQuestId = entity->fields.remapQuestId;
          remapWave = waveCnt + 1;
          v17 = v12;
          v18 = p_mStageEnt;
          remapPhase = phase;
          goto LABEL_19;
        }
      }
    }
LABEL_22:
    sub_21FFECC(SelectableQuestPhase, v9);
  }
  return result;
}


bool BattleEntity__IsUseGrandBoard(BattleEntity_o *this, const MethodInfo *method)
{
  return this->fields.isUseGrandBoard == 1;
}


CommandCodeInfo_o *BattleEntity__getUserCommandCode(
        BattleEntity_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Object_array *userCommandCode; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_59382A5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Find_CommandCodeInfo___);
    sub_21FFC50(&System_Predicate_CommandCodeInfo__TypeInfo);
    sub_21FFC50(&Method_BattleEntity___c__DisplayClass32_0__getUserCommandCode_b__0__);
    sub_21FFC50(&BattleEntity___c__DisplayClass32_0_TypeInfo);
    byte_59382A5 = 1;
  }
  v5 = (Il2CppObject *)sub_21FFEBC(BattleEntity___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  userCommandCode = (System_Object_array *)this->fields.userCommandCode;
  v5[1].klass = (Il2CppClass *)userCommandCodeId;
  if ( !userCommandCode )
    return 0;
  v9 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_CommandCodeInfo__TypeInfo);
  System_Predicate_object____ctor(v9, v5, Method_BattleEntity___c__DisplayClass32_0__getUserCommandCode_b__0__, 0);
  return (CommandCodeInfo_o *)System_Array__Find_object_(
                                userCommandCode,
                                (System_Predicate_T__o *)v9,
                                (const MethodInfo_39772EC *)Method_System_Array_Find_CommandCodeInfo___);
}


bool BattleEntity__isDefeatCount(BattleEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_59382A1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59382A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.eventId,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  return EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)Instance, 0);
}


bool BattleEntity__isVerifyActionLog(BattleEntity_o *this, const MethodInfo *method)
{
  return this->fields.verifyMode != 0;
}


void BattleEntity___c__DisplayClass32_0___ctor(BattleEntity___c__DisplayClass32_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleEntity___c__DisplayClass32_0___getUserCommandCode_b__0(
        BattleEntity___c__DisplayClass32_0_o *this,
        CommandCodeInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.id == this->fields.userCommandCodeId;
}