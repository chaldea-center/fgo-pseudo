void __fastcall BattleLogicTask___ctor(BattleLogicTask_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_48E5359 & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, method);
    byte_48E5359 = 1;
  }
  v3 = (struct System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  this->fields.targetIdlist = v3;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.targetIdlist, (int32_t)v3, v4, v5);
  this->fields.flgCheckUseSKill = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicTask__AfterCreateAction(
        BattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  struct BaseTaskInterruptProcess_o *interruptProc; // x0

  interruptProc = this->fields.interruptProc;
  if ( interruptProc )
    ((void (__fastcall *)(struct BaseTaskInterruptProcess_o *, BattleLogic_o *, void *))interruptProc->klass->vtable._4_AfterCreateAction.method)(
      interruptProc,
      logic,
      interruptProc->klass[1]._1.image);
}


BattleLogicTask_o *__fastcall BattleLogicTask__CloneSkillTask(
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
  __int64 v16; // x1
  const MethodInfo *v17; // x6
  const MethodInfo *v18; // x3

  if ( (byte_48E5361 & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask_TypeInfo, skillInfo);
    byte_48E5361 = 1;
  }
  v9 = 32LL;
  if ( targetSwapExec )
    v10 = 40LL;
  else
    v10 = 32LL;
  if ( !targetSwapExec )
    v9 = 40LL;
  v11 = *(System_Int32_array **)((char *)&this->klass + v10);
  v12 = *(System_Int32_array **)((char *)&this->klass + v9);
  v13 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v13, v14);
  if ( !v13
    || (BattleLogicTask__setActionSkill(
          v13,
          skillInfo,
          v11,
          v12,
          this->fields.checkAlive,
          this->fields.checkRevengeId,
          v17),
        !skillInfo) )
  {
    sub_1B00F28(v15, v16);
  }
  BattleLogicTask__setActor(v13, actorType, skillInfo->fields.svtUniqueId, v18);
  return v13;
}


int32_t __fastcall BattleLogicTask__ConvertActorToActionState(BattleLogicTask_o *this, const MethodInfo *method)
{
  int32_t actortype; // w8

  actortype = this->fields.actortype;
  if ( actortype == 1 )
    return 2;
  else
    return 2 * (actortype == 5);
}


System_Int32_array *__fastcall BattleLogicTask__GetGimmickIndexArray(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.gimmickIndexArray;
}


