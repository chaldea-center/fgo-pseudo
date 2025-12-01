void AiNpcBattleServantData___ctor(AiNpcBattleServantData_o *this, const MethodInfo *method)
{
  struct NpcAiState_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_HashSet_T__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CCA1BF & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE___ctor__);
    sub_1C713B0(&System_Collections_Generic_HashSet_AiLogic_PROC_STATE__TypeInfo);
    sub_1C713B0(&NpcAiState___TypeInfo);
    byte_4CCA1BF = 1;
  }
  v3 = (struct NpcAiState_array *)sub_1C71458(NpcAiState___TypeInfo, 0);
  this->fields.npcAiStates = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.npcAiStates, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_HashSet_T__o *)sub_1C715FC(System_Collections_Generic_HashSet_AiLogic_PROC_STATE__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v10,
    (const MethodInfo_36C2EE4 *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE___ctor__);
  this->fields.hashCheckingProcState = (struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *)v10;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.hashCheckingProcState,
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

  if ( (byte_4CCA1BB & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Add__);
    byte_4CCA1BB = 1;
  }
  hashCheckingProcState = (System_Collections_Generic_HashSet_T__o *)this->fields.hashCheckingProcState;
  if ( !hashCheckingProcState )
    sub_1C71608(0, *(_QWORD *)&procState);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    hashCheckingProcState,
    procState,
    (const MethodInfo_36C40E8 *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Add__);
}


void AiNpcBattleServantData__AfterActorNoblePhantasm(
        AiNpcBattleServantData_o *this,
        BattleSequenceManager_o *battleSeqManager,
        BattleActorControl_o *actor,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  AiNpcBattleServantData_o *v8; // x21
  UnityEngine_Object_o *TargetTransform; // x21
  AiNpcBattleServantData_o *v10; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4CCA1BE & 1) == 0 )
  {
    this = (AiNpcBattleServantData_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA1BE = 1;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(TargetTransform, 0, 0) )
  {
    this = (AiNpcBattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)actor, 0);
    if ( TargetTransform )
    {
      v10 = this;
      position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)TargetTransform, 0);
      if ( v10 )
      {
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)v10, position, 0);
        return;
      }
    }
LABEL_20:
    sub_1C71608(this, battleSeqManager);
  }
}


bool AiNpcBattleServantData__ExistAiThinking(
        AiNpcBattleServantData_o *this,
        BattleLogic_o *logic,
        int32_t procState,
        int32_t timingPriority,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
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
        sub_1C71610(this);
      v21 = (struct AiState_o *)npcAiStates->m_Items[v19];
      *p_CurrentAiState_k__BackingField = v21;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v11->fields._CurrentAiState_k__BackingField,
        (int32_t)v21,
        procState,
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
    sub_1C71608(this, logic);
  }
LABEL_10:
  *p_CurrentAiState_k__BackingField = CurrentAiState_k__BackingField;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v11->fields._CurrentAiState_k__BackingField,
    (int32_t)CurrentAiState_k__BackingField,
    procState,
    timingPriority,
    (System_String_o *)method,
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
  System_Func_T__TResult__o *_9__34_0; // x21
  Il2CppObject *v7; // x22
  struct AiNpcBattleServantData___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Object_array *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CCA1B9 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_int__NpcAiState___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_NpcAiState___);
    sub_1C713B0(&System_Func_int__NpcAiState__TypeInfo);
    sub_1C713B0(&Method_AiNpcBattleServantData___c__InitAiStates_b__34_0__);
    sub_1C713B0(&AiNpcBattleServantData___c_TypeInfo);
    byte_4CCA1B9 = 1;
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
      _9__34_0 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_int__NpcAiState__TypeInfo);
      System_Func_int__object____ctor(_9__34_0, v7, Method_AiNpcBattleServantData___c__InitAiStates_b__34_0__, 0);
      static_fields = AiNpcBattleServantData___c_TypeInfo->static_fields;
      static_fields->__9__34_0 = (struct System_Func_int__NpcAiState__o *)_9__34_0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__34_0,
        (int32_t)_9__34_0,
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
                                                                 (const MethodInfo_317EBF8 *)Method_System_Linq_Enumerable_Select_int__NpcAiState___);
    v16 = System_Linq_Enumerable__ToArray_object_(
            v15,
            (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_NpcAiState___);
    if ( !this )
      sub_1C71608(v16, v17);
    this->fields.npcAiStates = (struct NpcAiState_array *)v16;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.npcAiStates, (int32_t)v16, v18, v19, v20, v21, v22, v23);
  }
}


