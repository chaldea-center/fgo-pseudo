void __fastcall BattleLogicNpcAi___ctor(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  BattleLogicBaseAi___ctor((BattleLogicBaseAi_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_42EBE8B & 1) == 0 )
  {
    this = (BattleLogicNpcAi_o *)sub_B5D5C4(
                                   &Method_System_Collections_Generic_List_BattleLogicTask__AddRange__,
                                   (_DWORD)taskList,
                                   (_DWORD)arg,
                                   *(_QWORD *)&timingPriority);
    byte_42EBE8B = 1;
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
    sub_B5D69C(this, taskList);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
}


void __fastcall BattleLogicNpcAi__AddNoblePhantasm(
        BattleLogicNpcAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x1
  BattleLogicNpcAi_o *isNobleAction; // x0
  const MethodInfo *v15; // x3
  struct AiActEntity_o *AiActEnt_k__BackingField; // x8
  BattleLogicNpcAi_o *v17; // x21
  System_Int32_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BattleComboData_o *v25; // x22
  BattleServantData_o *v26; // x24
  BattleTreasureDeviceCommandData_o *v27; // x23
  int32_t v28; // w0
  const MethodInfo *v29; // x4
  int32_t treasuredvcLevel; // w8
  BattleServantData_o *svtData; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EBE90 & 1) == 0 )
  {
    sub_B5D5C4(&BattleComboData_TypeInfo, (_DWORD)retList, (_DWORD)arg, method);
    sub_B5D5C4(&BattleTreasureDeviceCommandData_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10, v11, v12);
    byte_42EBE90 = 1;
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
    v17 = isNobleAction;
    BattleLogicNpcAi__OverwriteTreasureDevice(isNobleAction, svtData, AiActEnt_k__BackingField->fields.skillVals, v15);
    v18 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicNpcAi_o *, Il2CppMethodPointer))this->klass->vtable._6_get_OpponentSvtIds.method)(
                                  this,
                                  this->klass->vtable._7_Initialize.methodPtr);
    isNobleAction = (BattleLogicNpcAi_o *)BattleLogicBaseAi__GetLogicTargetIds(
                                            (BattleLogicBaseAi_o *)this,
                                            arg,
                                            v18,
                                            1,
                                            0,
                                            0LL,
                                            0LL);
    if ( !v17 )
      goto LABEL_16;
    v17->fields.logictarget = (struct BattleLogicTarget_o *)isNobleAction;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v17->fields.logictarget,
      (System_Int32_array **)isNobleAction,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    v25 = (BattleComboData_o *)sub_B5D694(BattleComboData_TypeInfo);
    BattleComboData___ctor(v25, 0LL);
    v26 = svtData;
    v27 = (BattleTreasureDeviceCommandData_o *)sub_B5D694(BattleTreasureDeviceCommandData_TypeInfo);
    BattleTreasureDeviceCommandData___ctor(v27, v26, 0LL);
    isNobleAction = (BattleLogicNpcAi_o *)svtData;
    if ( !svtData )
      goto LABEL_16;
    v28 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._21_getThisTurnActCount.method)(
            svtData,
            svtData->klass->vtable._22_getAiParam.methodPtr);
    BattleLogicTask__setActionCommand((BattleLogicTask_o *)v17, v25, (BattleCommandData_o *)v27, v28, v29);
    isNobleAction = (BattleLogicNpcAi_o *)svtData;
    if ( !svtData )
      goto LABEL_16;
    isNobleAction = (BattleLogicNpcAi_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
    if ( !svtData
      || (treasuredvcLevel = svtData->fields.treasuredvcLevel,
          LODWORD(v17->fields.aiActMst) = 4,
          HIDWORD(v17[1].klass) = (_DWORD)isNobleAction,
          LODWORD(v17[1].monitor) = treasuredvcLevel,
          (isNobleAction = (BattleLogicNpcAi_o *)arg->fields._AiEnt_k__BackingField) == 0LL)
      || (isNobleAction = (BattleLogicNpcAi_o *)AiBaseEntity__IsForcedActionSpeedAnyTime(
                                                  (AiBaseEntity_o *)isNobleAction,
                                                  0LL),
          LOBYTE(v17[2].klass) = (unsigned __int8)isNobleAction & 1,
          !retList) )
    {
LABEL_16:
      sub_B5D69C(isNobleAction, v13);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)retList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  }
}


