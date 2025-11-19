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
  const MethodInfo *v15; // x3
  BattleBuffData_BuffData_array *BuffList; // x0
  __int64 v17; // x1
  int max_length; // w8
  bool v19; // w26
  int v20; // w27
  BattleServantData_o *v21; // x24
  int32_t uniqueId; // w1
  BattleLogic_o *logic; // x25
  System_Nullable_int__o p_actorIda; // x0
  System_Nullable_int__o v25; // x4
  System_Nullable_int__o actorIda; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CB95E5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Sort_BattleServantData___);
    sub_1C6BA08(&BattleAddSkillTaskPreBeforeOtherTreasureDevice_TypeInfo);
    sub_1C6BA08(&System_Comparison_BattleServantData__TypeInfo);
    sub_1C6BA08(&Method_System_Nullable_int___ctor__);
    sub_1C6BA08(&Method_BattleLogicSpecial___c__TryAddSkillTaskPreBeforeOtherTd_b__11_0__);
    sub_1C6BA08(&BattleLogicSpecial___c_TypeInfo);
    byte_4CB95E5 = 1;
  }
  v9 = (BattleAddSkillTaskPreBeforeOtherTreasureDevice_o *)sub_1C6BC54(BattleAddSkillTaskPreBeforeOtherTreasureDevice_TypeInfo);
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
    _9__11_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_BattleServantData__TypeInfo);
    System_Comparison_object____ctor(
      _9__11_0,
      v12,
      Method_BattleLogicSpecial___c__TryAddSkillTaskPreBeforeOtherTd_b__11_0__,
      0);
    static_fields = BattleLogicSpecial___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_BattleServantData__o *)_9__11_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v14, v15);
  }
  System_Array__Sort_object__51410360(
    (System_Object_array *)svtDataList,
    _9__11_0,
    (const MethodInfo_31075B8 *)Method_System_Array_Sort_BattleServantData___);
  if ( !svtDataList )
    goto LABEL_22;
  max_length = svtDataList->max_length;
  v19 = max_length > 0;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)max_length )
        sub_1C6BC68(BuffList);
      v21 = svtDataList->m_Items[v20];
      if ( !v21 )
        break;
      if ( !v21->fields.isEntry || v21->fields.uniqueId == actorId )
        goto LABEL_26;
      BuffList = BattleServantData__getBuffList(v21, 166, 1, 0, 0);
      if ( !BuffList )
        break;
      if ( !BuffList->max_length )
        goto LABEL_26;
      uniqueId = v21->fields.uniqueId;
      logic = this->fields.logic;
      p_actorIda = (System_Nullable_int__o)&actorIda;
      actorIda = 0;
      System_Nullable_int____ctor(p_actorIda, uniqueId, (const MethodInfo_3928F98 *)Method_System_Nullable_int___ctor__);
      if ( !logic )
        break;
      v25 = actorIda;
      BuffList = (BattleBuffData_BuffData_array *)BattleLogic__AddSkillTask(
                                                    logic,
                                                    (BattleAddSkillTaskAroundTargetTask_o *)v9,
                                                    task,
                                                    actorId,
                                                    v25,
                                                    0);
      if ( ((unsigned __int8)BuffList & 1) == 0 )
      {
LABEL_26:
        max_length = svtDataList->max_length;
        v19 = ++v20 < max_length;
        if ( v20 < max_length )
          continue;
      }
      return v19;
    }
LABEL_22:
    sub_1C6BC60(BuffList, v17);
  }
  return v19;
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
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4
  BattleActionData_o *v13; // x20
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-28h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_4CB95E3 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1C6BA08(&BattleTreasureDeviceCommandData_TypeInfo);
    byte_4CB95E3 = 1;
  }
  baseActionData = 0;
  if ( !v3 )
