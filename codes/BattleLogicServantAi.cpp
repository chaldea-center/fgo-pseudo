bool __fastcall BattleLogicServantAi__ExistThinking(
        BattleLogicServantAi_o *this,
        BattleServantData_o *svtData,
        int32_t procState,
        const MethodInfo *method)
{
  AiLogic_o *aiLogic; // x0

  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    sub_1B8880C(0LL, svtData);
  return AiLogic__checkThinking(aiLogic, svtData, procState, (BattleLogicBaseAi_o *)this, 0, 0LL);
}


bool __fastcall BattleLogicServantAi__GetAiActTargets(
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
  int32_t v19; // w3
  System_Int32_array *v20; // x0
  const MethodInfo *v21; // x6
  System_Int32_array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  if ( !skillLvEnt
    || (logic = this->fields.logic,
        funcId = skillLvEnt->fields.funcId,
        v9 = (BattleLogicBaseAi_o *)this,
        this = (BattleLogicServantAi_o *)SkillLvEntity__getDataValsList(skillLvEnt, 0LL),
        !logic) )
  {
    sub_1B8880C(this, arg);
  }
  v13 = BattleLogic__checkEnemyTargetFunction(logic, funcId, (DataVals_array *)this, 0LL);
  IsEnableTarget = SkillLvEntity__IsEnableTarget(skillLvEnt, v13, 0LL);
  v15 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicBaseAi_o *, Il2CppMethodPointer))v9->klass->vtable._6_get_OpponentSvtIds.method)(
                                v9,
                                v9->klass->vtable._7_Initialize.methodPtr);
  LogicTargetIds = BattleLogicBaseAi__GetLogicTargetIds(v9, arg, v15, IsEnableTarget, 0, 0LL, v16);
  *targets = LogicTargetIds;
  sub_1B88554((ServantStatusBattleListViewItem_o *)targets, (int32_t)LogicTargetIds, v18, v19);
  v20 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicBaseAi_o *, Il2CppMethodPointer))v9->klass->vtable._5_get_PartySvtIds.method)(
                                v9,
                                v9->klass->vtable._6_get_OpponentSvtIds.methodPtr);
  v22 = BattleLogicBaseAi__GetLogicTargetIds(v9, arg, v20, 0, 0, 0LL, v21);
  *ptTargets = v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)ptTargets, (int32_t)v22, v23, v24);
  return 1;
}


bool __fastcall BattleLogicServantAi__IsSealedCommandTask(
        BattleServantData_o *svtData,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleCommandData_o *command; // x1

  if ( task && (command = task->fields.command) != 0LL )
  {
    if ( !svtData )
      sub_1B8880C(0LL, command);
    return !BattleServantData__IsCardAction(svtData, command, 0LL);
  }
  else
  {
    return 0;
  }
}


