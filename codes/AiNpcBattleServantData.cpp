void __fastcall AiNpcBattleServantData___ctor(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct NpcAiState_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42E686A & 1) == 0 )
  {
    sub_B5D5C4(&BattleServantData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_HashSet_AiLogic_PROC_STATE__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NpcAiState___TypeInfo, v11, v12, v13);
    byte_42E686A = 1;
  }
  v14 = (struct NpcAiState_array *)sub_B5D5DC(NpcAiState___TypeInfo, 0LL);
  this->fields.npcAiStates = v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.npcAiStates,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)sub_B5D694(System_Collections_Generic_HashSet_AiLogic_PROC_STATE__TypeInfo);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType____ctor(
    v21,
    (const MethodInfo_25017F0 *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE___ctor__);
  this->fields.hashCheckingProcState = (struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *)v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.hashCheckingProcState,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
  __int64 v3; // x3
  struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *hashCheckingProcState; // x0

  if ( (byte_42E6866 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Add__, procState, (_DWORD)method, v3);
    byte_42E6866 = 1;
  }
  hashCheckingProcState = this->fields.hashCheckingProcState;
  if ( !hashCheckingProcState )
    sub_B5D69C(0LL, *(_QWORD *)&procState);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)hashCheckingProcState,
    procState,
    (const MethodInfo_25029CC *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Add__);
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
  if ( (byte_42E6869 & 1) == 0 )
  {
    this = (AiNpcBattleServantData_o *)sub_B5D5C4(
                                         &UnityEngine_Object_TypeInfo,
                                         (_DWORD)battleSeqManager,
                                         (_DWORD)actor,
                                         perf);
    byte_42E6869 = 1;
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
    sub_B5D69C(this, battleSeqManager);
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
    sub_B5D69C(this, logic);
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
        v23 = sub_B5D6C8(this);
        sub_B5D668(v23, 0LL);
      }
      v19 = (System_Int32_array **)npcAiStates->m_Items[v17];
      *p_CurrentAiState_k__BackingField = (struct AiState_o *)v19;
      sub_B5D560(
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
  sub_B5D560(
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  AiNpcBattleServantData___c_c *v21; // x0
  struct AiNpcBattleServantData___c_StaticFields *static_fields; // x8
  System_Func_int__BattleActionData_SideEffectData__o *_9__34_0; // x21
  Il2CppObject *v24; // x22
  struct AiNpcBattleServantData___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  struct NpcAiState_array *v33; // x0
  __int64 v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_42E6864 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_int__NpcAiState___, (_DWORD)aiIds, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_NpcAiState___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_int__NpcAiState___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_int__NpcAiState__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_AiNpcBattleServantData___c__InitAiStates_b__34_0__, v15, v16, v17);
    sub_B5D5C4(&AiNpcBattleServantData___c_TypeInfo, v18, v19, v20);
    byte_42E6864 = 1;
  }
  if ( aiIds )
  {
    v21 = AiNpcBattleServantData___c_TypeInfo;
    if ( (BYTE3(AiNpcBattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AiNpcBattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AiNpcBattleServantData___c_TypeInfo);
      v21 = AiNpcBattleServantData___c_TypeInfo;
    }
    static_fields = v21->static_fields;
    _9__34_0 = (System_Func_int__BattleActionData_SideEffectData__o *)static_fields->__9__34_0;
    if ( !_9__34_0 )
    {
      if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        static_fields = AiNpcBattleServantData___c_TypeInfo->static_fields;
      }
      v24 = (Il2CppObject *)static_fields->__9;
      _9__34_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__NpcAiState__TypeInfo);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        _9__34_0,
        v24,
        Method_AiNpcBattleServantData___c__InitAiStates_b__34_0__,
        (const MethodInfo_2C29938 *)Method_System_Func_int__NpcAiState___ctor__);
      v25 = AiNpcBattleServantData___c_TypeInfo->static_fields;
      v25->__9__34_0 = (struct System_Func_int__NpcAiState__o *)_9__34_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v25->__9__34_0,
        (System_Int32_array **)_9__34_0,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)aiIds,
                                                                 (System_Func_TSource__TResult__o *)_9__34_0,
                                                                 (const MethodInfo_1CB1D40 *)Method_System_Linq_Enumerable_Select_int__NpcAiState___);
    v33 = (struct NpcAiState_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                       v32,
                                       (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_NpcAiState___);
    if ( !this )
      sub_B5D69C(v33, v34);
    this->fields.npcAiStates = v33;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.npcAiStates,
      (System_Int32_array **)v33,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
}


