void __fastcall BattleLogicSpecial___ctor(BattleLogicSpecial_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSpecial__createCounterOverwriteSpecialData(
        BattleLogicSpecial_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicSpecial_o *v3; // x19
  struct System_Int32_array *actorIdlist; // x8
  BattleLogicTask_o *v5; // x20
  BattleServantData_o *v6; // x21
  bool isAlive; // w8
  BattleActionData_o *result; // x0
  const MethodInfo *v9; // x4
  BattleActionData_o *v10; // x20
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-28h] BYREF

  baseActionData = 0LL;
  if ( !task )
    goto LABEL_14;
  v3 = this;
  actorIdlist = task->fields.actorIdlist;
  this = (BattleLogicSpecial_o *)this->fields.data;
  v5 = task;
  if ( actorIdlist )
  {
    if ( !actorIdlist->max_length )
      sub_1BE4D30(this, task);
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[1];
    if ( !this )
LABEL_14:
      sub_1BE4D28(this, task);
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_14;
  }
  this = (BattleLogicSpecial_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0LL);
  v6 = (BattleServantData_o *)this;
  if ( v5->fields.checkAlive )
  {
    if ( !this )
      goto LABEL_14;
    isAlive = BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL);
    result = 0LL;
    if ( !isAlive )
      return result;
  }
  else if ( !this )
  {
    goto LABEL_14;
  }
  BattleServantData__OverwriteTreasureDevice(v6, v5->fields.treasureDvcId, v5->fields.tresureDvcLv, 0LL);
  v10 = BattleLogicSpecial__createSpecialDataCommonFunction(v3, &baseActionData, v5, 1, v9);
  BattleServantData__ResetOverwriteTreasureDevice(v6, 0LL);
  this = (BattleLogicSpecial_o *)v3->fields.logic;
  if ( !this )
    goto LABEL_14;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)this, v10, baseActionData, 0LL);
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
  if ( (byte_4B6995C & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, task);
    byte_4B6995C = 1;
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
                                         (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( data )
        {
          BattleData__SetWasAttackTargetIdList(data, v11, (System_Int32_array *)this, 0LL);
          goto LABEL_21;
        }
      }
LABEL_23:
      sub_1BE4D28(this, task);
    }
