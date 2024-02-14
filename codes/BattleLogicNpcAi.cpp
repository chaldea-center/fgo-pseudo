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
  if ( (byte_42176CB & 1) == 0 )
  {
    this = (BattleLogicNpcAi_o *)sub_B0D8A4(
                                   &Method_System_Collections_Generic_List_BattleLogicTask__AddRange__,
                                   taskList);
    byte_42176CB = 1;
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
    sub_B0D97C(this);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
}


void __fastcall BattleLogicNpcAi__AddNoblePhantasm(
        BattleLogicNpcAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  BattleLogicNpcAi_o *isNobleAction; // x0
  const MethodInfo *v10; // x3
  struct AiActEntity_o *AiActEnt_k__BackingField; // x8
  BattleLogicNpcAi_o *v12; // x21
  System_Int32_array *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  BattleComboData_o *v22; // x22
  BattleServantData_o *v23; // x24
  __int64 v24; // x1
  __int64 v25; // x2
  BattleTreasureDeviceCommandData_o *v26; // x23
  int32_t v27; // w0
  const MethodInfo *v28; // x4
  int32_t treasuredvcLevel; // w8
  BattleServantData_o *svtData; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42176D0 & 1) == 0 )
  {
    sub_B0D8A4(&BattleComboData_TypeInfo, retList);
    sub_B0D8A4(&BattleTreasureDeviceCommandData_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    byte_42176D0 = 1;
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
    v12 = isNobleAction;
    BattleLogicNpcAi__OverwriteTreasureDevice(isNobleAction, svtData, AiActEnt_k__BackingField->fields.skillVals, v10);
    v13 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicNpcAi_o *, Il2CppMethodPointer))this->klass->vtable._6_get_OpponentSvtIds.method)(
                                  this,
                                  this->klass->vtable._7_Initialize.methodPtr);
    isNobleAction = (BattleLogicNpcAi_o *)BattleLogicBaseAi__GetLogicTargetIds(
                                            (BattleLogicBaseAi_o *)this,
                                            arg,
                                            v13,
                                            1,
                                            0,
                                            0LL,
                                            0LL);
    if ( !v12 )
      goto LABEL_16;
    v12->fields.logictarget = (struct BattleLogicTarget_o *)isNobleAction;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v12->fields.logictarget,
      (System_Int32_array **)isNobleAction,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v22 = (BattleComboData_o *)sub_B0D974(BattleComboData_TypeInfo, v20, v21);
    BattleComboData___ctor(v22, 0LL);
    v23 = svtData;
    v26 = (BattleTreasureDeviceCommandData_o *)sub_B0D974(BattleTreasureDeviceCommandData_TypeInfo, v24, v25);
    BattleTreasureDeviceCommandData___ctor(v26, v23, 0LL);
    isNobleAction = (BattleLogicNpcAi_o *)svtData;
    if ( !svtData )
      goto LABEL_16;
    v27 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._21_getThisTurnActCount.method)(
            svtData,
            svtData->klass->vtable._22_getAiParam.methodPtr);
    BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v22, (BattleCommandData_o *)v26, v27, v28);
    isNobleAction = (BattleLogicNpcAi_o *)svtData;
    if ( !svtData )
      goto LABEL_16;
    isNobleAction = (BattleLogicNpcAi_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
    if ( !svtData
      || (treasuredvcLevel = svtData->fields.treasuredvcLevel,
          LODWORD(v12->fields.aiActMst) = 4,
          HIDWORD(v12[1].klass) = (_DWORD)isNobleAction,
          LODWORD(v12[1].monitor) = treasuredvcLevel,
          (isNobleAction = (BattleLogicNpcAi_o *)arg->fields._AiEnt_k__BackingField) == 0LL)
      || (isNobleAction = (BattleLogicNpcAi_o *)AiBaseEntity__IsForcedActionSpeedAnyTime(
                                                  (AiBaseEntity_o *)isNobleAction,
                                                  0LL),
          LOBYTE(v12[2].klass) = (unsigned __int8)isNobleAction & 1,
          !retList) )
    {
LABEL_16:
      sub_B0D97C(isNobleAction);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)retList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  }
}


