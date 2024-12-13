void __fastcall BattleLogicSpecial___ctor(BattleLogicSpecial_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicSpecial__AddTreasureDeviceBeforeFunctionTask(
        BattleLogicSpecial_o *this,
        BattleLogicTask_o *task,
        BattleServantData_o *actSvtData,
        int32_t targetId,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  BattleLogicSpecial_o *v10; // x20
  BattleLogicSpecial_o *v11; // x3
  BattleData_o *data; // x2
  bool v13; // w20

  v10 = this;
  if ( (byte_4B39EDC & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1BD3458(&BuffList_ACTION___TypeInfo, task);
    byte_4B39EDC = 1;
  }
  if ( !task )
    goto LABEL_16;
  if ( !task->fields.isCheckTreasureDeviceBeforeFunc )
    return 0;
  task->fields.isCheckTreasureDeviceBeforeFunc = 0;
  this = (BattleLogicSpecial_o *)sub_1BD3500(BuffList_ACTION___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_16;
  v11 = this;
  if ( !LODWORD(this->fields.logic) )
    sub_1BD36BC(this, task);
  LODWORD(this->fields.logictarget) = 141;
  this = (BattleLogicSpecial_o *)v10->fields.logic;
  if ( !this )
LABEL_16:
    sub_1BD36B4(this, task);
  this = (BattleLogicSpecial_o *)BattleLogic__AddTargetBuffFunctionTask(
                                   (BattleLogic_o *)this,
                                   actSvtData,
                                   targetId,
                                   (BuffList_ACTION_array *)v11,
                                   0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)v10->fields.logic;
    if ( !this )
      goto LABEL_16;
    BattleLogic__AddUnExecutedUpdateIntervalBuffActionData((BattleLogic_o *)this, 0LL);
    return 0;
  }
  if ( !command )
    goto LABEL_16;
  this = (BattleLogicSpecial_o *)BattleCommandData__getChainBonus(command, 0LL);
  if ( !actSvtData )
    goto LABEL_16;
  data = v10->fields.data;
  v13 = 1;
  BattleServantData__UsedTpWeapon(actSvtData, (int32_t)this, data, 1, 0LL);
  return v13;
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
      sub_1BD36BC(this, task);
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[1];
    if ( !this )
LABEL_14:
      sub_1BD36B4(this, task);
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
  if ( (byte_4B39EDA & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1BD3458(&Method_System_Collections_Generic_List_int__ToArray__, task);
    byte_4B39EDA = 1;
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
                                         (const MethodInfo_35A5824 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( data )
        {
          BattleData__SetWasAttackTargetIdList(data, v11, (System_Int32_array *)this, 0LL);
          goto LABEL_21;
        }
      }
LABEL_23:
      sub_1BD36B4(this, task);
    }
LABEL_24:
    sub_1BD36BC(this, task);
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
  PartyOrganizationUtility_o *v7; // x24
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
  __int64 data; // x0
  struct System_Int32_array *actorIdlist; // x8
  BattleServantData_o *ServantData; // x27
  BattleActionData_o *v25; // x21
  BattleActionData_o *v26; // x23
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  const MethodInfo *v33; // x4
  struct System_Int32_array *v34; // x8
  int v35; // w8
  BattleCommandData_o *command; // x24
  int32_t v37; // w25
  BattleLogic_o *v38; // x19
  int32_t actorId; // w20
  BattleActionData_o *v40; // x23
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v43; // x5
  TreasureDvcLvEntity_o *Entity; // x21
  int32_t ChainBonus; // w0
  DataVals_array *DataValsList; // x26
  DataVals_array *v47; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v48; // x29
  il2cpp_array_size_t v49; // w24
  struct System_Int32_array *v50; // x8
  Il2CppClass **v51; // x22
  __int64 v52; // x21
  __int64 *v53; // x22
  __int64 v54; // t1
  Il2CppClass **v55; // x27
  DataVals_o **v56; // x27
  __int64 v57; // t1
  BattleCommandData_o *v58; // x21
  BattleServantData_o *v59; // x22
  BattleBuffData_CheckIndividualitiesData_o *v60; // x28
  BattleCommandData_o *v61; // x24
  __int64 v62; // x29
  System_Int32_array *funcId; // x28
  long double v64; // q0
  __int64 v65; // x0
  __int64 v66; // x0
  int v67; // w8
  SkillLvMaster_o *v68; // x27
  __int64 v69; // x22
  __int64 v70; // x24
  __int64 v71; // x29
  _DWORD *v72; // x8
  __int64 v73; // x21
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  __int64 v80; // x8
  __int64 v81; // x29
  int64_t v82; // x21
  Il2CppClass **v83; // x0
  int32_t TreasureDvcId; // w0
  int32_t v85; // w27
  BattleLogicFunction_FunctionArgument_o *argument; // x29
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v94; // x8
  struct BattlePerformance_o *perf; // x8
  BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *v96; // x21
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *v98; // x20
  BattleActionData_o *v99; // x21
  struct BattleLogic_o *v100; // x8
  BattlePerformance_o *v101; // x24
  BattleActionWaitCond_UntilSideEffectInvisible_o *v102; // x22
  __int64 v103; // x0
  BattleCommandData_o *v104; // [xsp+30h] [xbp-80h]
  bool v105; // [xsp+3Ch] [xbp-74h]
  BattleServantData_o *v106; // [xsp+40h] [xbp-70h]
  TreasureDvcLvEntity_o *v107; // [xsp+48h] [xbp-68h]
  __int64 v108; // [xsp+48h] [xbp-68h]

  v7 = (PartyOrganizationUtility_o *)baseActionData;
  if ( (byte_4B39EDB & 1) == 0 )
  {
    sub_1BD3458(&BattleActionData_TypeInfo, baseActionData);
    sub_1BD3458(&BattleCommandData_TypeInfo, v9);
    sub_1BD3458(&BattlePerformance_TypeInfo, v10);
    sub_1BD3458(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v11);
    sub_1BD3458(&Method_DataManager_GetMasterData_FunctionMaster___, v12);
    sub_1BD3458(&Method_DataManager_GetMasterData_SkillLvMaster___, v13);
    sub_1BD3458(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v14);
    sub_1BD3458(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v15);
    sub_1BD3458(&BattleLogicFunction_FunctionArgument_TypeInfo, v16);
    sub_1BD3458(&int___TypeInfo, v17);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v18);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1BD3458(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo, v20);
    sub_1BD3458(&BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo, v21);
    byte_4B39EDB = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_121;
  BattleData__ResetWasAttackTargetId((BattleData_o *)data, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_121;
  BattleData__ResetFunctionedFunctionIds((BattleData_o *)data, 0LL);
  if ( !task )
    goto LABEL_121;
  actorIdlist = task->fields.actorIdlist;
  data = (__int64)this->fields.data;
  if ( actorIdlist )
  {
    if ( !actorIdlist->max_length )
      goto LABEL_122;
    baseActionData = (BattleActionData_o **)(unsigned int)actorIdlist->m_Items[1];
    if ( !data )
      goto LABEL_121;
  }
  else
  {
    baseActionData = (BattleActionData_o **)0xFFFFFFFFLL;
    if ( !data )
      goto LABEL_121;
  }
  ServantData = BattleData__getServantData((BattleData_o *)data, (int32_t)baseActionData, 0LL);
  v25 = (BattleActionData_o *)sub_1BD36A4(BattleActionData_TypeInfo);
  BattleActionData___ctor(v25, 0LL);
  if ( !v25 )
    goto LABEL_121;
  v26 = BattleActionData__AddDisplayTriggerIntervalBuff(v25, task, 0LL);
  v7->klass = (PartyOrganizationUtility_c *)v26;
  sub_1BD33FC(v7, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  v34 = task->fields.actorIdlist;
  if ( !v34 )
  {
    v35 = -1;
    if ( !v26 )
      goto LABEL_121;
    goto LABEL_17;
  }
  if ( !v34->max_length )
LABEL_122:
    sub_1BD36BC(data, baseActionData);
  v35 = v34->m_Items[1];
  if ( !v26 )
    goto LABEL_121;
LABEL_17:
  v26->fields.actorId = v35;
  data = (__int64)this->fields.logictarget;
  if ( !data )
    goto LABEL_121;
  command = task->fields.command;
  data = BattleLogicTarget__getTargetBase((BattleLogicTarget_o *)data, task->fields.targetIdlist, 0, 1, v33);
  v26->fields.targetId = data;
  if ( (int)data < 1 )
    return 0LL;
  baseActionData = (BattleActionData_o **)this->fields.data;
  if ( !baseActionData )
    goto LABEL_121;
  if ( *((_BYTE *)baseActionData + 280) || *((_BYTE *)baseActionData + 281) )
    return 0LL;
  if ( !ServantData )
    goto LABEL_121;
  v37 = data;
  if ( BattleServantData__checkUseTDvc(ServantData, (BattleData_o *)baseActionData, 1, 0LL)
    || isCounterOverwriteTreasureDevice )
  {
    data = (__int64)ServantData->fields.buffData;
    if ( data )
    {
      BattleBuffData__ResetCommandCodeBuffActiveFlg((BattleBuffData_o *)data, 0LL);
      data = (__int64)ServantData->fields.buffData;
      if ( data )
      {
        BattleBuffData__ResetCommandAssistBuffActiveFlg((BattleBuffData_o *)data, 0LL);
        data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( data )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)data,
                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
          data = BattleServantData__getTreasureDvcId(ServantData, !isCounterOverwriteTreasureDevice, 0LL, 0LL);
          if ( MasterData_object )
          {
            Entity = TreasureDvcLvMaster__GetEntity(
                       (TreasureDvcLvMaster_o *)MasterData_object,
                       data,
                       ServantData->fields.treasuredvcLevel,
                       0LL);
            if ( !isCounterOverwriteTreasureDevice )
            {
              data = BattleLogicSpecial__AddTreasureDeviceBeforeFunctionTask(this, task, ServantData, v37, command, v43);
              if ( (data & 1) != 0 )
              {
                data = (__int64)this->fields.logic;
                if ( !data )
                  goto LABEL_121;
                BattleLogic__AddBattleLogicTask((BattleLogic_o *)data, task, 0LL);
                return 0LL;
              }
              if ( !command )
                goto LABEL_121;
              ChainBonus = BattleCommandData__getChainBonus(command, 0LL);
              BattleServantData__UsedTpWeapon(ServantData, ChainBonus, this->fields.data, 0, 0LL);
            }
            data = (__int64)this->fields.logic;
            if ( data )
            {
              BattleLogic__updateResultServant((BattleLogic_o *)data, 0LL);
              data = BattleServantData__getNpPer(ServantData, 0LL);
              baseActionData = isCounterOverwriteTreasureDevice
                             ? (BattleActionData_o **)(unsigned int)(100 * task->fields.counterOc)
                             : (BattleActionData_o **)(unsigned int)data;
              v26->fields.npPer = (int)baseActionData;
              if ( Entity )
              {
                v106 = ServantData;
                v105 = isCounterOverwriteTreasureDevice;
                DataValsList = TreasureDvcLvEntity__getDataValsList(Entity, (int32_t)baseActionData, 0LL);
                v47 = TreasureDvcLvEntity__getDataValsList(Entity, 100, 0LL);
                data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( data )
                {
                  v104 = command;
                  data = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)data,
                                    (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_FunctionMaster___);
                  if ( DataValsList )
                  {
                    v107 = Entity;
                    if ( (int)DataValsList->max_length < 1 )
                    {
LABEL_72:
                      v58 = (BattleCommandData_o *)sub_1BD36A4(BattleCommandData_TypeInfo);
                      BattleCommandData___ctor(v58, 0LL);
                      v59 = v106;
                      data = BattleServantData__getTreasureDvcId(v106, 1, 0LL, 0LL);
                      if ( !v58 )
                        goto LABEL_121;
                      v58->fields.treasureDvc = data;
                      v60 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BD36A4(BattleBuffData_CheckIndividualitiesData_TypeInfo);
                      BattleBuffData_CheckIndividualitiesData___ctor_43487760(v60, v106, 0LL, v58, 0LL, 0LL, 0LL, 0LL);
                      data = (__int64)BattleServantData__getNPSideEffect(v106, v60, 0LL);
                      v61 = v104;
                      if ( !data )
                        goto LABEL_121;
                      v62 = data;
                      funcId = v107->fields.funcId;
                      if ( *(_QWORD *)(data + 24) )
                      {
                        if ( !funcId )
                          goto LABEL_121;
                        data = sub_1BD3500(int___TypeInfo, funcId->max_length);
                        if ( !v107->fields.funcId )
                          goto LABEL_121;
                        funcId = (System_Int32_array *)data;
                        System_Array__CopyTo((System_Array_o *)v107->fields.funcId, (System_Array_o *)data, 0, 0LL);
                        v65 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
                        if ( (*(_BYTE *)(v65 + 309) & 1) == 0 )
                          v65 = sub_1C25334(v64);
                        v66 = *(_QWORD *)(*(_QWORD *)(v65 + 192) + 16LL);
                        if ( (*(_BYTE *)(v66 + 309) & 1) == 0 )
                          v66 = sub_1C25334(v64);
                        data = **(_QWORD **)(v66 + 184);
                        if ( !data )
                          goto LABEL_121;
                        data = (__int64)DataManager__GetMasterData_object_(
                                          (DataManager_o *)data,
                                          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_SkillLvMaster___);
                        v67 = *(_DWORD *)(v62 + 24);
                        if ( v67 >= 1 )
                        {
                          v68 = (SkillLvMaster_o *)data;
                          v69 = 0LL;
                          v108 = v62 + 32;
                          do
                          {
                            if ( (unsigned int)v69 >= v67 )
                              goto LABEL_122;
                            v70 = v62;
                            v71 = *(_QWORD *)(v108 + 8 * v69);
                            if ( !v71 )
                              goto LABEL_121;
                            v72 = *(_DWORD **)(v71 + 104);
                            if ( !v72 )
                              goto LABEL_121;
                            if ( v72[6] < 2u )
                              goto LABEL_122;
                            if ( !v68 )
                              goto LABEL_121;
                            data = (__int64)SkillLvMaster__GetEntity(v68, v72[8], v72[9], 0LL);
                            if ( !data )
                              goto LABEL_121;
                            v73 = data;
                            data = (__int64)SkillLvEntity__getDataValsList((SkillLvEntity_o *)data, 0LL);
                            v80 = *(_QWORD *)(v73 + 32);
                            if ( !v80 )
                              goto LABEL_121;
                            if ( !*(_DWORD *)(v80 + 24) )
                              goto LABEL_122;
                            if ( !funcId )
                              goto LABEL_121;
                            v81 = *(int *)(v71 + 28);
                            if ( (unsigned int)v81 >= funcId->max_length )
                              goto LABEL_122;
                            funcId->m_Items[v81 + 1] = *(_DWORD *)(v80 + 32);
                            if ( !data )
                              goto LABEL_121;
                            if ( !*(_DWORD *)(data + 24) )
                              goto LABEL_122;
                            v82 = *(_QWORD *)(data + 32);
                            if ( v82 )
                            {
                              data = sub_1BD3594(*(_QWORD *)(data + 32), DataValsList->obj.klass->_1.element_class);
                              if ( !data )
                              {
                                v103 = sub_1BD36D8(0LL);
                                sub_1BD3580(v103, 0LL);
                              }
                            }
                            if ( (unsigned int)v81 >= DataValsList->max_length )
                              goto LABEL_122;
                            v83 = &DataValsList->obj.klass + v81;
                            v83[4] = (Il2CppClass *)v82;
                            sub_1BD33FC((PartyOrganizationUtility_o *)(v83 + 4), v82, v74, v75, v76, v77, v78, v79);
                            v67 = *(_DWORD *)(v70 + 24);
                            ++v69;
                            v62 = v70;
                          }
                          while ( (int)v69 < v67 );
                          v59 = v106;
                          v61 = v104;
                        }
                      }
                      TreasureDvcId = BattleServantData__getTreasureDvcId(v59, 1, 0LL, 0LL);
                      v26->fields.treasureDvcId = TreasureDvcId;
                      v85 = TreasureDvcId;
                      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1BD36A4(BattleLogicFunction_FunctionArgument_TypeInfo);
                      BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
                      if ( v105 )
                      {
                        v26->fields.isCounter = task->fields.isCounter;
                        motionMessage = task->fields.motionMessage;
                        v26->fields.motionMessage = motionMessage;
                        sub_1BD33FC(
                          (PartyOrganizationUtility_o *)&v26->fields.motionMessage,
                          (int64_t)motionMessage,
                          v87,
                          v88,
                          v89,
                          v90,
                          v91,
                          v92);
                        v26->fields._MessageType_k__BackingField = task->fields.messageType;
                      }
                      else
                      {
                        v94 = this->fields.data;
                        if ( !v94 )
                          goto LABEL_121;
                        perf = v94->fields.perf;
                        if ( !perf )
                          goto LABEL_121;
                        if ( !v61 )
                          goto LABEL_121;
                        data = (__int64)perf->fields.commandPerf;
                        if ( !data )
                          goto LABEL_121;
                        BattlePerformanceCommandCard__UpdateRemainingCardBuff(
                          (BattlePerformanceCommandCard_o *)data,
                          v61->fields.actionIndex,
                          0LL);
                        v96 = (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *)sub_1BD36A4(BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
                        BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument___ctor(v96, 0LL);
                        if ( !argument )
                          goto LABEL_121;
                        BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
                          argument,
                          (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v96,
                          0LL);
                      }
                      data = (__int64)this->fields.logicfunction;
                      if ( data )
                      {
                        v40 = BattleLogicFunction__procList(
                                (BattleLogicFunction_o *)data,
                                v26,
                                funcId,
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
                        BattleServantData__checkRegainNPUsedNoble(v106, 0LL);
                        data = (__int64)v106->fields.buffData;
                        if ( data )
                        {
                          data = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
                          if ( !v105 )
                          {
                            v106->fields.tmpNp = v106->fields.np;
                            BattleServantData__changeNp(v106, 0, 0, 0LL);
                          }
                          if ( v40 )
                          {
                            v40->fields.targetId = v37;
                            BattleActionData__setTypeTA(v40, 0LL);
                            BattleActionData__setCommand(v40, v61, 0LL);
                            v40->fields.motionId = BattleServantData__getTreasureDvcMotionId(v106, 0LL);
                            data = (__int64)this->fields.logic;
                            if ( data )
                            {
                              BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0LL);
                              v40->fields.prevattackme = 0;
                              v40->fields.isForcedSpeedOne = task->fields.isForcedSpeedOne;
                              data = (__int64)this->fields.data;
                              if ( data )
                              {
                                BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0LL);
                                logic = this->fields.logic;
                                if ( logic )
                                {
                                  v98 = logic->fields.perf;
                                  v99 = (BattleActionData_o *)sub_1BD36A4(BattleActionData_TypeInfo);
                                  BattleActionData___ctor(v99, 0LL);
                                  v100 = this->fields.logic;
                                  if ( v100 )
                                  {
                                    v101 = v100->fields.perf;
                                    v102 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)sub_1BD36A4(BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
                                    BattleActionWaitCond_UntilSideEffectInvisible___ctor(v102, v101, 0LL);
                                    if ( v99 )
                                    {
                                      data = (__int64)BattleActionData__SetWaitCond(
                                                        v99,
                                                        (BattleActionWaitCond_Base_o *)v102,
                                                        0LL);
                                      if ( v98 )
                                      {
                                        BattlePerformance__addActionData_42746608(v98, (BattleActionData_o *)data, 0LL);
                                        v40->fields.treasureDvcId = v85;
                                        BattleActionData__SetFuncTargetAllDead(v40, this->fields.data, 0LL);
                                        return v40;
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
                    else
                    {
                      v48 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
                      v49 = 0;
                      while ( 1 )
                      {
                        v50 = Entity->fields.funcId;
                        if ( !v50 )
                          break;
                        if ( v49 >= v50->max_length )
                          goto LABEL_122;
                        if ( !v48 )
                          break;
                        data = (__int64)DataMasterBase_object__object__int___GetEntity(
                                          v48,
                                          v50->m_Items[v49 + 1],
                                          (const MethodInfo_31D1EF0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
                        if ( v49 >= DataValsList->max_length )
                          goto LABEL_122;
                        v51 = &DataValsList->obj.klass + (int)v49;
                        v52 = data;
                        v54 = (__int64)v51[4];
                        v53 = (__int64 *)(v51 + 4);
                        data = v54;
                        if ( !v52 )
                          break;
                        if ( !data )
                          break;
                        DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v48, *(_DWORD *)(v52 + 24), 0LL);
                        if ( !v47 )
                          break;
                        if ( v49 >= v47->max_length )
                          goto LABEL_122;
                        v55 = &v47->obj.klass + (int)v49;
                        v57 = (__int64)v55[4];
                        v56 = (DataVals_o **)(v55 + 4);
                        data = v57;
                        if ( !v57 )
                          break;
                        DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v48, *(_DWORD *)(v52 + 24), 0LL);
                        if ( v49 >= DataValsList->max_length )
                          goto LABEL_122;
                        Entity = v107;
                        if ( v49 >= v47->max_length )
                          goto LABEL_122;
                        data = *v53;
                        if ( !*v53 )
                          break;
                        data = DataVals__CheckOverCharge((DataVals_o *)data, *v56, 0LL);
                        if ( (data & 1) != 0 )
                        {
                          if ( v49 >= DataValsList->max_length )
                            goto LABEL_122;
                          data = *v53;
                          if ( !*v53 )
                            break;
                          DataVals__SetOverCharge((DataVals_o *)data, 1, 0LL);
                        }
                        if ( v49 >= DataValsList->max_length || v49 >= v47->max_length )
                          goto LABEL_122;
                        if ( !*v56 )
                          break;
                        data = *v53;
                        if ( !*v53 )
                          break;
                        DataVals__SetDependOverChargeFlag((DataVals_o *)data, (*v56)->fields.dependDataValsList, 0LL);
                        if ( (signed int)++v49 >= (signed int)DataValsList->max_length )
                          goto LABEL_72;
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
LABEL_121:
    sub_1BD36B4(data, baseActionData);
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_121;
  BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0LL);
  v38 = this->fields.logic;
  actorId = v26->fields.actorId;
  data = (__int64)BattlePerformance_TypeInfo;
  if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
  if ( !v38 )
    goto LABEL_121;
  BattleLogic__addBackStepActionData(
    v38,
    actorId,
    BattlePerformance_TypeInfo->static_fields->AFTER_BACK_STEP_INTERVAL,
    0LL);
  return 0LL;
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

  if ( (byte_4B39ED8 & 1) == 0 )
  {
    sub_1BD3458(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1BD3458(&BattleCommandData_TypeInfo, v6);
    sub_1BD3458(&BattleLogicTask_TypeInfo, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1BD3458(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_4B39ED8 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1BD36BC(EnemyServantData, v14);
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
                                        (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1BD36B4(EnemyServantData, v14);
  }
  v18 = sub_1BD36A4(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v18, v19);
  if ( !v18 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v18, 3, v17->fields.uniqueId, v20);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v18 + 32) = FieldPlayerServantIDList;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v18 + 32), (int64_t)FieldPlayerServantIDList, v22, v23, v24, v25, v26, v27);
  v28 = (BattleCommandData_o *)sub_1BD36A4(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v28, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v17, 0LL);
  if ( !v28 )
    goto LABEL_19;
  v28->fields._type = (int)EnemyServantData;
  v28->fields.svtlimit = BattleServantData__getDispLimitCount(v17, 1, 0LL);
  v28->fields.uniqueId = v17->fields.uniqueId;
  v28->fields.svtId = BattleServantData__getSvtId(v17, 0LL);
  v28->fields.treasureDvc = BattleServantData__getTreasureDvcId(v17, 1, 0LL, 0LL);
  v29 = (BattleComboData_o *)sub_1BD36A4(BattleComboData_TypeInfo);
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
      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v40[4] = (Il2CppClass *)v18;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v40 + 4), v18, v31, v32, v33, v34, v35, v36);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4B39ED9 & 1) == 0 )
  {
    sub_1BD3458(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1BD3458(&BattleCommandData_TypeInfo, v6);
    sub_1BD3458(&BattleLogicTask_TypeInfo, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1BD3458(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_4B39ED9 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1BD36BC(EnemyServantData, v14);
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
                                        (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1BD36B4(EnemyServantData, v14);
  }
  v18 = sub_1BD36A4(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v18, v19);
  if ( !v18 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v18, 3, v17->fields.uniqueId, v20);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v18 + 32) = FieldPlayerServantIDList;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v18 + 32), (int64_t)FieldPlayerServantIDList, v22, v23, v24, v25, v26, v27);
  v28 = (BattleCommandData_o *)sub_1BD36A4(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v28, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v17, 0LL);
  if ( !v28 )
    goto LABEL_19;
  v28->fields._type = (int)EnemyServantData;
  v28->fields.svtlimit = BattleServantData__getDispLimitCount(v17, 1, 0LL);
  v28->fields.uniqueId = v17->fields.uniqueId;
  v28->fields.svtId = BattleServantData__getSvtId(v17, 0LL);
  v28->fields.treasureDvc = BattleServantData__getTreasureDvcId(v17, 1, 0LL, 0LL);
  v29 = (BattleComboData_o *)sub_1BD36A4(BattleComboData_TypeInfo);
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
      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v40[4] = (Il2CppClass *)v18;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v40 + 4), v18, v31, v32, v33, v34, v35, v36);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4B39ED6 & 1) == 0 )
  {
    sub_1BD3458(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1BD3458(&BattleCommandData_TypeInfo, v6);
    sub_1BD3458(&BattleLogicTask_TypeInfo, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1BD3458(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_4B39ED6 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1BD36BC(PlayerServantData, v14);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v15 + 1], 0LL);
  if ( !PlayerServantData || (v17 = PlayerServantData, !PlayerServantData->fields.reservationspecial) )
  {
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v12,
                                        (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_1BD36B4(PlayerServantData, v14);
  }
  v18 = sub_1BD36A4(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v18, v19);
  if ( !v18 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v18, 2, v17->fields.uniqueId, v20);
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  *(_QWORD *)(v18 + 32) = FieldEnemyServantIDList;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v18 + 32), (int64_t)FieldEnemyServantIDList, v22, v23, v24, v25, v26, v27);
  v28 = (BattleCommandData_o *)sub_1BD36A4(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v28, 0LL);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v17, 0LL);
  if ( !v28 )
    goto LABEL_18;
  v28->fields._type = (int)PlayerServantData;
  v28->fields.svtlimit = BattleServantData__getCommandDispLimitCount(v17, 0LL);
  v28->fields.uniqueId = v17->fields.uniqueId;
  v28->fields.svtId = BattleServantData__getSvtId(v17, 0LL);
  v28->fields.treasureDvc = BattleServantData__getTreasureDvcId(v17, 1, 0LL, 0LL);
  v29 = (BattleComboData_o *)sub_1BD36A4(BattleComboData_TypeInfo);
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
      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v40[4] = (Il2CppClass *)v18;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v40 + 4), v18, v31, v32, v33, v34, v35, v36);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4B39ED7 & 1) == 0 )
  {
    sub_1BD3458(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1BD3458(&BattleCommandData_TypeInfo, v7);
    sub_1BD3458(&BattleLogicTask_TypeInfo, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_1BD3458(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    byte_4B39ED7 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1BD36BC(logictarget, v15);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v16 + 1], 0LL);
  v19 = (BattleLogicTask_o *)sub_1BD36A4(BattleLogicTask_TypeInfo);
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
  v23 = (BattleCommandData_o *)sub_1BD36A4(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v23, 0LL);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcCardId(PlayerServantData, 0LL);
  if ( !v23 )
    goto LABEL_21;
  v23->fields._type = (int)logictarget;
  v23->fields.svtlimit = BattleServantData__getCommandDispLimitCount(PlayerServantData, 0LL);
  v23->fields.uniqueId = PlayerServantData->fields.uniqueId;
  v23->fields.svtId = BattleServantData__getSvtId(PlayerServantData, 0LL);
  v23->fields.treasureDvc = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL, 0LL);
  v24 = (BattleComboData_o *)sub_1BD36A4(BattleComboData_TypeInfo);
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
    sub_1BD36B4(logictarget, v15);
  }
  size = v13->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)v19,
      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v35[4] = (Il2CppClass *)v19;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v19, v26, v27, v28, v29, v30, v31);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}