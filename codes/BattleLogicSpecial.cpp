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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  const MethodInfo *v16; // x4
  BattleActionData_o *v17; // x20
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-28h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_4BDF323 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1C21E38(&BattleTreasureDeviceCommandData_TypeInfo);
    byte_4BDF323 = 1;
  }
  baseActionData = 0LL;
  if ( !v3 )
LABEL_16:
    sub_1C22094(this, task);
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicSpecial_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !actorIdlist->max_length )
      sub_1C2209C(this, task);
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
  v9 = (BattleTreasureDeviceCommandData_o *)sub_1C22084(BattleTreasureDeviceCommandData_TypeInfo);
  BattleTreasureDeviceCommandData___ctor(v9, v6, 0LL);
  v3->fields.command = (struct BattleCommandData_o *)v9;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v3->fields.command, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  v17 = BattleLogicSpecial__createSpecialDataCommonFunction(v4, &baseActionData, v3, 1, v16);
  BattleServantData__ResetOverwriteTreasureDevice(v6, 0LL);
  this = (BattleLogicSpecial_o *)v4->fields.logic;
  if ( !this )
    goto LABEL_16;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)this, v17, baseActionData, 0LL);
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
  if ( (byte_4BDF322 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4BDF322 = 1;
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
      this = (BattleLogicSpecial_o *)this[6].klass;
      if ( this )
      {
        this = (BattleLogicSpecial_o *)System_Collections_Generic_List_int___ToArray(
                                         (System_Collections_Generic_List_int__o *)this,
                                         (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( data )
        {
          BattleData__SetWasAttackTargetIdList(data, v11, (System_Int32_array *)this, 0LL);
          goto LABEL_21;
        }
      }
LABEL_23:
      sub_1C22094(this, task);
    }
LABEL_24:
    sub_1C2209C(this, task);
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
  PartyOrganizationUtility_o *v7; // x22
  __int64 data; // x0
  struct System_Int32_array *actorIdlist; // x8
  BattleServantData_o *ServantData; // x24
  BattleActionData_o *v12; // x21
  BattleActionData_o *v13; // x25
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x4
  struct System_Int32_array *v21; // x8
  int v22; // w8
  BattleCommandData_o *command; // x27
  int32_t v24; // w22
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
  DataVals_array *DataValsList; // x26
  DataVals_array *v39; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x29
  il2cpp_array_size_t v41; // w24
  struct System_Int32_array *funcId; // x8
  Il2CppClass **v43; // x27
  __int64 v44; // x21
  __int64 *v45; // x27
  __int64 v46; // t1
  Il2CppClass **v47; // x23
  DataVals_o **v48; // x23
  __int64 v49; // t1
  BattleCommandData_o *v50; // x21
  BattleServantData_o *v51; // x23
  BattleBuffData_CheckIndividualitiesData_o *v52; // x28
  System_Int32_array *v53; // x28
  __int64 v54; // x29
  long double v55; // q0
  __int64 v56; // x0
  __int64 v57; // x0
  int v58; // w8
  SkillLvMaster_o *v59; // x27
  __int64 v60; // x24
  __int64 v61; // x29
  __int64 v62; // x23
  _DWORD *v63; // x8
  __int64 v64; // x21
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x8
  __int64 v72; // x23
  int64_t v73; // x21
  Il2CppClass **v74; // x0
  int32_t TreasureDvcId; // w0
  int32_t v76; // w27
  BattleLogicFunction_FunctionArgument_o *argument; // x29
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v85; // x8
  struct BattlePerformance_o *perf; // x8
  BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *v87; // x21
  struct BattleLogic_o *v88; // x8
  BattlePerformance_o *v89; // x23
  BattleActionData_o *v90; // x21
  struct BattleLogic_o *v91; // x8
  BattlePerformance_o *v92; // x25
  BattleActionWaitCond_UntilSideEffectInvisible_o *v93; // x24
  BattleLogic_o *v94; // x20
  BattleAddSkillTaskAfterCounterTreasureDevice_o *v95; // x21
  __int64 v96; // x0
  BattleServantData_o *v97; // [xsp+30h] [xbp-80h]
  BattleCommandData_o *v98; // [xsp+38h] [xbp-78h]
  bool v99; // [xsp+44h] [xbp-6Ch]
  TreasureDvcLvEntity_o *v100; // [xsp+48h] [xbp-68h]
  __int64 v101; // [xsp+48h] [xbp-68h]

  v7 = (PartyOrganizationUtility_o *)baseActionData;
  if ( (byte_4BDF324 & 1) == 0 )
  {
    sub_1C21E38(&BattleActionData_TypeInfo);
    sub_1C21E38(&BattleAddSkillTaskAfterCounterTreasureDevice_TypeInfo);
    sub_1C21E38(&BattleAddSkillTaskAfterTreasureDevice_TypeInfo);
    sub_1C21E38(&BattleAddSkillTaskBeforeCounterTreasureDevice_TypeInfo);
    sub_1C21E38(&BattleAddSkillTaskBeforeTreasureDevice_TypeInfo);
    sub_1C21E38(&BattleCommandData_TypeInfo);
    sub_1C21E38(&BattlePerformance_TypeInfo);
    sub_1C21E38(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C21E38(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C21E38(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
    sub_1C21E38(&BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
    byte_4BDF324 = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_131;
  BattleData__ResetWasAttackTargetId((BattleData_o *)data, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_131;
  BattleData__ResetFunctionedFunctionIds((BattleData_o *)data, 0LL);
  if ( !task )
    goto LABEL_131;
  actorIdlist = task->fields.actorIdlist;
  data = (__int64)this->fields.data;
  if ( actorIdlist )
  {
    if ( !actorIdlist->max_length )
      goto LABEL_132;
    baseActionData = (BattleActionData_o **)(unsigned int)actorIdlist->m_Items[1];
    if ( !data )
      goto LABEL_131;
  }
  else
  {
    baseActionData = (BattleActionData_o **)0xFFFFFFFFLL;
    if ( !data )
      goto LABEL_131;
  }
  ServantData = BattleData__getServantData((BattleData_o *)data, (int32_t)baseActionData, 0LL);
  v12 = (BattleActionData_o *)sub_1C22084(BattleActionData_TypeInfo);
  BattleActionData___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_131;
  v13 = BattleActionData__AddDisplayTriggerIntervalBuff(v12, task, 0LL);
  v7->klass = (PartyOrganizationUtility_c *)v13;
  sub_1C21DDC(v7, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  v21 = task->fields.actorIdlist;
  if ( v21 )
  {
    if ( !v21->max_length )
      goto LABEL_132;
    v22 = v21->m_Items[1];
    if ( !v13 )
      goto LABEL_131;
  }
  else
  {
    v22 = -1;
    if ( !v13 )
      goto LABEL_131;
  }
  v13->fields.actorId = v22;
  data = (__int64)this->fields.logictarget;
  if ( !data )
    goto LABEL_131;
  command = task->fields.command;
  data = BattleLogicTarget__getTargetBase((BattleLogicTarget_o *)data, task->fields.targetIdlist, 0, 1, v20);
  v13->fields.targetId = data;
  if ( (int)data < 1 )
    return 0LL;
  baseActionData = (BattleActionData_o **)this->fields.data;
  if ( !baseActionData )
    goto LABEL_131;
  if ( *((_BYTE *)baseActionData + 280) || *((_BYTE *)baseActionData + 281) )
    return 0LL;
  if ( !ServantData )
    goto LABEL_131;
  v24 = data;
  if ( !BattleServantData__checkUseTDvc(ServantData, (BattleData_o *)baseActionData, 1, 0LL)
    && !isCounterOverwriteTreasureDevice )
  {
    data = (__int64)this->fields.data;
    if ( data )
    {
      BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0LL);
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
          0LL);
        return 0LL;
      }
    }
    goto LABEL_131;
  }
  data = (__int64)ServantData->fields.buffData;
  if ( !data )
    goto LABEL_131;
  BattleBuffData__ResetCommandCodeBuffActiveFlg((BattleBuffData_o *)data, 0LL);
  data = (__int64)ServantData->fields.buffData;
  if ( !data )
    goto LABEL_131;
  BattleBuffData__ResetCommandAssistBuffActiveFlg((BattleBuffData_o *)data, 0LL);
  data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_131;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  data = BattleServantData__getTreasureDvcId(ServantData, !isCounterOverwriteTreasureDevice, 0LL, 0LL);
  if ( !MasterData_object )
    goto LABEL_131;
  Entity = TreasureDvcLvMaster__GetEntity(
             (TreasureDvcLvMaster_o *)MasterData_object,
             data,
             ServantData->fields.treasuredvcLevel,
             0LL);
  v31 = this->fields.logic;
  v32 = Entity;
  if ( isCounterOverwriteTreasureDevice )
  {
    v33 = (BattleAddSkillTaskBeforeCounterTreasureDevice_o *)sub_1C22084(BattleAddSkillTaskBeforeCounterTreasureDevice_TypeInfo);
    BattleAddSkillTaskBeforeCounterTreasureDevice___ctor(v33, 0LL);
    if ( !v31 )
      goto LABEL_131;
    v34 = BattleLogic__AddSkillTask(v31, (BattleAddSkillTaskAroundTargetTask_o *)v33, task, v24, 0LL);
    v27 = 0LL;
    if ( v34 )
      return v27;
  }
  else
  {
    v35 = (BattleAddSkillTaskBeforeTreasureDevice_o *)sub_1C22084(BattleAddSkillTaskBeforeTreasureDevice_TypeInfo);
    BattleAddSkillTaskBeforeTreasureDevice___ctor(v35, 0LL);
    if ( !v31 )
      goto LABEL_131;
    data = BattleLogic__AddSkillTask(v31, (BattleAddSkillTaskAroundTargetTask_o *)v35, task, v24, 0LL);
    if ( (data & 1) != 0 )
    {
      if ( !command )
        goto LABEL_131;
      ChainBonus = BattleCommandData__getChainBonus(command, 0LL);
      BattleServantData__UsedTpWeapon(ServantData, ChainBonus, this->fields.data, 1, 0LL);
      return 0LL;
    }
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_131;
    BattleLogic__AddUnExecutedUpdateIntervalBuffActionData((BattleLogic_o *)data, 0LL);
    if ( !command )
      goto LABEL_131;
    v37 = BattleCommandData__getChainBonus(command, 0LL);
    BattleServantData__UsedTpWeapon(ServantData, v37, this->fields.data, 0, 0LL);
  }
  data = (__int64)this->fields.logic;
  if ( !data )
    goto LABEL_131;
  BattleLogic__updateResultServant((BattleLogic_o *)data, 0LL);
  data = BattleServantData__getNpPer(ServantData, 0LL);
  baseActionData = isCounterOverwriteTreasureDevice
                 ? (BattleActionData_o **)(unsigned int)(100 * task->fields.counterOc)
                 : (BattleActionData_o **)(unsigned int)data;
  v13->fields.npPer = (int)baseActionData;
  if ( !v32 )
    goto LABEL_131;
  v97 = ServantData;
  v98 = command;
  v99 = isCounterOverwriteTreasureDevice;
  DataValsList = TreasureDvcLvEntity__getDataValsList(v32, (int32_t)baseActionData, 0LL);
  v100 = v32;
  v39 = TreasureDvcLvEntity__getDataValsList(v32, 100, 0LL);
  data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_131;
  data = (__int64)DataManager__GetMasterData_object_(
                    (DataManager_o *)data,
                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !DataValsList )
    goto LABEL_131;
  if ( (int)DataValsList->max_length >= 1 )
  {
    v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
    v41 = 0;
    do
    {
      funcId = v100->fields.funcId;
      if ( !funcId )
        goto LABEL_131;
      if ( v41 >= funcId->max_length )
        goto LABEL_132;
      if ( !v40 )
        goto LABEL_131;
      data = (__int64)DataMasterBase_object__object__int___GetEntity(
                        v40,
                        funcId->m_Items[v41 + 1],
                        (const MethodInfo_325BDC8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( v41 >= DataValsList->max_length )
        goto LABEL_132;
      v43 = &DataValsList->obj.klass + (int)v41;
      v44 = data;
      v46 = (__int64)v43[4];
      v45 = (__int64 *)(v43 + 4);
      data = v46;
      if ( !v44 )
        goto LABEL_131;
      if ( !data )
        goto LABEL_131;
      DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v40, *(_DWORD *)(v44 + 24), 0LL);
      if ( !v39 )
        goto LABEL_131;
      if ( v41 >= v39->max_length )
        goto LABEL_132;
      v47 = &v39->obj.klass + (int)v41;
      v49 = (__int64)v47[4];
      v48 = (DataVals_o **)(v47 + 4);
      data = v49;
      if ( !v49 )
        goto LABEL_131;
      DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v40, *(_DWORD *)(v44 + 24), 0LL);
      if ( v41 >= DataValsList->max_length || v41 >= v39->max_length )
        goto LABEL_132;
      data = *v45;
      if ( !*v45 )
        goto LABEL_131;
      data = DataVals__CheckOverCharge((DataVals_o *)data, *v48, 0LL);
      if ( (data & 1) != 0 )
      {
        if ( v41 >= DataValsList->max_length )
          goto LABEL_132;
        data = *v45;
        if ( !*v45 )
          goto LABEL_131;
        DataVals__SetOverCharge((DataVals_o *)data, 1, 0LL);
      }
      if ( v41 >= DataValsList->max_length || v41 >= v39->max_length )
        goto LABEL_132;
      if ( !*v48 )
        goto LABEL_131;
      data = *v45;
      if ( !*v45 )
        goto LABEL_131;
      DataVals__SetDependOverChargeFlag((DataVals_o *)data, (*v48)->fields.dependDataValsList, 0LL);
    }
    while ( (signed int)++v41 < (signed int)DataValsList->max_length );
  }
  v50 = (BattleCommandData_o *)sub_1C22084(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v50, 0LL);
  v51 = v97;
  data = BattleServantData__getTreasureDvcId(v97, 1, 0LL, 0LL);
  if ( !v50 )
    goto LABEL_131;
  v50->fields.treasureDvc = data;
  v52 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C22084(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_43953980(v52, v97, 0LL, v50, 0LL, 0LL, 0LL, 0LL);
  data = (__int64)BattleServantData__getNPSideEffect(v97, v52, 0LL);
  if ( !data )
    goto LABEL_131;
  v53 = v100->fields.funcId;
  v54 = data;
  if ( *(_QWORD *)(data + 24) )
  {
    if ( !v53 )
      goto LABEL_131;
    data = sub_1C21EE0(int___TypeInfo, v53->max_length);
    if ( !v100->fields.funcId )
      goto LABEL_131;
    v53 = (System_Int32_array *)data;
    System_Array__CopyTo((System_Array_o *)v100->fields.funcId, (System_Array_o *)data, 0, 0LL);
    v56 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
      v56 = sub_1C73D14(v55);
    v57 = *(_QWORD *)(*(_QWORD *)(v56 + 192) + 16LL);
    if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
      v57 = sub_1C73D14(v55);
    data = **(_QWORD **)(v57 + 184);
    if ( !data )
      goto LABEL_131;
    data = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)data,
                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    v58 = *(_DWORD *)(v54 + 24);
    if ( v58 >= 1 )
    {
      v59 = (SkillLvMaster_o *)data;
      v60 = 0LL;
      v101 = v54;
      v61 = v54 + 32;
      while ( (unsigned int)v60 < v58 )
      {
        v62 = *(_QWORD *)(v61 + 8 * v60);
        if ( !v62 )
          goto LABEL_131;
        v63 = *(_DWORD **)(v62 + 104);
        if ( !v63 )
          goto LABEL_131;
        if ( v63[6] < 2u )
          break;
        if ( !v59 )
          goto LABEL_131;
        data = (__int64)SkillLvMaster__GetEntity(v59, v63[8], v63[9], 0LL);
        if ( !data )
          goto LABEL_131;
        v64 = data;
        data = (__int64)SkillLvEntity__getDataValsList((SkillLvEntity_o *)data, 0LL);
        v71 = *(_QWORD *)(v64 + 32);
        if ( !v71 )
          goto LABEL_131;
        if ( !*(_DWORD *)(v71 + 24) )
          break;
        if ( !v53 )
          goto LABEL_131;
        v72 = *(int *)(v62 + 28);
        if ( (unsigned int)v72 >= v53->max_length )
          break;
        v53->m_Items[v72 + 1] = *(_DWORD *)(v71 + 32);
        if ( !data )
          goto LABEL_131;
        if ( !*(_DWORD *)(data + 24) )
          break;
        v73 = *(_QWORD *)(data + 32);
        if ( v73 )
        {
          data = sub_1C21F74(*(_QWORD *)(data + 32), DataValsList->obj.klass->_1.element_class);
          if ( !data )
          {
            v96 = sub_1C220B8(0LL);
            sub_1C21F60(v96, 0LL);
          }
        }
        if ( (unsigned int)v72 >= DataValsList->max_length )
          break;
        v74 = &DataValsList->obj.klass + v72;
        v74[4] = (Il2CppClass *)v73;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v74 + 4), v73, v65, v66, v67, v68, v69, v70);
        ++v60;
        v58 = *(_DWORD *)(v101 + 24);
        if ( (int)v60 >= v58 )
          goto LABEL_105;
      }
LABEL_132:
      sub_1C2209C(data, baseActionData);
    }
LABEL_105:
    v51 = v97;
  }
  TreasureDvcId = BattleServantData__getTreasureDvcId(v51, 1, 0LL, 0LL);
  v13->fields.treasureDvcId = TreasureDvcId;
  v76 = TreasureDvcId;
  argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C22084(BattleLogicFunction_FunctionArgument_TypeInfo);
  BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
  if ( v99 )
  {
    v13->fields.isCounter = task->fields.isCounter;
    motionMessage = task->fields.motionMessage;
    v13->fields.motionMessage = motionMessage;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v13->fields.motionMessage,
      (int64_t)motionMessage,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83);
    v13->fields._MessageType_k__BackingField = task->fields.messageType;
  }
  else
  {
    v85 = this->fields.data;
    if ( !v85 )
      goto LABEL_131;
    perf = v85->fields.perf;
    if ( !perf )
      goto LABEL_131;
    if ( !v98 )
      goto LABEL_131;
    data = (__int64)perf->fields.commandPerf;
    if ( !data )
      goto LABEL_131;
    BattlePerformanceCommandCard__UpdateRemainingCardBuff(
      (BattlePerformanceCommandCard_o *)data,
      v98->fields.actionIndex,
      0LL);
    v87 = (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *)sub_1C22084(BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
    BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument___ctor(v87, 0LL);
    if ( !argument )
      goto LABEL_131;
    BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
      argument,
      (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v87,
      0LL);
  }
  data = (__int64)this->fields.logicfunction;
  if ( !data )
    goto LABEL_131;
  v27 = BattleLogicFunction__procList(
          (BattleLogicFunction_o *)data,
          v13,
          v53,
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
  BattleServantData__checkRegainNPUsedNoble(v51, 0LL);
  data = (__int64)v51->fields.buffData;
  if ( !data )
    goto LABEL_131;
  data = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
  if ( !v99 )
  {
    v51->fields.tmpNp = v51->fields.np;
    BattleServantData__changeNp(v51, 0, 0, 0LL);
  }
  if ( !v27 )
    goto LABEL_131;
  v27->fields.targetId = v24;
  BattleActionData__setTypeTA(v27, 0LL);
  if ( !v99 )
    BattleActionData__setCommand(v27, v98, 0LL);
  v27->fields.motionId = BattleServantData__getTreasureDvcMotionId(v51, 0LL);
  data = (__int64)this->fields.logic;
  if ( !data )
    goto LABEL_131;
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0LL);
  v27->fields.prevattackme = 0;
  v27->fields.isForcedSpeedOne = task->fields.isForcedSpeedOne;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_131;
  BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0LL);
  v88 = this->fields.logic;
  if ( !v88 )
    goto LABEL_131;
  v89 = v88->fields.perf;
  v90 = (BattleActionData_o *)sub_1C22084(BattleActionData_TypeInfo);
  BattleActionData___ctor(v90, 0LL);
  v91 = this->fields.logic;
  if ( !v91
    || (v92 = v91->fields.perf,
        v93 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)sub_1C22084(BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo),
        BattleActionWaitCond_UntilSideEffectInvisible___ctor(v93, v92, 0LL),
        !v90)
    || (data = (__int64)BattleActionData__SetWaitCond(v90, (BattleActionWaitCond_Base_o *)v93, 0LL), !v89) )
  {
LABEL_131:
    sub_1C22094(data, baseActionData);
  }
  BattlePerformance__addActionData_43202092(v89, (BattleActionData_o *)data, 0LL);
  v27->fields.treasureDvcId = v76;
  BattleActionData__SetFuncTargetAllDead(v27, this->fields.data, 0LL);
  v94 = this->fields.logic;
  if ( v99 )
  {
    v95 = (BattleAddSkillTaskAfterCounterTreasureDevice_o *)sub_1C22084(BattleAddSkillTaskAfterCounterTreasureDevice_TypeInfo);
    BattleAddSkillTaskAfterCounterTreasureDevice___ctor(v95, 0LL);
    if ( !v94 )
      goto LABEL_131;
  }
  else
  {
    v95 = (BattleAddSkillTaskAfterCounterTreasureDevice_o *)sub_1C22084(BattleAddSkillTaskAfterTreasureDevice_TypeInfo);
    BattleAddSkillTaskAfterTreasureDevice___ctor((BattleAddSkillTaskAfterTreasureDevice_o *)v95, 0LL);
    if ( !v94 )
      goto LABEL_131;
  }
  BattleLogic__AddSkillTask(v94, (BattleAddSkillTaskAroundTargetTask_o *)v95, task, v24, 0LL);
  return v27;
}


BattleLogicTask_array *__fastcall BattleLogicSpecial__taskEnemyTresureDvc(
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
  int64_t v12; // x20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  System_Int32_array *FieldPlayerServantIDList; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  BattleCommandData_o *v22; // x22
  BattleComboData_o *v23; // x24
  const MethodInfo *v24; // x4
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  if ( (byte_4BDF320 & 1) == 0 )
  {
    sub_1C21E38(&BattleComboData_TypeInfo);
    sub_1C21E38(&BattleCommandData_TypeInfo);
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4BDF320 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 16 )
    v9 = 2;
  else
    v9 = ltype == 15;
  if ( !data )
    goto LABEL_19;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_19;
  if ( v9 >= e_entryid->max_length )
    sub_1C2209C(EnemyServantData, v8);
  v8 = (unsigned int)e_entryid->m_Items[v9 + 1];
  if ( (int)v8 < 1 )
    goto LABEL_18;
  EnemyServantData = BattleData__getEnemyServantData(data, v8, 0LL);
  if ( !EnemyServantData )
    goto LABEL_19;
  v11 = EnemyServantData;
  if ( !EnemyServantData->fields.reservationspecial )
  {
LABEL_18:
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1C22094(EnemyServantData, v8);
  }
  v12 = sub_1C22084(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, v11->fields.uniqueId, v14);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v12 + 32) = FieldPlayerServantIDList;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)FieldPlayerServantIDList, v16, v17, v18, v19, v20, v21);
  v22 = (BattleCommandData_o *)sub_1C22084(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v22, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0LL);
  if ( !v22 )
    goto LABEL_19;
  v22->fields._type = (int)EnemyServantData;
  v22->fields.svtlimit = BattleServantData__getDispLimitCount(v11, 1, 0LL);
  v22->fields.uniqueId = v11->fields.uniqueId;
  v22->fields.svtId = BattleServantData__getSvtId(v11, 0LL);
  v22->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0LL, 0LL);
  v23 = (BattleComboData_o *)sub_1C22084(BattleComboData_TypeInfo);
  BattleComboData___ctor(v23, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v23, v22, v9, v24);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v11, 1, 0LL, 0LL);
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
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v12,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v12;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v34 + 4), v12, v25, v26, v27, v28, v29, v30);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicSpecial__taskEnemyTresureDvcAlways(
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
  int64_t v12; // x21
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  System_Int32_array *FieldPlayerServantIDList; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  BattleCommandData_o *v22; // x22
  BattleComboData_o *v23; // x24
  const MethodInfo *v24; // x4
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  if ( (byte_4BDF321 & 1) == 0 )
  {
    sub_1C21E38(&BattleComboData_TypeInfo);
    sub_1C21E38(&BattleCommandData_TypeInfo);
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4BDF321 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 23 )
    v9 = 2;
  else
    v9 = ltype == 22;
  if ( !data )
    goto LABEL_19;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_19;
  if ( v9 >= e_entryid->max_length )
    sub_1C2209C(EnemyServantData, v8);
  v8 = (unsigned int)e_entryid->m_Items[v9 + 1];
  if ( (int)v8 < 1 )
    goto LABEL_18;
  EnemyServantData = BattleData__getEnemyServantData(data, v8, 0LL);
  if ( !EnemyServantData )
    goto LABEL_19;
  v11 = EnemyServantData;
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(EnemyServantData, 1, 0LL, 0LL);
  if ( (int)EnemyServantData < 1 )
  {
LABEL_18:
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1C22094(EnemyServantData, v8);
  }
  v12 = sub_1C22084(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, v11->fields.uniqueId, v14);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v12 + 32) = FieldPlayerServantIDList;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)FieldPlayerServantIDList, v16, v17, v18, v19, v20, v21);
  v22 = (BattleCommandData_o *)sub_1C22084(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v22, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0LL);
  if ( !v22 )
    goto LABEL_19;
  v22->fields._type = (int)EnemyServantData;
  v22->fields.svtlimit = BattleServantData__getDispLimitCount(v11, 1, 0LL);
  v22->fields.uniqueId = v11->fields.uniqueId;
  v22->fields.svtId = BattleServantData__getSvtId(v11, 0LL);
  v22->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0LL, 0LL);
  v23 = (BattleComboData_o *)sub_1C22084(BattleComboData_TypeInfo);
  BattleComboData___ctor(v23, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v23, v22, v9, v24);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v11, 1, 0LL, 0LL);
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
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v12,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v12;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v34 + 4), v12, v25, v26, v27, v28, v29, v30);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicSpecial__taskTresureDvc(
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
  int64_t v12; // x20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  System_Int32_array *FieldEnemyServantIDList; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  BattleCommandData_o *v22; // x22
  BattleComboData_o *v23; // x24
  const MethodInfo *v24; // x4
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  if ( (byte_4BDF31E & 1) == 0 )
  {
    sub_1C21E38(&BattleComboData_TypeInfo);
    sub_1C21E38(&BattleCommandData_TypeInfo);
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4BDF31E = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 8 )
    v9 = 2;
  else
    v9 = ltype == 7;
  if ( !data )
    goto LABEL_18;
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_18;
  if ( v9 >= p_entryid->max_length )
    sub_1C2209C(PlayerServantData, v8);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v9 + 1], 0LL);
  if ( !PlayerServantData || (v11 = PlayerServantData, !PlayerServantData->fields.reservationspecial) )
  {
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_1C22094(PlayerServantData, v8);
  }
  v12 = sub_1C22084(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 2, v11->fields.uniqueId, v14);
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  *(_QWORD *)(v12 + 32) = FieldEnemyServantIDList;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)FieldEnemyServantIDList, v16, v17, v18, v19, v20, v21);
  v22 = (BattleCommandData_o *)sub_1C22084(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v22, 0LL);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0LL);
  if ( !v22 )
    goto LABEL_18;
  v22->fields._type = (int)PlayerServantData;
  v22->fields.svtlimit = BattleServantData__getCommandDispLimitCount(v11, 0LL);
  v22->fields.uniqueId = v11->fields.uniqueId;
  v22->fields.svtId = BattleServantData__getSvtId(v11, 0LL);
  v22->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0LL, 0LL);
  v23 = (BattleComboData_o *)sub_1C22084(BattleComboData_TypeInfo);
  BattleComboData___ctor(v23, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v23, v22, v9, v24);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v11, 1, 0LL, 0LL);
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
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v12,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v12;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v34 + 4), v12, v25, v26, v27, v28, v29, v30);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicSpecial__taskTresureDvcAlways(
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4BDF31F & 1) == 0 )
  {
    sub_1C21E38(&BattleComboData_TypeInfo);
    sub_1C21E38(&BattleCommandData_TypeInfo);
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4BDF31F = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  if ( v10 >= p_entryid->max_length )
    sub_1C2209C(logictarget, v9);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v10 + 1], 0LL);
  v13 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
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
  v17 = (BattleCommandData_o *)sub_1C22084(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v17, 0LL);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcCardId(PlayerServantData, 0LL);
  if ( !v17 )
    goto LABEL_21;
  v17->fields._type = (int)logictarget;
  v17->fields.svtlimit = BattleServantData__getCommandDispLimitCount(PlayerServantData, 0LL);
  v17->fields.uniqueId = PlayerServantData->fields.uniqueId;
  v17->fields.svtId = BattleServantData__getSvtId(PlayerServantData, 0LL);
  v17->fields.treasureDvc = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL, 0LL);
  v18 = (BattleComboData_o *)sub_1C22084(BattleComboData_TypeInfo);
  BattleComboData___ctor(v18, 0LL);
  BattleLogicTask__setActionCommand(v13, v18, v17, v10, v19);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL, 0LL);
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
    sub_1C22094(logictarget, v9);
  }
  size = v7->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)v13,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v13;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)v13, v20, v21, v22, v23, v24, v25);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}