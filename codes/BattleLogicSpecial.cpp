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
  if ( (byte_4C2A41B & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1C2D490(&BattleTreasureDeviceCommandData_TypeInfo);
    byte_4C2A41B = 1;
  }
  baseActionData = 0;
  if ( !v3 )
LABEL_16:
    sub_1C2D6EC(this, task);
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicSpecial_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_1C2D6F4(this, task, method);
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
  v9 = (BattleTreasureDeviceCommandData_o *)sub_1C2D6DC(BattleTreasureDeviceCommandData_TypeInfo);
  BattleTreasureDeviceCommandData___ctor(v9, v6, 0);
  v3->fields.command = (struct BattleCommandData_o *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields.command, (int32_t)v9, v10, v11);
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
  BattleData_o *data; // x20
  int32_t v11; // w22
  OverwriteTreasureDeviceData_o *OverwriteTdData_k__BackingField; // x0
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-28h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_4C2A41A & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4C2A41A = 1;
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
                                         (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( data )
        {
          BattleData__SetWasAttackTargetIdList(data, v11, (System_Int32_array *)this, 0);
          goto LABEL_21;
        }
      }
LABEL_23:
      sub_1C2D6EC(this, task);
    }
LABEL_24:
    sub_1C2D6F4(this, task, method);
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
  __int64 v10; // x2
  struct System_Int32_array *actorIdlist; // x8
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
  int32_t v23; // w23
  BattleLogic_o *logic; // x19
  int32_t actorId; // w20
  BattleActionData_o *v26; // x26
  Il2CppObject *MasterData_object; // x21
  TreasureDvcLvEntity_o *Entity; // x0
  BattleLogic_o *v30; // x26
  TreasureDvcLvEntity_o *v31; // x29
  BattleAddSkillTaskBeforeCounterTreasureDevice_o *v32; // x21
  bool v33; // w0
  BattleAddSkillTaskBeforeTreasureDevice_o *v34; // x21
  int32_t ChainBonus; // w0
  int32_t v36; // w0
  DataVals_array *DataValsList; // x26
  DataVals_array *v38; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // x29
  unsigned int v40; // w24
  struct System_Int32_array *funcId; // x8
  Il2CppClass **v42; // x22
  __int64 v43; // x21
  __int64 *v44; // x22
  __int64 v45; // t1
  Il2CppClass **v46; // x27
  DataVals_o **v47; // x27
  __int64 v48; // t1
  BattleCommandData_o *v49; // x28
  BattleServantData_o *v50; // x22
  BattleBuffData_CheckIndividualitiesData_o *v51; // x21
  __int64 v52; // x28
  __int64 v53; // x29
  long double v54; // q0
  __int64 v55; // x0
  __int64 v56; // x0
  int v57; // w8
  SkillLvMaster_o *v58; // x27
  __int64 v59; // x24
  __int64 v60; // x22
  __int64 v61; // x29
  _DWORD *v62; // x8
  __int64 v63; // x21
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
  if ( (byte_4C2A41C & 1) == 0 )
  {
    sub_1C2D490(&BattleActionData_TypeInfo);
    sub_1C2D490(&BattleAddSkillTaskAfterCounterTreasureDevice_TypeInfo);
    sub_1C2D490(&BattleAddSkillTaskAfterTreasureDevice_TypeInfo);
    sub_1C2D490(&BattleAddSkillTaskBeforeCounterTreasureDevice_TypeInfo);
    sub_1C2D490(&BattleAddSkillTaskBeforeTreasureDevice_TypeInfo);
    sub_1C2D490(&BattleCommandData_TypeInfo);
    sub_1C2D490(&BattlePerformance_TypeInfo);
    sub_1C2D490(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C2D490(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C2D490(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
    sub_1C2D490(&BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
    byte_4C2A41C = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_144;
  BattleData__ResetWasAttackTargetId((BattleData_o *)data, 0);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_144;
  BattleData__ResetFunctionedFunctionIds((BattleData_o *)data, 0);
  if ( !task )
    goto LABEL_144;
  actorIdlist = task->fields.actorIdlist;
  data = (__int64)this->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      goto LABEL_145;
    baseActionData = (BattleActionData_o **)(unsigned int)actorIdlist->m_Items[0];
    if ( !data )
      goto LABEL_144;
  }
  else
  {
    baseActionData = (BattleActionData_o **)0xFFFFFFFFLL;
    if ( !data )
      goto LABEL_144;
  }
  ServantData = BattleData__getServantData((BattleData_o *)data, (int32_t)baseActionData, 0);
  v13 = (BattleActionData_o *)sub_1C2D6DC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0);
  if ( !v13 )
    goto LABEL_144;
  v14 = BattleActionData__AddDisplayTriggerIntervalBuff(v13, task, 0);
  v7->klass = (CGThumbnailListItem_c *)v14;
  sub_1C2D434(v7, (int32_t)v14, v15, v16);
  v17 = task->fields.actorIdlist;
  if ( v17 )
  {
    if ( !LODWORD(v17->max_length) )
      goto LABEL_145;
    v18 = v17->m_Items[0];
    if ( !v14 )
      goto LABEL_144;
  }
  else
  {
    v18 = -1;
    if ( !v14 )
      goto LABEL_144;
  }
  v14->fields.actorId = v18;
  logictarget = this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_144;
  v20 = task->fields.command;
  Array = UpHateData__MakeArray((System_Collections_Generic_IEnumerable_int__o *)task->fields.targetIdlist, 0);
  data = BattleLogicTarget__getTargetBase_46704864(logictarget, Array, 0, 1, v22);
  v14->fields.targetId = data;
  if ( (int)data < 1 )
    return 0;
  baseActionData = (BattleActionData_o **)this->fields.data;
  if ( !baseActionData )
    goto LABEL_144;
  if ( *((_BYTE *)baseActionData + 288) || *((_BYTE *)baseActionData + 289) )
    return 0;
  if ( !ServantData )
    goto LABEL_144;
  v23 = data;
  if ( !BattleServantData__checkUseTDvc(ServantData, (BattleData_o *)baseActionData, 1, 0)
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
    goto LABEL_144;
  }
  data = (__int64)ServantData->fields.buffData;
  if ( !data )
    goto LABEL_144;
  BattleBuffData__ResetCommandCodeBuffActiveFlg((BattleBuffData_o *)data, 0);
  data = (__int64)ServantData->fields.buffData;
  if ( !data )
    goto LABEL_144;
  BattleBuffData__ResetCommandAssistBuffActiveFlg((BattleBuffData_o *)data, 0);
  data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_144;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  data = BattleServantData__getTreasureDvcId(ServantData, !isCounterOverwriteTreasureDevice, 0, 0);
  if ( !MasterData_object )
    goto LABEL_144;
  Entity = TreasureDvcLvMaster__GetEntity(
             (TreasureDvcLvMaster_o *)MasterData_object,
             data,
             ServantData->fields.treasuredvcLevel,
             0);
  v30 = this->fields.logic;
  v31 = Entity;
  if ( !isCounterOverwriteTreasureDevice )
  {
    v34 = (BattleAddSkillTaskBeforeTreasureDevice_o *)sub_1C2D6DC(BattleAddSkillTaskBeforeTreasureDevice_TypeInfo);
    BattleAddSkillTaskBeforeTreasureDevice___ctor(v34, 0);
    if ( !v30 )
      goto LABEL_144;
    data = BattleLogic__AddSkillTask(v30, (BattleAddSkillTaskAroundTargetTask_o *)v34, task, v23, 0);
    if ( (data & 1) != 0 )
    {
      if ( !v20 )
        goto LABEL_144;
      ChainBonus = BattleCommandData__getChainBonus(v20, 0);
      BattleServantData__UsedTpWeapon(ServantData, ChainBonus, this->fields.data, 1, 0);
      return 0;
    }
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_144;
    BattleLogic__AddUnExecutedUpdateIntervalBuffActionData((BattleLogic_o *)data, 0);
    if ( !v20 )
      goto LABEL_144;
    v36 = BattleCommandData__getChainBonus(v20, 0);
    BattleServantData__UsedTpWeapon(ServantData, v36, this->fields.data, 0, 0);
    goto LABEL_47;
  }
  v32 = (BattleAddSkillTaskBeforeCounterTreasureDevice_o *)sub_1C2D6DC(BattleAddSkillTaskBeforeCounterTreasureDevice_TypeInfo);
  BattleAddSkillTaskBeforeCounterTreasureDevice___ctor(v32, 0);
  if ( !v30 )
    goto LABEL_144;
  v33 = BattleLogic__AddSkillTask(v30, (BattleAddSkillTaskAroundTargetTask_o *)v32, task, v23, 0);
  v26 = 0;
  if ( !v33 )
  {
LABEL_47:
    BattleServantData__BeginNoblePhantasmPerformance(ServantData, 0);
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_144;
    BattleLogic__updateResultServant((BattleLogic_o *)data, 0);
    data = BattleServantData__getNpPer(ServantData, 0);
    baseActionData = isCounterOverwriteTreasureDevice
                   ? (BattleActionData_o **)(unsigned int)(100 * task->fields.counterOc)
                   : (BattleActionData_o **)(unsigned int)data;
    v14->fields.npPer = (int)baseActionData;
    if ( !v31 )
      goto LABEL_144;
    command = v20;
    v94 = ServantData;
    v93 = isCounterOverwriteTreasureDevice;
    DataValsList = TreasureDvcLvEntity__getDataValsList(v31, (int32_t)baseActionData, 0);
    v95 = v31;
    v38 = TreasureDvcLvEntity__getDataValsList(v31, 100, 0);
    data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !data )
      goto LABEL_144;
    data = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)data,
                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_FunctionMaster___);
    if ( !DataValsList )
      goto LABEL_144;
    if ( SLODWORD(DataValsList->max_length) >= 1 )
    {
      v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
      v40 = 0;
      do
      {
        funcId = v95->fields.funcId;
        if ( !funcId )
          goto LABEL_144;
        if ( v40 >= LODWORD(funcId->max_length) )
          goto LABEL_145;
        if ( !v39 )
          goto LABEL_144;
        data = (__int64)DataMasterBase_object__object__int___GetEntity(
                          v39,
                          funcId->m_Items[v40],
                          (const MethodInfo_3387D98 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( v40 >= LODWORD(DataValsList->max_length) )
          goto LABEL_145;
        v42 = &DataValsList->obj.klass + (int)v40;
        v43 = data;
        v45 = (__int64)v42[4];
        v44 = (__int64 *)(v42 + 4);
        data = v45;
        if ( !v43 )
          goto LABEL_144;
        if ( !data )
          goto LABEL_144;
        DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v39, *(_DWORD *)(v43 + 24), 0);
        if ( !v38 )
          goto LABEL_144;
        if ( v40 >= LODWORD(v38->max_length) )
          goto LABEL_145;
        v46 = &v38->obj.klass + (int)v40;
        v48 = (__int64)v46[4];
        v47 = (DataVals_o **)(v46 + 4);
        data = v48;
        if ( !v48 )
          goto LABEL_144;
        DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v39, *(_DWORD *)(v43 + 24), 0);
        if ( v40 >= LODWORD(DataValsList->max_length) || v40 >= LODWORD(v38->max_length) )
          goto LABEL_145;
        data = *v44;
        if ( !*v44 )
          goto LABEL_144;
        data = DataVals__CheckOverCharge((DataVals_o *)data, *v47, 0);
        if ( (data & 1) != 0 )
        {
          if ( v40 >= LODWORD(DataValsList->max_length) )
            goto LABEL_145;
          data = *v44;
          if ( !*v44 )
            goto LABEL_144;
          DataVals__SetOverCharge((DataVals_o *)data, 1, 0);
        }
        if ( v40 >= LODWORD(DataValsList->max_length) || v40 >= LODWORD(v38->max_length) )
          goto LABEL_145;
        if ( !*v47 )
          goto LABEL_144;
        data = *v44;
        if ( !*v44 )
          goto LABEL_144;
        DataVals__SetDependOverChargeFlag((DataVals_o *)data, (*v47)->fields.dependDataValsList, 0);
      }
      while ( (signed int)++v40 < SLODWORD(DataValsList->max_length) );
    }
    v49 = (BattleCommandData_o *)sub_1C2D6DC(BattleCommandData_TypeInfo);
    BattleCommandData___ctor(v49, 0);
    v50 = v94;
    data = BattleServantData__getTreasureDvcId(v94, 1, 0, 0);
    if ( !v49 )
      goto LABEL_144;
    v49->fields.treasureDvc = data;
    v51 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C2D6DC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_45569888(v51, v94, 0, v49, 0, 0, 0, 1, 0);
    data = (__int64)BattleServantData__getNPSideEffect(v94, v51, 0);
    if ( !data )
      goto LABEL_144;
    v52 = (__int64)v95->fields.funcId;
    v53 = data;
    if ( *(_QWORD *)(data + 24) )
    {
      if ( !v52 )
        goto LABEL_144;
      data = sub_1C2D538(int___TypeInfo, *(unsigned int *)(v52 + 24));
      if ( !v95->fields.funcId )
        goto LABEL_144;
      v52 = data;
      System_Array__CopyTo((System_Array_o *)v95->fields.funcId, (System_Array_o *)data, 0, 0);
      v55 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v55 + 309) & 1) == 0 )
        v55 = sub_1C7DBA4(v54);
      v56 = *(_QWORD *)(*(_QWORD *)(v55 + 192) + 16LL);
      if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
        v56 = sub_1C7DBA4(v54);
      data = **(_QWORD **)(v56 + 184);
      if ( !data )
        goto LABEL_144;
      data = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      v57 = *(_DWORD *)(v53 + 24);
      if ( v57 >= 1 )
      {
        v58 = (SkillLvMaster_o *)data;
        v59 = 0;
        v96 = v53 + 32;
        do
        {
          if ( (unsigned int)v59 >= v57 )
            goto LABEL_145;
          v60 = v53;
          v61 = *(_QWORD *)(v96 + 8 * v59);
          if ( !v61 )
            goto LABEL_144;
          v62 = *(_DWORD **)(v61 + 104);
          if ( !v62 )
            goto LABEL_144;
          if ( v62[6] < 2u )
            goto LABEL_145;
          if ( !v58 )
            goto LABEL_144;
          data = (__int64)SkillLvMaster__GetEntity(v58, v62[8], v62[9], 0);
          if ( !data )
            goto LABEL_144;
          v63 = data;
          data = (__int64)SkillLvEntity__getDataValsList((SkillLvEntity_o *)data, 0);
          v65 = *(_QWORD *)(v63 + 32);
          if ( !v65 )
            goto LABEL_144;
          if ( !*(_DWORD *)(v65 + 24) )
            goto LABEL_145;
          if ( !v52 )
            goto LABEL_144;
          v66 = *(int *)(v61 + 28);
          if ( (unsigned int)v66 >= *(_DWORD *)(v52 + 24) )
            goto LABEL_145;
          *(_DWORD *)(v52 + 4 * v66 + 32) = *(_DWORD *)(v65 + 32);
          if ( !data )
            goto LABEL_144;
          if ( !*(_DWORD *)(data + 24) )
            goto LABEL_145;
          v67 = *(Il2CppClass **)(data + 32);
          if ( v67 )
          {
            data = sub_1C2D5CC(*(_QWORD *)(data + 32), DataValsList->obj.klass->_1.element_class);
            if ( !data )
            {
              v91 = sub_1C2D710(0);
              sub_1C2D5B8(v91, 0);
            }
          }
          if ( (unsigned int)v66 >= LODWORD(DataValsList->max_length) )
            goto LABEL_145;
          v68 = &DataValsList->obj.klass + v66;
          v68[4] = v67;
          sub_1C2D434((CGThumbnailListItem_o *)(v68 + 4), (int32_t)v67, v10, v64);
          v57 = *(_DWORD *)(v60 + 24);
          ++v59;
          v53 = v60;
        }
        while ( (int)v59 < v57 );
        v50 = v94;
      }
    }
    TreasureDvcId = BattleServantData__getTreasureDvcId(v50, 1, 0, 0);
    v14->fields.treasureDvcId = TreasureDvcId;
    v70 = TreasureDvcId;
    argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C2D6DC(BattleLogicFunction_FunctionArgument_TypeInfo);
    BattleLogicFunction_FunctionArgument___ctor(argument, 0);
    if ( v93 )
    {
      v14->fields.isCounter = task->fields.isCounter;
      motionMessage = task->fields.motionMessage;
      v14->fields.motionMessage = motionMessage;
      sub_1C2D434((CGThumbnailListItem_o *)&v14->fields.motionMessage, (int32_t)motionMessage, v72, v73);
      v14->fields._MessageType_k__BackingField = task->fields.messageType;
    }
    else
    {
      v75 = this->fields.data;
      if ( !v75 )
        goto LABEL_144;
      perf = v75->fields.perf;
      if ( !perf )
        goto LABEL_144;
      if ( !command )
        goto LABEL_144;
      data = (__int64)perf->fields.commandPerf;
      if ( !data )
        goto LABEL_144;
      BattlePerformanceCommandCard__UpdateRemainingCardBuff(
        (BattlePerformanceCommandCard_o *)data,
        command->fields.actionIndex,
        0);
      v77 = (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *)sub_1C2D6DC(BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
      BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument___ctor(v77, 0);
      if ( !argument )
        goto LABEL_144;
      BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
        argument,
        (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v77,
        0);
    }
    data = (__int64)this->fields.logicfunction;
    if ( !data )
      goto LABEL_144;
    v26 = BattleLogicFunction__procList(
            (BattleLogicFunction_o *)data,
            v14,
            (System_Int32_array *)v52,
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
      goto LABEL_144;
    data = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0);
    if ( !v93 )
    {
      v94->fields.tmpNp = v94->fields.np;
      BattleServantData__changeNp(v94, 0, 0, 0);
    }
    if ( !v26 )
      goto LABEL_144;
    v26->fields.targetId = v23;
    BattleActionData__setTypeTA(v26, 0);
    if ( !v93 )
      BattleActionData__setCommand(v26, command, 0);
    TreasureDvcMotionId = BattleServantData__getTreasureDvcMotionId(v94, 0);
    OverwriteTdMotionId = v26->fields.OverwriteTdMotionId;
    if ( OverwriteTdMotionId < 1 )
      OverwriteTdMotionId = TreasureDvcMotionId;
    v26->fields.motionId = OverwriteTdMotionId;
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_144;
    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0, 0);
    v26->fields.prevattackme = 0;
    v26->fields.isForcedSpeedOne = task->fields.isForcedSpeedOne;
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_144;
    BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0);
    v80 = this->fields.logic;
    if ( !v80 )
      goto LABEL_144;
    v81 = v80->fields.perf;
    v82 = (BattleActionData_o *)sub_1C2D6DC(BattleActionData_TypeInfo);
    BattleActionData___ctor(v82, 0);
    v83 = this->fields.logic;
    if ( !v83 )
      goto LABEL_144;
    v84 = v83->fields.perf;
    v85 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)sub_1C2D6DC(BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
    BattleActionWaitCond_UntilSideEffectInvisible___ctor(v85, v84, 0);
    if ( !v82 )
      goto LABEL_144;
    data = (__int64)BattleActionData__SetWaitCond(v82, (BattleActionWaitCond_Base_o *)v85, 0);
    if ( !v81 )
      goto LABEL_144;
    BattlePerformance__addActionData_44828792(v81, (BattleActionData_o *)data, 0);
    v26->fields.treasureDvcId = v70;
    BattleActionData__SetFuncTargetAllDead(v26, this->fields.data, 0);
    v86 = this->fields.logic;
    if ( v93 )
    {
      v87 = (BattleAddSkillTaskAfterCounterTreasureDevice_o *)sub_1C2D6DC(BattleAddSkillTaskAfterCounterTreasureDevice_TypeInfo);
      BattleAddSkillTaskAfterCounterTreasureDevice___ctor(v87, 0);
      if ( !v86 )
        goto LABEL_144;
    }
    else
    {
      v87 = (BattleAddSkillTaskAfterCounterTreasureDevice_o *)sub_1C2D6DC(BattleAddSkillTaskAfterTreasureDevice_TypeInfo);
      BattleAddSkillTaskAfterTreasureDevice___ctor((BattleAddSkillTaskAfterTreasureDevice_o *)v87, 0);
      if ( !v86 )
        goto LABEL_144;
    }
    BattleLogic__AddSkillTask(v86, (BattleAddSkillTaskAroundTargetTask_o *)v87, task, v23, 0);
    data = (__int64)this->fields.data;
    if ( !data
      || (!v94->fields.isEnemy
        ? (data = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)data, 0, 0))
        : (data = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)data, 0)),
          (v88 = data) == 0) )
    {
LABEL_144:
      sub_1C2D6EC(data, baseActionData);
    }
    v89 = *(_DWORD *)(data + 24);
    if ( v89 < 1 )
      return v26;
    v90 = 0;
    while ( v90 < v89 )
    {
      data = *(_QWORD *)(v88 + 8LL * (int)v90 + 32);
      if ( !data )
        goto LABEL_144;
      BattleServantData__SetEnableLastAttackToSelfHistory((BattleServantData_o *)data, 1, 0);
      v89 = *(_DWORD *)(v88 + 24);
      if ( (int)++v90 >= v89 )
        return v26;
    }
