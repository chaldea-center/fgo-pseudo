void __fastcall BattleLogicTask___ctor(BattleLogicTask_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4217712 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    byte_4217712 = 1;
  }
  v3 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  this->fields.targetIdlist = v3;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.targetIdlist,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_o *__fastcall BattleLogicTask__CloneSkillTask(
        BattleLogicTask_o *this,
        BattleSkillInfoData_o *skillInfo,
        int32_t actorType,
        bool targetSwapExec,
        const MethodInfo *method)
{
  __int64 v9; // x8
  __int64 v10; // x11
  System_Int32_array *v11; // x23
  System_Int32_array *v12; // x24
  BattleLogicTask_o *v13; // x22
  const MethodInfo *v14; // x1
  __int64 v15; // x0
  const MethodInfo *v16; // x6
  const MethodInfo *v17; // x3

  if ( (byte_421771A & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, skillInfo);
    byte_421771A = 1;
  }
  v9 = 32LL;
  if ( targetSwapExec )
    v10 = 40LL;
  else
    v10 = 32LL;
  if ( !targetSwapExec )
    v9 = 40LL;
  v11 = *(System_Int32_array **)((char *)&this->klass + v9);
  v12 = *(System_Int32_array **)((char *)&this->klass + v10);
  v13 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, skillInfo, *(_QWORD *)&actorType);
  BattleLogicTask___ctor(v13, v14);
  if ( !v13
    || (BattleLogicTask__setActionSkill(
          v13,
          skillInfo,
          v12,
          v11,
          this->fields.checkAlive,
          this->fields.checkRevengeId,
          v16),
        !skillInfo) )
  {
    sub_B0D97C(v15);
  }
  BattleLogicTask__setActor(v13, actorType, skillInfo->fields.svtUniqueId, v17);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  BattleActionData_o *v15; // x19
  BattleActionData_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  UpdateIntervalBuffViewBattleLogicTask_o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o *m_Items; // x0
  System_Int32_array **v27; // x1
  __int64 v29; // x0
  __int64 v30; // x0

  v3 = relayTasks;
  if ( (byte_4217719 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, relayTasks);
    sub_B0D8A4(&BattleLogicTask___TypeInfo, v5);
    sub_B0D8A4(&UpdateIntervalBuffViewBattleLogicTask_TypeInfo, v6);
    byte_4217719 = 1;
  }
  if ( BattleLogicTask__get_ExistDisplayTriggerIntervalBuff(this, (const MethodInfo *)relayTasks) )
  {
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v3, 0LL);
    if ( (IsNullOrEmpty & 1) != 0 )
    {
      v15 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, v8, v9);
      BattleActionData___ctor(v15, 0LL);
      if ( v15 )
      {
        v16 = BattleActionData__AddDisplayTriggerIntervalBuff(v15, this, 0LL);
        v3 = (BattleLogicTask_array *)sub_B0D8BC(BattleLogicTask___TypeInfo, 1LL);
        v19 = (UpdateIntervalBuffViewBattleLogicTask_o *)sub_B0D974(
                                                           UpdateIntervalBuffViewBattleLogicTask_TypeInfo,
                                                           v17,
                                                           v18);
        UpdateIntervalBuffViewBattleLogicTask___ctor(v19, v16, 0LL);
        if ( v3 )
        {
          if ( v19 )
          {
            IsNullOrEmpty = sub_B0D964(v19, v3->obj.klass->_1.element_class);
            if ( !IsNullOrEmpty )
            {
              v30 = sub_B0D99C(0LL);
              sub_B0D948(v30, 0LL);
            }
          }
          if ( v3->max_length )
          {
            v3->m_Items[0] = (BattleLogicTask_o *)v19;
            m_Items = (struct System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o *)v3->m_Items;
            v27 = (System_Int32_array **)v19;
LABEL_15:
            sub_B0D840((BattleServantConfConponent_o *)m_Items, v27, v20, v21, v22, v23, v24, v25);
            return v3;
          }
LABEL_18:
          v29 = sub_B0D9A8(IsNullOrEmpty);
          sub_B0D948(v29, 0LL);
        }
      }
    }
    else if ( v3 )
    {
      if ( !v3->max_length )
        goto LABEL_18;
      IsNullOrEmpty = (__int64)v3->m_Items[0];
      if ( IsNullOrEmpty )
      {
        *(struct System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o *)(IsNullOrEmpty + 216) = this->fields._PairDisplayTriggerIntervalBuff_k__BackingField;
        sub_B0D840((BattleServantConfConponent_o *)(IsNullOrEmpty + 216), 0LL, v9, v10, v11, v12, v13, v14);
        m_Items = &this->fields._PairDisplayTriggerIntervalBuff_k__BackingField;
        v27 = 0LL;
        this->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.key = 0LL;
        this->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.value = 0LL;
        goto LABEL_15;
      }
    }
    sub_B0D97C(IsNullOrEmpty);
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
  DataManager_o *Instance; // x0
  TreasureDvcLvEntity_o *Entity; // x20
  struct System_Int32_array *funcId; // x20
  __int64 v9; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x19
  unsigned __int64 v11; // x21
  __int64 v13; // x0

  if ( (byte_4217716 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4217716 = 1;
  }
  if ( (this->fields.actiontype | 1) != 5 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___)) == 0LL
    || (Entity = TreasureDvcLvMaster__GetEntity(
                   (TreasureDvcLvMaster_o *)Instance,
                   this->fields.treasureDvcId,
                   this->fields.tresureDvcLv,
                   0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_FunctionMaster___),
        !Entity)
    || (funcId = Entity->fields.funcId) == 0LL )
  {
LABEL_18:
    sub_B0D97C(Instance);
  }
  v9 = *(_QWORD *)&funcId->max_length;
  if ( (int)v9 < 1 )
    return 0;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v11 = 0LL;
  while ( 1 )
  {
    if ( v11 >= (unsigned int)v9 )
    {
      v13 = sub_B0D9A8(Instance);
      sub_B0D948(v13, 0LL);
    }
    if ( !v10 )
      goto LABEL_18;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v10,
                                  funcId->m_Items[v11 + 1],
                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    if ( Instance )
    {
      if ( HIDWORD(Instance->fields.datalist) == 4 )
        return 1;
    }
    LODWORD(v9) = funcId->max_length;
    if ( (__int64)++v11 >= (int)v9 )
      return 0;
  }
}


