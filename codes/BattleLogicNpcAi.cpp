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
  struct AiEntity_o *Action; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  AiEntity_o *v18; // x22
  const MethodInfo *v19; // x4
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_4E7AA44 & 1) == 0 )
  {
    this = (BattleLogicNpcAi_o *)sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    byte_4E7AA44 = 1;
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
  v18 = Action;
  arg->fields._AiEnt_k__BackingField = Action;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&arg->fields._AiEnt_k__BackingField,
    (int32_t)Action,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this = (BattleLogicNpcAi_o *)BattleLogicNpcAi__ProcAiAct(
                                 v8,
                                 (AiNpcBattleServantData_o *)Npc_k__BackingField,
                                 v18,
                                 arg,
                                 v19);
  if ( !taskList )
LABEL_12:
    sub_1D0F30C(this, taskList);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)taskList,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
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
  BattleLogicNpcAi_o *v11; // x22
  System_Int32_array *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  BattleComboData_o *v19; // x23
  BattleServantData_o *v20; // x25
  BattleTreasureDeviceCommandData_o *v21; // x24
  int32_t v22; // w0
  const MethodInfo *v23; // x4
  int32_t treasuredvcLevel; // w8
  const MethodInfo *v25; // x1
  char v26; // w0
  bool IsTargetTypeEnemy; // w0
  const MethodInfo *v28; // x2
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  BattleServantData_o *svtData; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4E7AA49 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleComboData_TypeInfo);
    sub_1D0F0B4(&BattleTreasureDeviceCommandData_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4E7AA49 = 1;
  }
  svtData = 0;
  if ( (((__int64 (__fastcall *)(BattleLogicNpcAi_o *, BattleServantData_o **, BaseAiActArgument_o *, const MethodInfo *))this->klass->vtable._32_TryGetActorServant.methodPtr)(
          this,
          &svtData,
          arg,
          this->klass->vtable._32_TryGetActorServant.method)
      & 1) != 0 )
  {
    isNobleAction = (BattleLogicNpcAi_o *)svtData;
    if ( !svtData )
      goto LABEL_22;
    isNobleAction = (BattleLogicNpcAi_o *)BattleServantData__isNobleAction(svtData, 0);
    if ( ((unsigned __int8)isNobleAction & 1) == 0 )
      return;
    if ( !arg )
      goto LABEL_22;
    isNobleAction = (BattleLogicNpcAi_o *)BaseAiActArgument__MakeTask(arg, (BattleLogicBaseAi_o *)this, 0, 0);
    AiActEnt_k__BackingField = arg->fields._AiActEnt_k__BackingField;
    if ( !AiActEnt_k__BackingField )
      goto LABEL_22;
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
                                            (BattleLogicTask_o *)v11,
                                            0);
    if ( !v11 )
      goto LABEL_22;
    v11->fields.logictarget = (struct BattleLogicTarget_o *)isNobleAction;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&v11->fields.logictarget,
      (int32_t)isNobleAction,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v19 = (BattleComboData_o *)sub_1D0F300(BattleComboData_TypeInfo);
    BattleComboData___ctor(v19, 0);
    v20 = svtData;
    v21 = (BattleTreasureDeviceCommandData_o *)sub_1D0F300(BattleTreasureDeviceCommandData_TypeInfo);
    BattleTreasureDeviceCommandData___ctor(v21, v20, 0);
    isNobleAction = (BattleLogicNpcAi_o *)svtData;
    if ( !svtData )
      goto LABEL_22;
    v22 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))svtData->klass->vtable._21_getThisTurnActCount.methodPtr)(
            svtData,
            svtData->klass->vtable._21_getThisTurnActCount.method);
    BattleLogicTask__setActionCommand((BattleLogicTask_o *)v11, v19, (BattleCommandData_o *)v21, v22, v23);
    isNobleAction = (BattleLogicNpcAi_o *)svtData;
    if ( !svtData )
      goto LABEL_22;
    isNobleAction = (BattleLogicNpcAi_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0, 0);
    if ( !svtData )
      goto LABEL_22;
    treasuredvcLevel = svtData->fields.treasuredvcLevel;
    LODWORD(v11->fields.aiActMst) = 4;
    LODWORD(v11[1].monitor) = (_DWORD)isNobleAction;
    HIDWORD(v11[1].monitor) = treasuredvcLevel;
    isNobleAction = (BattleLogicNpcAi_o *)arg->fields._AiEnt_k__BackingField;
    if ( !isNobleAction )
      goto LABEL_22;
    v26 = AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)isNobleAction, 0)
        ? 1
        : ((__int64 (__fastcall *)(BattleLogicNpcAi_o *, struct AiBaseEntity_o *, const MethodInfo *))this->klass->vtable._27_IsNotPlayedActionFirstTime.methodPtr)(
            this,
            arg->fields._AiEnt_k__BackingField,
            this->klass->vtable._27_IsNotPlayedActionFirstTime.method);
    LOBYTE(v11[2].fields.logic) = v26 & 1;
    IsTargetTypeEnemy = BattleLogicTask__IsTargetTypeEnemy((BattleLogicTask_o *)v11, v25);
    BattleLogicTask__RevertUnusedNoNeedUpHateBuff((BattleLogicTask_o *)v11, IsTargetTypeEnemy, v28);
    if ( !retList
      || (items = retList->fields._items,
          v36 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
          ++retList->fields._version,
          !items) )
    {
LABEL_22:
      sub_1D0F30C(isNobleAction, v7);
    }
    size = retList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)retList,
        (Il2CppObject *)v11,
        *(const MethodInfo_395C410 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v38 = &items->obj.klass + size;
      retList->fields._size = size + 1;
      v38[4] = (Il2CppClass *)v11;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v38 + 4), (int32_t)v11, v29, v30, v31, v32, v33, v34);
    }
  }
}


