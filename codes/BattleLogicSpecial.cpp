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
  __int64 v11; // x1
  BattleLogicSpecial_o *v12; // x3
  BattleData_o *data; // x2
  bool v14; // w20

  v10 = this;
  if ( (byte_49FF025 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1B640C8(&BuffList_ACTION___TypeInfo, task);
    byte_49FF025 = 1;
  }
  if ( !task )
    goto LABEL_16;
  if ( !task->fields.isCheckTreasureDeviceBeforeFunc )
    return 0;
  task->fields.isCheckTreasureDeviceBeforeFunc = 0;
  this = (BattleLogicSpecial_o *)sub_1B64170(BuffList_ACTION___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_16;
  v12 = this;
  if ( !LODWORD(this->fields.logic) )
    sub_1B6432C(this, v11);
  LODWORD(this->fields.logictarget) = 141;
  this = (BattleLogicSpecial_o *)v10->fields.logic;
  if ( !this )
LABEL_16:
    sub_1B64324(this);
  this = (BattleLogicSpecial_o *)BattleLogic__AddTargetBuffFunctionTask(
                                   (BattleLogic_o *)this,
                                   actSvtData,
                                   targetId,
                                   (BuffList_ACTION_array *)v12,
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
  v14 = 1;
  BattleServantData__UsedTpWeapon(actSvtData, (int32_t)this, data, 1, 0LL);
  return v14;
}


BattleActionData_o *__fastcall BattleLogicSpecial__createCounterOverwriteSpecialData(
        BattleLogicSpecial_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleData_o *data; // x21
  BattleLogicSpecial_o *v5; // x19
  BattleServantData_o *v6; // x21
  bool isAlive; // w8
  BattleActionData_o *result; // x0
  const MethodInfo *v9; // x4
  BattleActionData_o *v10; // x20
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-28h] BYREF

  baseActionData = 0LL;
  if ( !task )
    goto LABEL_11;
  data = this->fields.data;
  v5 = this;
  this = (BattleLogicSpecial_o *)BattleLogicTask__getActorId(task, 0LL);
  if ( !data )
    goto LABEL_11;
  this = (BattleLogicSpecial_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
  v6 = (BattleServantData_o *)this;
  if ( task->fields.checkAlive )
  {
    if ( !this )
      goto LABEL_11;
    isAlive = BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL);
    result = 0LL;
    if ( !isAlive )
      return result;
  }
  else if ( !this )
  {
    goto LABEL_11;
  }
  BattleServantData__OverwriteTreasureDevice(v6, task->fields.treasureDvcId, task->fields.tresureDvcLv, 0LL);
  v10 = BattleLogicSpecial__createSpecialDataCommonFunction(v5, &baseActionData, task, 1, v9);
  BattleServantData__ResetOverwriteTreasureDevice(v6, 0LL);
  this = (BattleLogicSpecial_o *)v5->fields.logic;
  if ( !this )
LABEL_11:
    sub_1B64324(this);
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)this, v10, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSpecial__createSpecialData(
        BattleLogicSpecial_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicSpecial_o *v4; // x19
  BattleData_o *data; // x21
  const MethodInfo *v6; // x4
  BattleServantData_o *ServantData; // x22
  BattleActionData_o *v8; // x21
  BattleData_o *v9; // x22
  int32_t v10; // w20
  OverwriteTreasureDeviceData_o *OverwriteTdData_k__BackingField; // x0
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_49FF023 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, task);
    byte_49FF023 = 1;
  }
  baseActionData = 0LL;
  if ( !task )
    goto LABEL_15;
  data = v4->fields.data;
  this = (BattleLogicSpecial_o *)BattleLogicTask__getActorId(task, 0LL);
  if ( !data )
    goto LABEL_15;
  ServantData = BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( task->fields._OverwriteTdData_k__BackingField )
    OverwriteTreasureDeviceData__Overwrite(task->fields._OverwriteTdData_k__BackingField, ServantData, 0LL);
  v8 = BattleLogicSpecial__createSpecialDataCommonFunction(v4, &baseActionData, task, 0, v6);
  if ( v8 )
  {
    v9 = v4->fields.data;
    this = (BattleLogicSpecial_o *)BattleLogicTask__getActorId(task, 0LL);
    if ( v8->fields.funcTargetList )
    {
      v10 = (int)this;
      this = (BattleLogicSpecial_o *)System_Collections_Generic_List_int___ToArray(
                                       v8->fields.funcTargetList,
                                       (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( v9 )
      {
        BattleData__SetWasAttackTargetIdList(v9, v10, (System_Int32_array *)this, 0LL);
        goto LABEL_13;
      }
    }
LABEL_15:
    sub_1B64324(this);
  }
  OverwriteTdData_k__BackingField = task->fields._OverwriteTdData_k__BackingField;
  if ( OverwriteTdData_k__BackingField )
    OverwriteTreasureDeviceData__Reset(OverwriteTdData_k__BackingField, ServantData, 0LL);
LABEL_13:
  this = (BattleLogicSpecial_o *)v4->fields.logic;
  if ( !this )
    goto LABEL_15;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)this, v8, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSpecial__createSpecialDataCommonFunction(
        BattleLogicSpecial_o *this,
        BattleActionData_o **baseActionData,
        BattleLogicTask_o *task,
        bool isCounterOverwriteTreasureDevice,
        const MethodInfo *method)
{
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
  BattleData_o *v23; // x21
  BattleServantData_o *ServantData; // x26
  __int64 v25; // x1
  __int64 v26; // x2
  BattleActionData_o *v27; // x21
  BattleActionData_o *v28; // x24
  int32_t v29; // w2
  int32_t v30; // w3
  const MethodInfo *v31; // x4
  BattleCommandData_o *command; // x27
  struct BattleData_o *v33; // x1
  int32_t v34; // w25
  BattleLogic_o *v35; // x19
  int32_t actorId; // w20
  BattleActionData_o *v37; // x24
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v40; // x5
  TreasureDvcLvEntity_o *Entity; // x21
  int32_t ChainBonus; // w0
  int32_t v43; // w1
  DataVals_array *DataValsList; // x26
  DataVals_array *v45; // x28
  __int64 v46; // x1
  __int64 v47; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v48; // x29
  il2cpp_array_size_t v49; // w23
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
  __int64 v60; // x1
  __int64 v61; // x2
  BattleBuffData_CheckIndividualitiesData_o *v62; // x28
  __int64 v63; // x29
  System_Int32_array *funcId; // x28
  __int64 v65; // x0
  __int64 v66; // x0
  int v67; // w8
  SkillLvMaster_o *v68; // x27
  __int64 v69; // x23
  __int64 v70; // x22
  __int64 v71; // x29
  _DWORD *v72; // x8
  __int64 v73; // x21
  int32_t v74; // w2
  int32_t v75; // w3
  __int64 v76; // x8
  __int64 v77; // x29
  Il2CppClass *v78; // x21
  Il2CppClass **v79; // x0
  int32_t TreasureDvcId; // w0
  int32_t v81; // w27
  __int64 v82; // x1
  __int64 v83; // x2
  BattleLogicFunction_FunctionArgument_o *argument; // x29
  int32_t v85; // w2
  int32_t v86; // w3
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v88; // x8
  struct BattlePerformance_o *perf; // x8
  __int64 v90; // x1
  __int64 v91; // x2
  BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *v92; // x21
  __int64 v93; // x1
  __int64 v94; // x2
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *v96; // x20
  BattleActionData_o *v97; // x21
  __int64 v98; // x1
  __int64 v99; // x2
  struct BattleLogic_o *v100; // x8
  BattlePerformance_o *v101; // x23
  BattleActionWaitCond_UntilSideEffectInvisible_o *v102; // x22
  __int64 v103; // x0
  BattleCommandData_o *v104; // [xsp+30h] [xbp-80h]
  bool v105; // [xsp+3Ch] [xbp-74h]
  BattleServantData_o *v106; // [xsp+40h] [xbp-70h]
  TreasureDvcLvEntity_o *v107; // [xsp+48h] [xbp-68h]
  __int64 v108; // [xsp+48h] [xbp-68h]

  if ( (byte_49FF024 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, baseActionData);
    sub_1B640C8(&BattleCommandData_TypeInfo, v9);
    sub_1B640C8(&BattlePerformance_TypeInfo, v10);
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_FunctionMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v14);
    sub_1B640C8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v15);
    sub_1B640C8(&BattleLogicFunction_FunctionArgument_TypeInfo, v16);
    sub_1B640C8(&int___TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B640C8(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo, v20);
    sub_1B640C8(&BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo, v21);
    byte_49FF024 = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_112;
  BattleData__ResetWasAttackTargetId((BattleData_o *)data, 0LL);
  if ( !task )
    goto LABEL_112;
  v23 = this->fields.data;
  data = BattleLogicTask__getActorId(task, 0LL);
  if ( !v23 )
    goto LABEL_112;
  ServantData = BattleData__getServantData(v23, data, 0LL);
  v27 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, v25, v26);
  BattleActionData___ctor(v27, 0LL);
  if ( !v27 )
    goto LABEL_112;
  v28 = BattleActionData__AddDisplayTriggerIntervalBuff(v27, task, 0LL);
  *baseActionData = v28;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)baseActionData, (int32_t)v28, v29, v30);
  data = BattleLogicTask__getActorId(task, 0LL);
  if ( !v28 )
    goto LABEL_112;
  v28->fields.actorId = data;
  data = (__int64)this->fields.logictarget;
  if ( !data )
    goto LABEL_112;
  command = task->fields.command;
  data = BattleLogicTarget__getTargetBase((BattleLogicTarget_o *)data, task->fields.targetIdlist, 0, 1, v31);
  v28->fields.targetId = data;
  if ( (int)data >= 1 )
  {
    v33 = this->fields.data;
    if ( !v33 )
      goto LABEL_112;
    if ( v33->fields.leaderDown || v33->fields.endbattleFlg )
      return 0LL;
    if ( !ServantData )
      goto LABEL_112;
    v34 = data;
    if ( BattleServantData__checkUseTDvc(ServantData, v33, 1, 0LL) || isCounterOverwriteTreasureDevice )
    {
      data = (__int64)ServantData->fields.buffData;
      if ( !data )
        goto LABEL_112;
      BattleBuffData__ResetCommandCodeBuffActiveFlg((BattleBuffData_o *)data, 0LL);
      data = (__int64)ServantData->fields.buffData;
      if ( !data )
        goto LABEL_112;
      BattleBuffData__ResetCommandAssistBuffActiveFlg((BattleBuffData_o *)data, 0LL);
      data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !data )
        goto LABEL_112;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)data,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
      data = BattleServantData__getTreasureDvcId(ServantData, !isCounterOverwriteTreasureDevice, 0LL);
      if ( !MasterData_object )
        goto LABEL_112;
      Entity = TreasureDvcLvMaster__GetEntity(
                 (TreasureDvcLvMaster_o *)MasterData_object,
                 data,
                 ServantData->fields.treasuredvcLevel,
                 0LL);
      if ( !isCounterOverwriteTreasureDevice )
      {
        data = BattleLogicSpecial__AddTreasureDeviceBeforeFunctionTask(this, task, ServantData, v34, command, v40);
        if ( (data & 1) != 0 )
        {
          data = (__int64)this->fields.logic;
          if ( data )
          {
            BattleLogic__AddBattleLogicTask((BattleLogic_o *)data, task, 0LL);
            return 0LL;
          }
          goto LABEL_112;
        }
        if ( !command )
          goto LABEL_112;
        ChainBonus = BattleCommandData__getChainBonus(command, 0LL);
        BattleServantData__UsedTpWeapon(ServantData, ChainBonus, this->fields.data, 0, 0LL);
      }
      data = (__int64)this->fields.logic;
      if ( !data )
        goto LABEL_112;
      BattleLogic__updateResultServant((BattleLogic_o *)data, 0LL);
      data = BattleServantData__getNpPer(ServantData, 0LL);
      v43 = isCounterOverwriteTreasureDevice ? 100 * task->fields.counterOc : data;
      v28->fields.npPer = v43;
      if ( !Entity )
        goto LABEL_112;
      v104 = command;
      v106 = ServantData;
      v105 = isCounterOverwriteTreasureDevice;
      DataValsList = TreasureDvcLvEntity__getDataValsList(Entity, v43, 0LL);
      v45 = TreasureDvcLvEntity__getDataValsList(Entity, 100, 0LL);
      data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !data )
        goto LABEL_112;
      data = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_FunctionMaster___);
      if ( !DataValsList )
        goto LABEL_112;
      v107 = Entity;
      if ( (int)DataValsList->max_length < 1 )
      {
LABEL_63:
        v58 = (BattleCommandData_o *)sub_1B64314(BattleCommandData_TypeInfo, v46, v47);
        BattleCommandData___ctor(v58, 0LL);
        v59 = v106;
        data = BattleServantData__getTreasureDvcId(v106, 1, 0LL);
        if ( !v58 )
          goto LABEL_112;
        v58->fields.treasureDvc = data;
        v62 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                             BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             v60,
                                                             v61);
        BattleBuffData_CheckIndividualitiesData___ctor(v62, v106, 0LL, v58, 0LL, 0LL, 0LL);
        data = (__int64)BattleServantData__getNPSideEffect(v106, v62, 0LL);
        if ( !data )
          goto LABEL_112;
        v63 = data;
        funcId = v107->fields.funcId;
        if ( *(_QWORD *)(data + 24) )
        {
          if ( !funcId )
            goto LABEL_112;
          data = sub_1B64170(int___TypeInfo, funcId->max_length);
          if ( !v107->fields.funcId )
            goto LABEL_112;
          funcId = (System_Int32_array *)data;
          System_Array__CopyTo((System_Array_o *)v107->fields.funcId, (System_Array_o *)data, 0, 0LL);
          v65 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
          if ( (*(_BYTE *)(v65 + 309) & 1) == 0 )
            v65 = sub_1BB5FA4(v65);
          v66 = *(_QWORD *)(*(_QWORD *)(v65 + 192) + 16LL);
          if ( (*(_BYTE *)(v66 + 309) & 1) == 0 )
            v66 = sub_1BB5FA4(v66);
          data = **(_QWORD **)(v66 + 184);
          if ( !data )
            goto LABEL_112;
          data = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)data,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
          v67 = *(_DWORD *)(v63 + 24);
          if ( v67 >= 1 )
          {
            v68 = (SkillLvMaster_o *)data;
            v69 = 0LL;
            v108 = v63 + 32;
            do
            {
              if ( (unsigned int)v69 >= v67 )
                goto LABEL_113;
              v70 = v63;
              v71 = *(_QWORD *)(v108 + 8 * v69);
              if ( !v71 )
                goto LABEL_112;
              v72 = *(_DWORD **)(v71 + 104);
              if ( !v72 )
                goto LABEL_112;
              if ( v72[6] < 2u )
                goto LABEL_113;
              if ( !v68 )
                goto LABEL_112;
              data = (__int64)SkillLvMaster__GetEntity(v68, v72[8], v72[9], 0LL);
              if ( !data )
                goto LABEL_112;
              v73 = data;
              data = (__int64)SkillLvEntity__getDataValsList((SkillLvEntity_o *)data, 0LL);
              v76 = *(_QWORD *)(v73 + 32);
              if ( !v76 )
                goto LABEL_112;
              if ( !*(_DWORD *)(v76 + 24) )
                goto LABEL_113;
              if ( !funcId )
                goto LABEL_112;
              v77 = *(int *)(v71 + 28);
              if ( (unsigned int)v77 >= funcId->max_length )
                goto LABEL_113;
              funcId->m_Items[v77 + 1] = *(_DWORD *)(v76 + 32);
              if ( !data )
                goto LABEL_112;
              if ( !*(_DWORD *)(data + 24) )
                goto LABEL_113;
              v78 = *(Il2CppClass **)(data + 32);
              if ( v78 )
              {
                data = sub_1B64204(*(_QWORD *)(data + 32), DataValsList->obj.klass->_1.element_class);
                if ( !data )
                {
                  v103 = sub_1B64348(0LL);
                  sub_1B641F0(v103, 0LL);
                }
              }
              if ( (unsigned int)v77 >= DataValsList->max_length )
                goto LABEL_113;
              v79 = &DataValsList->obj.klass + v77;
              v79[4] = v78;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v79 + 4), (int32_t)v78, v74, v75);
              v67 = *(_DWORD *)(v70 + 24);
              ++v69;
              v63 = v70;
            }
            while ( (int)v69 < v67 );
            v59 = v106;
          }
        }
        TreasureDvcId = BattleServantData__getTreasureDvcId(v59, 1, 0LL);
        v28->fields.treasureDvcId = TreasureDvcId;
        v81 = TreasureDvcId;
        argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B64314(
                                                               BattleLogicFunction_FunctionArgument_TypeInfo,
                                                               v82,
                                                               v83);
        BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
        if ( v105 )
        {
          v28->fields.isCounter = task->fields.isCounter;
          motionMessage = task->fields.motionMessage;
          v28->fields.motionMessage = motionMessage;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v28->fields.motionMessage, (int32_t)motionMessage, v85, v86);
          v28->fields._MessageType_k__BackingField = task->fields.messageType;
        }
        else
        {
          v88 = this->fields.data;
          if ( !v88 )
            goto LABEL_112;
          perf = v88->fields.perf;
          if ( !perf )
            goto LABEL_112;
          if ( !v104 )
            goto LABEL_112;
          data = (__int64)perf->fields.commandPerf;
          if ( !data )
            goto LABEL_112;
          BattlePerformanceCommandCard__UpdateRemainingCardBuff(
            (BattlePerformanceCommandCard_o *)data,
            v104->fields.actionIndex,
            0LL);
          v92 = (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *)sub_1B64314(
                                                                                    BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo,
                                                                                    v90,
                                                                                    v91);
          BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument___ctor(v92, 0LL);
          if ( !argument )
            goto LABEL_112;
          BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
            argument,
            (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v92,
            0LL);
        }
        data = (__int64)this->fields.logicfunction;
        if ( data )
        {
          v37 = BattleLogicFunction__procList(
                  (BattleLogicFunction_o *)data,
                  v28,
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
            if ( v37 )
            {
              v37->fields.targetId = v34;
              BattleActionData__setTypeTA(v37, 0LL);
              BattleActionData__setCommand(v37, v104, 0LL);
              v37->fields.motionId = BattleServantData__getTreasureDvcMotionId(v106, 0LL);
              data = (__int64)this->fields.logic;
              if ( data )
              {
                BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0LL);
                v37->fields.prevattackme = 0;
                v37->fields.isForcedSpeedOne = task->fields.isForcedSpeedOne;
                data = (__int64)this->fields.data;
                if ( data )
                {
                  BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0LL);
                  logic = this->fields.logic;
                  if ( logic )
                  {
                    v96 = logic->fields.perf;
                    v97 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, v93, v94);
                    BattleActionData___ctor(v97, 0LL);
                    v100 = this->fields.logic;
                    if ( v100 )
                    {
                      v101 = v100->fields.perf;
                      v102 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)sub_1B64314(
                                                                                  BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo,
                                                                                  v98,
                                                                                  v99);
                      BattleActionWaitCond_UntilSideEffectInvisible___ctor(v102, v101, 0LL);
                      if ( v97 )
                      {
                        data = (__int64)BattleActionData__SetWaitCond(v97, (BattleActionWaitCond_Base_o *)v102, 0LL);
                        if ( v96 )
                        {
                          BattlePerformance__addActionData_41555364(v96, (BattleActionData_o *)data, 0LL);
                          v37->fields.treasureDvcId = v81;
                          BattleActionData__SetFuncTargetAllDead(v37, this->fields.data, 0LL);
                          return v37;
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
            goto LABEL_113;
          if ( !v48 )
            break;
          data = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v48,
                            v50->m_Items[v49 + 1],
                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
          if ( v49 >= DataValsList->max_length )
            goto LABEL_113;
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
          if ( !v45 )
            break;
          if ( v49 >= v45->max_length )
            goto LABEL_113;
          v55 = &v45->obj.klass + (int)v49;
          v57 = (__int64)v55[4];
          v56 = (DataVals_o **)(v55 + 4);
          data = v57;
          if ( !v57 )
            break;
          DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v48, *(_DWORD *)(v52 + 24), 0LL);
          if ( v49 >= DataValsList->max_length || (Entity = v107, v49 >= v45->max_length) )
LABEL_113:
            sub_1B6432C(data, v46);
          data = *v53;
          if ( !*v53 )
            break;
          data = DataVals__CheckOverCharge((DataVals_o *)data, *v56, 0LL);
          if ( (data & 1) != 0 )
          {
            if ( v49 >= DataValsList->max_length )
              goto LABEL_113;
            data = *v53;
            if ( !*v53 )
              break;
            DataVals__SetOverCharge((DataVals_o *)data, 1, 0LL);
          }
          if ( v49 >= DataValsList->max_length || v49 >= v45->max_length )
            goto LABEL_113;
          if ( !*v56 )
            break;
          data = *v53;
          if ( !*v53 )
            break;
          DataVals__SetDependOverChargeFlag((DataVals_o *)data, (*v56)->fields.dependDataValsList, 0LL);
          if ( (signed int)++v49 >= (signed int)DataValsList->max_length )
            goto LABEL_63;
        }
      }
    }
    else
    {
      data = (__int64)this->fields.data;
      if ( data )
      {
        BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0LL);
        v35 = this->fields.logic;
        actorId = v28->fields.actorId;
        data = (__int64)BattlePerformance_TypeInfo;
        if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
        if ( v35 )
        {
          BattleLogic__addBackStepActionData(
            v35,
            actorId,
            BattlePerformance_TypeInfo->static_fields->AFTER_BACK_STEP_INTERVAL,
            0LL);
          return 0LL;
        }
      }
    }
