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
  if ( (byte_4B18EFE & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1BCA7E0(&BuffList_ACTION___TypeInfo, task, actSvtData);
    byte_4B18EFE = 1;
  }
  if ( !task )
    goto LABEL_16;
  if ( !task->fields.isCheckTreasureDeviceBeforeFunc )
    return 0;
  task->fields.isCheckTreasureDeviceBeforeFunc = 0;
  this = (BattleLogicSpecial_o *)sub_1BCA888(BuffList_ACTION___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_16;
  v11 = this;
  if ( !LODWORD(this->fields.logic) )
    sub_1BCAA44(this, task);
  LODWORD(this->fields.logictarget) = 141;
  this = (BattleLogicSpecial_o *)v10->fields.logic;
  if ( !this )
LABEL_16:
    sub_1BCAA3C(this, task);
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
      sub_1BCAA44(this, task);
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[1];
    if ( !this )
LABEL_14:
      sub_1BCAA3C(this, task);
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
  if ( (byte_4B18EFC & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, task, method);
    byte_4B18EFC = 1;
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
                                         (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( data )
        {
          BattleData__SetWasAttackTargetIdList(data, v11, (System_Int32_array *)this, 0LL);
          goto LABEL_21;
        }
      }
LABEL_23:
      sub_1BCAA3C(this, task);
    }
LABEL_24:
    sub_1BCAA44(this, task);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 data; // x0
  struct System_Int32_array *actorIdlist; // x8
  BattleServantData_o *ServantData; // x27
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  BattleActionData_o *v41; // x21
  BattleActionData_o *v42; // x23
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  const MethodInfo *v49; // x4
  struct System_Int32_array *v50; // x8
  int v51; // w8
  BattleCommandData_o *command; // x24
  int32_t v53; // w25
  BattleLogic_o *v54; // x19
  int32_t actorId; // w20
  BattleActionData_o *v56; // x23
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v59; // x5
  TreasureDvcLvEntity_o *Entity; // x21
  int32_t ChainBonus; // w0
  DataVals_array *DataValsList; // x26
  DataVals_array *v63; // x28
  __int64 v64; // x2
  __int64 v65; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v66; // x29
  il2cpp_array_size_t v67; // w24
  struct System_Int32_array *v68; // x8
  Il2CppClass **v69; // x22
  __int64 v70; // x21
  __int64 *v71; // x22
  __int64 v72; // t1
  Il2CppClass **v73; // x27
  DataVals_o **v74; // x27
  __int64 v75; // t1
  BattleCommandData_o *v76; // x21
  BattleServantData_o *v77; // x22
  __int64 v78; // x2
  __int64 v79; // x3
  BattleBuffData_CheckIndividualitiesData_o *v80; // x28
  BattleCommandData_o *v81; // x24
  __int64 v82; // x29
  System_Int32_array *funcId; // x28
  long double v84; // q0
  __int64 v85; // x0
  __int64 v86; // x0
  int v87; // w8
  SkillLvMaster_o *v88; // x27
  __int64 v89; // x22
  __int64 v90; // x24
  __int64 v91; // x29
  _DWORD *v92; // x8
  __int64 v93; // x21
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  __int64 v100; // x8
  __int64 v101; // x29
  int64_t v102; // x21
  Il2CppClass **v103; // x0
  int32_t TreasureDvcId; // w0
  int32_t v105; // w27
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x3
  BattleLogicFunction_FunctionArgument_o *argument; // x29
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v117; // x8
  struct BattlePerformance_o *perf; // x8
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x3
  BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *v122; // x21
  __int64 v123; // x2
  __int64 v124; // x3
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *v126; // x20
  BattleActionData_o *v127; // x21
  __int64 v128; // x2
  __int64 v129; // x3
  struct BattleLogic_o *v130; // x8
  BattlePerformance_o *v131; // x24
  BattleActionWaitCond_UntilSideEffectInvisible_o *v132; // x22
  __int64 v133; // x0
  BattleCommandData_o *v134; // [xsp+30h] [xbp-80h]
  bool v135; // [xsp+3Ch] [xbp-74h]
  BattleServantData_o *v136; // [xsp+40h] [xbp-70h]
  TreasureDvcLvEntity_o *v137; // [xsp+48h] [xbp-68h]
  __int64 v138; // [xsp+48h] [xbp-68h]

  v7 = (PartyOrganizationUtility_o *)baseActionData;
  if ( (byte_4B18EFD & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, baseActionData, task);
    sub_1BCA7E0(&BattleCommandData_TypeInfo, v9, v10);
    sub_1BCA7E0(&BattlePerformance_TypeInfo, v11, v12);
    sub_1BCA7E0(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FunctionMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v21, v22);
    sub_1BCA7E0(&BattleLogicFunction_FunctionArgument_TypeInfo, v23, v24);
    sub_1BCA7E0(&int___TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo, v31, v32);
    sub_1BCA7E0(&BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo, v33, v34);
    byte_4B18EFD = 1;
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
  v41 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, v38, v39, v40);
  BattleActionData___ctor(v41, 0LL);
  if ( !v41 )
    goto LABEL_121;
  v42 = BattleActionData__AddDisplayTriggerIntervalBuff(v41, task, 0LL);
  v7->klass = (PartyOrganizationUtility_c *)v42;
  sub_1BCA784(v7, (int64_t)v42, v43, v44, v45, v46, v47, v48);
  v50 = task->fields.actorIdlist;
  if ( !v50 )
  {
    v51 = -1;
    if ( !v42 )
      goto LABEL_121;
    goto LABEL_17;
  }
  if ( !v50->max_length )
LABEL_122:
    sub_1BCAA44(data, baseActionData);
  v51 = v50->m_Items[1];
  if ( !v42 )
    goto LABEL_121;
LABEL_17:
  v42->fields.actorId = v51;
  data = (__int64)this->fields.logictarget;
  if ( !data )
    goto LABEL_121;
  command = task->fields.command;
  data = BattleLogicTarget__getTargetBase((BattleLogicTarget_o *)data, task->fields.targetIdlist, 0, 1, v49);
  v42->fields.targetId = data;
  if ( (int)data < 1 )
    return 0LL;
  baseActionData = (BattleActionData_o **)this->fields.data;
  if ( !baseActionData )
    goto LABEL_121;
  if ( *((_BYTE *)baseActionData + 280) || *((_BYTE *)baseActionData + 281) )
    return 0LL;
  if ( !ServantData )
    goto LABEL_121;
  v53 = data;
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
        data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( data )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)data,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
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
              data = BattleLogicSpecial__AddTreasureDeviceBeforeFunctionTask(this, task, ServantData, v53, command, v59);
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
              v42->fields.npPer = (int)baseActionData;
              if ( Entity )
              {
                v136 = ServantData;
                v135 = isCounterOverwriteTreasureDevice;
                DataValsList = TreasureDvcLvEntity__getDataValsList(Entity, (int32_t)baseActionData, 0LL);
                v63 = TreasureDvcLvEntity__getDataValsList(Entity, 100, 0LL);
                data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( data )
                {
                  v134 = command;
                  data = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)data,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FunctionMaster___);
                  if ( DataValsList )
                  {
                    v137 = Entity;
                    if ( (int)DataValsList->max_length < 1 )
                    {
LABEL_72:
                      v76 = (BattleCommandData_o *)sub_1BCAA2C(BattleCommandData_TypeInfo, baseActionData, v64, v65);
                      BattleCommandData___ctor(v76, 0LL);
                      v77 = v136;
                      data = BattleServantData__getTreasureDvcId(v136, 1, 0LL, 0LL);
                      if ( !v76 )
                        goto LABEL_121;
                      v76->fields.treasureDvc = data;
                      v80 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BCAA2C(
                                                                           BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                                           baseActionData,
                                                                           v78,
                                                                           v79);
                      BattleBuffData_CheckIndividualitiesData___ctor_43379556(v80, v136, 0LL, v76, 0LL, 0LL, 0LL, 0LL);
                      data = (__int64)BattleServantData__getNPSideEffect(v136, v80, 0LL);
                      v81 = v134;
                      if ( !data )
                        goto LABEL_121;
                      v82 = data;
                      funcId = v137->fields.funcId;
                      if ( *(_QWORD *)(data + 24) )
                      {
                        if ( !funcId )
                          goto LABEL_121;
                        data = sub_1BCA888(int___TypeInfo, funcId->max_length);
                        if ( !v137->fields.funcId )
                          goto LABEL_121;
                        funcId = (System_Int32_array *)data;
                        System_Array__CopyTo((System_Array_o *)v137->fields.funcId, (System_Array_o *)data, 0, 0LL);
                        v85 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
                        if ( (*(_BYTE *)(v85 + 309) & 1) == 0 )
                          v85 = sub_1C1C6BC(v84);
                        v86 = *(_QWORD *)(*(_QWORD *)(v85 + 192) + 16LL);
                        if ( (*(_BYTE *)(v86 + 309) & 1) == 0 )
                          v86 = sub_1C1C6BC(v84);
                        data = **(_QWORD **)(v86 + 184);
                        if ( !data )
                          goto LABEL_121;
                        data = (__int64)DataManager__GetMasterData_object_(
                                          (DataManager_o *)data,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
                        v87 = *(_DWORD *)(v82 + 24);
                        if ( v87 >= 1 )
                        {
                          v88 = (SkillLvMaster_o *)data;
                          v89 = 0LL;
                          v138 = v82 + 32;
                          do
                          {
                            if ( (unsigned int)v89 >= v87 )
                              goto LABEL_122;
                            v90 = v82;
                            v91 = *(_QWORD *)(v138 + 8 * v89);
                            if ( !v91 )
                              goto LABEL_121;
                            v92 = *(_DWORD **)(v91 + 104);
                            if ( !v92 )
                              goto LABEL_121;
                            if ( v92[6] < 2u )
                              goto LABEL_122;
                            if ( !v88 )
                              goto LABEL_121;
                            data = (__int64)SkillLvMaster__GetEntity(v88, v92[8], v92[9], 0LL);
                            if ( !data )
                              goto LABEL_121;
                            v93 = data;
                            data = (__int64)SkillLvEntity__getDataValsList((SkillLvEntity_o *)data, 0LL);
                            v100 = *(_QWORD *)(v93 + 32);
                            if ( !v100 )
                              goto LABEL_121;
                            if ( !*(_DWORD *)(v100 + 24) )
                              goto LABEL_122;
                            if ( !funcId )
                              goto LABEL_121;
                            v101 = *(int *)(v91 + 28);
                            if ( (unsigned int)v101 >= funcId->max_length )
                              goto LABEL_122;
                            funcId->m_Items[v101 + 1] = *(_DWORD *)(v100 + 32);
                            if ( !data )
                              goto LABEL_121;
                            if ( !*(_DWORD *)(data + 24) )
                              goto LABEL_122;
                            v102 = *(_QWORD *)(data + 32);
                            if ( v102 )
                            {
                              data = sub_1BCA91C(*(_QWORD *)(data + 32), DataValsList->obj.klass->_1.element_class);
                              if ( !data )
                              {
                                v133 = sub_1BCAA60(0LL);
                                sub_1BCA908(v133, 0LL);
                              }
                            }
                            if ( (unsigned int)v101 >= DataValsList->max_length )
                              goto LABEL_122;
                            v103 = &DataValsList->obj.klass + v101;
                            v103[4] = (Il2CppClass *)v102;
                            sub_1BCA784((PartyOrganizationUtility_o *)(v103 + 4), v102, v94, v95, v96, v97, v98, v99);
                            v87 = *(_DWORD *)(v90 + 24);
                            ++v89;
                            v82 = v90;
                          }
                          while ( (int)v89 < v87 );
                          v77 = v136;
                          v81 = v134;
                        }
                      }
                      TreasureDvcId = BattleServantData__getTreasureDvcId(v77, 1, 0LL, 0LL);
                      v42->fields.treasureDvcId = TreasureDvcId;
                      v105 = TreasureDvcId;
                      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1BCAA2C(
                                                                             BattleLogicFunction_FunctionArgument_TypeInfo,
                                                                             v106,
                                                                             v107,
                                                                             v108);
                      BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
                      if ( v135 )
                      {
                        v42->fields.isCounter = task->fields.isCounter;
                        motionMessage = task->fields.motionMessage;
                        v42->fields.motionMessage = motionMessage;
                        sub_1BCA784(
                          (PartyOrganizationUtility_o *)&v42->fields.motionMessage,
                          (int64_t)motionMessage,
                          v110,
                          v111,
                          v112,
                          v113,
                          v114,
                          v115);
                        v42->fields._MessageType_k__BackingField = task->fields.messageType;
                      }
                      else
                      {
                        v117 = this->fields.data;
                        if ( !v117 )
                          goto LABEL_121;
                        perf = v117->fields.perf;
                        if ( !perf )
                          goto LABEL_121;
                        if ( !v81 )
                          goto LABEL_121;
                        data = (__int64)perf->fields.commandPerf;
                        if ( !data )
                          goto LABEL_121;
                        BattlePerformanceCommandCard__UpdateRemainingCardBuff(
                          (BattlePerformanceCommandCard_o *)data,
                          v81->fields.actionIndex,
                          0LL);
                        v122 = (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *)sub_1BCAA2C(
                                                                                                   BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo,
                                                                                                   v119,
                                                                                                   v120,
                                                                                                   v121);
                        BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument___ctor(v122, 0LL);
                        if ( !argument )
                          goto LABEL_121;
                        BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
                          argument,
                          (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v122,
                          0LL);
                      }
                      data = (__int64)this->fields.logicfunction;
                      if ( data )
                      {
                        v56 = BattleLogicFunction__procList(
                                (BattleLogicFunction_o *)data,
                                v42,
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
                        BattleServantData__checkRegainNPUsedNoble(v136, 0LL);
                        data = (__int64)v136->fields.buffData;
                        if ( data )
                        {
                          data = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
                          if ( !v135 )
                          {
                            v136->fields.tmpNp = v136->fields.np;
                            BattleServantData__changeNp(v136, 0, 0, 0LL);
                          }
                          if ( v56 )
                          {
                            v56->fields.targetId = v53;
                            BattleActionData__setTypeTA(v56, 0LL);
                            BattleActionData__setCommand(v56, v81, 0LL);
                            v56->fields.motionId = BattleServantData__getTreasureDvcMotionId(v136, 0LL);
                            data = (__int64)this->fields.logic;
                            if ( data )
                            {
                              BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0LL);
                              v56->fields.prevattackme = 0;
                              v56->fields.isForcedSpeedOne = task->fields.isForcedSpeedOne;
                              data = (__int64)this->fields.data;
                              if ( data )
                              {
                                BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0LL);
                                logic = this->fields.logic;
                                if ( logic )
                                {
                                  v126 = logic->fields.perf;
                                  v127 = (BattleActionData_o *)sub_1BCAA2C(
                                                                 BattleActionData_TypeInfo,
                                                                 baseActionData,
                                                                 v123,
                                                                 v124);
                                  BattleActionData___ctor(v127, 0LL);
                                  v130 = this->fields.logic;
                                  if ( v130 )
                                  {
                                    v131 = v130->fields.perf;
                                    v132 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)sub_1BCAA2C(
                                                                                                BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo,
                                                                                                baseActionData,
                                                                                                v128,
                                                                                                v129);
                                    BattleActionWaitCond_UntilSideEffectInvisible___ctor(v132, v131, 0LL);
                                    if ( v127 )
                                    {
                                      data = (__int64)BattleActionData__SetWaitCond(
                                                        v127,
                                                        (BattleActionWaitCond_Base_o *)v132,
                                                        0LL);
                                      if ( v126 )
                                      {
                                        BattlePerformance__addActionData_42641760(v126, (BattleActionData_o *)data, 0LL);
                                        v56->fields.treasureDvcId = v105;
                                        BattleActionData__SetFuncTargetAllDead(v56, this->fields.data, 0LL);
                                        return v56;
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
                      v66 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
                      v67 = 0;
                      while ( 1 )
                      {
                        v68 = Entity->fields.funcId;
                        if ( !v68 )
                          break;
                        if ( v67 >= v68->max_length )
                          goto LABEL_122;
                        if ( !v66 )
                          break;
                        data = (__int64)DataMasterBase_object__object__int___GetEntity(
                                          v66,
                                          v68->m_Items[v67 + 1],
                                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
                        if ( v67 >= DataValsList->max_length )
                          goto LABEL_122;
                        v69 = &DataValsList->obj.klass + (int)v67;
                        v70 = data;
                        v72 = (__int64)v69[4];
                        v71 = (__int64 *)(v69 + 4);
                        data = v72;
                        if ( !v70 )
                          break;
                        if ( !data )
                          break;
                        DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v66, *(_DWORD *)(v70 + 24), 0LL);
                        if ( !v63 )
                          break;
                        if ( v67 >= v63->max_length )
                          goto LABEL_122;
                        v73 = &v63->obj.klass + (int)v67;
                        v75 = (__int64)v73[4];
                        v74 = (DataVals_o **)(v73 + 4);
                        data = v75;
                        if ( !v75 )
                          break;
                        DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v66, *(_DWORD *)(v70 + 24), 0LL);
                        if ( v67 >= DataValsList->max_length )
                          goto LABEL_122;
                        Entity = v137;
                        if ( v67 >= v63->max_length )
                          goto LABEL_122;
                        data = *v71;
                        if ( !*v71 )
                          break;
                        data = DataVals__CheckOverCharge((DataVals_o *)data, *v74, 0LL);
                        if ( (data & 1) != 0 )
                        {
                          if ( v67 >= DataValsList->max_length )
                            goto LABEL_122;
                          data = *v71;
                          if ( !*v71 )
                            break;
                          DataVals__SetOverCharge((DataVals_o *)data, 1, 0LL);
                        }
                        if ( v67 >= DataValsList->max_length || v67 >= v63->max_length )
                          goto LABEL_122;
                        if ( !*v74 )
                          break;
                        data = *v71;
                        if ( !*v71 )
                          break;
                        DataVals__SetDependOverChargeFlag((DataVals_o *)data, (*v74)->fields.dependDataValsList, 0LL);
                        if ( (signed int)++v67 >= (signed int)DataValsList->max_length )
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
    sub_1BCAA3C(data, baseActionData);
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_121;
  BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0LL);
  v54 = this->fields.logic;
  actorId = v42->fields.actorId;
  data = (__int64)BattlePerformance_TypeInfo;
  if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo, baseActionData);
  if ( !v54 )
    goto LABEL_121;
  BattleLogic__addBackStepActionData(
    v54,
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x19
  BattleServantData_o *EnemyServantData; // x0
  __int64 v20; // x1
  unsigned int v21; // w21
  struct System_Int32_array *e_entryid; // x8
  __int64 v23; // x2
  __int64 v24; // x3
  BattleServantData_o *v25; // x23
  int64_t v26; // x20
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x3
  System_Int32_array *FieldPlayerServantIDList; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  BattleCommandData_o *v39; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  BattleComboData_o *v43; // x24
  const MethodInfo *v44; // x4
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0

  if ( (byte_4B18EFA & 1) == 0 )
  {
    sub_1BCA7E0(&BattleComboData_TypeInfo, *(_QWORD *)&ltype, data);
    sub_1BCA7E0(&BattleCommandData_TypeInfo, v6, v7);
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v16, v17);
    byte_4B18EFA = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&ltype,
                                                       data,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 16 )
    v21 = 2;
  else
    v21 = ltype == 15;
  if ( !data )
    goto LABEL_19;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_19;
  if ( v21 >= e_entryid->max_length )
    sub_1BCAA44(EnemyServantData, v20);
  v20 = (unsigned int)e_entryid->m_Items[v21 + 1];
  if ( (int)v20 < 1 )
    goto LABEL_18;
  EnemyServantData = BattleData__getEnemyServantData(data, v20, 0LL);
  if ( !EnemyServantData )
    goto LABEL_19;
  v25 = EnemyServantData;
  if ( !EnemyServantData->fields.reservationspecial )
  {
LABEL_18:
    if ( v18 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v18,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1BCAA3C(EnemyServantData, v20);
  }
  v26 = sub_1BCAA2C(BattleLogicTask_TypeInfo, v20, v23, v24);
  BattleLogicTask___ctor((BattleLogicTask_o *)v26, v27);
  if ( !v26 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v26, 3, v25->fields.uniqueId, v28);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v26 + 32) = FieldPlayerServantIDList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 32), (int64_t)FieldPlayerServantIDList, v30, v31, v32, v33, v34, v35);
  v39 = (BattleCommandData_o *)sub_1BCAA2C(BattleCommandData_TypeInfo, v36, v37, v38);
  BattleCommandData___ctor(v39, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v25, 0LL);
  if ( !v39 )
    goto LABEL_19;
  v39->fields._type = (int)EnemyServantData;
  v39->fields.svtlimit = BattleServantData__getDispLimitCount(v25, 1, 0LL);
  v39->fields.uniqueId = v25->fields.uniqueId;
  v39->fields.svtId = BattleServantData__getSvtId(v25, 0LL);
  v39->fields.treasureDvc = BattleServantData__getTreasureDvcId(v25, 1, 0LL, 0LL);
  v43 = (BattleComboData_o *)sub_1BCAA2C(BattleComboData_TypeInfo, v40, v41, v42);
  BattleComboData___ctor(v43, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v26, v43, v39, v21, v44);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v25, 1, 0LL, 0LL);
  *(_DWORD *)(v26 + 48) = 4;
  *(_DWORD *)(v26 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v26 + 88) = 1;
  if ( !v18 )
    goto LABEL_19;
  items = v18->fields._items;
  v52 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v18->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v18->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v18,
      (Il2CppObject *)v26,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
  }
  else
  {
    v54 = &items->obj.klass + size;
    v18->fields._size = size + 1;
    v54[4] = (Il2CppClass *)v26;
    sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 4), v26, v45, v46, v47, v48, v49, v50);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v18,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicSpecial__taskEnemyTresureDvcAlways(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x19
  BattleServantData_o *EnemyServantData; // x0
  __int64 v20; // x1
  unsigned int v21; // w20
  struct System_Int32_array *e_entryid; // x8
  BattleServantData_o *v23; // x23
  __int64 v24; // x2
  __int64 v25; // x3
  int64_t v26; // x21
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x3
  System_Int32_array *FieldPlayerServantIDList; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  BattleCommandData_o *v39; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  BattleComboData_o *v43; // x24
  const MethodInfo *v44; // x4
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0

  if ( (byte_4B18EFB & 1) == 0 )
  {
    sub_1BCA7E0(&BattleComboData_TypeInfo, *(_QWORD *)&ltype, data);
    sub_1BCA7E0(&BattleCommandData_TypeInfo, v6, v7);
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v16, v17);
    byte_4B18EFB = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&ltype,
                                                       data,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 23 )
    v21 = 2;
  else
    v21 = ltype == 22;
  if ( !data )
    goto LABEL_19;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_19;
  if ( v21 >= e_entryid->max_length )
    sub_1BCAA44(EnemyServantData, v20);
  v20 = (unsigned int)e_entryid->m_Items[v21 + 1];
  if ( (int)v20 < 1 )
    goto LABEL_18;
  EnemyServantData = BattleData__getEnemyServantData(data, v20, 0LL);
  if ( !EnemyServantData )
    goto LABEL_19;
  v23 = EnemyServantData;
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(EnemyServantData, 1, 0LL, 0LL);
  if ( (int)EnemyServantData < 1 )
  {
LABEL_18:
    if ( v18 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v18,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1BCAA3C(EnemyServantData, v20);
  }
  v26 = sub_1BCAA2C(BattleLogicTask_TypeInfo, v20, v24, v25);
  BattleLogicTask___ctor((BattleLogicTask_o *)v26, v27);
  if ( !v26 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v26, 3, v23->fields.uniqueId, v28);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v26 + 32) = FieldPlayerServantIDList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 32), (int64_t)FieldPlayerServantIDList, v30, v31, v32, v33, v34, v35);
  v39 = (BattleCommandData_o *)sub_1BCAA2C(BattleCommandData_TypeInfo, v36, v37, v38);
  BattleCommandData___ctor(v39, 0LL);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v23, 0LL);
  if ( !v39 )
    goto LABEL_19;
  v39->fields._type = (int)EnemyServantData;
  v39->fields.svtlimit = BattleServantData__getDispLimitCount(v23, 1, 0LL);
  v39->fields.uniqueId = v23->fields.uniqueId;
  v39->fields.svtId = BattleServantData__getSvtId(v23, 0LL);
  v39->fields.treasureDvc = BattleServantData__getTreasureDvcId(v23, 1, 0LL, 0LL);
  v43 = (BattleComboData_o *)sub_1BCAA2C(BattleComboData_TypeInfo, v40, v41, v42);
  BattleComboData___ctor(v43, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v26, v43, v39, v21, v44);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v23, 1, 0LL, 0LL);
  *(_DWORD *)(v26 + 48) = 4;
  *(_DWORD *)(v26 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v26 + 88) = 1;
  if ( !v18 )
    goto LABEL_19;
  items = v18->fields._items;
  v52 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v18->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v18->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v18,
      (Il2CppObject *)v26,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
  }
  else
  {
    v54 = &items->obj.klass + size;
    v18->fields._size = size + 1;
    v54[4] = (Il2CppClass *)v26;
    sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 4), v26, v45, v46, v47, v48, v49, v50);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v18,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicSpecial__taskTresureDvc(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x19
  BattleServantData_o *PlayerServantData; // x0
  __int64 v20; // x1
  unsigned int v21; // w21
  struct System_Int32_array *p_entryid; // x8
  __int64 v23; // x2
  __int64 v24; // x3
  BattleServantData_o *v25; // x23
  int64_t v26; // x20
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x3
  System_Int32_array *FieldEnemyServantIDList; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  BattleCommandData_o *v39; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  BattleComboData_o *v43; // x24
  const MethodInfo *v44; // x4
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0

  if ( (byte_4B18EF8 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleComboData_TypeInfo, *(_QWORD *)&ltype, data);
    sub_1BCA7E0(&BattleCommandData_TypeInfo, v6, v7);
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v16, v17);
    byte_4B18EF8 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&ltype,
                                                       data,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 8 )
    v21 = 2;
  else
    v21 = ltype == 7;
  if ( !data )
    goto LABEL_18;
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_18;
  if ( v21 >= p_entryid->max_length )
    sub_1BCAA44(PlayerServantData, v20);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v21 + 1], 0LL);
  if ( !PlayerServantData || (v25 = PlayerServantData, !PlayerServantData->fields.reservationspecial) )
  {
    if ( v18 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v18,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_1BCAA3C(PlayerServantData, v20);
  }
  v26 = sub_1BCAA2C(BattleLogicTask_TypeInfo, v20, v23, v24);
  BattleLogicTask___ctor((BattleLogicTask_o *)v26, v27);
  if ( !v26 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v26, 2, v25->fields.uniqueId, v28);
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  *(_QWORD *)(v26 + 32) = FieldEnemyServantIDList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 32), (int64_t)FieldEnemyServantIDList, v30, v31, v32, v33, v34, v35);
  v39 = (BattleCommandData_o *)sub_1BCAA2C(BattleCommandData_TypeInfo, v36, v37, v38);
  BattleCommandData___ctor(v39, 0LL);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v25, 0LL);
  if ( !v39 )
    goto LABEL_18;
  v39->fields._type = (int)PlayerServantData;
  v39->fields.svtlimit = BattleServantData__getCommandDispLimitCount(v25, 0LL);
  v39->fields.uniqueId = v25->fields.uniqueId;
  v39->fields.svtId = BattleServantData__getSvtId(v25, 0LL);
  v39->fields.treasureDvc = BattleServantData__getTreasureDvcId(v25, 1, 0LL, 0LL);
  v43 = (BattleComboData_o *)sub_1BCAA2C(BattleComboData_TypeInfo, v40, v41, v42);
  BattleComboData___ctor(v43, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v26, v43, v39, v21, v44);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v25, 1, 0LL, 0LL);
  *(_DWORD *)(v26 + 48) = 4;
  *(_DWORD *)(v26 + 84) = (_DWORD)PlayerServantData;
  *(_DWORD *)(v26 + 88) = 1;
  if ( !v18 )
    goto LABEL_18;
  items = v18->fields._items;
  v52 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v18->fields._version;
  if ( !items )
    goto LABEL_18;
  size = v18->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v18,
      (Il2CppObject *)v26,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
  }
  else
  {
    v54 = &items->obj.klass + size;
    v18->fields._size = size + 1;
    v54[4] = (Il2CppClass *)v26;
    sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 4), v26, v45, v46, v47, v48, v49, v50);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v18,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicSpecial__taskTresureDvcAlways(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x19
  BattleLogicTarget_o *logictarget; // x0
  __int64 v21; // x1
  unsigned int v22; // w21
  struct System_Int32_array *p_entryid; // x8
  BattleServantData_o *PlayerServantData; // x23
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  BattleLogicTask_o *v28; // x20
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  BattleCommandData_o *v35; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  BattleComboData_o *v39; // x24
  const MethodInfo *v40; // x4
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0

  if ( (byte_4B18EF9 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleComboData_TypeInfo, *(_QWORD *)&ltype, data);
    sub_1BCA7E0(&BattleCommandData_TypeInfo, v7, v8);
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v17, v18);
    byte_4B18EF9 = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&ltype,
                                                       data,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 6 )
  {
    v22 = 0;
  }
  else if ( ltype == 7 )
  {
    v22 = 1;
  }
  else
  {
    v22 = 2 * (ltype == 8);
  }
  if ( !data )
    goto LABEL_21;
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_21;
  if ( v22 >= p_entryid->max_length )
    sub_1BCAA44(logictarget, v21);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v22 + 1], 0LL);
  v28 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v25, v26, v27);
  BattleLogicTask___ctor(v28, v29);
  if ( !PlayerServantData )
    goto LABEL_21;
  if ( !v28 )
    goto LABEL_21;
  BattleLogicTask__setActor(v28, 2, PlayerServantData->fields.uniqueId, v30);
  logictarget = this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_21;
  BattleLogicTarget__getTargetBattleServantData(logictarget, v28, v31);
  v35 = (BattleCommandData_o *)sub_1BCAA2C(BattleCommandData_TypeInfo, v32, v33, v34);
  BattleCommandData___ctor(v35, 0LL);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcCardId(PlayerServantData, 0LL);
  if ( !v35 )
    goto LABEL_21;
  v35->fields._type = (int)logictarget;
  v35->fields.svtlimit = BattleServantData__getCommandDispLimitCount(PlayerServantData, 0LL);
  v35->fields.uniqueId = PlayerServantData->fields.uniqueId;
  v35->fields.svtId = BattleServantData__getSvtId(PlayerServantData, 0LL);
  v35->fields.treasureDvc = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL, 0LL);
  v39 = (BattleComboData_o *)sub_1BCAA2C(BattleComboData_TypeInfo, v36, v37, v38);
  BattleComboData___ctor(v39, 0LL);
  BattleLogicTask__setActionCommand(v28, v39, v35, v22, v40);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL, 0LL);
  v28->fields.actiontype = 4;
  v28->fields.treasureDvcId = (int)logictarget;
  v28->fields.tresureDvcLv = 1;
  if ( !v19
    || (items = v19->fields._items,
        v48 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v19->fields._version,
        !items) )
  {
LABEL_21:
    sub_1BCAA3C(logictarget, v21);
  }
  size = v19->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v19,
      (Il2CppObject *)v28,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
  }
  else
  {
    v50 = &items->obj.klass + size;
    v19->fields._size = size + 1;
    v50[4] = (Il2CppClass *)v28;
    sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 4), (int64_t)v28, v41, v42, v43, v44, v45, v46);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v19,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}