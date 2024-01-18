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
  const MethodInfo *v7; // x4
  BattleActionData_o *v8; // x20
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-18h] BYREF

  baseActionData = 0LL;
  if ( !task )
    goto LABEL_6;
  data = this->fields.data;
  v4 = this;
  this = (BattleLogicSpecial_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data
    || (this = (BattleLogicSpecial_o *)BattleData__getServantData(data, (int32_t)this, 0LL)) == 0LL
    || (v6 = (BattleServantData_o *)this,
        BattleServantData__OverwriteTreasureDevice(
          (BattleServantData_o *)this,
          task->fields.treasureDvcId,
          task->fields.tresureDvcLv,
          0LL),
        v8 = BattleLogicSpecial__createSpecialDataCommonFunction(v4, &baseActionData, task, 1, v7),
        BattleServantData__ResetOverwriteTreasureDevice(v6, 0LL),
        (this = (BattleLogicSpecial_o *)v4->fields.logic) == 0LL) )
  {
LABEL_6:
    sub_B2C434(this, task);
  }
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)this, v8, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSpecial__createSpecialData(
        BattleLogicSpecial_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  BattleActionData_o *ActorId; // x0
  const MethodInfo *v7; // x1
  BattleActionData_o *v8; // x20
  BattleData_o *data; // x22
  int32_t v10; // w21
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4189B57 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, task);
    byte_4189B57 = 1;
  }
  baseActionData = 0LL;
  ActorId = BattleLogicSpecial__createSpecialDataCommonFunction(this, &baseActionData, task, 0, v3);
  v8 = ActorId;
  if ( ActorId )
  {
    if ( !task
      || (data = this->fields.data,
          ActorId = (BattleActionData_o *)BattleLogicTask__getActorId(task, v7),
          !v8->fields.funcTargetList)
      || (v10 = (int)ActorId,
          ActorId = (BattleActionData_o *)System_Collections_Generic_List_int___ToArray(
                                            v8->fields.funcTargetList,
                                            (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__),
          !data) )
    {
LABEL_10:
      sub_B2C434(ActorId, v7);
    }
    BattleData__SetWasAttackTargetIdList(data, v10, (System_Int32_array *)ActorId, 0LL);
  }
  ActorId = (BattleActionData_o *)this->fields.logic;
  if ( !ActorId )
    goto LABEL_10;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)ActorId, v8, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSpecial__createSpecialDataCommonFunction(
        BattleLogicSpecial_o *this,
        BattleActionData_o **baseActionData,
        BattleLogicTask_o *task,
        bool isCounterOverwriteTreasureDevice,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v7; // x21
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
  BattleData_o *v23; // x22
  BattleServantData_o *ServantData; // x26
  BattleActionData_o *v25; // x23
  BattleActionData_o *v26; // x24
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x4
  BattleCommandData_o *command; // x23
  int32_t v36; // w27
  BattleLogic_o *v37; // x19
  int32_t actorId; // w20
  BattleActionData_o *v39; // x21
  TreasureDvcLvMaster_o *MasterData_WarQuestSelectionMaster; // x21
  TreasureDvcLvEntity_o *v42; // x21
  int32_t ChainBonus; // w0
  DataVals_array *DataValsList; // x26
  DataVals_array *v45; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v46; // x28
  il2cpp_array_size_t v47; // w22
  struct System_Int32_array *v48; // x8
  Il2CppClass **v49; // x27
  __int64 v50; // x23
  __int64 *v51; // x27
  __int64 v52; // t1
  Il2CppClass **v53; // x25
  DataVals_o **v54; // x25
  __int64 v55; // t1
  BattleCommandData_o *v56; // x21
  BattleBuffData_CheckIndividualitiesData_o *v57; // x23
  __int64 v58; // x25
  System_Int32_array *funcId; // x28
  __int64 v60; // x23
  __int64 v61; // x23
  int v62; // w8
  SkillLvMaster_o *v63; // x27
  __int64 v64; // x22
  __int64 v65; // x21
  __int64 v66; // x25
  _DWORD *v67; // x8
  __int64 v68; // x23
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x8
  __int64 v76; // x25
  System_Int32_array **v77; // x23
  Il2CppClass **v78; // x0
  int32_t TreasureDvcId; // w0
  int32_t v80; // w27
  BattleLogicFunction_FunctionArgument_o *argument; // x21
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **motionMessage; // x1
  struct BattleData_o *v89; // x8
  struct BattlePerformance_o *perf; // x8
  BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *v91; // x23
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *v93; // x20
  BattleActionData_o *v94; // x22
  struct BattleLogic_o *v95; // x8
  BattlePerformance_o *v96; // x24
  BattleActionWaitCond_UntilSideEffectInvisible_o *v97; // x23
  __int64 v98; // x0
  __int64 v99; // x0
  int32_t v100; // [xsp+3Ch] [xbp-74h]
  BattleCommandData_o *v101; // [xsp+40h] [xbp-70h]
  bool v102; // [xsp+4Ch] [xbp-64h]
  BattleServantData_o *v103; // [xsp+50h] [xbp-60h]
  TreasureDvcLvEntity_o *v104; // [xsp+58h] [xbp-58h]
  __int64 v105; // [xsp+58h] [xbp-58h]

  v7 = (BattleServantConfConponent_o *)baseActionData;
  if ( (byte_4189B58 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, baseActionData);
    sub_B2C35C(&BattleCommandData_TypeInfo, v9);
    sub_B2C35C(&BattlePerformance_TypeInfo, v10);
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v14);
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v15);
    sub_B2C35C(&BattleLogicFunction_FunctionArgument_TypeInfo, v16);
    sub_B2C35C(&int___TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B2C35C(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo, v20);
    sub_B2C35C(&BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo, v21);
    byte_4189B58 = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_109;
  BattleData__ResetWasAttackTargetId((BattleData_o *)data, 0LL);
  if ( !task )
    goto LABEL_109;
  v23 = this->fields.data;
  data = BattleLogicTask__getActorId(task, (const MethodInfo *)baseActionData);
  if ( !v23 )
    goto LABEL_109;
  ServantData = BattleData__getServantData(v23, data, 0LL);
  v25 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v25, 0LL);
  if ( !v25 )
    goto LABEL_109;
  v26 = BattleActionData__AddDisplayTriggerIntervalBuff(v25, task, 0LL);
  v7->klass = (BattleServantConfConponent_c *)v26;
  sub_B2C2F8(v7, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
  data = BattleLogicTask__getActorId(task, v33);
  if ( !v26 )
    goto LABEL_109;
  v26->fields.actorId = data;
  data = (__int64)this->fields.logictarget;
  if ( !data )
    goto LABEL_109;
  command = task->fields.command;
  data = BattleLogicTarget__getTargetBase((BattleLogicTarget_o *)data, task->fields.targetIdlist, 0, 1, v34);
  v26->fields.targetId = data;
  if ( (int)data >= 1 )
  {
    baseActionData = (BattleActionData_o **)this->fields.data;
    if ( baseActionData )
    {
      if ( ((_BYTE)baseActionData[34] & 1) != 0 || *((_BYTE *)baseActionData + 273) )
        return 0LL;
      if ( ServantData )
      {
        v36 = data;
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
              data = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( data )
              {
                MasterData_WarQuestSelectionMaster = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)data,
                                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                data = BattleServantData__getTreasureDvcId(ServantData, !isCounterOverwriteTreasureDevice, 0LL);
                if ( MasterData_WarQuestSelectionMaster )
                {
                  data = (__int64)TreasureDvcLvMaster__GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    data,
                                    ServantData->fields.treasuredvcLevel,
                                    0LL);
                  v42 = (TreasureDvcLvEntity_o *)data;
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
                    v26->fields.npPer = (int)baseActionData;
                    if ( v42 )
                    {
                      v100 = v36;
                      v101 = command;
                      v103 = ServantData;
                      v102 = isCounterOverwriteTreasureDevice;
                      DataValsList = TreasureDvcLvEntity__getDataValsList(v42, (int32_t)baseActionData, 0LL);
                      v104 = v42;
                      v45 = TreasureDvcLvEntity__getDataValsList(v42, 100, 0LL);
                      data = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( data )
                      {
                        data = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)data,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionMaster___);
                        if ( DataValsList )
                        {
                          if ( (int)DataValsList->max_length < 1 )
                          {
LABEL_61:
                            v56 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
                            BattleCommandData___ctor(v56, 0LL);
                            data = BattleServantData__getTreasureDvcId(v103, 1, 0LL);
                            if ( !v56 )
                              goto LABEL_109;
                            v56->fields.treasureDvc = data;
                            v57 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
                            BattleBuffData_CheckIndividualitiesData___ctor(v57, v103, 0LL, v56, 0LL, 0LL, 0LL);
                            data = (__int64)BattleServantData__getNPSideEffect(v103, v57, 0LL);
                            if ( !data )
                              goto LABEL_109;
                            v58 = data;
                            funcId = v104->fields.funcId;
                            if ( *(_QWORD *)(data + 24) )
                            {
                              if ( !funcId )
                                goto LABEL_109;
                              data = sub_B2C374(int___TypeInfo, funcId->max_length);
                              if ( !v104->fields.funcId )
                                goto LABEL_109;
                              funcId = (System_Int32_array *)data;
                              System_Array__CopyTo(
                                (System_Array_o *)v104->fields.funcId,
                                (System_Array_o *)data,
                                0,
                                0LL);
                              v60 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
                              if ( (*(_BYTE *)(v60 + 306) & 1) == 0 )
                                sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
                              v61 = **(_QWORD **)(v60 + 192);
                              if ( (*(_BYTE *)(v61 + 306) & 1) == 0 )
                                sub_AC505C(v61);
                              data = **(_QWORD **)(v61 + 184);
                              if ( !data )
                                goto LABEL_109;
                              data = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)data,
                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
                              v62 = *(_DWORD *)(v58 + 24);
                              if ( v62 >= 1 )
                              {
                                v63 = (SkillLvMaster_o *)data;
                                v64 = 0LL;
                                v105 = v58 + 32;
                                while ( (unsigned int)v64 < v62 )
                                {
                                  v65 = v58;
                                  v66 = *(_QWORD *)(v105 + 8 * v64);
                                  if ( !v66 )
                                    goto LABEL_109;
                                  v67 = *(_DWORD **)(v66 + 104);
                                  if ( !v67 )
                                    goto LABEL_109;
                                  if ( v67[6] < 2u )
                                    break;
                                  if ( !v63 )
                                    goto LABEL_109;
                                  data = (__int64)SkillLvMaster__GetEntity(v63, v67[8], v67[9], 0LL);
                                  if ( !data )
                                    goto LABEL_109;
                                  v68 = data;
                                  data = (__int64)SkillLvEntity__getDataValsList((SkillLvEntity_o *)data, 0LL);
                                  v75 = *(_QWORD *)(v68 + 32);
                                  if ( !v75 )
                                    goto LABEL_109;
                                  if ( !*(_DWORD *)(v75 + 24) )
                                    break;
                                  if ( !funcId )
                                    goto LABEL_109;
                                  v76 = *(int *)(v66 + 28);
                                  if ( (unsigned int)v76 >= funcId->max_length )
                                    break;
                                  funcId->m_Items[v76 + 1] = *(_DWORD *)(v75 + 32);
                                  if ( !data )
                                    goto LABEL_109;
                                  if ( !*(_DWORD *)(data + 24) )
                                    break;
                                  v77 = *(System_Int32_array ***)(data + 32);
                                  if ( v77 )
                                  {
                                    data = sub_B2C41C(*(_QWORD *)(data + 32), DataValsList->obj.klass->_1.element_class);
                                    if ( !data )
                                    {
                                      v99 = sub_B2C454(0LL);
                                      sub_B2C400(v99, 0LL);
                                    }
                                  }
                                  if ( (unsigned int)v76 >= DataValsList->max_length )
                                    break;
                                  v78 = &DataValsList->obj.klass + v76;
                                  v78[4] = (Il2CppClass *)v77;
                                  sub_B2C2F8(
                                    (BattleServantConfConponent_o *)(v78 + 4),
                                    v77,
                                    v69,
                                    v70,
                                    v71,
                                    v72,
                                    v73,
                                    v74);
                                  v62 = *(_DWORD *)(v65 + 24);
                                  ++v64;
                                  v58 = v65;
                                  if ( (int)v64 >= v62 )
                                    goto LABEL_89;
                                }
LABEL_110:
                                v98 = sub_B2C460(data);
                                sub_B2C400(v98, 0LL);
                              }
                            }
LABEL_89:
                            TreasureDvcId = BattleServantData__getTreasureDvcId(v103, 1, 0LL);
                            v26->fields.treasureDvcId = TreasureDvcId;
                            v80 = TreasureDvcId;
                            argument = (BattleLogicFunction_FunctionArgument_o *)sub_B2C42C(BattleLogicFunction_FunctionArgument_TypeInfo);
                            BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
                            if ( v102 )
                            {
                              v26->fields.isCounter = task->fields.isCounter;
                              motionMessage = (System_Int32_array **)task->fields.motionMessage;
                              v26->fields.motionMessage = (struct System_String_o *)motionMessage;
                              sub_B2C2F8(
                                (BattleServantConfConponent_o *)&v26->fields.motionMessage,
                                motionMessage,
                                v82,
                                v83,
                                v84,
                                v85,
                                v86,
                                v87);
                              v26->fields._MessageType_k__BackingField = task->fields.messageType;
                            }
                            else
                            {
                              v89 = this->fields.data;
                              if ( !v89 )
                                goto LABEL_109;
                              perf = v89->fields.perf;
                              if ( !perf )
                                goto LABEL_109;
                              if ( !v101 )
                                goto LABEL_109;
                              data = (__int64)perf->fields.commandPerf;
                              if ( !data )
                                goto LABEL_109;
                              BattlePerformanceCommandCard__UpdateRemainingCardBuff(
                                (BattlePerformanceCommandCard_o *)data,
                                v101->fields.actionIndex,
                                0LL);
                              v91 = (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *)sub_B2C42C(BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
                              BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument___ctor(v91, 0LL);
                              if ( !argument )
                                goto LABEL_109;
                              BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
                                argument,
                                (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v91,
                                0LL);
                            }
                            data = (__int64)this->fields.logicfunction;
                            if ( data )
                            {
                              v39 = BattleLogicFunction__procList(
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
                              BattleServantData__checkRegainNPUsedNoble(v103, 0LL);
                              data = (__int64)v103->fields.buffData;
                              if ( data )
                              {
                                data = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
                                if ( !v102 )
                                {
                                  v103->fields.tmpNp = v103->fields.np;
                                  BattleServantData__changeNp(v103, 0, 0, 0LL);
                                }
                                if ( v39 )
                                {
                                  v39->fields.targetId = v100;
                                  BattleActionData__setTypeTA(v39, 0LL);
                                  BattleActionData__setCommand(v39, v101, 0LL);
                                  v39->fields.motionId = BattleServantData__getTreasureDvcMotionId(v103, 0LL);
                                  data = (__int64)this->fields.logic;
                                  if ( data )
                                  {
                                    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0LL);
                                    v39->fields.prevattackme = 0;
                                    v39->fields.isForcedSpeedOne = task->fields.isForcedSpeedOne;
                                    data = (__int64)this->fields.data;
                                    if ( data )
                                    {
                                      BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0LL);
                                      logic = this->fields.logic;
                                      if ( logic )
                                      {
                                        v93 = logic->fields.perf;
                                        v94 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
                                        BattleActionData___ctor(v94, 0LL);
                                        v95 = this->fields.logic;
                                        if ( v95 )
                                        {
                                          v96 = v95->fields.perf;
                                          v97 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)sub_B2C42C(BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
                                          BattleActionWaitCond_UntilSideEffectInvisible___ctor(v97, v96, 0LL);
                                          if ( v94 )
                                          {
                                            data = (__int64)BattleActionData__SetWaitCond(
                                                              v94,
                                                              (BattleActionWaitCond_Base_o *)v97,
                                                              0LL);
                                            if ( v93 )
                                            {
                                              BattlePerformance__addActionData_18594788(
                                                v93,
                                                (BattleActionData_o *)data,
                                                0LL);
                                              v39->fields.treasureDvcId = v80;
                                              BattleActionData__SetFuncTargetAllDead(v39, this->fields.data, 0LL);
                                              return v39;
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
                            v46 = (DataMasterBase_WarMaster__WarEntity__int__o *)data;
                            v47 = 0;
                            while ( 1 )
                            {
                              v48 = v104->fields.funcId;
                              if ( !v48 )
                                break;
                              if ( v47 >= v48->max_length )
                                goto LABEL_110;
                              if ( !v46 )
                                break;
                              data = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                v46,
                                                v48->m_Items[v47 + 1],
                                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
                              if ( v47 >= DataValsList->max_length )
                                goto LABEL_110;
                              v49 = &DataValsList->obj.klass + (int)v47;
                              v50 = data;
                              v52 = (__int64)v49[4];
                              v51 = (__int64 *)(v49 + 4);
                              data = v52;
                              if ( !v50 )
                                break;
                              if ( !data )
                                break;
                              DataVals__SetTempType(
                                (DataVals_o *)data,
                                (FunctionMaster_o *)v46,
                                *(_DWORD *)(v50 + 24),
                                0LL);
                              if ( !v45 )
                                break;
                              if ( v47 >= v45->max_length )
                                goto LABEL_110;
                              v53 = &v45->obj.klass + (int)v47;
                              v55 = (__int64)v53[4];
                              v54 = (DataVals_o **)(v53 + 4);
                              data = v55;
                              if ( !v55 )
                                break;
                              DataVals__SetTempType(
                                (DataVals_o *)data,
                                (FunctionMaster_o *)v46,
                                *(_DWORD *)(v50 + 24),
                                0LL);
                              if ( v47 >= DataValsList->max_length || v47 >= v45->max_length )
                                goto LABEL_110;
                              data = *v51;
                              if ( !*v51 )
                                break;
                              data = DataVals__CheckOverCharge((DataVals_o *)data, *v54, 0LL);
                              if ( (data & 1) != 0 )
                              {
                                if ( v47 >= DataValsList->max_length )
                                  goto LABEL_110;
                                data = *v51;
                                if ( !*v51 )
                                  break;
                                DataVals__SetOverCharge((DataVals_o *)data, 1, 0LL);
                              }
                              if ( v47 >= DataValsList->max_length || v47 >= v45->max_length )
                                goto LABEL_110;
                              if ( !*v54 )
                                break;
                              data = *v51;
                              if ( !*v51 )
                                break;
                              DataVals__SetDependOverChargeFlag(
                                (DataVals_o *)data,
                                (*v54)->fields.dependDataValsList,
                                0LL);
                              if ( (signed int)++v47 >= (signed int)DataValsList->max_length )
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
            v37 = this->fields.logic;
            actorId = v26->fields.actorId;
            data = (__int64)BattlePerformance_TypeInfo;
            if ( (BYTE3(BattlePerformance_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattlePerformance_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
            }
            if ( v37 )
            {
              BattleLogic__addBackStepActionData(
                v37,
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
    sub_B2C434(data, baseActionData);
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
  __int64 v14; // x1
  unsigned int v15; // w20
  struct System_Int32_array *e_entryid; // x8
  BattleServantData_o *v17; // x23
  __int64 v18; // x22
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x3
  System_Int32_array **FieldPlayerServantIDList; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  BattleCommandData_o *v28; // x21
  BattleComboData_o *v29; // x24
  const MethodInfo *v30; // x4
  __int64 v32; // x0

  if ( (byte_4189B55 & 1) == 0 )
  {
    sub_B2C35C(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_B2C35C(&BattleCommandData_TypeInfo, v6);
    sub_B2C35C(&BattleLogicTask_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_4189B55 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 16 )
    v15 = 2;
  else
    v15 = ltype == 15;
  if ( !data )
    goto LABEL_18;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_18;
  if ( v15 >= e_entryid->max_length )
  {
    v32 = sub_B2C460(EnemyServantData);
    sub_B2C400(v32, 0LL);
  }
  v14 = (unsigned int)e_entryid->m_Items[v15 + 1];
  if ( (int)v14 < 1 )
    goto LABEL_16;
  EnemyServantData = BattleData__getEnemyServantData(data, v14, 0LL);
  if ( !EnemyServantData )
    goto LABEL_18;
  v17 = EnemyServantData;
  if ( !EnemyServantData->fields.reservationspecial )
  {
LABEL_16:
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_B2C434(EnemyServantData, v14);
  }
  v18 = sub_B2C42C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v18, v19);
  if ( !v18 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v18, 3, v17->fields.uniqueId, v20);
  FieldPlayerServantIDList = (System_Int32_array **)BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v18 + 32) = FieldPlayerServantIDList;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 32), FieldPlayerServantIDList, v22, v23, v24, v25, v26, v27);
  v28 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v28, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v17, 0LL);
  if ( !v28 )
    goto LABEL_18;
  v28->fields._type = (int)EnemyServantData;
  v28->fields.svtlimit = BattleServantData__getDispLimitCount(v17, 1, 0LL);
  v28->fields.uniqueId = v17->fields.uniqueId;
  v28->fields.svtId = BattleServantData__getSvtId(v17, 0LL);
  v28->fields.treasureDvc = BattleServantData__getTreasureDvcId(v17, 1, 0LL);
  v29 = (BattleComboData_o *)sub_B2C42C(BattleComboData_TypeInfo);
  BattleComboData___ctor(v29, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v18, v29, v28, v15, v30);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v17, 1, 0LL);
  *(_DWORD *)(v18 + 48) = 4;
  *(_DWORD *)(v18 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v18 + 88) = 1;
  if ( !v12 )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v12,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v14; // x1
  unsigned int v15; // w20
  struct System_Int32_array *e_entryid; // x8
  BattleServantData_o *v17; // x22
  __int64 v18; // x23
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x3
  System_Int32_array **FieldPlayerServantIDList; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  BattleCommandData_o *v28; // x21
  BattleComboData_o *v29; // x24
  const MethodInfo *v30; // x4
  __int64 v32; // x0

  if ( (byte_4189B56 & 1) == 0 )
  {
    sub_B2C35C(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_B2C35C(&BattleCommandData_TypeInfo, v6);
    sub_B2C35C(&BattleLogicTask_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_4189B56 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 23 )
    v15 = 2;
  else
    v15 = ltype == 22;
  if ( !data )
    goto LABEL_18;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_18;
  if ( v15 >= e_entryid->max_length )
  {
    v32 = sub_B2C460(EnemyServantData);
    sub_B2C400(v32, 0LL);
  }
  v14 = (unsigned int)e_entryid->m_Items[v15 + 1];
  if ( (int)v14 < 1 )
    goto LABEL_16;
  EnemyServantData = BattleData__getEnemyServantData(data, v14, 0LL);
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
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_B2C434(EnemyServantData, v14);
  }
  v18 = sub_B2C42C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v18, v19);
  if ( !v18 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v18, 3, v17->fields.uniqueId, v20);
  FieldPlayerServantIDList = (System_Int32_array **)BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v18 + 32) = FieldPlayerServantIDList;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 32), FieldPlayerServantIDList, v22, v23, v24, v25, v26, v27);
  v28 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v28, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v17, 0LL);
  if ( !v28 )
    goto LABEL_18;
  v28->fields._type = (int)EnemyServantData;
  v28->fields.svtlimit = BattleServantData__getDispLimitCount(v17, 1, 0LL);
  v28->fields.uniqueId = v17->fields.uniqueId;
  v28->fields.svtId = BattleServantData__getSvtId(v17, 0LL);
  v28->fields.treasureDvc = BattleServantData__getTreasureDvcId(v17, 1, 0LL);
  v29 = (BattleComboData_o *)sub_B2C42C(BattleComboData_TypeInfo);
  BattleComboData___ctor(v29, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v18, v29, v28, v15, v30);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v17, 1, 0LL);
  *(_DWORD *)(v18 + 48) = 4;
  *(_DWORD *)(v18 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v18 + 88) = 1;
  if ( !v12 )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v12,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v14; // x1
  unsigned int v15; // w20
  struct System_Int32_array *p_entryid; // x8
  BattleServantData_o *v17; // x23
  __int64 v18; // x22
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x3
  System_Int32_array **FieldEnemyServantIDList; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  BattleCommandData_o *v28; // x21
  BattleComboData_o *v29; // x24
  const MethodInfo *v30; // x4
  __int64 v32; // x0

  if ( (byte_4189B53 & 1) == 0 )
  {
    sub_B2C35C(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_B2C35C(&BattleCommandData_TypeInfo, v6);
    sub_B2C35C(&BattleLogicTask_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_4189B53 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 8 )
    v15 = 2;
  else
    v15 = ltype == 7;
  if ( !data )
    goto LABEL_17;
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_17;
  if ( v15 >= p_entryid->max_length )
  {
    v32 = sub_B2C460(PlayerServantData);
    sub_B2C400(v32, 0LL);
  }
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v15 + 1], 0LL);
  if ( !PlayerServantData || (v17 = PlayerServantData, !PlayerServantData->fields.reservationspecial) )
  {
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_17:
    sub_B2C434(PlayerServantData, v14);
  }
  v18 = sub_B2C42C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v18, v19);
  if ( !v18 )
    goto LABEL_17;
  BattleLogicTask__setActor((BattleLogicTask_o *)v18, 2, v17->fields.uniqueId, v20);
  FieldEnemyServantIDList = (System_Int32_array **)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  *(_QWORD *)(v18 + 32) = FieldEnemyServantIDList;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 32), FieldEnemyServantIDList, v22, v23, v24, v25, v26, v27);
  v28 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v28, 0LL);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v17, 0LL);
  if ( !v28 )
    goto LABEL_17;
  v28->fields._type = (int)PlayerServantData;
  v28->fields.svtlimit = BattleServantData__getCommandDispLimitCount(v17, 0LL);
  v28->fields.uniqueId = v17->fields.uniqueId;
  v28->fields.svtId = BattleServantData__getSvtId(v17, 0LL);
  v28->fields.treasureDvc = BattleServantData__getTreasureDvcId(v17, 1, 0LL);
  v29 = (BattleComboData_o *)sub_B2C42C(BattleComboData_TypeInfo);
  BattleComboData___ctor(v29, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v18, v29, v28, v15, v30);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v17, 1, 0LL);
  *(_DWORD *)(v18 + 48) = 4;
  *(_DWORD *)(v18 + 84) = (_DWORD)PlayerServantData;
  *(_DWORD *)(v18 + 88) = 1;
  if ( !v12 )
    goto LABEL_17;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v12,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v15; // x1
  unsigned int v16; // w20
  struct System_Int32_array *p_entryid; // x8
  BattleServantData_o *PlayerServantData; // x23
  BattleLogicTask_o *v19; // x22
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2
  BattleCommandData_o *v23; // x21
  BattleComboData_o *v24; // x24
  const MethodInfo *v25; // x4
  __int64 v27; // x0

  if ( (byte_4189B54 & 1) == 0 )
  {
    sub_B2C35C(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_B2C35C(&BattleCommandData_TypeInfo, v7);
    sub_B2C35C(&BattleLogicTask_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    byte_4189B54 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 6 )
  {
    v16 = 0;
    if ( !data )
      goto LABEL_18;
  }
  else if ( ltype == 7 )
  {
    v16 = 1;
    if ( !data )
      goto LABEL_18;
  }
  else
  {
    v16 = 2 * (ltype == 8);
    if ( !data )
      goto LABEL_18;
  }
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_18;
  if ( v16 >= p_entryid->max_length )
  {
    v27 = sub_B2C460(logictarget);
    sub_B2C400(v27, 0LL);
  }
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v16 + 1], 0LL);
  v19 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v19, v20);
  if ( !PlayerServantData )
    goto LABEL_18;
  if ( !v19 )
    goto LABEL_18;
  BattleLogicTask__setActor(v19, 2, PlayerServantData->fields.uniqueId, v21);
  logictarget = this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_18;
  BattleLogicTarget__getTargetBattleServantData(logictarget, v19, v22);
  v23 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v23, 0LL);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcCardId(PlayerServantData, 0LL);
  if ( !v23 )
    goto LABEL_18;
  v23->fields._type = (int)logictarget;
  v23->fields.svtlimit = BattleServantData__getCommandDispLimitCount(PlayerServantData, 0LL);
  v23->fields.uniqueId = PlayerServantData->fields.uniqueId;
  v23->fields.svtId = BattleServantData__getSvtId(PlayerServantData, 0LL);
  v23->fields.treasureDvc = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL);
  v24 = (BattleComboData_o *)sub_B2C42C(BattleComboData_TypeInfo);
  BattleComboData___ctor(v24, 0LL);
  BattleLogicTask__setActionCommand(v19, v24, v23, v16, v25);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL);
  v19->fields.actiontype = 4;
  v19->fields.treasureDvcId = (int)logictarget;
  v19->fields.tresureDvcLv = 1;
  if ( !v13 )
LABEL_18:
    sub_B2C434(logictarget, v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v13,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}