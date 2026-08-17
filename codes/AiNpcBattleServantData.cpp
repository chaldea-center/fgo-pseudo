void AiNpcBattleServantData___ctor(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  struct NpcAiState_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_HashSet_T__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5973775 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_AiLogic_PROC_STATE__TypeInfo);
    sub_2213A60(&NpcAiState___TypeInfo);
    byte_5973775 = 1;
  }
  v3 = (struct NpcAiState_array *)sub_2213B20(NpcAiState___TypeInfo, 0);
  this->fields.npcAiStates = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.npcAiStates, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_HashSet_T__o *)sub_2213CCC(System_Collections_Generic_HashSet_AiLogic_PROC_STATE__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v10,
    (const MethodInfo_42B5FC4 *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE___ctor__);
  this->fields.hashCheckingProcState = (struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.hashCheckingProcState,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  BattleServantData___ctor((BattleServantData_o *)this, 0);
}


void AiNpcBattleServantData__AddActCount(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  *(int32x2_t *)&this->fields._ActCount_k__BackingField = vadd_s32(
                                                            *(int32x2_t *)&this->fields._ActCount_k__BackingField,
                                                            (int32x2_t)0x100000001LL);
}


// local variable allocation has failed, the output may be wrong!
void AiNpcBattleServantData__AddCheckAiProcState(
        AiNpcBattleServantData_o *this,
        int32_t procState,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hashCheckingProcState; // x0

  if ( (byte_5973771 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Add__);
    byte_5973771 = 1;
  }
  hashCheckingProcState = (System_Collections_Generic_HashSet_T__o *)this->fields.hashCheckingProcState;
  if ( !hashCheckingProcState )
    sub_2213CDC(0, *(_QWORD *)&procState);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    hashCheckingProcState,
    procState,
    (const MethodInfo_42B7204 *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Add__);
}


void AiNpcBattleServantData__AfterActorNoblePhantasm(
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
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_5973774 & 1) == 0 )
  {
    this = (AiNpcBattleServantData_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973774 = 1;
  }
  if ( !actor )
    goto LABEL_20;
  this = (AiNpcBattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)actor, 0);
  if ( !this )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  if ( !battleSeqManager )
    goto LABEL_20;
  BattleSequenceManager__AfterPlayTargetActorProc(battleSeqManager, actor, 0);
  if ( !perf )
    goto LABEL_20;
  this = (AiNpcBattleServantData_o *)perf->fields._fmManager_k__BackingField;
  if ( !this )
    goto LABEL_20;
  TargetTransform = (UnityEngine_Object_o *)FieldMotionManager__GetTargetTransform(
                                              (FieldMotionManager_o *)this,
                                              6,
                                              v8->fields.index,
                                              0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Equality(TargetTransform, 0, 0) )
  {
    this = (AiNpcBattleServantData_o *)perf->fields._fmManager_k__BackingField;
    if ( !this )
      goto LABEL_20;
    TargetTransform = (UnityEngine_Object_o *)FieldMotionManager__GetTargetTransform(
                                                (FieldMotionManager_o *)this,
                                                6,
                                                0,
                                                0);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, battleSeqManager);
  if ( UnityEngine_Object__op_Inequality(TargetTransform, 0, 0) )
  {
    this = (AiNpcBattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)actor, 0);
    if ( TargetTransform )
    {
      v11 = this;
      position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)TargetTransform, 0);
      if ( v11 )
      {
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)v11, position, 0);
        return;
      }
    }
LABEL_20:
    sub_2213CDC(this, battleSeqManager);
  }
}


