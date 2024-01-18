void __fastcall BattleLogicBaseAi___ctor(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  _QWORD **v9; // x21
  __int64 v10; // x20
  __int16 v11; // w8
  __int64 v12; // x20
  __int64 v13; // x20
  __int64 v14; // x20
  struct BattleLogicTask_array **v15; // x8
  struct BattleLogicTask_array *v16; // x1

  if ( (byte_418A748 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_BattleLogicTask___, method);
    byte_418A748 = 1;
  }
  v9 = (_QWORD **)Method_System_Array_Empty_BattleLogicTask___;
  v10 = **((_QWORD **)Method_System_Array_Empty_BattleLogicTask___ + 6);
  v11 = *(_WORD *)(v10 + 306);
  if ( (v11 & 1) == 0 )
  {
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_BattleLogicTask___ + 6));
    v11 = *(_WORD *)(v10 + 306);
  }
  if ( (v11 & 0x400) != 0 )
  {
    v12 = *v9[6];
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_AC505C(*v9[6]);
    if ( !*(_DWORD *)(v12 + 224) )
    {
      v13 = *v9[6];
      if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
        sub_AC505C(*v9[6]);
      j_il2cpp_runtime_class_init_0(v13);
    }
  }
  v14 = *v9[6];
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_AC505C(*v9[6]);
  v15 = *(struct BattleLogicTask_array ***)(v14 + 184);
  v16 = *v15;
  this->fields.emptyTask = *v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.emptyTask,
    (System_Int32_array **)v16,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicBaseAi__AddBattleEndNotRelatedSurvivalStatusTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x9
  struct BattleData_o *v5; // x9

  data = this->fields.data;
  if ( !data || (data->fields.endbattleFlg = 1, (v5 = this->fields.data) == 0LL) )
    sub_B2C434(this, retList);
  v5->fields.winBattleNotRelatedSurvivalStatus = 1;
  BattleLogicBaseAi__CommonWinBattleEnd(this, retList, arg, method);
}


void __fastcall BattleLogicBaseAi__AddBattleEndTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B2C434(this, retList);
  data->fields.endbattleFlg = 1;
  BattleLogicBaseAi__CommonWinBattleEnd(this, retList, arg, method);
}


void __fastcall BattleLogicBaseAi__AddBattleLoseEndTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x9
  struct BattleData_o *v5; // x9

  data = this->fields.data;
  if ( !data || (data->fields.endbattleFlg = 1, (v5 = this->fields.data) == 0LL) )
    sub_B2C434(this, retList);
  v5->fields.loseBattleFlg = 1;
}


void __fastcall BattleLogicBaseAi__AddMessageTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  __int64 v7; // x1
  MessageBattleLogicTask_o *v8; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *Task_19201872; // x0
  __int64 v10; // x1

  if ( (byte_418A741 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, retList);
    sub_B2C35C(&MessageBattleLogicTask_TypeInfo, v7);
    byte_418A741 = 1;
  }
  v8 = (MessageBattleLogicTask_o *)sub_B2C42C(MessageBattleLogicTask_TypeInfo);
  MessageBattleLogicTask___ctor(v8, 0LL);
  if ( !arg
    || (Task_19201872 = (EventMissionProgressRequest_Argument_ProgressData_o *)BaseAiActArgument__MakeTask_19201872(
                                                                                 arg,
                                                                                 (BaseAiActBattleLogicTask_o *)v8,
                                                                                 this,
                                                                                 0LL),
        !retList) )
  {
    sub_B2C434(Task_19201872, v10);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)retList,
    Task_19201872,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
}


