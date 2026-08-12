void BattleLogicSpecial___ctor(BattleLogicSpecial_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicSpecial__TryAddSkillTaskPreBeforeOtherTd(
        BattleLogicSpecial_o *this,
        BattleLogicTask_o *task,
        BattleServantData_array *svtDataList,
        int32_t actorId,
        const MethodInfo *method)
{
  BattleAddSkillTaskPreBeforeOtherTreasureDevice_o *v9; // x23
  __int64 v10; // x1
  BattleLogicSpecial___c_c *v11; // x0
  struct BattleLogicSpecial___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__11_0; // x24
  Il2CppObject *v14; // x25
  struct BattleLogicSpecial___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  BattleBuffData_BuffData_array *BuffList; // x0
  __int64 v23; // x1
  int max_length; // w8
  bool v25; // w26
  int v26; // w28
  BattleServantData_o *v27; // x24
  int32_t uniqueId; // w1
  BattleLogic_o *logic; // x25
  System_Nullable_int__o actorIda; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5973D15 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Sort_BattleServantData___);
    sub_2213A60(&BattleAddSkillTaskPreBeforeOtherTreasureDevice_TypeInfo);
    sub_2213A60(&System_Comparison_BattleServantData__TypeInfo);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_BattleLogicSpecial___c__TryAddSkillTaskPreBeforeOtherTd_b__11_0__);
    sub_2213A60(&BattleLogicSpecial___c_TypeInfo);
    byte_5973D15 = 1;
  }
  v9 = (BattleAddSkillTaskPreBeforeOtherTreasureDevice_o *)sub_2213CCC(BattleAddSkillTaskPreBeforeOtherTreasureDevice_TypeInfo);
  BattleAddSkillTaskPreBeforeOtherTreasureDevice___ctor(v9, 0);
  v11 = BattleLogicSpecial___c_TypeInfo;
  if ( !*(&BattleLogicSpecial___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSpecial___c_TypeInfo, v10);
    v11 = BattleLogicSpecial___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__11_0 = (System_Comparison_T__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, v10);
      static_fields = BattleLogicSpecial___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_BattleServantData__TypeInfo);
    System_Comparison_object____ctor(
      _9__11_0,
      v14,
      Method_BattleLogicSpecial___c__TryAddSkillTaskPreBeforeOtherTd_b__11_0__,
      0);
    v15 = BattleLogicSpecial___c_TypeInfo->static_fields;
    v15->__9__11_0 = (struct System_Comparison_BattleServantData__o *)_9__11_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__11_0, (int32_t)_9__11_0, v16, v17, v18, v19, v20, v21);
  }
  System_Array__Sort_object__58432120(
    (System_Object_array *)svtDataList,
    _9__11_0,
    (const MethodInfo_37B9A78 *)Method_System_Array_Sort_BattleServantData___);
  if ( !svtDataList )
    goto LABEL_22;
  max_length = svtDataList->max_length;
  v25 = max_length > 0;
  if ( max_length >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)max_length )
        sub_2213CE4(BuffList);
      v27 = svtDataList->m_Items[v26];
      if ( !v27 )
        break;
      if ( !v27->fields.isEntry || v27->fields.uniqueId == actorId )
        goto LABEL_26;
      BuffList = BattleServantData__getBuffList(v27, 166, 1, 0, 0);
      if ( !BuffList )
        break;
      if ( !BuffList->max_length )
        goto LABEL_26;
      uniqueId = v27->fields.uniqueId;
      logic = this->fields.logic;
      actorIda = 0;
      System_Nullable_int____ctor(
        (System_Nullable_int__o)&actorIda,
        uniqueId,
        (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
      if ( !logic )
        break;
      BuffList = (BattleBuffData_BuffData_array *)BattleLogic__AddSkillTask(
                                                    logic,
                                                    (BattleAddSkillTaskAroundTargetTask_o *)v9,
                                                    task,
                                                    actorId,
                                                    actorIda,
                                                    0);
      if ( ((unsigned __int8)BuffList & 1) == 0 )
      {
LABEL_26:
        max_length = svtDataList->max_length;
        v25 = ++v26 < max_length;
        if ( v26 < max_length )
          continue;
      }
      return v25;
    }
LABEL_22:
    sub_2213CDC(BuffList, v23);
  }
  return v25;
}


BattleActionData_o *BattleLogicSpecial__createCounterOverwriteSpecialData(
        BattleLogicSpecial_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_o *v3; // x20
  BattleLogicSpecial_o *v4; // x19
  struct System_Int32_array *actorIdlist; // x8
  BattleServantData_o *v6; // x21
  bool isAlive; // w8
  BattleActionData_o *result; // x0
  BattleTreasureDeviceCommandData_o *v9; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x4
  BattleActionData_o *v17; // x20
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-28h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_5973D13 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_2213A60(&BattleTreasureDeviceCommandData_TypeInfo);
    byte_5973D13 = 1;
  }
  baseActionData = 0;
  if ( !v3 )
LABEL_16:
    sub_2213CDC(this, task);
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicSpecial_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_2213CE4(this);
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[0];
    if ( !this )
      goto LABEL_16;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_16;
  }
  this = (BattleLogicSpecial_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0);
  v6 = (BattleServantData_o *)this;
  if ( v3->fields.checkAlive )
  {
    if ( !this )
      goto LABEL_16;
    isAlive = BattleServantData__isAlive((BattleServantData_o *)this, 0, 0);
    result = 0;
    if ( !isAlive )
      return result;
  }
  else if ( !this )
  {
    goto LABEL_16;
  }
  BattleServantData__OverwriteTreasureDevice(v6, v3->fields.treasureDvcId, v3->fields.tresureDvcLv, 0);
  v9 = (BattleTreasureDeviceCommandData_o *)sub_2213CCC(BattleTreasureDeviceCommandData_TypeInfo);
  BattleTreasureDeviceCommandData___ctor(v9, v6, 0);
  v3->fields.command = (struct BattleCommandData_o *)v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.command, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  v17 = BattleLogicSpecial__createSpecialDataCommonFunction(v4, &baseActionData, v3, 1, v16);
  BattleServantData__ResetOverwriteTreasureDevice(v6, 0);
  this = (BattleLogicSpecial_o *)v4->fields.logic;
  if ( !this )
    goto LABEL_16;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)this, v17, baseActionData, 0);
}


