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
      sub_1B00F30(this, task);
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[1];
    if ( !this )
LABEL_14:
      sub_1B00F28(this, task);
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
  if ( (byte_48E5345 & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, task);
    byte_48E5345 = 1;
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
                                         (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( data )
        {
          BattleData__SetWasAttackTargetIdList(data, v11, (System_Int32_array *)this, 0LL);
          goto LABEL_21;
        }
      }
LABEL_23:
      sub_1B00F28(this, task);
    }
LABEL_24:
    sub_1B00F30(this, task);
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
  ServantStatusBattleListViewItem_o *v7; // x24
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
  int32_t v27; // w2
  int32_t v28; // w3
  const MethodInfo *v29; // x4
  struct System_Int32_array *v30; // x8
  int v31; // w8
  BattleCommandData_o *command; // x24
  int32_t v33; // w25
  BattleLogic_o *v34; // x19
  int32_t actorId; // w20
  BattleActionData_o *v36; // x23
  Il2CppObject *MasterData_object; // x21
  TreasureDvcLvEntity_o *v39; // x21
  int32_t ChainBonus; // w0
  DataVals_array *DataValsList; // x26
  DataVals_array *v42; // x28
  TreasureDvcLvEntity_o *v43; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x29
  il2cpp_array_size_t v45; // w24
  struct System_Int32_array *v46; // x8
  Il2CppClass **v47; // x22
  __int64 v48; // x21
  __int64 *v49; // x22
  __int64 v50; // t1
  Il2CppClass **v51; // x27
  DataVals_o **v52; // x27
  __int64 v53; // t1
  BattleCommandData_o *v54; // x21
  BattleServantData_o *v55; // x22
  BattleBuffData_CheckIndividualitiesData_o *v56; // x28
  BattleCommandData_o *v57; // x24
  System_Int32_array *funcId; // x28
  __int64 v59; // x21
  __int64 v60; // x25
  __int64 v61; // x0
  __int64 v62; // x0
  int v63; // w8
  SkillLvMaster_o *v64; // x27
  __int64 v65; // x22
  __int64 v66; // x29
  _DWORD *v67; // x8
  __int64 v68; // x21
  int32_t v69; // w2
  int32_t v70; // w3
  __int64 v71; // x8
  __int64 v72; // x29
  Il2CppClass *v73; // x21
  Il2CppClass **v74; // x0
  int32_t TreasureDvcId; // w0
  int32_t v76; // w27
  BattleLogicFunction_FunctionArgument_o *argument; // x29
  int32_t v78; // w2
  int32_t v79; // w3
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v81; // x8
  struct BattlePerformance_o *perf; // x8
  BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *v83; // x21
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *v85; // x20
  BattleActionData_o *v86; // x21
  struct BattleLogic_o *v87; // x8
  BattlePerformance_o *v88; // x24
  BattleActionWaitCond_UntilSideEffectInvisible_o *v89; // x22
  __int64 v90; // x0
  int32_t v91; // [xsp+34h] [xbp-7Ch]
  BattleCommandData_o *v92; // [xsp+38h] [xbp-78h]
  bool v93; // [xsp+44h] [xbp-6Ch]
  BattleServantData_o *v94; // [xsp+48h] [xbp-68h]

  v7 = (ServantStatusBattleListViewItem_o *)baseActionData;
  if ( (byte_48E5346 & 1) == 0 )
  {
    sub_1B00CCC(&BattleActionData_TypeInfo, baseActionData);
    sub_1B00CCC(&BattleCommandData_TypeInfo, v9);
    sub_1B00CCC(&BattlePerformance_TypeInfo, v10);
    sub_1B00CCC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v11);
    sub_1B00CCC(&Method_DataManager_GetMasterData_FunctionMaster___, v12);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillLvMaster___, v13);
    sub_1B00CCC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v14);
    sub_1B00CCC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v15);
    sub_1B00CCC(&BattleLogicFunction_FunctionArgument_TypeInfo, v16);
    sub_1B00CCC(&int___TypeInfo, v17);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v18);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B00CCC(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo, v20);
    sub_1B00CCC(&BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo, v21);
    byte_48E5346 = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_117;
  BattleData__ResetWasAttackTargetId((BattleData_o *)data, 0LL);
  if ( !task )
    goto LABEL_117;
  actorIdlist = task->fields.actorIdlist;
  data = (__int64)this->fields.data;
  if ( actorIdlist )
  {
    if ( !actorIdlist->max_length )
      goto LABEL_118;
    baseActionData = (BattleActionData_o **)(unsigned int)actorIdlist->m_Items[1];
    if ( !data )
      goto LABEL_117;
  }
  else
  {
    baseActionData = (BattleActionData_o **)0xFFFFFFFFLL;
    if ( !data )
      goto LABEL_117;
  }
  ServantData = BattleData__getServantData((BattleData_o *)data, (int32_t)baseActionData, 0LL);
  v25 = (BattleActionData_o *)sub_1B00F18(BattleActionData_TypeInfo);
  BattleActionData___ctor(v25, 0LL);
  if ( !v25 )
    goto LABEL_117;
  v26 = BattleActionData__AddDisplayTriggerIntervalBuff(v25, task, 0LL);
  v7->klass = (ServantStatusBattleListViewItem_c *)v26;
  sub_1B00C70(v7, (int32_t)v26, v27, v28);
  v30 = task->fields.actorIdlist;
  if ( !v30 )
  {
    v31 = -1;
    if ( !v26 )
      goto LABEL_117;
    goto LABEL_16;
  }
  if ( !v30->max_length )
