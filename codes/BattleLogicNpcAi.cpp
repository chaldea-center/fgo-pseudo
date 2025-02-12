void __fastcall BattleLogicNpcAi___ctor(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  BattleLogicServantAi___ctor((BattleLogicServantAi_o *)this, 0LL);
}


void __fastcall BattleLogicNpcAi__AddAiActionTask(
        BattleLogicNpcAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *taskList,
        NpcAiCheckTask_Argument_o *arg,
        int32_t timingPriority,
        const MethodInfo *method)
{
  BattleLogicNpcAi_o *v8; // x21
  BattleServantData_o *Npc_k__BackingField; // x23
  struct BattleData_o *data; // x8
  AiEntity_o *Action; // x0
  const MethodInfo *v12; // x4
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4BCA818 & 1) == 0 )
  {
    this = (BattleLogicNpcAi_o *)sub_1C1ABD4(
                                   &Method_System_Collections_Generic_List_BattleLogicTask__AddRange__,
                                   taskList);
    byte_4BCA818 = 1;
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
                                 arg,
                                 v12);
  if ( !taskList )
LABEL_12:
    sub_1C1AE30(this, taskList);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)taskList,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_363CA9C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
}


void __fastcall BattleLogicNpcAi__AddNoblePhantasm(
        BattleLogicNpcAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t isNobleAction; // x0
  const MethodInfo *v11; // x3
  struct AiActEntity_o *AiActEnt_k__BackingField; // x8
  int64_t v13; // x21
  System_Int32_array *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  BattleComboData_o *v21; // x22
  BattleServantData_o *v22; // x24
  BattleTreasureDeviceCommandData_o *v23; // x23
  int32_t v24; // w0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  BattleServantData_o *svtData; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BCA81D & 1) == 0 )
  {
    sub_1C1ABD4(&BattleComboData_TypeInfo, retList);
    sub_1C1ABD4(&BattleTreasureDeviceCommandData_TypeInfo, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    byte_4BCA81D = 1;
  }
  svtData = 0LL;
  if ( (((__int64 (__fastcall *)(BattleLogicNpcAi_o *, BattleServantData_o **, BaseAiActArgument_o *, Il2CppMethodPointer))this->klass->vtable._22_TryGetActorServant.method)(
          this,
          &svtData,
          arg,
          this->klass->vtable._23_AddNoblePhantasm.methodPtr) & 1) != 0 )
  {
    isNobleAction = (int64_t)svtData;
    if ( !svtData )
      goto LABEL_19;
    isNobleAction = BattleServantData__isNobleAction(svtData, 0LL);
    if ( (isNobleAction & 1) == 0 )
      return;
    if ( !arg )
      goto LABEL_19;
    isNobleAction = (int64_t)BaseAiActArgument__MakeTask(arg, (BattleLogicBaseAi_o *)this, 0, 0LL);
    AiActEnt_k__BackingField = arg->fields._AiActEnt_k__BackingField;
    if ( !AiActEnt_k__BackingField )
      goto LABEL_19;
    v13 = isNobleAction;
    BattleLogicNpcAi__OverwriteTreasureDevice(
      (BattleLogicNpcAi_o *)isNobleAction,
      svtData,
      AiActEnt_k__BackingField->fields.skillVals,
      v11);
    v14 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicNpcAi_o *, Il2CppMethodPointer))this->klass->vtable._6_get_OpponentSvtIds.method)(
                                  this,
                                  this->klass->vtable._7_Initialize.methodPtr);
    isNobleAction = (int64_t)BattleLogicBaseAi__GetLogicTargetIds((BattleLogicBaseAi_o *)this, arg, v14, 1, 0, 0LL, 0LL);
    if ( !v13 )
      goto LABEL_19;
    *(_QWORD *)(v13 + 32) = isNobleAction;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v13 + 32), isNobleAction, v15, v16, v17, v18, v19, v20);
    v21 = (BattleComboData_o *)sub_1C1AE20(BattleComboData_TypeInfo);
    BattleComboData___ctor(v21, 0LL);
    v22 = svtData;
    v23 = (BattleTreasureDeviceCommandData_o *)sub_1C1AE20(BattleTreasureDeviceCommandData_TypeInfo);
    BattleTreasureDeviceCommandData___ctor(v23, v22, 0LL);
    isNobleAction = (int64_t)svtData;
    if ( !svtData )
      goto LABEL_19;
    v24 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._21_getThisTurnActCount.method)(
            svtData,
            svtData->klass->vtable._22_getAiParam.methodPtr);
    BattleLogicTask__setActionCommand((BattleLogicTask_o *)v13, v21, (BattleCommandData_o *)v23, v24, 0LL);
    isNobleAction = (int64_t)svtData;
    if ( !svtData )
      goto LABEL_19;
    isNobleAction = BattleServantData__getTreasureDvcId(svtData, 1, 0LL, 0LL);
    if ( !svtData
      || (BattleLogicTask__setActionTreasureDvc(
            (BattleLogicTask_o *)v13,
            isNobleAction,
            svtData->fields.treasuredvcLevel,
            0LL),
          (isNobleAction = (int64_t)arg->fields._AiEnt_k__BackingField) == 0)
      || (isNobleAction = AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)isNobleAction, 0LL),
          *(_BYTE *)(v13 + 176) = isNobleAction & 1,
          !retList)
      || (items = retList->fields._items,
          v32 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
          ++retList->fields._version,
          !items) )
    {
LABEL_19:
      sub_1C1AE30(isNobleAction, v9);
    }
    size = retList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)retList,
        (Il2CppObject *)v13,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &items->obj.klass + size;
      retList->fields._size = size + 1;
      v34[4] = (Il2CppClass *)v13;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v34 + 4), v13, v25, v26, v27, v28, v29, v30);
    }
  }
}