void __fastcall BattleLogicBaseAi__AddNoneTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleLogicBaseAi__AddPlayMotionTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *v6; // x21
  __int64 v7; // x1
  BattleLogicTask_o *Task; // x22
  System_String_o *v9; // x0
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *perf; // x21
  System_Int32_array **ServantGameObject; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int32_t ActionValue; // [xsp+Ch] [xbp-24h] BYREF

  v6 = this;
  if ( (byte_418A740 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, retList);
    this = (BattleLogicBaseAi_o *)sub_B2C35C(&StringLiteral_8787/*"MOTION_"*/, v7);
    byte_418A740 = 1;
  }
  ActionValue = 0;
  if ( !arg )
    goto LABEL_12;
  this = (BattleLogicBaseAi_o *)arg->fields._AiEnt_k__BackingField;
  if ( !this )
    goto LABEL_12;
  ActionValue = AiBaseEntity__getActionValue((AiBaseEntity_o *)this, 0LL);
  if ( ActionValue < 1 )
    return;
  Task = BaseAiActArgument__MakeTask(arg, v6, 0, 0LL);
  v9 = System_Int32__ToString((int32_t)&ActionValue, 0LL);
  this = (BattleLogicBaseAi_o *)System_String__Concat_44305532((System_String_o *)StringLiteral_8787/*"MOTION_"*/, v9, 0LL);
  if ( !Task
    || (BattleLogicTask__setPlayMoiton(Task, (System_String_o *)this, 0LL), (logic = v6->fields.logic) == 0LL)
    || (perf = logic->fields.perf,
        this = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BaseAiActArgument_o *, Il2CppMethodPointer))arg->klass->vtable._4_get_UniqueId.method)(
                                        arg,
                                        arg->klass->vtable._5_InitCommonTask.methodPtr),
        !perf)
    || (ServantGameObject = (System_Int32_array **)BattlePerformance__getServantGameObject(perf, (int32_t)this, 0LL),
        Task->fields.targetObject = (struct UnityEngine_GameObject_o *)ServantGameObject,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&Task->fields.targetObject,
          ServantGameObject,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        !retList) )
  {
LABEL_12:
    sub_B2C434(this, retList);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)retList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)Task,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
}


void __fastcall BattleLogicBaseAi__AddSkillTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct AiActEntity_o *AiActEnt_k__BackingField; // x8
  struct AiActEntity_o *v13; // x8
  int32_t v14; // w22
  int32_t v15; // w23
  int32_t v16; // w25
  TempBattleSkillInfoData_o *v17; // x24
  BattleLogicBaseAi_o *Task; // x0
  AiBaseEntity_o *AiEnt_k__BackingField; // x2
  BattleLogicTask_o *v20; // x21
  const MethodInfo *v21; // x3
  BattleLogicTask_o *v22; // x20
  System_Int32_array *v23; // [xsp+0h] [xbp-50h] BYREF
  System_Int32_array *v24; // [xsp+8h] [xbp-48h] BYREF
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v6 = this;
  if ( (byte_418A742 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_int____67381984, retList);
    sub_B2C35C(&BattleLogicTask_TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    this = (BattleLogicBaseAi_o *)sub_B2C35C(&TempBattleSkillInfoData_TypeInfo, v11);
    byte_418A742 = 1;
  }
  entity = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( !arg )
    goto LABEL_16;
  AiActEnt_k__BackingField = arg->fields._AiActEnt_k__BackingField;
  if ( !AiActEnt_k__BackingField )
    goto LABEL_16;
  this = (BattleLogicBaseAi_o *)BasicHelper__IndexValue_int_(
                                  AiActEnt_k__BackingField->fields.skillVals,
                                  0,
                                  0,
                                  (const MethodInfo_172891C *)Method_BasicHelper_IndexValue_int____67381984);
  v13 = arg->fields._AiActEnt_k__BackingField;
  if ( !v13 )
    goto LABEL_16;
  v14 = (int)this;
  v15 = BasicHelper__IndexValue_int_(
          v13->fields.skillVals,
          1,
          1,
          (const MethodInfo_172891C *)Method_BasicHelper_IndexValue_int____67381984);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleLogicBaseAi_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !this )
    goto LABEL_16;
  if ( SkillLvMaster__TryGetEntity((SkillLvMaster_o *)this, &entity, v14, v15, 0LL)
    && (((__int64 (__fastcall *)(BattleLogicBaseAi_o *, BaseAiActArgument_o *, SkillLvEntity_o *, System_Int32_array **, System_Int32_array **, Il2CppMethodPointer))v6->klass->vtable._16_GetAiActTargets.method)(
          v6,
          arg,
          entity,
          &v24,
          &v23,
          v6->klass->vtable._17_SetAddSkillTaskParam.methodPtr) & 1) != 0 )
  {
    v16 = ((__int64 (__fastcall *)(BaseAiActArgument_o *, Il2CppMethodPointer))arg->klass->vtable._4_get_UniqueId.method)(
            arg,
            arg->klass->vtable._5_InitCommonTask.methodPtr);
    v17 = (TempBattleSkillInfoData_o *)sub_B2C42C(TempBattleSkillInfoData_TypeInfo);
    TempBattleSkillInfoData___ctor(v17, v14, v15, v16, 0LL);
    Task = (BattleLogicBaseAi_o *)BaseAiActArgument__MakeTask(arg, v6, 0, 0LL);
    AiEnt_k__BackingField = arg->fields._AiEnt_k__BackingField;
    v20 = (BattleLogicTask_o *)Task;
    BattleLogicBaseAi__SetSkillSelectAddIndex(Task, (BattleSkillInfoData_o *)v17, AiEnt_k__BackingField, v21);
    if ( v20 )
    {
      BattleLogicTask__setActionSkill(v20, (BattleSkillInfoData_o *)v17, v24, v23, 0, 0, 0LL);
      this = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BattleLogicBaseAi_o *, BattleLogicTask_o *, Il2CppMethodPointer))v6->klass->vtable._17_SetAddSkillTaskParam.method)(
                                      v6,
                                      v20,
                                      v6->klass->vtable._18_CheckAiCanActionFromTargets.methodPtr);
      if ( retList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)retList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
        v22 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
        BattleLogicTask___ctor(v22, 0LL);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)retList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
        return;
      }
    }
