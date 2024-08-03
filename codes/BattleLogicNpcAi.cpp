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
  BattleLogicNpcAi_o *v8; // x20
  BattleServantData_o *Npc_k__BackingField; // x22
  struct BattleData_o *data; // x8
  AiEntity_o *Action; // x0
  const MethodInfo *v12; // x3
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_49FEFD5 & 1) == 0 )
  {
    this = (BattleLogicNpcAi_o *)sub_1B640C8(
                                   &Method_System_Collections_Generic_List_BattleLogicTask__AddRange__,
                                   taskList);
    byte_49FEFD5 = 1;
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
    sub_1B64324(this);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)taskList,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
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
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  BattleComboData_o *v18; // x22
  BattleServantData_o *v19; // x24
  __int64 v20; // x1
  __int64 v21; // x2
  BattleTreasureDeviceCommandData_o *v22; // x23
  int32_t v23; // w0
  int32_t v24; // w2
  int32_t v25; // w3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  BattleServantData_o *svtData; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FEFDA & 1) == 0 )
  {
    sub_1B640C8(&BattleComboData_TypeInfo, retList);
    sub_1B640C8(&BattleTreasureDeviceCommandData_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    byte_49FEFDA = 1;
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
      goto LABEL_19;
    isNobleAction = (BattleLogicNpcAi_o *)BattleServantData__isNobleAction(svtData, 0LL);
    if ( ((unsigned __int8)isNobleAction & 1) == 0 )
      return;
    if ( !arg )
      goto LABEL_19;
    isNobleAction = (BattleLogicNpcAi_o *)BaseAiActArgument__MakeTask(arg, (BattleLogicBaseAi_o *)this, 0, 0LL);
    AiActEnt_k__BackingField = arg->fields._AiActEnt_k__BackingField;
    if ( !AiActEnt_k__BackingField )
      goto LABEL_19;
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
      goto LABEL_19;
    v12->fields.logictarget = (struct BattleLogicTarget_o *)isNobleAction;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12->fields.logictarget, (int32_t)isNobleAction, v14, v15);
    v18 = (BattleComboData_o *)sub_1B64314(BattleComboData_TypeInfo, v16, v17);
    BattleComboData___ctor(v18, 0LL);
    v19 = svtData;
    v22 = (BattleTreasureDeviceCommandData_o *)sub_1B64314(BattleTreasureDeviceCommandData_TypeInfo, v20, v21);
    BattleTreasureDeviceCommandData___ctor(v22, v19, 0LL);
    isNobleAction = (BattleLogicNpcAi_o *)svtData;
    if ( !svtData )
      goto LABEL_19;
    v23 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._21_getThisTurnActCount.method)(
            svtData,
            svtData->klass->vtable._22_getAiParam.methodPtr);
    BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v18, (BattleCommandData_o *)v22, v23, 0LL);
    isNobleAction = (BattleLogicNpcAi_o *)svtData;
    if ( !svtData )
      goto LABEL_19;
    isNobleAction = (BattleLogicNpcAi_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
    if ( !svtData
      || (BattleLogicTask__setActionTreasureDvc(
            (BattleLogicTask_o *)v12,
            (int32_t)isNobleAction,
            svtData->fields.treasuredvcLevel,
            0LL),
          (isNobleAction = (BattleLogicNpcAi_o *)arg->fields._AiEnt_k__BackingField) == 0LL)
      || (isNobleAction = (BattleLogicNpcAi_o *)AiBaseEntity__IsForcedActionSpeedAnyTime(
                                                  (AiBaseEntity_o *)isNobleAction,
                                                  0LL),
          LOBYTE(v12[2].klass) = (unsigned __int8)isNobleAction & 1,
          !retList)
      || (items = retList->fields._items,
          v27 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
          ++retList->fields._version,
          !items) )
    {
LABEL_19:
      sub_1B64324(isNobleAction);
    }
    size = retList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)retList,
        (Il2CppObject *)v12,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v29 = &items->obj.klass + size;
      retList->fields._size = size + 1;
      v29[4] = (Il2CppClass *)v12;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v12, v24, v25);
    }
  }
}


