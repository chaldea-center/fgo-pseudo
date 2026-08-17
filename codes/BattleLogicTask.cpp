void BattleLogicTask___ctor(BattleLogicTask_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5973D2D & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5973D2D = 1;
  }
  v3 = (struct System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  this->fields.targetIdlist = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.targetIdlist, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.flgCheckUseSKill = 1;
  this->fields.IsResetFunctionedFunctionIds = 1;
  this->fields.playerAttackPreselectTargetUniqueId = -1;
  *(_WORD *)&this->fields.IsResetPrevAttackInfo = 257;
  this->fields.entryAllAtOnceOrder = 0x7FFFFFFF;
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicTask__AddEntryAllAtOnceUniqueId(BattleLogicTask_o *this, int32_t uniqueId, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *entryAllAtOnceUniqueIdList; // x0
  System_Collections_Generic_List_int__o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  if ( (byte_5973D3E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5973D3E = 1;
  }
  entryAllAtOnceUniqueIdList = this->fields.entryAllAtOnceUniqueIdList;
  if ( !entryAllAtOnceUniqueIdList )
  {
    v6 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v6,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    this->fields.entryAllAtOnceUniqueIdList = v6;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.entryAllAtOnceUniqueIdList,
      (int32_t)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    entryAllAtOnceUniqueIdList = this->fields.entryAllAtOnceUniqueIdList;
    if ( !entryAllAtOnceUniqueIdList )
      goto LABEL_9;
  }
  items = entryAllAtOnceUniqueIdList->fields._items;
  v14 = Method_System_Collections_Generic_List_int__Add__;
  ++entryAllAtOnceUniqueIdList->fields._version;
  if ( !items )
LABEL_9:
    sub_2213CDC(entryAllAtOnceUniqueIdList, *(_QWORD *)&uniqueId);
  size = entryAllAtOnceUniqueIdList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      entryAllAtOnceUniqueIdList,
      uniqueId,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    entryAllAtOnceUniqueIdList->fields._size = size + 1;
    items->m_Items[size] = uniqueId;
  }
}


void BattleLogicTask__AddUseUpHateData(BattleLogicTask_o *this, UpHateData_o *upHateData, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleLogicTask_o *v9; // x20
  System_Collections_Generic_List_object__o *useUpHateDataList; // x8
  System_Collections_Generic_List_object__o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x9
  _QWORD *v19; // x10
  __int64 size; // x11
  Il2CppClass **v21; // x0

  v9 = this;
  if ( (byte_5973D3F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UpHateData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UpHateData___ctor__);
    this = (BattleLogicTask_o *)sub_2213A60(&System_Collections_Generic_List_UpHateData__TypeInfo);
    byte_5973D3F = 1;
  }
  if ( upHateData )
  {
    useUpHateDataList = (System_Collections_Generic_List_object__o *)v9->fields.useUpHateDataList;
    if ( !useUpHateDataList )
    {
      v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UpHateData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v11,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UpHateData___ctor__);
      v9->fields.useUpHateDataList = (struct System_Collections_Generic_List_UpHateData__o *)v11;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v9->fields.useUpHateDataList,
        (int32_t)v11,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      useUpHateDataList = (System_Collections_Generic_List_object__o *)v9->fields.useUpHateDataList;
      if ( !useUpHateDataList )
        goto LABEL_11;
    }
    items = useUpHateDataList->fields._items;
    v19 = Method_System_Collections_Generic_List_UpHateData__Add__;
    ++useUpHateDataList->fields._version;
    if ( !items )
LABEL_11:
      sub_2213CDC(this, upHateData);
    size = useUpHateDataList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        useUpHateDataList,
        (Il2CppObject *)upHateData,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      useUpHateDataList->fields._size = size + 1;
      v21[4] = (Il2CppClass *)upHateData;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(v21 + 4),
        (int32_t)upHateData,
        (System_String_o *)method,
        v3,
        v4,
        v5,
        v6,
        v7);
    }
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
  System_Int32_array *v11; // x23
  System_Int32_array *v12; // x24
  BattleLogicTask_o *v13; // x22
  const MethodInfo *v14; // x1
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x6
  const MethodInfo *v18; // x3

  if ( (byte_5973D39 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicTask_TypeInfo);
    byte_5973D39 = 1;
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
  v13 = (BattleLogicTask_o *)sub_2213CCC(BattleLogicTask_TypeInfo);
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
    sub_2213CDC(v15, v16);
  }
  BattleLogicTask__setActor(v13, actorType, skillInfo->fields.svtUniqueId, v18);
  return v13;
}


int32_t BattleLogicTask__ConvertActorToActionState(BattleLogicTask_o *this, const MethodInfo *method)
{
  return 2 * ((this->fields.actortype & 0xFFFFFFFB) == 1);
}