// local variable allocation has failed, the output may be wrong!
bool AiNpcBattleServantData__ExistAiThinking(
        AiNpcBattleServantData_o *this,
        BattleLogic_o *logic,
        int32_t procState,
        int32_t timingPriority,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BattleLogicNpcAi_o *logicNpcAi; // x8
  struct NpcAiState_array *npcAiStates; // x26
  AiNpcBattleServantData_o *v11; // x22
  il2cpp_array_size_t max_length; // x9
  struct AiState_o *CurrentAiState_k__BackingField; // x23
  struct AiState_o **p_CurrentAiState_k__BackingField; // x24
  bool v15; // w27
  AiLogic_o *aiLogic; // x25
  unsigned __int64 v19; // x28
  unsigned int v20; // w8
  struct AiState_o *v21; // x1

  if ( !logic )
    goto LABEL_11;
  logicNpcAi = logic->fields.logicNpcAi;
  if ( !logicNpcAi )
    goto LABEL_11;
  npcAiStates = this->fields.npcAiStates;
  v11 = this;
  if ( !npcAiStates )
    goto LABEL_11;
  max_length = npcAiStates->max_length;
  CurrentAiState_k__BackingField = this->fields._CurrentAiState_k__BackingField;
  p_CurrentAiState_k__BackingField = &this->fields._CurrentAiState_k__BackingField;
  v15 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    aiLogic = logicNpcAi->fields.aiLogic;
    v19 = 0;
    v20 = npcAiStates->max_length;
    while ( 1 )
    {
      if ( v19 >= v20 )
        sub_2213CE4(this);
      v21 = (struct AiState_o *)npcAiStates->m_Items[v19];
      *p_CurrentAiState_k__BackingField = v21;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v11->fields._CurrentAiState_k__BackingField,
        (int32_t)v21,
        *(System_String_o **)&procState,
        *(System_String_o **)&timingPriority,
        (int32_t)method,
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
                                           0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v20 = npcAiStates->max_length;
        v15 = (__int64)++v19 < (int)v20;
        if ( (__int64)v19 < (int)v20 )
          continue;
      }
      goto LABEL_10;
    }
LABEL_11:
    sub_2213CDC(this, logic);
  }
LABEL_10:
  *p_CurrentAiState_k__BackingField = CurrentAiState_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v11->fields._CurrentAiState_k__BackingField,
    (int32_t)CurrentAiState_k__BackingField,
    *(System_String_o **)&procState,
    *(System_String_o **)&timingPriority,
    (int32_t)method,
    v5,
    v6,
    v7);
  return v15;
}


void AiNpcBattleServantData__InitAiStates(
        AiNpcBattleServantData_o *this,
        System_Int32_array *aiIds,
        const MethodInfo *method)
{
  AiNpcBattleServantData___c_c *v5; // x0
  struct AiNpcBattleServantData___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__34_0; // x21
  Il2CppObject *v8; // x22
  struct AiNpcBattleServantData___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Object_array *v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_597376F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__NpcAiState___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_NpcAiState___);
    sub_2213A60(&System_Func_int__NpcAiState__TypeInfo);
    sub_2213A60(&Method_AiNpcBattleServantData___c__InitAiStates_b__34_0__);
    sub_2213A60(&AiNpcBattleServantData___c_TypeInfo);
    byte_597376F = 1;
  }
  if ( aiIds )
  {
    v5 = AiNpcBattleServantData___c_TypeInfo;
    if ( !*(&AiNpcBattleServantData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AiNpcBattleServantData___c_TypeInfo, aiIds);
      v5 = AiNpcBattleServantData___c_TypeInfo;
    }
    static_fields = v5->static_fields;
    _9__34_0 = (System_Func_T__TResult__o *)static_fields->__9__34_0;
    if ( !_9__34_0 )
    {
      if ( !*(&v5->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v5, aiIds);
        static_fields = AiNpcBattleServantData___c_TypeInfo->static_fields;
      }
      v8 = (Il2CppObject *)static_fields->__9;
      _9__34_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_int__NpcAiState__TypeInfo);
      System_Func_int__object____ctor(_9__34_0, v8, Method_AiNpcBattleServantData___c__InitAiStates_b__34_0__, 0);
      v9 = AiNpcBattleServantData___c_TypeInfo->static_fields;
      v9->__9__34_0 = (struct System_Func_int__NpcAiState__o *)_9__34_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__34_0, (int32_t)_9__34_0, v10, v11, v12, v13, v14, v15);
    }
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)aiIds,
                                                                 (System_Func_TSource__TResult__o *)_9__34_0,
                                                                 (const MethodInfo_388DEA8 *)Method_System_Linq_Enumerable_Select_int__NpcAiState___);
    v17 = System_Linq_Enumerable__ToArray_object_(
            v16,
            (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_NpcAiState___);
    if ( !this )
      sub_2213CDC(v17, v18);
    this->fields.npcAiStates = (struct NpcAiState_array *)v17;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.npcAiStates,
      (int32_t)v17,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
}


