void BattleLogicTask___ctor(BattleLogicTask_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3AB4F & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    byte_4C3AB4F = 1;
  }
  v3 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
  this->fields.targetIdlist = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetIdlist, (int32_t)v3, v4, v5);
  this->fields.flgCheckUseSKill = 1;
  *(_WORD *)&this->fields.IsResetPrevAttackInfo = 257;
  this->fields.IsResetFunctionedFunctionIds = 1;
  this->fields.entryAllAtOnceOrder = 0x7FFFFFFF;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicTask__AddEntryAllAtOnceUniqueId(BattleLogicTask_o *this, int32_t uniqueId, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *entryAllAtOnceUniqueIdList; // x0
  CGThumbnailListItem_o *p_entryAllAtOnceUniqueIdList; // x20
  System_Collections_Generic_List_int__o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10

  if ( (byte_4C3AB60 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C3AB60 = 1;
  }
  entryAllAtOnceUniqueIdList = this->fields.entryAllAtOnceUniqueIdList;
  if ( !entryAllAtOnceUniqueIdList )
  {
    p_entryAllAtOnceUniqueIdList = (CGThumbnailListItem_o *)&this->fields.entryAllAtOnceUniqueIdList;
    v7 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
    p_entryAllAtOnceUniqueIdList->klass = (CGThumbnailListItem_c *)v7;
    sub_1C32BC4(p_entryAllAtOnceUniqueIdList, (int32_t)v7, v8, v9);
    entryAllAtOnceUniqueIdList = (struct System_Collections_Generic_List_int__o *)p_entryAllAtOnceUniqueIdList->klass;
    if ( !p_entryAllAtOnceUniqueIdList->klass )
      goto LABEL_9;
  }
  items = entryAllAtOnceUniqueIdList->fields._items;
  v11 = Method_System_Collections_Generic_List_int__Add__;
  ++entryAllAtOnceUniqueIdList->fields._version;
  if ( !items )
LABEL_9:
    sub_1C32E7C(entryAllAtOnceUniqueIdList);
  size = entryAllAtOnceUniqueIdList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      entryAllAtOnceUniqueIdList,
      uniqueId,
      *(const MethodInfo_377B798 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    entryAllAtOnceUniqueIdList->fields._size = size + 1;
    items->m_Items[size] = uniqueId;
  }
}


void BattleLogicTask__AfterCreateAction(BattleLogicTask_o *this, BattleLogic_o *logic, const MethodInfo *method)
{
  struct BaseTaskInterruptProcess_o *interruptProc; // x0

  interruptProc = this->fields.interruptProc;
  if ( interruptProc )
    ((void (__fastcall *)(struct BaseTaskInterruptProcess_o *, BattleLogic_o *, const MethodInfo *))interruptProc->klass->vtable._4_AfterCreateAction.methodPtr)(
      interruptProc,
      logic,
      interruptProc->klass->vtable._4_AfterCreateAction.method);
}


BattleLogicTask_o *BattleLogicTask__CloneSkillTask(
        BattleLogicTask_o *this,
        BattleSkillInfoData_o *skillInfo,
        int32_t actorType,
        bool targetSwapExec,
        const MethodInfo *method)
{
  __int64 v9; // x8
  __int64 v10; // x10
  System_Int32_array *v11; // x24
  System_Int32_array *v12; // x23
  BattleLogicTask_o *v13; // x22
  const MethodInfo *v14; // x1
  __int64 v15; // x0
  const MethodInfo *v16; // x6
  const MethodInfo *v17; // x3

  if ( (byte_4C3AB5B & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicTask_TypeInfo);
    byte_4C3AB5B = 1;
  }
  v9 = 32;
  if ( targetSwapExec )
    v10 = 40;
  else
    v10 = 32;
  if ( !targetSwapExec )
    v9 = 40;
  v11 = *(System_Int32_array **)((char *)&this->klass + v10);
  v12 = *(System_Int32_array **)((char *)&this->klass + v9);
  v13 = (BattleLogicTask_o *)sub_1C32E6C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v13, v14);
  if ( !v13
    || (BattleLogicTask__setActionSkill(
          v13,
          skillInfo,
          v11,
          v12,
          this->fields.checkAlive,
          this->fields.checkRevengeId,
          v16),
        !skillInfo) )
  {
    sub_1C32E7C(v15);
  }
  BattleLogicTask__setActor(v13, actorType, skillInfo->fields.svtUniqueId, v17);
  return v13;
}


int32_t BattleLogicTask__ConvertActorToActionState(BattleLogicTask_o *this, const MethodInfo *method)
{
  int32_t actortype; // w8

  actortype = this->fields.actortype;
  if ( actortype == 1 )
    return 2;
  else
    return 2 * (actortype == 5);
}


System_Int32_array *BattleLogicTask__GetGimmickIndexArray(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.gimmickIndexArray;
}