System_Int32_array *BattleLogicTask__GetGimmickAnimTypes(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.gimmickAnimTypes;
}


bool BattleLogicTask__GetGimmickFixedReelOrder(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.gimmickFixedReelOrder;
}


System_Int32_array *BattleLogicTask__GetGimmickIndexArray(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.gimmickIndexArray;
}


System_String_o *BattleLogicTask__GetGimmickObjName(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.gimmickObjName;
}


System_Int32_array *BattleLogicTask__GetGimmickReelIcons(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.gimmickReelIcons;
}


System_Object_array *BattleLogicTask__GetGimmickResultVoices(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.gimmickResultVoices;
}


System_String_array *BattleLogicTask__GetGimmickStartVoices(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.gimmickStartVoices;
}


int32_t BattleLogicTask__GetGimmickSvtId(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.gimmickSvtId;
}


BattleLogicTask_array *BattleLogicTask__GetRelayTasksAfterSetIntervalBuff(
        BattleLogicTask_o *this,
        BattleLogicTask_array *relayTasks,
        const MethodInfo *method)
{
  BattleLogicTask_array *v3; // x19
  __int64 IsNullOrEmpty; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  BattleActionData_o *v13; // x19
  BattleActionData_o *v14; // x21
  __int64 v15; // x20
  const MethodInfo *v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int32_t v30; // w1
  MissionNaviTransitionBoardItem_o *m_Items; // x0
  BattleLogicTask_o *v32; // x8
  __int64 v34; // x0

  v3 = relayTasks;
  if ( (byte_5973D38 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleLogicTask___TypeInfo);
    sub_2213A60(&UpdateIntervalBuffViewBattleLogicTask_TypeInfo);
    byte_5973D38 = 1;
  }
  if ( BattleLogicTask__get_ExistDisplayTriggerIntervalBuff(this, (const MethodInfo *)relayTasks) )
  {
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v3, 0);
    if ( (IsNullOrEmpty & 1) != 0 )
    {
      v13 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
      BattleActionData___ctor(v13, 0);
      if ( v13 )
      {
        v14 = BattleActionData__AddDisplayTriggerIntervalBuff(v13, this, 0);
        v3 = (BattleLogicTask_array *)sub_2213B20(BattleLogicTask___TypeInfo, 1);
        v15 = sub_2213CCC(UpdateIntervalBuffViewBattleLogicTask_TypeInfo);
        BattleLogicTask___ctor((BattleLogicTask_o *)v15, v16);
        *(_DWORD *)(v15 + 48) = 58;
        *(_QWORD *)(v15 + 376) = v14;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 376), (int32_t)v14, v17, v18, v19, v20, v21, v22);
        *(_BYTE *)(v15 + 266) = 1;
        if ( v3 )
        {
          IsNullOrEmpty = sub_2213BB4(v15, v3->obj.klass->_1.element_class);
          if ( !IsNullOrEmpty )
          {
            v34 = sub_2213D00(0, v23);
            sub_2213BA0(v34, 0);
          }
          if ( LODWORD(v3->max_length) )
          {
            v30 = v15;
            v3->m_Items[0] = (BattleLogicTask_o *)v15;
            m_Items = (MissionNaviTransitionBoardItem_o *)v3->m_Items;
LABEL_14:
            sub_2213A04(m_Items, v30, v24, v25, v26, v27, v28, v29);
            return v3;
          }
LABEL_17:
          sub_2213CE4(IsNullOrEmpty);
        }
      }
    }
    else if ( v3 )
    {
      if ( !LODWORD(v3->max_length) )
        goto LABEL_17;
      v32 = v3->m_Items[0];
      if ( v32 )
      {
        v32->fields._PairDisplayTriggerIntervalBuff_k__BackingField = this->fields._PairDisplayTriggerIntervalBuff_k__BackingField;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v32->fields._PairDisplayTriggerIntervalBuff_k__BackingField,
          0,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12);
        m_Items = (MissionNaviTransitionBoardItem_o *)&this->fields._PairDisplayTriggerIntervalBuff_k__BackingField;
        v30 = 0;
        this->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.key = 0;
        this->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.value = 0;
        goto LABEL_14;
      }
    }
    sub_2213CDC(IsNullOrEmpty, v6);
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
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *InterruptActionList; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5973D3C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData__ToArray__);
    byte_5973D3C = 1;
  }
  if ( addAction && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.InterruptActionList, 0) )
  {
    InterruptActionList = (System_Collections_Generic_List_object__o *)this->fields.InterruptActionList;
    if ( !InterruptActionList
      || (InterruptActionList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                               InterruptActionList,
                                                                               (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleActionData__ToArray__),
          !perf) )
    {
      sub_2213CDC(InterruptActionList, v7);
    }
    BattlePerformance__addActionData(perf, (BattleActionData_array *)InterruptActionList, 0);
    this->fields.InterruptActionList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.InterruptActionList, 0, v9, v10, v11, v12, v13, v14);
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


