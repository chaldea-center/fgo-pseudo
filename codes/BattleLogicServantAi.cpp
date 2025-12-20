bool BattleLogicServantAi__ExistThinking(
        BattleLogicServantAi_o *this,
        BattleServantData_o *svtData,
        int32_t procState,
        const MethodInfo *method)
{
  AiLogic_o *aiLogic; // x0

  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    sub_1C942F0(0, svtData);
  return AiLogic__checkThinking(aiLogic, svtData, procState, (BattleLogicBaseAi_o *)this, 0, 0);
}


bool BattleLogicServantAi__GetAiActTargets(
        BattleLogicServantAi_o *this,
        BaseAiActArgument_o *arg,
        SkillLvEntity_o *skillLvEnt,
        System_Int32_array **targets,
        System_Int32_array **ptTargets,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x24
  System_Int32_array *funcId; // x25
  BattleLogicBaseAi_o *v9; // x21
  bool IsEnableTarget; // w0
  bool v14; // w23
  System_Int32_array *v15; // x0
  const MethodInfo *v16; // x6
  System_Int32_array *LogicTargetIds; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Int32_array *v24; // x0
  const MethodInfo *v25; // x6
  System_Int32_array *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7

  if ( !skillLvEnt
    || (logic = this->fields.logic,
        funcId = skillLvEnt->fields.funcId,
        v9 = (BattleLogicBaseAi_o *)this,
        this = (BattleLogicServantAi_o *)SkillLvEntity__getDataValsList(skillLvEnt, 0),
        !logic)
    || (this = (BattleLogicServantAi_o *)BattleLogic__checkEnemyTargetFunction(logic, funcId, (DataVals_array *)this, 0),
        !arg)
    || !arg->fields._AiActEnt_k__BackingField )
  {
    sub_1C942F0(this, arg);
  }
  IsEnableTarget = AiActEntity__IsEnableTarget(arg->fields._AiActEnt_k__BackingField, (unsigned __int8)this & 1, 0);
  v14 = SkillLvEntity__IsEnableTarget(skillLvEnt, IsEnableTarget, 0);
  v15 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicBaseAi_o *, const MethodInfo *))v9->klass->vtable._6_get_OpponentSvtIds.methodPtr)(
                                v9,
                                v9->klass->vtable._6_get_OpponentSvtIds.method);
  LogicTargetIds = BattleLogicBaseAi__GetLogicTargetIds(v9, arg, v15, v14, 0, 0, v16);
  *targets = LogicTargetIds;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)targets, (int32_t)LogicTargetIds, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicBaseAi_o *, const MethodInfo *))v9->klass->vtable._5_get_PartySvtIds.methodPtr)(
                                v9,
                                v9->klass->vtable._5_get_PartySvtIds.method);
  v26 = BattleLogicBaseAi__GetLogicTargetIds(v9, arg, v24, 0, 0, 0, v25);
  *ptTargets = v26;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)ptTargets, (int32_t)v26, v27, v28, v29, v30, v31, v32);
  return 1;
}


bool BattleLogicServantAi__IsSealedCommandTask(
        BattleServantData_o *svtData,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleCommandData_o *command; // x1

  if ( task && (command = task->fields.command) != 0 )
  {
    if ( !svtData )
      sub_1C942F0(0, command);
    return !BattleServantData__IsCardAction(svtData, command, 0);
  }
  else
  {
    return 0;
  }
}


