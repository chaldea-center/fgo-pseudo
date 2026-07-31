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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  AiEntity_o *v18; // x22
  const MethodInfo *v19; // x4
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_593BAA7 & 1) == 0 )
  {
    this = (BattleLogicNpcAi_o *)sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    byte_593BAA7 = 1;
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&arg->fields._AiEnt_k__BackingField,
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
    sub_21FFECC(this, taskList);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)taskList,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
}


void BattleLogicNpcAi__AddNoblePhantasm(
        BattleLogicNpcAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleLogicNpcAi_c *klass; // x8
  __int64 v8; // x1
  BattleLogicNpcAi_o *isNobleAction; // x0
  const MethodInfo *v10; // x3
  struct AiActEntity_o *AiActEnt_k__BackingField; // x8
  BattleLogicNpcAi_o *v12; // x22
  System_Int32_array *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  BattleComboData_o *v20; // x23
  BattleServantData_o *v21; // x25
  BattleTreasureDeviceCommandData_o *v22; // x24
  int32_t v23; // w0
  const MethodInfo *v24; // x4
  int32_t treasuredvcLevel; // w10
  AiBaseEntity_o *AiEnt_k__BackingField; // x8
  const MethodInfo *v27; // x1
  char v28; // w0
  bool IsTargetTypeEnemy; // w0
  const MethodInfo *v30; // x2
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  BattleServantData_o *svtData; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_593BAAC & 1) == 0 )
  {
    sub_21FFC50(&BattleComboData_TypeInfo);
    sub_21FFC50(&BattleTreasureDeviceCommandData_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_593BAAC = 1;
  }
  klass = this->klass;
  svtData = 0;
  if ( (((__int64 (__fastcall *)(BattleLogicNpcAi_o *, BattleServantData_o **, BaseAiActArgument_o *, const MethodInfo *))klass->vtable._34_TryGetActorServant.methodPtr)(
          this,
          &svtData,
          arg,
          klass->vtable._34_TryGetActorServant.method)
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
    v12 = isNobleAction;
    BattleLogicNpcAi__OverwriteTreasureDevice(isNobleAction, svtData, AiActEnt_k__BackingField->fields.skillVals, v10);
    v13 = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicNpcAi_o *, const MethodInfo *))this->klass->vtable._6_get_OpponentSvtIds.methodPtr)(
                                  this,
                                  this->klass->vtable._6_get_OpponentSvtIds.method);
    isNobleAction = (BattleLogicNpcAi_o *)BattleLogicBaseAi__GetLogicTargetIds(
                                            (BattleLogicBaseAi_o *)this,
                                            arg,
                                            v13,
                                            1,
                                            0,
                                            0,
                                            (BattleLogicTask_o *)v12,
                                            0);
    if ( !v12 )
      goto LABEL_22;
    v12->fields.logictarget = (struct BattleLogicTarget_o *)isNobleAction;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v12->fields.logictarget,
      (int32_t)isNobleAction,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v20 = (BattleComboData_o *)sub_21FFEBC(BattleComboData_TypeInfo);
    BattleComboData___ctor(v20, 0);
    v21 = svtData;
    v22 = (BattleTreasureDeviceCommandData_o *)sub_21FFEBC(BattleTreasureDeviceCommandData_TypeInfo);
    BattleTreasureDeviceCommandData___ctor(v22, v21, 0);
    isNobleAction = (BattleLogicNpcAi_o *)svtData;
    if ( !svtData )
      goto LABEL_22;
    v23 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))svtData->klass->vtable._21_getThisTurnActCount.methodPtr)(
            svtData,
            svtData->klass->vtable._21_getThisTurnActCount.method);
    BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v20, (BattleCommandData_o *)v22, v23, v24);
    isNobleAction = (BattleLogicNpcAi_o *)svtData;
    if ( !svtData )
      goto LABEL_22;
    isNobleAction = (BattleLogicNpcAi_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0, 0);
    if ( !svtData )
      goto LABEL_22;
    treasuredvcLevel = svtData->fields.treasuredvcLevel;
    AiEnt_k__BackingField = arg->fields._AiEnt_k__BackingField;
    LODWORD(v12->fields.aiActMst) = 4;
    LODWORD(v12[1].monitor) = (_DWORD)isNobleAction;
    HIDWORD(v12[1].monitor) = treasuredvcLevel;
    if ( !AiEnt_k__BackingField )
      goto LABEL_22;
    v28 = AiBaseEntity__IsForcedActionSpeedAnyTime(AiEnt_k__BackingField, 0)
        ? 1
        : ((__int64 (__fastcall *)(BattleLogicNpcAi_o *, struct AiBaseEntity_o *, const MethodInfo *))this->klass->vtable._29_IsNotPlayedActionFirstTime.methodPtr)(
            this,
            arg->fields._AiEnt_k__BackingField,
            this->klass->vtable._29_IsNotPlayedActionFirstTime.method);
    LOBYTE(v12[2].fields.logic) = v28 & 1;
    IsTargetTypeEnemy = BattleLogicTask__IsTargetTypeEnemy((BattleLogicTask_o *)v12, v27);
    BattleLogicTask__RevertUnusedNoNeedUpHateBuff((BattleLogicTask_o *)v12, IsTargetTypeEnemy, v30);
    if ( !retList
      || (items = retList->fields._items,
          v38 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
          ++retList->fields._version,
          !items) )
    {
LABEL_22:
      sub_21FFECC(isNobleAction, v8);
    }
    size = retList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)retList,
        (Il2CppObject *)v12,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v40 = &items->obj.klass + size;
      retList->fields._size = size + 1;
      v40[4] = (Il2CppClass *)v12;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v40 + 4), (int32_t)v12, v31, v32, v33, v34, v35, v36);
    }
  }
}