BattleActionData_o *BattleLogicSpecial__createSpecialData(
        BattleLogicSpecial_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_o *v3; // x20
  BattleLogicSpecial_o *v4; // x19
  struct System_Int32_array *actorIdlist; // x8
  const MethodInfo *v6; // x4
  BattleServantData_o *ServantData; // x22
  BattleActionData_o *v8; // x21
  struct System_Int32_array *v9; // x8
  BattleData_o *data; // x23
  int32_t v11; // w24
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-38h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_5973D12 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_5973D12 = 1;
  }
  baseActionData = 0;
  if ( !v3 )
LABEL_27:
    sub_2213CDC(this, task);
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicSpecial_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      goto LABEL_28;
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[0];
    if ( !this )
      goto LABEL_27;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_27;
  }
  ServantData = BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0);
  if ( v3->fields._OverwriteTdData_k__BackingField )
    OverwriteTreasureDeviceData__Overwrite(v3->fields._OverwriteTdData_k__BackingField, ServantData, 0);
  this = (BattleLogicSpecial_o *)BattleLogicSpecial__createSpecialDataCommonFunction(v4, &baseActionData, v3, 0, v6);
  v8 = (BattleActionData_o *)this;
  if ( !this )
  {
    this = (BattleLogicSpecial_o *)v3->fields._OverwriteTdData_k__BackingField;
    if ( this )
      OverwriteTreasureDeviceData__Reset((OverwriteTreasureDeviceData_o *)this, ServantData, 0);
    goto LABEL_21;
  }
  v9 = v3->fields.actorIdlist;
  data = v4->fields.data;
  if ( v9 )
  {
    if ( LODWORD(v9->max_length) )
    {
      v11 = v9->m_Items[0];
      goto LABEL_18;
    }
LABEL_28:
    sub_2213CE4(this);
  }
  v11 = -1;
LABEL_18:
  this = (BattleLogicSpecial_o *)*((_QWORD *)this + 39);
  if ( !this )
    goto LABEL_27;
  this = (BattleLogicSpecial_o *)System_Collections_Generic_List_int___ToArray(
                                   (System_Collections_Generic_List_int__o *)this,
                                   (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !data )
    goto LABEL_27;
  BattleData__SetWasAttackTargetIdList(data, v11, (System_Int32_array *)this, 0);
  this = (BattleLogicSpecial_o *)((__int64 (__fastcall *)(BattleLogicTask_o *, struct BattleData_o *, __int64, const MethodInfo *))v3->klass->vtable._10_SetAttacked.methodPtr)(
                                   v3,
                                   v4->fields.data,
                                   1,
                                   v3->klass->vtable._10_SetAttacked.method);
LABEL_21:
  if ( !ServantData )
    goto LABEL_27;
  if ( v8 && !ServantData->fields.isEnemy )
  {
    BattleActionData__SetExistTargetLock(v8, v3, 0);
    BattleActionData__SetRestoreGlobalTargetAfterAction(v8, 0);
  }
  this = (BattleLogicSpecial_o *)v4->fields.logic;
  if ( !this )
    goto LABEL_27;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)this, v8, baseActionData, 0);
}