BattleLogicTask_array *BattleLogicTask__GetRelayTasksAfterSetIntervalBuff(
        BattleLogicTask_o *this,
        BattleLogicTask_array *relayTasks,
        const MethodInfo *method)
{
  BattleLogicTask_array *v3; // x19
  __int64 IsNullOrEmpty; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  BattleActionData_o *v8; // x19
  BattleActionData_o *v9; // x21
  __int64 v10; // x20
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o *m_Items; // x0
  int32_t v17; // w1
  BattleLogicTask_o *v18; // x8
  __int64 v20; // x0

  v3 = relayTasks;
  if ( (byte_4C3AB5A & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleLogicTask___TypeInfo);
    sub_1C32C20(&UpdateIntervalBuffViewBattleLogicTask_TypeInfo);
    byte_4C3AB5A = 1;
  }
  if ( BattleLogicTask__get_ExistDisplayTriggerIntervalBuff(this, (const MethodInfo *)relayTasks) )
  {
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v3, 0);
    if ( (IsNullOrEmpty & 1) != 0 )
    {
      v8 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
      BattleActionData___ctor(v8, 0);
      if ( v8 )
      {
        v9 = BattleActionData__AddDisplayTriggerIntervalBuff(v8, this, 0);
        v3 = (BattleLogicTask_array *)sub_1C32CC8(BattleLogicTask___TypeInfo, 1);
        v10 = sub_1C32E6C(UpdateIntervalBuffViewBattleLogicTask_TypeInfo);
        BattleLogicTask___ctor((BattleLogicTask_o *)v10, v11);
        *(_DWORD *)(v10 + 48) = 58;
        *(_QWORD *)(v10 + 304) = v9;
        sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 304), (int32_t)v9, v12, v13);
        *(_BYTE *)(v10 + 265) = 1;
        if ( v3 )
        {
          IsNullOrEmpty = sub_1C32D5C(v10, v3->obj.klass->_1.element_class);
          if ( !IsNullOrEmpty )
          {
            v20 = sub_1C32EA0(0);
            sub_1C32D48(v20, 0);
          }
          if ( LODWORD(v3->max_length) )
          {
            v3->m_Items[0] = (BattleLogicTask_o *)v10;
            m_Items = (struct System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o *)v3->m_Items;
            v17 = v10;
LABEL_14:
            sub_1C32BC4((CGThumbnailListItem_o *)m_Items, v17, v14, v15);
            return v3;
          }
LABEL_17:
          sub_1C32E84(IsNullOrEmpty);
        }
      }
    }
    else if ( v3 )
    {
      if ( !LODWORD(v3->max_length) )
        goto LABEL_17;
      v18 = v3->m_Items[0];
      if ( v18 )
      {
        v18->fields._PairDisplayTriggerIntervalBuff_k__BackingField = this->fields._PairDisplayTriggerIntervalBuff_k__BackingField;
        sub_1C32BC4((CGThumbnailListItem_o *)&v18->fields._PairDisplayTriggerIntervalBuff_k__BackingField, 0, v6, v7);
        this->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.key = 0;
        this->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.value = 0;
        m_Items = &this->fields._PairDisplayTriggerIntervalBuff_k__BackingField;
        v17 = 0;
        goto LABEL_14;
      }
    }
    sub_1C32E7C(IsNullOrEmpty);
  }
  return v3;
}


System_Int32_array *BattleLogicTask__GetSkillAddIndiv(BattleLogicTask_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  result = (System_Int32_array *)this->fields.skillInfo;
  if ( result )
    return BattleSkillInfoData__GetAddIndiv((BattleSkillInfoData_o *)result, 0);
  return result;
}


void BattleLogicTask__InterruptAction(
        BattleLogicTask_o *this,
        BattleActionData_o *addAction,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_InterruptActionList; // x20
  System_Collections_Generic_List_object__o *klass; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3AB5E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleActionData__ToArray__);
    byte_4C3AB5E = 1;
  }
  if ( addAction && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.InterruptActionList, 0) )
  {
    p_InterruptActionList = (CGThumbnailListItem_o *)&this->fields.InterruptActionList;
    klass = (System_Collections_Generic_List_object__o *)p_InterruptActionList->klass;
    if ( !p_InterruptActionList->klass
      || (klass = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                 klass,
                                                                 (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleActionData__ToArray__),
          !perf) )
    {
      sub_1C32E7C(klass);
    }
    BattlePerformance__addActionData(perf, (BattleActionData_array *)klass, 0);
    p_InterruptActionList->klass = 0;
    sub_1C32BC4(p_InterruptActionList, 0, v9, v10);
  }
}


bool BattleLogicTask__IsAddAfterDeadTask(BattleLogicTask_o *this, const MethodInfo *method)
{
  return 0;
}


bool BattleLogicTask__IsAddLastDeadTask(BattleLogicTask_o *this, const MethodInfo *method)
{
  return 0;
}


bool BattleLogicTask__IsDoNotAct(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 69;
}


bool BattleLogicTask__IsEnemyLogicPlayerTurnEndAfter(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 39;
}


bool BattleLogicTask__IsEnemyLogicShiftAfter(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 63;
}


bool BattleLogicTask__IsGimmick(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.gimmickIndexArray != 0;
}


