void __fastcall BattleLogicReaction___ctor(BattleLogicReaction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckEnemyPlayerTurnEndAfter(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  __int64 v6; // x1
  void *FieldEnemyServantList; // x0
  int v8; // w8
  void *v9; // x21
  unsigned int v10; // w24
  BattleServantData_o *v11; // x22
  BattleLogicTask_o *v12; // x23
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  __int64 v16; // x0

  if ( (byte_4354FE9 & 1) == 0 )
  {
    sub_B70694(&BattleLogicTask_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4354FE9 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  FieldEnemyServantList = this->fields.data;
  if ( !FieldEnemyServantList )
    goto LABEL_19;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)FieldEnemyServantList, 1, 0LL);
  if ( !FieldEnemyServantList )
    goto LABEL_19;
  v8 = *((_DWORD *)FieldEnemyServantList + 6);
  v9 = FieldEnemyServantList;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v8 )
      {
        v16 = sub_B70798(FieldEnemyServantList);
        sub_B70738(v16, 0LL);
      }
      v11 = (BattleServantData_o *)*((_QWORD *)v9 + (int)v10 + 4);
      if ( !v11 )
        break;
      if ( !v11->fields.status )
      {
        FieldEnemyServantList = (void *)BattleServantData__isAlive(v11, 0, 0LL);
        if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
        {
          FieldEnemyServantList = this->fields.logicenemyai;
          if ( !FieldEnemyServantList )
            break;
          FieldEnemyServantList = (void *)BattleLogicEnemyAi__CheckPlayerTurnEndAfter(
                                            (BattleLogicEnemyAi_o *)FieldEnemyServantList,
                                            v11->fields.uniqueId,
                                            0LL);
          if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
          {
            v12 = (BattleLogicTask_o *)sub_B70764(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v12, v13);
            if ( !v12 )
              break;
            v12->fields.actiontype = 39;
            BattleLogicTask__setActor(v12, 3, v11->fields.uniqueId, v14);
            if ( !v5 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v5,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          }
        }
      }
      v8 = *((_DWORD *)v9 + 6);
      if ( (int)++v10 >= v8 )
        goto LABEL_17;
    }
LABEL_19:
    sub_B7076C(FieldEnemyServantList, v6);
  }
