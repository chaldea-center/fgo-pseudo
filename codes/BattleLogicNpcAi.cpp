void BattleLogicNpcAi___ctor(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  BattleLogicServantAi___ctor((BattleLogicServantAi_o *)this, 0);
}


void BattleLogicNpcAi__AddAiActionTask(
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
  if ( (byte_4CB9586 & 1) == 0 )
  {
    this = (BattleLogicNpcAi_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    byte_4CB9586 = 1;
  }
  info = 0;
  if ( !arg )
    goto LABEL_12;
  Npc_k__BackingField = (BattleServantData_o *)arg->fields._Npc_k__BackingField;
  if ( !Npc_k__BackingField )
    goto LABEL_12;
  this = (BattleLogicNpcAi_o *)AiNpcBattleServantData__UpdateAiStateTargetIndex(
                                 arg->fields._Npc_k__BackingField,
                                 arg->fields._AiStateIndex_k__BackingField,
                                 0);
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
             0);
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
    sub_1C6BC60(this, taskList);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)taskList,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
}


void BattleLogicNpcAi__AddNoblePhantasm(
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  BattleComboData_o *v15; // x22
  BattleServantData_o *v16; // x24
  BattleTreasureDeviceCommandData_o *v17; // x23
  int32_t v18; // w0
  const MethodInfo *v19; // x4
  int32_t treasuredvcLevel; // w8
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  BattleServantData_o *svtData; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB958B & 1) == 0 )
  {
    sub_1C6BA08(&BattleComboData_TypeInfo);
    sub_1C6BA08(&BattleTreasureDeviceCommandData_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4CB958B = 1;
  }
  svtData = 0;
  if ( (((__int64 (__fastcall *)(BattleLogicNpcAi_o *, BattleServantData_o **, BaseAiActArgument_o *, const MethodInfo *))this->klass->vtable._24_TryGetActorServant.methodPtr)(
          this,
          &svtData,
          arg,
          this->klass->vtable._24_TryGetActorServant.method)
      & 1) != 0 )
  {
    isNobleAction = (BattleLogicNpcAi_o *)svtData;
    if ( !svtData )
      goto LABEL_19;
    isNobleAction = (BattleLogicNpcAi_o *)BattleServantData__isNobleAction(svtData, 0);
    if ( ((unsigned __int8)isNobleAction & 1) == 0 )
      return;
    if ( !arg )
      goto LABEL_19;
    isNobleAction = (BattleLogicNpcAi_o *)BaseAiActArgument__MakeTask(arg, (BattleLogicBaseAi_o *)this, 0, 0);
    AiActEnt_k__BackingField = arg->fields._AiActEnt_k__BackingField;
    if ( !AiActEnt_k__BackingField )
      goto LABEL_19;
    v11 = isNobleAction;
    BattleLogicNpcAi__OverwriteTreasureDevice(isNobleAction, svtData, AiActEnt_k__BackingField->fields.skillVals, v9);
    v12 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicNpcAi_o *, const MethodInfo *))this->klass->vtable._6_get_OpponentSvtIds.methodPtr)(
                                  this,
                                  this->klass->vtable._6_get_OpponentSvtIds.method);
    isNobleAction = (BattleLogicNpcAi_o *)BattleLogicBaseAi__GetLogicTargetIds(
                                            (BattleLogicBaseAi_o *)this,
                                            arg,
                                            v12,
                                            1,
                                            0,
                                            0,
                                            0);
    if ( !v11 )
      goto LABEL_19;
    v11->fields.logictarget = (struct BattleLogicTarget_o *)isNobleAction;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v11->fields.logictarget, (int32_t)isNobleAction, v13, v14);
    v15 = (BattleComboData_o *)sub_1C6BC54(BattleComboData_TypeInfo);
    BattleComboData___ctor(v15, 0);
    v16 = svtData;
    v17 = (BattleTreasureDeviceCommandData_o *)sub_1C6BC54(BattleTreasureDeviceCommandData_TypeInfo);
    BattleTreasureDeviceCommandData___ctor(v17, v16, 0);
    isNobleAction = (BattleLogicNpcAi_o *)svtData;
    if ( !svtData )
      goto LABEL_19;
    v18 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))svtData->klass->vtable._21_getThisTurnActCount.methodPtr)(
            svtData,
            svtData->klass->vtable._21_getThisTurnActCount.method);
    BattleLogicTask__setActionCommand((BattleLogicTask_o *)v11, v15, (BattleCommandData_o *)v17, v18, v19);
    isNobleAction = (BattleLogicNpcAi_o *)svtData;
    if ( !svtData )
      goto LABEL_19;
    isNobleAction = (BattleLogicNpcAi_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0, 0);
    if ( !svtData )
      goto LABEL_19;
    treasuredvcLevel = svtData->fields.treasuredvcLevel;
    LODWORD(v11->fields.aiActMst) = 4;
    HIDWORD(v11[1].klass) = (_DWORD)isNobleAction;
    LODWORD(v11[1].monitor) = treasuredvcLevel;
    isNobleAction = (BattleLogicNpcAi_o *)arg->fields._AiEnt_k__BackingField;
    if ( !isNobleAction
      || (isNobleAction = (BattleLogicNpcAi_o *)AiBaseEntity__IsForcedActionSpeedAnyTime(
                                                  (AiBaseEntity_o *)isNobleAction,
                                                  0),
          LOBYTE(v11[2].fields.logic) = (unsigned __int8)isNobleAction & 1,
          !retList)
      || (items = retList->fields._items,
          v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
          ++retList->fields._version,
          !items) )
    {
LABEL_19:
      sub_1C6BC60(isNobleAction, v7);
    }
    size = retList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)retList,
        (Il2CppObject *)v11,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      retList->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v11;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v11, v21, v22);
    }
  }
}


