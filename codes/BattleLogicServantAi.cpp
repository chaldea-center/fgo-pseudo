bool BattleLogicServantAi__ExistThinking(
        BattleLogicServantAi_o *this,
        BattleServantData_o *svtData,
        int32_t procState,
        const MethodInfo *method)
{
  AiLogic_o *aiLogic; // x0

  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    sub_1C372B4(0);
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
  bool v13; // w0
  bool IsEnableTarget; // w23
  System_Int32_array *v15; // x0
  const MethodInfo *v16; // x6
  System_Int32_array *LogicTargetIds; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Int32_array *v20; // x0
  const MethodInfo *v21; // x6
  System_Int32_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( !skillLvEnt
    || (logic = this->fields.logic,
        funcId = skillLvEnt->fields.funcId,
        v9 = (BattleLogicBaseAi_o *)this,
        this = (BattleLogicServantAi_o *)SkillLvEntity__getDataValsList(skillLvEnt, 0),
        !logic) )
  {
    sub_1C372B4(this);
  }
  v13 = BattleLogic__checkEnemyTargetFunction(logic, funcId, (DataVals_array *)this, 0);
  IsEnableTarget = SkillLvEntity__IsEnableTarget(skillLvEnt, v13, 0);
  v15 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicBaseAi_o *, const MethodInfo *))v9->klass->vtable._6_get_OpponentSvtIds.methodPtr)(
                                v9,
                                v9->klass->vtable._6_get_OpponentSvtIds.method);
  LogicTargetIds = BattleLogicBaseAi__GetLogicTargetIds(v9, arg, v15, IsEnableTarget, 0, 0, v16);
  *targets = LogicTargetIds;
  sub_1C36FFC((CGThumbnailListItem_o *)targets, (int32_t)LogicTargetIds, v18, v19);
  v20 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicBaseAi_o *, const MethodInfo *))v9->klass->vtable._5_get_PartySvtIds.methodPtr)(
                                v9,
                                v9->klass->vtable._5_get_PartySvtIds.method);
  v22 = BattleLogicBaseAi__GetLogicTargetIds(v9, arg, v20, 0, 0, 0, v21);
  *ptTargets = v22;
  sub_1C36FFC((CGThumbnailListItem_o *)ptTargets, (int32_t)v22, v23, v24);
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
      sub_1C372B4(0);
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
  System_Collections_Generic_List_object__o *v13; // x19
  struct BattleData_o *data; // x8
  AiEntity_o *Action; // x0
  BattleLogic_o *logic; // x24
  BattleLogicServantAiTask_o *v17; // x23
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Action_object__o *v24; // x20
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C46014 & 1) == 0 )
  {
    sub_1C37058(&System_Action_BattleLogicTask__TypeInfo);
    sub_1C37058(&BattleLogicServantAiTask_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C37058(&Method_BattleLogicServantAi___c__DisplayClass4_0__MakeTaskAiTargetAct_b__0__);
    sub_1C37058(&BattleLogicServantAi___c__DisplayClass4_0_TypeInfo);
    byte_4C46014 = 1;
  }
  info = 0;
  v11 = sub_1C372A4(BattleLogicServantAi___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_18;
  *(_DWORD *)(v11 + 16) = timingPriority;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
      if ( v13 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v13,
                                          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    AiStateManager = (AiStateManager_o *)((__int64 (__fastcall *)(BattleLogicServantAi_o *, BattleServantData_o *, AiEntity_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, const MethodInfo *))this->klass->vtable._22_procAiAct.methodPtr)(
                                           this,
                                           svtData,
                                           Action,
                                           (unsigned int)countAct,
                                           info,
                                           (unsigned int)procState,
                                           this->klass->vtable._22_procAiAct.method);
    if ( !v13 )
      goto LABEL_18;
    System_Collections_Generic_List_object___AddRange(
      v13,
      (System_Collections_Generic_IEnumerable_T__o *)AiStateManager,
      (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  logic = this->fields.logic;
  v17 = (BattleLogicServantAiTask_o *)sub_1C372A4(BattleLogicServantAiTask_TypeInfo);
  BattleLogicServantAiTask___ctor(v17, procState, svtData, logic, 0);
  if ( !v13
    || (items = v13->fields._items,
        v21 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v13->fields._version,
        !items) )
  {
LABEL_18:
    sub_1C372B4(AiStateManager);
  }
  size = v13->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)v17,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v17;
    sub_1C36FFC((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v17, v18, v19);
  }
  v24 = (System_Action_object__o *)sub_1C372A4(System_Action_BattleLogicTask__TypeInfo);
  System_Action_object____ctor(
    v24,
    (Il2CppObject *)v11,
    Method_BattleLogicServantAi___c__DisplayClass4_0__MakeTaskAiTargetAct_b__0__,
    0);
  System_Collections_Generic_List_object___ForEach(
    v13,
    (System_Action_T__o *)v24,
    (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void BattleLogicServantAi__SetAddSkillTaskParam(
        BattleLogicServantAi_o *this,
        BattleLogicTask_o *addTask,
        const MethodInfo *method)
{
  if ( !addTask )
    sub_1C372B4(this);
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
  BattleLogicTask_array *v8; // x19

  TaskAiTargetAct = (AiStateManager_o *)BattleLogicServantAi__MakeTaskAiTargetAct(
                                          this,
                                          svtData,
                                          procState,
                                          timingPriority,
                                          countAct,
                                          method);
  if ( !svtData
    || (v8 = (BattleLogicTask_array *)TaskAiTargetAct,
        (TaskAiTargetAct = BattleServantData__get_AiStateManager(svtData, 0)) == 0) )
  {
    sub_1C372B4(TaskAiTargetAct);
  }
  AiStateManager__AfterMakeAiActTask(TaskAiTargetAct, 0);
  return v8;
}


bool BattleLogicServantAi__TryGetActorServant(
        BattleLogicServantAi_o *this,
        BattleServantData_o **svtData,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleServantData_o *hiddenValue; // x20
  __int64 naturalAligment; // x10

  hiddenValue = (BattleServantData_o *)arg;
  if ( (byte_4C46013 & 1) == 0 )
  {
    sub_1C37058(&ServantAiActArgument_TypeInfo);
    byte_4C46013 = 1;
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
  sub_1C36FFC((CGThumbnailListItem_o *)svtData, (int32_t)hiddenValue, (int32_t)arg, method);
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

  if ( (byte_4C46015 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_IndexValue_int____78110424);
    byte_4C46015 = 1;
  }
  v10 = BasicHelper__IndexValue_int_(
          actValArray,
          0,
          0,
          (const MethodInfo_30D6114 *)Method_BasicHelper_IndexValue_int____78110424);
  *id = v10;
  if ( !svtData )
    sub_1C372B4(v10);
  *lv = BasicHelper__IndexValue_int_(
          actValArray,
          1,
          svtData->fields.treasuredvcLevel,
          (const MethodInfo_30D6114 *)Method_BasicHelper_IndexValue_int____78110424);
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
    sub_1C372B4(this);
  BattleLogicTask__SetAiPriority(x, this->fields.timingPriority, 0);
}