BattleLogicTask_array *__fastcall BattleLogicTask__GetRelayTasksAfterSetIntervalBuff(
        BattleLogicTask_o *this,
        BattleLogicTask_array *relayTasks,
        const MethodInfo *method)
{
  BattleLogicTask_array *v3; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 IsNullOrEmpty; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  BattleActionData_o *v11; // x19
  BattleActionData_o *v12; // x21
  __int64 v13; // x20
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  ServantStatusBattleListViewItem_o *m_Items; // x0
  int32_t v20; // w1
  __int64 v22; // x0

  v3 = relayTasks;
  if ( (byte_48E5360 & 1) == 0 )
  {
    sub_1B00CCC(&BattleActionData_TypeInfo, relayTasks);
    sub_1B00CCC(&BattleLogicTask___TypeInfo, v5);
    sub_1B00CCC(&UpdateIntervalBuffViewBattleLogicTask_TypeInfo, v6);
    byte_48E5360 = 1;
  }
  if ( BattleLogicTask__get_ExistDisplayTriggerIntervalBuff(this, (const MethodInfo *)relayTasks) )
  {
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v3, 0LL);
    if ( (IsNullOrEmpty & 1) != 0 )
    {
      v11 = (BattleActionData_o *)sub_1B00F18(BattleActionData_TypeInfo);
      BattleActionData___ctor(v11, 0LL);
      if ( v11 )
      {
        v12 = BattleActionData__AddDisplayTriggerIntervalBuff(v11, this, 0LL);
        v3 = (BattleLogicTask_array *)sub_1B00D74(BattleLogicTask___TypeInfo, 1LL);
        v13 = sub_1B00F18(UpdateIntervalBuffViewBattleLogicTask_TypeInfo);
        BattleLogicTask___ctor((BattleLogicTask_o *)v13, v14);
        *(_DWORD *)(v13 + 48) = 58;
        *(_QWORD *)(v13 + 240) = v12;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v13 + 240), (int32_t)v12, v15, v16);
        *(_BYTE *)(v13 + 209) = 1;
        if ( v3 )
        {
          IsNullOrEmpty = sub_1B00E08(v13, v3->obj.klass->_1.element_class);
          if ( !IsNullOrEmpty )
          {
            v22 = sub_1B00F4C(0LL);
            sub_1B00DF4(v22, 0LL);
          }
          if ( v3->max_length )
          {
            v3->m_Items[0] = (BattleLogicTask_o *)v13;
            m_Items = (ServantStatusBattleListViewItem_o *)v3->m_Items;
            v20 = v13;
LABEL_14:
            sub_1B00C70(m_Items, v20, v17, v18);
            return v3;
          }
LABEL_17:
          sub_1B00F30(IsNullOrEmpty, v8);
        }
      }
    }
    else if ( v3 )
    {
      if ( !v3->max_length )
        goto LABEL_17;
      IsNullOrEmpty = (__int64)v3->m_Items[0];
      if ( IsNullOrEmpty )
      {
        *(struct System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o *)(IsNullOrEmpty + 216) = this->fields._PairDisplayTriggerIntervalBuff_k__BackingField;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(IsNullOrEmpty + 216), 0, v9, v10);
        m_Items = (ServantStatusBattleListViewItem_o *)&this->fields._PairDisplayTriggerIntervalBuff_k__BackingField;
        v20 = 0;
        this->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.key = 0LL;
        this->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.value = 0LL;
        goto LABEL_14;
      }
    }
    sub_1B00F28(IsNullOrEmpty, v8);
  }
  return v3;
}


System_Int32_array *__fastcall BattleLogicTask__GetSkillAddIndiv(BattleLogicTask_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  result = (System_Int32_array *)this->fields.skillInfo;
  if ( result )
    return BattleSkillInfoData__GetAddIndiv((BattleSkillInfoData_o *)result, 0LL);
  return result;
}


void __fastcall BattleLogicTask__InterruptAction(
        BattleLogicTask_o *this,
        BattleActionData_o *addAction,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  ;
}


bool __fastcall BattleLogicTask__IsDoNotAct(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 69;
}


bool __fastcall BattleLogicTask__IsEnemyLogicPlayerTurnEndAfter(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 39;
}


bool __fastcall BattleLogicTask__IsEnemyLogicShiftAfter(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 63;
}


bool __fastcall BattleLogicTask__IsGimmick(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.gimmickIndexArray != 0LL;
}


bool __fastcall BattleLogicTask__IsTargetTypeEnemy(BattleLogicTask_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  TreasureDvcLvEntity_o *Entity; // x20
  struct System_Int32_array *funcId; // x20
  __int64 v10; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x19
  unsigned __int64 v12; // x21

  if ( (byte_48E535D & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v3);
    sub_1B00CCC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_48E535D = 1;
  }
  if ( (this->fields.actiontype & 0xFFFFFFFE) != 4 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL
    || (Entity = TreasureDvcLvMaster__GetEntity(
                   (TreasureDvcLvMaster_o *)Instance,
                   this->fields.treasureDvcId,
                   this->fields.tresureDvcLv,
                   0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_FunctionMaster___),
        !Entity)
    || (funcId = Entity->fields.funcId) == 0LL )
  {
LABEL_18:
    sub_1B00F28(Instance, v7);
  }
  v10 = *(_QWORD *)&funcId->max_length;
  if ( (int)v10 < 1 )
    return 0;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v12 = 0LL;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)v10 )
      sub_1B00F30(Instance, v7);
    if ( !v11 )
      goto LABEL_18;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 v11,
                 funcId->m_Items[v12 + 1],
                 (const MethodInfo_2FE6A4C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    if ( Instance )
    {
      if ( HIDWORD(Instance[1].monitor) == 4 )
        return 1;
    }
    LODWORD(v10) = funcId->max_length;
    if ( (__int64)++v12 >= (int)v10 )
      return 0;
  }
}