LABEL_16:
    sub_1C6BC60(this, task);
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicSpecial_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_1C6BC68(this);
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
  v9 = (BattleTreasureDeviceCommandData_o *)sub_1C6BC54(BattleTreasureDeviceCommandData_TypeInfo);
  BattleTreasureDeviceCommandData___ctor(v9, v6, 0);
  v3->fields.command = (struct BattleCommandData_o *)v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v3->fields.command, (int32_t)v9, v10, v11);
  v13 = BattleLogicSpecial__createSpecialDataCommonFunction(v4, &baseActionData, v3, 1, v12);
  BattleServantData__ResetOverwriteTreasureDevice(v6, 0);
  this = (BattleLogicSpecial_o *)v4->fields.logic;
  if ( !this )
    goto LABEL_16;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)this, v13, baseActionData, 0);
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
  if ( (byte_4CB95E2 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4CB95E2 = 1;
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
      this = (BattleLogicSpecial_o *)this[6].monitor;
      if ( this )
      {
        this = (BattleLogicSpecial_o *)System_Collections_Generic_List_int___ToArray(
                                         (System_Collections_Generic_List_int__o *)this,
                                         (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
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
      sub_1C6BC60(this, task);
    }
LABEL_24:
    sub_1C6BC68(this);
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
  CGThumbnailListItem_o *v7; // x23
  __int64 data; // x0
  struct System_Int32_array *actorIdlist; // x8
  BattleServantData_o *ServantData; // x22
  BattleActionData_o *v12; // x24
  BattleActionData_o *v13; // x24
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  BattleActionData_o *v16; // x26
  struct System_Int32_array *v17; // x8
  int v18; // w8
  BattleLogicTarget_o *logictarget; // x23
  BattleCommandData_o *command; // x21
  UpHateData_array *Array; // x0
  const MethodInfo *v22; // x4
  int32_t v23; // w23
  Il2CppObject *MasterData_object; // x26
  TreasureDvcLvEntity_o *v25; // x29
  BattleServantData_array *FieldAliveServantArray; // x0
  const MethodInfo *v27; // x4
  BattleLogic_o *logic; // x19
  int32_t actorId; // w20
  BattleLogic_o *v31; // x26
  BattleAddSkillTaskBeforeCounterTreasureDevice_o *v32; // x27
  System_Nullable_int__o v33; // x4
  bool v34; // w0
  BattleAddSkillTaskBeforeTreasureDevice_o *v35; // x27
  System_Nullable_int__o v36; // x4
  int32_t ChainBonus; // w0
  int32_t v38; // w0
  DataVals_array *DataValsList; // x27
  DataVals_array *v40; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v41; // x29
  unsigned int v42; // w26
  struct System_Int32_array *funcId; // x8
  Il2CppClass **v44; // x21
  __int64 v45; // x27
  __int64 *v46; // x21
  __int64 v47; // t1
  Il2CppClass **v48; // x25
  DataVals_o **v49; // x25
  __int64 v50; // t1
  BattleCommandData_o *v51; // x28
  BattleBuffData_CheckIndividualitiesData_o *v52; // x27
  __int64 v53; // x28
  __int64 v54; // x25
  long double v55; // q0
  __int64 v56; // x0
  __int64 v57; // x0
  int v58; // w8
  SkillLvMaster_o *v59; // x23
  __int64 v60; // x26
  __int64 v61; // x21
  _DWORD *v62; // x8
  __int64 v63; // x29
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  __int64 v66; // x8
  __int64 v67; // x21
  Il2CppClass *v68; // x29
  Il2CppClass **v69; // x0
  int32_t TreasureDvcId; // w0
  int32_t v71; // w21
  BattleLogicFunction_FunctionArgument_o *argument; // x29
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v76; // x8
  struct BattlePerformance_o *perf; // x8
  BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *v78; // x27
  int32_t TreasureDvcMotionId; // w0
  int OverwriteTdMotionId; // w8
  struct BattleLogic_o *v81; // x8
  BattlePerformance_o *v82; // x24
  BattleActionData_o *v83; // x25
  struct BattleLogic_o *v84; // x8
  BattlePerformance_o *v85; // x27
  BattleActionWaitCond_UntilSideEffectInvisible_o *v86; // x28
  BattleLogic_o *v87; // x24
  BattleAddSkillTaskAfterCounterTreasureDevice_o *v88; // x21
  System_Nullable_int__o v89; // x4
  __int64 v90; // x19
  int v91; // w8
  unsigned int v92; // w20
  __int64 v93; // x0
  BattleCommandData_o *v94; // [xsp+30h] [xbp-80h]
  bool v95; // [xsp+38h] [xbp-78h]
  int32_t targetId; // [xsp+3Ch] [xbp-74h]
  TreasureDvcLvEntity_o *v97; // [xsp+40h] [xbp-70h]
  DataVals_array *baseValslist; // [xsp+48h] [xbp-68h]

  v7 = (CGThumbnailListItem_o *)baseActionData;
  if ( (byte_4CB95E4 & 1) == 0 )
  {
    sub_1C6BA08(&BattleActionData_TypeInfo);
    sub_1C6BA08(&BattleAddSkillTaskAfterCounterTreasureDevice_TypeInfo);
    sub_1C6BA08(&BattleAddSkillTaskAfterTreasureDevice_TypeInfo);
    sub_1C6BA08(&BattleAddSkillTaskBeforeCounterTreasureDevice_TypeInfo);
    sub_1C6BA08(&BattleAddSkillTaskBeforeTreasureDevice_TypeInfo);
    sub_1C6BA08(&BattleCommandData_TypeInfo);
    sub_1C6BA08(&BattlePerformance_TypeInfo);
    sub_1C6BA08(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C6BA08(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C6BA08(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
    sub_1C6BA08(&BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
    byte_4CB95E4 = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_152;
  BattleData__ResetWasAttackTargetId((BattleData_o *)data, 0);
  if ( !task )
    goto LABEL_152;
  if ( task->fields.IsResetFunctionedFunctionIds )
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_152;
    BattleData__ResetFunctionedFunctionIds((BattleData_o *)data, 0);
  }
  actorIdlist = task->fields.actorIdlist;
  data = (__int64)this->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      goto LABEL_153;
    baseActionData = (BattleActionData_o **)(unsigned int)actorIdlist->m_Items[0];
    if ( !data )
      goto LABEL_152;
  }
  else
  {
    baseActionData = (BattleActionData_o **)0xFFFFFFFFLL;
    if ( !data )
      goto LABEL_152;
  }
  ServantData = BattleData__getServantData((BattleData_o *)data, (int32_t)baseActionData, 0);
  v12 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v12, 0);
  if ( !v12 )
    goto LABEL_152;
  v13 = BattleActionData__AddDisplayTriggerIntervalBuff(v12, task, 0);
  v7->klass = (CGThumbnailListItem_c *)v13;
  sub_1C6B9AC(v7, (int32_t)v13, v14, v15);
  if ( !ServantData )
    goto LABEL_152;
  data = BattleServantData__isAlive(ServantData, 0, 0);
  v16 = 0;
  if ( (data & 1) != 0 )
  {
    v17 = task->fields.actorIdlist;
    if ( v17 )
    {
      if ( !LODWORD(v17->max_length) )
        goto LABEL_153;
      v18 = v17->m_Items[0];
      if ( !v13 )
        goto LABEL_152;
    }
    else
    {
      v18 = -1;
      if ( !v13 )
        goto LABEL_152;
    }
    v13->fields.actorId = v18;
    logictarget = this->fields.logictarget;
    if ( !logictarget )
      goto LABEL_152;
    command = task->fields.command;
    Array = UpHateData__MakeArray((System_Collections_Generic_IEnumerable_int__o *)task->fields.targetIdlist, 0);
    data = BattleLogicTarget__getTargetBase_47371552(logictarget, Array, 0, 1, v22);
    v13->fields.targetId = data;
    if ( (int)data < 1 )
      return 0;
    baseActionData = (BattleActionData_o **)this->fields.data;
    if ( !baseActionData )
      goto LABEL_152;
    if ( *((_BYTE *)baseActionData + 288) || *((_BYTE *)baseActionData + 289) )
      return 0;
    v23 = data;
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
      goto LABEL_152;
    }
    data = (__int64)ServantData->fields.buffData;
    if ( !data )
      goto LABEL_152;
    BattleBuffData__ResetCommandCodeBuffActiveFlg((BattleBuffData_o *)data, 0);
    data = (__int64)ServantData->fields.buffData;
    if ( !data )
      goto LABEL_152;
    BattleBuffData__ResetCommandAssistBuffActiveFlg((BattleBuffData_o *)data, 0);
    data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !data )
      goto LABEL_152;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)data,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    data = BattleServantData__getTreasureDvcId(ServantData, !isCounterOverwriteTreasureDevice, 0, 0);
    if ( !MasterData_object )
      goto LABEL_152;
    data = (__int64)TreasureDvcLvMaster__GetEntity(
                      (TreasureDvcLvMaster_o *)MasterData_object,
                      data,
                      ServantData->fields.treasuredvcLevel,
                      0);
    if ( !this->fields.data )
      goto LABEL_152;
    v25 = (TreasureDvcLvEntity_o *)data;
    FieldAliveServantArray = BattleData__GetFieldAliveServantArray(this->fields.data, 3, 1, 0, 0);
    data = BattleLogicSpecial__TryAddSkillTaskPreBeforeOtherTd(
             this,
             task,
             FieldAliveServantArray,
             v13->fields.actorId,
             v27);
    if ( (data & 1) != 0 )
    {
      if ( !isCounterOverwriteTreasureDevice )
      {
LABEL_50:
        if ( !command )
          goto LABEL_152;
        ChainBonus = BattleCommandData__getChainBonus(command, 0);
        BattleServantData__UsedTpWeapon(ServantData, ChainBonus, this->fields.data, 1, 0);
      }
      return 0;
    }
    v31 = this->fields.logic;
    targetId = v23;
    if ( !isCounterOverwriteTreasureDevice )
    {
      v35 = (BattleAddSkillTaskBeforeTreasureDevice_o *)sub_1C6BC54(BattleAddSkillTaskBeforeTreasureDevice_TypeInfo);
      BattleAddSkillTaskBeforeTreasureDevice___ctor(v35, 0);
      if ( !v31 )
        goto LABEL_152;
      v36 = 0;
      data = BattleLogic__AddSkillTask(v31, (BattleAddSkillTaskAroundTargetTask_o *)v35, task, v23, v36, 0);
      if ( (data & 1) != 0 )
        goto LABEL_50;
      data = (__int64)this->fields.logic;
      if ( !data )
        goto LABEL_152;
      BattleLogic__AddUnExecutedUpdateIntervalBuffActionData((BattleLogic_o *)data, 0);
      if ( !command )
        goto LABEL_152;
      v38 = BattleCommandData__getChainBonus(command, 0);
      BattleServantData__UsedTpWeapon(ServantData, v38, this->fields.data, 0, 0);
      goto LABEL_55;
    }
    v32 = (BattleAddSkillTaskBeforeCounterTreasureDevice_o *)sub_1C6BC54(BattleAddSkillTaskBeforeCounterTreasureDevice_TypeInfo);
    BattleAddSkillTaskBeforeCounterTreasureDevice___ctor(v32, 0);
    if ( !v31 )
      goto LABEL_152;
    v33 = 0;
    v34 = BattleLogic__AddSkillTask(v31, (BattleAddSkillTaskAroundTargetTask_o *)v32, task, v23, v33, 0);
    v16 = 0;
    if ( !v34 )
    {
LABEL_55:
      BattleServantData__BeginNoblePhantasmPerformance(ServantData, 0);
      data = (__int64)this->fields.logic;
      if ( !data )
        goto LABEL_152;
      BattleLogic__updateResultServant((BattleLogic_o *)data, 0);
      data = BattleServantData__getNpPer(ServantData, 0);
      baseActionData = isCounterOverwriteTreasureDevice
                     ? (BattleActionData_o **)(unsigned int)(100 * task->fields.counterOc)
                     : (BattleActionData_o **)(unsigned int)data;
      v13->fields.npPer = (int)baseActionData;
      if ( !v25 )
        goto LABEL_152;
      v94 = command;
      v95 = isCounterOverwriteTreasureDevice;
      DataValsList = TreasureDvcLvEntity__getDataValsList(v25, (int32_t)baseActionData, 0);
      v97 = v25;
      v40 = TreasureDvcLvEntity__getDataValsList(v25, 100, 0);
      data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !data )
        goto LABEL_152;
      data = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_FunctionMaster___);
      if ( !DataValsList )
        goto LABEL_152;
      baseValslist = DataValsList;
      if ( SLODWORD(DataValsList->max_length) >= 1 )
      {
        v41 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
        v42 = 0;
        do
        {
          funcId = v97->fields.funcId;
          if ( !funcId )
            goto LABEL_152;
          if ( v42 >= LODWORD(funcId->max_length) )
            goto LABEL_153;
          if ( !v41 )
            goto LABEL_152;
          data = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v41,
                            funcId->m_Items[v42],
                            (const MethodInfo_33F90DC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
          if ( v42 >= LODWORD(DataValsList->max_length) )
            goto LABEL_153;
          v44 = &DataValsList->obj.klass + (int)v42;
          v45 = data;
          v47 = (__int64)v44[4];
          v46 = (__int64 *)(v44 + 4);
          data = v47;
          if ( !v45 )
            goto LABEL_152;
          if ( !data )
            goto LABEL_152;
          DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v41, *(_DWORD *)(v45 + 24), 0);
          if ( !v40 )
            goto LABEL_152;
          if ( v42 >= LODWORD(v40->max_length) )
            goto LABEL_153;
          v48 = &v40->obj.klass + (int)v42;
          v50 = (__int64)v48[4];
          v49 = (DataVals_o **)(v48 + 4);
          data = v50;
          if ( !v50 )
            goto LABEL_152;
          DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v41, *(_DWORD *)(v45 + 24), 0);
          DataValsList = baseValslist;
          if ( v42 >= LODWORD(baseValslist->max_length) || v42 >= LODWORD(v40->max_length) )
            goto LABEL_153;
          data = *v46;
          if ( !*v46 )
            goto LABEL_152;
          data = DataVals__CheckOverCharge((DataVals_o *)data, *v49, 0);
          if ( (data & 1) != 0 )
          {
            if ( v42 >= LODWORD(baseValslist->max_length) )
              goto LABEL_153;
            data = *v46;
            if ( !*v46 )
              goto LABEL_152;
            DataVals__SetOverCharge((DataVals_o *)data, 1, 0);
          }
          if ( v42 >= LODWORD(baseValslist->max_length) || v42 >= LODWORD(v40->max_length) )
            goto LABEL_153;
          if ( !*v49 )
            goto LABEL_152;
          data = *v46;
          if ( !*v46 )
            goto LABEL_152;
          DataVals__SetDependOverChargeFlag((DataVals_o *)data, (*v49)->fields.dependDataValsList, 0);
        }
        while ( (signed int)++v42 < SLODWORD(baseValslist->max_length) );
      }
      v51 = (BattleCommandData_o *)sub_1C6BC54(BattleCommandData_TypeInfo);
      BattleCommandData___ctor(v51, 0);
      data = BattleServantData__getTreasureDvcId(ServantData, 1, 0, 0);
      if ( !v51 )
        goto LABEL_152;
      v51->fields.treasureDvc = data;
      v52 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C6BC54(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_45921048(v52, ServantData, 0, v51, 0, 0, 0, 1, 0);
      data = (__int64)BattleServantData__getNPSideEffect(ServantData, v52, 0);
      if ( !data )
        goto LABEL_152;
      v53 = (__int64)v97->fields.funcId;
      v54 = data;
      if ( *(_QWORD *)(data + 24) )
      {
        if ( !v53 )
          goto LABEL_152;
        data = sub_1C6BAB0(int___TypeInfo, *(unsigned int *)(v53 + 24));
        if ( !v97->fields.funcId )
          goto LABEL_152;
        v53 = data;
        System_Array__CopyTo((System_Array_o *)v97->fields.funcId, (System_Array_o *)data, 0, 0);
        v56 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
          v56 = sub_1C41A9C(v55);
        v57 = *(_QWORD *)(*(_QWORD *)(v56 + 192) + 16LL);
        if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
          v57 = sub_1C41A9C(v55);
        data = **(_QWORD **)(v57 + 184);
        if ( !data )
          goto LABEL_152;
        data = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)data,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        v58 = *(_DWORD *)(v54 + 24);
        if ( v58 >= 1 )
        {
          v59 = (SkillLvMaster_o *)data;
          v60 = 0;
          while ( (unsigned int)v60 < v58 )
          {
            v61 = *(_QWORD *)(v54 + 32 + 8 * v60);
            if ( !v61 )
              goto LABEL_152;
            v62 = *(_DWORD **)(v61 + 104);
            if ( !v62 )
              goto LABEL_152;
            if ( v62[6] < 2u )
              goto LABEL_153;
            if ( !v59 )
              goto LABEL_152;
            data = (__int64)SkillLvMaster__GetEntity(v59, v62[8], v62[9], 0);
            if ( !data )
              goto LABEL_152;
            v63 = data;
            data = (__int64)SkillLvEntity__getDataValsList((SkillLvEntity_o *)data, 0);
            v66 = *(_QWORD *)(v63 + 32);
            if ( !v66 )
              goto LABEL_152;
            if ( !*(_DWORD *)(v66 + 24) )
              goto LABEL_153;
            if ( !v53 )
              goto LABEL_152;
            v67 = *(int *)(v61 + 28);
            if ( (unsigned int)v67 >= *(_DWORD *)(v53 + 24) )
              goto LABEL_153;
            *(_DWORD *)(v53 + 4 * v67 + 32) = *(_DWORD *)(v66 + 32);
            if ( !data )
              goto LABEL_152;
            if ( !*(_DWORD *)(data + 24) )
              goto LABEL_153;
            v68 = *(Il2CppClass **)(data + 32);
            if ( v68 )
            {
              data = sub_1C6BB44(*(_QWORD *)(data + 32), baseValslist->obj.klass->_1.element_class);
              if ( !data )
              {
                v93 = sub_1C6BC84(0);
                sub_1C6BB30(v93, 0);
              }
            }
            if ( (unsigned int)v67 >= LODWORD(baseValslist->max_length) )
              goto LABEL_153;
            v69 = &baseValslist->obj.klass + v67;
            v69[4] = v68;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v69 + 4), (int32_t)v68, v64, v65);
            v58 = *(_DWORD *)(v54 + 24);
            if ( (int)++v60 >= v58 )
              goto LABEL_113;
          }
          goto LABEL_153;
        }
      }
