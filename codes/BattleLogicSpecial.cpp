void BattleLogicSpecial___ctor(BattleLogicSpecial_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicSpecial__TryAddSkillTaskPreBeforeOtherTd(
        BattleLogicSpecial_o *this,
        BattleLogicTask_o *task,
        BattleServantData_array *svtDataList,
        int32_t actorId,
        const MethodInfo *method)
{
  BattleAddSkillTaskPreBeforeOtherTreasureDevice_o *v9; // x23
  BattleLogicSpecial___c_c *v10; // x0
  System_Comparison_T__o *_9__11_0; // x24
  Il2CppObject *v12; // x25
  struct BattleLogicSpecial___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  BattleBuffData_BuffData_array *BuffList; // x0
  __int64 v21; // x1
  int max_length; // w8
  bool v23; // w26
  int v24; // w27
  BattleServantData_o *v25; // x24
  int32_t uniqueId; // w1
  BattleLogic_o *logic; // x25
  System_Nullable_int__o p_actorIda; // x0
  System_Nullable_int__o v29; // x4
  System_Nullable_int__o actorIda; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D2FBE0 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Sort_BattleServantData___);
    sub_1C94098(&BattleAddSkillTaskPreBeforeOtherTreasureDevice_TypeInfo);
    sub_1C94098(&System_Comparison_BattleServantData__TypeInfo);
    sub_1C94098(&Method_System_Nullable_int___ctor__);
    sub_1C94098(&Method_BattleLogicSpecial___c__TryAddSkillTaskPreBeforeOtherTd_b__11_0__);
    sub_1C94098(&BattleLogicSpecial___c_TypeInfo);
    byte_4D2FBE0 = 1;
  }
  v9 = (BattleAddSkillTaskPreBeforeOtherTreasureDevice_o *)sub_1C942E4(BattleAddSkillTaskPreBeforeOtherTreasureDevice_TypeInfo);
  BattleAddSkillTaskPreBeforeOtherTreasureDevice___ctor(v9, 0);
  v10 = BattleLogicSpecial___c_TypeInfo;
  if ( !BattleLogicSpecial___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicSpecial___c_TypeInfo);
    v10 = BattleLogicSpecial___c_TypeInfo;
  }
  _9__11_0 = (System_Comparison_T__o *)v10->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = BattleLogicSpecial___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__11_0 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_BattleServantData__TypeInfo);
    System_Comparison_object____ctor(
      _9__11_0,
      v12,
      Method_BattleLogicSpecial___c__TryAddSkillTaskPreBeforeOtherTd_b__11_0__,
      0);
    static_fields = BattleLogicSpecial___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_BattleServantData__o *)_9__11_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__11_0,
      (int32_t)_9__11_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  System_Array__Sort_object__51807060(
    (System_Object_array *)svtDataList,
    _9__11_0,
    (const MethodInfo_3168354 *)Method_System_Array_Sort_BattleServantData___);
  if ( !svtDataList )
    goto LABEL_22;
  max_length = svtDataList->max_length;
  v23 = max_length > 0;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)max_length )
        sub_1C942F8(BuffList);
      v25 = svtDataList->m_Items[v24];
      if ( !v25 )
        break;
      if ( !v25->fields.isEntry || v25->fields.uniqueId == actorId )
        goto LABEL_26;
      BuffList = BattleServantData__getBuffList(v25, 166, 1, 0, 0);
      if ( !BuffList )
        break;
      if ( !BuffList->max_length )
        goto LABEL_26;
      uniqueId = v25->fields.uniqueId;
      logic = this->fields.logic;
      p_actorIda = (System_Nullable_int__o)&actorIda;
      actorIda = 0;
      System_Nullable_int____ctor(p_actorIda, uniqueId, (const MethodInfo_39933EC *)Method_System_Nullable_int___ctor__);
      if ( !logic )
        break;
      v29 = actorIda;
      BuffList = (BattleBuffData_BuffData_array *)BattleLogic__AddSkillTask(
                                                    logic,
                                                    (BattleAddSkillTaskAroundTargetTask_o *)v9,
                                                    task,
                                                    actorId,
                                                    v29,
                                                    0);
      if ( ((unsigned __int8)BuffList & 1) == 0 )
      {
LABEL_26:
        max_length = svtDataList->max_length;
        v23 = ++v24 < max_length;
        if ( v24 < max_length )
          continue;
      }
      return v23;
    }
LABEL_22:
    sub_1C942F0(BuffList, v21);
  }
  return v23;
}


BattleActionData_o *BattleLogicSpecial__createCounterOverwriteSpecialData(
        BattleLogicSpecial_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_o *v3; // x20
  BattleLogicSpecial_o *v4; // x19
  struct System_Int32_array *actorIdlist; // x8
  BattleServantData_o *v6; // x21
  bool isAlive; // w8
  BattleActionData_o *result; // x0
  BattleTreasureDeviceCommandData_o *v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x4
  BattleActionData_o *v17; // x20
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-28h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_4D2FBDE & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1C94098(&BattleTreasureDeviceCommandData_TypeInfo);
    byte_4D2FBDE = 1;
  }
  baseActionData = 0;
  if ( !v3 )
LABEL_16:
    sub_1C942F0(this, task);
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicSpecial_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      sub_1C942F8(this);
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[0];
    if ( !this )
      goto LABEL_16;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_16;
  }
  this = (BattleLogicSpecial_o *)BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0);
  v6 = (BattleServantData_o *)this;
  if ( v3->fields.checkAlive )
  {
    if ( !this )
      goto LABEL_16;
    isAlive = BattleServantData__isAlive((BattleServantData_o *)this, 0, 0);
    result = 0;
    if ( !isAlive )
      return result;
  }
  else if ( !this )
  {
    goto LABEL_16;
  }
  BattleServantData__OverwriteTreasureDevice(v6, v3->fields.treasureDvcId, v3->fields.tresureDvcLv, 0);
  v9 = (BattleTreasureDeviceCommandData_o *)sub_1C942E4(BattleTreasureDeviceCommandData_TypeInfo);
  BattleTreasureDeviceCommandData___ctor(v9, v6, 0);
  v3->fields.command = (struct BattleCommandData_o *)v9;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v3->fields.command, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  v17 = BattleLogicSpecial__createSpecialDataCommonFunction(v4, &baseActionData, v3, 1, v16);
  BattleServantData__ResetOverwriteTreasureDevice(v6, 0);
  this = (BattleLogicSpecial_o *)v4->fields.logic;
  if ( !this )
    goto LABEL_16;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)this, v17, baseActionData, 0);
}


