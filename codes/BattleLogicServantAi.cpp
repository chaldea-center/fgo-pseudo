bool __fastcall BattleLogicServantAi__ExistThinking(
        BattleLogicServantAi_o *this,
        BattleServantData_o *svtData,
        int32_t procState,
        const MethodInfo *method)
{
  AiLogic_o *aiLogic; // x0

  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    sub_1B64324(0LL);
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
    sub_1B64324(this);
  }
  v13 = BattleLogic__checkEnemyTargetFunction(logic, funcId, (DataVals_array *)this, 0LL);
  IsEnableTarget = SkillLvEntity__IsEnableTarget(skillLvEnt, v13, 0LL);
  v15 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicBaseAi_o *, Il2CppMethodPointer))v9->klass->vtable._6_get_OpponentSvtIds.method)(
                                v9,
                                v9->klass->vtable._7_Initialize.methodPtr);
  LogicTargetIds = BattleLogicBaseAi__GetLogicTargetIds(v9, arg, v15, IsEnableTarget, 0, 0LL, v16);
  *targets = LogicTargetIds;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)targets, (int32_t)LogicTargetIds, v18, v19);
  v20 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicBaseAi_o *, Il2CppMethodPointer))v9->klass->vtable._5_get_PartySvtIds.method)(
                                v9,
                                v9->klass->vtable._6_get_OpponentSvtIds.methodPtr);
  v22 = BattleLogicBaseAi__GetLogicTargetIds(v9, arg, v20, 0, 0, 0LL, v21);
  *ptTargets = v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)ptTargets, (int32_t)v22, v23, v24);
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
      sub_1B64324(0LL);
    return !BattleServantData__isCardTypeAction(svtData, command, 0LL);
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicServantAi__MakeTaskAiTargetAct(
        BattleLogicServantAi_o *this,
        BattleServantData_o *svtData,
        int32_t procState,
        int32_t timingPriority,
        int32_t countAct,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x22
  AiStateManager_o *AiStateManager; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x19
  struct BattleData_o *data; // x8
  AiEntity_o *Action; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  BattleLogic_o *logic; // x24
  BattleLogicServantAiTask_o *v30; // x23
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  System_Action_object__o *v39; // x20
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FEF0F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleLogicTask__TypeInfo, svtData);
    sub_1B640C8(&BattleLogicServantAiTask_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v16);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v17);
    sub_1B640C8(&Method_BattleLogicServantAi___c__DisplayClass4_0__MakeTaskAiTargetAct_b__0__, v18);
    sub_1B640C8(&BattleLogicServantAi___c__DisplayClass4_0_TypeInfo, v19);
    byte_49FEF0F = 1;
  }
  info = 0LL;
  v20 = sub_1B64314(BattleLogicServantAi___c__DisplayClass4_0_TypeInfo, svtData, *(_QWORD *)&procState);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_18;
  *(_DWORD *)(v20 + 16) = timingPriority;
  v24 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       v22,
                                                       v23);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
      if ( v24 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v24,
                                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
             *(_DWORD *)(v20 + 16),
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
    if ( !v24 )
      goto LABEL_18;
    System_Collections_Generic_List_object___AddRange(
      v24,
      (System_Collections_Generic_IEnumerable_T__o *)AiStateManager,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  logic = this->fields.logic;
  v30 = (BattleLogicServantAiTask_o *)sub_1B64314(BattleLogicServantAiTask_TypeInfo, v27, v28);
  BattleLogicServantAiTask___ctor(v30, procState, svtData, logic, 0LL);
  if ( !v24
    || (items = v24->fields._items,
        v34 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v24->fields._version,
        !items) )
  {
LABEL_18:
    sub_1B64324(AiStateManager);
  }
  size = v24->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v24,
      (Il2CppObject *)v30,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    v24->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v30;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v30, v31, v32);
  }
  v39 = (System_Action_object__o *)sub_1B64314(System_Action_BattleLogicTask__TypeInfo, v37, v38);
  System_Action_object____ctor(
    v39,
    (Il2CppObject *)v20,
    Method_BattleLogicServantAi___c__DisplayClass4_0__MakeTaskAiTargetAct_b__0__,
    0LL);
  System_Collections_Generic_List_object___ForEach(
    v24,
    (System_Action_T__o *)v39,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v24,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicServantAi__SetAddSkillTaskParam(
        BattleLogicServantAi_o *this,
        BattleLogicTask_o *addTask,
        const MethodInfo *method)
{
  if ( !addTask )
    sub_1B64324(this);
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
        (TaskAiTargetAct = BattleServantData__get_AiStateManager(svtData, 0LL)) == 0LL) )
  {
    sub_1B64324(TaskAiTargetAct);
  }
  AiStateManager__AfterMakeAiActTask(TaskAiTargetAct, 0LL);
  return v8;
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
  if ( (byte_49FEF0E & 1) == 0 )
  {
    sub_1B640C8(&ServantAiActArgument_TypeInfo, svtData);
    byte_49FEF0E = 1;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)svtData, (int32_t)currentCryptoKey, (int32_t)arg, (int32_t)method);
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

  if ( (byte_49FEF10 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_int____75711232, svtData);
    byte_49FEF10 = 1;
  }
  v10 = BasicHelper__IndexValue_int_(
          actValArray,
          0,
          0,
          (const MethodInfo_2E28154 *)Method_BasicHelper_IndexValue_int____75711232);
  *id = v10;
  if ( !svtData )
    sub_1B64324(v10);
  *lv = BasicHelper__IndexValue_int_(
          actValArray,
          1,
          svtData->fields.treasuredvcLevel,
          (const MethodInfo_2E28154 *)Method_BasicHelper_IndexValue_int____75711232);
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
    sub_1B64324(this);
  BattleLogicTask__SetAiPriority(x, this->fields.timingPriority, 0LL);
}