BattleActionData_o *__fastcall BattleLogicTask__MakeAction(
        BattleLogicTask_o *task,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  if ( !task )
    sub_1B00F28(0LL, logic);
  return (BattleActionData_o *)((__int64 (__fastcall *)(BattleLogicTask_o *, BattleLogic_o *, Il2CppMethodPointer))task->klass->vtable._6_MakeActionData.method)(
                                 task,
                                 logic,
                                 task->klass->vtable._7_AfterCreateAction.methodPtr);
}


BattleActionData_o *__fastcall BattleLogicTask__MakeActionData(
        BattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  return 0LL;
}


BattleLogicTask_array *__fastcall BattleLogicTask__MakeActionTask(
        BattleLogicTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  if ( (byte_48E5362 & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask___TypeInfo, logic);
    byte_48E5362 = 1;
  }
  return (BattleLogicTask_array *)sub_1B00D74(BattleLogicTask___TypeInfo, 0LL);
}


void __fastcall BattleLogicTask__SetAiPriority(BattleLogicTask_o *this, int32_t priority, const MethodInfo *method)
{
  this->fields._AiTimingPriority_k__BackingField = priority;
}


void __fastcall BattleLogicTask__SetDisplayTriggerIntervalBuff(
        BattleLogicTask_o *this,
        BattleServantData_o *svtData,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BattleLogicTask___c_c *v15; // x0
  System_Func_object__bool__o *_9__124_0; // x22
  Il2CppObject *v17; // x23
  struct BattleLogicTask___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Collections_ICollection_o *v22; // x21
  bool IsNullOrEmpty; // w0
  BattleLogicTask___c_c *v24; // x0
  System_Action_object__o *_9__124_1; // x22
  Il2CppObject *v26; // x23
  struct BattleLogicTask___c_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  const MethodInfo_32FB63C *v30; // x4
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o v33; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v34; // 0:x0.16

  if ( (byte_48E535F & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_BattleBuffData_BuffData__TypeInfo, svtData);
    sub_1B00CCC(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v7);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v8);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v9);
    sub_1B00CCC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v10);
    sub_1B00CCC(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData_____ctor__,
      v11);
    sub_1B00CCC(&Method_BattleLogicTask___c__SetDisplayTriggerIntervalBuff_b__124_0__, v12);
    sub_1B00CCC(&Method_BattleLogicTask___c__SetDisplayTriggerIntervalBuff_b__124_1__, v13);
    sub_1B00CCC(&BattleLogicTask___c_TypeInfo, v14);
    byte_48E535F = 1;
  }
  v15 = BattleLogicTask___c_TypeInfo;
  if ( !BattleLogicTask___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicTask___c_TypeInfo);
    v15 = BattleLogicTask___c_TypeInfo;
  }
  _9__124_0 = (System_Func_object__bool__o *)v15->static_fields->__9__124_0;
  if ( !_9__124_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = BattleLogicTask___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__124_0 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__124_0,
      v17,
      Method_BattleLogicTask___c__SetDisplayTriggerIntervalBuff_b__124_0__,
      0LL);
    static_fields = BattleLogicTask___c_TypeInfo->static_fields;
    static_fields->__9__124_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__124_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__124_0, (int32_t)_9__124_0, v19, v20);
  }
  v21 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)buffArray,
          (System_Func_TSource__bool__o *)_9__124_0,
          (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v22 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_object_(
                                              v21,
                                              (const MethodInfo_2D976BC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v22, 0LL);
  if ( svtData && !IsNullOrEmpty )
  {
    v24 = BattleLogicTask___c_TypeInfo;
    if ( !BattleLogicTask___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicTask___c_TypeInfo);
      v24 = BattleLogicTask___c_TypeInfo;
    }
    _9__124_1 = (System_Action_object__o *)v24->static_fields->__9__124_1;
    if ( !_9__124_1 )
    {
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = BattleLogicTask___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v24->static_fields->__9;
      _9__124_1 = (System_Action_object__o *)sub_1B00F18(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_object____ctor(
        _9__124_1,
        v26,
        Method_BattleLogicTask___c__SetDisplayTriggerIntervalBuff_b__124_1__,
        0LL);
      v27 = BattleLogicTask___c_TypeInfo->static_fields;
      v27->__9__124_1 = (struct System_Action_BattleBuffData_BuffData__o *)_9__124_1;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v27->__9__124_1, (int32_t)_9__124_1, v28, v29);
    }
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)v22,
      (System_Action_T__o *)_9__124_1,
      (const MethodInfo_2D50464 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    v34.fields.key = (Il2CppObject *)&v33;
    v34.fields.value = (Il2CppObject *)svtData;
    v33 = (struct System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o)0LL;
    System_Collections_Generic_KeyValuePair_object__object____ctor(
      v34,
      (Il2CppObject *)v22,
      (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData_____ctor__,
      v30);
    this->fields._PairDisplayTriggerIntervalBuff_k__BackingField = v33;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&this->fields._PairDisplayTriggerIntervalBuff_k__BackingField,
      0,
      v31,
      v32);
  }
}


