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
  if ( (byte_4A5DDEA & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1B885B0(&BuffList_ACTION___TypeInfo);
    byte_4A5DDEA = 1;
  }
  if ( !task )
    goto LABEL_16;
  if ( !task->fields.isCheckTreasureDeviceBeforeFunc )
    return 0;
  task->fields.isCheckTreasureDeviceBeforeFunc = 0;
  this = (BattleLogicSpecial_o *)sub_1B88658(BuffList_ACTION___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_16;
  v11 = this;
  if ( !LODWORD(this->fields.logic) )
    sub_1B88814(this, task);
  LODWORD(this->fields.logictarget) = 141;
  this = (BattleLogicSpecial_o *)v10->fields.logic;
  if ( !this )
LABEL_16:
    sub_1B8880C(this, task);
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
    sub_1B8880C(this, task);
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
  if ( (byte_4A5DDE8 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4A5DDE8 = 1;
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
                                       (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( v9 )
      {
        BattleData__SetWasAttackTargetIdList(v9, v10, (System_Int32_array *)this, 0LL);
        goto LABEL_13;
      }
    }
LABEL_15:
    sub_1B8880C(this, task);
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
  ServantStatusBattleListViewItem_o *v7; // x23
  __int64 data; // x0
  BattleData_o *v10; // x21
  BattleServantData_o *ServantData; // x27
  BattleActionData_o *v12; // x21
  BattleActionData_o *v13; // x24
  int32_t v14; // w2
  int32_t v15; // w3
  BattleCommandData_o *command; // x23
  int32_t v17; // w25
  BattleLogic_o *v18; // x19
  int32_t actorId; // w20
  BattleActionData_o *v20; // x24
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v23; // x5
  TreasureDvcLvEntity_o *Entity; // x21
  int32_t ChainBonus; // w0
  DataVals_array *DataValsList; // x26
  DataVals_array *v27; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x29
  il2cpp_array_size_t v29; // w23
  struct System_Int32_array *v30; // x8
  Il2CppClass **v31; // x22
  __int64 v32; // x21
  __int64 *v33; // x22
  __int64 v34; // t1
  Il2CppClass **v35; // x27
  DataVals_o **v36; // x27
  __int64 v37; // t1
  BattleCommandData_o *v38; // x21
  BattleServantData_o *v39; // x22
  BattleBuffData_CheckIndividualitiesData_o *v40; // x28
  BattleCommandData_o *v41; // x23
  __int64 v42; // x29
  System_Int32_array *funcId; // x28
  __int64 v44; // x0
  __int64 v45; // x0
  int v46; // w8
  SkillLvMaster_o *v47; // x27
  __int64 v48; // x22
  __int64 v49; // x23
  __int64 v50; // x29
  _DWORD *v51; // x8
  __int64 v52; // x21
  int32_t v53; // w2
  int32_t v54; // w3
  __int64 v55; // x8
  __int64 v56; // x29
  Il2CppClass *v57; // x21
  Il2CppClass **v58; // x0
  int32_t TreasureDvcId; // w0
  int32_t v60; // w27
  BattleLogicFunction_FunctionArgument_o *argument; // x29
  int32_t v62; // w2
  int32_t v63; // w3
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v65; // x8
  struct BattlePerformance_o *perf; // x8
  BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *v67; // x21
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *v69; // x20
  BattleActionData_o *v70; // x21
  struct BattleLogic_o *v71; // x8
  BattlePerformance_o *v72; // x23
  BattleActionWaitCond_UntilSideEffectInvisible_o *v73; // x22
  __int64 v74; // x0
  BattleCommandData_o *v75; // [xsp+30h] [xbp-80h]
  bool v76; // [xsp+3Ch] [xbp-74h]
  BattleServantData_o *v77; // [xsp+40h] [xbp-70h]
  TreasureDvcLvEntity_o *v78; // [xsp+48h] [xbp-68h]
  __int64 v79; // [xsp+48h] [xbp-68h]

  v7 = (ServantStatusBattleListViewItem_o *)baseActionData;
  if ( (byte_4A5DDE9 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleCommandData_TypeInfo);
    sub_1B885B0(&BattlePerformance_TypeInfo);
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1B885B0(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
    sub_1B885B0(&BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
    byte_4A5DDE9 = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_113;
  BattleData__ResetWasAttackTargetId((BattleData_o *)data, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_113;
  BattleData__ResetFunctionedFunctionIds((BattleData_o *)data, 0LL);
  if ( !task )
    goto LABEL_113;
  v10 = this->fields.data;
  data = BattleLogicTask__getActorId(task, 0LL);
  if ( !v10 )
    goto LABEL_113;
  ServantData = BattleData__getServantData(v10, data, 0LL);
  v12 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_113;
  v13 = BattleActionData__AddDisplayTriggerIntervalBuff(v12, task, 0LL);
  v7->klass = (ServantStatusBattleListViewItem_c *)v13;
  sub_1B88554(v7, (int32_t)v13, v14, v15);
  data = BattleLogicTask__getActorId(task, 0LL);
  if ( !v13 )
    goto LABEL_113;
  v13->fields.actorId = data;
  data = (__int64)this->fields.logictarget;
  if ( !data )
    goto LABEL_113;
  command = task->fields.command;
  data = BattleLogicTarget__getTargetBase((BattleLogicTarget_o *)data, task->fields.targetIdlist, 0, 1, 0LL);
  v13->fields.targetId = data;
  if ( (int)data >= 1 )
  {
    baseActionData = (BattleActionData_o **)this->fields.data;
    if ( !baseActionData )
      goto LABEL_113;
    if ( *((_BYTE *)baseActionData + 280) || *((_BYTE *)baseActionData + 281) )
      return 0LL;
    if ( !ServantData )
      goto LABEL_113;
    v17 = data;
    if ( BattleServantData__checkUseTDvc(ServantData, (BattleData_o *)baseActionData, 1, 0LL)
      || isCounterOverwriteTreasureDevice )
    {
      data = (__int64)ServantData->fields.buffData;
      if ( !data )
        goto LABEL_113;
      BattleBuffData__ResetCommandCodeBuffActiveFlg((BattleBuffData_o *)data, 0LL);
      data = (__int64)ServantData->fields.buffData;
      if ( !data )
        goto LABEL_113;
      BattleBuffData__ResetCommandAssistBuffActiveFlg((BattleBuffData_o *)data, 0LL);
      data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !data )
        goto LABEL_113;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)data,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
      data = BattleServantData__getTreasureDvcId(ServantData, !isCounterOverwriteTreasureDevice, 0LL, 0LL);
      if ( !MasterData_object )
        goto LABEL_113;
      Entity = TreasureDvcLvMaster__GetEntity(
                 (TreasureDvcLvMaster_o *)MasterData_object,
                 data,
                 ServantData->fields.treasuredvcLevel,
                 0LL);
      if ( !isCounterOverwriteTreasureDevice )
      {
        data = BattleLogicSpecial__AddTreasureDeviceBeforeFunctionTask(this, task, ServantData, v17, command, v23);
        if ( (data & 1) != 0 )
        {
          data = (__int64)this->fields.logic;
          if ( data )
          {
            BattleLogic__AddBattleLogicTask((BattleLogic_o *)data, task, 0LL);
            return 0LL;
          }
          goto LABEL_113;
        }
        if ( !command )
          goto LABEL_113;
        ChainBonus = BattleCommandData__getChainBonus(command, 0LL);
        BattleServantData__UsedTpWeapon(ServantData, ChainBonus, this->fields.data, 0, 0LL);
      }
      data = (__int64)this->fields.logic;
      if ( !data )
        goto LABEL_113;
      BattleLogic__updateResultServant((BattleLogic_o *)data, 0LL);
      data = BattleServantData__getNpPer(ServantData, 0LL);
      baseActionData = isCounterOverwriteTreasureDevice
                     ? (BattleActionData_o **)(unsigned int)(100 * task->fields.counterOc)
                     : (BattleActionData_o **)(unsigned int)data;
      v13->fields.npPer = (int)baseActionData;
      if ( !Entity )
        goto LABEL_113;
      v77 = ServantData;
      v76 = isCounterOverwriteTreasureDevice;
      DataValsList = TreasureDvcLvEntity__getDataValsList(Entity, (int32_t)baseActionData, 0LL);
      v27 = TreasureDvcLvEntity__getDataValsList(Entity, 100, 0LL);
      data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !data )
        goto LABEL_113;
      v75 = command;
      data = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FunctionMaster___);
      if ( !DataValsList )
        goto LABEL_113;
      v78 = Entity;
      if ( (int)DataValsList->max_length < 1 )
      {
LABEL_64:
        v38 = (BattleCommandData_o *)sub_1B887FC(BattleCommandData_TypeInfo);
        BattleCommandData___ctor(v38, 0LL);
        v39 = v77;
        data = BattleServantData__getTreasureDvcId(v77, 1, 0LL, 0LL);
        if ( !v38 )
          goto LABEL_113;
        v38->fields.treasureDvc = data;
        v40 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
        BattleBuffData_CheckIndividualitiesData___ctor(v40, v77, 0LL, v38, 0LL, 0LL, 0LL, 0LL);
        data = (__int64)BattleServantData__getNPSideEffect(v77, v40, 0LL);
        v41 = v75;
        if ( !data )
          goto LABEL_113;
        v42 = data;
        funcId = v78->fields.funcId;
        if ( *(_QWORD *)(data + 24) )
        {
          if ( !funcId )
            goto LABEL_113;
          data = sub_1B88658(int___TypeInfo, funcId->max_length);
          if ( !v78->fields.funcId )
            goto LABEL_113;
          funcId = (System_Int32_array *)data;
          System_Array__CopyTo((System_Array_o *)v78->fields.funcId, (System_Array_o *)data, 0, 0LL);
          v44 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
          if ( (*(_BYTE *)(v44 + 309) & 1) == 0 )
            v44 = sub_1BDA48C(v44);
          v45 = *(_QWORD *)(*(_QWORD *)(v44 + 192) + 16LL);
          if ( (*(_BYTE *)(v45 + 309) & 1) == 0 )
            v45 = sub_1BDA48C(v45);
          data = **(_QWORD **)(v45 + 184);
          if ( !data )
            goto LABEL_113;
          data = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)data,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
          v46 = *(_DWORD *)(v42 + 24);
          if ( v46 >= 1 )
          {
            v47 = (SkillLvMaster_o *)data;
            v48 = 0LL;
            v79 = v42 + 32;
            do
            {
              if ( (unsigned int)v48 >= v46 )
                goto LABEL_114;
              v49 = v42;
              v50 = *(_QWORD *)(v79 + 8 * v48);
              if ( !v50 )
                goto LABEL_113;
              v51 = *(_DWORD **)(v50 + 104);
              if ( !v51 )
                goto LABEL_113;
              if ( v51[6] < 2u )
                goto LABEL_114;
              if ( !v47 )
                goto LABEL_113;
              data = (__int64)SkillLvMaster__GetEntity(v47, v51[8], v51[9], 0LL);
              if ( !data )
                goto LABEL_113;
              v52 = data;
              data = (__int64)SkillLvEntity__getDataValsList((SkillLvEntity_o *)data, 0LL);
              v55 = *(_QWORD *)(v52 + 32);
              if ( !v55 )
                goto LABEL_113;
              if ( !*(_DWORD *)(v55 + 24) )
                goto LABEL_114;
              if ( !funcId )
                goto LABEL_113;
              v56 = *(int *)(v50 + 28);
              if ( (unsigned int)v56 >= funcId->max_length )
                goto LABEL_114;
              funcId->m_Items[v56 + 1] = *(_DWORD *)(v55 + 32);
              if ( !data )
                goto LABEL_113;
              if ( !*(_DWORD *)(data + 24) )
                goto LABEL_114;
              v57 = *(Il2CppClass **)(data + 32);
              if ( v57 )
              {
                data = sub_1B886EC(*(_QWORD *)(data + 32), DataValsList->obj.klass->_1.element_class);
                if ( !data )
                {
                  v74 = sub_1B88830(0LL);
                  sub_1B886D8(v74, 0LL);
                }
              }
              if ( (unsigned int)v56 >= DataValsList->max_length )
                goto LABEL_114;
              v58 = &DataValsList->obj.klass + v56;
              v58[4] = v57;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v58 + 4), (int32_t)v57, v53, v54);
              v46 = *(_DWORD *)(v49 + 24);
              ++v48;
              v42 = v49;
            }
            while ( (int)v48 < v46 );
            v39 = v77;
            v41 = v75;
          }
        }
        TreasureDvcId = BattleServantData__getTreasureDvcId(v39, 1, 0LL, 0LL);
        v13->fields.treasureDvcId = TreasureDvcId;
        v60 = TreasureDvcId;
        argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B887FC(BattleLogicFunction_FunctionArgument_TypeInfo);
        BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
        if ( v76 )
        {
          v13->fields.isCounter = task->fields.isCounter;
          motionMessage = task->fields.motionMessage;
          v13->fields.motionMessage = motionMessage;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v13->fields.motionMessage, (int32_t)motionMessage, v62, v63);
          v13->fields._MessageType_k__BackingField = task->fields.messageType;
        }
        else
        {
          v65 = this->fields.data;
          if ( !v65 )
            goto LABEL_113;
          perf = v65->fields.perf;
          if ( !perf )
            goto LABEL_113;
          if ( !v41 )
            goto LABEL_113;
          data = (__int64)perf->fields.commandPerf;
          if ( !data )
            goto LABEL_113;
          BattlePerformanceCommandCard__UpdateRemainingCardBuff(
            (BattlePerformanceCommandCard_o *)data,
            v41->fields.actionIndex,
            0LL);
          v67 = (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *)sub_1B887FC(BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
          BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument___ctor(v67, 0LL);
          if ( !argument )
            goto LABEL_113;
          BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
            argument,
            (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v67,
            0LL);
        }
        data = (__int64)this->fields.logicfunction;
        if ( data )
        {
          v20 = BattleLogicFunction__procList(
                  (BattleLogicFunction_o *)data,
                  v13,
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
          BattleServantData__checkRegainNPUsedNoble(v77, 0LL);
          data = (__int64)v77->fields.buffData;
          if ( data )
          {
            data = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
            if ( !v76 )
            {
              v77->fields.tmpNp = v77->fields.np;
              BattleServantData__changeNp(v77, 0, 0, 0LL);
            }
            if ( v20 )
            {
              v20->fields.targetId = v17;
              BattleActionData__setTypeTA(v20, 0LL);
              BattleActionData__setCommand(v20, v41, 0LL);
              v20->fields.motionId = BattleServantData__getTreasureDvcMotionId(v77, 0LL);
              data = (__int64)this->fields.logic;
              if ( data )
              {
                BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0LL);
                v20->fields.prevattackme = 0;
                v20->fields.isForcedSpeedOne = task->fields.isForcedSpeedOne;
                data = (__int64)this->fields.data;
                if ( data )
                {
                  BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0LL);
                  logic = this->fields.logic;
                  if ( logic )
                  {
                    v69 = logic->fields.perf;
                    v70 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
                    BattleActionData___ctor(v70, 0LL);
                    v71 = this->fields.logic;
                    if ( v71 )
                    {
                      v72 = v71->fields.perf;
                      v73 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)sub_1B887FC(BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
                      BattleActionWaitCond_UntilSideEffectInvisible___ctor(v73, v72, 0LL);
                      if ( v70 )
                      {
                        data = (__int64)BattleActionData__SetWaitCond(v70, (BattleActionWaitCond_Base_o *)v73, 0LL);
                        if ( v69 )
                        {
                          BattlePerformance__addActionData_41826004(v69, (BattleActionData_o *)data, 0LL);
                          v20->fields.treasureDvcId = v60;
                          BattleActionData__SetFuncTargetAllDead(v20, this->fields.data, 0LL);
                          return v20;
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
        v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
        v29 = 0;
        while ( 1 )
        {
          v30 = Entity->fields.funcId;
          if ( !v30 )
            break;
          if ( v29 >= v30->max_length )
            goto LABEL_114;
          if ( !v28 )
            break;
          data = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v28,
                            v30->m_Items[v29 + 1],
                            (const MethodInfo_311D934 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
          if ( v29 >= DataValsList->max_length )
            goto LABEL_114;
          v31 = &DataValsList->obj.klass + (int)v29;
          v32 = data;
          v34 = (__int64)v31[4];
          v33 = (__int64 *)(v31 + 4);
          data = v34;
          if ( !v32 )
            break;
          if ( !data )
            break;
          DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v28, *(_DWORD *)(v32 + 24), 0LL);
          if ( !v27 )
            break;
          if ( v29 >= v27->max_length )
            goto LABEL_114;
          v35 = &v27->obj.klass + (int)v29;
          v37 = (__int64)v35[4];
          v36 = (DataVals_o **)(v35 + 4);
          data = v37;
          if ( !v37 )
            break;
          DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v28, *(_DWORD *)(v32 + 24), 0LL);
          if ( v29 >= DataValsList->max_length || (Entity = v78, v29 >= v27->max_length) )
LABEL_114:
            sub_1B88814(data, baseActionData);
          data = *v33;
          if ( !*v33 )
            break;
          data = DataVals__CheckOverCharge((DataVals_o *)data, *v36, 0LL);
          if ( (data & 1) != 0 )
          {
            if ( v29 >= DataValsList->max_length )
              goto LABEL_114;
            data = *v33;
            if ( !*v33 )
              break;
            DataVals__SetOverCharge((DataVals_o *)data, 1, 0LL);
          }
          if ( v29 >= DataValsList->max_length || v29 >= v27->max_length )
            goto LABEL_114;
          if ( !*v36 )
            break;
          data = *v33;
          if ( !*v33 )
            break;
          DataVals__SetDependOverChargeFlag((DataVals_o *)data, (*v36)->fields.dependDataValsList, 0LL);
          if ( (signed int)++v29 >= (signed int)DataValsList->max_length )
            goto LABEL_64;
        }
      }
    }
    else
    {
      data = (__int64)this->fields.data;
      if ( data )
      {
        BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0LL);
        v18 = this->fields.logic;
        actorId = v13->fields.actorId;
        data = (__int64)BattlePerformance_TypeInfo;
        if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
        if ( v18 )
        {
          BattleLogic__addBackStepActionData(
            v18,
            actorId,
            BattlePerformance_TypeInfo->static_fields->AFTER_BACK_STEP_INTERVAL,
            0LL);
          return 0LL;
        }
      }
    }
LABEL_113:
    sub_1B8880C(data, baseActionData);
  }
  return 0LL;
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
  __int64 v12; // x20
  System_Int32_array *FieldPlayerServantIDList; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  BattleCommandData_o *v16; // x22
  BattleComboData_o *v17; // x24
  int32_t TreasureDvcId; // w0
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4A5DDE6 & 1) == 0 )
  {
    sub_1B885B0(&BattleComboData_TypeInfo);
    sub_1B885B0(&BattleCommandData_TypeInfo);
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4A5DDE6 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1B88814(EnemyServantData, v8);
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
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1B8880C(EnemyServantData, v8);
  }
  v12 = sub_1B887FC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, v11->fields.uniqueId, 0LL);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v12 + 32) = FieldPlayerServantIDList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)FieldPlayerServantIDList, v14, v15);
  v16 = (BattleCommandData_o *)sub_1B887FC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v16, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0LL);
  if ( !v16 )
    goto LABEL_19;
  v16->fields._type = (int)EnemyServantData;
  v16->fields.svtlimit = BattleServantData__getDispLimitCount(v11, 1, 0LL);
  v16->fields.uniqueId = v11->fields.uniqueId;
  v16->fields.svtId = BattleServantData__getSvtId(v11, 0LL);
  v16->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0LL, 0LL);
  v17 = (BattleComboData_o *)sub_1B887FC(BattleComboData_TypeInfo);
  BattleComboData___ctor(v17, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v17, v16, v9, 0LL);
  TreasureDvcId = BattleServantData__getTreasureDvcId(v11, 1, 0LL, 0LL);
  BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v12, TreasureDvcId, 1, 0LL);
  if ( !v6 )
    goto LABEL_19;
  items = v6->fields._items;
  v22 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v6->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v12,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), v12, v19, v20);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  unsigned int v9; // w21
  struct System_Int32_array *e_entryid; // x8
  BattleServantData_o *v11; // x23
  __int64 v12; // x20
  System_Int32_array *FieldPlayerServantIDList; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  BattleCommandData_o *v16; // x22
  BattleComboData_o *v17; // x24
  int32_t TreasureDvcId; // w0
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4A5DDE7 & 1) == 0 )
  {
    sub_1B885B0(&BattleComboData_TypeInfo);
    sub_1B885B0(&BattleCommandData_TypeInfo);
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4A5DDE7 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1B88814(EnemyServantData, v8);
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
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1B8880C(EnemyServantData, v8);
  }
  v12 = sub_1B887FC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, v11->fields.uniqueId, 0LL);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v12 + 32) = FieldPlayerServantIDList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)FieldPlayerServantIDList, v14, v15);
  v16 = (BattleCommandData_o *)sub_1B887FC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v16, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0LL);
  if ( !v16 )
    goto LABEL_19;
  v16->fields._type = (int)EnemyServantData;
  v16->fields.svtlimit = BattleServantData__getDispLimitCount(v11, 1, 0LL);
  v16->fields.uniqueId = v11->fields.uniqueId;
  v16->fields.svtId = BattleServantData__getSvtId(v11, 0LL);
  v16->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0LL, 0LL);
  v17 = (BattleComboData_o *)sub_1B887FC(BattleComboData_TypeInfo);
  BattleComboData___ctor(v17, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v17, v16, v9, 0LL);
  TreasureDvcId = BattleServantData__getTreasureDvcId(v11, 1, 0LL, 0LL);
  BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v12, TreasureDvcId, 1, 0LL);
  if ( !v6 )
    goto LABEL_19;
  items = v6->fields._items;
  v22 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v6->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v12,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), v12, v19, v20);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v12; // x20
  System_Int32_array *FieldEnemyServantIDList; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  BattleCommandData_o *v16; // x22
  BattleComboData_o *v17; // x24
  int32_t TreasureDvcId; // w0
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4A5DDE4 & 1) == 0 )
  {
    sub_1B885B0(&BattleComboData_TypeInfo);
    sub_1B885B0(&BattleCommandData_TypeInfo);
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4A5DDE4 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1B88814(PlayerServantData, v8);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v9 + 1], 0LL);
  if ( !PlayerServantData || (v11 = PlayerServantData, !PlayerServantData->fields.reservationspecial) )
  {
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_1B8880C(PlayerServantData, v8);
  }
  v12 = sub_1B887FC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 2, v11->fields.uniqueId, 0LL);
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  *(_QWORD *)(v12 + 32) = FieldEnemyServantIDList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)FieldEnemyServantIDList, v14, v15);
  v16 = (BattleCommandData_o *)sub_1B887FC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v16, 0LL);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0LL);
  if ( !v16 )
    goto LABEL_18;
  v16->fields._type = (int)PlayerServantData;
  v16->fields.svtlimit = BattleServantData__getCommandDispLimitCount(v11, 0LL);
  v16->fields.uniqueId = v11->fields.uniqueId;
  v16->fields.svtId = BattleServantData__getSvtId(v11, 0LL);
  v16->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0LL, 0LL);
  v17 = (BattleComboData_o *)sub_1B887FC(BattleComboData_TypeInfo);
  BattleComboData___ctor(v17, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v17, v16, v9, 0LL);
  TreasureDvcId = BattleServantData__getTreasureDvcId(v11, 1, 0LL, 0LL);
  BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v12, TreasureDvcId, 1, 0LL);
  if ( !v6 )
    goto LABEL_18;
  items = v6->fields._items;
  v22 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_18;
  size = v6->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v12,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), v12, v19, v20);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleCommandData_o *v14; // x22
  BattleComboData_o *v15; // x24
  int32_t TreasureDvcId; // w0
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4A5DDE5 & 1) == 0 )
  {
    sub_1B885B0(&BattleComboData_TypeInfo);
    sub_1B885B0(&BattleCommandData_TypeInfo);
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4A5DDE5 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1B88814(logictarget, v9);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v10 + 1], 0LL);
  v13 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v13, 0LL);
  if ( !PlayerServantData )
    goto LABEL_21;
  if ( !v13 )
    goto LABEL_21;
  BattleLogicTask__setActor(v13, 2, PlayerServantData->fields.uniqueId, 0LL);
  logictarget = this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_21;
  BattleLogicTarget__getTargetBattleServantData(logictarget, v13, 0LL);
  v14 = (BattleCommandData_o *)sub_1B887FC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v14, 0LL);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcCardId(PlayerServantData, 0LL);
  if ( !v14 )
    goto LABEL_21;
  v14->fields._type = (int)logictarget;
  v14->fields.svtlimit = BattleServantData__getCommandDispLimitCount(PlayerServantData, 0LL);
  v14->fields.uniqueId = PlayerServantData->fields.uniqueId;
  v14->fields.svtId = BattleServantData__getSvtId(PlayerServantData, 0LL);
  v14->fields.treasureDvc = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL, 0LL);
  v15 = (BattleComboData_o *)sub_1B887FC(BattleComboData_TypeInfo);
  BattleComboData___ctor(v15, 0LL);
  BattleLogicTask__setActionCommand(v13, v15, v14, v10, 0LL);
  TreasureDvcId = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL, 0LL);
  BattleLogicTask__setActionTreasureDvc(v13, TreasureDvcId, 1, 0LL);
  if ( !v7
    || (items = v7->fields._items,
        v20 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v7->fields._version,
        !items) )
  {
LABEL_21:
    sub_1B8880C(logictarget, v9);
  }
  size = v7->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)v13,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v13;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v13, v17, v18);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}