bool BattleLogicTask__IsTargetTypeEnemy(BattleLogicTask_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  TreasureDvcLvEntity_o *Entity; // x20
  struct System_Int32_array *funcId; // x20
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x19
  unsigned __int64 v8; // x21

  if ( (byte_4C3AB57 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C32C20(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3AB57 = 1;
  }
  if ( (this->fields.actiontype & 0xFFFFFFFE) != 4 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0
    || (Entity = TreasureDvcLvMaster__GetEntity(
                   (TreasureDvcLvMaster_o *)Instance,
                   this->fields.treasureDvcId,
                   this->fields.tresureDvcLv,
                   0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_FunctionMaster___),
        !Entity)
    || (funcId = Entity->fields.funcId) == 0 )
  {
LABEL_18:
    sub_1C32E7C(Instance);
  }
  max_length = funcId->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)max_length )
      sub_1C32E84(Instance);
    if ( !v7 )
      goto LABEL_18;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 v7,
                 funcId->m_Items[v8],
                 (const MethodInfo_3396838 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    if ( Instance )
    {
      if ( HIDWORD(Instance[1].monitor) == 4 )
        return 1;
    }
    LODWORD(max_length) = funcId->max_length;
    if ( (__int64)++v8 >= (int)max_length )
      return 0;
  }
}


BattleActionData_o *BattleLogicTask__MakeAction(
        BattleLogicTask_o *task,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  if ( !task )
    sub_1C32E7C(0);
  return (BattleActionData_o *)((__int64 (__fastcall *)(BattleLogicTask_o *, BattleLogic_o *, const MethodInfo *))task->klass->vtable._6_MakeActionData.methodPtr)(
                                 task,
                                 logic,
                                 task->klass->vtable._6_MakeActionData.method);
}


BattleActionData_o *BattleLogicTask__MakeActionData(
        BattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  return 0;
}


BattleLogicTask_array *BattleLogicTask__MakeActionTask(
        BattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  if ( (byte_4C3AB5F & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicTask___TypeInfo);
    byte_4C3AB5F = 1;
  }
  return (BattleLogicTask_array *)sub_1C32CC8(BattleLogicTask___TypeInfo, 0);
}


void BattleLogicTask__SetAiPriority(BattleLogicTask_o *this, int32_t priority, const MethodInfo *method)
{
  this->fields._AiTimingPriority_k__BackingField = priority;
}


void BattleLogicTask__SetAttacked(
        BattleLogicTask_o *this,
        BattleData_o *data,
        bool isAttacked,
        const MethodInfo *method)
{
  ;
}


void BattleLogicTask__SetDisplayTriggerIntervalBuff(
        BattleLogicTask_o *this,
        BattleServantData_o *svtData,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  BattleLogicTask___c_c *v7; // x0
  System_Func_object__bool__o *_9__138_0; // x22
  Il2CppObject *v9; // x23
  struct BattleLogicTask___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Collections_ICollection_o *v14; // x21
  bool IsNullOrEmpty; // w0
  BattleLogicTask___c_c *v16; // x0
  System_Action_object__o *_9__138_1; // x22
  Il2CppObject *v18; // x23
  struct BattleLogicTask___c_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo_36D12D8 *v22; // x4
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o v25; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v26; // 0:x0.16

  if ( (byte_4C3AB59 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_1C32C20(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData_____ctor__);
    sub_1C32C20(&Method_BattleLogicTask___c__SetDisplayTriggerIntervalBuff_b__138_0__);
    sub_1C32C20(&Method_BattleLogicTask___c__SetDisplayTriggerIntervalBuff_b__138_1__);
    sub_1C32C20(&BattleLogicTask___c_TypeInfo);
    byte_4C3AB59 = 1;
  }
  v7 = BattleLogicTask___c_TypeInfo;
  if ( !BattleLogicTask___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicTask___c_TypeInfo);
    v7 = BattleLogicTask___c_TypeInfo;
  }
  _9__138_0 = (System_Func_object__bool__o *)v7->static_fields->__9__138_0;
  if ( !_9__138_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleLogicTask___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__138_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__138_0,
      v9,
      Method_BattleLogicTask___c__SetDisplayTriggerIntervalBuff_b__138_0__,
      0);
    static_fields = BattleLogicTask___c_TypeInfo->static_fields;
    static_fields->__9__138_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__138_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__138_0, (int32_t)_9__138_0, v11, v12);
  }
  v13 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)buffArray,
          (System_Func_TSource__bool__o *)_9__138_0,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v14 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_object_(
                                              v13,
                                              (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v14, 0);
  if ( svtData && !IsNullOrEmpty )
  {
    v16 = BattleLogicTask___c_TypeInfo;
    if ( !BattleLogicTask___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicTask___c_TypeInfo);
      v16 = BattleLogicTask___c_TypeInfo;
    }
    _9__138_1 = (System_Action_object__o *)v16->static_fields->__9__138_1;
    if ( !_9__138_1 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = BattleLogicTask___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__138_1 = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_object____ctor(
        _9__138_1,
        v18,
        Method_BattleLogicTask___c__SetDisplayTriggerIntervalBuff_b__138_1__,
        0);
      v19 = BattleLogicTask___c_TypeInfo->static_fields;
      v19->__9__138_1 = (struct System_Action_BattleBuffData_BuffData__o *)_9__138_1;
      sub_1C32BC4((CGThumbnailListItem_o *)&v19->__9__138_1, (int32_t)_9__138_1, v20, v21);
    }
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)v14,
      (System_Action_T__o *)_9__138_1,
      (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    v26.fields.key = (Il2CppObject *)&v25;
    v26.fields.value = (Il2CppObject *)svtData;
    v25 = (struct System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o)0LL;
    System_Collections_Generic_KeyValuePair_object__object____ctor(
      v26,
      (Il2CppObject *)v14,
      (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData_____ctor__,
      v22);
    this->fields._PairDisplayTriggerIntervalBuff_k__BackingField = v25;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._PairDisplayTriggerIntervalBuff_k__BackingField, 0, v23, v24);
  }
}


