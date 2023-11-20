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
  int32_t ActorId; // w0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v8; // x21
  const MethodInfo *v9; // x4
  BattleActionData_o *v10; // x20
  BattleLogic_o *logic; // x0
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-18h] BYREF

  baseActionData = 0LL;
  if ( !task )
    goto LABEL_6;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data
    || (ServantData = BattleData__getServantData(data, ActorId, 0LL)) == 0LL
    || (v8 = ServantData,
        BattleServantData__OverwriteTreasureDevice(
          ServantData,
          task->fields.treasureDvcId,
          task->fields.tresureDvcLv,
          0LL),
        v10 = BattleLogicSpecial__createSpecialDataCommonFunction(this, &baseActionData, task, 1, v9),
        BattleServantData__ResetOverwriteTreasureDevice(v8, 0LL),
        (logic = this->fields.logic) == 0LL) )
  {
LABEL_6:
    sub_B170D4();
  }
  return BattleLogic__PrevReturnCreateActionData(logic, v10, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSpecial__createSpecialData(
        BattleLogicSpecial_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  const MethodInfo *v6; // x1
  BattleActionData_o *v7; // x20
  BattleData_o *data; // x22
  int32_t ActorId; // w0
  int32_t v10; // w21
  System_Int32_array *v11; // x0
  BattleLogic_o *logic; // x0
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FC46F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, task);
    byte_40FC46F = 1;
  }
  baseActionData = 0LL;
  v7 = BattleLogicSpecial__createSpecialDataCommonFunction(this, &baseActionData, task, 0, v3);
  if ( v7 )
  {
    if ( !task
      || (data = this->fields.data, ActorId = BattleLogicTask__getActorId(task, v6), !v7->fields.funcTargetList)
      || (v10 = ActorId,
          v11 = System_Collections_Generic_List_int___ToArray(
                  v7->fields.funcTargetList,
                  (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__),
          !data) )
    {
LABEL_10:
      sub_B170D4();
    }
    BattleData__SetWasAttackTargetIdList(data, v10, v11, 0LL);
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_10;
  return BattleLogic__PrevReturnCreateActionData(logic, v7, baseActionData, 0LL);
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
  BattleData_o *data; // x0
  const MethodInfo *v21; // x1
  BattleData_o *v22; // x22
  int32_t ActorId; // w0
  BattleServantData_o *ServantData; // x26
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  BattleActionData_o *v29; // x23
  BattleActionData_o *v30; // x24
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x1
  int32_t v38; // w0
  const MethodInfo *v39; // x4
  BattleLogicTarget_o *logictarget; // x0
  BattleCommandData_o *command; // x23
  int32_t TargetBase; // w0
  struct BattleData_o *v43; // x1
  int32_t v44; // w27
  BattleData_o *v45; // x0
  BattleLogic_o *v46; // x19
  int32_t v47; // w20
  BattleActionData_o *v48; // x21
  BattleBuffData_o *buffData; // x0
  BattleBuffData_o *v51; // x0
  WebViewManager_o *Instance; // x0
  TreasureDvcLvMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int32_t TreasureDvcId; // w0
  TreasureDvcLvEntity_o *Entity; // x21
  int32_t ChainBonus; // w0
  BattleLogic_o *logic; // x0
  int32_t NpPer; // w0
  int32_t v59; // w1
  DataVals_array *DataValsList; // x26
  DataVals_array *v61; // x21
  WebViewManager_o *v62; // x0
  __int64 v63; // x0
  __int64 v64; // x1
  System_String_array **v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  DataMasterBase_WarMaster__WarEntity__int__o *v68; // x28
  il2cpp_array_size_t v69; // w22
  struct System_Int32_array *v70; // x8
  Il2CppClass **v71; // x27
  __int64 v72; // x23
  DataVals_o *v73; // x0
  DataVals_o **v74; // x27
  DataVals_o *v75; // t1
  Il2CppClass **v76; // x25
  DataVals_o *v77; // x0
  DataVals_o **v78; // x25
  DataVals_o *v79; // t1
  BattleCommandData_o *v80; // x21
  int32_t v81; // w0
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  BattleBuffData_CheckIndividualitiesData_o *v86; // x23
  BattleBuffData_BuffData_array *NPSideEffect; // x0
  __int64 v88; // x2
  BattleBuffData_BuffData_array *v89; // x25
  System_Int32_array *funcId; // x28
  System_Array_o *v91; // x0
  __int64 v92; // x23
  __int64 v93; // x23
  DataManager_o *v94; // x0
  int max_length; // w8
  SkillLvMaster_o *v96; // x27
  __int64 v97; // x22
  BattleBuffData_BuffData_array *v98; // x21
  BattleBuffData_BuffData_o *v99; // x25
  struct System_Int32_array *targetSkill; // x8
  SkillLvEntity_o *v101; // x0
  SkillLvEntity_o *v102; // x23
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  struct System_Int32_array *v108; // x8
  __int64 param; // x25
  System_Int32_array **v110; // x23
  Il2CppClass **v111; // x0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  int32_t v118; // w27
  System_Int32_array **motionMessage; // x1
  struct BattleData_o *v120; // x8
  struct BattlePerformance_o *perf; // x8
  BattlePerformanceCommandCard_o *commandPerf; // x0
  BattleLogicFunction_o *logicfunction; // x0
  BattleBuffData_o *v124; // x0
  BattleLogic_o *v125; // x0
  BattleData_o *v126; // x0
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  struct BattleLogic_o *v131; // x8
  BattlePerformance_o *v132; // x20
  BattleActionData_o *v133; // x22
  __int64 v134; // x1
  __int64 v135; // x2
  __int64 v136; // x3
  __int64 v137; // x4
  struct BattleLogic_o *v138; // x8
  BattlePerformance_o *v139; // x24
  BattleActionWaitCond_UntilSideEffectInvisible_o *v140; // x23
  BattleActionData_o *v141; // x0
  int32_t v142; // [xsp+3Ch] [xbp-74h]
  BattleCommandData_o *v143; // [xsp+40h] [xbp-70h]
  bool v144; // [xsp+4Ch] [xbp-64h]
  BattleServantData_o *v145; // [xsp+50h] [xbp-60h]
  TreasureDvcLvEntity_o *v146; // [xsp+58h] [xbp-58h]
  BattleBuffData_BuffData_o **m_Items; // [xsp+58h] [xbp-58h]

  if ( (byte_40FC470 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, baseActionData);
    sub_B16FFC(&BattleCommandData_TypeInfo, v9);
    sub_B16FFC(&BattlePerformance_TypeInfo, v10);
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v14);
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v15);
    sub_B16FFC(&int___TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo, v19);
    byte_40FC470 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_108;
  BattleData__ResetWasAttackTargetId(data, 0LL);
  if ( !task )
    goto LABEL_108;
  v22 = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, v21);
  if ( !v22 )
    goto LABEL_108;
  ServantData = BattleData__getServantData(v22, ActorId, 0LL);
  v29 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, v25, v26, v27, v28);
  BattleActionData___ctor(v29, 0LL);
  if ( !v29 )
    goto LABEL_108;
  v30 = BattleActionData__AddDisplayTriggerIntervalBuff(v29, task, 0LL);
  *baseActionData = v30;
  sub_B16F98((BattleServantConfConponent_o *)baseActionData, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
  v38 = BattleLogicTask__getActorId(task, v37);
  if ( !v30 )
    goto LABEL_108;
  v30->fields.actorId = v38;
  logictarget = this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_108;
  command = task->fields.command;
  TargetBase = BattleLogicTarget__getTargetBase(logictarget, task->fields.targetIdlist, 0, 1, v39);
  v30->fields.targetId = TargetBase;
  if ( TargetBase >= 1 )
  {
    v43 = this->fields.data;
    if ( v43 )
    {
      if ( v43->fields.leaderDown || v43->fields.endbattleFlg )
        return 0LL;
      if ( ServantData )
      {
        v44 = TargetBase;
        if ( BattleServantData__checkUseTDvc(ServantData, v43, 1, 0LL) || isCounterOverwriteTreasureDevice )
        {
          buffData = ServantData->fields.buffData;
          if ( buffData )
          {
            BattleBuffData__ResetCommandCodeBuffActiveFlg(buffData, 0LL);
            v51 = ServantData->fields.buffData;
            if ( v51 )
            {
              BattleBuffData__ResetCommandAssistBuffActiveFlg(v51, 0LL);
              Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                MasterData_WarQuestSelectionMaster = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                TreasureDvcId = BattleServantData__getTreasureDvcId(ServantData, !isCounterOverwriteTreasureDevice, 0LL);
                if ( MasterData_WarQuestSelectionMaster )
                {
                  Entity = TreasureDvcLvMaster__GetEntity(
                             MasterData_WarQuestSelectionMaster,
                             TreasureDvcId,
                             ServantData->fields.treasuredvcLevel,
                             0LL);
                  if ( !isCounterOverwriteTreasureDevice )
                  {
                    if ( !command )
                      goto LABEL_108;
                    ChainBonus = BattleCommandData__getChainBonus(command, 0LL);
                    BattleServantData__usedTpWeapon(ServantData, ChainBonus, this->fields.data, 0LL);
                  }
                  logic = this->fields.logic;
                  if ( logic )
                  {
                    BattleLogic__updateResultServant(logic, 0LL);
                    NpPer = BattleServantData__getNpPer(ServantData, 0LL);
                    v59 = isCounterOverwriteTreasureDevice ? 100 * task->fields.counterOc : NpPer;
                    v30->fields.npPer = v59;
                    if ( Entity )
                    {
                      v142 = v44;
                      v143 = command;
                      v145 = ServantData;
                      v144 = isCounterOverwriteTreasureDevice;
                      DataValsList = TreasureDvcLvEntity__getDataValsList(Entity, v59, 0LL);
                      v146 = Entity;
                      v61 = TreasureDvcLvEntity__getDataValsList(Entity, 100, 0LL);
                      v62 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( v62 )
                      {
                        v63 = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v62,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionMaster___);
                        if ( DataValsList )
                        {
                          if ( (int)DataValsList->max_length < 1 )
                          {
LABEL_61:
                            v80 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, v64, v65, v66, v67);
                            BattleCommandData___ctor(v80, 0LL);
                            v81 = BattleServantData__getTreasureDvcId(v145, 1, 0LL);
                            if ( !v80 )
                              goto LABEL_108;
                            v80->fields.treasureDvc = v81;
                            v86 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                                                 BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                                                 v82,
                                                                                 v83,
                                                                                 v84,
                                                                                 v85);
                            BattleBuffData_CheckIndividualitiesData___ctor(v86, v145, 0LL, v80, 0LL, 0LL, 0LL);
                            NPSideEffect = BattleServantData__getNPSideEffect(v145, v86, 0LL);
                            if ( !NPSideEffect )
                              goto LABEL_108;
                            v89 = NPSideEffect;
                            funcId = v146->fields.funcId;
                            if ( *(_QWORD *)&NPSideEffect->max_length )
                            {
                              if ( !funcId )
                                goto LABEL_108;
                              v91 = (System_Array_o *)sub_B17014(int___TypeInfo, funcId->max_length, v88);
                              if ( !v146->fields.funcId )
                                goto LABEL_108;
                              funcId = (System_Int32_array *)v91;
                              System_Array__CopyTo((System_Array_o *)v146->fields.funcId, v91, 0, 0LL);
                              v92 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
                              if ( (*(_BYTE *)(v92 + 306) & 1) == 0 )
                                sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
                              v93 = **(_QWORD **)(v92 + 192);
                              if ( (*(_BYTE *)(v93 + 306) & 1) == 0 )
                                sub_AAFCFC(v93);
                              v94 = **(DataManager_o ***)(v93 + 184);
                              if ( !v94 )
                                goto LABEL_108;
                              v63 = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               v94,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
                              max_length = v89->max_length;
                              if ( max_length >= 1 )
                              {
                                v96 = (SkillLvMaster_o *)v63;
                                v97 = 0LL;
                                m_Items = v89->m_Items;
                                while ( (unsigned int)v97 < max_length )
                                {
                                  v98 = v89;
                                  v99 = m_Items[v97];
                                  if ( !v99 )
                                    goto LABEL_108;
                                  targetSkill = v99->fields.targetSkill;
                                  if ( !targetSkill )
                                    goto LABEL_108;
                                  if ( targetSkill->max_length < 2 )
                                    break;
                                  if ( !v96 )
                                    goto LABEL_108;
                                  v101 = SkillLvMaster__GetEntity(
                                           v96,
                                           targetSkill->m_Items[1],
                                           targetSkill->m_Items[2],
                                           0LL);
                                  if ( !v101 )
                                    goto LABEL_108;
                                  v102 = v101;
                                  v63 = (__int64)SkillLvEntity__getDataValsList(v101, 0LL);
                                  v108 = v102->fields.funcId;
                                  if ( !v108 )
                                    goto LABEL_108;
                                  if ( !v108->max_length )
                                    break;
                                  if ( !funcId )
                                    goto LABEL_108;
                                  param = v99->fields.param;
                                  if ( (unsigned int)param >= funcId->max_length )
                                    break;
                                  funcId->m_Items[param + 1] = v108->m_Items[1];
                                  if ( !v63 )
                                    goto LABEL_108;
                                  if ( !*(_DWORD *)(v63 + 24) )
                                    break;
                                  v110 = *(System_Int32_array ***)(v63 + 32);
                                  if ( v110 )
                                  {
                                    v63 = sub_B170BC(*(_QWORD *)(v63 + 32), DataValsList->obj.klass->_1.element_class);
                                    if ( !v63 )
                                    {
                                      sub_B170F4(0LL);
                                      sub_B170A0();
                                    }
                                  }
                                  if ( (unsigned int)param >= DataValsList->max_length )
                                    break;
                                  v111 = &DataValsList->obj.klass + param;
                                  v111[4] = (Il2CppClass *)v110;
                                  sub_B16F98(
                                    (BattleServantConfConponent_o *)(v111 + 4),
                                    v110,
                                    v65,
                                    v103,
                                    v104,
                                    v105,
                                    v106,
                                    v107);
                                  max_length = v98->max_length;
                                  ++v97;
                                  v89 = v98;
                                  if ( (int)v97 >= max_length )
                                    goto LABEL_89;
                                }
LABEL_109:
                                sub_B17100(v63, v64, v65);
                                sub_B170A0();
                              }
                            }
LABEL_89:
                            v118 = BattleServantData__getTreasureDvcId(v145, 1, 0LL);
                            v30->fields.treasureDvcId = v118;
                            if ( v144 )
                            {
                              v30->fields.isCounter = task->fields.isCounter;
                              motionMessage = (System_Int32_array **)task->fields.motionMessage;
                              v30->fields.motionMessage = (struct System_String_o *)motionMessage;
                              sub_B16F98(
                                (BattleServantConfConponent_o *)&v30->fields.motionMessage,
                                motionMessage,
                                v112,
                                v113,
                                v114,
                                v115,
                                v116,
                                v117);
                              v30->fields._MessageType_k__BackingField = task->fields.messageType;
                            }
                            else
                            {
                              v120 = this->fields.data;
                              if ( !v120 )
                                goto LABEL_108;
                              perf = v120->fields.perf;
                              if ( !perf )
                                goto LABEL_108;
                              if ( !v143 )
                                goto LABEL_108;
                              commandPerf = perf->fields.commandPerf;
                              if ( !commandPerf )
                                goto LABEL_108;
                              BattlePerformanceCommandCard__UpdateRemainingCardBuff(
                                commandPerf,
                                v143->fields.actionIndex,
                                0LL);
                            }
                            logicfunction = this->fields.logicfunction;
                            if ( logicfunction )
                            {
                              v48 = BattleLogicFunction__procList(
                                      logicfunction,
                                      v30,
                                      funcId,
                                      DataValsList,
                                      0,
                                      1,
                                      0,
                                      0,
                                      1,
                                      1,
                                      1,
                                      0LL,
                                      0,
                                      0LL);
                              BattleServantData__checkRegainNPUsedNoble(v145, 0LL);
                              v124 = v145->fields.buffData;
                              if ( v124 )
                              {
                                BattleBuffData__usedProgressing(v124, 0LL);
                                if ( !v144 )
                                {
                                  v145->fields.tmpNp = v145->fields.np;
                                  BattleServantData__changeNp(v145, 0, 0, 0LL);
                                }
                                if ( v48 )
                                {
                                  v48->fields.targetId = v142;
                                  BattleActionData__setTypeTA(v48, 0LL);
                                  BattleActionData__setCommand(v48, v143, 0LL);
                                  v48->fields.motionId = BattleServantData__getTreasureDvcMotionId(v145, 0LL);
                                  v125 = this->fields.logic;
                                  if ( v125 )
                                  {
                                    BattleLogic__updateConditionsBuffAll(v125, 0LL);
                                    v48->fields.prevattackme = 0;
                                    v48->fields.isForcedSpeedOne = task->fields.isForcedSpeedOne;
                                    v126 = this->fields.data;
                                    if ( v126 )
                                    {
                                      BattleData__setCommandAttack(v126, 0, 0, 0LL);
                                      v131 = this->fields.logic;
                                      if ( v131 )
                                      {
                                        v132 = v131->fields.perf;
                                        v133 = (BattleActionData_o *)sub_B170CC(
                                                                       BattleActionData_TypeInfo,
                                                                       v127,
                                                                       v128,
                                                                       v129,
                                                                       v130);
                                        BattleActionData___ctor(v133, 0LL);
                                        v138 = this->fields.logic;
                                        if ( v138 )
                                        {
                                          v139 = v138->fields.perf;
                                          v140 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)sub_B170CC(BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo, v134, v135, v136, v137);
                                          BattleActionWaitCond_UntilSideEffectInvisible___ctor(v140, v139, 0LL);
                                          if ( v133 )
                                          {
                                            v141 = BattleActionData__SetWaitCond(
                                                     v133,
                                                     (BattleActionWaitCond_Base_o *)v140,
                                                     0LL);
                                            if ( v132 )
                                            {
                                              BattlePerformance__addActionData_18918748(v132, v141, 0LL);
                                              v48->fields.treasureDvcId = v118;
                                              BattleActionData__SetFuncTargetAllDead(v48, this->fields.data, 0LL);
                                              return v48;
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
                            v68 = (DataMasterBase_WarMaster__WarEntity__int__o *)v63;
                            v69 = 0;
                            while ( 1 )
                            {
                              v70 = v146->fields.funcId;
                              if ( !v70 )
                                break;
                              if ( v69 >= v70->max_length )
                                goto LABEL_109;
                              if ( !v68 )
                                break;
                              v63 = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               v68,
                                               v70->m_Items[v69 + 1],
                                               (const MethodInfo_266F388 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
                              if ( v69 >= DataValsList->max_length )
                                goto LABEL_109;
                              v71 = &DataValsList->obj.klass + (int)v69;
                              v72 = v63;
                              v75 = (DataVals_o *)v71[4];
                              v74 = (DataVals_o **)(v71 + 4);
                              v73 = v75;
                              if ( !v72 )
                                break;
                              if ( !v73 )
                                break;
                              DataVals__SetTempType(v73, (FunctionMaster_o *)v68, *(_DWORD *)(v72 + 24), 0LL);
                              if ( !v61 )
                                break;
                              if ( v69 >= v61->max_length )
                                goto LABEL_109;
                              v76 = &v61->obj.klass + (int)v69;
                              v79 = (DataVals_o *)v76[4];
                              v78 = (DataVals_o **)(v76 + 4);
                              v77 = v79;
                              if ( !v79 )
                                break;
                              DataVals__SetTempType(v77, (FunctionMaster_o *)v68, *(_DWORD *)(v72 + 24), 0LL);
                              if ( v69 >= DataValsList->max_length || v69 >= v61->max_length )
                                goto LABEL_109;
                              if ( !*v74 )
                                break;
                              v63 = DataVals__CheckOverCharge(*v74, *v78, 0LL);
                              if ( (v63 & 1) != 0 )
                              {
                                if ( v69 >= DataValsList->max_length )
                                  goto LABEL_109;
                                if ( !*v74 )
                                  break;
                                DataVals__SetOverCharge(*v74, 1, 0LL);
                              }
                              if ( v69 >= DataValsList->max_length || v69 >= v61->max_length )
                                goto LABEL_109;
                              if ( !*v78 || !*v74 )
                                break;
                              DataVals__SetDependOverChargeFlag(*v74, (*v78)->fields.dependDataValsList, 0LL);
                              if ( (signed int)++v69 >= (signed int)DataValsList->max_length )
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
          v45 = this->fields.data;
          if ( v45 )
          {
            BattleData__setCommandAttack(v45, 0, 0, 0LL);
            v46 = this->fields.logic;
            v47 = v30->fields.actorId;
            if ( (BYTE3(BattlePerformance_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattlePerformance_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
            }
            if ( v46 )
            {
              BattleLogic__addBackStepActionData(
                v46,
                v47,
                BattlePerformance_TypeInfo->static_fields->AFTER_BACK_STEP_INTERVAL,
                0LL);
              return 0LL;
            }
          }
        }
      }
    }
LABEL_108:
    sub_B170D4();
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  unsigned int v17; // w20
  struct System_Int32_array *e_entryid; // x8
  int32_t v19; // w1
  BattleServantData_o *EnemyServantData; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  BattleServantData_o *v25; // x23
  __int64 v26; // x22
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x3
  System_Int32_array **FieldPlayerServantIDList; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  BattleCommandData_o *v40; // x21
  int32_t TreasureDvcCardId; // w0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  BattleComboData_o *v46; // x24
  const MethodInfo *v47; // x4
  int32_t TreasureDvcId; // w0

  if ( (byte_40FC46D & 1) == 0 )
  {
    sub_B16FFC(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_B16FFC(&BattleCommandData_TypeInfo, v7);
    sub_B16FFC(&BattleLogicTask_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    byte_40FC46D = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 16 )
    v17 = 2;
  else
    v17 = ltype == 15;
  if ( !data )
    goto LABEL_18;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_18;
  if ( v17 >= e_entryid->max_length )
  {
    sub_B17100(v14, v15, v16);
    sub_B170A0();
  }
  v19 = e_entryid->m_Items[v17 + 1];
  if ( v19 < 1 )
    goto LABEL_16;
  EnemyServantData = BattleData__getEnemyServantData(data, v19, 0LL);
  if ( !EnemyServantData )
    goto LABEL_18;
  v25 = EnemyServantData;
  if ( !EnemyServantData->fields.reservationspecial )
  {
LABEL_16:
    if ( v13 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_B170D4();
  }
  v26 = sub_B170CC(BattleLogicTask_TypeInfo, v21, v22, v23, v24);
  BattleLogicTask___ctor((BattleLogicTask_o *)v26, v27);
  if ( !v26 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v26, 3, v25->fields.uniqueId, v28);
  FieldPlayerServantIDList = (System_Int32_array **)BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v26 + 32) = FieldPlayerServantIDList;
  sub_B16F98((BattleServantConfConponent_o *)(v26 + 32), FieldPlayerServantIDList, v30, v31, v32, v33, v34, v35);
  v40 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, v36, v37, v38, v39);
  BattleCommandData___ctor(v40, 0LL);
  TreasureDvcCardId = BattleServantData__getTreasureDvcCardId(v25, 0LL);
  if ( !v40 )
    goto LABEL_18;
  v40->fields._type = TreasureDvcCardId;
  v40->fields.svtlimit = BattleServantData__getDispLimitCount(v25, 1, 0LL);
  v40->fields.uniqueId = v25->fields.uniqueId;
  v40->fields.svtId = BattleServantData__getSvtId(v25, 0LL);
  v40->fields.treasureDvc = BattleServantData__getTreasureDvcId(v25, 1, 0LL);
  v46 = (BattleComboData_o *)sub_B170CC(BattleComboData_TypeInfo, v42, v43, v44, v45);
  BattleComboData___ctor(v46, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v26, v46, v40, v17, v47);
  TreasureDvcId = BattleServantData__getTreasureDvcId(v25, 1, 0LL);
  *(_DWORD *)(v26 + 48) = 4;
  *(_DWORD *)(v26 + 84) = TreasureDvcId;
  *(_DWORD *)(v26 + 88) = 1;
  if ( !v13 )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v13,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicSpecial__taskEnemyTresureDvcAlways(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  unsigned int v17; // w20
  struct System_Int32_array *e_entryid; // x8
  int32_t v19; // w1
  BattleServantData_o *EnemyServantData; // x0
  BattleServantData_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x23
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x3
  System_Int32_array **FieldPlayerServantIDList; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  BattleCommandData_o *v40; // x21
  int32_t TreasureDvcCardId; // w0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  BattleComboData_o *v46; // x24
  const MethodInfo *v47; // x4
  int32_t TreasureDvcId; // w0

  if ( (byte_40FC46E & 1) == 0 )
  {
    sub_B16FFC(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_B16FFC(&BattleCommandData_TypeInfo, v7);
    sub_B16FFC(&BattleLogicTask_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    byte_40FC46E = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 23 )
    v17 = 2;
  else
    v17 = ltype == 22;
  if ( !data )
    goto LABEL_18;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_18;
  if ( v17 >= e_entryid->max_length )
  {
    sub_B17100(v14, v15, v16);
    sub_B170A0();
  }
  v19 = e_entryid->m_Items[v17 + 1];
  if ( v19 < 1 )
    goto LABEL_16;
  EnemyServantData = BattleData__getEnemyServantData(data, v19, 0LL);
  if ( !EnemyServantData )
    goto LABEL_18;
  v21 = EnemyServantData;
  if ( BattleServantData__getTreasureDvcId(EnemyServantData, 1, 0LL) < 1 )
  {
LABEL_16:
    if ( v13 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_B170D4();
  }
  v26 = sub_B170CC(BattleLogicTask_TypeInfo, v22, v23, v24, v25);
  BattleLogicTask___ctor((BattleLogicTask_o *)v26, v27);
  if ( !v26 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v26, 3, v21->fields.uniqueId, v28);
  FieldPlayerServantIDList = (System_Int32_array **)BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  *(_QWORD *)(v26 + 32) = FieldPlayerServantIDList;
  sub_B16F98((BattleServantConfConponent_o *)(v26 + 32), FieldPlayerServantIDList, v30, v31, v32, v33, v34, v35);
  v40 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, v36, v37, v38, v39);
  BattleCommandData___ctor(v40, 0LL);
  TreasureDvcCardId = BattleServantData__getTreasureDvcCardId(v21, 0LL);
  if ( !v40 )
    goto LABEL_18;
  v40->fields._type = TreasureDvcCardId;
  v40->fields.svtlimit = BattleServantData__getDispLimitCount(v21, 1, 0LL);
  v40->fields.uniqueId = v21->fields.uniqueId;
  v40->fields.svtId = BattleServantData__getSvtId(v21, 0LL);
  v40->fields.treasureDvc = BattleServantData__getTreasureDvcId(v21, 1, 0LL);
  v46 = (BattleComboData_o *)sub_B170CC(BattleComboData_TypeInfo, v42, v43, v44, v45);
  BattleComboData___ctor(v46, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v26, v46, v40, v17, v47);
  TreasureDvcId = BattleServantData__getTreasureDvcId(v21, 1, 0LL);
  *(_DWORD *)(v26 + 48) = 4;
  *(_DWORD *)(v26 + 84) = TreasureDvcId;
  *(_DWORD *)(v26 + 88) = 1;
  if ( !v13 )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v13,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicSpecial__taskTresureDvc(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  unsigned int v17; // w20
  struct System_Int32_array *p_entryid; // x8
  BattleServantData_o *PlayerServantData; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  BattleServantData_o *v24; // x23
  __int64 v25; // x22
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x3
  System_Int32_array **FieldEnemyServantIDList; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  BattleCommandData_o *v39; // x21
  int32_t TreasureDvcCardId; // w0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  BattleComboData_o *v45; // x24
  const MethodInfo *v46; // x4
  int32_t TreasureDvcId; // w0

  if ( (byte_40FC46B & 1) == 0 )
  {
    sub_B16FFC(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_B16FFC(&BattleCommandData_TypeInfo, v7);
    sub_B16FFC(&BattleLogicTask_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    byte_40FC46B = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 8 )
    v17 = 2;
  else
    v17 = ltype == 7;
  if ( !data )
    goto LABEL_17;
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_17;
  if ( v17 >= p_entryid->max_length )
  {
    sub_B17100(v14, v15, v16);
    sub_B170A0();
  }
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v17 + 1], 0LL);
  if ( !PlayerServantData || (v24 = PlayerServantData, !PlayerServantData->fields.reservationspecial) )
  {
    if ( v13 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_17:
    sub_B170D4();
  }
  v25 = sub_B170CC(BattleLogicTask_TypeInfo, v20, v21, v22, v23);
  BattleLogicTask___ctor((BattleLogicTask_o *)v25, v26);
  if ( !v25 )
    goto LABEL_17;
  BattleLogicTask__setActor((BattleLogicTask_o *)v25, 2, v24->fields.uniqueId, v27);
  FieldEnemyServantIDList = (System_Int32_array **)BattleData__getFieldEnemyServantIDList(data, 1, 0LL);
  *(_QWORD *)(v25 + 32) = FieldEnemyServantIDList;
  sub_B16F98((BattleServantConfConponent_o *)(v25 + 32), FieldEnemyServantIDList, v29, v30, v31, v32, v33, v34);
  v39 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, v35, v36, v37, v38);
  BattleCommandData___ctor(v39, 0LL);
  TreasureDvcCardId = BattleServantData__getTreasureDvcCardId(v24, 0LL);
  if ( !v39 )
    goto LABEL_17;
  v39->fields._type = TreasureDvcCardId;
  v39->fields.svtlimit = BattleServantData__getCommandDispLimitCount(v24, 0LL);
  v39->fields.uniqueId = v24->fields.uniqueId;
  v39->fields.svtId = BattleServantData__getSvtId(v24, 0LL);
  v39->fields.treasureDvc = BattleServantData__getTreasureDvcId(v24, 1, 0LL);
  v45 = (BattleComboData_o *)sub_B170CC(BattleComboData_TypeInfo, v41, v42, v43, v44);
  BattleComboData___ctor(v45, 0LL);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v25, v45, v39, v17, v46);
  TreasureDvcId = BattleServantData__getTreasureDvcId(v24, 1, 0LL);
  *(_DWORD *)(v25 + 48) = 4;
  *(_DWORD *)(v25 + 84) = TreasureDvcId;
  *(_DWORD *)(v25 + 88) = 1;
  if ( !v13 )
    goto LABEL_17;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v13,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicSpecial__taskTresureDvcAlways(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  unsigned int v18; // w20
  struct System_Int32_array *p_entryid; // x8
  BattleServantData_o *PlayerServantData; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  BattleLogicTask_o *v25; // x22
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2
  BattleLogicTarget_o *logictarget; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  BattleCommandData_o *v34; // x21
  int32_t TreasureDvcCardId; // w0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  BattleComboData_o *v40; // x24
  const MethodInfo *v41; // x4
  int32_t TreasureDvcId; // w0

  if ( (byte_40FC46C & 1) == 0 )
  {
    sub_B16FFC(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_B16FFC(&BattleCommandData_TypeInfo, v8);
    sub_B16FFC(&BattleLogicTask_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    byte_40FC46C = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 6 )
  {
    v18 = 0;
    if ( !data )
      goto LABEL_18;
  }
  else if ( ltype == 7 )
  {
    v18 = 1;
    if ( !data )
      goto LABEL_18;
  }
  else
  {
    v18 = 2 * (ltype == 8);
    if ( !data )
      goto LABEL_18;
  }
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_18;
  if ( v18 >= p_entryid->max_length )
  {
    sub_B17100(v15, v16, v17);
    sub_B170A0();
  }
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v18 + 1], 0LL);
  v25 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v21, v22, v23, v24);
  BattleLogicTask___ctor(v25, v26);
  if ( !PlayerServantData )
    goto LABEL_18;
  if ( !v25 )
    goto LABEL_18;
  BattleLogicTask__setActor(v25, 2, PlayerServantData->fields.uniqueId, v27);
  logictarget = this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_18;
  BattleLogicTarget__getTargetBattleServantData(logictarget, v25, v28);
  v34 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, v30, v31, v32, v33);
  BattleCommandData___ctor(v34, 0LL);
  TreasureDvcCardId = BattleServantData__getTreasureDvcCardId(PlayerServantData, 0LL);
  if ( !v34 )
    goto LABEL_18;
  v34->fields._type = TreasureDvcCardId;
  v34->fields.svtlimit = BattleServantData__getCommandDispLimitCount(PlayerServantData, 0LL);
  v34->fields.uniqueId = PlayerServantData->fields.uniqueId;
  v34->fields.svtId = BattleServantData__getSvtId(PlayerServantData, 0LL);
  v34->fields.treasureDvc = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL);
  v40 = (BattleComboData_o *)sub_B170CC(BattleComboData_TypeInfo, v36, v37, v38, v39);
  BattleComboData___ctor(v40, 0LL);
  BattleLogicTask__setActionCommand(v25, v40, v34, v18, v41);
  TreasureDvcId = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0LL);
  v25->fields.actiontype = 4;
  v25->fields.treasureDvcId = TreasureDvcId;
  v25->fields.tresureDvcLv = 1;
  if ( !v14 )
LABEL_18:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v14,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}