LABEL_16:
    sub_B2C434(this, retList);
  }
}


bool __fastcall BattleLogicBaseAi__CheckAiCanActionFromTargets(
        BattleLogicBaseAi_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiBaseEntity,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall BattleLogicBaseAi__CommonWinBattleEnd(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  if ( (byte_418A73F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, retList);
    byte_418A73F = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_9;
  data = (BattleData_o *)BattleData__isBreakOnBattleWin(data, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( arg )
    {
      data = (BattleData_o *)BaseAiActArgument__MakeTask(arg, this, 35, 0LL);
      if ( retList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)retList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)data,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
        return;
      }
    }
LABEL_9:
    sub_B2C434(data, retList);
  }
}


void __fastcall BattleLogicBaseAi__DebugLog(BattleLogicBaseAi_o *this, System_String_o *str, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicBaseAi__ExistProcAiAct(BattleLogicBaseAi_o *this, int32_t type, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *dicNoTargetAiActFunc; // x0

  if ( (byte_418A747 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__,
      *(_QWORD *)&type);
    byte_418A747 = 1;
  }
  dicNoTargetAiActFunc = this->fields.dicNoTargetAiActFunc;
  if ( !dicNoTargetAiActFunc )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)dicNoTargetAiActFunc,
         type,
         (const MethodInfo_2E465F8 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__) )
  {
    return 1;
  }
  dicNoTargetAiActFunc = this->fields.dicAiActFunc;
  if ( !dicNoTargetAiActFunc )
LABEL_8:
    sub_B2C434(dicNoTargetAiActFunc, *(_QWORD *)&type);
  return System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
           (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)dicNoTargetAiActFunc,
           type,
           (const MethodInfo_2E465F8 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__);
}


// local variable allocation has failed, the output may be wrong!
AiActEntity_o *__fastcall BattleLogicBaseAi__GetAiActEntity(
        BattleLogicBaseAi_o *this,
        int32_t aiActId,
        const MethodInfo *method)
{
  struct AiActMaster_o *aiActMst; // x0

  if ( (byte_418A744 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__, *(_QWORD *)&aiActId);
    byte_418A744 = 1;
  }
  aiActMst = this->fields.aiActMst;
  if ( !aiActMst )
    sub_B2C434(0LL, *(_QWORD *)&aiActId);
  return (AiActEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)aiActMst,
                            aiActId,
                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
}