void __fastcall BattleLogicTask__SetDoNotAct(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 69;
}


void __fastcall BattleLogicTask__SetGimmickIndexArray(
        BattleLogicTask_o *this,
        System_Int32_array *indexArray,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.gimmickIndexArray = indexArray;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.gimmickIndexArray,
    (int32_t)indexArray,
    (int32_t)method,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicTask__SetOverwriteTreasureDevice(
        BattleLogicTask_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  OverwriteTreasureDeviceData_o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_48E5358 & 1) == 0 )
  {
    sub_1B00CCC(&OverwriteTreasureDeviceData_TypeInfo, *(_QWORD *)&id);
    byte_48E5358 = 1;
  }
  v7 = (OverwriteTreasureDeviceData_o *)sub_1B00F18(OverwriteTreasureDeviceData_TypeInfo);
  OverwriteTreasureDeviceData___ctor(v7, id, lv, 0LL);
  this->fields._OverwriteTdData_k__BackingField = v7;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields._OverwriteTdData_k__BackingField, (int32_t)v7, v8, v9);
}


void __fastcall BattleLogicTask__SetPlayFieldMotion(
        BattleLogicTask_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct System_String_o **p_motionName; // x0

  this->fields.motionName = name;
  p_motionName = &this->fields.motionName;
  *((_DWORD *)p_motionName - 14) = 44;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p_motionName, (int32_t)name, (int32_t)method, v3);
}


bool __fastcall BattleLogicTask__checkActorId(
        BattleLogicTask_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
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
    if ( !actorIdlist->max_length )
      goto LABEL_12;
    v4 = actorIdlist->m_Items[1];
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
  if ( !v6->max_length )
LABEL_12:
    sub_1B00F30(this, task);
  v7 = v6->m_Items[1];
  return v4 == v7;
}


bool __fastcall BattleLogicTask__checkTargetId(
        BattleLogicTask_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  struct System_Int32_array *targetIdlist; // x8
  __int64 v4; // x10
  struct System_Int32_array *v5; // x9
  __int64 v6; // x11

  if ( !task )
    return 0;
  targetIdlist = this->fields.targetIdlist;
  if ( !targetIdlist )
    goto LABEL_10;
  v4 = *(_QWORD *)&targetIdlist->max_length;
  if ( !v4 )
    return 0;
  v5 = task->fields.targetIdlist;
  if ( !v5 )
LABEL_10:
    sub_1B00F28(this, task);
  v6 = *(_QWORD *)&v5->max_length;
  if ( !v6 )
    return 0;
  if ( !(_DWORD)v4 || !(_DWORD)v6 )
    sub_1B00F30(this, task);
  return targetIdlist->m_Items[1] == v5->m_Items[1];
}


int32_t __fastcall BattleLogicTask__getActorId(BattleLogicTask_o *this, const MethodInfo *method)
{
  struct System_Int32_array *actorIdlist; // x8

  actorIdlist = this->fields.actorIdlist;
  if ( !actorIdlist )
    return -1;
  if ( !actorIdlist->max_length )
    sub_1B00F30(this, method);
  return actorIdlist->m_Items[1];
}