void BattleLogicNpcAi__InitAiActTaskFunction(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicAiActFunc; // x20
  BattleLogicBaseAi_taskAiActFunction_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4E7AA41 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__set_Item__);
    sub_1D0F0B4(&BattleLogicBaseAi_taskAiActFunction_TypeInfo);
    byte_4E7AA41 = 1;
  }
  BattleLogicBaseAi__InitAiActTaskFunction((BattleLogicBaseAi_o *)this, 0);
  dicAiActFunc = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicAiActFunc;
  v4 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1D0F300(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._33_AddNoblePhantasm.method,
    0);
  if ( !dicAiActFunc )
    sub_1D0F30C(v5, v6);
  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
    dicAiActFunc,
    80,
    (Il2CppObject *)v4,
    (const MethodInfo_35C878C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__set_Item__);
}


void BattleLogicNpcAi__Initialize(BattleLogicNpcAi_o *this, BattleData_o *data, const MethodInfo *method)
{
  AiLogic_o *v5; // x21
  struct AiLogic_o **p_aiLogic; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x1

  if ( (byte_4E7AA40 & 1) == 0 )
  {
    sub_1D0F0B4(&AiLogic_TypeInfo);
    byte_4E7AA40 = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, 0);
  v5 = (AiLogic_o *)sub_1D0F300(AiLogic_TypeInfo);
  AiLogic___ctor(v5, 0);
  this->fields.aiLogic = v5;
  p_aiLogic = &this->fields.aiLogic;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)p_aiLogic, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  if ( !*p_aiLogic )
    sub_1D0F30C(0, v13);
  AiLogic__Initialize(*p_aiLogic, data, 0);
}


BattleLogicTask_array *BattleLogicNpcAi__MakeAiActionTask(
        BattleLogicNpcAi_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_array *result; // x0

  if ( !task )
    sub_1D0F30C(this, 0);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 v21; // x0

  v4 = this;
  if ( (byte_4E7AA43 & 1) == 0 )
  {
    sub_1D0F0B4(&NpcAiCheckTask_Argument_TypeInfo);
    sub_1D0F0B4(&BattleLogicTask___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_AiNpcBattleServantData__get_Count__);
    this = (BattleLogicNpcAi_o *)sub_1D0F0B4(&NpcAiCheckTask_TypeInfo);
    byte_4E7AA43 = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_15;
  aiNpcDataList = data->fields.aiNpcDataList;
  if ( !aiNpcDataList )
    goto LABEL_15;
  if ( !state || aiNpcDataList->fields._size < 1 )
    return v4->fields.emptyTask;
  this = (BattleLogicNpcAi_o *)sub_1D0F15C(BattleLogicTask___TypeInfo, 1);
  v7 = v4->fields.data;
  if ( !v7
    || (v8 = v7->fields.aiNpcDataList,
        v9 = this,
        v10 = (NpcAiCheckTask_Argument_o *)sub_1D0F300(NpcAiCheckTask_Argument_TypeInfo),
        NpcAiCheckTask_Argument___ctor(v10, state, v8, 0, v11),
        v12 = (NpcAiCheckTask_o *)sub_1D0F300(NpcAiCheckTask_TypeInfo),
        NpcAiCheckTask___ctor(v12, v4, v10, v13),
        !v9) )
  {
LABEL_15:
    sub_1D0F30C(this, *(_QWORD *)&state);
  }
  if ( v12 )
  {
    this = (BattleLogicNpcAi_o *)sub_1D0F1F0(v12, v9->klass->_1.element_class);
    if ( !this )
    {
      v21 = sub_1D0F330(0);
      sub_1D0F1DC(v21, 0);
    }
  }
  if ( !LODWORD(v9->fields.logic) )
    sub_1D0F314(this);
  v9->fields.logictarget = (struct BattleLogicTarget_o *)v12;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v9->fields.logictarget, (int32_t)v12, v14, v15, v16, v17, v18, v19);
  return (BattleLogicTask_array *)v9;
}