void AiNpcBattleServantData__PrevActorNoblePhantasm(
        AiNpcBattleServantData_o *this,
        BattleSequenceManager_o *battleSeqManager,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  if ( !battleSeqManager )
    sub_2213CDC(this, 0);
  BattleSequenceManager__PrevPlayTargetActorProc(battleSeqManager, actor, 0);
}


// local variable allocation has failed, the output may be wrong!
bool AiNpcBattleServantData__RemoveCheckAiProcState(
        AiNpcBattleServantData_o *this,
        int32_t procState,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *hashCheckingProcState; // x0
  struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *v6; // x8

  if ( (byte_5973772 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__get_Count__);
    byte_5973772 = 1;
  }
  hashCheckingProcState = this->fields.hashCheckingProcState;
  if ( !hashCheckingProcState
    || (hashCheckingProcState = (struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *)System_Collections_Generic_HashSet_Int32Enum___Remove(
                                                                                                     (System_Collections_Generic_HashSet_T__o *)hashCheckingProcState,
                                                                                                     procState,
                                                                                                     (const MethodInfo_42B68BC *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Remove__),
        (v6 = this->fields.hashCheckingProcState) == 0) )
  {
    sub_2213CDC(hashCheckingProcState, *(_QWORD *)&procState);
  }
  return v6->fields._count < 1;
}


void AiNpcBattleServantData__ResetActCount(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  this->fields._ActCount_k__BackingField = 0;
}


void AiNpcBattleServantData__SetNpcServant(
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
    sub_2213CDC(v10, v11);
  BattleServantData__setServantData_53392316(
    (BattleServantData_o *)this,
    deckSvt,
    data->fields.battle_ent,
    3,
    saveSvt,
    0,
    0,
    0);
  if ( saveSvt )
    BattleServantData__loadTransformServant((BattleServantData_o *)this, data, 0);
}


// local variable allocation has failed, the output may be wrong!
void AiNpcBattleServantData__TurnProgress(
        AiNpcBattleServantData_o *this,
        bool isEndEnemyTurn,
        System_Int32_array *fieldIndiv,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  _BOOL4 v9; // w22
  System_Collections_Generic_IEnumerable_T__o *npcAiStates; // x23
  AiNpcBattleServantData___c_c *v11; // x0
  struct AiNpcBattleServantData___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__41_0; // x24
  Il2CppObject *v14; // x25
  struct AiNpcBattleServantData___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_5973773 & 1) == 0 )
  {
    sub_2213A60(&System_Action_NpcAiState__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_NpcAiState___);
    sub_2213A60(&Method_AiNpcBattleServantData___c__TurnProgress_b__41_0__);
    sub_2213A60(&AiNpcBattleServantData___c_TypeInfo);
    byte_5973773 = 1;
  }
  v9 = isEndEnemyTurn;
  if ( this->fields.isEnemy == v9 )
  {
    npcAiStates = (System_Collections_Generic_IEnumerable_T__o *)this->fields.npcAiStates;
    v11 = AiNpcBattleServantData___c_TypeInfo;
    if ( !*(&AiNpcBattleServantData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AiNpcBattleServantData___c_TypeInfo, isEndEnemyTurn);
      v11 = AiNpcBattleServantData___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__41_0 = (System_Action_object__o *)static_fields->__9__41_0;
    if ( !_9__41_0 )
    {
      if ( !*(&v11->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v11, isEndEnemyTurn);
        static_fields = AiNpcBattleServantData___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__41_0 = (System_Action_object__o *)sub_2213CCC(System_Action_NpcAiState__TypeInfo);
      System_Action_object____ctor(_9__41_0, v14, Method_AiNpcBattleServantData___c__TurnProgress_b__41_0__, 0);
      v15 = AiNpcBattleServantData___c_TypeInfo->static_fields;
      v15->__9__41_0 = (struct System_Action_NpcAiState__o *)_9__41_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__41_0, (int32_t)_9__41_0, v16, v17, v18, v19, v20, v21);
    }
    BasicHelper__ForEach_object_(
      npcAiStates,
      (System_Action_T__o *)_9__41_0,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_NpcAiState___);
  }
  BattleServantData__turnBuffProgressing((BattleServantData_o *)this, v9, fieldIndiv, logic, 0, 0);
}