void AiNpcBattleServantData__PrevActorNoblePhantasm(
        AiNpcBattleServantData_o *this,
        BattleSequenceManager_o *battleSeqManager,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  if ( !battleSeqManager )
    sub_1C71608(this, 0);
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

  if ( (byte_4CCA1BC & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Remove__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__get_Count__);
    byte_4CCA1BC = 1;
  }
  hashCheckingProcState = this->fields.hashCheckingProcState;
  if ( !hashCheckingProcState
    || (hashCheckingProcState = (struct System_Collections_Generic_HashSet_AiLogic_PROC_STATE__o *)System_Collections_Generic_HashSet_Int32Enum___Remove(
                                                                                                     (System_Collections_Generic_HashSet_T__o *)hashCheckingProcState,
                                                                                                     procState,
                                                                                                     (const MethodInfo_36C37AC *)Method_System_Collections_Generic_HashSet_AiLogic_PROC_STATE__Remove__),
        (v6 = this->fields.hashCheckingProcState) == 0) )
  {
    sub_1C71608(hashCheckingProcState, *(_QWORD *)&procState);
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
    sub_1C71608(v10, v11);
  BattleServantData__setServantData_46574404(
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
  System_Action_object__o *_9__41_0; // x24
  Il2CppObject *v13; // x25
  struct AiNpcBattleServantData___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4CCA1BD & 1) == 0 )
  {
    sub_1C713B0(&System_Action_NpcAiState__TypeInfo);
    sub_1C713B0(&Method_BasicHelper_ForEach_NpcAiState___);
    sub_1C713B0(&Method_AiNpcBattleServantData___c__TurnProgress_b__41_0__);
    sub_1C713B0(&AiNpcBattleServantData___c_TypeInfo);
    byte_4CCA1BD = 1;
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
      _9__41_0 = (System_Action_object__o *)sub_1C715FC(System_Action_NpcAiState__TypeInfo);
      System_Action_object____ctor(_9__41_0, v13, Method_AiNpcBattleServantData___c__TurnProgress_b__41_0__, 0);
      static_fields = AiNpcBattleServantData___c_TypeInfo->static_fields;
      static_fields->__9__41_0 = (struct System_Action_NpcAiState__o *)_9__41_0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__41_0,
        (int32_t)_9__41_0,
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
      (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_NpcAiState___);
  }
  BattleServantData__turnBuffProgressing((BattleServantData_o *)this, v9, fieldIndiv, logic, 0, 0);
}


