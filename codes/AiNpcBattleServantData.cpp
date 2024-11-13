void __fastcall AiNpcBattleServantData___ctor(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct NpcAiState_array *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Collections_Generic_HashSet_T__o *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B18A51 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_AiLogic_PROC_STATE__TypeInfo, v4, v5);
    sub_1BCA7E0(&NpcAiState___TypeInfo, v6, v7);
    byte_4B18A51 = 1;
  }
  v8 = (struct NpcAiState_array *)sub_1BCA888(NpcAiState___TypeInfo, 0LL);
  this->fields.npcAiStates = v8;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.npcAiStates, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  v18 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_HashSet_AiLogic_PROC_STATE__TypeInfo,
                                                     v15,
                                                     v16,
                                                     v17);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v18,
    (const MethodInfo_3456D28 *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE___ctor__);
  this->fields.hashCheckingProcState = (struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *)v18;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.hashCheckingProcState,
    (int64_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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

  if ( (byte_4B18A4D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Add__, *(_QWORD *)&procState, method);
    byte_4B18A4D = 1;
  }
  hashCheckingProcState = (System_Collections_Generic_HashSet_T__o *)this->fields.hashCheckingProcState;
  if ( !hashCheckingProcState )
    sub_1BCAA3C(0LL, *(_QWORD *)&procState);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    hashCheckingProcState,
    procState,
    (const MethodInfo_3457F2C *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Add__);
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
  __int64 v9; // x1
  UnityEngine_Object_o *TargetTransform; // x21
  AiNpcBattleServantData_o *v11; // x19
  int v12; // s0

  v8 = this;
  if ( (byte_4B18A50 & 1) == 0 )
  {
    this = (AiNpcBattleServantData_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, battleSeqManager, actor);
    byte_4B18A50 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, battleSeqManager);
  if ( UnityEngine_Object__op_Inequality(TargetTransform, 0LL, 0LL) )
  {
    this = (AiNpcBattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)actor, 0LL);
    if ( TargetTransform )
    {
      v11 = this;
      *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position(
                                         (UnityEngine_Transform_o *)TargetTransform,
                                         0LL);
      if ( v11 )
      {
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)v11, *(UnityEngine_Vector3_o *)&v12, 0LL);
        return;
      }
    }
LABEL_20:
    sub_1BCAA3C(this, battleSeqManager);
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
        sub_1BCAA44(this, logic);
      v21 = (int64_t)npcAiStates->m_Items[v19];
      *p_CurrentAiState_k__BackingField = (struct AiState_o *)v21;
      sub_1BCA784(
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
    sub_1BCAA3C(this, logic);
  }
LABEL_10:
  *p_CurrentAiState_k__BackingField = CurrentAiState_k__BackingField;
  sub_1BCA784(
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  AiNpcBattleServantData___c_c *v14; // x0
  System_Func_T__TResult__o *_9__34_0; // x21
  Il2CppObject *v16; // x22
  struct AiNpcBattleServantData___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Object_array *v25; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B18A4B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__NpcAiState___, aiIds, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_NpcAiState___, v6, v7);
    sub_1BCA7E0(&System_Func_int__NpcAiState__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_AiNpcBattleServantData___c__InitAiStates_b__34_0__, v10, v11);
    sub_1BCA7E0(&AiNpcBattleServantData___c_TypeInfo, v12, v13);
    byte_4B18A4B = 1;
  }
  if ( aiIds )
  {
    v14 = AiNpcBattleServantData___c_TypeInfo;
    if ( !AiNpcBattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AiNpcBattleServantData___c_TypeInfo, aiIds);
      v14 = AiNpcBattleServantData___c_TypeInfo;
    }
    _9__34_0 = (System_Func_T__TResult__o *)v14->static_fields->__9__34_0;
    if ( !_9__34_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14, aiIds);
        v14 = AiNpcBattleServantData___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v14->static_fields->__9;
      _9__34_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_int__NpcAiState__TypeInfo, aiIds, method, v3);
      System_Func_int__object____ctor(_9__34_0, v16, Method_AiNpcBattleServantData___c__InitAiStates_b__34_0__, 0LL);
      static_fields = AiNpcBattleServantData___c_TypeInfo->static_fields;
      static_fields->__9__34_0 = (struct System_Func_int__NpcAiState__o *)_9__34_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__34_0,
        (int64_t)_9__34_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)aiIds,
                                                                 (System_Func_TSource__TResult__o *)_9__34_0,
                                                                 (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__NpcAiState___);
    v25 = System_Linq_Enumerable__ToArray_object_(
            v24,
            (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_NpcAiState___);
    if ( !this )
      sub_1BCAA3C(v25, v26);
    this->fields.npcAiStates = (struct NpcAiState_array *)v25;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.npcAiStates, (int64_t)v25, v27, v28, v29, v30, v31, v32);
  }
}