LABEL_113:
      TreasureDvcId = BattleServantData__getTreasureDvcId(ServantData, 1, 0, 0);
      v13->fields.treasureDvcId = TreasureDvcId;
      v71 = TreasureDvcId;
      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C6BC54(BattleLogicFunction_FunctionArgument_TypeInfo);
      BattleLogicFunction_FunctionArgument___ctor(argument, 0);
      if ( v95 )
      {
        v13->fields.isCounter = task->fields.isCounter;
        motionMessage = task->fields.motionMessage;
        v13->fields.motionMessage = motionMessage;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v13->fields.motionMessage, (int32_t)motionMessage, v73, v74);
        v13->fields._MessageType_k__BackingField = task->fields.messageType;
        if ( !argument )
          goto LABEL_152;
      }
      else
      {
        v76 = this->fields.data;
        if ( !v76 )
          goto LABEL_152;
        perf = v76->fields.perf;
        if ( !perf )
          goto LABEL_152;
        if ( !v94 )
          goto LABEL_152;
        data = (__int64)perf->fields.commandPerf;
        if ( !data )
          goto LABEL_152;
        BattlePerformanceCommandCard__UpdateRemainingCardBuff(
          (BattlePerformanceCommandCard_o *)data,
          v94->fields.actionIndex,
          0);
        v78 = (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *)sub_1C6BC54(BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
        BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument___ctor(v78, 0);
        if ( !argument )
          goto LABEL_152;
        BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
          argument,
          (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v78,
          0);
      }
      argument->fields._IsSetSubstituteBuffAction_k__BackingField = 1;
      data = (__int64)this->fields.logicfunction;
      if ( data )
      {
        v16 = BattleLogicFunction__procList(
                (BattleLogicFunction_o *)data,
                v13,
                (System_Int32_array *)v53,
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
          data = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0);
          if ( !v95 )
          {
            ServantData->fields.tmpNp = ServantData->fields.np;
            BattleServantData__changeNp(ServantData, 0, 0, 0);
          }
          if ( v16 )
          {
            v16->fields.targetId = targetId;
            BattleActionData__setTypeTA(v16, 0);
            if ( !v95 )
              BattleActionData__setCommand(v16, v94, 0);
            TreasureDvcMotionId = BattleServantData__getTreasureDvcMotionId(ServantData, 0);
            OverwriteTdMotionId = v16->fields.OverwriteTdMotionId;
            if ( OverwriteTdMotionId < 1 )
              OverwriteTdMotionId = TreasureDvcMotionId;
            v16->fields.motionId = OverwriteTdMotionId;
            data = (__int64)this->fields.logic;
            if ( data )
            {
              BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0, 0, 0);
              v16->fields.prevattackme = 0;
              v16->fields.isForcedSpeedOne = task->fields.isForcedSpeedOne;
              data = (__int64)this->fields.data;
              if ( data )
              {
                BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0);
                v81 = this->fields.logic;
                if ( v81 )
                {
                  v82 = v81->fields.perf;
                  v83 = (BattleActionData_o *)sub_1C6BC54(BattleActionData_TypeInfo);
                  BattleActionData___ctor(v83, 0);
                  v84 = this->fields.logic;
                  if ( v84 )
                  {
                    v85 = v84->fields.perf;
                    v86 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)sub_1C6BC54(BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
                    BattleActionWaitCond_UntilSideEffectInvisible___ctor(v86, v85, 0);
                    if ( v83 )
                    {
                      data = (__int64)BattleActionData__SetWaitCond(v83, (BattleActionWaitCond_Base_o *)v86, 0);
                      if ( v82 )
                      {
                        BattlePerformance__addActionData_45315900(v82, (BattleActionData_o *)data, 0);
                        v16->fields.treasureDvcId = v71;
                        BattleActionData__SetFuncTargetAllDead(v16, this->fields.data, 0);
                        v87 = this->fields.logic;
                        if ( v95 )
                        {
                          v88 = (BattleAddSkillTaskAfterCounterTreasureDevice_o *)sub_1C6BC54(BattleAddSkillTaskAfterCounterTreasureDevice_TypeInfo);
                          BattleAddSkillTaskAfterCounterTreasureDevice___ctor(v88, 0);
                          if ( !v87 )
                            goto LABEL_152;
                        }
                        else
                        {
                          v88 = (BattleAddSkillTaskAfterCounterTreasureDevice_o *)sub_1C6BC54(BattleAddSkillTaskAfterTreasureDevice_TypeInfo);
                          BattleAddSkillTaskAfterTreasureDevice___ctor(
                            (BattleAddSkillTaskAfterTreasureDevice_o *)v88,
                            0);
                          if ( !v87 )
                            goto LABEL_152;
                        }
                        v89 = 0;
                        BattleLogic__AddSkillTask(
                          v87,
                          (BattleAddSkillTaskAroundTargetTask_o *)v88,
                          task,
                          targetId,
                          v89,
                          0);
                        data = (__int64)this->fields.data;
                        if ( data )
                        {
                          data = (__int64)(ServantData->fields.isEnemy
                                         ? BattleData__getFieldPlayerServantList((BattleData_o *)data, 0)
                                         : BattleData__getFieldEnemyServantList((BattleData_o *)data, 0, 0));
                          v90 = data;
                          if ( data )
                          {
                            v91 = *(_DWORD *)(data + 24);
                            if ( v91 < 1 )
                              return v16;
                            v92 = 0;
                            while ( v92 < v91 )
                            {
                              data = *(_QWORD *)(v90 + 8LL * (int)v92 + 32);
                              if ( !data )
                                goto LABEL_152;
                              BattleServantData__SetEnableLastAttackToSelfHistory((BattleServantData_o *)data, 1, 0);
                              v91 = *(_DWORD *)(v90 + 24);
                              if ( (int)++v92 >= v91 )
                                return v16;
                            }
LABEL_153:
                            sub_1C6BC68(data);
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
LABEL_152:
      sub_1C6BC60(data, baseActionData);
    }
  }
  return v16;
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
  const MethodInfo *v17; // x3
  BattleCommandData_o *v18; // x22
  BattleComboData_o *v19; // x24
  const MethodInfo *v20; // x4
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4CB95E0 & 1) == 0 )
  {
    sub_1C6BA08(&BattleComboData_TypeInfo);
    sub_1C6BA08(&BattleCommandData_TypeInfo);
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CB95E0 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1C6BC68(EnemyServantData);
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
                                        (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1C6BC60(EnemyServantData, v8);
  }
  v12 = sub_1C6BC54(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, v11->fields.uniqueId, v14);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0, 0);
  *(_QWORD *)(v12 + 32) = FieldPlayerServantIDList;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 32), (int32_t)FieldPlayerServantIDList, v16, v17);
  v18 = (BattleCommandData_o *)sub_1C6BC54(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v18, 0);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0);
  if ( !v18 )
    goto LABEL_19;
  v18->fields._type = (int)EnemyServantData;
  v18->fields.svtlimit = BattleServantData__getDispLimitCount(v11, 1, 0);
  v18->fields.uniqueId = v11->fields.uniqueId;
  v18->fields.svtId = BattleServantData__getSvtId(v11, 0);
  v18->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  v19 = (BattleComboData_o *)sub_1C6BC54(BattleComboData_TypeInfo);
  BattleComboData___ctor(v19, 0);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v19, v18, v9, v20);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  *(_DWORD *)(v12 + 48) = 4;
  *(_DWORD *)(v12 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v12 + 88) = 1;
  if ( !v6 )
    goto LABEL_19;
  items = v6->fields._items;
  v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v12,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v12;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 4), v12, v21, v22);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  const MethodInfo *v17; // x3
  BattleCommandData_o *v18; // x22
  BattleComboData_o *v19; // x24
  const MethodInfo *v20; // x4
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4CB95E1 & 1) == 0 )
  {
    sub_1C6BA08(&BattleComboData_TypeInfo);
    sub_1C6BA08(&BattleCommandData_TypeInfo);
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CB95E1 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1C6BC68(EnemyServantData);
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
                                        (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1C6BC60(EnemyServantData, v8);
  }
  v12 = sub_1C6BC54(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, v11->fields.uniqueId, v14);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0, 0);
  *(_QWORD *)(v12 + 32) = FieldPlayerServantIDList;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 32), (int32_t)FieldPlayerServantIDList, v16, v17);
  v18 = (BattleCommandData_o *)sub_1C6BC54(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v18, 0);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0);
  if ( !v18 )
    goto LABEL_19;
  v18->fields._type = (int)EnemyServantData;
  v18->fields.svtlimit = BattleServantData__getDispLimitCount(v11, 1, 0);
  v18->fields.uniqueId = v11->fields.uniqueId;
  v18->fields.svtId = BattleServantData__getSvtId(v11, 0);
  v18->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  v19 = (BattleComboData_o *)sub_1C6BC54(BattleComboData_TypeInfo);
  BattleComboData___ctor(v19, 0);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v19, v18, v9, v20);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  *(_DWORD *)(v12 + 48) = 4;
  *(_DWORD *)(v12 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v12 + 88) = 1;
  if ( !v6 )
    goto LABEL_19;
  items = v6->fields._items;
  v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v12,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v12;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 4), v12, v21, v22);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  const MethodInfo *v17; // x3
  BattleCommandData_o *v18; // x22
  BattleComboData_o *v19; // x24
  const MethodInfo *v20; // x4
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4CB95DE & 1) == 0 )
  {
    sub_1C6BA08(&BattleComboData_TypeInfo);
    sub_1C6BA08(&BattleCommandData_TypeInfo);
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CB95DE = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1C6BC68(PlayerServantData);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v9], 0);
  if ( !PlayerServantData || (v11 = PlayerServantData, !PlayerServantData->fields.reservationspecial) )
  {
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_1C6BC60(PlayerServantData, v8);
  }
  v12 = sub_1C6BC54(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 2, v11->fields.uniqueId, v14);
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0);
  *(_QWORD *)(v12 + 32) = FieldEnemyServantIDList;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 32), (int32_t)FieldEnemyServantIDList, v16, v17);
  v18 = (BattleCommandData_o *)sub_1C6BC54(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v18, 0);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0);
  if ( !v18 )
    goto LABEL_18;
  v18->fields._type = (int)PlayerServantData;
  v18->fields.svtlimit = BattleServantData__getCommandDispLimitCount(v11, 0);
  v18->fields.uniqueId = v11->fields.uniqueId;
  v18->fields.svtId = BattleServantData__getSvtId(v11, 0);
  v18->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  v19 = (BattleComboData_o *)sub_1C6BC54(BattleComboData_TypeInfo);
  BattleComboData___ctor(v19, 0);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v19, v18, v9, v20);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  *(_DWORD *)(v12 + 48) = 4;
  *(_DWORD *)(v12 + 84) = (_DWORD)PlayerServantData;
  *(_DWORD *)(v12 + 88) = 1;
  if ( !v6 )
    goto LABEL_18;
  items = v6->fields._items;
  v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_18;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v12,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v12;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 4), v12, v21, v22);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4CB95DF & 1) == 0 )
  {
    sub_1C6BA08(&BattleComboData_TypeInfo);
    sub_1C6BA08(&BattleCommandData_TypeInfo);
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CB95DF = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1C6BC68(logictarget);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v10], 0);
  v13 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo);
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
  v17 = (BattleCommandData_o *)sub_1C6BC54(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v17, 0);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcCardId(PlayerServantData, 0);
  if ( !v17 )
    goto LABEL_21;
  v17->fields._type = (int)logictarget;
  v17->fields.svtlimit = BattleServantData__getCommandDispLimitCount(PlayerServantData, 0);
  v17->fields.uniqueId = PlayerServantData->fields.uniqueId;
  v17->fields.svtId = BattleServantData__getSvtId(PlayerServantData, 0);
  v17->fields.treasureDvc = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0, 0);
  v18 = (BattleComboData_o *)sub_1C6BC54(BattleComboData_TypeInfo);
  BattleComboData___ctor(v18, 0);
  BattleLogicTask__setActionCommand(v13, v18, v17, v10, v19);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0, 0);
  v13->fields.actiontype = 4;
  v13->fields.treasureDvcId = (int)logictarget;
  v13->fields.tresureDvcLv = 1;
  if ( !v7
    || (items = v7->fields._items,
        v23 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v7->fields._version,
        !items) )
  {
LABEL_21:
    sub_1C6BC60(logictarget, v9);
  }
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)v13,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v13;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v13, v20, v21);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void BattleLogicSpecial___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB95E6 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicSpecial___c_TypeInfo);
    byte_4CB95E6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(BattleLogicSpecial___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicSpecial___c_TypeInfo->static_fields->__9 = (struct BattleLogicSpecial___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)BattleLogicSpecial___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4CB95E7 & 1) == 0 )
  {
    this = (BattleLogicSpecial___c_o *)sub_1C6BA08(&bool_TypeInfo);
    byte_4CB95E7 = 1;
  }
  if ( !a || !b )
    sub_1C6BC60(this, a);
  isEnemy = b->fields.isEnemy;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  return System_Boolean__CompareTo_65017508((_BYTE)a - 5, isEnemy, 0);
}