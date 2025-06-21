void __fastcall BattleLogicSpecial___ctor(BattleLogicSpecial_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSpecial__createCounterOverwriteSpecialData(
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
  if ( (byte_4B1F575 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1BCAFF8(&BattleTreasureDeviceCommandData_TypeInfo, task);
    byte_4B1F575 = 1;
  }
  baseActionData = 0LL;
  if ( !v3 )
LABEL_16:
    sub_1BCB254(this, task);
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicSpecial_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !actorIdlist->max_length )
      sub_1BCB25C(this, task, method);
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[1];
    if ( !this )
      goto LABEL_16;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_16;
  }
  this = (BattleLogicSpecial_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0LL);
  v6 = (BattleServantData_o *)this;
  if ( v3->fields.checkAlive )
  {
    if ( !this )
      goto LABEL_16;
    isAlive = BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL);
    result = 0LL;
    if ( !isAlive )
      return result;
  }
  else if ( !this )
  {
    goto LABEL_16;
  }
  BattleServantData__OverwriteTreasureDevice(v6, v3->fields.treasureDvcId, v3->fields.tresureDvcLv, 0LL);
  v9 = (BattleTreasureDeviceCommandData_o *)sub_1BCB244(BattleTreasureDeviceCommandData_TypeInfo);
  BattleTreasureDeviceCommandData___ctor(v9, v6, 0LL);
  v3->fields.command = (struct BattleCommandData_o *)v9;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields.command, (int32_t)v9, v10, v11);
  v13 = BattleLogicSpecial__createSpecialDataCommonFunction(v4, &baseActionData, v3, 1, v12);
  BattleServantData__ResetOverwriteTreasureDevice(v6, 0LL);
  this = (BattleLogicSpecial_o *)v4->fields.logic;
  if ( !this )
    goto LABEL_16;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)this, v13, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSpecial__createSpecialData(
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
  if ( (byte_4B1F574 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, task);
    byte_4B1F574 = 1;
  }
  baseActionData = 0LL;
  if ( !v3 )
    goto LABEL_23;
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicSpecial_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !actorIdlist->max_length )
      goto LABEL_24;
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[1];
    if ( !this )
      goto LABEL_23;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_23;
  }
  ServantData = BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0LL);
  if ( v3->fields._OverwriteTdData_k__BackingField )
    OverwriteTreasureDeviceData__Overwrite(v3->fields._OverwriteTdData_k__BackingField, ServantData, 0LL);
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
    if ( v9->max_length )
    {
      v11 = v9->m_Items[1];
LABEL_18:
      this = (BattleLogicSpecial_o *)this[6].monitor;
      if ( this )
      {
        this = (BattleLogicSpecial_o *)System_Collections_Generic_List_int___ToArray(
                                         (System_Collections_Generic_List_int__o *)this,
                                         (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( data )
        {
          BattleData__SetWasAttackTargetIdList(data, v11, (System_Int32_array *)this, 0LL);
          goto LABEL_21;
        }
      }
LABEL_23:
      sub_1BCB254(this, task);
    }
LABEL_24:
    sub_1BCB25C(this, task, method);
  }
  OverwriteTdData_k__BackingField = v3->fields._OverwriteTdData_k__BackingField;
  if ( OverwriteTdData_k__BackingField )
    OverwriteTreasureDeviceData__Reset(OverwriteTdData_k__BackingField, ServantData, 0LL);
LABEL_21:
  this = (BattleLogicSpecial_o *)v4->fields.logic;
  if ( !this )
    goto LABEL_23;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)this, v8, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSpecial__createSpecialDataCommonFunction(
        BattleLogicSpecial_o *this,
        BattleActionData_o **baseActionData,
        BattleLogicTask_o *task,
        bool isCounterOverwriteTreasureDevice,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *v7; // x23
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 data; // x0
  __int64 v27; // x2
  struct System_Int32_array *actorIdlist; // x8
  BattleServantData_o *ServantData; // x24
  BattleActionData_o *v30; // x21
  BattleActionData_o *v31; // x25
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x4
  struct System_Int32_array *v35; // x8
  int v36; // w8
  BattleCommandData_o *v37; // x27
  int32_t v38; // w23
  BattleLogic_o *logic; // x19
  int32_t actorId; // w20
  BattleActionData_o *v41; // x26
  Il2CppObject *MasterData_object; // x21
  TreasureDvcLvEntity_o *Entity; // x0
  BattleLogic_o *v45; // x26
  TreasureDvcLvEntity_o *v46; // x29
  BattleAddSkillTaskBeforeCounterTreasureDevice_o *v47; // x21
  bool v48; // w0
  BattleAddSkillTaskBeforeTreasureDevice_o *v49; // x21
  int32_t ChainBonus; // w0
  int32_t v51; // w0
  DataVals_array *DataValsList; // x26
  DataVals_array *v53; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v54; // x29
  il2cpp_array_size_t v55; // w24
  struct System_Int32_array *funcId; // x8
  Il2CppClass **v57; // x22
  __int64 v58; // x21
  __int64 *v59; // x22
  __int64 v60; // t1
  Il2CppClass **v61; // x27
  DataVals_o **v62; // x27
  __int64 v63; // t1
  BattleCommandData_o *v64; // x21
  BattleServantData_o *v65; // x22
  BattleBuffData_CheckIndividualitiesData_o *v66; // x28
  System_Int32_array *v67; // x28
  __int64 v68; // x29
  long double v69; // q0
  __int64 v70; // x0
  __int64 v71; // x0
  int v72; // w8
  SkillLvMaster_o *v73; // x27
  __int64 v74; // x24
  __int64 v75; // x22
  __int64 v76; // x29
  _DWORD *v77; // x8
  __int64 v78; // x21
  const MethodInfo *v79; // x3
  __int64 v80; // x8
  __int64 v81; // x29
  Il2CppClass *v82; // x21
  Il2CppClass **v83; // x0
  int32_t TreasureDvcId; // w0
  int32_t v85; // w27
  BattleLogicFunction_FunctionArgument_o *argument; // x29
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v90; // x8
  struct BattlePerformance_o *perf; // x8
  BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *v92; // x21
  int32_t TreasureDvcMotionId; // w0
  int OverwriteTdMotionId; // w8
  struct BattleLogic_o *v95; // x8
  BattlePerformance_o *v96; // x24
  BattleActionData_o *v97; // x21
  struct BattleLogic_o *v98; // x8
  BattlePerformance_o *v99; // x28
  BattleActionWaitCond_UntilSideEffectInvisible_o *v100; // x25
  BattleLogic_o *v101; // x24
  BattleAddSkillTaskAfterCounterTreasureDevice_o *v102; // x21
  __int64 v103; // x19
  int v104; // w8
  unsigned int v105; // w20
  __int64 v106; // x0
  BattleCommandData_o *command; // [xsp+30h] [xbp-80h]
  bool v108; // [xsp+3Ch] [xbp-74h]
  BattleServantData_o *v109; // [xsp+40h] [xbp-70h]
  TreasureDvcLvEntity_o *v110; // [xsp+48h] [xbp-68h]
  __int64 v111; // [xsp+48h] [xbp-68h]

  v7 = (CGThumbnailListItem_o *)baseActionData;
  if ( (byte_4B1F576 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActionData_TypeInfo, baseActionData);
    sub_1BCAFF8(&BattleAddSkillTaskAfterCounterTreasureDevice_TypeInfo, v9);
    sub_1BCAFF8(&BattleAddSkillTaskAfterTreasureDevice_TypeInfo, v10);
    sub_1BCAFF8(&BattleAddSkillTaskBeforeCounterTreasureDevice_TypeInfo, v11);
    sub_1BCAFF8(&BattleAddSkillTaskBeforeTreasureDevice_TypeInfo, v12);
    sub_1BCAFF8(&BattleCommandData_TypeInfo, v13);
    sub_1BCAFF8(&BattlePerformance_TypeInfo, v14);
    sub_1BCAFF8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v15);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_FunctionMaster___, v16);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillLvMaster___, v17);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v18);
    sub_1BCAFF8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v19);
    sub_1BCAFF8(&BattleLogicFunction_FunctionArgument_TypeInfo, v20);
    sub_1BCAFF8(&int___TypeInfo, v21);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v22);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1BCAFF8(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo, v24);
    sub_1BCAFF8(&BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo, v25);
    byte_4B1F576 = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_144;
  BattleData__ResetWasAttackTargetId((BattleData_o *)data, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_144;
  BattleData__ResetFunctionedFunctionIds((BattleData_o *)data, 0LL);
  if ( !task )
    goto LABEL_144;
  actorIdlist = task->fields.actorIdlist;
  data = (__int64)this->fields.data;
  if ( actorIdlist )
  {
    if ( !actorIdlist->max_length )
      goto LABEL_145;
    baseActionData = (BattleActionData_o **)(unsigned int)actorIdlist->m_Items[1];
    if ( !data )
      goto LABEL_144;
  }
  else
  {
    baseActionData = (BattleActionData_o **)0xFFFFFFFFLL;
    if ( !data )
      goto LABEL_144;
  }
  ServantData = BattleData__getServantData((BattleData_o *)data, (int32_t)baseActionData, 0LL);
  v30 = (BattleActionData_o *)sub_1BCB244(BattleActionData_TypeInfo);
  BattleActionData___ctor(v30, 0LL);
  if ( !v30 )
    goto LABEL_144;
  v31 = BattleActionData__AddDisplayTriggerIntervalBuff(v30, task, 0LL);
  v7->klass = (CGThumbnailListItem_c *)v31;
  sub_1BCAF9C(v7, (int32_t)v31, v32, v33);
  v35 = task->fields.actorIdlist;
  if ( v35 )
  {
    if ( !v35->max_length )
      goto LABEL_145;
    v36 = v35->m_Items[1];
    if ( !v31 )
      goto LABEL_144;
  }
  else
  {
    v36 = -1;
    if ( !v31 )
      goto LABEL_144;
  }
  v31->fields.actorId = v36;
  data = (__int64)this->fields.logictarget;
  if ( !data )
    goto LABEL_144;
  v37 = task->fields.command;
  data = BattleLogicTarget__getTargetBase((BattleLogicTarget_o *)data, task->fields.targetIdlist, 0, 1, v34);
  v31->fields.targetId = data;
  if ( (int)data < 1 )
    return 0LL;
  baseActionData = (BattleActionData_o **)this->fields.data;
  if ( !baseActionData )
    goto LABEL_144;
  if ( *((_BYTE *)baseActionData + 280) || *((_BYTE *)baseActionData + 281) )
    return 0LL;
  if ( !ServantData )
    goto LABEL_144;
  v38 = data;
  if ( !BattleServantData__checkUseTDvc(ServantData, (BattleData_o *)baseActionData, 1, 0LL)
    && !isCounterOverwriteTreasureDevice )
  {
    data = (__int64)this->fields.data;
    if ( data )
    {
      BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0LL);
      logic = this->fields.logic;
      actorId = v31->fields.actorId;
      data = (__int64)BattlePerformance_TypeInfo;
      if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
      if ( logic )
      {
        BattleLogic__addBackStepActionData(
          logic,
          actorId,
          BattlePerformance_TypeInfo->static_fields->AFTER_BACK_STEP_INTERVAL,
          0LL);
        return 0LL;
      }
    }
    goto LABEL_144;
  }
  data = (__int64)ServantData->fields.buffData;
  if ( !data )
    goto LABEL_144;
  BattleBuffData__ResetCommandCodeBuffActiveFlg((BattleBuffData_o *)data, 0LL);
  data = (__int64)ServantData->fields.buffData;
  if ( !data )
    goto LABEL_144;
  BattleBuffData__ResetCommandAssistBuffActiveFlg((BattleBuffData_o *)data, 0LL);
  data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_144;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  data = BattleServantData__getTreasureDvcId(ServantData, !isCounterOverwriteTreasureDevice, 0LL, 0LL);
  if ( !MasterData_object )
    goto LABEL_144;
  Entity = TreasureDvcLvMaster__GetEntity(
             (TreasureDvcLvMaster_o *)MasterData_object,
             data,
             ServantData->fields.treasuredvcLevel,
             0LL);
  v45 = this->fields.logic;
  v46 = Entity;
  if ( !isCounterOverwriteTreasureDevice )
  {
    v49 = (BattleAddSkillTaskBeforeTreasureDevice_o *)sub_1BCB244(BattleAddSkillTaskBeforeTreasureDevice_TypeInfo);
    BattleAddSkillTaskBeforeTreasureDevice___ctor(v49, 0LL);
    if ( !v45 )
      goto LABEL_144;
    data = BattleLogic__AddSkillTask(v45, (BattleAddSkillTaskAroundTargetTask_o *)v49, task, v38, 0LL);
    if ( (data & 1) != 0 )
    {
      if ( !v37 )
        goto LABEL_144;
      ChainBonus = BattleCommandData__getChainBonus(v37, 0LL);
      BattleServantData__UsedTpWeapon(ServantData, ChainBonus, this->fields.data, 1, 0LL);
      return 0LL;
    }
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_144;
    BattleLogic__AddUnExecutedUpdateIntervalBuffActionData((BattleLogic_o *)data, 0LL);
    if ( !v37 )
      goto LABEL_144;
    v51 = BattleCommandData__getChainBonus(v37, 0LL);
    BattleServantData__UsedTpWeapon(ServantData, v51, this->fields.data, 0, 0LL);
    goto LABEL_47;
  }
  v47 = (BattleAddSkillTaskBeforeCounterTreasureDevice_o *)sub_1BCB244(BattleAddSkillTaskBeforeCounterTreasureDevice_TypeInfo);
  BattleAddSkillTaskBeforeCounterTreasureDevice___ctor(v47, 0LL);
  if ( !v45 )
    goto LABEL_144;
  v48 = BattleLogic__AddSkillTask(v45, (BattleAddSkillTaskAroundTargetTask_o *)v47, task, v38, 0LL);
  v41 = 0LL;
  if ( !v48 )
  {
LABEL_47:
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_144;
    BattleLogic__updateResultServant((BattleLogic_o *)data, 0LL);
    data = BattleServantData__getNpPer(ServantData, 0LL);
    baseActionData = isCounterOverwriteTreasureDevice
                   ? (BattleActionData_o **)(unsigned int)(100 * task->fields.counterOc)
                   : (BattleActionData_o **)(unsigned int)data;
    v31->fields.npPer = (int)baseActionData;
    if ( !v46 )
      goto LABEL_144;
    command = v37;
    v109 = ServantData;
    v108 = isCounterOverwriteTreasureDevice;
    DataValsList = TreasureDvcLvEntity__getDataValsList(v46, (int32_t)baseActionData, 0LL);
    v110 = v46;
    v53 = TreasureDvcLvEntity__getDataValsList(v46, 100, 0LL);
    data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !data )
      goto LABEL_144;
    data = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)data,
                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_FunctionMaster___);
    if ( !DataValsList )
      goto LABEL_144;
    if ( (int)DataValsList->max_length >= 1 )
    {
      v54 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
      v55 = 0;
      do
      {
        funcId = v110->fields.funcId;
        if ( !funcId )
          goto LABEL_144;
        if ( v55 >= funcId->max_length )
          goto LABEL_145;
        if ( !v54 )
          goto LABEL_144;
        data = (__int64)DataMasterBase_object__object__int___GetEntity(
                          v54,
                          funcId->m_Items[v55 + 1],
                          (const MethodInfo_32C7E00 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( v55 >= DataValsList->max_length )
          goto LABEL_145;
        v57 = &DataValsList->obj.klass + (int)v55;
        v58 = data;
        v60 = (__int64)v57[4];
        v59 = (__int64 *)(v57 + 4);
        data = v60;
        if ( !v58 )
          goto LABEL_144;
        if ( !data )
          goto LABEL_144;
        DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v54, *(_DWORD *)(v58 + 24), 0LL);
        if ( !v53 )
          goto LABEL_144;
        if ( v55 >= v53->max_length )
          goto LABEL_145;
        v61 = &v53->obj.klass + (int)v55;
        v63 = (__int64)v61[4];
        v62 = (DataVals_o **)(v61 + 4);
        data = v63;
        if ( !v63 )
          goto LABEL_144;
        DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v54, *(_DWORD *)(v58 + 24), 0LL);
        if ( v55 >= DataValsList->max_length || v55 >= v53->max_length )
          goto LABEL_145;
        data = *v59;
        if ( !*v59 )
          goto LABEL_144;
        data = DataVals__CheckOverCharge((DataVals_o *)data, *v62, 0LL);
        if ( (data & 1) != 0 )
        {
          if ( v55 >= DataValsList->max_length )
            goto LABEL_145;
          data = *v59;
          if ( !*v59 )
            goto LABEL_144;
          DataVals__SetOverCharge((DataVals_o *)data, 1, 0LL);
        }
        if ( v55 >= DataValsList->max_length || v55 >= v53->max_length )
          goto LABEL_145;
        if ( !*v62 )
          goto LABEL_144;
        data = *v59;
        if ( !*v59 )
          goto LABEL_144;
        DataVals__SetDependOverChargeFlag((DataVals_o *)data, (*v62)->fields.dependDataValsList, 0LL);
      }
      while ( (signed int)++v55 < (signed int)DataValsList->max_length );
    }
    v64 = (BattleCommandData_o *)sub_1BCB244(BattleCommandData_TypeInfo);
    BattleCommandData___ctor(v64, 0LL);
    v65 = v109;
    data = BattleServantData__getTreasureDvcId(v109, 1, 0LL, 0LL);
    if ( !v64 )
      goto LABEL_144;
    v64->fields.treasureDvc = data;
    v66 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BCB244(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_44896728(v66, v109, 0LL, v64, 0LL, 0LL, 0LL, 0LL);
    data = (__int64)BattleServantData__getNPSideEffect(v109, v66, 0LL);
    if ( !data )
      goto LABEL_144;
    v67 = v110->fields.funcId;
    v68 = data;
    if ( *(_QWORD *)(data + 24) )
    {
      if ( !v67 )
        goto LABEL_144;
      data = sub_1BCB0A0(int___TypeInfo, v67->max_length);
      if ( !v110->fields.funcId )
        goto LABEL_144;
      v67 = (System_Int32_array *)data;
      System_Array__CopyTo((System_Array_o *)v110->fields.funcId, (System_Array_o *)data, 0, 0LL);
      v70 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v70 + 309) & 1) == 0 )
        v70 = sub_1C1B45C(v69);
      v71 = *(_QWORD *)(*(_QWORD *)(v70 + 192) + 16LL);
      if ( (*(_BYTE *)(v71 + 309) & 1) == 0 )
        v71 = sub_1C1B45C(v69);
      data = **(_QWORD **)(v71 + 184);
      if ( !data )
        goto LABEL_144;
      data = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      v72 = *(_DWORD *)(v68 + 24);
      if ( v72 >= 1 )
      {
        v73 = (SkillLvMaster_o *)data;
        v74 = 0LL;
        v111 = v68 + 32;
        do
        {
          if ( (unsigned int)v74 >= v72 )
            goto LABEL_145;
          v75 = v68;
          v76 = *(_QWORD *)(v111 + 8 * v74);
          if ( !v76 )
            goto LABEL_144;
          v77 = *(_DWORD **)(v76 + 104);
          if ( !v77 )
            goto LABEL_144;
          if ( v77[6] < 2u )
            goto LABEL_145;
          if ( !v73 )
            goto LABEL_144;
          data = (__int64)SkillLvMaster__GetEntity(v73, v77[8], v77[9], 0LL);
          if ( !data )
            goto LABEL_144;
          v78 = data;
          data = (__int64)SkillLvEntity__getDataValsList((SkillLvEntity_o *)data, 0LL);
          v80 = *(_QWORD *)(v78 + 32);
          if ( !v80 )
            goto LABEL_144;
          if ( !*(_DWORD *)(v80 + 24) )
            goto LABEL_145;
          if ( !v67 )
            goto LABEL_144;
          v81 = *(int *)(v76 + 28);
          if ( (unsigned int)v81 >= v67->max_length )
            goto LABEL_145;
          v67->m_Items[v81 + 1] = *(_DWORD *)(v80 + 32);
          if ( !data )
            goto LABEL_144;
          if ( !*(_DWORD *)(data + 24) )
            goto LABEL_145;
          v82 = *(Il2CppClass **)(data + 32);
          if ( v82 )
          {
            data = sub_1BCB134(*(_QWORD *)(data + 32), DataValsList->obj.klass->_1.element_class);
            if ( !data )
            {
              v106 = sub_1BCB278(0LL);
              sub_1BCB120(v106, 0LL);
            }
          }
          if ( (unsigned int)v81 >= DataValsList->max_length )
            goto LABEL_145;
          v83 = &DataValsList->obj.klass + v81;
          v83[4] = v82;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v83 + 4), (int32_t)v82, v27, v79);
          v72 = *(_DWORD *)(v75 + 24);
          ++v74;
          v68 = v75;
        }
        while ( (int)v74 < v72 );
        v65 = v109;
      }
    }
    TreasureDvcId = BattleServantData__getTreasureDvcId(v65, 1, 0LL, 0LL);
    v31->fields.treasureDvcId = TreasureDvcId;
    v85 = TreasureDvcId;
    argument = (BattleLogicFunction_FunctionArgument_o *)sub_1BCB244(BattleLogicFunction_FunctionArgument_TypeInfo);
    BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
    if ( v108 )
    {
      v31->fields.isCounter = task->fields.isCounter;
      motionMessage = task->fields.motionMessage;
      v31->fields.motionMessage = motionMessage;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v31->fields.motionMessage, (int32_t)motionMessage, v87, v88);
      v31->fields._MessageType_k__BackingField = task->fields.messageType;
    }
    else
    {
      v90 = this->fields.data;
      if ( !v90 )
        goto LABEL_144;
      perf = v90->fields.perf;
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
        0LL);
      v92 = (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *)sub_1BCB244(BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
      BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument___ctor(v92, 0LL);
      if ( !argument )
        goto LABEL_144;
      BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
        argument,
        (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v92,
        0LL);
    }
    data = (__int64)this->fields.logicfunction;
    if ( !data )
      goto LABEL_144;
    v41 = BattleLogicFunction__procList(
            (BattleLogicFunction_o *)data,
            v31,
            v67,
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
            0LL);
    BattleServantData__checkRegainNPUsedNoble(v109, 0LL);
    data = (__int64)v109->fields.buffData;
    if ( !data )
      goto LABEL_144;
    data = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
    if ( !v108 )
    {
      v109->fields.tmpNp = v109->fields.np;
      BattleServantData__changeNp(v109, 0, 0, 0LL);
    }
    if ( !v41 )
      goto LABEL_144;
    v41->fields.targetId = v38;
    BattleActionData__setTypeTA(v41, 0LL);
    if ( !v108 )
      BattleActionData__setCommand(v41, command, 0LL);
    TreasureDvcMotionId = BattleServantData__getTreasureDvcMotionId(v109, 0LL);
    OverwriteTdMotionId = v41->fields.OverwriteTdMotionId;
    if ( OverwriteTdMotionId < 1 )
      OverwriteTdMotionId = TreasureDvcMotionId;
    v41->fields.motionId = OverwriteTdMotionId;
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_144;
    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0LL, 0LL);
    v41->fields.prevattackme = 0;
    v41->fields.isForcedSpeedOne = task->fields.isForcedSpeedOne;
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_144;
    BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0LL);
    v95 = this->fields.logic;
    if ( !v95 )
      goto LABEL_144;
    v96 = v95->fields.perf;
    v97 = (BattleActionData_o *)sub_1BCB244(BattleActionData_TypeInfo);
    BattleActionData___ctor(v97, 0LL);
    v98 = this->fields.logic;
    if ( !v98 )
      goto LABEL_144;
    v99 = v98->fields.perf;
    v100 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)sub_1BCB244(BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
    BattleActionWaitCond_UntilSideEffectInvisible___ctor(v100, v99, 0LL);
    if ( !v97 )
      goto LABEL_144;
    data = (__int64)BattleActionData__SetWaitCond(v97, (BattleActionWaitCond_Base_o *)v100, 0LL);
    if ( !v96 )
      goto LABEL_144;
    BattlePerformance__addActionData_44188008(v96, (BattleActionData_o *)data, 0LL);
    v41->fields.treasureDvcId = v85;
    BattleActionData__SetFuncTargetAllDead(v41, this->fields.data, 0LL);
    v101 = this->fields.logic;
    if ( v108 )
    {
      v102 = (BattleAddSkillTaskAfterCounterTreasureDevice_o *)sub_1BCB244(BattleAddSkillTaskAfterCounterTreasureDevice_TypeInfo);
      BattleAddSkillTaskAfterCounterTreasureDevice___ctor(v102, 0LL);
      if ( !v101 )
        goto LABEL_144;
    }
    else
    {
      v102 = (BattleAddSkillTaskAfterCounterTreasureDevice_o *)sub_1BCB244(BattleAddSkillTaskAfterTreasureDevice_TypeInfo);
      BattleAddSkillTaskAfterTreasureDevice___ctor((BattleAddSkillTaskAfterTreasureDevice_o *)v102, 0LL);
      if ( !v101 )
        goto LABEL_144;
    }
    BattleLogic__AddSkillTask(v101, (BattleAddSkillTaskAroundTargetTask_o *)v102, task, v38, 0LL);
    data = (__int64)this->fields.data;
    if ( !data
      || (!v109->fields.isEnemy
        ? (data = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)data, 0, 0LL))
        : (data = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)data, 0LL)),
          (v103 = data) == 0) )
    {
LABEL_144:
      sub_1BCB254(data, baseActionData);
    }
    v104 = *(_DWORD *)(data + 24);
    if ( v104 < 1 )
      return v41;
    v105 = 0;
    while ( v105 < v104 )
    {
      data = *(_QWORD *)(v103 + 8LL * (int)v105 + 32);
      if ( !data )
        goto LABEL_144;
      BattleServantData__SetEnableLastAttackToSelfHistory((BattleServantData_o *)data, 1, 0LL);
      v104 = *(_DWORD *)(v103 + 24);
      if ( (int)++v105 >= v104 )
        return v41;
    }
