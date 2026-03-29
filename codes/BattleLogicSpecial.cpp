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
  BattleLogicSpecial___c_c *v10; // x0
  System_Comparison_T__o *_9__11_0; // x24
  Il2CppObject *v12; // x25
  struct BattleLogicSpecial___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  BattleBuffData_BuffData_array *BuffList; // x0
  __int64 v21; // x1
  int max_length; // w8
  bool v23; // w26
  int v24; // w27
  BattleServantData_o *v25; // x24
  int32_t uniqueId; // w1
  BattleLogic_o *logic; // x25
  System_Nullable_int__o actorIda; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D33D48 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Sort_BattleServantData___);
    sub_1C93AD4(&BattleAddSkillTaskPreBeforeOtherTreasureDevice_TypeInfo);
    sub_1C93AD4(&System_Comparison_BattleServantData__TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_int___ctor__);
    sub_1C93AD4(&Method_BattleLogicSpecial___c__TryAddSkillTaskPreBeforeOtherTd_b__11_0__);
    sub_1C93AD4(&BattleLogicSpecial___c_TypeInfo);
    byte_4D33D48 = 1;
  }
  v9 = (BattleAddSkillTaskPreBeforeOtherTreasureDevice_o *)sub_1C93D20(BattleAddSkillTaskPreBeforeOtherTreasureDevice_TypeInfo);
  BattleAddSkillTaskPreBeforeOtherTreasureDevice___ctor(v9, 0);
  v10 = BattleLogicSpecial___c_TypeInfo;
  if ( !BattleLogicSpecial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSpecial___c_TypeInfo);
    v10 = BattleLogicSpecial___c_TypeInfo;
  }
  _9__11_0 = (System_Comparison_T__o *)v10->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = BattleLogicSpecial___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__11_0 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_BattleServantData__TypeInfo);
    System_Comparison_object____ctor(
      _9__11_0,
      v12,
      Method_BattleLogicSpecial___c__TryAddSkillTaskPreBeforeOtherTd_b__11_0__,
      0);
    static_fields = BattleLogicSpecial___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_BattleServantData__o *)_9__11_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__11_0,
      (int32_t)_9__11_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  System_Array__Sort_object__51842132(
    (System_Object_array *)svtDataList,
    _9__11_0,
    (const MethodInfo_3170C54 *)Method_System_Array_Sort_BattleServantData___);
  if ( !svtDataList )
    goto LABEL_22;
  max_length = svtDataList->max_length;
  v23 = max_length > 0;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)max_length )
        sub_1C93D34(BuffList);
      v25 = svtDataList->m_Items[v24];
      if ( !v25 )
        break;
      if ( !v25->fields.isEntry || v25->fields.uniqueId == actorId )
        goto LABEL_26;
      BuffList = BattleServantData__getBuffList(v25, 166, 1, 0, 0);
      if ( !BuffList )
        break;
      if ( !BuffList->max_length )
        goto LABEL_26;
      uniqueId = v25->fields.uniqueId;
      logic = this->fields.logic;
      actorIda = 0;
      System_Nullable_int____ctor(
        (System_Nullable_int__o)&actorIda,
        uniqueId,
        (const MethodInfo_399F80C *)Method_System_Nullable_int___ctor__);
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
        v23 = ++v24 < max_length;
        if ( v24 < max_length )
          continue;
      }
      return v23;
    }
LABEL_22:
    sub_1C93D2C(BuffList, v21);
  }
  return v23;
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x4
  BattleActionData_o *v17; // x20
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-28h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_4D33D46 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1C93AD4(&BattleTreasureDeviceCommandData_TypeInfo);
    byte_4D33D46 = 1;
  }
  baseActionData = 0;
  if ( !v3 )
