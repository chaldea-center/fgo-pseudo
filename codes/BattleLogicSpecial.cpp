void BattleLogicSpecial___ctor(BattleLogicSpecial_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleActionData_o *BattleLogicSpecial__createCounterOverwriteSpecialData(
        BattleLogicSpecial_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicSpecial_o *v4; // x19
  struct System_Int32_array *actorIdlist; // x8
  int32_t v6; // w1
  BattleServantData_o *v7; // x21
  bool isAlive; // w8
  BattleActionData_o *result; // x0
  BattleTreasureDeviceCommandData_o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x4
  BattleActionData_o *v14; // x20
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4C3AB37 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1C32C20(&BattleTreasureDeviceCommandData_TypeInfo);
    byte_4C3AB37 = 1;
  }
  baseActionData = 0;
  if ( !task )
LABEL_16:
    sub_1C32E7C(this);
  actorIdlist = task->fields.actorIdlist;
  this = (BattleLogicSpecial_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_1C32E84(this);
    v6 = actorIdlist->m_Items[0];
    if ( !this )
      goto LABEL_16;
  }
  else
  {
    v6 = -1;
    if ( !this )
      goto LABEL_16;
  }
  this = (BattleLogicSpecial_o *)BattleData__getServantData((BattleData_o *)this, v6, 0);
  v7 = (BattleServantData_o *)this;
  if ( task->fields.checkAlive )
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
  BattleServantData__OverwriteTreasureDevice(v7, task->fields.treasureDvcId, task->fields.tresureDvcLv, 0);
  v10 = (BattleTreasureDeviceCommandData_o *)sub_1C32E6C(BattleTreasureDeviceCommandData_TypeInfo);
  BattleTreasureDeviceCommandData___ctor(v10, v7, 0);
  task->fields.command = (struct BattleCommandData_o *)v10;
  sub_1C32BC4((CGThumbnailListItem_o *)&task->fields.command, (int32_t)v10, v11, v12);
  v14 = BattleLogicSpecial__createSpecialDataCommonFunction(v4, &baseActionData, task, 1, v13);
  BattleServantData__ResetOverwriteTreasureDevice(v7, 0);
  this = (BattleLogicSpecial_o *)v4->fields.logic;
  if ( !this )
    goto LABEL_16;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)this, v14, baseActionData, 0);
}


BattleActionData_o *BattleLogicSpecial__createSpecialData(
        BattleLogicSpecial_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicSpecial_o *v4; // x19
  struct System_Int32_array *actorIdlist; // x8
  int32_t v6; // w1
  const MethodInfo *v7; // x4
  BattleServantData_o *ServantData; // x22
  BattleActionData_o *v9; // x21
  struct System_Int32_array *v10; // x8
  BattleData_o *data; // x22
  int32_t v12; // w23
  OverwriteTreasureDeviceData_o *OverwriteTdData_k__BackingField; // x0
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4C3AB36 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4C3AB36 = 1;
  }
  baseActionData = 0;
  if ( !task )
    goto LABEL_23;
  actorIdlist = task->fields.actorIdlist;
  this = (BattleLogicSpecial_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      goto LABEL_24;
    v6 = actorIdlist->m_Items[0];
    if ( !this )
      goto LABEL_23;
  }
  else
  {
    v6 = -1;
    if ( !this )
      goto LABEL_23;
  }
  ServantData = BattleData__getServantData((BattleData_o *)this, v6, 0);
  if ( task->fields._OverwriteTdData_k__BackingField )
    OverwriteTreasureDeviceData__Overwrite(task->fields._OverwriteTdData_k__BackingField, ServantData, 0);
  this = (BattleLogicSpecial_o *)BattleLogicSpecial__createSpecialDataCommonFunction(v4, &baseActionData, task, 0, v7);
  v9 = (BattleActionData_o *)this;
  if ( this )
  {
    v10 = task->fields.actorIdlist;
    data = v4->fields.data;
    if ( !v10 )
    {
      v12 = -1;
      goto LABEL_18;
    }
    if ( LODWORD(v10->max_length) )
    {
      v12 = v10->m_Items[0];
LABEL_18:
      this = (BattleLogicSpecial_o *)this[6].monitor;
      if ( this )
      {
        this = (BattleLogicSpecial_o *)System_Collections_Generic_List_int___ToArray(
                                         (System_Collections_Generic_List_int__o *)this,
                                         (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( data )
        {
          BattleData__SetWasAttackTargetIdList(data, v12, (System_Int32_array *)this, 0);
          ((void (__fastcall *)(BattleLogicTask_o *, struct BattleData_o *, __int64, const MethodInfo *))task->klass->vtable._10_SetAttacked.methodPtr)(
            task,
            v4->fields.data,
            1,
            task->klass->vtable._10_SetAttacked.method);
          goto LABEL_21;
        }
      }
LABEL_23:
      sub_1C32E7C(this);
    }
LABEL_24:
    sub_1C32E84(this);
  }
  OverwriteTdData_k__BackingField = task->fields._OverwriteTdData_k__BackingField;
  if ( OverwriteTdData_k__BackingField )
    OverwriteTreasureDeviceData__Reset(OverwriteTdData_k__BackingField, ServantData, 0);
LABEL_21:
  this = (BattleLogicSpecial_o *)v4->fields.logic;
  if ( !this )
    goto LABEL_23;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)this, v9, baseActionData, 0);
}