BattleActionData_o *BattleLogicSpecial__createSpecialData(
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
  BattleData_o *data; // x22
  int32_t v11; // w23
  OverwriteTreasureDeviceData_o *OverwriteTdData_k__BackingField; // x0
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-38h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_4D2FBDD & 1) == 0 )
  {
    this = (BattleLogicSpecial_o *)sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4D2FBDD = 1;
  }
  baseActionData = 0;
  if ( !v3 )
    goto LABEL_23;
  actorIdlist = v3->fields.actorIdlist;
  this = (BattleLogicSpecial_o *)v4->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      goto LABEL_24;
    task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[0];
    if ( !this )
      goto LABEL_23;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !this )
      goto LABEL_23;
  }
  ServantData = BattleData__getServantData((BattleData_o *)this, (int32_t)task, 0);
  if ( v3->fields._OverwriteTdData_k__BackingField )
    OverwriteTreasureDeviceData__Overwrite(v3->fields._OverwriteTdData_k__BackingField, ServantData, 0);
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
    if ( LODWORD(v9->max_length) )
    {
      v11 = v9->m_Items[0];
LABEL_18:
      this = (BattleLogicSpecial_o *)this[6].monitor;
      if ( this )
      {
        this = (BattleLogicSpecial_o *)System_Collections_Generic_List_int___ToArray(
                                         (System_Collections_Generic_List_int__o *)this,
                                         (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( data )
        {
          BattleData__SetWasAttackTargetIdList(data, v11, (System_Int32_array *)this, 0);
          ((void (__fastcall *)(BattleLogicTask_o *, struct BattleData_o *, __int64, const MethodInfo *))v3->klass->vtable._10_SetAttacked.methodPtr)(
            v3,
            v4->fields.data,
            1,
            v3->klass->vtable._10_SetAttacked.method);
          goto LABEL_21;
        }
      }
LABEL_23:
      sub_1C942F0(this, task);
    }
LABEL_24:
    sub_1C942F8(this);
  }
  OverwriteTdData_k__BackingField = v3->fields._OverwriteTdData_k__BackingField;
  if ( OverwriteTdData_k__BackingField )
    OverwriteTreasureDeviceData__Reset(OverwriteTdData_k__BackingField, ServantData, 0);
LABEL_21:
  this = (BattleLogicSpecial_o *)v4->fields.logic;
  if ( !this )
    goto LABEL_23;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)this, v8, baseActionData, 0);
}


