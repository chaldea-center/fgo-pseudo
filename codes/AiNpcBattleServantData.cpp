void __fastcall AiNpcBattleServantData___ctor(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct NpcAiState_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_421297C & 1) == 0 )
  {
    sub_B0D8A4(&BattleServantData_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE___ctor__, v3);
    sub_B0D8A4(&System_Collections_Generic_HashSet_AiLogic_PROC_STATE__TypeInfo, v4);
    sub_B0D8A4(&NpcAiState___TypeInfo, v5);
    byte_421297C = 1;
  }
  v6 = (struct NpcAiState_array *)sub_B0D8BC(NpcAiState___TypeInfo, 0LL);
  this->fields.npcAiStates = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.npcAiStates,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v15 = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)sub_B0D974(
                                                                                                System_Collections_Generic_HashSet_AiLogic_PROC_STATE__TypeInfo,
                                                                                                v13,
                                                                                                v14);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType____ctor(
    v15,
    (const MethodInfo_2C77374 *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE___ctor__);
  this->fields.hashCheckingProcState = (struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *)v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.hashCheckingProcState,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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

  if ( (byte_4212978 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Add__, *(_QWORD *)&procState);
    byte_4212978 = 1;
  }
  hashCheckingProcState = this->fields.hashCheckingProcState;
  if ( !hashCheckingProcState )
    sub_B0D97C(0LL);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)hashCheckingProcState,
    procState,
    (const MethodInfo_2C78550 *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Add__);
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
  if ( (byte_421297B & 1) == 0 )
  {
    this = (AiNpcBattleServantData_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, battleSeqManager);
    byte_421297B = 1;
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
    sub_B0D97C(this);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiNpcBattleServantData__ExistAiThinking(
        AiNpcBattleServantData_o *this,
        BattleLogic_o *logic,
        int32_t procState,
        int32_t timingPriority,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleLogicNpcAi_o *logicNpcAi; // x8
  struct NpcAiState_array *npcAiStates; // x26
  AiNpcBattleServantData_o *v11; // x24
  System_Int32_array **CurrentAiState_k__BackingField; // x19
  struct AiState_o **p_CurrentAiState_k__BackingField; // x23
  AiLogic_o *aiLogic; // x25
  unsigned __int64 v17; // x27
  il2cpp_array_size_t max_length; // w8
  System_Int32_array **v19; // x1
  const MethodInfo *v20; // x5
  bool v21; // w20
  __int64 v23; // x0

  if ( !logic
    || (logicNpcAi = logic->fields.logicNpcAi) == 0LL
    || (npcAiStates = this->fields.npcAiStates, v11 = this, !npcAiStates) )
  {
LABEL_13:
    sub_B0D97C(this);
  }
  CurrentAiState_k__BackingField = (System_Int32_array **)this->fields._CurrentAiState_k__BackingField;
  p_CurrentAiState_k__BackingField = &this->fields._CurrentAiState_k__BackingField;
  if ( (int)*(_QWORD *)&npcAiStates->max_length < 1 )
  {
LABEL_10:
    v21 = 0;
  }
  else
  {
    aiLogic = logicNpcAi->fields.aiLogic;
    v17 = 0LL;
    max_length = *(_QWORD *)&npcAiStates->max_length;
    while ( 1 )
    {
      if ( v17 >= max_length )
      {
        v23 = sub_B0D9A8(this);
        sub_B0D948(v23, 0LL);
      }
      v19 = (System_Int32_array **)npcAiStates->m_Items[v17];
      *p_CurrentAiState_k__BackingField = (struct AiState_o *)v19;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v11->fields._CurrentAiState_k__BackingField,
        v19,
        *(System_String_array ***)&procState,
        *(System_String_array ***)&timingPriority,
        (System_Boolean_array **)method,
        v5,
        v6,
        v7);
      if ( !aiLogic )
        goto LABEL_13;
      this = (AiNpcBattleServantData_o *)AiLogic__checkThinking(
                                           aiLogic,
                                           (BattleServantData_o *)v11,
                                           procState,
                                           (BattleLogicBaseAi_o *)logic->fields.logicNpcAi,
                                           timingPriority,
                                           v20);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      max_length = npcAiStates->max_length;
      if ( (__int64)++v17 >= (int)max_length )
        goto LABEL_10;
    }
    v21 = 1;
  }
  *p_CurrentAiState_k__BackingField = (struct AiState_o *)CurrentAiState_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v11->fields._CurrentAiState_k__BackingField,
    CurrentAiState_k__BackingField,
    *(System_String_array ***)&procState,
    *(System_String_array ***)&timingPriority,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  return v21;
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  struct NpcAiState_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_4212976 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_int__NpcAiState___, aiIds);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_NpcAiState___, v5);
    sub_B0D8A4(&Method_System_Func_int__NpcAiState___ctor__, v6);
    sub_B0D8A4(&System_Func_int__NpcAiState__TypeInfo, v7);
    sub_B0D8A4(&Method_AiNpcBattleServantData___c__InitAiStates_b__34_0__, v8);
    sub_B0D8A4(&AiNpcBattleServantData___c_TypeInfo, v9);
    byte_4212976 = 1;
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
      _9__34_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B0D974(
                                                                          System_Func_int__NpcAiState__TypeInfo,
                                                                          aiIds,
                                                                          method);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        _9__34_0,
        v13,
        Method_AiNpcBattleServantData___c__InitAiStates_b__34_0__,
        (const MethodInfo_26145DC *)Method_System_Func_int__NpcAiState___ctor__);
      v14 = AiNpcBattleServantData___c_TypeInfo->static_fields;
      v14->__9__34_0 = (struct System_Func_int__NpcAiState__o *)_9__34_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v14->__9__34_0,
        (System_Int32_array **)_9__34_0,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)aiIds,
                                                                 (System_Func_TSource__TResult__o *)_9__34_0,
                                                                 (const MethodInfo_1B50D58 *)Method_System_Linq_Enumerable_Select_int__NpcAiState___);
    v22 = (struct NpcAiState_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                       v21,
                                       (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_NpcAiState___);
    if ( !this )
      sub_B0D97C(v22);
    this->fields.npcAiStates = v22;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.npcAiStates,
      (System_Int32_array **)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
}