void BattleLogicNpcAi__InitAiActTaskFunction(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicAiActFunc; // x20
  BattleLogicBaseAi_taskAiActFunction_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_593BAA4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__set_Item__);
    sub_21FFC50(&BattleLogicBaseAi_taskAiActFunction_TypeInfo);
    byte_593BAA4 = 1;
  }
  BattleLogicBaseAi__InitAiActTaskFunction((BattleLogicBaseAi_o *)this, 0);
  dicAiActFunc = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicAiActFunc;
  v4 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_21FFEBC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._35_AddNoblePhantasm.method,
    0);
  if ( !dicAiActFunc )
    sub_21FFECC(v5, v6);
  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
    dicAiActFunc,
    80,
    (Il2CppObject *)v4,
    (const MethodInfo_3F88BE4 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__set_Item__);
}


void BattleLogicNpcAi__Initialize(BattleLogicNpcAi_o *this, BattleData_o *data, const MethodInfo *method)
{
  AiLogic_o *v5; // x21
  struct AiLogic_o **p_aiLogic; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1

  if ( (byte_593BAA3 & 1) == 0 )
  {
    sub_21FFC50(&AiLogic_TypeInfo);
    byte_593BAA3 = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, 0);
  v5 = (AiLogic_o *)sub_21FFEBC(AiLogic_TypeInfo);
  AiLogic___ctor(v5, 0);
  this->fields.aiLogic = v5;
  p_aiLogic = &this->fields.aiLogic;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_aiLogic, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  if ( !*p_aiLogic )
    sub_21FFECC(0, v13);
  AiLogic__Initialize(*p_aiLogic, data, 0);
}


