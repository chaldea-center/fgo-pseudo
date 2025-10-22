void BattleLogicSpecial___ctor(BattleLogicSpecial_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
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
  if ( (byte_4C5A023 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1C3E564(&BattleTreasureDeviceCommandData_TypeInfo);
    byte_4C5A023 = 1;
  }
  baseActionData = 0;
  if ( !v3 )
LABEL_16:
    sub_1C3E7C0(this, task);
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicSpecial_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_1C3E7C8(this, task);
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
  v9 = (BattleTreasureDeviceCommandData_o *)sub_1C3E7B0(BattleTreasureDeviceCommandData_TypeInfo);
  BattleTreasureDeviceCommandData___ctor(v9, v6, 0);
  v3->fields.command = (struct BattleCommandData_o *)v9;
  sub_1C3E508((CGThumbnailListItem_o *)&v3->fields.command, (int32_t)v9, v10, v11);
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
  if ( (byte_4C5A022 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4C5A022 = 1;
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
                                         (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
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
      sub_1C3E7C0(this, task);
    }
LABEL_24:
    sub_1C3E7C8(this, task);
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
  BattleServantData_o *ServantData; // x24
  BattleActionData_o *v12; // x21
  BattleActionData_o *v13; // x25
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Int32_array *v16; // x8
  int v17; // w8
  BattleLogicTarget_o *logictarget; // x21
  BattleCommandData_o *v19; // x27
  UpHateData_array *Array; // x0
  const MethodInfo *v21; // x4
  int32_t v22; // w23
  BattleLogic_o *logic; // x19
  int32_t actorId; // w20
  BattleActionData_o *v25; // x26
  Il2CppObject *MasterData_object; // x21
  TreasureDvcLvEntity_o *Entity; // x0
  BattleLogic_o *v29; // x26
  TreasureDvcLvEntity_o *v30; // x29
  BattleAddSkillTaskBeforeCounterTreasureDevice_o *v31; // x21
  bool v32; // w0
  BattleAddSkillTaskBeforeTreasureDevice_o *v33; // x21
  int32_t ChainBonus; // w0
  int32_t v35; // w0
  DataVals_array *DataValsList; // x26
  DataVals_array *v37; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v38; // x29
  unsigned int v39; // w24
  struct System_Int32_array *funcId; // x8
  Il2CppClass **v41; // x22
  __int64 v42; // x21
  __int64 *v43; // x22
  __int64 v44; // t1
  Il2CppClass **v45; // x27
  DataVals_o **v46; // x27
  __int64 v47; // t1
  BattleCommandData_o *v48; // x28
  BattleServantData_o *v49; // x22
  BattleBuffData_CheckIndividualitiesData_o *v50; // x21
  __int64 v51; // x28
  __int64 v52; // x29
  long double v53; // q0
  __int64 v54; // x0
  __int64 v55; // x0
  int v56; // w8
  SkillLvMaster_o *v57; // x27
  __int64 v58; // x24
  __int64 v59; // x22
  __int64 v60; // x29
  _DWORD *v61; // x8
  __int64 v62; // x21
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  __int64 v65; // x8
  __int64 v66; // x29
  Il2CppClass *v67; // x21
  Il2CppClass **v68; // x0
  int32_t TreasureDvcId; // w0
  int32_t v70; // w27
  BattleLogicFunction_FunctionArgument_o *argument; // x29
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v75; // x8
  struct BattlePerformance_o *perf; // x8
  BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *v77; // x21
  int32_t TreasureDvcMotionId; // w0
  int OverwriteTdMotionId; // w8
  struct BattleLogic_o *v80; // x8
  BattlePerformance_o *v81; // x24
  BattleActionData_o *v82; // x21
  struct BattleLogic_o *v83; // x8
  BattlePerformance_o *v84; // x28
  BattleActionWaitCond_UntilSideEffectInvisible_o *v85; // x25
  BattleLogic_o *v86; // x24
  BattleAddSkillTaskAfterCounterTreasureDevice_o *v87; // x21
  __int64 v88; // x19
  int v89; // w8
  unsigned int v90; // w20
  __int64 v91; // x0
  BattleCommandData_o *command; // [xsp+30h] [xbp-80h]
  bool v93; // [xsp+3Ch] [xbp-74h]
  BattleServantData_o *v94; // [xsp+40h] [xbp-70h]
  TreasureDvcLvEntity_o *v95; // [xsp+48h] [xbp-68h]
  __int64 v96; // [xsp+48h] [xbp-68h]

  v7 = (CGThumbnailListItem_o *)baseActionData;
  if ( (byte_4C5A024 & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    sub_1C3E564(&BattleAddSkillTaskAfterCounterTreasureDevice_TypeInfo);
    sub_1C3E564(&BattleAddSkillTaskAfterTreasureDevice_TypeInfo);
    sub_1C3E564(&BattleAddSkillTaskBeforeCounterTreasureDevice_TypeInfo);
    sub_1C3E564(&BattleAddSkillTaskBeforeTreasureDevice_TypeInfo);
    sub_1C3E564(&BattleCommandData_TypeInfo);
    sub_1C3E564(&BattlePerformance_TypeInfo);
    sub_1C3E564(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C3E564(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C3E564(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
    sub_1C3E564(&BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
    byte_4C5A024 = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_147;
  BattleData__ResetWasAttackTargetId((BattleData_o *)data, 0);
  if ( !task )
    goto LABEL_147;
  if ( task->fields.IsResetFunctionedFunctionIds )
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_147;
    BattleData__ResetFunctionedFunctionIds((BattleData_o *)data, 0);
  }
  actorIdlist = task->fields.actorIdlist;
  data = (__int64)this->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      goto LABEL_148;
    baseActionData = (BattleActionData_o **)(unsigned int)actorIdlist->m_Items[0];
    if ( !data )
      goto LABEL_147;
  }
  else
  {
    baseActionData = (BattleActionData_o **)0xFFFFFFFFLL;
    if ( !data )
      goto LABEL_147;
  }
  ServantData = BattleData__getServantData((BattleData_o *)data, (int32_t)baseActionData, 0);
  v12 = (BattleActionData_o *)sub_1C3E7B0(BattleActionData_TypeInfo);
  BattleActionData___ctor(v12, 0);
  if ( !v12 )
    goto LABEL_147;
  v13 = BattleActionData__AddDisplayTriggerIntervalBuff(v12, task, 0);
  v7->klass = (CGThumbnailListItem_c *)v13;
  sub_1C3E508(v7, (int32_t)v13, v14, v15);
  v16 = task->fields.actorIdlist;
  if ( v16 )
  {
    if ( !LODWORD(v16->max_length) )
      goto LABEL_148;
    v17 = v16->m_Items[0];
    if ( !v13 )
      goto LABEL_147;
  }
  else
  {
    v17 = -1;
    if ( !v13 )
      goto LABEL_147;
  }
  v13->fields.actorId = v17;
  logictarget = this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_147;
  v19 = task->fields.command;
  Array = UpHateData__MakeArray((System_Collections_Generic_IEnumerable_int__o *)task->fields.targetIdlist, 0);
  data = BattleLogicTarget__getTargetBase_47146204(logictarget, Array, 0, 1, v21);
  v13->fields.targetId = data;
  if ( (int)data < 1 )
    return 0;
  baseActionData = (BattleActionData_o **)this->fields.data;
  if ( !baseActionData )
    goto LABEL_147;
  if ( *((_BYTE *)baseActionData + 288) || *((_BYTE *)baseActionData + 289) )
    return 0;
  if ( !ServantData )
    goto LABEL_147;
  v22 = data;
  if ( !BattleServantData__checkUseTDvc(
          ServantData,
          (BattleData_o *)baseActionData,
          1,
          task->fields._OverwriteTdData_k__BackingField,
          0)
    && !isCounterOverwriteTreasureDevice )
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
    goto LABEL_147;
  }
  data = (__int64)ServantData->fields.buffData;
  if ( !data )
    goto LABEL_147;
  BattleBuffData__ResetCommandCodeBuffActiveFlg((BattleBuffData_o *)data, 0);
  data = (__int64)ServantData->fields.buffData;
  if ( !data )
    goto LABEL_147;
  BattleBuffData__ResetCommandAssistBuffActiveFlg((BattleBuffData_o *)data, 0);
  data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_147;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  data = BattleServantData__getTreasureDvcId(ServantData, !isCounterOverwriteTreasureDevice, 0, 0);
  if ( !MasterData_object )
    goto LABEL_147;
  Entity = TreasureDvcLvMaster__GetEntity(
             (TreasureDvcLvMaster_o *)MasterData_object,
             data,
             ServantData->fields.treasuredvcLevel,
             0);
  v29 = this->fields.logic;
  v30 = Entity;
  if ( !isCounterOverwriteTreasureDevice )
  {
    v33 = (BattleAddSkillTaskBeforeTreasureDevice_o *)sub_1C3E7B0(BattleAddSkillTaskBeforeTreasureDevice_TypeInfo);
    BattleAddSkillTaskBeforeTreasureDevice___ctor(v33, 0);
    if ( !v29 )
      goto LABEL_147;
    data = BattleLogic__AddSkillTask(v29, (BattleAddSkillTaskAroundTargetTask_o *)v33, task, v22, 0);
    if ( (data & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_147;
      ChainBonus = BattleCommandData__getChainBonus(v19, 0);
      BattleServantData__UsedTpWeapon(ServantData, ChainBonus, this->fields.data, 1, 0);
      return 0;
    }
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_147;
    BattleLogic__AddUnExecutedUpdateIntervalBuffActionData((BattleLogic_o *)data, 0);
    if ( !v19 )
      goto LABEL_147;
    v35 = BattleCommandData__getChainBonus(v19, 0);
    BattleServantData__UsedTpWeapon(ServantData, v35, this->fields.data, 0, 0);
    goto LABEL_49;
  }
  v31 = (BattleAddSkillTaskBeforeCounterTreasureDevice_o *)sub_1C3E7B0(BattleAddSkillTaskBeforeCounterTreasureDevice_TypeInfo);
  BattleAddSkillTaskBeforeCounterTreasureDevice___ctor(v31, 0);
  if ( !v29 )
    goto LABEL_147;
  v32 = BattleLogic__AddSkillTask(v29, (BattleAddSkillTaskAroundTargetTask_o *)v31, task, v22, 0);
  v25 = 0;
  if ( !v32 )
  {
LABEL_49:
    BattleServantData__BeginNoblePhantasmPerformance(ServantData, 0);
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_147;
    BattleLogic__updateResultServant((BattleLogic_o *)data, 0);
    data = BattleServantData__getNpPer(ServantData, 0);
    baseActionData = isCounterOverwriteTreasureDevice
                   ? (BattleActionData_o **)(unsigned int)(100 * task->fields.counterOc)
                   : (BattleActionData_o **)(unsigned int)data;
    v13->fields.npPer = (int)baseActionData;
    if ( !v30 )
      goto LABEL_147;
    command = v19;
    v94 = ServantData;
    v93 = isCounterOverwriteTreasureDevice;
    DataValsList = TreasureDvcLvEntity__getDataValsList(v30, (int32_t)baseActionData, 0);
    v95 = v30;
    v37 = TreasureDvcLvEntity__getDataValsList(v30, 100, 0);
    data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !data )
      goto LABEL_147;
    data = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)data,
                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_FunctionMaster___);
    if ( !DataValsList )
      goto LABEL_147;
    if ( SLODWORD(DataValsList->max_length) >= 1 )
    {
      v38 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
      v39 = 0;
      do
      {
        funcId = v95->fields.funcId;
        if ( !funcId )
          goto LABEL_147;
        if ( v39 >= LODWORD(funcId->max_length) )
          goto LABEL_148;
        if ( !v38 )
          goto LABEL_147;
        data = (__int64)DataMasterBase_object__object__int___GetEntity(
                          v38,
                          funcId->m_Items[v39],
                          (const MethodInfo_33B2F58 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( v39 >= LODWORD(DataValsList->max_length) )
          goto LABEL_148;
        v41 = &DataValsList->obj.klass + (int)v39;
        v42 = data;
        v44 = (__int64)v41[4];
        v43 = (__int64 *)(v41 + 4);
        data = v44;
        if ( !v42 )
          goto LABEL_147;
        if ( !data )
          goto LABEL_147;
        DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v38, *(_DWORD *)(v42 + 24), 0);
        if ( !v37 )
          goto LABEL_147;
        if ( v39 >= LODWORD(v37->max_length) )
          goto LABEL_148;
        v45 = &v37->obj.klass + (int)v39;
        v47 = (__int64)v45[4];
        v46 = (DataVals_o **)(v45 + 4);
        data = v47;
        if ( !v47 )
          goto LABEL_147;
        DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v38, *(_DWORD *)(v42 + 24), 0);
        if ( v39 >= LODWORD(DataValsList->max_length) || v39 >= LODWORD(v37->max_length) )
          goto LABEL_148;
        data = *v43;
        if ( !*v43 )
          goto LABEL_147;
        data = DataVals__CheckOverCharge((DataVals_o *)data, *v46, 0);
        if ( (data & 1) != 0 )
        {
          if ( v39 >= LODWORD(DataValsList->max_length) )
            goto LABEL_148;
          data = *v43;
          if ( !*v43 )
            goto LABEL_147;
          DataVals__SetOverCharge((DataVals_o *)data, 1, 0);
        }
        if ( v39 >= LODWORD(DataValsList->max_length) || v39 >= LODWORD(v37->max_length) )
          goto LABEL_148;
        if ( !*v46 )
          goto LABEL_147;
        data = *v43;
        if ( !*v43 )
          goto LABEL_147;
        DataVals__SetDependOverChargeFlag((DataVals_o *)data, (*v46)->fields.dependDataValsList, 0);
      }
      while ( (signed int)++v39 < SLODWORD(DataValsList->max_length) );
    }
    v48 = (BattleCommandData_o *)sub_1C3E7B0(BattleCommandData_TypeInfo);
    BattleCommandData___ctor(v48, 0);
    v49 = v94;
    data = BattleServantData__getTreasureDvcId(v94, 1, 0, 0);
    if ( !v48 )
      goto LABEL_147;
    v48->fields.treasureDvc = data;
    v50 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C3E7B0(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_45722636(v50, v94, 0, v48, 0, 0, 0, 1, 0);
    data = (__int64)BattleServantData__getNPSideEffect(v94, v50, 0);
    if ( !data )
      goto LABEL_147;
    v51 = (__int64)v95->fields.funcId;
    v52 = data;
    if ( *(_QWORD *)(data + 24) )
    {
      if ( !v51 )
        goto LABEL_147;
      data = sub_1C3E60C(int___TypeInfo, *(unsigned int *)(v51 + 24));
      if ( !v95->fields.funcId )
        goto LABEL_147;
      v51 = data;
      System_Array__CopyTo((System_Array_o *)v95->fields.funcId, (System_Array_o *)data, 0, 0);
      v54 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v54 + 309) & 1) == 0 )
        v54 = sub_1C8EC78(v53);
      v55 = *(_QWORD *)(*(_QWORD *)(v54 + 192) + 16LL);
      if ( (*(_BYTE *)(v55 + 309) & 1) == 0 )
        v55 = sub_1C8EC78(v53);
      data = **(_QWORD **)(v55 + 184);
      if ( !data )
        goto LABEL_147;
      data = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      v56 = *(_DWORD *)(v52 + 24);
      if ( v56 >= 1 )
      {
        v57 = (SkillLvMaster_o *)data;
        v58 = 0;
        v96 = v52 + 32;
        do
        {
          if ( (unsigned int)v58 >= v56 )
            goto LABEL_148;
          v59 = v52;
          v60 = *(_QWORD *)(v96 + 8 * v58);
          if ( !v60 )
            goto LABEL_147;
          v61 = *(_DWORD **)(v60 + 104);
          if ( !v61 )
            goto LABEL_147;
          if ( v61[6] < 2u )
            goto LABEL_148;
          if ( !v57 )
            goto LABEL_147;
          data = (__int64)SkillLvMaster__GetEntity(v57, v61[8], v61[9], 0);
          if ( !data )
            goto LABEL_147;
          v62 = data;
          data = (__int64)SkillLvEntity__getDataValsList((SkillLvEntity_o *)data, 0);
          v65 = *(_QWORD *)(v62 + 32);
          if ( !v65 )
            goto LABEL_147;
          if ( !*(_DWORD *)(v65 + 24) )
            goto LABEL_148;
          if ( !v51 )
            goto LABEL_147;
          v66 = *(int *)(v60 + 28);
          if ( (unsigned int)v66 >= *(_DWORD *)(v51 + 24) )
            goto LABEL_148;
          *(_DWORD *)(v51 + 4 * v66 + 32) = *(_DWORD *)(v65 + 32);
          if ( !data )
            goto LABEL_147;
          if ( !*(_DWORD *)(data + 24) )
            goto LABEL_148;
          v67 = *(Il2CppClass **)(data + 32);
          if ( v67 )
          {
            data = sub_1C3E6A0(*(_QWORD *)(data + 32), DataValsList->obj.klass->_1.element_class);
            if ( !data )
            {
              v91 = sub_1C3E7E4(0);
              sub_1C3E68C(v91, 0);
            }
          }
          if ( (unsigned int)v66 >= LODWORD(DataValsList->max_length) )
            goto LABEL_148;
          v68 = &DataValsList->obj.klass + v66;
          v68[4] = v67;
          sub_1C3E508((CGThumbnailListItem_o *)(v68 + 4), (int32_t)v67, v63, v64);
          v56 = *(_DWORD *)(v59 + 24);
          ++v58;
          v52 = v59;
        }
        while ( (int)v58 < v56 );
        v49 = v94;
      }
    }
    TreasureDvcId = BattleServantData__getTreasureDvcId(v49, 1, 0, 0);
    v13->fields.treasureDvcId = TreasureDvcId;
    v70 = TreasureDvcId;
    argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C3E7B0(BattleLogicFunction_FunctionArgument_TypeInfo);
    BattleLogicFunction_FunctionArgument___ctor(argument, 0);
    if ( v93 )
    {
      v13->fields.isCounter = task->fields.isCounter;
      motionMessage = task->fields.motionMessage;
      v13->fields.motionMessage = motionMessage;
      sub_1C3E508((CGThumbnailListItem_o *)&v13->fields.motionMessage, (int32_t)motionMessage, v72, v73);
      v13->fields._MessageType_k__BackingField = task->fields.messageType;
      if ( !argument )
        goto LABEL_147;
    }
    else
    {
      v75 = this->fields.data;
      if ( !v75 )
        goto LABEL_147;
      perf = v75->fields.perf;
      if ( !perf )
        goto LABEL_147;
      if ( !command )
        goto LABEL_147;
      data = (__int64)perf->fields.commandPerf;
      if ( !data )
        goto LABEL_147;
      BattlePerformanceCommandCard__UpdateRemainingCardBuff(
        (BattlePerformanceCommandCard_o *)data,
        command->fields.actionIndex,
        0);
      v77 = (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *)sub_1C3E7B0(BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
      BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument___ctor(v77, 0);
      if ( !argument )
        goto LABEL_147;
      BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
        argument,
        (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v77,
        0);
    }
    argument->fields._IsSetSubstituteBuffAction_k__BackingField = 1;
    data = (__int64)this->fields.logicfunction;
    if ( !data )
      goto LABEL_147;
    v25 = BattleLogicFunction__procList(
            (BattleLogicFunction_o *)data,
            v13,
            (System_Int32_array *)v51,
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
    BattleServantData__checkRegainNPUsedNoble(v94, 0);
    data = (__int64)v94->fields.buffData;
    if ( !data )
      goto LABEL_147;
    data = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0);
    if ( !v93 )
    {
      v94->fields.tmpNp = v94->fields.np;
      BattleServantData__changeNp(v94, 0, 0, 0);
    }
    if ( !v25 )
      goto LABEL_147;
    v25->fields.targetId = v22;
    BattleActionData__setTypeTA(v25, 0);
    if ( !v93 )
      BattleActionData__setCommand(v25, command, 0);
    TreasureDvcMotionId = BattleServantData__getTreasureDvcMotionId(v94, 0);
    OverwriteTdMotionId = v25->fields.OverwriteTdMotionId;
    if ( OverwriteTdMotionId < 1 )
      OverwriteTdMotionId = TreasureDvcMotionId;
    v25->fields.motionId = OverwriteTdMotionId;
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_147;
    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0, 0, 0);
    v25->fields.prevattackme = 0;
    v25->fields.isForcedSpeedOne = task->fields.isForcedSpeedOne;
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_147;
    BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0);
    v80 = this->fields.logic;
    if ( !v80 )
      goto LABEL_147;
    v81 = v80->fields.perf;
    v82 = (BattleActionData_o *)sub_1C3E7B0(BattleActionData_TypeInfo);
    BattleActionData___ctor(v82, 0);
    v83 = this->fields.logic;
    if ( !v83 )
      goto LABEL_147;
    v84 = v83->fields.perf;
    v85 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)sub_1C3E7B0(BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
    BattleActionWaitCond_UntilSideEffectInvisible___ctor(v85, v84, 0);
    if ( !v82 )
      goto LABEL_147;
    data = (__int64)BattleActionData__SetWaitCond(v82, (BattleActionWaitCond_Base_o *)v85, 0);
    if ( !v81 )
      goto LABEL_147;
    BattlePerformance__addActionData_45122800(v81, (BattleActionData_o *)data, 0);
    v25->fields.treasureDvcId = v70;
    BattleActionData__SetFuncTargetAllDead(v25, this->fields.data, 0);
    v86 = this->fields.logic;
    if ( v93 )
    {
      v87 = (BattleAddSkillTaskAfterCounterTreasureDevice_o *)sub_1C3E7B0(BattleAddSkillTaskAfterCounterTreasureDevice_TypeInfo);
      BattleAddSkillTaskAfterCounterTreasureDevice___ctor(v87, 0);
      if ( !v86 )
        goto LABEL_147;
    }
    else
    {
      v87 = (BattleAddSkillTaskAfterCounterTreasureDevice_o *)sub_1C3E7B0(BattleAddSkillTaskAfterTreasureDevice_TypeInfo);
      BattleAddSkillTaskAfterTreasureDevice___ctor((BattleAddSkillTaskAfterTreasureDevice_o *)v87, 0);
      if ( !v86 )
        goto LABEL_147;
    }
    BattleLogic__AddSkillTask(v86, (BattleAddSkillTaskAroundTargetTask_o *)v87, task, v22, 0);
    data = (__int64)this->fields.data;
    if ( !data
      || (!v94->fields.isEnemy
        ? (data = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)data, 0, 0))
        : (data = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)data, 0)),
          (v88 = data) == 0) )
    {
LABEL_147:
      sub_1C3E7C0(data, baseActionData);
    }
    v89 = *(_DWORD *)(data + 24);
    if ( v89 < 1 )
      return v25;
    v90 = 0;
    while ( v90 < v89 )
    {
      data = *(_QWORD *)(v88 + 8LL * (int)v90 + 32);
      if ( !data )
        goto LABEL_147;
      BattleServantData__SetEnableLastAttackToSelfHistory((BattleServantData_o *)data, 1, 0);
      v89 = *(_DWORD *)(v88 + 24);
      if ( (int)++v90 >= v89 )
        return v25;
    }