bool BattleLogicTask__IsBattleScriptTask(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 75 || this->fields._IsBattleScriptRelationTask_k__BackingField;
}


bool BattleLogicTask__IsCommandBattle(BattleLogicTask_o *this, const MethodInfo *method)
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
  __int64 v4; // x1
  TreasureDvcLvEntity_o *Entity; // x20
  struct System_Int32_array *funcId; // x20
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  unsigned __int64 v9; // x21
  int monitor_high; // w8

  if ( (byte_5973D35 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973D35 = 1;
  }
  if ( (this->fields.actiontype & 0xFFFFFFFE) == 4 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    if ( !Instance )
      goto LABEL_19;
    Entity = TreasureDvcLvMaster__GetEntity(
               (TreasureDvcLvMaster_o *)Instance,
               this->fields.treasureDvcId,
               this->fields.tresureDvcLv,
               0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_FunctionMaster___);
    if ( !Entity )
      goto LABEL_19;
    funcId = Entity->fields.funcId;
    if ( !funcId )
      goto LABEL_19;
    max_length = funcId->max_length;
    if ( (int)max_length >= 1 )
    {
      v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)max_length )
          sub_2213CE4(Instance);
        if ( !v8 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     funcId->m_Items[v9],
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( Instance )
        {
          monitor_high = HIDWORD(Instance[1].monitor);
          Instance = (Il2CppObject *)(&dword_0 + 1);
          if ( monitor_high == 4 || monitor_high == 35 )
            return (char)Instance;
        }
        LODWORD(max_length) = funcId->max_length;
        if ( (__int64)++v9 >= (int)max_length )
          goto LABEL_17;
      }
LABEL_19:
      sub_2213CDC(Instance, v4);
    }
  }
LABEL_17:
  LOBYTE(Instance) = 0;
  return (char)Instance;
}


