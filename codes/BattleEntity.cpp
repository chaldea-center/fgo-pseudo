void __fastcall BattleEntity___ctor(BattleEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7715 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_long___ctor__, method);
    byte_4BC7715 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_32461DC *)Method_DataEntityBase_long___ctor__);
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
  Il2CppObject *Instance; // x0
  __int64 v11; // x1

  if ( (byte_4BC7711 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestMaster___, qEnt);
    sub_1C1ABD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BC7711 = 1;
  }
  SelectableQuestPhase = BattleEntity__GetSelectableQuestPhase(this, qPhaseEnt, (const MethodInfo *)qPhaseEnt);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v11);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    (Il2CppObject **)qEnt,
    SelectableQuestPhase,
    (const MethodInfo_32486C4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
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
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  QuestPhaseMaster_o *v8; // x21
  int32_t SelectedQuestId; // w22

  if ( (byte_4BC7713 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, questPhaseEnt);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BC7713 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_11;
  v8 = (QuestPhaseMaster_o *)Instance;
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
    sub_1C1AE30(Instance, v7);
  SelectedQuestId = QuestPhaseEntity__GetSelectedQuestId(
                      (QuestPhaseEntity_o *)Instance,
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
  Il2CppObject *SelectableQuestPhase; // x0
  __int64 v11; // x1
  int32_t phase; // w20
  int32_t questId; // w22
  int32_t mCachedStageWave; // w23
  int32_t v15; // w23
  StageEntity_o **v16; // x1
  StageMaster_o *v17; // x21
  ReprintStageMaster_o *v18; // x24
  int32_t remapQuestId; // w2
  int32_t remapPhase; // w3
  int32_t remapWave; // w4
  StageMaster_o *v22; // x0
  StageEntity_o **v23; // x1
  ReprintStageEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BC7712 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ReprintStageMaster___, *(_QWORD *)&waveCnt);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_StageMaster___, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BC7712 = 1;
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
    SelectableQuestPhase = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !SelectableQuestPhase )
      goto LABEL_21;
    SelectableQuestPhase = DataManager__GetMasterData_object_(
                             (DataManager_o *)SelectableQuestPhase,
                             (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_StageMaster___);
    if ( !SelectableQuestPhase )
      goto LABEL_21;
    v15 = mCachedStageWave + 1;
    v16 = &this->fields.mStageEnt;
    v17 = (StageMaster_o *)SelectableQuestPhase;
    StageMaster__TryGetEntity((StageMaster_o *)SelectableQuestPhase, v16, questId, phase, v15, 0LL);
    if ( !*p_mStageEnt )
    {
      SelectableQuestPhase = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelectableQuestPhase )
        goto LABEL_21;
      SelectableQuestPhase = DataManager__GetMasterData_object_(
                               (DataManager_o *)SelectableQuestPhase,
                               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ReprintStageMaster___);
      entity = 0LL;
      if ( !SelectableQuestPhase )
        goto LABEL_21;
      v18 = (ReprintStageMaster_o *)SelectableQuestPhase;
      SelectableQuestPhase = (Il2CppObject *)ReprintStageMaster__TryGetEntity(
                                               (ReprintStageMaster_o *)SelectableQuestPhase,
                                               &entity,
                                               questId,
                                               phase,
                                               v15,
                                               0LL);
      if ( ((unsigned __int8)SelectableQuestPhase & 1) != 0 )
      {
        if ( entity )
        {
          remapQuestId = entity->fields.remapQuestId;
          remapPhase = entity->fields.remapPhase;
          remapWave = entity->fields.remapWave;
          v22 = v17;
          v23 = p_mStageEnt;
LABEL_18:
          StageMaster__TryGetEntity(v22, v23, remapQuestId, remapPhase, remapWave, 0LL);
          return *p_mStageEnt;
        }
        goto LABEL_21;
      }
      SelectableQuestPhase = (Il2CppObject *)ReprintStageMaster__TryGetEntity(v18, &entity, questId, 0, 0, 0LL);
      if ( ((unsigned __int8)SelectableQuestPhase & 1) != 0 )
      {
        if ( entity )
        {
          remapQuestId = entity->fields.remapQuestId;
          v22 = v17;
          v23 = p_mStageEnt;
          remapPhase = phase;
          remapWave = v15;
          goto LABEL_18;
        }
LABEL_21:
        sub_1C1AE30(SelectableQuestPhase, v11);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Object_array *userCommandCode; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4BC7714 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Array_Find_CommandCodeInfo___, userCommandCodeId);
    sub_1C1ABD4(&System_Predicate_CommandCodeInfo__TypeInfo, v5);
    sub_1C1ABD4(&Method_BattleEntity___c__DisplayClass31_0__getUserCommandCode_b__0__, v6);
    sub_1C1ABD4(&BattleEntity___c__DisplayClass31_0_TypeInfo, v7);
    byte_4BC7714 = 1;
  }
  v8 = (Il2CppObject *)sub_1C1AE20(BattleEntity___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor(v8, 0LL);
  if ( !v8 )
    sub_1C1AE30(v9, v10);
  v8[1].klass = (Il2CppClass *)userCommandCodeId;
  userCommandCode = (System_Object_array *)this->fields.userCommandCode;
  if ( !userCommandCode )
    return 0LL;
  v12 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_CommandCodeInfo__TypeInfo);
  System_Predicate_object____ctor(v12, v8, Method_BattleEntity___c__DisplayClass31_0__getUserCommandCode_b__0__, 0LL);
  return (CommandCodeInfo_o *)System_Array__Find_object_(
                                userCommandCode,
                                (System_Predicate_T__o *)v12,
                                (const MethodInfo_309A400 *)Method_System_Array_Find_CommandCodeInfo___);
}


bool __fastcall BattleEntity__isDefeatCount(BattleEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4BC7710 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BC7710 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.eventId,
                     (const MethodInfo_3248678 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0LL )
  {
    sub_1C1AE30(Instance, v6);
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
    sub_1C1AE30(this, 0LL);
  return x->fields.id == this->fields.userCommandCodeId;
}