void __fastcall AiNpcBattleServantData__PrevActorNoblePhantasm(
        AiNpcBattleServantData_o *this,
        BattleSequenceManager_o *battleSeqManager,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  if ( !battleSeqManager )
    sub_B0D97C(this);
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

  if ( (byte_4212979 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Remove__, *(_QWORD *)&procState);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__get_Count__, v5);
    byte_4212979 = 1;
  }
  hashCheckingProcState = this->fields.hashCheckingProcState;
  if ( !hashCheckingProcState
    || (hashCheckingProcState = (struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *)System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Remove(
                                                                                                     (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)hashCheckingProcState,
                                                                                                     procState,
                                                                                                     (const MethodInfo_2C77BB4 *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Remove__),
        (v7 = this->fields.hashCheckingProcState) == 0LL) )
  {
    sub_B0D97C(hashCheckingProcState);
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

  AiNpcBattleServantData__InitAiStates(this, aiIds, (const MethodInfo *)deckSvt);
  if ( !data )
    sub_B0D97C(v10);
  BattleServantData__setServantData_20740000(
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  v7 = isEndEnemyTurn;
  if ( (byte_421297A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_NpcAiState___ctor__, isEndEnemyTurn);
    sub_B0D8A4(&System_Action_NpcAiState__TypeInfo, v9);
    sub_B0D8A4(&Method_BasicHelper_ForEach_NpcAiState___, v10);
    sub_B0D8A4(&Method_AiNpcBattleServantData___c__TurnProgress_b__41_0__, v11);
    sub_B0D8A4(&AiNpcBattleServantData___c_TypeInfo, v12);
    byte_421297A = 1;
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
      _9__41_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                        System_Action_NpcAiState__TypeInfo,
                                                                                        isEndEnemyTurn,
                                                                                        fieldIndiv);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__41_0,
        v17,
        Method_AiNpcBattleServantData___c__TurnProgress_b__41_0__,
        (const MethodInfo_246EA3C *)Method_System_Action_NpcAiState___ctor__);
      v18 = AiNpcBattleServantData___c_TypeInfo->static_fields;
      v18->__9__41_0 = (struct System_Action_NpcAiState__o *)_9__41_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v18->__9__41_0,
        (System_Int32_array **)_9__41_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      npcAiStates,
      (System_Action_T__o *)_9__41_0,
      (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_NpcAiState___);
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4212977 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_NpcAiState___, *(_QWORD *)&index);
    byte_4212977 = 1;
  }
  v5 = (struct AiState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                             (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)this->fields.npcAiStates,
                             index,
                             0LL,
                             (const MethodInfo_1709498 *)Method_BasicHelper_IndexValue_NpcAiState___);
  this->fields._CurrentAiState_k__BackingField = v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._CurrentAiState_k__BackingField,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_IEnumerable_TSource__o *npcAiStates; // x21
  BattleServantData_SaveData_o *v14; // x20
  AiNpcBattleServantData___c_c *v15; // x8
  struct AiNpcBattleServantData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__31_0; // x22
  Il2CppObject *v18; // x23
  struct AiNpcBattleServantData___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  BattleServantData_SaveData_o *result; // x0

  if ( (byte_4212974 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_NpcAiState__AiState_SaveData___, data);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_AiState_SaveData___, v5);
    sub_B0D8A4(&Method_System_Func_NpcAiState__AiState_SaveData___ctor__, v6);
    sub_B0D8A4(&System_Func_NpcAiState__AiState_SaveData__TypeInfo, v7);
    sub_B0D8A4(&Method_AiNpcBattleServantData___c__getSaveData_b__31_0__, v8);
    sub_B0D8A4(&AiNpcBattleServantData___c_TypeInfo, v9);
    byte_4212974 = 1;
  }
  SaveData = BattleServantData__getSaveData((BattleServantData_o *)this, data, 0LL);
  npcAiStates = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.npcAiStates;
  v14 = SaveData;
  v15 = AiNpcBattleServantData___c_TypeInfo;
  if ( (BYTE3(AiNpcBattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AiNpcBattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiNpcBattleServantData___c_TypeInfo);
    v15 = AiNpcBattleServantData___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__31_0;
  if ( !_9__31_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = AiNpcBattleServantData___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                 System_Func_NpcAiState__AiState_SaveData__TypeInfo,
                                                                                                 v11,
                                                                                                 v12);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__31_0,
      v18,
      Method_AiNpcBattleServantData___c__getSaveData_b__31_0__,
      (const MethodInfo_261A104 *)Method_System_Func_NpcAiState__AiState_SaveData___ctor__);
    v19 = AiNpcBattleServantData___c_TypeInfo->static_fields;
    v19->__9__31_0 = (struct System_Func_NpcAiState__AiState_SaveData__o *)_9__31_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v19->__9__31_0,
      (System_Int32_array **)_9__31_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               npcAiStates,
                                                               (System_Func_TSource__TResult__o *)_9__31_0,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_NpcAiState__AiState_SaveData___);
  v27 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v26,
                                 (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
  if ( !v14 )
    sub_B0D97C(v27);
  v14->fields.npcAiStates = (struct AiState_SaveData_array *)v27;
  sub_B0D840((BattleServantConfConponent_o *)&v14->fields.npcAiStates, v27, v28, v29, v30, v31, v32, v33);
  result = v14;
  v14->fields.npcActCount = this->fields._ActCount_k__BackingField;
  v14->fields.npcTotalActCount = this->fields._TotalActCount_k__BackingField;
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
  __int64 v9; // x20
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_IEnumerable_T__o *npcAiStates; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v21; // x23
  __int64 v22; // x8
  bool result; // w0

  if ( (byte_4212975 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_NpcAiState___ctor__, save);
    sub_B0D8A4(&System_Action_NpcAiState__TypeInfo, v5);
    sub_B0D8A4(&Method_BasicHelper_ForEach_NpcAiState___, v6);
    sub_B0D8A4(&Method_AiNpcBattleServantData___c__DisplayClass32_0__setSaveData_b__0__, v7);
    sub_B0D8A4(&AiNpcBattleServantData___c__DisplayClass32_0_TypeInfo, v8);
    byte_4212975 = 1;
  }
  v9 = sub_B0D974(AiNpcBattleServantData___c__DisplayClass32_0_TypeInfo, save, method);
  AiNpcBattleServantData___c__DisplayClass32_0___ctor((AiNpcBattleServantData___c__DisplayClass32_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = save;
  v17 = v9 + 16;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)save, v11, v12, v13, v14, v15, v16);
  if ( BattleServantData__setSaveData((BattleServantData_o *)this, *(BattleServantData_SaveData_o **)(v9 + 16), 0LL) )
  {
    *(_DWORD *)(v9 + 24) = 0;
    npcAiStates = (System_Collections_Generic_IEnumerable_T__o *)this->fields.npcAiStates;
    v21 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_NpcAiState__TypeInfo,
                                                                                 v18,
                                                                                 v19);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v21,
      (Il2CppObject *)v9,
      Method_AiNpcBattleServantData___c__DisplayClass32_0__setSaveData_b__0__,
      (const MethodInfo_246EA3C *)Method_System_Action_NpcAiState___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      npcAiStates,
      (System_Action_T__o *)v21,
      (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_NpcAiState___);
    v22 = *(_QWORD *)(v9 + 16);
    if ( v22 )
    {
      this->fields._ActCount_k__BackingField = *(_DWORD *)(v22 + 184);
      if ( *(_QWORD *)v17 )
      {
        result = 1;
        this->fields._TotalActCount_k__BackingField = *(_DWORD *)(*(_QWORD *)v17 + 188LL);
        return result;
      }
    }
LABEL_9:
    sub_B0D97C(v10);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._CurrentAiState_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._CurrentAiState_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213954 & 1) == 0 )
  {
    sub_B0D8A4(&AiNpcBattleServantData___c_TypeInfo, v1);
    byte_4213954 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(AiNpcBattleServantData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)AiNpcBattleServantData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4213955 & 1) == 0 )
  {
    sub_B0D8A4(&NpcAiState_TypeInfo, *(_QWORD *)&id);
    byte_4213955 = 1;
  }
  v4 = (NpcAiState_o *)sub_B0D974(NpcAiState_TypeInfo, *(_QWORD *)&id, method);
  NpcAiState___ctor(v4, id, 0LL);
  return v4;
}


void __fastcall AiNpcBattleServantData___c___TurnProgress_b__41_0(
        AiNpcBattleServantData___c_o *this,
        NpcAiState_o *state,
        const MethodInfo *method)
{
  if ( !state )
    sub_B0D97C(this);
  AiState__fieldTurnProgressing((AiState_o *)state, 0LL);
}


AiState_SaveData_o *__fastcall AiNpcBattleServantData___c___getSaveData_b__31_0(
        AiNpcBattleServantData___c_o *this,
        NpcAiState_o *state,
        const MethodInfo *method)
{
  if ( !state )
    sub_B0D97C(this);
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
  if ( (byte_4213956 & 1) == 0 )
  {
    this = (AiNpcBattleServantData___c__DisplayClass32_0_o *)sub_B0D8A4(
                                                               &Method_BasicHelper_IndexValue_AiState_SaveData___,
                                                               npcAiState);
    byte_4213956 = 1;
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
                                                                   (const MethodInfo_1709498 *)Method_BasicHelper_IndexValue_AiState_SaveData___),
        !npcAiState) )
  {
    sub_B0D97C(this);
  }
  AiState__setSaveData((AiState_o *)npcAiState, (AiState_SaveData_o *)this, 0LL);
}