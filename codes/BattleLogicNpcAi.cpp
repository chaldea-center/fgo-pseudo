void __fastcall BattleLogicNpcAi___ctor(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  BattleLogicBaseAi___ctor((BattleLogicBaseAi_o *)this, 0LL);
}


void __fastcall BattleLogicNpcAi__AddAiActionTask(
        BattleLogicNpcAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *taskList,
        NpcAiCheckTask_Argument_o *arg,
        int32_t timingPriority,
        const MethodInfo *method)
{
  BattleLogicNpcAi_o *v8; // x20
  BattleServantData_o *Npc_k__BackingField; // x22
  struct BattleData_o *data; // x8
  AiEntity_o *Action; // x0
  const MethodInfo *v12; // x3
  AiLogic_AiInfo_o *info; // [xsp+18h] [xbp-28h] BYREF

  v8 = this;
  if ( (byte_438E981 & 1) == 0 )
  {
    this = (BattleLogicNpcAi_o *)sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    byte_438E981 = 1;
  }
  info = 0LL;
  if ( !arg )
    goto LABEL_12;
  Npc_k__BackingField = (BattleServantData_o *)arg->fields._Npc_k__BackingField;
  if ( !Npc_k__BackingField )
    goto LABEL_12;
  this = (BattleLogicNpcAi_o *)AiNpcBattleServantData__UpdateAiStateTargetIndex(
                                 arg->fields._Npc_k__BackingField,
                                 arg->fields._AiStateIndex_k__BackingField,
                                 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  data = v8->fields.data;
  if ( !data )
    goto LABEL_12;
  this = (BattleLogicNpcAi_o *)v8->fields.aiLogic;
  if ( !this )
    goto LABEL_12;
  Action = AiLogic__getAction(
             (AiLogic_o *)this,
             Npc_k__BackingField,
             arg->fields._State_k__BackingField,
             data->fields.turnCount,
             Npc_k__BackingField[1].fields.deckIndex,
             (BattleLogicBaseAi_o *)v8,
             &info,
             timingPriority,
             0LL);
  if ( !Action )
    return;
  this = (BattleLogicNpcAi_o *)BattleLogicNpcAi__ProcAiAct(
                                 v8,
                                 (AiNpcBattleServantData_o *)Npc_k__BackingField,
                                 Action,
                                 v12);
  if ( !taskList )
LABEL_12:
    sub_B7769C(this, taskList);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
}


void __fastcall BattleLogicNpcAi__AddNoblePhantasm(
        BattleLogicNpcAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  __int64 v7; // x1
  BattleLogicNpcAi_o *isNobleAction; // x0
  const MethodInfo *v9; // x3
  struct AiActEntity_o *AiActEnt_k__BackingField; // x8
  BattleLogicNpcAi_o *v11; // x21
  System_Int32_array *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleComboData_o *v19; // x22
  BattleServantData_o *v20; // x24
  BattleTreasureDeviceCommandData_o *v21; // x23
  int32_t v22; // w0
  const MethodInfo *v23; // x4
  int32_t treasuredvcLevel; // w8
  BattleServantData_o *svtData; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438E986 & 1) == 0 )
  {
    sub_B775C4(&BattleComboData_TypeInfo);
    sub_B775C4(&BattleTreasureDeviceCommandData_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_438E986 = 1;
  }
  svtData = 0LL;
  if ( (((__int64 (__fastcall *)(BattleLogicNpcAi_o *, BattleServantData_o **, BaseAiActArgument_o *, Il2CppMethodPointer))this->klass->vtable._21_TryGetActorServant.method)(
          this,
          &svtData,
          arg,
          this->klass->vtable._22_AddNoblePhantasm.methodPtr) & 1) != 0 )
  {
    isNobleAction = (BattleLogicNpcAi_o *)svtData;
    if ( !svtData )
      goto LABEL_16;
    isNobleAction = (BattleLogicNpcAi_o *)BattleServantData__isNobleAction(svtData, 0LL);
    if ( ((unsigned __int8)isNobleAction & 1) == 0 )
      return;
    if ( !arg )
      goto LABEL_16;
    isNobleAction = (BattleLogicNpcAi_o *)BaseAiActArgument__MakeTask(arg, (BattleLogicBaseAi_o *)this, 0, 0LL);
    AiActEnt_k__BackingField = arg->fields._AiActEnt_k__BackingField;
    if ( !AiActEnt_k__BackingField )
      goto LABEL_16;
    v11 = isNobleAction;
    BattleLogicNpcAi__OverwriteTreasureDevice(isNobleAction, svtData, AiActEnt_k__BackingField->fields.skillVals, v9);
    v12 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicNpcAi_o *, Il2CppMethodPointer))this->klass->vtable._6_get_OpponentSvtIds.method)(
                                  this,
                                  this->klass->vtable._7_Initialize.methodPtr);
    isNobleAction = (BattleLogicNpcAi_o *)BattleLogicBaseAi__GetLogicTargetIds(
                                            (BattleLogicBaseAi_o *)this,
                                            arg,
                                            v12,
                                            1,
                                            0,
                                            0LL,
                                            0LL);
    if ( !v11 )
      goto LABEL_16;
    v11->fields.logictarget = (struct BattleLogicTarget_o *)isNobleAction;
    sub_B77560(
      (BattleServantConfConponent_o *)&v11->fields.logictarget,
      (System_Int32_array **)isNobleAction,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v19 = (BattleComboData_o *)sub_B77694(BattleComboData_TypeInfo);
    BattleComboData___ctor(v19, 0LL);
    v20 = svtData;
    v21 = (BattleTreasureDeviceCommandData_o *)sub_B77694(BattleTreasureDeviceCommandData_TypeInfo);
    BattleTreasureDeviceCommandData___ctor(v21, v20, 0LL);
    isNobleAction = (BattleLogicNpcAi_o *)svtData;
    if ( !svtData )
      goto LABEL_16;
    v22 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._21_getThisTurnActCount.method)(
            svtData,
            svtData->klass->vtable._22_getAiParam.methodPtr);
    BattleLogicTask__setActionCommand((BattleLogicTask_o *)v11, v19, (BattleCommandData_o *)v21, v22, v23);
    isNobleAction = (BattleLogicNpcAi_o *)svtData;
    if ( !svtData )
      goto LABEL_16;
    isNobleAction = (BattleLogicNpcAi_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
    if ( !svtData
      || (treasuredvcLevel = svtData->fields.treasuredvcLevel,
          LODWORD(v11->fields.aiActMst) = 4,
          HIDWORD(v11[1].klass) = (_DWORD)isNobleAction,
          LODWORD(v11[1].monitor) = treasuredvcLevel,
          (isNobleAction = (BattleLogicNpcAi_o *)arg->fields._AiEnt_k__BackingField) == 0LL)
      || (isNobleAction = (BattleLogicNpcAi_o *)AiBaseEntity__IsForcedActionSpeedAnyTime(
                                                  (AiBaseEntity_o *)isNobleAction,
                                                  0LL),
          LOBYTE(v11[2].klass) = (unsigned __int8)isNobleAction & 1,
          !retList) )
    {
LABEL_16:
      sub_B7769C(isNobleAction, v7);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)retList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  }
}


