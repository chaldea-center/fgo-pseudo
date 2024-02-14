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
    sub_B0D97C(this);
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
  const MethodInfo *v8; // x1
  BattleActionData_o *v9; // x21
  BattleData_o *v10; // x22
  int32_t v11; // w20
  OverwriteTreasureDeviceData_o *OverwriteTdData_k__BackingField; // x0
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4217700 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, task);
    byte_4217700 = 1;
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
  v9 = BattleLogicSpecial__createSpecialDataCommonFunction(v4, &baseActionData, task, 0, v6);
  if ( v9 )
  {
    v10 = v4->fields.data;
    this = (BattleLogicSpecial_o *)BattleLogicTask__getActorId(task, v8);
    if ( v9->fields.funcTargetList )
    {
      v11 = (int)this;
      this = (BattleLogicSpecial_o *)System_Collections_Generic_List_int___ToArray(
                                       v9->fields.funcTargetList,
                                       (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( v10 )
      {
        BattleData__SetWasAttackTargetIdList(v10, v11, (System_Int32_array *)this, 0LL);
        goto LABEL_13;
      }
    }
LABEL_15:
    sub_B0D97C(this);
  }
  OverwriteTdData_k__BackingField = task->fields._OverwriteTdData_k__BackingField;
  if ( OverwriteTdData_k__BackingField )
    OverwriteTreasureDeviceData__Reset(OverwriteTdData_k__BackingField, ServantData, 0LL);
LABEL_13:
  this = (BattleLogicSpecial_o *)v4->fields.logic;
  if ( !this )
    goto LABEL_15;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)this, v9, baseActionData, 0LL);
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
  const MethodInfo *v23; // x1
  BattleData_o *v24; // x22
  BattleServantData_o *ServantData; // x26
  __int64 v26; // x1
  __int64 v27; // x2
  BattleActionData_o *v28; // x23
  BattleActionData_o *v29; // x24
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x4
  BattleCommandData_o *command; // x23
  struct BattleData_o *v39; // x1
  int32_t v40; // w27
  BattleLogic_o *v41; // x19
  int32_t actorId; // w20
  BattleActionData_o *v43; // x21
  TreasureDvcLvMaster_o *MasterData_WarQuestSelectionMaster; // x21
  TreasureDvcLvEntity_o *v46; // x21
  int32_t ChainBonus; // w0
  int32_t v48; // w1
  DataVals_array *DataValsList; // x26
  DataVals_array *v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  DataMasterBase_WarMaster__WarEntity__int__o *v53; // x28
  il2cpp_array_size_t v54; // w22
  struct System_Int32_array *v55; // x8
  Il2CppClass **v56; // x27
  __int64 v57; // x23
  __int64 *v58; // x27
  __int64 v59; // t1
  Il2CppClass **v60; // x25
  DataVals_o **v61; // x25
  __int64 v62; // t1
  BattleCommandData_o *v63; // x21
  __int64 v64; // x1
  __int64 v65; // x2
  BattleBuffData_CheckIndividualitiesData_o *v66; // x23
  __int64 v67; // x25
  System_Int32_array *funcId; // x28
  __int64 v69; // x23
  __int64 v70; // x23
  int v71; // w8
  SkillLvMaster_o *v72; // x27
  __int64 v73; // x22
  __int64 v74; // x21
  __int64 v75; // x25
  _DWORD *v76; // x8
  __int64 v77; // x23
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  __int64 v84; // x8
  __int64 v85; // x25
  System_Int32_array **v86; // x23
  Il2CppClass **v87; // x0
  int32_t TreasureDvcId; // w0
  int32_t v89; // w27
  __int64 v90; // x1
  __int64 v91; // x2
  BattleLogicFunction_FunctionArgument_o *argument; // x21
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **motionMessage; // x1
  struct BattleData_o *v100; // x8
  struct BattlePerformance_o *perf; // x8
  __int64 v102; // x1
  __int64 v103; // x2
  BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *v104; // x23
  __int64 v105; // x1
  __int64 v106; // x2
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *v108; // x20
  BattleActionData_o *v109; // x22
  __int64 v110; // x1
  __int64 v111; // x2
  struct BattleLogic_o *v112; // x8
  BattlePerformance_o *v113; // x24
  BattleActionWaitCond_UntilSideEffectInvisible_o *v114; // x23
  __int64 v115; // x0
  __int64 v116; // x0
  int32_t v117; // [xsp+3Ch] [xbp-74h]
  BattleCommandData_o *v118; // [xsp+40h] [xbp-70h]
  bool v119; // [xsp+4Ch] [xbp-64h]
  BattleServantData_o *v120; // [xsp+50h] [xbp-60h]
  TreasureDvcLvEntity_o *v121; // [xsp+58h] [xbp-58h]
  __int64 v122; // [xsp+58h] [xbp-58h]

  if ( (byte_4217701 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, baseActionData);
    sub_B0D8A4(&BattleCommandData_TypeInfo, v9);
    sub_B0D8A4(&BattlePerformance_TypeInfo, v10);
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_FunctionMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v14);
    sub_B0D8A4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v15);
    sub_B0D8A4(&BattleLogicFunction_FunctionArgument_TypeInfo, v16);
    sub_B0D8A4(&int___TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B0D8A4(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo, v20);
    sub_B0D8A4(&BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo, v21);
    byte_4217701 = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_109;
  BattleData__ResetWasAttackTargetId((BattleData_o *)data, 0LL);
  if ( !task )
    goto LABEL_109;
  v24 = this->fields.data;
  data = BattleLogicTask__getActorId(task, v23);
  if ( !v24 )
    goto LABEL_109;
  ServantData = BattleData__getServantData(v24, data, 0LL);
  v28 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, v26, v27);
  BattleActionData___ctor(v28, 0LL);
  if ( !v28 )
    goto LABEL_109;
  v29 = BattleActionData__AddDisplayTriggerIntervalBuff(v28, task, 0LL);
  *baseActionData = v29;
  sub_B0D840((BattleServantConfConponent_o *)baseActionData, (System_Int32_array **)v29, v30, v31, v32, v33, v34, v35);
  data = BattleLogicTask__getActorId(task, v36);
  if ( !v29 )
    goto LABEL_109;
  v29->fields.actorId = data;
  data = (__int64)this->fields.logictarget;
  if ( !data )
    goto LABEL_109;
  command = task->fields.command;
  data = BattleLogicTarget__getTargetBase((BattleLogicTarget_o *)data, task->fields.targetIdlist, 0, 1, v37);
  v29->fields.targetId = data;
  if ( (int)data >= 1 )
  {
    v39 = this->fields.data;
    if ( v39 )
    {
      if ( v39->fields.leaderDown || v39->fields.endbattleFlg )
        return 0LL;
      if ( ServantData )
      {
        v40 = data;
        if ( BattleServantData__checkUseTDvc(ServantData, v39, 1, 0LL) || isCounterOverwriteTreasureDevice )
        {
          data = (__int64)ServantData->fields.buffData;
          if ( data )
          {
            BattleBuffData__ResetCommandCodeBuffActiveFlg((BattleBuffData_o *)data, 0LL);
            data = (__int64)ServantData->fields.buffData;
            if ( data )
            {
              BattleBuffData__ResetCommandAssistBuffActiveFlg((BattleBuffData_o *)data, 0LL);
              data = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( data )
              {
                MasterData_WarQuestSelectionMaster = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)data,
                                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                data = BattleServantData__getTreasureDvcId(ServantData, !isCounterOverwriteTreasureDevice, 0LL);
                if ( MasterData_WarQuestSelectionMaster )
                {
                  data = (__int64)TreasureDvcLvMaster__GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    data,
                                    ServantData->fields.treasuredvcLevel,
                                    0LL);
                  v46 = (TreasureDvcLvEntity_o *)data;
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
                    v48 = isCounterOverwriteTreasureDevice ? 100 * task->fields.counterOc : data;
                    v29->fields.npPer = v48;
                    if ( v46 )
                    {
                      v117 = v40;
                      v118 = command;
                      v120 = ServantData;
                      v119 = isCounterOverwriteTreasureDevice;
                      DataValsList = TreasureDvcLvEntity__getDataValsList(v46, v48, 0LL);
                      v121 = v46;
                      v50 = TreasureDvcLvEntity__getDataValsList(v46, 100, 0LL);
                      data = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( data )
                      {
                        data = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)data,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_FunctionMaster___);
                        if ( DataValsList )
                        {
                          if ( (int)DataValsList->max_length < 1 )
                          {
LABEL_61:
                            v63 = (BattleCommandData_o *)sub_B0D974(BattleCommandData_TypeInfo, v51, v52);
                            BattleCommandData___ctor(v63, 0LL);
                            data = BattleServantData__getTreasureDvcId(v120, 1, 0LL);
                            if ( !v63 )
                              goto LABEL_109;
                            v63->fields.treasureDvc = data;
                            v66 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                                                 BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                                                 v64,
                                                                                 v65);
                            BattleBuffData_CheckIndividualitiesData___ctor(v66, v120, 0LL, v63, 0LL, 0LL, 0LL);
                            data = (__int64)BattleServantData__getNPSideEffect(v120, v66, 0LL);
                            if ( !data )
                              goto LABEL_109;
                            v67 = data;
                            funcId = v121->fields.funcId;
                            if ( *(_QWORD *)(data + 24) )
                            {
                              if ( !funcId )
                                goto LABEL_109;
                              data = sub_B0D8BC(int___TypeInfo, funcId->max_length);
                              if ( !v121->fields.funcId )
                                goto LABEL_109;
                              funcId = (System_Int32_array *)data;
                              System_Array__CopyTo(
                                (System_Array_o *)v121->fields.funcId,
                                (System_Array_o *)data,
                                0,
                                0LL);
                              v69 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
                              if ( (*(_BYTE *)(v69 + 306) & 1) == 0 )
                                sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
                              v70 = **(_QWORD **)(v69 + 192);
                              if ( (*(_BYTE *)(v70 + 306) & 1) == 0 )
                                sub_AA65A4(v70);
                              data = **(_QWORD **)(v70 + 184);
                              if ( !data )
                                goto LABEL_109;
                              data = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)data,
                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
                              v71 = *(_DWORD *)(v67 + 24);
                              if ( v71 >= 1 )
                              {
                                v72 = (SkillLvMaster_o *)data;
                                v73 = 0LL;
                                v122 = v67 + 32;
                                while ( (unsigned int)v73 < v71 )
                                {
                                  v74 = v67;
                                  v75 = *(_QWORD *)(v122 + 8 * v73);
                                  if ( !v75 )
                                    goto LABEL_109;
                                  v76 = *(_DWORD **)(v75 + 104);
                                  if ( !v76 )
                                    goto LABEL_109;
                                  if ( v76[6] < 2u )
                                    break;
                                  if ( !v72 )
                                    goto LABEL_109;
                                  data = (__int64)SkillLvMaster__GetEntity(v72, v76[8], v76[9], 0LL);
                                  if ( !data )
                                    goto LABEL_109;
                                  v77 = data;
                                  data = (__int64)SkillLvEntity__getDataValsList((SkillLvEntity_o *)data, 0LL);
                                  v84 = *(_QWORD *)(v77 + 32);
                                  if ( !v84 )
                                    goto LABEL_109;
                                  if ( !*(_DWORD *)(v84 + 24) )
                                    break;
                                  if ( !funcId )
                                    goto LABEL_109;
                                  v85 = *(int *)(v75 + 28);
                                  if ( (unsigned int)v85 >= funcId->max_length )
                                    break;
                                  funcId->m_Items[v85 + 1] = *(_DWORD *)(v84 + 32);
                                  if ( !data )
                                    goto LABEL_109;
                                  if ( !*(_DWORD *)(data + 24) )
                                    break;
                                  v86 = *(System_Int32_array ***)(data + 32);
                                  if ( v86 )
                                  {
                                    data = sub_B0D964(*(_QWORD *)(data + 32), DataValsList->obj.klass->_1.element_class);
                                    if ( !data )
                                    {
                                      v116 = sub_B0D99C(0LL);
                                      sub_B0D948(v116, 0LL);
                                    }
                                  }
                                  if ( (unsigned int)v85 >= DataValsList->max_length )
                                    break;
                                  v87 = &DataValsList->obj.klass + v85;
                                  v87[4] = (Il2CppClass *)v86;
                                  sub_B0D840(
                                    (BattleServantConfConponent_o *)(v87 + 4),
                                    v86,
                                    v78,
                                    v79,
                                    v80,
                                    v81,
                                    v82,
                                    v83);
                                  v71 = *(_DWORD *)(v74 + 24);
                                  ++v73;
                                  v67 = v74;
                                  if ( (int)v73 >= v71 )
                                    goto LABEL_89;
                                }
LABEL_110:
                                v115 = sub_B0D9A8(data);
                                sub_B0D948(v115, 0LL);
                              }
                            }
LABEL_89:
                            TreasureDvcId = BattleServantData__getTreasureDvcId(v120, 1, 0LL);
                            v29->fields.treasureDvcId = TreasureDvcId;
                            v89 = TreasureDvcId;
                            argument = (BattleLogicFunction_FunctionArgument_o *)sub_B0D974(
                                                                                   BattleLogicFunction_FunctionArgument_TypeInfo,
                                                                                   v90,
                                                                                   v91);
                            BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
                            if ( v119 )
                            {
                              v29->fields.isCounter = task->fields.isCounter;
                              motionMessage = (System_Int32_array **)task->fields.motionMessage;
                              v29->fields.motionMessage = (struct System_String_o *)motionMessage;
                              sub_B0D840(
                                (BattleServantConfConponent_o *)&v29->fields.motionMessage,
                                motionMessage,
                                v93,
                                v94,
                                v95,
                                v96,
                                v97,
                                v98);
                              v29->fields._MessageType_k__BackingField = task->fields.messageType;
                            }
                            else
                            {
                              v100 = this->fields.data;
                              if ( !v100 )
                                goto LABEL_109;
                              perf = v100->fields.perf;
                              if ( !perf )
                                goto LABEL_109;
                              if ( !v118 )
                                goto LABEL_109;
                              data = (__int64)perf->fields.commandPerf;
                              if ( !data )
                                goto LABEL_109;
                              BattlePerformanceCommandCard__UpdateRemainingCardBuff(
                                (BattlePerformanceCommandCard_o *)data,
                                v118->fields.actionIndex,
                                0LL);
                              v104 = (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *)sub_B0D974(BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo, v102, v103);
                              BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument___ctor(v104, 0LL);
                              if ( !argument )
                                goto LABEL_109;
                              BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
                                argument,
                                (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v104,
                                0LL);
                            }
                            data = (__int64)this->fields.logicfunction;
                            if ( data )
                            {
                              v43 = BattleLogicFunction__procList(
                                      (BattleLogicFunction_o *)data,
                                      v29,
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
                              BattleServantData__checkRegainNPUsedNoble(v120, 0LL);
                              data = (__int64)v120->fields.buffData;
                              if ( data )
                              {
                                data = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
                                if ( !v119 )
                                {
                                  v120->fields.tmpNp = v120->fields.np;
                                  BattleServantData__changeNp(v120, 0, 0, 0LL);
                                }
                                if ( v43 )
                                {
                                  v43->fields.targetId = v117;
                                  BattleActionData__setTypeTA(v43, 0LL);
                                  BattleActionData__setCommand(v43, v118, 0LL);
                                  v43->fields.motionId = BattleServantData__getTreasureDvcMotionId(v120, 0LL);
                                  data = (__int64)this->fields.logic;
                                  if ( data )
                                  {
                                    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0LL);
                                    v43->fields.prevattackme = 0;
                                    v43->fields.isForcedSpeedOne = task->fields.isForcedSpeedOne;
                                    data = (__int64)this->fields.data;
                                    if ( data )
                                    {
                                      BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0LL);
                                      logic = this->fields.logic;
                                      if ( logic )
                                      {
                                        v108 = logic->fields.perf;
                                        v109 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, v105, v106);
                                        BattleActionData___ctor(v109, 0LL);
                                        v112 = this->fields.logic;
                                        if ( v112 )
                                        {
                                          v113 = v112->fields.perf;
                                          v114 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)sub_B0D974(BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo, v110, v111);
                                          BattleActionWaitCond_UntilSideEffectInvisible___ctor(v114, v113, 0LL);
                                          if ( v109 )
                                          {
                                            data = (__int64)BattleActionData__SetWaitCond(
                                                              v109,
                                                              (BattleActionWaitCond_Base_o *)v114,
                                                              0LL);
                                            if ( v108 )
                                            {
                                              BattlePerformance__addActionData_18166504(
                                                v108,
                                                (BattleActionData_o *)data,
                                                0LL);
                                              v43->fields.treasureDvcId = v89;
                                              BattleActionData__SetFuncTargetAllDead(v43, this->fields.data, 0LL);
                                              return v43;
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
                            v53 = (DataMasterBase_WarMaster__WarEntity__int__o *)data;
                            v54 = 0;
                            while ( 1 )
                            {
                              v55 = v121->fields.funcId;
                              if ( !v55 )
                                break;
                              if ( v54 >= v55->max_length )
                                goto LABEL_110;
                              if ( !v53 )
                                break;
                              data = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                v53,
                                                v55->m_Items[v54 + 1],
                                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
                              if ( v54 >= DataValsList->max_length )
                                goto LABEL_110;
                              v56 = &DataValsList->obj.klass + (int)v54;
                              v57 = data;
                              v59 = (__int64)v56[4];
                              v58 = (__int64 *)(v56 + 4);
                              data = v59;
                              if ( !v57 )
                                break;
                              if ( !data )
                                break;
                              DataVals__SetTempType(
                                (DataVals_o *)data,
                                (FunctionMaster_o *)v53,
                                *(_DWORD *)(v57 + 24),
                                0LL);
                              if ( !v50 )
                                break;
                              if ( v54 >= v50->max_length )
                                goto LABEL_110;
                              v60 = &v50->obj.klass + (int)v54;
                              v62 = (__int64)v60[4];
                              v61 = (DataVals_o **)(v60 + 4);
                              data = v62;
                              if ( !v62 )
                                break;
                              DataVals__SetTempType(
                                (DataVals_o *)data,
                                (FunctionMaster_o *)v53,
                                *(_DWORD *)(v57 + 24),
                                0LL);
                              if ( v54 >= DataValsList->max_length || v54 >= v50->max_length )
                                goto LABEL_110;
                              data = *v58;
                              if ( !*v58 )
                                break;
                              data = DataVals__CheckOverCharge((DataVals_o *)data, *v61, 0LL);
                              if ( (data & 1) != 0 )
                              {
                                if ( v54 >= DataValsList->max_length )
                                  goto LABEL_110;
                                data = *v58;
                                if ( !*v58 )
                                  break;
                                DataVals__SetOverCharge((DataVals_o *)data, 1, 0LL);
                              }
                              if ( v54 >= DataValsList->max_length || v54 >= v50->max_length )
                                goto LABEL_110;
                              if ( !*v61 )
                                break;
                              data = *v58;
                              if ( !*v58 )
                                break;
                              DataVals__SetDependOverChargeFlag(
                                (DataVals_o *)data,
                                (*v61)->fields.dependDataValsList,
                                0LL);
                              if ( (signed int)++v54 >= (signed int)DataValsList->max_length )
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
            v41 = this->fields.logic;
            actorId = v29->fields.actorId;
            data = (__int64)BattlePerformance_TypeInfo;
            if ( (BYTE3(BattlePerformance_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattlePerformance_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
            }
            if ( v41 )
            {
              BattleLogic__addBackStepActionData(
                v41,
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
    sub_B0D97C(data);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  BattleServantData_o *EnemyServantData; // x0
  unsigned int v14; // w20
  struct System_Int32_array *e_entryid; // x8
  int32_t v16; // w1
  __int64 v17; // x1
  __int64 v18; // x2
  BattleServantData_o *v19; // x23
  __int64 v20; // x22
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x3
  System_Int32_array **FieldPlayerServantIDList; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  BattleCommandData_o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  BattleComboData_o *v35; // x24
  const MethodInfo *v36; // x4
  __int64 v38; // x0

  if ( (byte_42176FE & 1) == 0 )
  {
    sub_B0D8A4(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_B0D8A4(&BattleCommandData_TypeInfo, v6);
    sub_B0D8A4(&BattleLogicTask_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_42176FE = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 16 )
    v14 = 2;
  else
    v14 = ltype == 15;
  if ( !data )
    goto LABEL_18;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_18;
  if ( v14 >= e_entryid->max_length )
  {
    v38 = sub_B0D9A8(EnemyServantData);
    sub_B0D948(v38, 0LL);
  }
  v16 = e_entryid->m_Items[v14 + 1];
  if ( v16 < 1 )
    goto LABEL_16;
  EnemyServantData = BattleData__getEnemyServantData(data, v16, 0LL);
  if ( !EnemyServantData )
    goto LABEL_18;
  v19 = EnemyServantData;
  if ( !EnemyServantData->fields.reservationspecial )
  {
LABEL_16:
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_B0D97C(EnemyServantData);
  }
  v20 = sub_B0D974(BattleLogicTask_TypeInfo, v17, v18);
  BattleLogicTask___ctor((BattleLogicTask_o *)v20, v21);
  if ( !v20 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v20, 3, v19->fields.uniqueId, v22);
  FieldPlayerServantIDList = (System_Int32_array **)BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v20 + 32) = FieldPlayerServantIDList;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 32), FieldPlayerServantIDList, v24, v25, v26, v27, v28, v29);
  v32 = (BattleCommandData_o *)sub_B0D974(BattleCommandData_TypeInfo, v30, v31);
  BattleCommandData___ctor(v32, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v19, 0LL);
  if ( !v32 )
    goto LABEL_18;
  v32->fields._type = (int)EnemyServantData;
  v32->fields.svtlimit = BattleServantData__getDispLimitCount(v19, 1, 0LL);
  v32->fields.uniqueId = v19->fields.uniqueId;
  v32->fields.svtId = BattleServantData__getSvtId(v19, 0LL);
  v32->fields.treasureDvc = BattleServantData__getTreasureDvcId(v19, 1, 0LL);
  v35 = (BattleComboData_o *)sub_B0D974(BattleComboData_TypeInfo, v33, v34);
  BattleComboData___ctor(v35, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v20, v35, v32, v14, v36);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v19, 1, 0LL);
  *(_DWORD *)(v20 + 48) = 4;
  *(_DWORD *)(v20 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v20 + 88) = 1;
  if ( !v12 )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v12,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  BattleServantData_o *EnemyServantData; // x0
  unsigned int v14; // w20
  struct System_Int32_array *e_entryid; // x8
  int32_t v16; // w1
  BattleServantData_o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x23
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x3
  System_Int32_array **FieldPlayerServantIDList; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  BattleCommandData_o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  BattleComboData_o *v35; // x24
  const MethodInfo *v36; // x4
  __int64 v38; // x0

  if ( (byte_42176FF & 1) == 0 )
  {
    sub_B0D8A4(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_B0D8A4(&BattleCommandData_TypeInfo, v6);
    sub_B0D8A4(&BattleLogicTask_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_42176FF = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 23 )
    v14 = 2;
  else
    v14 = ltype == 22;
  if ( !data )
    goto LABEL_18;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_18;
  if ( v14 >= e_entryid->max_length )
  {
    v38 = sub_B0D9A8(EnemyServantData);
    sub_B0D948(v38, 0LL);
  }
  v16 = e_entryid->m_Items[v14 + 1];
  if ( v16 < 1 )
    goto LABEL_16;
  EnemyServantData = BattleData__getEnemyServantData(data, v16, 0LL);
  if ( !EnemyServantData )
    goto LABEL_18;
  v17 = EnemyServantData;
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(EnemyServantData, 1, 0LL);
  if ( (int)EnemyServantData < 1 )
  {
LABEL_16:
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_B0D97C(EnemyServantData);
  }
  v20 = sub_B0D974(BattleLogicTask_TypeInfo, v18, v19);
  BattleLogicTask___ctor((BattleLogicTask_o *)v20, v21);
  if ( !v20 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v20, 3, v17->fields.uniqueId, v22);
  FieldPlayerServantIDList = (System_Int32_array **)BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v20 + 32) = FieldPlayerServantIDList;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 32), FieldPlayerServantIDList, v24, v25, v26, v27, v28, v29);
  v32 = (BattleCommandData_o *)sub_B0D974(BattleCommandData_TypeInfo, v30, v31);
  BattleCommandData___ctor(v32, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v17, 0LL);
  if ( !v32 )
    goto LABEL_18;
  v32->fields._type = (int)EnemyServantData;
  v32->fields.svtlimit = BattleServantData__getDispLimitCount(v17, 1, 0LL);
  v32->fields.uniqueId = v17->fields.uniqueId;
  v32->fields.svtId = BattleServantData__getSvtId(v17, 0LL);
  v32->fields.treasureDvc = BattleServantData__getTreasureDvcId(v17, 1, 0LL);
  v35 = (BattleComboData_o *)sub_B0D974(BattleComboData_TypeInfo, v33, v34);
  BattleComboData___ctor(v35, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v20, v35, v32, v14, v36);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v17, 1, 0LL);
  *(_DWORD *)(v20 + 48) = 4;
  *(_DWORD *)(v20 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v20 + 88) = 1;
  if ( !v12 )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v12,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  BattleServantData_o *PlayerServantData; // x0
  unsigned int v14; // w20
  struct System_Int32_array *p_entryid; // x8
  __int64 v16; // x1
  __int64 v17; // x2
  BattleServantData_o *v18; // x23
  __int64 v19; // x22
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x3
  System_Int32_array **FieldEnemyServantIDList; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  BattleCommandData_o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  BattleComboData_o *v34; // x24
  const MethodInfo *v35; // x4
  __int64 v37; // x0

  if ( (byte_42176FC & 1) == 0 )
  {
    sub_B0D8A4(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_B0D8A4(&BattleCommandData_TypeInfo, v6);
    sub_B0D8A4(&BattleLogicTask_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_42176FC = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 8 )
    v14 = 2;
  else
    v14 = ltype == 7;
  if ( !data )
    goto LABEL_17;
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_17;
  if ( v14 >= p_entryid->max_length )
  {
    v37 = sub_B0D9A8(PlayerServantData);
    sub_B0D948(v37, 0LL);
  }
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v14 + 1], 0LL);
  if ( !PlayerServantData || (v18 = PlayerServantData, !PlayerServantData->fields.reservationspecial) )
  {
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_17:
    sub_B0D97C(PlayerServantData);
  }
  v19 = sub_B0D974(BattleLogicTask_TypeInfo, v16, v17);
  BattleLogicTask___ctor((BattleLogicTask_o *)v19, v20);
  if ( !v19 )
    goto LABEL_17;
  BattleLogicTask__setActor((BattleLogicTask_o *)v19, 2, v18->fields.uniqueId, v21);
  FieldEnemyServantIDList = (System_Int32_array **)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  *(_QWORD *)(v19 + 32) = FieldEnemyServantIDList;
  sub_B0D840((BattleServantConfConponent_o *)(v19 + 32), FieldEnemyServantIDList, v23, v24, v25, v26, v27, v28);
  v31 = (BattleCommandData_o *)sub_B0D974(BattleCommandData_TypeInfo, v29, v30);
  BattleCommandData___ctor(v31, 0LL);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v18, 0LL);
  if ( !v31 )
    goto LABEL_17;
  v31->fields._type = (int)PlayerServantData;
  v31->fields.svtlimit = BattleServantData__getCommandDispLimitCount(v18, 0LL);
  v31->fields.uniqueId = v18->fields.uniqueId;
  v31->fields.svtId = BattleServantData__getSvtId(v18, 0LL);
  v31->fields.treasureDvc = BattleServantData__getTreasureDvcId(v18, 1, 0LL);
  v34 = (BattleComboData_o *)sub_B0D974(BattleComboData_TypeInfo, v32, v33);
  BattleComboData___ctor(v34, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v19, v34, v31, v14, v35);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v18, 1, 0LL);
  *(_DWORD *)(v19 + 48) = 4;
  *(_DWORD *)(v19 + 84) = (_DWORD)PlayerServantData;
  *(_DWORD *)(v19 + 88) = 1;
  if ( !v12 )
    goto LABEL_17;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v12,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  BattleLogicTarget_o *logictarget; // x0
  unsigned int v15; // w20
  struct System_Int32_array *p_entryid; // x8
  BattleServantData_o *PlayerServantData; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  BattleLogicTask_o *v20; // x22
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  BattleCommandData_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  BattleComboData_o *v29; // x24
  const MethodInfo *v30; // x4
  __int64 v32; // x0

  if ( (byte_42176FD & 1) == 0 )
  {
    sub_B0D8A4(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_B0D8A4(&BattleCommandData_TypeInfo, v7);
    sub_B0D8A4(&BattleLogicTask_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    byte_42176FD = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 6 )
  {
    v15 = 0;
    if ( !data )
      goto LABEL_18;
  }
  else if ( ltype == 7 )
  {
    v15 = 1;
    if ( !data )
      goto LABEL_18;
  }
  else
  {
    v15 = 2 * (ltype == 8);
    if ( !data )
      goto LABEL_18;
  }
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_18;
  if ( v15 >= p_entryid->max_length )
  {
    v32 = sub_B0D9A8(logictarget);
    sub_B0D948(v32, 0LL);
  }
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v15 + 1], 0LL);
  v20 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, v18, v19);
  BattleLogicTask___ctor(v20, v21);
  if ( !PlayerServantData )
    goto LABEL_18;
  if ( !v20 )
    goto LABEL_18;
  BattleLogicTask__setActor(v20, 2, PlayerServantData->fields.uniqueId, v22);
  logictarget = this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_18;
  BattleLogicTarget__getTargetBattleServantData(logictarget, v20, v23);
  v26 = (BattleCommandData_o *)sub_B0D974(BattleCommandData_TypeInfo, v24, v25);
  BattleCommandData___ctor(v26, 0LL);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcCardId(PlayerServantData, 0LL);
  if ( !v26 )
    goto LABEL_18;
  v26->fields._type = (int)logictarget;
  v26->fields.svtlimit = BattleServantData__getCommandDispLimitCount(PlayerServantData, 0LL);
  v26->fields.uniqueId = PlayerServantData->fields.uniqueId;
  v26->fields.svtId = BattleServantData__getSvtId(PlayerServantData, 0LL);
  v26->fields.treasureDvc = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL);
  v29 = (BattleComboData_o *)sub_B0D974(BattleComboData_TypeInfo, v27, v28);
  BattleComboData___ctor(v29, 0LL);
  BattleLogicTask__setActionCommand(v20, v29, v26, v15, v30);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL);
  v20->fields.actiontype = 4;
  v20->fields.treasureDvcId = (int)logictarget;
  v20->fields.tresureDvcLv = 1;
  if ( !v13 )
LABEL_18:
    sub_B0D97C(logictarget);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v13,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}