void BattleLogicTask__SetDoNotAct(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 69;
}


void BattleLogicTask__SetGimmickIndexArray(
        BattleLogicTask_o *this,
        System_Int32_array *indexArray,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.gimmickIndexArray = indexArray;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.gimmickIndexArray, (int32_t)indexArray, (int32_t)method, v3);
}


BattleLogicTask_o *BattleLogicTask__SetInheritParamToAddInvokeSkillTask(
        BattleLogicTask_o *this,
        BattleLogicTask_o *baseTask,
        const MethodInfo *method)
{
  if ( !baseTask )
    sub_1C32E7C(this);
  this->fields.isSkipStep = baseTask->fields.isSkipStep;
  this->fields.IsResetPrevAttackInfo = baseTask->fields.IsResetPrevAttackInfo;
  this->fields.IsResetWasAttackTargetId = baseTask->fields.IsResetWasAttackTargetId;
  this->fields.IsSkipRelationTask = baseTask->fields.IsSkipRelationTask;
  this->fields.IsResetFunctionedFunctionIds = baseTask->fields.IsResetFunctionedFunctionIds;
  return this;
}


void BattleLogicTask__SetInterruptAction(
        BattleLogicTask_o *this,
        BattleActionData_array *actions,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *InterruptActionList; // x0
  CGThumbnailListItem_o *p_InterruptActionList; // x20
  System_Collections_Generic_List_object__o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3AB5D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleActionData__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleActionData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleActionData__TypeInfo);
    byte_4C3AB5D = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actions, 0) )
  {
    InterruptActionList = (System_Collections_Generic_List_object__o *)this->fields.InterruptActionList;
    if ( !InterruptActionList )
    {
      p_InterruptActionList = (CGThumbnailListItem_o *)&this->fields.InterruptActionList;
      v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleActionData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v7,
        (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleActionData___ctor__);
      p_InterruptActionList->klass = (CGThumbnailListItem_c *)v7;
      sub_1C32BC4(p_InterruptActionList, (int32_t)v7, v8, v9);
      InterruptActionList = (System_Collections_Generic_List_object__o *)p_InterruptActionList->klass;
      if ( !p_InterruptActionList->klass )
        sub_1C32E7C(0);
    }
    System_Collections_Generic_List_object___AddRange(
      InterruptActionList,
      (System_Collections_Generic_IEnumerable_T__o *)actions,
      (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleActionData__AddRange__);
  }
}


void BattleLogicTask__SetInterruptLoadChangeModelAction(
        BattleLogicTask_o *this,
        BattleActionData_o *execActData,
        const MethodInfo *method)
{
  BattleActionData_o *v5; // x21
  System_Collections_Generic_List_BattleActionData_ChangeModelActionData__o *ChangeModelList_k__BackingField; // x22
  BattleActionWaitCond_UntilChangeModelLoadComplete_o *v7; // x20
  __int64 v8; // x0
  BattleActionData_o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x21
  const MethodInfo *v13; // x2
  __int64 v14; // x0

  if ( (byte_4C3AB5C & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData___TypeInfo);
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleActionWaitCond_UntilChangeModelLoadComplete_TypeInfo);
    byte_4C3AB5C = 1;
  }
  if ( execActData
    && !BasicHelper__IsNullOrEmpty(
          (System_Collections_ICollection_o *)execActData->fields._ChangeModelList_k__BackingField,
          0) )
  {
    v5 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
    BattleActionData___ctor(v5, 0);
    ChangeModelList_k__BackingField = execActData->fields._ChangeModelList_k__BackingField;
    v7 = (BattleActionWaitCond_UntilChangeModelLoadComplete_o *)sub_1C32E6C(BattleActionWaitCond_UntilChangeModelLoadComplete_TypeInfo);
    BattleActionWaitCond_UntilChangeModelLoadComplete___ctor(v7, ChangeModelList_k__BackingField, 0);
    if ( !v5
      || (v9 = BattleActionData__SetWaitCond(v5, (BattleActionWaitCond_Base_o *)v7, 0),
          (v8 = sub_1C32CC8(BattleActionData___TypeInfo, 1)) == 0) )
    {
      sub_1C32E7C(v8);
    }
    v12 = v8;
    if ( v9 )
    {
      v8 = sub_1C32D5C(v9, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
      if ( !v8 )
      {
        v14 = sub_1C32EA0(0);
        sub_1C32D48(v14, 0);
      }
    }
    if ( !*(_DWORD *)(v12 + 24) )
      sub_1C32E84(v8);
    *(_QWORD *)(v12 + 32) = v9;
    sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 32), (int32_t)v9, v10, v11);
    BattleLogicTask__SetInterruptAction(this, (BattleActionData_array *)v12, v13);
  }
}