bool AiNpcBattleServantData__UpdateAiStateTargetIndex(
        AiNpcBattleServantData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5973770 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_NpcAiState___);
    byte_5973770 = 1;
  }
  v5 = BasicHelper__IndexValue_object_(
         (System_Object_array *)this->fields.npcAiStates,
         index,
         0,
         (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_NpcAiState___);
  this->fields._CurrentAiState_k__BackingField = (struct AiState_o *)v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CurrentAiState_k__BackingField,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  return this->fields._CurrentAiState_k__BackingField != 0;
}


System_Double_array *AiNpcBattleServantData__getAiParam(
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
           0);
}


AiState_o *AiNpcBattleServantData__getAiState(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  if ( this->fields._CurrentAiState_k__BackingField )
    return this->fields._CurrentAiState_k__BackingField;
  else
    return BattleServantData__getAiState((BattleServantData_o *)this, 0);
}


BattleServantData_SaveData_o *AiNpcBattleServantData__getSaveData(
        AiNpcBattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleServantData_SaveData_o *SaveData; // x0
  __int64 v6; // x1
  AiNpcBattleServantData___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *npcAiStates; // x21
  BattleServantData_SaveData_o *v9; // x20
  struct AiNpcBattleServantData___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__31_0; // x22
  Il2CppObject *v12; // x23
  struct AiNpcBattleServantData___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Object_array *v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  BattleServantData_SaveData_o *result; // x0

  if ( (byte_597376D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_NpcAiState__AiState_SaveData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
    sub_2213A60(&System_Func_NpcAiState__AiState_SaveData__TypeInfo);
    sub_2213A60(&Method_AiNpcBattleServantData___c__getSaveData_b__31_0__);
    sub_2213A60(&AiNpcBattleServantData___c_TypeInfo);
    byte_597376D = 1;
  }
  SaveData = BattleServantData__getSaveData((BattleServantData_o *)this, data, 0);
  v7 = AiNpcBattleServantData___c_TypeInfo;
  npcAiStates = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.npcAiStates;
  v9 = SaveData;
  if ( !*(&AiNpcBattleServantData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AiNpcBattleServantData___c_TypeInfo, v6);
    v7 = AiNpcBattleServantData___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__31_0 = (System_Func_object__object__o *)static_fields->__9__31_0;
  if ( !_9__31_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v6);
      static_fields = AiNpcBattleServantData___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__31_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_NpcAiState__AiState_SaveData__TypeInfo);
    System_Func_object__object____ctor(_9__31_0, v12, Method_AiNpcBattleServantData___c__getSaveData_b__31_0__, 0);
    v13 = AiNpcBattleServantData___c_TypeInfo->static_fields;
    v13->__9__31_0 = (struct System_Func_NpcAiState__AiState_SaveData__o *)_9__31_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__31_0, (int32_t)_9__31_0, v14, v15, v16, v17, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               npcAiStates,
                                                               (System_Func_TSource__TResult__o *)_9__31_0,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_NpcAiState__AiState_SaveData___);
  v21 = System_Linq_Enumerable__ToArray_object_(
          v20,
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
  if ( !v9 )
    sub_2213CDC(v21, v22);
  v9->fields.npcAiStates = (struct AiState_SaveData_array *)v21;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->fields.npcAiStates, (int32_t)v21, v23, v24, v25, v26, v27, v28);
  result = v9;
  *(_QWORD *)&v9->fields.npcActCount = *(_QWORD *)&this->fields._ActCount_k__BackingField;
  return result;
}


