void __fastcall AiNpcBattleServantData___ctor(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct NpcAiState_array *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40F7EED & 1) == 0 )
  {
    sub_B16FFC(&BattleServantData_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE___ctor__, v4);
    sub_B16FFC(&System_Collections_Generic_HashSet_AiLogic_PROC_STATE__TypeInfo, v5);
    sub_B16FFC(&NpcAiState___TypeInfo, v6);
    byte_40F7EED = 1;
  }
  v7 = (struct NpcAiState_array *)sub_B17014(NpcAiState___TypeInfo, 0LL, v2);
  this->fields.npcAiStates = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.npcAiStates,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v18 = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)sub_B170CC(
                                                                                                System_Collections_Generic_HashSet_AiLogic_PROC_STATE__TypeInfo,
                                                                                                v14,
                                                                                                v15,
                                                                                                v16,
                                                                                                v17);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType____ctor(
    v18,
    (const MethodInfo_21DA2F8 *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE___ctor__);
  this->fields.hashCheckingProcState = (struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *)v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.hashCheckingProcState,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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

  if ( (byte_40F7EE9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Add__, *(_QWORD *)&procState);
    byte_40F7EE9 = 1;
  }
  hashCheckingProcState = this->fields.hashCheckingProcState;
  if ( !hashCheckingProcState )
    sub_B170D4();
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)hashCheckingProcState,
    procState,
    (const MethodInfo_21DB4D4 *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AiNpcBattleServantData__AfterActorNoblePhantasm(
        AiNpcBattleServantData_o *this,
        BattleSequenceManager_o *battleSeqManager,
        BattleActorControl_o *actor,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  FieldMotionManager_o *fmManager_k__BackingField; // x0
  UnityEngine_Object_o *TargetTransform; // x21
  FieldMotionManager_o *v12; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v14; // x19
  int v15; // s0

  if ( (byte_40F7EEC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, battleSeqManager);
    byte_40F7EEC = 1;
  }
  if ( !actor )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)actor, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !battleSeqManager )
    goto LABEL_22;
  BattleSequenceManager__AfterPlayTargetActorProc(battleSeqManager, actor, 0LL);
  if ( !perf )
    goto LABEL_22;
  fmManager_k__BackingField = perf->fields._fmManager_k__BackingField;
  if ( !fmManager_k__BackingField )
    goto LABEL_22;
  TargetTransform = (UnityEngine_Object_o *)FieldMotionManager__GetTargetTransform(
                                              fmManager_k__BackingField,
                                              6,
                                              this->fields.index,
                                              0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(TargetTransform, 0LL, 0LL) )
  {
    v12 = perf->fields._fmManager_k__BackingField;
    if ( !v12 )
      goto LABEL_22;
    TargetTransform = (UnityEngine_Object_o *)FieldMotionManager__GetTargetTransform(v12, 6, 0, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(TargetTransform, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)actor, 0LL);
    if ( TargetTransform )
    {
      v14 = transform;
      *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_position(
                                         (UnityEngine_Transform_o *)TargetTransform,
                                         0LL);
      if ( v14 )
      {
        UnityEngine_Transform__set_position(v14, *(UnityEngine_Vector3_o *)&v15, 0LL);
        return;
      }
    }
LABEL_22:
    sub_B170D4();
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

  if ( !logic
    || (logicNpcAi = logic->fields.logicNpcAi) == 0LL
    || (npcAiStates = this->fields.npcAiStates, v11 = this, !npcAiStates) )
  {
LABEL_13:
    sub_B170D4();
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
        sub_B17100(this, logic, *(_QWORD *)&procState);
        sub_B170A0();
      }
      v19 = (System_Int32_array **)npcAiStates->m_Items[v17];
      *p_CurrentAiState_k__BackingField = (struct AiState_o *)v19;
      sub_B16F98(
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
  sub_B16F98(
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  AiNpcBattleServantData___c_c *v12; // x0
  struct AiNpcBattleServantData___c_StaticFields *static_fields; // x8
  System_Func_int__BattleActionData_SideEffectData__o *_9__34_0; // x21
  Il2CppObject *v15; // x22
  struct AiNpcBattleServantData___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  struct NpcAiState_array *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_40F7EE7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_int__NpcAiState___, aiIds);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_NpcAiState___, v7);
    sub_B16FFC(&Method_System_Func_int__NpcAiState___ctor__, v8);
    sub_B16FFC(&System_Func_int__NpcAiState__TypeInfo, v9);
    sub_B16FFC(&Method_AiNpcBattleServantData___c__InitAiStates_b__34_0__, v10);
    sub_B16FFC(&AiNpcBattleServantData___c_TypeInfo, v11);
    byte_40F7EE7 = 1;
  }
  if ( aiIds )
  {
    v12 = AiNpcBattleServantData___c_TypeInfo;
    if ( (BYTE3(AiNpcBattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AiNpcBattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AiNpcBattleServantData___c_TypeInfo);
      v12 = AiNpcBattleServantData___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__34_0 = (System_Func_int__BattleActionData_SideEffectData__o *)static_fields->__9__34_0;
    if ( !_9__34_0 )
    {
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        static_fields = AiNpcBattleServantData___c_TypeInfo->static_fields;
      }
      v15 = (Il2CppObject *)static_fields->__9;
      _9__34_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B170CC(
                                                                          System_Func_int__NpcAiState__TypeInfo,
                                                                          aiIds,
                                                                          method,
                                                                          v3,
                                                                          v4);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        _9__34_0,
        v15,
        Method_AiNpcBattleServantData___c__InitAiStates_b__34_0__,
        (const MethodInfo_2B66764 *)Method_System_Func_int__NpcAiState___ctor__);
      v16 = AiNpcBattleServantData___c_TypeInfo->static_fields;
      v16->__9__34_0 = (struct System_Func_int__NpcAiState__o *)_9__34_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v16->__9__34_0,
        (System_Int32_array **)_9__34_0,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)aiIds,
                                                                 (System_Func_TSource__TResult__o *)_9__34_0,
                                                                 (const MethodInfo_19BF868 *)Method_System_Linq_Enumerable_Select_int__NpcAiState___);
    v24 = (struct NpcAiState_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                       v23,
                                       (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_NpcAiState___);
    if ( !this )
      sub_B170D4();
    this->fields.npcAiStates = v24;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.npcAiStates,
      (System_Int32_array **)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
}