void BattleLogicNpcAi__InitAiActTaskFunction(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicAiActFunc; // x20
  BattleLogicBaseAi_taskAiActFunction_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CB9583 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__set_Item__);
    sub_1C6BA08(&BattleLogicBaseAi_taskAiActFunction_TypeInfo);
    byte_4CB9583 = 1;
  }
  BattleLogicBaseAi__InitAiActTaskFunction((BattleLogicBaseAi_o *)this, 0);
  dicAiActFunc = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicAiActFunc;
  v4 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C6BC54(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._25_AddNoblePhantasm.method,
    0);
  if ( !dicAiActFunc )
    sub_1C6BC60(v5, v6);
  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
    dicAiActFunc,
    80,
    (Il2CppObject *)v4,
    (const MethodInfo_3485918 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__set_Item__);
}


void BattleLogicNpcAi__Initialize(BattleLogicNpcAi_o *this, BattleData_o *data, const MethodInfo *method)
{
  AiLogic_o *v5; // x21
  struct AiLogic_o **p_aiLogic; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x1

  if ( (byte_4CB9582 & 1) == 0 )
  {
    sub_1C6BA08(&AiLogic_TypeInfo);
    byte_4CB9582 = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, 0);
  v5 = (AiLogic_o *)sub_1C6BC54(AiLogic_TypeInfo);
  AiLogic___ctor(v5, 0);
  this->fields.aiLogic = v5;
  p_aiLogic = &this->fields.aiLogic;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_aiLogic, (int32_t)v5, v7, v8);
  if ( !*p_aiLogic )
    sub_1C6BC60(0, v9);
  AiLogic__Initialize(*p_aiLogic, data, 0);
}