int32_t AiNpcBattleServantData__getThisTurnActCount(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  return this->fields._ActCount_k__BackingField;
}


int32_t AiNpcBattleServantData__get_ActCount(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  return this->fields._ActCount_k__BackingField;
}


int32_t AiNpcBattleServantData__get_ActorType(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  return 2;
}


AiState_o *AiNpcBattleServantData__get_CurrentAiState(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  return this->fields._CurrentAiState_k__BackingField;
}


bool AiNpcBattleServantData__get_IsAiNpc(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  return 1;
}


int32_t AiNpcBattleServantData__get_TotalActCount(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  return this->fields._TotalActCount_k__BackingField;
}


int32_t AiNpcBattleServantData__get_hp(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.maxhp;
}


int32_t AiNpcBattleServantData__get_reducedhp(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  return 0;
}


int32_t AiNpcBattleServantData__get_resultHp(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.maxhp;
}


bool AiNpcBattleServantData__setSaveData(
        AiNpcBattleServantData_o *this,
        BattleServantData_SaveData_o *save,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  bool v14; // w21
  System_Collections_Generic_IEnumerable_T__o *npcAiStates; // x22
  System_Action_object__o *v16; // x23
  __int64 v17; // x8

  if ( (byte_597376E & 1) == 0 )
  {
    sub_2213A60(&System_Action_NpcAiState__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_NpcAiState___);
    sub_2213A60(&Method_AiNpcBattleServantData___c__DisplayClass32_0__setSaveData_b__0__);
    sub_2213A60(&AiNpcBattleServantData___c__DisplayClass32_0_TypeInfo);
    byte_597376E = 1;
  }
  v5 = sub_2213CCC(AiNpcBattleServantData___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = save;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)save, v8, v9, v10, v11, v12, v13);
  v14 = BattleServantData__setSaveData((BattleServantData_o *)this, *(BattleServantData_SaveData_o **)(v5 + 16), 0);
  if ( v14 )
  {
    npcAiStates = (System_Collections_Generic_IEnumerable_T__o *)this->fields.npcAiStates;
    *(_DWORD *)(v5 + 24) = 0;
    v16 = (System_Action_object__o *)sub_2213CCC(System_Action_NpcAiState__TypeInfo);
    System_Action_object____ctor(
      v16,
      (Il2CppObject *)v5,
      Method_AiNpcBattleServantData___c__DisplayClass32_0__setSaveData_b__0__,
      0);
    BasicHelper__ForEach_object_(
      npcAiStates,
      (System_Action_T__o *)v16,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_NpcAiState___);
    v17 = *(_QWORD *)(v5 + 16);
    if ( v17 )
    {
      *(_QWORD *)&this->fields._ActCount_k__BackingField = *(_QWORD *)(v17 + 184);
      return v14;
    }
LABEL_8:
    sub_2213CDC(v6, v7);
  }
  return v14;
}


void AiNpcBattleServantData__set_ActCount(AiNpcBattleServantData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ActCount_k__BackingField = value;
}


