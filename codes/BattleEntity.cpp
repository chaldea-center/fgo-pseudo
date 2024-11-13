void __fastcall BattleEntity___ctor(BattleEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E70 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_long___ctor__, method, v2);
    byte_4B15E70 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_31B2C88 *)Method_DataEntityBase_long___ctor__);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t SelectableQuestPhase; // w20
  Il2CppObject *Instance; // x0
  __int64 v13; // x1

  if ( (byte_4B15E6C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, qEnt, qPhaseEnt);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B15E6C = 1;
  }
  SelectableQuestPhase = BattleEntity__GetSelectableQuestPhase(this, qPhaseEnt, (const MethodInfo *)qPhaseEnt);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v13);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    (Il2CppObject **)qEnt,
    SelectableQuestPhase,
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
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
  __int64 v6; // x2
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  QuestPhaseMaster_o *v9; // x21
  int32_t SelectedQuestId; // w22

  if ( (byte_4B15E6E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, questPhaseEnt, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B15E6E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_11;
  v9 = (QuestPhaseMaster_o *)Instance;
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
    sub_1BCAA3C(Instance, v8);
  SelectedQuestId = QuestPhaseEntity__GetSelectedQuestId(
                      (QuestPhaseEntity_o *)Instance,
                      this->fields.questId,
                      this->fields.questSelect,
                      0LL);
  if ( this->fields.questId != SelectedQuestId )
    QuestPhaseMaster__TryGetEntity(v9, questPhaseEnt, SelectedQuestId, this->fields.questPhase, 0LL);
  return SelectedQuestId;
}


// local variable allocation has failed, the output may be wrong!
StageEntity_o *__fastcall BattleEntity__GetStageEntityAtWave(
        BattleEntity_o *this,
        int32_t waveCnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  StageEntity_o *result; // x0
  StageEntity_o **p_mStageEnt; // x19
  struct QuestPhaseEntity_o *mQuestPhaseEnt; // x8
  Il2CppObject *SelectableQuestPhase; // x0
  __int64 v13; // x1
  int32_t phase; // w20
  int32_t questId; // w22
  int32_t mCachedStageWave; // w23
  int32_t v17; // w23
  StageEntity_o **v18; // x1
  StageMaster_o *v19; // x21
  ReprintStageMaster_o *v20; // x24
  int32_t remapQuestId; // w2
  int32_t remapPhase; // w3
  int32_t remapWave; // w4
  StageMaster_o *v24; // x0
  StageEntity_o **v25; // x1
  ReprintStageEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B15E6D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ReprintStageMaster___, *(_QWORD *)&waveCnt, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_StageMaster___, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B15E6D = 1;
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
    SelectableQuestPhase = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelectableQuestPhase )
      goto LABEL_21;
    SelectableQuestPhase = DataManager__GetMasterData_object_(
                             (DataManager_o *)SelectableQuestPhase,
                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_StageMaster___);
    if ( !SelectableQuestPhase )
      goto LABEL_21;
    v17 = mCachedStageWave + 1;
    v18 = &this->fields.mStageEnt;
    v19 = (StageMaster_o *)SelectableQuestPhase;
    StageMaster__TryGetEntity((StageMaster_o *)SelectableQuestPhase, v18, questId, phase, v17, 0LL);
    if ( !*p_mStageEnt )
    {
      SelectableQuestPhase = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelectableQuestPhase )
        goto LABEL_21;
      SelectableQuestPhase = DataManager__GetMasterData_object_(
                               (DataManager_o *)SelectableQuestPhase,
                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ReprintStageMaster___);
      entity = 0LL;
      if ( !SelectableQuestPhase )
        goto LABEL_21;
      v20 = (ReprintStageMaster_o *)SelectableQuestPhase;
      SelectableQuestPhase = (Il2CppObject *)ReprintStageMaster__TryGetEntity(
                                               (ReprintStageMaster_o *)SelectableQuestPhase,
                                               &entity,
                                               questId,
                                               phase,
                                               v17,
                                               0LL);
      if ( ((unsigned __int8)SelectableQuestPhase & 1) != 0 )
      {
        if ( entity )
        {
          remapQuestId = entity->fields.remapQuestId;
          remapPhase = entity->fields.remapPhase;
          remapWave = entity->fields.remapWave;
          v24 = v19;
          v25 = p_mStageEnt;
LABEL_18:
          StageMaster__TryGetEntity(v24, v25, remapQuestId, remapPhase, remapWave, 0LL);
          return *p_mStageEnt;
        }
        goto LABEL_21;
      }
      SelectableQuestPhase = (Il2CppObject *)ReprintStageMaster__TryGetEntity(v20, &entity, questId, 0, 0, 0LL);
      if ( ((unsigned __int8)SelectableQuestPhase & 1) != 0 )
      {
        if ( entity )
        {
          remapQuestId = entity->fields.remapQuestId;
          v24 = v19;
          v25 = p_mStageEnt;
          remapPhase = phase;
          remapWave = v17;
          goto LABEL_18;
        }
LABEL_21:
        sub_1BCAA3C(SelectableQuestPhase, v13);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Object_array *userCommandCode; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4B15E6F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Find_CommandCodeInfo___, userCommandCodeId, method);
    sub_1BCA7E0(&System_Predicate_CommandCodeInfo__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_BattleEntity___c__DisplayClass31_0__getUserCommandCode_b__0__, v8, v9);
    sub_1BCA7E0(&BattleEntity___c__DisplayClass31_0_TypeInfo, v10, v11);
    byte_4B15E6F = 1;
  }
  v12 = (Il2CppObject *)sub_1BCAA2C(BattleEntity___c__DisplayClass31_0_TypeInfo, userCommandCodeId, method, v3);
  System_Object___ctor(v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  v12[1].klass = (Il2CppClass *)userCommandCodeId;
  userCommandCode = (System_Object_array *)this->fields.userCommandCode;
  if ( !userCommandCode )
    return 0LL;
  v18 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_CommandCodeInfo__TypeInfo, v14, v15, v16);
  System_Predicate_object____ctor(v18, v12, Method_BattleEntity___c__DisplayClass31_0__getUserCommandCode_b__0__, 0LL);
  return (CommandCodeInfo_o *)System_Array__Find_object_(
                                userCommandCode,
                                (System_Predicate_T__o *)v18,
                                (const MethodInfo_300CA48 *)Method_System_Array_Find_CommandCodeInfo___);
}


bool __fastcall BattleEntity__isDefeatCount(BattleEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B15E6B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B15E6B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.eventId,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.id == this->fields.userCommandCodeId;
}