void __fastcall BattleLogicSpecial___ctor(BattleLogicSpecial_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSpecial__createCounterOverwriteSpecialData(
        BattleLogicSpecial_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleData_o *data; // x21
  BattleLogicSpecial_o *v4; // x19
  BattleServantData_o *v6; // x21
  bool isAlive; // w8
  BattleActionData_o *result; // x0
  const MethodInfo *v9; // x4
  BattleActionData_o *v10; // x20
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-18h] BYREF

  baseActionData = 0LL;
  if ( !task )
    goto LABEL_10;
  data = this->fields.data;
  v4 = this;
  this = (BattleLogicSpecial_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_10;
  this = (BattleLogicSpecial_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
  v6 = (BattleServantData_o *)this;
  if ( !task->fields.checkAlive )
  {
    if ( !this )
      goto LABEL_10;
    goto LABEL_8;
  }
  if ( !this )
    goto LABEL_10;
  isAlive = BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL);
  result = 0LL;
  if ( isAlive )
  {
LABEL_8:
    BattleServantData__OverwriteTreasureDevice(v6, task->fields.treasureDvcId, task->fields.tresureDvcLv, 0LL);
    v10 = BattleLogicSpecial__createSpecialDataCommonFunction(v4, &baseActionData, task, 1, v9);
    BattleServantData__ResetOverwriteTreasureDevice(v6, 0LL);
    this = (BattleLogicSpecial_o *)v4->fields.logic;
    if ( this )
      return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)this, v10, baseActionData, 0LL);
LABEL_10:
    sub_B7076C(this, task);
  }
  return result;
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
  if ( (byte_4355002 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4355002 = 1;
  }
  baseActionData = 0LL;
  if ( !task )
    goto LABEL_15;
  data = v4->fields.data;
  this = (BattleLogicSpecial_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_15;
  ServantData = BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( task->fields._OverwriteTdData_k__BackingField )
    OverwriteTreasureDeviceData__Overwrite(task->fields._OverwriteTdData_k__BackingField, ServantData, 0LL);
  v8 = BattleLogicSpecial__createSpecialDataCommonFunction(v4, &baseActionData, task, 0, v6);
  if ( v8 )
  {
    v9 = v4->fields.data;
    this = (BattleLogicSpecial_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
    if ( v8->fields.funcTargetList )
    {
      v10 = (int)this;
      this = (BattleLogicSpecial_o *)System_Collections_Generic_List_int___ToArray(
                                       v8->fields.funcTargetList,
                                       (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( v9 )
      {
        BattleData__SetWasAttackTargetIdList(v9, v10, (System_Int32_array *)this, 0LL);
        goto LABEL_13;
      }
    }
LABEL_15:
    sub_B7076C(this, task);
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
  BattleServantConfConponent_o *v7; // x21
  __int64 data; // x0
  BattleData_o *v10; // x22
  BattleServantData_o *ServantData; // x26
  BattleActionData_o *v12; // x23
  BattleActionData_o *v13; // x24
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x4
  BattleCommandData_o *command; // x23
  int32_t v23; // w27
  BattleLogic_o *v24; // x19
  int32_t actorId; // w20
  BattleActionData_o *v26; // x21
  TreasureDvcLvMaster_o *MasterData_WarQuestSelectionMaster; // x21
  TreasureDvcLvEntity_o *v29; // x21
  int32_t ChainBonus; // w0
  DataVals_array *DataValsList; // x26
  DataVals_array *v32; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v33; // x28
  il2cpp_array_size_t v34; // w22
  struct System_Int32_array *v35; // x8
  Il2CppClass **v36; // x27
  __int64 v37; // x23
  __int64 *v38; // x27
  __int64 v39; // t1
  Il2CppClass **v40; // x25
  DataVals_o **v41; // x25
  __int64 v42; // t1
  BattleCommandData_o *v43; // x21
  BattleBuffData_CheckIndividualitiesData_o *v44; // x23
  __int64 v45; // x25
  System_Int32_array *funcId; // x28
  __int64 v47; // x23
  __int64 v48; // x23
  int v49; // w8
  SkillLvMaster_o *v50; // x27
  __int64 v51; // x22
  __int64 v52; // x21
  __int64 v53; // x25
  _DWORD *v54; // x8
  __int64 v55; // x23
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x8
  __int64 v63; // x25
  System_Int32_array **v64; // x23
  Il2CppClass **v65; // x0
  int32_t TreasureDvcId; // w0
  int32_t v67; // w27
  BattleLogicFunction_FunctionArgument_o *argument; // x21
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **motionMessage; // x1
  struct BattleData_o *v76; // x8
  struct BattlePerformance_o *perf; // x8
  BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *v78; // x23
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *v80; // x20
  BattleActionData_o *v81; // x22
  struct BattleLogic_o *v82; // x8
  BattlePerformance_o *v83; // x24
  BattleActionWaitCond_UntilSideEffectInvisible_o *v84; // x23
  __int64 v85; // x0
  __int64 v86; // x0
  int32_t v87; // [xsp+3Ch] [xbp-74h]
  BattleCommandData_o *v88; // [xsp+40h] [xbp-70h]
  bool v89; // [xsp+4Ch] [xbp-64h]
  BattleServantData_o *v90; // [xsp+50h] [xbp-60h]
  TreasureDvcLvEntity_o *v91; // [xsp+58h] [xbp-58h]
  __int64 v92; // [xsp+58h] [xbp-58h]

  v7 = (BattleServantConfConponent_o *)baseActionData;
  if ( (byte_4355003 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&BattleCommandData_TypeInfo);
    sub_B70694(&BattlePerformance_TypeInfo);
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_B70694(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_B70694(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
    sub_B70694(&BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
    byte_4355003 = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_109;
  BattleData__ResetWasAttackTargetId((BattleData_o *)data, 0LL);
  if ( !task )
    goto LABEL_109;
  v10 = this->fields.data;
  data = BattleLogicTask__getActorId(task, (const MethodInfo *)baseActionData);
  if ( !v10 )
    goto LABEL_109;
  ServantData = BattleData__getServantData(v10, data, 0LL);
  v12 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_109;
  v13 = BattleActionData__AddDisplayTriggerIntervalBuff(v12, task, 0LL);
  v7->klass = (BattleServantConfConponent_c *)v13;
  sub_B70630(v7, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
  data = BattleLogicTask__getActorId(task, v20);
  if ( !v13 )
    goto LABEL_109;
  v13->fields.actorId = data;
  data = (__int64)this->fields.logictarget;
  if ( !data )
    goto LABEL_109;
  command = task->fields.command;
  data = BattleLogicTarget__getTargetBase((BattleLogicTarget_o *)data, task->fields.targetIdlist, 0, 1, v21);
  v13->fields.targetId = data;
  if ( (int)data >= 1 )
  {
    baseActionData = (BattleActionData_o **)this->fields.data;
    if ( baseActionData )
    {
      if ( ((_BYTE)baseActionData[34] & 1) != 0 || *((_BYTE *)baseActionData + 273) )
        return 0LL;
      if ( ServantData )
      {
        v23 = data;
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
              data = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( data )
              {
                MasterData_WarQuestSelectionMaster = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)data,
                                                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                data = BattleServantData__getTreasureDvcId(ServantData, !isCounterOverwriteTreasureDevice, 0LL);
                if ( MasterData_WarQuestSelectionMaster )
                {
                  data = (__int64)TreasureDvcLvMaster__GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    data,
                                    ServantData->fields.treasuredvcLevel,
                                    0LL);
                  v29 = (TreasureDvcLvEntity_o *)data;
                  if ( !isCounterOverwriteTreasureDevice )
                  {
                    if ( !command )
                      goto LABEL_109;
                    ChainBonus = BattleCommandData__getChainBonus(command, 0LL);
                    BattleServantData__usedTpWeapon(ServantData, ChainBonus, this->fields.data, 0LL);
                  }
                  data = (__int64)this->fields.logic;
                  if ( data )
                  {
                    BattleLogic__updateResultServant((BattleLogic_o *)data, 0LL);
                    data = BattleServantData__getNpPer(ServantData, 0LL);
                    baseActionData = isCounterOverwriteTreasureDevice
                                   ? (BattleActionData_o **)(unsigned int)(100 * task->fields.counterOc)
                                   : (BattleActionData_o **)(unsigned int)data;
                    v13->fields.npPer = (int)baseActionData;
                    if ( v29 )
                    {
                      v87 = v23;
                      v88 = command;
                      v90 = ServantData;
                      v89 = isCounterOverwriteTreasureDevice;
                      DataValsList = TreasureDvcLvEntity__getDataValsList(v29, (int32_t)baseActionData, 0LL);
                      v91 = v29;
                      v32 = TreasureDvcLvEntity__getDataValsList(v29, 100, 0LL);
                      data = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( data )
                      {
                        data = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)data,
                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_FunctionMaster___);
                        if ( DataValsList )
                        {
                          if ( (int)DataValsList->max_length < 1 )
                          {
LABEL_61:
                            v43 = (BattleCommandData_o *)sub_B70764(BattleCommandData_TypeInfo);
                            BattleCommandData___ctor(v43, 0LL);
                            data = BattleServantData__getTreasureDvcId(v90, 1, 0LL);
                            if ( !v43 )
                              goto LABEL_109;
                            v43->fields.treasureDvc = data;
                            v44 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
                            BattleBuffData_CheckIndividualitiesData___ctor(v44, v90, 0LL, v43, 0LL, 0LL, 0LL);
                            data = (__int64)BattleServantData__getNPSideEffect(v90, v44, 0LL);
                            if ( !data )
                              goto LABEL_109;
                            v45 = data;
                            funcId = v91->fields.funcId;
                            if ( *(_QWORD *)(data + 24) )
                            {
                              if ( !funcId )
                                goto LABEL_109;
                              data = sub_B706AC(int___TypeInfo, funcId->max_length);
                              if ( !v91->fields.funcId )
                                goto LABEL_109;
                              funcId = (System_Int32_array *)data;
                              System_Array__CopyTo((System_Array_o *)v91->fields.funcId, (System_Array_o *)data, 0, 0LL);
                              v47 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
                              if ( (*(_BYTE *)(v47 + 306) & 1) == 0 )
                                sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
                              v48 = **(_QWORD **)(v47 + 192);
                              if ( (*(_BYTE *)(v48 + 306) & 1) == 0 )
                                sub_B08394(v48);
                              data = **(_QWORD **)(v48 + 184);
                              if ( !data )
                                goto LABEL_109;
                              data = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)data,
                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
                              v49 = *(_DWORD *)(v45 + 24);
                              if ( v49 >= 1 )
                              {
                                v50 = (SkillLvMaster_o *)data;
                                v51 = 0LL;
                                v92 = v45 + 32;
                                while ( (unsigned int)v51 < v49 )
                                {
                                  v52 = v45;
                                  v53 = *(_QWORD *)(v92 + 8 * v51);
                                  if ( !v53 )
                                    goto LABEL_109;
                                  v54 = *(_DWORD **)(v53 + 104);
                                  if ( !v54 )
                                    goto LABEL_109;
                                  if ( v54[6] < 2u )
                                    break;
                                  if ( !v50 )
                                    goto LABEL_109;
                                  data = (__int64)SkillLvMaster__GetEntity(v50, v54[8], v54[9], 0LL);
                                  if ( !data )
                                    goto LABEL_109;
                                  v55 = data;
                                  data = (__int64)SkillLvEntity__getDataValsList((SkillLvEntity_o *)data, 0LL);
                                  v62 = *(_QWORD *)(v55 + 32);
                                  if ( !v62 )
                                    goto LABEL_109;
                                  if ( !*(_DWORD *)(v62 + 24) )
                                    break;
                                  if ( !funcId )
                                    goto LABEL_109;
                                  v63 = *(int *)(v53 + 28);
                                  if ( (unsigned int)v63 >= funcId->max_length )
                                    break;
                                  funcId->m_Items[v63 + 1] = *(_DWORD *)(v62 + 32);
                                  if ( !data )
                                    goto LABEL_109;
                                  if ( !*(_DWORD *)(data + 24) )
                                    break;
                                  v64 = *(System_Int32_array ***)(data + 32);
                                  if ( v64 )
                                  {
                                    data = sub_B70754(*(_QWORD *)(data + 32), DataValsList->obj.klass->_1.element_class);
                                    if ( !data )
                                    {
                                      v86 = sub_B7078C(0LL);
                                      sub_B70738(v86, 0LL);
                                    }
                                  }
                                  if ( (unsigned int)v63 >= DataValsList->max_length )
                                    break;
                                  v65 = &DataValsList->obj.klass + v63;
                                  v65[4] = (Il2CppClass *)v64;
                                  sub_B70630(
                                    (BattleServantConfConponent_o *)(v65 + 4),
                                    v64,
                                    v56,
                                    v57,
                                    v58,
                                    v59,
                                    v60,
                                    v61);
                                  v49 = *(_DWORD *)(v52 + 24);
                                  ++v51;
                                  v45 = v52;
                                  if ( (int)v51 >= v49 )
                                    goto LABEL_89;
                                }
LABEL_110:
                                v85 = sub_B70798(data);
                                sub_B70738(v85, 0LL);
                              }
                            }
LABEL_89:
                            TreasureDvcId = BattleServantData__getTreasureDvcId(v90, 1, 0LL);
                            v13->fields.treasureDvcId = TreasureDvcId;
                            v67 = TreasureDvcId;
                            argument = (BattleLogicFunction_FunctionArgument_o *)sub_B70764(BattleLogicFunction_FunctionArgument_TypeInfo);
                            BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
                            if ( v89 )
                            {
                              v13->fields.isCounter = task->fields.isCounter;
                              motionMessage = (System_Int32_array **)task->fields.motionMessage;
                              v13->fields.motionMessage = (struct System_String_o *)motionMessage;
                              sub_B70630(
                                (BattleServantConfConponent_o *)&v13->fields.motionMessage,
                                motionMessage,
                                v69,
                                v70,
                                v71,
                                v72,
                                v73,
                                v74);
                              v13->fields._MessageType_k__BackingField = task->fields.messageType;
                            }
                            else
                            {
                              v76 = this->fields.data;
                              if ( !v76 )
                                goto LABEL_109;
                              perf = v76->fields.perf;
                              if ( !perf )
                                goto LABEL_109;
                              if ( !v88 )
                                goto LABEL_109;
                              data = (__int64)perf->fields.commandPerf;
                              if ( !data )
                                goto LABEL_109;
                              BattlePerformanceCommandCard__UpdateRemainingCardBuff(
                                (BattlePerformanceCommandCard_o *)data,
                                v88->fields.actionIndex,
                                0LL);
                              v78 = (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *)sub_B70764(BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
                              BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument___ctor(v78, 0LL);
                              if ( !argument )
                                goto LABEL_109;
                              BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
                                argument,
                                (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v78,
                                0LL);
                            }
                            data = (__int64)this->fields.logicfunction;
                            if ( data )
                            {
                              v26 = BattleLogicFunction__procList(
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
                                if ( v26 )
                                {
                                  v26->fields.targetId = v87;
                                  BattleActionData__setTypeTA(v26, 0LL);
                                  BattleActionData__setCommand(v26, v88, 0LL);
                                  v26->fields.motionId = BattleServantData__getTreasureDvcMotionId(v90, 0LL);
                                  data = (__int64)this->fields.logic;
                                  if ( data )
                                  {
                                    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0LL);
                                    v26->fields.prevattackme = 0;
                                    v26->fields.isForcedSpeedOne = task->fields.isForcedSpeedOne;
                                    data = (__int64)this->fields.data;
                                    if ( data )
                                    {
                                      BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0LL);
                                      logic = this->fields.logic;
                                      if ( logic )
                                      {
                                        v80 = logic->fields.perf;
                                        v81 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
                                        BattleActionData___ctor(v81, 0LL);
                                        v82 = this->fields.logic;
                                        if ( v82 )
                                        {
                                          v83 = v82->fields.perf;
                                          v84 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)sub_B70764(BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
                                          BattleActionWaitCond_UntilSideEffectInvisible___ctor(v84, v83, 0LL);
                                          if ( v81 )
                                          {
                                            data = (__int64)BattleActionData__SetWaitCond(
                                                              v81,
                                                              (BattleActionWaitCond_Base_o *)v84,
                                                              0LL);
                                            if ( v80 )
                                            {
                                              BattlePerformance__addActionData_18073992(
                                                v80,
                                                (BattleActionData_o *)data,
                                                0LL);
                                              v26->fields.treasureDvcId = v67;
                                              BattleActionData__SetFuncTargetAllDead(v26, this->fields.data, 0LL);
                                              return v26;
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
                            v33 = (DataMasterBase_WarMaster__WarEntity__int__o *)data;
                            v34 = 0;
                            while ( 1 )
                            {
                              v35 = v91->fields.funcId;
                              if ( !v35 )
                                break;
                              if ( v34 >= v35->max_length )
                                goto LABEL_110;
                              if ( !v33 )
                                break;
                              data = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                v33,
                                                v35->m_Items[v34 + 1],
                                                (const MethodInfo_21C0440 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
                              if ( v34 >= DataValsList->max_length )
                                goto LABEL_110;
                              v36 = &DataValsList->obj.klass + (int)v34;
                              v37 = data;
                              v39 = (__int64)v36[4];
                              v38 = (__int64 *)(v36 + 4);
                              data = v39;
                              if ( !v37 )
                                break;
                              if ( !data )
                                break;
                              DataVals__SetTempType(
                                (DataVals_o *)data,
                                (FunctionMaster_o *)v33,
                                *(_DWORD *)(v37 + 24),
                                0LL);
                              if ( !v32 )
                                break;
                              if ( v34 >= v32->max_length )
                                goto LABEL_110;
                              v40 = &v32->obj.klass + (int)v34;
                              v42 = (__int64)v40[4];
                              v41 = (DataVals_o **)(v40 + 4);
                              data = v42;
                              if ( !v42 )
                                break;
                              DataVals__SetTempType(
                                (DataVals_o *)data,
                                (FunctionMaster_o *)v33,
                                *(_DWORD *)(v37 + 24),
                                0LL);
                              if ( v34 >= DataValsList->max_length || v34 >= v32->max_length )
                                goto LABEL_110;
                              data = *v38;
                              if ( !*v38 )
                                break;
                              data = DataVals__CheckOverCharge((DataVals_o *)data, *v41, 0LL);
                              if ( (data & 1) != 0 )
                              {
                                if ( v34 >= DataValsList->max_length )
                                  goto LABEL_110;
                                data = *v38;
                                if ( !*v38 )
                                  break;
                                DataVals__SetOverCharge((DataVals_o *)data, 1, 0LL);
                              }
                              if ( v34 >= DataValsList->max_length || v34 >= v32->max_length )
                                goto LABEL_110;
                              if ( !*v41 )
                                break;
                              data = *v38;
                              if ( !*v38 )
                                break;
                              DataVals__SetDependOverChargeFlag(
                                (DataVals_o *)data,
                                (*v41)->fields.dependDataValsList,
                                0LL);
                              if ( (signed int)++v34 >= (signed int)DataValsList->max_length )
                                goto LABEL_61;
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
        }
        else
        {
          data = (__int64)this->fields.data;
          if ( data )
          {
            BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0LL);
            v24 = this->fields.logic;
            actorId = v13->fields.actorId;
            data = (__int64)BattlePerformance_TypeInfo;
            if ( (BYTE3(BattlePerformance_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattlePerformance_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
            }
            if ( v24 )
            {
              BattleLogic__addBackStepActionData(
                v24,
                actorId,
                BattlePerformance_TypeInfo->static_fields->AFTER_BACK_STEP_INTERVAL,
                0LL);
              return 0LL;
            }
          }
        }
      }
    }
LABEL_109:
    sub_B7076C(data, baseActionData);
  }
  return 0LL;
}


BattleLogicTask_array *__fastcall BattleLogicSpecial__taskEnemyTresureDvc(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x19
  BattleServantData_o *EnemyServantData; // x0
  __int64 v8; // x1
  unsigned int v9; // w20
  struct System_Int32_array *e_entryid; // x8
  BattleServantData_o *v11; // x23
  __int64 v12; // x22
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  System_Int32_array **FieldPlayerServantIDList; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BattleCommandData_o *v22; // x21
  BattleComboData_o *v23; // x24
  const MethodInfo *v24; // x4
  __int64 v26; // x0

  if ( (byte_4355000 & 1) == 0 )
  {
    sub_B70694(&BattleComboData_TypeInfo);
    sub_B70694(&BattleCommandData_TypeInfo);
    sub_B70694(&BattleLogicTask_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4355000 = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 16 )
    v9 = 2;
  else
    v9 = ltype == 15;
  if ( !data )
    goto LABEL_18;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_18;
  if ( v9 >= e_entryid->max_length )
  {
    v26 = sub_B70798(EnemyServantData);
    sub_B70738(v26, 0LL);
  }
  v8 = (unsigned int)e_entryid->m_Items[v9 + 1];
  if ( (int)v8 < 1 )
    goto LABEL_16;
  EnemyServantData = BattleData__getEnemyServantData(data, v8, 0LL);
  if ( !EnemyServantData )
    goto LABEL_18;
  v11 = EnemyServantData;
  if ( !EnemyServantData->fields.reservationspecial )
  {
LABEL_16:
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                        (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_B7076C(EnemyServantData, v8);
  }
  v12 = sub_B70764(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, v11->fields.uniqueId, v14);
  FieldPlayerServantIDList = (System_Int32_array **)BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v12 + 32) = FieldPlayerServantIDList;
  sub_B70630((BattleServantConfConponent_o *)(v12 + 32), FieldPlayerServantIDList, v16, v17, v18, v19, v20, v21);
  v22 = (BattleCommandData_o *)sub_B70764(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v22, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0LL);
  if ( !v22 )
    goto LABEL_18;
  v22->fields._type = (int)EnemyServantData;
  v22->fields.svtlimit = BattleServantData__getDispLimitCount(v11, 1, 0LL);
  v22->fields.uniqueId = v11->fields.uniqueId;
  v22->fields.svtId = BattleServantData__getSvtId(v11, 0LL);
  v22->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0LL);
  v23 = (BattleComboData_o *)sub_B70764(BattleComboData_TypeInfo);
  BattleComboData___ctor(v23, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v23, v22, v9, v24);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v11, 1, 0LL);
  *(_DWORD *)(v12 + 48) = 4;
  *(_DWORD *)(v12 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v12 + 88) = 1;
  if ( !v6 )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v6,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicSpecial__taskEnemyTresureDvcAlways(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x19
  BattleServantData_o *EnemyServantData; // x0
  __int64 v8; // x1
  unsigned int v9; // w20
  struct System_Int32_array *e_entryid; // x8
  BattleServantData_o *v11; // x22
  __int64 v12; // x23
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  System_Int32_array **FieldPlayerServantIDList; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BattleCommandData_o *v22; // x21
  BattleComboData_o *v23; // x24
  const MethodInfo *v24; // x4
  __int64 v26; // x0

  if ( (byte_4355001 & 1) == 0 )
  {
    sub_B70694(&BattleComboData_TypeInfo);
    sub_B70694(&BattleCommandData_TypeInfo);
    sub_B70694(&BattleLogicTask_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4355001 = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 23 )
    v9 = 2;
  else
    v9 = ltype == 22;
  if ( !data )
    goto LABEL_18;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_18;
  if ( v9 >= e_entryid->max_length )
  {
    v26 = sub_B70798(EnemyServantData);
    sub_B70738(v26, 0LL);
  }
  v8 = (unsigned int)e_entryid->m_Items[v9 + 1];
  if ( (int)v8 < 1 )
    goto LABEL_16;
  EnemyServantData = BattleData__getEnemyServantData(data, v8, 0LL);
  if ( !EnemyServantData )
    goto LABEL_18;
  v11 = EnemyServantData;
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(EnemyServantData, 1, 0LL);
  if ( (int)EnemyServantData < 1 )
  {
LABEL_16:
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                        (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_B7076C(EnemyServantData, v8);
  }
  v12 = sub_B70764(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, v11->fields.uniqueId, v14);
  FieldPlayerServantIDList = (System_Int32_array **)BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v12 + 32) = FieldPlayerServantIDList;
  sub_B70630((BattleServantConfConponent_o *)(v12 + 32), FieldPlayerServantIDList, v16, v17, v18, v19, v20, v21);
  v22 = (BattleCommandData_o *)sub_B70764(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v22, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0LL);
  if ( !v22 )
    goto LABEL_18;
  v22->fields._type = (int)EnemyServantData;
  v22->fields.svtlimit = BattleServantData__getDispLimitCount(v11, 1, 0LL);
  v22->fields.uniqueId = v11->fields.uniqueId;
  v22->fields.svtId = BattleServantData__getSvtId(v11, 0LL);
  v22->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0LL);
  v23 = (BattleComboData_o *)sub_B70764(BattleComboData_TypeInfo);
  BattleComboData___ctor(v23, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v23, v22, v9, v24);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v11, 1, 0LL);
  *(_DWORD *)(v12 + 48) = 4;
  *(_DWORD *)(v12 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v12 + 88) = 1;
  if ( !v6 )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v6,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicSpecial__taskTresureDvc(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x19
  BattleServantData_o *PlayerServantData; // x0
  __int64 v8; // x1
  unsigned int v9; // w20
  struct System_Int32_array *p_entryid; // x8
  BattleServantData_o *v11; // x23
  __int64 v12; // x22
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  System_Int32_array **FieldEnemyServantIDList; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BattleCommandData_o *v22; // x21
  BattleComboData_o *v23; // x24
  const MethodInfo *v24; // x4
  __int64 v26; // x0

  if ( (byte_4354FFE & 1) == 0 )
  {
    sub_B70694(&BattleComboData_TypeInfo);
    sub_B70694(&BattleCommandData_TypeInfo);
    sub_B70694(&BattleLogicTask_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4354FFE = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 8 )
    v9 = 2;
  else
    v9 = ltype == 7;
  if ( !data )
    goto LABEL_17;
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_17;
  if ( v9 >= p_entryid->max_length )
  {
    v26 = sub_B70798(PlayerServantData);
    sub_B70738(v26, 0LL);
  }
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v9 + 1], 0LL);
  if ( !PlayerServantData || (v11 = PlayerServantData, !PlayerServantData->fields.reservationspecial) )
  {
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                        (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_17:
    sub_B7076C(PlayerServantData, v8);
  }
  v12 = sub_B70764(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_17;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 2, v11->fields.uniqueId, v14);
  FieldEnemyServantIDList = (System_Int32_array **)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  *(_QWORD *)(v12 + 32) = FieldEnemyServantIDList;
  sub_B70630((BattleServantConfConponent_o *)(v12 + 32), FieldEnemyServantIDList, v16, v17, v18, v19, v20, v21);
  v22 = (BattleCommandData_o *)sub_B70764(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v22, 0LL);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0LL);
  if ( !v22 )
    goto LABEL_17;
  v22->fields._type = (int)PlayerServantData;
  v22->fields.svtlimit = BattleServantData__getCommandDispLimitCount(v11, 0LL);
  v22->fields.uniqueId = v11->fields.uniqueId;
  v22->fields.svtId = BattleServantData__getSvtId(v11, 0LL);
  v22->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0LL);
  v23 = (BattleComboData_o *)sub_B70764(BattleComboData_TypeInfo);
  BattleComboData___ctor(v23, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v23, v22, v9, v24);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v11, 1, 0LL);
  *(_DWORD *)(v12 + 48) = 4;
  *(_DWORD *)(v12 + 84) = (_DWORD)PlayerServantData;
  *(_DWORD *)(v12 + 88) = 1;
  if ( !v6 )
    goto LABEL_17;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v6,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicSpecial__taskTresureDvcAlways(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  BattleLogicTarget_o *logictarget; // x0
  __int64 v9; // x1
  unsigned int v10; // w20
  struct System_Int32_array *p_entryid; // x8
  BattleServantData_o *PlayerServantData; // x23
  BattleLogicTask_o *v13; // x22
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  BattleCommandData_o *v17; // x21
  BattleComboData_o *v18; // x24
  const MethodInfo *v19; // x4
  __int64 v21; // x0

  if ( (byte_4354FFF & 1) == 0 )
  {
    sub_B70694(&BattleComboData_TypeInfo);
    sub_B70694(&BattleCommandData_TypeInfo);
    sub_B70694(&BattleLogicTask_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4354FFF = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 6 )
  {
    v10 = 0;
    if ( !data )
      goto LABEL_18;
  }
  else if ( ltype == 7 )
  {
    v10 = 1;
    if ( !data )
      goto LABEL_18;
  }
  else
  {
    v10 = 2 * (ltype == 8);
    if ( !data )
      goto LABEL_18;
  }
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_18;
  if ( v10 >= p_entryid->max_length )
  {
    v21 = sub_B70798(logictarget);
    sub_B70738(v21, 0LL);
  }
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v10 + 1], 0LL);
  v13 = (BattleLogicTask_o *)sub_B70764(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v13, v14);
  if ( !PlayerServantData )
    goto LABEL_18;
  if ( !v13 )
    goto LABEL_18;
  BattleLogicTask__setActor(v13, 2, PlayerServantData->fields.uniqueId, v15);
  logictarget = this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_18;
  BattleLogicTarget__getTargetBattleServantData(logictarget, v13, v16);
  v17 = (BattleCommandData_o *)sub_B70764(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v17, 0LL);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcCardId(PlayerServantData, 0LL);
  if ( !v17 )
    goto LABEL_18;
  v17->fields._type = (int)logictarget;
  v17->fields.svtlimit = BattleServantData__getCommandDispLimitCount(PlayerServantData, 0LL);
  v17->fields.uniqueId = PlayerServantData->fields.uniqueId;
  v17->fields.svtId = BattleServantData__getSvtId(PlayerServantData, 0LL);
  v17->fields.treasureDvc = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL);
  v18 = (BattleComboData_o *)sub_B70764(BattleComboData_TypeInfo);
  BattleComboData___ctor(v18, 0LL);
  BattleLogicTask__setActionCommand(v13, v18, v17, v10, v19);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL);
  v13->fields.actiontype = 4;
  v13->fields.treasureDvcId = (int)logictarget;
  v13->fields.tresureDvcLv = 1;
  if ( !v7 )
LABEL_18:
    sub_B7076C(logictarget, v9);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v7,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}