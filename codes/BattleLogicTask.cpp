void __fastcall BattleLogicTask___ctor(BattleLogicTask_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BCA887 & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, method);
    byte_4BCA887 = 1;
  }
  v3 = (struct System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 0LL);
  this->fields.targetIdlist = v3;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.targetIdlist, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.flgCheckUseSKill = 1;
  *(_WORD *)&this->fields.IsResetPrevAttackInfo = 257;
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

  if ( (byte_4BCA892 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleLogicTask_TypeInfo, skillInfo);
    byte_4BCA892 = 1;
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
  v13 = (BattleLogicTask_o *)sub_1C1AE20(BattleLogicTask_TypeInfo);
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
    sub_1C1AE30(v15, v16);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  BattleActionData_o *v15; // x19
  BattleActionData_o *v16; // x21
  __int64 v17; // x20
  const MethodInfo *v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o *m_Items; // x0
  int64_t v32; // x1
  __int64 v34; // x0

  v3 = relayTasks;
  if ( (byte_4BCA891 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleActionData_TypeInfo, relayTasks);
    sub_1C1ABD4(&BattleLogicTask___TypeInfo, v5);
    sub_1C1ABD4(&UpdateIntervalBuffViewBattleLogicTask_TypeInfo, v6);
    byte_4BCA891 = 1;
  }
  if ( BattleLogicTask__get_ExistDisplayTriggerIntervalBuff(this, (const MethodInfo *)relayTasks) )
  {
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v3, 0LL);
    if ( (IsNullOrEmpty & 1) != 0 )
    {
      v15 = (BattleActionData_o *)sub_1C1AE20(BattleActionData_TypeInfo);
      BattleActionData___ctor(v15, 0LL);
      if ( v15 )
      {
        v16 = BattleActionData__AddDisplayTriggerIntervalBuff(v15, this, 0LL);
        v3 = (BattleLogicTask_array *)sub_1C1AC7C(BattleLogicTask___TypeInfo, 1LL);
        v17 = sub_1C1AE20(UpdateIntervalBuffViewBattleLogicTask_TypeInfo);
        BattleLogicTask___ctor((BattleLogicTask_o *)v17, v18);
        *(_DWORD *)(v17 + 48) = 58;
        *(_QWORD *)(v17 + 256) = v16;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v17 + 256), (int64_t)v16, v19, v20, v21, v22, v23, v24);
        *(_BYTE *)(v17 + 228) = 1;
        if ( v3 )
        {
          IsNullOrEmpty = sub_1C1AD10(v17, v3->obj.klass->_1.element_class);
          if ( !IsNullOrEmpty )
          {
            v34 = sub_1C1AE54(0LL);
            sub_1C1ACFC(v34, 0LL);
          }
          if ( v3->max_length )
          {
            v3->m_Items[0] = (BattleLogicTask_o *)v17;
            m_Items = (struct System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o *)v3->m_Items;
            v32 = v17;
LABEL_14:
            sub_1C1AB78((PartyOrganizationUtility_o *)m_Items, v32, v25, v26, v27, v28, v29, v30);
            return v3;
          }
LABEL_17:
          sub_1C1AE38(IsNullOrEmpty, v8);
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
        *(struct System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o *)(IsNullOrEmpty + 232) = this->fields._PairDisplayTriggerIntervalBuff_k__BackingField;
        sub_1C1AB78((PartyOrganizationUtility_o *)(IsNullOrEmpty + 232), 0LL, v9, v10, v11, v12, v13, v14);
        m_Items = &this->fields._PairDisplayTriggerIntervalBuff_k__BackingField;
        v32 = 0LL;
        this->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.key = 0LL;
        this->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.value = 0LL;
        goto LABEL_14;
      }
    }
    sub_1C1AE30(IsNullOrEmpty, v8);
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