BattleActionData_o *BattleLogicSpecial__createSpecialDataCommonFunction(
        BattleLogicSpecial_o *this,
        BattleActionData_o **baseActionData,
        BattleLogicTask_o *task,
        bool isCounterOverwriteTreasureDevice,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *v7; // x23
  __int64 data; // x0
  struct System_Int32_array *actorIdlist; // x8
  BattleServantData_o *ServantData; // x22
  BattleActionData_o *v12; // x24
  BattleActionData_o *v13; // x25
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Int32_array *v20; // x8
  int v21; // w8
  BattleLogicTarget_o *logictarget; // x23
  struct BattleCommandData_o *v23; // x21
  UpHateData_array *Array; // x0
  const MethodInfo *v25; // x4
  int32_t v26; // w23
  int32_t np; // w21
  int32_t maxtpturn; // w29
  int32_t nexttpturn; // w27
  Il2CppObject *MasterData_object; // x24
  BattleData_o *v31; // x8
  BattleServantData_array *FieldAliveServantArray; // x0
  const MethodInfo *v33; // x4
  BattleLogic_o *logic; // x19
  int32_t actorId; // w20
  BattleActionData_o *v36; // x27
  BattleLogic_o *v38; // x24
  BattleAddSkillTaskBeforeCounterTreasureDevice_o *v39; // x27
  System_Nullable_int__o v40; // x4
  bool v41; // w0
  BattleAddSkillTaskBeforeTreasureDevice_o *v42; // x27
  System_Nullable_int__o v43; // x4
  int32_t ChainBonus; // w0
  int32_t v45; // w0
  TreasureDvcLvEntity_o *v46; // x27
  DataVals_array *DataValsList; // x26
  DataVals_array *v48; // x24
  DataVals_array *v49; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v50; // x29
  unsigned int v51; // w21
  struct System_Int32_array *funcId; // x8
  Il2CppClass **v53; // x26
  __int64 v54; // x28
  __int64 *v55; // x26
  __int64 v56; // t1
  Il2CppClass **v57; // x27
  DataVals_o **v58; // x27
  __int64 v59; // t1
  DataVals_o *v60; // x8
  BattleCommandData_o *v61; // x24
  BattleBuffData_CheckIndividualitiesData_o *v62; // x28
  struct System_Int32_array *v63; // x9
  __int64 v64; // x29
  long double v65; // q0
  __int64 v66; // x0
  __int64 v67; // x0
  int v68; // w8
  SkillLvMaster_o *v69; // x28
  __int64 v70; // x21
  __int64 v71; // x26
  _DWORD *v72; // x8
  __int64 v73; // x24
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  __int64 v80; // x8
  __int64 v81; // x26
  Il2CppClass *v82; // x24
  Il2CppClass **v83; // x0
  int32_t TreasureDvcId; // w0
  int32_t v85; // w29
  BattleLogicFunction_FunctionArgument_o *argument; // x24
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v94; // x8
  struct BattlePerformance_o *perf; // x8
  BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *v96; // x28
  int32_t TreasureDvcMotionId; // w0
  int OverwriteTdMotionId; // w8
  struct BattleLogic_o *v99; // x8
  BattlePerformance_o *v100; // x24
  BattleActionData_o *v101; // x25
  struct BattleLogic_o *v102; // x8
  BattlePerformance_o *v103; // x28
  BattleActionWaitCond_UntilSideEffectInvisible_o *v104; // x26
  BattleLogic_o *v105; // x24
  BattleAddSkillTaskAfterCounterTreasureDevice_o *v106; // x21
  System_Nullable_int__o v107; // x4
  __int64 v108; // x19
  int v109; // w8
  unsigned int v110; // w20
  __int64 v111; // x0
  int32_t v112; // [xsp+30h] [xbp-90h]
  int32_t v113; // [xsp+34h] [xbp-8Ch]
  bool v114; // [xsp+38h] [xbp-88h]
  int32_t v115; // [xsp+3Ch] [xbp-84h]
  BattleCommandData_o *command; // [xsp+40h] [xbp-80h]
  TreasureDvcLvEntity_o *v117; // [xsp+50h] [xbp-70h]
  TreasureDvcLvEntity_o *v118; // [xsp+50h] [xbp-70h]
  DataVals_array *baseValslist; // [xsp+58h] [xbp-68h]

  v7 = (GrandQuestFolderBoardItem_o *)baseActionData;
  if ( (byte_4D2FBDF & 1) == 0 )
  {
    sub_1C94098(&BattleActionData_TypeInfo);
    sub_1C94098(&BattleAddSkillTaskAfterCounterTreasureDevice_TypeInfo);
    sub_1C94098(&BattleAddSkillTaskAfterTreasureDevice_TypeInfo);
    sub_1C94098(&BattleAddSkillTaskBeforeCounterTreasureDevice_TypeInfo);
    sub_1C94098(&BattleAddSkillTaskBeforeTreasureDevice_TypeInfo);
    sub_1C94098(&BattleCommandData_TypeInfo);
    sub_1C94098(&BattlePerformance_TypeInfo);
    sub_1C94098(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C94098(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C94098(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
    sub_1C94098(&BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
    byte_4D2FBDF = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_156;
  BattleData__ResetWasAttackTargetId((BattleData_o *)data, 0);
  if ( !task )
    goto LABEL_156;
  if ( task->fields.IsResetFunctionedFunctionIds )
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_156;
    BattleData__ResetFunctionedFunctionIds((BattleData_o *)data, 0);
  }
  actorIdlist = task->fields.actorIdlist;
  data = (__int64)this->fields.data;
  if ( actorIdlist )
  {
    if ( !LODWORD(actorIdlist->max_length) )
      goto LABEL_157;
    baseActionData = (BattleActionData_o **)(unsigned int)actorIdlist->m_Items[0];
    if ( !data )
      goto LABEL_156;
  }
  else
  {
    baseActionData = (BattleActionData_o **)0xFFFFFFFFLL;
    if ( !data )
      goto LABEL_156;
  }
  ServantData = BattleData__getServantData((BattleData_o *)data, (int32_t)baseActionData, 0);
  v12 = (BattleActionData_o *)sub_1C942E4(BattleActionData_TypeInfo);
  BattleActionData___ctor(v12, 0);
  if ( !v12 )
    goto LABEL_156;
  v13 = BattleActionData__AddDisplayTriggerIntervalBuff(v12, task, 0);
  v7->klass = (GrandQuestFolderBoardItem_c *)v13;
  sub_1C9403C(v7, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  if ( !ServantData )
    goto LABEL_156;
  data = BattleServantData__isAlive(ServantData, 0, 0);
  if ( (data & 1) == 0 && ServantData->fields.isDeadAnime )
    return 0;
  v20 = task->fields.actorIdlist;
  if ( v20 )
  {
    if ( !LODWORD(v20->max_length) )
      goto LABEL_157;
    v21 = v20->m_Items[0];
    if ( !v13 )
      goto LABEL_156;
  }
  else
  {
    v21 = -1;
    if ( !v13 )
      goto LABEL_156;
  }
  v13->fields.actorId = v21;
  logictarget = this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_156;
  v23 = task->fields.command;
  Array = UpHateData__MakeArray((System_Collections_Generic_IEnumerable_int__o *)task->fields.targetIdlist, 0);
  data = BattleLogicTarget__getTargetBase_47937488(logictarget, Array, 0, 1, v25);
  v13->fields.targetId = data;
  if ( (int)data < 1 )
    return 0;
  baseActionData = (BattleActionData_o **)this->fields.data;
  if ( !baseActionData )
    goto LABEL_156;
  if ( *((_BYTE *)baseActionData + 296) || *((_BYTE *)baseActionData + 297) )
    return 0;
  v26 = data;
  if ( !BattleServantData__checkUseTDvc(
          ServantData,
          (BattleData_o *)baseActionData,
          1,
          task->fields._OverwriteTdData_k__BackingField,
          0)
    && !isCounterOverwriteTreasureDevice
    || !BattleServantData__isAction(ServantData, 0) )
  {
    data = (__int64)this->fields.data;
    if ( data )
    {
      BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0);
      logic = this->fields.logic;
      actorId = v13->fields.actorId;
      data = (__int64)BattlePerformance_TypeInfo;
      if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
      if ( logic )
      {
        BattleLogic__addBackStepActionData(
          logic,
          actorId,
          BattlePerformance_TypeInfo->static_fields->AFTER_BACK_STEP_INTERVAL,
          0);
        return 0;
      }
    }
    goto LABEL_156;
  }
  data = (__int64)ServantData->fields.buffData;
  command = v23;
  if ( !data )
    goto LABEL_156;
  np = ServantData->fields.np;
  maxtpturn = ServantData->fields.maxtpturn;
  nexttpturn = ServantData->fields.nexttpturn;
  BattleBuffData__ResetCommandCodeBuffActiveFlg((BattleBuffData_o *)data, 0);
  data = (__int64)ServantData->fields.buffData;
  if ( !data )
    goto LABEL_156;
  BattleBuffData__ResetCommandAssistBuffActiveFlg((BattleBuffData_o *)data, 0);
  data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_156;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
  data = BattleServantData__getTreasureDvcId(ServantData, !isCounterOverwriteTreasureDevice, 0, 0);
  if ( !MasterData_object )
    goto LABEL_156;
  data = (__int64)TreasureDvcLvMaster__GetEntity(
                    (TreasureDvcLvMaster_o *)MasterData_object,
                    data,
                    ServantData->fields.treasuredvcLevel,
                    0);
  v31 = this->fields.data;
  v117 = (TreasureDvcLvEntity_o *)data;
  if ( !v31 )
    goto LABEL_156;
  FieldAliveServantArray = BattleData__GetFieldAliveServantArray(v31, 3, 1, 0, 0);
  if ( BattleLogicSpecial__TryAddSkillTaskPreBeforeOtherTd(this, task, FieldAliveServantArray, v13->fields.actorId, v33) )
  {
    if ( !isCounterOverwriteTreasureDevice )
    {
LABEL_51:
      data = (__int64)command;
      if ( !command )
        goto LABEL_156;
      ChainBonus = BattleCommandData__getChainBonus(command, 0);
      BattleServantData__UsedTpWeapon(ServantData, ChainBonus, this->fields.data, 1, 0);
    }
    return 0;
  }
  v38 = this->fields.logic;
  v115 = nexttpturn;
  if ( !isCounterOverwriteTreasureDevice )
  {
    v42 = (BattleAddSkillTaskBeforeTreasureDevice_o *)sub_1C942E4(BattleAddSkillTaskBeforeTreasureDevice_TypeInfo);
    BattleAddSkillTaskBeforeTreasureDevice___ctor(v42, 0);
    if ( !v38 )
      goto LABEL_156;
    v43 = 0;
    if ( BattleLogic__AddSkillTask(v38, (BattleAddSkillTaskAroundTargetTask_o *)v42, task, v26, v43, 0) )
      goto LABEL_51;
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_156;
    BattleLogic__AddUnExecutedUpdateIntervalBuffActionData((BattleLogic_o *)data, 0);
    data = (__int64)command;
    if ( !command )
      goto LABEL_156;
    v45 = BattleCommandData__getChainBonus(command, 0);
    BattleServantData__UsedTpWeapon(ServantData, v45, this->fields.data, 0, 0);
    goto LABEL_56;
  }
  v39 = (BattleAddSkillTaskBeforeCounterTreasureDevice_o *)sub_1C942E4(BattleAddSkillTaskBeforeCounterTreasureDevice_TypeInfo);
  BattleAddSkillTaskBeforeCounterTreasureDevice___ctor(v39, 0);
  if ( !v38 )
    goto LABEL_156;
  v40 = 0;
  v41 = BattleLogic__AddSkillTask(v38, (BattleAddSkillTaskAroundTargetTask_o *)v39, task, v26, v40, 0);
  v36 = 0;
  if ( !v41 )
  {
LABEL_56:
    BattleServantData__BeginNoblePhantasmPerformance(ServantData, 0);
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_156;
    BattleLogic__updateResultServant((BattleLogic_o *)data, 0);
    data = BattleServantData__getNpPer(ServantData, 0);
    v46 = v117;
    baseActionData = isCounterOverwriteTreasureDevice
                   ? (BattleActionData_o **)(unsigned int)(100 * task->fields.counterOc)
                   : (BattleActionData_o **)(unsigned int)data;
    v13->fields.npPer = (int)baseActionData;
    if ( !v117 )
      goto LABEL_156;
    v113 = maxtpturn;
    v114 = isCounterOverwriteTreasureDevice;
    DataValsList = TreasureDvcLvEntity__getDataValsList(v117, (int32_t)baseActionData, 0);
    v48 = TreasureDvcLvEntity__getDataValsList(v117, 100, 0);
    data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !data )
      goto LABEL_156;
    v112 = np;
    data = (__int64)DataManager__GetMasterData_object_(
                      (DataManager_o *)data,
                      (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_FunctionMaster___);
    if ( !DataValsList )
      goto LABEL_156;
    v49 = DataValsList;
    baseValslist = DataValsList;
    if ( SLODWORD(DataValsList->max_length) >= 1 )
    {
      v50 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
      v51 = 0;
      do
      {
        funcId = v46->fields.funcId;
        if ( !funcId )
          goto LABEL_156;
        if ( v51 >= LODWORD(funcId->max_length) )
          goto LABEL_157;
        if ( !v50 )
          goto LABEL_156;
        data = (__int64)DataMasterBase_object__object__int___GetEntity(
                          v50,
                          funcId->m_Items[v51],
                          (const MethodInfo_345B4C0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( v51 >= LODWORD(v49->max_length) )
          goto LABEL_157;
        v53 = &v49->obj.klass + (int)v51;
        v54 = data;
        v56 = (__int64)v53[4];
        v55 = (__int64 *)(v53 + 4);
        data = v56;
        if ( !v54 )
          goto LABEL_156;
        if ( !data )
          goto LABEL_156;
        DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v50, *(_DWORD *)(v54 + 24), 0);
        if ( !v48 )
          goto LABEL_156;
        if ( v51 >= LODWORD(v48->max_length) )
          goto LABEL_157;
        v57 = &v48->obj.klass + (int)v51;
        v59 = (__int64)v57[4];
        v58 = (DataVals_o **)(v57 + 4);
        data = v59;
        if ( !v59 )
          goto LABEL_156;
        DataVals__SetTempType((DataVals_o *)data, (FunctionMaster_o *)v50, *(_DWORD *)(v54 + 24), 0);
        v49 = baseValslist;
        if ( v51 >= LODWORD(baseValslist->max_length) || v51 >= LODWORD(v48->max_length) )
          goto LABEL_157;
        data = *v55;
        if ( !*v55 )
          goto LABEL_156;
        data = DataVals__CheckOverCharge((DataVals_o *)data, *v58, 0);
        if ( (data & 1) != 0 )
        {
          if ( v51 >= LODWORD(baseValslist->max_length) )
            goto LABEL_157;
          data = *v55;
          if ( !*v55 )
            goto LABEL_156;
          DataVals__SetOverCharge((DataVals_o *)data, 1, 0);
        }
        if ( v51 >= LODWORD(baseValslist->max_length) || v51 >= LODWORD(v48->max_length) )
          goto LABEL_157;
        v60 = *v58;
        if ( !*v58 )
          goto LABEL_156;
        data = *v55;
        v46 = v117;
        if ( !*v55 )
          goto LABEL_156;
        DataVals__SetDependOverChargeFlag((DataVals_o *)data, v60->fields.dependDataValsList, 0);
      }
      while ( (signed int)++v51 < SLODWORD(baseValslist->max_length) );
    }
    v61 = (BattleCommandData_o *)sub_1C942E4(BattleCommandData_TypeInfo);
    BattleCommandData___ctor(v61, 0);
    data = BattleServantData__getTreasureDvcId(ServantData, 1, 0, 0);
    if ( !v61 )
      goto LABEL_156;
    v61->fields.treasureDvc = data;
    v62 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C942E4(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_46734412(v62, ServantData, 0, v61, 0, 0, 0, 1, 0);
    data = (__int64)BattleServantData__getNPSideEffect(ServantData, v62, 0);
    if ( !data )
      goto LABEL_156;
    v63 = v46->fields.funcId;
    v64 = data;
    if ( *(_QWORD *)(data + 24) )
    {
      if ( !v63 )
        goto LABEL_156;
      data = sub_1C94140(int___TypeInfo, LODWORD(v63->max_length));
      if ( !v46->fields.funcId )
        goto LABEL_156;
      v118 = (TreasureDvcLvEntity_o *)data;
      System_Array__CopyTo((System_Array_o *)v46->fields.funcId, (System_Array_o *)data, 0, 0);
      v66 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v66 + 309) & 1) == 0 )
        v66 = sub_1C6A12C(v65);
      v67 = *(_QWORD *)(*(_QWORD *)(v66 + 192) + 16LL);
      if ( (*(_BYTE *)(v67 + 309) & 1) == 0 )
        v67 = sub_1C6A12C(v65);
      data = **(_QWORD **)(v67 + 184);
      if ( !data )
        goto LABEL_156;
      data = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      v68 = *(_DWORD *)(v64 + 24);
      if ( v68 >= 1 )
      {
        v69 = (SkillLvMaster_o *)data;
        v70 = 0;
        while ( (unsigned int)v70 < v68 )
        {
          v71 = *(_QWORD *)(v64 + 32 + 8 * v70);
          if ( !v71 )
            goto LABEL_156;
          v72 = *(_DWORD **)(v71 + 104);
          if ( !v72 )
            goto LABEL_156;
          if ( v72[6] < 2u )
            goto LABEL_157;
          if ( !v69 )
            goto LABEL_156;
          data = (__int64)SkillLvMaster__GetEntity(v69, v72[8], v72[9], 0);
          if ( !data )
            goto LABEL_156;
          v73 = data;
          data = (__int64)SkillLvEntity__getDataValsList((SkillLvEntity_o *)data, 0);
          v80 = *(_QWORD *)(v73 + 32);
          if ( !v80 )
            goto LABEL_156;
          if ( !*(_DWORD *)(v80 + 24) )
            goto LABEL_157;
          if ( !v118 )
            goto LABEL_156;
          v81 = *(int *)(v71 + 28);
          if ( (unsigned int)v81 >= v118->fields.gaugeCount )
            goto LABEL_157;
          *((_DWORD *)&v118->fields.funcId + v81) = *(_DWORD *)(v80 + 32);
          if ( !data )
            goto LABEL_156;
          if ( !*(_DWORD *)(data + 24) )
            goto LABEL_157;
          v82 = *(Il2CppClass **)(data + 32);
          if ( v82 )
          {
            data = sub_1C941D4(*(_QWORD *)(data + 32), baseValslist->obj.klass->_1.element_class);
            if ( !data )
            {
              v111 = sub_1C94314(0);
              sub_1C941C0(v111, 0);
            }
          }
          if ( (unsigned int)v81 >= LODWORD(baseValslist->max_length) )
            goto LABEL_157;
          v83 = &baseValslist->obj.klass + v81;
          v83[4] = v82;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v83 + 4), (int32_t)v82, v74, v75, v76, v77, v78, v79);
          v68 = *(_DWORD *)(v64 + 24);
          if ( (int)++v70 >= v68 )
            goto LABEL_116;
        }
        goto LABEL_157;
      }
    }
    else
    {
      v118 = (TreasureDvcLvEntity_o *)v46->fields.funcId;
    }
LABEL_116:
    TreasureDvcId = BattleServantData__getTreasureDvcId(ServantData, 1, 0, 0);
    v13->fields.treasureDvcId = TreasureDvcId;
    v85 = TreasureDvcId;
    argument = (BattleLogicFunction_FunctionArgument_o *)sub_1C942E4(BattleLogicFunction_FunctionArgument_TypeInfo);
    BattleLogicFunction_FunctionArgument___ctor(argument, 0);
    if ( v114 )
    {
      v13->fields.isCounter = task->fields.isCounter;
      motionMessage = task->fields.motionMessage;
      v13->fields.motionMessage = motionMessage;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v13->fields.motionMessage,
        (int32_t)motionMessage,
        v87,
        v88,
        v89,
        v90,
        v91,
        v92);
      v13->fields._MessageType_k__BackingField = task->fields.messageType;
      if ( !argument )
        goto LABEL_156;
    }
    else
    {
      v94 = this->fields.data;
      if ( !v94 )
        goto LABEL_156;
      perf = v94->fields.perf;
      if ( !perf )
        goto LABEL_156;
      if ( !command )
        goto LABEL_156;
      data = (__int64)perf->fields.commandPerf;
      if ( !data )
        goto LABEL_156;
      BattlePerformanceCommandCard__UpdateRemainingCardBuff(
        (BattlePerformanceCommandCard_o *)data,
        command->fields.actionIndex,
        0);
      v96 = (BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *)sub_1C942E4(BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_TypeInfo);
      BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument___ctor(v96, 0);
      if ( !argument )
        goto LABEL_156;
      BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
        argument,
        (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v96,
        0);
    }
    argument->fields._IsSetSubstituteBuffAction_k__BackingField = 1;
    data = (__int64)this->fields.logicfunction;
    if ( data )
    {
      v36 = BattleLogicFunction__procList(
              (BattleLogicFunction_o *)data,
              v13,
              (System_Int32_array *)v118,
              baseValslist,
              0,
              1,
              0,
              0,
              1,
              1,
              1,
              argument,
              0,
              0);
      BattleServantData__checkRegainNPUsedNoble(ServantData, 0);
      data = (__int64)ServantData->fields.buffData;
      if ( data )
      {
        data = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0);
        if ( !v114 )
        {
          ServantData->fields.tmpNp = ServantData->fields.np;
          BattleServantData__changeNp(ServantData, 0, 0, 0);
        }
        if ( v36 )
        {
          v36->fields.targetId = v26;
          BattleActionData__setTypeTA(v36, 0);
          if ( !v114 )
            BattleActionData__setCommand(v36, command, 0);
          TreasureDvcMotionId = BattleServantData__getTreasureDvcMotionId(ServantData, 0);
          OverwriteTdMotionId = v36->fields.OverwriteTdMotionId;
          if ( OverwriteTdMotionId < 1 )
            OverwriteTdMotionId = TreasureDvcMotionId;
          v36->fields.motionId = OverwriteTdMotionId;
          data = (__int64)this->fields.logic;
          if ( data )
          {
            BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0, 0, 0);
            v36->fields.prevattackme = 0;
            v36->fields.isForcedSpeedOne = task->fields.isForcedSpeedOne;
            data = (__int64)this->fields.data;
            if ( data )
            {
              BattleData__setCommandAttack((BattleData_o *)data, 0, 0, 0);
              v99 = this->fields.logic;
              if ( v99 )
              {
                v100 = v99->fields.perf;
                v101 = (BattleActionData_o *)sub_1C942E4(BattleActionData_TypeInfo);
                BattleActionData___ctor(v101, 0);
                v102 = this->fields.logic;
                if ( v102 )
                {
                  v103 = v102->fields.perf;
                  v104 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)sub_1C942E4(BattleActionWaitCond_UntilSideEffectInvisible_TypeInfo);
                  BattleActionWaitCond_UntilSideEffectInvisible___ctor(v104, v103, 0);
                  if ( v101 )
                  {
                    data = (__int64)BattleActionData__SetWaitCond(v101, (BattleActionWaitCond_Base_o *)v104, 0);
                    if ( v100 )
                    {
                      BattlePerformance__addActionData_45870292(v100, (BattleActionData_o *)data, 0);
                      v36->fields.treasureDvcId = v85;
                      BattleActionData__SetFuncTargetAllDead(v36, this->fields.data, 0);
                      data = (__int64)this->fields.data;
                      if ( data )
                      {
                        BattleData__SetUsedTdInfo(
                          (BattleData_o *)data,
                          ServantData->fields.uniqueId,
                          v112,
                          v113 - v115,
                          0);
                        v105 = this->fields.logic;
                        if ( v114 )
                        {
                          v106 = (BattleAddSkillTaskAfterCounterTreasureDevice_o *)sub_1C942E4(BattleAddSkillTaskAfterCounterTreasureDevice_TypeInfo);
                          BattleAddSkillTaskAfterCounterTreasureDevice___ctor(v106, 0);
                          if ( !v105 )
                            goto LABEL_156;
                        }
                        else
                        {
                          v106 = (BattleAddSkillTaskAfterCounterTreasureDevice_o *)sub_1C942E4(BattleAddSkillTaskAfterTreasureDevice_TypeInfo);
                          BattleAddSkillTaskAfterTreasureDevice___ctor(
                            (BattleAddSkillTaskAfterTreasureDevice_o *)v106,
                            0);
                          if ( !v105 )
                            goto LABEL_156;
                        }
                        v107 = 0;
                        BattleLogic__AddSkillTask(
                          v105,
                          (BattleAddSkillTaskAroundTargetTask_o *)v106,
                          task,
                          v26,
                          v107,
                          0);
                        data = (__int64)this->fields.data;
                        if ( data )
                        {
                          data = (__int64)(ServantData->fields.isEnemy
                                         ? BattleData__getFieldPlayerServantList((BattleData_o *)data, 0)
                                         : BattleData__getFieldEnemyServantList((BattleData_o *)data, 0, 0));
                          v108 = data;
                          if ( data )
                          {
                            v109 = *(_DWORD *)(data + 24);
                            if ( v109 < 1 )
                              return v36;
                            v110 = 0;
                            while ( v110 < v109 )
                            {
                              data = *(_QWORD *)(v108 + 8LL * (int)v110 + 32);
                              if ( !data )
                                goto LABEL_156;
                              BattleServantData__SetEnableLastAttackToSelfHistory((BattleServantData_o *)data, 1, 0);
                              v109 = *(_DWORD *)(v108 + 24);
                              if ( (int)++v110 >= v109 )
                                return v36;
                            }
LABEL_157:
                            sub_1C942F8(data);
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
    }
LABEL_156:
    sub_1C942F0(data, baseActionData);
  }
  return v36;
}


BattleLogicTask_array *BattleLogicSpecial__taskEnemyTresureDvc(
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
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  System_Int32_array *FieldPlayerServantIDList; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  BattleCommandData_o *v22; // x22
  BattleComboData_o *v23; // x24
  const MethodInfo *v24; // x4
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  if ( (byte_4D2FBDB & 1) == 0 )
  {
    sub_1C94098(&BattleComboData_TypeInfo);
    sub_1C94098(&BattleCommandData_TypeInfo);
    sub_1C94098(&BattleLogicTask_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4D2FBDB = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 16 )
    v9 = 2;
  else
    v9 = ltype == 15;
  if ( !data )
    goto LABEL_19;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_19;
  if ( v9 >= LODWORD(e_entryid->max_length) )
    sub_1C942F8(EnemyServantData);
  v8 = (unsigned int)e_entryid->m_Items[v9];
  if ( (int)v8 < 1 )
    goto LABEL_18;
  EnemyServantData = BattleData__getEnemyServantData(data, v8, 0);
  if ( !EnemyServantData )
    goto LABEL_19;
  v11 = EnemyServantData;
  if ( !EnemyServantData->fields.reservationspecial )
  {
LABEL_18:
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1C942F0(EnemyServantData, v8);
  }
  v12 = sub_1C942E4(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, v11->fields.uniqueId, v14);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0, 0);
  *(_QWORD *)(v12 + 32) = FieldPlayerServantIDList;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)(v12 + 32),
    (int32_t)FieldPlayerServantIDList,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (BattleCommandData_o *)sub_1C942E4(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v22, 0);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0);
  if ( !v22 )
    goto LABEL_19;
  v22->fields._type = (int)EnemyServantData;
  v22->fields.svtlimit = BattleServantData__getDispLimitCount(v11, 1, 0);
  v22->fields.uniqueId = v11->fields.uniqueId;
  v22->fields.svtId = BattleServantData__getSvtId(v11, 0);
  v22->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  v23 = (BattleComboData_o *)sub_1C942E4(BattleComboData_TypeInfo);
  BattleComboData___ctor(v23, 0);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v23, v22, v9, v24);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  *(_DWORD *)(v12 + 48) = 4;
  *(_DWORD *)(v12 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v12 + 88) = 1;
  if ( !v6 )
    goto LABEL_19;
  items = v6->fields._items;
  v32 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v12,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v12;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v34 + 4), v12, v25, v26, v27, v28, v29, v30);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicSpecial__taskEnemyTresureDvcAlways(
        BattleLogicSpecial_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  BattleServantData_o *EnemyServantData; // x0
  __int64 v8; // x1
  unsigned int v9; // w20
  struct System_Int32_array *e_entryid; // x8
  BattleServantData_o *v11; // x23
  __int64 v12; // x21
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  System_Int32_array *FieldPlayerServantIDList; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  BattleCommandData_o *v22; // x22
  BattleComboData_o *v23; // x24
  const MethodInfo *v24; // x4
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  if ( (byte_4D2FBDC & 1) == 0 )
  {
    sub_1C94098(&BattleComboData_TypeInfo);
    sub_1C94098(&BattleCommandData_TypeInfo);
    sub_1C94098(&BattleLogicTask_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4D2FBDC = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 23 )
    v9 = 2;
  else
    v9 = ltype == 22;
  if ( !data )
    goto LABEL_19;
  e_entryid = data->fields.e_entryid;
  if ( !e_entryid )
    goto LABEL_19;
  if ( v9 >= LODWORD(e_entryid->max_length) )
    sub_1C942F8(EnemyServantData);
  v8 = (unsigned int)e_entryid->m_Items[v9];
  if ( (int)v8 < 1 )
    goto LABEL_18;
  EnemyServantData = BattleData__getEnemyServantData(data, v8, 0);
  if ( !EnemyServantData )
    goto LABEL_19;
  v11 = EnemyServantData;
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(EnemyServantData, 1, 0, 0);
  if ( (int)EnemyServantData < 1 )
  {
LABEL_18:
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_19:
    sub_1C942F0(EnemyServantData, v8);
  }
  v12 = sub_1C942E4(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_19;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, v11->fields.uniqueId, v14);
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0, 0);
  *(_QWORD *)(v12 + 32) = FieldPlayerServantIDList;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)(v12 + 32),
    (int32_t)FieldPlayerServantIDList,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (BattleCommandData_o *)sub_1C942E4(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v22, 0);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0);
  if ( !v22 )
    goto LABEL_19;
  v22->fields._type = (int)EnemyServantData;
  v22->fields.svtlimit = BattleServantData__getDispLimitCount(v11, 1, 0);
  v22->fields.uniqueId = v11->fields.uniqueId;
  v22->fields.svtId = BattleServantData__getSvtId(v11, 0);
  v22->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  v23 = (BattleComboData_o *)sub_1C942E4(BattleComboData_TypeInfo);
  BattleComboData___ctor(v23, 0);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v23, v22, v9, v24);
  EnemyServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  *(_DWORD *)(v12 + 48) = 4;
  *(_DWORD *)(v12 + 84) = (_DWORD)EnemyServantData;
  *(_DWORD *)(v12 + 88) = 1;
  if ( !v6 )
    goto LABEL_19;
  items = v6->fields._items;
  v32 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_19;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v12,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v12;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v34 + 4), v12, v25, v26, v27, v28, v29, v30);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicSpecial__taskTresureDvc(
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
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  System_Int32_array *FieldEnemyServantIDList; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  BattleCommandData_o *v22; // x22
  BattleComboData_o *v23; // x24
  const MethodInfo *v24; // x4
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  if ( (byte_4D2FBD9 & 1) == 0 )
  {
    sub_1C94098(&BattleComboData_TypeInfo);
    sub_1C94098(&BattleCommandData_TypeInfo);
    sub_1C94098(&BattleLogicTask_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4D2FBD9 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 8 )
    v9 = 2;
  else
    v9 = ltype == 7;
  if ( !data )
    goto LABEL_18;
  p_entryid = data->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_18;
  if ( v9 >= LODWORD(p_entryid->max_length) )
    sub_1C942F8(PlayerServantData);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v9], 0);
  if ( !PlayerServantData || (v11 = PlayerServantData, !PlayerServantData->fields.reservationspecial) )
  {
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_1C942F0(PlayerServantData, v8);
  }
  v12 = sub_1C942E4(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_18;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 2, v11->fields.uniqueId, v14);
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0);
  *(_QWORD *)(v12 + 32) = FieldEnemyServantIDList;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v12 + 32), (int32_t)FieldEnemyServantIDList, v16, v17, v18, v19, v20, v21);
  v22 = (BattleCommandData_o *)sub_1C942E4(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v22, 0);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId(v11, 0);
  if ( !v22 )
    goto LABEL_18;
  v22->fields._type = (int)PlayerServantData;
  v22->fields.svtlimit = BattleServantData__getCommandDispLimitCount(v11, 0);
  v22->fields.uniqueId = v11->fields.uniqueId;
  v22->fields.svtId = BattleServantData__getSvtId(v11, 0);
  v22->fields.treasureDvc = BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  v23 = (BattleComboData_o *)sub_1C942E4(BattleComboData_TypeInfo);
  BattleComboData___ctor(v23, 0);
  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v12, v23, v22, v9, v24);
  PlayerServantData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(v11, 1, 0, 0);
  *(_DWORD *)(v12 + 48) = 4;
  *(_DWORD *)(v12 + 84) = (_DWORD)PlayerServantData;
  *(_DWORD *)(v12 + 88) = 1;
  if ( !v6 )
    goto LABEL_18;
  items = v6->fields._items;
  v32 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_18;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v12,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v12;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v34 + 4), v12, v25, v26, v27, v28, v29, v30);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicSpecial__taskTresureDvcAlways(
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
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  BattleCommandData_o *v17; // x22
  BattleComboData_o *v18; // x24
  const MethodInfo *v19; // x4
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4D2FBDA & 1) == 0 )
  {
    sub_1C94098(&BattleComboData_TypeInfo);
    sub_1C94098(&BattleCommandData_TypeInfo);
    sub_1C94098(&BattleLogicTask_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4D2FBDA = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  if ( v10 >= LODWORD(p_entryid->max_length) )
    sub_1C942F8(logictarget);
  PlayerServantData = BattleData__getPlayerServantData(data, p_entryid->m_Items[v10], 0);
  v13 = (BattleLogicTask_o *)sub_1C942E4(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v13, v14);
  if ( !PlayerServantData )
    goto LABEL_21;
  if ( !v13 )
    goto LABEL_21;
  BattleLogicTask__setActor(v13, 2, PlayerServantData->fields.uniqueId, v15);
  logictarget = this->fields.logictarget;
  if ( !logictarget )
    goto LABEL_21;
  BattleLogicTarget__getTargetBattleServantData(logictarget, v13, v16);
  v17 = (BattleCommandData_o *)sub_1C942E4(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v17, 0);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcCardId(PlayerServantData, 0);
  if ( !v17 )
    goto LABEL_21;
  v17->fields._type = (int)logictarget;
  v17->fields.svtlimit = BattleServantData__getCommandDispLimitCount(PlayerServantData, 0);
  v17->fields.uniqueId = PlayerServantData->fields.uniqueId;
  v17->fields.svtId = BattleServantData__getSvtId(PlayerServantData, 0);
  v17->fields.treasureDvc = BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0, 0);
  v18 = (BattleComboData_o *)sub_1C942E4(BattleComboData_TypeInfo);
  BattleComboData___ctor(v18, 0);
  BattleLogicTask__setActionCommand(v13, v18, v17, v10, v19);
  logictarget = (BattleLogicTarget_o *)BattleServantData__getTreasureDvcId(PlayerServantData, 1, 0, 0);
  v13->fields.actiontype = 4;
  v13->fields.treasureDvcId = (int)logictarget;
  v13->fields.tresureDvcLv = 1;
  if ( !v7
    || (items = v7->fields._items,
        v27 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v7->fields._version,
        !items) )
  {
LABEL_21:
    sub_1C942F0(logictarget, v9);
  }
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)v13,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v13;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v29 + 4), (int32_t)v13, v20, v21, v22, v23, v24, v25);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void BattleLogicSpecial___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2FBE1 & 1) == 0 )
  {
    sub_1C94098(&BattleLogicSpecial___c_TypeInfo);
    byte_4D2FBE1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(BattleLogicSpecial___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicSpecial___c_TypeInfo->static_fields->__9 = (struct BattleLogicSpecial___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)BattleLogicSpecial___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicSpecial___c___ctor(BattleLogicSpecial___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleLogicSpecial___c___TryAddSkillTaskPreBeforeOtherTd_b__11_0(
        BattleLogicSpecial___c_o *this,
        BattleServantData_o *a,
        BattleServantData_o *b,
        const MethodInfo *method)
{
  _BOOL4 isEnemy; // w20

  if ( (byte_4D2FBE2 & 1) == 0 )
  {
    this = (BattleLogicSpecial___c_o *)sub_1C94098(&bool_TypeInfo);
    byte_4D2FBE2 = 1;
  }
  if ( !a || !b )
    sub_1C942F0(this, a);
  isEnemy = b->fields.isEnemy;
  if ( !bool_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(bool_TypeInfo);
  return System_Boolean__CompareTo_65468460((_BYTE)a + 3, isEnemy, 0);
}