BattleLogicTask_array *BattleLogicNpcAi__MakeAiActionTask(
        BattleLogicNpcAi_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_array *result; // x0

  if ( !task )
    sub_1C6BC60(this, 0);
  result = (BattleLogicTask_array *)((__int64 (__fastcall *)(BattleLogicTask_o *, struct BattleLogic_o *, const MethodInfo *))task->klass->vtable._5_MakeActionTask.methodPtr)(
                                      task,
                                      this->fields.logic,
                                      task->klass->vtable._5_MakeActionTask.method);
  if ( !result )
    return this->fields.emptyTask;
  return result;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *BattleLogicNpcAi__MakeAiCheckTask(
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
  const MethodInfo *v11; // x4
  NpcAiCheckTask_o *v12; // x20
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v17; // x0

  v4 = this;
  if ( (byte_4CB9585 & 1) == 0 )
  {
    sub_1C6BA08(&NpcAiCheckTask_Argument_TypeInfo);
    sub_1C6BA08(&BattleLogicTask___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AiNpcBattleServantData__get_Count__);
    this = (BattleLogicNpcAi_o *)sub_1C6BA08(&NpcAiCheckTask_TypeInfo);
    byte_4CB9585 = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_15;
  aiNpcDataList = data->fields.aiNpcDataList;
  if ( !aiNpcDataList )
    goto LABEL_15;
  if ( !state || aiNpcDataList->fields._size < 1 )
    return v4->fields.emptyTask;
  this = (BattleLogicNpcAi_o *)sub_1C6BAB0(BattleLogicTask___TypeInfo, 1);
  v7 = v4->fields.data;
  if ( !v7
    || (v8 = v7->fields.aiNpcDataList,
        v9 = this,
        v10 = (NpcAiCheckTask_Argument_o *)sub_1C6BC54(NpcAiCheckTask_Argument_TypeInfo),
        NpcAiCheckTask_Argument___ctor(v10, state, v8, 0, v11),
        v12 = (NpcAiCheckTask_o *)sub_1C6BC54(NpcAiCheckTask_TypeInfo),
        NpcAiCheckTask___ctor(v12, v4, v10, v13),
        !v9) )
  {
LABEL_15:
    sub_1C6BC60(this, *(_QWORD *)&state);
  }
  if ( v12 )
  {
    this = (BattleLogicNpcAi_o *)sub_1C6BB44(v12, v9->klass->_1.element_class);
    if ( !this )
    {
      v17 = sub_1C6BC84(0);
      sub_1C6BB30(v17, 0);
    }
  }
  if ( !LODWORD(v9->fields.logic) )
    sub_1C6BC68(this);
  v9->fields.logictarget = (struct BattleLogicTarget_o *)v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v9->fields.logictarget, (int32_t)v12, v14, v15);
  return (BattleLogicTask_array *)v9;
}


BattleLogicTask_o *BattleLogicNpcAi__MakeBackStepTask(
        BattleLogicNpcAi_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  NpcBackStepBattleLogicTask_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4CB958A & 1) == 0 )
  {
    sub_1C6BA08(&NpcBackStepBattleLogicTask_TypeInfo);
    byte_4CB958A = 1;
  }
  v4 = (NpcBackStepBattleLogicTask_o *)sub_1C6BC54(NpcBackStepBattleLogicTask_TypeInfo);
  NpcBackStepBattleLogicTask___ctor(v4, targetId, 0, v5);
  return (BattleLogicTask_o *)v4;
}


BattleActionData_o *BattleLogicNpcAi__MakeLoadNpcPreStepInAction(
        BattleLogicNpcAi_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  PreLoadNpcBattleLogicTask_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4CB9589 & 1) == 0 )
  {
    sub_1C6BA08(&PreLoadNpcBattleLogicTask_TypeInfo);
    byte_4CB9589 = 1;
  }
  v5 = (PreLoadNpcBattleLogicTask_o *)sub_1C6BC54(PreLoadNpcBattleLogicTask_TypeInfo);
  PreLoadNpcBattleLogicTask___ctor(v5, targetId, 0, v6);
  if ( !v5 )
    sub_1C6BC60(v7, v8);
  return (BattleActionData_o *)((__int64 (__fastcall *)(PreLoadNpcBattleLogicTask_o *, struct BattleLogic_o *, const MethodInfo *))v5->klass->vtable._6_MakeActionData.methodPtr)(
                                 v5,
                                 this->fields.logic,
                                 v5->klass->vtable._6_MakeActionData.method);
}


BattleActionData_o *BattleLogicNpcAi__MakeStepInAction(
        BattleLogicNpcAi_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  NpcStepInBattleLogicTask_o *v7; // x22
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4CB9588 & 1) == 0 )
  {
    sub_1C6BA08(&NpcStepInBattleLogicTask_TypeInfo);
    byte_4CB9588 = 1;
  }
  v7 = (NpcStepInBattleLogicTask_o *)sub_1C6BC54(NpcStepInBattleLogicTask_TypeInfo);
  NpcStepInBattleLogicTask___ctor(v7, targetId, isForcedSpeedOne, v8);
  if ( !v7 )
    sub_1C6BC60(v9, v10);
  return (BattleActionData_o *)((__int64 (__fastcall *)(NpcStepInBattleLogicTask_o *, struct BattleLogic_o *, const MethodInfo *))v7->klass->vtable._6_MakeActionData.methodPtr)(
                                 v7,
                                 this->fields.logic,
                                 v7->klass->vtable._6_MakeActionData.method);
}


void BattleLogicNpcAi__OverwriteTreasureDevice(
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

  if ( (byte_4CB958C & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_IndexValue_int____78573472);
    byte_4CB958C = 1;
  }
  v6 = BasicHelper__IndexValue_int_(
         actValArray,
         0,
         0,
         (const MethodInfo_312954C *)Method_BasicHelper_IndexValue_int____78573472);
  if ( !svtData )
    sub_1C6BC60(v6, v7);
  v8 = v6;
  v9 = BasicHelper__IndexValue_int_(
         actValArray,
         1,
         svtData->fields.treasuredvcLevel,
         (const MethodInfo_312954C *)Method_BasicHelper_IndexValue_int____78573472);
  if ( v8 >= 1 )
    BattleServantData__UpdateTreasureDevice(svtData, v8, v9, 0);
  v10 = BasicHelper__IndexValue_int_(
          actValArray,
          2,
          svtData->fields.lineMaxNp,
          (const MethodInfo_312954C *)Method_BasicHelper_IndexValue_int____78573472);
  BattleServantData__changeNp(svtData, v10, 0, 0);
}