void __fastcall BattleLogicNpcAi__InitAiActTaskFunction(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicAiActFunc; // x20
  BattleLogicBaseAi_taskAiActFunction_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BCA815 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__set_Item__,
      method);
    sub_1C1ABD4(&BattleLogicBaseAi_taskAiActFunction_TypeInfo, v3);
    byte_4BCA815 = 1;
  }
  BattleLogicBaseAi__InitAiActTaskFunction((BattleLogicBaseAi_o *)this, 0LL);
  dicAiActFunc = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicAiActFunc;
  v5 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C1AE20(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(v5, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
  if ( !dicAiActFunc )
    sub_1C1AE30(v6, v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
    dicAiActFunc,
    80,
    (Il2CppObject *)v5,
    (const MethodInfo_32D28D4 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__set_Item__);
}


void __fastcall BattleLogicNpcAi__Initialize(BattleLogicNpcAi_o *this, BattleData_o *data, const MethodInfo *method)
{
  AiLogic_o *v5; // x21
  struct AiLogic_o **p_aiLogic; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1

  if ( (byte_4BCA814 & 1) == 0 )
  {
    sub_1C1ABD4(&AiLogic_TypeInfo, data);
    byte_4BCA814 = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, 0LL);
  v5 = (AiLogic_o *)sub_1C1AE20(AiLogic_TypeInfo);
  AiLogic___ctor(v5, 0LL);
  this->fields.aiLogic = v5;
  p_aiLogic = &this->fields.aiLogic;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_aiLogic, (int64_t)v5, v7, v8, v9, v10, v11, v12);
  if ( !*p_aiLogic )
    sub_1C1AE30(0LL, v13);
  AiLogic__Initialize(*p_aiLogic, data, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicNpcAi__MakeAiActionTask(
        BattleLogicNpcAi_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_array *result; // x0

  if ( !task )
    sub_1C1AE30(this, 0LL);
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
  struct BattleData_o *v10; // x8
  System_Collections_Generic_List_AiNpcBattleServantData__o *v11; // x22
  BattleLogicNpcAi_o *v12; // x21
  NpcAiCheckTask_Argument_o *v13; // x23
  const MethodInfo *v14; // x4
  NpcAiCheckTask_o *v15; // x20
  const MethodInfo *v16; // x3
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v24; // x0

  v4 = this;
  if ( (byte_4BCA817 & 1) == 0 )
  {
    sub_1C1ABD4(&NpcAiCheckTask_Argument_TypeInfo, *(_QWORD *)&state);
    sub_1C1ABD4(&BattleLogicTask___TypeInfo, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_AiNpcBattleServantData__get_Count__, v6);
    this = (BattleLogicNpcAi_o *)sub_1C1ABD4(&NpcAiCheckTask_TypeInfo, v7);
    byte_4BCA817 = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_15;
  aiNpcDataList = data->fields.aiNpcDataList;
  if ( !aiNpcDataList )
    goto LABEL_15;
  if ( !state || aiNpcDataList->fields._size < 1 )
    return v4->fields.emptyTask;
  this = (BattleLogicNpcAi_o *)sub_1C1AC7C(BattleLogicTask___TypeInfo, 1LL);
  v10 = v4->fields.data;
  if ( !v10
    || (v11 = v10->fields.aiNpcDataList,
        v12 = this,
        v13 = (NpcAiCheckTask_Argument_o *)sub_1C1AE20(NpcAiCheckTask_Argument_TypeInfo),
        NpcAiCheckTask_Argument___ctor(v13, state, v11, 0, v14),
        v15 = (NpcAiCheckTask_o *)sub_1C1AE20(NpcAiCheckTask_TypeInfo),
        NpcAiCheckTask___ctor(v15, v4, v13, v16),
        !v12) )
  {
LABEL_15:
    sub_1C1AE30(this, *(_QWORD *)&state);
  }
  if ( v15 )
  {
    this = (BattleLogicNpcAi_o *)sub_1C1AD10(v15, v12->klass->_1.element_class);
    if ( !this )
    {
      v24 = sub_1C1AE54(0LL);
      sub_1C1ACFC(v24, 0LL);
    }
  }
  if ( !LODWORD(v12->fields.logic) )
    sub_1C1AE38(this, *(_QWORD *)&state);
  v12->fields.logictarget = (struct BattleLogicTarget_o *)v15;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v12->fields.logictarget, (int64_t)v15, v17, v18, v19, v20, v21, v22);
  return (BattleLogicTask_array *)v12;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_o *__fastcall BattleLogicNpcAi__MakeBackStepTask(
        BattleLogicNpcAi_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  NpcBackStepBattleLogicTask_o *v4; // x20

  if ( (byte_4BCA81C & 1) == 0 )
  {
    sub_1C1ABD4(&NpcBackStepBattleLogicTask_TypeInfo, *(_QWORD *)&targetId);
    byte_4BCA81C = 1;
  }
  v4 = (NpcBackStepBattleLogicTask_o *)sub_1C1AE20(NpcBackStepBattleLogicTask_TypeInfo);
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

  if ( (byte_4BCA81B & 1) == 0 )
  {
    sub_1C1ABD4(&PreLoadNpcBattleLogicTask_TypeInfo, *(_QWORD *)&targetId);
    byte_4BCA81B = 1;
  }
  v5 = (PreLoadNpcBattleLogicTask_o *)sub_1C1AE20(PreLoadNpcBattleLogicTask_TypeInfo);
  PreLoadNpcBattleLogicTask___ctor(v5, targetId, 0, 0LL);
  return BattleLogicTask__MakeAction((BattleLogicTask_o *)v5, this->fields.logic, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicNpcAi__MakeStepInAction(
        BattleLogicNpcAi_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  NpcStepInBattleLogicTask_o *v7; // x22

  if ( (byte_4BCA81A & 1) == 0 )
  {
    sub_1C1ABD4(&NpcStepInBattleLogicTask_TypeInfo, *(_QWORD *)&targetId);
    byte_4BCA81A = 1;
  }
  v7 = (NpcStepInBattleLogicTask_o *)sub_1C1AE20(NpcStepInBattleLogicTask_TypeInfo);
  NpcStepInBattleLogicTask___ctor(v7, targetId, isForcedSpeedOne, 0LL);
  return BattleLogicTask__MakeAction((BattleLogicTask_o *)v7, this->fields.logic, 0LL);
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

  if ( (byte_4BCA81E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_IndexValue_int____77549168, svtData);
    byte_4BCA81E = 1;
  }
  v6 = BasicHelper__IndexValue_int_(
         actValArray,
         0,
         0,
         (const MethodInfo_2F8DF74 *)Method_BasicHelper_IndexValue_int____77549168);
  if ( !svtData )
    sub_1C1AE30(v6, v7);
  v8 = v6;
  v9 = BasicHelper__IndexValue_int_(
         actValArray,
         1,
         svtData->fields.treasuredvcLevel,
         (const MethodInfo_2F8DF74 *)Method_BasicHelper_IndexValue_int____77549168);
  if ( v8 >= 1 )
    BattleServantData__UpdateTreasureDevice(svtData, v8, v9, 0LL);
  v10 = BasicHelper__IndexValue_int_(
          actValArray,
          2,
          svtData->fields.lineMaxNp,
          (const MethodInfo_2F8DF74 *)Method_BasicHelper_IndexValue_int____77549168);
  BattleServantData__changeNp(svtData, v10, 0, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicNpcAi__ProcAiAct(
        BattleLogicNpcAi_o *this,
        AiNpcBattleServantData_o *npcSvt,
        AiEntity_o *aiEnt,
        NpcAiCheckTask_Argument_o *checkTaskArg,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t data_high; // w24
  AiActEntity_o *v14; // x25
  AiState_o *v15; // x0
  System_Collections_Generic_List_object__o *v17; // x23
  int32_t State_k__BackingField; // w22
  NpcServantAiActArgument_o *v19; // x26

  v8 = (BattleLogicBaseAi_o *)this;
  if ( (byte_4BCA819 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, npcSvt);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v10);
    sub_1C1ABD4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    this = (BattleLogicNpcAi_o *)sub_1C1ABD4(&NpcServantAiActArgument_TypeInfo, v12);
    byte_4BCA819 = 1;
  }
  if ( !aiEnt )
    goto LABEL_13;
  this = (BattleLogicNpcAi_o *)BattleLogicBaseAi__GetAiActEntity(v8, aiEnt->fields.aiActId, 0LL);
  if ( !this || !npcSvt )
    goto LABEL_13;
  data_high = HIDWORD(this->fields.data);
  v14 = (AiActEntity_o *)this;
  v15 = (AiState_o *)((__int64 (__fastcall *)(AiNpcBattleServantData_o *, Il2CppMethodPointer))npcSvt->klass->vtable._18_getAiState.method)(
                       npcSvt,
                       npcSvt->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly(v8, data_high, (AiBaseEntity_o *)aiEnt, v15, 0LL) )
    return v8->fields.emptyTask;
  v17 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !checkTaskArg
    || (State_k__BackingField = checkTaskArg->fields._State_k__BackingField,
        v19 = (NpcServantAiActArgument_o *)sub_1C1AE20(NpcServantAiActArgument_TypeInfo),
        NpcServantAiActArgument___ctor(
          v19,
          v14,
          (AiBaseEntity_o *)aiEnt,
          (BattleServantData_o *)npcSvt,
          (BattleLogicNpcAi_o *)v8,
          State_k__BackingField,
          0LL),
        this = (BattleLogicNpcAi_o *)BattleLogicBaseAi__SetProcAiActTask(
                                       v8,
                                       (System_Collections_Generic_List_BattleLogicTask__o *)v17,
                                       data_high,
                                       (BaseAiActArgument_o *)v19,
                                       0LL),
        !v17) )
  {
LABEL_13:
    sub_1C1AE30(this, npcSvt);
  }
  if ( v17->fields._size >= 1 )
    AiNpcBattleServantData__AddActCount(npcSvt, 0LL);
  npcSvt->fields.isNoBackStep = AiEntity__IsNoBackStepNpc(aiEnt, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v17,
                                    (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v9; // x1

  if ( (byte_4BCA816 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BattleLogicNpcAi_MakeAiActionTask__, list);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v5);
    sub_1C1ABD4(&BattleLogic_reactionFunction_TypeInfo, v6);
    byte_4BCA816 = 1;
  }
  v7 = (BattleLogic_reactionFunction_o *)sub_1C1AE20(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v7, (Il2CppObject *)this, Method_BattleLogicNpcAi_MakeAiActionTask__, 0LL);
  if ( !list )
    sub_1C1AE30(v8, v9);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    60,
    (Il2CppObject *)v7,
    (const MethodInfo_32D28E8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
    sub_1C1AE30(0LL, method);
  return BattleData__getFieldEnemyServantIDList(data, 0, 0LL);
}


System_Int32_array *__fastcall BattleLogicNpcAi__get_PartySvtIds(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1C1AE30(0LL, method);
  return BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
}


BattlePerformance_o *__fastcall BattleLogicNpcAi__get_Perf(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  struct BattleLogic_o *logic; // x8

  logic = this->fields.logic;
  if ( !logic )
    sub_1C1AE30(this, method);
  return logic->fields.perf;
}