BattleActionData_o *BattleLogicSpecial__createSpecialDataCommonFunction(
        BattleLogicSpecial_o *this,
        BattleActionData_o **baseActionData,
        BattleLogicTask_o *task,
        bool isCounterOverwriteTreasureDevice,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *v7; // x23
  __int64 data; // x0
  struct System_Int32_array *actorIdlist; // x8
  BattleServantData_o *ServantData; // x22
  BattleActionData_o *v12; // x24
  BattleActionData_o *v13; // x24
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Int32_array *v20; // x8
  int v21; // w8
  BattleLogicTarget_o *logictarget; // x23
  BattleCommandData_o *command; // x21
  UpHateData_array *Array; // x0
  const MethodInfo *v25; // x4
  int32_t v26; // w23
  Il2CppObject *MasterData_object; // x26
  TreasureDvcLvEntity_o *v28; // x29
  BattleServantData_array *FieldAliveServantArray; // x0
  const MethodInfo *v30; // x4
  BattleLogic_o *logic; // x19
  int32_t actorId; // w20
  BattleActionData_o *v33; // x26
  BattleLogic_o *v35; // x26
  BattleAddSkillTaskBeforeCounterTreasureDevice_o *v36; // x27
  bool v37; // w0
  BattleAddSkillTaskBeforeTreasureDevice_o *v38; // x27
  int32_t ChainBonus; // w0
  int32_t v40; // w0
  DataVals_array *DataValsList; // x27
  DataVals_array *v42; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x29
  unsigned int v44; // w21
  struct System_Int32_array *funcId; // x8
  __int64 v46; // x27
  Il2CppClass **v47; // x25
  __int64 *v48; // x25
  __int64 v49; // t1
  Il2CppClass **v50; // x26
  DataVals_o **v51; // x26
  __int64 v52; // t1
  BattleCommandData_o *v53; // x27
  BattleBuffData_CheckIndividualitiesData_o *v54; // x28
  __int64 v55; // x28
  __int64 v56; // x26
  int v57; // w8
  SkillLvMaster_o *v58; // x23
  __int64 v59; // x21
  __int64 v60; // x25
  _DWORD *v61; // x8
  __int64 v62; // x29
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  __int64 v69; // x8
  __int64 v70; // x25
  DataVals_o *v71; // x29
  __int64 v72; // x1
  int32_t TreasureDvcId; // w25
  BattleLogicFunction_FunctionArgument_o *argument; // x29
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  struct System_String_o *motionMessage; // x1
  bool isCounter; // w8
  struct BattleData_o *v83; // x8
  struct BattlePerformance_o *perf; // x8
  BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *v85; // x27
  int32_t TreasureDvcMotionId; // w0
  int OverwriteTdMotionId; // w8
  bool isForcedSpeedOne; // w8
  int32_t v89; // w29
  struct BattleLogic_o *v90; // x8
  BattlePerformance_o *v91; // x24
  BattleActionData_o *v92; // x25
  struct BattleLogic_o *v93; // x8
  BattlePerformance_o *v94; // x27
  BattleActionWaitCond_UntilSideEffectInvisible_o *v95; // x28
  BattleData_o *v96; // x1
  BattleLogic_o *v97; // x24
  BattleAddSkillTaskAfterCounterTreasureDevice_o *v98; // x21
  __int64 v99; // x19
  int v100; // w8
  __int64 v101; // x20
  __int64 v102; // x0
  BattleCommandData_o *v103; // [xsp+38h] [xbp-88h]
  bool v104; // [xsp+40h] [xbp-80h]
  int32_t targetId; // [xsp+44h] [xbp-7Ch]
  TreasureDvcLvEntity_o *v106; // [xsp+50h] [xbp-70h]
  DataVals_array *baseValslist; // [xsp+58h] [xbp-68h]

  v7 = (MissionNaviTransitionBoardItem_o *)baseActionData;
  if ( (byte_5973D14 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    sub_2213A60(&BattleAddSkillTaskAfterCounterTreasureDevice_TypeInfo);
    sub_2213A60(&BattleAddSkillTaskAfterTreasureDevice_TypeInfo);
    sub_2213A60(&BattleAddSkillTaskBeforeCounterTreasureDevice_TypeInfo);
    sub_2213A60(&BattleAddSkillTaskBeforeTreasureDevice_TypeInfo);
    sub_2213A60(&BattleCommandData_TypeInfo);
    sub_2213A60(&BattlePerformance_TypeInfo);
    sub_2213A60(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_2213A60(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
    sub_2213A60(&BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
    byte_5973D14 = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_151;
  BattleData__ResetWasAttackTargetId((BattleData_o *)data, 0);
  if ( !task )
    goto LABEL_151;
  if ( task->fields.IsResetFunctionedFunctionIds )
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_151;
    BattleData__ResetFunctionedFunctionIds((BattleData_o *)data, 0);
  }
  actorIdlist = task->fields.actorIdlist;
  data = (__int64)this->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      goto LABEL_152;
    baseActionData = (BattleActionData_o **)(unsigned int)actorIdlist->m_Items[0];
    if ( !data )
      goto LABEL_151;
  }
  else
  {
    baseActionData = (BattleActionData_o **)0xFFFFFFFFLL;
    if ( !data )
      goto LABEL_151;
  }
  ServantData = BattleData__getServantData((BattleData_o *)data, (int32_t)baseActionData, 0);
  v12 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v12, 0);
  if ( !v12 )
    goto LABEL_151;
  v13 = BattleActionData__AddDisplayTriggerIntervalBuff(v12, task, 0);
  v7->klass = (MissionNaviTransitionBoardItem_c *)v13;
  sub_2213A04(v7, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  if ( !ServantData )
    goto LABEL_151;
  data = BattleServantData__isAlive(ServantData, 0, 0);
  if ( (data & 1) == 0 && ServantData->fields.isDeadAnime )
    return 0;
  v20 = task->fields.actorIdlist;
  if ( v20 )
  {
    if ( !LODWORD(v20->max_length) )
      goto LABEL_152;
    v21 = v20->m_Items[0];
    if ( !v13 )
      goto LABEL_151;
  }
  else
  {
    v21 = -1;
    if ( !v13 )
      goto LABEL_151;
  }
  logictarget = this->fields.logictarget;
  v13->fields.actorId = v21;
  if ( !logictarget )
    goto LABEL_151;
  command = task->fields.command;
  Array = UpHateData__MakeArray((System_Collections_Generic_IEnumerable_int__o *)task->fields.targetIdlist, 0);
  data = BattleLogicTarget__getTargetBase_54287616(logictarget, Array, 0, 1, v25);
  v13->fields.targetId = data;
  if ( (int)data < 1 )
    return 0;
  baseActionData = (BattleActionData_o **)this->fields.data;
  if ( !baseActionData )
    goto LABEL_151;
  if ( *((_BYTE *)baseActionData + 296) || *((_BYTE *)baseActionData + 297) )
    return 0;
  v26 = data;
  if ( !BattleServantData__checkUseTDvc(
          ServantData,
          (BattleData_o *)baseActionData,
          1,
          task->fields._OverwriteTdData_k__BackingField,
          0)
    && !isCounterOverwriteTreasureDevice
    || !BattleServantData__isAction(ServantData, 0) )
  {
    data = (__int64)this->fields.data;
    if ( data )
    {
      BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0);
      logic = this->fields.logic;
      actorId = v13->fields.actorId;
      data = (__int64)BattlePerformance_TypeInfo;
      if ( !*(&BattlePerformance_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo, baseActionData);
      if ( logic )
      {
        BattleLogic__addBackStepActionData(
          logic,
          actorId,
          BattlePerformance_TypeInfo->static_fields->AFTER_BACK_STEP_INTERVAL,
          0);
        return 0;
      }
    }
    goto LABEL_151;
  }
  data = (__int64)ServantData->fields.buffData;
  if ( !data )
    goto LABEL_151;
  BattleBuffData__ResetCommandCodeBuffActiveFlg((BattleBuffData_o *)data, 0);
  data = (__int64)ServantData->fields.buffData;
  if ( !data )
    goto LABEL_151;
  BattleBuffData__ResetCommandAssistBuffActiveFlg((BattleBuffData_o *)data, 0);
  data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_151;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  data = BattleServantData__getTreasureDvcId(ServantData, !isCounterOverwriteTreasureDevice, 0, 0);
  if ( !MasterData_object )
    goto LABEL_151;
  data = (__int64)TreasureDvcLvMaster__GetEntity(
                    (TreasureDvcLvMaster_o *)MasterData_object,
                    data,
                    ServantData->fields.treasuredvcLevel,
                    0);
  if ( !this->fields.data )
    goto LABEL_151;
  v28 = (TreasureDvcLvEntity_o *)data;
  FieldAliveServantArray = BattleData__GetFieldAliveServantArray(this->fields.data, 3, 1, 0, 0);
  data = BattleLogicSpecial__TryAddSkillTaskPreBeforeOtherTd(
           this,
           task,
           FieldAliveServantArray,
           v13->fields.actorId,
           v30);
  if ( (data & 1) != 0 )
  {
    if ( !isCounterOverwriteTreasureDevice )
    {
LABEL_51:
      if ( !command )
        goto LABEL_151;
      ChainBonus = BattleCommandData__getChainBonus(command, 0);
      BattleServantData__UsedTpWeapon(ServantData, ChainBonus, this->fields.data, 1, 0);
    }
    return 0;
  }
  v35 = this->fields.logic;
  targetId = v26;
  if ( !isCounterOverwriteTreasureDevice )
  {
    v38 = (BattleAddSkillTaskBeforeTreasureDevice_o *)sub_2213CCC(BattleAddSkillTaskBeforeTreasureDevice_TypeInfo);
    BattleAddSkillTaskBeforeTreasureDevice___ctor(v38, 0);
    if ( !v35 )
      goto LABEL_151;
    data = BattleLogic__AddSkillTask(v35, (BattleAddSkillTaskAroundTargetTask_o *)v38, task, v26, 0, 0);
    if ( (data & 1) != 0 )
      goto LABEL_51;
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_151;
    BattleLogic__AddUnExecutedUpdateIntervalBuffActionData((BattleLogic_o *)data, 0);
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_151;
    BattleData__SetUsedTdInfo((BattleData_o *)data, ServantData, 0);
    if ( !command )
      goto LABEL_151;
    v40 = BattleCommandData__getChainBonus(command, 0);
    BattleServantData__UsedTpWeapon(ServantData, v40, this->fields.data, 0, 0);
    goto LABEL_57;
  }
  v36 = (BattleAddSkillTaskBeforeCounterTreasureDevice_o *)sub_2213CCC(BattleAddSkillTaskBeforeCounterTreasureDevice_TypeInfo);
  BattleAddSkillTaskBeforeCounterTreasureDevice___ctor(v36, 0);
  if ( !v35 )
    goto LABEL_151;
  v37 = BattleLogic__AddSkillTask(v35, (BattleAddSkillTaskAroundTargetTask_o *)v36, task, v26, 0, 0);
  v33 = 0;
  if ( !v37 )
  {
LABEL_57:
    BattleServantData__BeginNoblePhantasmPerformance(ServantData, 0);
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_151;
    BattleLogic__updateResultServant((BattleLogic_o *)data, 0);
    data = BattleServantData__getNpPer(ServantData, 0);
    baseActionData = isCounterOverwriteTreasureDevice
                   ? (BattleActionData_o **)(unsigned int)(100 * task->fields.counterOc)
                   : (BattleActionData_o **)(unsigned int)data;
    v13->fields.npPer = (int)baseActionData;
    if ( !v28 )
      goto LABEL_151;
    v103 = command;
    v104 = isCounterOverwriteTreasureDevice;
    DataValsList = TreasureDvcLvEntity__getDataValsList(v28, (int32_t)baseActionData, 0);
    v106 = v28;
    v42 = TreasureDvcLvEntity__getDataValsList(v28, 100, 0);
    data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !data )
      goto LABEL_151;
    data = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)data,
                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_FunctionMaster___);
    if ( !DataValsList )
      goto LABEL_151;
    baseValslist = DataValsList;
    if ( SLODWORD(DataValsList->max_length) >= 1 )
    {
      v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
      v44 = 0;
      do
      {
        funcId = v106->fields.funcId;
        if ( !funcId )
          goto LABEL_151;
        if ( v44 >= LODWORD(funcId->max_length) )
          goto LABEL_152;
        if ( !v43 )
          goto LABEL_151;
        data = (__int64)DataMasterBase_object__object__int___GetEntity(
                          v43,
                          funcId->m_Items[v44],
                          (const MethodInfo_3F10B30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( v44 >= LODWORD(DataValsList->max_length) )
          goto LABEL_152;
        v46 = data;
        if ( !data )
          goto LABEL_151;
        v47 = &baseValslist->obj.klass + (int)v44;
        v49 = (__int64)v47[4];
        v48 = (__int64 *)(v47 + 4);
        data = v49;
        if ( !v49 )
          goto LABEL_151;
        DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v43, *(_DWORD *)(v46 + 24), 0);
        if ( !v42 )
          goto LABEL_151;
        if ( v44 >= LODWORD(v42->max_length) )
          goto LABEL_152;
        v50 = &v42->obj.klass + (int)v44;
        v52 = (__int64)v50[4];
        v51 = (DataVals_o **)(v50 + 4);
        data = v52;
        if ( !v52 )
          goto LABEL_151;
        DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v43, *(_DWORD *)(v46 + 24), 0);
        DataValsList = baseValslist;
        if ( v44 >= LODWORD(baseValslist->max_length) || v44 >= LODWORD(v42->max_length) )
          goto LABEL_152;
        data = *v48;
        if ( !*v48 )
          goto LABEL_151;
        data = DataVals__CheckOverCharge((DataVals_o *)data, *v51, 0);
        if ( (data & 1) != 0 )
        {
          if ( v44 >= LODWORD(baseValslist->max_length) )
            goto LABEL_152;
          data = *v48;
          if ( !*v48 )
            goto LABEL_151;
          DataVals__SetOverCharge((DataVals_o *)data, 1, 0);
        }
        if ( v44 >= LODWORD(baseValslist->max_length) || v44 >= LODWORD(v42->max_length) )
          goto LABEL_152;
        if ( !*v51 )
          goto LABEL_151;
        data = *v48;
        if ( !*v48 )
          goto LABEL_151;
        DataVals__SetDependOverChargeFlag((DataVals_o *)data, (*v51)->fields.dependDataValsList, 0);
      }
      while ( (signed int)++v44 < SLODWORD(baseValslist->max_length) );
    }
    v53 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo);
    BattleCommandData___ctor(v53, 0);
    data = BattleServantData__getTreasureDvcId(ServantData, 1, 0, 0);
    if ( !v53 )
      goto LABEL_151;
    v53->fields.treasureDvc = data;
    v54 = (BattleBuffData_CheckIndividualitiesData_o *)sub_2213CCC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_52826232(v54, ServantData, 0, v53, 0, 0, 0, 1, 0);
    data = (__int64)BattleServantData__getNPSideEffect(ServantData, v54, 0);
    if ( !data )
      goto LABEL_151;
    v55 = (__int64)v106->fields.funcId;
    v56 = data;
    if ( *(_QWORD *)(data + 24) )
    {
      if ( !v55 )
        goto LABEL_151;
      data = sub_2213B20(int___TypeInfo, *(unsigned int *)(v55 + 24));
      if ( !v106->fields.funcId )
        goto LABEL_151;
      v55 = data;
      System_Array__CopyTo((System_Array_o *)v106->fields.funcId, (System_Array_o *)data, 0, 0);
      data = sub_200A4F4(Method_SingletonMonoBehaviour_DataManager__getInstance__);
      if ( !data )
        goto LABEL_151;
      data = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
      v57 = *(_DWORD *)(v56 + 24);
      if ( v57 >= 1 )
      {
        v58 = (SkillLvMaster_o *)data;
        v59 = 0;
        while ( (unsigned int)v59 < v57 )
        {
          v60 = *(_QWORD *)(v56 + 32 + 8 * v59);
          if ( !v60 )
            goto LABEL_151;
          v61 = *(_DWORD **)(v60 + 104);
          if ( !v61 )
            goto LABEL_151;
          if ( v61[6] < 2u )
            goto LABEL_152;
          if ( !v58 )
            goto LABEL_151;
          data = (__int64)SkillLvMaster__GetEntity(v58, v61[8], v61[9], 0);
          if ( !data )
            goto LABEL_151;
          v62 = data;
          data = (__int64)SkillLvEntity__getDataValsList((SkillLvEntity_o *)data, 0);
          v69 = *(_QWORD *)(v62 + 32);
          if ( !v69 )
            goto LABEL_151;
          if ( !*(_DWORD *)(v69 + 24) )
            goto LABEL_152;
          if ( !v55 )
            goto LABEL_151;
          v70 = *(int *)(v60 + 28);
          if ( (unsigned int)v70 >= *(_DWORD *)(v55 + 24) )
            goto LABEL_152;
          *(_DWORD *)(v55 + 4 * v70 + 32) = *(_DWORD *)(v69 + 32);
          if ( !data )
            goto LABEL_151;
          if ( !*(_DWORD *)(data + 24) )
            goto LABEL_152;
          v71 = *(DataVals_o **)(data + 32);
          if ( v71 )
          {
            data = sub_2213BB4(v71, baseValslist->obj.klass->_1.element_class);
            if ( !data )
            {
              v102 = sub_2213D00(0, v72);
              sub_2213BA0(v102, 0);
            }
          }
          if ( (unsigned int)v70 >= LODWORD(baseValslist->max_length) )
            goto LABEL_152;
          baseValslist->m_Items[v70] = v71;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&baseValslist->m_Items[v70],
            (int32_t)v71,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68);
          v57 = *(_DWORD *)(v56 + 24);
          if ( (int)++v59 >= v57 )
            goto LABEL_111;
        }
        goto LABEL_152;
      }
    }