bool __fastcall BattleLogicTask__IsAddAfterDeadTask(BattleLogicTask_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall BattleLogicTask__IsAddLastDeadTask(BattleLogicTask_o *this, const MethodInfo *method)
{
  return 0;
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

  if ( (byte_4BCA88E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v3);
    sub_1C1ABD4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BCA88E = 1;
  }
  if ( (this->fields.actiontype & 0xFFFFFFFE) != 4 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL
    || (Entity = TreasureDvcLvMaster__GetEntity(
                   (TreasureDvcLvMaster_o *)Instance,
                   this->fields.treasureDvcId,
                   this->fields.tresureDvcLv,
                   0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_FunctionMaster___),
        !Entity)
    || (funcId = Entity->fields.funcId) == 0LL )
  {
LABEL_18:
    sub_1C1AE30(Instance, v7);
  }
  v10 = *(_QWORD *)&funcId->max_length;
  if ( (int)v10 < 1 )
    return 0;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v12 = 0LL;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)v10 )
      sub_1C1AE38(Instance, v7);
    if ( !v11 )
      goto LABEL_18;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 v11,
                 funcId->m_Items[v12 + 1],
                 (const MethodInfo_3248678 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
    sub_1C1AE30(0LL, logic);
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
  if ( (byte_4BCA893 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleLogicTask___TypeInfo, logic);
    byte_4BCA893 = 1;
  }
  return (BattleLogicTask_array *)sub_1C1AC7C(BattleLogicTask___TypeInfo, 0LL);
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
  System_Func_object__bool__o *_9__130_0; // x22
  Il2CppObject *v17; // x23
  struct BattleLogicTask___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_ICollection_o *v26; // x21
  bool IsNullOrEmpty; // w0
  BattleLogicTask___c_c *v28; // x0
  System_Action_object__o *_9__130_1; // x22
  Il2CppObject *v30; // x23
  struct BattleLogicTask___c_StaticFields *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  const MethodInfo_35740C0 *v38; // x4
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o v45; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v46; // 0:x0.16

  if ( (byte_4BCA890 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_BattleBuffData_BuffData__TypeInfo, svtData);
    sub_1C1ABD4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v7);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v8);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v9);
    sub_1C1ABD4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v10);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData_____ctor__,
      v11);
    sub_1C1ABD4(&Method_BattleLogicTask___c__SetDisplayTriggerIntervalBuff_b__130_0__, v12);
    sub_1C1ABD4(&Method_BattleLogicTask___c__SetDisplayTriggerIntervalBuff_b__130_1__, v13);
    sub_1C1ABD4(&BattleLogicTask___c_TypeInfo, v14);
    byte_4BCA890 = 1;
  }
  v15 = BattleLogicTask___c_TypeInfo;
  if ( !BattleLogicTask___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicTask___c_TypeInfo);
    v15 = BattleLogicTask___c_TypeInfo;
  }
  _9__130_0 = (System_Func_object__bool__o *)v15->static_fields->__9__130_0;
  if ( !_9__130_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = BattleLogicTask___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__130_0 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__130_0,
      v17,
      Method_BattleLogicTask___c__SetDisplayTriggerIntervalBuff_b__130_0__,
      0LL);
    static_fields = BattleLogicTask___c_TypeInfo->static_fields;
    static_fields->__9__130_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__130_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__130_0,
      (int64_t)_9__130_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)buffArray,
          (System_Func_TSource__bool__o *)_9__130_0,
          (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v26 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_object_(
                                              v25,
                                              (const MethodInfo_2FD8E70 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v26, 0LL);
  if ( svtData && !IsNullOrEmpty )
  {
    v28 = BattleLogicTask___c_TypeInfo;
    if ( !BattleLogicTask___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicTask___c_TypeInfo);
      v28 = BattleLogicTask___c_TypeInfo;
    }
    _9__130_1 = (System_Action_object__o *)v28->static_fields->__9__130_1;
    if ( !_9__130_1 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = BattleLogicTask___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v28->static_fields->__9;
      _9__130_1 = (System_Action_object__o *)sub_1C1AE20(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_object____ctor(
        _9__130_1,
        v30,
        Method_BattleLogicTask___c__SetDisplayTriggerIntervalBuff_b__130_1__,
        0LL);
      v31 = BattleLogicTask___c_TypeInfo->static_fields;
      v31->__9__130_1 = (struct System_Action_BattleBuffData_BuffData__o *)_9__130_1;
      sub_1C1AB78((PartyOrganizationUtility_o *)&v31->__9__130_1, (int64_t)_9__130_1, v32, v33, v34, v35, v36, v37);
    }
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)v26,
      (System_Action_T__o *)_9__130_1,
      (const MethodInfo_2F8C3EC *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    v46.fields.key = (Il2CppObject *)&v45;
    v46.fields.value = (Il2CppObject *)svtData;
    v45 = (struct System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o)0LL;
    System_Collections_Generic_KeyValuePair_object__object____ctor(
      v46,
      (Il2CppObject *)v26,
      (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData_____ctor__,
      v38);
    this->fields._PairDisplayTriggerIntervalBuff_k__BackingField = v45;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields._PairDisplayTriggerIntervalBuff_k__BackingField,
      0LL,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.gimmickIndexArray = indexArray;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.gimmickIndexArray,
    (int64_t)indexArray,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


BattleLogicTask_o *__fastcall BattleLogicTask__SetInheritParamToAddInvokeSkillTask(
        BattleLogicTask_o *this,
        BattleLogicTask_o *baseTask,
        const MethodInfo *method)
{
  if ( !baseTask )
    sub_1C1AE30(this, 0LL);
  this->fields.isSkipStep = baseTask->fields.isSkipStep;
  this->fields.IsResetPrevAttackInfo = baseTask->fields.IsResetPrevAttackInfo;
  this->fields.IsResetWasAttackTargetId = baseTask->fields.IsResetWasAttackTargetId;
  this->fields.IsSkipRelationTask = baseTask->fields.IsSkipRelationTask;
  return this;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicTask__SetOverwriteTreasureDevice(
        BattleLogicTask_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  OverwriteTreasureDeviceData_o *v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BCA886 & 1) == 0 )
  {
    sub_1C1ABD4(&OverwriteTreasureDeviceData_TypeInfo, *(_QWORD *)&id);
    byte_4BCA886 = 1;
  }
  v7 = (OverwriteTreasureDeviceData_o *)sub_1C1AE20(OverwriteTreasureDeviceData_TypeInfo);
  OverwriteTreasureDeviceData___ctor(v7, id, lv, 0LL);
  this->fields._OverwriteTdData_k__BackingField = v7;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._OverwriteTdData_k__BackingField,
    (int64_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void __fastcall BattleLogicTask__SetPlayFieldMotion(
        BattleLogicTask_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o **p_motionName; // x0

  this->fields.motionName = name;
  p_motionName = &this->fields.motionName;
  *((_DWORD *)p_motionName - 18) = 44;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_motionName, (int64_t)name, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall BattleLogicTask__SetShowBattlePointEffectFlag(
        BattleLogicTask_o *this,
        BattleLogicTask_o *checker,
        const MethodInfo *method)
{
  if ( !this )
    sub_1C1AE30(0LL, checker);
  this->fields.isShowBattlePointEffect = this == checker && checker != 0LL;
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
    sub_1C1AE38(this, task);
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
    sub_1C1AE30(this, task);
  v6 = *(_QWORD *)&v5->max_length;
  if ( !v6 )
    return 0;
  if ( !(_DWORD)v4 || !(_DWORD)v6 )
    sub_1C1AE38(this, task);
  return targetIdlist->m_Items[1] == v5->m_Items[1];
}


int32_t __fastcall BattleLogicTask__getActorId(BattleLogicTask_o *this, const MethodInfo *method)
{
  struct System_Int32_array *actorIdlist; // x8

  actorIdlist = this->fields.actorIdlist;
  if ( !actorIdlist )
    return -1;
  if ( !actorIdlist->max_length )
    sub_1C1AE38(this, method);
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
    sub_1C1AE30(this, method);
  if ( !targetIdlist->max_length )
    sub_1C1AE38(this, method);
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
  if ( (byte_4BCA88F & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Value__,
      method);
    byte_4BCA88F = 1;
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
  int32_t ordertype; // w19

  if ( (byte_4BCA88B & 1) == 0 )
  {
    sub_1C1ABD4(&BattleCommand_TypeInfo, method);
    byte_4BCA88B = 1;
  }
  ordertype = this->fields.ordertype;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__isARTS(ordertype, 0LL);
}


bool __fastcall BattleLogicTask__isBackStep(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 6;
}


bool __fastcall BattleLogicTask__isBuster(BattleLogicTask_o *this, const MethodInfo *method)
{
  int32_t ordertype; // w19

  if ( (byte_4BCA88C & 1) == 0 )
  {
    sub_1C1ABD4(&BattleCommand_TypeInfo, method);
    byte_4BCA88C = 1;
  }
  ordertype = this->fields.ordertype;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__isBUSTER(ordertype, 0LL);
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
  int32_t ordertype; // w19

  if ( (byte_4BCA88D & 1) == 0 )
  {
    sub_1C1ABD4(&BattleCommand_TypeInfo, method);
    byte_4BCA88D = 1;
  }
  ordertype = this->fields.ordertype;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__isQUICK(ordertype, 0LL);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattleCommandData_o **p_command; // x22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1

  this->fields.actiontype = 1;
  this->fields.combo = combo;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.combo,
    (int64_t)combo,
    (int64_t)command,
    index,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.command = command;
  p_command = &this->fields.command;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_command, (int64_t)command, v13, v14, v15, v16, v17, v18);
  if ( !*p_command )
    sub_1C1AE30(0LL, v19);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicTask__setActionSkill(
        BattleLogicTask_o *this,
        BattleSkillInfoData_o *skillInfo,
        System_Int32_array *targetlist,
        System_Int32_array *ptTarget,
        bool checkAlive,
        bool checkRevengeId,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
  BattleLogicTask_o *v8; // x21
  bool v11; // w22
  bool v12; // w23
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  v8 = this;
  this->fields.actiontype = 3;
  this->fields.skillInfo = skillInfo;
  v11 = checkAlive;
  v12 = checkRevengeId;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.skillInfo,
    (int64_t)skillInfo,
    (int64_t)targetlist,
    (int32_t)ptTarget,
    (System_String_o *)checkAlive,
    (BattleSetupInfo_o *)checkRevengeId,
    (FollowerInfo_o *)method,
    v7);
  v8->fields.targetIdlist = targetlist;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v8->fields.targetIdlist, (int64_t)targetlist, v13, v14, v15, v16, v17, v18);
  v8->fields.ptTarget = ptTarget;
  v8 = (BattleLogicTask_o *)((char *)v8 + 40);
  sub_1C1AB78((PartyOrganizationUtility_o *)v8, (int64_t)ptTarget, v19, v20, v21, v22, v23, v24);
  BYTE1(v8->fields.ptTarget) = v11;
  BYTE1(v8->fields.status) = v12;
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Int32_array **p_actorIdlist; // x19

  if ( (byte_4BCA888 & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, *(_QWORD *)&type);
    byte_4BCA888 = 1;
  }
  v7 = (struct System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 1LL);
  if ( !v7 )
    sub_1C1AE30(0LL, v8);
  if ( !v7->max_length )
    sub_1C1AE38(v7, v7);
  v7->m_Items[1] = uniqueID;
  this->fields.actorIdlist = v7;
  p_actorIdlist = &this->fields.actorIdlist;
  *((_DWORD *)p_actorIdlist - 2) = type;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_actorIdlist, (int64_t)v7, v9, v10, v11, v12, v13, v14);
}


void __fastcall BattleLogicTask__setActor_44926020(
        BattleLogicTask_o *this,
        int32_t type,
        System_Int32_array *uniqueIDList,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Int32_array **p_actorIdlist; // x0

  this->fields.actorIdlist = uniqueIDList;
  p_actorIdlist = &this->fields.actorIdlist;
  *((_DWORD *)p_actorIdlist - 2) = type;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)p_actorIdlist,
    (int64_t)uniqueIDList,
    (int64_t)uniqueIDList,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleLogicTask__setAddAttackCommand(
        BattleLogicTask_o *this,
        BattleComboData_o *combo,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattleCommandData_o **p_command; // x19
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  BattleCommandData_o *v19; // x0
  struct BattleCommandData_o *v20; // x8

  this->fields.actiontype = 2;
  this->fields.combo = combo;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.combo,
    (int64_t)combo,
    (int64_t)command,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.command = command;
  p_command = &this->fields.command;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_command, (int64_t)command, v12, v13, v14, v15, v16, v17);
  v19 = *p_command;
  if ( !*p_command
    || (BattleCommandData__setCombo(v19, combo, 2, 0LL), (v19 = *p_command) == 0LL)
    || (v19->fields.actionIndex = 3, BattleCommandData__ClearCommandCode(v19, 0LL), (v20 = *p_command) == 0LL) )
  {
    sub_1C1AE30(v19, v18);
  }
  v20->fields.commandAssistId = 0;
  v20->fields.commandCardParam = 0;
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


void __fastcall BattleLogicTask__setComboOrder_44927104(
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x1
  struct BattleSkillInfoData_o *skillInfo; // x0
  BattleSkillInfoData_c *klass; // x8
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4BCA88A & 1) == 0 )
  {
    sub_1C1ABD4(&BattleSkillInfoData_TypeInfo, *(_QWORD *)&skillId);
    byte_4BCA88A = 1;
  }
  this->fields.actiontype = 9;
  v9 = (BattleSkillInfoData_o *)sub_1C1AE20(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v9, 0LL);
  this->fields.skillInfo = v9;
  p_skillInfo = &this->fields.skillInfo;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.skillInfo, (int64_t)v9, v11, v12, v13, v14, v15, v16);
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
    sub_1C1AE30(skillInfo, v17);
  }
  (*p_skillInfo)->fields.skilllv = 1;
  this->fields.targetIdlist = targetlist;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.targetIdlist,
    (int64_t)targetlist,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.ptTarget = ptTarget;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.ptTarget, (int64_t)ptTarget, v26, v27, v28, v29, v30, v31);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicTask__setMessage(
        BattleLogicTask_o *this,
        System_String_o *message,
        int32_t type,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o **p_motionMessage; // x20

  this->fields.motionMessage = message;
  p_motionMessage = &this->fields.motionMessage;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.motionMessage,
    (int64_t)message,
    *(int64_t *)&type,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  *((_DWORD *)p_motionMessage - 2) = type;
}