BattleComboData_o *__fastcall BattleLogicTask__getCombo(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.combo;
}


BattleCommandData_o *__fastcall BattleLogicTask__getCommand(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.command;
}


int32_t __fastcall BattleLogicTask__getTarget(BattleLogicTask_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetIdlist; // x8

  targetIdlist = this->fields.targetIdlist;
  if ( !targetIdlist )
    sub_1B00F28(this, method);
  if ( !targetIdlist->max_length )
    sub_1B00F30(this, method);
  return targetIdlist->m_Items[1];
}


System_Int32_array *__fastcall BattleLogicTask__getTargetlist(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.targetIdlist;
}


int32_t __fastcall BattleLogicTask__get_AiTimingPriority(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields._AiTimingPriority_k__BackingField;
}


bool __fastcall BattleLogicTask__get_ExistDisplayTriggerIntervalBuff(BattleLogicTask_o *this, const MethodInfo *method)
{
  if ( (byte_48E535E & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Value__,
      method);
    byte_48E535E = 1;
  }
  return !BasicHelper__IsNullOrEmpty(
            (System_Collections_ICollection_o *)this->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.value,
            0LL);
}


OverwriteTreasureDeviceData_o *__fastcall BattleLogicTask__get_OverwriteTdData(
        BattleLogicTask_o *this,
        const MethodInfo *method)
{
  return this->fields._OverwriteTdData_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o __fastcall BattleLogicTask__get_PairDisplayTriggerIntervalBuff(
        BattleLogicTask_o *this,
        const MethodInfo *method)
{
  struct BattleBuffData_BuffData_array *value; // x1
  struct BattleServantData_o *key; // x0 OVERLAPPED
  System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o result; // 0:x0.16

  value = this->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.value;
  key = this->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.key;
  result.fields.value = value;
  result.fields.key = key;
  return result;
}


bool __fastcall BattleLogicTask__isAddAttack(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 2;
}


bool __fastcall BattleLogicTask__isArts(BattleLogicTask_o *this, const MethodInfo *method)
{
  return BattleCommand__isARTS(this->fields.ordertype, 0LL);
}


bool __fastcall BattleLogicTask__isBackStep(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 6;
}


bool __fastcall BattleLogicTask__isBuster(BattleLogicTask_o *this, const MethodInfo *method)
{
  return BattleCommand__isBUSTER(this->fields.ordertype, 0LL);
}


bool __fastcall BattleLogicTask__isCheck(BattleLogicTask_o *this, int32_t ckType, const MethodInfo *method)
{
  return this->fields.actiontype == ckType;
}


bool __fastcall BattleLogicTask__isCheckEntryFunction(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 24;
}


bool __fastcall BattleLogicTask__isComboOrder(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 8;
}


bool __fastcall BattleLogicTask__isCommandAction(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 1;
}


bool __fastcall BattleLogicTask__isCommandSpell(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 9;
}


bool __fastcall BattleLogicTask__isDead(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 14;
}


bool __fastcall BattleLogicTask__isEnemyLogicDead(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 16;
}


bool __fastcall BattleLogicTask__isGrandOrder(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.grandoderflg;
}


bool __fastcall BattleLogicTask__isPlayMotion(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 10;
}


bool __fastcall BattleLogicTask__isProcBuffDead(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 15;
}


bool __fastcall BattleLogicTask__isQuick(BattleLogicTask_o *this, const MethodInfo *method)
{
  return BattleCommand__isQUICK(this->fields.ordertype, 0LL);
}


bool __fastcall BattleLogicTask__isReservationSkill(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 25;
}


bool __fastcall BattleLogicTask__isResurrection(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 13;
}


bool __fastcall BattleLogicTask__isSKill(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 3;
}


bool __fastcall BattleLogicTask__isTreasureDvc(BattleLogicTask_o *this, const MethodInfo *method)
{
  return (this->fields.actiontype & 0xFFFFFFFE) == 4;
}


bool __fastcall BattleLogicTask__isTurnEndEnemy(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 12;
}


bool __fastcall BattleLogicTask__isTurnEndPlayer(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 11;
}


void __fastcall BattleLogicTask__setActionCommand(
        BattleLogicTask_o *this,
        BattleComboData_o *combo,
        BattleCommandData_o *command,
        int32_t index,
        const MethodInfo *method)
{
  struct BattleCommandData_o **p_command; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1

  this->fields.actiontype = 1;
  this->fields.combo = combo;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.combo, (int32_t)combo, (int32_t)command, index);
  this->fields.command = command;
  p_command = &this->fields.command;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p_command, (int32_t)command, v10, v11);
  if ( !*p_command )
    sub_1B00F28(0LL, v12);
  BattleCommandData__setCombo(*p_command, combo, index, 0LL);
}