BattleLogicTask_array *BattleLogicNpcAi__MakeAiActionTask(
        BattleLogicNpcAi_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_array *result; // x0

  if ( !task )
    sub_21FFECC(this, 0);
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
  BattleLogicNpcAi_o *v8; // x21
  System_Collections_Generic_List_AiNpcBattleServantData__o *v9; // x22
  NpcAiCheckTask_Argument_o *v10; // x23
  const MethodInfo *v11; // x4
  NpcAiCheckTask_o *v12; // x20
  const MethodInfo *v13; // x3
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  __int64 v22; // x0

  v4 = this;
  if ( (byte_593BAA6 & 1) == 0 )
  {
    sub_21FFC50(&NpcAiCheckTask_Argument_TypeInfo);
    sub_21FFC50(&BattleLogicTask___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_AiNpcBattleServantData__get_Count__);
    this = (BattleLogicNpcAi_o *)sub_21FFC50(&NpcAiCheckTask_TypeInfo);
    byte_593BAA6 = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_15;
  aiNpcDataList = data->fields.aiNpcDataList;
  if ( !aiNpcDataList )
    goto LABEL_15;
  if ( !state || aiNpcDataList->fields._size < 1 )
    return v4->fields.emptyTask;
  this = (BattleLogicNpcAi_o *)sub_21FFD10(BattleLogicTask___TypeInfo, 1);
  v7 = v4->fields.data;
  if ( !v7
    || (v8 = this,
        v9 = v7->fields.aiNpcDataList,
        v10 = (NpcAiCheckTask_Argument_o *)sub_21FFEBC(NpcAiCheckTask_Argument_TypeInfo),
        NpcAiCheckTask_Argument___ctor(v10, state, v9, 0, v11),
        v12 = (NpcAiCheckTask_o *)sub_21FFEBC(NpcAiCheckTask_TypeInfo),
        NpcAiCheckTask___ctor(v12, v4, v10, v13),
        !v8) )
  {
LABEL_15:
    sub_21FFECC(this, *(_QWORD *)&state);
  }
  if ( v12 )
  {
    this = (BattleLogicNpcAi_o *)sub_21FFDA4(v12, v8->klass->_1.element_class);
    if ( !this )
    {
      v22 = sub_21FFEF0(0, v20);
      sub_21FFD90(v22, 0);
    }
  }
  if ( !LODWORD(v8->fields.logic) )
    sub_21FFED4(this);
  v8->fields.logictarget = (struct BattleLogicTarget_o *)v12;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields.logictarget, (int32_t)v12, v14, v15, v16, v17, v18, v19);
  return (BattleLogicTask_array *)v8;
}


