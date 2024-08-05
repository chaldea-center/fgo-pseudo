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
  if ( (byte_4A01127 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1B64870(&BuffList_ACTION___TypeInfo, task);
    byte_4A01127 = 1;
  }
  if ( !task )
    goto LABEL_16;
  if ( !task->fields.isCheckTreasureDeviceBeforeFunc )
    return 0;
  task->fields.isCheckTreasureDeviceBeforeFunc = 0;
  this = (BattleLogicSpecial_o *)sub_1B64918(BuffList_ACTION___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_16;
  v11 = this;
  if ( !LODWORD(this->fields.logic) )
    sub_1B64AD4(this, task);
  LODWORD(this->fields.logictarget) = 141;
  this = (BattleLogicSpecial_o *)v10->fields.logic;
  if ( !this )
LABEL_16:
    sub_1B64ACC(this, task);
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
    sub_1B64ACC(this, task);
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
  if ( (byte_4A01125 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1B64870(&Method_System_Collections_Generic_List_int__ToArray__, task);
    byte_4A01125 = 1;
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
                                       (const MethodInfo_3493D10 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( v9 )
      {
        BattleData__SetWasAttackTargetIdList(v9, v10, (System_Int32_array *)this, 0LL);
        goto LABEL_13;
      }
    }
LABEL_15:
    sub_1B64ACC(this, task);
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
  BattleActionData_o *v25; // x21
  BattleActionData_o *v26; // x24
  int32_t v27; // w2
  int32_t v28; // w3
  const MethodInfo *v29; // x4
  BattleCommandData_o *command; // x27
  int32_t v31; // w25
  BattleLogic_o *v32; // x19
  int32_t actorId; // w20
  BattleActionData_o *v34; // x24
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v37; // x5
  TreasureDvcLvEntity_o *Entity; // x21
  int32_t ChainBonus; // w0
  DataVals_array *DataValsList; // x26
  DataVals_array *v41; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x29
  il2cpp_array_size_t v43; // w23
  struct System_Int32_array *v44; // x8
  Il2CppClass **v45; // x22
  __int64 v46; // x21
  __int64 *v47; // x22
  __int64 v48; // t1
  Il2CppClass **v49; // x27
  DataVals_o **v50; // x27
  __int64 v51; // t1
  BattleCommandData_o *v52; // x21
  BattleServantData_o *v53; // x22
  BattleBuffData_CheckIndividualitiesData_o *v54; // x28
  __int64 v55; // x29
  System_Int32_array *funcId; // x28
  __int64 v57; // x0
  __int64 v58; // x0
  int v59; // w8
  SkillLvMaster_o *v60; // x27
  __int64 v61; // x23
  __int64 v62; // x22
  __int64 v63; // x29
  _DWORD *v64; // x8
  __int64 v65; // x21
  int32_t v66; // w2
  int32_t v67; // w3
  __int64 v68; // x8
  __int64 v69; // x29
  Il2CppClass *v70; // x21
  Il2CppClass **v71; // x0
  int32_t TreasureDvcId; // w0
  int32_t v73; // w27
  BattleLogicFunction_FunctionArgument_o *argument; // x29
  int32_t v75; // w2
  int32_t v76; // w3
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v78; // x8
  struct BattlePerformance_o *perf; // x8
  BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *v80; // x21
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *v82; // x20
  BattleActionData_o *v83; // x21
  struct BattleLogic_o *v84; // x8
  BattlePerformance_o *v85; // x23
  BattleActionWaitCond_UntilSideEffectInvisible_o *v86; // x22
  __int64 v87; // x0
  BattleCommandData_o *v88; // [xsp+30h] [xbp-80h]
  bool v89; // [xsp+3Ch] [xbp-74h]
  BattleServantData_o *v90; // [xsp+40h] [xbp-70h]
  TreasureDvcLvEntity_o *v91; // [xsp+48h] [xbp-68h]
  __int64 v92; // [xsp+48h] [xbp-68h]

  v7 = (ServantStatusBattleListViewItem_o *)baseActionData;
  if ( (byte_4A01126 & 1) == 0 )
  {
    sub_1B64870(&BattleActionData_TypeInfo, baseActionData);
    sub_1B64870(&BattleCommandData_TypeInfo, v9);
    sub_1B64870(&BattlePerformance_TypeInfo, v10);
    sub_1B64870(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v11);
    sub_1B64870(&Method_DataManager_GetMasterData_FunctionMaster___, v12);
    sub_1B64870(&Method_DataManager_GetMasterData_SkillLvMaster___, v13);
    sub_1B64870(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v14);
    sub_1B64870(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v15);
    sub_1B64870(&BattleLogicFunction_FunctionArgument_TypeInfo, v16);
    sub_1B64870(&int___TypeInfo, v17);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v18);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B64870(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo, v20);
    sub_1B64870(&BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo, v21);
    byte_4A01126 = 1;
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
  v25 = (BattleActionData_o *)sub_1B64ABC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v25, 0LL);
  if ( !v25 )
    goto LABEL_112;
  v26 = BattleActionData__AddDisplayTriggerIntervalBuff(v25, task, 0LL);
  v7->klass = (ServantStatusBattleListViewItem_c *)v26;
  sub_1B64814(v7, (int32_t)v26, v27, v28);
  data = BattleLogicTask__getActorId(task, 0LL);
  if ( !v26 )
    goto LABEL_112;
  v26->fields.actorId = data;
  data = (__int64)this->fields.logictarget;
  if ( !data )
    goto LABEL_112;
  command = task->fields.command;
  data = BattleLogicTarget__getTargetBase((BattleLogicTarget_o *)data, task->fields.targetIdlist, 0, 1, v29);
  v26->fields.targetId = data;
  if ( (int)data >= 1 )
  {
    baseActionData = (BattleActionData_o **)this->fields.data;
    if ( !baseActionData )
      goto LABEL_112;
    if ( *((_BYTE *)baseActionData + 280) || *((_BYTE *)baseActionData + 281) )
      return 0LL;
    if ( !ServantData )
      goto LABEL_112;
    v31 = data;
    if ( BattleServantData__checkUseTDvc(ServantData, (BattleData_o *)baseActionData, 1, 0LL)
      || isCounterOverwriteTreasureDevice )
    {
      data = (__int64)ServantData->fields.buffData;
      if ( !data )
        goto LABEL_112;
      BattleBuffData__ResetCommandCodeBuffActiveFlg((BattleBuffData_o *)data, 0LL);
      data = (__int64)ServantData->fields.buffData;
      if ( !data )
        goto LABEL_112;
      BattleBuffData__ResetCommandAssistBuffActiveFlg((BattleBuffData_o *)data, 0LL);
      data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !data )
        goto LABEL_112;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)data,
                            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
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
        data = BattleLogicSpecial__AddTreasureDeviceBeforeFunctionTask(this, task, ServantData, v31, command, v37);
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
      baseActionData = isCounterOverwriteTreasureDevice
                     ? (BattleActionData_o **)(unsigned int)(100 * task->fields.counterOc)
                     : (BattleActionData_o **)(unsigned int)data;
      v26->fields.npPer = (int)baseActionData;
      if ( !Entity )
        goto LABEL_112;
      v88 = command;
      v90 = ServantData;
      v89 = isCounterOverwriteTreasureDevice;
      DataValsList = TreasureDvcLvEntity__getDataValsList(Entity, (int32_t)baseActionData, 0LL);
      v41 = TreasureDvcLvEntity__getDataValsList(Entity, 100, 0LL);
      data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !data )
        goto LABEL_112;
      data = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_FunctionMaster___);
      if ( !DataValsList )
        goto LABEL_112;
      v91 = Entity;
      if ( (int)DataValsList->max_length < 1 )
      {
LABEL_63:
        v52 = (BattleCommandData_o *)sub_1B64ABC(BattleCommandData_TypeInfo);
        BattleCommandData___ctor(v52, 0LL);
        v53 = v90;
        data = BattleServantData__getTreasureDvcId(v90, 1, 0LL);
        if ( !v52 )
          goto LABEL_112;
        v52->fields.treasureDvc = data;
        v54 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64ABC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
        BattleBuffData_CheckIndividualitiesData___ctor(v54, v90, 0LL, v52, 0LL, 0LL, 0LL);
        data = (__int64)BattleServantData__getNPSideEffect(v90, v54, 0LL);
        if ( !data )
          goto LABEL_112;
        v55 = data;
        funcId = v91->fields.funcId;
        if ( *(_QWORD *)(data + 24) )
        {
          if ( !funcId )
            goto LABEL_112;
          data = sub_1B64918(int___TypeInfo, funcId->max_length);
          if ( !v91->fields.funcId )
            goto LABEL_112;
          funcId = (System_Int32_array *)data;
          System_Array__CopyTo((System_Array_o *)v91->fields.funcId, (System_Array_o *)data, 0, 0LL);
          v57 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
          if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
            v57 = sub_1BB674C(v57);
          v58 = *(_QWORD *)(*(_QWORD *)(v57 + 192) + 16LL);
          if ( (*(_BYTE *)(v58 + 309) & 1) == 0 )
            v58 = sub_1BB674C(v58);
          data = **(_QWORD **)(v58 + 184);
          if ( !data )
            goto LABEL_112;
          data = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)data,
                            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
          v59 = *(_DWORD *)(v55 + 24);
          if ( v59 >= 1 )
          {
            v60 = (SkillLvMaster_o *)data;
            v61 = 0LL;
            v92 = v55 + 32;
            do
            {
              if ( (unsigned int)v61 >= v59 )
                goto LABEL_113;
              v62 = v55;
              v63 = *(_QWORD *)(v92 + 8 * v61);
              if ( !v63 )
                goto LABEL_112;
              v64 = *(_DWORD **)(v63 + 104);
              if ( !v64 )
                goto LABEL_112;
              if ( v64[6] < 2u )
                goto LABEL_113;
              if ( !v60 )
                goto LABEL_112;
              data = (__int64)SkillLvMaster__GetEntity(v60, v64[8], v64[9], 0LL);
              if ( !data )
                goto LABEL_112;
              v65 = data;
              data = (__int64)SkillLvEntity__getDataValsList((SkillLvEntity_o *)data, 0LL);
              v68 = *(_QWORD *)(v65 + 32);
              if ( !v68 )
                goto LABEL_112;
              if ( !*(_DWORD *)(v68 + 24) )
                goto LABEL_113;
              if ( !funcId )
                goto LABEL_112;
              v69 = *(int *)(v63 + 28);
              if ( (unsigned int)v69 >= funcId->max_length )
                goto LABEL_113;
              funcId->m_Items[v69 + 1] = *(_DWORD *)(v68 + 32);
              if ( !data )
                goto LABEL_112;
              if ( !*(_DWORD *)(data + 24) )
                goto LABEL_113;
              v70 = *(Il2CppClass **)(data + 32);
              if ( v70 )
              {
                data = sub_1B649AC(*(_QWORD *)(data + 32), DataValsList->obj.klass->_1.element_class);
                if ( !data )
                {
                  v87 = sub_1B64AF0(0LL);
                  sub_1B64998(v87, 0LL);
                }
              }
              if ( (unsigned int)v69 >= DataValsList->max_length )
                goto LABEL_113;
              v71 = &DataValsList->obj.klass + v69;
              v71[4] = v70;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v71 + 4), (int32_t)v70, v66, v67);
              v59 = *(_DWORD *)(v62 + 24);
              ++v61;
              v55 = v62;
            }
            while ( (int)v61 < v59 );
            v53 = v90;
          }
        }
        TreasureDvcId = BattleServantData__getTreasureDvcId(v53, 1, 0LL);
        v26->fields.treasureDvcId = TreasureDvcId;
        v73 = TreasureDvcId;
        argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B64ABC(BattleLogicFunction_FunctionArgument_TypeInfo);
        BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
        if ( v89 )
        {
          v26->fields.isCounter = task->fields.isCounter;
          motionMessage = task->fields.motionMessage;
          v26->fields.motionMessage = motionMessage;
          sub_1B64814((ServantStatusBattleListViewItem_o *)&v26->fields.motionMessage, (int32_t)motionMessage, v75, v76);
          v26->fields._MessageType_k__BackingField = task->fields.messageType;
        }
        else
        {
          v78 = this->fields.data;
          if ( !v78 )
            goto LABEL_112;
          perf = v78->fields.perf;
          if ( !perf )
            goto LABEL_112;
          if ( !v88 )
            goto LABEL_112;
          data = (__int64)perf->fields.commandPerf;
          if ( !data )
            goto LABEL_112;
          BattlePerformanceCommandCard__UpdateRemainingCardBuff(
            (BattlePerformanceCommandCard_o *)data,
            v88->fields.actionIndex,
            0LL);
          v80 = (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *)sub_1B64ABC(BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
          BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument___ctor(v80, 0LL);
          if ( !argument )
            goto LABEL_112;
          BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
            argument,
            (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v80,
            0LL);
        }
        data = (__int64)this->fields.logicfunction;
        if ( data )
        {
          v34 = BattleLogicFunction__procList(
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
          BattleServantData__checkRegainNPUsedNoble(v90, 0LL);
          data = (__int64)v90->fields.buffData;
          if ( data )
          {
            data = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
            if ( !v89 )
            {
              v90->fields.tmpNp = v90->fields.np;
              BattleServantData__changeNp(v90, 0, 0, 0LL);
            }
            if ( v34 )
            {
              v34->fields.targetId = v31;
              BattleActionData__setTypeTA(v34, 0LL);
              BattleActionData__setCommand(v34, v88, 0LL);
              v34->fields.motionId = BattleServantData__getTreasureDvcMotionId(v90, 0LL);
              data = (__int64)this->fields.logic;
              if ( data )
              {
                BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0LL);
                v34->fields.prevattackme = 0;
                v34->fields.isForcedSpeedOne = task->fields.isForcedSpeedOne;
                data = (__int64)this->fields.data;
                if ( data )
                {
                  BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0LL);
                  logic = this->fields.logic;
                  if ( logic )
                  {
                    v82 = logic->fields.perf;
                    v83 = (BattleActionData_o *)sub_1B64ABC(BattleActionData_TypeInfo);
                    BattleActionData___ctor(v83, 0LL);
                    v84 = this->fields.logic;
                    if ( v84 )
                    {
                      v85 = v84->fields.perf;
                      v86 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)sub_1B64ABC(BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
                      BattleActionWaitCond_UntilSideEffectInvisible___ctor(v86, v85, 0LL);
                      if ( v83 )
                      {
                        data = (__int64)BattleActionData__SetWaitCond(v83, (BattleActionWaitCond_Base_o *)v86, 0LL);
                        if ( v82 )
                        {
                          BattlePerformance__addActionData_41560496(v82, (BattleActionData_o *)data, 0LL);
                          v34->fields.treasureDvcId = v73;
                          BattleActionData__SetFuncTargetAllDead(v34, this->fields.data, 0LL);
                          return v34;
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
        v42 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
        v43 = 0;
        while ( 1 )
        {
          v44 = Entity->fields.funcId;
          if ( !v44 )
            break;
          if ( v43 >= v44->max_length )
            goto LABEL_113;
          if ( !v42 )
            break;
          data = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v42,
                            v44->m_Items[v43 + 1],
                            (const MethodInfo_30D6180 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
          if ( v43 >= DataValsList->max_length )
            goto LABEL_113;
          v45 = &DataValsList->obj.klass + (int)v43;
          v46 = data;
          v48 = (__int64)v45[4];
          v47 = (__int64 *)(v45 + 4);
          data = v48;
          if ( !v46 )
            break;
          if ( !data )
            break;
          DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v42, *(_DWORD *)(v46 + 24), 0LL);
          if ( !v41 )
            break;
          if ( v43 >= v41->max_length )
            goto LABEL_113;
          v49 = &v41->obj.klass + (int)v43;
          v51 = (__int64)v49[4];
          v50 = (DataVals_o **)(v49 + 4);
          data = v51;
          if ( !v51 )
            break;
          DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v42, *(_DWORD *)(v46 + 24), 0LL);
          if ( v43 >= DataValsList->max_length || (Entity = v91, v43 >= v41->max_length) )
LABEL_113:
            sub_1B64AD4(data, baseActionData);
          data = *v47;
          if ( !*v47 )
            break;
          data = DataVals__CheckOverCharge((DataVals_o *)data, *v50, 0LL);
          if ( (data & 1) != 0 )
          {
            if ( v43 >= DataValsList->max_length )
              goto LABEL_113;
            data = *v47;
            if ( !*v47 )
              break;
            DataVals__SetOverCharge((DataVals_o *)data, 1, 0LL);
          }
          if ( v43 >= DataValsList->max_length || v43 >= v41->max_length )
            goto LABEL_113;
          if ( !*v50 )
            break;
          data = *v47;
          if ( !*v47 )
            break;
          DataVals__SetDependOverChargeFlag((DataVals_o *)data, (*v50)->fields.dependDataValsList, 0LL);
          if ( (signed int)++v43 >= (signed int)DataValsList->max_length )
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
        v32 = this->fields.logic;
        actorId = v26->fields.actorId;
        data = (__int64)BattlePerformance_TypeInfo;
        if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
        if ( v32 )
        {
          BattleLogic__addBackStepActionData(
            v32,
            actorId,
            BattlePerformance_TypeInfo->static_fields->AFTER_BACK_STEP_INTERVAL,
            0LL);
          return 0LL;
        }
      }
    }
LABEL_112:
    sub_1B64ACC(data, baseActionData);
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
  BattleServantData_o *v17; // x23
  __int64 v18; // x20
  System_Int32_array *FieldPlayerServantIDList; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  BattleCommandData_o *v22; // x22
  BattleComboData_o *v23; // x24
  int32_t TreasureDvcId; // w0
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4A01123 & 1) == 0 )
  {
    sub_1B64870(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1B64870(&BattleCommandData_TypeInfo, v6);
    sub_1B64870(&BattleLogicTask_TypeInfo, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1B64870(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_4A01123 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1B64AD4(EnemyServantData, v14);
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
                                        (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1B64ACC(EnemyServantData, v14);
  }
  v18 = sub_1B64ABC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v18, 3, v17->fields.uniqueId, 0LL);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v18 + 32) = FieldPlayerServantIDList;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v18 + 32), (int32_t)FieldPlayerServantIDList, v20, v21);
  v22 = (BattleCommandData_o *)sub_1B64ABC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v22, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v17, 0LL);
  if ( !v22 )
    goto LABEL_19;
  v22->fields._type = (int)EnemyServantData;
  v22->fields.svtlimit = BattleServantData__getDispLimitCount(v17, 1, 0LL);
  v22->fields.uniqueId = v17->fields.uniqueId;
  v22->fields.svtId = BattleServantData__getSvtId(v17, 0LL);
  v22->fields.treasureDvc = BattleServantData__getTreasureDvcId(v17, 1, 0LL);
  v23 = (BattleComboData_o *)sub_1B64ABC(BattleComboData_TypeInfo);
  BattleComboData___ctor(v23, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v18, v23, v22, v15, 0LL);
  TreasureDvcId = BattleServantData__getTreasureDvcId(v17, 1, 0LL);
  BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v18, TreasureDvcId, 1, 0LL);
  if ( !v12 )
    goto LABEL_19;
  items = v12->fields._items;
  v28 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v18,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v18;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v30 + 4), v18, v25, v26);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleServantData_o *v17; // x23
  __int64 v18; // x20
  System_Int32_array *FieldPlayerServantIDList; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  BattleCommandData_o *v22; // x22
  BattleComboData_o *v23; // x24
  int32_t TreasureDvcId; // w0
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4A01124 & 1) == 0 )
  {
    sub_1B64870(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1B64870(&BattleCommandData_TypeInfo, v6);
    sub_1B64870(&BattleLogicTask_TypeInfo, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1B64870(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_4A01124 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1B64AD4(EnemyServantData, v14);
  v14 = (unsigned int)e_entryid->m_Items[v15 + 1];
  if ( (int)v14 < 1 )
    goto LABEL_18;
  EnemyServantData = BattleData__getEnemyServantData(data, v14, 0LL);
  if ( !EnemyServantData )
    goto LABEL_19;
  v17 = EnemyServantData;
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(EnemyServantData, 1, 0LL);
  if ( (int)EnemyServantData < 1 )
  {
LABEL_18:
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v12,
                                        (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1B64ACC(EnemyServantData, v14);
  }
  v18 = sub_1B64ABC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v18, 3, v17->fields.uniqueId, 0LL);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v18 + 32) = FieldPlayerServantIDList;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v18 + 32), (int32_t)FieldPlayerServantIDList, v20, v21);
  v22 = (BattleCommandData_o *)sub_1B64ABC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v22, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v17, 0LL);
  if ( !v22 )
    goto LABEL_19;
  v22->fields._type = (int)EnemyServantData;
  v22->fields.svtlimit = BattleServantData__getDispLimitCount(v17, 1, 0LL);
  v22->fields.uniqueId = v17->fields.uniqueId;
  v22->fields.svtId = BattleServantData__getSvtId(v17, 0LL);
  v22->fields.treasureDvc = BattleServantData__getTreasureDvcId(v17, 1, 0LL);
  v23 = (BattleComboData_o *)sub_1B64ABC(BattleComboData_TypeInfo);
  BattleComboData___ctor(v23, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v18, v23, v22, v15, 0LL);
  TreasureDvcId = BattleServantData__getTreasureDvcId(v17, 1, 0LL);
  BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v18, TreasureDvcId, 1, 0LL);
  if ( !v12 )
    goto LABEL_19;
  items = v12->fields._items;
  v28 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v18,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v18;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v30 + 4), v18, v25, v26);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v18; // x20
  System_Int32_array *FieldEnemyServantIDList; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  BattleCommandData_o *v22; // x22
  BattleComboData_o *v23; // x24
  int32_t TreasureDvcId; // w0
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4A01121 & 1) == 0 )
  {
    sub_1B64870(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1B64870(&BattleCommandData_TypeInfo, v6);
    sub_1B64870(&BattleLogicTask_TypeInfo, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1B64870(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_4A01121 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1B64AD4(PlayerServantData, v14);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v15 + 1], 0LL);
  if ( !PlayerServantData || (v17 = PlayerServantData, !PlayerServantData->fields.reservationspecial) )
  {
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v12,
                                        (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_1B64ACC(PlayerServantData, v14);
  }
  v18 = sub_1B64ABC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v18, 2, v17->fields.uniqueId, 0LL);
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  *(_QWORD *)(v18 + 32) = FieldEnemyServantIDList;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v18 + 32), (int32_t)FieldEnemyServantIDList, v20, v21);
  v22 = (BattleCommandData_o *)sub_1B64ABC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v22, 0LL);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v17, 0LL);
  if ( !v22 )
    goto LABEL_18;
  v22->fields._type = (int)PlayerServantData;
  v22->fields.svtlimit = BattleServantData__getCommandDispLimitCount(v17, 0LL);
  v22->fields.uniqueId = v17->fields.uniqueId;
  v22->fields.svtId = BattleServantData__getSvtId(v17, 0LL);
  v22->fields.treasureDvc = BattleServantData__getTreasureDvcId(v17, 1, 0LL);
  v23 = (BattleComboData_o *)sub_1B64ABC(BattleComboData_TypeInfo);
  BattleComboData___ctor(v23, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v18, v23, v22, v15, 0LL);
  TreasureDvcId = BattleServantData__getTreasureDvcId(v17, 1, 0LL);
  BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v18, TreasureDvcId, 1, 0LL);
  if ( !v12 )
    goto LABEL_18;
  items = v12->fields._items;
  v28 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_18;
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v18,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v18;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v30 + 4), v18, v25, v26);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  const MethodInfo *v20; // x2
  BattleCommandData_o *v21; // x22
  BattleComboData_o *v22; // x24
  int32_t TreasureDvcId; // w0
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4A01122 & 1) == 0 )
  {
    sub_1B64870(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1B64870(&BattleCommandData_TypeInfo, v7);
    sub_1B64870(&BattleLogicTask_TypeInfo, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_1B64870(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    byte_4A01122 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1B64AD4(logictarget, v15);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v16 + 1], 0LL);
  v19 = (BattleLogicTask_o *)sub_1B64ABC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v19, 0LL);
  if ( !PlayerServantData )
    goto LABEL_21;
  if ( !v19 )
    goto LABEL_21;
  BattleLogicTask__setActor(v19, 2, PlayerServantData->fields.uniqueId, 0LL);
  logictarget = this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_21;
  BattleLogicTarget__getTargetBattleServantData(logictarget, v19, v20);
  v21 = (BattleCommandData_o *)sub_1B64ABC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v21, 0LL);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcCardId(PlayerServantData, 0LL);
  if ( !v21 )
    goto LABEL_21;
  v21->fields._type = (int)logictarget;
  v21->fields.svtlimit = BattleServantData__getCommandDispLimitCount(PlayerServantData, 0LL);
  v21->fields.uniqueId = PlayerServantData->fields.uniqueId;
  v21->fields.svtId = BattleServantData__getSvtId(PlayerServantData, 0LL);
  v21->fields.treasureDvc = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL);
  v22 = (BattleComboData_o *)sub_1B64ABC(BattleComboData_TypeInfo);
  BattleComboData___ctor(v22, 0LL);
  BattleLogicTask__setActionCommand(v19, v22, v21, v16, 0LL);
  TreasureDvcId = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL);
  BattleLogicTask__setActionTreasureDvc(v19, TreasureDvcId, 1, 0LL);
  if ( !v13
    || (items = v13->fields._items,
        v27 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v13->fields._version,
        !items) )
  {
LABEL_21:
    sub_1B64ACC(logictarget, v15);
  }
  size = v13->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)v19,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v19;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v19, v24, v25);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}