LABEL_24:
    sub_1BE4D30(this, task);
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
  struct System_Int32_array *actorIdlist; // x8
  BattleServantData_o *ServantData; // x24
  BattleActionData_o *v29; // x21
  BattleActionData_o *v30; // x25
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  const MethodInfo *v37; // x4
  struct System_Int32_array *v38; // x8
  int v39; // w8
  BattleCommandData_o *command; // x27
  int32_t v41; // w22
  BattleLogic_o *logic; // x19
  int32_t actorId; // w20
  BattleActionData_o *v44; // x26
  Il2CppObject *MasterData_object; // x21
  TreasureDvcLvEntity_o *Entity; // x0
  BattleLogic_o *v48; // x26
  TreasureDvcLvEntity_o *v49; // x29
  BattleAddSkillTaskBeforeCounterTreasureDevice_o *v50; // x21
  bool v51; // w0
  BattleAddSkillTaskBeforeTreasureDevice_o *v52; // x21
  int32_t ChainBonus; // w0
  int32_t v54; // w0
  DataVals_array *DataValsList; // x26
  DataVals_array *v56; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v57; // x29
  il2cpp_array_size_t v58; // w24
  struct System_Int32_array *funcId; // x8
  Il2CppClass **v60; // x27
  __int64 v61; // x21
  __int64 *v62; // x27
  __int64 v63; // t1
  Il2CppClass **v64; // x23
  DataVals_o **v65; // x23
  __int64 v66; // t1
  BattleCommandData_o *v67; // x21
  BattleServantData_o *v68; // x23
  BattleBuffData_CheckIndividualitiesData_o *v69; // x28
  System_Int32_array *v70; // x28
  __int64 v71; // x29
  long double v72; // q0
  __int64 v73; // x0
  __int64 v74; // x0
  int v75; // w8
  SkillLvMaster_o *v76; // x27
  __int64 v77; // x24
  __int64 v78; // x29
  __int64 v79; // x23
  _DWORD *v80; // x8
  __int64 v81; // x21
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  __int64 v88; // x8
  __int64 v89; // x23
  int64_t v90; // x21
  Il2CppClass **v91; // x0
  int32_t TreasureDvcId; // w0
  int32_t v93; // w27
  BattleLogicFunction_FunctionArgument_o *argument; // x29
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v102; // x8
  struct BattlePerformance_o *perf; // x8
  BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *v104; // x21
  struct BattleLogic_o *v105; // x8
  BattlePerformance_o *v106; // x23
  BattleActionData_o *v107; // x21
  struct BattleLogic_o *v108; // x8
  BattlePerformance_o *v109; // x25
  BattleActionWaitCond_UntilSideEffectInvisible_o *v110; // x24
  BattleLogic_o *v111; // x20
  BattleAddSkillTaskAfterCounterTreasureDevice_o *v112; // x21
  __int64 v113; // x0
  BattleServantData_o *v114; // [xsp+30h] [xbp-80h]
  BattleCommandData_o *v115; // [xsp+38h] [xbp-78h]
  bool v116; // [xsp+44h] [xbp-6Ch]
  TreasureDvcLvEntity_o *v117; // [xsp+48h] [xbp-68h]
  __int64 v118; // [xsp+48h] [xbp-68h]

  v7 = (PartyOrganizationUtility_o *)baseActionData;
  if ( (byte_4B6995D & 1) == 0 )
  {
    sub_1BE4ACC(&BattleActionData_TypeInfo, baseActionData);
    sub_1BE4ACC(&BattleAddSkillTaskAfterCounterTreasureDevice_TypeInfo, v9);
    sub_1BE4ACC(&BattleAddSkillTaskAfterTreasureDevice_TypeInfo, v10);
    sub_1BE4ACC(&BattleAddSkillTaskBeforeCounterTreasureDevice_TypeInfo, v11);
    sub_1BE4ACC(&BattleAddSkillTaskBeforeTreasureDevice_TypeInfo, v12);
    sub_1BE4ACC(&BattleCommandData_TypeInfo, v13);
    sub_1BE4ACC(&BattlePerformance_TypeInfo, v14);
    sub_1BE4ACC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v15);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_FunctionMaster___, v16);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillLvMaster___, v17);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v18);
    sub_1BE4ACC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v19);
    sub_1BE4ACC(&BattleLogicFunction_FunctionArgument_TypeInfo, v20);
    sub_1BE4ACC(&int___TypeInfo, v21);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v22);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1BE4ACC(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo, v24);
    sub_1BE4ACC(&BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo, v25);
    byte_4B6995D = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_129;
  BattleData__ResetWasAttackTargetId((BattleData_o *)data, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_129;
  BattleData__ResetFunctionedFunctionIds((BattleData_o *)data, 0LL);
  if ( !task )
    goto LABEL_129;
  actorIdlist = task->fields.actorIdlist;
  data = (__int64)this->fields.data;
  if ( actorIdlist )
  {
    if ( !actorIdlist->max_length )
      goto LABEL_130;
    baseActionData = (BattleActionData_o **)(unsigned int)actorIdlist->m_Items[1];
    if ( !data )
      goto LABEL_129;
  }
  else
  {
    baseActionData = (BattleActionData_o **)0xFFFFFFFFLL;
    if ( !data )
      goto LABEL_129;
  }
  ServantData = BattleData__getServantData((BattleData_o *)data, (int32_t)baseActionData, 0LL);
  v29 = (BattleActionData_o *)sub_1BE4D18(BattleActionData_TypeInfo);
  BattleActionData___ctor(v29, 0LL);
  if ( !v29 )
    goto LABEL_129;
  v30 = BattleActionData__AddDisplayTriggerIntervalBuff(v29, task, 0LL);
  v7->klass = (PartyOrganizationUtility_c *)v30;
  sub_1BE4A70(v7, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  v38 = task->fields.actorIdlist;
  if ( v38 )
  {
    if ( !v38->max_length )
      goto LABEL_130;
    v39 = v38->m_Items[1];
    if ( !v30 )
      goto LABEL_129;
  }
  else
  {
    v39 = -1;
    if ( !v30 )
      goto LABEL_129;
  }
  v30->fields.actorId = v39;
  data = (__int64)this->fields.logictarget;
  if ( !data )
    goto LABEL_129;
  command = task->fields.command;
  data = BattleLogicTarget__getTargetBase((BattleLogicTarget_o *)data, task->fields.targetIdlist, 0, 1, v37);
  v30->fields.targetId = data;
  if ( (int)data < 1 )
    return 0LL;
  baseActionData = (BattleActionData_o **)this->fields.data;
  if ( !baseActionData )
    goto LABEL_129;
  if ( *((_BYTE *)baseActionData + 280) || *((_BYTE *)baseActionData + 281) )
    return 0LL;
  if ( !ServantData )
    goto LABEL_129;
  v41 = data;
  if ( !BattleServantData__checkUseTDvc(ServantData, (BattleData_o *)baseActionData, 1, 0LL)
    && !isCounterOverwriteTreasureDevice )
  {
    data = (__int64)this->fields.data;
    if ( data )
    {
      BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0LL);
      logic = this->fields.logic;
      actorId = v30->fields.actorId;
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
    goto LABEL_129;
  }
  data = (__int64)ServantData->fields.buffData;
  if ( !data )
    goto LABEL_129;
  BattleBuffData__ResetCommandCodeBuffActiveFlg((BattleBuffData_o *)data, 0LL);
  data = (__int64)ServantData->fields.buffData;
  if ( !data )
    goto LABEL_129;
  BattleBuffData__ResetCommandAssistBuffActiveFlg((BattleBuffData_o *)data, 0LL);
  data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_129;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  data = BattleServantData__getTreasureDvcId(ServantData, !isCounterOverwriteTreasureDevice, 0LL, 0LL);
  if ( !MasterData_object )
    goto LABEL_129;
  Entity = TreasureDvcLvMaster__GetEntity(
             (TreasureDvcLvMaster_o *)MasterData_object,
             data,
             ServantData->fields.treasuredvcLevel,
             0LL);
  v48 = this->fields.logic;
  v49 = Entity;
  if ( isCounterOverwriteTreasureDevice )
  {
    v50 = (BattleAddSkillTaskBeforeCounterTreasureDevice_o *)sub_1BE4D18(BattleAddSkillTaskBeforeCounterTreasureDevice_TypeInfo);
    BattleAddSkillTaskBeforeCounterTreasureDevice___ctor(v50, 0LL);
    if ( !v48 )
      goto LABEL_129;
    v51 = BattleLogic__AddSkillTask(v48, (BattleAddSkillTaskAroundTargetTask_o *)v50, task, v41, 0LL);
    v44 = 0LL;
    if ( v51 )
      return v44;
  }
  else
  {
    v52 = (BattleAddSkillTaskBeforeTreasureDevice_o *)sub_1BE4D18(BattleAddSkillTaskBeforeTreasureDevice_TypeInfo);
    BattleAddSkillTaskBeforeTreasureDevice___ctor(v52, 0LL);
    if ( !v48 )
      goto LABEL_129;
    data = BattleLogic__AddSkillTask(v48, (BattleAddSkillTaskAroundTargetTask_o *)v52, task, v41, 0LL);
    if ( (data & 1) != 0 )
    {
      if ( !command )
        goto LABEL_129;
      ChainBonus = BattleCommandData__getChainBonus(command, 0LL);
      BattleServantData__UsedTpWeapon(ServantData, ChainBonus, this->fields.data, 1, 0LL);
      return 0LL;
    }
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_129;
    BattleLogic__AddUnExecutedUpdateIntervalBuffActionData((BattleLogic_o *)data, 0LL);
    if ( !command )
      goto LABEL_129;
    v54 = BattleCommandData__getChainBonus(command, 0LL);
    BattleServantData__UsedTpWeapon(ServantData, v54, this->fields.data, 0, 0LL);
  }
  data = (__int64)this->fields.logic;
  if ( !data )
    goto LABEL_129;
  BattleLogic__updateResultServant((BattleLogic_o *)data, 0LL);
  data = BattleServantData__getNpPer(ServantData, 0LL);
  baseActionData = isCounterOverwriteTreasureDevice
                 ? (BattleActionData_o **)(unsigned int)(100 * task->fields.counterOc)
                 : (BattleActionData_o **)(unsigned int)data;
  v30->fields.npPer = (int)baseActionData;
  if ( !v49 )
    goto LABEL_129;
  v114 = ServantData;
  v115 = command;
  v116 = isCounterOverwriteTreasureDevice;
  DataValsList = TreasureDvcLvEntity__getDataValsList(v49, (int32_t)baseActionData, 0LL);
  v117 = v49;
  v56 = TreasureDvcLvEntity__getDataValsList(v49, 100, 0LL);
  data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_129;
  data = (__int64)DataManager__GetMasterData_object_(
                    (DataManager_o *)data,
                    (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !DataValsList )
    goto LABEL_129;
  if ( (int)DataValsList->max_length >= 1 )
  {
    v57 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
    v58 = 0;
    do
    {
      funcId = v117->fields.funcId;
      if ( !funcId )
        goto LABEL_129;
      if ( v58 >= funcId->max_length )
        goto LABEL_130;
      if ( !v57 )
        goto LABEL_129;
      data = (__int64)DataMasterBase_object__object__int___GetEntity(
                        v57,
                        funcId->m_Items[v58 + 1],
                        (const MethodInfo_31FD7C4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( v58 >= DataValsList->max_length )
        goto LABEL_130;
      v60 = &DataValsList->obj.klass + (int)v58;
      v61 = data;
      v63 = (__int64)v60[4];
      v62 = (__int64 *)(v60 + 4);
      data = v63;
      if ( !v61 )
        goto LABEL_129;
      if ( !data )
        goto LABEL_129;
      DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v57, *(_DWORD *)(v61 + 24), 0LL);
      if ( !v56 )
        goto LABEL_129;
      if ( v58 >= v56->max_length )
        goto LABEL_130;
      v64 = &v56->obj.klass + (int)v58;
      v66 = (__int64)v64[4];
      v65 = (DataVals_o **)(v64 + 4);
      data = v66;
      if ( !v66 )
        goto LABEL_129;
      DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v57, *(_DWORD *)(v61 + 24), 0LL);
      if ( v58 >= DataValsList->max_length || v58 >= v56->max_length )
        goto LABEL_130;
      data = *v62;
      if ( !*v62 )
        goto LABEL_129;
      data = DataVals__CheckOverCharge((DataVals_o *)data, *v65, 0LL);
      if ( (data & 1) != 0 )
      {
        if ( v58 >= DataValsList->max_length )
          goto LABEL_130;
        data = *v62;
        if ( !*v62 )
          goto LABEL_129;
        DataVals__SetOverCharge((DataVals_o *)data, 1, 0LL);
      }
      if ( v58 >= DataValsList->max_length || v58 >= v56->max_length )
        goto LABEL_130;
      if ( !*v65 )
        goto LABEL_129;
      data = *v62;
      if ( !*v62 )
        goto LABEL_129;
      DataVals__SetDependOverChargeFlag((DataVals_o *)data, (*v65)->fields.dependDataValsList, 0LL);
    }
    while ( (signed int)++v58 < (signed int)DataValsList->max_length );
  }
  v67 = (BattleCommandData_o *)sub_1BE4D18(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v67, 0LL);
  v68 = v114;
  data = BattleServantData__getTreasureDvcId(v114, 1, 0LL, 0LL);
  if ( !v67 )
    goto LABEL_129;
  v67->fields.treasureDvc = data;
  v69 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BE4D18(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_43634876(v69, v114, 0LL, v67, 0LL, 0LL, 0LL, 0LL);
  data = (__int64)BattleServantData__getNPSideEffect(v114, v69, 0LL);
  if ( !data )
    goto LABEL_129;
  v70 = v117->fields.funcId;
  v71 = data;
  if ( *(_QWORD *)(data + 24) )
  {
    if ( !v70 )
      goto LABEL_129;
    data = sub_1BE4B74(int___TypeInfo, v70->max_length);
    if ( !v117->fields.funcId )
      goto LABEL_129;
    v70 = (System_Int32_array *)data;
    System_Array__CopyTo((System_Array_o *)v117->fields.funcId, (System_Array_o *)data, 0, 0LL);
    v73 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v73 + 309) & 1) == 0 )
      v73 = sub_1C369A8(v72);
    v74 = *(_QWORD *)(*(_QWORD *)(v73 + 192) + 16LL);
    if ( (*(_BYTE *)(v74 + 309) & 1) == 0 )
      v74 = sub_1C369A8(v72);
    data = **(_QWORD **)(v74 + 184);
    if ( !data )
      goto LABEL_129;
    data = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)data,
                      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    v75 = *(_DWORD *)(v71 + 24);
    if ( v75 >= 1 )
    {
      v76 = (SkillLvMaster_o *)data;
      v77 = 0LL;
      v118 = v71;
      v78 = v71 + 32;
      while ( (unsigned int)v77 < v75 )
      {
        v79 = *(_QWORD *)(v78 + 8 * v77);
        if ( !v79 )
          goto LABEL_129;
        v80 = *(_DWORD **)(v79 + 104);
        if ( !v80 )
          goto LABEL_129;
        if ( v80[6] < 2u )
          break;
        if ( !v76 )
          goto LABEL_129;
        data = (__int64)SkillLvMaster__GetEntity(v76, v80[8], v80[9], 0LL);
        if ( !data )
          goto LABEL_129;
        v81 = data;
        data = (__int64)SkillLvEntity__getDataValsList((SkillLvEntity_o *)data, 0LL);
        v88 = *(_QWORD *)(v81 + 32);
        if ( !v88 )
          goto LABEL_129;
        if ( !*(_DWORD *)(v88 + 24) )
          break;
        if ( !v70 )
          goto LABEL_129;
        v89 = *(int *)(v79 + 28);
        if ( (unsigned int)v89 >= v70->max_length )
          break;
        v70->m_Items[v89 + 1] = *(_DWORD *)(v88 + 32);
        if ( !data )
          goto LABEL_129;
        if ( !*(_DWORD *)(data + 24) )
          break;
        v90 = *(_QWORD *)(data + 32);
        if ( v90 )
        {
          data = sub_1BE4C08(*(_QWORD *)(data + 32), DataValsList->obj.klass->_1.element_class);
          if ( !data )
          {
            v113 = sub_1BE4D4C(0LL);
            sub_1BE4BF4(v113, 0LL);
          }
        }
        if ( (unsigned int)v89 >= DataValsList->max_length )
          break;
        v91 = &DataValsList->obj.klass + v89;
        v91[4] = (Il2CppClass *)v90;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v91 + 4), v90, v82, v83, v84, v85, v86, v87);
        ++v77;
        v75 = *(_DWORD *)(v118 + 24);
        if ( (int)v77 >= v75 )
          goto LABEL_105;
      }
