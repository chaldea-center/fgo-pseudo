void __fastcall BattleEntity___ctor(BattleEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5ADE4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_long___ctor__);
    byte_4A5ADE4 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_311D77C *)Method_DataEntityBase_long___ctor__);
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
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4A5ADE0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5ADE0 = 1;
  }
  SelectableQuestPhase = BattleEntity__GetSelectableQuestPhase(this, qPhaseEnt, (const MethodInfo *)qPhaseEnt);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v9);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    (Il2CppObject **)qEnt,
    SelectableQuestPhase,
    (const MethodInfo_311D988 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
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

  if ( (byte_4A5ADE2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5ADE2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
    sub_1B8880C(Instance, v6);
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
  Il2CppObject *SelectableQuestPhase; // x0
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

  if ( (byte_4A5ADE1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ReprintStageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_StageMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5ADE1 = 1;
  }
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
        goto LABEL_21;
    }
    questId = mQuestPhaseEnt->fields.questId;
    phase = mQuestPhaseEnt->fields.phase;
    mCachedStageWave = this->fields.mCachedStageWave;
    SelectableQuestPhase = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelectableQuestPhase )
      goto LABEL_21;
    SelectableQuestPhase = DataManager__GetMasterData_object_(
                             (DataManager_o *)SelectableQuestPhase,
                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_StageMaster___);
    if ( !SelectableQuestPhase )
      goto LABEL_21;
    v13 = mCachedStageWave + 1;
    v14 = &this->fields.mStageEnt;
    v15 = (StageMaster_o *)SelectableQuestPhase;
    StageMaster__TryGetEntity((StageMaster_o *)SelectableQuestPhase, v14, questId, phase, v13, 0LL);
    if ( !*p_mStageEnt )
    {
      SelectableQuestPhase = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelectableQuestPhase )
        goto LABEL_21;
      SelectableQuestPhase = DataManager__GetMasterData_object_(
                               (DataManager_o *)SelectableQuestPhase,
                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ReprintStageMaster___);
      entity = 0LL;
      if ( !SelectableQuestPhase )
        goto LABEL_21;
      v16 = (ReprintStageMaster_o *)SelectableQuestPhase;
      SelectableQuestPhase = (Il2CppObject *)ReprintStageMaster__TryGetEntity(
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
      SelectableQuestPhase = (Il2CppObject *)ReprintStageMaster__TryGetEntity(v16, &entity, questId, 0, 0, 0LL);
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
        sub_1B8880C(SelectableQuestPhase, v9);
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
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Object_array *userCommandCode; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4A5ADE3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Find_CommandCodeInfo___);
    sub_1B885B0(&System_Predicate_CommandCodeInfo__TypeInfo);
    sub_1B885B0(&Method_BattleEntity___c__DisplayClass31_0__getUserCommandCode_b__0__);
    sub_1B885B0(&BattleEntity___c__DisplayClass31_0_TypeInfo);
    byte_4A5ADE3 = 1;
  }
  v5 = (Il2CppObject *)sub_1B887FC(BattleEntity___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  v5[1].klass = (Il2CppClass *)userCommandCodeId;
  userCommandCode = (System_Object_array *)this->fields.userCommandCode;
  if ( !userCommandCode )
    return 0LL;
  v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_CommandCodeInfo__TypeInfo);
  System_Predicate_object____ctor(v9, v5, Method_BattleEntity___c__DisplayClass31_0__getUserCommandCode_b__0__, 0LL);
  return (CommandCodeInfo_o *)System_Array__Find_object_(
                                userCommandCode,
                                (System_Predicate_T__o *)v9,
                                (const MethodInfo_2F78480 *)Method_System_Array_Find_CommandCodeInfo___);
}


bool __fastcall BattleEntity__isDefeatCount(BattleEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5ADDF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5ADDF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.eventId,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
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
    sub_1B8880C(this, 0LL);
  return x->fields.id == this->fields.userCommandCodeId;
}