void BattleLogicTask__SetOverwriteTreasureDevice(
        BattleLogicTask_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  OverwriteTreasureDeviceData_o *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3AB4E & 1) == 0 )
  {
    sub_1C32C20(&OverwriteTreasureDeviceData_TypeInfo);
    byte_4C3AB4E = 1;
  }
  v7 = (OverwriteTreasureDeviceData_o *)sub_1C32E6C(OverwriteTreasureDeviceData_TypeInfo);
  OverwriteTreasureDeviceData___ctor(v7, id, lv, 0);
  this->fields._OverwriteTdData_k__BackingField = v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._OverwriteTdData_k__BackingField, (int32_t)v7, v8, v9);
}


void BattleLogicTask__SetPlayFieldMotion(BattleLogicTask_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_String_o **p_motionName; // x0

  this->fields.motionName = name;
  p_motionName = &this->fields.motionName;
  *((_DWORD *)p_motionName - 18) = 44;
  sub_1C32BC4((CGThumbnailListItem_o *)p_motionName, (int32_t)name, (int32_t)method, v3);
}


void BattleLogicTask__SetShowBattlePointEffectFlag(
        BattleLogicTask_o *this,
        BattleLogicTask_o *checker,
        const MethodInfo *method)
{
  if ( !this )
    sub_1C32E7C(0);
  this->fields.isShowBattlePointEffect = this == checker && checker != 0;
}


bool BattleLogicTask__checkActorId(BattleLogicTask_o *this, BattleLogicTask_o *task, const MethodInfo *method)
{
  struct System_Int32_array *actorIdlist; // x8
  int v4; // w8
  struct System_Int32_array *v6; // x9
  int v7; // w9

  if ( !task )
    return 0;
  actorIdlist = this->fields.actorIdlist;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      goto LABEL_12;
    v4 = actorIdlist->m_Items[0];
  }
  else
  {
    v4 = -1;
  }
  v6 = task->fields.actorIdlist;
  if ( !v6 )
  {
    v7 = -1;
    return v4 == v7;
  }
  if ( !LODWORD(v6->max_length) )
LABEL_12:
    sub_1C32E84(this);
  v7 = v6->m_Items[0];
  return v4 == v7;
}


bool BattleLogicTask__checkTargetId(BattleLogicTask_o *this, BattleLogicTask_o *task, const MethodInfo *method)
{
  struct System_Int32_array *targetIdlist; // x8
  il2cpp_array_size_t max_length; // x10
  struct System_Int32_array *v5; // x9
  il2cpp_array_size_t v6; // x11

  if ( !task )
    return 0;
  targetIdlist = this->fields.targetIdlist;
  if ( !targetIdlist )
    goto LABEL_10;
  max_length = targetIdlist->max_length;
  if ( !max_length )
    return 0;
  v5 = task->fields.targetIdlist;
  if ( !v5 )
LABEL_10:
    sub_1C32E7C(this);
  v6 = v5->max_length;
  if ( !v6 )
    return 0;
  if ( !(_DWORD)max_length || !(_DWORD)v6 )
    sub_1C32E84(this);
  return targetIdlist->m_Items[0] == v5->m_Items[0];
}


int32_t BattleLogicTask__getActorId(BattleLogicTask_o *this, const MethodInfo *method)
{
  struct System_Int32_array *actorIdlist; // x8

  actorIdlist = this->fields.actorIdlist;
  if ( !actorIdlist )
    return -1;
  if ( !LODWORD(actorIdlist->max_length) )
    sub_1C32E84(this);
  return actorIdlist->m_Items[0];
}


BattleComboData_o *BattleLogicTask__getCombo(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.combo;
}


BattleCommandData_o *BattleLogicTask__getCommand(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.command;
}


int32_t BattleLogicTask__getTarget(BattleLogicTask_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIdlist; // x8

  targetIdlist = this->fields.targetIdlist;
  if ( !targetIdlist )
    sub_1C32E7C(this);
  if ( !LODWORD(targetIdlist->max_length) )
    sub_1C32E84(this);
  return targetIdlist->m_Items[0];
}


System_Int32_array *BattleLogicTask__getTargetlist(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.targetIdlist;
}


int32_t BattleLogicTask__get_AiTimingPriority(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields._AiTimingPriority_k__BackingField;
}


bool BattleLogicTask__get_ExistDisplayTriggerIntervalBuff(BattleLogicTask_o *this, const MethodInfo *method)
{
  if ( (byte_4C3AB58 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Value__);
    byte_4C3AB58 = 1;
  }
  return !BasicHelper__IsNullOrEmpty(
            (System_Collections_ICollection_o *)this->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.value,
            0);
}