BattleActionData_o *BattleLogicTask__MakeAction(
        BattleLogicTask_o *task,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  if ( !task )
    sub_2213CDC(0, logic);
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
  if ( (byte_5973D3D & 1) == 0 )
  {
    sub_2213A60(&BattleLogicTask___TypeInfo);
    byte_5973D3D = 1;
  }
  return (BattleLogicTask_array *)sub_2213B20(BattleLogicTask___TypeInfo, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicTask__RevertUnusedNoNeedUpHateBuff(
        BattleLogicTask_o *this,
        bool isNeedUpHate,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *useUpHateDataList; // x19
  BattleLogicTask___c_c *v6; // x0
  struct BattleLogicTask___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__177_0; // x20
  Il2CppObject *v9; // x21
  struct BattleLogicTask___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5973D40 & 1) == 0 )
  {
    sub_2213A60(&System_Action_UpHateData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UpHateData__ForEach__);
    sub_2213A60(&Method_BattleLogicTask___c__RevertUnusedNoNeedUpHateBuff_b__177_0__);
    sub_2213A60(&BattleLogicTask___c_TypeInfo);
    byte_5973D40 = 1;
  }
  if ( !isNeedUpHate )
  {
    useUpHateDataList = (System_Collections_Generic_List_object__o *)this->fields.useUpHateDataList;
    if ( useUpHateDataList )
    {
      v6 = BattleLogicTask___c_TypeInfo;
      if ( !*(&BattleLogicTask___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicTask___c_TypeInfo, isNeedUpHate);
        v6 = BattleLogicTask___c_TypeInfo;
      }
      static_fields = v6->static_fields;
      _9__177_0 = (System_Action_object__o *)static_fields->__9__177_0;
      if ( !_9__177_0 )
      {
        if ( !*(&v6->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v6, isNeedUpHate);
          static_fields = BattleLogicTask___c_TypeInfo->static_fields;
        }
        v9 = (Il2CppObject *)static_fields->__9;
        _9__177_0 = (System_Action_object__o *)sub_2213CCC(System_Action_UpHateData__TypeInfo);
        System_Action_object____ctor(
          _9__177_0,
          v9,
          Method_BattleLogicTask___c__RevertUnusedNoNeedUpHateBuff_b__177_0__,
          0);
        v10 = BattleLogicTask___c_TypeInfo->static_fields;
        v10->__9__177_0 = (struct System_Action_UpHateData__o *)_9__177_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v10->__9__177_0,
          (int32_t)_9__177_0,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
      }
      System_Collections_Generic_List_object___ForEach(
        useUpHateDataList,
        (System_Action_T__o *)_9__177_0,
        (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_UpHateData__ForEach__);
    }
  }
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
  struct BattleLogicTask___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__147_0; // x22
  Il2CppObject *v10; // x23
  struct BattleLogicTask___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_ICollection_o *v19; // x21
  bool IsNullOrEmpty; // w0
  __int64 v21; // x1
  BattleLogicTask___c_c *v22; // x0
  struct BattleLogicTask___c_StaticFields *v23; // x8
  System_Action_object__o *_9__147_1; // x22
  Il2CppObject *v25; // x23
  struct BattleLogicTask___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  const MethodInfo_43A0D68 *v33; // x4
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o v40; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v41; // 0:x0.16

  if ( (byte_5973D37 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_2213A60(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData_____ctor__);
    sub_2213A60(&Method_BattleLogicTask___c__SetDisplayTriggerIntervalBuff_b__147_0__);
    sub_2213A60(&Method_BattleLogicTask___c__SetDisplayTriggerIntervalBuff_b__147_1__);
    sub_2213A60(&BattleLogicTask___c_TypeInfo);
    byte_5973D37 = 1;
  }
  v7 = BattleLogicTask___c_TypeInfo;
  if ( !*(&BattleLogicTask___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicTask___c_TypeInfo, svtData);
    v7 = BattleLogicTask___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__147_0 = (System_Func_object__bool__o *)static_fields->__9__147_0;
  if ( !_9__147_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, svtData);
      static_fields = BattleLogicTask___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__147_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__147_0,
      v10,
      Method_BattleLogicTask___c__SetDisplayTriggerIntervalBuff_b__147_0__,
      0);
    v11 = BattleLogicTask___c_TypeInfo->static_fields;
    v11->__9__147_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__147_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__147_0, (int32_t)_9__147_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)buffArray,
          (System_Func_TSource__bool__o *)_9__147_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v19 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_object_(
                                              v18,
                                              (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v19, 0);
  if ( svtData && !IsNullOrEmpty )
  {
    v22 = BattleLogicTask___c_TypeInfo;
    if ( !*(&BattleLogicTask___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicTask___c_TypeInfo, v21);
      v22 = BattleLogicTask___c_TypeInfo;
    }
    v23 = v22->static_fields;
    _9__147_1 = (System_Action_object__o *)v23->__9__147_1;
    if ( !_9__147_1 )
    {
      if ( !*(&v22->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v22, v21);
        v23 = BattleLogicTask___c_TypeInfo->static_fields;
      }
      v25 = (Il2CppObject *)v23->__9;
      _9__147_1 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_object____ctor(
        _9__147_1,
        v25,
        Method_BattleLogicTask___c__SetDisplayTriggerIntervalBuff_b__147_1__,
        0);
      v26 = BattleLogicTask___c_TypeInfo->static_fields;
      v26->__9__147_1 = (struct System_Action_BattleBuffData_BuffData__o *)_9__147_1;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v26->__9__147_1,
        (int32_t)_9__147_1,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
    }
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)v19,
      (System_Action_T__o *)_9__147_1,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    v41.fields.key = (Il2CppObject *)&v40;
    v41.fields.value = (Il2CppObject *)svtData;
    v40 = (struct System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o)0LL;
    System_Collections_Generic_KeyValuePair_object__object____ctor(
      v41,
      (Il2CppObject *)v19,
      (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData_____ctor__,
      v33);
    this->fields._PairDisplayTriggerIntervalBuff_k__BackingField = v40;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._PairDisplayTriggerIntervalBuff_k__BackingField,
      0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
}


void BattleLogicTask__SetDoNotAct(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 69;
}


void BattleLogicTask__SetExistTargetLock(BattleLogicTask_o *this, BattleData_o *data, const MethodInfo *method)
{
  if ( !data )
    sub_2213CDC(this, 0);
  this->fields._ExistTargetLock_k__BackingField = BattleData__isTargetLock(data, 0);
}


void BattleLogicTask__SetGimmickIndexArray(
        BattleLogicTask_o *this,
        System_Int32_array *indexArray,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.gimmickIndexArray = indexArray;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.gimmickIndexArray,
    (int32_t)indexArray,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicTask__SetGimmickPerformanceData(
        BattleLogicTask_o *this,
        System_String_array *startVoices,
        System_Object_array *resultVoices,
        System_Int32_array *animTypes,
        System_String_o *objName,
        int32_t svtId,
        System_Int32_array *reelIcons,
        bool fixedReelOrder,
        const MethodInfo *method)
{
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  this->fields.gimmickStartVoices = startVoices;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.gimmickStartVoices,
    (int32_t)startVoices,
    (System_String_o *)resultVoices,
    (System_String_o *)animTypes,
    (int32_t)objName,
    svtId,
    (bool)reelIcons,
    fixedReelOrder);
  this->fields.gimmickResultVoices = resultVoices;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.gimmickResultVoices,
    (int32_t)resultVoices,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.gimmickAnimTypes = animTypes;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.gimmickAnimTypes,
    (int32_t)animTypes,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.gimmickObjName = objName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.gimmickObjName,
    (int32_t)objName,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.gimmickSvtId = svtId;
  this->fields.gimmickReelIcons = reelIcons;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.gimmickReelIcons,
    (int32_t)reelIcons,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields.gimmickFixedReelOrder = fixedReelOrder;
}


BattleLogicTask_o *BattleLogicTask__SetInheritParamToAddInvokeSkillTask(
        BattleLogicTask_o *this,
        BattleLogicTask_o *baseTask,
        const MethodInfo *method)
{
  bool IsResetPrevAttackInfo; // w9

  if ( !baseTask )
    sub_2213CDC(this, 0);
  IsResetPrevAttackInfo = baseTask->fields.IsResetPrevAttackInfo;
  this->fields.isSkipStep = baseTask->fields.isSkipStep;
  this->fields.IsResetPrevAttackInfo = IsResetPrevAttackInfo;
  *(_WORD *)&this->fields.IsResetWasAttackTargetId = *(_WORD *)&baseTask->fields.IsResetWasAttackTargetId;
  *(_WORD *)&this->fields.isFunctionedFunction = *(_WORD *)&baseTask->fields.isFunctionedFunction;
  return this;
}


void BattleLogicTask__SetInterruptAction(
        BattleLogicTask_o *this,
        BattleActionData_array *actions,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *InterruptActionList; // x0
  System_Collections_Generic_List_object__o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1

  if ( (byte_5973D3B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleActionData__TypeInfo);
    byte_5973D3B = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actions, 0) )
  {
    InterruptActionList = (System_Collections_Generic_List_object__o *)this->fields.InterruptActionList;
    if ( !InterruptActionList )
    {
      v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleActionData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v6,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleActionData___ctor__);
      this->fields.InterruptActionList = (struct System_Collections_Generic_List_BattleActionData__o *)v6;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.InterruptActionList,
        (int32_t)v6,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      InterruptActionList = (System_Collections_Generic_List_object__o *)this->fields.InterruptActionList;
      if ( !InterruptActionList )
        sub_2213CDC(0, v13);
    }
    System_Collections_Generic_List_object___AddRange(
      InterruptActionList,
      (System_Collections_Generic_IEnumerable_T__o *)actions,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleActionData__AddRange__);
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
  __int64 v9; // x1
  BattleActionData_o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x21
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  __int64 v20; // x0

  if ( (byte_5973D3A & 1) == 0 )
  {
    sub_2213A60(&BattleActionData___TypeInfo);
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleActionWaitCond_UntilChangeModelLoadComplete_TypeInfo);
    byte_5973D3A = 1;
  }
  if ( execActData
    && !BasicHelper__IsNullOrEmpty(
          (System_Collections_ICollection_o *)execActData->fields._ChangeModelList_k__BackingField,
          0) )
  {
    v5 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
    BattleActionData___ctor(v5, 0);
    ChangeModelList_k__BackingField = execActData->fields._ChangeModelList_k__BackingField;
    v7 = (BattleActionWaitCond_UntilChangeModelLoadComplete_o *)sub_2213CCC(BattleActionWaitCond_UntilChangeModelLoadComplete_TypeInfo);
    BattleActionWaitCond_UntilChangeModelLoadComplete___ctor(v7, ChangeModelList_k__BackingField, 0);
    if ( !v5
      || (v10 = BattleActionData__SetWaitCond(v5, (BattleActionWaitCond_Base_o *)v7, 0),
          (v8 = sub_2213B20(BattleActionData___TypeInfo, 1)) == 0) )
    {
      sub_2213CDC(v8, v9);
    }
    v17 = v8;
    if ( v10 )
    {
      v8 = sub_2213BB4(v10, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
      if ( !v8 )
      {
        v20 = sub_2213D00(0, v18);
        sub_2213BA0(v20, 0);
      }
    }
    if ( !*(_DWORD *)(v17 + 24) )
      sub_2213CE4(v8);
    *(_QWORD *)(v17 + 32) = v10;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 32), (int32_t)v10, v11, v12, v13, v14, v15, v16);
    BattleLogicTask__SetInterruptAction(this, (BattleActionData_array *)v17, v19);
  }
}


