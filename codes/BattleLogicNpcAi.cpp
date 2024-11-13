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
  if ( (byte_4B18EA5 & 1) == 0 )
  {
    this = (BattleLogicNpcAi_o *)sub_1BCA7E0(
                                   &Method_System_Collections_Generic_List_BattleLogicTask__AddRange__,
                                   taskList,
                                   arg);
    byte_4B18EA5 = 1;
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
    sub_1BCAA3C(this, taskList);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)taskList,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
}


void __fastcall BattleLogicNpcAi__AddNoblePhantasm(
        BattleLogicNpcAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  int64_t isNobleAction; // x0
  const MethodInfo *v13; // x3
  struct AiActEntity_o *AiActEnt_k__BackingField; // x8
  int64_t v15; // x21
  System_Int32_array *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  BattleComboData_o *v26; // x22
  BattleServantData_o *v27; // x24
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  BattleTreasureDeviceCommandData_o *v31; // x23
  int32_t v32; // w0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  BattleServantData_o *svtData; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B18EAA & 1) == 0 )
  {
    sub_1BCA7E0(&BattleComboData_TypeInfo, retList, arg);
    sub_1BCA7E0(&BattleTreasureDeviceCommandData_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9, v10);
    byte_4B18EAA = 1;
  }
  svtData = 0LL;
  if ( (((__int64 (__fastcall *)(BattleLogicNpcAi_o *, BattleServantData_o **, BaseAiActArgument_o *, Il2CppMethodPointer))this->klass->vtable._21_TryGetActorServant.method)(
          this,
          &svtData,
          arg,
          this->klass->vtable._22_AddNoblePhantasm.methodPtr) & 1) != 0 )
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
    v15 = isNobleAction;
    BattleLogicNpcAi__OverwriteTreasureDevice(
      (BattleLogicNpcAi_o *)isNobleAction,
      svtData,
      AiActEnt_k__BackingField->fields.skillVals,
      v13);
    v16 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicNpcAi_o *, Il2CppMethodPointer))this->klass->vtable._6_get_OpponentSvtIds.method)(
                                  this,
                                  this->klass->vtable._7_Initialize.methodPtr);
    isNobleAction = (int64_t)BattleLogicBaseAi__GetLogicTargetIds((BattleLogicBaseAi_o *)this, arg, v16, 1, 0, 0LL, 0LL);
    if ( !v15 )
      goto LABEL_19;
    *(_QWORD *)(v15 + 32) = isNobleAction;
    sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 32), isNobleAction, v17, v18, v19, v20, v21, v22);
    v26 = (BattleComboData_o *)sub_1BCAA2C(BattleComboData_TypeInfo, v23, v24, v25);
    BattleComboData___ctor(v26, 0LL);
    v27 = svtData;
    v31 = (BattleTreasureDeviceCommandData_o *)sub_1BCAA2C(BattleTreasureDeviceCommandData_TypeInfo, v28, v29, v30);
    BattleTreasureDeviceCommandData___ctor(v31, v27, 0LL);
    isNobleAction = (int64_t)svtData;
    if ( !svtData )
      goto LABEL_19;
    v32 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._21_getThisTurnActCount.method)(
            svtData,
            svtData->klass->vtable._22_getAiParam.methodPtr);
    BattleLogicTask__setActionCommand((BattleLogicTask_o *)v15, v26, (BattleCommandData_o *)v31, v32, 0LL);
    isNobleAction = (int64_t)svtData;
    if ( !svtData )
      goto LABEL_19;
    isNobleAction = BattleServantData__getTreasureDvcId(svtData, 1, 0LL, 0LL);
    if ( !svtData
      || (BattleLogicTask__setActionTreasureDvc(
            (BattleLogicTask_o *)v15,
            isNobleAction,
            svtData->fields.treasuredvcLevel,
            0LL),
          (isNobleAction = (int64_t)arg->fields._AiEnt_k__BackingField) == 0)
      || (isNobleAction = AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)isNobleAction, 0LL),
          *(_BYTE *)(v15 + 160) = isNobleAction & 1,
          !retList)
      || (items = retList->fields._items,
          v40 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
          ++retList->fields._version,
          !items) )
    {
LABEL_19:
      sub_1BCAA3C(isNobleAction, v11);
    }
    size = retList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)retList,
        (Il2CppObject *)v15,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &items->obj.klass + size;
      retList->fields._size = size + 1;
      v42[4] = (Il2CppClass *)v15;
      sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 4), v15, v33, v34, v35, v36, v37, v38);
    }
  }
}