OverwriteTreasureDeviceData_o *BattleLogicTask__get_OverwriteTdData(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields._OverwriteTdData_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o BattleLogicTask__get_PairDisplayTriggerIntervalBuff(
        BattleLogicTask_o *this,
        const MethodInfo *method)
{
  struct BattleBuffData_BuffData_array *value; // x1
  struct BattleServantData_o *key; // x0
  System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o result; // 0:x0.16

  value = this->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.value;
  key = this->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.key;
  result.fields.value = value;
  result.fields.key = key;
  return result;
}


bool BattleLogicTask__isAddAttack(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 2;
}


bool BattleLogicTask__isArts(BattleLogicTask_o *this, const MethodInfo *method)
{
  int32_t ordertype; // w19

  if ( (byte_4C3AB54 & 1) == 0 )
  {
    sub_1C32C20(&BattleCommand_TypeInfo);
    byte_4C3AB54 = 1;
  }
  ordertype = this->fields.ordertype;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__isARTS(ordertype, 0);
}


bool BattleLogicTask__isBackStep(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 6;
}


bool BattleLogicTask__isBuster(BattleLogicTask_o *this, const MethodInfo *method)
{
  int32_t ordertype; // w19

  if ( (byte_4C3AB55 & 1) == 0 )
  {
    sub_1C32C20(&BattleCommand_TypeInfo);
    byte_4C3AB55 = 1;
  }
  ordertype = this->fields.ordertype;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__isBUSTER(ordertype, 0);
}


bool BattleLogicTask__isCheck(BattleLogicTask_o *this, int32_t ckType, const MethodInfo *method)
{
  return this->fields.actiontype == ckType;
}


bool BattleLogicTask__isCheckEntryFunction(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 24;
}


bool BattleLogicTask__isComboOrder(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 8;
}


bool BattleLogicTask__isCommandAction(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 1;
}


bool BattleLogicTask__isCommandSpell(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 9;
}


bool BattleLogicTask__isDead(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 14;
}


bool BattleLogicTask__isEnemyLogicDead(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 16;
}


bool BattleLogicTask__isGrandOrder(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.grandoderflg;
}


bool BattleLogicTask__isPlayMotion(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 10;
}


bool BattleLogicTask__isProcBuffDead(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 15;
}


bool BattleLogicTask__isQuick(BattleLogicTask_o *this, const MethodInfo *method)
{
  int32_t ordertype; // w19

  if ( (byte_4C3AB56 & 1) == 0 )
  {
    sub_1C32C20(&BattleCommand_TypeInfo);
    byte_4C3AB56 = 1;
  }
  ordertype = this->fields.ordertype;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__isQUICK(ordertype, 0);
}


bool BattleLogicTask__isReservationSkill(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 25;
}


bool BattleLogicTask__isResurrection(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 13;
}


bool BattleLogicTask__isSKill(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 3;
}


bool BattleLogicTask__isTreasureDvc(BattleLogicTask_o *this, const MethodInfo *method)
{
  return (this->fields.actiontype & 0xFFFFFFFE) == 4;
}


bool BattleLogicTask__isTurnEndEnemy(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 12;
}


bool BattleLogicTask__isTurnEndPlayer(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 11;
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicTask__setActionCommand(
        BattleLogicTask_o *this,
        BattleComboData_o *combo,
        BattleCommandData_o *command,
        int32_t index,
        const MethodInfo *method)
{
  struct BattleCommandData_o **p_command; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  this->fields.actiontype = 1;
  this->fields.combo = combo;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.combo,
    (int32_t)combo,
    (int32_t)command,
    *(const MethodInfo **)&index);
  this->fields.command = command;
  p_command = &this->fields.command;
  sub_1C32BC4((CGThumbnailListItem_o *)p_command, (int32_t)command, v10, v11);
  if ( !*p_command )
    sub_1C32E7C(0);
  BattleCommandData__setCombo(*p_command, combo, index, 0);
}


void BattleLogicTask__setActionOverwriteTreasureDvc(
        BattleLogicTask_o *this,
        int32_t treDvcId,
        int32_t lv,
        int32_t Oc,
        bool isCheckAlive,
        const MethodInfo *method)
{
  this->fields.treasureDvcId = treDvcId;
  this->fields.tresureDvcLv = lv;
  this->fields.counterOc = Oc;
  this->fields.actiontype = 5;
  this->fields.checkAlive = isCheckAlive;
}


void BattleLogicTask__setActionSkill(
        BattleLogicTask_o *this,
        BattleSkillInfoData_o *skillInfo,
        System_Int32_array *targetlist,
        System_Int32_array *ptTarget,
        bool checkAlive,
        bool checkRevengeId,
        const MethodInfo *method)
{
  bool v11; // w25
  bool v12; // w24
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *Master_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v11 = checkAlive;
  v12 = checkRevengeId;
  if ( (byte_4C3AB52 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    byte_4C3AB52 = 1;
  }
  entity = 0;
  this->fields.actiontype = 3;
  this->fields.skillInfo = skillInfo;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.skillInfo,
    (int32_t)skillInfo,
    (int32_t)targetlist,
    (const MethodInfo *)ptTarget);
  this->fields.targetIdlist = targetlist;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetIdlist, (int32_t)targetlist, v13, v14);
  this->fields.ptTarget = ptTarget;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.ptTarget, (int32_t)ptTarget, v15, v16);
  this->fields.checkAlive = v11;
  this->fields.checkRevengeId = v12;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !skillInfo )
    goto LABEL_13;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Master_object = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                                    skillInfo,
                                    skillInfo->klass->vtable._5_get_skillId.method);
  if ( !v18 )
    goto LABEL_13;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v18,
          &entity,
          (int32_t)Master_object,
          (const MethodInfo_3396884 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return;
  Master_object = entity;
  if ( !entity
    || (this->fields.afterWaitGroup = SkillEntity__GetAfterWaitGroup((SkillEntity_o *)entity, 0),
        (Master_object = entity) == 0)
    || (this->fields.afterWaitSecond = SkillEntity__GetAfterWaitSecond((SkillEntity_o *)entity, 0),
        (Master_object = entity) == 0) )
  {
LABEL_13:
    sub_1C32E7C(Master_object);
  }
  this->fields.timingLastWaitSecond = SkillEntity__GetTimingLastWaitTime((SkillEntity_o *)entity, 0);
}