LABEL_130:
      sub_1BE4D30(data, baseActionData);
    }
LABEL_105:
    v68 = v114;
  }
  TreasureDvcId = BattleServantData__getTreasureDvcId(v68, 1, 0LL, 0LL);
  v30->fields.treasureDvcId = TreasureDvcId;
  v93 = TreasureDvcId;
  argument = (BattleLogicFunction_FunctionArgument_o *)sub_1BE4D18(BattleLogicFunction_FunctionArgument_TypeInfo);
  BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
  if ( v116 )
  {
    v30->fields.isCounter = task->fields.isCounter;
    motionMessage = task->fields.motionMessage;
    v30->fields.motionMessage = motionMessage;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&v30->fields.motionMessage,
      (int64_t)motionMessage,
      v95,
      v96,
      v97,
      v98,
      v99,
      v100);
    v30->fields._MessageType_k__BackingField = task->fields.messageType;
  }
  else
  {
    v102 = this->fields.data;
    if ( !v102 )
      goto LABEL_129;
    perf = v102->fields.perf;
    if ( !perf )
      goto LABEL_129;
    if ( !v115 )
      goto LABEL_129;
    data = (__int64)perf->fields.commandPerf;
    if ( !data )
      goto LABEL_129;
    BattlePerformanceCommandCard__UpdateRemainingCardBuff(
      (BattlePerformanceCommandCard_o *)data,
      v115->fields.actionIndex,
      0LL);
    v104 = (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *)sub_1BE4D18(BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
    BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument___ctor(v104, 0LL);
    if ( !argument )
      goto LABEL_129;
    BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
      argument,
      (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v104,
      0LL);
  }
  data = (__int64)this->fields.logicfunction;
  if ( !data )
    goto LABEL_129;
  v44 = BattleLogicFunction__procList(
          (BattleLogicFunction_o *)data,
          v30,
          v70,
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
  BattleServantData__checkRegainNPUsedNoble(v68, 0LL);
  data = (__int64)v68->fields.buffData;
  if ( !data )
    goto LABEL_129;
  data = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
  if ( !v116 )
  {
    v68->fields.tmpNp = v68->fields.np;
    BattleServantData__changeNp(v68, 0, 0, 0LL);
  }
  if ( !v44 )
    goto LABEL_129;
  v44->fields.targetId = v41;
  BattleActionData__setTypeTA(v44, 0LL);
  BattleActionData__setCommand(v44, v115, 0LL);
  v44->fields.motionId = BattleServantData__getTreasureDvcMotionId(v68, 0LL);
  data = (__int64)this->fields.logic;
  if ( !data )
    goto LABEL_129;
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0LL);
  v44->fields.prevattackme = 0;
  v44->fields.isForcedSpeedOne = task->fields.isForcedSpeedOne;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_129;
  BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0LL);
  v105 = this->fields.logic;
  if ( !v105 )
    goto LABEL_129;
  v106 = v105->fields.perf;
  v107 = (BattleActionData_o *)sub_1BE4D18(BattleActionData_TypeInfo);
  BattleActionData___ctor(v107, 0LL);
  v108 = this->fields.logic;
  if ( !v108
    || (v109 = v108->fields.perf,
        v110 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)sub_1BE4D18(BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo),
        BattleActionWaitCond_UntilSideEffectInvisible___ctor(v110, v109, 0LL),
        !v107)
    || (data = (__int64)BattleActionData__SetWaitCond(v107, (BattleActionWaitCond_Base_o *)v110, 0LL), !v106) )
  {
LABEL_129:
    sub_1BE4D28(data, baseActionData);
  }
  BattlePerformance__addActionData_42892568(v106, (BattleActionData_o *)data, 0LL);
  v44->fields.treasureDvcId = v93;
  BattleActionData__SetFuncTargetAllDead(v44, this->fields.data, 0LL);
  v111 = this->fields.logic;
  if ( v116 )
  {
    v112 = (BattleAddSkillTaskAfterCounterTreasureDevice_o *)sub_1BE4D18(BattleAddSkillTaskAfterCounterTreasureDevice_TypeInfo);
    BattleAddSkillTaskAfterCounterTreasureDevice___ctor(v112, 0LL);
    if ( !v111 )
      goto LABEL_129;
  }
  else
  {
    v112 = (BattleAddSkillTaskAfterCounterTreasureDevice_o *)sub_1BE4D18(BattleAddSkillTaskAfterTreasureDevice_TypeInfo);
    BattleAddSkillTaskAfterTreasureDevice___ctor((BattleAddSkillTaskAfterTreasureDevice_o *)v112, 0LL);
    if ( !v111 )
      goto LABEL_129;
  }
  BattleLogic__AddSkillTask(v111, (BattleAddSkillTaskAroundTargetTask_o *)v112, task, v41, 0LL);
  return v44;
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
  unsigned int v15; // w21
  struct System_Int32_array *e_entryid; // x8
  BattleServantData_o *v17; // x23
  int64_t v18; // x20
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x3
  System_Int32_array *FieldPlayerServantIDList; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  BattleCommandData_o *v28; // x22
  BattleComboData_o *v29; // x24
  const MethodInfo *v30; // x4
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0

  if ( (byte_4B6995A & 1) == 0 )
  {
    sub_1BE4ACC(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1BE4ACC(&BattleCommandData_TypeInfo, v6);
    sub_1BE4ACC(&BattleLogicTask_TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_4B6995A = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 16 )
    v15 = 2;
  else
    v15 = ltype == 15;
  if ( !data )
    goto LABEL_19;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_19;
  if ( v15 >= e_entryid->max_length )
    sub_1BE4D30(EnemyServantData, v14);
  v14 = (unsigned int)e_entryid->m_Items[v15 + 1];
  if ( (int)v14 < 1 )
    goto LABEL_18;
  EnemyServantData = BattleData__getEnemyServantData(data, v14, 0LL);
  if ( !EnemyServantData )
    goto LABEL_19;
  v17 = EnemyServantData;
  if ( !EnemyServantData->fields.reservationspecial )
  {
LABEL_18:
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v12,
                                        (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1BE4D28(EnemyServantData, v14);
  }
  v18 = sub_1BE4D18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v18, v19);
  if ( !v18 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v18, 3, v17->fields.uniqueId, v20);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v18 + 32) = FieldPlayerServantIDList;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v18 + 32), (int64_t)FieldPlayerServantIDList, v22, v23, v24, v25, v26, v27);
  v28 = (BattleCommandData_o *)sub_1BE4D18(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v28, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v17, 0LL);
  if ( !v28 )
    goto LABEL_19;
  v28->fields._type = (int)EnemyServantData;
  v28->fields.svtlimit = BattleServantData__getDispLimitCount(v17, 1, 0LL);
  v28->fields.uniqueId = v17->fields.uniqueId;
  v28->fields.svtId = BattleServantData__getSvtId(v17, 0LL);
  v28->fields.treasureDvc = BattleServantData__getTreasureDvcId(v17, 1, 0LL, 0LL);
  v29 = (BattleComboData_o *)sub_1BE4D18(BattleComboData_TypeInfo);
  BattleComboData___ctor(v29, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v18, v29, v28, v15, v30);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v17, 1, 0LL, 0LL);
  *(_DWORD *)(v18 + 48) = 4;
  *(_DWORD *)(v18 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v18 + 88) = 1;
  if ( !v12 )
    goto LABEL_19;
  items = v12->fields._items;
  v38 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v18,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v40[4] = (Il2CppClass *)v18;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v40 + 4), v18, v31, v32, v33, v34, v35, v36);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  unsigned int v15; // w20
  struct System_Int32_array *e_entryid; // x8
  BattleServantData_o *v17; // x23
  int64_t v18; // x21
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x3
  System_Int32_array *FieldPlayerServantIDList; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  BattleCommandData_o *v28; // x22
  BattleComboData_o *v29; // x24
  const MethodInfo *v30; // x4
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0

  if ( (byte_4B6995B & 1) == 0 )
  {
    sub_1BE4ACC(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1BE4ACC(&BattleCommandData_TypeInfo, v6);
    sub_1BE4ACC(&BattleLogicTask_TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_4B6995B = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 23 )
    v15 = 2;
  else
    v15 = ltype == 22;
  if ( !data )
    goto LABEL_19;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_19;
  if ( v15 >= e_entryid->max_length )
    sub_1BE4D30(EnemyServantData, v14);
  v14 = (unsigned int)e_entryid->m_Items[v15 + 1];
  if ( (int)v14 < 1 )
    goto LABEL_18;
  EnemyServantData = BattleData__getEnemyServantData(data, v14, 0LL);
  if ( !EnemyServantData )
    goto LABEL_19;
  v17 = EnemyServantData;
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(EnemyServantData, 1, 0LL, 0LL);
  if ( (int)EnemyServantData < 1 )
  {
LABEL_18:
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v12,
                                        (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1BE4D28(EnemyServantData, v14);
  }
  v18 = sub_1BE4D18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v18, v19);
  if ( !v18 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v18, 3, v17->fields.uniqueId, v20);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v18 + 32) = FieldPlayerServantIDList;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v18 + 32), (int64_t)FieldPlayerServantIDList, v22, v23, v24, v25, v26, v27);
  v28 = (BattleCommandData_o *)sub_1BE4D18(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v28, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v17, 0LL);
  if ( !v28 )
    goto LABEL_19;
  v28->fields._type = (int)EnemyServantData;
  v28->fields.svtlimit = BattleServantData__getDispLimitCount(v17, 1, 0LL);
  v28->fields.uniqueId = v17->fields.uniqueId;
  v28->fields.svtId = BattleServantData__getSvtId(v17, 0LL);
  v28->fields.treasureDvc = BattleServantData__getTreasureDvcId(v17, 1, 0LL, 0LL);
  v29 = (BattleComboData_o *)sub_1BE4D18(BattleComboData_TypeInfo);
  BattleComboData___ctor(v29, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v18, v29, v28, v15, v30);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v17, 1, 0LL, 0LL);
  *(_DWORD *)(v18 + 48) = 4;
  *(_DWORD *)(v18 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v18 + 88) = 1;
  if ( !v12 )
    goto LABEL_19;
  items = v12->fields._items;
  v38 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v18,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v40[4] = (Il2CppClass *)v18;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v40 + 4), v18, v31, v32, v33, v34, v35, v36);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  unsigned int v15; // w21
  struct System_Int32_array *p_entryid; // x8
  BattleServantData_o *v17; // x23
  int64_t v18; // x20
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x3
  System_Int32_array *FieldEnemyServantIDList; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  BattleCommandData_o *v28; // x22
  BattleComboData_o *v29; // x24
  const MethodInfo *v30; // x4
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0

  if ( (byte_4B69958 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1BE4ACC(&BattleCommandData_TypeInfo, v6);
    sub_1BE4ACC(&BattleLogicTask_TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_4B69958 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 8 )
    v15 = 2;
  else
    v15 = ltype == 7;
  if ( !data )
    goto LABEL_18;
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_18;
  if ( v15 >= p_entryid->max_length )
    sub_1BE4D30(PlayerServantData, v14);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v15 + 1], 0LL);
  if ( !PlayerServantData || (v17 = PlayerServantData, !PlayerServantData->fields.reservationspecial) )
  {
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v12,
                                        (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_1BE4D28(PlayerServantData, v14);
  }
  v18 = sub_1BE4D18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v18, v19);
  if ( !v18 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v18, 2, v17->fields.uniqueId, v20);
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  *(_QWORD *)(v18 + 32) = FieldEnemyServantIDList;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v18 + 32), (int64_t)FieldEnemyServantIDList, v22, v23, v24, v25, v26, v27);
  v28 = (BattleCommandData_o *)sub_1BE4D18(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v28, 0LL);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v17, 0LL);
  if ( !v28 )
    goto LABEL_18;
  v28->fields._type = (int)PlayerServantData;
  v28->fields.svtlimit = BattleServantData__getCommandDispLimitCount(v17, 0LL);
  v28->fields.uniqueId = v17->fields.uniqueId;
  v28->fields.svtId = BattleServantData__getSvtId(v17, 0LL);
  v28->fields.treasureDvc = BattleServantData__getTreasureDvcId(v17, 1, 0LL, 0LL);
  v29 = (BattleComboData_o *)sub_1BE4D18(BattleComboData_TypeInfo);
  BattleComboData___ctor(v29, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v18, v29, v28, v15, v30);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v17, 1, 0LL, 0LL);
  *(_DWORD *)(v18 + 48) = 4;
  *(_DWORD *)(v18 + 84) = (_DWORD)PlayerServantData;
  *(_DWORD *)(v18 + 88) = 1;
  if ( !v12 )
    goto LABEL_18;
  items = v12->fields._items;
  v38 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_18;
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v18,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v40[4] = (Il2CppClass *)v18;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v40 + 4), v18, v31, v32, v33, v34, v35, v36);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  unsigned int v16; // w21
  struct System_Int32_array *p_entryid; // x8
  BattleServantData_o *PlayerServantData; // x23
  BattleLogicTask_o *v19; // x20
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2
  BattleCommandData_o *v23; // x22
  BattleComboData_o *v24; // x24
  const MethodInfo *v25; // x4
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  if ( (byte_4B69959 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1BE4ACC(&BattleCommandData_TypeInfo, v7);
    sub_1BE4ACC(&BattleLogicTask_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    byte_4B69959 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 6 )
  {
    v16 = 0;
  }
  else if ( ltype == 7 )
  {
    v16 = 1;
  }
  else
  {
    v16 = 2 * (ltype == 8);
  }
  if ( !data )
    goto LABEL_21;
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_21;
  if ( v16 >= p_entryid->max_length )
    sub_1BE4D30(logictarget, v15);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v16 + 1], 0LL);
  v19 = (BattleLogicTask_o *)sub_1BE4D18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v19, v20);
  if ( !PlayerServantData )
    goto LABEL_21;
  if ( !v19 )
    goto LABEL_21;
  BattleLogicTask__setActor(v19, 2, PlayerServantData->fields.uniqueId, v21);
  logictarget = this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_21;
  BattleLogicTarget__getTargetBattleServantData(logictarget, v19, v22);
  v23 = (BattleCommandData_o *)sub_1BE4D18(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v23, 0LL);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcCardId(PlayerServantData, 0LL);
  if ( !v23 )
    goto LABEL_21;
  v23->fields._type = (int)logictarget;
  v23->fields.svtlimit = BattleServantData__getCommandDispLimitCount(PlayerServantData, 0LL);
  v23->fields.uniqueId = PlayerServantData->fields.uniqueId;
  v23->fields.svtId = BattleServantData__getSvtId(PlayerServantData, 0LL);
  v23->fields.treasureDvc = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL, 0LL);
  v24 = (BattleComboData_o *)sub_1BE4D18(BattleComboData_TypeInfo);
  BattleComboData___ctor(v24, 0LL);
  BattleLogicTask__setActionCommand(v19, v24, v23, v16, v25);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL, 0LL);
  v19->fields.actiontype = 4;
  v19->fields.treasureDvcId = (int)logictarget;
  v19->fields.tresureDvcLv = 1;
  if ( !v13
    || (items = v13->fields._items,
        v33 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v13->fields._version,
        !items) )
  {
LABEL_21:
    sub_1BE4D28(logictarget, v15);
  }
  size = v13->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)v19,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v35[4] = (Il2CppClass *)v19;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v19, v26, v27, v28, v29, v30, v31);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}