BattleLogicTask_array *BattleLogicNpcAi__MakeBackStepFieldNpcTaskArray(
        BattleLogicNpcAi_o *this,
        int32_t exceptUniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x19
  BattlePerformance_o *perf; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct BattleLogic_o *logic; // x8
  System_Collections_Generic_IEnumerable_TSource__o *FieldNpcUniqueIds; // x20
  long double inited; // q0
  _QWORD *v17; // x19
  __int64 v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0
  System_Func_int__bool__o *v22; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  System_Func_T__TResult__o *v24; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_4E7AA4B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Empty_BattleLogicTask___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Select_int__BattleLogicTask___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_int___);
    sub_1D0F0B4(&System_Func_int__BattleLogicTask__TypeInfo);
    sub_1D0F0B4(&System_Func_int__bool__TypeInfo);
    sub_1D0F0B4(&Method_BattleLogicNpcAi___c__DisplayClass22_0__MakeBackStepFieldNpcTaskArray_b__0__);
    sub_1D0F0B4(&Method_BattleLogicNpcAi___c__DisplayClass22_0__MakeBackStepFieldNpcTaskArray_b__1__);
    sub_1D0F0B4(&BattleLogicNpcAi___c__DisplayClass22_0_TypeInfo);
    byte_4E7AA4B = 1;
  }
  v5 = sub_1D0F300(BattleLogicNpcAi___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        *(_DWORD *)(v5 + 16) = exceptUniqueId,
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        (logic = this->fields.logic) == 0)
    || (perf = logic->fields.perf) == 0 )
  {
    sub_1D0F30C(perf, v7);
  }
  FieldNpcUniqueIds = (System_Collections_Generic_IEnumerable_TSource__o *)BattlePerformance__GetFieldNpcUniqueIds(
                                                                             perf,
                                                                             0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)FieldNpcUniqueIds, 0) )
  {
    v17 = Method_System_Array_Empty_BattleLogicTask___;
    v18 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
    if ( !v18 )
    {
      sub_1CE5198(Method_System_Array_Empty_BattleLogicTask___);
      v18 = v17[7];
    }
    v19 = *(_QWORD *)(v18 + 16);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1CE513C(inited);
    if ( !*(_DWORD *)(v19 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v19);
    v20 = *(_QWORD *)(v17[7] + 16LL);
    if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
      v20 = sub_1CE513C(inited);
    return **(BattleLogicTask_array ***)(v20 + 184);
  }
  else
  {
    v22 = (System_Func_int__bool__o *)sub_1D0F300(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v22,
      (Il2CppObject *)v5,
      Method_BattleLogicNpcAi___c__DisplayClass22_0__MakeBackStepFieldNpcTaskArray_b__0__,
      0);
    v23 = System_Linq_Enumerable__Where_int_(
            FieldNpcUniqueIds,
            (System_Func_TSource__bool__o *)v22,
            (const MethodInfo_3297274 *)Method_System_Linq_Enumerable_Where_int___);
    v24 = (System_Func_T__TResult__o *)sub_1D0F300(System_Func_int__BattleLogicTask__TypeInfo);
    System_Func_int__object____ctor(
      v24,
      (Il2CppObject *)v5,
      Method_BattleLogicNpcAi___c__DisplayClass22_0__MakeBackStepFieldNpcTaskArray_b__1__,
      0);
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v23,
                                                                 (System_Func_TSource__TResult__o *)v24,
                                                                 (const MethodInfo_3283684 *)Method_System_Linq_Enumerable_Select_int__BattleLogicTask___);
    return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_object_(
                                      v25,
                                      (const MethodInfo_328FDE8 *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
  }
}


BattleLogicTask_o *BattleLogicNpcAi__MakeBackStepTask(
        BattleLogicNpcAi_o *this,
        int32_t targetId,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  NpcBackStepBattleLogicTask_o *v6; // x21
  const MethodInfo *v7; // x3

  if ( (byte_4E7AA48 & 1) == 0 )
  {
    sub_1D0F0B4(&NpcBackStepBattleLogicTask_TypeInfo);
    byte_4E7AA48 = 1;
  }
  v6 = (NpcBackStepBattleLogicTask_o *)sub_1D0F300(NpcBackStepBattleLogicTask_TypeInfo);
  NpcBackStepBattleLogicTask___ctor(v6, targetId, isForcedSpeedOne, v7);
  return (BattleLogicTask_o *)v6;
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

  if ( (byte_4E7AA47 & 1) == 0 )
  {
    sub_1D0F0B4(&PreLoadNpcBattleLogicTask_TypeInfo);
    byte_4E7AA47 = 1;
  }
  v5 = (PreLoadNpcBattleLogicTask_o *)sub_1D0F300(PreLoadNpcBattleLogicTask_TypeInfo);
  PreLoadNpcBattleLogicTask___ctor(v5, targetId, 0, v6);
  if ( !v5 )
    sub_1D0F30C(v7, v8);
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

  if ( (byte_4E7AA46 & 1) == 0 )
  {
    sub_1D0F0B4(&NpcStepInBattleLogicTask_TypeInfo);
    byte_4E7AA46 = 1;
  }
  v7 = (NpcStepInBattleLogicTask_o *)sub_1D0F300(NpcStepInBattleLogicTask_TypeInfo);
  NpcStepInBattleLogicTask___ctor(v7, targetId, isForcedSpeedOne, v8);
  if ( !v7 )
    sub_1D0F30C(v9, v10);
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

  if ( (byte_4E7AA4A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_IndexValue_int____80375232);
    byte_4E7AA4A = 1;
  }
  v6 = BasicHelper__IndexValue_int_(
         actValArray,
         0,
         0,
         (const MethodInfo_323D408 *)Method_BasicHelper_IndexValue_int____80375232);
  if ( !svtData )
    sub_1D0F30C(v6, v7);
  v8 = v6;
  v9 = BasicHelper__IndexValue_int_(
         actValArray,
         1,
         svtData->fields.treasuredvcLevel,
         (const MethodInfo_323D408 *)Method_BasicHelper_IndexValue_int____80375232);
  if ( v8 >= 1 )
    BattleServantData__UpdateTreasureDevice(svtData, v8, v9, 0);
  v10 = BasicHelper__IndexValue_int_(
          actValArray,
          2,
          svtData->fields.lineMaxNp,
          (const MethodInfo_323D408 *)Method_BasicHelper_IndexValue_int____80375232);
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
  if ( (byte_4E7AA45 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    this = (BattleLogicNpcAi_o *)sub_1D0F0B4(&NpcServantAiActArgument_TypeInfo);
    byte_4E7AA45 = 1;
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
  v13 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !checkTaskArg
    || (State_k__BackingField = checkTaskArg->fields._State_k__BackingField,
        v15 = (NpcServantAiActArgument_o *)sub_1D0F300(NpcServantAiActArgument_TypeInfo),
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
    sub_1D0F30C(this, npcSvt);
  }
  if ( v13->fields._size >= 1 )
    AiNpcBattleServantData__AddActCount(npcSvt, 0);
  npcSvt->fields.isNoBackStep = AiEntity__IsNoBackStepNpc(aiEnt, 0);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void BattleLogicNpcAi__SetReactionFunction(
        BattleLogicNpcAi_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  BattleLogic_reactionFunction_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4E7AA42 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BattleLogicNpcAi_MakeAiActionTask__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_1D0F0B4(&BattleLogic_reactionFunction_TypeInfo);
    byte_4E7AA42 = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_1D0F300(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v5, (Il2CppObject *)this, Method_BattleLogicNpcAi_MakeAiActionTask__, 0);
  if ( !list )
    sub_1D0F30C(v6, v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    60,
    (Il2CppObject *)v5,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
    sub_1D0F30C(0, method);
  return BattleData__getFieldEnemyServantIDList(data, 0, 0);
}


System_Int32_array *BattleLogicNpcAi__get_PartySvtIds(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1D0F30C(0, method);
  return BattleData__getFieldPlayerServantIDList(data, 0, 0);
}


BattlePerformance_o *BattleLogicNpcAi__get_Perf(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  struct BattleLogic_o *logic; // x8

  logic = this->fields.logic;
  if ( !logic )
    sub_1D0F30C(this, method);
  return logic->fields.perf;
}


void BattleLogicNpcAi___c__DisplayClass22_0___ctor(
        BattleLogicNpcAi___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicNpcAi___c__DisplayClass22_0___MakeBackStepFieldNpcTaskArray_b__0(
        BattleLogicNpcAi___c__DisplayClass22_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return this->fields.exceptUniqueId != id;
}


BattleLogicTask_o *BattleLogicNpcAi___c__DisplayClass22_0___MakeBackStepFieldNpcTaskArray_b__1(
        BattleLogicNpcAi___c__DisplayClass22_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1D0F30C(this, x);
  return BattleLogicNpcAi__MakeBackStepTask((BattleLogicNpcAi_o *)this, x, 0, v3);
}