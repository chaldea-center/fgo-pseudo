bool __fastcall BattleLogicServantAi__ExistThinking(
        BattleLogicServantAi_o *this,
        BattleServantData_o *svtData,
        int32_t procState,
        const MethodInfo *method)
{
  AiLogic_o *aiLogic; // x0

  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    sub_1C13F80(0LL, svtData);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Int32_array *v24; // x0
  const MethodInfo *v25; // x6
  System_Int32_array *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( !skillLvEnt
    || (logic = this->fields.logic,
        funcId = skillLvEnt->fields.funcId,
        v9 = (BattleLogicBaseAi_o *)this,
        this = (BattleLogicServantAi_o *)SkillLvEntity__getDataValsList(skillLvEnt, 0LL),
        !logic) )
  {
    sub_1C13F80(this, arg);
  }
  v13 = BattleLogic__checkEnemyTargetFunction(logic, funcId, (DataVals_array *)this, 0LL);
  IsEnableTarget = SkillLvEntity__IsEnableTarget(skillLvEnt, v13, 0LL);
  v15 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicBaseAi_o *, Il2CppMethodPointer))v9->klass->vtable._6_get_OpponentSvtIds.method)(
                                v9,
                                v9->klass->vtable._7_Initialize.methodPtr);
  LogicTargetIds = BattleLogicBaseAi__GetLogicTargetIds(v9, arg, v15, IsEnableTarget, 0, 0LL, v16);
  *targets = LogicTargetIds;
  sub_1C13CC8((PartyOrganizationUtility_o *)targets, (int64_t)LogicTargetIds, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicBaseAi_o *, Il2CppMethodPointer))v9->klass->vtable._5_get_PartySvtIds.method)(
                                v9,
                                v9->klass->vtable._6_get_OpponentSvtIds.methodPtr);
  v26 = BattleLogicBaseAi__GetLogicTargetIds(v9, arg, v24, 0, 0, 0LL, v25);
  *ptTargets = v26;
  sub_1C13CC8((PartyOrganizationUtility_o *)ptTargets, (int64_t)v26, v27, v28, v29, v30, v31, v32);
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
      sub_1C13F80(0LL, command);
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
  System_Collections_Generic_List_object__o *v23; // x19
  struct BattleData_o *data; // x8
  AiEntity_o *Action; // x0
  BattleLogic_o *logic; // x24
  BattleLogicServantAiTask_o *v27; // x23
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Action_object__o *v38; // x20
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BB736B & 1) == 0 )
  {
    sub_1C13D24(&System_Action_BattleLogicTask__TypeInfo, svtData);
    sub_1C13D24(&BattleLogicServantAiTask_TypeInfo, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v16);
    sub_1C13D24(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v17);
    sub_1C13D24(&Method_BattleLogicServantAi___c__DisplayClass4_0__MakeTaskAiTargetAct_b__0__, v18);
    sub_1C13D24(&BattleLogicServantAi___c__DisplayClass4_0_TypeInfo, v19);
    byte_4BB736B = 1;
  }
  info = 0LL;
  v20 = sub_1C13F70(BattleLogicServantAi___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_18;
  *(_DWORD *)(v20 + 16) = timingPriority;
  v23 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
      if ( v23 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v23,
                                          (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    AiStateManager = (AiStateManager_o *)((__int64 (__fastcall *)(BattleLogicServantAi_o *, BattleServantData_o *, AiEntity_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._20_procAiAct.method)(
                                           this,
                                           svtData,
                                           Action,
                                           (unsigned int)countAct,
                                           info,
                                           (unsigned int)procState,
                                           this->klass->vtable._21_ExistThinking.methodPtr);
    if ( !v23 )
      goto LABEL_18;
    System_Collections_Generic_List_object___AddRange(
      v23,
      (System_Collections_Generic_IEnumerable_T__o *)AiStateManager,
      (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  logic = this->fields.logic;
  v27 = (BattleLogicServantAiTask_o *)sub_1C13F70(BattleLogicServantAiTask_TypeInfo);
  BattleLogicServantAiTask___ctor(v27, procState, svtData, logic, 0LL);
  if ( !v23
    || (items = v23->fields._items,
        v35 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v23->fields._version,
        !items) )
  {
LABEL_18:
    sub_1C13F80(AiStateManager, v22);
  }
  size = v23->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v23,
      (Il2CppObject *)v27,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &items->obj.klass + size;
    v23->fields._size = size + 1;
    v37[4] = (Il2CppClass *)v27;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v27, v28, v29, v30, v31, v32, v33);
  }
  v38 = (System_Action_object__o *)sub_1C13F70(System_Action_BattleLogicTask__TypeInfo);
  System_Action_object____ctor(
    v38,
    (Il2CppObject *)v20,
    Method_BattleLogicServantAi___c__DisplayClass4_0__MakeTaskAiTargetAct_b__0__,
    0LL);
  System_Collections_Generic_List_object___ForEach(
    v23,
    (System_Action_T__o *)v38,
    (const MethodInfo_362DC0C *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v23,
                                    (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicServantAi__SetAddSkillTaskParam(
        BattleLogicServantAi_o *this,
        BattleLogicTask_o *addTask,
        const MethodInfo *method)
{
  if ( !addTask )
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(TaskAiTargetAct, v8);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleServantData_o *currentCryptoKey; // x20
  __int64 methodPtr_low; // x10

  currentCryptoKey = (BattleServantData_o *)arg;
  if ( (byte_4BB736A & 1) == 0 )
  {
    sub_1C13D24(&ServantAiActArgument_TypeInfo, svtData);
    byte_4BB736A = 1;
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
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)svtData,
    (int64_t)currentCryptoKey,
    (int64_t)arg,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4BB736C & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_IndexValue_int____77472272, svtData);
    byte_4BB736C = 1;
  }
  v10 = BasicHelper__IndexValue_int_(
          actValArray,
          0,
          0,
          (const MethodInfo_2F7DF50 *)Method_BasicHelper_IndexValue_int____77472272);
  *id = v10;
  if ( !svtData )
    sub_1C13F80(v10, v11);
  *lv = BasicHelper__IndexValue_int_(
          actValArray,
          1,
          svtData->fields.treasuredvcLevel,
          (const MethodInfo_2F7DF50 *)Method_BasicHelper_IndexValue_int____77472272);
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
    sub_1C13F80(this, 0LL);
  BattleLogicTask__SetAiPriority(x, this->fields.timingPriority, 0LL);
}