BattleActionData_o *BattleLogicSpecial__createSpecialDataCommonFunction(
        BattleLogicSpecial_o *this,
        BattleActionData_o **baseActionData,
        BattleLogicTask_o *task,
        bool isCounterOverwriteTreasureDevice,
        const MethodInfo *method)
{
  __int64 data; // x0
  struct System_Int32_array *actorIdlist; // x8
  int32_t v11; // w1
  BattleServantData_o *ServantData; // x24
  BattleActionData_o *v13; // x21
  BattleActionData_o *v14; // x25
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Int32_array *v17; // x8
  int v18; // w8
  BattleLogicTarget_o *logictarget; // x21
  BattleCommandData_o *v20; // x27
  UpHateData_array *Array; // x0
  const MethodInfo *v22; // x4
  struct BattleData_o *v23; // x1
  int32_t v24; // w23
  BattleLogic_o *logic; // x19
  int32_t actorId; // w20
  BattleActionData_o *v27; // x26
  Il2CppObject *MasterData_object; // x21
  TreasureDvcLvEntity_o *Entity; // x0
  BattleLogic_o *v31; // x26
  TreasureDvcLvEntity_o *v32; // x29
  BattleAddSkillTaskBeforeCounterTreasureDevice_o *v33; // x21
  bool v34; // w0
  BattleAddSkillTaskBeforeTreasureDevice_o *v35; // x21
  int32_t ChainBonus; // w0
  int32_t v37; // w0
  int32_t v38; // w1
  DataVals_array *DataValsList; // x26
  DataVals_array *v40; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v41; // x29
  unsigned int v42; // w24
  struct System_Int32_array *funcId; // x8
  Il2CppClass **v44; // x22
  __int64 v45; // x21
  __int64 *v46; // x22
  __int64 v47; // t1
  Il2CppClass **v48; // x27
  DataVals_o **v49; // x27
  __int64 v50; // t1
  BattleCommandData_o *v51; // x28
  BattleServantData_o *v52; // x22
  BattleBuffData_CheckIndividualitiesData_o *v53; // x21
  __int64 v54; // x28
  __int64 v55; // x29
  long double v56; // q0
  __int64 v57; // x0
  __int64 v58; // x0
  int v59; // w8
  SkillLvMaster_o *v60; // x27
  __int64 v61; // x24
  __int64 v62; // x22
  __int64 v63; // x29
  _DWORD *v64; // x8
  __int64 v65; // x21
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  __int64 v68; // x8
  __int64 v69; // x29
  Il2CppClass *v70; // x21
  Il2CppClass **v71; // x0
  int32_t TreasureDvcId; // w0
  int32_t v73; // w27
  BattleLogicFunction_FunctionArgument_o *argument; // x29
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v78; // x8
  struct BattlePerformance_o *perf; // x8
  BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *v80; // x21
  int32_t TreasureDvcMotionId; // w0
  int OverwriteTdMotionId; // w8
  struct BattleLogic_o *v83; // x8
  BattlePerformance_o *v84; // x24
  BattleActionData_o *v85; // x21
  struct BattleLogic_o *v86; // x8
  BattlePerformance_o *v87; // x28
  BattleActionWaitCond_UntilSideEffectInvisible_o *v88; // x25
  BattleLogic_o *v89; // x24
  BattleAddSkillTaskAfterCounterTreasureDevice_o *v90; // x21
  __int64 v91; // x19
  int v92; // w8
  unsigned int v93; // w20
  __int64 v94; // x0
  BattleCommandData_o *command; // [xsp+30h] [xbp-80h]
  bool v96; // [xsp+3Ch] [xbp-74h]
  BattleServantData_o *v97; // [xsp+40h] [xbp-70h]
  TreasureDvcLvEntity_o *v98; // [xsp+48h] [xbp-68h]
  __int64 v99; // [xsp+48h] [xbp-68h]

  if ( (byte_4C3AB38 & 1) == 0 )
  {
    sub_1C32C20(&BattleActionData_TypeInfo);
    sub_1C32C20(&BattleAddSkillTaskAfterCounterTreasureDevice_TypeInfo);
    sub_1C32C20(&BattleAddSkillTaskAfterTreasureDevice_TypeInfo);
    sub_1C32C20(&BattleAddSkillTaskBeforeCounterTreasureDevice_TypeInfo);
    sub_1C32C20(&BattleAddSkillTaskBeforeTreasureDevice_TypeInfo);
    sub_1C32C20(&BattleCommandData_TypeInfo);
    sub_1C32C20(&BattlePerformance_TypeInfo);
    sub_1C32C20(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C32C20(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C32C20(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
    sub_1C32C20(&BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
    byte_4C3AB38 = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_146;
  BattleData__ResetWasAttackTargetId((BattleData_o *)data, 0);
  if ( !task )
    goto LABEL_146;
  if ( task->fields.IsResetFunctionedFunctionIds )
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_146;
    BattleData__ResetFunctionedFunctionIds((BattleData_o *)data, 0);
  }
  actorIdlist = task->fields.actorIdlist;
  data = (__int64)this->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      goto LABEL_147;
    v11 = actorIdlist->m_Items[0];
    if ( !data )
      goto LABEL_146;
  }
  else
  {
    v11 = -1;
    if ( !data )
      goto LABEL_146;
  }
  ServantData = BattleData__getServantData((BattleData_o *)data, v11, 0);
  v13 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0);
  if ( !v13 )
    goto LABEL_146;
  v14 = BattleActionData__AddDisplayTriggerIntervalBuff(v13, task, 0);
  *baseActionData = v14;
  sub_1C32BC4((CGThumbnailListItem_o *)baseActionData, (int32_t)v14, v15, v16);
  v17 = task->fields.actorIdlist;
  if ( v17 )
  {
    if ( !LODWORD(v17->max_length) )
      goto LABEL_147;
    v18 = v17->m_Items[0];
    if ( !v14 )
      goto LABEL_146;
  }
  else
  {
    v18 = -1;
    if ( !v14 )
      goto LABEL_146;
  }
  v14->fields.actorId = v18;
  logictarget = this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_146;
  v20 = task->fields.command;
  Array = UpHateData__MakeArray((System_Collections_Generic_IEnumerable_int__o *)task->fields.targetIdlist, 0);
  data = BattleLogicTarget__getTargetBase_46850988(logictarget, Array, 0, 1, v22);
  v14->fields.targetId = data;
  if ( (int)data < 1 )
    return 0;
  v23 = this->fields.data;
  if ( !v23 )
    goto LABEL_146;
  if ( v23->fields.leaderDown || v23->fields.endbattleFlg )
    return 0;
  if ( !ServantData )
    goto LABEL_146;
  v24 = data;
  if ( !BattleServantData__checkUseTDvc(ServantData, v23, 1, task->fields._OverwriteTdData_k__BackingField, 0)
    && !isCounterOverwriteTreasureDevice )
  {
    data = (__int64)this->fields.data;
    if ( data )
    {
      BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0);
      logic = this->fields.logic;
      actorId = v14->fields.actorId;
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
    goto LABEL_146;
  }
  data = (__int64)ServantData->fields.buffData;
  if ( !data )
    goto LABEL_146;
  BattleBuffData__ResetCommandCodeBuffActiveFlg((BattleBuffData_o *)data, 0);
  data = (__int64)ServantData->fields.buffData;
  if ( !data )
    goto LABEL_146;
  BattleBuffData__ResetCommandAssistBuffActiveFlg((BattleBuffData_o *)data, 0);
  data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_146;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  data = BattleServantData__getTreasureDvcId(ServantData, !isCounterOverwriteTreasureDevice, 0, 0);
  if ( !MasterData_object )
    goto LABEL_146;
  Entity = TreasureDvcLvMaster__GetEntity(
             (TreasureDvcLvMaster_o *)MasterData_object,
             data,
             ServantData->fields.treasuredvcLevel,
             0);
  v31 = this->fields.logic;
  v32 = Entity;
  if ( !isCounterOverwriteTreasureDevice )
  {
    v35 = (BattleAddSkillTaskBeforeTreasureDevice_o *)sub_1C32E6C(BattleAddSkillTaskBeforeTreasureDevice_TypeInfo);
    BattleAddSkillTaskBeforeTreasureDevice___ctor(v35, 0);
    if ( !v31 )
      goto LABEL_146;
    data = BattleLogic__AddSkillTask(v31, (BattleAddSkillTaskAroundTargetTask_o *)v35, task, v24, 0);
    if ( (data & 1) != 0 )
    {
      if ( !v20 )
        goto LABEL_146;
      ChainBonus = BattleCommandData__getChainBonus(v20, 0);
      BattleServantData__UsedTpWeapon(ServantData, ChainBonus, this->fields.data, 1, 0);
      return 0;
    }
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_146;
    BattleLogic__AddUnExecutedUpdateIntervalBuffActionData((BattleLogic_o *)data, 0);
    if ( !v20 )
      goto LABEL_146;
    v37 = BattleCommandData__getChainBonus(v20, 0);
    BattleServantData__UsedTpWeapon(ServantData, v37, this->fields.data, 0, 0);
    goto LABEL_49;
  }
  v33 = (BattleAddSkillTaskBeforeCounterTreasureDevice_o *)sub_1C32E6C(BattleAddSkillTaskBeforeCounterTreasureDevice_TypeInfo);
  BattleAddSkillTaskBeforeCounterTreasureDevice___ctor(v33, 0);
  if ( !v31 )
    goto LABEL_146;
  v34 = BattleLogic__AddSkillTask(v31, (BattleAddSkillTaskAroundTargetTask_o *)v33, task, v24, 0);
  v27 = 0;
  if ( !v34 )
  {
LABEL_49:
    BattleServantData__BeginNoblePhantasmPerformance(ServantData, 0);
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_146;
    BattleLogic__updateResultServant((BattleLogic_o *)data, 0);
    data = BattleServantData__getNpPer(ServantData, 0);
    v38 = isCounterOverwriteTreasureDevice ? 100 * task->fields.counterOc : data;
    v14->fields.npPer = v38;
    if ( !v32 )
      goto LABEL_146;
    command = v20;
    v97 = ServantData;
    v96 = isCounterOverwriteTreasureDevice;
    DataValsList = TreasureDvcLvEntity__getDataValsList(v32, v38, 0);
    v98 = v32;
    v40 = TreasureDvcLvEntity__getDataValsList(v32, 100, 0);
    data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !data )
      goto LABEL_146;
    data = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)data,
                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_FunctionMaster___);
    if ( !DataValsList )
      goto LABEL_146;
    if ( SLODWORD(DataValsList->max_length) >= 1 )
    {
      v41 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
      v42 = 0;
      do
      {
        funcId = v98->fields.funcId;
        if ( !funcId )
          goto LABEL_146;
        if ( v42 >= LODWORD(funcId->max_length) )
          goto LABEL_147;
        if ( !v41 )
          goto LABEL_146;
        data = (__int64)DataMasterBase_object__object__int___GetEntity(
                          v41,
                          funcId->m_Items[v42],
                          (const MethodInfo_3396838 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( v42 >= LODWORD(DataValsList->max_length) )
          goto LABEL_147;
        v44 = &DataValsList->obj.klass + (int)v42;
        v45 = data;
        v47 = (__int64)v44[4];
        v46 = (__int64 *)(v44 + 4);
        data = v47;
        if ( !v45 )
          goto LABEL_146;
        if ( !data )
          goto LABEL_146;
        DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v41, *(_DWORD *)(v45 + 24), 0);
        if ( !v40 )
          goto LABEL_146;
        if ( v42 >= LODWORD(v40->max_length) )
          goto LABEL_147;
        v48 = &v40->obj.klass + (int)v42;
        v50 = (__int64)v48[4];
        v49 = (DataVals_o **)(v48 + 4);
        data = v50;
        if ( !v50 )
          goto LABEL_146;
        DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v41, *(_DWORD *)(v45 + 24), 0);
        if ( v42 >= LODWORD(DataValsList->max_length) || v42 >= LODWORD(v40->max_length) )
          goto LABEL_147;
        data = *v46;
        if ( !*v46 )
          goto LABEL_146;
        data = DataVals__CheckOverCharge((DataVals_o *)data, *v49, 0);
        if ( (data & 1) != 0 )
        {
          if ( v42 >= LODWORD(DataValsList->max_length) )
            goto LABEL_147;
          data = *v46;
          if ( !*v46 )
            goto LABEL_146;
          DataVals__SetOverCharge((DataVals_o *)data, 1, 0);
        }
        if ( v42 >= LODWORD(DataValsList->max_length) || v42 >= LODWORD(v40->max_length) )
          goto LABEL_147;
        if ( !*v49 )
          goto LABEL_146;
        data = *v46;
        if ( !*v46 )
          goto LABEL_146;
        DataVals__SetDependOverChargeFlag((DataVals_o *)data, (*v49)->fields.dependDataValsList, 0);
      }
      while ( (signed int)++v42 < SLODWORD(DataValsList->max_length) );
    }
    v51 = (BattleCommandData_o *)sub_1C32E6C(BattleCommandData_TypeInfo);
    BattleCommandData___ctor(v51, 0);
    v52 = v97;
    data = BattleServantData__getTreasureDvcId(v97, 1, 0, 0);
    if ( !v51 )
      goto LABEL_146;
    v51->fields.treasureDvc = data;
    v53 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C32E6C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_45709708(v53, v97, 0, v51, 0, 0, 0, 1, 0);
    data = (__int64)BattleServantData__getNPSideEffect(v97, v53, 0);
    if ( !data )
      goto LABEL_146;
    v54 = (__int64)v98->fields.funcId;
    v55 = data;
    if ( *(_QWORD *)(data + 24) )
    {
      if ( !v54 )
        goto LABEL_146;
      data = sub_1C32CC8(int___TypeInfo, *(unsigned int *)(v54 + 24));
      if ( !v98->fields.funcId )
        goto LABEL_146;
      v54 = data;
      System_Array__CopyTo((System_Array_o *)v98->fields.funcId, (System_Array_o *)data, 0, 0);
      v57 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
        v57 = sub_1C83334(v56);
      v58 = *(_QWORD *)(*(_QWORD *)(v57 + 192) + 16LL);
      if ( (*(_BYTE *)(v58 + 309) & 1) == 0 )
        v58 = sub_1C83334(v56);
      data = **(_QWORD **)(v58 + 184);
      if ( !data )
        goto LABEL_146;
      data = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      v59 = *(_DWORD *)(v55 + 24);
      if ( v59 >= 1 )
      {
        v60 = (SkillLvMaster_o *)data;
        v61 = 0;
        v99 = v55 + 32;
        do
        {
          if ( (unsigned int)v61 >= v59 )
            goto LABEL_147;
          v62 = v55;
          v63 = *(_QWORD *)(v99 + 8 * v61);
          if ( !v63 )
            goto LABEL_146;
          v64 = *(_DWORD **)(v63 + 104);
          if ( !v64 )
            goto LABEL_146;
          if ( v64[6] < 2u )
            goto LABEL_147;
          if ( !v60 )
            goto LABEL_146;
          data = (__int64)SkillLvMaster__GetEntity(v60, v64[8], v64[9], 0);
          if ( !data )
            goto LABEL_146;
          v65 = data;
          data = (__int64)SkillLvEntity__getDataValsList((SkillLvEntity_o *)data, 0);
          v68 = *(_QWORD *)(v65 + 32);
          if ( !v68 )
            goto LABEL_146;
          if ( !*(_DWORD *)(v68 + 24) )
            goto LABEL_147;
          if ( !v54 )
            goto LABEL_146;
          v69 = *(int *)(v63 + 28);
          if ( (unsigned int)v69 >= *(_DWORD *)(v54 + 24) )
            goto LABEL_147;
          *(_DWORD *)(v54 + 4 * v69 + 32) = *(_DWORD *)(v68 + 32);
          if ( !data )
            goto LABEL_146;
          if ( !*(_DWORD *)(data + 24) )
            goto LABEL_147;
          v70 = *(Il2CppClass **)(data + 32);
          if ( v70 )
          {
            data = sub_1C32D5C(*(_QWORD *)(data + 32), DataValsList->obj.klass->_1.element_class);
            if ( !data )
            {
              v94 = sub_1C32EA0(0);
              sub_1C32D48(v94, 0);
            }
          }
          if ( (unsigned int)v69 >= LODWORD(DataValsList->max_length) )
            goto LABEL_147;
          v71 = &DataValsList->obj.klass + v69;
          v71[4] = v70;
          sub_1C32BC4((CGThumbnailListItem_o *)(v71 + 4), (int32_t)v70, v66, v67);
          v59 = *(_DWORD *)(v62 + 24);
          ++v61;
          v55 = v62;
        }
        while ( (int)v61 < v59 );
        v52 = v97;
      }
    }
    TreasureDvcId = BattleServantData__getTreasureDvcId(v52, 1, 0, 0);
    v14->fields.treasureDvcId = TreasureDvcId;
    v73 = TreasureDvcId;
    argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C32E6C(BattleLogicFunction_FunctionArgument_TypeInfo);
    BattleLogicFunction_FunctionArgument___ctor(argument, 0);
    if ( v96 )
    {
      v14->fields.isCounter = task->fields.isCounter;
      motionMessage = task->fields.motionMessage;
      v14->fields.motionMessage = motionMessage;
      sub_1C32BC4((CGThumbnailListItem_o *)&v14->fields.motionMessage, (int32_t)motionMessage, v75, v76);
      v14->fields._MessageType_k__BackingField = task->fields.messageType;
    }
    else
    {
      v78 = this->fields.data;
      if ( !v78 )
        goto LABEL_146;
      perf = v78->fields.perf;
      if ( !perf )
        goto LABEL_146;
      if ( !command )
        goto LABEL_146;
      data = (__int64)perf->fields.commandPerf;
      if ( !data )
        goto LABEL_146;
      BattlePerformanceCommandCard__UpdateRemainingCardBuff(
        (BattlePerformanceCommandCard_o *)data,
        command->fields.actionIndex,
        0);
      v80 = (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *)sub_1C32E6C(BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
      BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument___ctor(v80, 0);
      if ( !argument )
        goto LABEL_146;
      BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
        argument,
        (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v80,
        0);
    }
    data = (__int64)this->fields.logicfunction;
    if ( !data )
      goto LABEL_146;
    v27 = BattleLogicFunction__procList(
            (BattleLogicFunction_o *)data,
            v14,
            (System_Int32_array *)v54,
            DataValsList,
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
    BattleServantData__checkRegainNPUsedNoble(v97, 0);
    data = (__int64)v97->fields.buffData;
    if ( !data )
      goto LABEL_146;
    data = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0);
    if ( !v96 )
    {
      v97->fields.tmpNp = v97->fields.np;
      BattleServantData__changeNp(v97, 0, 0, 0);
    }
    if ( !v27 )
      goto LABEL_146;
    v27->fields.targetId = v24;
    BattleActionData__setTypeTA(v27, 0);
    if ( !v96 )
      BattleActionData__setCommand(v27, command, 0);
    TreasureDvcMotionId = BattleServantData__getTreasureDvcMotionId(v97, 0);
    OverwriteTdMotionId = v27->fields.OverwriteTdMotionId;
    if ( OverwriteTdMotionId < 1 )
      OverwriteTdMotionId = TreasureDvcMotionId;
    v27->fields.motionId = OverwriteTdMotionId;
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_146;
    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0, 0);
    v27->fields.prevattackme = 0;
    v27->fields.isForcedSpeedOne = task->fields.isForcedSpeedOne;
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_146;
    BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0);
    v83 = this->fields.logic;
    if ( !v83 )
      goto LABEL_146;
    v84 = v83->fields.perf;
    v85 = (BattleActionData_o *)sub_1C32E6C(BattleActionData_TypeInfo);
    BattleActionData___ctor(v85, 0);
    v86 = this->fields.logic;
    if ( !v86 )
      goto LABEL_146;
    v87 = v86->fields.perf;
    v88 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)sub_1C32E6C(BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
    BattleActionWaitCond_UntilSideEffectInvisible___ctor(v88, v87, 0);
    if ( !v85 )
      goto LABEL_146;
    data = (__int64)BattleActionData__SetWaitCond(v85, (BattleActionWaitCond_Base_o *)v88, 0);
    if ( !v84 )
      goto LABEL_146;
    BattlePerformance__addActionData_44964940(v84, (BattleActionData_o *)data, 0);
    v27->fields.treasureDvcId = v73;
    BattleActionData__SetFuncTargetAllDead(v27, this->fields.data, 0);
    v89 = this->fields.logic;
    if ( v96 )
    {
      v90 = (BattleAddSkillTaskAfterCounterTreasureDevice_o *)sub_1C32E6C(BattleAddSkillTaskAfterCounterTreasureDevice_TypeInfo);
      BattleAddSkillTaskAfterCounterTreasureDevice___ctor(v90, 0);
      if ( !v89 )
        goto LABEL_146;
    }
    else
    {
      v90 = (BattleAddSkillTaskAfterCounterTreasureDevice_o *)sub_1C32E6C(BattleAddSkillTaskAfterTreasureDevice_TypeInfo);
      BattleAddSkillTaskAfterTreasureDevice___ctor((BattleAddSkillTaskAfterTreasureDevice_o *)v90, 0);
      if ( !v89 )
        goto LABEL_146;
    }
    BattleLogic__AddSkillTask(v89, (BattleAddSkillTaskAroundTargetTask_o *)v90, task, v24, 0);
    data = (__int64)this->fields.data;
    if ( !data
      || (!v97->fields.isEnemy
        ? (data = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)data, 0, 0))
        : (data = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)data, 0)),
          (v91 = data) == 0) )
    {
LABEL_146:
      sub_1C32E7C(data);
    }
    v92 = *(_DWORD *)(data + 24);
    if ( v92 < 1 )
      return v27;
    v93 = 0;
    while ( v93 < v92 )
    {
      data = *(_QWORD *)(v91 + 8LL * (int)v93 + 32);
      if ( !data )
        goto LABEL_146;
      BattleServantData__SetEnableLastAttackToSelfHistory((BattleServantData_o *)data, 1, 0);
      v92 = *(_DWORD *)(v91 + 24);
      if ( (int)++v93 >= v92 )
        return v27;
    }