void __fastcall BattleLogicTask__setPlayMoiton(
        BattleLogicTask_o *this,
        System_String_o *motionName,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o **p_motionName; // x0

  this->fields.motionName = motionName;
  p_motionName = &this->fields.motionName;
  *((_DWORD *)p_motionName - 18) = 10;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_motionName, (int64_t)motionName, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall BattleLogicTask__setProcBuffDead(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 15;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicTask__setReservationSkill(
        BattleLogicTask_o *this,
        BattleSkillInfoData_o *inSkillInfo,
        bool inflgCheckUseSKill,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattleSkillInfoData_o **p_skillInfo; // x19
  bool v9; // w20

  this->fields.skillInfo = inSkillInfo;
  p_skillInfo = &this->fields.skillInfo;
  v9 = inflgCheckUseSKill;
  this->fields.actiontype = 25;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.skillInfo,
    (int64_t)inSkillInfo,
    inflgCheckUseSKill,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  *((_BYTE *)p_skillInfo + 8) = v9;
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BCA889 & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, *(_QWORD *)&targetId);
    byte_4BCA889 = 1;
  }
  v5 = (struct System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_1C1AE30(0LL, v6);
  if ( !v5->max_length )
    sub_1C1AE38(v5, v5);
  v5->m_Items[1] = targetId;
  this->fields.targetIdlist = v5;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.targetIdlist, (int64_t)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall BattleLogicTask__setTargetObject(
        BattleLogicTask_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.targetObject = obj;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.targetObject,
    (int64_t)obj,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleLogicTask__setTarget_44926164(
        BattleLogicTask_o *this,
        System_Int32_array *targetIdlist,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.targetIdlist = targetIdlist;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.targetIdlist,
    (int64_t)targetIdlist,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._OverwriteTdData_k__BackingField = value;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._OverwriteTdData_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleLogicTask__set_PairDisplayTriggerIntervalBuff(
        BattleLogicTask_o *this,
        System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o value,
        const MethodInfo *method)
{
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  PartyOrganizationUtility_o *p_PairDisplayTriggerIntervalBuff_k__BackingField; // x0

  this->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.key = value.fields.key;
  p_PairDisplayTriggerIntervalBuff_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._PairDisplayTriggerIntervalBuff_k__BackingField;
  p_PairDisplayTriggerIntervalBuff_k__BackingField->monitor = value.fields.value;
  sub_1C1AB78(
    p_PairDisplayTriggerIntervalBuff_k__BackingField,
    0LL,
    (int64_t)value.fields.value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6);
}


void __fastcall BattleLogicTask___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BCA894 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleLogicTask___c_TypeInfo, v1);
    byte_4BCA894 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(BattleLogicTask___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicTask___c_TypeInfo->static_fields->__9 = (struct BattleLogicTask___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)BattleLogicTask___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall BattleLogicTask___c___ctor(BattleLogicTask___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicTask___c___SetDisplayTriggerIntervalBuff_b__130_0(
        BattleLogicTask___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return x->fields.intervalData != 0LL;
}


void __fastcall BattleLogicTask___c___SetDisplayTriggerIntervalBuff_b__130_1(
        BattleLogicTask___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  BattleBuffData_BuffData__SetIntervalOtherTiming(x, 0LL);
}