void __fastcall AiNpcBattleServantData__PrevActorNoblePhantasm(
        AiNpcBattleServantData_o *this,
        BattleSequenceManager_o *battleSeqManager,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  if ( !battleSeqManager )
    sub_B170D4();
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

  if ( (byte_40F7EEA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Remove__, *(_QWORD *)&procState);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__get_Count__, v5);
    byte_40F7EEA = 1;
  }
  hashCheckingProcState = this->fields.hashCheckingProcState;
  if ( !hashCheckingProcState
    || (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Remove(
          (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)hashCheckingProcState,
          procState,
          (const MethodInfo_21DAB38 *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Remove__),
        (v7 = this->fields.hashCheckingProcState) == 0LL) )
  {
    sub_B170D4();
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
  AiNpcBattleServantData__InitAiStates(this, aiIds, (const MethodInfo *)deckSvt);
  if ( !data )
    sub_B170D4();
  BattleServantData__setServantData_22718064(
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
  if ( (byte_40F7EEB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_NpcAiState___ctor__, isEndEnemyTurn);
    sub_B16FFC(&System_Action_NpcAiState__TypeInfo, v9);
    sub_B16FFC(&Method_BasicHelper_ForEach_NpcAiState___, v10);
    sub_B16FFC(&Method_AiNpcBattleServantData___c__TurnProgress_b__41_0__, v11);
    sub_B16FFC(&AiNpcBattleServantData___c_TypeInfo, v12);
    byte_40F7EEB = 1;
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
      _9__41_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                        System_Action_NpcAiState__TypeInfo,
                                                                                        isEndEnemyTurn,
                                                                                        fieldIndiv,
                                                                                        logic,
                                                                                        method);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__41_0,
        v17,
        Method_AiNpcBattleServantData___c__TurnProgress_b__41_0__,
        (const MethodInfo_24B7310 *)Method_System_Action_NpcAiState___ctor__);
      v18 = AiNpcBattleServantData___c_TypeInfo->static_fields;
      v18->__9__41_0 = (struct System_Action_NpcAiState__o *)_9__41_0;
      sub_B16F98(
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
      (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_NpcAiState___);
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

  if ( (byte_40F7EE8 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_NpcAiState___, *(_QWORD *)&index);
    byte_40F7EE8 = 1;
  }
  v5 = (struct AiState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                             (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)this->fields.npcAiStates,
                             index,
                             0LL,
                             (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_NpcAiState___);
  this->fields._CurrentAiState_k__BackingField = v5;
  sub_B16F98(
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
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleServantData_SaveData_o *SaveData; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
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

  if ( (byte_40F7EE5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_NpcAiState__AiState_SaveData___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_AiState_SaveData___, v3);
    sub_B16FFC(&Method_System_Func_NpcAiState__AiState_SaveData___ctor__, v4);
    sub_B16FFC(&System_Func_NpcAiState__AiState_SaveData__TypeInfo, v5);
    sub_B16FFC(&Method_AiNpcBattleServantData___c__getSaveData_b__31_0__, v6);
    sub_B16FFC(&AiNpcBattleServantData___c_TypeInfo, v7);
    byte_40F7EE5 = 1;
  }
  SaveData = BattleServantData__getSaveData((BattleServantData_o *)this, 0LL);
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
    _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                 System_Func_NpcAiState__AiState_SaveData__TypeInfo,
                                                                                                 v9,
                                                                                                 v10,
                                                                                                 v11,
                                                                                                 v12);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__31_0,
      v18,
      Method_AiNpcBattleServantData___c__getSaveData_b__31_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_NpcAiState__AiState_SaveData___ctor__);
    v19 = AiNpcBattleServantData___c_TypeInfo->static_fields;
    v19->__9__31_0 = (struct System_Func_NpcAiState__AiState_SaveData__o *)_9__31_0;
    sub_B16F98(
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
                                                               (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_NpcAiState__AiState_SaveData___);
  v27 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v26,
                                 (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
  if ( !v14 )
    sub_B170D4();
  v14->fields.npcAiStates = (struct AiState_SaveData_array *)v27;
  sub_B16F98((BattleServantConfConponent_o *)&v14->fields.npcAiStates, v27, v28, v29, v30, v31, v32, v33);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_IEnumerable_T__o *npcAiStates; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v24; // x23
  __int64 v25; // x8
  bool result; // w0

  if ( (byte_40F7EE6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_NpcAiState___ctor__, save);
    sub_B16FFC(&System_Action_NpcAiState__TypeInfo, v7);
    sub_B16FFC(&Method_BasicHelper_ForEach_NpcAiState___, v8);
    sub_B16FFC(&Method_AiNpcBattleServantData___c__DisplayClass32_0__setSaveData_b__0__, v9);
    sub_B16FFC(&AiNpcBattleServantData___c__DisplayClass32_0_TypeInfo, v10);
    byte_40F7EE6 = 1;
  }
  v11 = sub_B170CC(AiNpcBattleServantData___c__DisplayClass32_0_TypeInfo, save, method, v3, v4);
  AiNpcBattleServantData___c__DisplayClass32_0___ctor((AiNpcBattleServantData___c__DisplayClass32_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_9;
  *(_QWORD *)(v11 + 16) = save;
  v18 = v11 + 16;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)save, v12, v13, v14, v15, v16, v17);
  if ( BattleServantData__setSaveData((BattleServantData_o *)this, *(BattleServantData_SaveData_o **)(v11 + 16), 0LL) )
  {
    *(_DWORD *)(v11 + 24) = 0;
    npcAiStates = (System_Collections_Generic_IEnumerable_T__o *)this->fields.npcAiStates;
    v24 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_NpcAiState__TypeInfo,
                                                                                 v19,
                                                                                 v20,
                                                                                 v21,
                                                                                 v22);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v24,
      (Il2CppObject *)v11,
      Method_AiNpcBattleServantData___c__DisplayClass32_0__setSaveData_b__0__,
      (const MethodInfo_24B7310 *)Method_System_Action_NpcAiState___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      npcAiStates,
      (System_Action_T__o *)v24,
      (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_NpcAiState___);
    v25 = *(_QWORD *)(v11 + 16);
    if ( v25 )
    {
      this->fields._ActCount_k__BackingField = *(_DWORD *)(v25 + 184);
      if ( *(_QWORD *)v18 )
      {
        result = 1;
        this->fields._TotalActCount_k__BackingField = *(_DWORD *)(*(_QWORD *)v18 + 188LL);
        return result;
      }
    }
LABEL_9:
    sub_B170D4();
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
  sub_B16F98(
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F9114 & 1) == 0 )
  {
    sub_B16FFC(&AiNpcBattleServantData___c_TypeInfo, v1);
    byte_40F9114 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(AiNpcBattleServantData___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)AiNpcBattleServantData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  __int64 v3; // x3
  __int64 v4; // x4
  NpcAiState_o *v6; // x20

  if ( (byte_40F9115 & 1) == 0 )
  {
    sub_B16FFC(&NpcAiState_TypeInfo, *(_QWORD *)&id);
    byte_40F9115 = 1;
  }
  v6 = (NpcAiState_o *)sub_B170CC(NpcAiState_TypeInfo, *(_QWORD *)&id, method, v3, v4);
  NpcAiState___ctor(v6, id, 0LL);
  return v6;
}


void __fastcall AiNpcBattleServantData___c___TurnProgress_b__41_0(
        AiNpcBattleServantData___c_o *this,
        NpcAiState_o *state,
        const MethodInfo *method)
{
  if ( !state )
    sub_B170D4();
  AiState__fieldTurnProgressing((AiState_o *)state, 0LL);
}


AiState_SaveData_o *__fastcall AiNpcBattleServantData___c___getSaveData_b__31_0(
        AiNpcBattleServantData___c_o *this,
        NpcAiState_o *state,
        const MethodInfo *method)
{
  if ( !state )
    sub_B170D4();
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
  struct BattleServantData_SaveData_o *save; // x8
  int32_t index; // w1
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *npcAiStates; // x0
  AiState_SaveData_o *v8; // x0

  if ( (byte_40F9116 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_AiState_SaveData___, npcAiState);
    byte_40F9116 = 1;
  }
  save = this->fields.save;
  if ( !save
    || (index = this->fields.index,
        npcAiStates = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)save->fields.npcAiStates,
        this->fields.index = index + 1,
        v8 = (AiState_SaveData_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                     npcAiStates,
                                     index,
                                     0LL,
                                     (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_AiState_SaveData___),
        !npcAiState) )
  {
    sub_B170D4();
  }
  AiState__setSaveData((AiState_o *)npcAiState, v8, 0LL);
}