void AiNpcBattleServantData__set_CurrentAiState(
        AiNpcBattleServantData_o *this,
        AiState_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._CurrentAiState_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CurrentAiState_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AiNpcBattleServantData__set_TotalActCount(AiNpcBattleServantData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._TotalActCount_k__BackingField = value;
}


void AiNpcBattleServantData__set_hp(AiNpcBattleServantData_o *this, int32_t value, const MethodInfo *method)
{
  ;
}


void AiNpcBattleServantData__set_reducedhp(AiNpcBattleServantData_o *this, int32_t value, const MethodInfo *method)
{
  ;
}


void AiNpcBattleServantData__set_resultHp(AiNpcBattleServantData_o *this, int32_t value, const MethodInfo *method)
{
  ;
}


void AiNpcBattleServantData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973776 & 1) == 0 )
  {
    sub_2213A60(&AiNpcBattleServantData___c_TypeInfo);
    byte_5973776 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(AiNpcBattleServantData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AiNpcBattleServantData___c_TypeInfo->static_fields->__9 = (struct AiNpcBattleServantData___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)AiNpcBattleServantData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AiNpcBattleServantData___c___ctor(AiNpcBattleServantData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


NpcAiState_o *AiNpcBattleServantData___c___InitAiStates_b__34_0(
        AiNpcBattleServantData___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  NpcAiState_o *v4; // x20

  if ( (byte_5973777 & 1) == 0 )
  {
    sub_2213A60(&NpcAiState_TypeInfo);
    byte_5973777 = 1;
  }
  v4 = (NpcAiState_o *)sub_2213CCC(NpcAiState_TypeInfo);
  NpcAiState___ctor(v4, id, 0);
  return v4;
}


void AiNpcBattleServantData___c___TurnProgress_b__41_0(
        AiNpcBattleServantData___c_o *this,
        NpcAiState_o *state,
        const MethodInfo *method)
{
  if ( !state )
    sub_2213CDC(this, 0);
  AiState__fieldTurnProgressing((AiState_o *)state, 0);
}


AiState_SaveData_o *AiNpcBattleServantData___c___getSaveData_b__31_0(
        AiNpcBattleServantData___c_o *this,
        NpcAiState_o *state,
        const MethodInfo *method)
{
  if ( !state )
    sub_2213CDC(this, 0);
  return AiState__getSaveData((AiState_o *)state, 0);
}


void AiNpcBattleServantData___c__DisplayClass32_0___ctor(
        AiNpcBattleServantData___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AiNpcBattleServantData___c__DisplayClass32_0___setSaveData_b__0(
        AiNpcBattleServantData___c__DisplayClass32_0_o *this,
        NpcAiState_o *npcAiState,
        const MethodInfo *method)
{
  AiNpcBattleServantData___c__DisplayClass32_0_o *v4; // x20
  struct BattleServantData_SaveData_o *save; // x8
  int32_t index; // w1
  System_Object_array *npcAiStates; // x0
  const MethodInfo_3814CA8 *v8; // x3

  v4 = this;
  if ( (byte_5973778 & 1) == 0 )
  {
    this = (AiNpcBattleServantData___c__DisplayClass32_0_o *)sub_2213A60(&Method_BasicHelper_IndexValue_AiState_SaveData___);
    byte_5973778 = 1;
  }
  save = v4->fields.save;
  if ( !save
    || (index = v4->fields.index,
        npcAiStates = (System_Object_array *)save->fields.npcAiStates,
        v8 = (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_AiState_SaveData___,
        v4->fields.index = index + 1,
        this = (AiNpcBattleServantData___c__DisplayClass32_0_o *)BasicHelper__IndexValue_object_(
                                                                   npcAiStates,
                                                                   index,
                                                                   0,
                                                                   v8),
        !npcAiState) )
  {
    sub_2213CDC(this, npcAiState);
  }
  AiState__setSaveData((AiState_o *)npcAiState, (AiState_SaveData_o *)this, 0);
}