LABEL_16:
    sub_1C93D2C(this, task);
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicSpecial_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_1C93D34(this);
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
  v9 = (BattleTreasureDeviceCommandData_o *)sub_1C93D20(BattleTreasureDeviceCommandData_TypeInfo);
  BattleTreasureDeviceCommandData___ctor(v9, v6, 0);
  v3->fields.command = (struct BattleCommandData_o *)v9;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->fields.command, (int32_t)v9, v10, v11, v12, v13, v14, v15);
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
  BattleData_o *data; // x22
  int32_t v11; // w23
  OverwriteTreasureDeviceData_o *OverwriteTdData_k__BackingField; // x0
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-38h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_4D33D45 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4D33D45 = 1;
  }
  baseActionData = 0;
  if ( !v3 )
    goto LABEL_23;
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicSpecial_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      goto LABEL_24;
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[0];
    if ( !this )
      goto LABEL_23;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_23;
  }
  ServantData = BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0);
  if ( v3->fields._OverwriteTdData_k__BackingField )
    OverwriteTreasureDeviceData__Overwrite(v3->fields._OverwriteTdData_k__BackingField, ServantData, 0);
  this = (BattleLogicSpecial_o *)BattleLogicSpecial__createSpecialDataCommonFunction(v4, &baseActionData, v3, 0, v6);
  v8 = (BattleActionData_o *)this;
  if ( this )
  {
    v9 = v3->fields.actorIdlist;
    data = v4->fields.data;
    if ( !v9 )
    {
      v11 = -1;
      goto LABEL_18;
    }
    if ( LODWORD(v9->max_length) )
    {
      v11 = v9->m_Items[0];
LABEL_18:
      this = (BattleLogicSpecial_o *)*((_QWORD *)this + 38);
      if ( this )
      {
        this = (BattleLogicSpecial_o *)System_Collections_Generic_List_int___ToArray(
                                         (System_Collections_Generic_List_int__o *)this,
                                         (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( data )
        {
          BattleData__SetWasAttackTargetIdList(data, v11, (System_Int32_array *)this, 0);
          ((void (__fastcall *)(BattleLogicTask_o *, struct BattleData_o *, __int64, const MethodInfo *))v3->klass->vtable._10_SetAttacked.methodPtr)(
            v3,
            v4->fields.data,
            1,
            v3->klass->vtable._10_SetAttacked.method);
          goto LABEL_21;
        }
      }
LABEL_23:
      sub_1C93D2C(this, task);
    }
LABEL_24:
    sub_1C93D34(this);
  }
  OverwriteTdData_k__BackingField = v3->fields._OverwriteTdData_k__BackingField;
  if ( OverwriteTdData_k__BackingField )
    OverwriteTreasureDeviceData__Reset(OverwriteTdData_k__BackingField, ServantData, 0);
LABEL_21:
  this = (BattleLogicSpecial_o *)v4->fields.logic;
  if ( !this )
    goto LABEL_23;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)this, v8, baseActionData, 0);
}