bool __fastcall BattleLogicBaseAi__GetAiActTargets(
        BattleLogicBaseAi_o *this,
        BaseAiActArgument_o *arg,
        SkillLvEntity_o *skillLvEnt,
        System_Int32_array **targets,
        System_Int32_array **ptTargets,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  *ptTargets = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)ptTargets,
    0LL,
    (System_String_array **)skillLvEnt,
    (System_String_array **)targets,
    (System_Boolean_array **)ptTargets,
    (System_Int32_array **)method,
    v6,
    v7);
  *targets = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)targets, 0LL, v9, v10, v11, v12, v13, v14);
  return 0;
}


System_Int32_array *__fastcall BattleLogicBaseAi__GetLogicTargetIds(
        BattleLogicBaseAi_o *this,
        BaseAiActArgument_o *arg,
        System_Int32_array *svtIds,
        bool isCheckHate,
        bool isResurrectable,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  __int64 TargetAiAct; // x0
  __int64 v14; // x1
  struct AiActEntity_o *AiActEnt_k__BackingField; // x8
  BattleLogicTarget_o *logictarget; // x26
  int32_t target; // w25
  System_Int32_array *v18; // x23
  struct AiActEntity_o *aiActEnt; // x8
  __int64 v21; // x0

  if ( (byte_418A743 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, arg);
    byte_418A743 = 1;
  }
  TargetAiAct = sub_B2C374(int___TypeInfo, 1LL);
  if ( !arg
    || (AiActEnt_k__BackingField = arg->fields._AiActEnt_k__BackingField) == 0LL
    || (logictarget = this->fields.logictarget,
        target = AiActEnt_k__BackingField->fields.target,
        v18 = (System_Int32_array *)TargetAiAct,
        TargetAiAct = ((__int64 (__fastcall *)(BaseAiActArgument_o *, Il2CppMethodPointer))arg->klass->vtable._4_get_UniqueId.method)(
                        arg,
                        arg->klass->vtable._5_InitCommonTask.methodPtr),
        (aiActEnt = arg->fields._AiActEnt_k__BackingField) == 0LL)
    || !logictarget
    || (TargetAiAct = BattleLogicTarget__getTargetAiAct(
                        logictarget,
                        target,
                        TargetAiAct,
                        aiActEnt->fields.targetIndividuality,
                        svtIds,
                        isCheckHate,
                        isResurrectable,
                        addIndiv,
                        aiActEnt,
                        1,
                        0LL),
        !v18) )
  {
    sub_B2C434(TargetAiAct, v14);
  }
  if ( !v18->max_length )
  {
    v21 = sub_B2C460(TargetAiAct);
    sub_B2C400(v21, 0LL);
  }
  v18->m_Items[1] = TargetAiAct;
  return v18;
}