void BattleLogicTask__SetOverwriteTreasureDevice(
        BattleLogicTask_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  OverwriteTreasureDeviceData_o *v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5973D2C & 1) == 0 )
  {
    sub_2213A60(&OverwriteTreasureDeviceData_TypeInfo);
    byte_5973D2C = 1;
  }
  v7 = (OverwriteTreasureDeviceData_o *)sub_2213CCC(OverwriteTreasureDeviceData_TypeInfo);
  OverwriteTreasureDeviceData___ctor(v7, id, lv, 0);
  this->fields._OverwriteTdData_k__BackingField = v7;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OverwriteTdData_k__BackingField,
    (int32_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void BattleLogicTask__SetPlayFieldMotion(BattleLogicTask_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **p_motionName; // x0

  this->fields.motionName = name;
  p_motionName = &this->fields.motionName;
  *((_DWORD *)p_motionName - 18) = 44;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_motionName,
    (int32_t)name,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicTask__SetShowBattlePointEffectFlag(
        BattleLogicTask_o *this,
        BattleLogicTask_o *checker,
        const MethodInfo *method)
{
  if ( !this )
    sub_2213CDC(0, checker);
  this->fields.isShowBattlePointEffect = this == checker;
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
    sub_2213CE4(this);
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
    sub_2213CDC(this, task);
  v6 = v5->max_length;
  if ( !v6 )
    return 0;
  if ( !(_DWORD)max_length || !(_DWORD)v6 )
    sub_2213CE4(this);
  return targetIdlist->m_Items[0] == v5->m_Items[0];
}


int32_t BattleLogicTask__getActorId(BattleLogicTask_o *this, const MethodInfo *method)
{
  struct System_Int32_array *actorIdlist; // x8

  actorIdlist = this->fields.actorIdlist;
  if ( !actorIdlist )
    return -1;
  if ( !LODWORD(actorIdlist->max_length) )
    sub_2213CE4(this);
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
    sub_2213CDC(this, method);
  if ( !LODWORD(targetIdlist->max_length) )
    sub_2213CE4(this);
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
  if ( (byte_5973D36 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Value__);
    byte_5973D36 = 1;
  }
  return !BasicHelper__IsNullOrEmpty(
            (System_Collections_ICollection_o *)this->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.value,
            0);
}


bool BattleLogicTask__get_ExistTargetLock(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields._ExistTargetLock_k__BackingField;
}


bool BattleLogicTask__get_IsBattleScriptRelationTask(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields._IsBattleScriptRelationTask_k__BackingField;
}


bool BattleLogicTask__get_IsBuffTriggeredTask(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields._IsBuffTriggeredTask_k__BackingField;
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

  if ( (byte_5973D32 & 1) == 0 )
  {
    sub_2213A60(&BattleCommand_TypeInfo);
    byte_5973D32 = 1;
  }
  ordertype = this->fields.ordertype;
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, method);
  return BattleCommand__isARTS(ordertype, 0);
}


bool BattleLogicTask__isBackStep(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 6;
}


bool BattleLogicTask__isBuster(BattleLogicTask_o *this, const MethodInfo *method)
{
  int32_t ordertype; // w19

  if ( (byte_5973D33 & 1) == 0 )
  {
    sub_2213A60(&BattleCommand_TypeInfo);
    byte_5973D33 = 1;
  }
  ordertype = this->fields.ordertype;
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, method);
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

  if ( (byte_5973D34 & 1) == 0 )
  {
    sub_2213A60(&BattleCommand_TypeInfo);
    byte_5973D34 = 1;
  }
  ordertype = this->fields.ordertype;
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, method);
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
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BattleCommandData_o **p_command; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1

  this->fields.actiontype = 1;
  this->fields.combo = combo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.combo,
    (int32_t)combo,
    (System_String_o *)command,
    *(System_String_o **)&index,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.command = command;
  p_command = &this->fields.command;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_command, (int32_t)command, v13, v14, v15, v16, v17, v18);
  if ( !*p_command )
    sub_2213CDC(0, v19);
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
  this->fields.actiontype = 5;
  this->fields.counterOc = Oc;
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
  bool v7; // w7
  bool v12; // w23
  bool v13; // w24
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  char v16; // w4
  char v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  char v22; // w4
  char v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  DataManager_c *v27; // x0
  Il2CppObject *Master_object; // x0
  __int64 v29; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x21
  Il2CppObject *v31; // x8
  float v32; // s0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v12 = checkAlive;
  v13 = checkRevengeId;
  if ( (byte_5973D30 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    byte_5973D30 = 1;
  }
  entity = 0;
  this->fields.actiontype = 3;
  this->fields.skillInfo = skillInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillInfo,
    (int32_t)skillInfo,
    (System_String_o *)targetlist,
    (System_String_o *)ptTarget,
    checkAlive,
    checkRevengeId,
    (bool)method,
    v7);
  this->fields.targetIdlist = targetlist;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetIdlist,
    (int32_t)targetlist,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.ptTarget = ptTarget;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.ptTarget,
    (int32_t)ptTarget,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v27 = DataManager_TypeInfo;
  this->fields.checkAlive = v12;
  this->fields.checkRevengeId = v13;
  if ( !*(&v27->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v27, v26);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !skillInfo )
    goto LABEL_13;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Master_object = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                                    skillInfo,
                                    skillInfo->klass->vtable._5_get_skillId.method);
  if ( !v30 )
    goto LABEL_13;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v30,
          &entity,
          (int32_t)Master_object,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return;
  Master_object = entity;
  if ( !entity
    || (Master_object = (Il2CppObject *)SkillEntity__GetAfterWaitGroup((SkillEntity_o *)entity, 0),
        v31 = entity,
        this->fields.afterWaitGroup = (int)Master_object,
        !v31)
    || (v32 = SkillEntity__GetAfterWaitSecond((SkillEntity_o *)v31, 0),
        Master_object = entity,
        this->fields.afterWaitSecond = v32,
        !Master_object) )
  {
LABEL_13:
    sub_2213CDC(Master_object, v29);
  }
  this->fields.timingLastWaitSecond = SkillEntity__GetTimingLastWaitTime((SkillEntity_o *)Master_object, 0);
}