LABEL_17:
  if ( !v5 )
    goto LABEL_19;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckEnemyShiftAfter(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  __int64 v6; // x1
  void *FieldEnemyServantList; // x0
  int v8; // w8
  void *v9; // x21
  unsigned int v10; // w24
  BattleServantData_o *v11; // x22
  BattleLogicTask_o *v12; // x23
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  __int64 v16; // x0

  if ( (byte_4354FE8 & 1) == 0 )
  {
    sub_B70694(&BattleLogicTask_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4354FE8 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  FieldEnemyServantList = this->fields.data;
  if ( !FieldEnemyServantList )
    goto LABEL_20;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList((BattleData_o *)FieldEnemyServantList, 1, 0LL);
  if ( !FieldEnemyServantList )
    goto LABEL_20;
  v8 = *((_DWORD *)FieldEnemyServantList + 6);
  v9 = FieldEnemyServantList;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v8 )
      {
        v16 = sub_B70798(FieldEnemyServantList);
        sub_B70738(v16, 0LL);
      }
      v11 = (BattleServantData_o *)*((_QWORD *)v9 + (int)v10 + 4);
      if ( !v11 )
        break;
      if ( !v11->fields.status )
      {
        FieldEnemyServantList = (void *)BattleServantData__isAlive(v11, 0, 0LL);
        if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 && v11->fields._IsBattleShift_k__BackingField )
        {
          FieldEnemyServantList = this->fields.logicenemyai;
          if ( !FieldEnemyServantList )
            break;
          FieldEnemyServantList = (void *)BattleLogicEnemyAi__CheckEnemyShiftAfter(
                                            (BattleLogicEnemyAi_o *)FieldEnemyServantList,
                                            v11->fields.uniqueId,
                                            0LL);
          if ( ((unsigned __int8)FieldEnemyServantList & 1) != 0 )
          {
            v12 = (BattleLogicTask_o *)sub_B70764(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v12, v13);
            if ( !v12 )
              break;
            v12->fields.actiontype = 63;
            BattleLogicTask__setActor(v12, 3, v11->fields.uniqueId, v14);
            if ( !v5 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v5,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          }
        }
      }
      v8 = *((_DWORD *)v9 + 6);
      if ( (int)++v10 >= v8 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B7076C(FieldEnemyServantList, v6);
  }
LABEL_18:
  if ( !v5 )
    goto LABEL_20;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


bool __fastcall BattleLogicReaction__CheckExecutableDead(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( !svtData )
    sub_B7076C(this, 0LL);
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
  return BattleLogicReaction__CheckExecutableResurrection_31268800(this, svtData, &gutsBuff, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicReaction__CheckExecutableResurrection_31268800(
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
  bool isGuts_20724968; // w0

  *gutsBuff = 0LL;
  sub_B70630(
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
  isGuts_20724968 = 0;
  if ( !isAlive )
  {
    if ( BattleServantData__isOverKill(svtData, 0LL) )
      return 0;
    isGuts_20724968 = BattleServantData__isGuts_20724968(svtData, gutsBuff, 0LL);
    if ( !isGuts_20724968 && !isCheckOnly )
    {
      logic = this->fields.logic;
      if ( logic )
      {
        BattleLogic__checkUsedGutsBuff(logic, svtData->fields.uniqueId, 0LL);
        return 0;
      }
LABEL_10:
      sub_B7076C(logic, v13);
    }
  }
  return isGuts_20724968;
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckPlayerActionStart(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  AliveServantReactTaskCreator_o *v5; // x20
  ServantReactTaskCreator_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4354FE0 & 1) == 0 )
  {
    sub_B70694(&AliveServantReactTaskCreator_TypeInfo);
    byte_4354FE0 = 1;
  }
  v5 = (AliveServantReactTaskCreator_o *)sub_B70764(AliveServantReactTaskCreator_TypeInfo);
  AliveServantReactTaskCreator___ctor(v5, 12, 0LL);
  if ( !v5 || (v6 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v5, 0LL)) == 0LL )
    sub_B7076C(v6, v7);
  return ServantReactTaskCreator__CreateTasks(v6, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckPlayerSkillAfterAction(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  AliveServantReactTaskCreator_o *v3; // x20
  ServantReactTaskCreator_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_4354FE1 & 1) == 0 )
  {
    sub_B70694(&AliveServantReactTaskCreator_TypeInfo);
    byte_4354FE1 = 1;
  }
  v3 = (AliveServantReactTaskCreator_o *)sub_B70764(AliveServantReactTaskCreator_TypeInfo);
  AliveServantReactTaskCreator___ctor(v3, 19, 0LL);
  if ( !v3 || (v4 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v3, 0LL)) == 0LL )
    sub_B7076C(v4, v5);
  return ServantReactTaskCreator__CreateTasks(v4, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckServantAiTurnStart(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  AliveServantExistReactTaskCreator_o *v3; // x20
  ServantReactTaskCreator_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_4354FE6 & 1) == 0 )
  {
    sub_B70694(&AliveServantExistReactTaskCreator_TypeInfo);
    byte_4354FE6 = 1;
  }
  v3 = (AliveServantExistReactTaskCreator_o *)sub_B70764(AliveServantExistReactTaskCreator_TypeInfo);
  AliveServantExistReactTaskCreator___ctor(v3, 16, 0LL);
  if ( !v3 || (v4 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v3, 0LL)) == 0LL )
    sub_B7076C(v4, v5);
  return ServantReactTaskCreator__CreateTasks(v4, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CheckServantAiWave(
        BattleLogicReaction_o *this,
        int32_t procState,
        const MethodInfo *method)
{
  AliveServantExistReactTaskCreator_o *v5; // x21
  ServantReactTaskCreator_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4354FE5 & 1) == 0 )
  {
    sub_B70694(&AliveServantExistReactTaskCreator_TypeInfo);
    byte_4354FE5 = 1;
  }
  v5 = (AliveServantExistReactTaskCreator_o *)sub_B70764(AliveServantExistReactTaskCreator_TypeInfo);
  AliveServantExistReactTaskCreator___ctor(v5, procState, 0LL);
  if ( !v5 || (v6 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v5, 0LL)) == 0LL )
    sub_B7076C(v6, v7);
  return ServantReactTaskCreator__CreateTasks(v6, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateAiTask(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  if ( !task )
    sub_B7076C(this, 0LL);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 ActorId; // x0
  const MethodInfo *v7; // x1
  BattleData_o *data; // x22
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v10; // x4
  BattleLogicTask_o *v11; // x22
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x3
  struct BattleLogic_o *logic; // x8
  const MethodInfo *v15; // x2
  BattleSkillInfoData_o *v16; // x22
  struct System_Int32_array *targetSkill; // x8
  struct System_Int32_array *v18; // x8
  int32_t RevengeTargetUniqueId; // w0
  int32_t v20; // w25
  System_Int32_array *TargetIds; // x23
  bool exists; // w24
  BattleLogicSkill_o *logicskill; // x25
  const MethodInfo *v24; // x7
  System_Collections_Generic_IEnumerable_T__o *v25; // x0
  __int64 v26; // x8
  __int64 v27; // x20
  unsigned __int64 v28; // x21
  __int64 v30; // x0
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4354FD7 & 1) == 0 )
  {
    sub_B70694(&BattleLogicTask_TypeInfo);
    sub_B70694(&BattleSkillInfoData_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4354FD7 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  gutsBuff = 0LL;
  if ( !baseTask )
    goto LABEL_38;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(baseTask, v7);
  if ( !data )
    goto LABEL_38;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  ActorId = BattleLogicReaction__CheckExecutableResurrection_31268800(this, ServantData, &gutsBuff, 0, v10);
  if ( (ActorId & 1) == 0 )
  {
    if ( ServantData )
    {
      ServantData->fields.status = 0;
      if ( v5 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                          (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
    goto LABEL_38;
  }
  v11 = (BattleLogicTask_o *)sub_B70764(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v11, v12);
  if ( !v11 )
    goto LABEL_38;
  v11->fields.actiontype = 13;
  if ( !ServantData )
    goto LABEL_38;
  BattleLogicTask__setActor(v11, 2, ServantData->fields.uniqueId, v13);
  if ( !v5 )
    goto LABEL_38;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v5,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_38;
  ActorId = (__int64)logic->fields.logicEnemyAi;
  if ( !ActorId )
    goto LABEL_38;
  BattleLogicEnemyAi__AddTempDeadSvt((BattleLogicEnemyAi_o *)ActorId, ServantData->fields.uniqueId, 0LL);
  if ( gutsBuff && BattleBuffData_BuffData__isTargetSkill(gutsBuff, 0LL) )
  {
    v16 = (BattleSkillInfoData_o *)sub_B70764(BattleSkillInfoData_TypeInfo);
    BattleSkillInfoData___ctor(v16, 0LL);
    if ( v16 )
    {
      v16->fields.svtUniqueId = ServantData->fields.uniqueId;
      if ( gutsBuff )
      {
        targetSkill = gutsBuff->fields.targetSkill;
        if ( targetSkill )
        {
          if ( !targetSkill->max_length )
            goto LABEL_39;
          ActorId = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._4_set_skillId.method)(
                      v16,
                      (unsigned int)targetSkill->m_Items[1],
                      v16->klass->vtable._5_get_skillId.methodPtr);
          if ( gutsBuff )
          {
            v18 = gutsBuff->fields.targetSkill;
            if ( v18 )
            {
              if ( v18->max_length <= 1 )
                goto LABEL_39;
              v16->fields.skilllv = v18->m_Items[2];
              RevengeTargetUniqueId = BattleServantData__getRevengeTargetUniqueId(ServantData, 0LL);
              if ( (RevengeTargetUniqueId & 0x80000000) != 0 )
              {
                TargetIds = Target__getTargetIds(
                              this->fields.data,
                              v16->fields.svtUniqueId,
                              -1,
                              v16->fields.svtUniqueId,
                              13,
                              0LL,
                              0LL);
                exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v16, 0LL);
              }
              else
              {
                v20 = RevengeTargetUniqueId;
                ActorId = sub_B706AC(int___TypeInfo, 1LL);
                if ( !ActorId )
                  goto LABEL_38;
                TargetIds = (System_Int32_array *)ActorId;
                if ( !*(_DWORD *)(ActorId + 24) )
                  goto LABEL_39;
                exists = 0;
                *(_DWORD *)(ActorId + 32) = v20;
              }
              logicskill = this->fields.logicskill;
              ActorId = sub_B706AC(int___TypeInfo, 1LL);
              if ( ActorId )
              {
                if ( !*(_DWORD *)(ActorId + 24) )
                  goto LABEL_39;
                *(_DWORD *)(ActorId + 32) = ServantData->fields.uniqueId;
                if ( logicskill )
                {
                  v25 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicSkill__taskSkill(
                                                                         logicskill,
                                                                         v16,
                                                                         (System_Int32_array *)ActorId,
                                                                         TargetIds,
                                                                         0,
                                                                         exists,
                                                                         0,
                                                                         v24);
                  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
                    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v5,
                    v25,
                    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                  goto LABEL_32;
                }
              }
            }
          }
        }
      }
    }
LABEL_38:
    sub_B7076C(ActorId, v7);
  }
LABEL_32:
  ActorId = (__int64)BattleLogicReaction__createTaskGuts(this, ServantData->fields.uniqueId, v15);
  if ( ActorId )
  {
    v26 = *(_QWORD *)(ActorId + 24);
    v27 = ActorId;
    if ( (int)v26 >= 1 )
    {
      v28 = 0LL;
      while ( v28 < (unsigned int)v26 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(v27 + 32 + 8 * v28),
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
        LODWORD(v26) = *(_DWORD *)(v27 + 24);
        if ( (__int64)++v28 >= (int)v26 )
          return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      }
LABEL_39:
      v30 = sub_B70798(ActorId);
      sub_B70738(v30, 0LL);
    }
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__CreateTasks(
        BattleLogicReaction_o *this,
        ServantReactTaskCreator_o *creator,
        const MethodInfo *method)
{
  if ( !creator )
    sub_B7076C(this, 0LL);
  return ServantReactTaskCreator__CreateTasks(creator, this->fields.logic, 0LL);
}


System_String_o *__fastcall BattleLogicReaction__GetDisappearDeadMotionName(
        BattleLogicReaction_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  System_String_o **v4; // x8
  bool IsDeadCrystal; // w0

  if ( (byte_4354FDC & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8899/*"MOTION_DEAD"*/);
    sub_B70694(&StringLiteral_8900/*"MOTION_DEAD_CRYSTAL"*/);
    this = (BattleLogicReaction_o *)sub_B70694(&StringLiteral_8901/*"MOTION_DEAD_ENERGY"*/);
    byte_4354FDC = 1;
  }
  if ( !svtData )
    sub_B7076C(this, svtData);
  if ( BattleServantData__IsDeadEnergy(svtData, 0LL) )
  {
    v4 = (System_String_o **)&StringLiteral_8901/*"MOTION_DEAD_ENERGY"*/;
  }
  else
  {
    IsDeadCrystal = BattleServantData__IsDeadCrystal(svtData, 0LL);
    v4 = (System_String_o **)&StringLiteral_8899/*"MOTION_DEAD"*/;
    if ( IsDeadCrystal )
      v4 = (System_String_o **)&StringLiteral_8900/*"MOTION_DEAD_CRYSTAL"*/;
  }
  return *v4;
}


void __fastcall BattleLogicReaction__SetReactionFunction(
        BattleLogicReaction_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  BattleLogic_reactionFunction_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  BattleLogic_reactionFunction_o *v8; // x21
  BattleLogic_reactionFunction_o *v9; // x21
  BattleLogic_reactionFunction_o *v10; // x21

  if ( (byte_4354FD5 & 1) == 0 )
  {
    sub_B70694(&Method_BattleLogicReaction_CreateAiTask__);
    sub_B70694(&Method_BattleLogicReaction_CreateTaskResurrection__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_B70694(&BattleLogic_reactionFunction_TypeInfo);
    byte_4354FD5 = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_B70764(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleLogicReaction_CreateTaskResurrection__,
    0LL);
  if ( !list )
    sub_B7076C(v6, v7);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    53,
    (System_String_o *)v5,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v8 = (BattleLogic_reactionFunction_o *)sub_B70764(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v8, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    57,
    (System_String_o *)v8,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v9 = (BattleLogic_reactionFunction_o *)sub_B70764(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v9, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    59,
    (System_String_o *)v9,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v10 = (BattleLogic_reactionFunction_o *)sub_B70764(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v10, (Il2CppObject *)this, Method_BattleLogicReaction_CreateAiTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    68,
    (System_String_o *)v10,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkChangeApp(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x21
  __int64 v5; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x20
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x0
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4354FEA & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4354FEA = 1;
  }
  memset(&v16, 0, sizeof(v16));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v4 )
      goto LABEL_22;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    if ( !v4 )
      goto LABEL_22;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_22;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
    FieldPlayerServantList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v16 = v15;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v16,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v8 )
      break;
    current = v16.fields.current;
    if ( !v16.fields.current )
      sub_B7076C(v8, v9);
    if ( !LODWORD(v16.fields.current[28].klass) )
    {
      v11 = BattleServantData__isChangeAppearance((BattleServantData_o *)v16.fields.current, 0LL);
      if ( v11 )
      {
        v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleLogicReaction__getChangeAppearance(
                                                                       (BattleLogicReaction_o *)v11,
                                                                       (BattleServantData_o *)current,
                                                                       0,
                                                                       v12);
        if ( !v3 )
          sub_B7076C(v13, v13);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v13,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_22:
    sub_B7076C(data, v5);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkDead(BattleLogicReaction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x21
  __int64 v5; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  BattleServantData_o *current; // x21
  BattleLogic_o *logic; // x23
  BeforeDeadServantAiTask_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  _BOOL8 isAppearanceId; // x0
  const MethodInfo *v17; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x0
  BattleLogicTask_o *v19; // x22
  const MethodInfo *v20; // x1
  __int64 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  int32_t uniqueId; // w2
  __int64 v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4354FDA & 1) == 0 )
  {
    sub_B70694(&BattleLogicTask_TypeInfo);
    sub_B70694(&BeforeDeadServantAiTask_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4354FDA = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_33;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v4 )
      goto LABEL_33;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    if ( !v4 )
      goto LABEL_33;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_33;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
    FieldPlayerServantList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v29,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v8 )
      break;
    current = (BattleServantData_o *)v29.fields.current;
    if ( !v29.fields.current )
      sub_B7076C(v8, v9);
    if ( !LODWORD(v29.fields.current[28].klass)
      && BattleLogicReaction__CheckExecutableDead(
           (BattleLogicReaction_o *)v8,
           (BattleServantData_o *)v29.fields.current,
           v10) )
    {
      if ( (((__int64 (__fastcall *)(BattleServantData_o *, struct BattleLogic_o *, __int64, _QWORD, Il2CppMethodPointer))current->klass->vtable._19_ExistAiThinking.method)(
              current,
              this->fields.logic,
              17LL,
              0LL,
              current->klass->vtable._20_GetLogicServantAi.methodPtr) & 1) != 0 )
      {
        logic = this->fields.logic;
        v13 = (BeforeDeadServantAiTask_o *)sub_B70764(BeforeDeadServantAiTask_TypeInfo);
        BeforeDeadServantAiTask___ctor(v13, current, logic, 0LL);
        if ( !v3 )
          sub_B7076C(v14, v15);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
      isAppearanceId = BattleServantData__isAppearanceId(current, 0LL);
      if ( isAppearanceId )
      {
        v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleLogicReaction__getChangeAppearance(
                                                                       (BattleLogicReaction_o *)isAppearanceId,
                                                                       current,
                                                                       0,
                                                                       v17);
        if ( !v3 )
          sub_B7076C(v18, v18);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v18,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
      current->fields.status = 2;
      v19 = (BattleLogicTask_o *)sub_B70764(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v19, v20);
      if ( !v19 )
        sub_B7076C(v21, v22);
      v19->fields.actiontype = 14;
      uniqueId = current->fields.uniqueId;
      if ( current->fields.isEnemy )
        BattleLogicTask__setActor(v19, 3, uniqueId, v23);
      else
        BattleLogicTask__setActor(v19, 2, uniqueId, v23);
      if ( !v3 )
        sub_B7076C(v25, v26);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_33:
    sub_B7076C(data, v5);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkEnemyEndTurn(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  AliveServantReactTaskCreator_o *v5; // x20
  ServantReactTaskCreator_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4354FE4 & 1) == 0 )
  {
    sub_B70694(&AliveServantReactTaskCreator_TypeInfo);
    byte_4354FE4 = 1;
  }
  v5 = (AliveServantReactTaskCreator_o *)sub_B70764(AliveServantReactTaskCreator_TypeInfo);
  AliveServantReactTaskCreator___ctor(v5, 5, 0LL);
  if ( !v5 || (v6 = ServantReactTaskCreator__OrderNEP((ServantReactTaskCreator_o *)v5, 0LL)) == 0LL )
    sub_B7076C(v6, v7);
  return ServantReactTaskCreator__CreateTasks(v6, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkEnemyStartTurn(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  __int64 v6; // x1
  BattleLogic_o *logic; // x0
  AliveServantReactTaskCreator_o *v8; // x21
  System_Collections_Generic_IEnumerable_T__o *Tasks; // x0

  if ( (byte_4354FE3 & 1) == 0 )
  {
    sub_B70694(&AliveServantReactTaskCreator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4354FE3 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (logic = (BattleLogic_o *)BattleLogic__GetTurnStartTaskArray(logic, 0, 0LL), !v5)
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v5,
          (System_Collections_Generic_IEnumerable_T__o *)logic,
          (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__),
        v8 = (AliveServantReactTaskCreator_o *)sub_B70764(AliveServantReactTaskCreator_TypeInfo),
        AliveServantReactTaskCreator___ctor(v8, 4, 0LL),
        !v8)
    || (logic = (BattleLogic_o *)ServantReactTaskCreator__OrderNEP((ServantReactTaskCreator_o *)v8, 0LL)) == 0LL )
  {
    sub_B7076C(logic, v6);
  }
  Tasks = (System_Collections_Generic_IEnumerable_T__o *)ServantReactTaskCreator__CreateTasks(
                                                           (ServantReactTaskCreator_o *)logic,
                                                           this->fields.logic,
                                                           0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v5,
    Tasks,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkPlayerActionEnd(
        BattleLogicReaction_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  AliveServantReactTaskCreator_o *v5; // x20
  ServantReactTaskCreator_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4354FE2 & 1) == 0 )
  {
    sub_B70694(&AliveServantReactTaskCreator_TypeInfo);
    byte_4354FE2 = 1;
  }
  v5 = (AliveServantReactTaskCreator_o *)sub_B70764(AliveServantReactTaskCreator_TypeInfo);
  AliveServantReactTaskCreator___ctor(v5, 3, 0LL);
  if ( !v5 || (v6 = ServantReactTaskCreator__OrderNPE((ServantReactTaskCreator_o *)v5, 0LL)) == 0LL )
    sub_B7076C(v6, v7);
  return ServantReactTaskCreator__CreateTasks(v6, this->fields.logic, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkResurrection(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  __int64 v4; // x1
  void *data; // x0
  const MethodInfo *v6; // x4
  int v7; // w8
  void *v8; // x21
  unsigned int v9; // w25
  BattleServantData_o *v10; // x22
  BattleLogic_o *logic; // x24
  BeforeResurrectionServantAiTask_o *v12; // x23
  BattleLogicServantTask_o *v13; // x23
  const MethodInfo *v14; // x3
  __int64 v16; // x0
  BattleBuffData_BuffData_o *gutsBuff; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4354FD6 & 1) == 0 )
  {
    sub_B70694(&BattleLogicServantTask_TypeInfo);
    sub_B70694(&BeforeResurrectionServantAiTask_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4354FD6 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_19;
  data = BattleData__getFieldServantList((BattleData_o *)data, 0, 0LL);
  if ( !data )
    goto LABEL_19;
  v7 = *((_DWORD *)data + 6);
  v8 = data;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
      {
        v16 = sub_B70798(data);
        sub_B70738(v16, 0LL);
      }
      v10 = (BattleServantData_o *)*((_QWORD *)v8 + (int)v9 + 4);
      if ( !v10 )
        break;
      if ( !v10->fields.status )
      {
        gutsBuff = 0LL;
        data = (void *)BattleLogicReaction__CheckExecutableResurrection_31268800(this, v10, &gutsBuff, 1, v6);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( (((__int64 (__fastcall *)(BattleServantData_o *, struct BattleLogic_o *, __int64, _QWORD, Il2CppMethodPointer))v10->klass->vtable._19_ExistAiThinking.method)(
                  v10,
                  this->fields.logic,
                  18LL,
                  0LL,
                  v10->klass->vtable._20_GetLogicServantAi.methodPtr) & 1) != 0 )
          {
            logic = this->fields.logic;
            v12 = (BeforeResurrectionServantAiTask_o *)sub_B70764(BeforeResurrectionServantAiTask_TypeInfo);
            BeforeResurrectionServantAiTask___ctor(v12, v10, logic, 0LL);
            if ( !v3 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v3,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          }
          v10->fields.status = 1;
          v13 = (BattleLogicServantTask_o *)sub_B70764(BattleLogicServantTask_TypeInfo);
          BattleLogicServantTask___ctor(v13, 53, v10, v14);
          if ( !v3 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v3,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
        }
      }
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        goto LABEL_17;
    }
LABEL_19:
    sub_B7076C(data, v4);
  }
LABEL_17:
  if ( !v3 )
    goto LABEL_19;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__checkWithdraw(
        BattleLogicReaction_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x21
  __int64 v5; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *FieldPlayerServantList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x26
  BattleLogicTask_o *v11; // x20
  const MethodInfo *v12; // x1
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  int32_t monitor; // w2
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4354FE7 & 1) == 0 )
  {
    sub_B70694(&BattleLogicTask_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4354FE7 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  if ( data->fields.typeTurn == 1 )
  {
    data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
    if ( !v4 )
      goto LABEL_27;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
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
    if ( !v4 )
      goto LABEL_27;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
      (System_Collections_Generic_IEnumerable_T__o *)data,
      (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_27;
    FieldPlayerServantList = (System_Collections_Generic_IEnumerable_T__o *)BattleData__getFieldEnemyServantList(
                                                                              data,
                                                                              0,
                                                                              0LL);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
    FieldPlayerServantList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v21,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v8 )
      break;
    current = v21.fields.current;
    if ( !v21.fields.current )
      sub_B7076C(v8, v9);
    if ( !LODWORD(v21.fields.current[28].klass) && BYTE1(v21.fields.current[50].klass) )
    {
      LODWORD(v21.fields.current[28].klass) = 3;
      v11 = (BattleLogicTask_o *)sub_B70764(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v11, v12);
      if ( !v11 )
        sub_B7076C(v13, v14);
      v11->fields.actiontype = 38;
      monitor = (int32_t)current[1].monitor;
      if ( HIBYTE(current[28].klass) )
        BattleLogicTask__setActor(v11, 3, monitor, v15);
      else
        BattleLogicTask__setActor(v11, 2, monitor, v15);
      if ( !v3 )
        sub_B7076C(v17, v18);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v3 )
LABEL_27:
    sub_B7076C(data, v5);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleActionData_o *__fastcall BattleLogicReaction__createChangeApp(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicReaction_o *v4; // x20
  BattleData_o *data; // x20
  BattleLogicReaction_o *v6; // x19
  __int64 v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x1

  v4 = this;
  if ( (byte_4354FEC & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    this = (BattleLogicReaction_o *)sub_B70694(&StringLiteral_8893/*"MOTION_APP"*/);
    byte_4354FEC = 1;
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
  v6 = this;
  if ( LODWORD(this[6].fields.data) == 4 )
    LODWORD(this[6].fields.data) = 0;
  v7 = sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v7, 0LL);
  if ( !v7 )
LABEL_10:
    sub_B7076C(this, task);
  *(_DWORD *)(v7 + 32) = v6->fields.logic;
  v14 = (System_Int32_array **)StringLiteral_8893/*"MOTION_APP"*/;
  *(_QWORD *)(v7 + 64) = StringLiteral_8893/*"MOTION_APP"*/;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 64), v14, v8, v9, v10, v11, v12, v13);
  return (BattleActionData_o *)v7;
}


BattleActionData_o *__fastcall BattleLogicReaction__createDeadMotion(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicTask_o *v3; // x20
  BattleLogicReaction_o *v4; // x19
  BattleData_o *data; // x21
  BattleServantData_o *v6; // x20
  const MethodInfo *v7; // x2
  __int64 v8; // x21
  int32_t *p_uniqueId; // x28
  struct BattleData_o *v10; // x8
  struct BattleData_o *v11; // x8
  BattleActionData_c *v12; // x0
  MethodInfo *v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 *v19; // x8
  System_Int32_array **DisappearDeadMotionName; // x1
  const MethodInfo *v21; // x2
  struct BattleData_o *v22; // x8
  struct BattleData_o *v23; // x8
  struct BattlePerformance_o *perf; // x8
  int32_t DeadTargetUniqueId; // w0
  int32_t v26; // w22
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v28; // x23
  BattleLogicReaction_o *v29; // x24
  struct BattleLogic_o *logic; // x8
  unsigned int v31; // w23
  __int64 v32; // x26
  BattleSkillInfoData_o *v33; // x25
  __int64 v34; // x8
  __int64 v35; // x8
  BattleLogicSkill_o *logicskill; // x26
  BattleLogicReaction_o *v37; // x27
  const MethodInfo *v38; // x7
  BattleLogicReaction_o *v39; // x25
  const MethodInfo *v40; // x2
  struct BattleLogic_o *v41; // x8
  unsigned __int64 v42; // x26
  BattleLogicReaction_o *IsWarBoard; // x0
  __int64 v45; // x0
  BattleServantData_o *svtData; // [xsp+0h] [xbp-60h]
  bool isFirstAdd; // [xsp+Ch] [xbp-54h] BYREF

  v3 = task;
  v4 = this;
  if ( (byte_4354FDB & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&BattleSkillInfoData_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&StringLiteral_8916/*"MOTION_STAND_DEAD"*/);
    sub_B70694(&StringLiteral_8903/*"MOTION_EFFECT_DEAD"*/);
    sub_B70694(&StringLiteral_8919/*"MOTION_WAIT_DEAD"*/);
    this = (BattleLogicReaction_o *)sub_B70694(&StringLiteral_8907/*"MOTION_NO_DEAD"*/);
    byte_4354FDB = 1;
  }
  isFirstAdd = 0;
  if ( !v3 )
    goto LABEL_91;
  data = v4->fields.data;
  this = (BattleLogicReaction_o *)BattleLogicTask__getActorId(v3, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_91;
  this = (BattleLogicReaction_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( !this )
    goto LABEL_91;
  v6 = (BattleServantData_o *)this;
  if ( !BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL) )
  {
    if ( v6->fields.isDeadAnime )
    {
      BattleLogicReaction__updateRemoveBuff(v4, v6, v7);
      return 0LL;
    }
    v8 = sub_B70764(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v8, 0LL);
    this = (BattleLogicReaction_o *)v4->fields.perf;
    if ( !this )
      goto LABEL_91;
    BattlePerformance__updateView((BattlePerformance_o *)this, 0LL);
    this = (BattleLogicReaction_o *)v4->fields.data;
    if ( !this )
      goto LABEL_91;
    this = (BattleLogicReaction_o *)BattleData__IsWarBoard((BattleData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0
      && (this = (BattleLogicReaction_o *)BattleServantData__getDefeatPoint(v6, 0LL), (int)this >= 1) )
    {
      p_uniqueId = &v6->fields.uniqueId;
      if ( !v8 )
        goto LABEL_91;
    }
    else
    {
      v10 = v4->fields.data;
      if ( !v10 )
        goto LABEL_91;
      this = (BattleLogicReaction_o *)v10->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_91;
      p_uniqueId = &v6->fields.uniqueId;
      this = (BattleLogicReaction_o *)BattleFieldEnvironmentData__SubBuffFromRelateDeadActor(
                                        (BattleFieldEnvironmentData_o *)this,
                                        v6->fields.uniqueId,
                                        0LL);
      v11 = v4->fields.data;
      if ( !v11 )
        goto LABEL_91;
      this = (BattleLogicReaction_o *)v11->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_91;
      BattleFieldEnvironmentData__RemoveDeadServantChangeBgm((BattleFieldEnvironmentData_o *)this, v6, 0LL);
      if ( !v8 )
        goto LABEL_91;
    }
    *(_DWORD *)(v8 + 32) = *p_uniqueId;
    v12 = BattleActionData_TypeInfo;
    if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
      v12 = BattleActionData_TypeInfo;
    }
    *(_DWORD *)(v8 + 56) = v12->static_fields->TYPE_DEAD;
    if ( !BattleServantData__isDeadEscape(v6, 0LL) )
    {
      if ( BattleServantData__isDeadStand(v6, 0LL) )
      {
        v19 = &StringLiteral_8916/*"MOTION_STAND_DEAD"*/;
        goto LABEL_32;
      }
      if ( BattleServantData__isDeadEffect(v6, 0LL) )
      {
        v19 = &StringLiteral_8903/*"MOTION_EFFECT_DEAD"*/;
        goto LABEL_32;
      }
      if ( BattleServantData__isDeadWait(v6, 0LL) )
      {
        v19 = &StringLiteral_8919/*"MOTION_WAIT_DEAD"*/;
        goto LABEL_32;
      }
      this = (BattleLogicReaction_o *)v4->fields.data;
      if ( !this )
        goto LABEL_91;
      IsWarBoard = (BattleLogicReaction_o *)BattleData__IsWarBoard((BattleData_o *)this, 0LL);
      if ( ((unsigned __int8)IsWarBoard & 1) == 0
        || (IsWarBoard = (BattleLogicReaction_o *)BattleServantData__getDefeatPoint(v6, 0LL), (int)IsWarBoard < 1) )
      {
        if ( v6->fields.IsVanishSkill )
        {
          BattleLogicReaction__updateRemoveBuff(v4, v6, v13);
          v8 = 0LL;
          goto LABEL_88;
        }
        DisappearDeadMotionName = (System_Int32_array **)BattleLogicReaction__GetDisappearDeadMotionName(
                                                           IsWarBoard,
                                                           v6,
                                                           v13);
LABEL_33:
        *(_QWORD *)(v8 + 64) = DisappearDeadMotionName;
        sub_B70630(
          (BattleServantConfConponent_o *)(v8 + 64),
          DisappearDeadMotionName,
          (System_String_array **)v13,
          v14,
          v15,
          v16,
          v17,
          v18);
        v22 = v4->fields.data;
        if ( v22 )
        {
          if ( !v22->fields.isMultiTargetBattle
            || !v6->fields.isEnemy
            || (v22->fields.justDeadTargetId = v22->fields.globaltargetId, (v22 = v4->fields.data) != 0LL) )
          {
            if ( *p_uniqueId == v22->fields.globaltargetId )
              v22->fields.globaltargetId = -1;
            if ( v6->fields.isLeader )
            {
              v23 = v4->fields.data;
              if ( !v23 )
                goto LABEL_91;
              v23->fields.leaderDown = 1;
            }
            BattleLogicReaction__updateRemoveBuff(v4, v6, v21);
            perf = v4->fields.perf;
            if ( perf )
            {
              this = (BattleLogicReaction_o *)perf->fields.statusPerf;
              if ( this )
              {
                BattlePerformanceStatus__updateNokoriEnemyCount((BattlePerformanceStatus_o *)this, 0LL);
                DeadTargetUniqueId = BattleServantData__getDeadTargetUniqueId(v6, 0LL);
                if ( DeadTargetUniqueId < 1 )
                  goto LABEL_88;
                v26 = DeadTargetUniqueId;
                this = (BattleLogicReaction_o *)v4->fields.data;
                if ( !this )
                  goto LABEL_91;
                ServantData = BattleData__getServantData((BattleData_o *)this, v26, 0LL);
                if ( !ServantData || ServantData->fields.isDeadAnime || v6->fields.isSystemDead )
                {
LABEL_88:
                  v6->fields.isDeadAnime = 1;
                  return (BattleActionData_o *)v8;
                }
                this = (BattleLogicReaction_o *)v4->fields.data;
                if ( this )
                {
                  this = (BattleLogicReaction_o *)BattleData__getServantData((BattleData_o *)this, v26, 0LL);
                  if ( v4->fields.logic )
                  {
                    v28 = (BattleServantData_o *)this;
                    this = (BattleLogicReaction_o *)BattleLogic__GetDeadAttackCommand(
                                                      v4->fields.logic,
                                                      *p_uniqueId,
                                                      0LL);
                    if ( v28 )
                    {
                      this = (BattleLogicReaction_o *)BattleServantData__getDeadAttackSideEffect(
                                                        v28,
                                                        v6,
                                                        (BattleCommandData_o *)this,
                                                        0LL);
                      if ( v4->fields.logic )
                      {
                        v29 = this;
                        svtData = v28;
                        BattleLogic__AddUnExecutedUpdateIntervalBuffActionData(v4->fields.logic, 0LL);
                        if ( v29 )
                        {
                          logic = v29->fields.logic;
                          if ( logic )
                          {
                            isFirstAdd = 1;
                            if ( (int)logic >= 1 )
                            {
                              v31 = 0;
                              while ( 1 )
                              {
                                if ( v31 >= (unsigned int)logic )
                                  goto LABEL_92;
                                v32 = *((_QWORD *)&v29->fields.perf + (int)v31);
                                v33 = (BattleSkillInfoData_o *)sub_B70764(BattleSkillInfoData_TypeInfo);
                                BattleSkillInfoData___ctor(v33, 0LL);
                                if ( !v33 )
                                  goto LABEL_91;
                                v33->fields.svtUniqueId = v26;
                                if ( !v32 )
                                  goto LABEL_91;
                                v34 = *(_QWORD *)(v32 + 40);
                                if ( !v34 )
                                  goto LABEL_91;
                                if ( !*(_DWORD *)(v34 + 24) )
                                  goto LABEL_92;
                                this = (BattleLogicReaction_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v33->klass->vtable._4_set_skillId.method)(
                                                                  v33,
                                                                  *(unsigned int *)(v34 + 32),
                                                                  v33->klass->vtable._5_get_skillId.methodPtr);
                                v35 = *(_QWORD *)(v32 + 40);
                                if ( !v35 )
                                  goto LABEL_91;
                                if ( *(_DWORD *)(v35 + 24) <= 1u )
                                  goto LABEL_92;
                                v33->fields.skilllv = *(_DWORD *)(v35 + 36);
                                logicskill = v4->fields.logicskill;
                                this = (BattleLogicReaction_o *)sub_B706AC(int___TypeInfo, 1LL);
                                if ( !this )
                                  goto LABEL_91;
                                v37 = this;
                                if ( !LODWORD(this->fields.logic) )
                                  goto LABEL_92;
                                LODWORD(this->fields.perf) = v26;
                                this = (BattleLogicReaction_o *)sub_B706AC(int___TypeInfo, 1LL);
                                if ( !this )
                                  goto LABEL_91;
                                if ( !LODWORD(this->fields.logic) )
                                  goto LABEL_92;
                                LODWORD(this->fields.perf) = *p_uniqueId;
                                if ( !logicskill )
                                  goto LABEL_91;
                                this = (BattleLogicReaction_o *)BattleLogicSkill__taskSkill(
                                                                  logicskill,
                                                                  v33,
                                                                  (System_Int32_array *)v37,
                                                                  (System_Int32_array *)this,
                                                                  0,
                                                                  0,
                                                                  0,
                                                                  v38);
                                if ( !v4->fields.logic )
                                  goto LABEL_91;
                                v39 = this;
                                BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                                  v4->fields.logic,
                                  &isFirstAdd,
                                  svtData,
                                  (BattleBuffData_BuffData_array *)v29,
                                  (BattleLogicTask_array *)this,
                                  0LL);
                                if ( !v39 )
                                  goto LABEL_91;
                                v41 = v39->fields.logic;
                                if ( (int)v41 >= 1 )
                                  break;
LABEL_79:
                                LODWORD(logic) = v29->fields.logic;
                                if ( (int)++v31 >= (int)logic )
                                  goto LABEL_80;
                              }
                              v42 = 0LL;
                              while ( v42 < (unsigned int)v41 )
                              {
                                this = (BattleLogicReaction_o *)v4->fields.logicskill;
                                if ( !this )
                                  goto LABEL_91;
                                this = (BattleLogicReaction_o *)BattleLogicSkill__createSkillData(
                                                                  (BattleLogicSkill_o *)this,
                                                                  *((BattleLogicTask_o **)&v39->fields.perf + v42),
                                                                  v40);
                                if ( this )
                                {
                                  task = (BattleLogicTask_o *)this;
                                  this = (BattleLogicReaction_o *)v4->fields.perf;
                                  if ( !this )
                                    goto LABEL_91;
                                  BattlePerformance__addActionData_18073992(
                                    (BattlePerformance_o *)this,
                                    (BattleActionData_o *)task,
                                    0LL);
                                }
                                LODWORD(v41) = v39->fields.logic;
                                if ( (__int64)++v42 >= (int)v41 )
                                  goto LABEL_79;
                              }
LABEL_92:
                              v45 = sub_B70798(this);
                              sub_B70738(v45, 0LL);
                            }
                          }
LABEL_80:
                          this = (BattleLogicReaction_o *)v4->fields.logic;
                          if ( this )
                          {
                            BattleLogic__RemoveDeadAttackCommand((BattleLogic_o *)this, *p_uniqueId, 0LL);
                            this = (BattleLogicReaction_o *)svtData->fields.buffData;
                            if ( this )
                            {
                              BattleBuffData__usedProgressing((BattleBuffData_o *)this, 0LL);
                              goto LABEL_88;
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
LABEL_91:
        sub_B7076C(this, task);
      }
    }
    v19 = &StringLiteral_8907/*"MOTION_NO_DEAD"*/;
LABEL_32:
    DisappearDeadMotionName = (System_Int32_array **)*v19;
    goto LABEL_33;
  }
  v8 = 0LL;
  v6->fields.status = 0;
  return (BattleActionData_o *)v8;
}


BattleActionData_o *__fastcall BattleLogicReaction__createResurrection(
        BattleLogicReaction_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicReaction_o *v4; // x20
  BattleData_o *data; // x21
  BattleServantData_o *v6; // x21
  WarEntity_o *Entity; // x0
  BuffEntity_o *v8; // x22
  BattleLogic_o *logic; // x8
  int32_t v10; // w20
  BattleLogicReaction_o *v11; // x0
  const MethodInfo *v12; // x6
  System_String_o *overrideName; // [xsp+0h] [xbp-30h] BYREF
  BattleBuffData_BuffData_o *buff; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4354FD8 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    this = (BattleLogicReaction_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4354FD8 = 1;
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
  v6 = (BattleServantData_o *)this;
  BattleServantData__isGuts_20724968((BattleServantData_o *)this, &buff, 0LL);
  this = (BattleLogicReaction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (BattleLogicReaction_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BuffMaster___),
        !buff)
    || !this
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                   buff->fields.buffId,
                   (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__),
        overrideName = 0LL,
        v8 = (BuffEntity_o *)Entity,
        this = (BattleLogicReaction_o *)BattleServantData__useGuts(v6, v6->fields.maxhp, &overrideName, 0LL),
        (logic = v4->fields.logic) == 0LL) )
  {
LABEL_11:
    sub_B7076C(this, task);
  }
  v10 = (int)this;
  BattleLogic__checkUsedGutsBuff(logic, v6->fields.uniqueId, 0LL);
  return BattleLogicReaction__createResurrectionCommon(
           v11,
           v6,
           v8,
           v10,
           task->fields.isForcedSpeedOne,
           overrideName,
           v12);
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
  __int64 v12; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleActionData_c *v19; // x0
  System_Int32_array **v20; // x1
  __int64 v21; // x23
  unsigned int uniqueId; // w8
  System_Int32_array **GutsText; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  _QWORD **v36; // x27
  __int64 v37; // x24
  __int16 v38; // w8
  __int64 v39; // x24
  __int64 v40; // x24
  __int64 v41; // x24
  System_Int32_array ***v42; // x8
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x9
  int32_t v58; // w1
  int32_t digit; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4354FD9 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Empty_int___);
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&BattleActionData_BuffData_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    this = (BattleLogicReaction_o *)sub_B70694(&StringLiteral_8911/*"MOTION_RESURRECTION"*/);
    byte_4354FD9 = 1;
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
  v12 = sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_30;
  *(_DWORD *)(v12 + 32) = svtData->fields.uniqueId;
  v19 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v19 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v12 + 56) = v19->static_fields->TYPE_RESURRECTION;
  v20 = (System_Int32_array **)StringLiteral_8911/*"MOTION_RESURRECTION"*/;
  *(_QWORD *)(v12 + 64) = StringLiteral_8911/*"MOTION_RESURRECTION"*/;
  sub_B70630((BattleServantConfConponent_o *)(v12 + 64), v20, v13, v14, v15, v16, v17, v18);
  *(_BYTE *)(v12 + 241) = isForcedSpeedOne;
  v21 = sub_B70764(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_30;
  uniqueId = svtData->fields.uniqueId;
  *(_DWORD *)(v21 + 16) = 0;
  *(_QWORD *)(v21 + 40) = uniqueId;
  if ( !buffEntity )
    goto LABEL_30;
  GutsText = (System_Int32_array **)BuffEntity__getGutsText(buffEntity, 0LL);
  *(_QWORD *)(v21 + 56) = GutsText;
  sub_B70630((BattleServantConfConponent_o *)(v21 + 56), GutsText, v24, v25, v26, v27, v28, v29);
  *(_DWORD *)(v21 + 64) = BuffEntity__getGutsIcon(buffEntity, 0LL);
  *(_DWORD *)(v21 + 68) = BuffEntity__getgutsTextColor(buffEntity, 0LL);
  *(_DWORD *)(v21 + 28) = 2;
  v36 = (_QWORD **)Method_System_Array_Empty_int___;
  v37 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v38 = *(_WORD *)(v37 + 306);
  if ( (v38 & 1) == 0 )
  {
    sub_B08394(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v38 = *(_WORD *)(v37 + 306);
  }
  if ( (v38 & 0x400) != 0 )
  {
    v39 = *v36[6];
    if ( (*(_BYTE *)(v39 + 306) & 1) == 0 )
      sub_B08394(*v36[6]);
    if ( !*(_DWORD *)(v39 + 224) )
    {
      v40 = *v36[6];
      if ( (*(_BYTE *)(v40 + 306) & 1) == 0 )
        sub_B08394(*v36[6]);
      j_il2cpp_runtime_class_init_0(v40);
    }
  }
  v41 = *v36[6];
  if ( (*(_BYTE *)(v41 + 306) & 1) == 0 )
    sub_B08394(*v36[6]);
  v42 = *(System_Int32_array ****)(v41 + 184);
  v43 = *v42;
  *(_QWORD *)(v21 + 72) = *v42;
  sub_B70630((BattleServantConfConponent_o *)(v21 + 72), v43, v30, v31, v32, v33, v34, v35);
  if ( !System_String__IsNullOrEmpty(overrideName, 0LL) )
  {
    *(_QWORD *)(v12 + 64) = overrideName;
    sub_B70630(
      (BattleServantConfConponent_o *)(v12 + 64),
      (System_Int32_array **)overrideName,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    v50 = (System_Int32_array **)StringLiteral_1/*""*/;
    *(_QWORD *)(v21 + 56) = StringLiteral_1/*""*/;
    sub_B70630((BattleServantConfConponent_o *)(v21 + 56), v50, v51, v52, v53, v54, v55, v56);
  }
  digit = 1000;
  v57 = BattleServantData__getUpDownGutsHp(svtData, &digit, 0LL) * (__int64)val;
  if ( (int)(v57 / digit) <= 1 )
    v58 = 1;
  else
    v58 = v57 / digit;
  BattleServantData__setHp(svtData, v58, 1, 0LL);
  if ( svtData->fields.isGutsSleepRelease )
  {
    this = (BattleLogicReaction_o *)svtData->fields.buffData;
    if ( this )
    {
      BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)this, svtData, 0, 0LL);
      goto LABEL_29;
    }
LABEL_30:
    sub_B7076C(this, svtData);
  }
LABEL_29:
  svtData->fields.isGutsSleepRelease = 1;
  BattleActionData__setBuffData((BattleActionData_o *)v12, (BattleActionData_BuffData_o *)v21, 0LL, 0LL);
  svtData->fields.status = 0;
  return (BattleActionData_o *)v12;
}


BattleLogicTask_array *__fastcall BattleLogicReaction__createTaskDead(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  __int64 v6; // x1
  __int64 data; // x0
  BattleServantData_o *ServantData; // x21
  const MethodInfo *v9; // x2
  BattleBuffData_BuffData_array *DeadBufflist; // x22
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x23
  unsigned int v13; // w28
  BattleBuffData_BuffData_o *v14; // x25
  BattleSkillInfoData_o *v15; // x24
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v17; // x8
  int32_t v18; // w0
  int32_t v19; // w27
  System_Int32_array *TargetIds; // x25
  bool exists; // w26
  BattleLogicSkill_o *logicskill; // x27
  const MethodInfo *v23; // x7
  BattleLogicTask_o *v24; // x22
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x3
  BattleLogic_o *logic; // x22
  DeadServantAiTask_o *v28; // x23
  System_Collections_Generic_IEnumerable_T__o *DeadActionTask; // x0
  __int64 v31; // x0

  if ( (byte_4354FDE & 1) == 0 )
  {
    sub_B70694(&BattleLogicTask_TypeInfo);
    sub_B70694(&BattleSkillInfoData_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B70694(&DeadServantAiTask_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4354FDE = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_36;
  ServantData = BattleData__getServantData((BattleData_o *)data, uniqueId, 0LL);
  data = BattleLogicReaction__CheckExecutableDead((BattleLogicReaction_o *)ServantData, ServantData, v9);
  if ( (data & 1) != 0 )
  {
    if ( ServantData )
    {
      DeadBufflist = BattleServantData__getDeadBufflist(ServantData, this->fields.data, 0, 0LL);
      data = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( data )
      {
        data = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)data,
                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BuffMaster___);
        if ( DeadBufflist )
        {
          max_length = DeadBufflist->max_length;
          if ( max_length >= 1 )
          {
            v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)data;
            v13 = 0;
            while ( v13 < max_length )
            {
              v14 = DeadBufflist->m_Items[v13];
              if ( !v14 )
                goto LABEL_36;
              if ( !v12 )
                goto LABEL_36;
              DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                v12,
                v14->fields.buffId,
                (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
              v15 = (BattleSkillInfoData_o *)sub_B70764(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v15, 0LL);
              if ( !v15 )
                goto LABEL_36;
              v15->fields.svtUniqueId = ServantData->fields.uniqueId;
              vals = v14->fields.vals;
              if ( !vals )
                goto LABEL_36;
              if ( !vals->max_length )
                break;
              data = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v15->klass->vtable._4_set_skillId.method)(
                       v15,
                       (unsigned int)vals->m_Items[1],
                       v15->klass->vtable._5_get_skillId.methodPtr);
              v17 = v14->fields.vals;
              if ( !v17 )
                goto LABEL_36;
              if ( v17->max_length <= 1 )
                break;
              v15->fields.skilllv = v17->m_Items[2];
              v18 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v14, 0LL);
              if ( (v18 & 0x80000000) != 0 )
              {
                TargetIds = Target__getTargetIds(
                              this->fields.data,
                              v15->fields.svtUniqueId,
                              -1,
                              v15->fields.svtUniqueId,
                              13,
                              0LL,
                              0LL);
                exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v15, 0LL);
              }
              else
              {
                v19 = v18;
                data = sub_B706AC(int___TypeInfo, 1LL);
                if ( !data )
                  goto LABEL_36;
                TargetIds = (System_Int32_array *)data;
                if ( !*(_DWORD *)(data + 24) )
                  break;
                exists = 0;
                *(_DWORD *)(data + 32) = v19;
              }
              logicskill = this->fields.logicskill;
              data = sub_B706AC(int___TypeInfo, 1LL);
              if ( !data )
                goto LABEL_36;
              if ( !*(_DWORD *)(data + 24) )
                break;
              *(_DWORD *)(data + 32) = ServantData->fields.uniqueId;
              if ( !logicskill )
                goto LABEL_36;
              data = (__int64)BattleLogicSkill__taskSkill(
                                logicskill,
                                v15,
                                (System_Int32_array *)data,
                                TargetIds,
                                0,
                                exists,
                                0,
                                v23);
              if ( !v5 )
                goto LABEL_36;
              System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
                (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v5,
                (System_Collections_Generic_IEnumerable_T__o *)data,
                (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              max_length = DeadBufflist->max_length;
              if ( (int)++v13 >= max_length )
                goto LABEL_28;
            }
            v31 = sub_B70798(data);
            sub_B70738(v31, 0LL);
          }
LABEL_28:
          data = (__int64)ServantData->fields.buffData;
          if ( data )
          {
            BattleBuffData__usedProgressing((BattleBuffData_o *)data, 0LL);
            v24 = (BattleLogicTask_o *)sub_B70764(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v24, v25);
            if ( v24 )
            {
              v24->fields.actiontype = 15;
              BattleLogicTask__setActor(v24, 3, ServantData->fields.uniqueId, v26);
              if ( v5 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v5,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
                  (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                logic = this->fields.logic;
                v28 = (DeadServantAiTask_o *)sub_B70764(DeadServantAiTask_TypeInfo);
                DeadServantAiTask___ctor(v28, ServantData, logic, 0LL);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v5,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
                  (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                data = (__int64)this->fields.logicfieldai;
                if ( data )
                {
                  DeadActionTask = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicFieldAi__createDeadActionTask(
                                                                                    (BattleLogicFieldAi_o *)data,
                                                                                    0LL);
                  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
                    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v5,
                    DeadActionTask,
                    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
                }
              }
            }
          }
        }
      }
    }
LABEL_36:
    sub_B7076C(data, v6);
  }
  if ( !ServantData )
    goto LABEL_36;
  ServantData->fields.status = 0;
  if ( !v5 )
    goto LABEL_36;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__createTaskGuts(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  __int64 v6; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v8; // x21
  BattleBuffData_BuffData_array *v9; // x22
  _QWORD **v10; // x23
  __int64 v11; // x22
  __int16 v12; // w8
  __int64 v13; // x22
  __int64 v14; // x22
  __int64 v15; // x22
  int max_length; // w8
  unsigned int v17; // w27
  BattleBuffData_BuffData_o *v18; // x24
  BattleSkillInfoData_o *v19; // x23
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v21; // x8
  int32_t v22; // w0
  int32_t v23; // w26
  System_Int32_array *TargetIds; // x24
  bool exists; // w25
  BattleLogicSkill_o *logicskill; // x26
  const MethodInfo *v27; // x7
  System_Collections_Generic_IEnumerable_T__o *v28; // x23
  __int64 v30; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4354FDF & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Empty_BattleBuffData_BuffData___);
    sub_B70694(&BattleSkillInfoData_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4354FDF = 1;
  }
  isFirstAdd = 0;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_42;
  data = (BattleData_o *)BattleData__getServantData(data, uniqueId, 0LL);
  if ( !data )
    goto LABEL_42;
  v8 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__getGutsBufflist((BattleServantData_o *)data, this->fields.data, 0LL);
  if ( data )
  {
    v9 = (BattleBuffData_BuffData_array *)data;
    isFirstAdd = 1;
  }
  else
  {
    v10 = (_QWORD **)Method_System_Array_Empty_BattleBuffData_BuffData___;
    v11 = **((_QWORD **)Method_System_Array_Empty_BattleBuffData_BuffData___ + 6);
    v12 = *(_WORD *)(v11 + 306);
    if ( (v12 & 1) == 0 )
    {
      data = (BattleData_o *)sub_B08394(**((_QWORD **)Method_System_Array_Empty_BattleBuffData_BuffData___ + 6));
      v12 = *(_WORD *)(v11 + 306);
    }
    if ( (v12 & 0x400) != 0 )
    {
      v13 = *v10[6];
      if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
        data = (BattleData_o *)sub_B08394(*v10[6]);
      if ( !*(_DWORD *)(v13 + 224) )
      {
        v14 = *v10[6];
        if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
          sub_B08394(*v10[6]);
        j_il2cpp_runtime_class_init_0(v14);
      }
    }
    v15 = *v10[6];
    if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
      data = (BattleData_o *)sub_B08394(*v10[6]);
    v9 = **(BattleBuffData_BuffData_array ***)(v15 + 184);
    isFirstAdd = 1;
    if ( !v9 )
      goto LABEL_42;
  }
  max_length = v9->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( v17 < max_length )
    {
      v18 = v9->m_Items[v17];
      v19 = (BattleSkillInfoData_o *)sub_B70764(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v19, 0LL);
      if ( !v19 )
        goto LABEL_42;
      v19->fields.svtUniqueId = v8->fields.uniqueId;
      if ( !v18 )
        goto LABEL_42;
      vals = v18->fields.vals;
      if ( !vals )
        goto LABEL_42;
      if ( !vals->max_length )
        break;
      data = (BattleData_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v19->klass->vtable._4_set_skillId.method)(
                               v19,
                               (unsigned int)vals->m_Items[1],
                               v19->klass->vtable._5_get_skillId.methodPtr);
      v21 = v18->fields.vals;
      if ( !v21 )
        goto LABEL_42;
      if ( v21->max_length <= 1 )
        break;
      v19->fields.skilllv = v21->m_Items[2];
      v22 = BattleServantData__GetRevengeIdCheckOpponentOnly(v8, v18, 0LL);
      if ( (v22 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(
                      this->fields.data,
                      v19->fields.svtUniqueId,
                      -1,
                      v19->fields.svtUniqueId,
                      13,
                      0LL,
                      0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v19, 0LL);
      }
      else
      {
        v23 = v22;
        data = (BattleData_o *)sub_B706AC(int___TypeInfo, 1LL);
        if ( !data )
          goto LABEL_42;
        TargetIds = (System_Int32_array *)data;
        if ( !LODWORD(data->fields.rootfsm) )
          break;
        exists = 0;
        LODWORD(data->fields.fsm) = v23;
      }
      logicskill = this->fields.logicskill;
      data = (BattleData_o *)sub_B706AC(int___TypeInfo, 1LL);
      if ( !data )
        goto LABEL_42;
      if ( !LODWORD(data->fields.rootfsm) )
        break;
      LODWORD(data->fields.fsm) = v8->fields.uniqueId;
      if ( !logicskill )
        goto LABEL_42;
      data = (BattleData_o *)BattleLogicSkill__taskSkill(
                               logicskill,
                               v19,
                               (System_Int32_array *)data,
                               TargetIds,
                               1,
                               exists,
                               0,
                               v27);
      if ( !this->fields.logic )
        goto LABEL_42;
      v28 = (System_Collections_Generic_IEnumerable_T__o *)data;
      BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
        this->fields.logic,
        &isFirstAdd,
        v8,
        v9,
        (BattleLogicTask_array *)data,
        0LL);
      if ( !v5 )
        goto LABEL_42;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v5,
        v28,
        (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      max_length = v9->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_39;
    }
    v30 = sub_B70798(data);
    sub_B70738(v30, 0LL);
  }
LABEL_39:
  data = (BattleData_o *)this->fields.logic;
  if ( !data
    || (BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
          (BattleLogic_o *)data,
          (System_Collections_Generic_List_BattleLogicTask__o *)v5,
          1,
          0LL),
        !v5) )
  {
LABEL_42:
    sub_B7076C(data, v6);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicReaction__createTaskProcBuffDead(
        BattleLogicReaction_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x21
  BattleLogicTask_o *v9; // x20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4354FDD & 1) == 0 )
  {
    sub_B70694(&BattleLogicTask_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4354FDD = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data
    || (ServantData = BattleData__getServantData(data, uniqueId, 0LL),
        v9 = (BattleLogicTask_o *)sub_B70764(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v9, v10),
        !v9)
    || (v9->fields.actiontype = 16, !ServantData)
    || (BattleLogicTask__setActor(v9, 3, ServantData->fields.uniqueId, v11), !v5) )
  {
    sub_B7076C(data, v6);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v5,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleServantData__ResultDamage(v5, v6, 0LL, 0LL, 0LL, 0, 0LL);
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
    sub_B7076C(this, task);
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

  if ( (byte_4354FEB & 1) == 0 )
  {
    this = (BattleLogicReaction_o *)sub_B70694(&BattleLogicTask_TypeInfo);
    byte_4354FEB = 1;
  }
  if ( !svtData
    || (svtData->fields.status = 4,
        v5 = (BattleLogicTask_o *)sub_B70764(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v5, v6),
        !v5) )
  {
    sub_B7076C(this, svtData);
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
    || (BattleData__SubBuffFromPT_19008056(data, svtData, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL) )
  {
    sub_B7076C(data, svtData);
  }
  BattleLogic__updateFieldBuff((BattleLogic_o *)data, 0LL);
}