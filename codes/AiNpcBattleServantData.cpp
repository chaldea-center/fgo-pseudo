void __fastcall AiNpcBattleServantData___ctor(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  struct NpcAiState_array *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  System_Collections_Generic_HashSet_T__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BDEE70 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE___ctor__);
    sub_1C21E38(&System_Collections_Generic_HashSet_AiLogic_PROC_STATE__TypeInfo);
    sub_1C21E38(&NpcAiState___TypeInfo);
    byte_4BDEE70 = 1;
  }
  v3 = (struct NpcAiState_array *)sub_1C21EE0(NpcAiState___TypeInfo, 0LL);
  this->fields.npcAiStates = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.npcAiStates, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_HashSet_T__o *)sub_1C22084(System_Collections_Generic_HashSet_AiLogic_PROC_STATE__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v10,
    (const MethodInfo_3504904 *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE___ctor__);
  this->fields.hashCheckingProcState = (struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *)v10;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.hashCheckingProcState,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  System_Collections_Generic_HashSet_T__o *hashCheckingProcState; // x0

  if ( (byte_4BDEE6C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Add__);
    byte_4BDEE6C = 1;
  }
  hashCheckingProcState = (System_Collections_Generic_HashSet_T__o *)this->fields.hashCheckingProcState;
  if ( !hashCheckingProcState )
    sub_1C22094(0LL, *(_QWORD *)&procState);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    hashCheckingProcState,
    procState,
    (const MethodInfo_3505B08 *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Add__);
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
  AiNpcBattleServantData_o *v10; // x19
  int v11; // s0

  v8 = this;
  if ( (byte_4BDEE6F & 1) == 0 )
  {
    this = (AiNpcBattleServantData_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDEE6F = 1;
  }
  if ( !actor )
    goto LABEL_20;
  this = (AiNpcBattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)actor, 0LL);
  if ( !this )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !battleSeqManager )
    goto LABEL_20;
  BattleSequenceManager__AfterPlayTargetActorProc(battleSeqManager, actor, 0LL);
  if ( !perf )
    goto LABEL_20;
  this = (AiNpcBattleServantData_o *)perf->fields._fmManager_k__BackingField;
  if ( !this )
    goto LABEL_20;
  TargetTransform = (UnityEngine_Object_o *)FieldMotionManager__GetTargetTransform(
                                              (FieldMotionManager_o *)this,
                                              6,
                                              v8->fields.index,
                                              0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(TargetTransform, 0LL, 0LL) )
  {
    this = (AiNpcBattleServantData_o *)perf->fields._fmManager_k__BackingField;
    if ( !this )
      goto LABEL_20;
    TargetTransform = (UnityEngine_Object_o *)FieldMotionManager__GetTargetTransform(
                                                (FieldMotionManager_o *)this,
                                                6,
                                                0,
                                                0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(TargetTransform, 0LL, 0LL) )
  {
    this = (AiNpcBattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)actor, 0LL);
    if ( TargetTransform )
    {
      v10 = this;
      *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position(
                                         (UnityEngine_Transform_o *)TargetTransform,
                                         0LL);
      if ( v10 )
      {
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)v10, *(UnityEngine_Vector3_o *)&v11, 0LL);
        return;
      }
    }
LABEL_20:
    sub_1C22094(this, battleSeqManager);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattleLogicNpcAi_o *logicNpcAi; // x8
  struct NpcAiState_array *npcAiStates; // x26
  AiNpcBattleServantData_o *v11; // x22
  __int64 v12; // x9
  struct AiState_o *CurrentAiState_k__BackingField; // x23
  struct AiState_o **p_CurrentAiState_k__BackingField; // x24
  bool v15; // w27
  AiLogic_o *aiLogic; // x25
  unsigned __int64 v19; // x28
  signed int max_length; // w8
  int64_t v21; // x1

  if ( !logic )
    goto LABEL_11;
  logicNpcAi = logic->fields.logicNpcAi;
  if ( !logicNpcAi )
    goto LABEL_11;
  npcAiStates = this->fields.npcAiStates;
  v11 = this;
  if ( !npcAiStates )
    goto LABEL_11;
  v12 = *(_QWORD *)&npcAiStates->max_length;
  CurrentAiState_k__BackingField = this->fields._CurrentAiState_k__BackingField;
  p_CurrentAiState_k__BackingField = &this->fields._CurrentAiState_k__BackingField;
  v15 = (int)v12 > 0;
  if ( (int)v12 >= 1 )
  {
    aiLogic = logicNpcAi->fields.aiLogic;
    v19 = 0LL;
    max_length = *(_QWORD *)&npcAiStates->max_length;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)max_length )
        sub_1C2209C(this, logic);
      v21 = (int64_t)npcAiStates->m_Items[v19];
      *p_CurrentAiState_k__BackingField = (struct AiState_o *)v21;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v11->fields._CurrentAiState_k__BackingField,
        v21,
        *(int64_t *)&procState,
        timingPriority,
        (System_String_o *)method,
        v5,
        v6,
        v7);
      if ( !aiLogic )
        break;
      this = (AiNpcBattleServantData_o *)AiLogic__checkThinking(
                                           aiLogic,
                                           (BattleServantData_o *)v11,
                                           procState,
                                           (BattleLogicBaseAi_o *)logic->fields.logicNpcAi,
                                           timingPriority,
                                           0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        max_length = npcAiStates->max_length;
        v15 = (__int64)++v19 < max_length;
        if ( (__int64)v19 < max_length )
          continue;
      }
      goto LABEL_10;
    }