void __fastcall BattleLogicBaseAi__InitAiActTaskFunction(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v6; // x20
  BattleLogicBaseAi_taskAiActFunction_o *v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x21
  BattleLogicBaseAi_taskAiActFunction_o *v10; // x21
  BattleLogicBaseAi_taskAiActFunction_o *v11; // x21
  BattleLogicBaseAi_taskAiActFunction_o *v12; // x21
  BattleLogicBaseAi_taskAiActFunction_o *v13; // x21
  BattleLogicBaseAi_taskAiActFunction_o *v14; // x21
  BattleLogicBaseAi_taskAiActFunction_o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v22; // x20
  BattleLogicBaseAi_taskAiActFunction_o *v23; // x21
  BattleLogicBaseAi_taskAiActFunction_o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_418A73E & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__,
      method);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__,
      v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo, v4);
    sub_B2C35C(&BattleLogicBaseAi_taskAiActFunction_TypeInfo, v5);
    byte_418A73E = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B2C42C(System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v6,
    (const MethodInfo_2E457D0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__);
  v7 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_B2C42C(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  if ( !this )
    goto LABEL_7;
  v9 = (System_String_o *)v7;
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v7,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._10_AddBattleEndTask.methodPtr,
    0LL);
  if ( !v6 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v6,
    0,
    v9,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v10 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_B2C42C(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._11_AddBattleEndNotRelatedSurvivalStatusTask.methodPtr,
    0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v6,
    90,
    (System_String_o *)v10,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v11 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_B2C42C(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v11,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._13_AddPlayMotionTask.methodPtr,
    0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v6,
    91,
    (System_String_o *)v11,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v12 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_B2C42C(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v12,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._14_AddMessageTask.methodPtr,
    0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v6,
    71,
    (System_String_o *)v12,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v13 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_B2C42C(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v13,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._15_AddSkillTask.methodPtr,
    0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v6,
    72,
    (System_String_o *)v13,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v14 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_B2C42C(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v14,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._15_AddSkillTask.methodPtr,
    0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v6,
    73,
    (System_String_o *)v14,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v15 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_B2C42C(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v15,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._12_AddBattleLoseEndTask.methodPtr,
    0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v6,
    92,
    (System_String_o *)v15,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  this->fields.dicNoTargetAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dicNoTargetAiActFunc,
    (System_Int32_array **)v6,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B2C42C(System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v22,
    (const MethodInfo_2E457D0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__);
  v23 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_B2C42C(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v23,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._16_GetAiActTargets.methodPtr,
    0LL);
  if ( !v22 )
LABEL_7:
    sub_B2C434(v7, v8);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v22,
    40,
    (System_String_o *)v23,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v24 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_B2C42C(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v24,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._16_GetAiActTargets.methodPtr,
    0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v22,
    41,
    (System_String_o *)v24,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  this->fields.dicAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dicAiActFunc,
    (System_Int32_array **)v22,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}


void __fastcall BattleLogicBaseAi__InitDebugLog(
        BattleLogicBaseAi_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleLogicBaseAi__Initialize(BattleLogicBaseAi_o *this, BattleData_o *data, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct BattleLogic_o *logic; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct BattleLogic_o *v26; // x8
  struct BattleLogicTarget_o *logictarget; // x1
  struct AiActMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_418A73D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_AiActMaster___, data);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    byte_418A73D = 1;
  }
  this->fields.data = data;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !data
    || (logic = data->fields.logic,
        this->fields.logic = logic,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.logic,
          (System_Int32_array **)logic,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        (v26 = this->fields.logic) == 0LL) )
  {
    sub_B2C434(v11, v12);
  }
  logictarget = v26->fields.logictarget;
  this->fields.logictarget = logictarget;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.logictarget,
    (System_Int32_array **)logictarget,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_AiActMaster___);
  this->fields.aiActMst = Master_WarQuestSelectionMaster;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.aiActMst,
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  ((void (__fastcall *)(BattleLogicBaseAi_o *, Il2CppMethodPointer))this->klass->vtable._8_InitAiActTaskFunction.method)(
    this,
    this->klass->vtable._9_AddNoneTask.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicBaseAi__IsChangeThinkingOnly(
        BattleLogicBaseAi_o *this,
        int32_t actType,
        AiBaseEntity_o *aiEnt,
        AiState_o *aiState,
        const MethodInfo *method)
{
  int32_t v5; // w20

  if ( !aiEnt )
    goto LABEL_9;
  v5 = actType;
  this = (BattleLogicBaseAi_o *)AiBaseEntity__getChangeAiId(aiEnt, 0LL);
  *(_QWORD *)&actType = (unsigned int)this;
  if ( v5 == 99 )
  {
    if ( aiState )
    {
      AiState__changeThinking(aiState, (int32_t)this, 0LL);
      return 1;
    }
LABEL_9:
    sub_B2C434(this, *(_QWORD *)&actType);
  }
  if ( (int)this >= 1 )
  {
    if ( !aiState )
      goto LABEL_9;
    AiState__changeThinking(aiState, (int32_t)this, 0LL);
  }
  return 0;
}


void __fastcall BattleLogicBaseAi__OutputDebugLog(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattleLogicBaseAi__SetAddSkillTaskParam(
        BattleLogicBaseAi_o *this,
        BattleLogicTask_o *addTask,
        const MethodInfo *method)
{
  ;
}


bool __fastcall BattleLogicBaseAi__SetNoTargetAiActTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        int32_t type,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o *dicNoTargetAiActFunc; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418A746 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__,
      retList);
    byte_418A746 = 1;
  }
  value = 0LL;
  dicNoTargetAiActFunc = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o *)this->fields.dicNoTargetAiActFunc;
  if ( !dicNoTargetAiActFunc )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData____TryGetValue(
         dicNoTargetAiActFunc,
         type,
         &value,
         (const MethodInfo_2E480A8 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__) )
  {
    dicNoTargetAiActFunc = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o *)value;
    if ( value )
    {
      BattleLogicBaseAi_taskAiActFunction__Invoke((BattleLogicBaseAi_taskAiActFunction_o *)value, retList, arg, 0LL);
      return 1;
    }
LABEL_8:
    sub_B2C434(dicNoTargetAiActFunc, retList);
  }
  return 0;
}


bool __fastcall BattleLogicBaseAi__SetProcAiActTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        int32_t type,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x4

  return BattleLogicBaseAi__SetNoTargetAiActTask(this, retList, type, arg, method)
      || BattleLogicBaseAi__SetTargetAiActTask(this, retList, type, arg, v9);
}


void __fastcall BattleLogicBaseAi__SetSkillSelectAddIndex(
        BattleLogicBaseAi_o *this,
        BattleSkillInfoData_o *skillInfo,
        AiBaseEntity_o *aiEnt,
        const MethodInfo *method)
{
  int32_t MaxSelectAddIndexBySkill; // w0
  int32_t ActSelectIndex; // w1

  if ( skillInfo )
  {
    if ( aiEnt )
    {
      MaxSelectAddIndexBySkill = BattleSkillInfoData__GetMaxSelectAddIndexBySkill(skillInfo, 0LL);
      ActSelectIndex = AiBaseEntity__GetActSelectIndex(aiEnt, MaxSelectAddIndexBySkill, 0LL);
      BattleSkillInfoData__UpdateSelectAddIndex(skillInfo, ActSelectIndex, 0LL);
    }
  }
}


bool __fastcall BattleLogicBaseAi__SetTargetAiActTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        int32_t type,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o *dicAiActFunc; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418A745 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__,
      retList);
    byte_418A745 = 1;
  }
  value = 0LL;
  dicAiActFunc = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o *)this->fields.dicAiActFunc;
  if ( !dicAiActFunc )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData____TryGetValue(
         dicAiActFunc,
         type,
         &value,
         (const MethodInfo_2E480A8 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__) )
  {
    dicAiActFunc = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o *)value;
    if ( value )
    {
      BattleLogicBaseAi_taskAiActFunction__Invoke((BattleLogicBaseAi_taskAiActFunction_o *)value, retList, arg, 0LL);
      return 1;
    }
