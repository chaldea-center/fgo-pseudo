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
    sub_B5D69C(this, task);
  }
  return result;
}


BattleActionData_o *__fastcall BattleLogicSpecial__createSpecialData(
        BattleLogicSpecial_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleLogicSpecial_o *v5; // x19
  BattleData_o *data; // x21
  const MethodInfo *v7; // x4
  BattleServantData_o *ServantData; // x22
  BattleActionData_o *v9; // x21
  BattleData_o *v10; // x22
  int32_t v11; // w20
  OverwriteTreasureDeviceData_o *OverwriteTdData_k__BackingField; // x0
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_42EBEC0 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_B5D5C4(
                                     &Method_System_Collections_Generic_List_int__ToArray__,
                                     (_DWORD)task,
                                     (_DWORD)method,
                                     v3);
    byte_42EBEC0 = 1;
  }
  baseActionData = 0LL;
  if ( !task )
    goto LABEL_15;
  data = v5->fields.data;
  this = (BattleLogicSpecial_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_15;
  ServantData = BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( task->fields._OverwriteTdData_k__BackingField )
    OverwriteTreasureDeviceData__Overwrite(task->fields._OverwriteTdData_k__BackingField, ServantData, 0LL);
  v9 = BattleLogicSpecial__createSpecialDataCommonFunction(v5, &baseActionData, task, 0, v7);
  if ( v9 )
  {
    v10 = v5->fields.data;
    this = (BattleLogicSpecial_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
    if ( v9->fields.funcTargetList )
    {
      v11 = (int)this;
      this = (BattleLogicSpecial_o *)System_Collections_Generic_List_int___ToArray(
                                       v9->fields.funcTargetList,
                                       (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( v10 )
      {
        BattleData__SetWasAttackTargetIdList(v10, v11, (System_Int32_array *)this, 0LL);
        goto LABEL_13;
      }
    }
LABEL_15:
    sub_B5D69C(this, task);
  }
  OverwriteTdData_k__BackingField = task->fields._OverwriteTdData_k__BackingField;
  if ( OverwriteTdData_k__BackingField )
    OverwriteTreasureDeviceData__Reset(OverwriteTdData_k__BackingField, ServantData, 0LL);
LABEL_13:
  this = (BattleLogicSpecial_o *)v5->fields.logic;
  if ( !this )
    goto LABEL_15;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)this, v9, baseActionData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicSpecial__createSpecialDataCommonFunction(
        BattleLogicSpecial_o *this,
        BattleActionData_o **baseActionData,
        BattleLogicTask_o *task,
        bool isCounterOverwriteTreasureDevice,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v7; // x21
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  __int64 data; // x0
  BattleData_o *v49; // x22
  BattleServantData_o *ServantData; // x26
  BattleActionData_o *v51; // x23
  BattleActionData_o *v52; // x24
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x4
  BattleCommandData_o *command; // x23
  int32_t v62; // w27
  BattleLogic_o *v63; // x19
  int32_t actorId; // w20
  BattleActionData_o *v65; // x21
  TreasureDvcLvMaster_o *MasterData_WarQuestSelectionMaster; // x21
  TreasureDvcLvEntity_o *v68; // x21
  int32_t ChainBonus; // w0
  DataVals_array *DataValsList; // x26
  DataVals_array *v71; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v72; // x28
  il2cpp_array_size_t v73; // w22
  struct System_Int32_array *v74; // x8
  Il2CppClass **v75; // x27
  __int64 v76; // x23
  __int64 *v77; // x27
  __int64 v78; // t1
  Il2CppClass **v79; // x25
  DataVals_o **v80; // x25
  __int64 v81; // t1
  BattleCommandData_o *v82; // x21
  BattleBuffData_CheckIndividualitiesData_o *v83; // x23
  __int64 v84; // x25
  System_Int32_array *funcId; // x28
  __int64 v86; // x23
  __int64 v87; // x23
  int v88; // w8
  SkillLvMaster_o *v89; // x27
  __int64 v90; // x22
  __int64 v91; // x21
  __int64 v92; // x25
  _DWORD *v93; // x8
  __int64 v94; // x23
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  __int64 v101; // x8
  __int64 v102; // x25
  System_Int32_array **v103; // x23
  Il2CppClass **v104; // x0
  int32_t TreasureDvcId; // w0
  int32_t v106; // w27
  BattleLogicFunction_FunctionArgument_o *argument; // x21
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_Int32_array **motionMessage; // x1
  struct BattleData_o *v115; // x8
  struct BattlePerformance_o *perf; // x8
  BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *v117; // x23
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *v119; // x20
  BattleActionData_o *v120; // x22
  struct BattleLogic_o *v121; // x8
  BattlePerformance_o *v122; // x24
  BattleActionWaitCond_UntilSideEffectInvisible_o *v123; // x23
  __int64 v124; // x0
  __int64 v125; // x0
  int32_t v126; // [xsp+3Ch] [xbp-74h]
  BattleCommandData_o *v127; // [xsp+40h] [xbp-70h]
  bool v128; // [xsp+4Ch] [xbp-64h]
  BattleServantData_o *v129; // [xsp+50h] [xbp-60h]
  TreasureDvcLvEntity_o *v130; // [xsp+58h] [xbp-58h]
  __int64 v131; // [xsp+58h] [xbp-58h]

  v7 = (BattleServantConfConponent_o *)baseActionData;
  if ( (byte_42EBEC1 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)baseActionData, (_DWORD)task, isCounterOverwriteTreasureDevice);
    sub_B5D5C4(&BattleCommandData_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&BattlePerformance_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_FunctionMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v27, v28, v29);
    sub_B5D5C4(&BattleLogicFunction_FunctionArgument_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&int___TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo, v45, v46, v47);
    byte_42EBEC1 = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_109;
  BattleData__ResetWasAttackTargetId((BattleData_o *)data, 0LL);
  if ( !task )
    goto LABEL_109;
  v49 = this->fields.data;
  data = BattleLogicTask__getActorId(task, (const MethodInfo *)baseActionData);
  if ( !v49 )
    goto LABEL_109;
  ServantData = BattleData__getServantData(v49, data, 0LL);
  v51 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v51, 0LL);
  if ( !v51 )
    goto LABEL_109;
  v52 = BattleActionData__AddDisplayTriggerIntervalBuff(v51, task, 0LL);
  v7->klass = (BattleServantConfConponent_c *)v52;
  sub_B5D560(v7, (System_Int32_array **)v52, v53, v54, v55, v56, v57, v58);
  data = BattleLogicTask__getActorId(task, v59);
  if ( !v52 )
    goto LABEL_109;
  v52->fields.actorId = data;
  data = (__int64)this->fields.logictarget;
  if ( !data )
    goto LABEL_109;
  command = task->fields.command;
  data = BattleLogicTarget__getTargetBase((BattleLogicTarget_o *)data, task->fields.targetIdlist, 0, 1, v60);
  v52->fields.targetId = data;
  if ( (int)data >= 1 )
  {
    baseActionData = (BattleActionData_o **)this->fields.data;
    if ( baseActionData )
    {
      if ( ((_BYTE)baseActionData[34] & 1) != 0 || *((_BYTE *)baseActionData + 273) )
        return 0LL;
      if ( ServantData )
      {
        v62 = data;
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
              data = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( data )
              {
                MasterData_WarQuestSelectionMaster = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)data,
                                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                data = BattleServantData__getTreasureDvcId(ServantData, !isCounterOverwriteTreasureDevice, 0LL);
                if ( MasterData_WarQuestSelectionMaster )
                {
                  data = (__int64)TreasureDvcLvMaster__GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    data,
                                    ServantData->fields.treasuredvcLevel,
                                    0LL);
                  v68 = (TreasureDvcLvEntity_o *)data;
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
                    v52->fields.npPer = (int)baseActionData;
                    if ( v68 )
                    {
                      v126 = v62;
                      v127 = command;
                      v129 = ServantData;
                      v128 = isCounterOverwriteTreasureDevice;
                      DataValsList = TreasureDvcLvEntity__getDataValsList(v68, (int32_t)baseActionData, 0LL);
                      v130 = v68;
                      v71 = TreasureDvcLvEntity__getDataValsList(v68, 100, 0LL);
                      data = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( data )
                      {
                        data = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)data,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FunctionMaster___);
                        if ( DataValsList )
                        {
                          if ( (int)DataValsList->max_length < 1 )
                          {
LABEL_61:
                            v82 = (BattleCommandData_o *)sub_B5D694(BattleCommandData_TypeInfo);
                            BattleCommandData___ctor(v82, 0LL);
                            data = BattleServantData__getTreasureDvcId(v129, 1, 0LL);
                            if ( !v82 )
                              goto LABEL_109;
                            v82->fields.treasureDvc = data;
                            v83 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B5D694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
                            BattleBuffData_CheckIndividualitiesData___ctor(v83, v129, 0LL, v82, 0LL, 0LL, 0LL);
                            data = (__int64)BattleServantData__getNPSideEffect(v129, v83, 0LL);
                            if ( !data )
                              goto LABEL_109;
                            v84 = data;
                            funcId = v130->fields.funcId;
                            if ( *(_QWORD *)(data + 24) )
                            {
                              if ( !funcId )
                                goto LABEL_109;
                              data = sub_B5D5DC(int___TypeInfo, funcId->max_length);
                              if ( !v130->fields.funcId )
                                goto LABEL_109;
                              funcId = (System_Int32_array *)data;
                              System_Array__CopyTo(
                                (System_Array_o *)v130->fields.funcId,
                                (System_Array_o *)data,
                                0,
                                0LL);
                              v86 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
                              if ( (*(_BYTE *)(v86 + 306) & 1) == 0 )
                                sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
                              v87 = **(_QWORD **)(v86 + 192);
                              if ( (*(_BYTE *)(v87 + 306) & 1) == 0 )
                                sub_AF52C4(v87);
                              data = **(_QWORD **)(v87 + 184);
                              if ( !data )
                                goto LABEL_109;
                              data = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)data,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
                              v88 = *(_DWORD *)(v84 + 24);
                              if ( v88 >= 1 )
                              {
                                v89 = (SkillLvMaster_o *)data;
                                v90 = 0LL;
                                v131 = v84 + 32;
                                while ( (unsigned int)v90 < v88 )
                                {
                                  v91 = v84;
                                  v92 = *(_QWORD *)(v131 + 8 * v90);
                                  if ( !v92 )
                                    goto LABEL_109;
                                  v93 = *(_DWORD **)(v92 + 104);
                                  if ( !v93 )
                                    goto LABEL_109;
                                  if ( v93[6] < 2u )
                                    break;
                                  if ( !v89 )
                                    goto LABEL_109;
                                  data = (__int64)SkillLvMaster__GetEntity(v89, v93[8], v93[9], 0LL);
                                  if ( !data )
                                    goto LABEL_109;
                                  v94 = data;
                                  data = (__int64)SkillLvEntity__getDataValsList((SkillLvEntity_o *)data, 0LL);
                                  v101 = *(_QWORD *)(v94 + 32);
                                  if ( !v101 )
                                    goto LABEL_109;
                                  if ( !*(_DWORD *)(v101 + 24) )
                                    break;
                                  if ( !funcId )
                                    goto LABEL_109;
                                  v102 = *(int *)(v92 + 28);
                                  if ( (unsigned int)v102 >= funcId->max_length )
                                    break;
                                  funcId->m_Items[v102 + 1] = *(_DWORD *)(v101 + 32);
                                  if ( !data )
                                    goto LABEL_109;
                                  if ( !*(_DWORD *)(data + 24) )
                                    break;
                                  v103 = *(System_Int32_array ***)(data + 32);
                                  if ( v103 )
                                  {
                                    data = sub_B5D684(*(_QWORD *)(data + 32), DataValsList->obj.klass->_1.element_class);
                                    if ( !data )
                                    {
                                      v125 = sub_B5D6BC(0LL);
                                      sub_B5D668(v125, 0LL);
                                    }
                                  }
                                  if ( (unsigned int)v102 >= DataValsList->max_length )
                                    break;
                                  v104 = &DataValsList->obj.klass + v102;
                                  v104[4] = (Il2CppClass *)v103;
                                  sub_B5D560(
                                    (BattleServantConfConponent_o *)(v104 + 4),
                                    v103,
                                    v95,
                                    v96,
                                    v97,
                                    v98,
                                    v99,
                                    v100);
                                  v88 = *(_DWORD *)(v91 + 24);
                                  ++v90;
                                  v84 = v91;
                                  if ( (int)v90 >= v88 )
                                    goto LABEL_89;
                                }
LABEL_110:
                                v124 = sub_B5D6C8(data);
                                sub_B5D668(v124, 0LL);
                              }
                            }
LABEL_89:
                            TreasureDvcId = BattleServantData__getTreasureDvcId(v129, 1, 0LL);
                            v52->fields.treasureDvcId = TreasureDvcId;
                            v106 = TreasureDvcId;
                            argument = (BattleLogicFunction_FunctionArgument_o *)sub_B5D694(BattleLogicFunction_FunctionArgument_TypeInfo);
                            BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
                            if ( v128 )
                            {
                              v52->fields.isCounter = task->fields.isCounter;
                              motionMessage = (System_Int32_array **)task->fields.motionMessage;
                              v52->fields.motionMessage = (struct System_String_o *)motionMessage;
                              sub_B5D560(
                                (BattleServantConfConponent_o *)&v52->fields.motionMessage,
                                motionMessage,
                                v108,
                                v109,
                                v110,
                                v111,
                                v112,
                                v113);
                              v52->fields._MessageType_k__BackingField = task->fields.messageType;
                            }
                            else
                            {
                              v115 = this->fields.data;
                              if ( !v115 )
                                goto LABEL_109;
                              perf = v115->fields.perf;
                              if ( !perf )
                                goto LABEL_109;
                              if ( !v127 )
                                goto LABEL_109;
                              data = (__int64)perf->fields.commandPerf;
                              if ( !data )
                                goto LABEL_109;
                              BattlePerformanceCommandCard__UpdateRemainingCardBuff(
                                (BattlePerformanceCommandCard_o *)data,
                                v127->fields.actionIndex,
                                0LL);
                              v117 = (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *)sub_B5D694(BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
                              BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument___ctor(v117, 0LL);
                              if ( !argument )
                                goto LABEL_109;
                              BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
                                argument,
                                (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v117,
                                0LL);
                            }
                            data = (__int64)this->fields.logicfunction;
                            if ( data )
                            {
                              v65 = BattleLogicFunction__procList(
                                      (BattleLogicFunction_o *)data,
                                      v52,
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
                              BattleServantData__checkRegainNPUsedNoble(v129, 0LL);
                              data = (__int64)v129->fields.buffData;
                              if ( data )
                              {
                                data = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
                                if ( !v128 )
                                {
                                  v129->fields.tmpNp = v129->fields.np;
                                  BattleServantData__changeNp(v129, 0, 0, 0LL);
                                }
                                if ( v65 )
                                {
                                  v65->fields.targetId = v126;
                                  BattleActionData__setTypeTA(v65, 0LL);
                                  BattleActionData__setCommand(v65, v127, 0LL);
                                  v65->fields.motionId = BattleServantData__getTreasureDvcMotionId(v129, 0LL);
                                  data = (__int64)this->fields.logic;
                                  if ( data )
                                  {
                                    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0LL);
                                    v65->fields.prevattackme = 0;
                                    v65->fields.isForcedSpeedOne = task->fields.isForcedSpeedOne;
                                    data = (__int64)this->fields.data;
                                    if ( data )
                                    {
                                      BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0LL);
                                      logic = this->fields.logic;
                                      if ( logic )
                                      {
                                        v119 = logic->fields.perf;
                                        v120 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
                                        BattleActionData___ctor(v120, 0LL);
                                        v121 = this->fields.logic;
                                        if ( v121 )
                                        {
                                          v122 = v121->fields.perf;
                                          v123 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)sub_B5D694(BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
                                          BattleActionWaitCond_UntilSideEffectInvisible___ctor(v123, v122, 0LL);
                                          if ( v120 )
                                          {
                                            data = (__int64)BattleActionData__SetWaitCond(
                                                              v120,
                                                              (BattleActionWaitCond_Base_o *)v123,
                                                              0LL);
                                            if ( v119 )
                                            {
                                              BattlePerformance__addActionData_18561148(
                                                v119,
                                                (BattleActionData_o *)data,
                                                0LL);
                                              v65->fields.treasureDvcId = v106;
                                              BattleActionData__SetFuncTargetAllDead(v65, this->fields.data, 0LL);
                                              return v65;
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
                            v72 = (DataMasterBase_WarMaster__WarEntity__int__o *)data;
                            v73 = 0;
                            while ( 1 )
                            {
                              v74 = v130->fields.funcId;
                              if ( !v74 )
                                break;
                              if ( v73 >= v74->max_length )
                                goto LABEL_110;
                              if ( !v72 )
                                break;
                              data = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                v72,
                                                v74->m_Items[v73 + 1],
                                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
                              if ( v73 >= DataValsList->max_length )
                                goto LABEL_110;
                              v75 = &DataValsList->obj.klass + (int)v73;
                              v76 = data;
                              v78 = (__int64)v75[4];
                              v77 = (__int64 *)(v75 + 4);
                              data = v78;
                              if ( !v76 )
                                break;
                              if ( !data )
                                break;
                              DataVals__SetTempType(
                                (DataVals_o *)data,
                                (FunctionMaster_o *)v72,
                                *(_DWORD *)(v76 + 24),
                                0LL);
                              if ( !v71 )
                                break;
                              if ( v73 >= v71->max_length )
                                goto LABEL_110;
                              v79 = &v71->obj.klass + (int)v73;
                              v81 = (__int64)v79[4];
                              v80 = (DataVals_o **)(v79 + 4);
                              data = v81;
                              if ( !v81 )
                                break;
                              DataVals__SetTempType(
                                (DataVals_o *)data,
                                (FunctionMaster_o *)v72,
                                *(_DWORD *)(v76 + 24),
                                0LL);
                              if ( v73 >= DataValsList->max_length || v73 >= v71->max_length )
                                goto LABEL_110;
                              data = *v77;
                              if ( !*v77 )
                                break;
                              data = DataVals__CheckOverCharge((DataVals_o *)data, *v80, 0LL);
                              if ( (data & 1) != 0 )
                              {
                                if ( v73 >= DataValsList->max_length )
                                  goto LABEL_110;
                                data = *v77;
                                if ( !*v77 )
                                  break;
                                DataVals__SetOverCharge((DataVals_o *)data, 1, 0LL);
                              }
                              if ( v73 >= DataValsList->max_length || v73 >= v71->max_length )
                                goto LABEL_110;
                              if ( !*v80 )
                                break;
                              data = *v77;
                              if ( !*v77 )
                                break;
                              DataVals__SetDependOverChargeFlag(
                                (DataVals_o *)data,
                                (*v80)->fields.dependDataValsList,
                                0LL);
                              if ( (signed int)++v73 >= (signed int)DataValsList->max_length )
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
            v63 = this->fields.logic;
            actorId = v52->fields.actorId;
            data = (__int64)BattlePerformance_TypeInfo;
            if ( (BYTE3(BattlePerformance_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattlePerformance_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
            }
            if ( v63 )
            {
              BattleLogic__addBackStepActionData(
                v63,
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
    sub_B5D69C(data, baseActionData);
  }
  return 0LL;
}


BattleLogicTask_array *__fastcall BattleLogicSpecial__taskEnemyTresureDvc(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x19
  BattleServantData_o *EnemyServantData; // x0
  __int64 v26; // x1
  unsigned int v27; // w20
  struct System_Int32_array *e_entryid; // x8
  BattleServantData_o *v29; // x23
  __int64 v30; // x22
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x3
  System_Int32_array **FieldPlayerServantIDList; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  BattleCommandData_o *v40; // x21
  BattleComboData_o *v41; // x24
  const MethodInfo *v42; // x4
  __int64 v44; // x0

  if ( (byte_42EBEBE & 1) == 0 )
  {
    sub_B5D5C4(&BattleComboData_TypeInfo, ltype, (_DWORD)data, method);
    sub_B5D5C4(&BattleCommandData_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&BattleLogicTask_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v21, v22, v23);
    byte_42EBEBE = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 16 )
    v27 = 2;
  else
    v27 = ltype == 15;
  if ( !data )
    goto LABEL_18;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_18;
  if ( v27 >= e_entryid->max_length )
  {
    v44 = sub_B5D6C8(EnemyServantData);
    sub_B5D668(v44, 0LL);
  }
  v26 = (unsigned int)e_entryid->m_Items[v27 + 1];
  if ( (int)v26 < 1 )
    goto LABEL_16;
  EnemyServantData = BattleData__getEnemyServantData(data, v26, 0LL);
  if ( !EnemyServantData )
    goto LABEL_18;
  v29 = EnemyServantData;
  if ( !EnemyServantData->fields.reservationspecial )
  {
LABEL_16:
    if ( v24 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_B5D69C(EnemyServantData, v26);
  }
  v30 = sub_B5D694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v30, v31);
  if ( !v30 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v30, 3, v29->fields.uniqueId, v32);
  FieldPlayerServantIDList = (System_Int32_array **)BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v30 + 32) = FieldPlayerServantIDList;
  sub_B5D560((BattleServantConfConponent_o *)(v30 + 32), FieldPlayerServantIDList, v34, v35, v36, v37, v38, v39);
  v40 = (BattleCommandData_o *)sub_B5D694(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v40, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v29, 0LL);
  if ( !v40 )
    goto LABEL_18;
  v40->fields._type = (int)EnemyServantData;
  v40->fields.svtlimit = BattleServantData__getDispLimitCount(v29, 1, 0LL);
  v40->fields.uniqueId = v29->fields.uniqueId;
  v40->fields.svtId = BattleServantData__getSvtId(v29, 0LL);
  v40->fields.treasureDvc = BattleServantData__getTreasureDvcId(v29, 1, 0LL);
  v41 = (BattleComboData_o *)sub_B5D694(BattleComboData_TypeInfo);
  BattleComboData___ctor(v41, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v30, v41, v40, v27, v42);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v29, 1, 0LL);
  *(_DWORD *)(v30 + 48) = 4;
  *(_DWORD *)(v30 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v30 + 88) = 1;
  if ( !v24 )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v24,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicSpecial__taskEnemyTresureDvcAlways(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x19
  BattleServantData_o *EnemyServantData; // x0
  __int64 v26; // x1
  unsigned int v27; // w20
  struct System_Int32_array *e_entryid; // x8
  BattleServantData_o *v29; // x22
  __int64 v30; // x23
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x3
  System_Int32_array **FieldPlayerServantIDList; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  BattleCommandData_o *v40; // x21
  BattleComboData_o *v41; // x24
  const MethodInfo *v42; // x4
  __int64 v44; // x0

  if ( (byte_42EBEBF & 1) == 0 )
  {
    sub_B5D5C4(&BattleComboData_TypeInfo, ltype, (_DWORD)data, method);
    sub_B5D5C4(&BattleCommandData_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&BattleLogicTask_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v21, v22, v23);
    byte_42EBEBF = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 23 )
    v27 = 2;
  else
    v27 = ltype == 22;
  if ( !data )
    goto LABEL_18;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_18;
  if ( v27 >= e_entryid->max_length )
  {
    v44 = sub_B5D6C8(EnemyServantData);
    sub_B5D668(v44, 0LL);
  }
  v26 = (unsigned int)e_entryid->m_Items[v27 + 1];
  if ( (int)v26 < 1 )
    goto LABEL_16;
  EnemyServantData = BattleData__getEnemyServantData(data, v26, 0LL);
  if ( !EnemyServantData )
    goto LABEL_18;
  v29 = EnemyServantData;
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(EnemyServantData, 1, 0LL);
  if ( (int)EnemyServantData < 1 )
  {
LABEL_16:
    if ( v24 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_B5D69C(EnemyServantData, v26);
  }
  v30 = sub_B5D694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v30, v31);
  if ( !v30 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v30, 3, v29->fields.uniqueId, v32);
  FieldPlayerServantIDList = (System_Int32_array **)BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v30 + 32) = FieldPlayerServantIDList;
  sub_B5D560((BattleServantConfConponent_o *)(v30 + 32), FieldPlayerServantIDList, v34, v35, v36, v37, v38, v39);
  v40 = (BattleCommandData_o *)sub_B5D694(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v40, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v29, 0LL);
  if ( !v40 )
    goto LABEL_18;
  v40->fields._type = (int)EnemyServantData;
  v40->fields.svtlimit = BattleServantData__getDispLimitCount(v29, 1, 0LL);
  v40->fields.uniqueId = v29->fields.uniqueId;
  v40->fields.svtId = BattleServantData__getSvtId(v29, 0LL);
  v40->fields.treasureDvc = BattleServantData__getTreasureDvcId(v29, 1, 0LL);
  v41 = (BattleComboData_o *)sub_B5D694(BattleComboData_TypeInfo);
  BattleComboData___ctor(v41, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v30, v41, v40, v27, v42);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v29, 1, 0LL);
  *(_DWORD *)(v30 + 48) = 4;
  *(_DWORD *)(v30 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v30 + 88) = 1;
  if ( !v24 )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v24,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicSpecial__taskTresureDvc(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x19
  BattleServantData_o *PlayerServantData; // x0
  __int64 v26; // x1
  unsigned int v27; // w20
  struct System_Int32_array *p_entryid; // x8
  BattleServantData_o *v29; // x23
  __int64 v30; // x22
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x3
  System_Int32_array **FieldEnemyServantIDList; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  BattleCommandData_o *v40; // x21
  BattleComboData_o *v41; // x24
  const MethodInfo *v42; // x4
  __int64 v44; // x0

  if ( (byte_42EBEBC & 1) == 0 )
  {
    sub_B5D5C4(&BattleComboData_TypeInfo, ltype, (_DWORD)data, method);
    sub_B5D5C4(&BattleCommandData_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&BattleLogicTask_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v21, v22, v23);
    byte_42EBEBC = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 8 )
    v27 = 2;
  else
    v27 = ltype == 7;
  if ( !data )
    goto LABEL_17;
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_17;
  if ( v27 >= p_entryid->max_length )
  {
    v44 = sub_B5D6C8(PlayerServantData);
    sub_B5D668(v44, 0LL);
  }
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v27 + 1], 0LL);
  if ( !PlayerServantData || (v29 = PlayerServantData, !PlayerServantData->fields.reservationspecial) )
  {
    if ( v24 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_17:
    sub_B5D69C(PlayerServantData, v26);
  }
  v30 = sub_B5D694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v30, v31);
  if ( !v30 )
    goto LABEL_17;
  BattleLogicTask__setActor((BattleLogicTask_o *)v30, 2, v29->fields.uniqueId, v32);
  FieldEnemyServantIDList = (System_Int32_array **)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  *(_QWORD *)(v30 + 32) = FieldEnemyServantIDList;
  sub_B5D560((BattleServantConfConponent_o *)(v30 + 32), FieldEnemyServantIDList, v34, v35, v36, v37, v38, v39);
  v40 = (BattleCommandData_o *)sub_B5D694(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v40, 0LL);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v29, 0LL);
  if ( !v40 )
    goto LABEL_17;
  v40->fields._type = (int)PlayerServantData;
  v40->fields.svtlimit = BattleServantData__getCommandDispLimitCount(v29, 0LL);
  v40->fields.uniqueId = v29->fields.uniqueId;
  v40->fields.svtId = BattleServantData__getSvtId(v29, 0LL);
  v40->fields.treasureDvc = BattleServantData__getTreasureDvcId(v29, 1, 0LL);
  v41 = (BattleComboData_o *)sub_B5D694(BattleComboData_TypeInfo);
  BattleComboData___ctor(v41, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v30, v41, v40, v27, v42);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v29, 1, 0LL);
  *(_DWORD *)(v30 + 48) = 4;
  *(_DWORD *)(v30 + 84) = (_DWORD)PlayerServantData;
  *(_DWORD *)(v30 + 88) = 1;
  if ( !v24 )
    goto LABEL_17;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v24,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicSpecial__taskTresureDvcAlways(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x19
  BattleLogicTarget_o *logictarget; // x0
  __int64 v27; // x1
  unsigned int v28; // w20
  struct System_Int32_array *p_entryid; // x8
  BattleServantData_o *PlayerServantData; // x23
  BattleLogicTask_o *v31; // x22
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x2
  BattleCommandData_o *v35; // x21
  BattleComboData_o *v36; // x24
  const MethodInfo *v37; // x4
  __int64 v39; // x0

  if ( (byte_42EBEBD & 1) == 0 )
  {
    sub_B5D5C4(&BattleComboData_TypeInfo, ltype, (_DWORD)data, method);
    sub_B5D5C4(&BattleCommandData_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&BattleLogicTask_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v22, v23, v24);
    byte_42EBEBD = 1;
  }
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 6 )
  {
    v28 = 0;
    if ( !data )
      goto LABEL_18;
  }
  else if ( ltype == 7 )
  {
    v28 = 1;
    if ( !data )
      goto LABEL_18;
  }
  else
  {
    v28 = 2 * (ltype == 8);
    if ( !data )
      goto LABEL_18;
  }
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_18;
  if ( v28 >= p_entryid->max_length )
  {
    v39 = sub_B5D6C8(logictarget);
    sub_B5D668(v39, 0LL);
  }
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v28 + 1], 0LL);
  v31 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v31, v32);
  if ( !PlayerServantData )
    goto LABEL_18;
  if ( !v31 )
    goto LABEL_18;
  BattleLogicTask__setActor(v31, 2, PlayerServantData->fields.uniqueId, v33);
  logictarget = this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_18;
  BattleLogicTarget__getTargetBattleServantData(logictarget, v31, v34);
  v35 = (BattleCommandData_o *)sub_B5D694(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v35, 0LL);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcCardId(PlayerServantData, 0LL);
  if ( !v35 )
    goto LABEL_18;
  v35->fields._type = (int)logictarget;
  v35->fields.svtlimit = BattleServantData__getCommandDispLimitCount(PlayerServantData, 0LL);
  v35->fields.uniqueId = PlayerServantData->fields.uniqueId;
  v35->fields.svtId = BattleServantData__getSvtId(PlayerServantData, 0LL);
  v35->fields.treasureDvc = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL);
  v36 = (BattleComboData_o *)sub_B5D694(BattleComboData_TypeInfo);
  BattleComboData___ctor(v36, 0LL);
  BattleLogicTask__setActionCommand(v31, v36, v35, v28, v37);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL);
  v31->fields.actiontype = 4;
  v31->fields.treasureDvcId = (int)logictarget;
  v31->fields.tresureDvcLv = 1;
  if ( !v25 )
LABEL_18:
    sub_B5D69C(logictarget, v27);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v25,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v25,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}