void __fastcall BattleLogicNpcAi__InitAiActTaskFunction(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *dicAiActFunc; // x20
  BattleLogicBaseAi_taskAiActFunction_o *v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x21

  if ( (byte_42EBE88 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__set_Item__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&BattleLogicBaseAi_taskAiActFunction_TypeInfo, v5, v6, v7);
    byte_42EBE88 = 1;
  }
  BattleLogicBaseAi__InitAiActTaskFunction((BattleLogicBaseAi_o *)this, 0LL);
  dicAiActFunc = this->fields.dicAiActFunc;
  v9 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_B5D694(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  if ( !this
    || (v11 = (System_Collections_Generic_List_int__o *)v9,
        BattleLogicBaseAi_taskAiActFunction___ctor(v9, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL),
        !dicAiActFunc) )
  {
    sub_B5D69C(v9, v10);
  }
  System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____set_Item(
    (System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)dicAiActFunc,
    80,
    v11,
    (const MethodInfo_2F49934 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__set_Item__);
}


void __fastcall BattleLogicNpcAi__Initialize(BattleLogicNpcAi_o *this, BattleData_o *data, const MethodInfo *method)
{
  __int64 v3; // x3
  AiLogic_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  AiLogic_o *aiLogic; // x0

  if ( (byte_42EBE87 & 1) == 0 )
  {
    sub_B5D5C4(&AiLogic_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    byte_42EBE87 = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, 0LL);
  v6 = (AiLogic_o *)sub_B5D694(AiLogic_TypeInfo);
  AiLogic___ctor(v6, 0LL);
  this->fields.aiLogic = v6;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.aiLogic,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    sub_B5D69C(0LL, v13);
  AiLogic__Initialize(aiLogic, data, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicNpcAi__MakeAiActionTask(
        BattleLogicNpcAi_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_array *result; // x0

  if ( !task )
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  BattleLogicNpcAi_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct BattleData_o *data; // x8
  struct System_Collections_Generic_List_AiNpcBattleServantData__o *aiNpcDataList; // x8
  struct BattleData_o *v17; // x8
  System_Collections_Generic_List_AiNpcBattleServantData__o *v18; // x22
  BattleLogicNpcAi_o *v19; // x21
  NpcAiCheckTask_Argument_o *v20; // x23
  NpcAiCheckTask_o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v29; // x0
  __int64 v30; // x0

  v5 = this;
  if ( (byte_42EBE8A & 1) == 0 )
  {
    sub_B5D5C4(&NpcAiCheckTask_Argument_TypeInfo, state, (_DWORD)method, v3);
    sub_B5D5C4(&BattleLogicTask___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiNpcBattleServantData__get_Count__, v9, v10, v11);
    this = (BattleLogicNpcAi_o *)sub_B5D5C4(&NpcAiCheckTask_TypeInfo, v12, v13, v14);
    byte_42EBE8A = 1;
  }
  data = v5->fields.data;
  if ( !data )
    goto LABEL_15;
  aiNpcDataList = data->fields.aiNpcDataList;
  if ( !aiNpcDataList )
    goto LABEL_15;
  if ( !state || aiNpcDataList->fields._size < 1 )
    return v5->fields.emptyTask;
  this = (BattleLogicNpcAi_o *)sub_B5D5DC(BattleLogicTask___TypeInfo, 1LL);
  v17 = v5->fields.data;
  if ( !v17
    || (v18 = v17->fields.aiNpcDataList,
        v19 = this,
        v20 = (NpcAiCheckTask_Argument_o *)sub_B5D694(NpcAiCheckTask_Argument_TypeInfo),
        NpcAiCheckTask_Argument___ctor(v20, state, v18, 0, 0LL),
        v21 = (NpcAiCheckTask_o *)sub_B5D694(NpcAiCheckTask_TypeInfo),
        NpcAiCheckTask___ctor(v21, v5, v20, 0LL),
        !v19) )
  {
LABEL_15:
    sub_B5D69C(this, *(_QWORD *)&state);
  }
  if ( v21 )
  {
    this = (BattleLogicNpcAi_o *)sub_B5D684(v21, v19->klass->_1.element_class);
    if ( !this )
    {
      v30 = sub_B5D6BC(0LL);
      sub_B5D668(v30, 0LL);
    }
  }
  if ( !LODWORD(v19->fields.logic) )
  {
    v29 = sub_B5D6C8(this);
    sub_B5D668(v29, 0LL);
  }
  v19->fields.logictarget = (struct BattleLogicTarget_o *)v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v19->fields.logictarget,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  return (BattleLogicTask_array *)v19;
}


BattleLogicTask_o *__fastcall BattleLogicNpcAi__MakeBackStepTask(
        BattleLogicNpcAi_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  NpcBackStepBattleLogicTask_o *v5; // x20

  if ( (byte_42EBE8F & 1) == 0 )
  {
    sub_B5D5C4(&NpcBackStepBattleLogicTask_TypeInfo, targetId, (_DWORD)method, v3);
    byte_42EBE8F = 1;
  }
  v5 = (NpcBackStepBattleLogicTask_o *)sub_B5D694(NpcBackStepBattleLogicTask_TypeInfo);
  NpcBackStepBattleLogicTask___ctor(v5, targetId, 0, 0LL);
  return (BattleLogicTask_o *)v5;
}


BattleActionData_o *__fastcall BattleLogicNpcAi__MakeLoadNpcPreStepInAction(
        BattleLogicNpcAi_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PreLoadNpcBattleLogicTask_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42EBE8E & 1) == 0 )
  {
    sub_B5D5C4(&PreLoadNpcBattleLogicTask_TypeInfo, targetId, (_DWORD)method, v3);
    byte_42EBE8E = 1;
  }
  v6 = (PreLoadNpcBattleLogicTask_o *)sub_B5D694(PreLoadNpcBattleLogicTask_TypeInfo);
  PreLoadNpcBattleLogicTask___ctor(v6, targetId, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  return (BattleActionData_o *)((__int64 (__fastcall *)(PreLoadNpcBattleLogicTask_o *, struct BattleLogic_o *, Il2CppMethodPointer))v6->klass->vtable._6_MakeActionData.method)(
                                 v6,
                                 this->fields.logic,
                                 v6->klass->vtable._7_AfterCreateAction.methodPtr);
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

  if ( (byte_42EBE8D & 1) == 0 )
  {
    sub_B5D5C4(&NpcStepInBattleLogicTask_TypeInfo, targetId, isForcedSpeedOne, method);
    byte_42EBE8D = 1;
  }
  v7 = (NpcStepInBattleLogicTask_o *)sub_B5D694(NpcStepInBattleLogicTask_TypeInfo);
  NpcStepInBattleLogicTask___ctor(v7, targetId, isForcedSpeedOne, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
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

  if ( (byte_42EBE91 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_int____68811968, (_DWORD)svtData, (_DWORD)actValArray, method);
    byte_42EBE91 = 1;
  }
  v6 = BasicHelper__IndexValue_int_(
         actValArray,
         0,
         0,
         (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
  if ( !svtData )
    sub_B5D69C(v6, v7);
  v8 = v6;
  v9 = BasicHelper__IndexValue_int_(
         actValArray,
         1,
         svtData->fields.treasuredvcLevel,
         (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
  if ( v8 >= 1 )
    BattleServantData__UpdateTreasureDevice(svtData, v8, v9, 0LL);
  v10 = BasicHelper__IndexValue_int_(
          actValArray,
          2,
          svtData->fields.lineMaxNp,
          (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
  BattleServantData__changeNp(svtData, v10, 0, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicNpcAi__ProcAiAct(
        BattleLogicNpcAi_o *this,
        AiNpcBattleServantData_o *npcSvt,
        AiEntity_o *aiEnt,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int32_t data_high; // w24
  AiActEntity_o *v20; // x23
  AiState_o *v21; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x22
  NpcServantAiActArgument_o *v24; // x25

  v6 = (BattleLogicBaseAi_o *)this;
  if ( (byte_42EBE8C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleLogicTask__ToArray__,
      (_DWORD)npcSvt,
      (_DWORD)aiEnt,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13, v14, v15);
    this = (BattleLogicNpcAi_o *)sub_B5D5C4(&NpcServantAiActArgument_TypeInfo, v16, v17, v18);
    byte_42EBE8C = 1;
  }
  if ( !aiEnt )
    goto LABEL_12;
  this = (BattleLogicNpcAi_o *)BattleLogicBaseAi__GetAiActEntity(v6, aiEnt->fields.aiActId, 0LL);
  if ( !this || !npcSvt )
    goto LABEL_12;
  data_high = HIDWORD(this->fields.data);
  v20 = (AiActEntity_o *)this;
  v21 = (AiState_o *)((__int64 (__fastcall *)(AiNpcBattleServantData_o *, Il2CppMethodPointer))npcSvt->klass->vtable._18_getAiState.method)(
                       npcSvt,
                       npcSvt->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly(v6, data_high, (AiBaseEntity_o *)aiEnt, v21, 0LL) )
    return v6->fields.emptyTask;
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v24 = (NpcServantAiActArgument_o *)sub_B5D694(NpcServantAiActArgument_TypeInfo);
  NpcServantAiActArgument___ctor(
    v24,
    v20,
    (AiBaseEntity_o *)aiEnt,
    (BattleServantData_o *)npcSvt,
    (BattleLogicNpcAi_o *)v6,
    0LL);
  this = (BattleLogicNpcAi_o *)BattleLogicBaseAi__SetProcAiActTask(
                                 v6,
                                 (System_Collections_Generic_List_BattleLogicTask__o *)v23,
                                 data_high,
                                 (BaseAiActArgument_o *)v24,
                                 0LL);
  if ( !v23 )
LABEL_12:
    sub_B5D69C(this, npcSvt);
  if ( v23->fields._size >= 1 )
    AiNpcBattleServantData__AddActCount(npcSvt, 0LL);
  npcSvt->fields.isNoBackStep = AiEntity__IsNoBackStepNpc(aiEnt, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicNpcAi__SetReactionFunction(
        BattleLogicNpcAi_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  BattleLogic_reactionFunction_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42EBE89 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleLogicNpcAi_MakeAiActionTask__, (_DWORD)list, (_DWORD)method, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v6,
      v7,
      v8);
    sub_B5D5C4(&BattleLogic_reactionFunction_TypeInfo, v9, v10, v11);
    byte_42EBE89 = 1;
  }
  v12 = (BattleLogic_reactionFunction_o *)sub_B5D694(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v12, (Il2CppObject *)this, Method_BattleLogicNpcAi_MakeAiActionTask__, 0LL);
  if ( !list )
    sub_B5D69C(v13, v14);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    60,
    (System_String_o *)v12,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
    sub_B5D69C(0LL, method);
  return BattleData__getFieldEnemyServantIDList(data, 0, 0LL);
}


System_Int32_array *__fastcall BattleLogicNpcAi__get_PartySvtIds(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B5D69C(0LL, method);
  return BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
}


BattlePerformance_o *__fastcall BattleLogicNpcAi__get_Perf(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  struct BattleLogic_o *logic; // x8

  logic = this->fields.logic;
  if ( !logic )
    sub_B5D69C(this, method);
  return logic->fields.perf;
}