BattleLogicTask_array *BattleLogicNpcAi__MakeBackStepFieldNpcTaskArray(
        BattleLogicNpcAi_o *this,
        int32_t exceptUniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x19
  BattlePerformance_o *perf; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct BattleLogic_o *logic; // x8
  System_Collections_Generic_IEnumerable_TSource__o *FieldNpcUniqueIds; // x20
  __int64 v16; // x1
  long double v17; // q0
  _QWORD *v18; // x19
  __int64 v19; // x8
  __int64 v20; // x0
  __int64 v21; // x0
  System_Func_int__bool__o *v23; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_T__TResult__o *v25; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_593BAAE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_BattleLogicTask___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_int__BattleLogicTask___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_int___);
    sub_21FFC50(&System_Func_int__BattleLogicTask__TypeInfo);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_BattleLogicNpcAi___c__DisplayClass22_0__MakeBackStepFieldNpcTaskArray_b__0__);
    sub_21FFC50(&Method_BattleLogicNpcAi___c__DisplayClass22_0__MakeBackStepFieldNpcTaskArray_b__1__);
    sub_21FFC50(&BattleLogicNpcAi___c__DisplayClass22_0_TypeInfo);
    byte_593BAAE = 1;
  }
  v5 = sub_21FFEBC(BattleLogicNpcAi___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        *(_DWORD *)(v5 + 16) = exceptUniqueId,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        (logic = this->fields.logic) == 0)
    || (perf = logic->fields.perf) == 0 )
  {
    sub_21FFECC(perf, v7);
  }
  FieldNpcUniqueIds = (System_Collections_Generic_IEnumerable_TSource__o *)BattlePerformance__GetFieldNpcUniqueIds(
                                                                             perf,
                                                                             0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)FieldNpcUniqueIds, 0) )
  {
    v18 = Method_System_Array_Empty_BattleLogicTask___;
    v19 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
    if ( !v19 )
    {
      sub_2237B54(Method_System_Array_Empty_BattleLogicTask___);
      v19 = v18[7];
    }
    v20 = *(_QWORD *)(v19 + 16);
    if ( (*(_WORD *)(v20 + 309) & 1) == 0 )
      v20 = sub_2237AF8(v17);
    if ( !*(_DWORD *)(v20 + 228) )
      *(__n128 *)&v17 = j_il2cpp_runtime_class_init_0(v20, v16);
    v21 = *(_QWORD *)(v18[7] + 16LL);
    if ( (*(_WORD *)(v21 + 309) & 1) == 0 )
      v21 = sub_2237AF8(v17);
    return **(BattleLogicTask_array ***)(v21 + 184);
  }
  else
  {
    v23 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v23,
      (Il2CppObject *)v5,
      Method_BattleLogicNpcAi___c__DisplayClass22_0__MakeBackStepFieldNpcTaskArray_b__0__,
      0);
    v24 = System_Linq_Enumerable__Where_int_(
            FieldNpcUniqueIds,
            (System_Func_TSource__bool__o *)v23,
            (const MethodInfo_386F9A8 *)Method_System_Linq_Enumerable_Where_int___);
    v25 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_int__BattleLogicTask__TypeInfo);
    System_Func_int__object____ctor(
      v25,
      (Il2CppObject *)v5,
      Method_BattleLogicNpcAi___c__DisplayClass22_0__MakeBackStepFieldNpcTaskArray_b__1__,
      0);
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v24,
                                                                 (System_Func_TSource__TResult__o *)v25,
                                                                 (const MethodInfo_385A9E0 *)Method_System_Linq_Enumerable_Select_int__BattleLogicTask___);
    return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_object_(
                                      v26,
                                      (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
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

  if ( (byte_593BAAB & 1) == 0 )
  {
    sub_21FFC50(&NpcBackStepBattleLogicTask_TypeInfo);
    byte_593BAAB = 1;
  }
  v6 = (NpcBackStepBattleLogicTask_o *)sub_21FFEBC(NpcBackStepBattleLogicTask_TypeInfo);
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

  if ( (byte_593BAAA & 1) == 0 )
  {
    sub_21FFC50(&PreLoadNpcBattleLogicTask_TypeInfo);
    byte_593BAAA = 1;
  }
  v5 = (PreLoadNpcBattleLogicTask_o *)sub_21FFEBC(PreLoadNpcBattleLogicTask_TypeInfo);
  PreLoadNpcBattleLogicTask___ctor(v5, targetId, 0, v6);
  if ( !v5 )
    sub_21FFECC(v7, v8);
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

  if ( (byte_593BAA9 & 1) == 0 )
  {
    sub_21FFC50(&NpcStepInBattleLogicTask_TypeInfo);
    byte_593BAA9 = 1;
  }
  v7 = (NpcStepInBattleLogicTask_o *)sub_21FFEBC(NpcStepInBattleLogicTask_TypeInfo);
  NpcStepInBattleLogicTask___ctor(v7, targetId, isForcedSpeedOne, v8);
  if ( !v7 )
    sub_21FFECC(v9, v10);
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

  if ( (byte_593BAAD & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_IndexValue_int____91487608);
    byte_593BAAD = 1;
  }
  v6 = BasicHelper__IndexValue_int_(
         actValArray,
         0,
         0,
         (const MethodInfo_37E1834 *)Method_BasicHelper_IndexValue_int____91487608);
  if ( !svtData )
    sub_21FFECC(v6, v7);
  v8 = v6;
  v9 = BasicHelper__IndexValue_int_(
         actValArray,
         1,
         svtData->fields.treasuredvcLevel,
         (const MethodInfo_37E1834 *)Method_BasicHelper_IndexValue_int____91487608);
  if ( v8 >= 1 )
    BattleServantData__UpdateTreasureDevice(svtData, v8, v9, 0);
  v10 = BasicHelper__IndexValue_int_(
          actValArray,
          2,
          svtData->fields.lineMaxNp,
          (const MethodInfo_37E1834 *)Method_BasicHelper_IndexValue_int____91487608);
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
  AiActEntity_o *v9; // x24
  int32_t data_high; // w25
  AiState_o *v11; // x0
  System_Collections_Generic_List_object__o *v13; // x23
  int32_t State_k__BackingField; // w22
  NpcServantAiActArgument_o *v15; // x26
  bool IsNoBackStepNpc; // w0
  const MethodInfo_445164C *v17; // x1

  v8 = (BattleLogicBaseAi_o *)this;
  if ( (byte_593BAA8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    this = (BattleLogicNpcAi_o *)sub_21FFC50(&NpcServantAiActArgument_TypeInfo);
    byte_593BAA8 = 1;
  }
  if ( !aiEnt )
    goto LABEL_13;
  this = (BattleLogicNpcAi_o *)BattleLogicBaseAi__GetAiActEntity(v8, aiEnt->fields.aiActId, 0);
  if ( !this || !npcSvt )
    goto LABEL_13;
  v9 = (AiActEntity_o *)this;
  data_high = HIDWORD(this->fields.data);
  v11 = (AiState_o *)((__int64 (__fastcall *)(AiNpcBattleServantData_o *, const MethodInfo *))npcSvt->klass->vtable._18_getAiState.methodPtr)(
                       npcSvt,
                       npcSvt->klass->vtable._18_getAiState.method);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly(v8, data_high, (AiBaseEntity_o *)aiEnt, v11, 0) )
    return v8->fields.emptyTask;
  v13 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !checkTaskArg
    || (State_k__BackingField = checkTaskArg->fields._State_k__BackingField,
        v15 = (NpcServantAiActArgument_o *)sub_21FFEBC(NpcServantAiActArgument_TypeInfo),
        NpcServantAiActArgument___ctor(
          v15,
          v9,
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
    sub_21FFECC(this, npcSvt);
  }
  if ( v13->fields._size >= 1 )
    AiNpcBattleServantData__AddActCount(npcSvt, 0);
  IsNoBackStepNpc = AiEntity__IsNoBackStepNpc(aiEnt, 0);
  v17 = (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__;
  npcSvt->fields.isNoBackStep = IsNoBackStepNpc;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(v13, v17);
}


void BattleLogicNpcAi__SetReactionFunction(
        BattleLogicNpcAi_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  BattleLogic_reactionFunction_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_593BAA5 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleLogicNpcAi_MakeAiActionTask__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_21FFC50(&BattleLogic_reactionFunction_TypeInfo);
    byte_593BAA5 = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_21FFEBC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v5, (Il2CppObject *)this, Method_BattleLogicNpcAi_MakeAiActionTask__, 0);
  if ( !list )
    sub_21FFECC(v6, v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    60,
    (Il2CppObject *)v5,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
    sub_21FFECC(0, method);
  return BattleData__getFieldEnemyServantIDList(data, 0, 0);
}


System_Int32_array *BattleLogicNpcAi__get_PartySvtIds(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_21FFECC(0, method);
  return BattleData__getFieldPlayerServantIDList(data, 0, 0);
}


BattlePerformance_o *BattleLogicNpcAi__get_Perf(BattleLogicNpcAi_o *this, const MethodInfo *method)
{
  struct BattleLogic_o *logic; // x8

  logic = this->fields.logic;
  if ( !logic )
    sub_21FFECC(this, method);
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


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_o *BattleLogicNpcAi___c__DisplayClass22_0___MakeBackStepFieldNpcTaskArray_b__1(
        BattleLogicNpcAi___c__DisplayClass22_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_21FFECC(this, *(_QWORD *)&x);
  return BattleLogicNpcAi__MakeBackStepTask((BattleLogicNpcAi_o *)this, x, 0, v3);
}