BattleLogicTask_array *__fastcall BattleLogicServantAi__MakeTaskAiTargetAct(
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
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Action_object__o *v25; // x20
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5DCCD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleLogicTask__TypeInfo);
    sub_1B885B0(&BattleLogicServantAiTask_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1B885B0(&Method_BattleLogicServantAi___c__DisplayClass4_0__MakeTaskAiTargetAct_b__0__);
    sub_1B885B0(&BattleLogicServantAi___c__DisplayClass4_0_TypeInfo);
    byte_4A5DCCD = 1;
  }
  info = 0LL;
  v11 = sub_1B887FC(BattleLogicServantAi___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_18;
  *(_DWORD *)(v11 + 16) = timingPriority;
  v14 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !svtData )
    goto LABEL_18;
  AiStateManager = BattleServantData__get_AiStateManager(svtData, 0LL);
  if ( !AiStateManager )
    goto LABEL_18;
  AiStateManager = (AiStateManager_o *)AiStateManager__NextAiState(AiStateManager, procState, 0LL);
  if ( ((unsigned __int8)AiStateManager & 1) == 0 )
  {
    AiStateManager = BattleServantData__get_AiStateManager(svtData, 0LL);
    if ( AiStateManager )
    {
      AiStateManager__InitTimingAiIdx(AiStateManager, procState, 0LL);
      if ( v14 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v14,
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
             0LL);
  if ( Action )
  {
    AiStateManager = (AiStateManager_o *)((__int64 (__fastcall *)(BattleLogicServantAi_o *, BattleServantData_o *, AiEntity_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._19_procAiAct.method)(
                                           this,
                                           svtData,
                                           Action,
                                           (unsigned int)countAct,
                                           info,
                                           (unsigned int)procState,
                                           this->klass->vtable._20_ExistThinking.methodPtr);
    if ( !v14 )
      goto LABEL_18;
    System_Collections_Generic_List_object___AddRange(
      v14,
      (System_Collections_Generic_IEnumerable_T__o *)AiStateManager,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  logic = this->fields.logic;
  v18 = (BattleLogicServantAiTask_o *)sub_1B887FC(BattleLogicServantAiTask_TypeInfo);
  BattleLogicServantAiTask___ctor(v18, procState, svtData, logic, 0LL);
  if ( !v14
    || (items = v14->fields._items,
        v22 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v14->fields._version,
        !items) )
  {
LABEL_18:
    sub_1B8880C(AiStateManager, v13);
  }
  size = v14->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v18,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    v14->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v18, v19, v20);
  }
  v25 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleLogicTask__TypeInfo);
  System_Action_object____ctor(
    v25,
    (Il2CppObject *)v11,
    Method_BattleLogicServantAi___c__DisplayClass4_0__MakeTaskAiTargetAct_b__0__,
    0LL);
  System_Collections_Generic_List_object___ForEach(
    v14,
    (System_Action_T__o *)v25,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v14,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicServantAi__SetAddSkillTaskParam(
        BattleLogicServantAi_o *this,
        BattleLogicTask_o *addTask,
        const MethodInfo *method)
{
  if ( !addTask )
    sub_1B8880C(this, 0LL);
  addTask->fields.isSideEffectTriggerSkill = 1;
}


BattleLogicTask_array *__fastcall BattleLogicServantAi__TaskAiTargetAct(
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
        (TaskAiTargetAct = BattleServantData__get_AiStateManager(svtData, 0LL)) == 0LL) )
  {
    sub_1B8880C(TaskAiTargetAct, v8);
  }
  AiStateManager__AfterMakeAiActTask(TaskAiTargetAct, 0LL);
  return v9;
}


bool __fastcall BattleLogicServantAi__TryGetActorServant(
        BattleLogicServantAi_o *this,
        BattleServantData_o **svtData,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleServantData_o *currentCryptoKey; // x20
  __int64 methodPtr_low; // x10

  currentCryptoKey = (BattleServantData_o *)arg;
  if ( (byte_4A5DCCC & 1) == 0 )
  {
    sub_1B885B0(&ServantAiActArgument_TypeInfo);
    byte_4A5DCCC = 1;
  }
  if ( currentCryptoKey )
  {
    methodPtr_low = LOBYTE(ServantAiActArgument_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(currentCryptoKey->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (ServantAiActArgument_c *)currentCryptoKey->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantAiActArgument_TypeInfo )
    {
      currentCryptoKey = (BattleServantData_o *)currentCryptoKey->fields.userSvtId.fields.currentCryptoKey;
    }
    else
    {
      currentCryptoKey = 0LL;
    }
  }
  *svtData = currentCryptoKey;
  sub_1B88554((ServantStatusBattleListViewItem_o *)svtData, (int32_t)currentCryptoKey, (int32_t)arg, (int32_t)method);
  return currentCryptoKey != 0LL;
}


bool __fastcall BattleLogicServantAi__TryGetOverwriteTreasureDevice(
        BattleLogicServantAi_o *this,
        BattleServantData_o *svtData,
        System_Int32_array *actValArray,
        int32_t *id,
        int32_t *lv,
        const MethodInfo *method)
{
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4A5DCCE & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_int____76090680);
    byte_4A5DCCE = 1;
  }
  v10 = BasicHelper__IndexValue_int_(
          actValArray,
          0,
          0,
          (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
  *id = v10;
  if ( !svtData )
    sub_1B8880C(v10, v11);
  *lv = BasicHelper__IndexValue_int_(
          actValArray,
          1,
          svtData->fields.treasuredvcLevel,
          (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
  return *id > 0;
}


BattleLogicTask_array *__fastcall BattleLogicServantAi__procAiAct(
        BattleLogicServantAi_o *this,
        BattleServantData_o *svtData,
        AiEntity_o *aiEnt,
        int32_t countAct,
        AiLogic_AiInfo_o *aiInfo,
        int32_t procState,
        const MethodInfo *method)
{
  return 0LL;
}


void __fastcall BattleLogicServantAi___c__DisplayClass4_0___ctor(
        BattleLogicServantAi___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicServantAi___c__DisplayClass4_0___MakeTaskAiTargetAct_b__0(
        BattleLogicServantAi___c__DisplayClass4_0_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  BattleLogicTask__SetAiPriority(x, this->fields.timingPriority, 0LL);
}