void __fastcall AiNpcBattleServantData__PrevActorNoblePhantasm(
        AiNpcBattleServantData_o *this,
        BattleSequenceManager_o *battleSeqManager,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  if ( !battleSeqManager )
    sub_1BCAA3C(this, 0LL);
  BattleSequenceManager__PrevPlayTargetActorProc(battleSeqManager, actor, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiNpcBattleServantData__RemoveCheckAiProcState(
        AiNpcBattleServantData_o *this,
        int32_t procState,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *hashCheckingProcState; // x0
  struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *v8; // x8

  if ( (byte_4B18A4E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Remove__, *(_QWORD *)&procState, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__get_Count__, v5, v6);
    byte_4B18A4E = 1;
  }
  hashCheckingProcState = this->fields.hashCheckingProcState;
  if ( !hashCheckingProcState
    || (hashCheckingProcState = (struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *)System_Collections_Generic_HashSet_Int32Enum___Remove(
                                                                                                     (System_Collections_Generic_HashSet_T__o *)hashCheckingProcState,
                                                                                                     procState,
                                                                                                     (const MethodInfo_34575F0 *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Remove__),
        (v8 = this->fields.hashCheckingProcState) == 0LL) )
  {
    sub_1BCAA3C(hashCheckingProcState, *(_QWORD *)&procState);
  }
  return v8->fields._count < 1;
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
    sub_1BCAA3C(v10, v11);
  BattleServantData__setServantData_43661908(
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  _BOOL4 v15; // w22
  System_Collections_Generic_IEnumerable_T__o *npcAiStates; // x23
  AiNpcBattleServantData___c_c *v17; // x0
  System_Action_object__o *_9__41_0; // x24
  Il2CppObject *v19; // x25
  struct AiNpcBattleServantData___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4B18A4F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_NpcAiState__TypeInfo, isEndEnemyTurn, fieldIndiv);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_NpcAiState___, v9, v10);
    sub_1BCA7E0(&Method_AiNpcBattleServantData___c__TurnProgress_b__41_0__, v11, v12);
    sub_1BCA7E0(&AiNpcBattleServantData___c_TypeInfo, v13, v14);
    byte_4B18A4F = 1;
  }
  v15 = isEndEnemyTurn;
  if ( this->fields.isEnemy == v15 )
  {
    npcAiStates = (System_Collections_Generic_IEnumerable_T__o *)this->fields.npcAiStates;
    v17 = AiNpcBattleServantData___c_TypeInfo;
    if ( !AiNpcBattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AiNpcBattleServantData___c_TypeInfo, isEndEnemyTurn);
      v17 = AiNpcBattleServantData___c_TypeInfo;
    }
    _9__41_0 = (System_Action_object__o *)v17->static_fields->__9__41_0;
    if ( !_9__41_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17, isEndEnemyTurn);
        v17 = AiNpcBattleServantData___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__41_0 = (System_Action_object__o *)sub_1BCAA2C(
                                              System_Action_NpcAiState__TypeInfo,
                                              isEndEnemyTurn,
                                              fieldIndiv,
                                              logic);
      System_Action_object____ctor(_9__41_0, v19, Method_AiNpcBattleServantData___c__TurnProgress_b__41_0__, 0LL);
      static_fields = AiNpcBattleServantData___c_TypeInfo->static_fields;
      static_fields->__9__41_0 = (struct System_Action_NpcAiState__o *)_9__41_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__41_0,
        (int64_t)_9__41_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    BasicHelper__ForEach_object_(
      npcAiStates,
      (System_Action_T__o *)_9__41_0,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_NpcAiState___);
  }
  BattleServantData__turnBuffProgressing((BattleServantData_o *)this, v15, fieldIndiv, logic, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B18A4C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_NpcAiState___, *(_QWORD *)&index, method);
    byte_4B18A4C = 1;
  }
  v5 = BasicHelper__IndexValue_object_(
         (System_Object_array *)this->fields.npcAiStates,
         index,
         0LL,
         (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_NpcAiState___);
  this->fields._CurrentAiState_k__BackingField = (struct AiState_o *)v5;
  sub_1BCA784(
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  BattleServantData_SaveData_o *SaveData; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  AiNpcBattleServantData___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *npcAiStates; // x21
  BattleServantData_SaveData_o *v19; // x20
  System_Func_object__object__o *_9__31_0; // x22
  Il2CppObject *v21; // x23
  struct AiNpcBattleServantData___c_StaticFields *static_fields; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Object_array *v30; // x0
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  BattleServantData_SaveData_o *result; // x0

  if ( (byte_4B18A49 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_NpcAiState__AiState_SaveData___, data, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_AiState_SaveData___, v5, v6);
    sub_1BCA7E0(&System_Func_NpcAiState__AiState_SaveData__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_AiNpcBattleServantData___c__getSaveData_b__31_0__, v9, v10);
    sub_1BCA7E0(&AiNpcBattleServantData___c_TypeInfo, v11, v12);
    byte_4B18A49 = 1;
  }
  SaveData = BattleServantData__getSaveData((BattleServantData_o *)this, data, 0LL);
  v17 = AiNpcBattleServantData___c_TypeInfo;
  npcAiStates = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.npcAiStates;
  v19 = SaveData;
  if ( !AiNpcBattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AiNpcBattleServantData___c_TypeInfo, v14);
    v17 = AiNpcBattleServantData___c_TypeInfo;
  }
  _9__31_0 = (System_Func_object__object__o *)v17->static_fields->__9__31_0;
  if ( !_9__31_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17, v14);
      v17 = AiNpcBattleServantData___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v17->static_fields->__9;
    _9__31_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_NpcAiState__AiState_SaveData__TypeInfo,
                                                  v14,
                                                  v15,
                                                  v16);
    System_Func_object__object____ctor(_9__31_0, v21, Method_AiNpcBattleServantData___c__getSaveData_b__31_0__, 0LL);
    static_fields = AiNpcBattleServantData___c_TypeInfo->static_fields;
    static_fields->__9__31_0 = (struct System_Func_NpcAiState__AiState_SaveData__o *)_9__31_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__31_0,
      (int64_t)_9__31_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               npcAiStates,
                                                               (System_Func_TSource__TResult__o *)_9__31_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_NpcAiState__AiState_SaveData___);
  v30 = System_Linq_Enumerable__ToArray_object_(
          v29,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
  if ( !v19 )
    sub_1BCAA3C(v30, v31);
  v19->fields.npcAiStates = (struct AiState_SaveData_array *)v30;
  sub_1BCA784((PartyOrganizationUtility_o *)&v19->fields.npcAiStates, (int64_t)v30, v32, v33, v34, v35, v36, v37);
  result = v19;
  *(_QWORD *)&v19->fields.npcActCount = *(_QWORD *)&this->fields._ActCount_k__BackingField;
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  bool v24; // w21
  System_Collections_Generic_IEnumerable_T__o *npcAiStates; // x22
  System_Action_object__o *v26; // x23
  __int64 v27; // x8

  if ( (byte_4B18A4A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_NpcAiState__TypeInfo, save, method);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_NpcAiState___, v6, v7);
    sub_1BCA7E0(&Method_AiNpcBattleServantData___c__DisplayClass32_0__setSaveData_b__0__, v8, v9);
    sub_1BCA7E0(&AiNpcBattleServantData___c__DisplayClass32_0_TypeInfo, v10, v11);
    byte_4B18A4A = 1;
  }
  v12 = sub_1BCAA2C(AiNpcBattleServantData___c__DisplayClass32_0_TypeInfo, save, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_8;
  *(_QWORD *)(v12 + 16) = save;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)save, v15, v16, v17, v18, v19, v20);
  v24 = BattleServantData__setSaveData((BattleServantData_o *)this, *(BattleServantData_SaveData_o **)(v12 + 16), 0LL);
  if ( v24 )
  {
    *(_DWORD *)(v12 + 24) = 0;
    npcAiStates = (System_Collections_Generic_IEnumerable_T__o *)this->fields.npcAiStates;
    v26 = (System_Action_object__o *)sub_1BCAA2C(System_Action_NpcAiState__TypeInfo, v21, v22, v23);
    System_Action_object____ctor(
      v26,
      (Il2CppObject *)v12,
      Method_AiNpcBattleServantData___c__DisplayClass32_0__setSaveData_b__0__,
      0LL);
    BasicHelper__ForEach_object_(
      npcAiStates,
      (System_Action_T__o *)v26,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_NpcAiState___);
    v27 = *(_QWORD *)(v12 + 16);
    if ( v27 )
    {
      *(_QWORD *)&this->fields._ActCount_k__BackingField = *(_QWORD *)(v27 + 184);
      return v24;
    }
LABEL_8:
    sub_1BCAA3C(v13, v14);
  }
  return v24;
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
  sub_1BCA784(
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18A52 & 1) == 0 )
  {
    sub_1BCA7E0(&AiNpcBattleServantData___c_TypeInfo, v1, v2);
    byte_4B18A52 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(AiNpcBattleServantData___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  AiNpcBattleServantData___c_TypeInfo->static_fields->__9 = (struct AiNpcBattleServantData___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)AiNpcBattleServantData___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  NpcAiState_o *v5; // x20

  if ( (byte_4B18A53 & 1) == 0 )
  {
    sub_1BCA7E0(&NpcAiState_TypeInfo, *(_QWORD *)&id, method);
    byte_4B18A53 = 1;
  }
  v5 = (NpcAiState_o *)sub_1BCAA2C(NpcAiState_TypeInfo, *(_QWORD *)&id, method, v3);
  NpcAiState___ctor(v5, id, 0LL);
  return v5;
}


void __fastcall AiNpcBattleServantData___c___TurnProgress_b__41_0(
        AiNpcBattleServantData___c_o *this,
        NpcAiState_o *state,
        const MethodInfo *method)
{
  if ( !state )
    sub_1BCAA3C(this, 0LL);
  AiState__fieldTurnProgressing((AiState_o *)state, 0LL);
}


AiState_SaveData_o *__fastcall AiNpcBattleServantData___c___getSaveData_b__31_0(
        AiNpcBattleServantData___c_o *this,
        NpcAiState_o *state,
        const MethodInfo *method)
{
  if ( !state )
    sub_1BCAA3C(this, 0LL);
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
  if ( (byte_4B18A54 & 1) == 0 )
  {
    this = (AiNpcBattleServantData___c__DisplayClass32_0_o *)sub_1BCA7E0(
                                                               &Method_BasicHelper_IndexValue_AiState_SaveData___,
                                                               npcAiState,
                                                               method);
    byte_4B18A54 = 1;
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
                                                                   (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_AiState_SaveData___),
        !npcAiState) )
  {
    sub_1BCAA3C(this, npcAiState);
  }
  AiState__setSaveData((AiState_o *)npcAiState, (AiState_SaveData_o *)this, 0LL);
}