void __fastcall BattleLogicTask__setActionOverwriteTreasureDvc(
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


void __fastcall BattleLogicTask__setActionSkill(
        BattleLogicTask_o *this,
        BattleSkillInfoData_o *skillInfo,
        System_Int32_array *targetlist,
        System_Int32_array *ptTarget,
        bool checkAlive,
        bool checkRevengeId,
        const MethodInfo *method)
{
  BattleLogicTask_o *v7; // x21
  bool v10; // w22
  bool v11; // w23
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3

  v7 = this;
  this->fields.actiontype = 3;
  this->fields.skillInfo = skillInfo;
  v10 = checkAlive;
  v11 = checkRevengeId;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.skillInfo,
    (int32_t)skillInfo,
    (int32_t)targetlist,
    (int32_t)ptTarget);
  v7->fields.targetIdlist = targetlist;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v7->fields.targetIdlist, (int32_t)targetlist, v12, v13);
  v7->fields.ptTarget = ptTarget;
  v7 = (BattleLogicTask_o *)((char *)v7 + 40);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)v7, (int32_t)ptTarget, v14, v15);
  BYTE1(v7->fields.ptTarget) = v10;
  BYTE1(v7->fields.status) = v11;
}


void __fastcall BattleLogicTask__setActionTreasureDvc(
        BattleLogicTask_o *this,
        int32_t treDvcId,
        int32_t lv,
        const MethodInfo *method)
{
  this->fields.actiontype = 4;
  this->fields.treasureDvcId = treDvcId;
  this->fields.tresureDvcLv = lv;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicTask__setActor(
        BattleLogicTask_o *this,
        int32_t type,
        int32_t uniqueID,
        const MethodInfo *method)
{
  struct System_Int32_array *v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Int32_array **p_actorIdlist; // x19

  if ( (byte_48E535A & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, *(_QWORD *)&type);
    byte_48E535A = 1;
  }
  v7 = (struct System_Int32_array *)sub_1B00D74(int___TypeInfo, 1LL);
  if ( !v7 )
    sub_1B00F28(0LL, v8);
  if ( !v7->max_length )
    sub_1B00F30(v7, v7);
  v7->m_Items[1] = uniqueID;
  this->fields.actorIdlist = v7;
  p_actorIdlist = &this->fields.actorIdlist;
  *((_DWORD *)p_actorIdlist - 2) = type;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p_actorIdlist, (int32_t)v7, v9, v10);
}


void __fastcall BattleLogicTask__setActor_42255416(
        BattleLogicTask_o *this,
        int32_t type,
        System_Int32_array *uniqueIDList,
        const MethodInfo *method)
{
  struct System_Int32_array **p_actorIdlist; // x0

  this->fields.actorIdlist = uniqueIDList;
  p_actorIdlist = &this->fields.actorIdlist;
  *((_DWORD *)p_actorIdlist - 2) = type;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)p_actorIdlist,
    (int32_t)uniqueIDList,
    (int32_t)uniqueIDList,
    (int32_t)method);
}