void __fastcall BattleLogicNpcAi__InitAiActTaskFunction(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *dicAiActFunc; // x20
  BattleLogicBaseAi_taskAiActFunction_o *v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *v6; // x21

  if ( (byte_438E97E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__set_Item__);
    sub_B775C4(&BattleLogicBaseAi_taskAiActFunction_TypeInfo);
    byte_438E97E = 1;
  }
  BattleLogicBaseAi__InitAiActTaskFunction((BattleLogicBaseAi_o *)this, 0LL);
  dicAiActFunc = this->fields.dicAiActFunc;
  v4 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_B77694(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  if ( !this
    || (v6 = (System_Collections_Generic_List_int__o *)v4,
        BattleLogicBaseAi_taskAiActFunction___ctor(v4, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL),
        !dicAiActFunc) )
  {
    sub_B7769C(v4, v5);
  }
  System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____set_Item(
    (System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)dicAiActFunc,
    80,
    v6,
    (const MethodInfo_2F9FC0C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__set_Item__);
}


void __fastcall BattleLogicNpcAi__Initialize(BattleLogicNpcAi_o *this, BattleData_o *data, const MethodInfo *method)
{
  AiLogic_o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  AiLogic_o *aiLogic; // x0

  if ( (byte_438E97D & 1) == 0 )
  {
    sub_B775C4(&AiLogic_TypeInfo);
    byte_438E97D = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, 0LL);
  v5 = (AiLogic_o *)sub_B77694(AiLogic_TypeInfo);
  AiLogic___ctor(v5, 0LL);
  this->fields.aiLogic = v5;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.aiLogic, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    sub_B7769C(0LL, v12);
  AiLogic__Initialize(aiLogic, data, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicNpcAi__MakeAiActionTask(
        BattleLogicNpcAi_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_array *result; // x0

  if ( !task )
    sub_B7769C(this, 0LL);
  result = (BattleLogicTask_array *)((__int64 (__fastcall *)(BattleLogicTask_o *, struct BattleLogic_o *, Il2CppMethodPointer))task->klass->vtable._5_MakeActionTask.method)(
                                      task,
                                      this->fields.logic,
                                      task->klass->vtable._6_MakeActionData.methodPtr);
  if ( !result )
    return this->fields.emptyTask;
  return result;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicNpcAi__MakeAiCheckTask(
        BattleLogicNpcAi_o *this,
        int32_t state,
        const MethodInfo *method)
{
  BattleLogicNpcAi_o *v4; // x19
  struct BattleData_o *data; // x8
  struct System_Collections_Generic_List_AiNpcBattleServantData__o *aiNpcDataList; // x8
  struct BattleData_o *v7; // x8
  System_Collections_Generic_List_AiNpcBattleServantData__o *v8; // x22
  BattleLogicNpcAi_o *v9; // x21
  NpcAiCheckTask_Argument_o *v10; // x23
  NpcAiCheckTask_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v19; // x0
  __int64 v20; // x0

  v4 = this;
  if ( (byte_438E980 & 1) == 0 )
  {
    sub_B775C4(&NpcAiCheckTask_Argument_TypeInfo);
    sub_B775C4(&BattleLogicTask___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_AiNpcBattleServantData__get_Count__);
    this = (BattleLogicNpcAi_o *)sub_B775C4(&NpcAiCheckTask_TypeInfo);
    byte_438E980 = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_15;
  aiNpcDataList = data->fields.aiNpcDataList;
  if ( !aiNpcDataList )
    goto LABEL_15;
  if ( !state || aiNpcDataList->fields._size < 1 )
    return v4->fields.emptyTask;
  this = (BattleLogicNpcAi_o *)sub_B775DC(BattleLogicTask___TypeInfo, 1LL);
  v7 = v4->fields.data;
  if ( !v7
    || (v8 = v7->fields.aiNpcDataList,
        v9 = this,
        v10 = (NpcAiCheckTask_Argument_o *)sub_B77694(NpcAiCheckTask_Argument_TypeInfo),
        NpcAiCheckTask_Argument___ctor(v10, state, v8, 0, 0LL),
        v11 = (NpcAiCheckTask_o *)sub_B77694(NpcAiCheckTask_TypeInfo),
        NpcAiCheckTask___ctor(v11, v4, v10, 0LL),
        !v9) )
  {
LABEL_15:
    sub_B7769C(this, *(_QWORD *)&state);
  }
  if ( v11 )
  {
    this = (BattleLogicNpcAi_o *)sub_B77684(v11, v9->klass->_1.element_class);
    if ( !this )
    {
      v20 = sub_B776BC(0LL);
      sub_B77668(v20, 0LL);
    }
  }
  if ( !LODWORD(v9->fields.logic) )
  {
    v19 = sub_B776C8(this);
    sub_B77668(v19, 0LL);
  }
  v9->fields.logictarget = (struct BattleLogicTarget_o *)v11;
  sub_B77560(
    (BattleServantConfConponent_o *)&v9->fields.logictarget,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  return (BattleLogicTask_array *)v9;
}


BattleLogicTask_o *__fastcall BattleLogicNpcAi__MakeBackStepTask(
        BattleLogicNpcAi_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  NpcBackStepBattleLogicTask_o *v4; // x20

  if ( (byte_438E985 & 1) == 0 )
  {
    sub_B775C4(&NpcBackStepBattleLogicTask_TypeInfo);
    byte_438E985 = 1;
  }
  v4 = (NpcBackStepBattleLogicTask_o *)sub_B77694(NpcBackStepBattleLogicTask_TypeInfo);
  NpcBackStepBattleLogicTask___ctor(v4, targetId, 0, 0LL);
  return (BattleLogicTask_o *)v4;
}


BattleActionData_o *__fastcall BattleLogicNpcAi__MakeLoadNpcPreStepInAction(
        BattleLogicNpcAi_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  PreLoadNpcBattleLogicTask_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_438E984 & 1) == 0 )
  {
    sub_B775C4(&PreLoadNpcBattleLogicTask_TypeInfo);
    byte_438E984 = 1;
  }
  v5 = (PreLoadNpcBattleLogicTask_o *)sub_B77694(PreLoadNpcBattleLogicTask_TypeInfo);
  PreLoadNpcBattleLogicTask___ctor(v5, targetId, 0, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  return (BattleActionData_o *)((__int64 (__fastcall *)(PreLoadNpcBattleLogicTask_o *, struct BattleLogic_o *, Il2CppMethodPointer))v5->klass->vtable._6_MakeActionData.method)(
                                 v5,
                                 this->fields.logic,
                                 v5->klass->vtable._7_AfterCreateAction.methodPtr);
}


BattleActionData_o *__fastcall BattleLogicNpcAi__MakeStepInAction(
        BattleLogicNpcAi_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  NpcStepInBattleLogicTask_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_438E983 & 1) == 0 )
  {
    sub_B775C4(&NpcStepInBattleLogicTask_TypeInfo);
    byte_438E983 = 1;
  }
  v7 = (NpcStepInBattleLogicTask_o *)sub_B77694(NpcStepInBattleLogicTask_TypeInfo);
  NpcStepInBattleLogicTask___ctor(v7, targetId, isForcedSpeedOne, 0LL);
  if ( !v7 )
    sub_B7769C(v8, v9);
  return (BattleActionData_o *)((__int64 (__fastcall *)(NpcStepInBattleLogicTask_o *, struct BattleLogic_o *, Il2CppMethodPointer))v7->klass->vtable._6_MakeActionData.method)(
                                 v7,
                                 this->fields.logic,
                                 v7->klass->vtable._7_AfterCreateAction.methodPtr);
}


void __fastcall BattleLogicNpcAi__OverwriteTreasureDevice(
        BattleLogicNpcAi_o *this,
        BattleServantData_o *svtData,
        System_Int32_array *actValArray,
        const MethodInfo *method)
{
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w21
  int32_t v9; // w0
  int32_t v10; // w1

  if ( (byte_438E987 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_IndexValue_int____69469920);
    byte_438E987 = 1;
  }
  v6 = BasicHelper__IndexValue_int_(
         actValArray,
         0,
         0,
         (const MethodInfo_1C683B4 *)Method_BasicHelper_IndexValue_int____69469920);
  if ( !svtData )
    sub_B7769C(v6, v7);
  v8 = v6;
  v9 = BasicHelper__IndexValue_int_(
         actValArray,
         1,
         svtData->fields.treasuredvcLevel,
         (const MethodInfo_1C683B4 *)Method_BasicHelper_IndexValue_int____69469920);
  if ( v8 >= 1 )
    BattleServantData__UpdateTreasureDevice(svtData, v8, v9, 0LL);
  v10 = BasicHelper__IndexValue_int_(
          actValArray,
          2,
          svtData->fields.lineMaxNp,
          (const MethodInfo_1C683B4 *)Method_BasicHelper_IndexValue_int____69469920);
  BattleServantData__changeNp(svtData, v10, 0, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicNpcAi__ProcAiAct(
        BattleLogicNpcAi_o *this,
        AiNpcBattleServantData_o *npcSvt,
        AiEntity_o *aiEnt,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *v6; // x21
  int32_t data_high; // w24
  AiActEntity_o *v8; // x23
  AiState_o *v9; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x22
  NpcServantAiActArgument_o *v12; // x25

  v6 = (BattleLogicBaseAi_o *)this;
  if ( (byte_438E982 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    this = (BattleLogicNpcAi_o *)sub_B775C4(&NpcServantAiActArgument_TypeInfo);
    byte_438E982 = 1;
  }
  if ( !aiEnt )
    goto LABEL_12;
  this = (BattleLogicNpcAi_o *)BattleLogicBaseAi__GetAiActEntity(v6, aiEnt->fields.aiActId, 0LL);
  if ( !this || !npcSvt )
    goto LABEL_12;
  data_high = HIDWORD(this->fields.data);
  v8 = (AiActEntity_o *)this;
  v9 = (AiState_o *)((__int64 (__fastcall *)(AiNpcBattleServantData_o *, Il2CppMethodPointer))npcSvt->klass->vtable._18_getAiState.method)(
                      npcSvt,
                      npcSvt->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly(v6, data_high, (AiBaseEntity_o *)aiEnt, v9, 0LL) )
    return v6->fields.emptyTask;
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v12 = (NpcServantAiActArgument_o *)sub_B77694(NpcServantAiActArgument_TypeInfo);
  NpcServantAiActArgument___ctor(
    v12,
    v8,
    (AiBaseEntity_o *)aiEnt,
    (BattleServantData_o *)npcSvt,
    (BattleLogicNpcAi_o *)v6,
    0LL);
  this = (BattleLogicNpcAi_o *)BattleLogicBaseAi__SetProcAiActTask(
                                 v6,
                                 (System_Collections_Generic_List_BattleLogicTask__o *)v11,
                                 data_high,
                                 (BaseAiActArgument_o *)v12,
                                 0LL);
  if ( !v11 )
LABEL_12:
    sub_B7769C(this, npcSvt);
  if ( v11->fields._size >= 1 )
    AiNpcBattleServantData__AddActCount(npcSvt, 0LL);
  npcSvt->fields.isNoBackStep = AiEntity__IsNoBackStepNpc(aiEnt, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                    (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicNpcAi__SetReactionFunction(
        BattleLogicNpcAi_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  BattleLogic_reactionFunction_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_438E97F & 1) == 0 )
  {
    sub_B775C4(&Method_BattleLogicNpcAi_MakeAiActionTask__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_B775C4(&BattleLogic_reactionFunction_TypeInfo);
    byte_438E97F = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_B77694(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v5, (Il2CppObject *)this, Method_BattleLogicNpcAi_MakeAiActionTask__, 0LL);
  if ( !list )
    sub_B7769C(v6, v7);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    60,
    (System_String_o *)v5,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


AiLogic_o *__fastcall BattleLogicNpcAi__get_AILogic(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  return this->fields.aiLogic;
}


int32_t __fastcall BattleLogicNpcAi__get_ActorType(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  return 2;
}


System_Int32_array *__fastcall BattleLogicNpcAi__get_OpponentSvtIds(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B7769C(0LL, method);
  return BattleData__getFieldEnemyServantIDList(data, 0, 0LL);
}


System_Int32_array *__fastcall BattleLogicNpcAi__get_PartySvtIds(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B7769C(0LL, method);
  return BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
}


BattlePerformance_o *__fastcall BattleLogicNpcAi__get_Perf(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  struct BattleLogic_o *logic; // x8

  logic = this->fields.logic;
  if ( !logic )
    sub_B7769C(this, method);
  return logic->fields.perf;
}