void __fastcall BattleLogicNpcAi__InitAiActTaskFunction(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicAiActFunc; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  BattleLogicBaseAi_taskAiActFunction_o *v7; // x21
  __int64 v8; // x0

  if ( (byte_49FEFD2 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__set_Item__,
      method);
    sub_1B640C8(&BattleLogicBaseAi_taskAiActFunction_TypeInfo, v3);
    byte_49FEFD2 = 1;
  }
  BattleLogicBaseAi__InitAiActTaskFunction((BattleLogicBaseAi_o *)this, 0LL);
  dicAiActFunc = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicAiActFunc;
  v7 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1B64314(BattleLogicBaseAi_taskAiActFunction_TypeInfo, v5, v6);
  BattleLogicBaseAi_taskAiActFunction___ctor(v7, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
  if ( !dicAiActFunc )
    sub_1B64324(v8);
  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
    dicAiActFunc,
    80,
    (Il2CppObject *)v7,
    (const MethodInfo_315282C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__set_Item__);
}


void __fastcall BattleLogicNpcAi__Initialize(BattleLogicNpcAi_o *this, BattleData_o *data, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  AiLogic_o *v7; // x21
  struct AiLogic_o **p_aiLogic; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FEFD1 & 1) == 0 )
  {
    sub_1B640C8(&AiLogic_TypeInfo, data);
    byte_49FEFD1 = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, 0LL);
  v7 = (AiLogic_o *)sub_1B64314(AiLogic_TypeInfo, v5, v6);
  AiLogic___ctor(v7, 0LL);
  this->fields.aiLogic = v7;
  p_aiLogic = &this->fields.aiLogic;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_aiLogic, (int32_t)v7, v9, v10);
  if ( !*p_aiLogic )
    sub_1B64324(0LL);
  AiLogic__Initialize(*p_aiLogic, data, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicNpcAi__MakeAiActionTask(
        BattleLogicNpcAi_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_array *result; // x0

  if ( !task )
    sub_1B64324(this);
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
  const MethodInfo *v16; // x4
  __int64 v17; // x1
  __int64 v18; // x2
  NpcAiCheckTask_o *v19; // x20
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v25; // x0

  v4 = this;
  if ( (byte_49FEFD4 & 1) == 0 )
  {
    sub_1B640C8(&NpcAiCheckTask_Argument_TypeInfo, *(_QWORD *)&state);
    sub_1B640C8(&BattleLogicTask___TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_AiNpcBattleServantData__get_Count__, v6);
    this = (BattleLogicNpcAi_o *)sub_1B640C8(&NpcAiCheckTask_TypeInfo, v7);
    byte_49FEFD4 = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_15;
  aiNpcDataList = data->fields.aiNpcDataList;
  if ( !aiNpcDataList )
    goto LABEL_15;
  if ( !state || aiNpcDataList->fields._size < 1 )
    return v4->fields.emptyTask;
  this = (BattleLogicNpcAi_o *)sub_1B64170(BattleLogicTask___TypeInfo, 1LL);
  v12 = v4->fields.data;
  if ( !v12
    || (v13 = v12->fields.aiNpcDataList,
        v14 = this,
        v15 = (NpcAiCheckTask_Argument_o *)sub_1B64314(NpcAiCheckTask_Argument_TypeInfo, v10, v11),
        NpcAiCheckTask_Argument___ctor(v15, state, v13, 0, v16),
        v19 = (NpcAiCheckTask_o *)sub_1B64314(NpcAiCheckTask_TypeInfo, v17, v18),
        NpcAiCheckTask___ctor(v19, v4, v15, v20),
        !v14) )
  {
LABEL_15:
    sub_1B64324(this);
  }
  if ( v19 )
  {
    this = (BattleLogicNpcAi_o *)sub_1B64204(v19, v14->klass->_1.element_class);
    if ( !this )
    {
      v25 = sub_1B64348(0LL);
      sub_1B641F0(v25, 0LL);
    }
  }
  if ( !LODWORD(v14->fields.logic) )
    sub_1B6432C(this, v21);
  v14->fields.logictarget = (struct BattleLogicTarget_o *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v14->fields.logictarget, (int32_t)v19, v22, v23);
  return (BattleLogicTask_array *)v14;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_o *__fastcall BattleLogicNpcAi__MakeBackStepTask(
        BattleLogicNpcAi_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  NpcBackStepBattleLogicTask_o *v4; // x20

  if ( (byte_49FEFD9 & 1) == 0 )
  {
    sub_1B640C8(&NpcBackStepBattleLogicTask_TypeInfo, *(_QWORD *)&targetId);
    byte_49FEFD9 = 1;
  }
  v4 = (NpcBackStepBattleLogicTask_o *)sub_1B64314(NpcBackStepBattleLogicTask_TypeInfo, *(_QWORD *)&targetId, method);
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

  if ( (byte_49FEFD8 & 1) == 0 )
  {
    sub_1B640C8(&PreLoadNpcBattleLogicTask_TypeInfo, *(_QWORD *)&targetId);
    byte_49FEFD8 = 1;
  }
  v5 = (PreLoadNpcBattleLogicTask_o *)sub_1B64314(PreLoadNpcBattleLogicTask_TypeInfo, *(_QWORD *)&targetId, method);
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

  if ( (byte_49FEFD7 & 1) == 0 )
  {
    sub_1B640C8(&NpcStepInBattleLogicTask_TypeInfo, *(_QWORD *)&targetId);
    byte_49FEFD7 = 1;
  }
  v7 = (NpcStepInBattleLogicTask_o *)sub_1B64314(
                                       NpcStepInBattleLogicTask_TypeInfo,
                                       *(_QWORD *)&targetId,
                                       isForcedSpeedOne);
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
  int32_t v7; // w21
  int32_t v8; // w0
  int32_t v9; // w1

  if ( (byte_49FEFDB & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_int____75711232, svtData);
    byte_49FEFDB = 1;
  }
  v6 = BasicHelper__IndexValue_int_(
         actValArray,
         0,
         0,
         (const MethodInfo_2E28154 *)Method_BasicHelper_IndexValue_int____75711232);
  if ( !svtData )
    sub_1B64324(v6);
  v7 = v6;
  v8 = BasicHelper__IndexValue_int_(
         actValArray,
         1,
         svtData->fields.treasuredvcLevel,
         (const MethodInfo_2E28154 *)Method_BasicHelper_IndexValue_int____75711232);
  if ( v7 >= 1 )
    BattleServantData__UpdateTreasureDevice(svtData, v7, v8, 0LL);
  v9 = BasicHelper__IndexValue_int_(
         actValArray,
         2,
         svtData->fields.lineMaxNp,
         (const MethodInfo_2E28154 *)Method_BasicHelper_IndexValue_int____75711232);
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
  System_Collections_Generic_List_object__o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  NpcServantAiActArgument_o *v20; // x25

  v6 = (BattleLogicBaseAi_o *)this;
  if ( (byte_49FEFD6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, npcSvt);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v8);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    this = (BattleLogicNpcAi_o *)sub_1B640C8(&NpcServantAiActArgument_TypeInfo, v10);
    byte_49FEFD6 = 1;
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
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       v14,
                                                       v15);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v20 = (NpcServantAiActArgument_o *)sub_1B64314(NpcServantAiActArgument_TypeInfo, v18, v19);
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
    sub_1B64324(this);
  if ( v17->fields._size >= 1 )
    AiNpcBattleServantData__AddActCount(npcSvt, 0LL);
  npcSvt->fields.isNoBackStep = AiEntity__IsNoBackStepNpc(aiEnt, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v17,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_49FEFD3 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleLogicNpcAi_MakeAiActionTask__, list);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v5);
    sub_1B640C8(&BattleLogic_reactionFunction_TypeInfo, v6);
    byte_49FEFD3 = 1;
  }
  v7 = (BattleLogic_reactionFunction_o *)sub_1B64314(BattleLogic_reactionFunction_TypeInfo, list, method);
  BattleLogic_reactionFunction___ctor(v7, (Il2CppObject *)this, Method_BattleLogicNpcAi_MakeAiActionTask__, 0LL);
  if ( !list )
    sub_1B64324(v8);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    60,
    (Il2CppObject *)v7,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
    sub_1B64324(0LL);
  return BattleData__getFieldEnemyServantIDList(data, 0, 0LL);
}


System_Int32_array *__fastcall BattleLogicNpcAi__get_PartySvtIds(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1B64324(0LL);
  return BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
}


BattlePerformance_o *__fastcall BattleLogicNpcAi__get_Perf(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  struct BattleLogic_o *logic; // x8

  logic = this->fields.logic;
  if ( !logic )
    sub_1B64324(this);
  return logic->fields.perf;
}