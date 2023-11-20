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
  BattleServantData_o *Npc_k__BackingField; // x22
  struct BattleData_o *data; // x8
  AiLogic_o *aiLogic; // x0
  AiEntity_o *Action; // x0
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_T__o *v14; // x0
  AiLogic_AiInfo_o *info; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40FC43C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, taskList);
    byte_40FC43C = 1;
  }
  info = 0LL;
  if ( !arg )
    goto LABEL_12;
  Npc_k__BackingField = (BattleServantData_o *)arg->fields._Npc_k__BackingField;
  if ( !Npc_k__BackingField )
    goto LABEL_12;
  if ( !AiNpcBattleServantData__UpdateAiStateTargetIndex(
          arg->fields._Npc_k__BackingField,
          arg->fields._AiStateIndex_k__BackingField,
          0LL) )
    return;
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    goto LABEL_12;
  Action = AiLogic__getAction(
             aiLogic,
             Npc_k__BackingField,
             arg->fields._State_k__BackingField,
             data->fields.turnCount,
             Npc_k__BackingField[1].fields.deckIndex,
             (BattleLogicBaseAi_o *)this,
             &info,
             timingPriority,
             0LL);
  if ( !Action )
    return;
  v14 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicNpcAi__ProcAiAct(
                                                         this,
                                                         (AiNpcBattleServantData_o *)Npc_k__BackingField,
                                                         Action,
                                                         v13);
  if ( !taskList )
LABEL_12:
    sub_B170D4();
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
    v14,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
}


void __fastcall BattleLogicNpcAi__AddNoblePhantasm(
        BattleLogicNpcAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  BattleLogicTask_o *Task; // x0
  const MethodInfo *v10; // x3
  struct AiActEntity_o *AiActEnt_k__BackingField; // x8
  BattleLogicTask_o *v12; // x21
  System_Int32_array *v13; // x0
  System_Int32_array **LogicTargetIds; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  BattleComboData_o *v25; // x22
  BattleServantData_o *v26; // x24
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  BattleTreasureDeviceCommandData_o *v31; // x23
  int32_t v32; // w0
  const MethodInfo *v33; // x4
  int32_t TreasureDvcId; // w0
  int32_t treasuredvcLevel; // w8
  AiBaseEntity_o *AiEnt_k__BackingField; // x0
  BattleServantData_o *svtData; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FC441 & 1) == 0 )
  {
    sub_B16FFC(&BattleComboData_TypeInfo, retList);
    sub_B16FFC(&BattleTreasureDeviceCommandData_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    byte_40FC441 = 1;
  }
  svtData = 0LL;
  if ( (((__int64 (__fastcall *)(BattleLogicNpcAi_o *, BattleServantData_o **, BaseAiActArgument_o *, Il2CppMethodPointer))this->klass->vtable._20_TryGetActorServant.method)(
          this,
          &svtData,
          arg,
          this->klass->vtable._21_AddNoblePhantasm.methodPtr) & 1) != 0 )
  {
    if ( !svtData )
      goto LABEL_16;
    if ( !BattleServantData__isNobleAction(svtData, 0LL) )
      return;
    if ( !arg )
      goto LABEL_16;
    Task = BaseAiActArgument__MakeTask(arg, (BattleLogicBaseAi_o *)this, 0, 0LL);
    AiActEnt_k__BackingField = arg->fields._AiActEnt_k__BackingField;
    if ( !AiActEnt_k__BackingField )
      goto LABEL_16;
    v12 = Task;
    BattleLogicNpcAi__OverwriteTreasureDevice(
      (BattleLogicNpcAi_o *)Task,
      svtData,
      AiActEnt_k__BackingField->fields.skillVals,
      v10);
    v13 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicNpcAi_o *, Il2CppMethodPointer))this->klass->vtable._6_get_OpponentSvtIds.method)(
                                  this,
                                  this->klass->vtable._7_Initialize.methodPtr);
    LogicTargetIds = (System_Int32_array **)BattleLogicBaseAi__GetLogicTargetIds(
                                              (BattleLogicBaseAi_o *)this,
                                              arg,
                                              v13,
                                              1,
                                              0,
                                              0LL,
                                              0LL);
    if ( !v12 )
      goto LABEL_16;
    v12->fields.targetIdlist = (struct System_Int32_array *)LogicTargetIds;
    sub_B16F98((BattleServantConfConponent_o *)&v12->fields.targetIdlist, LogicTargetIds, v15, v16, v17, v18, v19, v20);
    v25 = (BattleComboData_o *)sub_B170CC(BattleComboData_TypeInfo, v21, v22, v23, v24);
    BattleComboData___ctor(v25, 0LL);
    v26 = svtData;
    v31 = (BattleTreasureDeviceCommandData_o *)sub_B170CC(BattleTreasureDeviceCommandData_TypeInfo, v27, v28, v29, v30);
    BattleTreasureDeviceCommandData___ctor(v31, v26, 0LL);
    if ( !svtData )
      goto LABEL_16;
    v32 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._21_getThisTurnActCount.method)(
            svtData,
            svtData->klass->vtable._22_getAiParam.methodPtr);
    BattleLogicTask__setActionCommand(v12, v25, (BattleCommandData_o *)v31, v32, v33);
    if ( !svtData
      || (TreasureDvcId = BattleServantData__getTreasureDvcId(svtData, 1, 0LL), !svtData)
      || (treasuredvcLevel = svtData->fields.treasuredvcLevel,
          v12->fields.actiontype = 4,
          v12->fields.treasureDvcId = TreasureDvcId,
          v12->fields.tresureDvcLv = treasuredvcLevel,
          (AiEnt_k__BackingField = arg->fields._AiEnt_k__BackingField) == 0LL)
      || (v12->fields.isForcedSpeedOne = AiBaseEntity__IsForcedActionSpeedAnyTime(AiEnt_k__BackingField, 0LL), !retList) )
    {
LABEL_16:
      sub_B170D4();
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)retList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  }
}


