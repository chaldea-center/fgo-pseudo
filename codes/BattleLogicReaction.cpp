void __fastcall BattleLogicReaction___ctor(BattleLogicReaction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__CheckEnemyPlayerTurnEndAfter(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  __int64 v10; // x1
  void *FieldEnemyServantList; // x0
  int v12; // w8
  void *v13; // x21
  unsigned int v14; // w24
  BattleServantData_o *v15; // x22
  BattleLogicTask_o *v16; // x23
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x3
  __int64 v20; // x0

  if ( (byte_4189B3F & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_4189B3F = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  FieldEnemyServantList = this->fields.data;
  if ( !FieldEnemyServantList )
    goto LABEL_19;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)FieldEnemyServantList, 1, 0LL);
  if ( !FieldEnemyServantList )
    goto LABEL_19;
  v12 = *((_DWORD *)FieldEnemyServantList + 6);
  v13 = FieldEnemyServantList;
  if ( v12 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= v12 )
      {
        v20 = sub_B2C460(FieldEnemyServantList);
        sub_B2C400(v20, 0LL);
      }
      v15 = (BattleServantData_o *)*((_QWORD *)v13 + (int)v14 + 4);
      if ( !v15 )
        break;
      if ( !v15->fields.status )
      {
        FieldEnemyServantList = (void *)BattleServantData__isAlive(v15, 0, 0LL);
        if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
        {
          FieldEnemyServantList = this->fields.logicenemyai;
          if ( !FieldEnemyServantList )
            break;
          FieldEnemyServantList = (void *)BattleLogicEnemyAi__CheckPlayerTurnEndAfter(
                                            (BattleLogicEnemyAi_o *)FieldEnemyServantList,
                                            v15->fields.uniqueId,
                                            0LL);
          if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
          {
            v16 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v16, v17);
            if ( !v16 )
              break;
            v16->fields.actiontype = 39;
            BattleLogicTask__setActor(v16, 3, v15->fields.uniqueId, v18);
            if ( !v9 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v9,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          }
        }
      }
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        goto LABEL_17;
    }
LABEL_19:
    sub_B2C434(FieldEnemyServantList, v10);
  }
LABEL_17:
  if ( !v9 )
    goto LABEL_19;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__CheckEnemyShiftAfter(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  __int64 v10; // x1
  void *FieldEnemyServantList; // x0
  int v12; // w8
  void *v13; // x21
  unsigned int v14; // w24
  BattleServantData_o *v15; // x22
  BattleLogicTask_o *v16; // x23
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x3
  __int64 v20; // x0

  if ( (byte_4189B3E & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_4189B3E = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  FieldEnemyServantList = this->fields.data;
  if ( !FieldEnemyServantList )
    goto LABEL_20;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)FieldEnemyServantList, 1, 0LL);
  if ( !FieldEnemyServantList )
    goto LABEL_20;
  v12 = *((_DWORD *)FieldEnemyServantList + 6);
  v13 = FieldEnemyServantList;
  if ( v12 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= v12 )
      {
        v20 = sub_B2C460(FieldEnemyServantList);
        sub_B2C400(v20, 0LL);
      }
      v15 = (BattleServantData_o *)*((_QWORD *)v13 + (int)v14 + 4);
      if ( !v15 )
        break;
      if ( !v15->fields.status )
      {
        FieldEnemyServantList = (void *)BattleServantData__isAlive(v15, 0, 0LL);
        if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 && v15->fields._IsBattleShift_k__BackingField )
        {
          FieldEnemyServantList = this->fields.logicenemyai;
          if ( !FieldEnemyServantList )
            break;
          FieldEnemyServantList = (void *)BattleLogicEnemyAi__CheckEnemyShiftAfter(
                                            (BattleLogicEnemyAi_o *)FieldEnemyServantList,
                                            v15->fields.uniqueId,
                                            0LL);
          if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
          {
            v16 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v16, v17);
            if ( !v16 )
              break;
            v16->fields.actiontype = 63;
            BattleLogicTask__setActor(v16, 3, v15->fields.uniqueId, v18);
            if ( !v9 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v9,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          }
        }
      }
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B2C434(FieldEnemyServantList, v10);
  }
LABEL_18:
  if ( !v9 )
    goto LABEL_20;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


bool __fastcall BattleLogicReaction__CheckExecutableDead(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B2C434(this, 0LL);
  return !BattleServantData__isAlive(svtData, 0, 0LL)
      && !BattleServantData__isOverKill(svtData, 0LL)
      && !svtData->fields.isDeadAnime;
}


