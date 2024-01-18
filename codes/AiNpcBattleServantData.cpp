void __fastcall AiNpcBattleServantData___ctor(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct NpcAiState_array *v6; // x0
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *v7; // x20

  if ( (byte_4185A8B & 1) == 0 )
  {
    sub_B2C35C(&BattleServantData_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_HashSet_AiLogic_PROC_STATE__TypeInfo, v4);
    sub_B2C35C(&NpcAiState___TypeInfo, v5);
    byte_4185A8B = 1;
  }
  v6 = (struct NpcAiState_array *)sub_B2C374(NpcAiState___TypeInfo, 0LL);
  this->fields.npcAiStates = v6;
  sub_B2C2F8(&this->fields.npcAiStates, v6);
  v7 = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)sub_B2C42C(System_Collections_Generic_HashSet_AiLogic_PROC_STATE__TypeInfo);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType____ctor(
    v7,
    (const MethodInfo_2D873F8 *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE___ctor__);
  this->fields.hashCheckingProcState = (struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *)v7;
  sub_B2C2F8(&this->fields.hashCheckingProcState, v7);
  if ( (BYTE3(BattleServantData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData_TypeInfo);
  }
  BattleServantData___ctor((BattleServantData_o *)this, 0LL);
}


void __fastcall AiNpcBattleServantData__AddActCount(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  *(int32x2_t *)&this->fields._ActCount_k__BackingField = vadd_s32(
                                                            *(int32x2_t *)&this->fields._ActCount_k__BackingField,
                                                            (int32x2_t)0x100000001LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AiNpcBattleServantData__AddCheckAiProcState(
        AiNpcBattleServantData_o *this,
        int32_t procState,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *hashCheckingProcState; // x0

  if ( (byte_4185A87 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Add__, *(_QWORD *)&procState);
    byte_4185A87 = 1;
  }
  hashCheckingProcState = this->fields.hashCheckingProcState;
  if ( !hashCheckingProcState )
    sub_B2C434(0LL, *(_QWORD *)&procState);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)hashCheckingProcState,
    procState,
    (const MethodInfo_2D885D4 *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AiNpcBattleServantData__AfterActorNoblePhantasm(
        AiNpcBattleServantData_o *this,
        BattleSequenceManager_o *battleSeqManager,
        BattleActorControl_o *actor,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  AiNpcBattleServantData_o *v8; // x21
  UnityEngine_Object_o *TargetTransform; // x21
  UnityEngine_Transform_o *v10; // x19
  int v11; // s0

  v8 = this;
  if ( (byte_4185A8A & 1) == 0 )
  {
    this = (AiNpcBattleServantData_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, battleSeqManager);
    byte_4185A8A = 1;
  }
  if ( !actor )
    goto LABEL_22;
  this = (AiNpcBattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)actor, 0LL);
  if ( !this )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !battleSeqManager )
    goto LABEL_22;
  BattleSequenceManager__AfterPlayTargetActorProc(battleSeqManager, actor, 0LL);
  if ( !perf )
    goto LABEL_22;
  this = (AiNpcBattleServantData_o *)perf->fields._fmManager_k__BackingField;
  if ( !this )
    goto LABEL_22;
  TargetTransform = (UnityEngine_Object_o *)FieldMotionManager__GetTargetTransform(
                                              (FieldMotionManager_o *)this,
                                              6,
                                              v8->fields.index,
                                              0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(TargetTransform, 0LL, 0LL) )
  {
    this = (AiNpcBattleServantData_o *)perf->fields._fmManager_k__BackingField;
    if ( !this )
      goto LABEL_22;
    TargetTransform = (UnityEngine_Object_o *)FieldMotionManager__GetTargetTransform(
                                                (FieldMotionManager_o *)this,
                                                6,
                                                0,
                                                0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(TargetTransform, 0LL, 0LL) )
  {
    this = (AiNpcBattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)actor, 0LL);
    if ( TargetTransform )
    {
      v10 = (UnityEngine_Transform_o *)this;
      *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position(
                                         (UnityEngine_Transform_o *)TargetTransform,
                                         0LL);
      if ( v10 )
      {
        UnityEngine_Transform__set_position(v10, *(UnityEngine_Vector3_o *)&v11, 0LL);
        return;
      }
    }
LABEL_22:
    sub_B2C434(this, battleSeqManager);
  }
}


bool __fastcall AiNpcBattleServantData__ExistAiThinking(
        AiNpcBattleServantData_o *this,
        BattleLogic_o *logic,
        int32_t procState,
        int32_t timingPriority,
        const MethodInfo *method)
{
  struct BattleLogicNpcAi_o *logicNpcAi; // x8
  struct NpcAiState_array *npcAiStates; // x26
  BattleServantData_o *v8; // x24
  struct AiState_o *CurrentAiState_k__BackingField; // x19
  struct AiState_o **p_CurrentAiState_k__BackingField; // x23
  AiLogic_o *aiLogic; // x25
  unsigned __int64 v14; // x27
  il2cpp_array_size_t max_length; // w8
  struct AiState_o *v16; // x1
  const MethodInfo *v17; // x5
  bool v18; // w20
  __int64 v20; // x0

  if ( !logic
    || (logicNpcAi = logic->fields.logicNpcAi) == 0LL
    || (npcAiStates = this->fields.npcAiStates, v8 = (BattleServantData_o *)this, !npcAiStates) )
  {
LABEL_13:
    sub_B2C434(this, logic);
  }
  CurrentAiState_k__BackingField = this->fields._CurrentAiState_k__BackingField;
  p_CurrentAiState_k__BackingField = &this->fields._CurrentAiState_k__BackingField;
  if ( (int)*(_QWORD *)&npcAiStates->max_length < 1 )
  {
LABEL_10:
    v18 = 0;
  }
  else
  {
    aiLogic = logicNpcAi->fields.aiLogic;
    v14 = 0LL;
    max_length = *(_QWORD *)&npcAiStates->max_length;
    while ( 1 )
    {
      if ( v14 >= max_length )
      {
        v20 = sub_B2C460(this);
        sub_B2C400(v20, 0LL);
      }
      v16 = (struct AiState_o *)npcAiStates->m_Items[v14];
      *p_CurrentAiState_k__BackingField = v16;
      sub_B2C2F8(&v8[1].monitor, v16);
      if ( !aiLogic )
        goto LABEL_13;
      this = (AiNpcBattleServantData_o *)AiLogic__checkThinking(
                                           aiLogic,
                                           v8,
                                           procState,
                                           (BattleLogicBaseAi_o *)logic->fields.logicNpcAi,
                                           timingPriority,
                                           v17);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      max_length = npcAiStates->max_length;
      if ( (__int64)++v14 >= (int)max_length )
        goto LABEL_10;
    }
    v18 = 1;
  }
  *p_CurrentAiState_k__BackingField = CurrentAiState_k__BackingField;
  sub_B2C2F8(&v8[1].monitor, CurrentAiState_k__BackingField);
  return v18;
}


void __fastcall AiNpcBattleServantData__InitAiStates(
        AiNpcBattleServantData_o *this,
        System_Int32_array *aiIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  AiNpcBattleServantData___c_c *v10; // x0
  struct AiNpcBattleServantData___c_StaticFields *static_fields; // x8
  System_Func_int__BattleActionData_SideEffectData__o *_9__34_0; // x21
  Il2CppObject *v13; // x22
  struct AiNpcBattleServantData___c_StaticFields *v14; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  struct NpcAiState_array *v16; // x0
  __int64 v17; // x1

  if ( (byte_4185A85 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_int__NpcAiState___, aiIds);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_NpcAiState___, v5);
    sub_B2C35C(&Method_System_Func_int__NpcAiState___ctor__, v6);
    sub_B2C35C(&System_Func_int__NpcAiState__TypeInfo, v7);
    sub_B2C35C(&Method_AiNpcBattleServantData___c__InitAiStates_b__34_0__, v8);
    sub_B2C35C(&AiNpcBattleServantData___c_TypeInfo, v9);
    byte_4185A85 = 1;
  }
  if ( aiIds )
  {
    v10 = AiNpcBattleServantData___c_TypeInfo;
    if ( (BYTE3(AiNpcBattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AiNpcBattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AiNpcBattleServantData___c_TypeInfo);
      v10 = AiNpcBattleServantData___c_TypeInfo;
    }
    static_fields = v10->static_fields;
    _9__34_0 = (System_Func_int__BattleActionData_SideEffectData__o *)static_fields->__9__34_0;
    if ( !_9__34_0 )
    {
      if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        static_fields = AiNpcBattleServantData___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__34_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B2C42C(System_Func_int__NpcAiState__TypeInfo);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        _9__34_0,
        v13,
        Method_AiNpcBattleServantData___c__InitAiStates_b__34_0__,
        (const MethodInfo_270D828 *)Method_System_Func_int__NpcAiState___ctor__);
      v14 = AiNpcBattleServantData___c_TypeInfo->static_fields;
      v14->__9__34_0 = (struct System_Func_int__NpcAiState__o *)_9__34_0;
      sub_B2C2F8(&v14->__9__34_0, _9__34_0);
    }
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)aiIds,
                                                                 (System_Func_TSource__TResult__o *)_9__34_0,
                                                                 (const MethodInfo_1A95A8C *)Method_System_Linq_Enumerable_Select_int__NpcAiState___);
    v16 = (struct NpcAiState_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                       v15,
                                       (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_NpcAiState___);
    if ( !this )
      sub_B2C434(v16, v17);
    this->fields.npcAiStates = v16;
    sub_B2C2F8(&this->fields.npcAiStates, v16);
  }
}