void BattleLogicTask__setActionTreasureDvc(
        BattleLogicTask_o *this,
        int32_t treDvcId,
        int32_t lv,
        const MethodInfo *method)
{
  this->fields.treasureDvcId = treDvcId;
  this->fields.tresureDvcLv = lv;
  this->fields.actiontype = 4;
}


void BattleLogicTask__setActor(BattleLogicTask_o *this, int32_t type, int32_t uniqueID, const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5973D2E & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5973D2E = 1;
  }
  v7 = sub_2213B20(int___TypeInfo, 1);
  if ( !v7 )
    sub_2213CDC(0, v8);
  if ( !*(_DWORD *)(v7 + 24) )
    sub_2213CE4(v7);
  this->fields.actorIdlist = (struct System_Int32_array *)v7;
  *(_DWORD *)(v7 + 32) = uniqueID;
  this->fields.actortype = type;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.actorIdlist, v7, v9, v10, v11, v12, v13, v14);
}


void BattleLogicTask__setActor_54297924(
        BattleLogicTask_o *this,
        int32_t type,
        System_Int32_array *uniqueIDList,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Int32_array **p_actorIdlist; // x0

  this->fields.actorIdlist = uniqueIDList;
  p_actorIdlist = &this->fields.actorIdlist;
  *((_DWORD *)p_actorIdlist - 2) = type;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_actorIdlist,
    (int32_t)uniqueIDList,
    (System_String_o *)uniqueIDList,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicTask__setAddAttackCommand(
        BattleLogicTask_o *this,
        BattleComboData_o *combo,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BattleCommandData_o **p_command; // x19
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  BattleCommandData_o *v19; // x0
  struct BattleCommandData_o *v20; // x8

  this->fields.actiontype = 2;
  this->fields.combo = combo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.combo,
    (int32_t)combo,
    (System_String_o *)command,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.command = command;
  p_command = &this->fields.command;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_command, (int32_t)command, v12, v13, v14, v15, v16, v17);
  v19 = *p_command;
  if ( !*p_command
    || (BattleCommandData__setCombo(v19, combo, 2, 0), (v19 = *p_command) == 0)
    || (v19->fields.actionIndex = 3, BattleCommandData__ClearCommandCode(v19, 0), (v20 = *p_command) == 0) )
  {
    sub_2213CDC(v19, v18);
  }
  v20->fields.commandAssistId = 0;
  v20->fields.commandCardParam = 0;
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


void BattleLogicTask__setComboOrder_54298580(
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
  BattleSkillInfoData_c *v9; // x0
  BattleSkillInfoData_o *v10; // x24
  struct BattleSkillInfoData_o **p_skillInfo; // x23
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  struct BattleSkillInfoData_o *skillInfo; // x0
  BattleSkillInfoData_c *klass; // x8
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_5973D31 & 1) == 0 )
  {
    sub_2213A60(&BattleSkillInfoData_TypeInfo);
    byte_5973D31 = 1;
  }
  v9 = BattleSkillInfoData_TypeInfo;
  this->fields.actiontype = 9;
  v10 = (BattleSkillInfoData_o *)sub_2213CCC(v9);
  BattleSkillInfoData___ctor(v10, 0);
  this->fields.skillInfo = v10;
  p_skillInfo = &this->fields.skillInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.skillInfo, (int32_t)v10, v12, v13, v14, v15, v16, v17);
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
    sub_2213CDC(skillInfo, v18);
  }
  (*p_skillInfo)->fields.skilllv = 1;
  this->fields.targetIdlist = targetlist;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetIdlist,
    (int32_t)targetlist,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.ptTarget = ptTarget;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.ptTarget,
    (int32_t)ptTarget,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
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
  this->fields.status = cutInType;
  this->fields.actiontype = 41;
}


