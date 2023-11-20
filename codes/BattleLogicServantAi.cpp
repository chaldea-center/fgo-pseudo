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
    sub_B170D4();
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
  DataVals_array *DataValsList; // x0
  bool v14; // w0
  bool IsEnableTarget; // w23
  System_Int32_array *v16; // x0
  System_Int32_array *LogicTargetIds; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array *v24; // x0
  System_Int32_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( !skillLvEnt
    || (logic = this->fields.logic,
        funcId = skillLvEnt->fields.funcId,
        DataValsList = SkillLvEntity__getDataValsList(skillLvEnt, 0LL),
        !logic) )
  {
    sub_B170D4();
  }
  v14 = BattleLogic__checkEnemyTargetFunction(logic, funcId, DataValsList, 0LL);
  IsEnableTarget = SkillLvEntity__IsEnableTarget(skillLvEnt, v14, 0LL);
  v16 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicServantAi_o *, Il2CppMethodPointer))this->klass->vtable._6_get_OpponentSvtIds.method)(
                                this,
                                this->klass->vtable._7_Initialize.methodPtr);
  LogicTargetIds = BattleLogicBaseAi__GetLogicTargetIds(
                     (BattleLogicBaseAi_o *)this,
                     arg,
                     v16,
                     IsEnableTarget,
                     0,
                     0LL,
                     0LL);
  *targets = LogicTargetIds;
  sub_B16F98(
    (BattleServantConfConponent_o *)targets,
    (System_Int32_array **)LogicTargetIds,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicServantAi_o *, Il2CppMethodPointer))this->klass->vtable._5_get_PartySvtIds.method)(
                                this,
                                this->klass->vtable._6_get_OpponentSvtIds.methodPtr);
  v25 = BattleLogicBaseAi__GetLogicTargetIds((BattleLogicBaseAi_o *)this, arg, v24, 0, 0, 0LL, 0LL);
  *ptTargets = v25;
  sub_B16F98((BattleServantConfConponent_o *)ptTargets, (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31);
  return 1;
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
  __int64 v20; // x1
  BattleLogicServantAi___c__DisplayClass4_0_o *v21; // x24
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x22
  AiStateManager_o *AiStateManager; // x0
  struct BattleData_o *data; // x8
  AiLogic_o *aiLogic; // x0
  AiEntity_o *Action; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Collections_Generic_IEnumerable_T__o *v35; // x0
  BattleLogic_o *logic; // x23
  BattleLogicServantAiTask_o *v37; // x21
  const MethodInfo *v38; // x4
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v43; // x19
  AiStateManager_o *v44; // x0
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FC45C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleLogicTask___ctor__, svtData);
    sub_B16FFC(&System_Action_BattleLogicTask__TypeInfo, v11);
    sub_B16FFC(&BattleLogicServantAiTask_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v17);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v18);
    sub_B16FFC(&Method_BattleLogicServantAi___c__DisplayClass4_0__MakeTaskAiTargetAct_b__0__, v19);
    sub_B16FFC(&BattleLogicServantAi___c__DisplayClass4_0_TypeInfo, v20);
    byte_40FC45C = 1;
  }
  info = 0LL;
  v21 = (BattleLogicServantAi___c__DisplayClass4_0_o *)sub_B170CC(
                                                         BattleLogicServantAi___c__DisplayClass4_0_TypeInfo,
                                                         svtData,
                                                         *(_QWORD *)&procState,
                                                         *(_QWORD *)&timingPriority,
                                                         *(_QWORD *)&countAct);
  BattleLogicServantAi___c__DisplayClass4_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_17;
  v21->fields.timingPriority = timingPriority;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !svtData )
    goto LABEL_17;
  AiStateManager = BattleServantData__get_AiStateManager(svtData, 0LL);
  if ( !AiStateManager )
    goto LABEL_17;
  if ( AiStateManager__NextAiState(AiStateManager, procState, 0LL) )
  {
    data = this->fields.data;
    if ( data )
    {
      aiLogic = this->fields.aiLogic;
      if ( aiLogic )
      {
        Action = AiLogic__getAction(
                   aiLogic,
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
          v35 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicServantAi_o *, BattleServantData_o *, AiEntity_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._18_procAiAct.method)(
                                                                 this,
                                                                 svtData,
                                                                 Action,
                                                                 (unsigned int)countAct,
                                                                 info,
                                                                 (unsigned int)procState,
                                                                 this->klass->vtable._19_ExistThinking.methodPtr);
          if ( !v26 )
            goto LABEL_17;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v26,
            v35,
            (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
        }
        logic = this->fields.logic;
        v37 = (BattleLogicServantAiTask_o *)sub_B170CC(BattleLogicServantAiTask_TypeInfo, v31, v32, v33, v34);
        BattleLogicServantAiTask___ctor(v37, procState, svtData, logic, v38);
        if ( v26 )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v26,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          v43 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                       System_Action_BattleLogicTask__TypeInfo,
                                                                                       v39,
                                                                                       v40,
                                                                                       v41,
                                                                                       v42);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v43,
            (Il2CppObject *)v21,
            Method_BattleLogicServantAi___c__DisplayClass4_0__MakeTaskAiTargetAct_b__0__,
            (const MethodInfo_24B7310 *)Method_System_Action_BattleLogicTask___ctor__);
          System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
            (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v26,
            (System_Action_T__o *)v43,
            (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
          return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        }
      }
    }
LABEL_17:
    sub_B170D4();
  }
  v44 = BattleServantData__get_AiStateManager(svtData, 0LL);
  if ( !v44 )
    goto LABEL_17;
  AiStateManager__InitTimingAiIdx(v44, procState, 0LL);
  if ( !v26 )
    goto LABEL_17;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicServantAi__TaskAiTargetAct(
        BattleLogicServantAi_o *this,
        BattleServantData_o *svtData,
        int32_t procState,
        int32_t timingPriority,
        int32_t countAct,
        const MethodInfo *method)
{
  BattleLogicTask_array *TaskAiTargetAct; // x0
  BattleLogicTask_array *v8; // x19
  AiStateManager_o *AiStateManager; // x0

  TaskAiTargetAct = BattleLogicServantAi__MakeTaskAiTargetAct(
                      this,
                      svtData,
                      procState,
                      timingPriority,
                      countAct,
                      method);
  if ( !svtData || (v8 = TaskAiTargetAct, (AiStateManager = BattleServantData__get_AiStateManager(svtData, 0LL)) == 0LL) )
    sub_B170D4();
  AiStateManager__AfterMakeAiActTask(AiStateManager, 0LL);
  return v8;
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
  if ( (byte_40FC45B & 1) == 0 )
  {
    sub_B16FFC(&ServantAiActArgument_TypeInfo, svtData);
    byte_40FC45B = 1;
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
  sub_B16F98(
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
    sub_B170D4();
  BattleLogicTask__SetAiPriority(x, this->fields.timingPriority, 0LL);
}