LABEL_11:
    sub_1C22094(this, logic);
  }
LABEL_10:
  *p_CurrentAiState_k__BackingField = CurrentAiState_k__BackingField;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v11->fields._CurrentAiState_k__BackingField,
    (int64_t)CurrentAiState_k__BackingField,
    *(int64_t *)&procState,
    timingPriority,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  return v15;
}


void __fastcall AiNpcBattleServantData__InitAiStates(
        AiNpcBattleServantData_o *this,
        System_Int32_array *aiIds,
        const MethodInfo *method)
{
  AiNpcBattleServantData___c_c *v5; // x0
  System_Func_T__TResult__o *_9__34_0; // x21
  Il2CppObject *v7; // x22
  struct AiNpcBattleServantData___c_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Object_array *v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4BDEE6A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_int__NpcAiState___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_NpcAiState___);
    sub_1C21E38(&System_Func_int__NpcAiState__TypeInfo);
    sub_1C21E38(&Method_AiNpcBattleServantData___c__InitAiStates_b__34_0__);
    sub_1C21E38(&AiNpcBattleServantData___c_TypeInfo);
    byte_4BDEE6A = 1;
  }
  if ( aiIds )
  {
    v5 = AiNpcBattleServantData___c_TypeInfo;
    if ( !AiNpcBattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AiNpcBattleServantData___c_TypeInfo);
      v5 = AiNpcBattleServantData___c_TypeInfo;
    }
    _9__34_0 = (System_Func_T__TResult__o *)v5->static_fields->__9__34_0;
    if ( !_9__34_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = AiNpcBattleServantData___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__34_0 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_int__NpcAiState__TypeInfo);
      System_Func_int__object____ctor(_9__34_0, v7, Method_AiNpcBattleServantData___c__InitAiStates_b__34_0__, 0LL);
      static_fields = AiNpcBattleServantData___c_TypeInfo->static_fields;
      static_fields->__9__34_0 = (struct System_Func_int__NpcAiState__o *)_9__34_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__34_0,
        (int64_t)_9__34_0,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)aiIds,
                                                                 (System_Func_TSource__TResult__o *)_9__34_0,
                                                                 (const MethodInfo_2FDEEE4 *)Method_System_Linq_Enumerable_Select_int__NpcAiState___);
    v16 = System_Linq_Enumerable__ToArray_object_(
            v15,
            (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_NpcAiState___);
    if ( !this )
      sub_1C22094(v16, v17);
    this->fields.npcAiStates = (struct NpcAiState_array *)v16;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.npcAiStates, (int64_t)v16, v18, v19, v20, v21, v22, v23);
  }
}