void BattleLogicTask__setLoadImmediateEntryServant(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 42;
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicTask__setMessage(
        BattleLogicTask_o *this,
        System_String_o *message,
        int32_t type,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **p_motionMessage; // x20

  this->fields.motionMessage = message;
  p_motionMessage = &this->fields.motionMessage;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.motionMessage,
    (int32_t)message,
    *(System_String_o **)&type,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  *((_DWORD *)p_motionMessage - 2) = type;
}


void BattleLogicTask__setPlayMoiton(BattleLogicTask_o *this, System_String_o *motionName, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **p_motionName; // x0

  this->fields.motionName = motionName;
  p_motionName = &this->fields.motionName;
  *((_DWORD *)p_motionName - 18) = 10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_motionName,
    (int32_t)motionName,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicTask__setProcBuffDead(BattleLogicTask_o *this, const MethodInfo *method)
{
  this->fields.actiontype = 15;
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicTask__setReservationSkill(
        BattleLogicTask_o *this,
        BattleSkillInfoData_o *inSkillInfo,
        bool inflgCheckUseSKill,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BattleSkillInfoData_o **p_skillInfo; // x20

  this->fields.skillInfo = inSkillInfo;
  p_skillInfo = &this->fields.skillInfo;
  this->fields.actiontype = 25;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillInfo,
    (int32_t)inSkillInfo,
    (System_String_o *)inflgCheckUseSKill,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  *((_BYTE *)p_skillInfo + 8) = inflgCheckUseSKill;
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
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5973D2F & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5973D2F = 1;
  }
  v5 = sub_2213B20(int___TypeInfo, 1);
  if ( !v5 )
    sub_2213CDC(0, v6);
  if ( !*(_DWORD *)(v5 + 24) )
    sub_2213CE4(v5);
  this->fields.targetIdlist = (struct System_Int32_array *)v5;
  *(_DWORD *)(v5 + 32) = targetId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.targetIdlist, v5, v7, v8, v9, v10, v11, v12);
}


void BattleLogicTask__setTargetObject(BattleLogicTask_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.targetObject = obj;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetObject,
    (int32_t)obj,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicTask__setTarget_54298060(
        BattleLogicTask_o *this,
        System_Int32_array *targetIdlist,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.targetIdlist = targetIdlist;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetIdlist,
    (int32_t)targetIdlist,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicTask__set_AiTimingPriority(BattleLogicTask_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._AiTimingPriority_k__BackingField = value;
}


void BattleLogicTask__set_ExistTargetLock(BattleLogicTask_o *this, bool value, const MethodInfo *method)
{
  this->fields._ExistTargetLock_k__BackingField = value;
}


void BattleLogicTask__set_IsBattleScriptRelationTask(BattleLogicTask_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsBattleScriptRelationTask_k__BackingField = value;
}


void BattleLogicTask__set_IsBuffTriggeredTask(BattleLogicTask_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsBuffTriggeredTask_k__BackingField = value;
}


void BattleLogicTask__set_OverwriteTdData(
        BattleLogicTask_o *this,
        OverwriteTreasureDeviceData_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OverwriteTdData_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OverwriteTdData_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicTask__set_PairDisplayTriggerIntervalBuff(
        BattleLogicTask_o *this,
        System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o value,
        const MethodInfo *method)
{
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7

  this->fields._PairDisplayTriggerIntervalBuff_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PairDisplayTriggerIntervalBuff_k__BackingField,
    0,
    (System_String_o *)value.fields.value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6);
}


void BattleLogicTask___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973D41 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicTask___c_TypeInfo);
    byte_5973D41 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleLogicTask___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicTask___c_TypeInfo->static_fields->__9 = (struct BattleLogicTask___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleLogicTask___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicTask___c___ctor(BattleLogicTask___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicTask___c___RevertUnusedNoNeedUpHateBuff_b__177_0(
        BattleLogicTask___c_o *this,
        UpHateData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_2213CDC(this, 0);
  UpHateData__RevertUnused(buff, 0);
}


bool BattleLogicTask___c___SetDisplayTriggerIntervalBuff_b__147_0(
        BattleLogicTask___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.intervalData != 0;
}


void BattleLogicTask___c___SetDisplayTriggerIntervalBuff_b__147_1(
        BattleLogicTask___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  BattleBuffData_BuffData__SetIntervalOtherTiming(x, 0);
}