BattleLogicTask_array *BattleLogicServantAi__MakeTaskAiTargetAct(
        BattleLogicServantAi_o *this,
        BattleServantData_o *svtData,
        int32_t procState,
        int32_t timingPriority,
        int32_t countAct,
        const MethodInfo *method)
{
  __int64 v11; // x22
  AiStateManager_o *AiStateManager; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x19
  struct BattleData_o *data; // x8
  AiEntity_o *Action; // x0
  BattleLogic_o *logic; // x24
  BattleLogicServantAiTask_o *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Action_object__o *v29; // x20
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2F95B & 1) == 0 )
  {
    sub_1C94098(&System_Action_BattleLogicTask__TypeInfo);
    sub_1C94098(&BattleLogicServantAiTask_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C94098(&Method_BattleLogicServantAi___c__DisplayClass4_0__MakeTaskAiTargetAct_b__0__);
    sub_1C94098(&BattleLogicServantAi___c__DisplayClass4_0_TypeInfo);
    byte_4D2F95B = 1;
  }
  info = 0;
  v11 = sub_1C942E4(BattleLogicServantAi___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_18;
  *(_DWORD *)(v11 + 16) = timingPriority;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !svtData )
    goto LABEL_18;
  AiStateManager = BattleServantData__get_AiStateManager(svtData, 0);
  if ( !AiStateManager )
    goto LABEL_18;
  AiStateManager = (AiStateManager_o *)AiStateManager__NextAiState(AiStateManager, procState, 0);
  if ( ((unsigned __int8)AiStateManager & 1) == 0 )
  {
    AiStateManager = BattleServantData__get_AiStateManager(svtData, 0);
    if ( AiStateManager )
    {
      AiStateManager__InitTimingAiIdx(AiStateManager, procState, 0);
      if ( v14 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v14,
                                          (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
    goto LABEL_18;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_18;
  AiStateManager = (AiStateManager_o *)this->fields.aiLogic;
  if ( !AiStateManager )
    goto LABEL_18;
  Action = AiLogic__getAction(
             (AiLogic_o *)AiStateManager,
             svtData,
             procState,
             data->fields.turnCount,
             countAct,
             (BattleLogicBaseAi_o *)this,
             &info,
             *(_DWORD *)(v11 + 16),
             0);
  if ( Action )
  {
    AiStateManager = (AiStateManager_o *)((__int64 (__fastcall *)(BattleLogicServantAi_o *, BattleServantData_o *, AiEntity_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, const MethodInfo *))this->klass->vtable._27_procAiAct.methodPtr)(
                                           this,
                                           svtData,
                                           Action,
                                           (unsigned int)countAct,
                                           info,
                                           (unsigned int)procState,
                                           this->klass->vtable._27_procAiAct.method);
    if ( !v14 )
      goto LABEL_18;
    System_Collections_Generic_List_object___AddRange(
      v14,
      (System_Collections_Generic_IEnumerable_T__o *)AiStateManager,
      (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  logic = this->fields.logic;
  v18 = (BattleLogicServantAiTask_o *)sub_1C942E4(BattleLogicServantAiTask_TypeInfo);
  BattleLogicServantAiTask___ctor(v18, procState, svtData, logic, 0);
  if ( !v14
    || (items = v14->fields._items,
        v26 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v14->fields._version,
        !items) )
  {
LABEL_18:
    sub_1C942F0(AiStateManager, v13);
  }
  size = v14->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v18,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &items->obj.klass + size;
    v14->fields._size = size + 1;
    v28[4] = (Il2CppClass *)v18;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)v18, v19, v20, v21, v22, v23, v24);
  }
  v29 = (System_Action_object__o *)sub_1C942E4(System_Action_BattleLogicTask__TypeInfo);
  System_Action_object____ctor(
    v29,
    (Il2CppObject *)v11,
    Method_BattleLogicServantAi___c__DisplayClass4_0__MakeTaskAiTargetAct_b__0__,
    0);
  System_Collections_Generic_List_object___ForEach(
    v14,
    (System_Action_T__o *)v29,
    (const MethodInfo_386B874 *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v14,
                                    (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void BattleLogicServantAi__SetAddSkillTaskParam(
        BattleLogicServantAi_o *this,
        BattleLogicTask_o *addTask,
        const MethodInfo *method)
{
  if ( !addTask )
    sub_1C942F0(this, 0);
  addTask->fields.isSideEffectTriggerSkill = 1;
}


BattleLogicTask_array *BattleLogicServantAi__TaskAiTargetAct(
        BattleLogicServantAi_o *this,
        BattleServantData_o *svtData,
        int32_t procState,
        int32_t timingPriority,
        int32_t countAct,
        const MethodInfo *method)
{
  AiStateManager_o *TaskAiTargetAct; // x0
  __int64 v8; // x1
  BattleLogicTask_array *v9; // x19

  TaskAiTargetAct = (AiStateManager_o *)BattleLogicServantAi__MakeTaskAiTargetAct(
                                          this,
                                          svtData,
                                          procState,
                                          timingPriority,
                                          countAct,
                                          method);
  if ( !svtData
    || (v9 = (BattleLogicTask_array *)TaskAiTargetAct,
        (TaskAiTargetAct = BattleServantData__get_AiStateManager(svtData, 0)) == 0) )
  {
    sub_1C942F0(TaskAiTargetAct, v8);
  }
  AiStateManager__AfterMakeAiActTask(TaskAiTargetAct, 0);
  return v9;
}


bool BattleLogicServantAi__TryGetActorServant(
        BattleLogicServantAi_o *this,
        BattleServantData_o **svtData,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleServantData_o *hiddenValue; // x20
  __int64 naturalAligment; // x10

  hiddenValue = (BattleServantData_o *)arg;
  if ( (byte_4D2F95A & 1) == 0 )
  {
    sub_1C94098(&ServantAiActArgument_TypeInfo);
    byte_4D2F95A = 1;
  }
  if ( hiddenValue )
  {
    naturalAligment = ServantAiActArgument_TypeInfo->_2.naturalAligment;
    if ( hiddenValue->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (ServantAiActArgument_c *)hiddenValue->klass->_2.typeHierarchy[naturalAligment - 1] == ServantAiActArgument_TypeInfo )
    {
      hiddenValue = (BattleServantData_o *)hiddenValue->fields.userSvtId.fields.hiddenValue;
    }
    else
    {
      hiddenValue = 0;
    }
  }
  *svtData = hiddenValue;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)svtData,
    (int32_t)hiddenValue,
    (int32_t)arg,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  return hiddenValue != 0;
}


bool BattleLogicServantAi__TryGetOverwriteTreasureDevice(
        BattleLogicServantAi_o *this,
        BattleServantData_o *svtData,
        System_Int32_array *actValArray,
        int32_t *id,
        int32_t *lv,
        const MethodInfo *method)
{
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4D2F95C & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_IndexValue_int____79050152);
    byte_4D2F95C = 1;
  }
  v10 = BasicHelper__IndexValue_int_(
          actValArray,
          0,
          0,
          (const MethodInfo_318A584 *)Method_BasicHelper_IndexValue_int____79050152);
  *id = v10;
  if ( !svtData )
    sub_1C942F0(v10, v11);
  *lv = BasicHelper__IndexValue_int_(
          actValArray,
          1,
          svtData->fields.treasuredvcLevel,
          (const MethodInfo_318A584 *)Method_BasicHelper_IndexValue_int____79050152);
  return *id > 0;
}


BattleLogicTask_array *BattleLogicServantAi__procAiAct(
        BattleLogicServantAi_o *this,
        BattleServantData_o *svtData,
        AiEntity_o *aiEnt,
        int32_t countAct,
        AiLogic_AiInfo_o *aiInfo,
        int32_t procState,
        const MethodInfo *method)
{
  return 0;
}


void BattleLogicServantAi___c__DisplayClass4_0___ctor(
        BattleLogicServantAi___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicServantAi___c__DisplayClass4_0___MakeTaskAiTargetAct_b__0(
        BattleLogicServantAi___c__DisplayClass4_0_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  BattleLogicTask__SetAiPriority(x, this->fields.timingPriority, 0);
}