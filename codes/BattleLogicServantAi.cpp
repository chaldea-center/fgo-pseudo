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
    sub_B5D69C(0LL, svtData);
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
    sub_B5D69C(this, arg);
  }
  v13 = BattleLogic__checkEnemyTargetFunction(logic, funcId, (DataVals_array *)this, 0LL);
  IsEnableTarget = SkillLvEntity__IsEnableTarget(skillLvEnt, v13, 0LL);
  v15 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicBaseAi_o *, Il2CppMethodPointer))v9->klass->vtable._6_get_OpponentSvtIds.method)(
                                v9,
                                v9->klass->vtable._7_Initialize.methodPtr);
  LogicTargetIds = BattleLogicBaseAi__GetLogicTargetIds(v9, arg, v15, IsEnableTarget, 0, 0LL, 0LL);
  *targets = LogicTargetIds;
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)ptTargets, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
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
      sub_B5D69C(0LL, command);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  BattleLogicServantAi___c__DisplayClass4_0_o *v41; // x24
  AiStateManager_o *AiStateManager; // x0
  __int64 v43; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x22
  struct BattleData_o *data; // x8
  AiEntity_o *Action; // x0
  BattleLogic_o *logic; // x23
  BattleLogicServantAiTask_o *v48; // x21
  const MethodInfo *v49; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v50; // x19
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EBEAC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleLogicTask___ctor__, (_DWORD)svtData, procState, *(_QWORD *)&timingPriority);
    sub_B5D5C4(&System_Action_BattleLogicTask__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&BattleLogicServantAiTask_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_BattleLogicServantAi___c__DisplayClass4_0__MakeTaskAiTargetAct_b__0__, v35, v36, v37);
    sub_B5D5C4(&BattleLogicServantAi___c__DisplayClass4_0_TypeInfo, v38, v39, v40);
    byte_42EBEAC = 1;
  }
  info = 0LL;
  v41 = (BattleLogicServantAi___c__DisplayClass4_0_o *)sub_B5D694(BattleLogicServantAi___c__DisplayClass4_0_TypeInfo);
  BattleLogicServantAi___c__DisplayClass4_0___ctor(v41, 0LL);
  if ( !v41 )
    goto LABEL_17;
  v41->fields.timingPriority = timingPriority;
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
                   v41->fields.timingPriority,
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
          if ( !v44 )
            goto LABEL_17;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v44,
            (System_Collections_Generic_IEnumerable_T__o *)AiStateManager,
            (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
        }
        logic = this->fields.logic;
        v48 = (BattleLogicServantAiTask_o *)sub_B5D694(BattleLogicServantAiTask_TypeInfo);
        BattleLogicServantAiTask___ctor(v48, procState, svtData, logic, v49);
        if ( v44 )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          v50 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleLogicTask__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v50,
            (Il2CppObject *)v41,
            Method_BattleLogicServantAi___c__DisplayClass4_0__MakeTaskAiTargetAct_b__0__,
            (const MethodInfo_258B320 *)Method_System_Action_BattleLogicTask___ctor__);
          System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
            (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v44,
            (System_Action_T__o *)v50,
            (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
          return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v44,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        }
      }
    }
LABEL_17:
    sub_B5D69C(AiStateManager, v43);
  }
  AiStateManager = BattleServantData__get_AiStateManager(svtData, 0LL);
  if ( !AiStateManager )
    goto LABEL_17;
  AiStateManager__InitTimingAiIdx(AiStateManager, procState, 0LL);
  if ( !v44 )
    goto LABEL_17;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v44,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicServantAi__SetAddSkillTaskParam(
        BattleLogicServantAi_o *this,
        BattleLogicTask_o *addTask,
        const MethodInfo *method)
{
  if ( !addTask )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(TaskAiTargetAct, v8);
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
  if ( (byte_42EBEAB & 1) == 0 )
  {
    sub_B5D5C4(&ServantAiActArgument_TypeInfo, (_DWORD)svtData, (_DWORD)arg, method);
    byte_42EBEAB = 1;
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
  sub_B5D560(
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

  if ( (byte_42EBEAD & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_int____68811968, (_DWORD)svtData, (_DWORD)actValArray, id);
    byte_42EBEAD = 1;
  }
  v10 = BasicHelper__IndexValue_int_(
          actValArray,
          0,
          0,
          (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
  *id = v10;
  if ( !svtData )
    sub_B5D69C(v10, v11);
  *lv = BasicHelper__IndexValue_int_(
          actValArray,
          1,
          svtData->fields.treasuredvcLevel,
          (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
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
    sub_B5D69C(this, 0LL);
  BattleLogicTask__SetAiPriority(x, this->fields.timingPriority, 0LL);
}