LABEL_111:
    TreasureDvcId = BattleServantData__getTreasureDvcId(ServantData, 1, 0, 0);
    v13->fields.treasureDvcId = TreasureDvcId;
    argument = (BattleLogicFunction_FunctionArgument_o *)sub_2213CCC(BattleLogicFunction_FunctionArgument_TypeInfo);
    BattleLogicFunction_FunctionArgument___ctor(argument, 0);
    if ( v104 )
    {
      motionMessage = task->fields.motionMessage;
      isCounter = task->fields.isCounter;
      v13->fields.motionMessage = motionMessage;
      v13->fields.isCounter = isCounter;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v13->fields.motionMessage,
        (int32_t)motionMessage,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
      v13->fields._MessageType_k__BackingField = task->fields.messageType;
      if ( !argument )
        goto LABEL_151;
    }
    else
    {
      v83 = this->fields.data;
      if ( !v83 )
        goto LABEL_151;
      perf = v83->fields.perf;
      if ( !perf )
        goto LABEL_151;
      if ( !v103 )
        goto LABEL_151;
      data = (__int64)perf->fields.commandPerf;
      if ( !data )
        goto LABEL_151;
      BattlePerformanceCommandCard__UpdateRemainingCardBuff(
        (BattlePerformanceCommandCard_o *)data,
        v103->fields.actionIndex,
        0);
      v85 = (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *)sub_2213CCC(BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
      BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument___ctor(v85, 0);
      if ( !argument )
        goto LABEL_151;
      BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
        argument,
        (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v85,
        0);
    }
    data = (__int64)this->fields.logicfunction;
    argument->fields._IsSetSubstituteBuffAction_k__BackingField = 1;
    if ( data )
    {
      v33 = BattleLogicFunction__procList(
              (BattleLogicFunction_o *)data,
              v13,
              (System_Int32_array *)v55,
              baseValslist,
              0,
              1,
              0,
              0,
              1,
              1,
              1,
              argument,
              0,
              0);
      BattleServantData__checkRegainNPUsedNoble(ServantData, 0);
      data = (__int64)ServantData->fields.buffData;
      if ( data )
      {
        data = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)data, 1, 0, 0);
        if ( v104 )
        {
          if ( !v33 )
            goto LABEL_151;
          v33->fields.targetId = targetId;
          BattleActionData__setTypeTA(v33, 0);
        }
        else
        {
          ServantData->fields.tmpNp = ServantData->fields.np;
          BattleServantData__changeNp(ServantData, 0, 0, 0);
          if ( !v33 )
            goto LABEL_151;
          v33->fields.targetId = targetId;
          BattleActionData__setTypeTA(v33, 0);
          BattleActionData__setCommand(v33, v103, 0);
        }
        TreasureDvcMotionId = BattleServantData__getTreasureDvcMotionId(ServantData, 0);
        OverwriteTdMotionId = v33->fields.OverwriteTdMotionId;
        if ( OverwriteTdMotionId < 1 )
          OverwriteTdMotionId = TreasureDvcMotionId;
        v33->fields.motionId = OverwriteTdMotionId;
        data = (__int64)this->fields.logic;
        if ( data )
        {
          BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0, 0, 0);
          isForcedSpeedOne = task->fields.isForcedSpeedOne;
          data = (__int64)this->fields.data;
          v33->fields.prevattackme = 0;
          v33->fields.isForcedSpeedOne = isForcedSpeedOne;
          if ( data )
          {
            v89 = TreasureDvcId;
            BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0);
            v90 = this->fields.logic;
            if ( v90 )
            {
              v91 = v90->fields.perf;
              v92 = (BattleActionData_o *)sub_2213CCC(BattleActionData_TypeInfo);
              BattleActionData___ctor(v92, 0);
              v93 = this->fields.logic;
              if ( v93 )
              {
                v94 = v93->fields.perf;
                v95 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)sub_2213CCC(BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
                BattleActionWaitCond_UntilSideEffectInvisible___ctor(v95, v94, 0);
                if ( v92 )
                {
                  data = (__int64)BattleActionData__SetWaitCond(v92, (BattleActionWaitCond_Base_o *)v95, 0);
                  if ( v91 )
                  {
                    BattlePerformance__addActionData_52098676(v91, (BattleActionData_o *)data, 0);
                    v96 = this->fields.data;
                    v33->fields.treasureDvcId = v89;
                    BattleActionData__SetFuncTargetAllDead(v33, v96, 0);
                    v97 = this->fields.logic;
                    if ( v104 )
                    {
                      v98 = (BattleAddSkillTaskAfterCounterTreasureDevice_o *)sub_2213CCC(BattleAddSkillTaskAfterCounterTreasureDevice_TypeInfo);
                      BattleAddSkillTaskAfterCounterTreasureDevice___ctor(v98, 0);
                      if ( !v97 )
                        goto LABEL_151;
                    }
                    else
                    {
                      v98 = (BattleAddSkillTaskAfterCounterTreasureDevice_o *)sub_2213CCC(BattleAddSkillTaskAfterTreasureDevice_TypeInfo);
                      BattleAddSkillTaskAfterTreasureDevice___ctor((BattleAddSkillTaskAfterTreasureDevice_o *)v98, 0);
                      if ( !v97 )
                        goto LABEL_151;
                    }
                    BattleLogic__AddSkillTask(v97, (BattleAddSkillTaskAroundTargetTask_o *)v98, task, targetId, 0, 0);
                    data = (__int64)this->fields.data;
                    if ( ServantData->fields.isEnemy )
                    {
                      if ( !data )
                        goto LABEL_151;
                      data = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)data, 0);
                    }
                    else
                    {
                      if ( !data )
                        goto LABEL_151;
                      data = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)data, 0, 0);
                    }
                    v99 = data;
                    if ( data )
                    {
                      v100 = *(_DWORD *)(data + 24);
                      if ( v100 < 1 )
                        return v33;
                      v101 = 0;
                      while ( (unsigned int)v101 < v100 )
                      {
                        data = *(_QWORD *)(v99 + 32 + 8 * v101);
                        if ( !data )
                          goto LABEL_151;
                        BattleServantData__SetEnableLastAttackToSelfHistory((BattleServantData_o *)data, 1, 0);
                        v100 = *(_DWORD *)(v99 + 24);
                        if ( (int)++v101 >= v100 )
                          return v33;
                      }
LABEL_152:
                      sub_2213CE4(data);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_151:
    sub_2213CDC(data, baseActionData);
  }
  return v33;
}