void __fastcall AiNpcBattleServantData__PrevActorNoblePhantasm(
        AiNpcBattleServantData_o *this,
        BattleSequenceManager_o *battleSeqManager,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  if ( !battleSeqManager )
    sub_B5D69C(this, 0LL);
  BattleSequenceManager__PrevPlayTargetActorProc(battleSeqManager, actor, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiNpcBattleServantData__RemoveCheckAiProcState(
        AiNpcBattleServantData_o *this,
        int32_t procState,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *hashCheckingProcState; // x0
  struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *v10; // x8

  if ( (byte_42E6867 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Remove__, procState, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__get_Count__, v6, v7, v8);
    byte_42E6867 = 1;
  }
  hashCheckingProcState = this->fields.hashCheckingProcState;
  if ( !hashCheckingProcState
    || (hashCheckingProcState = (struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *)System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Remove(
                                                                                                     (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)hashCheckingProcState,
                                                                                                     procState,
                                                                                                     (const MethodInfo_2502030 *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Remove__),
        (v10 = this->fields.hashCheckingProcState) == 0LL) )
  {
    sub_B5D69C(hashCheckingProcState, *(_QWORD *)&procState);
  }
  return v10->fields._count < 1;
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
    sub_B5D69C(v10, v11);
  BattleServantData__setServantData_21142980(
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


void __fastcall AiNpcBattleServantData__TurnProgress(
        AiNpcBattleServantData_o *this,
        bool isEndEnemyTurn,
        System_Int32_array *fieldIndiv,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  _BOOL4 v7; // w21
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_Generic_IEnumerable_T__o *npcAiStates; // x23
  struct AiNpcBattleServantData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__41_0; // x24
  Il2CppObject *v24; // x25
  struct AiNpcBattleServantData___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  AiNpcBattleServantData___c_c *v32; // x0

  v7 = isEndEnemyTurn;
  if ( (byte_42E6868 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_NpcAiState___ctor__, isEndEnemyTurn, (_DWORD)fieldIndiv, logic);
    sub_B5D5C4(&System_Action_NpcAiState__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BasicHelper_ForEach_NpcAiState___, v12, v13, v14);
    sub_B5D5C4(&Method_AiNpcBattleServantData___c__TurnProgress_b__41_0__, v15, v16, v17);
    sub_B5D5C4(&AiNpcBattleServantData___c_TypeInfo, v18, v19, v20);
    byte_42E6868 = 1;
  }
  if ( ((this->fields.isEnemy ^ v7) & 1) == 0 )
  {
    npcAiStates = (System_Collections_Generic_IEnumerable_T__o *)this->fields.npcAiStates;
    v32 = AiNpcBattleServantData___c_TypeInfo;
    if ( (BYTE3(AiNpcBattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AiNpcBattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AiNpcBattleServantData___c_TypeInfo);
      v32 = AiNpcBattleServantData___c_TypeInfo;
    }
    static_fields = v32->static_fields;
    _9__41_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__41_0;
    if ( !_9__41_0 )
    {
      if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        static_fields = AiNpcBattleServantData___c_TypeInfo->static_fields;
      }
      v24 = (Il2CppObject *)static_fields->__9;
      _9__41_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_NpcAiState__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__41_0,
        v24,
        Method_AiNpcBattleServantData___c__TurnProgress_b__41_0__,
        (const MethodInfo_258B320 *)Method_System_Action_NpcAiState___ctor__);
      v25 = AiNpcBattleServantData___c_TypeInfo->static_fields;
      v25->__9__41_0 = (struct System_Action_NpcAiState__o *)_9__41_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v25->__9__41_0,
        (System_Int32_array **)_9__41_0,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      npcAiStates,
      (System_Action_T__o *)_9__41_0,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_NpcAiState___);
  }
  BattleServantData__turnBuffProgressing((BattleServantData_o *)this, v7, fieldIndiv, logic, 0LL, 0LL);
}


bool __fastcall AiNpcBattleServantData__UpdateAiStateTargetIndex(
        AiNpcBattleServantData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct AiState_o *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42E6865 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_NpcAiState___, index, (_DWORD)method, v3);
    byte_42E6865 = 1;
  }
  v6 = (struct AiState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                             (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)this->fields.npcAiStates,
                             index,
                             0LL,
                             (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_NpcAiState___);
  this->fields._CurrentAiState_k__BackingField = v6;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._CurrentAiState_k__BackingField,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  BattleServantData_SaveData_o *SaveData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *npcAiStates; // x21
  BattleServantData_SaveData_o *v23; // x20
  AiNpcBattleServantData___c_c *v24; // x8
  struct AiNpcBattleServantData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__31_0; // x22
  Il2CppObject *v27; // x23
  struct AiNpcBattleServantData___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Int32_array **v36; // x0
  __int64 v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  BattleServantData_SaveData_o *result; // x0

  if ( (byte_42E6862 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_NpcAiState__AiState_SaveData___, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_AiState_SaveData___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_NpcAiState__AiState_SaveData___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_NpcAiState__AiState_SaveData__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_AiNpcBattleServantData___c__getSaveData_b__31_0__, v15, v16, v17);
    sub_B5D5C4(&AiNpcBattleServantData___c_TypeInfo, v18, v19, v20);
    byte_42E6862 = 1;
  }
  SaveData = BattleServantData__getSaveData((BattleServantData_o *)this, data, 0LL);
  npcAiStates = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.npcAiStates;
  v23 = SaveData;
  v24 = AiNpcBattleServantData___c_TypeInfo;
  if ( (BYTE3(AiNpcBattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AiNpcBattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiNpcBattleServantData___c_TypeInfo);
    v24 = AiNpcBattleServantData___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__31_0;
  if ( !_9__31_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = AiNpcBattleServantData___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_NpcAiState__AiState_SaveData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__31_0,
      v27,
      Method_AiNpcBattleServantData___c__getSaveData_b__31_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_NpcAiState__AiState_SaveData___ctor__);
    v28 = AiNpcBattleServantData___c_TypeInfo->static_fields;
    v28->__9__31_0 = (struct System_Func_NpcAiState__AiState_SaveData__o *)_9__31_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v28->__9__31_0,
      (System_Int32_array **)_9__31_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               npcAiStates,
                                                               (System_Func_TSource__TResult__o *)_9__31_0,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_NpcAiState__AiState_SaveData___);
  v36 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v35,
                                 (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
  if ( !v23 )
    sub_B5D69C(v36, v37);
  v23->fields.npcAiStates = (struct AiState_SaveData_array *)v36;
  sub_B5D560((BattleServantConfConponent_o *)&v23->fields.npcAiStates, v36, v38, v39, v40, v41, v42, v43);
  result = v23;
  v23->fields.npcActCount = this->fields._ActCount_k__BackingField;
  v23->fields.npcTotalActCount = this->fields._TotalActCount_k__BackingField;
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
  __int64 v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x22
  System_Collections_Generic_IEnumerable_T__o *npcAiStates; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v29; // x23
  __int64 v30; // x8
  bool result; // w0

  if ( (byte_42E6863 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_NpcAiState___ctor__, (_DWORD)save, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_NpcAiState__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BasicHelper_ForEach_NpcAiState___, v9, v10, v11);
    sub_B5D5C4(&Method_AiNpcBattleServantData___c__DisplayClass32_0__setSaveData_b__0__, v12, v13, v14);
    sub_B5D5C4(&AiNpcBattleServantData___c__DisplayClass32_0_TypeInfo, v15, v16, v17);
    byte_42E6863 = 1;
  }
  v18 = sub_B5D694(AiNpcBattleServantData___c__DisplayClass32_0_TypeInfo);
  AiNpcBattleServantData___c__DisplayClass32_0___ctor((AiNpcBattleServantData___c__DisplayClass32_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_9;
  *(_QWORD *)(v18 + 16) = save;
  v27 = v18 + 16;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)save, v21, v22, v23, v24, v25, v26);
  if ( BattleServantData__setSaveData((BattleServantData_o *)this, *(BattleServantData_SaveData_o **)(v18 + 16), 0LL) )
  {
    *(_DWORD *)(v18 + 24) = 0;
    npcAiStates = (System_Collections_Generic_IEnumerable_T__o *)this->fields.npcAiStates;
    v29 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_NpcAiState__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v29,
      (Il2CppObject *)v18,
      Method_AiNpcBattleServantData___c__DisplayClass32_0__setSaveData_b__0__,
      (const MethodInfo_258B320 *)Method_System_Action_NpcAiState___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      npcAiStates,
      (System_Action_T__o *)v29,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_NpcAiState___);
    v30 = *(_QWORD *)(v18 + 16);
    if ( v30 )
    {
      this->fields._ActCount_k__BackingField = *(_DWORD *)(v30 + 184);
      if ( *(_QWORD *)v27 )
      {
        result = 1;
        this->fields._TotalActCount_k__BackingField = *(_DWORD *)(*(_QWORD *)v27 + 188LL);
        return result;
      }
    }
LABEL_9:
    sub_B5D69C(v19, v20);
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
  sub_B5D560(
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E750A & 1) == 0 )
  {
    sub_B5D5C4(&AiNpcBattleServantData___c_TypeInfo, v1, v2, v3);
    byte_42E750A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(AiNpcBattleServantData___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)AiNpcBattleServantData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall AiNpcBattleServantData___c___ctor(AiNpcBattleServantData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


NpcAiState_o *__fastcall AiNpcBattleServantData___c___InitAiStates_b__34_0(
        AiNpcBattleServantData___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  NpcAiState_o *v5; // x20

  if ( (byte_42E750B & 1) == 0 )
  {
    sub_B5D5C4(&NpcAiState_TypeInfo, id, (_DWORD)method, v3);
    byte_42E750B = 1;
  }
  v5 = (NpcAiState_o *)sub_B5D694(NpcAiState_TypeInfo);
  NpcAiState___ctor(v5, id, 0LL);
  return v5;
}


void __fastcall AiNpcBattleServantData___c___TurnProgress_b__41_0(
        AiNpcBattleServantData___c_o *this,
        NpcAiState_o *state,
        const MethodInfo *method)
{
  if ( !state )
    sub_B5D69C(this, 0LL);
  AiState__fieldTurnProgressing((AiState_o *)state, 0LL);
}


AiState_SaveData_o *__fastcall AiNpcBattleServantData___c___getSaveData_b__31_0(
        AiNpcBattleServantData___c_o *this,
        NpcAiState_o *state,
        const MethodInfo *method)
{
  if ( !state )
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  AiNpcBattleServantData___c__DisplayClass32_0_o *v5; // x20
  struct BattleServantData_SaveData_o *save; // x8
  int32_t index; // w1
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *npcAiStates; // x0

  v5 = this;
  if ( (byte_42E750C & 1) == 0 )
  {
    this = (AiNpcBattleServantData___c__DisplayClass32_0_o *)sub_B5D5C4(
                                                               &Method_BasicHelper_IndexValue_AiState_SaveData___,
                                                               (_DWORD)npcAiState,
                                                               (_DWORD)method,
                                                               v3);
    byte_42E750C = 1;
  }
  save = v5->fields.save;
  if ( !save
    || (index = v5->fields.index,
        npcAiStates = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)save->fields.npcAiStates,
        v5->fields.index = index + 1,
        this = (AiNpcBattleServantData___c__DisplayClass32_0_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                                                   npcAiStates,
                                                                   index,
                                                                   0LL,
                                                                   (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_AiState_SaveData___),
        !npcAiState) )
  {
    sub_B5D69C(this, npcAiState);
  }
  AiState__setSaveData((AiState_o *)npcAiState, (AiState_SaveData_o *)this, 0LL);
}