BattleLogicTask_array *BattleLogicNpcAi__ProcAiAct(
        BattleLogicNpcAi_o *this,
        AiNpcBattleServantData_o *npcSvt,
        AiEntity_o *aiEnt,
        NpcAiCheckTask_Argument_o *checkTaskArg,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *v8; // x21
  int32_t data_high; // w24
  AiActEntity_o *v10; // x25
  AiState_o *v11; // x0
  System_Collections_Generic_List_object__o *v13; // x23
  int32_t State_k__BackingField; // w22
  NpcServantAiActArgument_o *v15; // x26

  v8 = (BattleLogicBaseAi_o *)this;
  if ( (byte_4CB9587 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    this = (BattleLogicNpcAi_o *)sub_1C6BA08(&NpcServantAiActArgument_TypeInfo);
    byte_4CB9587 = 1;
  }
  if ( !aiEnt )
    goto LABEL_13;
  this = (BattleLogicNpcAi_o *)BattleLogicBaseAi__GetAiActEntity(v8, aiEnt->fields.aiActId, 0);
  if ( !this || !npcSvt )
    goto LABEL_13;
  data_high = HIDWORD(this->fields.data);
  v10 = (AiActEntity_o *)this;
  v11 = (AiState_o *)((__int64 (__fastcall *)(AiNpcBattleServantData_o *, const MethodInfo *))npcSvt->klass->vtable._18_getAiState.methodPtr)(
                       npcSvt,
                       npcSvt->klass->vtable._18_getAiState.method);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly(v8, data_high, (AiBaseEntity_o *)aiEnt, v11, 0) )
    return v8->fields.emptyTask;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !checkTaskArg
    || (State_k__BackingField = checkTaskArg->fields._State_k__BackingField,
        v15 = (NpcServantAiActArgument_o *)sub_1C6BC54(NpcServantAiActArgument_TypeInfo),
        NpcServantAiActArgument___ctor(
          v15,
          v10,
          (AiBaseEntity_o *)aiEnt,
          (BattleServantData_o *)npcSvt,
          (BattleLogicNpcAi_o *)v8,
          State_k__BackingField,
          0),
        this = (BattleLogicNpcAi_o *)BattleLogicBaseAi__SetProcAiActTask(
                                       v8,
                                       (System_Collections_Generic_List_BattleLogicTask__o *)v13,
                                       data_high,
                                       (BaseAiActArgument_o *)v15,
                                       0),
        !v13) )
  {
LABEL_13:
    sub_1C6BC60(this, npcSvt);
  }
  if ( v13->fields._size >= 1 )
    AiNpcBattleServantData__AddActCount(npcSvt, 0);
  npcSvt->fields.isNoBackStep = AiEntity__IsNoBackStepNpc(aiEnt, 0);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void BattleLogicNpcAi__SetReactionFunction(
        BattleLogicNpcAi_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  BattleLogic_reactionFunction_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4CB9584 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleLogicNpcAi_MakeAiActionTask__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_1C6BA08(&BattleLogic_reactionFunction_TypeInfo);
    byte_4CB9584 = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_1C6BC54(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v5, (Il2CppObject *)this, Method_BattleLogicNpcAi_MakeAiActionTask__, 0);
  if ( !list )
    sub_1C6BC60(v6, v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    60,
    (Il2CppObject *)v5,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


AiLogic_o *BattleLogicNpcAi__get_AILogic(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  return this->fields.aiLogic;
}


int32_t BattleLogicNpcAi__get_ActorType(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  return 2;
}


System_Int32_array *BattleLogicNpcAi__get_OpponentSvtIds(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1C6BC60(0, method);
  return BattleData__getFieldEnemyServantIDList(data, 0, 0);
}


System_Int32_array *BattleLogicNpcAi__get_PartySvtIds(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1C6BC60(0, method);
  return BattleData__getFieldPlayerServantIDList(data, 0, 0);
}


BattlePerformance_o *BattleLogicNpcAi__get_Perf(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  struct BattleLogic_o *logic; // x8

  logic = this->fields.logic;
  if ( !logic )
    sub_1C6BC60(this, method);
  return logic->fields.perf;
}