void __fastcall AiNpcBattleServantData__PrevActorNoblePhantasm(
        AiNpcBattleServantData_o *this,
        BattleSequenceManager_o *battleSeqManager,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  if ( !battleSeqManager )
    sub_1C22094(this, 0LL);
  BattleSequenceManager__PrevPlayTargetActorProc(battleSeqManager, actor, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiNpcBattleServantData__RemoveCheckAiProcState(
        AiNpcBattleServantData_o *this,
        int32_t procState,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *hashCheckingProcState; // x0
  struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *v6; // x8

  if ( (byte_4BDEE6D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__get_Count__);
    byte_4BDEE6D = 1;
  }
  hashCheckingProcState = this->fields.hashCheckingProcState;
  if ( !hashCheckingProcState
    || (hashCheckingProcState = (struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *)System_Collections_Generic_HashSet_Int32Enum___Remove(
                                                                                                     (System_Collections_Generic_HashSet_T__o *)hashCheckingProcState,
                                                                                                     procState,
                                                                                                     (const MethodInfo_35051CC *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Remove__),
        (v6 = this->fields.hashCheckingProcState) == 0LL) )
  {
    sub_1C22094(hashCheckingProcState, *(_QWORD *)&procState);
  }
  return v6->fields._count < 1;
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
    sub_1C22094(v10, v11);
  BattleServantData__setServantData_44239196(
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
  _BOOL4 v9; // w22
  System_Collections_Generic_IEnumerable_T__o *npcAiStates; // x23
  AiNpcBattleServantData___c_c *v11; // x0
  System_Action_object__o *_9__41_0; // x24
  Il2CppObject *v13; // x25
  struct AiNpcBattleServantData___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4BDEE6E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_NpcAiState__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_NpcAiState___);
    sub_1C21E38(&Method_AiNpcBattleServantData___c__TurnProgress_b__41_0__);
    sub_1C21E38(&AiNpcBattleServantData___c_TypeInfo);
    byte_4BDEE6E = 1;
  }
  v9 = isEndEnemyTurn;
  if ( this->fields.isEnemy == v9 )
  {
    npcAiStates = (System_Collections_Generic_IEnumerable_T__o *)this->fields.npcAiStates;
    v11 = AiNpcBattleServantData___c_TypeInfo;
    if ( !AiNpcBattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AiNpcBattleServantData___c_TypeInfo);
      v11 = AiNpcBattleServantData___c_TypeInfo;
    }
    _9__41_0 = (System_Action_object__o *)v11->static_fields->__9__41_0;
    if ( !_9__41_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = AiNpcBattleServantData___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__41_0 = (System_Action_object__o *)sub_1C22084(System_Action_NpcAiState__TypeInfo);
      System_Action_object____ctor(_9__41_0, v13, Method_AiNpcBattleServantData___c__TurnProgress_b__41_0__, 0LL);
      static_fields = AiNpcBattleServantData___c_TypeInfo->static_fields;
      static_fields->__9__41_0 = (struct System_Action_NpcAiState__o *)_9__41_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__41_0,
        (int64_t)_9__41_0,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    BasicHelper__ForEach_object_(
      npcAiStates,
      (System_Action_T__o *)_9__41_0,
      (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_NpcAiState___);
  }
  BattleServantData__turnBuffProgressing((BattleServantData_o *)this, v9, fieldIndiv, logic, 0LL, 0LL);
}


bool __fastcall AiNpcBattleServantData__UpdateAiStateTargetIndex(
        AiNpcBattleServantData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDEE6B & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_IndexValue_NpcAiState___);
    byte_4BDEE6B = 1;
  }
  v5 = BasicHelper__IndexValue_object_(
         (System_Object_array *)this->fields.npcAiStates,
         index,
         0LL,
         (const MethodInfo_2F9E9CC *)Method_BasicHelper_IndexValue_NpcAiState___);
  this->fields._CurrentAiState_k__BackingField = (struct AiState_o *)v5;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._CurrentAiState_k__BackingField,
    (int64_t)v5,
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
  BattleServantData_SaveData_o *SaveData; // x0
  AiNpcBattleServantData___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *npcAiStates; // x21
  BattleServantData_SaveData_o *v8; // x20
  System_Func_object__object__o *_9__31_0; // x22
  Il2CppObject *v10; // x23
  struct AiNpcBattleServantData___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Object_array *v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  BattleServantData_SaveData_o *result; // x0

  if ( (byte_4BDEE68 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_NpcAiState__AiState_SaveData___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
    sub_1C21E38(&System_Func_NpcAiState__AiState_SaveData__TypeInfo);
    sub_1C21E38(&Method_AiNpcBattleServantData___c__getSaveData_b__31_0__);
    sub_1C21E38(&AiNpcBattleServantData___c_TypeInfo);
    byte_4BDEE68 = 1;
  }
  SaveData = BattleServantData__getSaveData((BattleServantData_o *)this, data, 0LL);
  v6 = AiNpcBattleServantData___c_TypeInfo;
  npcAiStates = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.npcAiStates;
  v8 = SaveData;
  if ( !AiNpcBattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiNpcBattleServantData___c_TypeInfo);
    v6 = AiNpcBattleServantData___c_TypeInfo;
  }
  _9__31_0 = (System_Func_object__object__o *)v6->static_fields->__9__31_0;
  if ( !_9__31_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = AiNpcBattleServantData___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v6->static_fields->__9;
    _9__31_0 = (System_Func_object__object__o *)sub_1C22084(System_Func_NpcAiState__AiState_SaveData__TypeInfo);
    System_Func_object__object____ctor(_9__31_0, v10, Method_AiNpcBattleServantData___c__getSaveData_b__31_0__, 0LL);
    static_fields = AiNpcBattleServantData___c_TypeInfo->static_fields;
    static_fields->__9__31_0 = (struct System_Func_NpcAiState__AiState_SaveData__o *)_9__31_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__31_0,
      (int64_t)_9__31_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               npcAiStates,
                                                               (System_Func_TSource__TResult__o *)_9__31_0,
                                                               (const MethodInfo_2FE15B8 *)Method_System_Linq_Enumerable_Select_NpcAiState__AiState_SaveData___);
  v19 = System_Linq_Enumerable__ToArray_object_(
          v18,
          (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
  if ( !v8 )
    sub_1C22094(v19, v20);
  v8->fields.npcAiStates = (struct AiState_SaveData_array *)v19;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.npcAiStates, (int64_t)v19, v21, v22, v23, v24, v25, v26);
  result = v8;
  *(_QWORD *)&v8->fields.npcActCount = *(_QWORD *)&this->fields._ActCount_k__BackingField;
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
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  bool v14; // w21
  System_Collections_Generic_IEnumerable_T__o *npcAiStates; // x22
  System_Action_object__o *v16; // x23
  __int64 v17; // x8

  if ( (byte_4BDEE69 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_NpcAiState__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_NpcAiState___);
    sub_1C21E38(&Method_AiNpcBattleServantData___c__DisplayClass32_0__setSaveData_b__0__);
    sub_1C21E38(&AiNpcBattleServantData___c__DisplayClass32_0_TypeInfo);
    byte_4BDEE69 = 1;
  }
  v5 = sub_1C22084(AiNpcBattleServantData___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = save;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)save, v8, v9, v10, v11, v12, v13);
  v14 = BattleServantData__setSaveData((BattleServantData_o *)this, *(BattleServantData_SaveData_o **)(v5 + 16), 0LL);
  if ( v14 )
  {
    *(_DWORD *)(v5 + 24) = 0;
    npcAiStates = (System_Collections_Generic_IEnumerable_T__o *)this->fields.npcAiStates;
    v16 = (System_Action_object__o *)sub_1C22084(System_Action_NpcAiState__TypeInfo);
    System_Action_object____ctor(
      v16,
      (Il2CppObject *)v5,
      Method_AiNpcBattleServantData___c__DisplayClass32_0__setSaveData_b__0__,
      0LL);
    BasicHelper__ForEach_object_(
      npcAiStates,
      (System_Action_T__o *)v16,
      (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_NpcAiState___);
    v17 = *(_QWORD *)(v5 + 16);
    if ( v17 )
    {
      *(_QWORD *)&this->fields._ActCount_k__BackingField = *(_QWORD *)(v17 + 184);
      return v14;
    }
LABEL_8:
    sub_1C22094(v6, v7);
  }
  return v14;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._CurrentAiState_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._CurrentAiState_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDEE71 & 1) == 0 )
  {
    sub_1C21E38(&AiNpcBattleServantData___c_TypeInfo);
    byte_4BDEE71 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(AiNpcBattleServantData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  AiNpcBattleServantData___c_TypeInfo->static_fields->__9 = (struct AiNpcBattleServantData___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)AiNpcBattleServantData___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  NpcAiState_o *v4; // x20

  if ( (byte_4BDEE72 & 1) == 0 )
  {
    sub_1C21E38(&NpcAiState_TypeInfo);
    byte_4BDEE72 = 1;
  }
  v4 = (NpcAiState_o *)sub_1C22084(NpcAiState_TypeInfo);
  NpcAiState___ctor(v4, id, 0LL);
  return v4;
}


void __fastcall AiNpcBattleServantData___c___TurnProgress_b__41_0(
        AiNpcBattleServantData___c_o *this,
        NpcAiState_o *state,
        const MethodInfo *method)
{
  if ( !state )
    sub_1C22094(this, 0LL);
  AiState__fieldTurnProgressing((AiState_o *)state, 0LL);
}


AiState_SaveData_o *__fastcall AiNpcBattleServantData___c___getSaveData_b__31_0(
        AiNpcBattleServantData___c_o *this,
        NpcAiState_o *state,
        const MethodInfo *method)
{
  if ( !state )
    sub_1C22094(this, 0LL);
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
  System_Object_array *npcAiStates; // x0

  v4 = this;
  if ( (byte_4BDEE73 & 1) == 0 )
  {
    this = (AiNpcBattleServantData___c__DisplayClass32_0_o *)sub_1C21E38(&Method_BasicHelper_IndexValue_AiState_SaveData___);
    byte_4BDEE73 = 1;
  }
  save = v4->fields.save;
  if ( !save
    || (index = v4->fields.index,
        npcAiStates = (System_Object_array *)save->fields.npcAiStates,
        v4->fields.index = index + 1,
        this = (AiNpcBattleServantData___c__DisplayClass32_0_o *)BasicHelper__IndexValue_object_(
                                                                   npcAiStates,
                                                                   index,
                                                                   0LL,
                                                                   (const MethodInfo_2F9E9CC *)Method_BasicHelper_IndexValue_AiState_SaveData___),
        !npcAiState) )
  {
    sub_1C22094(this, npcAiState);
  }
  AiState__setSaveData((AiState_o *)npcAiState, (AiState_SaveData_o *)this, 0LL);
}