void __fastcall BattleLogicServantAi___ctor(BattleLogicServantAi_o *this, const MethodInfo *method)
{
  BattleLogicBaseAi___ctor((BattleLogicBaseAi_o *)this, 0LL);
}


bool __fastcall BattleLogicServantAi__ExistThinking(
        BattleLogicServantAi_o *this,
        BattleServantData_o *svtData,
        int32_t procState,
        const MethodInfo *method)
{
  AiLogic_o *aiLogic; // x0

  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    sub_B2C434(0LL, svtData);
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
  System_Int32_array *LogicTargetIds; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array *v23; // x0
  System_Int32_array *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( !skillLvEnt
    || (logic = this->fields.logic,
        funcId = skillLvEnt->fields.funcId,
        v9 = (BattleLogicBaseAi_o *)this,
        this = (BattleLogicServantAi_o *)SkillLvEntity__getDataValsList(skillLvEnt, 0LL),
        !logic) )
  {
    sub_B2C434(this, arg);
  }
  v13 = BattleLogic__checkEnemyTargetFunction(logic, funcId, (DataVals_array *)this, 0LL);
  IsEnableTarget = SkillLvEntity__IsEnableTarget(skillLvEnt, v13, 0LL);
  v15 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicBaseAi_o *, Il2CppMethodPointer))v9->klass->vtable._6_get_OpponentSvtIds.method)(
                                v9,
                                v9->klass->vtable._7_Initialize.methodPtr);
  LogicTargetIds = BattleLogicBaseAi__GetLogicTargetIds(v9, arg, v15, IsEnableTarget, 0, 0LL, 0LL);
  *targets = LogicTargetIds;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)targets,
    (System_Int32_array **)LogicTargetIds,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicBaseAi_o *, Il2CppMethodPointer))v9->klass->vtable._5_get_PartySvtIds.method)(
                                v9,
                                v9->klass->vtable._6_get_OpponentSvtIds.methodPtr);
  v24 = BattleLogicBaseAi__GetLogicTargetIds(v9, arg, v23, 0, 0, 0LL, 0LL);
  *ptTargets = v24;
  sub_B2C2F8((BattleServantConfConponent_o *)ptTargets, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
  return 1;
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
  __int64 v20; // x1
  BattleLogicServantAi___c__DisplayClass4_0_o *v21; // x24
  AiStateManager_o *AiStateManager; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x22
  struct BattleData_o *data; // x8
  AiEntity_o *Action; // x0
  BattleLogic_o *logic; // x23
  BattleLogicServantAiTask_o *v28; // x21
  const MethodInfo *v29; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v30; // x19
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4189B44 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleLogicTask___ctor__, svtData);
    sub_B2C35C(&System_Action_BattleLogicTask__TypeInfo, v11);
    sub_B2C35C(&BattleLogicServantAiTask_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v17);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v18);
    sub_B2C35C(&Method_BattleLogicServantAi___c__DisplayClass4_0__MakeTaskAiTargetAct_b__0__, v19);
    sub_B2C35C(&BattleLogicServantAi___c__DisplayClass4_0_TypeInfo, v20);
    byte_4189B44 = 1;
  }
  info = 0LL;
  v21 = (BattleLogicServantAi___c__DisplayClass4_0_o *)sub_B2C42C(BattleLogicServantAi___c__DisplayClass4_0_TypeInfo);
  BattleLogicServantAi___c__DisplayClass4_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_17;
  v21->fields.timingPriority = timingPriority;
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !svtData )
    goto LABEL_17;
  AiStateManager = BattleServantData__get_AiStateManager(svtData, 0LL);
  if ( !AiStateManager )
    goto LABEL_17;
  AiStateManager = (AiStateManager_o *)AiStateManager__NextAiState(AiStateManager, procState, 0LL);
  if ( ((unsigned __int8)AiStateManager & 1) != 0 )
  {
    data = this->fields.data;
    if ( data )
    {
      AiStateManager = (AiStateManager_o *)this->fields.aiLogic;
      if ( AiStateManager )
      {
        Action = AiLogic__getAction(
                   (AiLogic_o *)AiStateManager,
                   svtData,
                   procState,
                   data->fields.turnCount,
                   countAct,
                   (BattleLogicBaseAi_o *)this,
                   &info,
                   v21->fields.timingPriority,
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
            goto LABEL_17;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v24,
            (System_Collections_Generic_IEnumerable_T__o *)AiStateManager,
            (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
        }
        logic = this->fields.logic;
        v28 = (BattleLogicServantAiTask_o *)sub_B2C42C(BattleLogicServantAiTask_TypeInfo);
        BattleLogicServantAiTask___ctor(v28, procState, svtData, logic, v29);
        if ( v24 )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v24,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          v30 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattleLogicTask__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v30,
            (Il2CppObject *)v21,
            Method_BattleLogicServantAi___c__DisplayClass4_0__MakeTaskAiTargetAct_b__0__,
            (const MethodInfo_24BBAD8 *)Method_System_Action_BattleLogicTask___ctor__);
          System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
            (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v24,
            (System_Action_T__o *)v30,
            (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
          return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        }
      }
    }
LABEL_17:
    sub_B2C434(AiStateManager, v23);
  }
  AiStateManager = BattleServantData__get_AiStateManager(svtData, 0LL);
  if ( !AiStateManager )
    goto LABEL_17;
  AiStateManager__InitTimingAiIdx(AiStateManager, procState, 0LL);
  if ( !v24 )
    goto LABEL_17;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicServantAi__SetAddSkillTaskParam(
        BattleLogicServantAi_o *this,
        BattleLogicTask_o *addTask,
        const MethodInfo *method)
{
  if ( !addTask )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(TaskAiTargetAct, v8);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantData_o *currentCryptoKey; // x20
  __int64 v10; // x10

  currentCryptoKey = (BattleServantData_o *)arg;
  if ( (byte_4189B43 & 1) == 0 )
  {
    sub_B2C35C(&ServantAiActArgument_TypeInfo, svtData);
    byte_4189B43 = 1;
  }
  if ( currentCryptoKey )
  {
    v10 = *(&ServantAiActArgument_TypeInfo->_2.bitflags2 + 1);
    if ( *(&currentCryptoKey->klass->_2.bitflags2 + 1) >= (unsigned int)v10
      && (ServantAiActArgument_c *)currentCryptoKey->klass->_2.typeHierarchy[v10 - 1] == ServantAiActArgument_TypeInfo )
    {
      currentCryptoKey = (BattleServantData_o *)currentCryptoKey->fields.userSvtId.fields.currentCryptoKey;
    }
    else
    {
      currentCryptoKey = 0LL;
    }
  }
  *svtData = currentCryptoKey;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)svtData,
    (System_Int32_array **)currentCryptoKey,
    (System_String_array **)arg,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  return currentCryptoKey != 0LL;
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
    sub_B2C434(this, 0LL);
  BattleLogicTask__SetAiPriority(x, this->fields.timingPriority, 0LL);
}