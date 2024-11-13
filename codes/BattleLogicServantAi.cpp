bool __fastcall BattleLogicServantAi__ExistThinking(
        BattleLogicServantAi_o *this,
        BattleServantData_o *svtData,
        int32_t procState,
        const MethodInfo *method)
{
  AiLogic_o *aiLogic; // x0

  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    sub_1BCAA3C(0LL, svtData);
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
    sub_1BCAA3C(this, arg);
  }
  v13 = BattleLogic__checkEnemyTargetFunction(logic, funcId, (DataVals_array *)this, 0LL);
  IsEnableTarget = SkillLvEntity__IsEnableTarget(skillLvEnt, v13, 0LL);
  v15 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicBaseAi_o *, Il2CppMethodPointer))v9->klass->vtable._6_get_OpponentSvtIds.method)(
                                v9,
                                v9->klass->vtable._7_Initialize.methodPtr);
  LogicTargetIds = BattleLogicBaseAi__GetLogicTargetIds(v9, arg, v15, IsEnableTarget, 0, 0LL, v16);
  *targets = LogicTargetIds;
  sub_1BCA784((PartyOrganizationUtility_o *)targets, (int64_t)LogicTargetIds, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicBaseAi_o *, Il2CppMethodPointer))v9->klass->vtable._5_get_PartySvtIds.method)(
                                v9,
                                v9->klass->vtable._6_get_OpponentSvtIds.methodPtr);
  v26 = BattleLogicBaseAi__GetLogicTargetIds(v9, arg, v24, 0, 0, 0LL, v25);
  *ptTargets = v26;
  sub_1BCA784((PartyOrganizationUtility_o *)ptTargets, (int64_t)v26, v27, v28, v29, v30, v31, v32);
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
      sub_1BCAA3C(0LL, command);
    return !BattleServantData__IsCardAction(svtData, command, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x22
  AiStateManager_o *AiStateManager; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Generic_List_object__o *v34; // x19
  struct BattleData_o *data; // x8
  AiEntity_o *Action; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  BattleLogic_o *logic; // x24
  BattleLogicServantAiTask_o *v41; // x23
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Action_object__o *v55; // x20
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B18DDA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleLogicTask__TypeInfo, svtData, *(_QWORD *)&procState);
    sub_1BCA7E0(&BattleLogicServantAiTask_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_BattleLogicServantAi___c__DisplayClass4_0__MakeTaskAiTargetAct_b__0__, v25, v26);
    sub_1BCA7E0(&BattleLogicServantAi___c__DisplayClass4_0_TypeInfo, v27, v28);
    byte_4B18DDA = 1;
  }
  info = 0LL;
  v29 = sub_1BCAA2C(
          BattleLogicServantAi___c__DisplayClass4_0_TypeInfo,
          svtData,
          *(_QWORD *)&procState,
          *(_QWORD *)&timingPriority);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_18;
  *(_DWORD *)(v29 + 16) = timingPriority;
  v34 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       v31,
                                                       v32,
                                                       v33);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
      if ( v34 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v34,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
             *(_DWORD *)(v29 + 16),
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
    if ( !v34 )
      goto LABEL_18;
    System_Collections_Generic_List_object___AddRange(
      v34,
      (System_Collections_Generic_IEnumerable_T__o *)AiStateManager,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  logic = this->fields.logic;
  v41 = (BattleLogicServantAiTask_o *)sub_1BCAA2C(BattleLogicServantAiTask_TypeInfo, v37, v38, v39);
  BattleLogicServantAiTask___ctor(v41, procState, svtData, logic, 0LL);
  if ( !v34
    || (items = v34->fields._items,
        v49 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v34->fields._version,
        !items) )
  {
LABEL_18:
    sub_1BCAA3C(AiStateManager, v31);
  }
  size = v34->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v34,
      (Il2CppObject *)v41,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
  }
  else
  {
    v51 = &items->obj.klass + size;
    v34->fields._size = size + 1;
    v51[4] = (Il2CppClass *)v41;
    sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 4), (int64_t)v41, v42, v43, v44, v45, v46, v47);
  }
  v55 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleLogicTask__TypeInfo, v52, v53, v54);
  System_Action_object____ctor(
    v55,
    (Il2CppObject *)v29,
    Method_BattleLogicServantAi___c__DisplayClass4_0__MakeTaskAiTargetAct_b__0__,
    0LL);
  System_Collections_Generic_List_object___ForEach(
    v34,
    (System_Action_T__o *)v55,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v34,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicServantAi__SetAddSkillTaskParam(
        BattleLogicServantAi_o *this,
        BattleLogicTask_o *addTask,
        const MethodInfo *method)
{
  if ( !addTask )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(TaskAiTargetAct, v8);
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
  if ( (byte_4B18DD9 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAiActArgument_TypeInfo, svtData, arg);
    byte_4B18DD9 = 1;
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
  sub_1BCA784(
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

  if ( (byte_4B18DDB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_int____76842096, svtData, actValArray);
    byte_4B18DDB = 1;
  }
  v10 = BasicHelper__IndexValue_int_(
          actValArray,
          0,
          0,
          (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
  *id = v10;
  if ( !svtData )
    sub_1BCAA3C(v10, v11);
  *lv = BasicHelper__IndexValue_int_(
          actValArray,
          1,
          svtData->fields.treasuredvcLevel,
          (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
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
    sub_1BCAA3C(this, 0LL);
  BattleLogicTask__SetAiPriority(x, this->fields.timingPriority, 0LL);
}