BattleActionData_o *__fastcall BattleLogicTask__MakeAction(
        BattleLogicTask_o *task,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  if ( !task )
    sub_B0D97C(0LL);
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
  if ( (byte_421771B & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask___TypeInfo, logic);
    byte_421771B = 1;
  }
  return (BattleLogicTask_array *)sub_B0D8BC(BattleLogicTask___TypeInfo, 0LL);
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
  __int64 v15; // x1
  __int64 v16; // x1
  BattleLogicTask___c_c *v17; // x0
  struct BattleLogicTask___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__123_0; // x22
  Il2CppObject *v20; // x23
  struct BattleLogicTask___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_ICollection_o *v29; // x21
  bool IsNullOrEmpty; // w0
  __int64 v31; // x1
  __int64 v32; // x2
  BattleLogicTask___c_c *v33; // x0
  struct BattleLogicTask___c_StaticFields *v34; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__123_1; // x22
  Il2CppObject *v36; // x23
  struct BattleLogicTask___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  const MethodInfo_2029F4C *v44; // x4
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o v51; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_KeyValuePair_Variant__Variant__o v52; // 0:x0.16

  if ( (byte_4217718 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleBuffData_BuffData___ctor__, svtData);
    sub_B0D8A4(&System_Action_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v10);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v11);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v12);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData_____ctor__,
      v13);
    sub_B0D8A4(&Method_BattleLogicTask___c__SetDisplayTriggerIntervalBuff_b__123_0__, v14);
    sub_B0D8A4(&Method_BattleLogicTask___c__SetDisplayTriggerIntervalBuff_b__123_1__, v15);
    sub_B0D8A4(&BattleLogicTask___c_TypeInfo, v16);
    byte_4217718 = 1;
  }
  v17 = BattleLogicTask___c_TypeInfo;
  if ( (BYTE3(BattleLogicTask___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicTask___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicTask___c_TypeInfo);
    v17 = BattleLogicTask___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__123_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__123_0;
  if ( !_9__123_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = BattleLogicTask___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__123_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                                     svtData,
                                                                                     buffArray);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__123_0,
      v20,
      Method_BattleLogicTask___c__SetDisplayTriggerIntervalBuff_b__123_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    v21 = BattleLogicTask___c_TypeInfo->static_fields;
    v21->__9__123_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__123_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v21->__9__123_0,
      (System_Int32_array **)_9__123_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)buffArray,
          (System_Func_TSource__bool__o *)_9__123_0,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v29 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                              v28,
                                              (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v29, 0LL);
  if ( svtData && !IsNullOrEmpty )
  {
    v33 = BattleLogicTask___c_TypeInfo;
    if ( (BYTE3(BattleLogicTask___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicTask___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicTask___c_TypeInfo);
      v33 = BattleLogicTask___c_TypeInfo;
    }
    v34 = v33->static_fields;
    _9__123_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v34->__9__123_1;
    if ( !_9__123_1 )
    {
      if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v34 = BattleLogicTask___c_TypeInfo->static_fields;
      }
      v36 = (Il2CppObject *)v34->__9;
      _9__123_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                         System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                                         v31,
                                                                                         v32);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__123_1,
        v36,
        Method_BattleLogicTask___c__SetDisplayTriggerIntervalBuff_b__123_1__,
        (const MethodInfo_246EA3C *)Method_System_Action_BattleBuffData_BuffData___ctor__);
      v37 = BattleLogicTask___c_TypeInfo->static_fields;
      v37->__9__123_1 = (struct System_Action_BattleBuffData_BuffData__o *)_9__123_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v37->__9__123_1,
        (System_Int32_array **)_9__123_1,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      (System_Collections_Generic_IEnumerable_T__o *)v29,
      (System_Action_T__o *)_9__123_1,
      (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    v52.fields.key = (struct Firebase_Variant_o *)&v51;
    v52.fields.value = (struct Firebase_Variant_o *)svtData;
    v51 = (struct System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____o)0LL;
    System_Collections_Generic_KeyValuePair_Variant__Variant____ctor(
      v52,
      (Firebase_Variant_o *)v29,
      (Firebase_Variant_o *)Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData_____ctor__,
      v44);
    this->fields._PairDisplayTriggerIntervalBuff_k__BackingField = v51;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields._PairDisplayTriggerIntervalBuff_k__BackingField,
      0LL,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.gimmickIndexArray = indexArray;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.gimmickIndexArray,
    (System_Int32_array **)indexArray,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicTask__SetOverwriteTreasureDevice(
        BattleLogicTask_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  OverwriteTreasureDeviceData_o *v7; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4217711 & 1) == 0 )
  {
    sub_B0D8A4(&OverwriteTreasureDeviceData_TypeInfo, *(_QWORD *)&id);
    byte_4217711 = 1;
  }
  v7 = (OverwriteTreasureDeviceData_o *)sub_B0D974(OverwriteTreasureDeviceData_TypeInfo, *(_QWORD *)&id, *(_QWORD *)&lv);
  OverwriteTreasureDeviceData___ctor(v7, id, lv, 0LL);
  this->fields._OverwriteTdData_k__BackingField = v7;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._OverwriteTdData_k__BackingField,
    (System_Int32_array **)v7,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_String_o **p_motionName; // x0

  this->fields.motionName = name;
  p_motionName = &this->fields.motionName;
  *((_DWORD *)p_motionName - 14) = 44;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_motionName,
    (System_Int32_array **)name,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool __fastcall BattleLogicTask__checkActorId(
        BattleLogicTask_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  int32_t ActorId; // w20
  const MethodInfo *v5; // x1

  if ( !task )
    return 0;
  ActorId = BattleLogicTask__getActorId(this, (const MethodInfo *)task);
  return ActorId == BattleLogicTask__getActorId(task, v5);
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
  __int64 v8; // x0

  if ( !task )
    return 0;
  targetIdlist = this->fields.targetIdlist;
  if ( !targetIdlist )
    goto LABEL_11;
  v4 = *(_QWORD *)&targetIdlist->max_length;
  if ( !v4 )
    return 0;
  v5 = task->fields.targetIdlist;
  if ( !v5 )
LABEL_11:
    sub_B0D97C(this);
  v6 = *(_QWORD *)&v5->max_length;
  if ( !v6 )
    return 0;
  if ( !(_DWORD)v4 || !(_DWORD)v6 )
  {
    v8 = sub_B0D9A8(this);
    sub_B0D948(v8, 0LL);
  }
  return targetIdlist->m_Items[1] == v5->m_Items[1];
}


int32_t __fastcall BattleLogicTask__getActorId(BattleLogicTask_o *this, const MethodInfo *method)
{
  struct System_Int32_array *actorIdlist; // x8
  __int64 v4; // x0

  actorIdlist = this->fields.actorIdlist;
  if ( !actorIdlist )
    return -1;
  if ( !actorIdlist->max_length )
  {
    v4 = sub_B0D9A8(this);
    sub_B0D948(v4, 0LL);
  }
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
  __int64 v4; // x0

  targetIdlist = this->fields.targetIdlist;
  if ( !targetIdlist )
    sub_B0D97C(this);
  if ( !targetIdlist->max_length )
  {
    v4 = sub_B0D9A8(this);
    sub_B0D948(v4, 0LL);
  }
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
  if ( (byte_4217717 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_BattleServantData__BattleBuffData_BuffData____get_Value__,
      method);
    byte_4217717 = 1;
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
  return (this->fields.actiontype | 1) == 5;
}


bool __fastcall BattleLogicTask__isTurnEndEnemy(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 12;
}


bool __fastcall BattleLogicTask__isTurnEndPlayer(BattleLogicTask_o *this, const MethodInfo *method)
{
  return this->fields.actiontype == 11;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicTask__setActionCommand(
        BattleLogicTask_o *this,
        BattleComboData_o *combo,
        BattleCommandData_o *command,
        int32_t index,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleCommandData_o **p_command; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  this->fields.actiontype = 1;
  this->fields.combo = combo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.combo,
    (System_Int32_array **)combo,
    (System_String_array **)command,
    *(System_String_array ***)&index,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.command = command;
  p_command = &this->fields.command;
  sub_B0D840((BattleServantConfConponent_o *)p_command, (System_Int32_array **)command, v13, v14, v15, v16, v17, v18);
  if ( !*p_command )
    sub_B0D97C(0LL);
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
  System_Int32_array *v7; // x7
  BattleLogicTask_o *v8; // x23
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  v8 = this;
  this->fields.actiontype = 3;
  this->fields.skillInfo = skillInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillInfo,
    (System_Int32_array **)skillInfo,
    (System_String_array **)targetlist,
    (System_String_array **)ptTarget,
    (System_Boolean_array **)checkAlive,
    (System_Int32_array **)checkRevengeId,
    (System_Int32_array *)method,
    v7);
  v8->fields.targetIdlist = targetlist;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v8->fields.targetIdlist,
    (System_Int32_array **)targetlist,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v8->fields.ptTarget = ptTarget;
  v8 = (BattleLogicTask_o *)((char *)v8 + 40);
  sub_B0D840((BattleServantConfConponent_o *)v8, (System_Int32_array **)ptTarget, v19, v20, v21, v22, v23, v24);
  BYTE1(v8->fields.ptTarget) = checkAlive;
  BYTE1(v8->fields.status) = checkRevengeId;
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Int32_array **p_actorIdlist; // x21
  __int64 v15; // x0

  if ( (byte_4217713 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, *(_QWORD *)&type);
    byte_4217713 = 1;
  }
  v7 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !v7 )
    sub_B0D97C(0LL);
  if ( !v7->max_length )
  {
    v15 = sub_B0D9A8(v7);
    sub_B0D948(v15, 0LL);
  }
  v7->m_Items[1] = uniqueID;
  this->fields.actorIdlist = v7;
  p_actorIdlist = &this->fields.actorIdlist;
  *((_DWORD *)p_actorIdlist - 2) = type;
  sub_B0D840((BattleServantConfConponent_o *)p_actorIdlist, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall BattleLogicTask__setActor_29890724(
        BattleLogicTask_o *this,
        int32_t type,
        System_Int32_array *uniqueIDList,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Int32_array **p_actorIdlist; // x0

  this->fields.actorIdlist = uniqueIDList;
  p_actorIdlist = &this->fields.actorIdlist;
  *((_DWORD *)p_actorIdlist - 2) = type;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_actorIdlist,
    (System_Int32_array **)uniqueIDList,
    (System_String_array **)uniqueIDList,
    (System_String_array **)method,
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleCommandData_o **p_command; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  BattleCommandData_o *v18; // x0

  this->fields.actiontype = 2;
  this->fields.combo = combo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.combo,
    (System_Int32_array **)combo,
    (System_String_array **)command,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.command = command;
  p_command = &this->fields.command;
  sub_B0D840((BattleServantConfConponent_o *)p_command, (System_Int32_array **)command, v12, v13, v14, v15, v16, v17);
  v18 = *p_command;
  if ( !*p_command
    || (BattleCommandData__setCombo(v18, combo, 2, 0LL), !*p_command)
    || ((*p_command)->fields.actionIndex = 3, (v18 = *p_command) == 0LL)
    || (BattleCommandData__ClearCommandCode(v18, 0LL), !*p_command)
    || ((*p_command)->fields.commandAssistId = 0, !*p_command) )
  {
    sub_B0D97C(v18);
  }
  (*p_command)->fields.commandCardParam = 0;
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


void __fastcall BattleLogicTask__setComboOrder_29891220(
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x0
  struct BattleSkillInfoData_o *skillInfo; // x8
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_4217715 & 1) == 0 )
  {
    sub_B0D8A4(&BattleSkillInfoData_TypeInfo, *(_QWORD *)&skillId);
    byte_4217715 = 1;
  }
  this->fields.actiontype = 9;
  v9 = (BattleSkillInfoData_o *)sub_B0D974(BattleSkillInfoData_TypeInfo, *(_QWORD *)&skillId, targetlist);
  BattleSkillInfoData___ctor(v9, 0LL);
  p_skillInfo = &this->fields.skillInfo;
  this->fields.skillInfo = v9;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillInfo,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  skillInfo = this->fields.skillInfo;
  if ( !skillInfo
    || (skillInfo->fields.type = 2, (v17 = (__int64)*p_skillInfo) == 0)
    || (v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v17 + 376LL))(
                v17,
                (unsigned int)skillId,
                *(_QWORD *)(*(_QWORD *)v17 + 384LL)),
        !*p_skillInfo) )
  {
    sub_B0D97C(v17);
  }
  (*p_skillInfo)->fields.skilllv = 1;
  this->fields.targetIdlist = targetlist;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.targetIdlist,
    (System_Int32_array **)targetlist,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.ptTarget = ptTarget;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.ptTarget,
    (System_Int32_array **)ptTarget,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_String_o **p_motionMessage; // x20

  this->fields.motionMessage = message;
  p_motionMessage = &this->fields.motionMessage;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.motionMessage,
    (System_Int32_array **)message,
    *(System_String_array ***)&type,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_String_o **p_motionName; // x0

  this->fields.motionName = motionName;
  p_motionName = &this->fields.motionName;
  *((_DWORD *)p_motionName - 14) = 10;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_motionName,
    (System_Int32_array **)motionName,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleSkillInfoData_o **p_skillInfo; // x20

  this->fields.skillInfo = inSkillInfo;
  p_skillInfo = &this->fields.skillInfo;
  this->fields.actiontype = 25;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillInfo,
    (System_Int32_array **)inSkillInfo,
    (System_String_array **)inflgCheckUseSKill,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  *((_BYTE *)p_skillInfo + 8) = inflgCheckUseSKill;
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x0

  if ( (byte_4217714 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, *(_QWORD *)&targetId);
    byte_4217714 = 1;
  }
  v5 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_B0D97C(0LL);
  if ( !v5->max_length )
  {
    v12 = sub_B0D9A8(v5);
    sub_B0D948(v12, 0LL);
  }
  v5->m_Items[1] = targetId;
  this->fields.targetIdlist = v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.targetIdlist,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void __fastcall BattleLogicTask__setTargetObject(
        BattleLogicTask_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.targetObject = obj;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)obj,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleLogicTask__setTarget_29890840(
        BattleLogicTask_o *this,
        System_Int32_array *targetIdlist,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.targetIdlist = targetIdlist;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.targetIdlist,
    (System_Int32_array **)targetIdlist,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._OverwriteTdData_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._OverwriteTdData_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *p_PairDisplayTriggerIntervalBuff_k__BackingField; // x0

  this->fields._PairDisplayTriggerIntervalBuff_k__BackingField.fields.key = value.fields.key;
  p_PairDisplayTriggerIntervalBuff_k__BackingField = (BattleServantConfConponent_o *)&this->fields._PairDisplayTriggerIntervalBuff_k__BackingField;
  p_PairDisplayTriggerIntervalBuff_k__BackingField->monitor = value.fields.value;
  sub_B0D840(
    p_PairDisplayTriggerIntervalBuff_k__BackingField,
    0LL,
    (System_String_array **)value.fields.value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6);
}


void __fastcall BattleLogicTask___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213BE2 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask___c_TypeInfo, v1);
    byte_4213BE2 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleLogicTask___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicTask___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
}


void __fastcall BattleLogicTask___c___ctor(BattleLogicTask___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicTask___c___SetDisplayTriggerIntervalBuff_b__123_0(
        BattleLogicTask___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.intervalData != 0LL;
}


void __fastcall BattleLogicTask___c___SetDisplayTriggerIntervalBuff_b__123_1(
        BattleLogicTask___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  BattleBuffData_BuffData__SetIntervalOtherTiming(x, 0LL);
}