LABEL_145:
    sub_1C2D6F4(data, baseActionData, v10);
  }
  return v26;
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
  __int64 v9; // x2
  unsigned int v10; // w21
  struct System_Int32_array *e_entryid; // x8
  BattleServantData_o *v12; // x23
  __int64 v13; // x20
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  System_Int32_array *FieldPlayerServantIDList; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  BattleCommandData_o *v19; // x22
  BattleComboData_o *v20; // x24
  const MethodInfo *v21; // x4
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4C2A418 & 1) == 0 )
  {
    sub_1C2D490(&BattleComboData_TypeInfo);
    sub_1C2D490(&BattleCommandData_TypeInfo);
    sub_1C2D490(&BattleLogicTask_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C2A418 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 16 )
    v10 = 2;
  else
    v10 = ltype == 15;
  if ( !data )
    goto LABEL_19;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_19;
  if ( v10 >= LODWORD(e_entryid->max_length) )
    sub_1C2D6F4(EnemyServantData, v8, v9);
  v8 = (unsigned int)e_entryid->m_Items[v10];
  if ( (int)v8 < 1 )
    goto LABEL_18;
  EnemyServantData = BattleData__getEnemyServantData(data, v8, 0);
  if ( !EnemyServantData )
    goto LABEL_19;
  v12 = EnemyServantData;
  if ( !EnemyServantData->fields.reservationspecial )
  {
LABEL_18:
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1C2D6EC(EnemyServantData, v8);
  }
  v13 = sub_1C2D6DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v13, v14);
  if ( !v13 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v13, 3, v12->fields.uniqueId, v15);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0, 0);
  *(_QWORD *)(v13 + 32) = FieldPlayerServantIDList;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 32), (int32_t)FieldPlayerServantIDList, v17, v18);
  v19 = (BattleCommandData_o *)sub_1C2D6DC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v19, 0);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v12, 0);
  if ( !v19 )
    goto LABEL_19;
  v19->fields._type = (int)EnemyServantData;
  v19->fields.svtlimit = BattleServantData__getDispLimitCount(v12, 1, 0);
  v19->fields.uniqueId = v12->fields.uniqueId;
  v19->fields.svtId = BattleServantData__getSvtId(v12, 0);
  v19->fields.treasureDvc = BattleServantData__getTreasureDvcId(v12, 1, 0, 0);
  v20 = (BattleComboData_o *)sub_1C2D6DC(BattleComboData_TypeInfo);
  BattleComboData___ctor(v20, 0);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v13, v20, v19, v10, v21);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v12, 1, 0, 0);
  *(_DWORD *)(v13 + 48) = 4;
  *(_DWORD *)(v13 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v13 + 88) = 1;
  if ( !v6 )
    goto LABEL_19;
  items = v6->fields._items;
  v25 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v13,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v27[4] = (Il2CppClass *)v13;
    sub_1C2D434((CGThumbnailListItem_o *)(v27 + 4), v13, v22, v23);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v9; // x2
  unsigned int v10; // w20
  struct System_Int32_array *e_entryid; // x8
  BattleServantData_o *v12; // x23
  __int64 v13; // x21
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  System_Int32_array *FieldPlayerServantIDList; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  BattleCommandData_o *v19; // x22
  BattleComboData_o *v20; // x24
  const MethodInfo *v21; // x4
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4C2A419 & 1) == 0 )
  {
    sub_1C2D490(&BattleComboData_TypeInfo);
    sub_1C2D490(&BattleCommandData_TypeInfo);
    sub_1C2D490(&BattleLogicTask_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C2A419 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 23 )
    v10 = 2;
  else
    v10 = ltype == 22;
  if ( !data )
    goto LABEL_19;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_19;
  if ( v10 >= LODWORD(e_entryid->max_length) )
    sub_1C2D6F4(EnemyServantData, v8, v9);
  v8 = (unsigned int)e_entryid->m_Items[v10];
  if ( (int)v8 < 1 )
    goto LABEL_18;
  EnemyServantData = BattleData__getEnemyServantData(data, v8, 0);
  if ( !EnemyServantData )
    goto LABEL_19;
  v12 = EnemyServantData;
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(EnemyServantData, 1, 0, 0);
  if ( (int)EnemyServantData < 1 )
  {
LABEL_18:
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1C2D6EC(EnemyServantData, v8);
  }
  v13 = sub_1C2D6DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v13, v14);
  if ( !v13 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v13, 3, v12->fields.uniqueId, v15);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0, 0);
  *(_QWORD *)(v13 + 32) = FieldPlayerServantIDList;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 32), (int32_t)FieldPlayerServantIDList, v17, v18);
  v19 = (BattleCommandData_o *)sub_1C2D6DC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v19, 0);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v12, 0);
  if ( !v19 )
    goto LABEL_19;
  v19->fields._type = (int)EnemyServantData;
  v19->fields.svtlimit = BattleServantData__getDispLimitCount(v12, 1, 0);
  v19->fields.uniqueId = v12->fields.uniqueId;
  v19->fields.svtId = BattleServantData__getSvtId(v12, 0);
  v19->fields.treasureDvc = BattleServantData__getTreasureDvcId(v12, 1, 0, 0);
  v20 = (BattleComboData_o *)sub_1C2D6DC(BattleComboData_TypeInfo);
  BattleComboData___ctor(v20, 0);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v13, v20, v19, v10, v21);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v12, 1, 0, 0);
  *(_DWORD *)(v13 + 48) = 4;
  *(_DWORD *)(v13 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v13 + 88) = 1;
  if ( !v6 )
    goto LABEL_19;
  items = v6->fields._items;
  v25 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v13,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v27[4] = (Il2CppClass *)v13;
    sub_1C2D434((CGThumbnailListItem_o *)(v27 + 4), v13, v22, v23);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v9; // x2
  unsigned int v10; // w21
  struct System_Int32_array *p_entryid; // x8
  BattleServantData_o *v12; // x23
  __int64 v13; // x20
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  System_Int32_array *FieldEnemyServantIDList; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  BattleCommandData_o *v19; // x22
  BattleComboData_o *v20; // x24
  const MethodInfo *v21; // x4
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4C2A416 & 1) == 0 )
  {
    sub_1C2D490(&BattleComboData_TypeInfo);
    sub_1C2D490(&BattleCommandData_TypeInfo);
    sub_1C2D490(&BattleLogicTask_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C2A416 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 8 )
    v10 = 2;
  else
    v10 = ltype == 7;
  if ( !data )
    goto LABEL_18;
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_18;
  if ( v10 >= LODWORD(p_entryid->max_length) )
    sub_1C2D6F4(PlayerServantData, v8, v9);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v10], 0);
  if ( !PlayerServantData || (v12 = PlayerServantData, !PlayerServantData->fields.reservationspecial) )
  {
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_1C2D6EC(PlayerServantData, v8);
  }
  v13 = sub_1C2D6DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v13, v14);
  if ( !v13 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v13, 2, v12->fields.uniqueId, v15);
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0);
  *(_QWORD *)(v13 + 32) = FieldEnemyServantIDList;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 32), (int32_t)FieldEnemyServantIDList, v17, v18);
  v19 = (BattleCommandData_o *)sub_1C2D6DC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v19, 0);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v12, 0);
  if ( !v19 )
    goto LABEL_18;
  v19->fields._type = (int)PlayerServantData;
  v19->fields.svtlimit = BattleServantData__getCommandDispLimitCount(v12, 0);
  v19->fields.uniqueId = v12->fields.uniqueId;
  v19->fields.svtId = BattleServantData__getSvtId(v12, 0);
  v19->fields.treasureDvc = BattleServantData__getTreasureDvcId(v12, 1, 0, 0);
  v20 = (BattleComboData_o *)sub_1C2D6DC(BattleComboData_TypeInfo);
  BattleComboData___ctor(v20, 0);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v13, v20, v19, v10, v21);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v12, 1, 0, 0);
  *(_DWORD *)(v13 + 48) = 4;
  *(_DWORD *)(v13 + 84) = (_DWORD)PlayerServantData;
  *(_DWORD *)(v13 + 88) = 1;
  if ( !v6 )
    goto LABEL_18;
  items = v6->fields._items;
  v25 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_18;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v13,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v27[4] = (Il2CppClass *)v13;
    sub_1C2D434((CGThumbnailListItem_o *)(v27 + 4), v13, v22, v23);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v10; // x2
  unsigned int v11; // w21
  struct System_Int32_array *p_entryid; // x8
  BattleServantData_o *PlayerServantData; // x23
  BattleLogicTask_o *v14; // x20
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  BattleCommandData_o *v18; // x22
  BattleComboData_o *v19; // x24
  const MethodInfo *v20; // x4
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4C2A417 & 1) == 0 )
  {
    sub_1C2D490(&BattleComboData_TypeInfo);
    sub_1C2D490(&BattleCommandData_TypeInfo);
    sub_1C2D490(&BattleLogicTask_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C2A417 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 6 )
  {
    v11 = 0;
  }
  else if ( ltype == 7 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 2 * (ltype == 8);
  }
  if ( !data )
    goto LABEL_21;
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_21;
  if ( v11 >= LODWORD(p_entryid->max_length) )
    sub_1C2D6F4(logictarget, v9, v10);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v11], 0);
  v14 = (BattleLogicTask_o *)sub_1C2D6DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v14, v15);
  if ( !PlayerServantData )
    goto LABEL_21;
  if ( !v14 )
    goto LABEL_21;
  BattleLogicTask__setActor(v14, 2, PlayerServantData->fields.uniqueId, v16);
  logictarget = this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_21;
  BattleLogicTarget__getTargetBattleServantData(logictarget, v14, v17);
  v18 = (BattleCommandData_o *)sub_1C2D6DC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v18, 0);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcCardId(PlayerServantData, 0);
  if ( !v18 )
    goto LABEL_21;
  v18->fields._type = (int)logictarget;
  v18->fields.svtlimit = BattleServantData__getCommandDispLimitCount(PlayerServantData, 0);
  v18->fields.uniqueId = PlayerServantData->fields.uniqueId;
  v18->fields.svtId = BattleServantData__getSvtId(PlayerServantData, 0);
  v18->fields.treasureDvc = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0, 0);
  v19 = (BattleComboData_o *)sub_1C2D6DC(BattleComboData_TypeInfo);
  BattleComboData___ctor(v19, 0);
  BattleLogicTask__setActionCommand(v14, v19, v18, v11, v20);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0, 0);
  v14->fields.actiontype = 4;
  v14->fields.treasureDvcId = (int)logictarget;
  v14->fields.tresureDvcLv = 1;
  if ( !v7
    || (items = v7->fields._items,
        v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v7->fields._version,
        !items) )
  {
LABEL_21:
    sub_1C2D6EC(logictarget, v9);
  }
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)v14,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v14;
    sub_1C2D434((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v14, v21, v22);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}