LABEL_112:
    sub_1B64324(data);
  }
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
  int32_t v17; // w1
  __int64 v18; // x1
  __int64 v19; // x2
  BattleServantData_o *v20; // x23
  __int64 v21; // x20
  System_Int32_array *FieldPlayerServantIDList; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  __int64 v26; // x2
  BattleCommandData_o *v27; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  BattleComboData_o *v30; // x24
  int32_t TreasureDvcId; // w0
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0

  if ( (byte_49FF021 & 1) == 0 )
  {
    sub_1B640C8(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1B640C8(&BattleCommandData_TypeInfo, v6);
    sub_1B640C8(&BattleLogicTask_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_49FF021 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&ltype,
                                                       data);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1B6432C(EnemyServantData, v14);
  v17 = e_entryid->m_Items[v15 + 1];
  if ( v17 < 1 )
    goto LABEL_18;
  EnemyServantData = BattleData__getEnemyServantData(data, v17, 0LL);
  if ( !EnemyServantData )
    goto LABEL_19;
  v20 = EnemyServantData;
  if ( !EnemyServantData->fields.reservationspecial )
  {
LABEL_18:
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v12,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1B64324(EnemyServantData);
  }
  v21 = sub_1B64314(BattleLogicTask_TypeInfo, v18, v19);
  BattleLogicTask___ctor((BattleLogicTask_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v21, 3, v20->fields.uniqueId, 0LL);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v21 + 32) = FieldPlayerServantIDList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 32), (int32_t)FieldPlayerServantIDList, v23, v24);
  v27 = (BattleCommandData_o *)sub_1B64314(BattleCommandData_TypeInfo, v25, v26);
  BattleCommandData___ctor(v27, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v20, 0LL);
  if ( !v27 )
    goto LABEL_19;
  v27->fields._type = (int)EnemyServantData;
  v27->fields.svtlimit = BattleServantData__getDispLimitCount(v20, 1, 0LL);
  v27->fields.uniqueId = v20->fields.uniqueId;
  v27->fields.svtId = BattleServantData__getSvtId(v20, 0LL);
  v27->fields.treasureDvc = BattleServantData__getTreasureDvcId(v20, 1, 0LL);
  v30 = (BattleComboData_o *)sub_1B64314(BattleComboData_TypeInfo, v28, v29);
  BattleComboData___ctor(v30, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v21, v30, v27, v15, 0LL);
  TreasureDvcId = BattleServantData__getTreasureDvcId(v20, 1, 0LL);
  BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v21, TreasureDvcId, 1, 0LL);
  if ( !v12 )
    goto LABEL_19;
  items = v12->fields._items;
  v35 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v21,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v37[4] = (Il2CppClass *)v21;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 4), v21, v32, v33);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  unsigned int v15; // w21
  struct System_Int32_array *e_entryid; // x8
  int32_t v17; // w1
  BattleServantData_o *v18; // x23
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x20
  System_Int32_array *FieldPlayerServantIDList; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  __int64 v26; // x2
  BattleCommandData_o *v27; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  BattleComboData_o *v30; // x24
  int32_t TreasureDvcId; // w0
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0

  if ( (byte_49FF022 & 1) == 0 )
  {
    sub_1B640C8(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1B640C8(&BattleCommandData_TypeInfo, v6);
    sub_1B640C8(&BattleLogicTask_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_49FF022 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&ltype,
                                                       data);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1B6432C(EnemyServantData, v14);
  v17 = e_entryid->m_Items[v15 + 1];
  if ( v17 < 1 )
    goto LABEL_18;
  EnemyServantData = BattleData__getEnemyServantData(data, v17, 0LL);
  if ( !EnemyServantData )
    goto LABEL_19;
  v18 = EnemyServantData;
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(EnemyServantData, 1, 0LL);
  if ( (int)EnemyServantData < 1 )
  {
LABEL_18:
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v12,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1B64324(EnemyServantData);
  }
  v21 = sub_1B64314(BattleLogicTask_TypeInfo, v19, v20);
  BattleLogicTask___ctor((BattleLogicTask_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v21, 3, v18->fields.uniqueId, 0LL);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v21 + 32) = FieldPlayerServantIDList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 32), (int32_t)FieldPlayerServantIDList, v23, v24);
  v27 = (BattleCommandData_o *)sub_1B64314(BattleCommandData_TypeInfo, v25, v26);
  BattleCommandData___ctor(v27, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v18, 0LL);
  if ( !v27 )
    goto LABEL_19;
  v27->fields._type = (int)EnemyServantData;
  v27->fields.svtlimit = BattleServantData__getDispLimitCount(v18, 1, 0LL);
  v27->fields.uniqueId = v18->fields.uniqueId;
  v27->fields.svtId = BattleServantData__getSvtId(v18, 0LL);
  v27->fields.treasureDvc = BattleServantData__getTreasureDvcId(v18, 1, 0LL);
  v30 = (BattleComboData_o *)sub_1B64314(BattleComboData_TypeInfo, v28, v29);
  BattleComboData___ctor(v30, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v21, v30, v27, v15, 0LL);
  TreasureDvcId = BattleServantData__getTreasureDvcId(v18, 1, 0LL);
  BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v21, TreasureDvcId, 1, 0LL);
  if ( !v12 )
    goto LABEL_19;
  items = v12->fields._items;
  v35 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v21,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v37[4] = (Il2CppClass *)v21;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 4), v21, v32, v33);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v17; // x1
  __int64 v18; // x2
  BattleServantData_o *v19; // x23
  __int64 v20; // x20
  System_Int32_array *FieldEnemyServantIDList; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  BattleCommandData_o *v26; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  BattleComboData_o *v29; // x24
  int32_t TreasureDvcId; // w0
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_49FF01F & 1) == 0 )
  {
    sub_1B640C8(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1B640C8(&BattleCommandData_TypeInfo, v6);
    sub_1B640C8(&BattleLogicTask_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_49FF01F = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&ltype,
                                                       data);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1B6432C(PlayerServantData, v14);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v15 + 1], 0LL);
  if ( !PlayerServantData || (v19 = PlayerServantData, !PlayerServantData->fields.reservationspecial) )
  {
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v12,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_1B64324(PlayerServantData);
  }
  v20 = sub_1B64314(BattleLogicTask_TypeInfo, v17, v18);
  BattleLogicTask___ctor((BattleLogicTask_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v20, 2, v19->fields.uniqueId, 0LL);
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  *(_QWORD *)(v20 + 32) = FieldEnemyServantIDList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)FieldEnemyServantIDList, v22, v23);
  v26 = (BattleCommandData_o *)sub_1B64314(BattleCommandData_TypeInfo, v24, v25);
  BattleCommandData___ctor(v26, 0LL);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v19, 0LL);
  if ( !v26 )
    goto LABEL_18;
  v26->fields._type = (int)PlayerServantData;
  v26->fields.svtlimit = BattleServantData__getCommandDispLimitCount(v19, 0LL);
  v26->fields.uniqueId = v19->fields.uniqueId;
  v26->fields.svtId = BattleServantData__getSvtId(v19, 0LL);
  v26->fields.treasureDvc = BattleServantData__getTreasureDvcId(v19, 1, 0LL);
  v29 = (BattleComboData_o *)sub_1B64314(BattleComboData_TypeInfo, v27, v28);
  BattleComboData___ctor(v29, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v20, v29, v26, v15, 0LL);
  TreasureDvcId = BattleServantData__getTreasureDvcId(v19, 1, 0LL);
  BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v20, TreasureDvcId, 1, 0LL);
  if ( !v12 )
    goto LABEL_18;
  items = v12->fields._items;
  v34 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_18;
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v20,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v20;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), v20, v31, v32);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v19; // x1
  __int64 v20; // x2
  BattleLogicTask_o *v21; // x20
  const MethodInfo *v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  BattleCommandData_o *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  BattleComboData_o *v28; // x24
  int32_t TreasureDvcId; // w0
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  if ( (byte_49FF020 & 1) == 0 )
  {
    sub_1B640C8(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1B640C8(&BattleCommandData_TypeInfo, v7);
    sub_1B640C8(&BattleLogicTask_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    byte_49FF020 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&ltype,
                                                       data);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1B6432C(logictarget, v15);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v16 + 1], 0LL);
  v21 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v19, v20);
  BattleLogicTask___ctor(v21, 0LL);
  if ( !PlayerServantData )
    goto LABEL_21;
  if ( !v21 )
    goto LABEL_21;
  BattleLogicTask__setActor(v21, 2, PlayerServantData->fields.uniqueId, 0LL);
  logictarget = this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_21;
  BattleLogicTarget__getTargetBattleServantData(logictarget, v21, v22);
  v25 = (BattleCommandData_o *)sub_1B64314(BattleCommandData_TypeInfo, v23, v24);
  BattleCommandData___ctor(v25, 0LL);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcCardId(PlayerServantData, 0LL);
  if ( !v25 )
    goto LABEL_21;
  v25->fields._type = (int)logictarget;
  v25->fields.svtlimit = BattleServantData__getCommandDispLimitCount(PlayerServantData, 0LL);
  v25->fields.uniqueId = PlayerServantData->fields.uniqueId;
  v25->fields.svtId = BattleServantData__getSvtId(PlayerServantData, 0LL);
  v25->fields.treasureDvc = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL);
  v28 = (BattleComboData_o *)sub_1B64314(BattleComboData_TypeInfo, v26, v27);
  BattleComboData___ctor(v28, 0LL);
  BattleLogicTask__setActionCommand(v21, v28, v25, v16, 0LL);
  TreasureDvcId = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL);
  BattleLogicTask__setActionTreasureDvc(v21, TreasureDvcId, 1, 0LL);
  if ( !v13
    || (items = v13->fields._items,
        v33 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v13->fields._version,
        !items) )
  {
LABEL_21:
    sub_1B64324(logictarget);
  }
  size = v13->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)v21,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v35[4] = (Il2CppClass *)v21;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v21, v30, v31);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}