LABEL_8:
    sub_B2C434(dicAiActFunc, retList);
  }
  return 0;
}


int32_t __fastcall BattleLogicBaseAi__get_ActorType(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  return 0;
}


System_Int32_array *__fastcall BattleLogicBaseAi__get_OpponentSvtIds(
        BattleLogicBaseAi_o *this,
        const MethodInfo *method)
{
  if ( (byte_418A73C & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    byte_418A73C = 1;
  }
  return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
}


System_Int32_array *__fastcall BattleLogicBaseAi__get_PartySvtIds(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  if ( (byte_418A73B & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    byte_418A73B = 1;
  }
  return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicBaseAi_taskAiActFunction___ctor(
        BattleLogicBaseAi_taskAiActFunction_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B2C2F8(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall BattleLogicBaseAi_taskAiActFunction__BeginInvoke(
        BattleLogicBaseAi_taskAiActFunction_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v7[3]; // [xsp+8h] [xbp-18h] BYREF

  v7[1] = (__int64)arg;
  v7[2] = 0LL;
  v7[0] = (__int64)retList;
  return (System_IAsyncResult_o *)sub_B2C300(this, v7, callback, object);
}


void __fastcall BattleLogicBaseAi_taskAiActFunction__EndInvoke(
        BattleLogicBaseAi_taskAiActFunction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall BattleLogicBaseAi_taskAiActFunction__Invoke(
        BattleLogicBaseAi_taskAiActFunction_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  BattleLogicBaseAi_taskAiActFunction_o **v9; // x26
  __int64 i; // x27
  unsigned int v11; // w23
  __int64 class_0; // x0
  __int64 v13; // x3
  System_Collections_Generic_List_BattleLogicTask__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  unsigned int v19; // w24
  __int64 v20; // x0
  __int64 v21; // x3
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  _DWORD *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x0
  void (__fastcall **v28)(System_Collections_Generic_List_BattleLogicTask__o *, BaseAiActArgument_o *, _QWORD); // x0
  __int64 v29; // x0
  void (__fastcall **v30)(__int64 *, System_Collections_Generic_List_BattleLogicTask__o *, BaseAiActArgument_o *, _QWORD); // x0
  BattleLogicBaseAi_taskAiActFunction_o *v31; // x8
  __int64 v32; // x22
  __int64 *v33; // x23
  void (__fastcall *v34)(System_Collections_Generic_List_BattleLogicTask__o *, BaseAiActArgument_o *, __int64); // x24
  char v35; // w0
  int v36; // w8
  char v37; // w24
  char v38; // w0
  __int64 v39; // x3
  __int64 v40; // x8
  __int64 v41; // x1
  __int64 v42; // x2
  unsigned __int64 v43; // x10
  _DWORD *v44; // x11
  char v45; // w23
  char v46; // w0
  __int64 v47; // x3
  System_Collections_Generic_List_BattleLogicTask__c *klass; // x8
  __int64 v49; // x1
  __int64 v50; // x2
  unsigned __int64 v51; // x10
  int32_t *p_offset; // x11
  BattleLogicBaseAi_taskAiActFunction_o *v53; // [xsp+8h] [xbp-48h] BYREF

  v53 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v53;
    v8 = 1LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = (BattleLogicBaseAi_taskAiActFunction_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v8; ++i )
    {
      v31 = v9[i];
      v33 = *(__int64 **)&v31->fields.method;
      v32 = *(_QWORD *)&v31->fields.extra_arg;
      v34 = *(void (__fastcall **)(System_Collections_Generic_List_BattleLogicTask__o *, BaseAiActArgument_o *, __int64))&v31->fields.method_ptr;
      if ( *(__int16 *)(v32 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v31->fields.extra_arg, retList, arg, method);
      v35 = sub_B2C38C(v32);
      v36 = *(unsigned __int8 *)(v32 + 74);
      if ( (v35 & 1) != 0 )
      {
        if ( v36 == 2 )
          goto LABEL_58;
      }
      else
      {
        if ( v36 != 2 )
        {
          if ( *(__int16 *)(v32 + 72) != -1 && this->fields.m_target )
          {
            v45 = sub_B2C384(v32);
            v46 = sub_B2C788(v32);
            if ( (v45 & 1) != 0 )
            {
              if ( (v46 & 1) != 0 )
              {
                klass = retList->klass;
                v49 = *(_QWORD *)(v32 + 24);
                v50 = *(unsigned __int16 *)(v32 + 72);
                if ( *(_WORD *)&retList->klass->_2.bitflags1 )
                {
                  v51 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v49 )
                  {
                    ++v51;
                    p_offset += 4;
                    if ( v51 >= *(unsigned __int16 *)&retList->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v50);
                }
                else
                {
LABEL_57:
                  v27 = sub_AC5258(retList, v49, v50, v47);
                }
                v18 = *(_QWORD *)(v27 + 8);
              }
              else
              {
                v18 = *((_QWORD *)&retList->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v32 + 72));
              }
              v28 = (void (__fastcall **)(System_Collections_Generic_List_BattleLogicTask__o *, BaseAiActArgument_o *, _QWORD))sub_B2C40C(v18, v32);
              (*v28)(retList, arg, v28);
            }
            else
            {
              v11 = *(unsigned __int16 *)(v32 + 72);
              if ( (v46 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v32);
                v14 = retList->klass;
                if ( *(_WORD *)&retList->klass->_2.bitflags1 )
                {
                  v15 = 0LL;
                  v16 = &v14->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v16 - 1) != class_0 )
                  {
                    ++v15;
                    v16 += 4;
                    if ( v15 >= *(unsigned __int16 *)&retList->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v17 = (__int64)(&v14->vtable._0_Equals.method + 2 * (int)(*v16 + v11));
                }
                else
                {
LABEL_11:
                  v17 = sub_AC5258(retList, class_0, v11, v13);
                }
                (*(void (__fastcall **)(System_Collections_Generic_List_BattleLogicTask__o *, BaseAiActArgument_o *, _QWORD))v17)(
                  retList,
                  arg,
                  *(_QWORD *)(v17 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_Collections_Generic_List_BattleLogicTask__o *, BaseAiActArgument_o *, _QWORD))&retList->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v32 + 72)))(
                  retList,
                  arg,
                  *((_QWORD *)&retList->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v32 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v34(retList, arg, v32);
          continue;
        }
        if ( !v33 )
          goto LABEL_58;
        if ( *(__int16 *)(v32 + 72) != -1 && (*(_BYTE *)(*v33 + 277) & 1) == 0 && this->fields.m_target )
        {
          v37 = sub_B2C384(v32);
          v38 = sub_B2C788(v32);
          if ( (v37 & 1) != 0 )
          {
            if ( (v38 & 1) != 0 )
            {
              v40 = *v33;
              v41 = *(_QWORD *)(v32 + 24);
              v42 = *(unsigned __int16 *)(v32 + 72);
              if ( *(_WORD *)(*v33 + 298) )
              {
                v43 = 0LL;
                v44 = (_DWORD *)(*(_QWORD *)(v40 + 176) + 8LL);
                while ( *((_QWORD *)v44 - 1) != v41 )
                {
                  ++v43;
                  v44 += 4;
                  if ( v43 >= *(unsigned __int16 *)(*v33 + 298) )
                    goto LABEL_48;
                }
                v29 = v40 + 16LL * (*v44 + (int)v42) + 312;
              }
              else
              {
LABEL_48:
                v29 = sub_AC5258(v33, v41, v42, v39);
              }
              v26 = *(_QWORD *)(v29 + 8);
            }
            else
            {
              v26 = *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320);
            }
            v30 = (void (__fastcall **)(__int64 *, System_Collections_Generic_List_BattleLogicTask__o *, BaseAiActArgument_o *, _QWORD))sub_B2C40C(v26, v32);
            (*v30)(v33, retList, arg, v30);
          }
          else
          {
            v19 = *(unsigned __int16 *)(v32 + 72);
            if ( (v38 & 1) != 0 )
            {
              v20 = j_il2cpp_method_get_class_0(v32);
              v22 = *v33;
              if ( *(_WORD *)(*v33 + 298) )
              {
                v23 = 0LL;
                v24 = (_DWORD *)(*(_QWORD *)(v22 + 176) + 8LL);
                while ( *((_QWORD *)v24 - 1) != v20 )
                {
                  ++v23;
                  v24 += 4;
                  if ( v23 >= *(unsigned __int16 *)(*v33 + 298) )
                    goto LABEL_19;
                }
                v25 = v22 + 16LL * (int)(*v24 + v19) + 312;
              }
              else
              {
LABEL_19:
                v25 = sub_AC5258(v33, v20, v19, v21);
              }
              (*(void (__fastcall **)(__int64 *, System_Collections_Generic_List_BattleLogicTask__o *, BaseAiActArgument_o *, _QWORD))v25)(
                v33,
                retList,
                arg,
                *(_QWORD *)(v25 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_Collections_Generic_List_BattleLogicTask__o *, BaseAiActArgument_o *, _QWORD))(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 312))(
                v33,
                retList,
                arg,
                *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_Collections_Generic_List_BattleLogicTask__o *, BaseAiActArgument_o *, __int64))v34)(
        v33,
        retList,
        arg,
        v32);
    }
  }
}