void __fastcall AiNpcBattleServantData__PrevActorNoblePhantasm(
        AiNpcBattleServantData_o *this,
        BattleSequenceManager_o *battleSeqManager,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  if ( !battleSeqManager )
    sub_B2C434(this, 0LL);
  BattleSequenceManager__PrevPlayTargetActorProc(battleSeqManager, actor, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiNpcBattleServantData__RemoveCheckAiProcState(
        AiNpcBattleServantData_o *this,
        int32_t procState,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *hashCheckingProcState; // x0
  struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *v7; // x8

  if ( (byte_4185A88 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Remove__, *(_QWORD *)&procState);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__get_Count__, v5);
    byte_4185A88 = 1;
  }
  hashCheckingProcState = this->fields.hashCheckingProcState;
  if ( !hashCheckingProcState
    || (hashCheckingProcState = (struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *)System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Remove(
                                                                                                     (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)hashCheckingProcState,
                                                                                                     procState,
                                                                                                     (const MethodInfo_2D87C38 *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Remove__),
        (v7 = this->fields.hashCheckingProcState) == 0LL) )
  {
    sub_B2C434(hashCheckingProcState, *(_QWORD *)&procState);
  }
  return v7->fields._count < 1;
}


void __fastcall AiNpcBattleServantData__ResetActCount(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  this->fields._ActCount_k__BackingField = 0;
}


void __fastcall AiNpcBattleServantData__SetNpcServant(
        AiNpcBattleServantData_o *this,
        BattleData_o *data,
        BattleDeckServantData_o *deckSvt,
        System_Int32_array *aiIds,
        BattleServantData_SaveData_o *saveSvt,
        const MethodInfo *method)
{
  __int64 v10; // x0
  __int64 v11; // x1

  AiNpcBattleServantData__InitAiStates(this, aiIds, (const MethodInfo *)deckSvt);
  if ( !data )
    sub_B2C434(v10, v11);
  BattleServantData__setServantData_21251972(
    (BattleServantData_o *)this,
    deckSvt,
    data->fields.battle_ent,
    3,
    saveSvt,
    0LL,
    0LL,
    0LL);
  if ( saveSvt )
    BattleServantData__loadTransformServant((BattleServantData_o *)this, data, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AiNpcBattleServantData__TurnProgress(
        AiNpcBattleServantData_o *this,
        bool isEndEnemyTurn,
        System_Int32_array *fieldIndiv,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  _BOOL4 v7; // w21
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_T__o *npcAiStates; // x23
  AiNpcBattleServantData___c_c *v14; // x0
  struct AiNpcBattleServantData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__41_0; // x24
  Il2CppObject *v17; // x25
  struct AiNpcBattleServantData___c_StaticFields *v18; // x0

  v7 = isEndEnemyTurn;
  if ( (byte_4185A89 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_NpcAiState___ctor__, isEndEnemyTurn);
    sub_B2C35C(&System_Action_NpcAiState__TypeInfo, v9);
    sub_B2C35C(&Method_BasicHelper_ForEach_NpcAiState___, v10);
    sub_B2C35C(&Method_AiNpcBattleServantData___c__TurnProgress_b__41_0__, v11);
    sub_B2C35C(&AiNpcBattleServantData___c_TypeInfo, v12);
    byte_4185A89 = 1;
  }
  if ( ((this->fields.isEnemy ^ v7) & 1) == 0 )
  {
    npcAiStates = (System_Collections_Generic_IEnumerable_T__o *)this->fields.npcAiStates;
    v14 = AiNpcBattleServantData___c_TypeInfo;
    if ( (BYTE3(AiNpcBattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AiNpcBattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AiNpcBattleServantData___c_TypeInfo);
      v14 = AiNpcBattleServantData___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__41_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__41_0;
    if ( !_9__41_0 )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = AiNpcBattleServantData___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__41_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_NpcAiState__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__41_0,
        v17,
        Method_AiNpcBattleServantData___c__TurnProgress_b__41_0__,
        (const MethodInfo_24BBAD8 *)Method_System_Action_NpcAiState___ctor__);
      v18 = AiNpcBattleServantData___c_TypeInfo->static_fields;
      v18->__9__41_0 = (struct System_Action_NpcAiState__o *)_9__41_0;
      sub_B2C2F8(&v18->__9__41_0, _9__41_0);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      npcAiStates,
      (System_Action_T__o *)_9__41_0,
      (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_NpcAiState___);
  }
  BattleServantData__turnBuffProgressing((BattleServantData_o *)this, v7, fieldIndiv, logic, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiNpcBattleServantData__UpdateAiStateTargetIndex(
        AiNpcBattleServantData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct AiState_o *v5; // x0

  if ( (byte_4185A86 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_NpcAiState___, *(_QWORD *)&index);
    byte_4185A86 = 1;
  }
  v5 = (struct AiState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                             (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)this->fields.npcAiStates,
                             index,
                             0LL,
                             (const MethodInfo_1728A0C *)Method_BasicHelper_IndexValue_NpcAiState___);
  this->fields._CurrentAiState_k__BackingField = v5;
  sub_B2C2F8(&this->fields._CurrentAiState_k__BackingField, v5);
  return this->fields._CurrentAiState_k__BackingField != 0LL;
}


System_Double_array *__fastcall AiNpcBattleServantData__getAiParam(
        AiNpcBattleServantData_o *this,
        BattleData_o *bData,
        int32_t param,
        int32_t turn,
        int32_t actCnt,
        System_Int64_array *checkParams,
        AiBaseEntity_o *aiBaseEntity,
        const MethodInfo *method)
{
  return BattleServantData__getAiParam(
           (BattleServantData_o *)this,
           bData,
           param,
           turn,
           actCnt,
           checkParams,
           aiBaseEntity,
           0LL);
}


AiState_o *__fastcall AiNpcBattleServantData__getAiState(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  if ( this->fields._CurrentAiState_k__BackingField )
    return this->fields._CurrentAiState_k__BackingField;
  else
    return BattleServantData__getAiState((BattleServantData_o *)this, 0LL);
}


BattleServantData_SaveData_o *__fastcall AiNpcBattleServantData__getSaveData(
        AiNpcBattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantData_SaveData_o *SaveData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *npcAiStates; // x21
  BattleServantData_SaveData_o *v12; // x20
  AiNpcBattleServantData___c_c *v13; // x8
  struct AiNpcBattleServantData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__31_0; // x22
  Il2CppObject *v16; // x23
  struct AiNpcBattleServantData___c_StaticFields *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v19; // x0
  __int64 v20; // x1
  BattleServantData_SaveData_o *result; // x0

  if ( (byte_4185A83 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_NpcAiState__AiState_SaveData___, data);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_AiState_SaveData___, v5);
    sub_B2C35C(&Method_System_Func_NpcAiState__AiState_SaveData___ctor__, v6);
    sub_B2C35C(&System_Func_NpcAiState__AiState_SaveData__TypeInfo, v7);
    sub_B2C35C(&Method_AiNpcBattleServantData___c__getSaveData_b__31_0__, v8);
    sub_B2C35C(&AiNpcBattleServantData___c_TypeInfo, v9);
    byte_4185A83 = 1;
  }
  SaveData = BattleServantData__getSaveData((BattleServantData_o *)this, data, 0LL);
  npcAiStates = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.npcAiStates;
  v12 = SaveData;
  v13 = AiNpcBattleServantData___c_TypeInfo;
  if ( (BYTE3(AiNpcBattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AiNpcBattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiNpcBattleServantData___c_TypeInfo);
    v13 = AiNpcBattleServantData___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__31_0;
  if ( !_9__31_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = AiNpcBattleServantData___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_NpcAiState__AiState_SaveData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__31_0,
      v16,
      Method_AiNpcBattleServantData___c__getSaveData_b__31_0__,
      (const MethodInfo_2713350 *)Method_System_Func_NpcAiState__AiState_SaveData___ctor__);
    v17 = AiNpcBattleServantData___c_TypeInfo->static_fields;
    v17->__9__31_0 = (struct System_Func_NpcAiState__AiState_SaveData__o *)_9__31_0;
    sub_B2C2F8(&v17->__9__31_0, _9__31_0);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               npcAiStates,
                                                               (System_Func_TSource__TResult__o *)_9__31_0,
                                                               (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_NpcAiState__AiState_SaveData___);
  v19 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          v18,
          (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
  if ( !v12 )
    sub_B2C434(v19, v20);
  v12->fields.npcAiStates = (struct AiState_SaveData_array *)v19;
  sub_B2C2F8(&v12->fields.npcAiStates, v19);
  result = v12;
  v12->fields.npcActCount = this->fields._ActCount_k__BackingField;
  v12->fields.npcTotalActCount = this->fields._TotalActCount_k__BackingField;
  return result;
}


int32_t __fastcall AiNpcBattleServantData__getThisTurnActCount(
        AiNpcBattleServantData_o *this,
        const MethodInfo *method)
{
  return this->fields._ActCount_k__BackingField;
}


int32_t __fastcall AiNpcBattleServantData__get_ActCount(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  return this->fields._ActCount_k__BackingField;
}


int32_t __fastcall AiNpcBattleServantData__get_ActorType(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  return 2;
}


AiState_o *__fastcall AiNpcBattleServantData__get_CurrentAiState(
        AiNpcBattleServantData_o *this,
        const MethodInfo *method)
{
  return this->fields._CurrentAiState_k__BackingField;
}


bool __fastcall AiNpcBattleServantData__get_IsAiNpc(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  return 1;
}


int32_t __fastcall AiNpcBattleServantData__get_TotalActCount(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  return this->fields._TotalActCount_k__BackingField;
}


int32_t __fastcall AiNpcBattleServantData__get_hp(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.maxhp;
}


int32_t __fastcall AiNpcBattleServantData__get_reducedhp(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  return 0;
}


int32_t __fastcall AiNpcBattleServantData__get_resultHp(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.maxhp;
}


bool __fastcall AiNpcBattleServantData__setSaveData(
        AiNpcBattleServantData_o *this,
        BattleServantData_SaveData_o *save,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  AiNpcBattleServantData___c__DisplayClass32_0_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  AiNpcBattleServantData___c__DisplayClass32_0_Fields *p_fields; // x22
  System_Collections_Generic_IEnumerable_T__o *npcAiStates; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v14; // x23
  struct BattleServantData_SaveData_o *v15; // x8
  bool result; // w0

  if ( (byte_4185A84 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_NpcAiState___ctor__, save);
    sub_B2C35C(&System_Action_NpcAiState__TypeInfo, v5);
    sub_B2C35C(&Method_BasicHelper_ForEach_NpcAiState___, v6);
    sub_B2C35C(&Method_AiNpcBattleServantData___c__DisplayClass32_0__setSaveData_b__0__, v7);
    sub_B2C35C(&AiNpcBattleServantData___c__DisplayClass32_0_TypeInfo, v8);
    byte_4185A84 = 1;
  }
  v9 = (AiNpcBattleServantData___c__DisplayClass32_0_o *)sub_B2C42C(AiNpcBattleServantData___c__DisplayClass32_0_TypeInfo);
  AiNpcBattleServantData___c__DisplayClass32_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  v9->fields.save = save;
  p_fields = &v9->fields;
  sub_B2C2F8(&v9->fields, save);
  if ( BattleServantData__setSaveData((BattleServantData_o *)this, v9->fields.save, 0LL) )
  {
    v9->fields.index = 0;
    npcAiStates = (System_Collections_Generic_IEnumerable_T__o *)this->fields.npcAiStates;
    v14 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_NpcAiState__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v14,
      (Il2CppObject *)v9,
      Method_AiNpcBattleServantData___c__DisplayClass32_0__setSaveData_b__0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_NpcAiState___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      npcAiStates,
      (System_Action_T__o *)v14,
      (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_NpcAiState___);
    v15 = v9->fields.save;
    if ( v15 )
    {
      this->fields._ActCount_k__BackingField = v15->fields.npcActCount;
      if ( p_fields->save )
      {
        result = 1;
        this->fields._TotalActCount_k__BackingField = p_fields->save->fields.npcTotalActCount;
        return result;
      }
    }
LABEL_9:
    sub_B2C434(v10, v11);
  }
  return 0;
}


void __fastcall AiNpcBattleServantData__set_ActCount(
        AiNpcBattleServantData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ActCount_k__BackingField = value;
}


void __fastcall AiNpcBattleServantData__set_CurrentAiState(
        AiNpcBattleServantData_o *this,
        AiState_o *value,
        const MethodInfo *method)
{
  this->fields._CurrentAiState_k__BackingField = value;
  sub_B2C2F8(&this->fields._CurrentAiState_k__BackingField, value);
}


void __fastcall AiNpcBattleServantData__set_TotalActCount(
        AiNpcBattleServantData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TotalActCount_k__BackingField = value;
}


void __fastcall AiNpcBattleServantData__set_hp(AiNpcBattleServantData_o *this, int32_t value, const MethodInfo *method)
{
  ;
}


void __fastcall AiNpcBattleServantData__set_reducedhp(
        AiNpcBattleServantData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  ;
}


void __fastcall AiNpcBattleServantData__set_resultHp(
        AiNpcBattleServantData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  ;
}


void __fastcall AiNpcBattleServantData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186B9E & 1) == 0 )
  {
    sub_B2C35C(&AiNpcBattleServantData___c_TypeInfo, v1);
    byte_4186B9E = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(AiNpcBattleServantData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)AiNpcBattleServantData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
}


void __fastcall AiNpcBattleServantData___c___ctor(AiNpcBattleServantData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
NpcAiState_o *__fastcall AiNpcBattleServantData___c___InitAiStates_b__34_0(
        AiNpcBattleServantData___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  NpcAiState_o *v4; // x20

  if ( (byte_4186B9F & 1) == 0 )
  {
    sub_B2C35C(&NpcAiState_TypeInfo, *(_QWORD *)&id);
    byte_4186B9F = 1;
  }
  v4 = (NpcAiState_o *)sub_B2C42C(NpcAiState_TypeInfo);
  NpcAiState___ctor(v4, id, 0LL);
  return v4;
}


void __fastcall AiNpcBattleServantData___c___TurnProgress_b__41_0(
        AiNpcBattleServantData___c_o *this,
        NpcAiState_o *state,
        const MethodInfo *method)
{
  if ( !state )
    sub_B2C434(this, 0LL);
  AiState__fieldTurnProgressing((AiState_o *)state, 0LL);
}


AiState_SaveData_o *__fastcall AiNpcBattleServantData___c___getSaveData_b__31_0(
        AiNpcBattleServantData___c_o *this,
        NpcAiState_o *state,
        const MethodInfo *method)
{
  if ( !state )
    sub_B2C434(this, 0LL);
  return AiState__getSaveData((AiState_o *)state, 0LL);
}


void __fastcall AiNpcBattleServantData___c__DisplayClass32_0___ctor(
        AiNpcBattleServantData___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AiNpcBattleServantData___c__DisplayClass32_0___setSaveData_b__0(
        AiNpcBattleServantData___c__DisplayClass32_0_o *this,
        NpcAiState_o *npcAiState,
        const MethodInfo *method)
{
  AiNpcBattleServantData___c__DisplayClass32_0_o *v4; // x20
  struct BattleServantData_SaveData_o *save; // x8
  int32_t index; // w1
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *npcAiStates; // x0

  v4 = this;
  if ( (byte_4186BA0 & 1) == 0 )
  {
    this = (AiNpcBattleServantData___c__DisplayClass32_0_o *)sub_B2C35C(
                                                               &Method_BasicHelper_IndexValue_AiState_SaveData___,
                                                               npcAiState);
    byte_4186BA0 = 1;
  }
  save = v4->fields.save;
  if ( !save
    || (index = v4->fields.index,
        npcAiStates = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)save->fields.npcAiStates,
        v4->fields.index = index + 1,
        this = (AiNpcBattleServantData___c__DisplayClass32_0_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                                                   npcAiStates,
                                                                   index,
                                                                   0LL,
                                                                   (const MethodInfo_1728A0C *)Method_BasicHelper_IndexValue_AiState_SaveData___),
        !npcAiState) )
  {
    sub_B2C434(this, npcAiState);
  }
  AiState__setSaveData((AiState_o *)npcAiState, (AiState_SaveData_o *)this, 0LL);
}