LABEL_148:
    sub_1C3E7C8(data, baseActionData);
  }
  return v25;
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

  if ( (byte_4C5A020 & 1) == 0 )
  {
    sub_1C3E564(&BattleComboData_TypeInfo);
    sub_1C3E564(&BattleCommandData_TypeInfo);
    sub_1C3E564(&BattleLogicTask_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C5A020 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1C3E7C8(EnemyServantData, v8);
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
                                        (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1C3E7C0(EnemyServantData, v8);
  }
  v12 = sub_1C3E7B0(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, v11->fields.uniqueId, v14);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0, 0);
  *(_QWORD *)(v12 + 32) = FieldPlayerServantIDList;
  sub_1C3E508((CGThumbnailListItem_o *)(v12 + 32), (int32_t)FieldPlayerServantIDList, v16, v17);
  v18 = (BattleCommandData_o *)sub_1C3E7B0(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v18, 0);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0);
  if ( !v18 )
    goto LABEL_19;
  v18->fields._type = (int)EnemyServantData;
  v18->fields.svtlimit = BattleServantData__getDispLimitCount(v11, 1, 0);
  v18->fields.uniqueId = v11->fields.uniqueId;
  v18->fields.svtId = BattleServantData__getSvtId(v11, 0);
  v18->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  v19 = (BattleComboData_o *)sub_1C3E7B0(BattleComboData_TypeInfo);
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
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v12;
    sub_1C3E508((CGThumbnailListItem_o *)(v26 + 4), v12, v21, v22);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4C5A021 & 1) == 0 )
  {
    sub_1C3E564(&BattleComboData_TypeInfo);
    sub_1C3E564(&BattleCommandData_TypeInfo);
    sub_1C3E564(&BattleLogicTask_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C5A021 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1C3E7C8(EnemyServantData, v8);
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
                                        (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1C3E7C0(EnemyServantData, v8);
  }
  v12 = sub_1C3E7B0(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, v11->fields.uniqueId, v14);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0, 0);
  *(_QWORD *)(v12 + 32) = FieldPlayerServantIDList;
  sub_1C3E508((CGThumbnailListItem_o *)(v12 + 32), (int32_t)FieldPlayerServantIDList, v16, v17);
  v18 = (BattleCommandData_o *)sub_1C3E7B0(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v18, 0);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0);
  if ( !v18 )
    goto LABEL_19;
  v18->fields._type = (int)EnemyServantData;
  v18->fields.svtlimit = BattleServantData__getDispLimitCount(v11, 1, 0);
  v18->fields.uniqueId = v11->fields.uniqueId;
  v18->fields.svtId = BattleServantData__getSvtId(v11, 0);
  v18->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  v19 = (BattleComboData_o *)sub_1C3E7B0(BattleComboData_TypeInfo);
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
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v12;
    sub_1C3E508((CGThumbnailListItem_o *)(v26 + 4), v12, v21, v22);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4C5A01E & 1) == 0 )
  {
    sub_1C3E564(&BattleComboData_TypeInfo);
    sub_1C3E564(&BattleCommandData_TypeInfo);
    sub_1C3E564(&BattleLogicTask_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C5A01E = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1C3E7C8(PlayerServantData, v8);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v9], 0);
  if ( !PlayerServantData || (v11 = PlayerServantData, !PlayerServantData->fields.reservationspecial) )
  {
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_1C3E7C0(PlayerServantData, v8);
  }
  v12 = sub_1C3E7B0(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 2, v11->fields.uniqueId, v14);
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0);
  *(_QWORD *)(v12 + 32) = FieldEnemyServantIDList;
  sub_1C3E508((CGThumbnailListItem_o *)(v12 + 32), (int32_t)FieldEnemyServantIDList, v16, v17);
  v18 = (BattleCommandData_o *)sub_1C3E7B0(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v18, 0);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0);
  if ( !v18 )
    goto LABEL_18;
  v18->fields._type = (int)PlayerServantData;
  v18->fields.svtlimit = BattleServantData__getCommandDispLimitCount(v11, 0);
  v18->fields.uniqueId = v11->fields.uniqueId;
  v18->fields.svtId = BattleServantData__getSvtId(v11, 0);
  v18->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  v19 = (BattleComboData_o *)sub_1C3E7B0(BattleComboData_TypeInfo);
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
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v12;
    sub_1C3E508((CGThumbnailListItem_o *)(v26 + 4), v12, v21, v22);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4C5A01F & 1) == 0 )
  {
    sub_1C3E564(&BattleComboData_TypeInfo);
    sub_1C3E564(&BattleCommandData_TypeInfo);
    sub_1C3E564(&BattleLogicTask_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C5A01F = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1C3E7C8(logictarget, v9);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v10], 0);
  v13 = (BattleLogicTask_o *)sub_1C3E7B0(BattleLogicTask_TypeInfo);
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
  v17 = (BattleCommandData_o *)sub_1C3E7B0(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v17, 0);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcCardId(PlayerServantData, 0);
  if ( !v17 )
    goto LABEL_21;
  v17->fields._type = (int)logictarget;
  v17->fields.svtlimit = BattleServantData__getCommandDispLimitCount(PlayerServantData, 0);
  v17->fields.uniqueId = PlayerServantData->fields.uniqueId;
  v17->fields.svtId = BattleServantData__getSvtId(PlayerServantData, 0);
  v17->fields.treasureDvc = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0, 0);
  v18 = (BattleComboData_o *)sub_1C3E7B0(BattleComboData_TypeInfo);
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
    sub_1C3E7C0(logictarget, v9);
  }
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)v13,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v13;
    sub_1C3E508((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v13, v20, v21);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}