void BattleLogicTask__setActionTreasureDvc(
        BattleLogicTask_o *this,
        int32_t treDvcId,
        int32_t lv,
        const MethodInfo *method)
{
  this->fields.actiontype = 4;
  this->fields.treasureDvcId = treDvcId;
  this->fields.tresureDvcLv = lv;
}


void BattleLogicTask__setActor(BattleLogicTask_o *this, int32_t type, int32_t uniqueID, const MethodInfo *method)
{
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Int32_array **p_actorIdlist; // x19

  if ( (byte_4C3AB50 & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    byte_4C3AB50 = 1;
  }
  v7 = sub_1C32CC8(int___TypeInfo, 1);
  if ( !v7 )
    sub_1C32E7C(0);
  if ( !*(_DWORD *)(v7 + 24) )
    sub_1C32E84(v7);
  *(_DWORD *)(v7 + 32) = uniqueID;
  this->fields.actorIdlist = (struct System_Int32_array *)v7;
  p_actorIdlist = &this->fields.actorIdlist;
  *((_DWORD *)p_actorIdlist - 2) = type;
  sub_1C32BC4((CGThumbnailListItem_o *)p_actorIdlist, v7, v8, v9);
}


void BattleLogicTask__setActor_46861308(
        BattleLogicTask_o *this,
        int32_t type,
        System_Int32_array *uniqueIDList,
        const MethodInfo *method)
{
  struct System_Int32_array **p_actorIdlist; // x0

  this->fields.actorIdlist = uniqueIDList;
  p_actorIdlist = &this->fields.actorIdlist;
  *((_DWORD *)p_actorIdlist - 2) = type;
  sub_1C32BC4((CGThumbnailListItem_o *)p_actorIdlist, (int32_t)uniqueIDList, (int32_t)uniqueIDList, method);
}


void BattleLogicTask__setAddAttackCommand(
        BattleLogicTask_o *this,
        BattleComboData_o *combo,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  struct BattleCommandData_o **p_command; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  BattleCommandData_o *v10; // x0
  struct BattleCommandData_o *v11; // x8

  this->fields.actiontype = 2;
  this->fields.combo = combo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.combo, (int32_t)combo, (int32_t)command, method);
  this->fields.command = command;
  p_command = &this->fields.command;
  sub_1C32BC4((CGThumbnailListItem_o *)p_command, (int32_t)command, v8, v9);
  v10 = *p_command;
  if ( !*p_command
    || (BattleCommandData__setCombo(v10, combo, 2, 0), (v10 = *p_command) == 0)
    || (v10->fields.actionIndex = 3, BattleCommandData__ClearCommandCode(v10, 0), (v11 = *p_command) == 0) )
  {
    sub_1C32E7C(v10);
  }
  v11->fields.commandAssistId = 0;
  v11->fields.commandCardParam = 0;
}


void BattleLogicTask__setBackStep(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 6;
}


void BattleLogicTask__setBuffAddEnemy(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 19;
}


void BattleLogicTask__setBuffAddPlayer(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 18;
}


void BattleLogicTask__setCamera(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 27;
}


void BattleLogicTask__setCheckEntryFunction(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 24;
}


void BattleLogicTask__setComboOrder(BattleLogicTask_o *this, int32_t type, bool grdflg, const MethodInfo *method)
{
  this->fields.ordertype = type;
  this->fields.actiontype = 8;
  this->fields.grandoderflg = grdflg;
}


void BattleLogicTask__setComboOrder_46861980(
        BattleLogicTask_o *this,
        int32_t type,
        bool grdflg,
        const MethodInfo *method)
{
  this->fields.ordertype = type;
  this->fields.actiontype = 8;
  this->fields.grandoderflg = grdflg;
}


void BattleLogicTask__setCommandSpell(
        BattleLogicTask_o *this,
        int32_t skillId,
        System_Int32_array *targetlist,
        System_Int32_array *ptTarget,
        const MethodInfo *method)
{
  BattleSkillInfoData_o *v9; // x24
  struct BattleSkillInfoData_o **p_skillInfo; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct BattleSkillInfoData_o *skillInfo; // x0
  BattleSkillInfoData_c *klass; // x8
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C3AB53 & 1) == 0 )
  {
    sub_1C32C20(&BattleSkillInfoData_TypeInfo);
    byte_4C3AB53 = 1;
  }
  this->fields.actiontype = 9;
  v9 = (BattleSkillInfoData_o *)sub_1C32E6C(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v9, 0);
  this->fields.skillInfo = v9;
  p_skillInfo = &this->fields.skillInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.skillInfo, (int32_t)v9, v11, v12);
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo
    || (klass = skillInfo->klass,
        skillInfo->fields.type = 2,
        skillInfo = (struct BattleSkillInfoData_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, _QWORD, const MethodInfo *))klass->vtable._4_set_skillId.methodPtr)(
                                                      skillInfo,
                                                      (unsigned int)skillId,
                                                      klass->vtable._4_set_skillId.method),
        !*p_skillInfo) )
  {
    sub_1C32E7C(skillInfo);
  }
  (*p_skillInfo)->fields.skilllv = 1;
  this->fields.targetIdlist = targetlist;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetIdlist, (int32_t)targetlist, v15, v16);
  this->fields.ptTarget = ptTarget;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.ptTarget, (int32_t)ptTarget, v17, v18);
}