LABEL_145:
    sub_1BCB25C(data, baseActionData, v27);
  }
  return v41;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicSpecial__taskEnemyTresureDvc(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  BattleServantData_o *EnemyServantData; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  unsigned int v16; // w21
  struct System_Int32_array *e_entryid; // x8
  BattleServantData_o *v18; // x23
  __int64 v19; // x20
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x3
  System_Int32_array *FieldPlayerServantIDList; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  BattleCommandData_o *v25; // x22
  BattleComboData_o *v26; // x24
  const MethodInfo *v27; // x4
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B1F572 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1BCAFF8(&BattleCommandData_TypeInfo, v6);
    sub_1BCAFF8(&BattleLogicTask_TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_4B1F572 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 16 )
    v16 = 2;
  else
    v16 = ltype == 15;
  if ( !data )
    goto LABEL_19;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_19;
  if ( v16 >= e_entryid->max_length )
    sub_1BCB25C(EnemyServantData, v14, v15);
  v14 = (unsigned int)e_entryid->m_Items[v16 + 1];
  if ( (int)v14 < 1 )
    goto LABEL_18;
  EnemyServantData = BattleData__getEnemyServantData(data, v14, 0LL);
  if ( !EnemyServantData )
    goto LABEL_19;
  v18 = EnemyServantData;
  if ( !EnemyServantData->fields.reservationspecial )
  {
LABEL_18:
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v12,
                                        (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1BCB254(EnemyServantData, v14);
  }
  v19 = sub_1BCB244(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v19, v20);
  if ( !v19 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v19, 3, v18->fields.uniqueId, v21);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v19 + 32) = FieldPlayerServantIDList;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v19 + 32), (int32_t)FieldPlayerServantIDList, v23, v24);
  v25 = (BattleCommandData_o *)sub_1BCB244(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v25, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v18, 0LL);
  if ( !v25 )
    goto LABEL_19;
  v25->fields._type = (int)EnemyServantData;
  v25->fields.svtlimit = BattleServantData__getDispLimitCount(v18, 1, 0LL);
  v25->fields.uniqueId = v18->fields.uniqueId;
  v25->fields.svtId = BattleServantData__getSvtId(v18, 0LL);
  v25->fields.treasureDvc = BattleServantData__getTreasureDvcId(v18, 1, 0LL, 0LL);
  v26 = (BattleComboData_o *)sub_1BCB244(BattleComboData_TypeInfo);
  BattleComboData___ctor(v26, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v19, v26, v25, v16, v27);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v18, 1, 0LL, 0LL);
  *(_DWORD *)(v19 + 48) = 4;
  *(_DWORD *)(v19 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v19 + 88) = 1;
  if ( !v12 )
    goto LABEL_19;
  items = v12->fields._items;
  v31 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v19,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v19;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v33 + 4), v19, v28, v29);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicSpecial__taskEnemyTresureDvcAlways(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  BattleServantData_o *EnemyServantData; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  unsigned int v16; // w20
  struct System_Int32_array *e_entryid; // x8
  BattleServantData_o *v18; // x23
  __int64 v19; // x21
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x3
  System_Int32_array *FieldPlayerServantIDList; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  BattleCommandData_o *v25; // x22
  BattleComboData_o *v26; // x24
  const MethodInfo *v27; // x4
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B1F573 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1BCAFF8(&BattleCommandData_TypeInfo, v6);
    sub_1BCAFF8(&BattleLogicTask_TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_4B1F573 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 23 )
    v16 = 2;
  else
    v16 = ltype == 22;
  if ( !data )
    goto LABEL_19;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_19;
  if ( v16 >= e_entryid->max_length )
    sub_1BCB25C(EnemyServantData, v14, v15);
  v14 = (unsigned int)e_entryid->m_Items[v16 + 1];
  if ( (int)v14 < 1 )
    goto LABEL_18;
  EnemyServantData = BattleData__getEnemyServantData(data, v14, 0LL);
  if ( !EnemyServantData )
    goto LABEL_19;
  v18 = EnemyServantData;
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(EnemyServantData, 1, 0LL, 0LL);
  if ( (int)EnemyServantData < 1 )
  {
LABEL_18:
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v12,
                                        (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1BCB254(EnemyServantData, v14);
  }
  v19 = sub_1BCB244(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v19, v20);
  if ( !v19 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v19, 3, v18->fields.uniqueId, v21);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v19 + 32) = FieldPlayerServantIDList;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v19 + 32), (int32_t)FieldPlayerServantIDList, v23, v24);
  v25 = (BattleCommandData_o *)sub_1BCB244(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v25, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v18, 0LL);
  if ( !v25 )
    goto LABEL_19;
  v25->fields._type = (int)EnemyServantData;
  v25->fields.svtlimit = BattleServantData__getDispLimitCount(v18, 1, 0LL);
  v25->fields.uniqueId = v18->fields.uniqueId;
  v25->fields.svtId = BattleServantData__getSvtId(v18, 0LL);
  v25->fields.treasureDvc = BattleServantData__getTreasureDvcId(v18, 1, 0LL, 0LL);
  v26 = (BattleComboData_o *)sub_1BCB244(BattleComboData_TypeInfo);
  BattleComboData___ctor(v26, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v19, v26, v25, v16, v27);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v18, 1, 0LL, 0LL);
  *(_DWORD *)(v19 + 48) = 4;
  *(_DWORD *)(v19 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v19 + 88) = 1;
  if ( !v12 )
    goto LABEL_19;
  items = v12->fields._items;
  v31 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v19,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v19;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v33 + 4), v19, v28, v29);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicSpecial__taskTresureDvc(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  BattleServantData_o *PlayerServantData; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  unsigned int v16; // w21
  struct System_Int32_array *p_entryid; // x8
  BattleServantData_o *v18; // x23
  __int64 v19; // x20
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x3
  System_Int32_array *FieldEnemyServantIDList; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  BattleCommandData_o *v25; // x22
  BattleComboData_o *v26; // x24
  const MethodInfo *v27; // x4
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B1F570 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1BCAFF8(&BattleCommandData_TypeInfo, v6);
    sub_1BCAFF8(&BattleLogicTask_TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_4B1F570 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 8 )
    v16 = 2;
  else
    v16 = ltype == 7;
  if ( !data )
    goto LABEL_18;
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_18;
  if ( v16 >= p_entryid->max_length )
    sub_1BCB25C(PlayerServantData, v14, v15);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v16 + 1], 0LL);
  if ( !PlayerServantData || (v18 = PlayerServantData, !PlayerServantData->fields.reservationspecial) )
  {
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v12,
                                        (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_1BCB254(PlayerServantData, v14);
  }
  v19 = sub_1BCB244(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v19, v20);
  if ( !v19 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v19, 2, v18->fields.uniqueId, v21);
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  *(_QWORD *)(v19 + 32) = FieldEnemyServantIDList;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v19 + 32), (int32_t)FieldEnemyServantIDList, v23, v24);
  v25 = (BattleCommandData_o *)sub_1BCB244(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v25, 0LL);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v18, 0LL);
  if ( !v25 )
    goto LABEL_18;
  v25->fields._type = (int)PlayerServantData;
  v25->fields.svtlimit = BattleServantData__getCommandDispLimitCount(v18, 0LL);
  v25->fields.uniqueId = v18->fields.uniqueId;
  v25->fields.svtId = BattleServantData__getSvtId(v18, 0LL);
  v25->fields.treasureDvc = BattleServantData__getTreasureDvcId(v18, 1, 0LL, 0LL);
  v26 = (BattleComboData_o *)sub_1BCB244(BattleComboData_TypeInfo);
  BattleComboData___ctor(v26, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v19, v26, v25, v16, v27);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v18, 1, 0LL, 0LL);
  *(_DWORD *)(v19 + 48) = 4;
  *(_DWORD *)(v19 + 84) = (_DWORD)PlayerServantData;
  *(_DWORD *)(v19 + 88) = 1;
  if ( !v12 )
    goto LABEL_18;
  items = v12->fields._items;
  v31 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_18;
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v19,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v19;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v33 + 4), v19, v28, v29);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicSpecial__taskTresureDvcAlways(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x19
  BattleLogicTarget_o *logictarget; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  unsigned int v17; // w21
  struct System_Int32_array *p_entryid; // x8
  BattleServantData_o *PlayerServantData; // x23
  BattleLogicTask_o *v20; // x20
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  BattleCommandData_o *v24; // x22
  BattleComboData_o *v25; // x24
  const MethodInfo *v26; // x4
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B1F571 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1BCAFF8(&BattleCommandData_TypeInfo, v7);
    sub_1BCAFF8(&BattleLogicTask_TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    byte_4B1F571 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 6 )
  {
    v17 = 0;
  }
  else if ( ltype == 7 )
  {
    v17 = 1;
  }
  else
  {
    v17 = 2 * (ltype == 8);
  }
  if ( !data )
    goto LABEL_21;
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_21;
  if ( v17 >= p_entryid->max_length )
    sub_1BCB25C(logictarget, v15, v16);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v17 + 1], 0LL);
  v20 = (BattleLogicTask_o *)sub_1BCB244(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v20, v21);
  if ( !PlayerServantData )
    goto LABEL_21;
  if ( !v20 )
    goto LABEL_21;
  BattleLogicTask__setActor(v20, 2, PlayerServantData->fields.uniqueId, v22);
  logictarget = this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_21;
  BattleLogicTarget__getTargetBattleServantData(logictarget, v20, v23);
  v24 = (BattleCommandData_o *)sub_1BCB244(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v24, 0LL);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcCardId(PlayerServantData, 0LL);
  if ( !v24 )
    goto LABEL_21;
  v24->fields._type = (int)logictarget;
  v24->fields.svtlimit = BattleServantData__getCommandDispLimitCount(PlayerServantData, 0LL);
  v24->fields.uniqueId = PlayerServantData->fields.uniqueId;
  v24->fields.svtId = BattleServantData__getSvtId(PlayerServantData, 0LL);
  v24->fields.treasureDvc = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL, 0LL);
  v25 = (BattleComboData_o *)sub_1BCB244(BattleComboData_TypeInfo);
  BattleComboData___ctor(v25, 0LL);
  BattleLogicTask__setActionCommand(v20, v25, v24, v17, v26);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL, 0LL);
  v20->fields.actiontype = 4;
  v20->fields.treasureDvcId = (int)logictarget;
  v20->fields.tresureDvcLv = 1;
  if ( !v13
    || (items = v13->fields._items,
        v30 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v13->fields._version,
        !items) )
  {
LABEL_21:
    sub_1BCB254(logictarget, v15);
  }
  size = v13->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)v20,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v32[4] = (Il2CppClass *)v20;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v20, v27, v28);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}