void __fastcall BattleLogicTask__setAddAttackCommand(
        BattleLogicTask_o *this,
        BattleComboData_o *combo,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  struct BattleCommandData_o **p_command; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  BattleCommandData_o *v11; // x0
  struct BattleCommandData_o *v12; // x8

  this->fields.actiontype = 2;
  this->fields.combo = combo;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.combo,
    (int32_t)combo,
    (int32_t)command,
    (int32_t)method);
  this->fields.command = command;
  p_command = &this->fields.command;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p_command, (int32_t)command, v8, v9);
  v11 = *p_command;
  if ( !*p_command
    || (BattleCommandData__setCombo(v11, combo, 2, 0LL), (v11 = *p_command) == 0LL)
    || (v11->fields.actionIndex = 3, BattleCommandData__ClearCommandCode(v11, 0LL), (v12 = *p_command) == 0LL) )
  {
    sub_1B00F28(v11, v10);
  }
  v12->fields.commandAssistId = 0;
  v12->fields.commandCardParam = 0;
}


void __fastcall BattleLogicTask__setBackStep(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 6;
}


void __fastcall BattleLogicTask__setBuffAddEnemy(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 19;
}


void __fastcall BattleLogicTask__setBuffAddPlayer(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 18;
}


void __fastcall BattleLogicTask__setCamera(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 27;
}


void __fastcall BattleLogicTask__setCheckEntryFunction(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 24;
}


void __fastcall BattleLogicTask__setComboOrder(
        BattleLogicTask_o *this,
        int32_t type,
        bool grdflg,
        const MethodInfo *method)
{
  this->fields.ordertype = type;
  this->fields.actiontype = 8;
  this->fields.grandoderflg = grdflg;
}


void __fastcall BattleLogicTask__setComboOrder_42256088(
        BattleLogicTask_o *this,
        int32_t type,
        bool grdflg,
        const MethodInfo *method)
{
  this->fields.ordertype = type;
  this->fields.actiontype = 8;
  this->fields.grandoderflg = grdflg;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicTask__setCommandSpell(
        BattleLogicTask_o *this,
        int32_t skillId,
        System_Int32_array *targetlist,
        System_Int32_array *ptTarget,
        const MethodInfo *method)
{
  BattleSkillInfoData_o *v9; // x24
  struct BattleSkillInfoData_o **p_skillInfo; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  struct BattleSkillInfoData_o *skillInfo; // x0
  BattleSkillInfoData_c *klass; // x8
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_48E535C & 1) == 0 )
  {
    sub_1B00CCC(&BattleSkillInfoData_TypeInfo, *(_QWORD *)&skillId);
    byte_48E535C = 1;
  }
  this->fields.actiontype = 9;
  v9 = (BattleSkillInfoData_o *)sub_1B00F18(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v9, 0LL);
  this->fields.skillInfo = v9;
  p_skillInfo = &this->fields.skillInfo;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.skillInfo, (int32_t)v9, v11, v12);
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo
    || (klass = skillInfo->klass,
        skillInfo->fields.type = 2,
        skillInfo = (struct BattleSkillInfoData_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))klass->vtable._4_set_skillId.method)(
                                                      skillInfo,
                                                      (unsigned int)skillId,
                                                      klass->vtable._5_get_skillId.methodPtr),
        !*p_skillInfo) )
  {
    sub_1B00F28(skillInfo, v13);
  }
  (*p_skillInfo)->fields.skilllv = 1;
  this->fields.targetIdlist = targetlist;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.targetIdlist, (int32_t)targetlist, v16, v17);
  this->fields.ptTarget = ptTarget;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.ptTarget, (int32_t)ptTarget, v18, v19);
}


void __fastcall BattleLogicTask__setDead(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 14;
}


void __fastcall BattleLogicTask__setEndTurnEnemy(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 12;
}


void __fastcall BattleLogicTask__setEndTurnPlayer(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 11;
}


void __fastcall BattleLogicTask__setEnemyLogicDead(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 16;
}


void __fastcall BattleLogicTask__setEnemyMasterCutIn(
        BattleLogicTask_o *this,
        int32_t cutInType,
        const MethodInfo *method)
{
  this->fields.actiontype = 41;
  this->fields.status = cutInType;
}


void __fastcall BattleLogicTask__setLoadImmediateEntryServant(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 42;
}