void BattleLogicTask__setDead(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 14;
}


void BattleLogicTask__setEndTurnEnemy(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 12;
}


void BattleLogicTask__setEndTurnPlayer(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 11;
}


void BattleLogicTask__setEnemyLogicDead(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 16;
}


void BattleLogicTask__setEnemyMasterCutIn(BattleLogicTask_o *this, int32_t cutInType, const MethodInfo *method)
{
  this->fields.actiontype = 41;
  this->fields.status = cutInType;
}


void BattleLogicTask__setLoadImmediateEntryServant(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 42;
}


void BattleLogicTask__setMessage(
        BattleLogicTask_o *this,
        System_String_o *message,
        int32_t type,
        const MethodInfo *method)
{
  struct System_String_o **p_motionMessage; // x20

  this->fields.motionMessage = message;
  p_motionMessage = &this->fields.motionMessage;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.motionMessage, (int32_t)message, type, method);
  *((_DWORD *)p_motionMessage - 2) = type;
}


void BattleLogicTask__setPlayMoiton(BattleLogicTask_o *this, System_String_o *motionName, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_String_o **p_motionName; // x0

  this->fields.motionName = motionName;
  p_motionName = &this->fields.motionName;
  *((_DWORD *)p_motionName - 18) = 10;
  sub_1C32BC4((CGThumbnailListItem_o *)p_motionName, (int32_t)motionName, (int32_t)method, v3);
}


void BattleLogicTask__setProcBuffDead(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 15;
}


void BattleLogicTask__setReservationSkill(
        BattleLogicTask_o *this,
        BattleSkillInfoData_o *inSkillInfo,
        bool inflgCheckUseSKill,
        const MethodInfo *method)
{
  struct BattleSkillInfoData_o **p_skillInfo; // x19
  bool v5; // w20

  this->fields.skillInfo = inSkillInfo;
  p_skillInfo = &this->fields.skillInfo;
  v5 = inflgCheckUseSKill;
  this->fields.actiontype = 25;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.skillInfo, (int32_t)inSkillInfo, inflgCheckUseSKill, method);
  *((_BYTE *)p_skillInfo + 8) = v5;
}


void BattleLogicTask__setResurrection(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 13;
}


void BattleLogicTask__setStartTurnEnemy(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 21;
}


void BattleLogicTask__setStartTurnPlayer(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 20;
}


void BattleLogicTask__setSystem(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 7;
}


void BattleLogicTask__setTarget(BattleLogicTask_o *this, int32_t targetId, const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C3AB51 & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    byte_4C3AB51 = 1;
  }
  v5 = sub_1C32CC8(int___TypeInfo, 1);
  if ( !v5 )
    sub_1C32E7C(0);
  if ( !*(_DWORD *)(v5 + 24) )
    sub_1C32E84(v5);
  *(_DWORD *)(v5 + 32) = targetId;
  this->fields.targetIdlist = (struct System_Int32_array *)v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetIdlist, v5, v6, v7);
}


void BattleLogicTask__setTargetObject(BattleLogicTask_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.targetObject = obj;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)obj, (int32_t)method, v3);
}


void BattleLogicTask__setTarget_46861452(
        BattleLogicTask_o *this,
        System_Int32_array *targetIdlist,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.targetIdlist = targetIdlist;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetIdlist, (int32_t)targetIdlist, (int32_t)method, v3);
}


void BattleLogicTask__set_AiTimingPriority(BattleLogicTask_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._AiTimingPriority_k__BackingField = value;
}


void BattleLogicTask__set_OverwriteTdData(
        BattleLogicTask_o *this,
        OverwriteTreasureDeviceData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._OverwriteTdData_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._OverwriteTdData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleLogicTask__set_PairDisplayTriggerIntervalBuff(
        BattleLogicTask_o *this,
        System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o value,
        const MethodInfo *method)
{
  this->fields._PairDisplayTriggerIntervalBuff_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._PairDisplayTriggerIntervalBuff_k__BackingField,
    0,
    (int32_t)value.fields.value,
    method);
}


void BattleLogicTask___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3AB61 & 1) == 0 )
  {
    sub_1C32C20(&BattleLogicTask___c_TypeInfo);
    byte_4C3AB61 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(BattleLogicTask___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicTask___c_TypeInfo->static_fields->__9 = (struct BattleLogicTask___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)BattleLogicTask___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleLogicTask___c___ctor(BattleLogicTask___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicTask___c___SetDisplayTriggerIntervalBuff_b__138_0(
        BattleLogicTask___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.intervalData != 0;
}


void BattleLogicTask___c___SetDisplayTriggerIntervalBuff_b__138_1(
        BattleLogicTask___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  BattleBuffData_BuffData__SetIntervalOtherTiming(x, 0);
}