LABEL_118:
    sub_1B00F30(data, baseActionData);
  v31 = v30->m_Items[1];
  if ( !v26 )
    goto LABEL_117;
LABEL_16:
  v26->fields.actorId = v31;
  data = (__int64)this->fields.logictarget;
  if ( !data )
    goto LABEL_117;
  command = task->fields.command;
  data = BattleLogicTarget__getTargetBase((BattleLogicTarget_o *)data, task->fields.targetIdlist, 0, 1, v29);
  v26->fields.targetId = data;
  if ( (int)data < 1 )
    return 0LL;
  baseActionData = (BattleActionData_o **)this->fields.data;
  if ( !baseActionData )
    goto LABEL_117;
  if ( *((_BYTE *)baseActionData + 280) || *((_BYTE *)baseActionData + 281) )
    return 0LL;
  if ( !ServantData )
    goto LABEL_117;
  v33 = data;
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
        data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( data )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)data,
                                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
          data = BattleServantData__getTreasureDvcId(ServantData, !isCounterOverwriteTreasureDevice, 0LL);
          if ( MasterData_object )
          {
            data = (__int64)TreasureDvcLvMaster__GetEntity(
                              (TreasureDvcLvMaster_o *)MasterData_object,
                              data,
                              ServantData->fields.treasuredvcLevel,
                              0LL);
            v39 = (TreasureDvcLvEntity_o *)data;
            if ( !isCounterOverwriteTreasureDevice )
            {
              if ( !command )
                goto LABEL_117;
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
              if ( v39 )
              {
                v91 = v33;
                v94 = ServantData;
                v93 = isCounterOverwriteTreasureDevice;
                DataValsList = TreasureDvcLvEntity__getDataValsList(v39, (int32_t)baseActionData, 0LL);
                v42 = TreasureDvcLvEntity__getDataValsList(v39, 100, 0LL);
                data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( data )
                {
                  v92 = command;
                  data = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)data,
                                    (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_FunctionMaster___);
                  if ( DataValsList )
                  {
                    v43 = v39;
                    if ( (int)DataValsList->max_length < 1 )
                    {
LABEL_68:
                      v54 = (BattleCommandData_o *)sub_1B00F18(BattleCommandData_TypeInfo);
                      BattleCommandData___ctor(v54, 0LL);
                      v55 = v94;
                      data = BattleServantData__getTreasureDvcId(v94, 1, 0LL);
                      if ( !v54 )
                        goto LABEL_117;
                      v54->fields.treasureDvc = data;
                      v56 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B00F18(BattleBuffData_CheckIndividualitiesData_TypeInfo);
                      BattleBuffData_CheckIndividualitiesData___ctor(v56, v94, 0LL, v54, 0LL, 0LL, 0LL);
                      data = (__int64)BattleServantData__getNPSideEffect(v94, v56, 0LL);
                      v57 = v92;
                      if ( !data )
                        goto LABEL_117;
                      funcId = v43->fields.funcId;
                      if ( *(_QWORD *)(data + 24) )
                      {
                        if ( !funcId )
                          goto LABEL_117;
                        v59 = data;
                        data = sub_1B00D74(int___TypeInfo, funcId->max_length);
                        if ( !v43->fields.funcId )
                          goto LABEL_117;
                        funcId = (System_Int32_array *)data;
                        System_Array__CopyTo((System_Array_o *)v43->fields.funcId, (System_Array_o *)data, 0, 0LL);
                        v60 = v59;
                        v61 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
                        if ( (*(_BYTE *)(v61 + 309) & 1) == 0 )
                          v61 = sub_1B52BA8(v61);
                        v62 = *(_QWORD *)(*(_QWORD *)(v61 + 192) + 16LL);
                        if ( (*(_BYTE *)(v62 + 309) & 1) == 0 )
                          v62 = sub_1B52BA8(v62);
                        data = **(_QWORD **)(v62 + 184);
                        if ( !data )
                          goto LABEL_117;
                        data = (__int64)DataManager__GetMasterData_object_(
                                          (DataManager_o *)data,
                                          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillLvMaster___);
                        v63 = *(_DWORD *)(v59 + 24);
                        if ( v63 >= 1 )
                        {
                          v64 = (SkillLvMaster_o *)data;
                          v65 = 0LL;
                          do
                          {
                            if ( (unsigned int)v65 >= v63 )
                              goto LABEL_118;
                            v66 = *(_QWORD *)(v60 + 32 + 8 * v65);
                            if ( !v66 )
                              goto LABEL_117;
                            v67 = *(_DWORD **)(v66 + 104);
                            if ( !v67 )
                              goto LABEL_117;
                            if ( v67[6] < 2u )
                              goto LABEL_118;
                            if ( !v64 )
                              goto LABEL_117;
                            data = (__int64)SkillLvMaster__GetEntity(v64, v67[8], v67[9], 0LL);
                            if ( !data )
                              goto LABEL_117;
                            v68 = data;
                            data = (__int64)SkillLvEntity__getDataValsList((SkillLvEntity_o *)data, 0LL);
                            v71 = *(_QWORD *)(v68 + 32);
                            if ( !v71 )
                              goto LABEL_117;
                            if ( !*(_DWORD *)(v71 + 24) )
                              goto LABEL_118;
                            if ( !funcId )
                              goto LABEL_117;
                            v72 = *(int *)(v66 + 28);
                            if ( (unsigned int)v72 >= funcId->max_length )
                              goto LABEL_118;
                            funcId->m_Items[v72 + 1] = *(_DWORD *)(v71 + 32);
                            if ( !data )
                              goto LABEL_117;
                            if ( !*(_DWORD *)(data + 24) )
                              goto LABEL_118;
                            v73 = *(Il2CppClass **)(data + 32);
                            if ( v73 )
                            {
                              data = sub_1B00E08(*(_QWORD *)(data + 32), DataValsList->obj.klass->_1.element_class);
                              if ( !data )
                              {
                                v90 = sub_1B00F4C(0LL);
                                sub_1B00DF4(v90, 0LL);
                              }
                            }
                            if ( (unsigned int)v72 >= DataValsList->max_length )
                              goto LABEL_118;
                            v74 = &DataValsList->obj.klass + v72;
                            v74[4] = v73;
                            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v74 + 4), (int32_t)v73, v69, v70);
                            v63 = *(_DWORD *)(v60 + 24);
                            ++v65;
                          }
                          while ( (int)v65 < v63 );
                          v55 = v94;
                          v57 = v92;
                        }
                      }
                      TreasureDvcId = BattleServantData__getTreasureDvcId(v55, 1, 0LL);
                      v26->fields.treasureDvcId = TreasureDvcId;
                      v76 = TreasureDvcId;
                      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B00F18(BattleLogicFunction_FunctionArgument_TypeInfo);
                      BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
                      if ( v93 )
                      {
                        v26->fields.isCounter = task->fields.isCounter;
                        motionMessage = task->fields.motionMessage;
                        v26->fields.motionMessage = motionMessage;
                        sub_1B00C70(
                          (ServantStatusBattleListViewItem_o *)&v26->fields.motionMessage,
                          (int32_t)motionMessage,
                          v78,
                          v79);
                        v26->fields._MessageType_k__BackingField = task->fields.messageType;
                      }
                      else
                      {
                        v81 = this->fields.data;
                        if ( !v81 )
                          goto LABEL_117;
                        perf = v81->fields.perf;
                        if ( !perf )
                          goto LABEL_117;
                        if ( !v57 )
                          goto LABEL_117;
                        data = (__int64)perf->fields.commandPerf;
                        if ( !data )
                          goto LABEL_117;
                        BattlePerformanceCommandCard__UpdateRemainingCardBuff(
                          (BattlePerformanceCommandCard_o *)data,
                          v57->fields.actionIndex,
                          0LL);
                        v83 = (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *)sub_1B00F18(BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
                        BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument___ctor(v83, 0LL);
                        if ( !argument )
                          goto LABEL_117;
                        BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
                          argument,
                          (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v83,
                          0LL);
                      }
                      data = (__int64)this->fields.logicfunction;
                      if ( data )
                      {
                        v36 = BattleLogicFunction__procList(
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
                        BattleServantData__checkRegainNPUsedNoble(v94, 0LL);
                        data = (__int64)v94->fields.buffData;
                        if ( data )
                        {
                          data = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
                          if ( !v93 )
                          {
                            v94->fields.tmpNp = v94->fields.np;
                            BattleServantData__changeNp(v94, 0, 0, 0LL);
                          }
                          if ( v36 )
                          {
                            v36->fields.targetId = v91;
                            BattleActionData__setTypeTA(v36, 0LL);
                            BattleActionData__setCommand(v36, v57, 0LL);
                            v36->fields.motionId = BattleServantData__getTreasureDvcMotionId(v94, 0LL);
                            data = (__int64)this->fields.logic;
                            if ( data )
                            {
                              BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0LL);
                              v36->fields.prevattackme = 0;
                              v36->fields.isForcedSpeedOne = task->fields.isForcedSpeedOne;
                              data = (__int64)this->fields.data;
                              if ( data )
                              {
                                BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0LL);
                                logic = this->fields.logic;
                                if ( logic )
                                {
                                  v85 = logic->fields.perf;
                                  v86 = (BattleActionData_o *)sub_1B00F18(BattleActionData_TypeInfo);
                                  BattleActionData___ctor(v86, 0LL);
                                  v87 = this->fields.logic;
                                  if ( v87 )
                                  {
                                    v88 = v87->fields.perf;
                                    v89 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)sub_1B00F18(BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
                                    BattleActionWaitCond_UntilSideEffectInvisible___ctor(v89, v88, 0LL);
                                    if ( v86 )
                                    {
                                      data = (__int64)BattleActionData__SetWaitCond(
                                                        v86,
                                                        (BattleActionWaitCond_Base_o *)v89,
                                                        0LL);
                                      if ( v85 )
                                      {
                                        BattlePerformance__addActionData_40520792(v85, (BattleActionData_o *)data, 0LL);
                                        v36->fields.treasureDvcId = v76;
                                        BattleActionData__SetFuncTargetAllDead(v36, this->fields.data, 0LL);
                                        return v36;
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
                      v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
                      v45 = 0;
                      while ( 1 )
                      {
                        v46 = v39->fields.funcId;
                        if ( !v46 )
                          break;
                        if ( v45 >= v46->max_length )
                          goto LABEL_118;
                        if ( !v44 )
                          break;
                        data = (__int64)DataMasterBase_object__object__int___GetEntity(
                                          v44,
                                          v46->m_Items[v45 + 1],
                                          (const MethodInfo_2FE6A4C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
                        if ( v45 >= DataValsList->max_length )
                          goto LABEL_118;
                        v47 = &DataValsList->obj.klass + (int)v45;
                        v48 = data;
                        v50 = (__int64)v47[4];
                        v49 = (__int64 *)(v47 + 4);
                        data = v50;
                        if ( !v48 )
                          break;
                        if ( !data )
                          break;
                        DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v44, *(_DWORD *)(v48 + 24), 0LL);
                        if ( !v42 )
                          break;
                        if ( v45 >= v42->max_length )
                          goto LABEL_118;
                        v51 = &v42->obj.klass + (int)v45;
                        v53 = (__int64)v51[4];
                        v52 = (DataVals_o **)(v51 + 4);
                        data = v53;
                        if ( !v53 )
                          break;
                        DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v44, *(_DWORD *)(v48 + 24), 0LL);
                        if ( v45 >= DataValsList->max_length || v45 >= v42->max_length )
                          goto LABEL_118;
                        data = *v49;
                        if ( !*v49 )
                          break;
                        v39 = v43;
                        data = DataVals__CheckOverCharge((DataVals_o *)data, *v52, 0LL);
                        if ( (data & 1) != 0 )
                        {
                          if ( v45 >= DataValsList->max_length )
                            goto LABEL_118;
                          data = *v49;
                          if ( !*v49 )
                            break;
                          DataVals__SetOverCharge((DataVals_o *)data, 1, 0LL);
                        }
                        if ( v45 >= DataValsList->max_length || v45 >= v42->max_length )
                          goto LABEL_118;
                        if ( !*v52 )
                          break;
                        data = *v49;
                        if ( !*v49 )
                          break;
                        DataVals__SetDependOverChargeFlag((DataVals_o *)data, (*v52)->fields.dependDataValsList, 0LL);
                        if ( (signed int)++v45 >= (signed int)DataValsList->max_length )
                          goto LABEL_68;
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
LABEL_117:
    sub_1B00F28(data, baseActionData);
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_117;
  BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0LL);
  v34 = this->fields.logic;
  actorId = v26->fields.actorId;
  data = (__int64)BattlePerformance_TypeInfo;
  if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
  if ( !v34 )
    goto LABEL_117;
  BattleLogic__addBackStepActionData(
    v34,
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
  __int64 v18; // x20
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x3
  System_Int32_array *FieldPlayerServantIDList; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  BattleCommandData_o *v24; // x22
  BattleComboData_o *v25; // x24
  const MethodInfo *v26; // x4
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_48E5343 & 1) == 0 )
  {
    sub_1B00CCC(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1B00CCC(&BattleCommandData_TypeInfo, v6);
    sub_1B00CCC(&BattleLogicTask_TypeInfo, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_48E5343 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1B00F30(EnemyServantData, v14);
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
                                        (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1B00F28(EnemyServantData, v14);
  }
  v18 = sub_1B00F18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v18, v19);
  if ( !v18 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v18, 3, v17->fields.uniqueId, v20);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v18 + 32) = FieldPlayerServantIDList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v18 + 32), (int32_t)FieldPlayerServantIDList, v22, v23);
  v24 = (BattleCommandData_o *)sub_1B00F18(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v24, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v17, 0LL);
  if ( !v24 )
    goto LABEL_19;
  v24->fields._type = (int)EnemyServantData;
  v24->fields.svtlimit = BattleServantData__getDispLimitCount(v17, 1, 0LL);
  v24->fields.uniqueId = v17->fields.uniqueId;
  v24->fields.svtId = BattleServantData__getSvtId(v17, 0LL);
  v24->fields.treasureDvc = BattleServantData__getTreasureDvcId(v17, 1, 0LL);
  v25 = (BattleComboData_o *)sub_1B00F18(BattleComboData_TypeInfo);
  BattleComboData___ctor(v25, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v18, v25, v24, v15, v26);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v17, 1, 0LL);
  *(_DWORD *)(v18 + 48) = 4;
  *(_DWORD *)(v18 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v18 + 88) = 1;
  if ( !v12 )
    goto LABEL_19;
  items = v12->fields._items;
  v30 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v18,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v32[4] = (Il2CppClass *)v18;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v32 + 4), v18, v27, v28);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v18; // x21
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x3
  System_Int32_array *FieldPlayerServantIDList; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  BattleCommandData_o *v24; // x22
  BattleComboData_o *v25; // x24
  const MethodInfo *v26; // x4
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_48E5344 & 1) == 0 )
  {
    sub_1B00CCC(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1B00CCC(&BattleCommandData_TypeInfo, v6);
    sub_1B00CCC(&BattleLogicTask_TypeInfo, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_48E5344 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1B00F30(EnemyServantData, v14);
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
                                        (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1B00F28(EnemyServantData, v14);
  }
  v18 = sub_1B00F18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v18, v19);
  if ( !v18 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v18, 3, v17->fields.uniqueId, v20);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v18 + 32) = FieldPlayerServantIDList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v18 + 32), (int32_t)FieldPlayerServantIDList, v22, v23);
  v24 = (BattleCommandData_o *)sub_1B00F18(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v24, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v17, 0LL);
  if ( !v24 )
    goto LABEL_19;
  v24->fields._type = (int)EnemyServantData;
  v24->fields.svtlimit = BattleServantData__getDispLimitCount(v17, 1, 0LL);
  v24->fields.uniqueId = v17->fields.uniqueId;
  v24->fields.svtId = BattleServantData__getSvtId(v17, 0LL);
  v24->fields.treasureDvc = BattleServantData__getTreasureDvcId(v17, 1, 0LL);
  v25 = (BattleComboData_o *)sub_1B00F18(BattleComboData_TypeInfo);
  BattleComboData___ctor(v25, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v18, v25, v24, v15, v26);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v17, 1, 0LL);
  *(_DWORD *)(v18 + 48) = 4;
  *(_DWORD *)(v18 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v18 + 88) = 1;
  if ( !v12 )
    goto LABEL_19;
  items = v12->fields._items;
  v30 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v18,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v32[4] = (Il2CppClass *)v18;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v32 + 4), v18, v27, v28);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x3
  System_Int32_array *FieldEnemyServantIDList; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  BattleCommandData_o *v24; // x22
  BattleComboData_o *v25; // x24
  const MethodInfo *v26; // x4
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_48E5341 & 1) == 0 )
  {
    sub_1B00CCC(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1B00CCC(&BattleCommandData_TypeInfo, v6);
    sub_1B00CCC(&BattleLogicTask_TypeInfo, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_48E5341 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1B00F30(PlayerServantData, v14);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v15 + 1], 0LL);
  if ( !PlayerServantData || (v17 = PlayerServantData, !PlayerServantData->fields.reservationspecial) )
  {
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v12,
                                        (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_1B00F28(PlayerServantData, v14);
  }
  v18 = sub_1B00F18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v18, v19);
  if ( !v18 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v18, 2, v17->fields.uniqueId, v20);
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  *(_QWORD *)(v18 + 32) = FieldEnemyServantIDList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v18 + 32), (int32_t)FieldEnemyServantIDList, v22, v23);
  v24 = (BattleCommandData_o *)sub_1B00F18(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v24, 0LL);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v17, 0LL);
  if ( !v24 )
    goto LABEL_18;
  v24->fields._type = (int)PlayerServantData;
  v24->fields.svtlimit = BattleServantData__getCommandDispLimitCount(v17, 0LL);
  v24->fields.uniqueId = v17->fields.uniqueId;
  v24->fields.svtId = BattleServantData__getSvtId(v17, 0LL);
  v24->fields.treasureDvc = BattleServantData__getTreasureDvcId(v17, 1, 0LL);
  v25 = (BattleComboData_o *)sub_1B00F18(BattleComboData_TypeInfo);
  BattleComboData___ctor(v25, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v18, v25, v24, v15, v26);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v17, 1, 0LL);
  *(_DWORD *)(v18 + 48) = 4;
  *(_DWORD *)(v18 + 84) = (_DWORD)PlayerServantData;
  *(_DWORD *)(v18 + 88) = 1;
  if ( !v12 )
    goto LABEL_18;
  items = v12->fields._items;
  v30 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_18;
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v18,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v32[4] = (Il2CppClass *)v18;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v32 + 4), v18, v27, v28);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_48E5342 & 1) == 0 )
  {
    sub_1B00CCC(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1B00CCC(&BattleCommandData_TypeInfo, v7);
    sub_1B00CCC(&BattleLogicTask_TypeInfo, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    byte_48E5342 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    sub_1B00F30(logictarget, v15);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v16 + 1], 0LL);
  v19 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
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
  v23 = (BattleCommandData_o *)sub_1B00F18(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v23, 0LL);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcCardId(PlayerServantData, 0LL);
  if ( !v23 )
    goto LABEL_21;
  v23->fields._type = (int)logictarget;
  v23->fields.svtlimit = BattleServantData__getCommandDispLimitCount(PlayerServantData, 0LL);
  v23->fields.uniqueId = PlayerServantData->fields.uniqueId;
  v23->fields.svtId = BattleServantData__getSvtId(PlayerServantData, 0LL);
  v23->fields.treasureDvc = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL);
  v24 = (BattleComboData_o *)sub_1B00F18(BattleComboData_TypeInfo);
  BattleComboData___ctor(v24, 0LL);
  BattleLogicTask__setActionCommand(v19, v24, v23, v16, v25);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL);
  v19->fields.actiontype = 4;
  v19->fields.treasureDvcId = (int)logictarget;
  v19->fields.tresureDvcLv = 1;
  if ( !v13
    || (items = v13->fields._items,
        v29 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v13->fields._version,
        !items) )
  {
LABEL_21:
    sub_1B00F28(logictarget, v15);
  }
  size = v13->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)v19,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v31[4] = (Il2CppClass *)v19;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v19, v26, v27);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v13,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}