BattleActionData_o *BattleLogicSpecial__createSpecialDataCommonFunction(
        BattleLogicSpecial_o *this,
        BattleActionData_o **baseActionData,
        BattleLogicTask_o *task,
        bool isCounterOverwriteTreasureDevice,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *v7; // x23
  __int64 data; // x0
  struct System_Int32_array *actorIdlist; // x8
  BattleServantData_o *ServantData; // x22
  BattleActionData_o *v12; // x24
  BattleActionData_o *v13; // x24
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
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
  Il2CppClass **v46; // x25
  __int64 v47; // x27
  __int64 *v48; // x25
  __int64 v49; // t1
  Il2CppClass **v50; // x26
  DataVals_o **v51; // x26
  __int64 v52; // t1
  BattleCommandData_o *v53; // x28
  BattleBuffData_CheckIndividualitiesData_o *v54; // x27
  __int64 v55; // x28
  __int64 v56; // x26
  long double v57; // q0
  __int64 v58; // x0
  __int64 v59; // x0
  int v60; // w8
  SkillLvMaster_o *v61; // x23
  __int64 v62; // x21
  __int64 v63; // x25
  _DWORD *v64; // x8
  __int64 v65; // x29
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  __int64 v72; // x8
  __int64 v73; // x25
  Il2CppClass *v74; // x29
  Il2CppClass **v75; // x0
  int32_t TreasureDvcId; // w0
  int32_t v77; // w25
  BattleLogicFunction_FunctionArgument_o *argument; // x29
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v86; // x8
  struct BattlePerformance_o *perf; // x8
  BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *v88; // x27
  int32_t TreasureDvcMotionId; // w0
  int OverwriteTdMotionId; // w8
  int32_t v91; // w29
  struct BattleLogic_o *v92; // x8
  BattlePerformance_o *v93; // x24
  BattleActionData_o *v94; // x25
  struct BattleLogic_o *v95; // x8
  BattlePerformance_o *v96; // x27
  BattleActionWaitCond_UntilSideEffectInvisible_o *v97; // x28
  BattleLogic_o *v98; // x24
  BattleAddSkillTaskAfterCounterTreasureDevice_o *v99; // x21
  __int64 v100; // x19
  int v101; // w8
  unsigned int v102; // w20
  __int64 v103; // x0
  BattleCommandData_o *v104; // [xsp+30h] [xbp-80h]
  bool v105; // [xsp+38h] [xbp-78h]
  int32_t targetId; // [xsp+3Ch] [xbp-74h]
  TreasureDvcLvEntity_o *v107; // [xsp+40h] [xbp-70h]
  DataVals_array *baseValslist; // [xsp+48h] [xbp-68h]

  v7 = (GrandQuestFolderBoardItem_o *)baseActionData;
  if ( (byte_4D33D47 & 1) == 0 )
  {
    sub_1C93AD4(&BattleActionData_TypeInfo);
    sub_1C93AD4(&BattleAddSkillTaskAfterCounterTreasureDevice_TypeInfo);
    sub_1C93AD4(&BattleAddSkillTaskAfterTreasureDevice_TypeInfo);
    sub_1C93AD4(&BattleAddSkillTaskBeforeCounterTreasureDevice_TypeInfo);
    sub_1C93AD4(&BattleAddSkillTaskBeforeTreasureDevice_TypeInfo);
    sub_1C93AD4(&BattleCommandData_TypeInfo);
    sub_1C93AD4(&BattlePerformance_TypeInfo);
    sub_1C93AD4(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C93AD4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C93AD4(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
    sub_1C93AD4(&BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
    byte_4D33D47 = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_154;
  BattleData__ResetWasAttackTargetId((BattleData_o *)data, 0);
  if ( !task )
    goto LABEL_154;
  if ( task->fields.IsResetFunctionedFunctionIds )
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_154;
    BattleData__ResetFunctionedFunctionIds((BattleData_o *)data, 0);
  }
  actorIdlist = task->fields.actorIdlist;
  data = (__int64)this->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      goto LABEL_155;
    baseActionData = (BattleActionData_o **)(unsigned int)actorIdlist->m_Items[0];
    if ( !data )
      goto LABEL_154;
  }
  else
  {
    baseActionData = (BattleActionData_o **)0xFFFFFFFFLL;
    if ( !data )
      goto LABEL_154;
  }
  ServantData = BattleData__getServantData((BattleData_o *)data, (int32_t)baseActionData, 0);
  v12 = (BattleActionData_o *)sub_1C93D20(BattleActionData_TypeInfo);
  BattleActionData___ctor(v12, 0);
  if ( !v12 )
    goto LABEL_154;
  v13 = BattleActionData__AddDisplayTriggerIntervalBuff(v12, task, 0);
  v7->klass = (GrandQuestFolderBoardItem_c *)v13;
  sub_1C93A78(v7, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  if ( !ServantData )
    goto LABEL_154;
  data = BattleServantData__isAlive(ServantData, 0, 0);
  if ( (data & 1) == 0 && ServantData->fields.isDeadAnime )
    return 0;
  v20 = task->fields.actorIdlist;
  if ( v20 )
  {
    if ( !LODWORD(v20->max_length) )
      goto LABEL_155;
    v21 = v20->m_Items[0];
    if ( !v13 )
      goto LABEL_154;
  }
  else
  {
    v21 = -1;
    if ( !v13 )
      goto LABEL_154;
  }
  v13->fields.actorId = v21;
  logictarget = this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_154;
  command = task->fields.command;
  Array = UpHateData__MakeArray((System_Collections_Generic_IEnumerable_int__o *)task->fields.targetIdlist, 0);
  data = BattleLogicTarget__getTargetBase_47879196(logictarget, Array, 0, 1, v25);
  v13->fields.targetId = data;
  if ( (int)data < 1 )
    return 0;
  baseActionData = (BattleActionData_o **)this->fields.data;
  if ( !baseActionData )
    goto LABEL_154;
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
      if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
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
    goto LABEL_154;
  }
  data = (__int64)ServantData->fields.buffData;
  if ( !data )
    goto LABEL_154;
  BattleBuffData__ResetCommandCodeBuffActiveFlg((BattleBuffData_o *)data, 0);
  data = (__int64)ServantData->fields.buffData;
  if ( !data )
    goto LABEL_154;
  BattleBuffData__ResetCommandAssistBuffActiveFlg((BattleBuffData_o *)data, 0);
  data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_154;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  data = BattleServantData__getTreasureDvcId(ServantData, !isCounterOverwriteTreasureDevice, 0, 0);
  if ( !MasterData_object )
    goto LABEL_154;
  data = (__int64)TreasureDvcLvMaster__GetEntity(
                    (TreasureDvcLvMaster_o *)MasterData_object,
                    data,
                    ServantData->fields.treasuredvcLevel,
                    0);
  if ( !this->fields.data )
    goto LABEL_154;
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
        goto LABEL_154;
      ChainBonus = BattleCommandData__getChainBonus(command, 0);
      BattleServantData__UsedTpWeapon(ServantData, ChainBonus, this->fields.data, 1, 0);
    }
    return 0;
  }
  v35 = this->fields.logic;
  targetId = v26;
  if ( !isCounterOverwriteTreasureDevice )
  {
    v38 = (BattleAddSkillTaskBeforeTreasureDevice_o *)sub_1C93D20(BattleAddSkillTaskBeforeTreasureDevice_TypeInfo);
    BattleAddSkillTaskBeforeTreasureDevice___ctor(v38, 0);
    if ( !v35 )
      goto LABEL_154;
    data = BattleLogic__AddSkillTask(v35, (BattleAddSkillTaskAroundTargetTask_o *)v38, task, v26, 0, 0);
    if ( (data & 1) != 0 )
      goto LABEL_51;
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_154;
    BattleLogic__AddUnExecutedUpdateIntervalBuffActionData((BattleLogic_o *)data, 0);
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_154;
    BattleData__SetUsedTdInfo((BattleData_o *)data, ServantData, 0);
    if ( !command )
      goto LABEL_154;
    v40 = BattleCommandData__getChainBonus(command, 0);
    BattleServantData__UsedTpWeapon(ServantData, v40, this->fields.data, 0, 0);
    goto LABEL_57;
  }
  v36 = (BattleAddSkillTaskBeforeCounterTreasureDevice_o *)sub_1C93D20(BattleAddSkillTaskBeforeCounterTreasureDevice_TypeInfo);
  BattleAddSkillTaskBeforeCounterTreasureDevice___ctor(v36, 0);
  if ( !v35 )
    goto LABEL_154;
  v37 = BattleLogic__AddSkillTask(v35, (BattleAddSkillTaskAroundTargetTask_o *)v36, task, v26, 0, 0);
  v33 = 0;
  if ( !v37 )
  {
LABEL_57:
    BattleServantData__BeginNoblePhantasmPerformance(ServantData, 0);
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_154;
    BattleLogic__updateResultServant((BattleLogic_o *)data, 0);
    data = BattleServantData__getNpPer(ServantData, 0);
    baseActionData = isCounterOverwriteTreasureDevice
                   ? (BattleActionData_o **)(unsigned int)(100 * task->fields.counterOc)
                   : (BattleActionData_o **)(unsigned int)data;
    v13->fields.npPer = (int)baseActionData;
    if ( !v28 )
      goto LABEL_154;
    v104 = command;
    v105 = isCounterOverwriteTreasureDevice;
    DataValsList = TreasureDvcLvEntity__getDataValsList(v28, (int32_t)baseActionData, 0);
    v107 = v28;
    v42 = TreasureDvcLvEntity__getDataValsList(v28, 100, 0);
    data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !data )
      goto LABEL_154;
    data = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)data,
                      (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_FunctionMaster___);
    if ( !DataValsList )
      goto LABEL_154;
    baseValslist = DataValsList;
    if ( SLODWORD(DataValsList->max_length) >= 1 )
    {
      v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
      v44 = 0;
      do
      {
        funcId = v107->fields.funcId;
        if ( !funcId )
          goto LABEL_154;
        if ( v44 >= LODWORD(funcId->max_length) )
          goto LABEL_155;
        if ( !v43 )
          goto LABEL_154;
        data = (__int64)DataMasterBase_object__object__int___GetEntity(
                          v43,
                          funcId->m_Items[v44],
                          (const MethodInfo_3463274 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( v44 >= LODWORD(DataValsList->max_length) )
          goto LABEL_155;
        v46 = &DataValsList->obj.klass + (int)v44;
        v47 = data;
        v49 = (__int64)v46[4];
        v48 = (__int64 *)(v46 + 4);
        data = v49;
        if ( !v47 )
          goto LABEL_154;
        if ( !data )
          goto LABEL_154;
        DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v43, *(_DWORD *)(v47 + 24), 0);
        if ( !v42 )
          goto LABEL_154;
        if ( v44 >= LODWORD(v42->max_length) )
          goto LABEL_155;
        v50 = &v42->obj.klass + (int)v44;
        v52 = (__int64)v50[4];
        v51 = (DataVals_o **)(v50 + 4);
        data = v52;
        if ( !v52 )
          goto LABEL_154;
        DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v43, *(_DWORD *)(v47 + 24), 0);
        DataValsList = baseValslist;
        if ( v44 >= LODWORD(baseValslist->max_length) || v44 >= LODWORD(v42->max_length) )
          goto LABEL_155;
        data = *v48;
        if ( !*v48 )
          goto LABEL_154;
        data = DataVals__CheckOverCharge((DataVals_o *)data, *v51, 0);
        if ( (data & 1) != 0 )
        {
          if ( v44 >= LODWORD(baseValslist->max_length) )
            goto LABEL_155;
          data = *v48;
          if ( !*v48 )
            goto LABEL_154;
          DataVals__SetOverCharge((DataVals_o *)data, 1, 0);
        }
        if ( v44 >= LODWORD(baseValslist->max_length) || v44 >= LODWORD(v42->max_length) )
          goto LABEL_155;
        if ( !*v51 )
          goto LABEL_154;
        data = *v48;
        if ( !*v48 )
          goto LABEL_154;
        DataVals__SetDependOverChargeFlag((DataVals_o *)data, (*v51)->fields.dependDataValsList, 0);
      }
      while ( (signed int)++v44 < SLODWORD(baseValslist->max_length) );
    }
    v53 = (BattleCommandData_o *)sub_1C93D20(BattleCommandData_TypeInfo);
    BattleCommandData___ctor(v53, 0);
    data = BattleServantData__getTreasureDvcId(ServantData, 1, 0, 0);
    if ( !v53 )
      goto LABEL_154;
    v53->fields.treasureDvc = data;
    v54 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C93D20(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_46656028(v54, ServantData, 0, v53, 0, 0, 0, 1, 0);
    data = (__int64)BattleServantData__getNPSideEffect(ServantData, v54, 0);
    if ( !data )
      goto LABEL_154;
    v55 = (__int64)v107->fields.funcId;
    v56 = data;
    if ( *(_QWORD *)(data + 24) )
    {
      if ( !v55 )
        goto LABEL_154;
      data = sub_1C93B7C(int___TypeInfo, *(unsigned int *)(v55 + 24));
      if ( !v107->fields.funcId )
        goto LABEL_154;
      v55 = data;
      System_Array__CopyTo((System_Array_o *)v107->fields.funcId, (System_Array_o *)data, 0, 0);
      v58 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v58 + 309) & 1) == 0 )
        v58 = sub_1C69B68(v57);
      v59 = *(_QWORD *)(*(_QWORD *)(v58 + 192) + 16LL);
      if ( (*(_BYTE *)(v59 + 309) & 1) == 0 )
        v59 = sub_1C69B68(v57);
      data = **(_QWORD **)(v59 + 184);
      if ( !data )
        goto LABEL_154;
      data = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillLvMaster___);
      v60 = *(_DWORD *)(v56 + 24);
      if ( v60 >= 1 )
      {
        v61 = (SkillLvMaster_o *)data;
        v62 = 0;
        while ( (unsigned int)v62 < v60 )
        {
          v63 = *(_QWORD *)(v56 + 32 + 8 * v62);
          if ( !v63 )
            goto LABEL_154;
          v64 = *(_DWORD **)(v63 + 104);
          if ( !v64 )
            goto LABEL_154;
          if ( v64[6] < 2u )
            goto LABEL_155;
          if ( !v61 )
            goto LABEL_154;
          data = (__int64)SkillLvMaster__GetEntity(v61, v64[8], v64[9], 0);
          if ( !data )
            goto LABEL_154;
          v65 = data;
          data = (__int64)SkillLvEntity__getDataValsList((SkillLvEntity_o *)data, 0);
          v72 = *(_QWORD *)(v65 + 32);
          if ( !v72 )
            goto LABEL_154;
          if ( !*(_DWORD *)(v72 + 24) )
            goto LABEL_155;
          if ( !v55 )
            goto LABEL_154;
          v73 = *(int *)(v63 + 28);
          if ( (unsigned int)v73 >= *(_DWORD *)(v55 + 24) )
            goto LABEL_155;
          *(_DWORD *)(v55 + 4 * v73 + 32) = *(_DWORD *)(v72 + 32);
          if ( !data )
            goto LABEL_154;
          if ( !*(_DWORD *)(data + 24) )
            goto LABEL_155;
          v74 = *(Il2CppClass **)(data + 32);
          if ( v74 )
          {
            data = sub_1C93C10(v74, baseValslist->obj.klass->_1.element_class);
            if ( !data )
            {
              v103 = sub_1C93D50(0);
              sub_1C93BFC(v103, 0);
            }
          }
          if ( (unsigned int)v73 >= LODWORD(baseValslist->max_length) )
            goto LABEL_155;
          v75 = &baseValslist->obj.klass + v73;
          v75[4] = v74;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v75 + 4), (int32_t)v74, v66, v67, v68, v69, v70, v71);
          v60 = *(_DWORD *)(v56 + 24);
          if ( (int)++v62 >= v60 )
            goto LABEL_115;
        }
        goto LABEL_155;
      }
    }