void __fastcall BattleLogicTask__setMessage(
        BattleLogicTask_o *this,
        System_String_o *message,
        int32_t type,
        const MethodInfo *method)
{
  struct System_String_o **p_motionMessage; // x20

  this->fields.motionMessage = message;
  p_motionMessage = &this->fields.motionMessage;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.motionMessage, (int32_t)message, type, (int32_t)method);
  *((_DWORD *)p_motionMessage - 2) = type;
}


void __fastcall BattleLogicTask__setPlayMoiton(
        BattleLogicTask_o *this,
        System_String_o *motionName,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct System_String_o **p_motionName; // x0

  this->fields.motionName = motionName;
  p_motionName = &this->fields.motionName;
  *((_DWORD *)p_motionName - 14) = 10;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p_motionName, (int32_t)motionName, (int32_t)method, v3);
}


void __fastcall BattleLogicTask__setProcBuffDead(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 15;
}


void __fastcall BattleLogicTask__setReservationSkill(
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
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.skillInfo,
    (int32_t)inSkillInfo,
    inflgCheckUseSKill,
    (int32_t)method);
  *((_BYTE *)p_skillInfo + 8) = v5;
}


void __fastcall BattleLogicTask__setResurrection(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 13;
}


void __fastcall BattleLogicTask__setStartTurnEnemy(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 21;
}


void __fastcall BattleLogicTask__setStartTurnPlayer(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 20;
}


void __fastcall BattleLogicTask__setSystem(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicTask__setTarget(BattleLogicTask_o *this, int32_t targetId, const MethodInfo *method)
{
  struct System_Int32_array *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_48E535B & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, *(_QWORD *)&targetId);
    byte_48E535B = 1;
  }
  v5 = (struct System_Int32_array *)sub_1B00D74(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_1B00F28(0LL, v6);
  if ( !v5->max_length )
    sub_1B00F30(v5, v5);
  v5->m_Items[1] = targetId;
  this->fields.targetIdlist = v5;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.targetIdlist, (int32_t)v5, v7, v8);
}


void __fastcall BattleLogicTask__setTargetObject(
        BattleLogicTask_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.targetObject = obj;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)obj, (int32_t)method, v3);
}


void __fastcall BattleLogicTask__setTarget_42255560(
        BattleLogicTask_o *this,
        System_Int32_array *targetIdlist,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.targetIdlist = targetIdlist;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.targetIdlist,
    (int32_t)targetIdlist,
    (int32_t)method,
    v3);
}


void __fastcall BattleLogicTask__set_AiTimingPriority(BattleLogicTask_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._AiTimingPriority_k__BackingField = value;
}


void __fastcall BattleLogicTask__set_OverwriteTdData(
        BattleLogicTask_o *this,
        OverwriteTreasureDeviceData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._OverwriteTdData_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._OverwriteTdData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleLogicTask__set_PairDisplayTriggerIntervalBuff(
        BattleLogicTask_o *this,
        System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o value,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_PairDisplayTriggerIntervalBuff_k__BackingField; // x0

  this->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.key = value.fields.key;
  p_PairDisplayTriggerIntervalBuff_k__BackingField = (ServantStatusBattleListViewItem_o *)&this->fields._PairDisplayTriggerIntervalBuff_k__BackingField;
  p_PairDisplayTriggerIntervalBuff_k__BackingField->monitor = value.fields.value;
  sub_1B00C70(p_PairDisplayTriggerIntervalBuff_k__BackingField, 0, (int32_t)value.fields.value, (int32_t)method);
}


void __fastcall BattleLogicTask___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E5363 & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask___c_TypeInfo, v1);
    byte_48E5363 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(BattleLogicTask___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicTask___c_TypeInfo->static_fields->__9 = (struct BattleLogicTask___c_o *)v2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)BattleLogicTask___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleLogicTask___c___ctor(BattleLogicTask___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicTask___c___SetDisplayTriggerIntervalBuff_b__124_0(
        BattleLogicTask___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
  return x->fields.intervalData != 0LL;
}


void __fastcall BattleLogicTask___c___SetDisplayTriggerIntervalBuff_b__124_1(
        BattleLogicTask___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
  BattleBuffData_BuffData__SetIntervalOtherTiming(x, 0LL);
}