bool AiNpcBattleServantData__UpdateAiStateTargetIndex(
        AiNpcBattleServantData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CCA1BA & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_IndexValue_NpcAiState___);
    byte_4CCA1BA = 1;
  }
  v5 = BasicHelper__IndexValue_object_(
         (System_Object_array *)this->fields.npcAiStates,
         index,
         0,
         (const MethodInfo_31393D4 *)Method_BasicHelper_IndexValue_NpcAiState___);
  this->fields._CurrentAiState_k__BackingField = (struct AiState_o *)v5;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._CurrentAiState_k__BackingField,
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
  AiNpcBattleServantData___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *npcAiStates; // x21
  BattleServantData_SaveData_o *v8; // x20
  System_Func_object__object__o *_9__31_0; // x22
  Il2CppObject *v10; // x23
  struct AiNpcBattleServantData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Object_array *v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  BattleServantData_SaveData_o *result; // x0

  if ( (byte_4CCA1B7 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_NpcAiState__AiState_SaveData___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
    sub_1C713B0(&System_Func_NpcAiState__AiState_SaveData__TypeInfo);
    sub_1C713B0(&Method_AiNpcBattleServantData___c__getSaveData_b__31_0__);
    sub_1C713B0(&AiNpcBattleServantData___c_TypeInfo);
    byte_4CCA1B7 = 1;
  }
  SaveData = BattleServantData__getSaveData((BattleServantData_o *)this, data, 0);
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
    _9__31_0 = (System_Func_object__object__o *)sub_1C715FC(System_Func_NpcAiState__AiState_SaveData__TypeInfo);
    System_Func_object__object____ctor(_9__31_0, v10, Method_AiNpcBattleServantData___c__getSaveData_b__31_0__, 0);
    static_fields = AiNpcBattleServantData___c_TypeInfo->static_fields;
    static_fields->__9__31_0 = (struct System_Func_NpcAiState__AiState_SaveData__o *)_9__31_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__31_0,
      (int32_t)_9__31_0,
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
                                                               (const MethodInfo_31818B4 *)Method_System_Linq_Enumerable_Select_NpcAiState__AiState_SaveData___);
  v19 = System_Linq_Enumerable__ToArray_object_(
          v18,
          (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
  if ( !v8 )
    sub_1C71608(v19, v20);
  v8->fields.npcAiStates = (struct AiState_SaveData_array *)v19;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v8->fields.npcAiStates, (int32_t)v19, v21, v22, v23, v24, v25, v26);
  result = v8;
  *(_QWORD *)&v8->fields.npcActCount = *(_QWORD *)&this->fields._ActCount_k__BackingField;
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  bool v14; // w21
  System_Collections_Generic_IEnumerable_T__o *npcAiStates; // x22
  System_Action_object__o *v16; // x23
  __int64 v17; // x8

  if ( (byte_4CCA1B8 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_NpcAiState__TypeInfo);
    sub_1C713B0(&Method_BasicHelper_ForEach_NpcAiState___);
    sub_1C713B0(&Method_AiNpcBattleServantData___c__DisplayClass32_0__setSaveData_b__0__);
    sub_1C713B0(&AiNpcBattleServantData___c__DisplayClass32_0_TypeInfo);
    byte_4CCA1B8 = 1;
  }
  v5 = sub_1C715FC(AiNpcBattleServantData___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = save;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)save, v8, v9, v10, v11, v12, v13);
  v14 = BattleServantData__setSaveData((BattleServantData_o *)this, *(BattleServantData_SaveData_o **)(v5 + 16), 0);
  if ( v14 )
  {
    *(_DWORD *)(v5 + 24) = 0;
    npcAiStates = (System_Collections_Generic_IEnumerable_T__o *)this->fields.npcAiStates;
    v16 = (System_Action_object__o *)sub_1C715FC(System_Action_NpcAiState__TypeInfo);
    System_Action_object____ctor(
      v16,
      (Il2CppObject *)v5,
      Method_AiNpcBattleServantData___c__DisplayClass32_0__setSaveData_b__0__,
      0);
    BasicHelper__ForEach_object_(
      npcAiStates,
      (System_Action_T__o *)v16,
      (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_NpcAiState___);
    v17 = *(_QWORD *)(v5 + 16);
    if ( v17 )
    {
      *(_QWORD *)&this->fields._ActCount_k__BackingField = *(_QWORD *)(v17 + 184);
      return v14;
    }
LABEL_8:
    sub_1C71608(v6, v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._CurrentAiState_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._CurrentAiState_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CCA1C0 & 1) == 0 )
  {
    sub_1C713B0(&AiNpcBattleServantData___c_TypeInfo);
    byte_4CCA1C0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(AiNpcBattleServantData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AiNpcBattleServantData___c_TypeInfo->static_fields->__9 = (struct AiNpcBattleServantData___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)AiNpcBattleServantData___c_TypeInfo->static_fields,
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

  if ( (byte_4CCA1C1 & 1) == 0 )
  {
    sub_1C713B0(&NpcAiState_TypeInfo);
    byte_4CCA1C1 = 1;
  }
  v4 = (NpcAiState_o *)sub_1C715FC(NpcAiState_TypeInfo);
  NpcAiState___ctor(v4, id, 0);
  return v4;
}


void AiNpcBattleServantData___c___TurnProgress_b__41_0(
        AiNpcBattleServantData___c_o *this,
        NpcAiState_o *state,
        const MethodInfo *method)
{
  if ( !state )
    sub_1C71608(this, 0);
  AiState__fieldTurnProgressing((AiState_o *)state, 0);
}


AiState_SaveData_o *AiNpcBattleServantData___c___getSaveData_b__31_0(
        AiNpcBattleServantData___c_o *this,
        NpcAiState_o *state,
        const MethodInfo *method)
{
  if ( !state )
    sub_1C71608(this, 0);
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

  v4 = this;
  if ( (byte_4CCA1C2 & 1) == 0 )
  {
    this = (AiNpcBattleServantData___c__DisplayClass32_0_o *)sub_1C713B0(&Method_BasicHelper_IndexValue_AiState_SaveData___);
    byte_4CCA1C2 = 1;
  }
  save = v4->fields.save;
  if ( !save
    || (index = v4->fields.index,
        npcAiStates = (System_Object_array *)save->fields.npcAiStates,
        v4->fields.index = index + 1,
        this = (AiNpcBattleServantData___c__DisplayClass32_0_o *)BasicHelper__IndexValue_object_(
                                                                   npcAiStates,
                                                                   index,
                                                                   0,
                                                                   (const MethodInfo_31393D4 *)Method_BasicHelper_IndexValue_AiState_SaveData___),
        !npcAiState) )
  {
    sub_1C71608(this, npcAiState);
  }
  AiState__setSaveData((AiState_o *)npcAiState, (AiState_SaveData_o *)this, 0);
}