void __fastcall BattleLogicNpcAi__InitAiActTaskFunction(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicAiActFunc; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B18EA2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__set_Item__,
      method,
      v2);
    sub_1BCA7E0(&BattleLogicBaseAi_taskAiActFunction_TypeInfo, v4, v5);
    byte_4B18EA2 = 1;
  }
  BattleLogicBaseAi__InitAiActTaskFunction((BattleLogicBaseAi_o *)this, 0LL);
  dicAiActFunc = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicAiActFunc;
  v10 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1BCAA2C(BattleLogicBaseAi_taskAiActFunction_TypeInfo, v7, v8, v9);
  BattleLogicBaseAi_taskAiActFunction___ctor(v10, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
  if ( !dicAiActFunc )
    sub_1BCAA3C(v11, v12);
  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
    dicAiActFunc,
    80,
    (Il2CppObject *)v10,
    (const MethodInfo_3234FE4 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__set_Item__);
}


void __fastcall BattleLogicNpcAi__Initialize(BattleLogicNpcAi_o *this, BattleData_o *data, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  AiLogic_o *v8; // x21
  struct AiLogic_o **p_aiLogic; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1

  if ( (byte_4B18EA1 & 1) == 0 )
  {
    sub_1BCA7E0(&AiLogic_TypeInfo, data, method);
    byte_4B18EA1 = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, 0LL);
  v8 = (AiLogic_o *)sub_1BCAA2C(AiLogic_TypeInfo, v5, v6, v7);
  AiLogic___ctor(v8, 0LL);
  this->fields.aiLogic = v8;
  p_aiLogic = &this->fields.aiLogic;
  sub_1BCA784((PartyOrganizationUtility_o *)p_aiLogic, (int64_t)v8, v10, v11, v12, v13, v14, v15);
  if ( !*p_aiLogic )
    sub_1BCAA3C(0LL, v16);
  AiLogic__Initialize(*p_aiLogic, data, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicNpcAi__MakeAiActionTask(
        BattleLogicNpcAi_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_array *result; // x0

  if ( !task )
    sub_1BCAA3C(this, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct BattleData_o *data; // x8
  struct System_Collections_Generic_List_AiNpcBattleServantData__o *aiNpcDataList; // x8
  __int64 v13; // x2
  __int64 v14; // x3
  struct BattleData_o *v15; // x8
  System_Collections_Generic_List_AiNpcBattleServantData__o *v16; // x22
  BattleLogicNpcAi_o *v17; // x21
  NpcAiCheckTask_Argument_o *v18; // x23
  const MethodInfo *v19; // x4
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  NpcAiCheckTask_o *v23; // x20
  const MethodInfo *v24; // x3
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v32; // x0

  v4 = this;
  if ( (byte_4B18EA4 & 1) == 0 )
  {
    sub_1BCA7E0(&NpcAiCheckTask_Argument_TypeInfo, *(_QWORD *)&state, method);
    sub_1BCA7E0(&BattleLogicTask___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiNpcBattleServantData__get_Count__, v7, v8);
    this = (BattleLogicNpcAi_o *)sub_1BCA7E0(&NpcAiCheckTask_TypeInfo, v9, v10);
    byte_4B18EA4 = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_15;
  aiNpcDataList = data->fields.aiNpcDataList;
  if ( !aiNpcDataList )
    goto LABEL_15;
  if ( !state || aiNpcDataList->fields._size < 1 )
    return v4->fields.emptyTask;
  this = (BattleLogicNpcAi_o *)sub_1BCA888(BattleLogicTask___TypeInfo, 1LL);
  v15 = v4->fields.data;
  if ( !v15
    || (v16 = v15->fields.aiNpcDataList,
        v17 = this,
        v18 = (NpcAiCheckTask_Argument_o *)sub_1BCAA2C(NpcAiCheckTask_Argument_TypeInfo, *(_QWORD *)&state, v13, v14),
        NpcAiCheckTask_Argument___ctor(v18, state, v16, 0, v19),
        v23 = (NpcAiCheckTask_o *)sub_1BCAA2C(NpcAiCheckTask_TypeInfo, v20, v21, v22),
        NpcAiCheckTask___ctor(v23, v4, v18, v24),
        !v17) )
  {
LABEL_15:
    sub_1BCAA3C(this, *(_QWORD *)&state);
  }
  if ( v23 )
  {
    this = (BattleLogicNpcAi_o *)sub_1BCA91C(v23, v17->klass->_1.element_class);
    if ( !this )
    {
      v32 = sub_1BCAA60(0LL);
      sub_1BCA908(v32, 0LL);
    }
  }
  if ( !LODWORD(v17->fields.logic) )
    sub_1BCAA44(this, *(_QWORD *)&state);
  v17->fields.logictarget = (struct BattleLogicTarget_o *)v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&v17->fields.logictarget, (int64_t)v23, v25, v26, v27, v28, v29, v30);
  return (BattleLogicTask_array *)v17;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_o *__fastcall BattleLogicNpcAi__MakeBackStepTask(
        BattleLogicNpcAi_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  NpcBackStepBattleLogicTask_o *v5; // x20

  if ( (byte_4B18EA9 & 1) == 0 )
  {
    sub_1BCA7E0(&NpcBackStepBattleLogicTask_TypeInfo, *(_QWORD *)&targetId, method);
    byte_4B18EA9 = 1;
  }
  v5 = (NpcBackStepBattleLogicTask_o *)sub_1BCAA2C(
                                         NpcBackStepBattleLogicTask_TypeInfo,
                                         *(_QWORD *)&targetId,
                                         method,
                                         v3);
  NpcBackStepBattleLogicTask___ctor(v5, targetId, 0, 0LL);
  return (BattleLogicTask_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicNpcAi__MakeLoadNpcPreStepInAction(
        BattleLogicNpcAi_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PreLoadNpcBattleLogicTask_o *v6; // x21

  if ( (byte_4B18EA8 & 1) == 0 )
  {
    sub_1BCA7E0(&PreLoadNpcBattleLogicTask_TypeInfo, *(_QWORD *)&targetId, method);
    byte_4B18EA8 = 1;
  }
  v6 = (PreLoadNpcBattleLogicTask_o *)sub_1BCAA2C(PreLoadNpcBattleLogicTask_TypeInfo, *(_QWORD *)&targetId, method, v3);
  PreLoadNpcBattleLogicTask___ctor(v6, targetId, 0, 0LL);
  return BattleLogicTask__MakeAction((BattleLogicTask_o *)v6, this->fields.logic, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicNpcAi__MakeStepInAction(
        BattleLogicNpcAi_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  NpcStepInBattleLogicTask_o *v7; // x22

  if ( (byte_4B18EA7 & 1) == 0 )
  {
    sub_1BCA7E0(&NpcStepInBattleLogicTask_TypeInfo, *(_QWORD *)&targetId, isForcedSpeedOne);
    byte_4B18EA7 = 1;
  }
  v7 = (NpcStepInBattleLogicTask_o *)sub_1BCAA2C(
                                       NpcStepInBattleLogicTask_TypeInfo,
                                       *(_QWORD *)&targetId,
                                       isForcedSpeedOne,
                                       method);
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

  if ( (byte_4B18EAB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_int____76842096, svtData, actValArray);
    byte_4B18EAB = 1;
  }
  v6 = BasicHelper__IndexValue_int_(
         actValArray,
         0,
         0,
         (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
  if ( !svtData )
    sub_1BCAA3C(v6, v7);
  v8 = v6;
  v9 = BasicHelper__IndexValue_int_(
         actValArray,
         1,
         svtData->fields.treasuredvcLevel,
         (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
  if ( v8 >= 1 )
    BattleServantData__UpdateTreasureDevice(svtData, v8, v9, 0LL);
  v10 = BasicHelper__IndexValue_int_(
          actValArray,
          2,
          svtData->fields.lineMaxNp,
          (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t data_high; // w24
  AiActEntity_o *v16; // x23
  AiState_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_object__o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  NpcServantAiActArgument_o *v26; // x25

  v6 = (BattleLogicBaseAi_o *)this;
  if ( (byte_4B18EA6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, npcSvt, aiEnt);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11, v12);
    this = (BattleLogicNpcAi_o *)sub_1BCA7E0(&NpcServantAiActArgument_TypeInfo, v13, v14);
    byte_4B18EA6 = 1;
  }
  if ( !aiEnt )
    goto LABEL_12;
  this = (BattleLogicNpcAi_o *)BattleLogicBaseAi__GetAiActEntity(v6, aiEnt->fields.aiActId, 0LL);
  if ( !this || !npcSvt )
    goto LABEL_12;
  data_high = HIDWORD(this->fields.data);
  v16 = (AiActEntity_o *)this;
  v17 = (AiState_o *)((__int64 (__fastcall *)(AiNpcBattleServantData_o *, Il2CppMethodPointer))npcSvt->klass->vtable._18_getAiState.method)(
                       npcSvt,
                       npcSvt->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly(v6, data_high, (AiBaseEntity_o *)aiEnt, v17, 0LL) )
    return v6->fields.emptyTask;
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       v18,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v26 = (NpcServantAiActArgument_o *)sub_1BCAA2C(NpcServantAiActArgument_TypeInfo, v23, v24, v25);
  NpcServantAiActArgument___ctor(
    v26,
    v16,
    (AiBaseEntity_o *)aiEnt,
    (BattleServantData_o *)npcSvt,
    (BattleLogicNpcAi_o *)v6,
    0LL);
  this = (BattleLogicNpcAi_o *)BattleLogicBaseAi__SetProcAiActTask(
                                 v6,
                                 (System_Collections_Generic_List_BattleLogicTask__o *)v22,
                                 data_high,
                                 (BaseAiActArgument_o *)v26,
                                 0LL);
  if ( !v22 )
LABEL_12:
    sub_1BCAA3C(this, npcSvt);
  if ( v22->fields._size >= 1 )
    AiNpcBattleServantData__AddActCount(npcSvt, 0LL);
  npcSvt->fields.isNoBackStep = AiEntity__IsNoBackStepNpc(aiEnt, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v22,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicNpcAi__SetReactionFunction(
        BattleLogicNpcAi_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  BattleLogic_reactionFunction_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B18EA3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleLogicNpcAi_MakeAiActionTask__, list, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v6,
      v7);
    sub_1BCA7E0(&BattleLogic_reactionFunction_TypeInfo, v8, v9);
    byte_4B18EA3 = 1;
  }
  v10 = (BattleLogic_reactionFunction_o *)sub_1BCAA2C(BattleLogic_reactionFunction_TypeInfo, list, method, v3);
  BattleLogic_reactionFunction___ctor(v10, (Il2CppObject *)this, Method_BattleLogicNpcAi_MakeAiActionTask__, 0LL);
  if ( !list )
    sub_1BCAA3C(v11, v12);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    60,
    (Il2CppObject *)v10,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
    sub_1BCAA3C(0LL, method);
  return BattleData__getFieldEnemyServantIDList(data, 0, 0LL);
}


System_Int32_array *__fastcall BattleLogicNpcAi__get_PartySvtIds(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1BCAA3C(0LL, method);
  return BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
}


BattlePerformance_o *__fastcall BattleLogicNpcAi__get_Perf(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  struct BattleLogic_o *logic; // x8

  logic = this->fields.logic;
  if ( !logic )
    sub_1BCAA3C(this, method);
  return logic->fields.perf;
}