bool __fastcall BattleLogicReaction__CheckExecutableResurrection(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-8h] BYREF

  gutsBuff = 0LL;
  return BattleLogicReaction__CheckExecutableResurrection_28754252(this, svtData, &gutsBuff, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicReaction__CheckExecutableResurrection_28754252(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        BattleBuffData_BuffData_o **gutsBuff,
        bool isCheckOnly,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleLogic_o *logic; // x0
  __int64 v13; // x1
  bool isAlive; // w8
  bool isGuts_21295976; // w0

  *gutsBuff = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)gutsBuff,
    0LL,
    (System_String_array **)gutsBuff,
    (System_String_array **)isCheckOnly,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( !svtData )
    goto LABEL_10;
  isAlive = BattleServantData__isAlive(svtData, 0, 0LL);
  isGuts_21295976 = 0;
  if ( !isAlive )
  {
    if ( BattleServantData__isOverKill(svtData, 0LL) )
      return 0;
    isGuts_21295976 = BattleServantData__isGuts_21295976(svtData, gutsBuff, 0LL);
    if ( !isGuts_21295976 && !isCheckOnly )
    {
      logic = this->fields.logic;
      if ( logic )
      {
        BattleLogic__checkUsedGutsBuff(logic, svtData->fields.uniqueId, 0LL);
        return 0;
      }
LABEL_10:
      sub_B2C434(logic, v13);
    }
  }
  return isGuts_21295976;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__CheckPlayerActionStart(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  AliveServantReactTaskCreator_o *v5; // x20
  ServantReactTaskCreator_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4189B36 & 1) == 0 )
  {
    sub_B2C35C(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    byte_4189B36 = 1;
  }
  v5 = (AliveServantReactTaskCreator_o *)sub_B2C42C(AliveServantReactTaskCreator_TypeInfo);
  AliveServantReactTaskCreator___ctor(v5, 12, 0LL);
  if ( !v5 || (v6 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v5, 0LL)) == 0LL )
    sub_B2C434(v6, v7);
  return ServantReactTaskCreator__CreateTasks(v6, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckPlayerSkillAfterAction(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  AliveServantReactTaskCreator_o *v3; // x20
  ServantReactTaskCreator_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_4189B37 & 1) == 0 )
  {
    sub_B2C35C(&AliveServantReactTaskCreator_TypeInfo, method);
    byte_4189B37 = 1;
  }
  v3 = (AliveServantReactTaskCreator_o *)sub_B2C42C(AliveServantReactTaskCreator_TypeInfo);
  AliveServantReactTaskCreator___ctor(v3, 19, 0LL);
  if ( !v3 || (v4 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v3, 0LL)) == 0LL )
    sub_B2C434(v4, v5);
  return ServantReactTaskCreator__CreateTasks(v4, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckServantAiTurnStart(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  AliveServantExistReactTaskCreator_o *v3; // x20
  ServantReactTaskCreator_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_4189B3C & 1) == 0 )
  {
    sub_B2C35C(&AliveServantExistReactTaskCreator_TypeInfo, method);
    byte_4189B3C = 1;
  }
  v3 = (AliveServantExistReactTaskCreator_o *)sub_B2C42C(AliveServantExistReactTaskCreator_TypeInfo);
  AliveServantExistReactTaskCreator___ctor(v3, 16, 0LL);
  if ( !v3 || (v4 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v3, 0LL)) == 0LL )
    sub_B2C434(v4, v5);
  return ServantReactTaskCreator__CreateTasks(v4, this->fields.logic, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__CheckServantAiWave(
        BattleLogicReaction_o *this,
        int32_t procState,
        const MethodInfo *method)
{
  AliveServantExistReactTaskCreator_o *v5; // x21
  ServantReactTaskCreator_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4189B3B & 1) == 0 )
  {
    sub_B2C35C(&AliveServantExistReactTaskCreator_TypeInfo, *(_QWORD *)&procState);
    byte_4189B3B = 1;
  }
  v5 = (AliveServantExistReactTaskCreator_o *)sub_B2C42C(AliveServantExistReactTaskCreator_TypeInfo);
  AliveServantExistReactTaskCreator___ctor(v5, procState, 0LL);
  if ( !v5 || (v6 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v5, 0LL)) == 0LL )
    sub_B2C434(v6, v7);
  return ServantReactTaskCreator__CreateTasks(v6, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateAiTask(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  if ( !task )
    sub_B2C434(this, 0LL);
  return (BattleLogicTask_array *)((__int64 (__fastcall *)(BattleLogicTask_o *, struct BattleLogic_o *, Il2CppMethodPointer))task->klass->vtable._5_MakeActionTask.method)(
                                    task,
                                    this->fields.logic,
                                    task->klass->vtable._6_MakeActionData.methodPtr);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateTaskResurrection(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *baseTask,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  __int64 ActorId; // x0
  const MethodInfo *v14; // x1
  BattleData_o *data; // x22
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v17; // x4
  BattleLogicTask_o *v18; // x22
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x3
  struct BattleLogic_o *logic; // x8
  const MethodInfo *v22; // x2
  BattleSkillInfoData_o *v23; // x22
  struct System_Int32_array *targetSkill; // x8
  struct System_Int32_array *v25; // x8
  int32_t RevengeTargetUniqueId; // w0
  int32_t v27; // w25
  System_Int32_array *TargetIds; // x23
  bool exists; // w24
  BattleLogicSkill_o *logicskill; // x25
  const MethodInfo *v31; // x7
  System_Collections_Generic_IEnumerable_T__o *v32; // x0
  __int64 v33; // x8
  __int64 v34; // x20
  unsigned __int64 v35; // x21
  __int64 v37; // x0
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4189B2D & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, baseTask);
    sub_B2C35C(&BattleSkillInfoData_TypeInfo, v5);
    sub_B2C35C(&int___TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_4189B2D = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  gutsBuff = 0LL;
  if ( !baseTask )
    goto LABEL_38;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(baseTask, v14);
  if ( !data )
    goto LABEL_38;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  ActorId = BattleLogicReaction__CheckExecutableResurrection_28754252(this, ServantData, &gutsBuff, 0, v17);
  if ( (ActorId & 1) == 0 )
  {
    if ( ServantData )
    {
      ServantData->fields.status = 0;
      if ( v12 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
    goto LABEL_38;
  }
  v18 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v18, v19);
  if ( !v18 )
    goto LABEL_38;
  v18->fields.actiontype = 13;
  if ( !ServantData )
    goto LABEL_38;
  BattleLogicTask__setActor(v18, 2, ServantData->fields.uniqueId, v20);
  if ( !v12 )
    goto LABEL_38;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v12,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_38;
  ActorId = (__int64)logic->fields.logicEnemyAi;
  if ( !ActorId )
    goto LABEL_38;
  BattleLogicEnemyAi__AddTempDeadSvt((BattleLogicEnemyAi_o *)ActorId, ServantData->fields.uniqueId, 0LL);
  if ( gutsBuff && BattleBuffData_BuffData__isTargetSkill(gutsBuff, 0LL) )
  {
    v23 = (BattleSkillInfoData_o *)sub_B2C42C(BattleSkillInfoData_TypeInfo);
    BattleSkillInfoData___ctor(v23, 0LL);
    if ( v23 )
    {
      v23->fields.svtUniqueId = ServantData->fields.uniqueId;
      if ( gutsBuff )
      {
        targetSkill = gutsBuff->fields.targetSkill;
        if ( targetSkill )
        {
          if ( !targetSkill->max_length )
            goto LABEL_39;
          ActorId = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._4_set_skillId.method)(
                      v23,
                      (unsigned int)targetSkill->m_Items[1],
                      v23->klass->vtable._5_get_skillId.methodPtr);
          if ( gutsBuff )
          {
            v25 = gutsBuff->fields.targetSkill;
            if ( v25 )
            {
              if ( v25->max_length <= 1 )
                goto LABEL_39;
              v23->fields.skilllv = v25->m_Items[2];
              RevengeTargetUniqueId = BattleServantData__getRevengeTargetUniqueId(ServantData, 0LL);
              if ( (RevengeTargetUniqueId & 0x80000000) != 0 )
              {
                TargetIds = Target__getTargetIds(
                              this->fields.data,
                              v23->fields.svtUniqueId,
                              -1,
                              v23->fields.svtUniqueId,
                              13,
                              0LL,
                              0LL);
                exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v23, 0LL);
              }
              else
              {
                v27 = RevengeTargetUniqueId;
                ActorId = sub_B2C374(int___TypeInfo, 1LL);
                if ( !ActorId )
                  goto LABEL_38;
                TargetIds = (System_Int32_array *)ActorId;
                if ( !*(_DWORD *)(ActorId + 24) )
                  goto LABEL_39;
                exists = 0;
                *(_DWORD *)(ActorId + 32) = v27;
              }
              logicskill = this->fields.logicskill;
              ActorId = sub_B2C374(int___TypeInfo, 1LL);
              if ( ActorId )
              {
                if ( !*(_DWORD *)(ActorId + 24) )
                  goto LABEL_39;
                *(_DWORD *)(ActorId + 32) = ServantData->fields.uniqueId;
                if ( logicskill )
                {
                  v32 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                                         logicskill,
                                                                         v23,
                                                                         (System_Int32_array *)ActorId,
                                                                         TargetIds,
                                                                         0,
                                                                         exists,
                                                                         0,
                                                                         v31);
                  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
                    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v12,
                    v32,
                    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                  goto LABEL_32;
                }
              }
            }
          }
        }
      }
    }
LABEL_38:
    sub_B2C434(ActorId, v14);
  }
LABEL_32:
  ActorId = (__int64)BattleLogicReaction__createTaskGuts(this, ServantData->fields.uniqueId, v22);
  if ( ActorId )
  {
    v33 = *(_QWORD *)(ActorId + 24);
    v34 = ActorId;
    if ( (int)v33 >= 1 )
    {
      v35 = 0LL;
      while ( v35 < (unsigned int)v33 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(v34 + 32 + 8 * v35),
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
        LODWORD(v33) = *(_DWORD *)(v34 + 24);
        if ( (__int64)++v35 >= (int)v33 )
          return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      }
LABEL_39:
      v37 = sub_B2C460(ActorId);
      sub_B2C400(v37, 0LL);
    }
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateTasks(
        BattleLogicReaction_o *this,
        ServantReactTaskCreator_o *creator,
        const MethodInfo *method)
{
  if ( !creator )
    sub_B2C434(this, 0LL);
  return ServantReactTaskCreator__CreateTasks(creator, this->fields.logic, 0LL);
}


System_String_o *__fastcall BattleLogicReaction__GetDisappearDeadMotionName(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o **v6; // x8
  bool IsDeadCrystal; // w0

  if ( (byte_4189B32 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8794/*"MOTION_DEAD"*/, svtData);
    sub_B2C35C(&StringLiteral_8795/*"MOTION_DEAD_CRYSTAL"*/, v4);
    this = (BattleLogicReaction_o *)sub_B2C35C(&StringLiteral_8796/*"MOTION_DEAD_ENERGY"*/, v5);
    byte_4189B32 = 1;
  }
  if ( !svtData )
    sub_B2C434(this, svtData);
  if ( BattleServantData__IsDeadEnergy(svtData, 0LL) )
  {
    v6 = (System_String_o **)&StringLiteral_8796/*"MOTION_DEAD_ENERGY"*/;
  }
  else
  {
    IsDeadCrystal = BattleServantData__IsDeadCrystal(svtData, 0LL);
    v6 = (System_String_o **)&StringLiteral_8794/*"MOTION_DEAD"*/;
    if ( IsDeadCrystal )
      v6 = (System_String_o **)&StringLiteral_8795/*"MOTION_DEAD_CRYSTAL"*/;
  }
  return *v6;
}


void __fastcall BattleLogicReaction__SetReactionFunction(
        BattleLogicReaction_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleLogic_reactionFunction_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  BattleLogic_reactionFunction_o *v11; // x21
  BattleLogic_reactionFunction_o *v12; // x21
  BattleLogic_reactionFunction_o *v13; // x21

  if ( (byte_4189B2B & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleLogicReaction_CreateAiTask__, list);
    sub_B2C35C(&Method_BattleLogicReaction_CreateTaskResurrection__, v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v6);
    sub_B2C35C(&BattleLogic_reactionFunction_TypeInfo, v7);
    byte_4189B2B = 1;
  }
  v8 = (BattleLogic_reactionFunction_o *)sub_B2C42C(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleLogicReaction_CreateTaskResurrection__,
    0LL);
  if ( !list )
    sub_B2C434(v9, v10);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    53,
    (System_String_o *)v8,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v11 = (BattleLogic_reactionFunction_o *)sub_B2C42C(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v11, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    57,
    (System_String_o *)v11,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v12 = (BattleLogic_reactionFunction_o *)sub_B2C42C(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v12, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    59,
    (System_String_o *)v12,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v13 = (BattleLogic_reactionFunction_o *)sub_B2C42C(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v13, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    68,
    (System_String_o *)v13,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkChangeApp(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  __int64 v15; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x20
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x0
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4189B40 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    sub_B2C35C(&System_Collections_Generic_List_BattleServantData__TypeInfo, v12);
    byte_4189B40 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v14 )
      goto LABEL_22;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v14,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_22;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantList(
                                                                              data,
                                                                              0LL);
  }
  else
  {
    data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0LL);
    if ( !v14 )
      goto LABEL_22;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v14,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_22;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v14,
    FieldPlayerServantList,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v14,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v18 )
      break;
    current = v26.fields.current;
    if ( !v26.fields.current )
      sub_B2C434(v18, v19);
    if ( !LODWORD(v26.fields.current[28].klass) )
    {
      v21 = BattleServantData__isChangeAppearance((BattleServantData_o *)v26.fields.current, 0LL);
      if ( v21 )
      {
        v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleLogicReaction__getChangeAppearance(
                                                                       (BattleLogicReaction_o *)v21,
                                                                       (BattleServantData_o *)current,
                                                                       0,
                                                                       v22);
        if ( !v13 )
          sub_B2C434(v23, v23);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          v23,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v13 )
LABEL_22:
    sub_B2C434(data, v15);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkDead(BattleLogicReaction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x21
  __int64 v17; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  BattleServantData_o *current; // x21
  BattleLogic_o *logic; // x23
  BeforeDeadServantAiTask_o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  _BOOL8 isAppearanceId; // x0
  const MethodInfo *v29; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v30; // x0
  BattleLogicTask_o *v31; // x22
  const MethodInfo *v32; // x1
  __int64 v33; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x3
  int32_t uniqueId; // w2
  __int64 v37; // x0
  __int64 v38; // x1
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4189B30 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, method);
    sub_B2C35C(&BeforeDeadServantAiTask_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    sub_B2C35C(&System_Collections_Generic_List_BattleServantData__TypeInfo, v14);
    byte_4189B30 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_33;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v16 )
      goto LABEL_33;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_33;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantList(
                                                                              data,
                                                                              0LL);
  }
  else
  {
    data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0LL);
    if ( !v16 )
      goto LABEL_33;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_33;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
    FieldPlayerServantList,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v40,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v16,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v41 = v40;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v41,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v20 )
      break;
    current = (BattleServantData_o *)v41.fields.current;
    if ( !v41.fields.current )
      sub_B2C434(v20, v21);
    if ( !LODWORD(v41.fields.current[28].klass)
      && BattleLogicReaction__CheckExecutableDead(
           (BattleLogicReaction_o *)v20,
           (BattleServantData_o *)v41.fields.current,
           v22) )
    {
      if ( (((__int64 (__fastcall *)(BattleServantData_o *, struct BattleLogic_o *, __int64, _QWORD, Il2CppMethodPointer))current->klass->vtable._19_ExistAiThinking.method)(
              current,
              this->fields.logic,
              17LL,
              0LL,
              current->klass->vtable._20_GetLogicServantAi.methodPtr) & 1) != 0 )
      {
        logic = this->fields.logic;
        v25 = (BeforeDeadServantAiTask_o *)sub_B2C42C(BeforeDeadServantAiTask_TypeInfo);
        BeforeDeadServantAiTask___ctor(v25, current, logic, 0LL);
        if ( !v15 )
          sub_B2C434(v26, v27);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
      isAppearanceId = BattleServantData__isAppearanceId(current, 0LL);
      if ( isAppearanceId )
      {
        v30 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleLogicReaction__getChangeAppearance(
                                                                       (BattleLogicReaction_o *)isAppearanceId,
                                                                       current,
                                                                       0,
                                                                       v29);
        if ( !v15 )
          sub_B2C434(v30, v30);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          v30,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
      current->fields.status = 2;
      v31 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v31, v32);
      if ( !v31 )
        sub_B2C434(v33, v34);
      v31->fields.actiontype = 14;
      uniqueId = current->fields.uniqueId;
      if ( current->fields.isEnemy )
        BattleLogicTask__setActor(v31, 3, uniqueId, v35);
      else
        BattleLogicTask__setActor(v31, 2, uniqueId, v35);
      if ( !v15 )
        sub_B2C434(v37, v38);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v41,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v15 )
LABEL_33:
    sub_B2C434(data, v17);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__checkEnemyEndTurn(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  AliveServantReactTaskCreator_o *v5; // x20
  ServantReactTaskCreator_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4189B3A & 1) == 0 )
  {
    sub_B2C35C(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    byte_4189B3A = 1;
  }
  v5 = (AliveServantReactTaskCreator_o *)sub_B2C42C(AliveServantReactTaskCreator_TypeInfo);
  AliveServantReactTaskCreator___ctor(v5, 5, 0LL);
  if ( !v5 || (v6 = ServantReactTaskCreator__OrderNEP((ServantReactTaskCreator_o *)v5, 0LL)) == 0LL )
    sub_B2C434(v6, v7);
  return ServantReactTaskCreator__CreateTasks(v6, this->fields.logic, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__checkEnemyStartTurn(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  __int64 v10; // x1
  BattleLogic_o *logic; // x0
  AliveServantReactTaskCreator_o *v12; // x21
  System_Collections_Generic_IEnumerable_T__o *Tasks; // x0

  if ( (byte_4189B39 & 1) == 0 )
  {
    sub_B2C35C(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_4189B39 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (logic = (BattleLogic_o *)BattleLogic__GetTurnStartTaskArray(logic, 0, 0LL), !v9)
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
          (System_Collections_Generic_IEnumerable_T__o *)logic,
          (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v12 = (AliveServantReactTaskCreator_o *)sub_B2C42C(AliveServantReactTaskCreator_TypeInfo),
        AliveServantReactTaskCreator___ctor(v12, 4, 0LL),
        !v12)
    || (logic = (BattleLogic_o *)ServantReactTaskCreator__OrderNEP((ServantReactTaskCreator_o *)v12, 0LL)) == 0LL )
  {
    sub_B2C434(logic, v10);
  }
  Tasks = (System_Collections_Generic_IEnumerable_T__o *)ServantReactTaskCreator__CreateTasks(
                                                           (ServantReactTaskCreator_o *)logic,
                                                           this->fields.logic,
                                                           0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    Tasks,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__checkPlayerActionEnd(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  AliveServantReactTaskCreator_o *v5; // x20
  ServantReactTaskCreator_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4189B38 & 1) == 0 )
  {
    sub_B2C35C(&AliveServantReactTaskCreator_TypeInfo, *(_QWORD *)&ltype);
    byte_4189B38 = 1;
  }
  v5 = (AliveServantReactTaskCreator_o *)sub_B2C42C(AliveServantReactTaskCreator_TypeInfo);
  AliveServantReactTaskCreator___ctor(v5, 3, 0LL);
  if ( !v5 || (v6 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v5, 0LL)) == 0LL )
    sub_B2C434(v6, v7);
  return ServantReactTaskCreator__CreateTasks(v6, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkResurrection(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  __int64 v9; // x1
  void *data; // x0
  const MethodInfo *v11; // x4
  int v12; // w8
  void *v13; // x21
  unsigned int v14; // w25
  BattleServantData_o *v15; // x22
  BattleLogic_o *logic; // x24
  BeforeResurrectionServantAiTask_o *v17; // x23
  BattleLogicServantTask_o *v18; // x23
  const MethodInfo *v19; // x3
  __int64 v21; // x0
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4189B2C & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicServantTask_TypeInfo, method);
    sub_B2C35C(&BeforeResurrectionServantAiTask_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v7);
    byte_4189B2C = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_19;
  data = BattleData__getFieldServantList((BattleData_o *)data, 0, 0LL);
  if ( !data )
    goto LABEL_19;
  v12 = *((_DWORD *)data + 6);
  v13 = data;
  if ( v12 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= v12 )
      {
        v21 = sub_B2C460(data);
        sub_B2C400(v21, 0LL);
      }
      v15 = (BattleServantData_o *)*((_QWORD *)v13 + (int)v14 + 4);
      if ( !v15 )
        break;
      if ( !v15->fields.status )
      {
        gutsBuff = 0LL;
        data = (void *)BattleLogicReaction__CheckExecutableResurrection_28754252(this, v15, &gutsBuff, 1, v11);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( (((__int64 (__fastcall *)(BattleServantData_o *, struct BattleLogic_o *, __int64, _QWORD, Il2CppMethodPointer))v15->klass->vtable._19_ExistAiThinking.method)(
                  v15,
                  this->fields.logic,
                  18LL,
                  0LL,
                  v15->klass->vtable._20_GetLogicServantAi.methodPtr) & 1) != 0 )
          {
            logic = this->fields.logic;
            v17 = (BeforeResurrectionServantAiTask_o *)sub_B2C42C(BeforeResurrectionServantAiTask_TypeInfo);
            BeforeResurrectionServantAiTask___ctor(v17, v15, logic, 0LL);
            if ( !v8 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v8,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          }
          v15->fields.status = 1;
          v18 = (BattleLogicServantTask_o *)sub_B2C42C(BattleLogicServantTask_TypeInfo);
          BattleLogicServantTask___ctor(v18, 53, v15, v19);
          if ( !v8 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v8,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
        }
      }
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        goto LABEL_17;
    }
LABEL_19:
    sub_B2C434(data, v9);
  }
LABEL_17:
  if ( !v8 )
    goto LABEL_19;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkWithdraw(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  __int64 v16; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x26
  BattleLogicTask_o *v22; // x20
  const MethodInfo *v23; // x1
  __int64 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x3
  int32_t monitor; // w2
  __int64 v28; // x0
  __int64 v29; // x1
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4189B3D & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_List_BattleServantData__TypeInfo, v13);
    byte_4189B3D = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v15 )
      goto LABEL_27;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_27;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldPlayerServantList(
                                                                              data,
                                                                              0LL);
  }
  else
  {
    data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0LL);
    if ( !v15 )
      goto LABEL_27;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_27;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v15,
    FieldPlayerServantList,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v31,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v15,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v32 = v31;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v32,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v19 )
      break;
    current = v32.fields.current;
    if ( !v32.fields.current )
      sub_B2C434(v19, v20);
    if ( !LODWORD(v32.fields.current[28].klass) && BYTE1(v32.fields.current[50].klass) )
    {
      LODWORD(v32.fields.current[28].klass) = 3;
      v22 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v22, v23);
      if ( !v22 )
        sub_B2C434(v24, v25);
      v22->fields.actiontype = 38;
      monitor = (int32_t)current[1].monitor;
      if ( HIBYTE(current[28].klass) )
        BattleLogicTask__setActor(v22, 3, monitor, v26);
      else
        BattleLogicTask__setActor(v22, 2, monitor, v26);
      if ( !v14 )
        sub_B2C434(v28, v29);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v14 )
LABEL_27:
    sub_B2C434(data, v16);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleActionData_o *__fastcall BattleLogicReaction__createChangeApp(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicReaction_o *v4; // x20
  __int64 v5; // x1
  BattleData_o *data; // x20
  BattleLogicReaction_o *v7; // x19
  __int64 v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x1

  v4 = this;
  if ( (byte_4189B42 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, task);
    this = (BattleLogicReaction_o *)sub_B2C35C(&StringLiteral_8788/*"MOTION_APP"*/, v5);
    byte_4189B42 = 1;
  }
  if ( !task )
    goto LABEL_10;
  data = v4->fields.data;
  this = (BattleLogicReaction_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_10;
  this = (BattleLogicReaction_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( !this )
    goto LABEL_10;
  v7 = this;
  if ( LODWORD(this[6].fields.data) == 4 )
    LODWORD(this[6].fields.data) = 0;
  v8 = sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v8, 0LL);
  if ( !v8 )
LABEL_10:
    sub_B2C434(this, task);
  *(_DWORD *)(v8 + 32) = v7->fields.logic;
  v15 = (System_Int32_array **)StringLiteral_8788/*"MOTION_APP"*/;
  *(_QWORD *)(v8 + 64) = StringLiteral_8788/*"MOTION_APP"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 64), v15, v9, v10, v11, v12, v13, v14);
  return (BattleActionData_o *)v8;
}


BattleActionData_o *__fastcall BattleLogicReaction__createDeadMotion(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_o *v3; // x20
  BattleLogicReaction_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleData_o *data; // x21
  BattleServantData_o *v12; // x20
  const MethodInfo *v13; // x2
  __int64 v14; // x21
  int32_t *p_uniqueId; // x28
  struct BattleData_o *v16; // x8
  BattleActionData_c *v17; // x0
  MethodInfo *v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 *v24; // x8
  System_Int32_array **DisappearDeadMotionName; // x1
  const MethodInfo *v26; // x2
  struct BattleData_o *v27; // x8
  struct BattleData_o *v28; // x8
  struct BattlePerformance_o *perf; // x8
  int32_t DeadTargetUniqueId; // w0
  int32_t v31; // w22
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v33; // x23
  BattleLogicReaction_o *v34; // x24
  struct BattleLogic_o *logic; // x8
  unsigned int v36; // w23
  __int64 v37; // x26
  BattleSkillInfoData_o *v38; // x25
  __int64 v39; // x8
  __int64 v40; // x8
  BattleLogicSkill_o *logicskill; // x26
  BattleLogicReaction_o *v42; // x27
  const MethodInfo *v43; // x7
  BattleLogicReaction_o *v44; // x25
  const MethodInfo *v45; // x2
  struct BattleLogic_o *v46; // x8
  unsigned __int64 v47; // x26
  BattleLogicReaction_o *IsWarBoard; // x0
  __int64 v50; // x0
  BattleServantData_o *svtData; // [xsp+0h] [xbp-60h]
  bool isFirstAdd; // [xsp+Ch] [xbp-54h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_4189B31 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, task);
    sub_B2C35C(&BattleSkillInfoData_TypeInfo, v5);
    sub_B2C35C(&int___TypeInfo, v6);
    sub_B2C35C(&StringLiteral_8810/*"MOTION_STAND_DEAD"*/, v7);
    sub_B2C35C(&StringLiteral_8797/*"MOTION_EFFECT_DEAD"*/, v8);
    sub_B2C35C(&StringLiteral_8813/*"MOTION_WAIT_DEAD"*/, v9);
    this = (BattleLogicReaction_o *)sub_B2C35C(&StringLiteral_8801/*"MOTION_NO_DEAD"*/, v10);
    byte_4189B31 = 1;
  }
  isFirstAdd = 0;
  if ( !v3 )
    goto LABEL_89;
  data = v4->fields.data;
  this = (BattleLogicReaction_o *)BattleLogicTask__getActorId(v3, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_89;
  this = (BattleLogicReaction_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( !this )
    goto LABEL_89;
  v12 = (BattleServantData_o *)this;
  if ( !BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL) )
  {
    if ( v12->fields.isDeadAnime )
    {
      BattleLogicReaction__updateRemoveBuff(v4, v12, v13);
      return 0LL;
    }
    v14 = sub_B2C42C(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v14, 0LL);
    this = (BattleLogicReaction_o *)v4->fields.perf;
    if ( !this )
      goto LABEL_89;
    BattlePerformance__updateView((BattlePerformance_o *)this, 0LL);
    this = (BattleLogicReaction_o *)v4->fields.data;
    if ( !this )
      goto LABEL_89;
    this = (BattleLogicReaction_o *)BattleData__IsWarBoard((BattleData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0
      && (this = (BattleLogicReaction_o *)BattleServantData__getDefeatPoint(v12, 0LL), (int)this >= 1) )
    {
      p_uniqueId = &v12->fields.uniqueId;
      if ( !v14 )
        goto LABEL_89;
    }
    else
    {
      v16 = v4->fields.data;
      if ( !v16 )
        goto LABEL_89;
      this = (BattleLogicReaction_o *)v16->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_89;
      p_uniqueId = &v12->fields.uniqueId;
      this = (BattleLogicReaction_o *)BattleFieldEnvironmentData__SubBuffFromRelateDeadActor(
                                        (BattleFieldEnvironmentData_o *)this,
                                        v12->fields.uniqueId,
                                        0LL);
      if ( !v14 )
        goto LABEL_89;
    }
    *(_DWORD *)(v14 + 32) = *p_uniqueId;
    v17 = BattleActionData_TypeInfo;
    if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
      v17 = BattleActionData_TypeInfo;
    }
    *(_DWORD *)(v14 + 56) = v17->static_fields->TYPE_DEAD;
    if ( !BattleServantData__isDeadEscape(v12, 0LL) )
    {
      if ( BattleServantData__isDeadStand(v12, 0LL) )
      {
        v24 = &StringLiteral_8810/*"MOTION_STAND_DEAD"*/;
        goto LABEL_30;
      }
      if ( BattleServantData__isDeadEffect(v12, 0LL) )
      {
        v24 = &StringLiteral_8797/*"MOTION_EFFECT_DEAD"*/;
        goto LABEL_30;
      }
      if ( BattleServantData__isDeadWait(v12, 0LL) )
      {
        v24 = &StringLiteral_8813/*"MOTION_WAIT_DEAD"*/;
        goto LABEL_30;
      }
      this = (BattleLogicReaction_o *)v4->fields.data;
      if ( !this )
        goto LABEL_89;
      IsWarBoard = (BattleLogicReaction_o *)BattleData__IsWarBoard((BattleData_o *)this, 0LL);
      if ( ((unsigned __int8)IsWarBoard & 1) == 0
        || (IsWarBoard = (BattleLogicReaction_o *)BattleServantData__getDefeatPoint(v12, 0LL), (int)IsWarBoard < 1) )
      {
        if ( v12->fields.IsVanishSkill )
        {
          BattleLogicReaction__updateRemoveBuff(v4, v12, v18);
          v14 = 0LL;
          goto LABEL_86;
        }
        DisappearDeadMotionName = (System_Int32_array **)BattleLogicReaction__GetDisappearDeadMotionName(
                                                           IsWarBoard,
                                                           v12,
                                                           v18);
LABEL_31:
        *(_QWORD *)(v14 + 64) = DisappearDeadMotionName;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v14 + 64),
          DisappearDeadMotionName,
          (System_String_array **)v18,
          v19,
          v20,
          v21,
          v22,
          v23);
        v27 = v4->fields.data;
        if ( v27 )
        {
          if ( !v27->fields.isMultiTargetBattle
            || !v12->fields.isEnemy
            || (v27->fields.justDeadTargetId = v27->fields.globaltargetId, (v27 = v4->fields.data) != 0LL) )
          {
            if ( *p_uniqueId == v27->fields.globaltargetId )
              v27->fields.globaltargetId = -1;
            if ( v12->fields.isLeader )
            {
              v28 = v4->fields.data;
              if ( !v28 )
                goto LABEL_89;
              v28->fields.leaderDown = 1;
            }
            BattleLogicReaction__updateRemoveBuff(v4, v12, v26);
            perf = v4->fields.perf;
            if ( perf )
            {
              this = (BattleLogicReaction_o *)perf->fields.statusPerf;
              if ( this )
              {
                BattlePerformanceStatus__updateNokoriEnemyCount((BattlePerformanceStatus_o *)this, 0LL);
                DeadTargetUniqueId = BattleServantData__getDeadTargetUniqueId(v12, 0LL);
                if ( DeadTargetUniqueId < 1 )
                  goto LABEL_86;
                v31 = DeadTargetUniqueId;
                this = (BattleLogicReaction_o *)v4->fields.data;
                if ( !this )
                  goto LABEL_89;
                ServantData = BattleData__getServantData((BattleData_o *)this, v31, 0LL);
                if ( !ServantData || ServantData->fields.isDeadAnime || v12->fields.isSystemDead )
                {
LABEL_86:
                  v12->fields.isDeadAnime = 1;
                  return (BattleActionData_o *)v14;
                }
                this = (BattleLogicReaction_o *)v4->fields.data;
                if ( this )
                {
                  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, v31, 0LL);
                  if ( v4->fields.logic )
                  {
                    v33 = (BattleServantData_o *)this;
                    this = (BattleLogicReaction_o *)BattleLogic__GetDeadAttackCommand(
                                                      v4->fields.logic,
                                                      *p_uniqueId,
                                                      0LL);
                    if ( v33 )
                    {
                      this = (BattleLogicReaction_o *)BattleServantData__getDeadAttackSideEffect(
                                                        v33,
                                                        v12,
                                                        (BattleCommandData_o *)this,
                                                        0LL);
                      if ( v4->fields.logic )
                      {
                        v34 = this;
                        svtData = v33;
                        BattleLogic__AddUnExecutedUpdateIntervalBuffActionData(v4->fields.logic, 0LL);
                        if ( v34 )
                        {
                          logic = v34->fields.logic;
                          if ( logic )
                          {
                            isFirstAdd = 1;
                            if ( (int)logic >= 1 )
                            {
                              v36 = 0;
                              while ( 1 )
                              {
                                if ( v36 >= (unsigned int)logic )
                                  goto LABEL_90;
                                v37 = *((_QWORD *)&v34->fields.perf + (int)v36);
                                v38 = (BattleSkillInfoData_o *)sub_B2C42C(BattleSkillInfoData_TypeInfo);
                                BattleSkillInfoData___ctor(v38, 0LL);
                                if ( !v38 )
                                  goto LABEL_89;
                                v38->fields.svtUniqueId = v31;
                                if ( !v37 )
                                  goto LABEL_89;
                                v39 = *(_QWORD *)(v37 + 40);
                                if ( !v39 )
                                  goto LABEL_89;
                                if ( !*(_DWORD *)(v39 + 24) )
                                  goto LABEL_90;
                                this = (BattleLogicReaction_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v38->klass->vtable._4_set_skillId.method)(
                                                                  v38,
                                                                  *(unsigned int *)(v39 + 32),
                                                                  v38->klass->vtable._5_get_skillId.methodPtr);
                                v40 = *(_QWORD *)(v37 + 40);
                                if ( !v40 )
                                  goto LABEL_89;
                                if ( *(_DWORD *)(v40 + 24) <= 1u )
                                  goto LABEL_90;
                                v38->fields.skilllv = *(_DWORD *)(v40 + 36);
                                logicskill = v4->fields.logicskill;
                                this = (BattleLogicReaction_o *)sub_B2C374(int___TypeInfo, 1LL);
                                if ( !this )
                                  goto LABEL_89;
                                v42 = this;
                                if ( !LODWORD(this->fields.logic) )
                                  goto LABEL_90;
                                LODWORD(this->fields.perf) = v31;
                                this = (BattleLogicReaction_o *)sub_B2C374(int___TypeInfo, 1LL);
                                if ( !this )
                                  goto LABEL_89;
                                if ( !LODWORD(this->fields.logic) )
                                  goto LABEL_90;
                                LODWORD(this->fields.perf) = *p_uniqueId;
                                if ( !logicskill )
                                  goto LABEL_89;
                                this = (BattleLogicReaction_o *)BattleLogicSkill__taskSkill(
                                                                  logicskill,
                                                                  v38,
                                                                  (System_Int32_array *)v42,
                                                                  (System_Int32_array *)this,
                                                                  0,
                                                                  0,
                                                                  0,
                                                                  v43);
                                if ( !v4->fields.logic )
                                  goto LABEL_89;
                                v44 = this;
                                BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                                  v4->fields.logic,
                                  &isFirstAdd,
                                  svtData,
                                  (BattleBuffData_BuffData_array *)v34,
                                  (BattleLogicTask_array *)this,
                                  0LL);
                                if ( !v44 )
                                  goto LABEL_89;
                                v46 = v44->fields.logic;
                                if ( (int)v46 >= 1 )
                                  break;
LABEL_77:
                                LODWORD(logic) = v34->fields.logic;
                                if ( (int)++v36 >= (int)logic )
                                  goto LABEL_78;
                              }
                              v47 = 0LL;
                              while ( v47 < (unsigned int)v46 )
                              {
                                this = (BattleLogicReaction_o *)v4->fields.logicskill;
                                if ( !this )
                                  goto LABEL_89;
                                this = (BattleLogicReaction_o *)BattleLogicSkill__createSkillData(
                                                                  (BattleLogicSkill_o *)this,
                                                                  *((BattleLogicTask_o **)&v44->fields.perf + v47),
                                                                  v45);
                                if ( this )
                                {
                                  task = (BattleLogicTask_o *)this;
                                  this = (BattleLogicReaction_o *)v4->fields.perf;
                                  if ( !this )
                                    goto LABEL_89;
                                  BattlePerformance__addActionData_18594788(
                                    (BattlePerformance_o *)this,
                                    (BattleActionData_o *)task,
                                    0LL);
                                }
                                LODWORD(v46) = v44->fields.logic;
                                if ( (__int64)++v47 >= (int)v46 )
                                  goto LABEL_77;
                              }
LABEL_90:
                              v50 = sub_B2C460(this);
                              sub_B2C400(v50, 0LL);
                            }
                          }
LABEL_78:
                          this = (BattleLogicReaction_o *)v4->fields.logic;
                          if ( this )
                          {
                            BattleLogic__RemoveDeadAttackCommand((BattleLogic_o *)this, *p_uniqueId, 0LL);
                            this = (BattleLogicReaction_o *)svtData->fields.buffData;
                            if ( this )
                            {
                              BattleBuffData__usedProgressing((BattleBuffData_o *)this, 0LL);
                              goto LABEL_86;
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
LABEL_89:
        sub_B2C434(this, task);
      }
    }
    v24 = &StringLiteral_8801/*"MOTION_NO_DEAD"*/;
LABEL_30:
    DisappearDeadMotionName = (System_Int32_array **)*v24;
    goto LABEL_31;
  }
  v14 = 0LL;
  v12->fields.status = 0;
  return (BattleActionData_o *)v14;
}


BattleActionData_o *__fastcall BattleLogicReaction__createResurrection(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicReaction_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  BattleData_o *data; // x21
  BattleServantData_o *v8; // x21
  WarEntity_o *Entity; // x0
  BuffEntity_o *v10; // x22
  BattleLogic_o *logic; // x8
  int32_t v12; // w20
  BattleLogicReaction_o *v13; // x0
  const MethodInfo *v14; // x6
  System_String_o *overrideName; // [xsp+0h] [xbp-30h] BYREF
  BattleBuffData_BuffData_o *buff; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4189B2E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_BuffMaster___, task);
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    this = (BattleLogicReaction_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4189B2E = 1;
  }
  overrideName = 0LL;
  buff = 0LL;
  if ( !task )
    goto LABEL_11;
  data = v4->fields.data;
  this = (BattleLogicReaction_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_11;
  this = (BattleLogicReaction_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( !this )
    goto LABEL_11;
  v8 = (BattleServantData_o *)this;
  BattleServantData__isGuts_21295976((BattleServantData_o *)this, &buff, 0LL);
  this = (BattleLogicReaction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (BattleLogicReaction_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BuffMaster___),
        !buff)
    || !this
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                   buff->fields.buffId,
                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__),
        overrideName = 0LL,
        v10 = (BuffEntity_o *)Entity,
        this = (BattleLogicReaction_o *)BattleServantData__useGuts(v8, v8->fields.maxhp, &overrideName, 0LL),
        (logic = v4->fields.logic) == 0LL) )
  {
LABEL_11:
    sub_B2C434(this, task);
  }
  v12 = (int)this;
  BattleLogic__checkUsedGutsBuff(logic, v8->fields.uniqueId, 0LL);
  return BattleLogicReaction__createResurrectionCommon(
           v13,
           v8,
           v10,
           v12,
           task->fields.isForcedSpeedOne,
           overrideName,
           v14);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicReaction__createResurrectionCommon(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        BuffEntity_o *buffEntity,
        int32_t val,
        bool isForcedSpeedOne,
        System_String_o *overrideName,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  BattleActionData_c *v23; // x0
  System_Int32_array **v24; // x1
  __int64 v25; // x23
  unsigned int uniqueId; // w8
  System_Int32_array **GutsText; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  _QWORD **v40; // x27
  __int64 v41; // x24
  __int16 v42; // w8
  __int64 v43; // x24
  __int64 v44; // x24
  __int64 v45; // x24
  System_Int32_array ***v46; // x8
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x9
  int32_t v62; // w1
  int32_t digit; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4189B2F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_int___, svtData);
    sub_B2C35C(&BattleActionData_TypeInfo, v12);
    sub_B2C35C(&BattleActionData_BuffData_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    this = (BattleLogicReaction_o *)sub_B2C35C(&StringLiteral_8805/*"MOTION_RESURRECTION"*/, v15);
    byte_4189B2F = 1;
  }
  digit = 0;
  if ( !svtData )
    goto LABEL_30;
  ((void (__fastcall *)(BattleServantData_o *, __int64, Il2CppMethodPointer, _QWORD, bool, System_String_o *, const MethodInfo *))svtData->klass->vtable._10_set_hp.method)(
    svtData,
    1LL,
    svtData->klass->vtable._11_get_reducedhp.methodPtr,
    *(_QWORD *)&val,
    isForcedSpeedOne,
    overrideName,
    method);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))svtData->klass->vtable._12_set_reducedhp.method)(
    svtData,
    0LL,
    svtData->klass->vtable._13_get_resultHp.methodPtr);
  v16 = sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_30;
  *(_DWORD *)(v16 + 32) = svtData->fields.uniqueId;
  v23 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v23 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v16 + 56) = v23->static_fields->TYPE_RESURRECTION;
  v24 = (System_Int32_array **)StringLiteral_8805/*"MOTION_RESURRECTION"*/;
  *(_QWORD *)(v16 + 64) = StringLiteral_8805/*"MOTION_RESURRECTION"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 64), v24, v17, v18, v19, v20, v21, v22);
  *(_BYTE *)(v16 + 241) = isForcedSpeedOne;
  v25 = sub_B2C42C(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_30;
  uniqueId = svtData->fields.uniqueId;
  *(_DWORD *)(v25 + 16) = 0;
  *(_QWORD *)(v25 + 40) = uniqueId;
  if ( !buffEntity )
    goto LABEL_30;
  GutsText = (System_Int32_array **)BuffEntity__getGutsText(buffEntity, 0LL);
  *(_QWORD *)(v25 + 56) = GutsText;
  sub_B2C2F8((BattleServantConfConponent_o *)(v25 + 56), GutsText, v28, v29, v30, v31, v32, v33);
  *(_DWORD *)(v25 + 64) = BuffEntity__getGutsIcon(buffEntity, 0LL);
  *(_DWORD *)(v25 + 68) = BuffEntity__getgutsTextColor(buffEntity, 0LL);
  *(_DWORD *)(v25 + 28) = 2;
  v40 = (_QWORD **)Method_System_Array_Empty_int___;
  v41 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v42 = *(_WORD *)(v41 + 306);
  if ( (v42 & 1) == 0 )
  {
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v42 = *(_WORD *)(v41 + 306);
  }
  if ( (v42 & 0x400) != 0 )
  {
    v43 = *v40[6];
    if ( (*(_BYTE *)(v43 + 306) & 1) == 0 )
      sub_AC505C(*v40[6]);
    if ( !*(_DWORD *)(v43 + 224) )
    {
      v44 = *v40[6];
      if ( (*(_BYTE *)(v44 + 306) & 1) == 0 )
        sub_AC505C(*v40[6]);
      j_il2cpp_runtime_class_init_0(v44);
    }
  }
  v45 = *v40[6];
  if ( (*(_BYTE *)(v45 + 306) & 1) == 0 )
    sub_AC505C(*v40[6]);
  v46 = *(System_Int32_array ****)(v45 + 184);
  v47 = *v46;
  *(_QWORD *)(v25 + 72) = *v46;
  sub_B2C2F8((BattleServantConfConponent_o *)(v25 + 72), v47, v34, v35, v36, v37, v38, v39);
  if ( !System_String__IsNullOrEmpty(overrideName, 0LL) )
  {
    *(_QWORD *)(v16 + 64) = overrideName;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v16 + 64),
      (System_Int32_array **)overrideName,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    v54 = (System_Int32_array **)StringLiteral_1/*""*/;
    *(_QWORD *)(v25 + 56) = StringLiteral_1/*""*/;
    sub_B2C2F8((BattleServantConfConponent_o *)(v25 + 56), v54, v55, v56, v57, v58, v59, v60);
  }
  digit = 1000;
  v61 = BattleServantData__getUpDownGutsHp(svtData, &digit, 0LL) * (__int64)val;
  if ( (int)(v61 / digit) <= 1 )
    v62 = 1;
  else
    v62 = v61 / digit;
  BattleServantData__setHp(svtData, v62, 1, 0LL);
  if ( svtData->fields.isGutsSleepRelease )
  {
    this = (BattleLogicReaction_o *)svtData->fields.buffData;
    if ( this )
    {
      BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)this, svtData, 0, 0LL);
      goto LABEL_29;
    }
LABEL_30:
    sub_B2C434(this, svtData);
  }
LABEL_29:
  svtData->fields.isGutsSleepRelease = 1;
  BattleActionData__setBuffData((BattleActionData_o *)v16, (BattleActionData_BuffData_o *)v25, 0LL, 0LL);
  svtData->fields.status = 0;
  return (BattleActionData_o *)v16;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__createTaskDead(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  __int64 v17; // x1
  __int64 data; // x0
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v20; // x2
  BattleBuffData_BuffData_array *DeadBufflist; // x22
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x23
  unsigned int v24; // w28
  BattleBuffData_BuffData_o *v25; // x25
  BattleSkillInfoData_o *v26; // x24
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v28; // x8
  int32_t v29; // w0
  int32_t v30; // w27
  System_Int32_array *TargetIds; // x25
  bool exists; // w26
  BattleLogicSkill_o *logicskill; // x27
  const MethodInfo *v34; // x7
  BattleLogicTask_o *v35; // x22
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x3
  BattleLogic_o *logic; // x22
  DeadServantAiTask_o *v39; // x23
  System_Collections_Generic_IEnumerable_T__o *DeadActionTask; // x0
  __int64 v42; // x0

  if ( (byte_4189B34 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, *(_QWORD *)&uniqueId);
    sub_B2C35C(&BattleSkillInfoData_TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_BuffMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v7);
    sub_B2C35C(&DeadServantAiTask_TypeInfo, v8);
    sub_B2C35C(&int___TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4189B34 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_36;
  ServantData = BattleData__getServantData((BattleData_o *)data, uniqueId, 0LL);
  data = BattleLogicReaction__CheckExecutableDead((BattleLogicReaction_o *)ServantData, ServantData, v20);
  if ( (data & 1) != 0 )
  {
    if ( ServantData )
    {
      DeadBufflist = BattleServantData__getDeadBufflist(ServantData, this->fields.data, 0, 0LL);
      data = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( data )
      {
        data = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)data,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BuffMaster___);
        if ( DeadBufflist )
        {
          max_length = DeadBufflist->max_length;
          if ( max_length >= 1 )
          {
            v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)data;
            v24 = 0;
            while ( v24 < max_length )
            {
              v25 = DeadBufflist->m_Items[v24];
              if ( !v25 )
                goto LABEL_36;
              if ( !v23 )
                goto LABEL_36;
              DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                v23,
                v25->fields.buffId,
                (const MethodInfo_24E40D0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
              v26 = (BattleSkillInfoData_o *)sub_B2C42C(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v26, 0LL);
              if ( !v26 )
                goto LABEL_36;
              v26->fields.svtUniqueId = ServantData->fields.uniqueId;
              vals = v25->fields.vals;
              if ( !vals )
                goto LABEL_36;
              if ( !vals->max_length )
                break;
              data = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v26->klass->vtable._4_set_skillId.method)(
                       v26,
                       (unsigned int)vals->m_Items[1],
                       v26->klass->vtable._5_get_skillId.methodPtr);
              v28 = v25->fields.vals;
              if ( !v28 )
                goto LABEL_36;
              if ( v28->max_length <= 1 )
                break;
              v26->fields.skilllv = v28->m_Items[2];
              v29 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v25, 0LL);
              if ( (v29 & 0x80000000) != 0 )
              {
                TargetIds = Target__getTargetIds(
                              this->fields.data,
                              v26->fields.svtUniqueId,
                              -1,
                              v26->fields.svtUniqueId,
                              13,
                              0LL,
                              0LL);
                exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v26, 0LL);
              }
              else
              {
                v30 = v29;
                data = sub_B2C374(int___TypeInfo, 1LL);
                if ( !data )
                  goto LABEL_36;
                TargetIds = (System_Int32_array *)data;
                if ( !*(_DWORD *)(data + 24) )
                  break;
                exists = 0;
                *(_DWORD *)(data + 32) = v30;
              }
              logicskill = this->fields.logicskill;
              data = sub_B2C374(int___TypeInfo, 1LL);
              if ( !data )
                goto LABEL_36;
              if ( !*(_DWORD *)(data + 24) )
                break;
              *(_DWORD *)(data + 32) = ServantData->fields.uniqueId;
              if ( !logicskill )
                goto LABEL_36;
              data = (__int64)BattleLogicSkill__taskSkill(
                                logicskill,
                                v26,
                                (System_Int32_array *)data,
                                TargetIds,
                                0,
                                exists,
                                0,
                                v34);
              if ( !v16 )
                goto LABEL_36;
              System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
                (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
                (System_Collections_Generic_IEnumerable_T__o *)data,
                (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              max_length = DeadBufflist->max_length;
              if ( (int)++v24 >= max_length )
                goto LABEL_28;
            }
            v42 = sub_B2C460(data);
            sub_B2C400(v42, 0LL);
          }
LABEL_28:
          data = (__int64)ServantData->fields.buffData;
          if ( data )
          {
            BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
            v35 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v35, v36);
            if ( v35 )
            {
              v35->fields.actiontype = 15;
              BattleLogicTask__setActor(v35, 3, ServantData->fields.uniqueId, v37);
              if ( v16 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v16,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                logic = this->fields.logic;
                v39 = (DeadServantAiTask_o *)sub_B2C42C(DeadServantAiTask_TypeInfo);
                DeadServantAiTask___ctor(v39, ServantData, logic, 0LL);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v16,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                data = (__int64)this->fields.logicfieldai;
                if ( data )
                {
                  DeadActionTask = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicFieldAi__createDeadActionTask(
                                                                                    (BattleLogicFieldAi_o *)data,
                                                                                    0LL);
                  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
                    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
                    DeadActionTask,
                    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
                }
              }
            }
          }
        }
      }
    }
LABEL_36:
    sub_B2C434(data, v17);
  }
  if ( !ServantData )
    goto LABEL_36;
  ServantData->fields.status = 0;
  if ( !v16 )
    goto LABEL_36;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__createTaskGuts(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  __int64 v12; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v14; // x21
  BattleBuffData_BuffData_array *v15; // x22
  _QWORD **v16; // x23
  __int64 v17; // x22
  __int16 v18; // w8
  __int64 v19; // x22
  __int64 v20; // x22
  __int64 v21; // x22
  int max_length; // w8
  unsigned int v23; // w27
  BattleBuffData_BuffData_o *v24; // x24
  BattleSkillInfoData_o *v25; // x23
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v27; // x8
  int32_t v28; // w0
  int32_t v29; // w26
  System_Int32_array *TargetIds; // x24
  bool exists; // w25
  BattleLogicSkill_o *logicskill; // x26
  const MethodInfo *v33; // x7
  System_Collections_Generic_IEnumerable_T__o *v34; // x23
  __int64 v36; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4189B35 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_BattleBuffData_BuffData___, *(_QWORD *)&uniqueId);
    sub_B2C35C(&BattleSkillInfoData_TypeInfo, v5);
    sub_B2C35C(&int___TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_4189B35 = 1;
  }
  isFirstAdd = 0;
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_42;
  data = (BattleData_o *)BattleData__getServantData(data, uniqueId, 0LL);
  if ( !data )
    goto LABEL_42;
  v14 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__getGutsBufflist((BattleServantData_o *)data, this->fields.data, 0LL);
  if ( data )
  {
    v15 = (BattleBuffData_BuffData_array *)data;
    isFirstAdd = 1;
  }
  else
  {
    v16 = (_QWORD **)Method_System_Array_Empty_BattleBuffData_BuffData___;
    v17 = **((_QWORD **)Method_System_Array_Empty_BattleBuffData_BuffData___ + 6);
    v18 = *(_WORD *)(v17 + 306);
    if ( (v18 & 1) == 0 )
    {
      data = (BattleData_o *)sub_AC505C(**((_QWORD **)Method_System_Array_Empty_BattleBuffData_BuffData___ + 6));
      v18 = *(_WORD *)(v17 + 306);
    }
    if ( (v18 & 0x400) != 0 )
    {
      v19 = *v16[6];
      if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
        data = (BattleData_o *)sub_AC505C(*v16[6]);
      if ( !*(_DWORD *)(v19 + 224) )
      {
        v20 = *v16[6];
        if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
          sub_AC505C(*v16[6]);
        j_il2cpp_runtime_class_init_0(v20);
      }
    }
    v21 = *v16[6];
    if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
      data = (BattleData_o *)sub_AC505C(*v16[6]);
    v15 = **(BattleBuffData_BuffData_array ***)(v21 + 184);
    isFirstAdd = 1;
    if ( !v15 )
      goto LABEL_42;
  }
  max_length = v15->max_length;
  if ( max_length >= 1 )
  {
    v23 = 0;
    while ( v23 < max_length )
    {
      v24 = v15->m_Items[v23];
      v25 = (BattleSkillInfoData_o *)sub_B2C42C(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v25, 0LL);
      if ( !v25 )
        goto LABEL_42;
      v25->fields.svtUniqueId = v14->fields.uniqueId;
      if ( !v24 )
        goto LABEL_42;
      vals = v24->fields.vals;
      if ( !vals )
        goto LABEL_42;
      if ( !vals->max_length )
        break;
      data = (BattleData_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v25->klass->vtable._4_set_skillId.method)(
                               v25,
                               (unsigned int)vals->m_Items[1],
                               v25->klass->vtable._5_get_skillId.methodPtr);
      v27 = v24->fields.vals;
      if ( !v27 )
        goto LABEL_42;
      if ( v27->max_length <= 1 )
        break;
      v25->fields.skilllv = v27->m_Items[2];
      v28 = BattleServantData__GetRevengeIdCheckOpponentOnly(v14, v24, 0LL);
      if ( (v28 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(
                      this->fields.data,
                      v25->fields.svtUniqueId,
                      -1,
                      v25->fields.svtUniqueId,
                      13,
                      0LL,
                      0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v25, 0LL);
      }
      else
      {
        v29 = v28;
        data = (BattleData_o *)sub_B2C374(int___TypeInfo, 1LL);
        if ( !data )
          goto LABEL_42;
        TargetIds = (System_Int32_array *)data;
        if ( !LODWORD(data->fields.rootfsm) )
          break;
        exists = 0;
        LODWORD(data->fields.fsm) = v29;
      }
      logicskill = this->fields.logicskill;
      data = (BattleData_o *)sub_B2C374(int___TypeInfo, 1LL);
      if ( !data )
        goto LABEL_42;
      if ( !LODWORD(data->fields.rootfsm) )
        break;
      LODWORD(data->fields.fsm) = v14->fields.uniqueId;
      if ( !logicskill )
        goto LABEL_42;
      data = (BattleData_o *)BattleLogicSkill__taskSkill(
                               logicskill,
                               v25,
                               (System_Int32_array *)data,
                               TargetIds,
                               0,
                               exists,
                               0,
                               v33);
      if ( !this->fields.logic )
        goto LABEL_42;
      v34 = (System_Collections_Generic_IEnumerable_T__o *)data;
      BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
        this->fields.logic,
        &isFirstAdd,
        v14,
        v15,
        (BattleLogicTask_array *)data,
        0LL);
      if ( !v11 )
        goto LABEL_42;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v11,
        v34,
        (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      max_length = v15->max_length;
      if ( (int)++v23 >= max_length )
        goto LABEL_39;
    }
    v36 = sub_B2C460(data);
    sub_B2C400(v36, 0LL);
  }
LABEL_39:
  data = (BattleData_o *)this->fields.logic;
  if ( !data
    || (BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
          (BattleLogic_o *)data,
          (System_Collections_Generic_List_BattleLogicTask__o *)v11,
          1,
          0LL),
        !v11) )
  {
LABEL_42:
    sub_B2C434(data, v12);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicReaction__createTaskProcBuffDead(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  __int64 v10; // x1
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x21
  BattleLogicTask_o *v13; // x20
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3

  if ( (byte_4189B33 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, *(_QWORD *)&uniqueId);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_4189B33 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data
    || (ServantData = BattleData__getServantData(data, uniqueId, 0LL),
        v13 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v13, v14),
        !v13)
    || (v13->fields.actiontype = 16, !ServantData)
    || (BattleLogicTask__setActor(v13, 3, ServantData->fields.uniqueId, v15), !v9) )
  {
    sub_B2C434(data, v10);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v9,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleActionData_o *__fastcall BattleLogicReaction__createWithdraw(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleData_o *data; // x20
  BattleLogicReaction_o *v4; // x19
  BattleServantData_o *v5; // x20
  int32_t v6; // w0
  struct System_Int32_array *shiftDeckList; // x8
  struct BattleData_o *v8; // x8
  struct BattleData_o *v9; // x8
  struct BattlePerformance_o *perf; // x8

  if ( !task )
    goto LABEL_16;
  data = this->fields.data;
  v4 = this;
  this = (BattleLogicReaction_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_16;
  this = (BattleLogicReaction_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( !this )
    goto LABEL_16;
  v5 = (BattleServantData_o *)this;
  ((void (__fastcall *)(BattleLogicReaction_o *, _QWORD, void *))this->klass[1]._1.typeMetadataHandle)(
    this,
    0LL,
    this->klass[1]._1.interopData);
  v6 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v5->klass->vtable._13_get_resultHp.method)(
         v5,
         v5->klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__ResultDamage(v5, v6, 0LL, 0LL, 0, 0LL);
  shiftDeckList = v5->fields.shiftDeckList;
  if ( !shiftDeckList )
    goto LABEL_16;
  v5->fields.shiftDeckIndex = *(_QWORD *)&shiftDeckList->max_length;
  this = (BattleLogicReaction_o *)v4->fields.perf;
  if ( !this )
    goto LABEL_16;
  BattlePerformance__updateView((BattlePerformance_o *)this, 0LL);
  v5->fields.isDeadAnime = 1;
  v8 = v4->fields.data;
  if ( !v8 )
    goto LABEL_16;
  if ( v5->fields.uniqueId == v8->fields.globaltargetId )
    v8->fields.globaltargetId = -1;
  if ( v5->fields.isLeader )
  {
    v9 = v4->fields.data;
    if ( !v9 )
      goto LABEL_16;
    v9->fields.leaderDown = 1;
  }
  this = (BattleLogicReaction_o *)v4->fields.logic;
  if ( !this
    || (BattleLogic__updateFieldBuff((BattleLogic_o *)this, 0LL), (perf = v4->fields.perf) == 0LL)
    || (this = (BattleLogicReaction_o *)perf->fields.statusPerf) == 0LL )
  {
LABEL_16:
    sub_B2C434(this, task);
  }
  BattlePerformanceStatus__updateNokoriEnemyCount((BattlePerformanceStatus_o *)this, 0LL);
  return 0LL;
}


BattleLogicTask_o *__fastcall BattleLogicReaction__getChangeAppearance(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        bool isDead,
        const MethodInfo *method)
{
  BattleLogicTask_o *v5; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x3
  int32_t v8; // w1

  if ( (byte_4189B41 & 1) == 0 )
  {
    this = (BattleLogicReaction_o *)sub_B2C35C(&BattleLogicTask_TypeInfo, svtData);
    byte_4189B41 = 1;
  }
  if ( !svtData
    || (svtData->fields.status = 4,
        v5 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v5, v6),
        !v5) )
  {
    sub_B2C434(this, svtData);
  }
  v5->fields.actiontype = 40;
  if ( svtData->fields.isEnemy )
    v8 = 3;
  else
    v8 = 2;
  BattleLogicTask__setActor(v5, v8, svtData->fields.uniqueId, v7);
  return v5;
}


int32_t __fastcall BattleLogicReaction__get_AiTimingPriorityMax(BattleLogicReaction_o *this, const MethodInfo *method)
{
  return 2;
}


void __fastcall BattleLogicReaction__updateRemoveBuff(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data
    || (BattleData__SubBuffFromPT_18448196(data, svtData, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL) )
  {
    sub_B2C434(data, svtData);
  }
  BattleLogic__updateFieldBuff((BattleLogic_o *)data, 0LL);
}