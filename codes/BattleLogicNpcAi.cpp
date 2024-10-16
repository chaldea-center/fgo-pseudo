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
  if ( (byte_4AB89C6 & 1) == 0 )
  {
    this = (BattleLogicNpcAi_o *)sub_1BAB41C(
                                   &Method_System_Collections_Generic_List_BattleLogicTask__AddRange__,
                                   taskList);
    byte_4AB89C6 = 1;
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
    sub_1BAB678(this, taskList);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)taskList,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_354DAC8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
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
  BattleLogicNpcAi_o *isNobleAction; // x0
  const MethodInfo *v11; // x3
  struct AiActEntity_o *AiActEnt_k__BackingField; // x8
  BattleLogicNpcAi_o *v13; // x21
  System_Int32_array *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  BattleComboData_o *v17; // x22
  BattleServantData_o *v18; // x24
  BattleTreasureDeviceCommandData_o *v19; // x23
  int32_t v20; // w0
  int32_t v21; // w2
  int32_t v22; // w3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  BattleServantData_o *svtData; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4AB89CB & 1) == 0 )
  {
    sub_1BAB41C(&BattleComboData_TypeInfo, retList);
    sub_1BAB41C(&BattleTreasureDeviceCommandData_TypeInfo, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    byte_4AB89CB = 1;
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
    v13 = isNobleAction;
    BattleLogicNpcAi__OverwriteTreasureDevice(isNobleAction, svtData, AiActEnt_k__BackingField->fields.skillVals, v11);
    v14 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicNpcAi_o *, Il2CppMethodPointer))this->klass->vtable._6_get_OpponentSvtIds.method)(
                                  this,
                                  this->klass->vtable._7_Initialize.methodPtr);
    isNobleAction = (BattleLogicNpcAi_o *)BattleLogicBaseAi__GetLogicTargetIds(
                                            (BattleLogicBaseAi_o *)this,
                                            arg,
                                            v14,
                                            1,
                                            0,
                                            0LL,
                                            0LL);
    if ( !v13 )
      goto LABEL_19;
    v13->fields.logictarget = (struct BattleLogicTarget_o *)isNobleAction;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v13->fields.logictarget, (int32_t)isNobleAction, v15, v16);
    v17 = (BattleComboData_o *)sub_1BAB668(BattleComboData_TypeInfo);
    BattleComboData___ctor(v17, 0LL);
    v18 = svtData;
    v19 = (BattleTreasureDeviceCommandData_o *)sub_1BAB668(BattleTreasureDeviceCommandData_TypeInfo);
    BattleTreasureDeviceCommandData___ctor(v19, v18, 0LL);
    isNobleAction = (BattleLogicNpcAi_o *)svtData;
    if ( !svtData )
      goto LABEL_19;
    v20 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._21_getThisTurnActCount.method)(
            svtData,
            svtData->klass->vtable._22_getAiParam.methodPtr);
    BattleLogicTask__setActionCommand((BattleLogicTask_o *)v13, v17, (BattleCommandData_o *)v19, v20, 0LL);
    isNobleAction = (BattleLogicNpcAi_o *)svtData;
    if ( !svtData )
      goto LABEL_19;
    isNobleAction = (BattleLogicNpcAi_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0LL, 0LL);
    if ( !svtData
      || (BattleLogicTask__setActionTreasureDvc(
            (BattleLogicTask_o *)v13,
            (int32_t)isNobleAction,
            svtData->fields.treasuredvcLevel,
            0LL),
          (isNobleAction = (BattleLogicNpcAi_o *)arg->fields._AiEnt_k__BackingField) == 0LL)
      || (isNobleAction = (BattleLogicNpcAi_o *)AiBaseEntity__IsForcedActionSpeedAnyTime(
                                                  (AiBaseEntity_o *)isNobleAction,
                                                  0LL),
          LOBYTE(v13[2].klass) = (unsigned __int8)isNobleAction & 1,
          !retList)
      || (items = retList->fields._items,
          v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
          ++retList->fields._version,
          !items) )
    {
LABEL_19:
      sub_1BAB678(isNobleAction, v9);
    }
    size = retList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)retList,
        (Il2CppObject *)v13,
        *(const MethodInfo_354D8BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      retList->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v13;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v13, v21, v22);
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

  if ( (byte_4AB89C3 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__set_Item__,
      method);
    sub_1BAB41C(&BattleLogicBaseAi_taskAiActFunction_TypeInfo, v3);
    byte_4AB89C3 = 1;
  }
  BattleLogicBaseAi__InitAiActTaskFunction((BattleLogicBaseAi_o *)this, 0LL);
  dicAiActFunc = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicAiActFunc;
  v5 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1BAB668(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(v5, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
  if ( !dicAiActFunc )
    sub_1BAB678(v6, v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
    dicAiActFunc,
    80,
    (Il2CppObject *)v5,
    (const MethodInfo_31E6638 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__set_Item__);
}


void __fastcall BattleLogicNpcAi__Initialize(BattleLogicNpcAi_o *this, BattleData_o *data, const MethodInfo *method)
{
  AiLogic_o *v5; // x21
  struct AiLogic_o **p_aiLogic; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1

  if ( (byte_4AB89C2 & 1) == 0 )
  {
    sub_1BAB41C(&AiLogic_TypeInfo, data);
    byte_4AB89C2 = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, 0LL);
  v5 = (AiLogic_o *)sub_1BAB668(AiLogic_TypeInfo);
  AiLogic___ctor(v5, 0LL);
  this->fields.aiLogic = v5;
  p_aiLogic = &this->fields.aiLogic;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_aiLogic, (int32_t)v5, v7, v8);
  if ( !*p_aiLogic )
    sub_1BAB678(0LL, v9);
  AiLogic__Initialize(*p_aiLogic, data, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicNpcAi__MakeAiActionTask(
        BattleLogicNpcAi_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_array *result; // x0

  if ( !task )
    sub_1BAB678(this, 0LL);
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
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v20; // x0

  v4 = this;
  if ( (byte_4AB89C5 & 1) == 0 )
  {
    sub_1BAB41C(&NpcAiCheckTask_Argument_TypeInfo, *(_QWORD *)&state);
    sub_1BAB41C(&BattleLogicTask___TypeInfo, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_AiNpcBattleServantData__get_Count__, v6);
    this = (BattleLogicNpcAi_o *)sub_1BAB41C(&NpcAiCheckTask_TypeInfo, v7);
    byte_4AB89C5 = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_15;
  aiNpcDataList = data->fields.aiNpcDataList;
  if ( !aiNpcDataList )
    goto LABEL_15;
  if ( !state || aiNpcDataList->fields._size < 1 )
    return v4->fields.emptyTask;
  this = (BattleLogicNpcAi_o *)sub_1BAB4C4(BattleLogicTask___TypeInfo, 1LL);
  v10 = v4->fields.data;
  if ( !v10
    || (v11 = v10->fields.aiNpcDataList,
        v12 = this,
        v13 = (NpcAiCheckTask_Argument_o *)sub_1BAB668(NpcAiCheckTask_Argument_TypeInfo),
        NpcAiCheckTask_Argument___ctor(v13, state, v11, 0, v14),
        v15 = (NpcAiCheckTask_o *)sub_1BAB668(NpcAiCheckTask_TypeInfo),
        NpcAiCheckTask___ctor(v15, v4, v13, v16),
        !v12) )
  {
LABEL_15:
    sub_1BAB678(this, *(_QWORD *)&state);
  }
  if ( v15 )
  {
    this = (BattleLogicNpcAi_o *)sub_1BAB558(v15, v12->klass->_1.element_class);
    if ( !this )
    {
      v20 = sub_1BAB69C(0LL);
      sub_1BAB544(v20, 0LL);
    }
  }
  if ( !LODWORD(v12->fields.logic) )
    sub_1BAB680(this, *(_QWORD *)&state);
  v12->fields.logictarget = (struct BattleLogicTarget_o *)v15;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v12->fields.logictarget, (int32_t)v15, v17, v18);
  return (BattleLogicTask_array *)v12;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_o *__fastcall BattleLogicNpcAi__MakeBackStepTask(
        BattleLogicNpcAi_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  NpcBackStepBattleLogicTask_o *v4; // x20

  if ( (byte_4AB89CA & 1) == 0 )
  {
    sub_1BAB41C(&NpcBackStepBattleLogicTask_TypeInfo, *(_QWORD *)&targetId);
    byte_4AB89CA = 1;
  }
  v4 = (NpcBackStepBattleLogicTask_o *)sub_1BAB668(NpcBackStepBattleLogicTask_TypeInfo);
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

  if ( (byte_4AB89C9 & 1) == 0 )
  {
    sub_1BAB41C(&PreLoadNpcBattleLogicTask_TypeInfo, *(_QWORD *)&targetId);
    byte_4AB89C9 = 1;
  }
  v5 = (PreLoadNpcBattleLogicTask_o *)sub_1BAB668(PreLoadNpcBattleLogicTask_TypeInfo);
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

  if ( (byte_4AB89C8 & 1) == 0 )
  {
    sub_1BAB41C(&NpcStepInBattleLogicTask_TypeInfo, *(_QWORD *)&targetId);
    byte_4AB89C8 = 1;
  }
  v7 = (NpcStepInBattleLogicTask_o *)sub_1BAB668(NpcStepInBattleLogicTask_TypeInfo);
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

  if ( (byte_4AB89CC & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_IndexValue_int____76456232, svtData);
    byte_4AB89CC = 1;
  }
  v6 = BasicHelper__IndexValue_int_(
         actValArray,
         0,
         0,
         (const MethodInfo_2EB30DC *)Method_BasicHelper_IndexValue_int____76456232);
  if ( !svtData )
    sub_1BAB678(v6, v7);
  v8 = v6;
  v9 = BasicHelper__IndexValue_int_(
         actValArray,
         1,
         svtData->fields.treasuredvcLevel,
         (const MethodInfo_2EB30DC *)Method_BasicHelper_IndexValue_int____76456232);
  if ( v8 >= 1 )
    BattleServantData__UpdateTreasureDevice(svtData, v8, v9, 0LL);
  v10 = BasicHelper__IndexValue_int_(
          actValArray,
          2,
          svtData->fields.lineMaxNp,
          (const MethodInfo_2EB30DC *)Method_BasicHelper_IndexValue_int____76456232);
  BattleServantData__changeNp(svtData, v10, 0, 0LL);
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
  System_Collections_Generic_List_object__o *v15; // x22
  NpcServantAiActArgument_o *v16; // x25

  v6 = (BattleLogicBaseAi_o *)this;
  if ( (byte_4AB89C7 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, npcSvt);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    this = (BattleLogicNpcAi_o *)sub_1BAB41C(&NpcServantAiActArgument_TypeInfo, v10);
    byte_4AB89C7 = 1;
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
  v15 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v16 = (NpcServantAiActArgument_o *)sub_1BAB668(NpcServantAiActArgument_TypeInfo);
  NpcServantAiActArgument___ctor(
    v16,
    v12,
    (AiBaseEntity_o *)aiEnt,
    (BattleServantData_o *)npcSvt,
    (BattleLogicNpcAi_o *)v6,
    0LL);
  this = (BattleLogicNpcAi_o *)BattleLogicBaseAi__SetProcAiActTask(
                                 v6,
                                 (System_Collections_Generic_List_BattleLogicTask__o *)v15,
                                 data_high,
                                 (BaseAiActArgument_o *)v16,
                                 0LL);
  if ( !v15 )
LABEL_12:
    sub_1BAB678(this, npcSvt);
  if ( v15->fields._size >= 1 )
    AiNpcBattleServantData__AddActCount(npcSvt, 0LL);
  npcSvt->fields.isNoBackStep = AiEntity__IsNoBackStepNpc(aiEnt, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v15,
                                    (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4AB89C4 & 1) == 0 )
  {
    sub_1BAB41C(&Method_BattleLogicNpcAi_MakeAiActionTask__, list);
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v5);
    sub_1BAB41C(&BattleLogic_reactionFunction_TypeInfo, v6);
    byte_4AB89C4 = 1;
  }
  v7 = (BattleLogic_reactionFunction_o *)sub_1BAB668(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v7, (Il2CppObject *)this, Method_BattleLogicNpcAi_MakeAiActionTask__, 0LL);
  if ( !list )
    sub_1BAB678(v8, v9);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    60,
    (Il2CppObject *)v7,
    (const MethodInfo_31E664C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
    sub_1BAB678(0LL, method);
  return BattleData__getFieldEnemyServantIDList(data, 0, 0LL);
}


System_Int32_array *__fastcall BattleLogicNpcAi__get_PartySvtIds(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1BAB678(0LL, method);
  return BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
}


BattlePerformance_o *__fastcall BattleLogicNpcAi__get_Perf(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  struct BattleLogic_o *logic; // x8

  logic = this->fields.logic;
  if ( !logic )
    sub_1BAB678(this, method);
  return logic->fields.perf;
}