void __fastcall BattleLogicNpcAi__InitAiActTaskFunction(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *dicAiActFunc; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  BattleLogicBaseAi_taskAiActFunction_o *v9; // x0
  System_Collections_Generic_List_int__o *v10; // x21

  if ( (byte_40FC439 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__set_Item__,
      method);
    sub_B16FFC(&BattleLogicBaseAi_taskAiActFunction_TypeInfo, v3);
    byte_40FC439 = 1;
  }
  BattleLogicBaseAi__InitAiActTaskFunction((BattleLogicBaseAi_o *)this, 0LL);
  dicAiActFunc = this->fields.dicAiActFunc;
  v9 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_B170CC(BattleLogicBaseAi_taskAiActFunction_TypeInfo, v5, v6, v7, v8);
  if ( !this
    || (v10 = (System_Collections_Generic_List_int__o *)v9,
        BattleLogicBaseAi_taskAiActFunction___ctor(v9, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL),
        !dicAiActFunc) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____set_Item(
    (System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)dicAiActFunc,
    80,
    v10,
    (const MethodInfo_2DFFC2C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__set_Item__);
}


void __fastcall BattleLogicNpcAi__Initialize(BattleLogicNpcAi_o *this, BattleData_o *data, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  AiLogic_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  AiLogic_o *aiLogic; // x0

  if ( (byte_40FC438 & 1) == 0 )
  {
    sub_B16FFC(&AiLogic_TypeInfo, data);
    byte_40FC438 = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, 0LL);
  v9 = (AiLogic_o *)sub_B170CC(AiLogic_TypeInfo, v5, v6, v7, v8);
  AiLogic___ctor(v9, 0LL);
  this->fields.aiLogic = v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.aiLogic,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    sub_B170D4();
  AiLogic__Initialize(aiLogic, data, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicNpcAi__MakeAiActionTask(
        BattleLogicNpcAi_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_array *result; // x0

  if ( !task )
    sub_B170D4();
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleData_o *data; // x8
  struct System_Collections_Generic_List_AiNpcBattleServantData__o *aiNpcDataList; // x8
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct BattleData_o *v15; // x8
  System_Collections_Generic_List_AiNpcBattleServantData__o *v16; // x22
  BattleLogicTask_array *v17; // x21
  NpcAiCheckTask_Argument_o *v18; // x23
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  NpcAiCheckTask_o *v23; // x20
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_40FC43B & 1) == 0 )
  {
    sub_B16FFC(&NpcAiCheckTask_Argument_TypeInfo, *(_QWORD *)&state);
    sub_B16FFC(&BattleLogicTask___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiNpcBattleServantData__get_Count__, v6);
    sub_B16FFC(&NpcAiCheckTask_TypeInfo, v7);
    byte_40FC43B = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  aiNpcDataList = data->fields.aiNpcDataList;
  if ( !aiNpcDataList )
    goto LABEL_15;
  if ( !state || aiNpcDataList->fields._size < 1 )
    return this->fields.emptyTask;
  v10 = sub_B17014(BattleLogicTask___TypeInfo, 1LL, method);
  v15 = this->fields.data;
  if ( !v15
    || (v16 = v15->fields.aiNpcDataList,
        v17 = (BattleLogicTask_array *)v10,
        v18 = (NpcAiCheckTask_Argument_o *)sub_B170CC(NpcAiCheckTask_Argument_TypeInfo, v11, v12, v13, v14),
        NpcAiCheckTask_Argument___ctor(v18, state, v16, 0, 0LL),
        v23 = (NpcAiCheckTask_o *)sub_B170CC(NpcAiCheckTask_TypeInfo, v19, v20, v21, v22),
        NpcAiCheckTask___ctor(v23, this, v18, 0LL),
        !v17) )
  {
LABEL_15:
    sub_B170D4();
  }
  if ( v23 )
  {
    v24 = sub_B170BC(v23, v17->obj.klass->_1.element_class);
    if ( !v24 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( !v17->max_length )
  {
    sub_B17100(v24, v25, v26);
    sub_B170A0();
  }
  v17->m_Items[0] = (BattleLogicTask_o *)v23;
  sub_B16F98((BattleServantConfConponent_o *)v17->m_Items, (System_Int32_array **)v23, v26, v27, v28, v29, v30, v31);
  return v17;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_o *__fastcall BattleLogicNpcAi__MakeBackStepTask(
        BattleLogicNpcAi_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  NpcBackStepBattleLogicTask_o *v6; // x20

  if ( (byte_40FC440 & 1) == 0 )
  {
    sub_B16FFC(&NpcBackStepBattleLogicTask_TypeInfo, *(_QWORD *)&targetId);
    byte_40FC440 = 1;
  }
  v6 = (NpcBackStepBattleLogicTask_o *)sub_B170CC(
                                         NpcBackStepBattleLogicTask_TypeInfo,
                                         *(_QWORD *)&targetId,
                                         method,
                                         v3,
                                         v4);
  NpcBackStepBattleLogicTask___ctor(v6, targetId, 0, 0LL);
  return (BattleLogicTask_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicNpcAi__MakeLoadNpcPreStepInAction(
        BattleLogicNpcAi_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  PreLoadNpcBattleLogicTask_o *v7; // x21

  if ( (byte_40FC43F & 1) == 0 )
  {
    sub_B16FFC(&PreLoadNpcBattleLogicTask_TypeInfo, *(_QWORD *)&targetId);
    byte_40FC43F = 1;
  }
  v7 = (PreLoadNpcBattleLogicTask_o *)sub_B170CC(
                                        PreLoadNpcBattleLogicTask_TypeInfo,
                                        *(_QWORD *)&targetId,
                                        method,
                                        v3,
                                        v4);
  PreLoadNpcBattleLogicTask___ctor(v7, targetId, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  return (BattleActionData_o *)((__int64 (__fastcall *)(PreLoadNpcBattleLogicTask_o *, struct BattleLogic_o *, Il2CppMethodPointer))v7->klass->vtable._6_MakeActionData.method)(
                                 v7,
                                 this->fields.logic,
                                 v7->klass->vtable._7_AfterCreateAction.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicNpcAi__MakeStepInAction(
        BattleLogicNpcAi_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  __int64 v4; // x4
  NpcStepInBattleLogicTask_o *v8; // x22

  if ( (byte_40FC43E & 1) == 0 )
  {
    sub_B16FFC(&NpcStepInBattleLogicTask_TypeInfo, *(_QWORD *)&targetId);
    byte_40FC43E = 1;
  }
  v8 = (NpcStepInBattleLogicTask_o *)sub_B170CC(
                                       NpcStepInBattleLogicTask_TypeInfo,
                                       *(_QWORD *)&targetId,
                                       isForcedSpeedOne,
                                       method,
                                       v4);
  NpcStepInBattleLogicTask___ctor(v8, targetId, isForcedSpeedOne, 0LL);
  if ( !v8 )
    sub_B170D4();
  return (BattleActionData_o *)((__int64 (__fastcall *)(NpcStepInBattleLogicTask_o *, struct BattleLogic_o *, Il2CppMethodPointer))v8->klass->vtable._6_MakeActionData.method)(
                                 v8,
                                 this->fields.logic,
                                 v8->klass->vtable._7_AfterCreateAction.methodPtr);
}


void __fastcall BattleLogicNpcAi__OverwriteTreasureDevice(
        BattleLogicNpcAi_o *this,
        BattleServantData_o *svtData,
        System_Int32_array *actValArray,
        const MethodInfo *method)
{
  int32_t v6; // w0
  int32_t v7; // w21
  int32_t v8; // w0
  int32_t v9; // w1

  if ( (byte_40FC442 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_int____66807072, svtData);
    byte_40FC442 = 1;
  }
  v6 = BasicHelper__IndexValue_int_(
         actValArray,
         0,
         0,
         (const MethodInfo_18B81B4 *)Method_BasicHelper_IndexValue_int____66807072);
  if ( !svtData )
    sub_B170D4();
  v7 = v6;
  v8 = BasicHelper__IndexValue_int_(
         actValArray,
         1,
         svtData->fields.treasuredvcLevel,
         (const MethodInfo_18B81B4 *)Method_BasicHelper_IndexValue_int____66807072);
  if ( v7 >= 1 )
    BattleServantData__UpdateTreasureDevice(svtData, v7, v8, 0LL);
  v9 = BasicHelper__IndexValue_int_(
         actValArray,
         2,
         svtData->fields.lineMaxNp,
         (const MethodInfo_18B81B4 *)Method_BasicHelper_IndexValue_int____66807072);
  BattleServantData__changeNp(svtData, v9, 0, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicNpcAi__ProcAiAct(
        BattleLogicNpcAi_o *this,
        AiNpcBattleServantData_o *npcSvt,
        AiEntity_o *aiEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  AiActEntity_o *AiActEntity; // x0
  int32_t type; // w24
  AiActEntity_o *v13; // x23
  AiState_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  NpcServantAiActArgument_o *v25; // x25

  if ( (byte_40FC43D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, npcSvt);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v8);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    sub_B16FFC(&NpcServantAiActArgument_TypeInfo, v10);
    byte_40FC43D = 1;
  }
  if ( !aiEnt )
    goto LABEL_12;
  AiActEntity = BattleLogicBaseAi__GetAiActEntity((BattleLogicBaseAi_o *)this, aiEnt->fields.aiActId, 0LL);
  if ( !AiActEntity || !npcSvt )
    goto LABEL_12;
  type = AiActEntity->fields.type;
  v13 = AiActEntity;
  v14 = (AiState_o *)((__int64 (__fastcall *)(AiNpcBattleServantData_o *, Il2CppMethodPointer))npcSvt->klass->vtable._18_getAiState.method)(
                       npcSvt,
                       npcSvt->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly((BattleLogicBaseAi_o *)this, type, (AiBaseEntity_o *)aiEnt, v14, 0LL) )
    return this->fields.emptyTask;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v25 = (NpcServantAiActArgument_o *)sub_B170CC(NpcServantAiActArgument_TypeInfo, v21, v22, v23, v24);
  NpcServantAiActArgument___ctor(v25, v13, (AiBaseEntity_o *)aiEnt, (BattleServantData_o *)npcSvt, this, 0LL);
  BattleLogicBaseAi__SetProcAiActTask(
    (BattleLogicBaseAi_o *)this,
    (System_Collections_Generic_List_BattleLogicTask__o *)v20,
    type,
    (BaseAiActArgument_o *)v25,
    0LL);
  if ( !v20 )
LABEL_12:
    sub_B170D4();
  if ( v20->fields._size >= 1 )
    AiNpcBattleServantData__AddActCount(npcSvt, 0LL);
  npcSvt->fields.isNoBackStep = AiEntity__IsNoBackStepNpc(aiEnt, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicNpcAi__SetReactionFunction(
        BattleLogicNpcAi_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  BattleLogic_reactionFunction_o *v9; // x21

  if ( (byte_40FC43A & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleLogicNpcAi_MakeAiActionTask__, list);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v7);
    sub_B16FFC(&BattleLogic_reactionFunction_TypeInfo, v8);
    byte_40FC43A = 1;
  }
  v9 = (BattleLogic_reactionFunction_o *)sub_B170CC(BattleLogic_reactionFunction_TypeInfo, list, method, v3, v4);
  BattleLogic_reactionFunction___ctor(v9, (Il2CppObject *)this, Method_BattleLogicNpcAi_MakeAiActionTask__, 0LL);
  if ( !list )
    sub_B170D4();
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    60,
    (System_String_o *)v9,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
    sub_B170D4();
  return BattleData__getFieldEnemyServantIDList(data, 0, 0LL);
}


System_Int32_array *__fastcall BattleLogicNpcAi__get_PartySvtIds(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B170D4();
  return BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
}


BattlePerformance_o *__fastcall BattleLogicNpcAi__get_Perf(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  struct BattleLogic_o *logic; // x8

  logic = this->fields.logic;
  if ( !logic )
    sub_B170D4();
  return logic->fields.perf;
}