BattleLogicTask_array *BattleLogicSpecial__taskEnemyTresureDvc(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  BattleServantData_o *EnemyServantData; // x0
  __int64 v8; // x1
  unsigned int v9; // w21
  struct System_Int32_array *e_entryid; // x8
  BattleServantData_o *v11; // x23
  __int64 v12; // x20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  System_Int32_array *FieldPlayerServantIDList; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  BattleCommandData_o *v22; // x22
  int32_t DispLimitCount; // w0
  int32_t uniqueId; // w8
  BattleComboData_o *v25; // x24
  const MethodInfo *v26; // x4
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_5973D10 & 1) == 0 )
  {
    sub_2213A60(&BattleComboData_TypeInfo);
    sub_2213A60(&BattleCommandData_TypeInfo);
    sub_2213A60(&BattleLogicTask_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_5973D10 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 16 )
    v9 = 2;
  else
    v9 = ltype == 15;
  if ( !data )
    goto LABEL_19;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_19;
  if ( v9 >= LODWORD(e_entryid->max_length) )
    sub_2213CE4(EnemyServantData);
  v8 = (unsigned int)e_entryid->m_Items[v9];
  if ( (int)v8 < 1 )
    goto LABEL_18;
  EnemyServantData = BattleData__getEnemyServantData(data, v8, 0);
  if ( !EnemyServantData )
    goto LABEL_19;
  v11 = EnemyServantData;
  if ( !EnemyServantData->fields.reservationspecial )
  {
LABEL_18:
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_2213CDC(EnemyServantData, v8);
  }
  v12 = sub_2213CCC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, v11->fields.uniqueId, v14);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0, 0);
  *(_QWORD *)(v12 + 32) = FieldPlayerServantIDList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v12 + 32),
    (int32_t)FieldPlayerServantIDList,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v22, 0);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0);
  if ( !v22 )
    goto LABEL_19;
  v22->fields._type = (int)EnemyServantData;
  DispLimitCount = BattleServantData__getDispLimitCount(v11, 1, 0);
  uniqueId = v11->fields.uniqueId;
  v22->fields.svtlimit = DispLimitCount;
  v22->fields.uniqueId = uniqueId;
  v22->fields.svtId = BattleServantData__getSvtId(v11, 0);
  v22->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  v25 = (BattleComboData_o *)sub_2213CCC(BattleComboData_TypeInfo);
  BattleComboData___ctor(v25, 0);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v25, v22, v9, v26);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  *(_DWORD *)(v12 + 88) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v12 + 92) = 1;
  *(_DWORD *)(v12 + 48) = 4;
  if ( !v6 )
    goto LABEL_19;
  items = v6->fields._items;
  v34 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v12,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v12;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 4), v12, v27, v28, v29, v30, v31, v32);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicSpecial__taskEnemyTresureDvcAlways(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  BattleServantData_o *EnemyServantData; // x0
  __int64 v8; // x1
  unsigned int v9; // w21
  struct System_Int32_array *e_entryid; // x8
  BattleServantData_o *v11; // x23
  __int64 v12; // x20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  System_Int32_array *FieldPlayerServantIDList; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  BattleCommandData_o *v22; // x22
  int32_t DispLimitCount; // w0
  int32_t uniqueId; // w8
  BattleComboData_o *v25; // x24
  const MethodInfo *v26; // x4
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_5973D11 & 1) == 0 )
  {
    sub_2213A60(&BattleComboData_TypeInfo);
    sub_2213A60(&BattleCommandData_TypeInfo);
    sub_2213A60(&BattleLogicTask_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_5973D11 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 23 )
    v9 = 2;
  else
    v9 = ltype == 22;
  if ( !data )
    goto LABEL_19;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_19;
  if ( v9 >= LODWORD(e_entryid->max_length) )
    sub_2213CE4(EnemyServantData);
  v8 = (unsigned int)e_entryid->m_Items[v9];
  if ( (int)v8 < 1 )
    goto LABEL_18;
  EnemyServantData = BattleData__getEnemyServantData(data, v8, 0);
  if ( !EnemyServantData )
    goto LABEL_19;
  v11 = EnemyServantData;
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(EnemyServantData, 1, 0, 0);
  if ( (int)EnemyServantData < 1 )
  {
LABEL_18:
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_2213CDC(EnemyServantData, v8);
  }
  v12 = sub_2213CCC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, v11->fields.uniqueId, v14);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0, 0);
  *(_QWORD *)(v12 + 32) = FieldPlayerServantIDList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v12 + 32),
    (int32_t)FieldPlayerServantIDList,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v22, 0);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0);
  if ( !v22 )
    goto LABEL_19;
  v22->fields._type = (int)EnemyServantData;
  DispLimitCount = BattleServantData__getDispLimitCount(v11, 1, 0);
  uniqueId = v11->fields.uniqueId;
  v22->fields.svtlimit = DispLimitCount;
  v22->fields.uniqueId = uniqueId;
  v22->fields.svtId = BattleServantData__getSvtId(v11, 0);
  v22->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  v25 = (BattleComboData_o *)sub_2213CCC(BattleComboData_TypeInfo);
  BattleComboData___ctor(v25, 0);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v25, v22, v9, v26);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  *(_DWORD *)(v12 + 88) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v12 + 92) = 1;
  *(_DWORD *)(v12 + 48) = 4;
  if ( !v6 )
    goto LABEL_19;
  items = v6->fields._items;
  v34 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v12,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v12;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 4), v12, v27, v28, v29, v30, v31, v32);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicSpecial__taskTresureDvc(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  BattleServantData_o *PlayerServantData; // x0
  __int64 v8; // x1
  unsigned int v9; // w21
  struct System_Int32_array *p_entryid; // x8
  BattleServantData_o *v11; // x23
  __int64 v12; // x20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  System_Int32_array *FieldEnemyServantIDList; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  BattleCommandData_o *v22; // x22
  int32_t CommandDispLimitCount; // w0
  int32_t uniqueId; // w8
  BattleComboData_o *v25; // x24
  const MethodInfo *v26; // x4
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_5973D0E & 1) == 0 )
  {
    sub_2213A60(&BattleComboData_TypeInfo);
    sub_2213A60(&BattleCommandData_TypeInfo);
    sub_2213A60(&BattleLogicTask_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_5973D0E = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 8 )
    v9 = 2;
  else
    v9 = ltype == 7;
  if ( !data )
    goto LABEL_18;
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_18;
  if ( v9 >= LODWORD(p_entryid->max_length) )
    sub_2213CE4(PlayerServantData);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v9], 0);
  if ( !PlayerServantData || (v11 = PlayerServantData, !PlayerServantData->fields.reservationspecial) )
  {
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_2213CDC(PlayerServantData, v8);
  }
  v12 = sub_2213CCC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 2, v11->fields.uniqueId, v14);
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0);
  *(_QWORD *)(v12 + 32) = FieldEnemyServantIDList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v12 + 32),
    (int32_t)FieldEnemyServantIDList,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v22, 0);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0);
  if ( !v22 )
    goto LABEL_18;
  v22->fields._type = (int)PlayerServantData;
  CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(v11, 0);
  uniqueId = v11->fields.uniqueId;
  v22->fields.svtlimit = CommandDispLimitCount;
  v22->fields.uniqueId = uniqueId;
  v22->fields.svtId = BattleServantData__getSvtId(v11, 0);
  v22->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  v25 = (BattleComboData_o *)sub_2213CCC(BattleComboData_TypeInfo);
  BattleComboData___ctor(v25, 0);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v25, v22, v9, v26);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  *(_DWORD *)(v12 + 88) = (_DWORD)PlayerServantData;
  *(_DWORD *)(v12 + 92) = 1;
  *(_DWORD *)(v12 + 48) = 4;
  if ( !v6 )
    goto LABEL_18;
  items = v6->fields._items;
  v34 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_18;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v12,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v12;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 4), v12, v27, v28, v29, v30, v31, v32);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicSpecial__taskTresureDvcAlways(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  BattleLogicTarget_o *TreasureDvcCardId; // x0
  __int64 v9; // x1
  unsigned int v10; // w22
  struct System_Int32_array *p_entryid; // x8
  BattleServantData_o *PlayerServantData; // x23
  BattleLogicTask_o *v13; // x21
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  BattleCommandData_o *v16; // x24
  int32_t CommandDispLimitCount; // w0
  int32_t uniqueId; // w8
  int32_t TreasureDvcId; // w0
  BattleComboData_c *v20; // x8
  BattleComboData_o *v21; // x25
  const MethodInfo *v22; // x4
  const MethodInfo *v23; // x3
  int32_t v24; // w8
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  if ( (byte_5973D0F & 1) == 0 )
  {
    sub_2213A60(&BattleComboData_TypeInfo);
    sub_2213A60(&BattleCommandData_TypeInfo);
    sub_2213A60(&BattleLogicTask_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_5973D0F = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 6 )
  {
    v10 = 0;
  }
  else if ( ltype == 7 )
  {
    v10 = 1;
  }
  else
  {
    v10 = 2 * (ltype == 8);
  }
  if ( !data )
    goto LABEL_21;
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_21;
  if ( v10 >= LODWORD(p_entryid->max_length) )
    sub_2213CE4(TreasureDvcCardId);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v10], 0);
  v13 = (BattleLogicTask_o *)sub_2213CCC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v13, v14);
  if ( !PlayerServantData )
    goto LABEL_21;
  if ( !v13 )
    goto LABEL_21;
  BattleLogicTask__setActor(v13, 2, PlayerServantData->fields.uniqueId, v15);
  v16 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v16, 0);
  TreasureDvcCardId = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcCardId(PlayerServantData, 0);
  if ( !v16 )
    goto LABEL_21;
  v16->fields._type = (int)TreasureDvcCardId;
  CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(PlayerServantData, 0);
  uniqueId = PlayerServantData->fields.uniqueId;
  v16->fields.svtlimit = CommandDispLimitCount;
  v16->fields.uniqueId = uniqueId;
  v16->fields.svtId = BattleServantData__getSvtId(PlayerServantData, 0);
  TreasureDvcId = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0, 0);
  v20 = BattleComboData_TypeInfo;
  v16->fields.treasureDvc = TreasureDvcId;
  v21 = (BattleComboData_o *)sub_2213CCC(v20);
  BattleComboData___ctor(v21, 0);
  BattleLogicTask__setActionCommand(v13, v21, v16, v10, v22);
  v24 = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0, 0);
  TreasureDvcCardId = this->fields.logictarget;
  v13->fields.actiontype = 4;
  v13->fields.treasureDvcId = v24;
  v13->fields.tresureDvcLv = 1;
  if ( !TreasureDvcCardId
    || (TreasureDvcCardId = (BattleLogicTarget_o *)BattleLogicTarget__getTargetBattleServantData(
                                                     TreasureDvcCardId,
                                                     v13,
                                                     v16,
                                                     v23),
        !v7)
    || (items = v7->fields._items,
        v32 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v7->fields._version,
        !items) )
  {
LABEL_21:
    sub_2213CDC(TreasureDvcCardId, v9);
  }
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)v13,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v13;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v13, v25, v26, v27, v28, v29, v30);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void BattleLogicSpecial___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973D16 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicSpecial___c_TypeInfo);
    byte_5973D16 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleLogicSpecial___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicSpecial___c_TypeInfo->static_fields->__9 = (struct BattleLogicSpecial___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleLogicSpecial___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicSpecial___c___ctor(BattleLogicSpecial___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleLogicSpecial___c___TryAddSkillTaskPreBeforeOtherTd_b__11_0(
        BattleLogicSpecial___c_o *this,
        BattleServantData_o *a,
        BattleServantData_o *b,
        const MethodInfo *method)
{
  char v4; // w19
  _BOOL4 isEnemy; // w20

  if ( !a || !b )
    sub_2213CDC(this, a);
  v4 = (char)a;
  isEnemy = b->fields.isEnemy;
  if ( !*(_DWORD *)(qword_5984328 + 228) )
    j_il2cpp_runtime_class_init_0(qword_5984328, a);
  return System_Boolean__CompareTo_76655012(v4 + 3, isEnemy, 0);
}