LABEL_115:
    TreasureDvcId = BattleServantData__getTreasureDvcId(ServantData, 1, 0, 0);
    v13->fields.treasureDvcId = TreasureDvcId;
    v77 = TreasureDvcId;
    argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C93D20(BattleLogicFunction_FunctionArgument_TypeInfo);
    BattleLogicFunction_FunctionArgument___ctor(argument, 0);
    if ( v105 )
    {
      v13->fields.isCounter = task->fields.isCounter;
      motionMessage = task->fields.motionMessage;
      v13->fields.motionMessage = motionMessage;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&v13->fields.motionMessage,
        (int32_t)motionMessage,
        v79,
        v80,
        v81,
        v82,
        v83,
        v84);
      v13->fields._MessageType_k__BackingField = task->fields.messageType;
      if ( !argument )
        goto LABEL_154;
    }
    else
    {
      v86 = this->fields.data;
      if ( !v86 )
        goto LABEL_154;
      perf = v86->fields.perf;
      if ( !perf )
        goto LABEL_154;
      if ( !v104 )
        goto LABEL_154;
      data = (__int64)perf->fields.commandPerf;
      if ( !data )
        goto LABEL_154;
      BattlePerformanceCommandCard__UpdateRemainingCardBuff(
        (BattlePerformanceCommandCard_o *)data,
        v104->fields.actionIndex,
        0);
      v88 = (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *)sub_1C93D20(BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
      BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument___ctor(v88, 0);
      if ( !argument )
        goto LABEL_154;
      BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
        argument,
        (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v88,
        0);
    }
    argument->fields._IsSetSubstituteBuffAction_k__BackingField = 1;
    data = (__int64)this->fields.logicfunction;
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
        if ( !v105 )
        {
          ServantData->fields.tmpNp = ServantData->fields.np;
          BattleServantData__changeNp(ServantData, 0, 0, 0);
        }
        if ( v33 )
        {
          v33->fields.targetId = targetId;
          BattleActionData__setTypeTA(v33, 0);
          if ( !v105 )
            BattleActionData__setCommand(v33, v104, 0);
          TreasureDvcMotionId = BattleServantData__getTreasureDvcMotionId(ServantData, 0);
          OverwriteTdMotionId = v33->fields.OverwriteTdMotionId;
          if ( OverwriteTdMotionId < 1 )
            OverwriteTdMotionId = TreasureDvcMotionId;
          v33->fields.motionId = OverwriteTdMotionId;
          data = (__int64)this->fields.logic;
          if ( data )
          {
            BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0, 0, 0);
            v33->fields.prevattackme = 0;
            v33->fields.isForcedSpeedOne = task->fields.isForcedSpeedOne;
            data = (__int64)this->fields.data;
            if ( data )
            {
              v91 = v77;
              BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0);
              v92 = this->fields.logic;
              if ( v92 )
              {
                v93 = v92->fields.perf;
                v94 = (BattleActionData_o *)sub_1C93D20(BattleActionData_TypeInfo);
                BattleActionData___ctor(v94, 0);
                v95 = this->fields.logic;
                if ( v95 )
                {
                  v96 = v95->fields.perf;
                  v97 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)sub_1C93D20(BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
                  BattleActionWaitCond_UntilSideEffectInvisible___ctor(v97, v96, 0);
                  if ( v94 )
                  {
                    data = (__int64)BattleActionData__SetWaitCond(v94, (BattleActionWaitCond_Base_o *)v97, 0);
                    if ( v93 )
                    {
                      BattlePerformance__addActionData_45775560(v93, (BattleActionData_o *)data, 0);
                      v33->fields.treasureDvcId = v91;
                      BattleActionData__SetFuncTargetAllDead(v33, this->fields.data, 0);
                      v98 = this->fields.logic;
                      if ( v105 )
                      {
                        v99 = (BattleAddSkillTaskAfterCounterTreasureDevice_o *)sub_1C93D20(BattleAddSkillTaskAfterCounterTreasureDevice_TypeInfo);
                        BattleAddSkillTaskAfterCounterTreasureDevice___ctor(v99, 0);
                        if ( !v98 )
                          goto LABEL_154;
                      }
                      else
                      {
                        v99 = (BattleAddSkillTaskAfterCounterTreasureDevice_o *)sub_1C93D20(BattleAddSkillTaskAfterTreasureDevice_TypeInfo);
                        BattleAddSkillTaskAfterTreasureDevice___ctor((BattleAddSkillTaskAfterTreasureDevice_o *)v99, 0);
                        if ( !v98 )
                          goto LABEL_154;
                      }
                      BattleLogic__AddSkillTask(v98, (BattleAddSkillTaskAroundTargetTask_o *)v99, task, targetId, 0, 0);
                      data = (__int64)this->fields.data;
                      if ( data )
                      {
                        data = (__int64)(ServantData->fields.isEnemy
                                       ? BattleData__getFieldPlayerServantList((BattleData_o *)data, 0)
                                       : BattleData__getFieldEnemyServantList((BattleData_o *)data, 0, 0));
                        v100 = data;
                        if ( data )
                        {
                          v101 = *(_DWORD *)(data + 24);
                          if ( v101 < 1 )
                            return v33;
                          v102 = 0;
                          while ( v102 < v101 )
                          {
                            data = *(_QWORD *)(v100 + 8LL * (int)v102 + 32);
                            if ( !data )
                              goto LABEL_154;
                            BattleServantData__SetEnableLastAttackToSelfHistory((BattleServantData_o *)data, 1, 0);
                            v101 = *(_DWORD *)(v100 + 24);
                            if ( (int)++v102 >= v101 )
                              return v33;
                          }
LABEL_155:
                          sub_1C93D34(data);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_154:
    sub_1C93D2C(data, baseActionData);
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
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  BattleCommandData_o *v22; // x22
  BattleComboData_o *v23; // x24
  const MethodInfo *v24; // x4
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  if ( (byte_4D33D43 & 1) == 0 )
  {
    sub_1C93AD4(&BattleComboData_TypeInfo);
    sub_1C93AD4(&BattleCommandData_TypeInfo);
    sub_1C93AD4(&BattleLogicTask_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4D33D43 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1C93D34(EnemyServantData);
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
                                        (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1C93D2C(EnemyServantData, v8);
  }
  v12 = sub_1C93D20(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, v11->fields.uniqueId, v14);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0, 0);
  *(_QWORD *)(v12 + 32) = FieldPlayerServantIDList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)(v12 + 32),
    (int32_t)FieldPlayerServantIDList,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (BattleCommandData_o *)sub_1C93D20(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v22, 0);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0);
  if ( !v22 )
    goto LABEL_19;
  v22->fields._type = (int)EnemyServantData;
  v22->fields.svtlimit = BattleServantData__getDispLimitCount(v11, 1, 0);
  v22->fields.uniqueId = v11->fields.uniqueId;
  v22->fields.svtId = BattleServantData__getSvtId(v11, 0);
  v22->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  v23 = (BattleComboData_o *)sub_1C93D20(BattleComboData_TypeInfo);
  BattleComboData___ctor(v23, 0);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v23, v22, v9, v24);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  *(_DWORD *)(v12 + 48) = 4;
  *(_DWORD *)(v12 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v12 + 88) = 1;
  if ( !v6 )
    goto LABEL_19;
  items = v6->fields._items;
  v32 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v12,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v12;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v34 + 4), v12, v25, v26, v27, v28, v29, v30);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  unsigned int v9; // w20
  struct System_Int32_array *e_entryid; // x8
  BattleServantData_o *v11; // x23
  __int64 v12; // x21
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  System_Int32_array *FieldPlayerServantIDList; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  BattleCommandData_o *v22; // x22
  BattleComboData_o *v23; // x24
  const MethodInfo *v24; // x4
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  if ( (byte_4D33D44 & 1) == 0 )
  {
    sub_1C93AD4(&BattleComboData_TypeInfo);
    sub_1C93AD4(&BattleCommandData_TypeInfo);
    sub_1C93AD4(&BattleLogicTask_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4D33D44 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1C93D34(EnemyServantData);
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
                                        (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1C93D2C(EnemyServantData, v8);
  }
  v12 = sub_1C93D20(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, v11->fields.uniqueId, v14);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0, 0);
  *(_QWORD *)(v12 + 32) = FieldPlayerServantIDList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)(v12 + 32),
    (int32_t)FieldPlayerServantIDList,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (BattleCommandData_o *)sub_1C93D20(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v22, 0);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0);
  if ( !v22 )
    goto LABEL_19;
  v22->fields._type = (int)EnemyServantData;
  v22->fields.svtlimit = BattleServantData__getDispLimitCount(v11, 1, 0);
  v22->fields.uniqueId = v11->fields.uniqueId;
  v22->fields.svtId = BattleServantData__getSvtId(v11, 0);
  v22->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  v23 = (BattleComboData_o *)sub_1C93D20(BattleComboData_TypeInfo);
  BattleComboData___ctor(v23, 0);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v23, v22, v9, v24);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  *(_DWORD *)(v12 + 48) = 4;
  *(_DWORD *)(v12 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v12 + 88) = 1;
  if ( !v6 )
    goto LABEL_19;
  items = v6->fields._items;
  v32 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v12,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v12;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v34 + 4), v12, v25, v26, v27, v28, v29, v30);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  BattleCommandData_o *v22; // x22
  BattleComboData_o *v23; // x24
  const MethodInfo *v24; // x4
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  if ( (byte_4D33D41 & 1) == 0 )
  {
    sub_1C93AD4(&BattleComboData_TypeInfo);
    sub_1C93AD4(&BattleCommandData_TypeInfo);
    sub_1C93AD4(&BattleLogicTask_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4D33D41 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1C93D34(PlayerServantData);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v9], 0);
  if ( !PlayerServantData || (v11 = PlayerServantData, !PlayerServantData->fields.reservationspecial) )
  {
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_1C93D2C(PlayerServantData, v8);
  }
  v12 = sub_1C93D20(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 2, v11->fields.uniqueId, v14);
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0);
  *(_QWORD *)(v12 + 32) = FieldEnemyServantIDList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v12 + 32), (int32_t)FieldEnemyServantIDList, v16, v17, v18, v19, v20, v21);
  v22 = (BattleCommandData_o *)sub_1C93D20(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v22, 0);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0);
  if ( !v22 )
    goto LABEL_18;
  v22->fields._type = (int)PlayerServantData;
  v22->fields.svtlimit = BattleServantData__getCommandDispLimitCount(v11, 0);
  v22->fields.uniqueId = v11->fields.uniqueId;
  v22->fields.svtId = BattleServantData__getSvtId(v11, 0);
  v22->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  v23 = (BattleComboData_o *)sub_1C93D20(BattleComboData_TypeInfo);
  BattleComboData___ctor(v23, 0);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v23, v22, v9, v24);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  *(_DWORD *)(v12 + 48) = 4;
  *(_DWORD *)(v12 + 84) = (_DWORD)PlayerServantData;
  *(_DWORD *)(v12 + 88) = 1;
  if ( !v6 )
    goto LABEL_18;
  items = v6->fields._items;
  v32 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_18;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v12,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v12;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v34 + 4), v12, v25, v26, v27, v28, v29, v30);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicSpecial__taskTresureDvcAlways(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  BattleLogicTarget_o *logictarget; // x0
  __int64 v9; // x1
  unsigned int v10; // w21
  struct System_Int32_array *p_entryid; // x8
  BattleServantData_o *PlayerServantData; // x23
  BattleLogicTask_o *v13; // x20
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  BattleCommandData_o *v17; // x22
  BattleComboData_o *v18; // x24
  const MethodInfo *v19; // x4
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4D33D42 & 1) == 0 )
  {
    sub_1C93AD4(&BattleComboData_TypeInfo);
    sub_1C93AD4(&BattleCommandData_TypeInfo);
    sub_1C93AD4(&BattleLogicTask_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4D33D42 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1C93D34(logictarget);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v10], 0);
  v13 = (BattleLogicTask_o *)sub_1C93D20(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v13, v14);
  if ( !PlayerServantData )
    goto LABEL_21;
  if ( !v13 )
    goto LABEL_21;
  BattleLogicTask__setActor(v13, 2, PlayerServantData->fields.uniqueId, v15);
  logictarget = this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_21;
  BattleLogicTarget__getTargetBattleServantData(logictarget, v13, v16);
  v17 = (BattleCommandData_o *)sub_1C93D20(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v17, 0);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcCardId(PlayerServantData, 0);
  if ( !v17 )
    goto LABEL_21;
  v17->fields._type = (int)logictarget;
  v17->fields.svtlimit = BattleServantData__getCommandDispLimitCount(PlayerServantData, 0);
  v17->fields.uniqueId = PlayerServantData->fields.uniqueId;
  v17->fields.svtId = BattleServantData__getSvtId(PlayerServantData, 0);
  v17->fields.treasureDvc = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0, 0);
  v18 = (BattleComboData_o *)sub_1C93D20(BattleComboData_TypeInfo);
  BattleComboData___ctor(v18, 0);
  BattleLogicTask__setActionCommand(v13, v18, v17, v10, v19);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0, 0);
  v13->fields.actiontype = 4;
  v13->fields.treasureDvcId = (int)logictarget;
  v13->fields.tresureDvcLv = 1;
  if ( !v7
    || (items = v7->fields._items,
        v27 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v7->fields._version,
        !items) )
  {
LABEL_21:
    sub_1C93D2C(logictarget, v9);
  }
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)v13,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v13;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v29 + 4), (int32_t)v13, v20, v21, v22, v23, v24, v25);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void BattleLogicSpecial___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D33D49 & 1) == 0 )
  {
    sub_1C93AD4(&BattleLogicSpecial___c_TypeInfo);
    byte_4D33D49 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(BattleLogicSpecial___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicSpecial___c_TypeInfo->static_fields->__9 = (struct BattleLogicSpecial___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)BattleLogicSpecial___c_TypeInfo->static_fields,
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
  _BOOL4 isEnemy; // w20

  if ( (byte_4D33D4A & 1) == 0 )
  {
    this = (BattleLogicSpecial___c_o *)sub_1C93AD4(&bool_TypeInfo);
    byte_4D33D4A = 1;
  }
  if ( !a || !b )
    sub_1C93D2C(this, a);
  isEnemy = b->fields.isEnemy;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  return System_Boolean__CompareTo_65476440((_BYTE)a + 3, isEnemy, 0);
}