void __fastcall BattleLogicNpcAi__InitAiActTaskFunction(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *dicAiActFunc; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  BattleLogicBaseAi_taskAiActFunction_o *v7; // x0
  System_Collections_Generic_List_int__o *v8; // x21

  if ( (byte_42176C8 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__set_Item__,
      method);
    sub_B0D8A4(&BattleLogicBaseAi_taskAiActFunction_TypeInfo, v3);
    byte_42176C8 = 1;
  }
  BattleLogicBaseAi__InitAiActTaskFunction((BattleLogicBaseAi_o *)this, 0LL);
  dicAiActFunc = this->fields.dicAiActFunc;
  v7 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_B0D974(BattleLogicBaseAi_taskAiActFunction_TypeInfo, v5, v6);
  if ( !this
    || (v8 = (System_Collections_Generic_List_int__o *)v7,
        BattleLogicBaseAi_taskAiActFunction___ctor(v7, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL),
        !dicAiActFunc) )
  {
    sub_B0D97C(v7);
  }
  System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____set_Item(
    (System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)dicAiActFunc,
    80,
    v8,
    (const MethodInfo_2EA6C98 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__set_Item__);
}


void __fastcall BattleLogicNpcAi__Initialize(BattleLogicNpcAi_o *this, BattleData_o *data, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  AiLogic_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  AiLogic_o *aiLogic; // x0

  if ( (byte_42176C7 & 1) == 0 )
  {
    sub_B0D8A4(&AiLogic_TypeInfo, data);
    byte_42176C7 = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, 0LL);
  v7 = (AiLogic_o *)sub_B0D974(AiLogic_TypeInfo, v5, v6);
  AiLogic___ctor(v7, 0LL);
  this->fields.aiLogic = v7;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.aiLogic,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    sub_B0D97C(0LL);
  AiLogic__Initialize(aiLogic, data, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicNpcAi__MakeAiActionTask(
        BattleLogicNpcAi_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_array *result; // x0

  if ( !task )
    sub_B0D97C(this);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleData_o *data; // x8
  struct System_Collections_Generic_List_AiNpcBattleServantData__o *aiNpcDataList; // x8
  __int64 v10; // x1
  __int64 v11; // x2
  struct BattleData_o *v12; // x8
  System_Collections_Generic_List_AiNpcBattleServantData__o *v13; // x22
  BattleLogicNpcAi_o *v14; // x21
  NpcAiCheckTask_Argument_o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  NpcAiCheckTask_o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v26; // x0
  __int64 v27; // x0

  v4 = this;
  if ( (byte_42176CA & 1) == 0 )
  {
    sub_B0D8A4(&NpcAiCheckTask_Argument_TypeInfo, *(_QWORD *)&state);
    sub_B0D8A4(&BattleLogicTask___TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiNpcBattleServantData__get_Count__, v6);
    this = (BattleLogicNpcAi_o *)sub_B0D8A4(&NpcAiCheckTask_TypeInfo, v7);
    byte_42176CA = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_15;
  aiNpcDataList = data->fields.aiNpcDataList;
  if ( !aiNpcDataList )
    goto LABEL_15;
  if ( !state || aiNpcDataList->fields._size < 1 )
    return v4->fields.emptyTask;
  this = (BattleLogicNpcAi_o *)sub_B0D8BC(BattleLogicTask___TypeInfo, 1LL);
  v12 = v4->fields.data;
  if ( !v12
    || (v13 = v12->fields.aiNpcDataList,
        v14 = this,
        v15 = (NpcAiCheckTask_Argument_o *)sub_B0D974(NpcAiCheckTask_Argument_TypeInfo, v10, v11),
        NpcAiCheckTask_Argument___ctor(v15, state, v13, 0, 0LL),
        v18 = (NpcAiCheckTask_o *)sub_B0D974(NpcAiCheckTask_TypeInfo, v16, v17),
        NpcAiCheckTask___ctor(v18, v4, v15, 0LL),
        !v14) )
  {
LABEL_15:
    sub_B0D97C(this);
  }
  if ( v18 )
  {
    this = (BattleLogicNpcAi_o *)sub_B0D964(v18, v14->klass->_1.element_class);
    if ( !this )
    {
      v27 = sub_B0D99C(0LL);
      sub_B0D948(v27, 0LL);
    }
  }
  if ( !LODWORD(v14->fields.logic) )
  {
    v26 = sub_B0D9A8(this);
    sub_B0D948(v26, 0LL);
  }
  v14->fields.logictarget = (struct BattleLogicTarget_o *)v18;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v14->fields.logictarget,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  return (BattleLogicTask_array *)v14;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_o *__fastcall BattleLogicNpcAi__MakeBackStepTask(
        BattleLogicNpcAi_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  NpcBackStepBattleLogicTask_o *v4; // x20

  if ( (byte_42176CF & 1) == 0 )
  {
    sub_B0D8A4(&NpcBackStepBattleLogicTask_TypeInfo, *(_QWORD *)&targetId);
    byte_42176CF = 1;
  }
  v4 = (NpcBackStepBattleLogicTask_o *)sub_B0D974(NpcBackStepBattleLogicTask_TypeInfo, *(_QWORD *)&targetId, method);
  NpcBackStepBattleLogicTask___ctor(v4, targetId, 0, 0LL);
  return (BattleLogicTask_o *)v4;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicNpcAi__MakeLoadNpcPreStepInAction(
        BattleLogicNpcAi_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  PreLoadNpcBattleLogicTask_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_42176CE & 1) == 0 )
  {
    sub_B0D8A4(&PreLoadNpcBattleLogicTask_TypeInfo, *(_QWORD *)&targetId);
    byte_42176CE = 1;
  }
  v5 = (PreLoadNpcBattleLogicTask_o *)sub_B0D974(PreLoadNpcBattleLogicTask_TypeInfo, *(_QWORD *)&targetId, method);
  PreLoadNpcBattleLogicTask___ctor(v5, targetId, 0, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  return (BattleActionData_o *)((__int64 (__fastcall *)(PreLoadNpcBattleLogicTask_o *, struct BattleLogic_o *, Il2CppMethodPointer))v5->klass->vtable._6_MakeActionData.method)(
                                 v5,
                                 this->fields.logic,
                                 v5->klass->vtable._7_AfterCreateAction.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicNpcAi__MakeStepInAction(
        BattleLogicNpcAi_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  NpcStepInBattleLogicTask_o *v7; // x22
  __int64 v8; // x0

  if ( (byte_42176CD & 1) == 0 )
  {
    sub_B0D8A4(&NpcStepInBattleLogicTask_TypeInfo, *(_QWORD *)&targetId);
    byte_42176CD = 1;
  }
  v7 = (NpcStepInBattleLogicTask_o *)sub_B0D974(
                                       NpcStepInBattleLogicTask_TypeInfo,
                                       *(_QWORD *)&targetId,
                                       isForcedSpeedOne);
  NpcStepInBattleLogicTask___ctor(v7, targetId, isForcedSpeedOne, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
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
  int32_t v7; // w21
  int32_t v8; // w0
  int32_t v9; // w1

  if ( (byte_42176D1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_int____67955848, svtData);
    byte_42176D1 = 1;
  }
  v6 = BasicHelper__IndexValue_int_(
         actValArray,
         0,
         0,
         (const MethodInfo_17093A8 *)Method_BasicHelper_IndexValue_int____67955848);
  if ( !svtData )
    sub_B0D97C(v6);
  v7 = v6;
  v8 = BasicHelper__IndexValue_int_(
         actValArray,
         1,
         svtData->fields.treasuredvcLevel,
         (const MethodInfo_17093A8 *)Method_BasicHelper_IndexValue_int____67955848);
  if ( v7 >= 1 )
    BattleServantData__UpdateTreasureDevice(svtData, v7, v8, 0LL);
  v9 = BasicHelper__IndexValue_int_(
         actValArray,
         2,
         svtData->fields.lineMaxNp,
         (const MethodInfo_17093A8 *)Method_BasicHelper_IndexValue_int____67955848);
  BattleServantData__changeNp(svtData, v9, 0, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicNpcAi__ProcAiAct(
        BattleLogicNpcAi_o *this,
        AiNpcBattleServantData_o *npcSvt,
        AiEntity_o *aiEnt,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t data_high; // w24
  AiActEntity_o *v12; // x23
  AiState_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  NpcServantAiActArgument_o *v20; // x25

  v6 = (BattleLogicBaseAi_o *)this;
  if ( (byte_42176CC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, npcSvt);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    this = (BattleLogicNpcAi_o *)sub_B0D8A4(&NpcServantAiActArgument_TypeInfo, v10);
    byte_42176CC = 1;
  }
  if ( !aiEnt )
    goto LABEL_12;
  this = (BattleLogicNpcAi_o *)BattleLogicBaseAi__GetAiActEntity(v6, aiEnt->fields.aiActId, 0LL);
  if ( !this || !npcSvt )
    goto LABEL_12;
  data_high = HIDWORD(this->fields.data);
  v12 = (AiActEntity_o *)this;
  v13 = (AiState_o *)((__int64 (__fastcall *)(AiNpcBattleServantData_o *, Il2CppMethodPointer))npcSvt->klass->vtable._18_getAiState.method)(
                       npcSvt,
                       npcSvt->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly(v6, data_high, (AiBaseEntity_o *)aiEnt, v13, 0LL) )
    return v6->fields.emptyTask;
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v20 = (NpcServantAiActArgument_o *)sub_B0D974(NpcServantAiActArgument_TypeInfo, v18, v19);
  NpcServantAiActArgument___ctor(
    v20,
    v12,
    (AiBaseEntity_o *)aiEnt,
    (BattleServantData_o *)npcSvt,
    (BattleLogicNpcAi_o *)v6,
    0LL);
  this = (BattleLogicNpcAi_o *)BattleLogicBaseAi__SetProcAiActTask(
                                 v6,
                                 (System_Collections_Generic_List_BattleLogicTask__o *)v17,
                                 data_high,
                                 (BaseAiActArgument_o *)v20,
                                 0LL);
  if ( !v17 )
LABEL_12:
    sub_B0D97C(this);
  if ( v17->fields._size >= 1 )
    AiNpcBattleServantData__AddActCount(npcSvt, 0LL);
  npcSvt->fields.isNoBackStep = AiEntity__IsNoBackStepNpc(aiEnt, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicNpcAi__SetReactionFunction(
        BattleLogicNpcAi_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  BattleLogic_reactionFunction_o *v7; // x21
  __int64 v8; // x0

  if ( (byte_42176C9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleLogicNpcAi_MakeAiActionTask__, list);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v5);
    sub_B0D8A4(&BattleLogic_reactionFunction_TypeInfo, v6);
    byte_42176C9 = 1;
  }
  v7 = (BattleLogic_reactionFunction_o *)sub_B0D974(BattleLogic_reactionFunction_TypeInfo, list, method);
  BattleLogic_reactionFunction___ctor(v7, (Il2CppObject *)this, Method_BattleLogicNpcAi_MakeAiActionTask__, 0LL);
  if ( !list )
    sub_B0D97C(v8);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    60,
    (System_String_o *)v7,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
    sub_B0D97C(0LL);
  return BattleData__getFieldEnemyServantIDList(data, 0, 0LL);
}


System_Int32_array *__fastcall BattleLogicNpcAi__get_PartySvtIds(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B0D97C(0LL);
  return BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
}


BattlePerformance_o *__fastcall BattleLogicNpcAi__get_Perf(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  struct BattleLogic_o *logic; // x8

  logic = this->fields.logic;
  if ( !logic )
    sub_B0D97C(this);
  return logic->fields.perf;
}