LABEL_147:
    sub_1C32E84(data);
  }
  return v27;
}


BattleLogicTask_array *BattleLogicSpecial__taskEnemyTresureDvc(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  BattleServantData_o *EnemyServantData; // x0
  unsigned int v8; // w21
  struct System_Int32_array *e_entryid; // x8
  int32_t v10; // w1
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

  if ( (byte_4C3AB34 & 1) == 0 )
  {
    sub_1C32C20(&BattleComboData_TypeInfo);
    sub_1C32C20(&BattleCommandData_TypeInfo);
    sub_1C32C20(&BattleLogicTask_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C3AB34 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 16 )
    v8 = 2;
  else
    v8 = ltype == 15;
  if ( !data )
    goto LABEL_19;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_19;
  if ( v8 >= LODWORD(e_entryid->max_length) )
    sub_1C32E84(EnemyServantData);
  v10 = e_entryid->m_Items[v8];
  if ( v10 < 1 )
    goto LABEL_18;
  EnemyServantData = BattleData__getEnemyServantData(data, v10, 0);
  if ( !EnemyServantData )
    goto LABEL_19;
  v11 = EnemyServantData;
  if ( !EnemyServantData->fields.reservationspecial )
  {
LABEL_18:
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1C32E7C(EnemyServantData);
  }
  v12 = sub_1C32E6C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, v11->fields.uniqueId, v14);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0, 0);
  *(_QWORD *)(v12 + 32) = FieldPlayerServantIDList;
  sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 32), (int32_t)FieldPlayerServantIDList, v16, v17);
  v18 = (BattleCommandData_o *)sub_1C32E6C(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v18, 0);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0);
  if ( !v18 )
    goto LABEL_19;
  v18->fields._type = (int)EnemyServantData;
  v18->fields.svtlimit = BattleServantData__getDispLimitCount(v11, 1, 0);
  v18->fields.uniqueId = v11->fields.uniqueId;
  v18->fields.svtId = BattleServantData__getSvtId(v11, 0);
  v18->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  v19 = (BattleComboData_o *)sub_1C32E6C(BattleComboData_TypeInfo);
  BattleComboData___ctor(v19, 0);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v19, v18, v8, v20);
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
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v12;
    sub_1C32BC4((CGThumbnailListItem_o *)(v26 + 4), v12, v21, v22);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicSpecial__taskEnemyTresureDvcAlways(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  BattleServantData_o *EnemyServantData; // x0
  unsigned int v8; // w20
  struct System_Int32_array *e_entryid; // x8
  int32_t v10; // w1
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

  if ( (byte_4C3AB35 & 1) == 0 )
  {
    sub_1C32C20(&BattleComboData_TypeInfo);
    sub_1C32C20(&BattleCommandData_TypeInfo);
    sub_1C32C20(&BattleLogicTask_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C3AB35 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 23 )
    v8 = 2;
  else
    v8 = ltype == 22;
  if ( !data )
    goto LABEL_19;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_19;
  if ( v8 >= LODWORD(e_entryid->max_length) )
    sub_1C32E84(EnemyServantData);
  v10 = e_entryid->m_Items[v8];
  if ( v10 < 1 )
    goto LABEL_18;
  EnemyServantData = BattleData__getEnemyServantData(data, v10, 0);
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
                                        (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1C32E7C(EnemyServantData);
  }
  v12 = sub_1C32E6C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, v11->fields.uniqueId, v14);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0, 0);
  *(_QWORD *)(v12 + 32) = FieldPlayerServantIDList;
  sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 32), (int32_t)FieldPlayerServantIDList, v16, v17);
  v18 = (BattleCommandData_o *)sub_1C32E6C(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v18, 0);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0);
  if ( !v18 )
    goto LABEL_19;
  v18->fields._type = (int)EnemyServantData;
  v18->fields.svtlimit = BattleServantData__getDispLimitCount(v11, 1, 0);
  v18->fields.uniqueId = v11->fields.uniqueId;
  v18->fields.svtId = BattleServantData__getSvtId(v11, 0);
  v18->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  v19 = (BattleComboData_o *)sub_1C32E6C(BattleComboData_TypeInfo);
  BattleComboData___ctor(v19, 0);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v19, v18, v8, v20);
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
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v12;
    sub_1C32BC4((CGThumbnailListItem_o *)(v26 + 4), v12, v21, v22);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicSpecial__taskTresureDvc(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  BattleServantData_o *PlayerServantData; // x0
  unsigned int v8; // w21
  struct System_Int32_array *p_entryid; // x8
  BattleServantData_o *v10; // x23
  __int64 v11; // x20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x3
  System_Int32_array *FieldEnemyServantIDList; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  BattleCommandData_o *v17; // x22
  BattleComboData_o *v18; // x24
  const MethodInfo *v19; // x4
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4C3AB32 & 1) == 0 )
  {
    sub_1C32C20(&BattleComboData_TypeInfo);
    sub_1C32C20(&BattleCommandData_TypeInfo);
    sub_1C32C20(&BattleLogicTask_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C3AB32 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 8 )
    v8 = 2;
  else
    v8 = ltype == 7;
  if ( !data )
    goto LABEL_18;
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_18;
  if ( v8 >= LODWORD(p_entryid->max_length) )
    sub_1C32E84(PlayerServantData);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v8], 0);
  if ( !PlayerServantData || (v10 = PlayerServantData, !PlayerServantData->fields.reservationspecial) )
  {
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_1C32E7C(PlayerServantData);
  }
  v11 = sub_1C32E6C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v11, v12);
  if ( !v11 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v11, 2, v10->fields.uniqueId, v13);
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0);
  *(_QWORD *)(v11 + 32) = FieldEnemyServantIDList;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 32), (int32_t)FieldEnemyServantIDList, v15, v16);
  v17 = (BattleCommandData_o *)sub_1C32E6C(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v17, 0);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v10, 0);
  if ( !v17 )
    goto LABEL_18;
  v17->fields._type = (int)PlayerServantData;
  v17->fields.svtlimit = BattleServantData__getCommandDispLimitCount(v10, 0);
  v17->fields.uniqueId = v10->fields.uniqueId;
  v17->fields.svtId = BattleServantData__getSvtId(v10, 0);
  v17->fields.treasureDvc = BattleServantData__getTreasureDvcId(v10, 1, 0, 0);
  v18 = (BattleComboData_o *)sub_1C32E6C(BattleComboData_TypeInfo);
  BattleComboData___ctor(v18, 0);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v11, v18, v17, v8, v19);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v10, 1, 0, 0);
  *(_DWORD *)(v11 + 48) = 4;
  *(_DWORD *)(v11 + 84) = (_DWORD)PlayerServantData;
  *(_DWORD *)(v11 + 88) = 1;
  if ( !v6 )
    goto LABEL_18;
  items = v6->fields._items;
  v23 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_18;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v11,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v11;
    sub_1C32BC4((CGThumbnailListItem_o *)(v25 + 4), v11, v20, v21);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicSpecial__taskTresureDvcAlways(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  BattleLogicTarget_o *logictarget; // x0
  unsigned int v9; // w21
  struct System_Int32_array *p_entryid; // x8
  BattleServantData_o *PlayerServantData; // x23
  BattleLogicTask_o *v12; // x20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  BattleCommandData_o *v16; // x22
  BattleComboData_o *v17; // x24
  const MethodInfo *v18; // x4
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4C3AB33 & 1) == 0 )
  {
    sub_1C32C20(&BattleComboData_TypeInfo);
    sub_1C32C20(&BattleCommandData_TypeInfo);
    sub_1C32C20(&BattleLogicTask_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C3AB33 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 6 )
  {
    v9 = 0;
  }
  else if ( ltype == 7 )
  {
    v9 = 1;
  }
  else
  {
    v9 = 2 * (ltype == 8);
  }
  if ( !data )
    goto LABEL_21;
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_21;
  if ( v9 >= LODWORD(p_entryid->max_length) )
    sub_1C32E84(logictarget);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v9], 0);
  v12 = (BattleLogicTask_o *)sub_1C32E6C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v12, v13);
  if ( !PlayerServantData )
    goto LABEL_21;
  if ( !v12 )
    goto LABEL_21;
  BattleLogicTask__setActor(v12, 2, PlayerServantData->fields.uniqueId, v14);
  logictarget = this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_21;
  BattleLogicTarget__getTargetBattleServantData(logictarget, v12, v15);
  v16 = (BattleCommandData_o *)sub_1C32E6C(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v16, 0);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcCardId(PlayerServantData, 0);
  if ( !v16 )
    goto LABEL_21;
  v16->fields._type = (int)logictarget;
  v16->fields.svtlimit = BattleServantData__getCommandDispLimitCount(PlayerServantData, 0);
  v16->fields.uniqueId = PlayerServantData->fields.uniqueId;
  v16->fields.svtId = BattleServantData__getSvtId(PlayerServantData, 0);
  v16->fields.treasureDvc = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0, 0);
  v17 = (BattleComboData_o *)sub_1C32E6C(BattleComboData_TypeInfo);
  BattleComboData___ctor(v17, 0);
  BattleLogicTask__setActionCommand(v12, v17, v16, v9, v18);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0, 0);
  v12->fields.actiontype = 4;
  v12->fields.treasureDvcId = (int)logictarget;
  v12->fields.tresureDvcLv = 1;
  if ( !v7
    || (items = v7->fields._items,
        v22 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v7->fields._version,
        !items) )
  {
LABEL_21:
    sub_1C32E7C(logictarget);
  }
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)v12,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v12;
    sub_1C32BC4((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v12, v19, v20);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}